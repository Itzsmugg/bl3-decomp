// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140fd4890 FUN_140fd4890 body=963 status=ok
// SIG undefined FUN_140fd4890(void)

void FUN_140fd4890(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong local_res8;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_30 = 0xf;
  local_38 = (longlong *)0x0;
  local_res8 = param_1;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"gotoParentHint",0x1e);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  lVar1 = FUN_140f139f0(param_1,&local_38,0,6,&local_48);
  plVar4 = local_48;
  for (iVar3 = (int)local_40; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (lVar1 != 0) {
    local_20 = 0;
    local_28 = lVar1;
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_20 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    FUN_142ecff00(param_1,&local_28,DAT_146873410);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"crosshairHint",0x1c);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  lVar1 = FUN_140f139f0(param_1,&local_48,0,6,&local_38);
  plVar4 = local_38;
  for (iVar3 = (int)local_30; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (lVar1 != 0) {
    local_20 = 0;
    local_28 = lVar1;
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_20 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    FUN_142ecff00(param_1,&local_28,DAT_146b3e2a0);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0x1d;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"primaryHintWrapper.panelHint",0x3a);
  FUN_140fa7830(&local_res8,&local_38,&DAT_146873428,*(undefined8 *)(param_1 + 0x8d0));
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8d0) != 0) {
    local_48 = (longlong *)0x0;
    local_40 = 0x23;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"secondaryHintWrapperLeft.panelHint",0x46);
    local_38 = (longlong *)0x0;
    local_30 = 0;
    lVar1 = FUN_140ecba50(*(undefined8 *)(param_1 + 0x8d0),&local_48,0,6,&local_38);
    plVar4 = local_38;
    for (iVar3 = (int)local_30; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (lVar1 != 0) {
      local_20 = 0;
      local_28 = lVar1;
      uVar2 = UBlendableInterface::GetPrivateStaticClass();
      local_20 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
      FUN_142ecff00(param_1,&local_28,DAT_146873228);
    }
    local_48 = (longlong *)0x0;
    local_40 = 0x24;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"secondaryHintWrapperRight.panelHint",0x48);
    local_38 = (longlong *)0x0;
    local_30 = 0;
    lVar1 = FUN_140ecba50(*(undefined8 *)(param_1 + 0x8d0),&local_48,0,6,&local_38);
    plVar4 = local_38;
    for (iVar3 = (int)local_30; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (lVar1 != 0) {
      local_20 = 0;
      local_28 = lVar1;
      uVar2 = UBlendableInterface::GetPrivateStaticClass();
      local_20 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
      FUN_142ecff00(param_1,&local_28,DAT_146873230);
    }
  }
  return;
}



// FUNCTION 140fd4c60 FUN_140fd4c60 body=137 status=ok
// SIG undefined FUN_140fd4c60(void)

void FUN_140fd4c60(undefined8 param_1)

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
  local_58[0] = &LAB_140faed10;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 140fd4cf0 FUN_140fd4cf0 body=649 status=ok
// SIG undefined FUN_140fd4cf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fd4cf0(longlong *param_1,char param_2)

{
  code *pcVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  code *pcVar7;
  undefined1 auStack_2e8 [32];
  code *local_2c8;
  undefined8 uStack_2c0;
  code *local_2b8;
  undefined4 uStack_2b0;
  uint uStack_2ac;
  code *local_2a8;
  longlong lStack_2a0;
  undefined1 local_298 [624];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  uVar4 = (**(code **)(*param_1 + 0x148))();
  lVar5 = FUN_140c12480(uVar4);
  if ((lVar5 != 0) && (lVar5 = FARSupportInterface::GetXRTrackingSystem(lVar5), lVar5 != 0)) {
    if (param_2 == '\0') {
      FUN_1407665e0(lVar5 + 0x48,param_1);
      FUN_1407665e0(lVar5 + 0x28,param_1);
      local_2c8 = (code *)0x0;
      uStack_2c0 = 0;
      FUN_1411e0e30(lVar5,&local_2c8);
      pcVar1 = local_2c8 + (longlong)(int)uStack_2c0 * 8;
      for (pcVar7 = local_2c8; pcVar7 != pcVar1; pcVar7 = pcVar7 + 8) {
        lVar5 = FWeakObjectPtr::Get(pcVar7);
        if (lVar5 != 0) {
          FUN_1412b1120(local_298,lVar5);
          local_2b8 = (code *)local_298;
          FUN_140f9e970(param_1 + 0x19c,&local_2b8);
          FUN_140fa04a0(local_298);
        }
      }
    }
    else {
      local_2c8 = FUN_140fc0ef0;
      uStack_2c0 = (ulonglong)uStack_2c0._4_4_ << 0x20;
      local_2a8 = FUN_140fc0ef0;
      lStack_2a0 = uStack_2c0;
      pwVar6 = _guard_xfg_dispatch_icall_nop
                         (L"&ThisClass::OnMinimapIconComponentBeginTracking",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_2b8,pwVar3 + 2,1);
      FUN_1407260e0(lVar5 + 0x28,param_1,&local_2a8,local_2b8);
      uStack_2b0 = 0;
      local_2b8 = FUN_140fc1000;
      lStack_2a0 = (ulonglong)uStack_2ac << 0x20;
      local_2a8 = FUN_140fc1000;
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMinimapIconComponentEndTracking",L"::")
      ;
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_2b8,pwVar3 + 2,1);
      FUN_1407260e0(lVar5 + 0x48,param_1,&local_2a8,local_2b8);
      local_2c8 = (code *)0x0;
      uStack_2c0 = 0;
      FUN_1411e0e30(lVar5,&local_2c8);
      pcVar1 = local_2c8 + (longlong)(int)uStack_2c0 * 8;
      for (pcVar7 = local_2c8; pcVar7 != pcVar1; pcVar7 = pcVar7 + 8) {
        uVar4 = FWeakObjectPtr::Get(pcVar7);
        FUN_140fc0ef0(param_1,uVar4);
      }
    }
    if (local_2c8 != (code *)0x0) {
      FMemory::Free(local_2c8);
    }
  }
  return;
}



// FUNCTION 140fd4f80 FUN_140fd4f80 body=149 status=ok
// SIG undefined FUN_140fd4f80(void)

void FUN_140fd4f80(undefined8 param_1,undefined1 param_2)

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
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605cc8;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
    *(undefined1 *)(puVar1 + 3) = param_2;
  }
  local_58[0] = &LAB_140faef00;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 140fd5020 FUN_140fd5020 body=137 status=ok
// SIG undefined FUN_140fd5020(void)

void FUN_140fd5020(undefined8 param_1)

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
  local_58[0] = &LAB_140faee80;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 140fd50b0 FUN_140fd50b0 body=267 status=ok
// SIG undefined FUN_140fd50b0(void)

void FUN_140fd50b0(longlong *param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468734b0) {
    _Init_thread_header(&DAT_1468734b0);
    if (DAT_1468734b0 == -1) {
      FName::FName(&DAT_1468734a8,L"Cancel",1);
      _Init_thread_footer(&DAT_1468734b0);
    }
  }
  local_68 = (longlong *)0x0;
  uStack_60 = 0;
  (**(code **)(*param_1 + 0x4e8))(param_1,DAT_1468734a8,&local_68);
  uStack_60 = CONCAT71(uStack_60._1_7_,param_2);
  local_28 = 0;
  local_18 = 0;
  local_68 = param_1;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar1 + 1) = (undefined4)local_68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = local_68._4_4_;
    *(undefined4 *)(puVar1 + 2) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_60._4_4_;
  }
  local_58[0] = &LAB_140fae960;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 140fd51c0 FUN_140fd51c0 body=422 status=ok
// SIG undefined FUN_140fd51c0(void)

void FUN_140fd51c0(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  if (param_3 != 0) {
    lVar6 = *param_1 + 0x1d0 + (longlong)param_2 * 0x270;
    iVar7 = param_3;
    do {
      if (*(longlong *)(lVar6 + 0x20) != 0) {
        FMemory::Free();
      }
      TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
      ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(lVar6);
      FUN_140bff340(lVar6 + -0x68);
      FUN_140c64420(lVar6 + -0x78);
      if (*(longlong *)(lVar6 + -200) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar6 + -0x128) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar6 + -0x148) != 0) {
        FMemory::Free();
      }
      plVar3 = *(longlong **)(lVar6 + -0x158);
      if (plVar3 != (longlong *)0x0) {
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
      plVar3 = *(longlong **)(lVar6 + -0x170);
      if (plVar3 != (longlong *)0x0) {
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
      lVar6 = lVar6 + 0x270;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar7 = (int)param_1[1];
    iVar5 = (iVar7 - param_2) - param_3;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x270),
                 (void *)((longlong)(param_2 + param_3) * 0x270 + *param_1),(longlong)iVar5 * 0x270)
      ;
      iVar7 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar7 - param_3;
    if (param_4 != '\0') {
      FUN_140fd5890(param_1);
    }
  }
  return;
}



// FUNCTION 140fd5370 FUN_140fd5370 body=335 status=ok
// SIG undefined FUN_140fd5370(void)

void FUN_140fd5370(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if (*(longlong *)(param_1 + 0x910) == 0) {
    *(undefined8 *)(param_1 + 0xd58) = 0xffffffffffffffff;
    return;
  }
  iVar5 = 0;
  iVar2 = FUN_142eb7440();
  if (iVar2 < 1) {
    *(undefined8 *)(param_1 + 0xd58) = 0xffffffffffffffff;
    return;
  }
  do {
    lVar3 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x910),iVar5);
    if (lVar3 != 0) {
      lVar4 = FUN_141369c80();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (lVar4 = *(longlong *)(lVar3 + 0x358), lVar4 != 0)) {
        iVar2 = *(int *)(param_1 + 0xd78);
        *(int *)(param_1 + 0xd78) = iVar2 + 1;
        if (*(int *)(param_1 + 0xd7c) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xd70,iVar2);
        }
        *(longlong *)(*(longlong *)(param_1 + 0xd70) + (longlong)iVar2 * 8) = lVar4;
        *(undefined8 *)(lVar3 + 0x358) = 0;
      }
    }
    iVar5 = iVar5 + 1;
    iVar2 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x910));
  } while (iVar5 < iVar2);
  *(undefined8 *)(param_1 + 0xd58) = 0xffffffffffffffff;
  return;
}



// FUNCTION 140fd54c0 FUN_140fd54c0 body=167 status=ok
// SIG undefined FUN_140fd54c0(void)

void FUN_140fd54c0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *local_138 [2];
  undefined1 local_128 [32];
  undefined8 local_108;
  undefined4 local_f8;
  undefined8 local_e8;
  undefined1 local_d8 [8];
  longlong local_d0;
  longlong local_18;
  
  local_e8 = param_1;
  FUN_140f9f450(local_d8);
  local_108 = 0;
  local_f8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0xf0,local_128);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144648798;
    puVar1[2] = local_e8;
    FUN_140f9f2f0(puVar1 + 4,local_d8);
  }
  local_138[0] = &LAB_140faebb0;
  FUN_14208c4f0(param_1,local_138);
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (local_d0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140fd5570 FUN_140fd5570 body=23 status=ok
// SIG undefined FUN_140fd5570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140fd5570(longlong param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(char *)(param_1 + 0x1a4) == '\0') || (*(char *)(param_1 + 0x1a5) != '\0')) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x1a0);
  if ((iVar1 < 0) || (*(int *)(param_1 + 0x198) <= iVar1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    FUN_140fd9520(param_1,(longlong)iVar1 * 0xd0 + *(longlong *)(param_1 + 400));
    *(int *)(param_1 + 0x1a0) = *(int *)(param_1 + 0x1a0) + 1;
    if (((*(int *)(param_1 + 0x178) == 0) || (*(longlong **)(param_1 + 0x170) == (longlong *)0x0))
       || (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x170) + 0x18))(), cVar3 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return;
    }
    if (*(int *)(param_1 + 0x178) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140fae79b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x170) + 0x40))();
      return;
    }
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x38);
    if (lVar5 != 0) {
      lVar4 = UInputKeySelector::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && (lVar5 = FUN_140e971d0(lVar5), lVar5 != 0)) &&
         (lVar5 = FUN_140cff230(lVar5), lVar5 != 0)) {
        FUN_140d4cc50(lVar5,param_1 + 0x1e0,1);
      }
    }
    FUN_140fb3220();
    if (((*(int *)(param_1 + 0x188) == 0) || (*(longlong **)(param_1 + 0x180) == (longlong *)0x0))
       || (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x18))(), cVar3 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return;
    }
    if (*(int *)(param_1 + 0x188) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140fae85d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x180) + 0x40))();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140fae86b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_00000000 + 0x40))();
  return;
}



// FUNCTION 140fd5590 FUN_140fd5590 body=78 status=ok
// SIG undefined FUN_140fd5590(void)

void FUN_140fd5590(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_18 [16];
  
  uVar1 = FUN_140fd5940(param_1,local_18,*(undefined4 *)(param_1 + 0x72c),
                        *(undefined4 *)(param_1 + 0x738));
  FUN_140fa0f30(param_1 + 0x740,uVar1);
  TArray<FCompositeSubFont,FDefaultAllocator>::~TArray<FCompositeSubFont,FDefaultAllocator>
            (local_18);
  *(undefined1 *)(param_1 + 0x750) = 1;
  FUN_140fd3460(param_1);
  return;
}



// FUNCTION 140fd55e0 FUN_140fd55e0 body=154 status=ok
// SIG undefined FUN_140fd55e0(void)

void FUN_140fd55e0(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = (int)param_1[1];
  if (iVar1 < param_2) {
    if (iVar2 != 0) {
      plVar3 = (longlong *)(*param_1 + 8);
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 0xc;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1,param_2);
    }
  }
  else {
    if (iVar2 != 0) {
      plVar3 = (longlong *)(*param_1 + 8);
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 0xc;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 140fd5680 FUN_140fd5680 body=94 status=ok
// SIG undefined FUN_140fd5680(void)

void FUN_140fd5680(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    *(undefined1 *)(param_1 + 0x30) = 0;
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
  }
  return;
}



// FUNCTION 140fd56e0 FUN_140fd56e0 body=140 status=ok
// SIG undefined FUN_140fd56e0(void)

void FUN_140fd56e0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x60,0);
  iVar4 = (int)(uVar3 / 0x60);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x60,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 140fd5770 FUN_140fd5770 body=116 status=ok
// SIG undefined FUN_140fd5770(void)

void FUN_140fd5770(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar4 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
  }
  uVar3 = FMemory::QuantizeSize(lVar4 << 5,0);
  iVar2 = (int)(uVar3 >> 5);
  if (iVar2 < (int)uVar1) {
    iVar2 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  if ((*param_1 != 0) || (iVar2 != 0)) {
    lVar4 = FMemory::Realloc(*param_1,(longlong)iVar2 << 5,0);
    *param_1 = lVar4;
  }
  return;
}



// FUNCTION 140fd57f0 ResizeGrow body=151 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<624,16>_>,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

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
  uVar4 = FMemory::QuantizeSize(lVar3 * 0x270,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0xa41a41a41a41a41b) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 9);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x270,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 140fd5890 FUN_140fd5890 body=171 status=ok
// SIG undefined FUN_140fd5890(void)

ulonglong FUN_140fd5890(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)((longlong)param_1 + 0xc);
  iVar5 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar6 - iVar5);
  if ((0x3fff < uVar2 * 0x270) || (uVar2 = (ulonglong)(uint)(iVar6 * 2), iVar5 * 3 < iVar6 * 2)) {
    if (0x40 < (uint)(iVar6 - iVar5)) {
      if (0 < iVar5) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar5 * 0x270,0);
        iVar6 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        lVar4 = SUB168(ZEXT816(0xa41a41a41a41a41b) * auVar1,8);
        uVar2 = SUB168(ZEXT816(0xa41a41a41a41a41b) * auVar1,0);
        iVar5 = (int)((uVar3 - lVar4 >> 1) + lVar4 >> 9);
      }
      goto LAB_140fd590a;
    }
    if (iVar5 == 0) goto LAB_140fd590a;
  }
  iVar5 = iVar6;
LAB_140fd590a:
  if (iVar5 != iVar6) {
    *(int *)((longlong)param_1 + 0xc) = iVar5;
    if ((*param_1 != 0) || (iVar5 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x270,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 140fd5940 FUN_140fd5940 body=203 status=ok
// SIG undefined FUN_140fd5940(void)

undefined8 *
FUN_140fd5940(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_18 [16];
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
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
      lVar2 = FUN_140f9afa0(lVar2);
      if (lVar2 != 0) {
        uVar4 = FUN_140c54d80(lVar2,local_18,param_3,param_4,0);
        FUN_140fa0f30(param_2,uVar4);
        TArray<FCompositeSubFont,FDefaultAllocator>::~TArray<FCompositeSubFont,FDefaultAllocator>
                  (local_18);
      }
    }
  }
  return param_2;
}



// FUNCTION 140fd5a10 FUN_140fd5a10 body=116 status=ok
// SIG undefined FUN_140fd5a10(void)

void FUN_140fd5a10(longlong param_1,char param_2)

{
  longlong local_18 [2];
  
  *(char *)(param_1 + 0x338) = param_2;
  if (param_2 != '\0') {
    FUN_142ecf920(param_1,0);
    return;
  }
  local_18[1] = 5;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"over",10);
  FUN_142088910(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140fd5a90 FUN_140fd5a90 body=42 status=ok
// SIG undefined FUN_140fd5a90(void)

void FUN_140fd5a90(undefined8 param_1,undefined1 param_2)

{
  FUN_140a678a0();
  FUN_140fd3cf0(param_1,param_2);
  return;
}



// FUNCTION 140fd5ac0 FUN_140fd5ac0 body=1230 status=ok
// SIG undefined FUN_140fd5ac0(void)

undefined1 * FUN_140fd5ac0(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  short *psVar11;
  longlong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  longlong local_b8 [12];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  
  if ((param_2 == (char)param_1[0x54]) || (param_1[0x2e] == 0)) {
    return &stack0x00000000;
  }
  bVar5 = false;
  bVar4 = false;
  uVar6 = 1;
  *(char *)(param_1 + 0x54) = param_2;
  switch(param_2) {
  case '\x01':
    local_b8[0] = 0;
    local_b8[1] = 0x11;
    uVar6 = 0;
    bVar5 = false;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8,0);
    FGenericPlatformString::Memcpy(local_b8[0],L"location_nonzone",0x22);
    FUN_142088cf0(param_1[0x2e],local_b8);
    if (local_b8[0] != 0) {
      FMemory::Free();
    }
    break;
  case '\x02':
    pwVar10 = L"location_nonzone";
    local_d0 = 0;
    if (*(char *)((longlong)param_1 + 0x2a1) != '\0') {
      pwVar10 = L"location";
    }
    local_d8 = 0;
    if (*pwVar10 != L'\0') {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (pwVar10[lVar8] != L'\0');
      uVar7 = (int)lVar8 + 1;
      local_d0 = (ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
      }
      FGenericPlatformString::Memcpy(local_d8,pwVar10,(longlong)(int)uVar7 * 2);
    }
    FUN_142088cf0(param_1[0x2e],&local_d8);
    lVar8 = local_d8;
    bVar4 = false;
    goto LAB_140fd5d47;
  case '\x03':
    local_b8[4] = 0;
    local_b8[5] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 4,0);
    FGenericPlatformString::Memcpy(local_b8[4],L"challenge",0x14);
    FUN_142088cf0(param_1[0x2e],local_b8 + 4);
    lVar8 = local_b8[4];
    goto LAB_140fd5cae;
  case '\x04':
    local_b8[6] = 0;
    local_b8[7] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 6,0);
    FGenericPlatformString::Memcpy(local_b8[6],L"mission",0x10);
    FUN_142088cf0(param_1[0x2e],local_b8 + 6);
    lVar8 = local_b8[6];
LAB_140fd5cae:
    if (lVar8 != 0) {
      FMemory::Free();
    }
    bVar5 = false;
    break;
  case '\x05':
  case '\x06':
    local_b8[8] = 0;
    local_b8[9] = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 8,0);
    FGenericPlatformString::Memcpy(local_b8[8],L"location_nonzone",0x22);
    FUN_142088cf0(param_1[0x2e],local_b8 + 8);
    lVar8 = local_b8[8];
    bVar4 = true;
LAB_140fd5d47:
    if (lVar8 != 0) {
      FMemory::Free();
    }
    bVar5 = true;
    break;
  case '\a':
    local_b8[2] = 0;
    local_b8[3] = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 2,0);
    FGenericPlatformString::Memcpy(local_b8[2],L"location_nonzone",0x22);
    FUN_142088cf0(param_1[0x2e],local_b8 + 2);
    if (local_b8[2] != 0) {
      FMemory::Free();
    }
  }
  (**(code **)(*param_1 + 0x278))(param_1,uVar6);
  if ((param_1[0x44] != 0) && (*(char *)(param_1[0x44] + 0x898) != '\0')) {
    bVar4 = false;
    bVar5 = false;
  }
  *(undefined1 *)((longlong)param_1 + 0x2a2) = 0;
  if (!bVar4) {
    if (bVar5) {
      return (undefined1 *)0x1;
    }
    local_b8[10] = 0;
    local_b8[0xb] = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b8 + 10,0);
    FGenericPlatformString::Memcpy(local_b8[10],&DAT_144640ea0,8);
    FUN_142088cf0(param_1[0x36],local_b8 + 10);
    if (local_b8[10] == 0) {
      return (undefined1 *)0x1;
    }
    FMemory::Free();
    return (undefined1 *)0x1;
  }
  if (param_1[0x37] == 0) {
    return (undefined1 *)0x1;
  }
  if (param_1[0x36] == 0) {
    return (undefined1 *)0x1;
  }
  *(undefined1 *)((longlong)param_1 + 0x2a2) = 1;
  local_c8 = 0;
  psVar11 = &DAT_144640db0;
  local_c0 = 0;
  if (bVar5) {
    psVar11 = &DAT_14463f0c4;
  }
  if (*psVar11 != 0) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (psVar11[lVar8] != 0);
    uVar7 = (int)lVar8 + 1;
    local_c0 = (ulonglong)uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
    }
    FGenericPlatformString::Memcpy(local_c8,psVar11,(longlong)(int)uVar7 * 2);
  }
  FUN_142088cf0(param_1[0x36],&local_c8);
  if (local_c8 != 0) {
    FMemory::Free();
  }
  if ((char)param_1[0x54] == '\x05') {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"View Planet",L"GFxMapMenu",L"ViewPlanet");
    FText::operator=(param_1 + 0x57,uVar6);
    plVar9 = local_50;
  }
  else {
    if ((char)param_1[0x54] != '\x06') goto LAB_140fd5ed8;
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"View Zone",L"GFxMapMenu",L"ViewZone");
    FText::operator=(param_1 + 0x57,uVar6);
    plVar9 = local_38;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
LAB_140fd5ed8:
  (**(code **)(*(longlong *)(param_1[0x37] + 0x308) + 0x20))
            ((longlong *)(param_1[0x37] + 0x308),param_1 + 0x55,0);
  FUN_142ed5bf0(param_1[0x37],0);
  return (undefined1 *)0x1;
}



// FUNCTION 140fd5fb0 FUN_140fd5fb0 body=550 status=ok
// SIG undefined FUN_140fd5fb0(void)

void FUN_140fd5fb0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  void *pvVar1;
  longlong *plVar2;
  longlong lVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *local_48;
  int local_40;
  int local_3c;
  void *local_38;
  int local_30;
  int local_2c;
  
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      if (*(char *)(param_2 + 0x49) == '\0') {
        FUN_142088cf0(*(longlong *)(param_1 + 0xa0),param_2 + 0x30);
      }
      else {
        local_30 = *(int *)(param_2 + 0x38);
        lVar3 = (longlong)local_30;
        pvVar4 = (void *)0x0;
        iVar5 = *(int *)(param_3 + 1);
        if (iVar5 < 2) {
          pvVar4 = *(void **)(param_2 + 0x30);
          local_38 = (void *)0x0;
          if (local_30 == 0) {
            local_2c = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
            _guard_xfg_dispatch_icall_nop(local_38,pvVar4,lVar3 * 2);
          }
        }
        else {
          iVar7 = local_30 + -1;
          if (local_30 == 0) {
            iVar7 = 0;
          }
          if ((iVar5 != 0) || (iVar6 = 1, iVar7 == 0)) {
            iVar6 = 0;
          }
          pvVar1 = (void *)*param_3;
          local_48 = (void *)0x0;
          local_40 = iVar5;
          if ((iVar5 == 0) && (iVar7 + iVar6 == 0)) {
            local_3c = 0;
            iVar5 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar5 + iVar7 + iVar6,0);
            pvVar4 = local_48;
            _guard_xfg_dispatch_icall_nop(local_48,pvVar1,(longlong)iVar5 * 2);
            iVar5 = local_40;
          }
          pvVar1 = *(void **)(param_2 + 0x30);
          iVar8 = local_3c;
          iVar6 = iVar5;
          if (iVar7 != 0) {
            local_40 = iVar7 + (uint)(iVar5 == 0) + iVar5;
            if (local_3c < local_40) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar5);
              pvVar4 = local_48;
            }
            iVar8 = local_3c;
            iVar6 = local_40;
            pvVar4 = (void *)((longlong)pvVar4 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar4,pvVar1,(longlong)iVar7 * 2);
            *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar4) = 0;
          }
          local_38 = local_48;
          local_30 = iVar6;
          local_2c = iVar8;
        }
        FUN_142088cf0(*(undefined8 *)(param_1 + 0xa0),&local_38);
        if (local_38 != (void *)0x0) {
          FMemory::Free();
        }
      }
    }
    *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x48);
    *(undefined1 *)(param_1 + 0x61) = *(undefined1 *)(param_2 + 0x4a);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 0x4c);
    plVar2 = (longlong *)FString::FString(&local_38,param_2 + 0x30);
    FString::operator=(param_1 + 0xc0,plVar2);
    if (*plVar2 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140fd61e0 FUN_140fd61e0 body=178 status=ok
// SIG undefined FUN_140fd61e0(void)

void FUN_140fd61e0(longlong param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  longlong local_18;
  ulonglong local_10;
  
  *(char *)(param_1 + 0x2a1) = param_2;
  pwVar3 = L"locationPreview";
  if (param_2 != '\0') {
    pwVar3 = L"hintPanel";
  }
  local_18 = 0;
  local_10 = 0;
  if (*pwVar3 != L'\0') {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (pwVar3[lVar2] != L'\0');
    uVar1 = (int)lVar2 + 1;
    local_10 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,pwVar3,(longlong)(int)uVar1 * 2);
  }
  FUN_142088cf0(param_1,&local_18);
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140fd62a0 FUN_140fd62a0 body=40 status=ok
// SIG undefined FUN_140fd62a0(void)

void FUN_140fd62a0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1410833d0();
  if (lVar1 != 0) {
    FUN_1411f9ae0(lVar1 + 0x6e0,0,0);
    return;
  }
  return;
}



// FUNCTION 140fd62d0 FUN_140fd62d0 body=183 status=ok
// SIG undefined FUN_140fd62d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fd62d0(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_68[0] = &LAB_140faebc0;
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



// FUNCTION 140fd6390 FUN_140fd6390 body=863 status=ok
// SIG undefined FUN_140fd6390(void)

void FUN_140fd6390(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong local_18 [2];
  
  plVar1 = *(longlong **)(param_1 + 0x170);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2,1,0);
  }
  plVar1 = *(longlong **)(param_1 + 0x180);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_3,1,0);
  }
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar4 < DAT_146873468) && (_Init_thread_header(&DAT_146873468), DAT_146873468 == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629eb48,0);
    FGenericPlatformString::Memcpy(DAT_14629eb48,L"zone",10);
    atexit((_func_5014 *)&LAB_143e5b230);
    _Init_thread_footer(&DAT_146873468);
  }
  if ((*piVar4 < DAT_14687346c) && (_Init_thread_header(&DAT_14687346c), DAT_14687346c == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629eb58,0);
    FGenericPlatformString::Memcpy(DAT_14629eb58,L"planet",0xe);
    atexit((_func_5014 *)&LAB_143e5b510);
    _Init_thread_footer(&DAT_14687346c);
  }
  if ((*piVar4 < DAT_146873470) && (_Init_thread_header(&DAT_146873470), DAT_146873470 == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629eb68,0);
    FGenericPlatformString::Memcpy(DAT_14629eb68,L"galaxy",0xe);
    atexit((_func_5014 *)&LAB_143e5b0d0);
    _Init_thread_footer(&DAT_146873470);
  }
  if (param_4 == '\x01') {
    if (*(longlong *)(param_1 + 400) != 0) {
      local_18[1] = 5;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"zone",10);
      FUN_142088cf0(*(undefined8 *)(param_1 + 400),local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0x178) != 0) {
      FUN_142088cf0(*(longlong *)(param_1 + 0x178),&DAT_14629eb48);
    }
    plVar1 = *(longlong **)(param_1 + 0x188);
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*plVar1 + 0x278))(plVar1,1);
    puVar3 = &DAT_14629eb58;
  }
  else {
    if (param_4 != '\x02') {
      if (param_4 != '\x03') {
        return;
      }
      if (*(longlong *)(param_1 + 400) != 0) {
        FUN_142088cf0(*(longlong *)(param_1 + 400),&DAT_14629eb68);
      }
      plVar1 = *(longlong **)(param_1 + 0x188);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x278))(plVar1,0);
      }
      lVar2 = *(longlong *)(param_1 + 0x178);
      if (lVar2 == 0) {
        return;
      }
      puVar3 = &DAT_14629eb68;
      goto LAB_140fd65c3;
    }
    if (*(longlong *)(param_1 + 400) != 0) {
      local_18[1] = 6;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"orbit",0xc);
      FUN_142088cf0(*(undefined8 *)(param_1 + 400),local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0x178) != 0) {
      FUN_142088cf0(*(longlong *)(param_1 + 0x178),&DAT_14629eb58);
    }
    plVar1 = *(longlong **)(param_1 + 0x188);
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*plVar1 + 0x278))(plVar1,1);
    puVar3 = &DAT_14629eb68;
  }
  lVar2 = *(longlong *)(param_1 + 0x188);
LAB_140fd65c3:
  FUN_142088cf0(lVar2,puVar3);
  return;
}



// FUNCTION 140fd66f0 FUN_140fd66f0 body=513 status=ok
// SIG undefined FUN_140fd66f0(void)

undefined4 FUN_140fd66f0(longlong param_1,char *param_2)

{
  undefined4 uVar1;
  longlong local_48 [8];
  
  if ((param_2[0x20] == '\0') && (*param_2 != '\0')) {
    if (*(longlong *)(param_1 + 0x908) != 0) {
      local_48[0] = 0;
      local_48[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_48[0],5,&DAT_1446383c4,5,0x3f);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x908),local_48);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      FUN_140fd6ec0(*(undefined8 *)(param_1 + 0x908),param_2);
    }
  }
  else if (*(longlong *)(param_1 + 0x908) != 0) {
    local_48[2] = 0;
    local_48[3] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48 + 2,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_48[2],5,&DAT_144638464,5,0x3f);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x908),local_48 + 2);
    if (local_48[2] != 0) {
      FMemory::Free();
    }
  }
  if ((param_2[0x20] == '\x01') && (*param_2 != '\0')) {
    if (*(longlong *)(param_1 + 0x910) != 0) {
      local_48[4] = 0;
      local_48[5] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48 + 4,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_48[4],5,&DAT_144638514,5,0x3f);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x910),local_48 + 4);
      if (local_48[4] != 0) {
        FMemory::Free();
      }
      FUN_140fd6ec0(*(undefined8 *)(param_1 + 0x910),param_2);
    }
  }
  else if (*(longlong *)(param_1 + 0x910) != 0) {
    local_48[6] = 0;
    local_48[7] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48 + 6,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_48[6],5,&DAT_144639214,5,0x3f);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x910),local_48 + 6);
    if (local_48[6] != 0) {
      FMemory::Free();
    }
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 140fd6900 FUN_140fd6900 body=77 status=ok
// SIG undefined FUN_140fd6900(void)

void FUN_140fd6900(longlong param_1,char param_2)

{
  longlong lVar1;
  
  FUN_142ed3c60();
  lVar1 = FUN_141083c60(param_1 + -0x4d8);
  if (lVar1 != 0) {
    if (param_2 != '\0') {
      FUN_1412c4890();
      return;
    }
    FUN_1412d2860(lVar1);
  }
  return;
}



// FUNCTION 140fd6950 FUN_140fd6950 body=1151 status=ok
// SIG undefined FUN_140fd6950(void)

void FUN_140fd6950(longlong param_1,char param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined2 in_stack_ffffffffffffff58;
  undefined1 uVar7;
  longlong local_98 [14];
  
  if (*(longlong *)(param_1 + 0x8d8) != 0) {
    iVar2 = FUN_142eb7440();
    uVar7 = (undefined1)((ushort)in_stack_ffffffffffffff58 >> 8);
    iVar5 = 0;
    iVar6 = -1;
    if (0 < iVar2) {
      do {
        lVar3 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x8d8),iVar5);
        if (lVar3 != 0) {
          lVar4 = URemnantGameInstance::GetPrivateStaticClass();
          uVar7 = (undefined1)((ushort)in_stack_ffffffffffffff58 >> 8);
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if ((bVar1) && (iVar6 = iVar5, *(char *)(lVar3 + 0x308) == param_2)) break;
        }
        uVar7 = (undefined1)((ushort)in_stack_ffffffffffffff58 >> 8);
        iVar5 = iVar5 + 1;
        iVar6 = -1;
      } while (iVar5 < iVar2);
    }
    (**(code **)(**(longlong **)(param_1 + 0x8d8) + 0x2b8))
              (*(longlong **)(param_1 + 0x8d8),iVar6,1,0);
    *(undefined1 *)(param_1 + 0xa52) = *(undefined1 *)(param_1 + 0xa51);
    *(char *)(param_1 + 0xa51) = param_2;
    if (param_2 == '\x01') {
      if (*(longlong *)(param_1 + 0x8c8) != 0) {
        local_98[0] = 0;
        local_98[1] = 10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98,0);
        FGenericPlatformString::Convert<char,wchar_t>(local_98[0],10,"tutorial1",10,0x3f);
        FUN_142088910(*(undefined8 *)(param_1 + 0x8c8),local_98);
        if (local_98[0] != 0) {
          FMemory::Free();
        }
      }
    }
    else if (param_2 == '\x02') {
      if (*(longlong *)(param_1 + 0x8c8) != 0) {
        local_98[2] = 0;
        local_98[3] = 10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98 + 2,0);
        FGenericPlatformString::Convert<char,wchar_t>(local_98[2],10,"tutorial2",10,0x3f);
        FUN_142088910(*(undefined8 *)(param_1 + 0x8c8),local_98 + 2);
        if (local_98[2] != 0) {
          FMemory::Free();
        }
      }
    }
    else if (param_2 == '\x03') {
      if (*(longlong *)(param_1 + 0x8c8) != 0) {
        local_98[4] = 0;
        local_98[5] = 10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98 + 4,0);
        FGenericPlatformString::Convert<char,wchar_t>(local_98[4],10,"tutorial3",10,0x3f);
        FUN_142088910(*(undefined8 *)(param_1 + 0x8c8),local_98 + 4);
        if (local_98[4] != 0) {
          FMemory::Free();
        }
      }
    }
    else if (param_2 == '\x04') {
      if (*(longlong *)(param_1 + 0x8c8) != 0) {
        local_98[6] = 0;
        local_98[7] = 10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98 + 6,0);
        FGenericPlatformString::Convert<char,wchar_t>(local_98[6],10,"tutorial4",10,0x3f);
        FUN_142088910(*(undefined8 *)(param_1 + 0x8c8),local_98 + 6);
        if (local_98[6] != 0) {
          FMemory::Free();
        }
      }
    }
    else if (param_2 == '\x05') {
      if (*(longlong *)(param_1 + 0x8c8) != 0) {
        local_98[8] = 0;
        local_98[9] = 10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98 + 8,0);
        FGenericPlatformString::Convert<char,wchar_t>(local_98[8],10,"tutorial5",10,0x3f);
        FUN_142088910(*(undefined8 *)(param_1 + 0x8c8),local_98 + 8);
        if (local_98[8] != 0) {
          FMemory::Free();
        }
      }
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x8d0);
      if (param_2 == '\x06') {
        FUN_140fb0f10(lVar3);
        LOCK();
        *(undefined4 *)(param_1 + 0x588) = 1;
        UNLOCK();
        if (*(longlong *)(param_1 + 0x8c8) != 0) {
          local_98[10] = 0;
          local_98[0xb] = 9;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98 + 10,0);
          FGenericPlatformString::Convert<char,wchar_t>(local_98[10],9,"progress",9,0x3f);
          FUN_142088910(*(undefined8 *)(param_1 + 0x8c8),local_98 + 10);
          if (local_98[10] != 0) {
            FMemory::Free();
          }
        }
      }
      else {
        if (*(char *)(lVar3 + 400) != '\x02') {
          *(undefined1 *)(lVar3 + 400) = 2;
          FUN_140fe0490(lVar3,lVar3 + 0x198,lVar3 + 0x1a8,*(undefined4 *)(lVar3 + 0x1b8),
                        CONCAT11(uVar7,*(undefined1 *)(lVar3 + 0x1bc)));
          local_98[0xc] = 0;
          local_98[0xd] = 10;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98 + 0xc,0);
          FGenericPlatformString::Memcpy(local_98[0xc],L"listIntro",0x14);
          FUN_142088910(lVar3,local_98 + 0xc);
          if (local_98[0xc] != 0) {
            FMemory::Free();
          }
        }
        LOCK();
        *(undefined4 *)(param_1 + 0x588) = 1;
        UNLOCK();
      }
    }
  }
  return;
}



// FUNCTION 140fd6dd0 FUN_140fd6dd0 body=11 status=ok
// SIG undefined FUN_140fd6dd0(void)

void FUN_140fd6dd0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x83c) = 1;
  return;
}



// FUNCTION 140fd6de0 FUN_140fd6de0 body=216 status=ok
// SIG undefined FUN_140fd6de0(void)

void FUN_140fd6de0(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  longlong *plVar3;
  
  if (param_3 != 0) {
    iVar2 = *(int *)(param_2 + 1);
    if (0 < iVar2) {
      puVar1 = (undefined8 *)(param_1 + 0x818);
      if (puVar1 != param_2) {
        _Src = (void *)*param_2;
        *(int *)(param_1 + 0x820) = iVar2;
        if ((iVar2 == 0) && (*(int *)(param_1 + 0x824) == 0)) {
          *(undefined4 *)(param_1 + 0x824) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 3);
        }
      }
      plVar3 = *(longlong **)(param_1 + 0x728);
      *(undefined8 *)(param_1 + 0x798) = param_4;
      *(longlong *)(param_1 + 0x828) = param_3;
      *(undefined4 *)(param_1 + 0x810) = 0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x278))(plVar3,1 < *(int *)(param_2 + 1));
      }
      FUN_140fcf600(param_1);
    }
  }
  return;
}



// FUNCTION 140fd6ec0 FUN_140fd6ec0 body=8480 status=ok
// SIG undefined FUN_140fd6ec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_140fd6ec0(longlong *param_1,char *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  wchar_t **ppwVar14;
  longlong *plVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  longlong *plVar22;
  char *pcVar23;
  char *pcVar24;
  undefined1 *puVar25;
  undefined1 auStack_a18 [32];
  longlong local_9f8;
  longlong **local_9f0;
  wchar_t *local_9e8;
  undefined8 local_9e0;
  longlong *local_9d8;
  longlong *local_9d0;
  longlong *local_9c8;
  char *local_9c0;
  longlong *local_9b8;
  longlong local_9b0;
  undefined8 local_9a8;
  longlong local_9a0;
  undefined8 local_998;
  longlong *local_990;
  undefined4 *local_988;
  undefined4 *puStack_980;
  undefined1 local_978 [8];
  longlong *local_970;
  longlong local_960;
  undefined8 local_958;
  longlong *local_950;
  undefined8 local_948;
  longlong *local_940;
  undefined8 local_938;
  longlong local_930;
  undefined8 local_928;
  longlong local_920;
  undefined8 local_918;
  longlong *local_910;
  undefined8 local_908;
  longlong local_900;
  undefined8 local_8f8;
  longlong local_8f0;
  undefined8 local_8e8;
  longlong local_8e0;
  undefined8 local_8d8;
  longlong *local_8d0;
  undefined8 local_8c8;
  longlong local_8c0;
  undefined8 local_8b8;
  longlong *local_8b0;
  undefined8 local_8a8;
  longlong local_8a0;
  undefined8 local_898;
  longlong *local_890;
  undefined8 local_888;
  longlong local_880;
  undefined8 local_878;
  longlong *local_870;
  undefined4 *local_868;
  ulonglong *puStack_860;
  undefined1 local_858 [8];
  longlong *local_850;
  undefined1 local_840 [8];
  longlong *local_838;
  undefined1 local_828 [24];
  undefined1 local_810;
  undefined *local_808;
  undefined8 local_800;
  undefined8 local_7f8;
  undefined8 local_7f0;
  undefined4 local_7e8;
  undefined4 local_7e4;
  undefined8 local_7e0;
  undefined1 local_7d8 [8];
  undefined1 local_7d0 [8];
  longlong *local_7c8;
  undefined8 local_7b8;
  longlong local_7b0;
  undefined4 *local_7a8;
  undefined4 *puStack_7a0;
  undefined8 local_798;
  longlong local_790;
  undefined8 local_788;
  longlong local_780;
  undefined8 local_778;
  longlong local_770;
  undefined8 local_768;
  longlong local_760;
  undefined1 local_758 [8];
  longlong *local_750;
  undefined1 local_740 [8];
  longlong *local_738;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined1 local_718 [16];
  longlong local_708 [2];
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined1 local_6e8 [16];
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined1 local_6c8 [16];
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined1 local_6a8 [16];
  undefined8 local_698;
  undefined8 uStack_690;
  undefined1 local_688 [16];
  undefined1 local_678 [24];
  undefined8 local_660;
  undefined8 local_658;
  undefined8 local_650;
  undefined8 local_648;
  undefined8 local_640;
  undefined1 local_638 [8];
  longlong *local_630;
  undefined1 local_620 [8];
  longlong *local_618;
  undefined1 local_608 [8];
  longlong *local_600;
  undefined1 local_5f0 [8];
  longlong *local_5e8;
  undefined1 local_5d8 [24];
  undefined1 local_5c0 [24];
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined1 local_598 [24];
  undefined1 local_580 [8];
  longlong *local_578;
  undefined1 local_568 [8];
  longlong *local_560;
  undefined1 local_550 [8];
  longlong *local_548;
  undefined1 local_538 [8];
  longlong *local_530;
  undefined1 local_520 [8];
  longlong *local_518;
  undefined1 local_508 [8];
  longlong *local_500;
  undefined1 local_4f0 [8];
  longlong *local_4e8;
  undefined1 local_4d8 [8];
  longlong *local_4d0;
  undefined1 local_4c0 [8];
  longlong *local_4b8;
  undefined1 local_4a8 [8];
  longlong *local_4a0;
  undefined1 local_490 [8];
  longlong *local_488;
  undefined1 local_478 [8];
  longlong *local_470;
  undefined1 local_460 [8];
  longlong *local_458;
  undefined1 local_448 [8];
  longlong *local_440;
  undefined1 local_430 [8];
  longlong *local_428;
  undefined1 local_418 [8];
  longlong *local_410;
  undefined1 local_400 [24];
  undefined1 local_3e8 [8];
  longlong *local_3e0;
  undefined1 local_3d0 [24];
  undefined1 local_3b8 [24];
  undefined1 local_3a0 [24];
  undefined1 local_388 [24];
  undefined1 local_370 [16];
  undefined1 local_360 [16];
  undefined1 local_350 [16];
  undefined1 local_340 [16];
  undefined1 local_330 [16];
  undefined1 local_320 [24];
  undefined1 local_308 [24];
  undefined1 local_2f0 [24];
  undefined1 local_2d8 [24];
  undefined1 local_2c0 [24];
  undefined1 local_2a8 [24];
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined1 local_258 [8];
  longlong local_250;
  undefined4 local_248;
  undefined1 local_238 [24];
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined1 local_1e8 [8];
  longlong local_1e0;
  undefined4 local_1d8;
  undefined4 local_1c8 [4];
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  char local_1a0;
  undefined4 local_198 [4];
  undefined1 local_188 [24];
  undefined1 local_170;
  ulonglong local_168 [2];
  undefined1 local_158 [24];
  undefined1 local_140;
  undefined4 local_138;
  longlong local_130;
  undefined1 local_110;
  undefined4 local_108 [2];
  ulonglong local_100;
  char local_e0 [8];
  undefined4 local_d8;
  ulonglong local_d0;
  undefined1 local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  char local_80 [8];
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_a18;
  local_9c0 = param_2;
  local_990 = param_1;
  (**(code **)(*param_1 + 0x278))(param_1,*param_2);
  if (*param_2 == '\0') {
    return;
  }
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x3b);
  plVar22 = (longlong *)0x0;
  plVar11 = plVar22;
  if (cVar6 != '\0') {
    lVar10 = FWeakObjectPtr::Get(param_1 + 0x3b);
    plVar11 = (longlong *)FWeakObjectPtr::Get(lVar10 + 0x960);
  }
  local_9e8 = (wchar_t *)0x0;
  local_9e0 = (wchar_t *)0x7;
  local_9d8 = plVar11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_9e8,0);
  FGenericPlatformString::Memcpy(local_9e8,L"normal",0xe);
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_7d0,L"FIX ME: No Name Found",L"GFxMissionLogMenu",L"NoNameFound");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_840,L"FIX ME: Mission Type Here, Lvl Y",L"GFxMissionLogMenu",L"NoSubInfo");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_858,L"A brief of the mission should be posted here.",L"GFxMissionLogMenu",
             L"MissionBriefingTempText");
  uVar12 = FUN_1404b03b0();
  FText::FText(local_740,uVar12);
  local_9a0 = 0;
  local_998 = 0;
  local_9b0 = 0;
  local_9a8 = 0;
  if ((param_2[0x20] == '\0') &&
     (plVar21 = (longlong *)(param_2 + 0x28), local_9c8 = plVar21, *plVar21 != 0)) {
    lVar13 = FUN_142f71d80();
    lVar10 = *plVar21;
    lVar18 = lVar10;
    if (lVar10 != 0) {
LAB_140fd7050:
      if (lVar18 != lVar13) goto code_r0x000140fd7059;
      if ((lVar10 != 0) && (plVar11 != (longlong *)0x0)) {
        uVar12 = FUN_142f5bb60(plVar21);
        uVar12 = FUN_142dea370(uVar12,local_550);
        FText::operator=(local_7d0,uVar12);
        if (local_548 != (longlong *)0x0) {
          LOCK();
          plVar17 = local_548 + 1;
          lVar10 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_548)(local_548);
            LOCK();
            piVar1 = (int *)((longlong)local_548 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_548 + 8))(local_548,1);
            }
          }
        }
        uVar12 = FUN_1404b03b0();
        FText::FText(local_238,uVar12);
        local_220 = 0;
        local_218 = 0;
        local_200 = 0;
        local_1f8 = 0;
        local_1f0 = 0xffffffff;
        local_1ec = 0;
        local_1e0 = 0;
        local_1d8 = 0;
        FText::FText(local_978);
        if (param_2[0x42] == '\0') {
          FUN_142f5b980(plVar11,*plVar21,local_238);
          local_728 = (undefined4 *)CONCAT44(local_728._4_4_,(undefined4)local_728);
          uStack_720 = (undefined4 *)CONCAT44(uStack_720._4_4_,(undefined4)uStack_720);
          switch(param_2[0x40]) {
          case '\x01':
            uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                               (local_4f0,L"Main Mission",L"GFxMissionLogMenu",L"MainMissionText");
            FText::operator=(local_978,uVar12);
            local_728 = (undefined4 *)CONCAT44(local_728._4_4_,(undefined4)local_728);
            uStack_720 = (undefined4 *)CONCAT44(uStack_720._4_4_,(undefined4)uStack_720);
            if (local_4e8 != (longlong *)0x0) {
              LOCK();
              plVar17 = local_4e8 + 1;
              lVar10 = *plVar17;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              local_728 = (undefined4 *)CONCAT44(local_728._4_4_,(undefined4)local_728);
              uStack_720 = (undefined4 *)CONCAT44(uStack_720._4_4_,(undefined4)uStack_720);
              if ((int)lVar10 == 1) {
                (**(code **)*local_4e8)(local_4e8);
                LOCK();
                piVar1 = (int *)((longlong)local_4e8 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*local_4e8 + 8))(local_4e8,1);
                }
              }
            }
            break;
          case '\x02':
            uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                               (local_4d8,L"Side Mission",L"GFxMissionLogMenu",L"SideMissionText");
            FText::operator=(local_978,uVar12);
            local_728 = (undefined4 *)CONCAT44(local_728._4_4_,(undefined4)local_728);
            uStack_720 = (undefined4 *)CONCAT44(uStack_720._4_4_,(undefined4)uStack_720);
            if (local_4d0 != (longlong *)0x0) {
              LOCK();
              plVar17 = local_4d0 + 1;
              lVar10 = *plVar17;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              local_728 = (undefined4 *)CONCAT44(local_728._4_4_,(undefined4)local_728);
              uStack_720 = (undefined4 *)CONCAT44(uStack_720._4_4_,(undefined4)uStack_720);
              if ((int)lVar10 == 1) {
                (**(code **)*local_4d0)(local_4d0);
                LOCK();
                piVar1 = (int *)((longlong)local_4d0 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                local_728 = (undefined4 *)CONCAT44(local_728._4_4_,(undefined4)local_728);
                uStack_720 = (undefined4 *)CONCAT44(uStack_720._4_4_,(undefined4)uStack_720);
                if (iVar8 == 1) {
                  (**(code **)(*local_4d0 + 8))(local_4d0,1);
                  local_728 = (undefined4 *)CONCAT44(local_728._4_4_,(undefined4)local_728);
                  uStack_720 = (undefined4 *)CONCAT44(uStack_720._4_4_,(undefined4)uStack_720);
                }
              }
            }
            break;
          case '\x03':
            uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                               (local_4c0,L"Trial Mission",L"GFxMissionLogMenu",L"TrialMissionsText"
                               );
            FText::operator=(local_978,uVar12);
            local_728 = (undefined4 *)CONCAT44(local_728._4_4_,(undefined4)local_728);
            uStack_720 = (undefined4 *)CONCAT44(uStack_720._4_4_,(undefined4)uStack_720);
            if (local_4b8 != (longlong *)0x0) {
              LOCK();
              plVar17 = local_4b8 + 1;
              lVar10 = *plVar17;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              local_728 = (undefined4 *)CONCAT44(local_728._4_4_,(undefined4)local_728);
              uStack_720 = (undefined4 *)CONCAT44(uStack_720._4_4_,(undefined4)uStack_720);
              if ((int)lVar10 == 1) {
                (**(code **)*local_4b8)(local_4b8);
                LOCK();
                piVar1 = (int *)((longlong)local_4b8 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                local_728 = (undefined4 *)CONCAT44(local_728._4_4_,(undefined4)local_728);
                uStack_720 = (undefined4 *)CONCAT44(uStack_720._4_4_,(undefined4)uStack_720);
                if (iVar8 == 1) {
                  (**(code **)(*local_4b8 + 8))(local_4b8,1);
                  local_728 = (undefined4 *)CONCAT44(local_728._4_4_,(undefined4)local_728);
                  uStack_720 = (undefined4 *)CONCAT44(uStack_720._4_4_,(undefined4)uStack_720);
                }
              }
            }
            break;
          case '\x04':
            uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                               (local_4a8,L"Circle of Slaughter Mission",L"GFxMissionLogMenu",
                                L"CircleOfSlaughterMissionText");
            FText::operator=(local_978,uVar12);
            local_728 = (undefined4 *)CONCAT44(local_728._4_4_,(undefined4)local_728);
            uStack_720 = (undefined4 *)CONCAT44(uStack_720._4_4_,(undefined4)uStack_720);
            if (local_4a0 != (longlong *)0x0) {
              LOCK();
              plVar17 = local_4a0 + 1;
              lVar10 = *plVar17;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              local_728 = (undefined4 *)CONCAT44(local_728._4_4_,(undefined4)local_728);
              uStack_720 = (undefined4 *)CONCAT44(uStack_720._4_4_,(undefined4)uStack_720);
              if ((int)lVar10 == 1) {
                (**(code **)*local_4a0)(local_4a0);
                LOCK();
                piVar1 = (int *)((longlong)local_4a0 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                local_728 = (undefined4 *)CONCAT44(local_728._4_4_,(undefined4)local_728);
                uStack_720 = (undefined4 *)CONCAT44(uStack_720._4_4_,(undefined4)uStack_720);
                if (iVar8 == 1) {
                  (**(code **)(*local_4a0 + 8))(local_4a0,1);
                  local_728 = (undefined4 *)CONCAT44(local_728._4_4_,(undefined4)local_728);
                  uStack_720 = (undefined4 *)CONCAT44(uStack_720._4_4_,(undefined4)uStack_720);
                }
              }
            }
            break;
          case '\x05':
            uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                               (local_490,L"Takedown Mission",L"GFxMissionLogMenu",
                                L"RaidMissionText");
            FText::operator=(local_978,uVar12);
            local_728 = (undefined4 *)CONCAT44(local_728._4_4_,(undefined4)local_728);
            uStack_720 = (undefined4 *)CONCAT44(uStack_720._4_4_,(undefined4)uStack_720);
            if (local_488 != (longlong *)0x0) {
              LOCK();
              plVar17 = local_488 + 1;
              lVar10 = *plVar17;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              local_728 = (undefined4 *)CONCAT44(local_728._4_4_,(undefined4)local_728);
              uStack_720 = (undefined4 *)CONCAT44(uStack_720._4_4_,(undefined4)uStack_720);
              if ((int)lVar10 == 1) {
                (**(code **)*local_488)(local_488);
                LOCK();
                piVar1 = (int *)((longlong)local_488 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                local_728 = (undefined4 *)CONCAT44(local_728._4_4_,(undefined4)local_728);
                uStack_720 = (undefined4 *)CONCAT44(uStack_720._4_4_,(undefined4)uStack_720);
                if (iVar8 == 1) {
                  (**(code **)(*local_488 + 8))(local_488,1);
                  local_728 = (undefined4 *)CONCAT44(local_728._4_4_,(undefined4)local_728);
                  uStack_720 = (undefined4 *)CONCAT44(uStack_720._4_4_,(undefined4)uStack_720);
                }
              }
            }
            break;
          case '\x06':
            uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                               (local_478,L"Rare Spawn Mission",L"GFxMissionLogMenu",
                                L"RareSpawnMissionText");
            FText::operator=(local_978,uVar12);
            local_728 = (undefined4 *)CONCAT44(local_728._4_4_,(undefined4)local_728);
            uStack_720 = (undefined4 *)CONCAT44(uStack_720._4_4_,(undefined4)uStack_720);
            if (local_470 != (longlong *)0x0) {
              LOCK();
              plVar17 = local_470 + 1;
              lVar10 = *plVar17;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              local_728 = (undefined4 *)CONCAT44(local_728._4_4_,(undefined4)local_728);
              uStack_720 = (undefined4 *)CONCAT44(uStack_720._4_4_,(undefined4)uStack_720);
              if ((int)lVar10 == 1) {
                (**(code **)*local_470)(local_470);
                LOCK();
                piVar1 = (int *)((longlong)local_470 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                local_728 = (undefined4 *)CONCAT44(local_728._4_4_,(undefined4)local_728);
                uStack_720 = (undefined4 *)CONCAT44(uStack_720._4_4_,(undefined4)uStack_720);
                if (iVar8 == 1) {
                  (**(code **)(*local_470 + 8))(local_470,1);
                  local_728 = (undefined4 *)CONCAT44(local_728._4_4_,(undefined4)local_728);
                  uStack_720 = (undefined4 *)CONCAT44(uStack_720._4_4_,(undefined4)uStack_720);
                }
              }
            }
          }
        }
        else {
          FUN_142f5a100(plVar11,local_7d8,*plVar21);
          uVar12 = FUN_142f5bb60(local_7d8);
          FUN_142dea370(uVar12,local_620);
          lVar10 = FText::FText(local_2d8,local_620);
          uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_520,L"You must advance {0} before continuing this mission.",
                              L"GFxMissionLogMenu",L"BlockedMissionDescription");
          puVar20 = (undefined8 *)FTextFormat::FTextFormat(local_340,uVar12);
          local_1c8[0] = 4;
          FText::FText(local_1b8,lVar10);
          local_768 = *puVar20;
          local_988 = local_1c8;
          puStack_980 = local_198;
          local_760 = puVar20[1];
          local_1a0 = '\x01';
          if (local_760 != 0) {
            LOCK();
            *(int *)(local_760 + 8) = *(int *)(local_760 + 8) + 1;
            UNLOCK();
          }
          local_728 = local_988;
          uStack_720 = puStack_980;
          uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                   TArray<FFormatArgumentValue,FDefaultAllocator>(local_718,&local_728);
          uVar12 = FText::Format(local_538,&local_768,uVar12);
          FText::FText(local_638,uVar12);
          if (local_530 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_530 + 1;
            lVar18 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*local_530)(local_530);
              LOCK();
              piVar1 = (int *)((longlong)local_530 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*local_530 + 8))(local_530,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_718);
          if ((local_1a0 != '\0') && (local_1a0 = '\0', local_1b0 != (longlong *)0x0)) {
            LOCK();
            plVar11 = local_1b0 + 1;
            lVar18 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*local_1b0)(local_1b0);
              LOCK();
              piVar1 = (int *)((longlong)local_1b0 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*local_1b0 + 8))(local_1b0,1);
              }
            }
          }
          plVar11 = (longlong *)puVar20[1];
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar17 = plVar11 + 1;
            lVar18 = *plVar17;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
              }
            }
          }
          plVar11 = *(longlong **)(lVar10 + 8);
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar17 = plVar11 + 1;
            lVar10 = *plVar17;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
              }
            }
          }
          FText::FText(local_2a8,local_638);
          local_290 = 0;
          local_288 = 0;
          local_270 = 0;
          local_268 = 0;
          local_260 = 0xffffffff;
          local_25c = 0;
          local_250 = 0;
          local_248 = 0;
          FText::operator=(local_238,local_2a8);
          FUN_140fa0b70(&local_220,&local_290);
          lVar10 = local_250;
          if (local_250 == 0) {
            _guard_xfg_dispatch_icall_nop(local_1e8,local_258,4);
          }
          if (local_1e0 != 0) {
            FMemory::Free();
            lVar10 = local_250;
          }
          local_1d8 = local_248;
          local_248 = 0;
          local_250 = 0;
          local_1e0 = lVar10;
          FUN_140bff340(local_2a8);
          if (local_630 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_630 + 1;
            lVar10 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_630)(local_630);
              LOCK();
              piVar1 = (int *)((longlong)local_630 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*local_630 + 8))(local_630,1);
              }
            }
          }
          if (local_518 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_518 + 1;
            lVar10 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_518)(local_518);
              LOCK();
              piVar1 = (int *)((longlong)local_518 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*local_518 + 8))(local_518,1);
              }
            }
          }
          uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_508,L"Blocked Mission",L"GFxMissionLogMenu",
                              L"BlockedMissionText");
          FText::operator=(local_978,uVar12);
          if (local_500 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_500 + 1;
            lVar10 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_500)(local_500);
              LOCK();
              piVar1 = (int *)((longlong)local_500 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*local_500 + 8))(local_500,1);
              }
            }
          }
          param_2 = local_9c0;
          plVar11 = local_9d8;
          if (local_618 != (longlong *)0x0) {
            LOCK();
            plVar17 = local_618 + 1;
            lVar10 = *plVar17;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_618)(local_618);
              LOCK();
              piVar1 = (int *)((longlong)local_618 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              param_2 = local_9c0;
              plVar11 = local_9d8;
              if (iVar8 == 1) {
                (**(code **)(*local_618 + 8))(local_618,1);
                param_2 = local_9c0;
                plVar11 = local_9d8;
              }
            }
          }
        }
        uVar12 = FUN_142dea370(local_238,local_460);
        FText::operator=(local_858,uVar12);
        if (local_458 != (longlong *)0x0) {
          LOCK();
          plVar17 = local_458 + 1;
          lVar10 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_458)(local_458);
            LOCK();
            piVar1 = (int *)((longlong)local_458 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_458 + 8))(local_458,1);
            }
          }
        }
        ppwVar14 = (wchar_t **)FUN_140fb4120(local_708,param_2[0x46]);
        if (&local_9e8 != ppwVar14) {
          if (local_9e8 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          local_9e8 = *ppwVar14;
          *ppwVar14 = (wchar_t *)0x0;
          local_9e0 = ppwVar14[1];
          ppwVar14[1] = (wchar_t *)0x0;
        }
        if (local_708[0] != 0) {
          FMemory::Free();
        }
        iVar8 = (**(code **)(*plVar11 + 0x780))(plVar11,*plVar21);
        if (iVar8 < 1) {
          FText::operator=(local_840,local_978);
        }
        else {
          lVar10 = FText::FText(local_2c0);
          uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_430,L"{0}, LVL {1}",L"GFxMissionLogMenu",L"MissionSubtextFormat"
                             );
          puVar20 = (undefined8 *)FTextFormat::FTextFormat(local_330,uVar12);
          local_168[0]._0_4_ = 4;
          FText::FText(local_158,lVar10);
          local_988 = (undefined4 *)local_168;
          local_140 = 1;
          puStack_980 = local_108;
          local_7b8 = *puVar20;
          local_7b0 = puVar20[1];
          local_138 = 0;
          local_110 = 0;
          if (local_7b0 != 0) {
            LOCK();
            *(int *)(local_7b0 + 8) = *(int *)(local_7b0 + 8) + 1;
            UNLOCK();
          }
          local_130 = (longlong)iVar8;
          local_6f8 = local_988;
          uStack_6f0 = puStack_980;
          uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                   TArray<FFormatArgumentValue,FDefaultAllocator>(local_6e8,&local_6f8);
          uVar12 = FText::Format(local_448,&local_7b8,uVar12);
          FText::FText(local_608,uVar12);
          if (local_440 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_440 + 1;
            lVar18 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*local_440)(local_440);
              LOCK();
              piVar1 = (int *)((longlong)local_440 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*local_440 + 8))(local_440,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_6e8);
          lVar18 = 2;
          pcVar24 = local_e0;
          do {
            pcVar23 = pcVar24 + -0x30;
            lVar18 = lVar18 + -1;
            if (*pcVar23 != '\0') {
              *pcVar23 = '\0';
              plVar11 = *(longlong **)(pcVar24 + -0x40);
              if (plVar11 != (longlong *)0x0) {
                LOCK();
                plVar21 = plVar11 + 1;
                lVar13 = *plVar21;
                *(int *)plVar21 = (int)*plVar21 + -1;
                UNLOCK();
                if ((int)lVar13 == 1) {
                  (**(code **)*plVar11)(plVar11);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar11 + 0xc);
                  iVar8 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*plVar11 + 8))(plVar11,1);
                  }
                }
              }
            }
            pcVar24 = pcVar23;
          } while (lVar18 != 0);
          plVar11 = (longlong *)puVar20[1];
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar21 = plVar11 + 1;
            lVar18 = *plVar21;
            *(int *)plVar21 = (int)*plVar21 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
              }
            }
          }
          plVar11 = *(longlong **)(lVar10 + 8);
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar21 = plVar11 + 1;
            lVar10 = *plVar21;
            *(int *)plVar21 = (int)*plVar21 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
              }
            }
          }
          FText::operator=(local_840,local_608);
          if (local_600 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_600 + 1;
            lVar10 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_600)(local_600);
              LOCK();
              piVar1 = (int *)((longlong)local_600 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*local_600 + 8))(local_600,1);
              }
            }
          }
          plVar21 = local_9c8;
          plVar11 = local_9d8;
          if (local_428 != (longlong *)0x0) {
            LOCK();
            plVar17 = local_428 + 1;
            lVar10 = *plVar17;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_428)(local_428);
              LOCK();
              piVar1 = (int *)((longlong)local_428 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar21 = local_9c8;
              plVar11 = local_9d8;
              if (iVar8 == 1) {
                (**(code **)(*local_428 + 8))(local_428,1);
                plVar21 = local_9c8;
                plVar11 = local_9d8;
              }
            }
          }
        }
        local_950 = (longlong *)0x0;
        local_948 = 0;
        FUN_142f59720(plVar11,*plVar21,&local_950,0);
        local_9d0 = local_950;
        plVar17 = local_950 + (int)local_948;
        local_9b8 = plVar17;
        if (local_950 != plVar17) {
          do {
            puVar2 = (undefined4 *)*local_9d0;
            local_988 = puVar2;
            if (puVar2 != (undefined4 *)0x0) {
              bVar7 = FUN_140472310(puVar2);
              local_800 = 0;
              local_7f8 = 0;
              local_7f0 = 0;
              local_7e8 = 0xffffffff;
              local_7e4 = 0;
              local_808 = &DAT_1441d2800;
              local_7e0 = 0;
              FUN_142f604c0(&local_808,*plVar21,puVar2);
              plVar17 = plVar22;
              if (*plVar21 != 0) {
                plVar15 = (longlong *)FUN_142f71d80();
                for (plVar3 = (longlong *)*plVar21;
                    (plVar17 = plVar22, plVar3 != (longlong *)0x0 &&
                    (plVar17 = (longlong *)*plVar21, plVar3 != plVar15));
                    plVar3 = (longlong *)plVar3[6]) {
                }
              }
              uVar9 = FUN_142f5cf70(plVar11,&local_808,plVar17);
              FText::FText(local_758);
              if (1 < bVar7) {
                uVar12 = FInternationalization::
                         ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                   (local_400,L": {0}/{1}",L"GFxMissionLogMenu",L"CountString");
                puVar20 = (undefined8 *)FTextFormat::FTextFormat(local_370,uVar12);
                local_100 = (ulonglong)uVar9 & 0xff;
                local_7a8 = local_108;
                puStack_7a0 = local_a8;
                local_798 = *puVar20;
                local_790 = puVar20[1];
                local_d0 = (ulonglong)bVar7;
                local_108[0] = 0;
                local_e0[0] = '\0';
                local_d8 = 0;
                local_b0 = 0;
                if (local_790 != 0) {
                  LOCK();
                  *(int *)(local_790 + 8) = *(int *)(local_790 + 8) + 1;
                  UNLOCK();
                }
                local_6d8 = local_7a8;
                uStack_6d0 = puStack_7a0;
                uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                         TArray<FFormatArgumentValue,FDefaultAllocator>(local_6c8,&local_6d8);
                uVar12 = FText::Format(local_418,&local_798,uVar12);
                FText::FText(local_678,uVar12);
                plVar11 = local_410;
                if (local_410 != (longlong *)0x0) {
                  LOCK();
                  plVar21 = local_410 + 1;
                  lVar10 = *plVar21;
                  *(int *)plVar21 = (int)*plVar21 + -1;
                  UNLOCK();
                  if ((int)lVar10 == 1) {
                    (**(code **)*local_410)(local_410);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar11 + 0xc);
                    iVar8 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar8 == 1) {
                      (**(code **)(*plVar11 + 8))(plVar11,1);
                    }
                  }
                }
                TArray<FFormatArgumentValue,FDefaultAllocator>::
                ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_6c8);
                lVar10 = 2;
                pcVar24 = local_80;
                do {
                  lVar10 = lVar10 + -1;
                  pcVar23 = pcVar24 + -0x30;
                  if (*pcVar23 != '\0') {
                    *pcVar23 = '\0';
                    plVar11 = *(longlong **)(pcVar24 + -0x40);
                    if (plVar11 != (longlong *)0x0) {
                      LOCK();
                      plVar21 = plVar11 + 1;
                      lVar18 = *plVar21;
                      *(int *)plVar21 = (int)*plVar21 + -1;
                      UNLOCK();
                      if ((int)lVar18 == 1) {
                        (**(code **)*plVar11)(plVar11);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar11 + 0xc);
                        iVar8 = *piVar1;
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (iVar8 == 1) {
                          (**(code **)(*plVar11 + 8))(plVar11,1);
                        }
                      }
                    }
                  }
                  pcVar24 = pcVar23;
                } while (lVar10 != 0);
                plVar11 = (longlong *)puVar20[1];
                if (plVar11 != (longlong *)0x0) {
                  LOCK();
                  plVar21 = plVar11 + 1;
                  lVar10 = *plVar21;
                  *(int *)plVar21 = (int)*plVar21 + -1;
                  UNLOCK();
                  if ((int)lVar10 == 1) {
                    (**(code **)*plVar11)(plVar11);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar11 + 0xc);
                    iVar8 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar8 == 1) {
                      (**(code **)(*plVar11 + 8))(plVar11,1);
                    }
                  }
                }
                FText::operator=(local_758,local_678);
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_678)
                ;
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_400)
                ;
              }
              uVar12 = FText::FText(local_320,local_758);
              uVar19 = ULiveLinkTimeSynchronizationSource::GetDisplayName(puVar2,local_308);
              uVar16 = FInternationalization::
                       ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                 (local_568,L"{0}{1}",L"GFxMissionLogMenu",L"ObjectiveLine");
              puVar20 = (undefined8 *)FTextFormat::FTextFormat(local_360,uVar16);
              local_a8[0] = 4;
              FText::FText(local_98,uVar19);
              local_80[0] = '\x01';
              local_78 = 4;
              FText::FText(local_68,uVar12);
              local_868 = local_a8;
              local_50 = 1;
              puStack_860 = local_48;
              local_788 = *puVar20;
              local_780 = puVar20[1];
              if (local_780 != 0) {
                LOCK();
                *(int *)(local_780 + 8) = *(int *)(local_780 + 8) + 1;
                UNLOCK();
              }
              local_6b8 = local_868;
              uStack_6b0 = puStack_860;
              uVar16 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                       TArray<FFormatArgumentValue,FDefaultAllocator>(local_6a8,&local_6b8);
              uVar16 = FText::Format(local_580,&local_788,uVar16);
              FText::FText(local_5f0,uVar16);
              plVar11 = local_578;
              if (local_578 != (longlong *)0x0) {
                LOCK();
                plVar21 = local_578 + 1;
                lVar10 = *plVar21;
                *(int *)plVar21 = (int)*plVar21 + -1;
                UNLOCK();
                if ((int)lVar10 == 1) {
                  (**(code **)*local_578)(local_578);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar11 + 0xc);
                  iVar8 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*plVar11 + 8))(plVar11,1);
                  }
                }
              }
              TArray<FFormatArgumentValue,FDefaultAllocator>::
              ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_6a8);
              lVar10 = 2;
              puVar25 = &stack0xffffffffffffffc8;
              do {
                puVar25 = puVar25 + -0x30;
                TOptional<FExpressionError>::Reset(puVar25);
                lVar10 = lVar10 + -1;
              } while (lVar10 != 0);
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(puVar20);
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(uVar19);
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(uVar12);
              plVar11 = local_560;
              if (local_560 != (longlong *)0x0) {
                LOCK();
                plVar21 = local_560 + 1;
                lVar10 = *plVar21;
                *(int *)plVar21 = (int)*plVar21 + -1;
                UNLOCK();
                if ((int)lVar10 == 1) {
                  (**(code **)*local_560)(local_560);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar11 + 0xc);
                  iVar8 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*plVar11 + 8))(plVar11,1);
                  }
                }
              }
              plVar11 = local_9d8;
              cVar6 = FUN_142f63720(local_9d8,&local_808,local_9d8);
              if (cVar6 == '\0') {
                uVar12 = FUN_1404b03b0();
                FText::FText(local_828,uVar12);
                local_810 = 0;
                FText::operator=(local_828,local_5f0);
                uVar5 = local_998;
                uVar4 = local_9a8;
                local_810 = *(undefined1 *)((longlong)local_988 + 0xba);
                if (*(char *)(local_988 + 0x2a) == '\0') {
                  lVar10 = (longlong)(int)local_998;
                  iVar8 = (int)local_998 + 1;
                  local_998 = CONCAT44(local_998._4_4_,iVar8);
                  if (local_998._4_4_ < iVar8) {
                    FUN_140fd5770(&local_9a0,uVar5 & 0xffffffff);
                  }
                  lVar10 = lVar10 * 0x20 + local_9a0;
                }
                else {
                  lVar10 = (longlong)(int)local_9a8;
                  iVar8 = (int)local_9a8 + 1;
                  local_9a8 = CONCAT44(local_9a8._4_4_,iVar8);
                  if (local_9a8._4_4_ < iVar8) {
                    FUN_140fd5770(&local_9b0,uVar4 & 0xffffffff);
                  }
                  lVar10 = lVar10 * 0x20 + local_9b0;
                }
                FText::FText(lVar10,local_828);
                *(undefined1 *)(lVar10 + 0x18) = local_810;
                FUN_140fa0450(local_828);
              }
              plVar21 = local_5e8;
              if (local_5e8 != (longlong *)0x0) {
                LOCK();
                plVar17 = local_5e8 + 1;
                lVar10 = *plVar17;
                *(int *)plVar17 = (int)*plVar17 + -1;
                UNLOCK();
                if ((int)lVar10 == 1) {
                  (**(code **)*local_5e8)(local_5e8);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar21 + 0xc);
                  iVar8 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (**(code **)(*plVar21 + 8))(plVar21,1);
                  }
                }
              }
              plVar3 = local_750;
              plVar17 = local_9b8;
              plVar21 = local_9c8;
              if (local_750 != (longlong *)0x0) {
                LOCK();
                plVar15 = local_750 + 1;
                lVar10 = *plVar15;
                *(int *)plVar15 = (int)*plVar15 + -1;
                UNLOCK();
                if ((int)lVar10 == 1) {
                  (**(code **)*local_750)(local_750);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar3 + 0xc);
                  iVar8 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  plVar17 = local_9b8;
                  plVar21 = local_9c8;
                  if (iVar8 == 1) {
                    (**(code **)(*plVar3 + 8))(plVar3,1);
                    plVar17 = local_9b8;
                    plVar21 = local_9c8;
                  }
                }
              }
            }
            local_9d0 = local_9d0 + 1;
          } while (local_9d0 != plVar17);
        }
        if (local_950 != (longlong *)0x0) {
          FMemory::Free(local_950);
        }
        if (local_970 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_970 + 1;
          lVar10 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_970)(local_970);
            LOCK();
            piVar1 = (int *)((longlong)local_970 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_970 + 8))(local_970,1);
            }
          }
        }
        FUN_140bff340(local_238);
        param_1 = local_990;
        goto LAB_140fd8772;
      }
    }
  }
LAB_140fd7062:
  if (param_2[0x20] == '\x01') {
    pcVar24 = param_2 + 0x38;
    cVar6 = FWeakObjectPtr::IsValid(pcVar24);
    if (cVar6 != '\0') {
      uVar9 = local_9e0._4_4_;
      if (param_2[0x46] == '\x05') {
        if (param_2[0x45] == '\0') {
          if (local_9e8 != L"eridianWritingUnread") {
            local_9e0 = (wchar_t *)((ulonglong)local_9e0._4_4_ << 0x20);
            plVar11 = plVar22;
            if (uVar9 != 0x15) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_9e8,0x15);
              plVar11 = (longlong *)((ulonglong)local_9e0 & 0xffffffff);
              uVar9 = local_9e0._4_4_;
            }
            iVar8 = (int)plVar11 + 0x15;
            local_9e0 = (wchar_t *)CONCAT44(local_9e0._4_4_,iVar8);
            if ((int)uVar9 < iVar8) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_9e8);
            }
            builtin_wcsncpy(local_9e8,L"eridianWritingUnread",0x15);
          }
        }
        else if (local_9e8 != L"eridianWritingRead") {
          local_9e0 = (wchar_t *)((ulonglong)local_9e0._4_4_ << 0x20);
          plVar11 = plVar22;
          if (uVar9 != 0x13) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_9e8,0x13);
            plVar11 = (longlong *)((ulonglong)local_9e0 & 0xffffffff);
            uVar9 = local_9e0._4_4_;
          }
          iVar8 = (int)plVar11 + 0x13;
          local_9e0 = (wchar_t *)CONCAT44(local_9e0._4_4_,iVar8);
          if ((int)uVar9 < iVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_9e8);
          }
          builtin_wcsncpy(local_9e8,L"eridianWritingRead",0x13);
        }
      }
      else if (local_9e8 != L"echoLog") {
        local_9e0 = (wchar_t *)((ulonglong)local_9e0._4_4_ << 0x20);
        plVar11 = plVar22;
        if (uVar9 != 8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_9e8,8);
          plVar11 = (longlong *)((ulonglong)local_9e0 & 0xffffffff);
          uVar9 = local_9e0._4_4_;
        }
        iVar8 = (int)plVar11 + 8;
        local_9e0 = (wchar_t *)CONCAT44(local_9e0._4_4_,iVar8);
        if ((int)uVar9 < iVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_9e8);
        }
        builtin_wcsncpy(local_9e8,L"echoLog",8);
      }
      lVar10 = FWeakObjectPtr::Get(pcVar24);
      FText::FText(local_5d8,lVar10 + 0x40);
      FText::operator=(local_7d0,local_5d8);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_5d8);
      uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_598,L"ECHO LOG",L"GFxMissionLogMenu",L"EchoLogSubLabel");
      FText::operator=(local_840,uVar12);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_598);
      lVar18 = FWeakObjectPtr::Get(pcVar24);
      lVar10 = lVar18 + 0x368;
      lVar13 = FWeakObjectPtr::Get(lVar10);
      if (lVar13 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        local_698 = (undefined4 *)CONCAT44(local_698._4_4_,(undefined4)local_698);
        uStack_690 = (ulonglong *)CONCAT44(uStack_690._4_4_,(undefined4)uStack_690);
        if ((DAT_1464b56f4 != *(int *)(lVar18 + 0x370)) &&
           (local_9d0 = (longlong *)0x0,
           local_698 = (undefined4 *)CONCAT44(local_698._4_4_,(undefined4)local_698),
           uStack_690 = (ulonglong *)CONCAT44(uStack_690._4_4_,(undefined4)uStack_690),
           *(longlong *)(lVar18 + 0x378) != 0)) {
          lVar13 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar10,lVar13);
          if ((lVar13 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(lVar18 + 0x370) = DAT_1464b56f4;
          }
          lVar13 = FWeakObjectPtr::Get(lVar10);
          local_698 = (undefined4 *)CONCAT44(local_698._4_4_,(undefined4)local_698);
          uStack_690 = (ulonglong *)CONCAT44(uStack_690._4_4_,(undefined4)uStack_690);
          if (lVar13 != 0) goto LAB_140fd84ee;
        }
      }
      else {
LAB_140fd84ee:
        cVar6 = UObjectBaseUtility::IsA<UMaterialInstanceDynamic>(lVar13);
        local_698 = (undefined4 *)CONCAT44(local_698._4_4_,(undefined4)local_698);
        uStack_690 = (ulonglong *)CONCAT44(uStack_690._4_4_,(undefined4)uStack_690);
        if ((cVar6 != '\0') &&
           (local_698 = (undefined4 *)CONCAT44(local_698._4_4_,(undefined4)local_698),
           uStack_690 = (ulonglong *)CONCAT44(uStack_690._4_4_,(undefined4)uStack_690), lVar13 != 0)
           ) {
          lVar18 = FWeakObjectPtr::Get(pcVar24);
          lVar10 = lVar18 + 0x368;
          plVar11 = (longlong *)FWeakObjectPtr::Get(lVar10);
          if (plVar11 == (longlong *)0x0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != *(int *)(lVar18 + 0x370)) &&
               (local_9d0 = (longlong *)0x0, *(longlong *)(lVar18 + 0x378) != 0)) {
              lVar13 = FUN_141796df0();
              FWeakObjectPtr::operator=(lVar10,lVar13);
              if ((lVar13 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                *(int *)(lVar18 + 0x370) = DAT_1464b56f4;
              }
              plVar11 = (longlong *)FWeakObjectPtr::Get(lVar10);
              if (plVar11 != (longlong *)0x0) goto LAB_140fd8581;
            }
LAB_140fd858d:
            plVar11 = plVar22;
          }
          else {
LAB_140fd8581:
            cVar6 = UObjectBaseUtility::IsA<UMaterialInstanceDynamic>(plVar11);
            if (cVar6 == '\0') goto LAB_140fd858d;
          }
          uVar12 = FText::FText(local_2f0,plVar11 + 6);
          uVar19 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_3d0,L"ECHO LOG, {0}",L"GFxMissionLogMenu",
                              L"EchoLogWithZoneFormat");
          puVar20 = (undefined8 *)FTextFormat::FTextFormat(local_350,uVar19);
          local_198[0] = 4;
          FText::FText(local_188,uVar12);
          local_778 = *puVar20;
          local_868 = local_198;
          puStack_860 = local_168;
          local_770 = puVar20[1];
          local_170 = 1;
          if (local_770 != 0) {
            LOCK();
            *(int *)(local_770 + 8) = *(int *)(local_770 + 8) + 1;
            UNLOCK();
          }
          local_698 = local_868;
          uStack_690 = puStack_860;
          uVar19 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                   TArray<FFormatArgumentValue,FDefaultAllocator>(local_688,&local_698);
          uVar19 = FText::Format(local_3e8,&local_778,uVar19);
          FText::FText(local_5c0,uVar19);
          if (local_3e0 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_3e0 + 1;
            lVar10 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_3e0)(local_3e0);
              LOCK();
              piVar1 = (int *)((longlong)local_3e0 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*local_3e0 + 8))(local_3e0,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_688);
          TOptional<FExpressionError>::Reset(local_188);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(puVar20);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(uVar12);
          FText::operator=(local_840,local_5c0);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_5c0);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_3d0);
        }
      }
      lVar10 = FWeakObjectPtr::Get(pcVar24);
      uVar12 = FUN_1411e1eb0(local_3b8,lVar10 + 800);
      FText::operator=(local_858,uVar12);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_3b8);
      uVar12 = FUN_1404b03b0();
      FText::operator=(local_740,uVar12);
      plVar11 = (longlong *)param_1[0x37];
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x2b0))(plVar11,local_858,1,0);
      }
    }
  }
LAB_140fd8772:
  local_8f0 = 0;
  local_8e8 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_8f0,0);
  FGenericPlatformString::Memcpy(local_8f0,L"objectiveListMC",0x20);
  local_9f0 = &local_940;
  local_940 = (longlong *)0x0;
  plVar11 = param_1 + 0x33;
  local_9f8 = CONCAT71(local_9f8._1_7_,6);
  local_938 = 0;
  local_660 = 0;
  cVar6 = FUN_140f15e80(param_1,plVar11,&local_8f0,0);
  plVar21 = local_940;
  for (iVar8 = (int)local_938; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar21 != 0) {
      FMemory::Free();
    }
    plVar21 = plVar21 + 2;
  }
  if (local_940 != (longlong *)0x0) {
    FMemory::Free(local_940);
  }
  if (local_8f0 != 0) {
    FMemory::Free();
  }
  if (cVar6 == '\0') goto LAB_140fd8b04;
  FUN_142ecffe0(*plVar11);
  pcVar24 = local_9c0;
  local_870 = param_1;
  if (local_9c0[0x20] == '\0') {
    plVar21 = param_1 + 0x3b;
    cVar6 = FWeakObjectPtr::IsValid(plVar21);
    if (cVar6 != '\0') {
      if (pcVar24[0x42] == '\0') {
        lVar10 = FWeakObjectPtr::Get(plVar21);
        lVar18 = FWeakObjectPtr::Get(plVar21);
        uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_3a0,L"CURRENT OBJECTIVES",L"GFxMissionLogMenu",
                            L"CurrentObjectives");
        local_9f8 = lVar10 + 0x6ec;
        FUN_140fa5e00(&local_870,&local_9a0,uVar12,lVar18 + 0x6e8);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_3a0);
        lVar10 = FWeakObjectPtr::Get(plVar21);
        lVar18 = FWeakObjectPtr::Get(plVar21);
        uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_388,L"OPTIONAL OBJECTIVES",L"GFxMissionLogMenu",
                            L"OptionalObjectives");
        local_9f8 = lVar10 + 0x6f4;
        FUN_140fa5e00(&local_870,&local_9b0,uVar12,lVar18 + 0x6f0);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_388);
      }
      local_930 = 0;
      local_928 = 0x15;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_930,0);
      FGenericPlatformString::Memcpy(local_930,L"ObjectiveListDivider",0x2a);
      lVar10 = *plVar11;
      local_658 = URemnantGameInstance::GetPrivateStaticClass();
      lVar10 = FUN_142ebcee0(lVar10,&local_930,local_658,1);
      if (lVar10 != 0) {
        FUN_140f9db10(lVar10);
      }
      if (local_930 != 0) {
        FMemory::Free();
      }
      cVar6 = FText::IsEmpty(local_858);
      if (cVar6 == '\0') {
        local_920 = 0;
        local_918 = 0x17;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_920,0);
        FGenericPlatformString::Memcpy(local_920,L"MissionDescriptionText",0x2e);
        lVar10 = *plVar11;
        local_650 = URemnantGameInstance::GetPrivateStaticClass();
        plVar21 = (longlong *)FUN_142ebcee0(lVar10,&local_920,local_650,1);
        if (plVar21 == (longlong *)0x0) {
LAB_140fd8a12:
          plVar21 = plVar22;
        }
        else {
          cVar6 = FUN_140f9dac0(plVar21);
          if (cVar6 == '\0') goto LAB_140fd8a12;
        }
        if (local_920 != 0) {
          FMemory::Free();
        }
        if (plVar21 != (longlong *)0x0) {
          local_900 = 0;
          local_8f8 = 0x10;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_900,0);
          FGenericPlatformString::Memcpy(local_900,L"descriptionText",0x20);
          local_9f0 = &local_910;
          local_910 = (longlong *)0x0;
          local_9f8 = CONCAT71(local_9f8._1_7_,6);
          local_908 = 0;
          local_648 = 0;
          cVar6 = FUN_140e99270(plVar21,plVar21 + 0x61,&local_900,0);
          plVar22 = local_910;
          for (iVar8 = (int)local_908; iVar8 != 0; iVar8 = iVar8 + -1) {
            if (*plVar22 != 0) {
              FMemory::Free();
            }
            plVar22 = plVar22 + 2;
          }
          if (local_910 != (longlong *)0x0) {
            FMemory::Free(local_910);
          }
          if (local_900 != 0) {
            FMemory::Free();
          }
          param_1 = local_990;
          if (cVar6 != '\0') {
            plVar22 = (longlong *)plVar21[0x61];
            (**(code **)(*plVar22 + 0x2b0))(plVar22,local_858,1,0);
            param_1 = local_990;
          }
        }
      }
    }
  }
  (**(code **)(*(longlong *)*plVar11 + 0x300))();
LAB_140fd8b04:
  cVar6 = FUN_14208d2d0(param_1,param_1 + 0x2f,L"typeIcon");
  if (cVar6 != '\0') {
    FUN_14203e230(param_1[0x2f],&local_9e8);
  }
  pcVar24 = local_9c0;
  if (param_1[0x2e] != 0) {
    if (local_9c0[0x20] == '\0') {
      local_960 = 0;
      local_958 = 0xf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_960,0);
      FGenericPlatformString::Memcpy(local_960,L"missionTracked",0x1e);
      FUN_142088cf0(param_1[0x2e],&local_960);
      if (local_960 != 0) {
        FMemory::Free();
      }
      (**(code **)(*(longlong *)param_1[0x2e] + 0x278))((longlong *)param_1[0x2e],pcVar24[0x41]);
    }
    else {
      local_8e0 = 0;
      local_8d8 = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_8e0,0);
      FGenericPlatformString::Memcpy(local_8e0,L"audioLog",0x12);
      FUN_142088cf0(param_1[0x2e],&local_8e0);
      if (local_8e0 != 0) {
        FMemory::Free();
      }
    }
  }
  local_8c0 = 0;
  local_8b8 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_8c0,0);
  FGenericPlatformString::Memcpy(local_8c0,L"infoPanelLabel",0x1e);
  local_9f0 = &local_8d0;
  local_8d0 = (longlong *)0x0;
  local_9f8 = CONCAT71(local_9f8._1_7_,6);
  local_8c8 = 0;
  local_5a0 = 0;
  cVar6 = FUN_140e99270(param_1,param_1 + 0x31,&local_8c0,0);
  plVar11 = local_8d0;
  for (iVar8 = (int)local_8c8; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_8d0 != (longlong *)0x0) {
    FMemory::Free(local_8d0);
  }
  if (local_8c0 != 0) {
    FMemory::Free();
  }
  if (cVar6 != '\0') {
    (**(code **)(*(longlong *)param_1[0x31] + 0x2b0))((longlong *)param_1[0x31],local_7d0,1,0);
  }
  local_8a0 = 0;
  local_898 = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_8a0,0);
  FGenericPlatformString::Memcpy(local_8a0,L"infoPanelSecondaryLabel",0x30);
  local_9f0 = &local_8b0;
  local_8b0 = (longlong *)0x0;
  local_9f8 = CONCAT71(local_9f8._1_7_,6);
  local_8a8 = 0;
  local_640 = 0;
  cVar6 = FUN_140e99270(param_1,param_1 + 0x32,&local_8a0,0);
  plVar11 = local_8b0;
  for (iVar8 = (int)local_8a8; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_8b0 != (longlong *)0x0) {
    FMemory::Free(local_8b0);
  }
  if (local_8a0 != 0) {
    FMemory::Free();
  }
  if (cVar6 != '\0') {
    plVar11 = (longlong *)param_1[0x32];
    (**(code **)(*plVar11 + 0x2b0))(plVar11,local_840,1,0);
  }
  local_880 = 0;
  local_878 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_880,0);
  FGenericPlatformString::Memcpy(local_880,L"missionTimer",0x1a);
  local_9f0 = &local_890;
  local_890 = (longlong *)0x0;
  local_9f8 = CONCAT71(local_9f8._1_7_,6);
  local_888 = 0;
  local_5a8 = 0;
  cVar6 = FUN_140e99270(param_1,param_1 + 0x36,&local_880,0);
  plVar11 = local_890;
  for (iVar8 = (int)local_888; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_890 != (longlong *)0x0) {
    FMemory::Free(local_890);
  }
  if (local_880 != 0) {
    FMemory::Free();
  }
  if (cVar6 != '\0') {
    (**(code **)(*(longlong *)param_1[0x36] + 0x2b0))((longlong *)param_1[0x36],local_740,1,0);
  }
  FWeakObjectPtr::Get(param_1 + 0x3b);
  FWeakObjectPtr::IsValid(param_1 + 0x3b);
  FUN_140fd2110(param_1);
  FUN_140fa00d0(&local_9b0);
  FUN_140fa00d0(&local_9a0);
  if (local_738 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_738 + 1;
    lVar10 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_738)(local_738);
      LOCK();
      piVar1 = (int *)((longlong)local_738 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_738 + 8))(local_738,1);
      }
    }
  }
  if (local_850 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_850 + 1;
    lVar10 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_850)(local_850);
      LOCK();
      piVar1 = (int *)((longlong)local_850 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_850 + 8))(local_850,1);
      }
    }
  }
  if (local_838 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_838 + 1;
    lVar10 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_838)(local_838);
      LOCK();
      piVar1 = (int *)((longlong)local_838 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_838 + 8))(local_838,1);
      }
    }
  }
  if (local_7c8 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_7c8 + 1;
    lVar10 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_7c8)(local_7c8);
      LOCK();
      piVar1 = (int *)((longlong)local_7c8 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_7c8 + 8))(local_7c8,1);
      }
    }
  }
  if (local_9e8 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
code_r0x000140fd7059:
  lVar18 = *(longlong *)(lVar18 + 0x30);
  if (lVar18 == 0) goto LAB_140fd7062;
  goto LAB_140fd7050;
}



// FUNCTION 140fd9000 FUN_140fd9000 body=242 status=ok
// SIG undefined FUN_140fd9000(void)

void FUN_140fd9000(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar4 = *(longlong **)(param_1 + 800);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x278))(plVar4,0 < param_2);
  }
  if (*(longlong **)(param_1 + 0x328) != (longlong *)0x0) {
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    lVar5 = **(longlong **)(param_1 + 0x328);
    uVar6 = FText::AsNumber(local_28,param_2,0,&local_38);
    (**(code **)(lVar5 + 0x2b0))(*(undefined8 *)(param_1 + 0x328),uVar6,1,0);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_20 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    plVar4 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_30 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_30)(plStack_30);
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
  return;
}



// FUNCTION 140fd9100 FUN_140fd9100 body=566 status=ok
// SIG undefined FUN_140fd9100(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fd9100(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong lStack_d0;
  undefined4 *local_c8;
  ulonglong *puStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [16];
  undefined4 local_50 [2];
  longlong local_48;
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_1 + 0x358) != 0) {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_78,L"({0})",L"GFxMissionLogMenu",L"CellProgressText");
    puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_60,uVar6);
    local_50[0] = 0;
    local_c8 = local_50;
    local_28 = '\0';
    puStack_c0 = &local_20;
    local_d8 = *puVar7;
    lStack_d0 = puVar7[1];
    if (lStack_d0 != 0) {
      LOCK();
      *(int *)(lStack_d0 + 8) = *(int *)(lStack_d0 + 8) + 1;
      UNLOCK();
    }
    local_48 = (longlong)param_2;
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_b8,&local_c8);
    uVar6 = FText::Format(local_90,&local_d8,uVar6);
    FText::FText(local_a8,uVar6);
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_88 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_b8);
    if ((local_28 != '\0') && (local_28 = '\0', local_38 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_38 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    (**(code **)(**(longlong **)(param_1 + 0x358) + 0x2b0))
              (*(longlong **)(param_1 + 0x358),local_a8,1,0);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a0 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_70 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140fd9340 FUN_140fd9340 body=144 status=ok
// SIG undefined FUN_140fd9340(void)

void FUN_140fd9340(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((*(longlong *)(param_1 + 0x178) != 0) && (*(longlong *)(param_1 + 0x180) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x180) + 8);
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 0;
      iVar2 = 0;
    }
    UNLOCK();
    if (0 < iVar2) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x170,param_2,1);
    }
  }
  if ((*(longlong *)(param_1 + 400) != 0) && (*(longlong *)(param_1 + 0x198) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x198) + 8);
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 0;
      iVar2 = 0;
    }
    UNLOCK();
    if (0 < iVar2) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x188,param_3,1);
    }
  }
  return;
}



// FUNCTION 140fd93d0 FUN_140fd93d0 body=73 status=ok
// SIG undefined FUN_140fd93d0(void)

void FUN_140fd93d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = UObject::GetPrivateStaticClass();
    lVar2 = param_2;
    do {
      if (lVar2 == lVar1) goto LAB_140fd9400;
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  param_2 = 0;
LAB_140fd9400:
  *(longlong *)(param_1 + 0x590) = param_2;
  FUN_140fd9420(param_1);
  return;
}



// FUNCTION 140fd9420 FUN_140fd9420 body=252 status=ok
// SIG undefined FUN_140fd9420(void)

void FUN_140fd9420(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(longlong *)(param_1 + 0x590) != 0) {
    lVar5 = FUN_142f71d80();
    lVar4 = *(longlong *)(param_1 + 0x590);
    lVar7 = lVar4;
    if (lVar4 != 0) {
      while (lVar7 != lVar5) {
        lVar7 = *(longlong *)(lVar7 + 0x30);
        if (lVar7 == 0) {
          return;
        }
      }
      if (lVar4 != 0) {
        if (*(longlong *)(param_1 + 0x2b8) == 0) {
          *(undefined1 *)(param_1 + 0x5b0) = 1;
          return;
        }
        if (*(longlong **)(param_1 + 0x5a8) != (longlong *)0x0) {
          lVar4 = **(longlong **)(param_1 + 0x5a8);
          uVar6 = FUN_142f5bb60(param_1 + 0x590);
          uVar6 = FUN_142dea370(uVar6,local_28);
          (**(code **)(lVar4 + 0x2b0))(*(undefined8 *)(param_1 + 0x5a8),uVar6,1,0);
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
    }
  }
  return;
}



// FUNCTION 140fd9520 FUN_140fd9520 body=1830 status=ok
// SIG undefined FUN_140fd9520(void)

void FUN_140fd9520(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  undefined2 *puVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined2 *puVar15;
  longlong *plVar16;
  undefined2 *puVar17;
  uint7 uVar18;
  longlong *plVar19;
  longlong *plVar20;
  int iVar21;
  longlong local_res10;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  
  local_res10 = *(longlong *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  if (local_res10 == 0) {
LAB_140fd958e:
    local_res10 = 0;
  }
  else {
    lVar10 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(local_res10 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_res10 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140fd958e;
  }
  cVar6 = '\0';
  lVar10 = FWeakObjectPtr::Get(local_res10 + 0x58c);
  if (lVar10 != 0) {
    lVar11 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      cVar6 = FUN_142dcfc60(lVar10);
    }
  }
  plVar19 = *(longlong **)(param_1 + 0x1b0);
  if (plVar19 != (longlong *)0x0) {
    (**(code **)(*plVar19 + 0x278))(plVar19,0);
  }
  plVar19 = *(longlong **)(param_1 + 0x1b8);
  if (plVar19 != (longlong *)0x0) {
    (**(code **)(*plVar19 + 0x278))(plVar19,0);
  }
  plVar19 = *(longlong **)(param_1 + 0x1c0);
  if (plVar19 != (longlong *)0x0) {
    (**(code **)(*plVar19 + 0x278))(plVar19,0);
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    iVar21 = *param_2;
    if (iVar21 == 0) {
      local_e8 = 0;
      local_e0 = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
      FGenericPlatformString::Memcpy(local_e8,L"Large",0xc);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x1a8),&local_e8);
      if (local_e8 != 0) {
        FMemory::Free();
      }
      uVar13 = *(undefined8 *)(param_1 + 0x1b0);
    }
    else if (iVar21 == 1) {
      local_f8 = 0;
      local_f0 = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
      FGenericPlatformString::Memcpy(local_f8,L"Medium",0xe);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x1a8),&local_f8);
      if (local_f8 != 0) {
        FMemory::Free();
      }
      uVar13 = *(undefined8 *)(param_1 + 0x1b8);
    }
    else {
      if (iVar21 != 2) goto LAB_140fd976c;
      local_108 = 0;
      local_100 = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
      FGenericPlatformString::Memcpy(local_108,L"Small",0xc);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x1a8),&local_108);
      if (local_108 != 0) {
        FMemory::Free();
      }
      uVar13 = *(undefined8 *)(param_1 + 0x1c0);
    }
    *(undefined8 *)(param_1 + 0x1c8) = uVar13;
  }
LAB_140fd976c:
  iVar21 = *(int *)(param_1 + 0x1a0);
  *(char *)(param_1 + 0x1a5) = (char)param_2[0x32];
  iVar8 = *(int *)(param_1 + 0x198) + -1;
  if ((*(char *)((longlong)param_2 + 0xc9) == '\0') || (iVar21 == iVar8)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  lVar10 = 0x78;
  *(undefined1 *)(param_1 + 0x1a6) = uVar7;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FText::FText(local_98,param_2 + 0x14);
    local_a0 = 0x3c;
    local_a8 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
    puVar5 = local_a8;
    FGenericPlatformString::Memcpy
              (local_a8,L"Press {GbxMenu_Secondary2,30,30} to zoom out to Orbit View.",0x78);
    puVar12 = (undefined8 *)FTextInspector::GetSourceString(local_98);
    puVar15 = &DAT_143f3eda8;
    puVar17 = &DAT_143f3eda8;
    if ((int)local_a0 != 0) {
      puVar17 = puVar5;
    }
    if (*(int *)(puVar12 + 1) != 0) {
      puVar15 = (undefined2 *)*puVar12;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,puVar17);
    if (puVar5 != (undefined2 *)0x0) {
      FMemory::Free(puVar5);
    }
    if (iVar9 == 0) {
      uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_80,L"Press {GbxMenu_MapViewParent,30,30} to zoom out to Orbit View."
                          ,L"GFxMenuTutorial",L"GbxMapTutorialStadiaFix");
      FText::operator=(local_98,uVar13);
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar19 = local_78 + 1;
        lVar11 = *plVar19;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar1 = (int *)((longlong)local_78 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_78 + 8))(local_78,1);
          }
        }
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x278))(*(longlong **)(param_1 + 0x1c8),1);
    FText::operator=(param_1 + 0x1e8,param_2 + 0xe);
    FText::operator=(param_1 + 0x200,local_98);
    uVar13 = FUN_140fb1360(local_50,local_98);
    uVar14 = FUN_140fb1360(local_68,param_2 + 0xe);
    FUN_140fd9340(*(undefined8 *)(param_1 + 0x1c8),uVar14,uVar13);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar19 = local_60 + 1;
      lVar11 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar19 = local_48 + 1;
      lVar11 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    if (cVar6 == '\x01') {
      iVar9 = param_2[2];
joined_r0x000140fd99a4:
      if (iVar9 == 3) goto LAB_140fd99a6;
    }
    else {
      if (cVar6 == '\x02') {
        iVar9 = param_2[3];
        if (iVar9 != 3) goto LAB_140fd99aa;
      }
      else if (cVar6 == '\x03') {
        iVar9 = param_2[4];
        goto joined_r0x000140fd99a4;
      }
LAB_140fd99a6:
      iVar9 = param_2[1];
    }
LAB_140fd99aa:
    uVar13 = *(undefined8 *)(param_1 + 0x1c8);
    if (iVar9 == 0) {
      local_b0 = 7;
      local_b8 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
      FGenericPlatformString::Memcpy(local_b8,L"Center",0xe);
      FUN_142088cf0(uVar13,&local_b8);
      lVar11 = local_b8;
LAB_140fd9a8b:
      if (lVar11 != 0) {
        FMemory::Free();
      }
    }
    else {
      if (iVar9 == 1) {
        local_c0 = 5;
        local_c8 = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
        FGenericPlatformString::Memcpy(local_c8,L"Left",10);
        FUN_142088cf0(uVar13,&local_c8);
        lVar11 = local_c8;
        goto LAB_140fd9a8b;
      }
      if (iVar9 == 2) {
        local_d0 = 6;
        local_d8 = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
        FGenericPlatformString::Memcpy(local_d8,L"Right",0xc);
        FUN_142088cf0(uVar13,&local_d8);
        lVar11 = local_d8;
        goto LAB_140fd9a8b;
      }
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x1c8) + 0x1b0) = *(undefined1 *)(param_1 + 0x1a5);
    *(bool *)(*(longlong *)(param_1 + 0x1c8) + 0x1b1) = iVar21 == iVar8;
    *(undefined1 *)(*(longlong *)(param_1 + 0x1c8) + 0x1b2) = *(undefined1 *)(param_1 + 0x1a6);
    if (cVar6 == '\x01') {
      iVar21 = param_2[7];
      iVar8 = param_2[8];
    }
    else if (cVar6 == '\x02') {
      iVar21 = param_2[9];
      iVar8 = param_2[10];
    }
    else if (cVar6 == '\x03') {
      iVar21 = param_2[0xb];
      iVar8 = param_2[0xc];
    }
    else {
      iVar21 = param_2[5];
      iVar8 = param_2[6];
    }
    FUN_14208ff10(*(undefined8 *)(param_1 + 0x1c8),iVar21,iVar8);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar19 = local_90 + 1;
      lVar11 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        iVar21 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar21 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
  }
  if (cVar6 == '\x01') {
    iVar21 = param_2[0x20];
joined_r0x000140fd9b99:
    if (0 < iVar21) goto LAB_140fd9ba1;
  }
  else if (cVar6 == '\x02') {
    if (0 < param_2[0x24]) {
      lVar10 = 0x88;
      goto LAB_140fd9ba1;
    }
  }
  else if (cVar6 == '\x03') {
    iVar21 = param_2[0x28];
    lVar10 = 0x98;
    goto joined_r0x000140fd9b99;
  }
  lVar10 = 0x68;
LAB_140fd9ba1:
  plVar19 = *(longlong **)(param_1 + 0x1d0);
  plVar20 = plVar19 + (longlong)*(int *)(param_1 + 0x1d8) * 4;
  do {
    if (plVar19 == plVar20) {
      if (*(longlong *)(param_1 + 0x1c8) != 0) {
        FUN_140fd44b0();
      }
      if (local_res10 != 0) {
        LOCK();
        *(undefined4 *)(local_res10 + 0x588) = 1;
        UNLOCK();
      }
      return;
    }
    plVar3 = (longlong *)plVar19[3];
    if (plVar3 != (longlong *)0x0) {
      plVar16 = *(longlong **)(lVar10 + (longlong)param_2);
      plVar2 = plVar16 + *(int *)(lVar10 + 8 + (longlong)param_2);
      uVar18 = (uint7)((ulonglong)plVar2 >> 8);
      if (plVar16 != plVar2) {
        do {
          if (*plVar16 == *plVar19) {
            lVar11 = CONCAT71(uVar18,1);
            goto LAB_140fd9bf0;
          }
          plVar16 = plVar16 + 1;
        } while (plVar16 != plVar2);
      }
      lVar11 = (ulonglong)uVar18 << 8;
LAB_140fd9bf0:
      (**(code **)(*plVar3 + 0x278))(plVar3,lVar11);
    }
    plVar19 = plVar19 + 4;
  } while( true );
}



// FUNCTION 140fd9c50 FUN_140fd9c50 body=754 status=ok
// SIG undefined FUN_140fd9c50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140fd9c50(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  FUN_142ed2600(param_1,3);
  local_20 = 6;
  local_28 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"label",0xc);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  cVar3 = FUN_140e99270(param_1,param_1 + 0x308,&local_28,0,6,&local_38);
  plVar6 = local_38;
  for (iVar5 = (int)local_30; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (cVar3 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x308) + 0x2b0))
              (*(longlong **)(param_1 + 0x308),param_2 + 8,1,0);
  }
  if (*(byte *)(param_2 + 0x20) < 2) {
    uVar1 = *(undefined1 *)(param_2 + 0x46);
    if ((*(longlong *)(param_1 + 0x310) == 0) &&
       (cVar3 = FUN_14208d2d0(param_1,param_1 + 0x310,L"typeIcon"), cVar3 != '\0')) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_1468734c8) &&
         (_Init_thread_header(&DAT_1468734c8), DAT_1468734c8 == -1)) {
        DAT_14629ebc8 = 0;
        _DAT_14629ebd0 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629ebc8,0);
        FGenericPlatformString::Memcpy(DAT_14629ebc8,L"none",10);
        atexit((_func_5014 *)&LAB_143e5b410);
        _Init_thread_footer(&DAT_1468734c8);
      }
      FUN_14203e230(*(undefined8 *)(param_1 + 0x310),&DAT_14629ebc8);
    }
    lVar2 = *(longlong *)(param_1 + 0x310);
    if (lVar2 != 0) {
      uVar4 = FUN_140fb4120(&local_28,uVar1);
      FUN_14203e230(lVar2,uVar4);
      if (local_28 != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0x350) != 0) {
      local_28 = 0;
      local_20 = 0xf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      FGenericPlatformString::Memcpy(local_28,L"missionTracked",0x1e);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x350),&local_28);
      if (local_28 != 0) {
        FMemory::Free();
      }
    }
  }
  (**(code **)(*(longlong *)(param_1 + 0x170) + 0x38))
            ((longlong *)(param_1 + 0x170),*(char *)(param_2 + 0x20) != '\x02');
  FUN_142ed2820(param_1,*(char *)(param_2 + 0x41) != '\0',1);
  FUN_140fcd270(param_1,param_2);
  cVar3 = FUN_14208d2d0(param_1,param_1 + 0x330,L"hintWrapper");
  if (cVar3 != '\0') {
    if ((*(char *)(param_2 + 0x43) == '\0') && (*(char *)(param_2 + 0x41) == '\0')) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    FUN_142056670(*(undefined8 *)(param_1 + 0x330),uVar4);
  }
  FUN_142ed3eb0(param_1,*(char *)(param_2 + 0x45) == '\0');
  return;
}



// FUNCTION 140fd9f50 FUN_140fd9f50 body=202 status=ok
// SIG undefined FUN_140fd9f50(void)

void FUN_140fd9f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong **pplVar4;
  longlong *local_28;
  undefined8 local_20;
  undefined1 local_18 [16];
  
  pplVar4 = &local_28;
  local_28 = (longlong *)0x0;
  local_20 = 0;
  plVar1 = (longlong *)FUN_140ecc7d0();
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
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_3,1,0,pplVar4);
    FLinearColor::FLinearColor(local_18,param_4);
    FUN_142f0c220(plVar1,local_18,1);
  }
  return;
}



// FUNCTION 140fda020 FUN_140fda020 body=392 status=ok
// SIG undefined FUN_140fda020(void)

void FUN_140fda020(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *local_28;
  undefined8 local_20;
  
  plVar7 = (longlong *)(param_1 + 0x1d0);
  if (plVar7 != param_3) {
    iVar3 = *(int *)(param_1 + 0x1d8);
    if (iVar3 != 0) {
      plVar5 = (longlong *)(*plVar7 + 8);
      do {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = (int)param_3[1];
    lVar2 = *param_3;
    *(int *)(param_1 + 0x1d8) = iVar3;
    if ((iVar3 == 0) && (*(int *)(param_1 + 0x1dc) == 0)) {
      *(undefined4 *)(param_1 + 0x1dc) = 0;
    }
    else {
      TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(plVar7,iVar3);
      puVar4 = (undefined8 *)*plVar7;
      if (iVar3 != 0) {
        puVar6 = (undefined8 *)(lVar2 + 0x18);
        do {
          *puVar4 = puVar6[-3];
          FString::FString(puVar4 + 1,puVar6 + -2);
          uVar1 = *puVar6;
          puVar6 = puVar6 + 4;
          puVar4[3] = uVar1;
          puVar4 = puVar4 + 4;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  if (param_2 != 0) {
    lVar2 = *plVar7;
    lVar8 = (longlong)*(int *)(param_1 + 0x1d8) * 0x20 + lVar2;
    for (; lVar2 != lVar8; lVar2 = lVar2 + 0x20) {
      local_28 = (longlong *)0x0;
      local_20 = 0;
      FUN_140e98b90(param_2,lVar2 + 0x18,lVar2 + 8,0,6,&local_28);
      plVar7 = local_28;
      for (iVar3 = (int)local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 2;
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free(local_28);
      }
      plVar7 = *(longlong **)(lVar2 + 0x18);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x278))(plVar7,0);
      }
    }
  }
  return;
}



// FUNCTION 140fda1b0 FUN_140fda1b0 body=492 status=ok
// SIG undefined FUN_140fda1b0(void)

void FUN_140fda1b0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(longlong **)(param_1 + 0x6a8) != (longlong *)0x0) {
    lVar5 = **(longlong **)(param_1 + 0x6a8);
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"Mayhem Mode",L"GFxMayhemMenu",L"InfoHeader");
    (**(code **)(lVar5 + 0x2b0))(*(undefined8 *)(param_1 + 0x6a8),uVar4,1,0);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  }
  plVar3 = *(longlong **)(param_1 + 0x6b0);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x2b0))(plVar3,param_1 + 0x7c0,1,0);
  }
  plVar3 = *(longlong **)(param_1 + 0x6c0);
  if (plVar3 != (longlong *)0x0) {
    lVar5 = 0x808;
    if (*(char *)(param_1 + 0x752) == '\0') {
      lVar5 = 0x7d8;
    }
    (**(code **)(*plVar3 + 0x2b0))(plVar3,lVar5 + param_1,0x701,0);
  }
  if (*(longlong **)(param_1 + 0x6c8) != (longlong *)0x0) {
    lVar5 = **(longlong **)(param_1 + 0x6c8);
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"Stats",L"GFxMayhemMenu",L"StatsHeader");
    (**(code **)(lVar5 + 0x2b0))(*(undefined8 *)(param_1 + 0x6c8),uVar4,1,0);
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_38 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
  }
  if (*(longlong **)(param_1 + 0x700) != (longlong *)0x0) {
    lVar5 = **(longlong **)(param_1 + 0x700);
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"Modifiers",L"GFxMayhemMenu",L"ModifiersHeader");
    (**(code **)(lVar5 + 0x2b0))(*(undefined8 *)(param_1 + 0x700),uVar4,1,0);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  return;
}



// FUNCTION 140fda3b0 FUN_140fda3b0 body=88 status=ok
// SIG undefined FUN_140fda3b0(void)

bool FUN_140fda3b0(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146873460;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 140fda410 FUN_140fda410 body=164 status=ok
// SIG undefined FUN_140fda410(void)

void FUN_140fda410(undefined8 param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  short *psVar3;
  longlong local_18;
  ulonglong local_10;
  
  psVar3 = &DAT_14463e834;
  if (param_2 != '\0') {
    psVar3 = &DAT_144640298;
  }
  local_18 = 0;
  local_10 = 0;
  if (*psVar3 != 0) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (psVar3[lVar2] != 0);
    uVar1 = (int)lVar2 + 1;
    local_10 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,psVar3,(longlong)(int)uVar1 * 2);
  }
  FUN_142088910(param_1,&local_18);
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140fda4c0 FUN_140fda4c0 body=2512 status=ok
// SIG undefined FUN_140fda4c0(void)

void FUN_140fda4c0(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  longlong param_5,undefined8 *param_6,undefined8 param_7,longlong *param_8)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  void *_Src;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  byte bVar16;
  undefined2 *puVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined2 *puVar20;
  int iVar21;
  byte local_res8;
  longlong local_138;
  undefined8 local_130;
  void *local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  longlong local_68 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_142088ee0(*(longlong *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x2a4));
  }
  uVar19 = 0;
  if ((param_2 == 0) || (uVar8 = FWeakObjectPtr::Get(param_2 + 0x70), uVar8 == 0)) {
LAB_140fda550:
    uVar8 = uVar19;
  }
  else {
    lVar9 = UBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(uVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140fda550;
  }
  if (param_3 == 0) {
    return;
  }
  if (uVar8 == 0) {
    return;
  }
  lVar9 = *(longlong *)(param_3 + 0xd8);
  if (lVar9 != 0) {
    lVar10 = UARGetCandidateObjectAsyncTaskBlueprintProxy::GetPrivateStaticClass();
    lVar13 = *(longlong *)(lVar9 + 0x10);
    if ((*(int *)(lVar13 + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar13 + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
        lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      if (*(char *)(lVar9 + 0x70) == '\0') {
        if (*(int *)(param_6 + 1) < 2) {
          cVar7 = FUN_142dd3360(uVar8,*(undefined8 *)(param_3 + 0x10));
          lVar13 = 0x78;
          if (cVar7 != '\0') {
            lVar13 = 0x88;
          }
          param_6 = (undefined8 *)(lVar13 + lVar9);
        }
        local_120 = *(int *)(param_6 + 1);
        lVar13 = (longlong)local_120;
        _Src = (void *)*param_6;
        local_128 = (void *)0x0;
        if (local_120 == 0) {
          local_11c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_128,local_120,0);
          _guard_xfg_dispatch_icall_nop(local_128,_Src,lVar13 * 2);
        }
        (**(code **)(**(longlong **)(param_1 + 0x198) + 0x278))
                  (*(longlong **)(param_1 + 0x198),1 < local_120);
        FUN_142088cf0(*(undefined8 *)(param_1 + 0x198),&local_128);
        cVar7 = FText::IsEmpty(param_5);
        if (cVar7 != '\0') {
          param_5 = lVar9 + 0x30;
        }
        (**(code **)(**(longlong **)(param_1 + 0x188) + 0x2b0))
                  (*(longlong **)(param_1 + 0x188),param_5,1,0);
        plVar18 = *(longlong **)(param_1 + 0x1a0);
        if (plVar18 != (longlong *)0x0) {
          (**(code **)(*plVar18 + 0x278))(plVar18,0);
        }
        if (local_128 != (void *)0x0) {
          FMemory::Free();
        }
      }
      else {
        plVar18 = *(longlong **)(param_1 + 0x1a0);
        if (plVar18 != (longlong *)0x0) {
          (**(code **)(*plVar18 + 0x278))(plVar18,CONCAT71((int7)((ulonglong)lVar13 >> 8),1));
        }
        (**(code **)(**(longlong **)(param_1 + 0x198) + 0x278))(*(longlong **)(param_1 + 0x198),0);
        cVar7 = FUN_142dd3360(uVar8,*(undefined8 *)(param_3 + 0x10));
        if (cVar7 == '\0') {
          uVar12 = *(undefined8 *)(lVar9 + 0x60);
        }
        else {
          uVar12 = *(undefined8 *)(lVar9 + 0x68);
        }
        local_118 = 0;
        local_110 = 0xf;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
        FGenericPlatformString::Memcpy(local_118,L"dlcIcon_nopack",0x1e);
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x2a0))
                  (*(longlong **)(param_1 + 0x38),&local_118,uVar12);
        if (local_118 != 0) {
          FMemory::Free();
        }
        cVar7 = FText::IsEmpty(param_5);
        if (cVar7 != '\0') {
          param_5 = lVar9 + 0x30;
        }
        (**(code **)(**(longlong **)(param_1 + 0x188) + 0x2b0))
                  (*(longlong **)(param_1 + 0x188),param_5,1,0);
      }
      goto LAB_140fda7cf;
    }
  }
  plVar18 = *(longlong **)(param_1 + 0x1a0);
  if (plVar18 != (longlong *)0x0) {
    (**(code **)(*plVar18 + 0x278))(plVar18,0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x198) + 0x278))(*(longlong **)(param_1 + 0x198),0);
  lVar9 = **(longlong **)(param_1 + 0x188);
  uVar12 = FUN_1404b03b0();
  (**(code **)(lVar9 + 0x2b0))(*(undefined8 *)(param_1 + 0x188),uVar12,1,0);
LAB_140fda7cf:
  cVar7 = FText::IsEmpty(param_4);
  if (cVar7 != '\0') {
    param_4 = param_3 + 0x40;
  }
  (**(code **)(**(longlong **)(param_1 + 0x180) + 0x2b0))
            (*(longlong **)(param_1 + 0x180),param_4,1,0);
  FText::FText(local_80);
  lVar13 = *param_8;
  lVar9 = lVar13 + (longlong)(int)param_8[1] * 0x18;
  for (; lVar13 != lVar9; lVar13 = lVar13 + 0x18) {
    puVar11 = (undefined8 *)FText::ToString(lVar13);
    if (*(int *)(puVar11 + 1) == 0) {
      puVar17 = &DAT_143f3eda8;
    }
    else {
      puVar17 = (undefined2 *)*puVar11;
    }
    puVar11 = (undefined8 *)FText::ToString(local_80);
    if (*(int *)(puVar11 + 1) == 0) {
      puVar20 = &DAT_143f3eda8;
    }
    else {
      puVar20 = (undefined2 *)*puVar11;
    }
    FString::PrintfImpl(local_68,L"%s\n%s",puVar20,puVar17);
    uVar12 = FText::FromString(local_58,local_68);
    FText::operator=(local_80,uVar12);
    plVar18 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_50 + 1;
      lVar10 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        iVar21 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar21 == 1) {
          (**(code **)(*plVar18 + 8))(plVar18,1);
        }
      }
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
  }
  cVar7 = FText::IsEmpty(local_80);
  puVar14 = (undefined1 *)(param_3 + 0x58);
  if (cVar7 == '\0') {
    puVar14 = local_80;
  }
  (**(code **)(**(longlong **)(param_1 + 400) + 0x2b0))(*(longlong **)(param_1 + 400),puVar14,1,0);
  plVar18 = *(longlong **)(param_1 + 0x1c0);
  if (plVar18 != (longlong *)0x0) {
    (**(code **)(*plVar18 + 0x278))(plVar18,1);
  }
  lVar9 = FUN_1413f2350();
  if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
      != lVar9 + 0x88)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  local_a8 = 0;
  local_a0 = 0;
  if (!bVar6) {
    param_3 = uVar19;
  }
  local_b8 = 0;
  bVar16 = 0;
  local_b0 = 0;
  local_res8 = 0;
  if (param_3 != 0) {
    local_138 = 0;
    local_130 = 0;
    FUN_140c454f0(param_3,*(undefined8 *)(param_1 + 0x298),&local_138,&local_a8,&local_b8);
    if (0 < *(int *)(param_1 + 0x1d0)) {
      lVar9 = 0;
      plVar18 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      uVar8 = uVar19;
      do {
        iVar21 = (int)uVar19;
        if ((iVar21 < 0) || ((int)local_130 <= iVar21)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (bVar6) {
          puVar15 = (undefined *)(local_138 + 8 + (longlong)iVar21 * 0x20);
        }
        else {
          if ((*(int *)(*plVar18 + 0x38) < DAT_146852c50) &&
             (_Init_thread_header(&DAT_146852c50), DAT_146852c50 == -1)) {
            FText::FText(&DAT_146852c38,0);
            atexit(FUN_143e3e8f0);
            _Init_thread_footer(&DAT_146852c50);
          }
          puVar15 = &DAT_146852c38;
        }
        FText::FText(local_98,puVar15);
        cVar7 = FText::IsEmpty(local_98);
        bVar16 = bVar16 | cVar7 == '\0';
        plVar4 = *(longlong **)(lVar9 + *(longlong *)(param_1 + 0x1c8));
        if (plVar4 != (longlong *)0x0) {
          lVar13 = *plVar4;
          cVar7 = FText::IsEmpty(local_98);
          (**(code **)(lVar13 + 0x278))(plVar4,cVar7 == '\0');
          (**(code **)(*plVar4 + 0x2b0))(plVar4,local_98,1,0);
        }
        if ((iVar21 < 0) || (*(int *)(param_1 + 0x1e0) <= iVar21)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if ((bVar6) &&
           (plVar4 = *(longlong **)(lVar9 + *(longlong *)(param_1 + 0x1d8)),
           plVar4 != (longlong *)0x0)) {
          cVar7 = FText::IsEmpty(local_98);
          pcVar5 = *(code **)(*plVar4 + 0x278);
          if (cVar7 == '\0') {
            (*pcVar5)(plVar4,CONCAT71((int7)((ulonglong)*plVar4 >> 8),1));
            if (*(char *)(local_138 + uVar8) == '\0') {
              local_e0 = 5;
              local_e8 = 0;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
              FGenericPlatformString::Memcpy(local_e8,L"cash",10);
              FUN_142088cf0(plVar4,&local_e8);
              lVar13 = local_e8;
            }
            else if (*(char *)(local_138 + uVar8) == '\x01') {
              local_f8 = 0;
              local_f0 = 8;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
              FGenericPlatformString::Memcpy(local_f8,L"eridium",0x10);
              FUN_142088cf0(plVar4,&local_f8);
              lVar13 = local_f8;
            }
            else {
              local_108 = 0;
              local_100 = 8;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
              FGenericPlatformString::Memcpy(local_108,L"default",0x10);
              FUN_142088cf0(plVar4,&local_108);
              lVar13 = local_108;
            }
            if (lVar13 != 0) {
              FMemory::Free();
            }
          }
          else {
            (*pcVar5)(plVar4,0);
          }
        }
        plVar4 = local_90;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_90 + 1;
          lVar13 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_90)(local_90);
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
        uVar19 = (ulonglong)(iVar21 + 1U);
        lVar9 = lVar9 + 8;
        uVar8 = uVar8 + 0x20;
        local_res8 = bVar16;
      } while ((int)(iVar21 + 1U) < *(int *)(param_1 + 0x1d0));
    }
    if ((int)local_130 != 0) {
      plVar18 = (longlong *)(local_138 + 0x10);
      iVar21 = (int)local_130;
      do {
        plVar4 = (longlong *)*plVar18;
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
        plVar18 = plVar18 + 4;
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
    }
    if (local_138 != 0) {
      FMemory::Free();
    }
  }
  uVar19 = 0;
  plVar18 = *(longlong **)(param_1 + 0x200);
  if ((plVar18 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x1c0) != 0)) {
    (**(code **)(*plVar18 + 0x278))(plVar18,local_res8);
    (**(code **)(**(longlong **)(param_1 + 0x1c0) + 0x278))
              (*(longlong **)(param_1 + 0x1c0),local_res8);
    plVar18 = *(longlong **)(param_1 + 0x1c8);
    uVar8 = (longlong)*(int *)(param_1 + 0x1d0) & 0x1fffffffffffffff;
    if (plVar18 + *(int *)(param_1 + 0x1d0) < plVar18) {
      uVar8 = uVar19;
    }
    if (uVar8 != 0) {
      do {
        plVar4 = (longlong *)*plVar18;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x278))(plVar4,local_res8);
        }
        plVar18 = plVar18 + 1;
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar8);
    }
  }
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    if ((((*(longlong *)(param_1 + 0x1f8) == 0) || (*(longlong *)(param_1 + 0x1f0) == 0)) ||
        ((int)local_a0 < 2)) || ((int)local_b0 < 2)) {
      local_c8 = 0;
      local_c0 = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
      FGenericPlatformString::Memcpy(local_c8,&DAT_144642f88,8);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x1e8),&local_c8);
      lVar9 = local_c8;
    }
    else {
      FUN_142088cf0(*(longlong *)(param_1 + 0x1f8),&local_a8);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x1f0),&local_b8);
      local_d8 = 0;
      local_d0 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
      FGenericPlatformString::Memcpy(local_d8,L"show",10);
      FUN_142088910(*(undefined8 *)(param_1 + 0x1e8),&local_d8);
      lVar9 = local_d8;
    }
    if (lVar9 != 0) {
      FMemory::Free();
    }
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_78 + 1;
    lVar9 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      iVar21 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar21 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  return;
}



// FUNCTION 140fdae90 FUN_140fdae90 body=1173 status=ok
// SIG undefined FUN_140fdae90(void)

void FUN_140fdae90(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong local_a8 [6];
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  FUN_140fd5ac0(param_1,3);
  FUN_140fd61e0(param_1,1,0);
  if (*(longlong *)(param_1 + 0x198) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x180) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x188) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 400) == 0) {
    return;
  }
  if (*(char *)(param_3 + 0xa0) != '\0') {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_60,&DAT_144641930,L"GFxMapMenu",L"QuestionMarks");
    (**(code **)(**(longlong **)(param_1 + 0x198) + 0x278))(*(longlong **)(param_1 + 0x198),0);
    plVar9 = *(longlong **)(param_1 + 0x1a0);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x278))(plVar9,0);
    }
    lVar6 = **(longlong **)(param_1 + 0x180);
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_48,L"Undiscovered",L"GFxMapMenu",L"UndiscoveredLabel");
    (**(code **)(lVar6 + 0x2b0))(*(undefined8 *)(param_1 + 0x180),uVar5,1,0);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_40 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    (**(code **)(**(longlong **)(param_1 + 0x188) + 0x2b0))
              (*(longlong **)(param_1 + 0x188),local_60,1,0);
    lVar6 = **(longlong **)(param_1 + 400);
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_30,L"Keep exploring to discover!",L"GFxMapMenu",L"KeepExploring");
    (**(code **)(lVar6 + 0x2b0))(*(undefined8 *)(param_1 + 400),uVar5,1,0);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_28 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
        }
      }
    }
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
      iVar8 = *(int *)(param_1 + 0x2a4);
      iVar4 = FUN_142eed950(*(undefined8 *)(param_1 + 400));
      iVar4 = iVar4 + 1;
      if (iVar4 < 1) {
        iVar8 = 1;
      }
      else if (iVar4 < iVar8) {
        iVar8 = iVar4;
      }
      FUN_142088ee0(*(undefined8 *)(param_1 + 0x1a8),iVar8);
    }
    plVar9 = *(longlong **)(param_1 + 0x1c0);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x278))(plVar9,0);
    }
    uVar12 = 0;
    plVar9 = *(longlong **)(param_1 + 0x1c8);
    uVar10 = (longlong)*(int *)(param_1 + 0x1d0) & 0x1fffffffffffffff;
    if (plVar9 + *(int *)(param_1 + 0x1d0) < plVar9) {
      uVar10 = uVar12;
    }
    uVar11 = uVar12;
    if (uVar10 != 0) {
      do {
        plVar2 = (longlong *)*plVar9;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x278))(plVar2,0);
        }
        plVar9 = plVar9 + 1;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar10);
    }
    plVar9 = *(longlong **)(param_1 + 0x1d8);
    uVar10 = (longlong)*(int *)(param_1 + 0x1e0) & 0x1fffffffffffffff;
    if (plVar9 + *(int *)(param_1 + 0x1e0) < plVar9) {
      uVar10 = uVar12;
    }
    if (uVar10 != 0) {
      do {
        plVar2 = (longlong *)*plVar9;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x278))(plVar2,0);
        }
        plVar9 = plVar9 + 1;
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar10);
    }
    if (*(longlong *)(param_1 + 0x1e8) != 0) {
      local_a8[0] = 0;
      local_a8[1] = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
      FGenericPlatformString::Memcpy(local_a8[0],&DAT_144641a08,8);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x1e8),local_a8);
      if (local_a8[0] != 0) {
        FMemory::Free();
      }
    }
    plVar9 = *(longlong **)(param_1 + 0x200);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x278))(plVar9,0);
    }
    if (local_58 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar9 = local_58 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 != 1) {
      return;
    }
    (**(code **)*local_58)(local_58);
    LOCK();
    piVar1 = (int *)((longlong)local_58 + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 != 1) {
      return;
    }
    (**(code **)(*local_58 + 8))(local_58,1);
    return;
  }
  local_a8[4] = 0;
  local_a8[5] = 0;
  uVar5 = FUN_1404b03b0();
  FText::FText(local_78,uVar5);
  local_a8[2] = 0;
  local_a8[3] = 0;
  lVar6 = FUN_1411e0fd0(param_3);
  if (lVar6 != 0) {
    lVar7 = FUN_1413f2350();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140fdb286;
  }
  lVar6 = 0;
LAB_140fdb286:
  FUN_140fda4c0(param_1,param_2,lVar6,local_78,local_78,local_a8 + 2,local_78,local_a8 + 4);
  if (local_a8[2] != 0) {
    FMemory::Free();
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_70 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(local_a8 + 4);
  return;
}



// FUNCTION 140fdb330 FUN_140fdb330 body=938 status=ok
// SIG undefined FUN_140fdb330(void)

void FUN_140fdb330(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  cVar3 = FUN_140fd5ac0(param_1,3);
  if (cVar3 == '\0') {
    return;
  }
  FUN_140fd61e0(param_1,1,0);
  if ((param_2 == 0) || (lVar4 = FWeakObjectPtr::Get(param_2 + 0x70), lVar4 == 0)) {
LAB_140fdb3bc:
    lVar4 = 0;
  }
  else {
    lVar5 = UBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140fdb3bc;
  }
  lVar5 = 0;
  if ((lVar4 == 0) || (param_3 == 0)) goto LAB_140fdb5d8;
  lVar5 = *(longlong *)(param_3 + 0x50);
  if (lVar5 != 0) {
    if (*(longlong *)(lVar5 + 0x758) != 0) {
      lVar6 = FUN_142dfdfe0();
      for (lVar7 = *(longlong *)(lVar5 + 0x758); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
        if (lVar7 == lVar6) {
          if (*(longlong *)(lVar5 + 0x758) != 0) {
            lVar5 = *(longlong *)(param_3 + 0x50);
            if (*(longlong *)(lVar5 + 0x758) == 0) goto LAB_140fdb48e;
            lVar6 = FUN_142dfdfe0();
            lVar5 = *(longlong *)(lVar5 + 0x758);
            lVar7 = lVar5;
            goto joined_r0x000140fdb47c;
          }
          break;
        }
      }
    }
    lVar5 = *(longlong *)(param_3 + 0x50);
    if (*(longlong *)(lVar5 + 0x750) != 0) {
      lVar6 = FUN_142dfdfe0();
      lVar5 = *(longlong *)(lVar5 + 0x750);
      for (lVar7 = lVar5; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
        if (lVar7 == lVar6) {
          if (lVar5 != 0) {
            lVar5 = *(longlong *)(param_3 + 0x50);
            if (*(longlong *)(lVar5 + 0x750) == 0) goto LAB_140fdb511;
            lVar6 = FUN_142dfdfe0();
            lVar5 = *(longlong *)(lVar5 + 0x750);
            lVar7 = lVar5;
            goto joined_r0x000140fdb501;
          }
          break;
        }
      }
    }
  }
  goto LAB_140fdb562;
joined_r0x000140fdb47c:
  if (lVar7 == 0) goto LAB_140fdb48e;
  if (lVar7 == lVar6) goto LAB_140fdb490;
  lVar7 = *(longlong *)(lVar7 + 0x30);
  goto joined_r0x000140fdb47c;
LAB_140fdb48e:
  lVar5 = 0;
LAB_140fdb490:
  lVar5 = FUN_142dcdc10(lVar4,lVar5);
  if (lVar5 != 0) {
    lVar7 = FUN_142dfdfe0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) goto LAB_140fdb553;
    bVar2 = true;
    goto LAB_140fdb555;
  }
  goto LAB_140fdb562;
joined_r0x000140fdb501:
  if (lVar7 == 0) goto LAB_140fdb511;
  if (lVar7 == lVar6) goto LAB_140fdb513;
  lVar7 = *(longlong *)(lVar7 + 0x30);
  goto joined_r0x000140fdb501;
LAB_140fdb511:
  lVar5 = 0;
LAB_140fdb513:
  lVar5 = FUN_142dcdc10(lVar4,lVar5);
  if (lVar5 != 0) {
    lVar7 = FUN_142dfdfe0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
LAB_140fdb553:
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
LAB_140fdb555:
    if ((bVar2) && (lVar5 != 0)) goto LAB_140fdb5d8;
  }
LAB_140fdb562:
  if (*(longlong *)(param_3 + 0x238) != 0) {
    lVar6 = FUN_142dfdfe0();
    lVar5 = *(longlong *)(param_3 + 0x238);
    for (lVar7 = lVar5; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar6) goto LAB_140fdb590;
    }
  }
  lVar5 = 0;
LAB_140fdb590:
  lVar5 = FUN_142dcdc10(lVar4,lVar5);
  if (lVar5 != 0) {
    lVar4 = FUN_142dfdfe0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140fdb5d8;
  }
  lVar5 = 0;
LAB_140fdb5d8:
  if (((*(longlong *)(param_1 + 0x198) != 0) && (param_3 != 0)) && (lVar5 != 0)) {
    FUN_140fda4c0(param_1,param_2,lVar5,param_4,param_5,param_6,param_7,param_8);
    lVar4 = *(longlong *)(lVar5 + 0xd8);
    if (lVar4 != 0) {
      lVar5 = UARGetCandidateObjectAsyncTaskBlueprintProxy::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (*(char *)(lVar4 + 0x70) != '\0')) {
        return;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x198) + 0x278))(*(longlong **)(param_1 + 0x198),1);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x198),param_3 + 0x88);
    plVar1 = *(longlong **)(param_1 + 0x1a0);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x278))(plVar1,0);
    }
  }
  return;
}



// FUNCTION 140fdb6e0 FUN_140fdb6e0 body=271 status=ok
// SIG undefined FUN_140fdb6e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fdb6e0(undefined8 param_1)

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
  local_b8[0] = &LAB_140faeb50;
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



// FUNCTION 140fdb7f0 FUN_140fdb7f0 body=4604 status=ok
// SIG undefined FUN_140fdb7f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fdb7f0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  char cVar6;
  undefined1 uVar7;
  byte bVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined4 *puVar20;
  longlong *plVar21;
  longlong *plVar22;
  int iVar23;
  int iVar24;
  wchar_t *pwVar25;
  uint uVar26;
  longlong lVar27;
  undefined1 auStack_448 [32];
  longlong **local_428;
  uint local_418;
  int local_414;
  longlong local_410;
  longlong *local_408;
  longlong local_400;
  longlong *local_3f8;
  longlong local_3f0;
  int local_3e8;
  longlong local_3e0;
  longlong local_3d8;
  undefined8 local_3d0;
  longlong local_3c8;
  ulonglong local_3c0;
  longlong local_3b8;
  ulonglong local_3b0;
  longlong local_3a8;
  undefined8 local_3a0;
  longlong local_398;
  undefined8 local_390;
  longlong local_388;
  undefined8 local_380;
  longlong *local_378;
  undefined8 local_370;
  longlong local_368;
  undefined8 local_360;
  longlong local_358;
  undefined8 local_350;
  longlong local_348;
  undefined8 local_340;
  longlong local_338;
  undefined8 local_330;
  longlong *local_328;
  undefined8 local_320;
  longlong *local_318;
  undefined1 local_310 [4];
  undefined1 local_30c [4];
  undefined1 local_308 [8];
  longlong local_300;
  longlong *local_2f8;
  undefined4 *local_2f0;
  longlong *local_2e8;
  undefined4 *local_2e0;
  undefined8 local_2d8;
  longlong *plStack_2d0;
  longlong *local_2c8;
  undefined4 *local_2c0;
  undefined8 local_2b8;
  longlong *plStack_2b0;
  undefined8 local_2a8;
  undefined1 local_2a0 [8];
  undefined1 local_298 [8];
  undefined1 local_290 [8];
  undefined1 local_288 [8];
  undefined8 local_280;
  undefined1 local_278 [8];
  longlong *local_270;
  undefined1 local_260 [8];
  longlong *local_258;
  undefined1 local_248 [8];
  longlong *local_240;
  undefined1 local_230 [8];
  longlong *local_228;
  undefined1 local_218 [8];
  longlong *local_210;
  undefined1 local_200 [8];
  longlong *local_1f8;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined1 local_1d0 [8];
  longlong *local_1c8;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 local_d8 [4];
  undefined1 local_c8 [8];
  longlong *local_c0;
  char local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [8];
  longlong *local_90;
  char local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_448;
  plVar22 = (longlong *)0x0;
  local_418 = 0;
  if (((longlong *)param_1[0x53] != (longlong *)0x0) &&
     (local_408 = param_1, local_3f0 = param_2,
     lVar9 = (**(code **)(*(longlong *)param_1[0x53] + 0x148))(), lVar9 != 0)) {
    uVar10 = (**(code **)(*param_1 + 0x148))(param_1);
    local_300 = FUN_142f6c9f0(uVar10);
    if ((local_300 != 0) && ((param_2 != 0 && (cVar6 = FUN_140fd5ac0(param_1,4), cVar6 != '\0')))) {
      if (param_1[0x41] != 0) {
        local_388 = 0;
        local_380 = 7;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_388,0);
        FGenericPlatformString::Memcpy(local_388,L"normal",0xe);
        FUN_142088cf0(param_1[0x41],&local_388);
        if (local_388 != 0) {
          FMemory::Free();
        }
      }
      if (param_1[0x35] != 0) {
        FUN_142088ee0(param_1[0x35],*(undefined4 *)((longlong)param_1 + 0x2a4));
      }
      if (*(byte *)(param_2 + 600) == 0) {
        if ((longlong *)param_1[0x30] != (longlong *)0x0) {
          lVar9 = *(longlong *)param_1[0x30];
          uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_1a0,L"Mission Giver",L"GFxMapMenu",L"MissionGiver");
          (**(code **)(lVar9 + 0x2b0))(param_1[0x30],uVar10,1,0);
          if (local_198 != (longlong *)0x0) {
            LOCK();
            plVar19 = local_198 + 1;
            lVar9 = *plVar19;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_198)(local_198);
              LOCK();
              piVar1 = (int *)((longlong)local_198 + 0xc);
              iVar24 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar24 == 1) {
                (**(code **)(*local_198 + 8))(local_198,1);
              }
            }
          }
        }
        if (param_1[0x31] != 0) {
          iVar24 = *(int *)(param_2 + 0x1d8);
          uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_188,
                              L"{0} {0}|plural(one=Mission,other=Missions,many=Missions) Available",
                              L"GFxMapMenu",L"MissionsAvailable");
          lVar9 = FTextFormat::FTextFormat(local_138,uVar10);
          local_3d8 = 0;
          local_3d0 = 0;
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeTo(&local_3d8,1);
          uVar4 = local_3d0;
          lVar27 = (longlong)(int)local_3d0;
          iVar23 = (int)local_3d0 + 1;
          local_3d0 = CONCAT44(local_3d0._4_4_,iVar23);
          if (local_3d0._4_4_ < iVar23) {
            TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_3d8,uVar4 & 0xffffffff);
          }
          puVar20 = (undefined4 *)(lVar27 * 0x30 + local_3d8);
          *puVar20 = 0;
          *(undefined1 *)(puVar20 + 10) = 0;
          *(longlong *)(puVar20 + 2) = (longlong)iVar24;
          FText::FormatNamedImpl(local_278,lVar9,&local_3d8);
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(&local_3d8);
          plVar19 = *(longlong **)(lVar9 + 8);
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            plVar18 = plVar19 + 1;
            lVar9 = *plVar18;
            *(int *)plVar18 = (int)*plVar18 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plVar19)(plVar19);
              LOCK();
              piVar1 = (int *)((longlong)plVar19 + 0xc);
              iVar24 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar24 == 1) {
                (**(code **)(*plVar19 + 8))(plVar19,1);
              }
            }
          }
          (**(code **)(*(longlong *)param_1[0x31] + 0x2b0))((longlong *)param_1[0x31],local_278,1,0)
          ;
          if (local_270 != (longlong *)0x0) {
            LOCK();
            plVar19 = local_270 + 1;
            lVar9 = *plVar19;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_270)(local_270);
              LOCK();
              piVar1 = (int *)((longlong)local_270 + 0xc);
              iVar24 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar24 == 1) {
                (**(code **)(*local_270 + 8))(local_270,1);
              }
            }
          }
          if (local_180 != (longlong *)0x0) {
            LOCK();
            plVar19 = local_180 + 1;
            lVar9 = *plVar19;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_180)(local_180);
              LOCK();
              piVar1 = (int *)((longlong)local_180 + 0xc);
              iVar24 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar24 == 1) {
                (**(code **)(*local_180 + 8))(local_180,1);
              }
            }
          }
        }
        local_414 = -1;
        if (0 < (int)param_1[0x43]) {
          local_410 = -1;
          local_3e0 = -0x28;
          plVar19 = plVar22;
          plVar18 = plVar22;
          plVar11 = plVar22;
          do {
            lVar9 = local_410;
            iVar24 = local_414;
            plVar2 = *(longlong **)(local_408[0x42] + (longlong)plVar18);
            plVar15 = plVar22;
            if (plVar2 != (longlong *)0x0) {
              local_3a8 = 0;
              local_3a0 = 0xe;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3a8,0);
              FGenericPlatformString::Memcpy(local_3a8,L"objectiveType",0x1c);
              local_428 = &local_328;
              local_328 = (longlong *)0x0;
              local_418 = (uint)plVar11 | 3;
              local_320 = 0;
              local_280 = 0;
              plVar15 = (longlong *)FUN_140ecbdf0(plVar2,&local_3a8,0,6);
            }
            if ((local_418 & 2) != 0) {
              local_418 = local_418 & 0xfffffffd;
              plVar11 = local_328;
              for (iVar24 = (int)local_320; iVar24 != 0; iVar24 = iVar24 + -1) {
                if (*plVar11 != 0) {
                  FMemory::Free();
                }
                plVar11 = plVar11 + 2;
              }
              lVar9 = local_410;
              iVar24 = local_414;
              if (local_328 != (longlong *)0x0) {
                FMemory::Free();
                lVar9 = local_410;
                iVar24 = local_414;
              }
            }
            if (((local_418 & 1) != 0) && (local_418 = local_418 & 0xfffffffe, local_3a8 != 0)) {
              FMemory::Free();
            }
            if ((plVar2 != (longlong *)0x0) && (plVar15 != (longlong *)0x0)) {
              local_414 = iVar24 + 1;
              local_3e0 = local_3e0 + 0x28;
              local_410 = lVar9 + 1;
              if ((local_410 < 0) || (*(int *)(local_3f0 + 0x1d8) <= local_414)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                lVar9 = *(longlong *)(local_3f0 + 0x1d0) + local_3e0;
                plVar16 = (longlong *)FWeakObjectPtr::Get(lVar9);
                plVar11 = plVar22;
                if (plVar16 == (longlong *)0x0) {
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  if ((DAT_1464b56f4 != *(int *)(lVar9 + 8)) &&
                     (local_400 = 0, *(longlong *)(lVar9 + 0x10) != 0)) {
                    lVar27 = FUN_141796df0();
                    FWeakObjectPtr::operator=(lVar9);
                    if ((lVar27 != 0) || (DAT_1469e7e10 == '\0')) {
                      LOCK();
                      if (DAT_1464b56f4 == 0) {
                        DAT_1464b56f4 = 0;
                      }
                      UNLOCK();
                      *(int *)(lVar9 + 8) = DAT_1464b56f4;
                    }
                    plVar16 = (longlong *)FWeakObjectPtr::Get(lVar9);
                    if (plVar16 != (longlong *)0x0) goto LAB_140fdc819;
                  }
                }
                else {
LAB_140fdc819:
                  lVar9 = FUN_14171bfe0();
                  if ((*(int *)(plVar16[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(plVar16[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
                      lVar9 + 0x88)) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  if (bVar3) {
                    plVar17 = (longlong *)FUN_142f71d80();
                    plVar21 = plVar16;
                    do {
                      plVar11 = plVar16;
                      if (plVar21 == plVar17) break;
                      plVar21 = (longlong *)plVar21[6];
                      plVar11 = plVar22;
                    } while (plVar21 != (longlong *)0x0);
                  }
                }
                local_318 = plVar11;
                if (plVar11 != (longlong *)0x0) {
                  plVar16 = (longlong *)FUN_142f71d80();
                  for (plVar11 = local_318; plVar11 != (longlong *)0x0;
                      plVar11 = (longlong *)plVar11[6]) {
                    if (plVar11 == plVar16) {
                      (**(code **)(*plVar2 + 0x278))(plVar2,1);
                      (**(code **)(*plVar15 + 0x278))(plVar15,1);
                      local_398 = 0;
                      local_390 = 0x11;
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_398,0);
                      FGenericPlatformString::Memcpy(local_398,L"availableMission",0x22);
                      FUN_142088cf0(plVar15,&local_398);
                      if (local_398 != 0) {
                        FMemory::Free();
                      }
                      lVar9 = *plVar2;
                      uVar10 = FUN_142f5bb60(&local_318);
                      uVar10 = FUN_142dea370(uVar10,local_170);
                      (**(code **)(lVar9 + 0x2b0))(plVar2,uVar10,1,0);
                      plVar11 = local_168;
                      if (local_168 != (longlong *)0x0) {
                        LOCK();
                        plVar2 = local_168 + 1;
                        lVar9 = *plVar2;
                        *(int *)plVar2 = (int)*plVar2 + -1;
                        UNLOCK();
                        if ((int)lVar9 == 1) {
                          (**(code **)*local_168)(local_168);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar11 + 0xc);
                          iVar24 = *piVar1;
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (iVar24 == 1) {
                            (**(code **)(*plVar11 + 8))(plVar11);
                          }
                        }
                      }
                      goto LAB_140fdc8ae;
                    }
                  }
                }
              }
              (**(code **)(*plVar2 + 0x278))(plVar2);
              (**(code **)(*plVar15 + 0x278))(plVar15);
            }
LAB_140fdc8ae:
            uVar26 = (int)plVar19 + 1;
            plVar19 = (longlong *)(ulonglong)uVar26;
            plVar18 = plVar18 + 1;
            plVar11 = (longlong *)(ulonglong)local_418;
          } while ((int)uVar26 < (int)local_408[0x43]);
        }
      }
      else if (*(byte *)(param_2 + 600) - 1 < 5) {
        plVar19 = (longlong *)param_1[0x30];
        if (plVar19 != (longlong *)0x0) {
          (**(code **)(*plVar19 + 0x2b0))(plVar19,param_2 + 0x58,1,0);
        }
        plVar19 = (longlong *)param_1[0x31];
        if (plVar19 != (longlong *)0x0) {
          (**(code **)(*plVar19 + 0x2b0))(plVar19,param_2 + 0x70,1,0);
        }
        local_3e8 = -1;
        if ((0 < (int)param_1[0x43]) &&
           (plVar19 = *(longlong **)param_1[0x42], plVar19 != (longlong *)0x0)) {
          lVar9 = *plVar19;
          uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_260,L"CURRENT OBJECTIVES",L"GFxMapMenu",L"CurrentObjectives");
          (**(code **)(lVar9 + 0x2b0))(plVar19,uVar10,1,0);
          if (local_258 != (longlong *)0x0) {
            LOCK();
            plVar19 = local_258 + 1;
            lVar9 = *plVar19;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_258)(local_258);
              LOCK();
              piVar1 = (int *)((longlong)local_258 + 0xc);
              iVar24 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar24 == 1) {
                (**(code **)(*local_258 + 8))(local_258,1);
              }
            }
          }
        }
        local_414 = 1;
        if (1 < (int)param_1[0x43]) {
          local_400 = 1;
          local_410 = -1;
          plVar19 = plVar22;
          do {
            lVar9 = local_410;
            iVar24 = local_414;
            plVar18 = *(longlong **)(param_1[0x42] + local_400 * 8);
            plVar11 = plVar22;
            local_3f8 = plVar18;
            if (plVar18 != (longlong *)0x0) {
              local_368 = 0;
              local_360 = 0xe;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_368,0);
              FGenericPlatformString::Memcpy(local_368,L"objectiveType",0x1c);
              local_428 = &local_378;
              local_378 = (longlong *)0x0;
              local_418 = (uint)plVar19 | 0xc;
              plVar19 = (longlong *)(ulonglong)local_418;
              local_370 = 0;
              local_2a8 = 0;
              plVar11 = (longlong *)FUN_140ecbdf0(plVar18,&local_368,0,6);
            }
            if (((ulonglong)plVar19 & 8) != 0) {
              local_418 = (uint)plVar19 & 0xfffffff7;
              plVar19 = (longlong *)(ulonglong)local_418;
              plVar18 = local_378;
              for (iVar23 = (int)local_370; iVar23 != 0; iVar23 = iVar23 + -1) {
                if (*plVar18 != 0) {
                  FMemory::Free();
                }
                plVar18 = plVar18 + 2;
              }
              lVar9 = local_410;
              plVar18 = local_3f8;
              if (local_378 != (longlong *)0x0) {
                FMemory::Free();
                lVar9 = local_410;
                plVar18 = local_3f8;
              }
            }
            if ((((ulonglong)plVar19 & 4) != 0) &&
               (local_418 = (uint)plVar19 & 0xfffffffb, local_368 != 0)) {
              FMemory::Free();
            }
            lVar27 = local_3f0;
            if ((plVar18 != (longlong *)0x0) && (plVar11 != (longlong *)0x0)) {
              lVar9 = lVar9 + 1;
              local_3e8 = local_3e8 + 1;
              if ((local_3e8 < 0) || (*(int *)(local_3f0 + 0x160) <= local_3e8)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              local_410 = lVar9;
              if (bVar3) {
                lVar12 = FUN_142f5f490((longlong)local_3e8 * 0x50 + *(longlong *)(local_3f0 + 0x158)
                                      );
                plVar19 = local_408;
                if (lVar12 != 0) {
                  lVar9 = lVar9 * 0x50;
                  plVar18 = (longlong *)(*(longlong *)(lVar27 + 0x158) + lVar9);
                  lVar27 = *local_408;
                  puVar13 = (undefined8 *)(**(code **)(*plVar18 + 0x18))(plVar18,local_2a0);
                  uVar10 = (**(code **)(lVar27 + 0x148))(plVar19);
                  lVar5 = local_300;
                  cVar6 = FUN_142f63670(local_300,lVar12,*puVar13,uVar10);
                  lVar27 = local_3f0;
                  iVar24 = local_414;
                  if (cVar6 != '\0') {
                    plVar19 = (longlong *)(*(longlong *)(local_3f0 + 0x158) + lVar9);
                    puVar13 = (undefined8 *)(**(code **)(*plVar19 + 0x18))(plVar19,local_298);
                    lVar14 = FUN_142f5c680(lVar5,*puVar13);
                    plVar19 = (longlong *)(*(longlong *)(lVar27 + 0x158) + lVar9);
                    local_3e0 = lVar14;
                    (**(code **)(*plVar19 + 0x18))(plVar19,local_290);
                    iVar23 = FUN_142f5d020();
                    param_1 = local_408;
                    iVar24 = local_414;
                    if (lVar14 != 0) {
                      if ((iVar23 < 0) || (*(int *)(lVar14 + 0x20) <= iVar23)) {
                        bVar3 = false;
                      }
                      else {
                        bVar3 = true;
                      }
                      if (bVar3) {
                        (**(code **)(*local_3f8 + 0x278))(local_3f8,1);
                        (**(code **)(*plVar11 + 0x278))(plVar11,*(char *)(lVar12 + 0xba) == '\0');
                        plVar19 = (longlong *)(*(longlong *)(local_3f0 + 0x158) + lVar9);
                        puVar13 = (undefined8 *)(**(code **)(*plVar19 + 0x18))(plVar19,local_288);
                        cVar6 = FUN_142f637d0(lVar5,lVar12,*puVar13,lVar5);
                        if (cVar6 == '\0') {
                          local_3b8 = 0;
                          pwVar25 = L"open";
                          local_3b0 = 0;
                          if (*(char *)(lVar12 + 0xa8) != '\0') {
                            pwVar25 = L"optionalObjective";
                          }
                          if (*pwVar25 != L'\0') {
                            lVar9 = -1;
                            do {
                              lVar9 = lVar9 + 1;
                            } while (pwVar25[lVar9] != L'\0');
                            uVar26 = (int)lVar9 + 1;
                            local_3b0 = (ulonglong)uVar26;
                            if (0 < (int)uVar26) {
                              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3b8,0);
                            }
                            FGenericPlatformString::Memcpy
                                      (local_3b8,pwVar25,(longlong)(int)uVar26 * 2);
                            lVar14 = local_3e0;
                          }
                          FUN_142088cf0(plVar11,&local_3b8);
                          lVar9 = local_3b8;
                        }
                        else {
                          local_3c8 = 0;
                          pwVar25 = L"complete";
                          local_3c0 = 0;
                          if (*(char *)(lVar12 + 0xa8) != '\0') {
                            pwVar25 = L"completeOptional";
                          }
                          if (*pwVar25 != L'\0') {
                            lVar9 = -1;
                            do {
                              lVar9 = lVar9 + 1;
                            } while (pwVar25[lVar9] != L'\0');
                            uVar26 = (int)lVar9 + 1;
                            local_3c0 = (ulonglong)uVar26;
                            if (0 < (int)uVar26) {
                              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3c8,0);
                            }
                            FGenericPlatformString::Memcpy
                                      (local_3c8,pwVar25,(longlong)(int)uVar26 * 2);
                            lVar14 = local_3e0;
                          }
                          FUN_142088cf0(plVar11,&local_3c8);
                          lVar9 = local_3c8;
                        }
                        if (lVar9 != 0) {
                          FMemory::Free();
                        }
                        uVar7 = FUN_142f6dbd0(lVar12,*(undefined4 *)
                                                      (*(longlong *)(lVar14 + 0x18) +
                                                      (longlong)iVar23 * 4));
                        local_128 = 0;
                        local_120 = 0;
                        local_108 = 0;
                        local_100 = 0;
                        local_f8 = 0xffffffff;
                        local_f4 = 0;
                        local_e8 = 0;
                        local_e0 = 0;
                        uVar10 = ULiveLinkTimeSynchronizationSource::GetDisplayName
                                           (lVar12,local_248);
                        local_d8[0] = 4;
                        FText::FText(local_c8,uVar10);
                        local_b0 = '\x01';
                        local_358 = 0;
                        local_350 = 0x10;
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_358,0);
                        FGenericPlatformString::Memcpy(local_358,L"CurrentProgress",0x20);
                        local_2f8 = &local_358;
                        local_2f0 = local_d8;
                        FUN_1407484b0(&local_128,local_310,&local_2f8,0);
                        if (local_358 != 0) {
                          FMemory::Free();
                        }
                        plVar19 = local_c0;
                        if ((local_b0 != '\0') && (local_b0 = '\0', local_c0 != (longlong *)0x0)) {
                          LOCK();
                          plVar18 = local_c0 + 1;
                          lVar9 = *plVar18;
                          *(int *)plVar18 = (int)*plVar18 + -1;
                          UNLOCK();
                          if ((int)lVar9 == 1) {
                            (**(code **)*local_c0)(local_c0);
                            LOCK();
                            piVar1 = (int *)((longlong)plVar19 + 0xc);
                            iVar24 = *piVar1;
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            if (iVar24 == 1) {
                              (**(code **)(*plVar19 + 8))(plVar19,1);
                            }
                          }
                        }
                        plVar19 = local_240;
                        if (local_240 != (longlong *)0x0) {
                          LOCK();
                          plVar18 = local_240 + 1;
                          lVar9 = *plVar18;
                          *(int *)plVar18 = (int)*plVar18 + -1;
                          UNLOCK();
                          if ((int)lVar9 == 1) {
                            (**(code **)*local_240)(local_240);
                            LOCK();
                            piVar1 = (int *)((longlong)plVar19 + 0xc);
                            iVar24 = *piVar1;
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            if (iVar24 == 1) {
                              (**(code **)(*plVar19 + 8))(plVar19,1);
                            }
                          }
                        }
                        bVar8 = FUN_140472310(lVar12);
                        plVar19 = local_3f8;
                        if (bVar8 < 2) {
                          lVar9 = *local_3f8;
                          uVar10 = FInternationalization::
                                   ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                             (local_1b8,L"{CurrentProgress}",L"GFxMapMenu",
                                              L"ObjectiveCountText");
                          uVar10 = FTextFormat::FTextFormat(local_148,uVar10);
                          uVar10 = FText::Format(local_1d0,uVar10,&local_128);
                          (**(code **)(lVar9 + 0x2b0))(plVar19,uVar10,1,0);
                          plVar19 = local_1c8;
                          plVar18 = local_1b0;
                          if (local_1c8 != (longlong *)0x0) {
                            LOCK();
                            plVar11 = local_1c8 + 1;
                            lVar9 = *plVar11;
                            *(int *)plVar11 = (int)*plVar11 + -1;
                            UNLOCK();
                            if ((int)lVar9 == 1) {
                              (**(code **)*local_1c8)(local_1c8);
                              LOCK();
                              piVar1 = (int *)((longlong)plVar19 + 0xc);
                              iVar24 = *piVar1;
                              *piVar1 = *piVar1 + -1;
                              UNLOCK();
                              plVar18 = local_1b0;
                              if (iVar24 == 1) {
                                (**(code **)(*plVar19 + 8))(plVar19);
                                plVar18 = local_1b0;
                              }
                            }
                          }
                        }
                        else {
                          local_2d8 = 0;
                          plStack_2d0 = (longlong *)0x0;
                          uVar10 = FText::AsNumber(local_230,uVar7,0,&local_2d8);
                          local_a8[0] = 4;
                          FText::FText(local_98,uVar10);
                          local_80 = '\x01';
                          local_348 = 0;
                          local_340 = 0x12;
                          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_348,0);
                          FGenericPlatformString::Memcpy(local_348,L"CurrentObjectives",0x24);
                          local_2e0 = local_a8;
                          local_2e8 = &local_348;
                          FUN_1407484b0(&local_128,local_30c,&local_2e8,0);
                          if (local_348 != 0) {
                            FMemory::Free();
                          }
                          plVar19 = local_90;
                          if ((local_80 != '\0') && (local_80 = '\0', local_90 != (longlong *)0x0))
                          {
                            LOCK();
                            plVar18 = local_90 + 1;
                            lVar9 = *plVar18;
                            *(int *)plVar18 = (int)*plVar18 + -1;
                            UNLOCK();
                            if ((int)lVar9 == 1) {
                              (**(code **)*local_90)(local_90);
                              LOCK();
                              piVar1 = (int *)((longlong)plVar19 + 0xc);
                              iVar24 = *piVar1;
                              *piVar1 = *piVar1 + -1;
                              UNLOCK();
                              if (iVar24 == 1) {
                                (**(code **)(*plVar19 + 8))(plVar19,1);
                              }
                            }
                          }
                          plVar19 = local_228;
                          if (local_228 != (longlong *)0x0) {
                            LOCK();
                            plVar18 = local_228 + 1;
                            lVar9 = *plVar18;
                            *(int *)plVar18 = (int)*plVar18 + -1;
                            UNLOCK();
                            if ((int)lVar9 == 1) {
                              (**(code **)*local_228)(local_228);
                              LOCK();
                              piVar1 = (int *)((longlong)plVar19 + 0xc);
                              iVar24 = *piVar1;
                              *piVar1 = *piVar1 + -1;
                              UNLOCK();
                              if (iVar24 == 1) {
                                (**(code **)(*plVar19 + 8))(plVar19,1);
                              }
                            }
                          }
                          plVar19 = plStack_2d0;
                          if (plStack_2d0 != (longlong *)0x0) {
                            LOCK();
                            plVar18 = plStack_2d0 + 1;
                            lVar9 = *plVar18;
                            *(int *)plVar18 = (int)*plVar18 + -1;
                            UNLOCK();
                            if ((int)lVar9 == 1) {
                              (**(code **)*plStack_2d0)(plStack_2d0);
                              LOCK();
                              piVar1 = (int *)((longlong)plVar19 + 0xc);
                              iVar24 = *piVar1;
                              *piVar1 = *piVar1 + -1;
                              UNLOCK();
                              if (iVar24 == 1) {
                                (**(code **)(*plVar19 + 8))(plVar19,1);
                              }
                            }
                          }
                          local_2b8 = 0;
                          plStack_2b0 = (longlong *)0x0;
                          uVar10 = FText::AsNumber(local_218,bVar8,0,&local_2b8);
                          local_78[0] = 4;
                          FText::FText(local_68,uVar10);
                          local_50 = '\x01';
                          local_338 = 0;
                          local_330 = 0x10;
                          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_338,0);
                          FGenericPlatformString::Memcpy(local_338,L"TotalObjectives",0x20);
                          local_2c8 = &local_338;
                          local_2c0 = local_78;
                          FUN_1407484b0(&local_128,local_308,&local_2c8,0);
                          if (local_338 != 0) {
                            FMemory::Free();
                          }
                          plVar19 = local_60;
                          if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0))
                          {
                            LOCK();
                            plVar18 = local_60 + 1;
                            lVar9 = *plVar18;
                            *(int *)plVar18 = (int)*plVar18 + -1;
                            UNLOCK();
                            if ((int)lVar9 == 1) {
                              (**(code **)*local_60)(local_60);
                              LOCK();
                              piVar1 = (int *)((longlong)plVar19 + 0xc);
                              iVar24 = *piVar1;
                              *piVar1 = *piVar1 + -1;
                              UNLOCK();
                              if (iVar24 == 1) {
                                (**(code **)(*plVar19 + 8))(plVar19,1);
                              }
                            }
                          }
                          plVar19 = local_210;
                          if (local_210 != (longlong *)0x0) {
                            LOCK();
                            plVar18 = local_210 + 1;
                            lVar9 = *plVar18;
                            *(int *)plVar18 = (int)*plVar18 + -1;
                            UNLOCK();
                            if ((int)lVar9 == 1) {
                              (**(code **)*local_210)(local_210);
                              LOCK();
                              piVar1 = (int *)((longlong)plVar19 + 0xc);
                              iVar24 = *piVar1;
                              *piVar1 = *piVar1 + -1;
                              UNLOCK();
                              if (iVar24 == 1) {
                                (**(code **)(*plVar19 + 8))(plVar19,1);
                              }
                            }
                          }
                          plVar19 = plStack_2b0;
                          if (plStack_2b0 != (longlong *)0x0) {
                            LOCK();
                            plVar18 = plStack_2b0 + 1;
                            lVar9 = *plVar18;
                            *(int *)plVar18 = (int)*plVar18 + -1;
                            UNLOCK();
                            if ((int)lVar9 == 1) {
                              (**(code **)*plStack_2b0)(plStack_2b0);
                              LOCK();
                              piVar1 = (int *)((longlong)plVar19 + 0xc);
                              iVar24 = *piVar1;
                              *piVar1 = *piVar1 + -1;
                              UNLOCK();
                              if (iVar24 == 1) {
                                (**(code **)(*plVar19 + 8))(plVar19,1);
                              }
                            }
                          }
                          plVar19 = local_3f8;
                          lVar9 = *local_3f8;
                          uVar10 = FInternationalization::
                                   ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                             (local_1e8,
                                              L"{CurrentProgress} : {CurrentObjectives} / {TotalObjectives}"
                                              ,L"GFxMapMenu",L"ObjectiveCountText_Multi");
                          uVar10 = FTextFormat::FTextFormat(local_158,uVar10);
                          uVar10 = FText::Format(local_200,uVar10,&local_128);
                          (**(code **)(lVar9 + 0x2b0))(plVar19,uVar10,1,0);
                          plVar19 = local_1f8;
                          plVar18 = local_1e0;
                          if (local_1f8 != (longlong *)0x0) {
                            LOCK();
                            plVar11 = local_1f8 + 1;
                            lVar9 = *plVar11;
                            *(int *)plVar11 = (int)*plVar11 + -1;
                            UNLOCK();
                            if ((int)lVar9 == 1) {
                              (**(code **)*local_1f8)(local_1f8);
                              LOCK();
                              piVar1 = (int *)((longlong)plVar19 + 0xc);
                              iVar24 = *piVar1;
                              *piVar1 = *piVar1 + -1;
                              UNLOCK();
                              plVar18 = local_1e0;
                              if (iVar24 == 1) {
                                (**(code **)(*plVar19 + 8))(plVar19);
                                plVar18 = local_1e0;
                              }
                            }
                          }
                        }
                        if (plVar18 != (longlong *)0x0) {
                          LOCK();
                          plVar19 = plVar18 + 1;
                          lVar9 = *plVar19;
                          *(int *)plVar19 = (int)*plVar19 + -1;
                          UNLOCK();
                          if ((int)lVar9 == 1) {
                            (**(code **)*plVar18)(plVar18);
                            LOCK();
                            piVar1 = (int *)((longlong)plVar18 + 0xc);
                            iVar24 = *piVar1;
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            if (iVar24 == 1) {
                              (**(code **)(*plVar18 + 8))(plVar18);
                            }
                          }
                        }
                        local_e0 = 0;
                        if (local_e8 != 0) {
                          FMemory::Free();
                        }
                        TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                        ::
                        ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                                  (&local_128);
                        param_1 = local_408;
                        iVar24 = local_414;
                        goto LAB_140fdc3f2;
                      }
                    }
                    goto LAB_140fdc3d3;
                  }
                }
                local_400 = local_400 + -1;
                param_1 = local_408;
                iVar24 = iVar24 + -1;
              }
LAB_140fdc3d3:
              (**(code **)(*plVar11 + 0x278))(plVar11);
              (**(code **)(*local_3f8 + 0x278))();
            }
LAB_140fdc3f2:
            local_414 = iVar24 + 1;
            plVar19 = (longlong *)(ulonglong)local_418;
            local_400 = local_400 + 1;
          } while (local_414 < (int)param_1[0x43]);
        }
      }
    }
  }
  return;
}



// FUNCTION 140fdc9f0 FUN_140fdc9f0 body=929 status=ok
// SIG undefined FUN_140fdc9f0(void)

void FUN_140fdc9f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6,byte param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int iVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined2 *puVar13;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  if ((((*(longlong *)(param_1 + 0x180) != 0) && (*(longlong *)(param_1 + 0x188) != 0)) &&
      (*(longlong *)(param_1 + 400) != 0)) &&
     ((*(longlong *)(param_1 + 0x198) != 0 && (*(longlong *)(param_1 + 0x1a8) != 0)))) {
    FUN_140fd61e0(param_1,1,0);
    uVar9 = 2;
    if (param_7 != 0) {
      uVar9 = 7;
    }
    FUN_140fd5ac0(param_1,uVar9);
    if (*(longlong *)(param_1 + 0x1b8) != 0) {
      cVar5 = FText::IsEmpty(param_5);
      if (cVar5 == '\0') {
        local_60 = 3;
        local_68 = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
        FGenericPlatformString::Memcpy(local_68,&DAT_144641174,6);
        FUN_142088cf0(*(undefined8 *)(param_1 + 0x1b0),&local_68);
        if (local_68 != 0) {
          FMemory::Free();
        }
        FText::operator=(param_1 + 0x2b8,param_5);
        plVar8 = (longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x308);
        (**(code **)(*plVar8 + 0x20))(plVar8,param_1 + 0x2a8,param_7 ^ 1);
        FUN_142ed5bf0(*(undefined8 *)(param_1 + 0x1b8),param_7 ^ 1);
        *(byte *)(param_1 + 0x2a2) = param_7;
      }
      else {
        local_70 = 4;
        local_78 = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
        FGenericPlatformString::Memcpy(local_78,&DAT_144641148,8);
        FUN_142088cf0(*(undefined8 *)(param_1 + 0x1b0),&local_78);
        if (local_78 != 0) {
          FMemory::Free();
        }
        *(undefined1 *)(param_1 + 0x2a2) = 0;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x180) + 0x2b0))
              (*(longlong **)(param_1 + 0x180),param_2,1,0);
    (**(code **)(**(longlong **)(param_1 + 0x188) + 0x2b0))
              (*(longlong **)(param_1 + 0x188),param_3,1,0);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x198),param_4);
    (**(code **)(**(longlong **)(param_1 + 0x198) + 0x278))(*(longlong **)(param_1 + 0x198),1);
    plVar8 = *(longlong **)(param_1 + 0x1a0);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x278))(plVar8,0);
    }
    FText::FText(local_48);
    lVar12 = *param_6;
    lVar3 = lVar12 + (longlong)(int)param_6[1] * 0x18;
    for (; lVar12 != lVar3; lVar12 = lVar12 + 0x18) {
      puVar7 = (undefined8 *)FText::ToString(lVar12);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*puVar7;
      }
      puVar7 = (undefined8 *)FText::ToString(local_48);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = (undefined2 *)*puVar7;
      }
      FString::PrintfImpl(local_58,L"%s\n%s",puVar13,puVar11);
      uVar9 = FText::FromString(local_30,local_58);
      FText::operator=(local_48,uVar9);
      plVar8 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      if (local_58[0] != 0) {
        FMemory::Free();
      }
    }
    (**(code **)(**(longlong **)(param_1 + 400) + 0x2b0))
              (*(longlong **)(param_1 + 400),local_48,1,0);
    iVar10 = *(int *)(param_1 + 0x2a4);
    iVar6 = FUN_142eed950(*(undefined8 *)(param_1 + 400));
    iVar6 = iVar6 + 1;
    if (iVar6 < 1) {
      iVar10 = 1;
    }
    else if (iVar6 < iVar10) {
      iVar10 = iVar6;
    }
    FUN_142088ee0(*(undefined8 *)(param_1 + 0x1a8),iVar10);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_40 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar10 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140fdcda0 FUN_140fdcda0 body=977 status=ok
// SIG undefined FUN_140fdcda0(void)

void FUN_140fdcda0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6,longlong param_7,byte param_8)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int iVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined2 *puVar13;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  if ((((*(longlong *)(param_1 + 0x180) != 0) && (*(longlong *)(param_1 + 0x188) != 0)) &&
      (*(longlong *)(param_1 + 400) != 0)) &&
     ((*(longlong *)(param_1 + 0x198) != 0 && (*(longlong *)(param_1 + 0x1a8) != 0)))) {
    FUN_140fd61e0(param_1,1,0);
    uVar9 = 2;
    if (param_8 != 0) {
      uVar9 = 7;
    }
    FUN_140fd5ac0(param_1,uVar9);
    if (*(longlong *)(param_1 + 0x1b8) != 0) {
      cVar5 = FText::IsEmpty(param_5);
      if (cVar5 == '\0') {
        local_78 = 0;
        local_70 = 3;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
        FGenericPlatformString::Memcpy(local_78,&DAT_144641560,6);
        FUN_142088cf0(*(undefined8 *)(param_1 + 0x1b0),&local_78);
        if (local_78 != 0) {
          FMemory::Free();
        }
        FText::operator=(param_1 + 0x2b8,param_5);
        plVar8 = (longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x308);
        (**(code **)(*plVar8 + 0x20))(plVar8,param_1 + 0x2a8,param_8 ^ 1);
        *(byte *)(param_1 + 0x2a2) = param_8;
      }
      else {
        local_88 = 0;
        local_80 = 4;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
        FGenericPlatformString::Memcpy(local_88,&DAT_144641558,8);
        FUN_142088cf0(*(undefined8 *)(param_1 + 0x1b0),&local_88);
        if (local_88 != 0) {
          FMemory::Free();
        }
        *(undefined1 *)(param_1 + 0x2a2) = 0;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x180) + 0x2b0))
              (*(longlong **)(param_1 + 0x180),param_2,1,0);
    (**(code **)(**(longlong **)(param_1 + 0x188) + 0x2b0))
              (*(longlong **)(param_1 + 0x188),param_3,1,0);
    (**(code **)(**(longlong **)(param_1 + 0x198) + 0x278))(*(longlong **)(param_1 + 0x198),0);
    if (param_7 != 0) {
      plVar8 = *(longlong **)(param_1 + 0x1a0);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x278))(plVar8,1);
      }
      local_68 = 0;
      local_60 = 0xf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      FGenericPlatformString::Memcpy(local_68,L"dlcIcon_nopack",0x1e);
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x2a0))
                (*(longlong **)(param_1 + 0x38),&local_68,param_7);
      if (local_68 != 0) {
        FMemory::Free();
      }
    }
    FText::FText(local_48);
    lVar12 = *param_6;
    lVar3 = lVar12 + (longlong)(int)param_6[1] * 0x18;
    for (; lVar12 != lVar3; lVar12 = lVar12 + 0x18) {
      puVar7 = (undefined8 *)FText::ToString(lVar12);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*puVar7;
      }
      puVar7 = (undefined8 *)FText::ToString(local_48);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = (undefined2 *)*puVar7;
      }
      FString::PrintfImpl(local_58,L"%s\n%s",puVar13,puVar11);
      uVar9 = FText::FromString(local_30,local_58);
      FText::operator=(local_48,uVar9);
      plVar8 = local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      if (local_58[0] != 0) {
        FMemory::Free();
      }
    }
    (**(code **)(**(longlong **)(param_1 + 400) + 0x2b0))
              (*(longlong **)(param_1 + 400),local_48,1,0);
    iVar10 = *(int *)(param_1 + 0x2a4);
    iVar6 = FUN_142eed950(*(undefined8 *)(param_1 + 400));
    iVar6 = iVar6 + 1;
    if (iVar6 < 1) {
      iVar10 = 1;
    }
    else if (iVar6 < iVar10) {
      iVar10 = iVar6;
    }
    FUN_142088ee0(*(undefined8 *)(param_1 + 0x1a8),iVar10);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_40 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar10 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140fdd180 FUN_140fdd180 body=1566 status=ok
// SIG undefined FUN_140fdd180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fdd180(longlong *param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  char cVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined1 local_168;
  undefined1 local_167;
  undefined1 local_166 [6];
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  longlong local_150;
  longlong *plStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  longlong *local_120;
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  longlong *local_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  ushort local_d8 [2];
  undefined8 local_d4;
  undefined1 local_cc;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [24];
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  int local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_d8[0] = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_cc = 0;
  local_c0 = 0;
  local_b4 = 0;
  local_140 = param_4;
  FText::FText(local_a0);
  local_160 = (float)local_140;
  local_15c = local_140._4_4_;
  local_158 = (float)local_140;
  local_154 = local_140._4_4_;
  local_88 = 0;
  local_80 = 0;
  local_78 = (longlong *)0x0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_d8[0] = local_d8[0] & 0xff00;
  cVar9 = FUN_142ebdd70(param_1);
  if (cVar9 == '\0') {
    fVar2 = *(float *)((longlong)param_1 + 0x89c);
    fVar3 = *(float *)(param_1 + 0x114);
    fVar4 = *(float *)((longlong)param_1 + 0x8a4);
    fVar5 = *(float *)(param_1 + 0x115);
  }
  else {
    fVar2 = *(float *)((longlong)param_1 + 0x8b4);
    fVar3 = *(float *)(param_1 + 0x117);
    fVar4 = *(float *)((longlong)param_1 + 0x8bc);
    fVar5 = *(float *)(param_1 + 0x118);
  }
  local_15c = local_15c + fVar3;
  local_160 = local_160 + fVar2;
  local_154 = local_154 + fVar5;
  local_158 = local_158 + fVar4;
  local_178 = (**(code **)(*param_1 + 0x558))(param_1);
  puVar10 = (undefined8 *)
            FUN_14110cb50(&local_140,param_1[0x122],&local_160,(longlong)param_1 + 0x1ec);
  if (puVar10 != &local_d4) {
    local_d4 = *puVar10;
    local_cc = 1;
  }
  local_178 = (**(code **)(*param_1 + 0x558))(param_1);
  puVar10 = (undefined8 *)
            FUN_14110cb50(local_f8,param_1[0x122],&local_158,(longlong)param_1 + 0x1ec);
  if (puVar10 != &local_c8) {
    local_c8 = *puVar10;
    local_c0 = 1;
  }
  if ((undefined4 *)((longlong)param_1 + 0x8ac) != &local_bc) {
    local_bc = *(undefined4 *)((longlong)param_1 + 0x8ac);
    local_b8 = (undefined4)param_1[0x116];
    local_b4 = 1;
  }
  plVar7 = (longlong *)param_2[1];
  plVar14 = param_1 + 0x147;
  lVar11 = *param_2;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_150 = lVar11;
  plStack_148 = plVar7;
  if (&local_150 != plVar14) {
    local_150 = *plVar14;
    plStack_148 = (longlong *)param_1[0x148];
    *plVar14 = lVar11;
    param_1[0x148] = (longlong)plVar7;
    local_58 = lVar11;
    plStack_50 = plVar7;
  }
  plVar14 = plStack_148;
  if (plStack_148 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_148 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_148)(plStack_148);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_148 + 8))(plStack_148,1);
      }
    }
  }
  lVar11 = FWeakObjectPtr::Get((longlong)param_1 + 0x5cc);
  if (lVar11 != 0) {
    lVar12 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if ((bVar8) && (lVar12 = *param_2, lVar12 != 0)) {
      if (param_3 == '\0') {
        local_120 = (longlong *)param_2[1];
        if (local_120 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_120 + 1) = (int)local_120[1] + 1;
          UNLOCK();
        }
        local_128 = lVar12;
        cVar9 = FUN_140ba67e0(lVar11,&local_128);
        plVar14 = local_120;
        if (local_120 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_120 + 1;
          lVar12 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_120)(local_120);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
            }
          }
        }
        if (cVar9 != '\0') {
          local_167 = 0;
          uVar13 = FUN_1404b03b0();
          puVar15 = &local_167;
          goto LAB_140fdd4d3;
        }
      }
      else {
        local_168 = 1;
        uVar13 = FUN_1404b03b0();
        puVar15 = &local_168;
LAB_140fdd4d3:
        FUN_142eaf930(local_d8,puVar15,uVar13);
      }
      local_118 = *param_2;
      local_110 = (longlong *)param_2[1];
      if (local_110 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_110 + 1) = (int)local_110[1] + 1;
        UNLOCK();
      }
      FUN_141104960(lVar11,&local_118,local_d8);
      plVar14 = local_110;
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_110 + 1;
        lVar12 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      local_108 = *param_2;
      local_100 = (longlong *)param_2[1];
      if (local_100 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_100 + 1) = (int)local_100[1] + 1;
        UNLOCK();
      }
      cVar9 = FUN_140ba7eb0(lVar11,&local_108);
      plVar14 = local_100;
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_100 + 1;
        lVar11 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
      if (cVar9 != '\0') {
        local_166[0] = 10;
        uVar13 = FUN_1404b03b0();
        FUN_142eaf930(local_d8,local_166,uVar13);
      }
    }
  }
  uStack_130 = 0;
  local_138 = FUN_140fca620;
  plVar14 = (longlong *)FMemory::Realloc(0,0x30);
  local_f0 = plVar14;
  if (plVar14 == (longlong *)0x0) {
    if ((local_70 != 0) && (local_78 != (longlong *)0x0)) {
      (**(code **)(*local_78 + 0x28))(local_78,0);
      if (local_78 != (longlong *)0x0) {
        local_78 = (longlong *)FMemory::Realloc(local_78,0,0);
      }
      local_70 = 0;
    }
  }
  else {
    *plVar14 = (longlong)&PTR_FUN_1443193b0;
    FWeakObjectPtr::operator=(plVar14 + 1,param_1);
    *(undefined4 *)(plVar14 + 2) = (undefined4)local_138;
    *(undefined4 *)((longlong)plVar14 + 0x14) = local_138._4_4_;
    *(undefined4 *)(plVar14 + 3) = uStack_130;
    *(undefined4 *)((longlong)plVar14 + 0x1c) = uStack_12c;
    lVar11 = FDelegateHandle::GenerateNewID();
    plVar14[5] = lVar11;
    *plVar14 = (longlong)&PTR_FUN_1443193f8;
    FUN_140bac550(plVar14,&local_78);
    (**(code **)(*plVar14 + 0x28))(plVar14,0);
    local_f0 = (longlong *)FMemory::Realloc(plVar14,0,0);
    if (local_f0 != (longlong *)0x0) {
      FMemory::Free(local_f0);
    }
  }
  local_138 = FUN_140fca740;
  uStack_130 = 0;
  FUN_1407ffe80(&local_68,param_1,&local_138);
  lVar11 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  if (lVar11 != 0) {
    lVar12 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) goto LAB_140fdd6f7;
  }
  lVar11 = 0;
LAB_140fdd6f7:
  lVar11 = FUN_142ed8770(lVar11,local_d8);
  param_1[0xaf] = lVar11;
  cVar9 = FWeakObjectPtr::IsValid(param_1 + 0xd0);
  if (cVar9 != '\0') {
    lVar11 = FWeakObjectPtr::Get(param_1 + 0xd0);
    LOCK();
    *(undefined4 *)(lVar11 + 0x588) = 1;
    UNLOCK();
  }
  LOCK();
  *(undefined4 *)(param_1 + 0xb1) = 1;
  UNLOCK();
  FUN_140f184a0(local_d8);
  plVar14 = (longlong *)param_2[1];
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar14 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  return;
}



// FUNCTION 140fdd7a0 FUN_140fdd7a0 body=322 status=ok
// SIG undefined FUN_140fdd7a0(void)

void FUN_140fdd7a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong local_18 [2];
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
    FUN_140fd61e0(param_1,0,0);
    FUN_140fd5ac0(param_1,6);
    plVar1 = *(longlong **)(param_1 + 0x180);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2 + 0x30,1,0);
    }
    plVar1 = *(longlong **)(param_1 + 0x188);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2 + 0x48,1,0);
    }
    plVar1 = *(longlong **)(param_1 + 400);
    if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x1a8) != 0)) {
      (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2 + 0x60,1,0);
      iVar3 = *(int *)(param_1 + 0x2a4);
      iVar2 = FUN_142eed950(*(undefined8 *)(param_1 + 400));
      iVar2 = iVar2 + 1;
      if (iVar2 < 1) {
        iVar3 = 1;
      }
      else if (iVar2 < iVar3) {
        iVar3 = iVar2;
      }
      FUN_142088ee0(*(undefined8 *)(param_1 + 0x1a8),iVar3);
    }
    local_18[1] = 0x1c;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"ExtConceptArtTexture_nopack",0x38);
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x2a0))
              (*(longlong **)(param_1 + 0x38),local_18,*(undefined8 *)(param_2 + 0x148));
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140fdd8f0 FUN_140fdd8f0 body=1341 status=ok
// SIG undefined FUN_140fdd8f0(void)

void FUN_140fdd8f0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  ulonglong uVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong local_res18;
  longlong local_148;
  undefined8 local_140;
  undefined1 local_138 [8];
  longlong local_130;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined8 local_110;
  undefined8 local_108;
  undefined2 local_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  
  *(undefined1 *)(param_1 + 0x751) = param_2;
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_80,L"Apply Changes Before Exit?",L"GFxMayhemMenu",L"ExitDialogHeader");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_98,
             L"Do you want to apply your changes? This may cause a reload of the current Zone.",
             L"GFxMayhemMenu",L"ExitDialogMessage");
  FWeakObjectPtr::operator=(local_138,0);
  local_130 = 0;
  pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UGFxMayhemMenu::OnMayhemExitDialogChoiceMade",L"::");
  pwVar4 = (wchar_t *)0x0;
  while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar4 = pwVar3;
  }
  FName::FName(&local_res18,pwVar4 + 2,1);
  FWeakObjectPtr::operator=(local_138,param_1);
  local_130 = local_res18;
  if ((local_res18 != 0) && (lVar8 = FWeakObjectPtr::Get(local_138), lVar8 != 0)) {
    UObject::FindFunction(lVar8,local_130);
  }
  local_148 = 0;
  local_140 = 0;
  uVar9 = FUN_1404b03b0();
  FText::FText(local_c8,uVar9);
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_68,L"Apply And Exit",L"GFxMayhemMenu",L"DialogChoice_ApplyExit");
  FText::operator=(local_c8,uVar9);
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
  uVar5 = local_140;
  lVar8 = (longlong)(int)local_140;
  local_b0 = DAT_146875010;
  iVar6 = (int)local_140 + 1;
  local_140 = CONCAT44(local_140._4_4_,iVar6);
  if (local_140._4_4_ < iVar6) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_148,uVar5 & 0xffffffff);
  }
  lVar8 = lVar8 * 0x30 + local_148;
  FText::FText(lVar8,local_c8);
  *(undefined8 *)(lVar8 + 0x18) = local_b0;
  *(undefined8 *)(lVar8 + 0x20) = local_a8;
  *(undefined1 *)(lVar8 + 0x28) = (undefined1)local_a0;
  *(undefined1 *)(lVar8 + 0x29) = local_a0._1_1_;
  uVar9 = FUN_1404b03b0();
  FText::FText(local_f8,uVar9);
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 1;
  uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_50,L"Exit Without Applying",L"GFxMayhemMenu",
                     L"DialogChoice_ExitWithoutApply");
  FText::operator=(local_f8,uVar9);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  uVar5 = local_140;
  lVar8 = (longlong)(int)local_140;
  local_e0 = DAT_146875018;
  iVar6 = (int)local_140 + 1;
  local_140 = CONCAT44(local_140._4_4_,iVar6);
  if (local_140._4_4_ < iVar6) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_148,uVar5 & 0xffffffff);
  }
  lVar8 = lVar8 * 0x30 + local_148;
  FText::FText(lVar8,local_f8);
  *(undefined8 *)(lVar8 + 0x18) = local_e0;
  *(undefined8 *)(lVar8 + 0x20) = local_d8;
  *(undefined1 *)(lVar8 + 0x28) = (undefined1)local_d0;
  *(undefined1 *)(lVar8 + 0x29) = local_d0._1_1_;
  uVar9 = FUN_1404b03b0();
  FText::FText(local_128,uVar9);
  local_110 = 0;
  local_108 = 0;
  local_100 = 1;
  uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_38,L"Cancel",L"GFxMayhemMenu",L"DialogChoice_Cancel");
  FText::operator=(local_128,uVar9);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  uVar5 = local_140;
  lVar8 = (longlong)(int)local_140;
  local_110 = DAT_146874fe8;
  local_108 = DAT_146b3e2b8;
  iVar6 = (int)local_140 + 1;
  local_140 = CONCAT44(local_140._4_4_,iVar6);
  if (local_140._4_4_ < iVar6) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_148,uVar5 & 0xffffffff);
  }
  lVar8 = lVar8 * 0x30 + local_148;
  FText::FText(lVar8,local_128);
  *(undefined8 *)(lVar8 + 0x18) = local_110;
  *(undefined8 *)(lVar8 + 0x20) = local_108;
  *(undefined1 *)(lVar8 + 0x28) = (undefined1)local_100;
  *(undefined1 *)(lVar8 + 0x29) = local_100._1_1_;
  uVar9 = FWeakObjectPtr::Get(param_1 + 0x58c);
  uVar10 = FWeakObjectPtr::Get(param_1 + 0x58c);
  FUN_1410f2f10(uVar10,local_80,local_98,&local_148,local_138,0,uVar9,0,0,1);
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_120 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar2 = (int *)((longlong)local_120 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_f0 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar2 = (int *)((longlong)local_f0 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c0 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar2 = (int *)((longlong)local_c0 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  TArray<FKeyBindMenuEntry,FDefaultAllocator>::~TArray<FKeyBindMenuEntry,FDefaultAllocator>
            (&local_148);
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
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
  return;
}



// FUNCTION 140fdde30 FUN_140fdde30 body=651 status=ok
// SIG undefined FUN_140fdde30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_140fdde30(longlong param_1,longlong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  undefined4 local_98 [2];
  undefined8 local_90;
  longlong local_88;
  char local_74;
  longlong local_68;
  longlong local_60;
  undefined8 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 0x148))(param_2), lVar4 == 0)
     ) {
    return '\x01';
  }
  plVar5 = (longlong *)FUN_140b82ca0(param_2);
  if ((plVar5 != (longlong *)0x0) && (cVar1 = (**(code **)(*plVar5 + 0x718))(plVar5), cVar1 == '\0')
     ) {
    return '\x04';
  }
  if (param_1 == 0) {
    return '\0';
  }
  lVar6 = FUN_142f477c0();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
      != lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return '\0';
  }
  lVar6 = param_2[0x109];
  lVar10 = 0;
  if (lVar6 != 0) {
    lVar7 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140fddf36;
  }
  lVar6 = lVar10;
LAB_140fddf36:
  cVar1 = FUN_142f432b0(param_1,param_2);
  if (cVar1 == '\0') {
    lVar7 = UWorld::GetGameState<APVPGameState>(lVar4);
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0xa11) != '\0')) {
      return '\x06';
    }
    lVar7 = FUN_1413ffe00();
    local_a8 = lVar10;
    if (lVar7 != 0) {
      lVar8 = FUN_1413ffe00();
      lVar9 = lVar7;
      do {
        local_a8 = lVar7;
        if (lVar9 == lVar8) break;
        lVar9 = *(longlong *)(lVar9 + 0x30);
        local_a8 = lVar10;
      } while (lVar9 != 0);
    }
    local_98[0] = 5;
    local_40 = '\0';
    local_a0 = lVar4;
    FUN_14044bc80(&local_90,&local_a0,&local_a8);
    FUN_14045a130(local_98);
    while (local_74 == '\0') {
      if (local_68 != 0) {
        uVar3 = 1;
        if ((lVar6 != 0) && (uVar3 = 1, lVar6 == local_68)) {
          uVar3 = 0;
        }
        cVar1 = FUN_140e26fd0(local_68,uVar3);
        if (cVar1 != '\0') {
          if (local_40 == '\0') {
            return cVar1;
          }
          local_40 = 0;
          UWorld::RemoveOnActorSpawnedHandler(local_90,local_48);
          if (local_60 != 0) {
            FMemory::Free();
          }
          if (local_88 != 0) {
            FMemory::Free();
            return cVar1;
          }
          return cVar1;
        }
      }
      FUN_14045a130(local_98);
    }
    if (local_40 != '\0') {
      local_40 = 0;
      UWorld::RemoveOnActorSpawnedHandler(local_90,local_48);
      if (local_60 != 0) {
        FMemory::Free();
      }
      if (local_88 != 0) {
        FMemory::Free();
        return '\0';
      }
    }
  }
  else if ((lVar6 != 0) && (cVar1 = FUN_140e26fd0(lVar6,0), cVar1 != '\0')) {
    return cVar1;
  }
  return '\0';
}



// FUNCTION 140fde0c0 FUN_140fde0c0 body=572 status=ok
// SIG undefined FUN_140fde0c0(void)

undefined8 FUN_140fde0c0(undefined8 param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  uVar5 = FUN_1404b03b0();
  FText::FText(param_1,uVar5);
  switch(param_2) {
  case 0:
    goto switchD_140fde102_caseD_0;
  default:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_20,L"Unable to activate Point of Interest.",L"GFxMapMenu",
                       L"GenericPOIFailure");
    FText::operator=(param_1,uVar5);
    plVar6 = local_18;
    break;
  case 2:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_c8,L"Cannot Fast Travel. Ally is in a menu.",L"GFxMapMenu",
                       L"PlayerInMenuPOIFailure");
    FText::operator=(param_1,uVar5);
    plVar6 = local_c0;
    break;
  case 3:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b0,L"Cannot travel while an ally is down!",L"GFxMapMenu",
                       L"AllyDownPOIFailure");
    FText::operator=(param_1,uVar5);
    plVar6 = local_a8;
    break;
  case 4:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_98,
                       L"Fast Travel network unavailable. Unable to activate Fast Travel Station.",
                       L"GFxMapMenu",L"NoTravelNetworkFailure");
    FText::operator=(param_1,uVar5);
    plVar6 = local_90;
    break;
  case 5:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_80,L"Cannot Fast Travel. Ally is in a vehicle.",L"GFxMapMenu",
                       L"PlayerInVehiclePOIFailure");
    FText::operator=(param_1,uVar5);
    plVar6 = local_78;
    break;
  case 6:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_68,L"Cannot Fast Travel. Ally is joining.",L"GFxMapMenu",
                       L"ClientJoiningPOIFailure");
    FText::operator=(param_1,uVar5);
    plVar6 = local_60;
    break;
  case 7:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_50,L"Cannot Fast Travel. Duel is active.",L"GFxMapMenu",
                       L"PlayerDuelingPOIFailure");
    FText::operator=(param_1,uVar5);
    plVar6 = local_48;
    break;
  case 8:
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_38,L"Cannot Fast Travel. Ally is trying to take a picture.",
                       L"GFxMapMenu",L"PlayerPhotoModePOIFailure");
    FText::operator=(param_1,uVar5);
    plVar6 = local_30;
  }
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
switchD_140fde102_caseD_0:
  return param_1;
}



// FUNCTION 140fde320 FUN_140fde320 body=234 status=ok
// SIG undefined FUN_140fde320(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fde320(undefined8 param_1)

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
  local_68[0] = &LAB_140faeba0;
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



// FUNCTION 140fde420 FUN_140fde420 body=276 status=ok
// SIG undefined FUN_140fde420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fde420(undefined8 param_1)

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
  FUN_140a678a0();
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140faea20;
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



// FUNCTION 140fde540 FUN_140fde540 body=318 status=ok
// SIG undefined FUN_140fde540(void)

void FUN_140fde540(longlong param_1,int *param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong local_28;
  int local_20;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x6f0));
  local_28 = 0;
  FUN_140f98f00(&local_28,*(undefined8 *)(param_1 + 0x6e0),*(undefined4 *)(param_1 + 0x6e8),0,0);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x6f0));
  lVar1 = local_28;
  iVar5 = local_20 + -1;
  if (-1 < iVar5) {
    lVar4 = (longlong)iVar5 * 0xd0 + local_28;
    piVar2 = (int *)(lVar4 + 0x90);
    do {
      if (((piVar2[-2] == *param_2 && piVar2[-1] == param_2[1]) && piVar2[1] == param_2[3]) &&
          param_2[2] == *piVar2) {
        FUN_140fd54c0(param_1,lVar4);
      }
      lVar4 = lVar4 + -0xd0;
      piVar2 = piVar2 + -0x34;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  if (local_20 != 0) {
    plVar3 = (longlong *)(lVar1 + 8);
    iVar5 = local_20;
    do {
      if (plVar3[0x17] != 0) {
        FMemory::Free();
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0x1a;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (lVar1 == 0) {
    return;
  }
  FMemory::Free(lVar1);
  return;
}



// FUNCTION 140fde680 FUN_140fde680 body=4831 status=ok
// SIG undefined FUN_140fde680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fde680(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 auStack_668 [32];
  longlong *local_648;
  longlong *local_640;
  undefined1 *local_638;
  undefined8 *local_630;
  ulonglong local_628;
  undefined8 local_620;
  undefined8 local_618;
  undefined8 local_610;
  undefined4 *local_608;
  ulonglong *puStack_600;
  longlong *local_5f8;
  longlong local_5f0;
  undefined8 *local_5e8;
  longlong local_5e0;
  undefined4 local_5d8;
  longlong local_5d0 [9];
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_578;
  longlong local_570 [3];
  undefined8 local_558;
  undefined8 local_550;
  longlong local_548 [4];
  undefined4 *local_528;
  undefined4 *puStack_520;
  longlong local_518 [3];
  longlong *local_500;
  longlong local_4f0;
  undefined1 local_4e8 [24];
  longlong local_4d0;
  longlong *local_4c8;
  undefined1 local_4b8 [8];
  longlong *local_4b0;
  undefined1 local_4a0 [24];
  undefined1 local_488 [24];
  undefined1 local_470 [24];
  undefined1 local_458 [8];
  longlong *local_450;
  undefined1 local_440 [8];
  longlong *local_438;
  undefined8 local_428;
  longlong local_420;
  undefined1 local_418 [8];
  longlong *local_410;
  longlong local_400;
  longlong *local_3f8;
  undefined1 local_3e8 [8];
  longlong *local_3e0;
  undefined1 local_3d0 [8];
  longlong *local_3c8;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  longlong local_3a8 [2];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined8 local_378;
  undefined8 uStack_370;
  undefined1 local_368 [8];
  longlong *local_360;
  undefined1 local_350 [8];
  longlong *local_348;
  undefined1 local_338 [24];
  longlong local_320 [3];
  undefined1 local_308 [8];
  longlong *local_300;
  undefined1 local_2f0 [8];
  longlong *local_2e8;
  undefined1 local_2d8 [8];
  longlong *local_2d0;
  undefined1 local_2c0 [8];
  longlong *local_2b8;
  undefined1 local_2a8 [8];
  longlong *local_2a0;
  undefined1 local_290 [24];
  undefined1 local_278 [24];
  undefined1 local_260 [24];
  undefined1 local_248 [24];
  undefined1 local_230 [8];
  longlong *local_228;
  undefined1 local_218 [8];
  longlong *local_210;
  undefined1 local_200 [8];
  longlong *local_1f8;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [24];
  undefined1 local_1a0 [24];
  undefined1 local_188 [24];
  undefined1 local_170 [24];
  undefined1 local_158 [32];
  undefined4 local_138 [4];
  undefined1 local_128 [24];
  undefined1 local_110;
  undefined4 local_108;
  undefined1 local_f8 [24];
  undefined1 local_e0;
  undefined4 local_d8 [4];
  undefined1 local_c8 [8];
  longlong local_c0 [2];
  undefined1 local_b0;
  undefined4 local_a8;
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_668;
  puVar13 = (undefined1 *)0x0;
  local_628 = local_628 & 0xffffffff00000000;
  plVar11 = (longlong *)param_1[0x129];
  local_570[2] = param_2;
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x278))(plVar11,(char)param_1[0x113] == '\0');
  }
  plVar11 = (longlong *)param_1[0x12d];
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x278))(plVar11,(char)param_1[0x113]);
  }
  if ((char)param_1[0x113] != '\0') {
    return;
  }
  local_4f0 = FUN_141083c60(param_1);
  if ((((param_1[300] == 0) || (param_1[0x129] == 0)) || (local_4f0 == 0)) ||
     (((param_2 != 0 || (param_1[0x14f] == 0)) &&
      (cVar7 = FUN_1412b3570(param_1 + 0x14e,param_2), cVar7 == '\0')))) goto LAB_140fdf933;
  FUN_1412b31b0(param_1 + 0x14e,param_2);
  if ((param_2 == 0) || (cVar7 = *(char *)((longlong)param_1 + 0xb0d), cVar7 == '\0')) {
    FUN_140fafa40(param_1[300]);
    lVar10 = param_1[0x129];
    if (*(char *)(lVar10 + 0x188) != '\0') {
      local_570[0] = 0;
      local_570[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_570,0);
      FGenericPlatformString::Memcpy(local_570[0],L"hide",10);
      FUN_142088910(lVar10,local_570);
      if (local_570[0] != 0) {
        FMemory::Free();
      }
      *(undefined1 *)(lVar10 + 0x188) = 0;
    }
    goto LAB_140fdf8b3;
  }
  lVar10 = param_1[0x129];
  if (*(char *)(lVar10 + 0x188) == '\0') {
    local_5d0[0] = 0;
    local_5d0[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_5d0,0);
    FGenericPlatformString::Memcpy(local_5d0[0],L"show",10);
    FUN_142088910(lVar10,local_5d0);
    if (local_5d0[0] != 0) {
      FMemory::Free();
    }
    *(undefined1 *)(lVar10 + 0x188) = 1;
    cVar7 = *(char *)((longlong)param_1 + 0xb0d);
  }
  if (cVar7 == '\x02') {
    local_608 = (undefined4 *)0x0;
    puStack_600 = (ulonglong *)0x0;
    FText::FText(local_4b8);
    FText::FText(local_418,param_1 + 0x15c);
    FText::FText(&local_4d0);
    local_548[2] = 0;
    local_548[3] = 0;
    cVar7 = FWeakObjectPtr::IsValid(param_1 + 0x151);
    if (cVar7 == '\0') {
      plVar11 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x14e);
      if (plVar11 != (longlong *)0x0) {
        lVar10 = FUN_1413ffe00();
        if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
            != lVar10 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((bVar5) && (lVar10 = (**(code **)(*plVar11 + 0x680))(plVar11), lVar10 != 0)) {
          FText::FText(local_200);
          uVar9 = FUN_14270d290(lVar10,local_3a8);
          uVar9 = FText::FromString(local_218,uVar9);
          FText::operator=(local_4b8,uVar9);
          if (local_210 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_210 + 1;
            lVar10 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
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
          if (local_3a8[0] != 0) {
            FMemory::Free();
          }
          if (local_1f8 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_1f8 + 1;
            lVar10 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_1f8)(local_1f8);
              LOCK();
              piVar1 = (int *)((longlong)local_1f8 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_1f8 + 8))(local_1f8,1);
              }
            }
          }
        }
      }
    }
    else {
      uVar9 = FWeakObjectPtr::Get(param_1 + 0x151);
      local_640 = &local_4d0;
      local_648 = local_548 + 2;
      FUN_1414f52a0(uVar9,&local_608,local_418,local_4b8);
    }
    cVar7 = FWeakObjectPtr::IsValid(param_1 + 0x151);
    if (cVar7 == '\0') {
LAB_140fdf745:
      plVar11 = (longlong *)FUN_1404b03b0();
    }
    else {
      uVar9 = FWeakObjectPtr::Get(param_1 + 0x151);
      cVar7 = FUN_1414f5020(uVar9);
      if (cVar7 == '\0') goto LAB_140fdf745;
      plVar11 = &local_4d0;
    }
    FText::operator=(&local_4d0,plVar11);
    local_640 = local_548 + 2;
    local_638 = (undefined1 *)CONCAT71(local_638._1_7_,1);
    local_648 = &local_4d0;
    FUN_140fdc9f0(param_1[300],local_4b8,local_418,&local_608);
    TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
    ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(local_548 + 2);
    if (local_4c8 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_4c8 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_4c8)(local_4c8);
        LOCK();
        piVar1 = (int *)((longlong)local_4c8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_4c8 + 8))(local_4c8,1);
        }
      }
    }
    if (local_410 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_410 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_410)(local_410);
        LOCK();
        piVar1 = (int *)((longlong)local_410 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_410 + 8))(local_410,1);
        }
      }
    }
    if (local_4b0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_4b0 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_4b0)(local_4b0);
        LOCK();
        piVar1 = (int *)((longlong)local_4b0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_4b0 + 8))(local_4b0,1);
        }
      }
    }
    if (local_608 != (undefined4 *)0x0) {
      FMemory::Free();
    }
  }
  else if (cVar7 == '\x03') {
    uVar9 = FUN_1404b03b0();
    FText::FText(local_230,uVar9);
    local_548[0] = 0;
    local_548[1] = 0;
    FText::FText(local_3d0);
    FText::FText(&local_400);
    FText::FText(local_3e8);
    local_558 = 0;
    local_550 = 0;
    cVar7 = FUN_140bf9690(0,param_1 + 0x151);
    if (cVar7 != '\0') {
      uVar9 = FWeakObjectPtr::Get(param_1 + 0x151);
      local_640 = (longlong *)local_3e8;
      local_648 = &local_558;
      FUN_1414f52a0(uVar9,local_548,local_3d0,&local_400);
    }
    local_630 = &local_558;
    local_638 = local_3e8;
    local_640 = local_548;
    local_648 = &local_400;
    FUN_140fdb330(param_1[300],param_1[0x139],local_570[2],local_3d0);
    TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
    ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_558);
    if (local_3e0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_3e0 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_3e0)(local_3e0);
        LOCK();
        piVar1 = (int *)((longlong)local_3e0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_3e0 + 8))(local_3e0,1);
        }
      }
    }
    if (local_3f8 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_3f8 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_3f8)(local_3f8);
        LOCK();
        piVar1 = (int *)((longlong)local_3f8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_3f8 + 8))(local_3f8,1);
        }
      }
    }
    if (local_3c8 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_3c8 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_3c8)(local_3c8);
        LOCK();
        piVar1 = (int *)((longlong)local_3c8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_3c8 + 8))(local_3c8,1);
        }
      }
    }
    if (local_548[0] != 0) {
      FMemory::Free();
    }
    local_3b8 = (undefined4 *)CONCAT44(local_3b8._4_4_,(undefined4)local_3b8);
    uStack_3b0 = (ulonglong *)CONCAT44(uStack_3b0._4_4_,(undefined4)uStack_3b0);
    local_378 = (undefined4 *)CONCAT44(local_378._4_4_,(undefined4)local_378);
    uStack_370 = (undefined4 *)CONCAT44(uStack_370._4_4_,(undefined4)uStack_370);
    if (local_228 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_228 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      local_3b8 = (undefined4 *)CONCAT44(local_3b8._4_4_,(undefined4)local_3b8);
      uStack_3b0 = (ulonglong *)CONCAT44(uStack_3b0._4_4_,(undefined4)uStack_3b0);
      local_378 = (undefined4 *)CONCAT44(local_378._4_4_,(undefined4)local_378);
      uStack_370 = (undefined4 *)CONCAT44(uStack_370._4_4_,(undefined4)uStack_370);
      if ((int)lVar10 == 1) {
        (**(code **)*local_228)(local_228);
        LOCK();
        piVar1 = (int *)((longlong)local_228 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_228 + 8))(local_228,1);
        }
      }
    }
  }
  else if (cVar7 == '\x04') {
    uVar9 = FUN_1404b03b0();
    FText::FText(local_4a0,uVar9);
    local_518[0] = 0;
    local_518[1] = 0;
    FText::FText(local_488);
    FText::FText(local_470);
    FText::FText(local_320);
    local_618 = 0;
    local_610 = 0;
    cVar7 = FUN_140bf9690(0,param_1 + 0x151);
    if (cVar7 == '\0') {
      local_580 = 0;
      local_578 = 0;
      local_5d0[8] = 0;
      local_588 = 0;
      uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
      FUN_141299160(param_1 + 0x16e,uVar9,&local_580,local_5d0 + 8);
      FText::FText(local_4e8);
      if ((int)local_578 < 1) {
        if ((int)local_588 < 1) {
          uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_248,L"Mission Giver",L"GFxMapMenu",L"MissionGiver");
          FText::operator=(local_4e8,uVar9);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_248);
        }
        else {
          FText::operator=(local_4e8,local_5d0[8]);
        }
      }
      else {
        FText::operator=(local_4e8,local_580);
      }
      FText::operator=(local_4a0,local_4e8);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_4e8);
      TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
      ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(local_5d0 + 8);
      TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
      ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_580);
    }
    else {
      uVar9 = FWeakObjectPtr::Get(param_1 + 0x151);
      local_640 = local_320;
      local_648 = &local_618;
      FUN_1414f52a0(uVar9,local_518,local_488,local_470);
      cVar7 = FText::IsEmpty(local_470);
      if (cVar7 == '\0') {
        bVar5 = (int)local_610 < 1;
        if (bVar5) {
          uVar9 = FText::FText(local_2d8);
        }
        else {
          uVar9 = FText::FText(local_2c0,local_618);
        }
        local_5d0[4] = 0;
        local_5d0[5] = 0x10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_5d0 + 4,0);
        local_648 = (longlong *)CONCAT62(local_648._2_6_,0x3f);
        FGenericPlatformString::Convert<char,wchar_t>(local_5d0[4],0x10,"{0} \n {1} \n {2}");
        local_620 = FText::FText(local_1b8,uVar9);
        puVar12 = (undefined8 *)FText::FText(local_1a0,local_470);
        local_5e8 = puVar12;
        lVar10 = FText::FText(local_188,local_488);
        local_5f0 = lVar10;
        uVar9 = FText::FromString(local_2f0,local_5d0 + 4);
        plVar11 = (longlong *)FTextFormat::FTextFormat(local_1c8,uVar9);
        local_d8[0] = 4;
        local_5f8 = plVar11;
        FText::FText(local_c8,lVar10);
        local_b0 = 1;
        local_a8 = 4;
        FText::FText(local_98,puVar12);
        local_80 = 1;
        local_78 = 4;
        FText::FText(local_68,local_620);
        local_608 = local_d8;
        local_50 = 1;
        puStack_600 = local_48;
        local_528 = (undefined4 *)*plVar11;
        puStack_520 = (undefined4 *)plVar11[1];
        if (puStack_520 != (undefined4 *)0x0) {
          LOCK();
          puStack_520[2] = puStack_520[2] + 1;
          UNLOCK();
        }
        local_3b8 = local_608;
        uStack_3b0 = puStack_600;
        uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_388,&local_3b8);
        uVar9 = FText::Format(local_308,&local_528,uVar9);
        FText::FText(local_350,uVar9);
        if (local_300 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_300 + 1;
          lVar10 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_300)(local_300);
            LOCK();
            piVar1 = (int *)((longlong)local_300 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_300 + 8))(local_300,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_388);
        local_628 = 3;
        plVar11 = (longlong *)&stack0xffffffffffffffd0;
        do {
          local_628 = local_628 - 1;
          if ((char)plVar11[-4] != '\0') {
            *(undefined1 *)(plVar11 + -4) = 0;
            plVar4 = (longlong *)plVar11[-6];
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar4 + 1;
              lVar10 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar10 == 1) {
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
          plVar11 = plVar11 + -6;
        } while (local_628 != 0);
        plVar11 = (longlong *)local_5f8[1];
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar11 + 1;
          lVar10 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        plVar11 = *(longlong **)(local_5f0 + 8);
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar11 + 1;
          lVar10 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        plVar11 = (longlong *)local_5e8[1];
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar11 + 1;
          lVar10 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        plVar11 = *(longlong **)(local_620 + 8);
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar11 + 1;
          lVar10 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        FText::operator=(local_4a0,local_350);
        if (local_348 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_348 + 1;
          lVar10 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_348)(local_348);
            LOCK();
            piVar1 = (int *)((longlong)local_348 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_348 + 8))(local_348,1);
            }
          }
        }
        if (local_2e8 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_2e8 + 1;
          lVar10 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_2e8)(local_2e8);
            LOCK();
            piVar1 = (int *)((longlong)local_2e8 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_2e8 + 8))(local_2e8,1);
            }
          }
        }
        if (local_5d0[4] != 0) {
          FMemory::Free();
        }
        if ((bVar5) && (local_2d0 != (longlong *)0x0)) {
          LOCK();
          plVar11 = local_2d0 + 1;
          lVar10 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_2d0)(local_2d0);
            LOCK();
            piVar1 = (int *)((longlong)local_2d0 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_2d0 + 8))(local_2d0,1);
            }
          }
        }
        local_378 = (undefined4 *)CONCAT44(local_378._4_4_,(undefined4)local_378);
        uStack_370 = (undefined4 *)CONCAT44(uStack_370._4_4_,(undefined4)uStack_370);
        if ((!bVar5) &&
           (local_378 = (undefined4 *)CONCAT44(local_378._4_4_,(undefined4)local_378),
           uStack_370 = (undefined4 *)CONCAT44(uStack_370._4_4_,(undefined4)uStack_370),
           local_2b8 != (longlong *)0x0)) {
          LOCK();
          plVar11 = local_2b8 + 1;
          lVar10 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          local_378 = (undefined4 *)CONCAT44(local_378._4_4_,(undefined4)local_378);
          uStack_370 = (undefined4 *)CONCAT44(uStack_370._4_4_,(undefined4)uStack_370);
          if ((int)lVar10 == 1) {
            (**(code **)*local_2b8)(local_2b8);
            LOCK();
            piVar1 = (int *)((longlong)local_2b8 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_2b8 + 8))(local_2b8,1);
            }
          }
        }
      }
      else {
        if ((int)local_610 < 1) {
          uVar9 = FText::FText(local_278);
          local_620 = CONCAT44(local_620._4_4_,8);
          local_628 = local_628 & 0xffffffff00000000;
        }
        else {
          uVar9 = FText::FText(local_260,local_618);
          local_620 = (ulonglong)local_620._4_4_ << 0x20;
          local_628 = CONCAT44(local_628._4_4_,4);
        }
        local_5d0[6] = 0;
        local_5d0[7] = 10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_5d0 + 6,0);
        local_648 = (longlong *)CONCAT62(local_648._2_6_,0x3f);
        FGenericPlatformString::Convert<char,wchar_t>(local_5d0[6],10,"{0} \n {1}");
        plVar11 = (longlong *)FText::FText(local_170,uVar9);
        local_5f8 = plVar11;
        lVar10 = FText::FText(local_158,local_488);
        local_5f0 = lVar10;
        uVar9 = FText::FromString(local_290,local_5d0 + 6);
        puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_1d8,uVar9);
        local_138[0] = 4;
        local_5e8 = puVar12;
        FText::FText(local_128,lVar10);
        local_110 = 1;
        local_108 = 4;
        FText::FText(local_f8,plVar11);
        local_528 = local_138;
        local_e0 = 1;
        puStack_520 = local_d8;
        local_428 = *puVar12;
        local_420 = puVar12[1];
        if (local_420 != 0) {
          LOCK();
          *(int *)(local_420 + 8) = *(int *)(local_420 + 8) + 1;
          UNLOCK();
        }
        local_378 = local_528;
        uStack_370 = puStack_520;
        uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_398,&local_378);
        uVar9 = FText::Format(local_2a8,&local_428,uVar9);
        FText::FText(local_338,uVar9);
        if (local_2a0 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_2a0 + 1;
          lVar10 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_2a0)(local_2a0);
            LOCK();
            piVar1 = (int *)((longlong)local_2a0 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_2a0 + 8))(local_2a0,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_398);
        lVar10 = 2;
        plVar11 = local_c0;
        do {
          lVar10 = lVar10 + -1;
          if ((char)plVar11[-4] != '\0') {
            *(undefined1 *)(plVar11 + -4) = 0;
            plVar4 = (longlong *)plVar11[-6];
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
          }
          plVar11 = plVar11 + -6;
        } while (lVar10 != 0);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_5e8);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_5f0);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_5f8);
        FText::operator=(local_4a0,local_338);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_338);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_290);
        if (local_5d0[6] != 0) {
          FMemory::Free();
        }
        if ((int)local_620 != 0) {
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_278);
        }
        if ((int)local_628 != 0) {
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_260);
        }
      }
    }
    FUN_140fdb7f0(param_1[300],local_570[2]);
    TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
    ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_618);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_320);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_470);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_488);
    if (local_518[0] != 0) {
      FMemory::Free();
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_4a0);
  }
  else {
    local_5d0[2] = 0;
    local_5d0[3] = 0;
    FText::FText(local_458,param_1 + 0x159);
    FText::FText(local_440);
    FText::FText(local_518 + 2);
    FText::FText(local_368,param_1 + 0x15c);
    local_5e0 = 0;
    local_5d8 = 1;
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_5e0,1,0);
    FText::FText(local_5e0,local_368);
    if (local_360 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_360 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_360)(local_360);
        LOCK();
        piVar1 = (int *)((longlong)local_360 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_360 + 8))(local_360,1);
        }
      }
    }
    plVar11 = param_1 + 0x151;
    cVar7 = '\0';
    cVar8 = FWeakObjectPtr::IsValid(plVar11);
    puVar14 = puVar13;
    if (cVar8 != '\0') {
      uVar9 = FWeakObjectPtr::Get(plVar11);
      local_640 = local_518 + 2;
      local_648 = &local_5e0;
      FUN_1414f52a0(uVar9,local_5d0 + 2,local_458,local_440);
      lVar10 = FWeakObjectPtr::Get(plVar11);
      if (*(longlong *)(lVar10 + 0x4d0) != 0) {
        lVar10 = FWeakObjectPtr::Get(plVar11);
        cVar7 = *(char *)(*(longlong *)(lVar10 + 0x4d0) + 0x140);
        lVar10 = FWeakObjectPtr::Get(plVar11);
        puVar14 = *(undefined1 **)(*(longlong *)(lVar10 + 0x4d0) + 0xa8);
      }
    }
    cVar8 = FWeakObjectPtr::IsValid(plVar11);
    if (cVar8 == '\0') {
LAB_140fde978:
      plVar11 = (longlong *)FUN_1404b03b0();
    }
    else {
      uVar9 = FWeakObjectPtr::Get(plVar11);
      cVar8 = FUN_1414f5020(uVar9);
      if (cVar8 == '\0') goto LAB_140fde978;
      plVar11 = local_518 + 2;
    }
    FText::operator=(local_518 + 2,plVar11);
    local_640 = &local_5e0;
    if (cVar7 == '\0') {
      local_638 = (undefined1 *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_648 = local_518 + 2;
      FUN_140fdc9f0();
    }
    else {
      local_630 = (undefined8 *)((ulonglong)local_630 & 0xffffffffffffff00);
      local_648 = local_518 + 2;
      local_638 = puVar14;
      FUN_140fdcda0(param_1[300],local_458,local_440,local_5d0 + 2);
    }
    TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
    ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(&local_5e0);
    if (local_500 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_500 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_500)(local_500);
        LOCK();
        piVar1 = (int *)((longlong)local_500 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_500 + 8))(local_500,1);
        }
      }
    }
    if (local_438 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_438 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_438)(local_438);
        LOCK();
        piVar1 = (int *)((longlong)local_438 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_438 + 8))(local_438,1);
        }
      }
    }
    if (local_450 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_450 + 1;
      lVar10 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_450)(local_450);
        LOCK();
        piVar1 = (int *)((longlong)local_450 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_450 + 8))(local_450,1);
        }
      }
    }
    local_3b8 = (undefined4 *)CONCAT44(local_3b8._4_4_,(undefined4)local_3b8);
    uStack_3b0 = (ulonglong *)CONCAT44(uStack_3b0._4_4_,(undefined4)uStack_3b0);
    local_378 = (undefined4 *)CONCAT44(local_378._4_4_,(undefined4)local_378);
    uStack_370 = (undefined4 *)CONCAT44(uStack_370._4_4_,(undefined4)uStack_370);
    if (local_5d0[2] != 0) {
      FMemory::Free();
      local_3b8 = (undefined4 *)CONCAT44(local_3b8._4_4_,(undefined4)local_3b8);
      uStack_3b0 = (ulonglong *)CONCAT44(uStack_3b0._4_4_,(undefined4)uStack_3b0);
      local_378 = (undefined4 *)CONCAT44(local_378._4_4_,(undefined4)local_378);
      uStack_370 = (undefined4 *)CONCAT44(uStack_370._4_4_,(undefined4)uStack_370);
    }
  }
LAB_140fdf8b3:
  if (param_1[0x14f] != 0) {
    uVar9 = TScriptInterface<IBlendableInterface>::
            TScriptInterface<IBlendableInterface><UMaterialInterface>
                      (local_1e8,*(undefined8 *)(param_1[0x14f] + 0x550));
    FUN_142ed36d0(param_1,uVar9,0);
  }
  lVar10 = local_4f0;
  if (*(char *)(local_4f0 + 0x640) == '\0') {
    cVar7 = FWeakObjectPtr::IsValid(param_1 + 0x14e);
    if (cVar7 != '\0') {
      puVar13 = (undefined1 *)FWeakObjectPtr::Get(param_1 + 0x14e);
    }
  }
  else {
    puVar13 = (undefined1 *)0x0;
  }
  FUN_1412d4cc0(lVar10,puVar13);
LAB_140fdf933:
  LOCK();
  *(undefined4 *)(param_1 + 0xb1) = 1;
  UNLOCK();
  return;
}



// FUNCTION 140fdf960 FUN_140fdf960 body=1067 status=ok
// SIG undefined FUN_140fdf960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140fdf960(longlong param_1,longlong param_2,float param_3)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_res8 [2];
  float local_res20 [2];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x5c8);
  if (lVar4 == 0) {
LAB_140fdf9cf:
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_14142a560();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140fdf9cf;
  }
  lVar5 = FUN_140eccca0(param_1);
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  if (lVar6 == 0) {
LAB_140fdfa33:
    lVar6 = 0;
  }
  else {
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
    if (!bVar1) goto LAB_140fdfa33;
    lVar6 = *(longlong *)(lVar6 + 0x528);
  }
  if (lVar4 == 0) {
    return;
  }
  if (lVar5 == 0) {
    return;
  }
  if (lVar6 == 0) {
    return;
  }
  if (*(longlong *)(param_2 + 0xa0) == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x61) == '\0') {
    return;
  }
  if (*(char *)(param_2 + 0xa9) == '\x02') {
    return;
  }
  bVar2 = FUN_140cb9b10(lVar4,param_2 + 0x88);
  cVar3 = FWeakObjectPtr::IsValid(param_2 + 0x80);
  if (cVar3 == '\0') {
    local_a8 = *(undefined8 *)(param_2 + 0x6c);
    local_a0 = *(undefined4 *)(param_2 + 0x74);
  }
  else {
    lVar7 = FWeakObjectPtr::Get(param_2 + 0x80);
    lVar7 = *(longlong *)(lVar7 + 0x168);
    local_a8 = _DAT_1468b5d90;
    local_a0 = DAT_1468b5d98;
    if (lVar7 != 0) {
      local_a8 = *(undefined8 *)(lVar7 + 0x220);
      local_a0 = *(undefined4 *)(lVar7 + 0x228);
    }
  }
  local_res20[0] = 0.0;
  local_res20[1] = 0.0;
  local_res8[0] = 0.0;
  local_res8[1] = 0.0;
  local_98 = local_a8;
  local_90 = local_a0;
  cVar3 = FUN_140fafb50(param_1,&local_a8,lVar5,lVar6,local_res20,local_res8);
  if (bVar2 < 4) {
    if (bVar2 == 1) {
      *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(param_1 + 0x65c);
    }
    bVar2 = (cVar3 != '\0') + 2;
    FUN_140ccfca0(lVar4,param_2 + 0x88,bVar2);
  }
  fVar12 = *(float *)(param_2 + 0xb0);
  pfVar8 = local_res8;
  if (bVar2 != 2) {
    pfVar8 = local_res20;
  }
  fVar15 = *pfVar8;
  fVar14 = pfVar8[1];
  if ((1e-08 < fVar12) && (*(longlong *)(param_1 + 0x5e8) != 0)) {
    cVar3 = FWeakObjectPtr::IsValid(lVar4 + 0x730);
    if (cVar3 != '\0') {
      uVar9 = FWeakObjectPtr::Get(lVar4 + 0x730);
      cVar3 = FUN_140f66430(uVar9,param_2 + 0x88,local_res8);
      if ((cVar3 != '\0') && (*(longlong *)(param_1 + 0x680) != 0)) {
        puVar10 = (undefined8 *)
                  FUN_142eeeda0(*(undefined8 *)(param_1 + 0x5e8),local_res20,local_res8);
        uVar9 = *puVar10;
        fVar16 = (float)((ulonglong)uVar9 >> 0x20);
        fVar12 = fVar15 - (float)uVar9;
        *(undefined8 *)(param_2 + 0xb4) = uVar9;
        fVar13 = fVar14 - fVar16;
        if (1e-08 < fVar13 * fVar13 + fVar12 * fVar12) {
          fVar14 = 1.0 - *(float *)(param_2 + 0xb0) / *(float *)(param_1 + 0x65c);
          if (0.0 <= fVar14) {
            if (1.0 <= fVar14) {
              fVar14 = 1.0;
            }
          }
          else {
            fVar14 = 0.0;
          }
          fVar15 = (float)uVar9 + fVar14 * fVar12;
          fVar14 = fVar14 * fVar13 + fVar16;
        }
        fVar12 = *(float *)(param_2 + 0xb0) - param_3;
        *(float *)(param_2 + 0xb0) = fVar12;
        goto LAB_140fdfcfc;
      }
    }
    *(undefined4 *)(param_2 + 0xb0) = 0;
    fVar12 = 0.0;
  }
LAB_140fdfcfc:
  if ((bVar2 == 2) || (1e-08 < fVar12)) {
    cVar3 = '\x01';
  }
  else {
    cVar3 = '\0';
  }
  plVar11 = *(longlong **)(param_2 + 0xa0);
  if ((plVar11 != (longlong *)0x0) && (cVar3 != *(char *)(param_2 + 0xa8))) {
    *(char *)(param_2 + 0xa8) = cVar3;
    (**(code **)(*plVar11 + 0x278))();
    plVar11 = *(longlong **)(param_2 + 0xa0);
  }
  FUN_14208ff10(plVar11,fVar15,fVar14);
  return;
}



// FUNCTION 140fdfd90 FUN_140fdfd90 body=107 status=ok
// SIG undefined FUN_140fdfd90(void)

void FUN_140fdfd90(undefined8 param_1,byte param_2,char param_3)

{
  undefined8 local_18;
  char local_10;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (param_2 != 1) {
    if (param_2 < 2) {
      return;
    }
    if (param_2 < 4) {
      if (param_3 != '\0') {
        return;
      }
    }
    else if (param_2 != 6) {
      return;
    }
  }
  local_18 = param_1;
  local_10 = param_3;
  FUN_140fa9ab0(&local_18);
  return;
}



// FUNCTION 140fdfe00 FUN_140fdfe00 body=775 status=ok
// SIG undefined FUN_140fdfe00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140fdfe00(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  if ((*(longlong **)(param_1 + 0x8e0) == (longlong *)0x0) ||
     (lVar4 = (**(code **)(**(longlong **)(param_1 + 0x8e0) + 0x2b0))(), lVar4 == 0)) {
LAB_140fdfe68:
    lVar4 = 0;
  }
  else {
    lVar5 = AReplicationGraphDebugActor::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140fdfe68;
  }
  if ((*(char *)(param_1 + 0xa50) == '\x03') && (lVar4 != 0)) {
    iVar1 = *(int *)(lVar4 + 0x2d8);
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x9b8) <= iVar1)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) &&
       (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x9b0) + (longlong)iVar1 * 8), lVar5 != 0)) {
      local_38 = *(undefined8 *)(lVar5 + 0xd0);
      local_30 = *(undefined4 *)(lVar5 + 0xd8);
      FUN_140fb0c80(param_1,&local_38);
      return;
    }
  }
  lVar5 = FUN_141083c60(param_1);
  if (*(char *)(param_1 + 0xa50) == '\x02') {
LAB_140fe00e0:
    plVar2 = *(longlong **)(param_1 + 0x948);
    if (plVar2 == (longlong *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000140fe0100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x278))(plVar2,0);
    return;
  }
  if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x820) != 0)) {
    lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0x820) + 0x168);
    if (lVar4 == 0) {
      local_38 = _DAT_1468b5d90;
      local_30 = DAT_1468b5d98;
    }
    else {
      local_38 = *(undefined8 *)(lVar4 + 0x220);
      local_30 = *(undefined4 *)(lVar4 + 0x228);
    }
    local_2c = local_38;
    local_24 = local_30;
    FUN_140fb0c80(param_1,&local_2c);
    return;
  }
  if (((*(char *)(param_1 + 0xa50) == '\x02') || (lVar4 == 0)) || (*(char *)(lVar4 + 0x308) != '\0')
     ) goto LAB_140fe00e0;
  iVar1 = *(int *)(lVar4 + 0x2d8);
  if ((iVar1 < 0) || (*(int *)(param_1 + 0x998) <= iVar1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) goto LAB_140fe00e0;
  lVar4 = (longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 0x990);
  plVar2 = *(longlong **)(lVar4 + 0x58);
  if (plVar2 != (longlong *)0x0) {
    lVar5 = ALandscape::GetPrivateStaticClass();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar5 = (**(code **)(*plVar2 + 0x750))(plVar2), lVar5 != 0)) {
      lVar4 = (**(code **)(*plVar2 + 0x750))(plVar2);
      lVar4 = *(longlong *)(lVar4 + 0x168);
      if (lVar4 == 0) {
        local_24 = DAT_1468b5d98;
        puVar6 = &local_2c;
        local_2c = _DAT_1468b5d90;
      }
      else {
        puVar6 = &local_38;
        local_30 = *(undefined4 *)(lVar4 + 0x228);
        local_38 = *(undefined8 *)(lVar4 + 0x220);
      }
      local_20 = *puVar6;
      puVar7 = &local_20;
      local_18 = *(undefined4 *)(puVar6 + 1);
      goto LAB_140fe009f;
    }
  }
  local_38 = *(undefined8 *)(lVar4 + 0x30);
  local_30 = *(undefined4 *)(lVar4 + 0x38);
  puVar7 = &local_38;
LAB_140fe009f:
  FUN_140fb0c80(param_1,puVar7);
  return;
}



// FUNCTION 140fe0110 FUN_140fe0110 body=881 status=ok
// SIG undefined FUN_140fe0110(void)

void FUN_140fe0110(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  undefined4 local_res10 [2];
  undefined4 local_res18;
  undefined4 local_res20;
  longlong *local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  longlong local_148;
  longlong local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  longlong local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  if ((((param_2 != 0) && (*(int **)(param_1 + 0x358) != (int *)0x0)) &&
      (*(longlong *)(param_1 + 800) != 0)) &&
     (((**(int **)(param_1 + 0x358) != -1 &&
       (cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x240), cVar5 != '\0')) &&
      (local_100 = *(longlong *)(param_1 + 0x348), local_100 != 0)))) {
    local_f8 = *(longlong **)(param_1 + 0x350);
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
      UNLOCK();
    }
    FUN_140d84620(*(longlong *)(param_2 + 0x478) + 0x1f8,&local_f0,&local_100);
    plVar8 = local_f8;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f8 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    local_160 = (longlong *)0x0;
    local_158 = 0;
    local_98 = 0;
    lVar6 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 800),param_1 + 0x338,0,6,&local_160);
    plVar8 = local_160;
    for (iVar9 = (int)local_158; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_160 != (longlong *)0x0) {
      FMemory::Free(local_160);
    }
    if (lVar6 != 0) {
      local_res10[0] = 0xffffffff;
      FUN_14170c210(local_res10,param_2);
      local_138 = **(undefined4 **)(param_1 + 0x358);
      local_148 = param_1;
      local_140 = lVar6;
      FString::FString(&local_130,*(undefined4 **)(param_1 + 0x358) + 2);
      plVar8 = local_e8;
      uVar3 = local_res10[0];
      local_120 = local_f0;
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
        UNLOCK();
      }
      local_res10[0] = 0xffffffff;
      FWeakObjectPtr::operator=(&local_150,param_1);
      lVar4 = local_140;
      lVar6 = local_148;
      local_d0 = local_138;
      local_108 = local_130;
      local_c8 = local_130;
      local_res18 = (undefined4)local_128;
      local_res20 = local_128._4_4_;
      local_c0 = local_128;
      local_a0 = local_150;
      local_9c = local_14c;
      local_e0 = local_148;
      local_d8 = local_140;
      local_130 = 0;
      local_128 = 0;
      local_b8 = local_f0;
      local_b0 = plVar8;
      local_118 = 0;
      local_120 = 0;
      local_a8 = uVar3;
      local_110 = 0xffffffff;
      local_58 = 0;
      local_48 = 0;
      puVar7 = (undefined8 *)FUN_140438ef0(0x50,local_78);
      if (puVar7 != (undefined8 *)0x0) {
        local_c8 = 0;
        *puVar7 = &PTR_FUN_1446487d8;
        *(undefined4 *)(puVar7 + 3) = local_138;
        puVar7[1] = lVar6;
        puVar7[2] = lVar4;
        puVar7[4] = local_108;
        *(undefined4 *)(puVar7 + 5) = local_res18;
        *(undefined4 *)((longlong)puVar7 + 0x2c) = local_res20;
        puVar7[6] = local_f0;
        puVar7[7] = plVar8;
        *(undefined4 *)(puVar7 + 8) = uVar3;
        *(undefined4 *)(puVar7 + 9) = local_150;
        *(undefined4 *)((longlong)puVar7 + 0x4c) = local_14c;
        local_c0 = 0;
        local_b0 = (longlong *)0x0;
        local_b8 = 0;
        local_a8 = 0xffffffff;
      }
      local_88[0] = &LAB_140faee30;
      FUN_140f9fe50(&local_e0);
      FUN_14204c280(local_88);
      FUN_140f9fe50(&local_148);
      FUN_1416f8340(local_res10[0]);
    }
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_e8 + 1;
      lVar6 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar2 = (int *)((longlong)local_e8 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_e8 + 8))(local_e8,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140fe0490 FUN_140fe0490 body=4677 status=ok
// SIG undefined FUN_140fe0490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fe0490(longlong param_1,undefined8 param_2,undefined8 param_3,float param_4,char param_5
                  )

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_5b8 [32];
  longlong **local_598;
  int local_588;
  undefined4 *local_578;
  undefined4 *puStack_570;
  undefined4 *local_568;
  undefined4 *puStack_560;
  longlong *local_558;
  undefined8 local_550;
  longlong local_548;
  undefined8 local_540;
  longlong *local_538;
  undefined8 local_530;
  longlong local_528;
  undefined8 local_520;
  longlong *local_518;
  undefined8 local_510;
  longlong local_508;
  undefined8 local_500;
  longlong *local_4f8;
  undefined8 local_4f0;
  longlong local_4e8;
  longlong local_4e0;
  undefined4 *local_4d8;
  undefined4 *puStack_4d0;
  undefined4 *local_4c8;
  ulonglong *puStack_4c0;
  undefined8 local_4b8;
  longlong local_4b0;
  undefined8 local_4a8;
  longlong local_4a0;
  undefined8 local_498;
  longlong local_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined1 local_478 [16];
  undefined8 local_468;
  undefined8 uStack_460;
  undefined1 local_458 [16];
  undefined8 local_448;
  undefined8 uStack_440;
  undefined1 local_438 [16];
  undefined8 local_428;
  undefined8 uStack_420;
  undefined1 local_418 [16];
  undefined8 local_408;
  undefined8 uStack_400;
  undefined1 local_3f8 [16];
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [8];
  longlong *local_3c0;
  undefined1 local_3b0 [8];
  longlong *local_3a8;
  undefined1 local_398 [8];
  longlong *local_390;
  undefined1 local_380 [8];
  longlong *local_378;
  undefined1 local_368 [8];
  longlong *local_360;
  undefined1 local_350 [8];
  longlong *local_348;
  undefined1 local_338 [8];
  longlong *local_330;
  undefined1 local_320 [8];
  longlong *local_318;
  undefined1 local_308 [8];
  longlong *local_300;
  undefined1 local_2f0 [8];
  longlong *local_2e8;
  undefined1 local_2d8 [8];
  longlong *local_2d0;
  undefined1 local_2c0 [8];
  longlong *local_2b8;
  undefined1 local_2a8 [8];
  longlong *local_2a0;
  undefined1 local_290 [8];
  longlong *local_288;
  undefined1 local_278 [8];
  longlong *local_270;
  undefined1 local_260 [8];
  longlong *local_258;
  undefined1 local_248 [8];
  longlong *local_240;
  undefined1 local_230 [8];
  longlong *local_228;
  undefined1 local_218 [8];
  longlong *local_210;
  undefined1 local_200 [8];
  longlong *local_1f8;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined4 local_170 [2];
  longlong local_168;
  longlong *local_158;
  char local_148;
  undefined4 local_140 [2];
  longlong local_138;
  longlong *local_128;
  char local_118;
  undefined4 local_110 [2];
  longlong local_108;
  longlong *local_f8;
  char local_e8;
  undefined4 local_e0 [2];
  longlong local_d8;
  longlong *local_c8;
  char local_b8;
  undefined4 local_b0 [2];
  longlong local_a8;
  longlong *local_98;
  char local_88;
  undefined4 local_80 [2];
  longlong local_78;
  longlong *local_68;
  char local_58;
  ulonglong local_50 [3];
  
  local_50[0] = DAT_1468387a8 ^ (ulonglong)auStack_5b8;
  TArray<FText,FDefaultAllocator>::operator=(param_1 + 0x198);
  TArray<FText,FDefaultAllocator>::operator=(param_1 + 0x1a8,param_3);
  plVar5 = *(longlong **)(param_1 + 0x170);
  *(char *)(param_1 + 0x1bc) = param_5;
  *(float *)(param_1 + 0x1b8) = param_4;
  local_488 = (undefined4 *)CONCAT44(local_488._4_4_,(undefined4)local_488);
  uStack_480 = (undefined4 *)CONCAT44(uStack_480._4_4_,(undefined4)uStack_480);
  local_468 = (undefined4 *)CONCAT44(local_468._4_4_,(undefined4)local_468);
  uStack_460 = (undefined4 *)CONCAT44(uStack_460._4_4_,(undefined4)uStack_460);
  local_448 = (undefined4 *)CONCAT44(local_448._4_4_,(undefined4)local_448);
  uStack_440 = (undefined4 *)CONCAT44(uStack_440._4_4_,(undefined4)uStack_440);
  local_428 = (undefined4 *)CONCAT44(local_428._4_4_,(undefined4)local_428);
  uStack_420 = (undefined4 *)CONCAT44(uStack_420._4_4_,(undefined4)uStack_420);
  local_408 = (undefined4 *)CONCAT44(local_408._4_4_,(undefined4)local_408);
  uStack_400 = (undefined4 *)CONCAT44(uStack_400._4_4_,(undefined4)uStack_400);
  local_3e8 = (undefined4 *)CONCAT44(local_3e8._4_4_,(undefined4)local_3e8);
  uStack_3e0 = (ulonglong *)CONCAT44(uStack_3e0._4_4_,(undefined4)uStack_3e0);
  if ((plVar5 != (longlong *)0x0) &&
     (local_488 = (undefined4 *)CONCAT44(local_488._4_4_,(undefined4)local_488),
     uStack_480 = (undefined4 *)CONCAT44(uStack_480._4_4_,(undefined4)uStack_480),
     local_468 = (undefined4 *)CONCAT44(local_468._4_4_,(undefined4)local_468),
     uStack_460 = (undefined4 *)CONCAT44(uStack_460._4_4_,(undefined4)uStack_460),
     local_448 = (undefined4 *)CONCAT44(local_448._4_4_,(undefined4)local_448),
     uStack_440 = (undefined4 *)CONCAT44(uStack_440._4_4_,(undefined4)uStack_440),
     local_428 = (undefined4 *)CONCAT44(local_428._4_4_,(undefined4)local_428),
     uStack_420 = (undefined4 *)CONCAT44(uStack_420._4_4_,(undefined4)uStack_420),
     local_408 = (undefined4 *)CONCAT44(local_408._4_4_,(undefined4)local_408),
     uStack_400 = (undefined4 *)CONCAT44(uStack_400._4_4_,(undefined4)uStack_400),
     local_3e8 = (undefined4 *)CONCAT44(local_3e8._4_4_,(undefined4)local_3e8),
     uStack_3e0 = (ulonglong *)CONCAT44(uStack_3e0._4_4_,(undefined4)uStack_3e0),
     *(longlong *)(param_1 + 0x178) != 0)) {
    if (param_5 == '\0') {
      lVar2 = *plVar5;
      uVar4 = FUN_1404b03b0();
      (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0x170),uVar4,1,0);
      lVar2 = **(longlong **)(param_1 + 0x178);
      uVar4 = FUN_1404b03b0();
      (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0x178),uVar4,1,0);
    }
    else {
      if (param_5 == '\x01') {
        if (*(char *)(param_1 + 400) == '\x01') {
          lVar2 = *plVar5;
          uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_248,L"Zone Progress",L"GFxMapMenu",L"LevelProgressLabel");
          (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0x170),uVar4,1,0);
          if (local_240 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_240 + 1;
            lVar2 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_240)(local_240);
              LOCK();
              piVar1 = (int *)((longlong)local_240 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_240 + 8))(local_240,1);
              }
            }
          }
          uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_218,L"{0}% Complete",L"GFxMapMenu",L"GenericPercentComplete");
          plVar5 = (longlong *)FTextFormat::FTextFormat(local_180,uVar4);
          local_b0[0] = 0;
          local_88 = '\0';
          local_a8 = (longlong)(int)ROUND((param_4 * 100.0 + param_4 * 100.0) - 0.5) >> 1;
          local_578 = local_b0;
          puStack_570 = local_80;
          local_4c8 = (undefined4 *)*plVar5;
          puStack_4c0 = (ulonglong *)plVar5[1];
          if (puStack_4c0 != (ulonglong *)0x0) {
            LOCK();
            *(int *)(puStack_4c0 + 1) = (int)puStack_4c0[1] + 1;
            UNLOCK();
          }
          local_408 = local_578;
          uStack_400 = puStack_570;
          uVar4 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                  TArray<FFormatArgumentValue,FDefaultAllocator>(local_3f8,&local_408);
          uVar4 = FText::Format(local_230,&local_4c8,uVar4);
          FText::FText(local_3c8,uVar4);
          if (local_228 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_228 + 1;
            lVar2 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_228)(local_228);
              LOCK();
              piVar1 = (int *)((longlong)local_228 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_228 + 8))(local_228,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_3f8);
          if ((local_88 != '\0') && (local_88 = '\0', local_98 != (longlong *)0x0)) {
            LOCK();
            plVar7 = local_98 + 1;
            lVar2 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_98)(local_98);
              LOCK();
              piVar1 = (int *)((longlong)local_98 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_98 + 8))(local_98,1);
              }
            }
          }
          plVar5 = (longlong *)plVar5[1];
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
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          (**(code **)(**(longlong **)(param_1 + 0x178) + 0x2b0))
                    (*(longlong **)(param_1 + 0x178),local_3c8,1,0);
          if (local_3c0 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_3c0 + 1;
            lVar2 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_3c0)(local_3c0);
              LOCK();
              piVar1 = (int *)((longlong)local_3c0 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_3c0 + 8))(local_3c0,1);
              }
            }
          }
          plVar5 = local_210;
        }
        else {
          uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_1e8,L"Zone Progress: {0}% Complete",L"GFxMapMenu",
                             L"LevelPercentComplete");
          puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_1b0,uVar4);
          local_80[0] = 0;
          local_58 = '\0';
          local_78 = (longlong)(int)ROUND((param_4 * 100.0 + param_4 * 100.0) - 0.5) >> 1;
          local_4c8 = local_80;
          puStack_4c0 = local_50;
          local_498 = *puVar8;
          local_490 = puVar8[1];
          if (local_490 != 0) {
            LOCK();
            *(int *)(local_490 + 8) = *(int *)(local_490 + 8) + 1;
            UNLOCK();
          }
          local_3e8 = local_4c8;
          uStack_3e0 = puStack_4c0;
          uVar4 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                  TArray<FFormatArgumentValue,FDefaultAllocator>(local_3d8,&local_3e8);
          uVar4 = FText::Format(local_200,&local_498,uVar4);
          FText::FText(local_3b0,uVar4);
          if (local_1f8 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_1f8 + 1;
            lVar2 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_1f8)(local_1f8);
              LOCK();
              piVar1 = (int *)((longlong)local_1f8 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_1f8 + 8))(local_1f8,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_3d8);
          if ((local_58 != '\0') && (local_58 = '\0', local_68 != (longlong *)0x0)) {
            LOCK();
            plVar5 = local_68 + 1;
            lVar2 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
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
          plVar5 = (longlong *)puVar8[1];
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
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          (**(code **)(**(longlong **)(param_1 + 0x170) + 0x2b0))
                    (*(longlong **)(param_1 + 0x170),local_3b0,1,0);
          if (local_3a8 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_3a8 + 1;
            lVar2 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_3a8)(local_3a8);
              LOCK();
              piVar1 = (int *)((longlong)local_3a8 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_3a8 + 8))(local_3a8,1);
              }
            }
          }
          plVar5 = local_1e0;
        }
      }
      else if (param_5 == '\x02') {
        if (*(char *)(param_1 + 400) == '\x01') {
          lVar2 = *plVar5;
          uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_2c0,L"Planet Progress",L"GFxMapMenu",L"PlanetProgressLabel");
          (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0x170),uVar4,1,0);
          if (local_2b8 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_2b8 + 1;
            lVar2 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_2b8)(local_2b8);
              LOCK();
              piVar1 = (int *)((longlong)local_2b8 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_2b8 + 8))(local_2b8,1);
              }
            }
          }
          uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_290,L"{0}% Complete",L"GFxMapMenu",L"GenericPercentComplete");
          plVar5 = (longlong *)FTextFormat::FTextFormat(local_1a0,uVar4);
          local_110[0] = 0;
          local_e8 = '\0';
          local_108 = (longlong)(int)ROUND((param_4 * 100.0 + param_4 * 100.0) - 0.5) >> 1;
          local_578 = local_110;
          puStack_570 = local_e0;
          local_4d8 = (undefined4 *)*plVar5;
          puStack_4d0 = (undefined4 *)plVar5[1];
          if (puStack_4d0 != (undefined4 *)0x0) {
            LOCK();
            puStack_4d0[2] = puStack_4d0[2] + 1;
            UNLOCK();
          }
          local_448 = local_578;
          uStack_440 = puStack_570;
          uVar4 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                  TArray<FFormatArgumentValue,FDefaultAllocator>(local_438,&local_448);
          uVar4 = FText::Format(local_2a8,&local_4d8,uVar4);
          FText::FText(local_350,uVar4);
          if (local_2a0 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_2a0 + 1;
            lVar2 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_2a0)(local_2a0);
              LOCK();
              piVar1 = (int *)((longlong)local_2a0 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_2a0 + 8))(local_2a0,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_438);
          if ((local_e8 != '\0') && (local_e8 = '\0', local_f8 != (longlong *)0x0)) {
            LOCK();
            plVar7 = local_f8 + 1;
            lVar2 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_f8)(local_f8);
              LOCK();
              piVar1 = (int *)((longlong)local_f8 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_f8 + 8))(local_f8,1);
              }
            }
          }
          plVar5 = (longlong *)plVar5[1];
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
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          (**(code **)(**(longlong **)(param_1 + 0x178) + 0x2b0))
                    (*(longlong **)(param_1 + 0x178),local_350,1,0);
          if (local_348 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_348 + 1;
            lVar2 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_348)(local_348);
              LOCK();
              piVar1 = (int *)((longlong)local_348 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_348 + 8))(local_348,1);
              }
            }
          }
          plVar5 = local_288;
        }
        else {
          uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_260,L"Planet Progress: {0}% Complete",L"GFxMapMenu",
                             L"PlanetPercentComplete");
          puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_190,uVar4);
          local_e0[0] = 0;
          local_b8 = '\0';
          local_d8 = (longlong)(int)ROUND((param_4 * 100.0 + param_4 * 100.0) - 0.5) >> 1;
          local_4d8 = local_e0;
          puStack_4d0 = local_b0;
          local_4a8 = *puVar8;
          local_4a0 = puVar8[1];
          if (local_4a0 != 0) {
            LOCK();
            *(int *)(local_4a0 + 8) = *(int *)(local_4a0 + 8) + 1;
            UNLOCK();
          }
          local_428 = local_4d8;
          uStack_420 = puStack_4d0;
          uVar4 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                  TArray<FFormatArgumentValue,FDefaultAllocator>(local_418,&local_428);
          uVar4 = FText::Format(local_278,&local_4a8,uVar4);
          FText::FText(local_398,uVar4);
          if (local_270 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_270 + 1;
            lVar2 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_270)(local_270);
              LOCK();
              piVar1 = (int *)((longlong)local_270 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_270 + 8))(local_270,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_418);
          if ((local_b8 != '\0') && (local_b8 = '\0', local_c8 != (longlong *)0x0)) {
            LOCK();
            plVar5 = local_c8 + 1;
            lVar2 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_c8)(local_c8);
              LOCK();
              piVar1 = (int *)((longlong)local_c8 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_c8 + 8))(local_c8,1);
              }
            }
          }
          plVar5 = (longlong *)puVar8[1];
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
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          (**(code **)(**(longlong **)(param_1 + 0x170) + 0x2b0))
                    (*(longlong **)(param_1 + 0x170),local_398,1,0);
          if (local_390 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_390 + 1;
            lVar2 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_390)(local_390);
              LOCK();
              piVar1 = (int *)((longlong)local_390 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_390 + 8))(local_390,1);
              }
            }
          }
          plVar5 = local_258;
        }
      }
      else {
        local_488 = (undefined4 *)CONCAT44(local_488._4_4_,(undefined4)local_488);
        uStack_480 = (undefined4 *)CONCAT44(uStack_480._4_4_,(undefined4)uStack_480);
        local_468 = (undefined4 *)CONCAT44(local_468._4_4_,(undefined4)local_468);
        uStack_460 = (undefined4 *)CONCAT44(uStack_460._4_4_,(undefined4)uStack_460);
        local_448 = (undefined4 *)CONCAT44(local_448._4_4_,(undefined4)local_448);
        uStack_440 = (undefined4 *)CONCAT44(uStack_440._4_4_,(undefined4)uStack_440);
        local_428 = (undefined4 *)CONCAT44(local_428._4_4_,(undefined4)local_428);
        uStack_420 = (undefined4 *)CONCAT44(uStack_420._4_4_,(undefined4)uStack_420);
        local_408 = (undefined4 *)CONCAT44(local_408._4_4_,(undefined4)local_408);
        uStack_400 = (undefined4 *)CONCAT44(uStack_400._4_4_,(undefined4)uStack_400);
        local_3e8 = (undefined4 *)CONCAT44(local_3e8._4_4_,(undefined4)local_3e8);
        uStack_3e0 = (ulonglong *)CONCAT44(uStack_3e0._4_4_,(undefined4)uStack_3e0);
        if (param_5 != '\x03') goto LAB_140fe07f3;
        if (*(char *)(param_1 + 400) == '\x01') {
          lVar2 = *plVar5;
          uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_338,L"Galaxy Progress",L"GFxMapMenu",L"GalaxyProgressLabel");
          (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0x170),uVar4,1,0);
          if (local_330 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_330 + 1;
            lVar2 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_330)(local_330);
              LOCK();
              piVar1 = (int *)((longlong)local_330 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_330 + 8))(local_330,1);
              }
            }
          }
          uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_308,L"{0}% Complete",L"GFxMapMenu",L"GenericPercentComplete");
          plVar5 = (longlong *)FTextFormat::FTextFormat(local_1d0,uVar4);
          local_170[0] = 0;
          local_148 = '\0';
          local_168 = (longlong)(int)ROUND((param_4 * 100.0 + param_4 * 100.0) - 0.5) >> 1;
          local_578 = local_170;
          puStack_570 = local_140;
          local_4e8 = *plVar5;
          local_4e0 = plVar5[1];
          if (local_4e0 != 0) {
            LOCK();
            *(int *)(local_4e0 + 8) = *(int *)(local_4e0 + 8) + 1;
            UNLOCK();
          }
          local_488 = local_578;
          uStack_480 = puStack_570;
          uVar4 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                  TArray<FFormatArgumentValue,FDefaultAllocator>(local_478,&local_488);
          uVar4 = FText::Format(local_320,&local_4e8,uVar4);
          FText::FText(local_380,uVar4);
          if (local_318 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_318 + 1;
            lVar2 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_318)(local_318);
              LOCK();
              piVar1 = (int *)((longlong)local_318 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_318 + 8))(local_318,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_478);
          if ((local_148 != '\0') && (local_148 = '\0', local_158 != (longlong *)0x0)) {
            LOCK();
            plVar7 = local_158 + 1;
            lVar2 = *plVar7;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_158)(local_158);
              LOCK();
              piVar1 = (int *)((longlong)local_158 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_158 + 8))(local_158,1);
              }
            }
          }
          plVar5 = (longlong *)plVar5[1];
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
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          (**(code **)(**(longlong **)(param_1 + 0x178) + 0x2b0))
                    (*(longlong **)(param_1 + 0x178),local_380,1,0);
          if (local_378 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_378 + 1;
            lVar2 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_378)(local_378);
              LOCK();
              piVar1 = (int *)((longlong)local_378 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_378 + 8))(local_378,1);
              }
            }
          }
          plVar5 = local_300;
        }
        else {
          uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_2d8,L"Galaxy Progress: {0}% Complete",L"GFxMapMenu",
                             L"GalaxyPercentComplete");
          puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_1c0,uVar4);
          local_140[0] = 0;
          local_118 = '\0';
          local_138 = (longlong)(int)ROUND((param_4 * 100.0 + param_4 * 100.0) - 0.5) >> 1;
          local_568 = local_140;
          puStack_560 = local_110;
          local_4b8 = *puVar8;
          local_4b0 = puVar8[1];
          if (local_4b0 != 0) {
            LOCK();
            *(int *)(local_4b0 + 8) = *(int *)(local_4b0 + 8) + 1;
            UNLOCK();
          }
          local_468 = local_568;
          uStack_460 = puStack_560;
          uVar4 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                  TArray<FFormatArgumentValue,FDefaultAllocator>(local_458,&local_468);
          uVar4 = FText::Format(local_2f0,&local_4b8,uVar4);
          FText::FText(local_368,uVar4);
          if (local_2e8 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_2e8 + 1;
            lVar2 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_2e8)(local_2e8);
              LOCK();
              piVar1 = (int *)((longlong)local_2e8 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_2e8 + 8))(local_2e8,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_458);
          if ((local_118 != '\0') && (local_118 = '\0', local_128 != (longlong *)0x0)) {
            LOCK();
            plVar5 = local_128 + 1;
            lVar2 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_128)(local_128);
              LOCK();
              piVar1 = (int *)((longlong)local_128 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_128 + 8))(local_128,1);
              }
            }
          }
          plVar5 = (longlong *)puVar8[1];
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
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          (**(code **)(**(longlong **)(param_1 + 0x170) + 0x2b0))
                    (*(longlong **)(param_1 + 0x170),local_368,1,0);
          if (local_360 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_360 + 1;
            lVar2 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_360)(local_360);
              LOCK();
              piVar1 = (int *)((longlong)local_360 + 0xc);
              iVar9 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_360 + 8))(local_360,1);
              }
            }
          }
          plVar5 = local_2d0;
        }
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
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
  }
LAB_140fe07f3:
  local_588 = 0;
  if (0 < *(int *)(param_1 + 0x188)) {
    local_4e8 = 0;
    do {
      iVar9 = local_588;
      lVar2 = *(longlong *)(local_4e8 + *(longlong *)(param_1 + 0x180));
      if (lVar2 != 0) {
        if ((local_588 < *(int *)(param_1 + 0x1a0)) && (local_588 < *(int *)(param_1 + 0x1b0))) {
          lVar6 = (longlong)local_588;
          local_548 = 0;
          local_540 = 0x13;
          lVar3 = *(longlong *)(param_1 + 0x198);
          local_578 = (undefined4 *)(*(longlong *)(param_1 + 0x1a8) + lVar6 * 0x18);
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_548,0);
          FGenericPlatformString::Memcpy(local_548,L"progressEntryLabel",0x26);
          local_598 = &local_558;
          local_558 = (longlong *)0x0;
          local_550 = 0;
          plVar7 = (longlong *)FUN_140ecc7d0(lVar2,&local_548,0,6);
          plVar5 = local_558;
          for (iVar9 = (int)local_550; iVar9 != 0; iVar9 = iVar9 + -1) {
            if (*plVar5 != 0) {
              FMemory::Free();
            }
            plVar5 = plVar5 + 2;
          }
          if (local_558 != (longlong *)0x0) {
            FMemory::Free(local_558);
          }
          if (local_548 != 0) {
            FMemory::Free();
          }
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x2b0))(plVar7,lVar3 + lVar6 * 0x18,1,0);
          }
          local_528 = 0;
          local_520 = 0x16;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_528,0);
          FGenericPlatformString::Memcpy(local_528,L"progressEntryProgress",0x2c);
          local_598 = &local_538;
          local_538 = (longlong *)0x0;
          local_530 = 0;
          plVar7 = (longlong *)FUN_140ecc7d0(lVar2,&local_528,0,6);
          plVar5 = local_538;
          for (iVar9 = (int)local_530; iVar9 != 0; iVar9 = iVar9 + -1) {
            if (*plVar5 != 0) {
              FMemory::Free();
            }
            plVar5 = plVar5 + 2;
          }
          if (local_538 != (longlong *)0x0) {
            FMemory::Free(local_538);
          }
          if (local_528 != 0) {
            FMemory::Free();
          }
          iVar9 = local_588;
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x2b0))(plVar7,local_578,1,0);
            iVar9 = local_588;
          }
        }
        else {
          local_508 = 0;
          local_500 = 0x13;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_508,0);
          FGenericPlatformString::Memcpy(local_508,L"progressEntryLabel",0x26);
          local_598 = &local_518;
          local_518 = (longlong *)0x0;
          local_510 = 0;
          plVar7 = (longlong *)FUN_140ecc7d0(lVar2,&local_508,0,6);
          plVar5 = local_518;
          for (iVar10 = (int)local_510; iVar10 != 0; iVar10 = iVar10 + -1) {
            if (*plVar5 != 0) {
              FMemory::Free();
            }
            plVar5 = plVar5 + 2;
          }
          if (local_518 != (longlong *)0x0) {
            FMemory::Free(local_518);
          }
          if (local_508 != 0) {
            FMemory::Free();
          }
          if (plVar7 != (longlong *)0x0) {
            lVar3 = *plVar7;
            uVar4 = FUN_1404b03b0();
            (**(code **)(lVar3 + 0x2b0))(plVar7,uVar4,1,0);
          }
          local_568 = (undefined4 *)0x0;
          puStack_560 = (undefined4 *)&DAT_00000016;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_568,0);
          FGenericPlatformString::Memcpy(local_568,L"progressEntryProgress",0x2c);
          local_598 = &local_4f8;
          local_4f8 = (longlong *)0x0;
          local_4f0 = 0;
          plVar7 = (longlong *)FUN_140ecc7d0(lVar2,&local_568,0,6);
          plVar5 = local_4f8;
          for (iVar10 = (int)local_4f0; iVar10 != 0; iVar10 = iVar10 + -1) {
            if (*plVar5 != 0) {
              FMemory::Free();
            }
            plVar5 = plVar5 + 2;
          }
          if (local_4f8 != (longlong *)0x0) {
            FMemory::Free(local_4f8);
          }
          if (local_568 != (undefined4 *)0x0) {
            FMemory::Free();
          }
          if (plVar7 != (longlong *)0x0) {
            lVar2 = *plVar7;
            uVar4 = FUN_1404b03b0();
            (**(code **)(lVar2 + 0x2b0))(plVar7,uVar4,1,0);
          }
        }
      }
      local_4e8 = local_4e8 + 8;
      local_588 = iVar9 + 1;
    } while (local_588 < *(int *)(param_1 + 0x188));
  }
  return;
}



// FUNCTION 140fe16e0 FUN_140fe16e0 body=1637 status=ok
// SIG undefined FUN_140fe16e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fe16e0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined4 local_220;
  undefined8 *local_218;
  ulonglong *puStack_210;
  undefined8 local_208;
  longlong local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a0 [8];
  longlong *local_198;
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
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [24];
  undefined1 local_a8 [24];
  undefined4 local_90 [4];
  undefined1 local_80 [8];
  longlong *local_78;
  char local_68;
  undefined4 local_60 [4];
  undefined1 local_50 [8];
  longlong *local_48;
  char local_38;
  ulonglong local_30 [3];
  
  local_30[0] = DAT_1468387a8 ^ (ulonglong)auStack_248;
  if (*(longlong *)(param_1 + 0x6b8) != 0) {
    uVar6 = FUN_140f141d0();
    local_220 = 0;
    local_228 = 0xbf800000;
    FUN_142ef30e0(local_1a0,DAT_146b3e2a0,uVar6,0);
    lVar7 = FText::FText(local_c0,local_1a0);
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_128,L"{0} Accept",L"GFxMissionDeliveryMenu",
                       L"MissionDeliveryAcceptButton");
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_e0,uVar6);
    local_90[0] = 4;
    FText::FText(local_80,lVar7);
    local_208 = *puVar8;
    local_218 = (undefined8 *)local_90;
    puStack_210 = (ulonglong *)local_60;
    local_200 = puVar8[1];
    local_68 = '\x01';
    if (local_200 != 0) {
      LOCK();
      *(int *)(local_200 + 8) = *(int *)(local_200 + 8) + 1;
      UNLOCK();
    }
    local_1e8 = local_218;
    uStack_1e0 = puStack_210;
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_1d8,&local_1e8);
    uVar6 = FText::Format(local_140,&local_208,uVar6);
    FText::FText(local_1b8,uVar6);
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_138 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_1d8);
    if (local_68 != '\0') {
      local_68 = '\0';
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
    }
    plVar4 = (longlong *)puVar8[1];
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
    plVar4 = *(longlong **)(lVar7 + 8);
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
    FUN_142ed3af0(*(undefined8 *)(param_1 + 0x6b8),local_1b8,0);
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_1b0 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1b0)(local_1b0);
        LOCK();
        piVar1 = (int *)((longlong)local_1b0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1b0 + 8))(local_1b0,1);
        }
      }
    }
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_120 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar1 = (int *)((longlong)local_120 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_120 + 8))(local_120,1);
        }
      }
    }
    if (local_198 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_198 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_198)(local_198);
        LOCK();
        piVar1 = (int *)((longlong)local_198 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_198 + 8))(local_198,1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x6c0) != 0) {
    uVar6 = FUN_140f141d0(param_1);
    local_220 = 0;
    local_228 = 0xbf800000;
    FUN_142ef30e0(local_170,DAT_146b3e2b8,uVar6,0);
    lVar7 = FText::FText(local_a8,local_170);
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_f8,L"{0} Decline",L"GFxMissionDeliveryMenu",
                       L"MissionDeliveryDeclineButton");
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_d0,uVar6);
    local_60[0] = 4;
    FText::FText(local_50,lVar7);
    local_1f8 = *puVar8;
    local_218 = (undefined8 *)local_60;
    puStack_210 = local_30;
    local_1f0 = puVar8[1];
    local_38 = '\x01';
    if (local_1f0 != 0) {
      LOCK();
      *(int *)(local_1f0 + 8) = *(int *)(local_1f0 + 8) + 1;
      UNLOCK();
    }
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_1c8,&local_218);
    uVar6 = FText::Format(local_110,&local_1f8,uVar6);
    FText::FText(local_188,uVar6);
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_108 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar1 = (int *)((longlong)local_108 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_108 + 8))(local_108,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_1c8);
    if (local_38 != '\0') {
      local_38 = '\0';
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_48 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
    }
    plVar4 = (longlong *)puVar8[1];
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
    plVar4 = *(longlong **)(lVar7 + 8);
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
    FUN_142ed3af0(*(undefined8 *)(param_1 + 0x6c0),local_188,0);
    if (local_180 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_180 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_180)(local_180);
        LOCK();
        piVar1 = (int *)((longlong)local_180 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_180 + 8))(local_180,1);
        }
      }
    }
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_f0 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    if (local_168 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_168 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_168)(local_168);
        LOCK();
        piVar1 = (int *)((longlong)local_168 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_168 + 8))(local_168,1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x780) != 0) {
    uVar6 = FUN_140f141d0(param_1);
    local_220 = 0;
    local_228 = 0xbf800000;
    FUN_142ef30e0(local_158,DAT_1468730c0,uVar6,0);
    (**(code **)(**(longlong **)(param_1 + 0x780) + 0x2b0))
              (*(longlong **)(param_1 + 0x780),local_158,1,0);
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_150 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
  }
  return;
}



// FUNCTION 140fe1d60 FUN_140fe1d60 body=113 status=ok
// SIG undefined FUN_140fe1d60(void)

void FUN_140fe1d60(longlong param_1)

{
  longlong local_18 [2];
  
  FUN_142edc290();
  if (*(longlong *)(param_1 + 0x6b8) != 0) {
    local_18[1] = 8;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"default",0x10);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x6b8),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140fe1de0 FUN_140fe1de0 body=88 status=ok
// SIG undefined FUN_140fe1de0(void)

undefined8 * FUN_140fe1de0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x60,param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_1444f81f0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_2);
  }
  *param_1 = UE4Function_Private::
             TFunctionRefCaller<<lambda_50573a4081bc06268289253819177437>,void___cdecl(void)>::Call;
  return param_1;
}



// FUNCTION 140fe1e40 FUN_140fe1e40 body=286 status=ok
// SIG undefined FUN_140fe1e40(void)

undefined1 * FUN_140fe1e40(undefined8 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined1 local_1f;
  undefined8 local_18;
  
  _guard_xfg_dispatch_icall_nop(local_78,0,0x68);
  uVar1 = FUN_1404b03b0();
  FText::FText(local_78,uVar1);
  uVar1 = FUN_1404b03b0();
  FText::FText(local_60,uVar1);
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  FName::FName(&local_28,&DAT_143f3eda8,1);
  local_1f = 0xb;
  local_18 = 0;
  *param_2 = *(undefined1 *)*param_1;
  FText::FText(param_2 + 8,local_78);
  FText::FText(param_2 + 0x20,local_60);
  *(undefined8 *)(param_2 + 0x38) = local_48;
  *(undefined4 *)(param_2 + 0x40) = (undefined4)local_40;
  *(undefined4 *)(param_2 + 0x44) = local_40._4_4_;
  *(undefined8 *)(param_2 + 0x48) = local_38;
  *(undefined4 *)(param_2 + 0x50) = (undefined4)local_30;
  *(undefined4 *)(param_2 + 0x54) = local_30._4_4_;
  *(undefined8 *)(param_2 + 0x58) = local_28;
  param_2[0x60] = local_20;
  param_2[0x61] = local_1f;
  *(undefined8 *)(param_2 + 0x68) = local_18;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_140fe63c0(local_78);
  return param_2;
}



// FUNCTION 140fe1f60 FUN_140fe1f60 body=225 status=ok
// SIG undefined FUN_140fe1f60(void)

undefined8 FUN_140fe1f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_10 = 3;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_1442e7fd8;
    FWeakObjectPtr::operator=(plVar1 + 1,param_3);
    plVar1[2] = param_4;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_1442e8020;
  }
  TBaseMulticastDelegate<void>::Add(param_1,param_2,&local_18);
  plVar1 = local_18;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) {
      return param_2;
    }
    (**(code **)(*local_18 + 0x28))(local_18,0);
    plVar1 = (longlong *)FMemory::Realloc(plVar1,0,0);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return param_2;
}



// FUNCTION 140fe2050 FUN_140fe2050 body=209 status=ok
// SIG undefined FUN_140fe2050(void)

undefined8 *
FUN_140fe2050(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res10 [8];
  
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_1441c0108;
    FWeakObjectPtr::operator=(plVar3 + 1,param_3);
    plVar3[2] = param_4;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_1441c0150;
  }
  *param_2 = 0;
  if (plVar3 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,1);
    puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
    iVar1 = (int)param_1[1];
    uVar2 = *puVar5;
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    *param_2 = uVar2;
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  return param_2;
}



// FUNCTION 140fe2130 FUN_140fe2130 body=168 status=ok
// SIG undefined FUN_140fe2130(void)

void FUN_140fe2130(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  lVar2 = *param_1;
  if (param_3 != 0) {
    param_2 = param_2 + 0x20;
    do {
      FString::FString(lVar2,param_2 + -0x20);
      FString::FString(lVar2 + 0x10,param_2 + -0x10);
      FText::FText(lVar2 + 0x20,param_2);
      puVar1 = (undefined4 *)(param_2 + 0x18);
      param_2 = param_2 + 0x40;
      *(undefined4 *)(lVar2 + 0x38) = *puVar1;
      lVar2 = lVar2 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140fe21e0 FUN_140fe21e0 body=417 status=ok
// SIG undefined FUN_140fe21e0(void)

int * FUN_140fe21e0(longlong *param_1,int *param_2,byte *param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int local_28 [2];
  byte *local_20;
  
  TSparseArray<TSetElement<TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  *param_2 = local_28[0];
  *local_20 = *param_3;
  FUN_140fe5730(local_20 + 8,param_3 + 8);
  local_20[0x70] = 0xff;
  local_20[0x71] = 0xff;
  local_20[0x72] = 0xff;
  local_20[0x73] = 0xff;
  bVar6 = false;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    if (iVar5 != 0) {
      plVar2 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar2 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      ((longlong)(int)param_1[9] - 1U & (ulonglong)*local_20) * 4);
      if (iVar3 != -1) {
        do {
          if (*(byte *)((longlong)iVar3 * 0x78 + *param_1) == *local_20) goto LAB_140fe22ab;
          iVar3 = *(int *)((longlong)iVar3 * 0x78 + 0x70 + *param_1);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_140fe22ab:
    bVar6 = iVar3 != -1;
    if (bVar6) {
      _Dst = (void *)((longlong)iVar3 * 0x78 + *param_1);
      FUN_140fe63c0((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,local_20,0x70);
      TSparseArray<TSetElement<TTuple<unsigned_int,Audio::FMixerBus>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar3;
      goto LAB_140fe2356;
    }
  }
  cVar1 = TSet<TTuple<enum_EXRarity,FGOfferWidgetRaritySettings>,TDefaultMapHashableKeyFuncs<enum_EXRarity,FGOfferWidgetRaritySettings,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar5,0);
  if (cVar1 == '\0') {
    uVar4 = (int)param_1[9] - 1U & (uint)*local_20;
    *(uint *)(local_20 + 0x74) = uVar4;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(undefined4 *)(local_20 + 0x70) =
         *(undefined4 *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar4) * 4)
    ;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar4) * 4) = *param_2;
  }
LAB_140fe2356:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 140fe2390 FUN_140fe2390 body=402 status=ok
// SIG undefined FUN_140fe2390(void)

int * FUN_140fe2390(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int local_28 [2];
  byte *local_20;
  
  TSparseArray<TSetElement<TTuple<FShaderCacheKey,TSet<FShaderPipelineKey,DefaultKeyFuncs<FShaderPipelineKey,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  *param_2 = local_28[0];
  FUN_140fe1e40(param_3,local_20);
  local_20[0x70] = 0xff;
  local_20[0x71] = 0xff;
  local_20[0x72] = 0xff;
  local_20[0x73] = 0xff;
  bVar6 = false;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    if (iVar5 != 0) {
      plVar2 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar2 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      ((longlong)(int)param_1[9] - 1U & (ulonglong)*local_20) * 4);
      if (iVar3 != -1) {
        do {
          if (*(byte *)((longlong)iVar3 * 0x78 + *param_1) == *local_20) goto LAB_140fe244c;
          iVar3 = *(int *)((longlong)iVar3 * 0x78 + 0x70 + *param_1);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_140fe244c:
    bVar6 = iVar3 != -1;
    if (bVar6) {
      _Dst = (void *)((longlong)iVar3 * 0x78 + *param_1);
      FUN_140fe63c0((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,local_20,0x70);
      TSparseArray<TSetElement<TTuple<unsigned_int,Audio::FMixerBus>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar3;
      goto LAB_140fe24f7;
    }
  }
  cVar1 = TSet<TTuple<enum_EXRarity,FGOfferWidgetRaritySettings>,TDefaultMapHashableKeyFuncs<enum_EXRarity,FGOfferWidgetRaritySettings,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar5,0);
  if (cVar1 == '\0') {
    uVar4 = (int)param_1[9] - 1U & (uint)*local_20;
    *(uint *)(local_20 + 0x74) = uVar4;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(undefined4 *)(local_20 + 0x70) =
         *(undefined4 *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar4) * 4)
    ;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar4) * 4) = *param_2;
  }
LAB_140fe24f7:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 140fe2530 FUN_140fe2530 body=856 status=ok
// SIG undefined FUN_140fe2530(void)

int * FUN_140fe2530(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  uint uVar8;
  byte *pbVar9;
  uint *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int iVar13;
  undefined8 *_Src;
  void *_Dst;
  bool local_res8;
  int local_res10 [2];
  undefined8 local_48;
  longlong *local_40;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2);
  }
  else {
    iVar13 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar13 * 0x20 + 4 + *param_1);
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar13;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar10 = (uint *)((longlong)plVar12 +
                    (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar10 = *puVar10 | 1 << ((byte)iVar13 & 0x1f);
  puVar11 = (undefined8 *)*param_3;
  _Src = (undefined8 *)((longlong)iVar13 * 0x20 + *param_1);
  puVar4 = (undefined8 *)param_3[1];
  *_Src = *puVar11;
  lVar5 = puVar11[1];
  _Src[1] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  _Src[2] = *puVar4;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    plVar12 = (longlong *)_Src[1];
    local_48 = *_Src;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    local_40 = plVar12;
    FUN_1405499a0(param_1,local_res10,&local_48);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar12 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)();
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)local_res10[0] * 0x20 + *param_1);
      plVar12 = *(longlong **)((longlong)_Dst + 8);
      iVar13 = local_res10[0];
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar12 + 1;
        lVar5 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          iVar13 = local_res10[0];
          if (iVar2 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
            iVar13 = local_res10[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar13;
      goto LAB_140fe284a;
    }
  }
  cVar7 = TSet<TTuple<EOS_EpicAccountIdDetails_*,TSharedRef<IAttributeAccessInterface,0>_>,TDefaultMapHashableKeyFuncs<EOS_EpicAccountIdDetails_*,TSharedRef<IAttributeAccessInterface,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar7 == '\0') {
    plVar12 = (longlong *)_Src[1];
    plVar6 = (longlong *)*_Src;
    iVar13 = *param_2;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    uVar8 = (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar5 = *plVar6;
    if (uVar8 < 4) {
      pbVar9 = (byte *)(**(code **)(lVar5 + 0x10))(plVar6);
      uVar8 = (uint)*pbVar9;
    }
    else if (uVar8 < 8) {
      puVar10 = (uint *)(**(code **)(lVar5 + 0x10))();
      uVar8 = *puVar10;
    }
    else {
      puVar11 = (undefined8 *)(**(code **)(lVar5 + 0x10))(plVar6);
      uVar8 = (int)*puVar11 + (int)((ulonglong)*puVar11 >> 0x20) * 0x17;
    }
    *(uint *)((longlong)_Src + 0x1c) = (int)param_1[9] - 1U & uVar8;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar12 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar12 +
          ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0x1c)) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 +
            ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Src + 0x1c)) * 4) =
         iVar13;
  }
LAB_140fe284a:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140fe2890 FUN_140fe2890 body=172 status=ok
// SIG undefined FUN_140fe2890(void)

longlong * FUN_140fe2890(ulonglong *param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar2 = (longlong *)*param_1;
  uVar4 = (longlong)(int)param_1[1] & 0x1fffffffffffffff;
  if (plVar2 + (int)param_1[1] < plVar2) {
    uVar4 = uVar3;
  }
  if (uVar4 != 0) {
    do {
      if ((*plVar2 != 0) && (*(longlong *)(*plVar2 + 0xf0) == param_3)) {
        iVar1 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = *plVar2;
      }
      plVar2 = plVar2 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar4);
  }
  return param_2;
}



// FUNCTION 140fe2940 FUN_140fe2940 body=178 status=ok
// SIG undefined FUN_140fe2940(void)

longlong * FUN_140fe2940(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  
  *param_2 = 0;
  param_2[1] = 0;
  plVar6 = (longlong *)*param_1;
  plVar1 = plVar6 + (int)param_1[1];
  for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
    lVar3 = *plVar6;
    if (lVar3 != 0) {
      lVar5 = UCircularThrobber::GetPrivateStaticClass();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = *plVar6;
      }
    }
  }
  return param_2;
}



// FUNCTION 140fe2a00 FUN_140fe2a00 body=478 status=ok
// SIG undefined FUN_140fe2a00(void)

/* WARNING: Removing unreachable block (ram,0x000140fe2bd5) */
/* WARNING: Removing unreachable block (ram,0x000140fe2b5e) */

longlong FUN_140fe2a00(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar8 = *(int *)(param_1 + 0x48);
  lVar9 = (longlong)iVar8;
  lVar6 = 0;
  if (0 < iVar8) {
    lVar10 = lVar9 * 8;
    lVar7 = lVar6;
    lVar5 = lVar9;
    do {
      iVar8 = iVar8 + -1;
      lVar10 = lVar10 + -8;
      lVar5 = lVar5 + -1;
      if ((lVar5 < 0) || (*(int *)(param_1 + 0x48) <= iVar8)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) &&
          (plVar1 = *(longlong **)(lVar10 + *(longlong *)(param_1 + 0x40)),
          plVar1 != (longlong *)0x0)) && (lVar3 = (**(code **)(*plVar1 + 0x278))(), lVar3 != 0)) {
        lVar4 = USoUIInputKeySelector::GetPrivateStaticClass();
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
          lVar6 = USoUIInputKeySelector::GetPrivateStaticClass();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar3;
          }
          return 0;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar9);
  }
  iVar8 = *(int *)(param_1 + 0x98);
  if (0 < (longlong)iVar8) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + lVar6 * 8);
      if ((plVar1 != (longlong *)0x0) && (lVar9 = (**(code **)(*plVar1 + 0x278))(), lVar9 != 0)) {
        lVar10 = USoUIInputKeySelector::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar6 = USoUIInputKeySelector::GetPrivateStaticClass();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar9;
          }
          return 0;
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar8);
  }
  return 0;
}



// FUNCTION 140fe2be0 FUN_140fe2be0 body=670 status=ok
// SIG undefined FUN_140fe2be0(void)

longlong FUN_140fe2be0(longlong *param_1)

{
  void *_Dst;
  short *psVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  wchar_t *pwVar12;
  short *psVar13;
  undefined2 *puVar14;
  wchar_t *_Src;
  uint uVar15;
  int iVar16;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  
  psVar1 = (short *)*param_1;
  pwVar12 = (wchar_t *)0x0;
  uVar3 = 0;
  iVar16 = (int)param_1[1];
  puVar14 = &DAT_143f3eda8;
  psVar13 = psVar1 + iVar16;
  psVar8 = psVar1;
  if (psVar13 != psVar1) {
    do {
      if (*psVar8 == 0x2e) {
        if ((int)((longlong)psVar8 - (longlong)psVar1 >> 1) != -1) goto LAB_140fe2de1;
        break;
      }
      psVar8 = psVar8 + 1;
    } while (psVar8 != psVar13);
    do {
      if (psVar13 == psVar1) goto LAB_140fe2de1;
      psVar13 = psVar13 + -1;
    } while (*psVar13 != 0x2f);
    iVar11 = (int)((longlong)psVar13 - (longlong)psVar1 >> 1);
    if (iVar11 != -1) {
      uVar7 = iVar11 + 0x80000000;
      uVar15 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar15 = uVar3;
      }
      if (iVar11 + 1U < uVar15) {
        uVar15 = iVar11 + 1U;
      }
      uVar9 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar9 = uVar3;
      }
      uVar10 = uVar15;
      if ((uVar15 <= uVar7) && (uVar10 = uVar9, uVar7 < uVar9)) {
        uVar10 = uVar7;
      }
      local_38 = (wchar_t *)0x0;
      local_2c = 0;
      psVar13 = &DAT_143f3eda8;
      if (iVar16 != 0) {
        psVar13 = psVar1;
      }
      iVar11 = uVar10 - uVar15;
      iVar16 = iVar11 + 1;
      if (iVar11 == 0) {
        iVar16 = 0;
      }
      _Src = pwVar12;
      local_30 = iVar16;
      if ((0 < iVar16) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), iVar16 = local_30,
         _Src = local_38, 0 < local_30)) {
        wcsncpy(local_38,psVar13 + (int)uVar15,(longlong)iVar11);
        _Src[iVar11] = L'\0';
      }
      iVar11 = (int)param_1[1];
      uVar7 = iVar11 - 1;
      if (iVar11 < 1) {
        uVar7 = uVar3;
      }
      iVar11 = (iVar11 < 1) + 1 + iVar11;
      *(int *)(param_1 + 1) = iVar11;
      if (*(int *)((longlong)param_1 + 0xc) < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      *(undefined2 *)(*param_1 + (longlong)(int)uVar7 * 2) = 0x2e;
      *(undefined2 *)(*param_1 + 2 + (longlong)(int)uVar7 * 2) = 0;
      if ((iVar16 != 0) && (iVar16 = iVar16 + -1, iVar16 != 0)) {
        iVar11 = (int)param_1[1];
        iVar2 = (uint)(iVar11 == 0) + iVar11 + iVar16;
        *(int *)(param_1 + 1) = iVar2;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
        }
        _Dst = (void *)(*param_1 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar16 * 2);
        *(undefined2 *)((longlong)iVar16 * 2 + (longlong)_Dst) = 0;
      }
      if (_Src != (wchar_t *)0x0) {
        FMemory::Free(_Src);
      }
    }
  }
LAB_140fe2de1:
  plVar4 = (longlong *)USoundMix::GetPrivateStaticClass();
  if (plVar4[0x1f] == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
  }
  if ((int)param_1[1] != 0) {
    puVar14 = (undefined2 *)*param_1;
  }
  uVar5 = USoundMix::GetPrivateStaticClass();
  lVar6 = FUN_141799c90(uVar5,0,puVar14,0,0,0,1);
  if (lVar6 != 0) {
    iVar16 = *(int *)(lVar6 + 0xc);
    if (iVar16 < (int)DAT_1469e91c4) {
      uVar7 = iVar16 >> 0x1f & 0xffff;
      uVar3 = iVar16 + uVar7;
      pwVar12 = (wchar_t *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18);
    }
    *(uint *)(pwVar12 + 4) = *(uint *)(pwVar12 + 4) | 0x40000000;
  }
  return lVar6;
}



// FUNCTION 140fe2e80 FUN_140fe2e80 body=666 status=ok
// SIG undefined FUN_140fe2e80(void)

longlong FUN_140fe2e80(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_140fe2fe6;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = FUN_14138e2b0();
LAB_140fe2fe6:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_14138e2b0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_140fe3059;
  }
  lVar7 = 0;
LAB_140fe3059:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return lVar7;
}



// FUNCTION 140fe3120 FUN_140fe3120 body=666 status=ok
// SIG undefined FUN_140fe3120(void)

longlong FUN_140fe3120(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_140fe3286;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = UXAnimInstanceBase::GetPrivateStaticClass();
LAB_140fe3286:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = UXAnimInstanceBase::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_140fe32f9;
  }
  lVar7 = 0;
LAB_140fe32f9:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return lVar7;
}



// FUNCTION 140fe33c0 FUN_140fe33c0 body=917 status=ok
// SIG undefined FUN_140fe33c0(void)

longlong FUN_140fe33c0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar10 = 0;
  cVar8 = FUN_142091120();
  if (cVar8 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140fe346f:
      puVar13 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_140fe346f;
      local_78 = *(longlong **)(param_1 + 0x30);
      bVar7 = true;
      bVar6 = false;
      local_80 = 0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_78 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_78 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar9 = (int)uVar10;
          LOCK();
          bVar14 = iVar9 == (int)local_78[1];
          if (bVar14) {
            *(int *)(local_78 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_80;
            local_80 = uVar10;
            goto LAB_140fe3484;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_78 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_78 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar13 = &local_80;
    }
LAB_140fe3484:
    local_70 = uVar10;
    plVar4 = (longlong *)puVar13[1];
    puVar13[1] = 0;
    local_68 = plVar4;
    *puVar13 = 0;
    plVar4 = plStack_58;
    if ((bVar6) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_58 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar4 = local_78;
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar7 = true;
    bVar6 = false;
    puVar13 = &local_70;
    uVar10 = local_70;
  }
  else {
    puVar13 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  plVar4 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  plVar5 = plStack_48;
  if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_48 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar5 = local_68;
  if ((bVar7) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    return 0;
  }
  if (param_3 != 0) {
    lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar12 = param_3;
    do {
      if (lVar12 == lVar11) goto LAB_140fe360d;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = FUN_1413789f0();
LAB_140fe360d:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = FUN_1413789f0();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_140fe368a;
  }
  lVar12 = 0;
LAB_140fe368a:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return lVar12;
}



// FUNCTION 140fe3760 FUN_140fe3760 body=666 status=ok
// SIG undefined FUN_140fe3760(void)

longlong FUN_140fe3760(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_140fe38c6;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = FUN_1413875f0();
LAB_140fe38c6:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_1413875f0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_140fe3939;
  }
  lVar7 = 0;
LAB_140fe3939:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return lVar7;
}



// FUNCTION 140fe3a00 FUN_140fe3a00 body=666 status=ok
// SIG undefined FUN_140fe3a00(void)

longlong FUN_140fe3a00(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_140fe3b66;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = FUN_14138dd10();
LAB_140fe3b66:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_14138dd10();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_140fe3bd9;
  }
  lVar7 = 0;
LAB_140fe3bd9:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return lVar7;
}



// FUNCTION 140fe3ca0 FUN_140fe3ca0 body=93 status=ok
// SIG undefined FUN_140fe3ca0(void)

longlong FUN_140fe3ca0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x60c);
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
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



// FUNCTION 140fe3d00 FUN_140fe3d00 body=107 status=ok
// SIG undefined FUN_140fe3d00(void)

longlong FUN_140fe3d00(longlong param_1,char param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((param_2 == '\0') && (*(char *)(param_1 + 0x98) == '\x02')) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    lVar3 = FUN_141404840();
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
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140fe3d70 FUN_140fe3d70 body=93 status=ok
// SIG undefined FUN_140fe3d70(void)

longlong FUN_140fe3d70(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x614);
  if (lVar2 != 0) {
    lVar3 = FUN_1414d9130();
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



// FUNCTION 140fe3dd0 HeapSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_> body=395 status=ok
// SIG undefined HeapSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>
               (undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  iVar4 = (param_2 + -2) / 2;
  if (-1 < iVar4) {
    iVar5 = iVar4 * 2 + 1;
    iVar2 = iVar5;
    iVar7 = iVar4;
joined_r0x000140fe3e16:
    do {
      if (iVar5 < param_2) {
        iVar5 = iVar4 * 2;
        iVar6 = iVar5 + 1;
        if (iVar5 + 2 < param_2) {
          cVar3 = FUN_140fecb20(param_4,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
          if (cVar3 != '\0') {
            iVar6 = iVar5;
          }
          iVar6 = iVar6 + 1;
        }
        cVar3 = FUN_140fecb20(param_4,param_1[iVar4],param_1[iVar6]);
        if (cVar3 != '\0') {
          uVar1 = param_1[iVar4];
          param_1[iVar4] = param_1[iVar6];
          iVar5 = iVar6 * 2 + 1;
          param_1[iVar6] = uVar1;
          iVar4 = iVar6;
          goto joined_r0x000140fe3e16;
        }
      }
      iVar5 = iVar2 + -2;
      iVar4 = iVar7 + -1;
      iVar2 = iVar5;
      iVar7 = iVar4;
    } while (-1 < iVar4);
  }
  param_2 = param_2 + -1;
  lVar8 = (longlong)param_2;
  if (0 < param_2) {
    do {
      iVar4 = 0;
      uVar1 = *param_1;
      *param_1 = param_1[lVar8];
      param_1[lVar8] = uVar1;
      if (1 < param_2) {
        do {
          iVar2 = iVar4 * 2;
          iVar5 = iVar2 + 1;
          if (iVar2 + 2 < param_2) {
            cVar3 = FUN_140fecb20(param_4,param_1[(longlong)iVar2 + 2],param_1[iVar5]);
            if (cVar3 != '\0') {
              iVar5 = iVar2;
            }
            iVar5 = iVar5 + 1;
          }
          cVar3 = FUN_140fecb20(param_4,param_1[iVar4],param_1[iVar5]);
          if (cVar3 == '\0') break;
          uVar1 = param_1[iVar4];
          param_1[iVar4] = param_1[iVar5];
          param_1[iVar5] = uVar1;
          iVar4 = iVar5;
        } while (iVar5 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar8 = lVar8 + -1;
    } while (0 < lVar8);
  }
  return;
}



// FUNCTION 140fe3f60 FUN_140fe3f60 body=652 status=ok
// SIG undefined FUN_140fe3f60(void)

void FUN_140fe3f60(undefined8 *param_1,int param_2)

{
  int iVar1;
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
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  
  iVar13 = (param_2 + -2) / 2;
  if (-1 < iVar13) {
    iVar14 = iVar13 * 2 + 1;
    iVar1 = iVar14;
    iVar15 = iVar13;
joined_r0x000140fe3f95:
    do {
      if (iVar14 < param_2) {
        iVar14 = iVar13 * 2;
        iVar17 = iVar14 + 1;
        if (iVar14 + 2 < param_2) {
          if (*(int *)(param_1 + (longlong)iVar17 * 10 + 2) <
              *(int *)(param_1 + (longlong)iVar14 * 10 + 0x16)) {
            iVar17 = iVar14;
          }
          iVar17 = iVar17 + 1;
        }
        puVar16 = param_1 + (longlong)iVar17 * 10;
        puVar18 = param_1 + (longlong)iVar13 * 10;
        if (*(int *)(puVar16 + 2) < *(int *)(puVar18 + 2)) {
          if (puVar18 != puVar16) {
            uVar2 = puVar16[1];
            uVar3 = *puVar18;
            uVar4 = puVar18[1];
            uVar5 = puVar18[2];
            uVar6 = puVar18[3];
            uVar7 = puVar18[4];
            uVar8 = puVar18[5];
            uVar9 = puVar18[6];
            uVar10 = puVar18[7];
            uVar11 = puVar18[8];
            uVar12 = puVar18[9];
            *puVar18 = *puVar16;
            puVar18[1] = uVar2;
            uVar2 = puVar16[3];
            puVar18[2] = puVar16[2];
            puVar18[3] = uVar2;
            uVar2 = puVar16[5];
            puVar18[4] = puVar16[4];
            puVar18[5] = uVar2;
            uVar2 = puVar16[7];
            puVar18[6] = puVar16[6];
            puVar18[7] = uVar2;
            uVar2 = puVar16[9];
            puVar18[8] = puVar16[8];
            puVar18[9] = uVar2;
            *puVar16 = uVar3;
            puVar16[1] = uVar4;
            puVar16[2] = uVar5;
            puVar16[3] = uVar6;
            puVar16[4] = uVar7;
            puVar16[5] = uVar8;
            puVar16[6] = uVar9;
            puVar16[7] = uVar10;
            puVar16[8] = uVar11;
            puVar16[9] = uVar12;
          }
          iVar14 = iVar17 * 2 + 1;
          iVar13 = iVar17;
          goto joined_r0x000140fe3f95;
        }
      }
      iVar14 = iVar1 + -2;
      iVar13 = iVar15 + -1;
      iVar1 = iVar14;
      iVar15 = iVar13;
    } while (-1 < iVar13);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar16 = param_1 + (longlong)param_2 * 10;
    do {
      if (param_1 != puVar16) {
        uVar2 = puVar16[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        uVar7 = param_1[4];
        uVar8 = param_1[5];
        uVar9 = param_1[6];
        uVar10 = param_1[7];
        uVar11 = param_1[8];
        uVar12 = param_1[9];
        *param_1 = *puVar16;
        param_1[1] = uVar2;
        uVar2 = puVar16[3];
        param_1[2] = puVar16[2];
        param_1[3] = uVar2;
        uVar2 = puVar16[5];
        param_1[4] = puVar16[4];
        param_1[5] = uVar2;
        uVar2 = puVar16[7];
        param_1[6] = puVar16[6];
        param_1[7] = uVar2;
        uVar2 = puVar16[9];
        param_1[8] = puVar16[8];
        param_1[9] = uVar2;
        *puVar16 = uVar3;
        puVar16[1] = uVar4;
        puVar16[2] = uVar5;
        puVar16[3] = uVar6;
        puVar16[4] = uVar7;
        puVar16[5] = uVar8;
        puVar16[6] = uVar9;
        puVar16[7] = uVar10;
        puVar16[8] = uVar11;
        puVar16[9] = uVar12;
      }
      iVar13 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar13 * 2;
          iVar14 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            if (*(int *)(param_1 + (longlong)iVar14 * 10 + 2) <
                *(int *)(param_1 + (longlong)iVar1 * 10 + 0x16)) {
              iVar14 = iVar1;
            }
            iVar14 = iVar14 + 1;
          }
          puVar18 = param_1 + (longlong)iVar14 * 10;
          puVar19 = param_1 + (longlong)iVar13 * 10;
          if (*(int *)(puVar19 + 2) <= *(int *)(puVar18 + 2)) break;
          if (puVar19 != puVar18) {
            uVar2 = puVar18[1];
            uVar3 = *puVar19;
            uVar4 = puVar19[1];
            uVar5 = puVar19[2];
            uVar6 = puVar19[3];
            uVar7 = puVar19[4];
            uVar8 = puVar19[5];
            uVar9 = puVar19[6];
            uVar10 = puVar19[7];
            uVar11 = puVar19[8];
            uVar12 = puVar19[9];
            *puVar19 = *puVar18;
            puVar19[1] = uVar2;
            uVar2 = puVar18[3];
            puVar19[2] = puVar18[2];
            puVar19[3] = uVar2;
            uVar2 = puVar18[5];
            puVar19[4] = puVar18[4];
            puVar19[5] = uVar2;
            uVar2 = puVar18[7];
            puVar19[6] = puVar18[6];
            puVar19[7] = uVar2;
            uVar2 = puVar18[9];
            puVar19[8] = puVar18[8];
            puVar19[9] = uVar2;
            *puVar18 = uVar3;
            puVar18[1] = uVar4;
            puVar18[2] = uVar5;
            puVar18[3] = uVar6;
            puVar18[4] = uVar7;
            puVar18[5] = uVar8;
            puVar18[6] = uVar9;
            puVar18[7] = uVar10;
            puVar18[8] = uVar11;
            puVar18[9] = uVar12;
          }
          iVar13 = iVar14;
        } while (iVar14 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar16 = puVar16 + -10;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 140fe41f0 IntroSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_> body=681 status=ok
// SIG undefined IntroSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar11 = ::_guard_xfg_dispatch_icall_nop(fVar11);
    local_338 = (undefined4)(longlong)(fVar11 + fVar11);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar7 = &local_348;
    do {
      puVar5 = (undefined8 *)*plVar7;
      puVar4 = (undefined8 *)plVar7[1];
      local_358 = plVar7[2];
      lVar3 = ((longlong)puVar4 - (longlong)puVar5 >> 3) + 1;
      puVar10 = puVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_140fe42d0:
        if (8 < lVar3) {
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          puVar8 = puVar4 + 1;
          uVar1 = puVar10[lVar3 >> 1];
          puVar10[lVar3 >> 1] = *puVar10;
          *puVar10 = uVar1;
          puVar5 = puVar10;
LAB_140fe4300:
          puVar5 = puVar5 + 1;
          if (puVar5 <= puVar4) goto code_r0x000140fe4309;
          goto LAB_140fe4320;
        }
        for (; puVar8 = puVar10, puVar5 = puVar10, puVar10 < puVar4; puVar4 = puVar4 + -1) {
          while (puVar5 = puVar5 + 1, puVar5 <= puVar4) {
            cVar2 = FUN_140fecb20(param_4,*puVar8,*puVar5);
            if (cVar2 != '\0') {
              puVar8 = puVar5;
            }
          }
          uVar1 = *puVar8;
          *puVar8 = *puVar4;
          *puVar4 = uVar1;
        }
        goto LAB_140fe43e5;
      }
LAB_140fe43d6:
      HeapSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>
                (puVar5,lVar3,param_3,param_4);
LAB_140fe43e5:
      plVar7 = plVar7 + -3;
    } while (&local_348 <= plVar7);
  }
  return;
code_r0x000140fe4309:
  cVar2 = FUN_140fecb20(param_4,*puVar10,*puVar5);
  if (cVar2 == '\0') goto LAB_140fe4300;
LAB_140fe4320:
  do {
    puVar9 = puVar8;
    puVar8 = puVar9 + -1;
    if (puVar8 <= puVar10) break;
    cVar2 = FUN_140fecb20(param_4,*puVar8,*puVar10);
  } while (cVar2 == '\0');
  if (puVar5 <= puVar8) {
    uVar1 = *puVar5;
    *puVar5 = *puVar8;
    *puVar8 = uVar1;
    goto LAB_140fe4300;
  }
  uVar1 = *puVar10;
  iVar6 = iVar6 + -1;
  *puVar10 = *puVar8;
  *puVar8 = uVar1;
  if ((longlong)((longlong)puVar8 + (-8 - (longlong)puVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar4 - (longlong)puVar5 & 0xfffffffffffffff8U)) {
    if (puVar5 < puVar4) {
      *plVar7 = (longlong)puVar5;
      plVar7[1] = (longlong)puVar4;
      *(int *)(plVar7 + 2) = iVar6;
      plVar7 = plVar7 + 3;
    }
    if (puVar8 <= puVar10 + 1) goto LAB_140fe43e5;
    puVar4 = puVar9 + -2;
    puVar5 = puVar10;
  }
  else {
    if (puVar10 + 1 < puVar8) {
      *plVar7 = (longlong)puVar10;
      plVar7[1] = (longlong)(puVar9 + -2);
      *(int *)(plVar7 + 2) = iVar6;
      plVar7 = plVar7 + 3;
    }
    if (puVar4 <= puVar5) goto LAB_140fe43e5;
  }
  lVar3 = ((longlong)puVar4 - (longlong)puVar5 >> 3) + 1;
  puVar10 = puVar5;
  if (iVar6 == 0) goto LAB_140fe43d6;
  goto LAB_140fe42d0;
}



// FUNCTION 140fe44a0 FUN_140fe44a0 body=938 status=ok
// SIG undefined FUN_140fe44a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fe44a0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
  undefined1 auStack_368 [48];
  int local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 8;
    fVar15 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar15 = fVar15 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar15 = _guard_xfg_dispatch_icall_nop(fVar15);
    local_318 = (undefined4)(longlong)(fVar15 + fVar15);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar14 = &local_328;
    do {
      plVar5 = (longlong *)*plVar14;
      plVar13 = (longlong *)plVar14[1];
      local_338 = (int)plVar14[2];
      lVar9 = ((longlong)plVar13 - (longlong)plVar5 >> 3) + 1;
      plVar8 = plVar5;
      if (local_338 != 0) {
LAB_140fe4570:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          lVar1 = plVar8[lVar9 >> 1];
          plVar8[lVar9 >> 1] = *plVar8;
          plVar10 = plVar13 + 1;
          *plVar8 = lVar1;
          plVar5 = plVar8;
LAB_140fe45a0:
          plVar5 = plVar5 + 1;
          if (plVar5 <= plVar13) goto code_r0x000140fe45a9;
          goto LAB_140fe45c0;
        }
        for (; plVar10 = plVar8, plVar5 = plVar8, plVar8 < plVar13; plVar13 = plVar13 + -1) {
          while (plVar11 = plVar10, plVar5 = plVar5 + 1, plVar5 <= plVar13) {
            plVar10 = plVar5;
            if (*(byte *)(*plVar5 + 0x34) <= *(byte *)(*plVar11 + 0x34)) {
              plVar10 = plVar11;
            }
          }
          lVar9 = *plVar11;
          *plVar11 = *plVar13;
          *plVar13 = lVar9;
        }
        goto LAB_140fe47aa;
      }
LAB_140fe4676:
      iVar6 = (int)lVar9;
      iVar3 = (iVar6 + -2) / 2;
      if (-1 < iVar3) {
        iVar4 = iVar3 * 2 + 1;
        iVar2 = iVar4;
        iVar7 = iVar3;
joined_r0x000140fe4695:
        do {
          if (iVar4 < iVar6) {
            iVar4 = iVar3 * 2;
            iVar12 = iVar4 + 1;
            if (iVar4 + 2 < iVar6) {
              if (*(byte *)(plVar5[(longlong)iVar4 + 2] + 0x34) < *(byte *)(plVar5[iVar12] + 0x34))
              {
                iVar12 = iVar4;
              }
              iVar12 = iVar12 + 1;
            }
            lVar9 = plVar5[iVar3];
            if (*(byte *)(lVar9 + 0x34) < *(byte *)(plVar5[iVar12] + 0x34)) {
              iVar4 = iVar12 * 2 + 1;
              plVar5[iVar3] = plVar5[iVar12];
              plVar5[iVar12] = lVar9;
              iVar3 = iVar12;
              goto joined_r0x000140fe4695;
            }
          }
          iVar4 = iVar2 + -2;
          iVar3 = iVar7 + -1;
          iVar2 = iVar4;
          iVar7 = iVar3;
        } while (-1 < iVar3);
      }
      iVar6 = iVar6 + -1;
      lVar9 = (longlong)iVar6;
      if (0 < iVar6) {
        do {
          iVar3 = 0;
          lVar1 = *plVar5;
          *plVar5 = plVar5[lVar9];
          plVar5[lVar9] = lVar1;
          if (1 < iVar6) {
            do {
              iVar2 = iVar3 * 2;
              iVar4 = iVar2 + 1;
              if (iVar2 + 2 < iVar6) {
                if (*(byte *)(plVar5[(longlong)iVar2 + 2] + 0x34) < *(byte *)(plVar5[iVar4] + 0x34))
                {
                  iVar4 = iVar2;
                }
                iVar4 = iVar4 + 1;
              }
              lVar1 = plVar5[iVar3];
              if (*(byte *)(plVar5[iVar4] + 0x34) <= *(byte *)(lVar1 + 0x34)) break;
              plVar5[iVar3] = plVar5[iVar4];
              plVar5[iVar4] = lVar1;
              iVar3 = iVar4;
            } while (iVar4 * 2 + 1 < iVar6);
          }
          iVar6 = iVar6 + -1;
          lVar9 = lVar9 + -1;
        } while (0 < lVar9);
      }
LAB_140fe47aa:
      plVar14 = plVar14 + -3;
    } while (&local_328 <= plVar14);
  }
  return;
code_r0x000140fe45a9:
  if (*(byte *)(*plVar5 + 0x34) <= *(byte *)(*plVar8 + 0x34)) goto LAB_140fe45a0;
LAB_140fe45c0:
  do {
    plVar11 = plVar10;
    lVar9 = plVar11[-1];
    plVar10 = plVar11 + -1;
    if (plVar10 <= plVar8) break;
  } while (*(byte *)(*plVar8 + 0x34) <= *(byte *)(lVar9 + 0x34));
  if (plVar5 <= plVar10) {
    lVar1 = *plVar5;
    *plVar5 = lVar9;
    *plVar10 = lVar1;
    goto LAB_140fe45a0;
  }
  lVar1 = *plVar8;
  *plVar8 = lVar9;
  *plVar10 = lVar1;
  local_338 = local_338 + -1;
  if ((longlong)((longlong)plVar10 + (-8 - (longlong)plVar8) & 0xfffffffffffffff8U) <
      (longlong)((longlong)plVar13 - (longlong)plVar5 & 0xfffffffffffffff8U)) {
    if (plVar5 < plVar13) {
      *plVar14 = (longlong)plVar5;
      plVar14[1] = (longlong)plVar13;
      *(int *)(plVar14 + 2) = local_338;
      plVar14 = plVar14 + 3;
    }
    if (plVar10 <= plVar8 + 1) goto LAB_140fe47aa;
    plVar13 = plVar11 + -2;
    plVar5 = plVar8;
  }
  else {
    if (plVar8 + 1 < plVar10) {
      *plVar14 = (longlong)plVar8;
      plVar14[1] = (longlong)(plVar11 + -2);
      *(int *)(plVar14 + 2) = local_338;
      plVar14 = plVar14 + 3;
    }
    if (plVar13 <= plVar5) goto LAB_140fe47aa;
  }
  lVar9 = ((longlong)plVar13 - (longlong)plVar5 >> 3) + 1;
  plVar8 = plVar5;
  if (local_338 == 0) goto LAB_140fe4676;
  goto LAB_140fe4570;
}



// FUNCTION 140fe4850 FUN_140fe4850 body=1063 status=ok
// SIG undefined FUN_140fe4850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fe4850(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
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
  longlong lVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  longlong *plVar28;
  float fVar29;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_2 * 0x50 + -0x50 + param_1;
    fVar29 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar29 = fVar29 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar29 = _guard_xfg_dispatch_icall_nop(fVar29);
    local_338 = (undefined4)(longlong)(fVar29 + fVar29);
    _guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar28 = &local_348;
    do {
      puVar27 = (undefined8 *)*plVar28;
      puVar22 = (undefined8 *)plVar28[1];
      lVar2 = plVar28[2];
      local_358._0_4_ = (int)lVar2;
      lVar21 = ((longlong)puVar22 - (longlong)puVar27) / 0x50 + 1;
      puVar26 = puVar27;
      if ((int)local_358 != 0) {
LAB_140fe4950:
        if (8 < lVar21) {
          if (lVar21 < 0) {
            lVar21 = lVar21 + 1;
          }
          puVar27 = puVar26 + (lVar21 >> 1) * 10;
          if (puVar27 != puVar26) {
            uVar10 = puVar26[1];
            uVar3 = *(undefined4 *)puVar27;
            uVar4 = *(undefined4 *)((longlong)puVar27 + 4);
            uVar5 = *(undefined4 *)(puVar27 + 1);
            uVar6 = *(undefined4 *)((longlong)puVar27 + 0xc);
            uVar11 = puVar27[2];
            uVar12 = puVar27[3];
            uVar13 = puVar27[4];
            uVar14 = puVar27[5];
            uVar15 = puVar27[6];
            uVar16 = puVar27[7];
            uVar17 = puVar27[8];
            uVar18 = puVar27[9];
            *puVar27 = *puVar26;
            puVar27[1] = uVar10;
            uVar10 = puVar26[3];
            puVar27[2] = puVar26[2];
            puVar27[3] = uVar10;
            uVar10 = puVar26[5];
            puVar27[4] = puVar26[4];
            puVar27[5] = uVar10;
            uVar10 = puVar26[7];
            puVar27[6] = puVar26[6];
            puVar27[7] = uVar10;
            uVar7 = *(undefined4 *)((longlong)puVar26 + 0x44);
            uVar8 = *(undefined4 *)(puVar26 + 9);
            uVar9 = *(undefined4 *)((longlong)puVar26 + 0x4c);
            *(undefined4 *)(puVar27 + 8) = *(undefined4 *)(puVar26 + 8);
            *(undefined4 *)((longlong)puVar27 + 0x44) = uVar7;
            *(undefined4 *)(puVar27 + 9) = uVar8;
            *(undefined4 *)((longlong)puVar27 + 0x4c) = uVar9;
            *(undefined4 *)puVar26 = uVar3;
            *(undefined4 *)((longlong)puVar26 + 4) = uVar4;
            *(undefined4 *)(puVar26 + 1) = uVar5;
            *(undefined4 *)((longlong)puVar26 + 0xc) = uVar6;
            puVar26[2] = uVar11;
            puVar26[3] = uVar12;
            puVar26[4] = uVar13;
            puVar26[5] = uVar14;
            puVar26[6] = uVar15;
            puVar26[7] = uVar16;
            puVar26[8] = uVar17;
            puVar26[9] = uVar18;
          }
          puVar24 = puVar22 + 10;
          puVar27 = puVar26;
LAB_140fe49d2:
          puVar23 = puVar27;
          puVar27 = puVar23 + 10;
          if (puVar27 <= puVar22) goto code_r0x000140fe49db;
          goto LAB_140fe49e5;
        }
        for (; puVar27 = puVar26, puVar24 = puVar26, puVar26 < puVar22; puVar22 = puVar22 + -10) {
          while (puVar23 = puVar27, puVar27 = puVar24 + 10, puVar27 <= puVar22) {
            piVar1 = (int *)(puVar24 + 0xc);
            puVar24 = puVar27;
            if (*(int *)(puVar23 + 2) <= *piVar1) {
              puVar27 = puVar23;
            }
          }
          if (puVar23 != puVar22) {
            uVar10 = puVar22[1];
            uVar11 = *puVar23;
            uVar12 = puVar23[1];
            uVar13 = puVar23[2];
            uVar14 = puVar23[3];
            uVar15 = puVar23[4];
            uVar16 = puVar23[5];
            uVar17 = puVar23[6];
            uVar18 = puVar23[7];
            uVar19 = puVar23[8];
            uVar20 = puVar23[9];
            *puVar23 = *puVar22;
            puVar23[1] = uVar10;
            uVar10 = puVar22[3];
            puVar23[2] = puVar22[2];
            puVar23[3] = uVar10;
            uVar10 = puVar22[5];
            puVar23[4] = puVar22[4];
            puVar23[5] = uVar10;
            uVar10 = puVar22[7];
            puVar23[6] = puVar22[6];
            puVar23[7] = uVar10;
            uVar10 = puVar22[9];
            puVar23[8] = puVar22[8];
            puVar23[9] = uVar10;
            *puVar22 = uVar11;
            puVar22[1] = uVar12;
            puVar22[2] = uVar13;
            puVar22[3] = uVar14;
            puVar22[4] = uVar15;
            puVar22[5] = uVar16;
            puVar22[6] = uVar17;
            puVar22[7] = uVar18;
            puVar22[8] = uVar19;
            puVar22[9] = uVar20;
          }
        }
        goto LAB_140fe4b86;
      }
LAB_140fe4b77:
      local_358 = lVar2;
      FUN_140fe3f60(puVar27,lVar21,param_3,param_4);
LAB_140fe4b86:
      plVar28 = plVar28 + -3;
    } while (&local_348 <= plVar28);
  }
  return;
code_r0x000140fe49db:
  if (*(int *)(puVar26 + 2) <= *(int *)(puVar23 + 0xc)) goto LAB_140fe49d2;
LAB_140fe49e5:
  do {
    puVar25 = puVar24;
    puVar24 = puVar25 + -10;
    if (puVar24 <= puVar26) break;
  } while (*(int *)(puVar25 + -8) <= *(int *)(puVar26 + 2));
  if (puVar27 <= puVar24) {
    if (puVar27 != puVar24) {
      uVar10 = puVar25[-9];
      uVar3 = *(undefined4 *)puVar27;
      uVar4 = *(undefined4 *)((longlong)puVar23 + 0x54);
      uVar5 = *(undefined4 *)(puVar23 + 0xb);
      uVar6 = *(undefined4 *)((longlong)puVar23 + 0x5c);
      uVar11 = puVar23[0xc];
      uVar12 = puVar23[0xd];
      uVar13 = puVar23[0xe];
      uVar14 = puVar23[0xf];
      uVar15 = puVar23[0x10];
      uVar16 = puVar23[0x11];
      uVar17 = puVar23[0x12];
      uVar18 = puVar23[0x13];
      *puVar27 = *puVar24;
      puVar23[0xb] = uVar10;
      uVar10 = puVar25[-7];
      puVar23[0xc] = puVar25[-8];
      puVar23[0xd] = uVar10;
      uVar10 = puVar25[-5];
      puVar23[0xe] = puVar25[-6];
      puVar23[0xf] = uVar10;
      uVar10 = puVar25[-3];
      puVar23[0x10] = puVar25[-4];
      puVar23[0x11] = uVar10;
      uVar7 = *(undefined4 *)((longlong)puVar25 + -0xc);
      uVar8 = *(undefined4 *)(puVar25 + -1);
      uVar9 = *(undefined4 *)((longlong)puVar25 + -4);
      *(undefined4 *)(puVar23 + 0x12) = *(undefined4 *)(puVar25 + -2);
      *(undefined4 *)((longlong)puVar23 + 0x94) = uVar7;
      *(undefined4 *)(puVar23 + 0x13) = uVar8;
      *(undefined4 *)((longlong)puVar23 + 0x9c) = uVar9;
      *(undefined4 *)puVar24 = uVar3;
      *(undefined4 *)((longlong)puVar25 + -0x4c) = uVar4;
      *(undefined4 *)(puVar25 + -9) = uVar5;
      *(undefined4 *)((longlong)puVar25 + -0x44) = uVar6;
      puVar25[-8] = uVar11;
      puVar25[-7] = uVar12;
      puVar25[-6] = uVar13;
      puVar25[-5] = uVar14;
      puVar25[-4] = uVar15;
      puVar25[-3] = uVar16;
      puVar25[-2] = uVar17;
      puVar25[-1] = uVar18;
    }
    goto LAB_140fe49d2;
  }
  if (puVar26 != puVar24) {
    uVar10 = puVar25[-9];
    uVar3 = *(undefined4 *)puVar26;
    uVar4 = *(undefined4 *)((longlong)puVar26 + 4);
    uVar5 = *(undefined4 *)(puVar26 + 1);
    uVar6 = *(undefined4 *)((longlong)puVar26 + 0xc);
    uVar11 = puVar26[2];
    uVar12 = puVar26[3];
    uVar13 = puVar26[4];
    uVar14 = puVar26[5];
    uVar15 = puVar26[6];
    uVar16 = puVar26[7];
    uVar17 = puVar26[8];
    uVar18 = puVar26[9];
    *puVar26 = *puVar24;
    puVar26[1] = uVar10;
    uVar10 = puVar25[-7];
    puVar26[2] = puVar25[-8];
    puVar26[3] = uVar10;
    uVar10 = puVar25[-5];
    puVar26[4] = puVar25[-6];
    puVar26[5] = uVar10;
    uVar10 = puVar25[-3];
    puVar26[6] = puVar25[-4];
    puVar26[7] = uVar10;
    uVar7 = *(undefined4 *)((longlong)puVar25 + -0xc);
    uVar8 = *(undefined4 *)(puVar25 + -1);
    uVar9 = *(undefined4 *)((longlong)puVar25 + -4);
    *(undefined4 *)(puVar26 + 8) = *(undefined4 *)(puVar25 + -2);
    *(undefined4 *)((longlong)puVar26 + 0x44) = uVar7;
    *(undefined4 *)(puVar26 + 9) = uVar8;
    *(undefined4 *)((longlong)puVar26 + 0x4c) = uVar9;
    *(undefined4 *)puVar24 = uVar3;
    *(undefined4 *)((longlong)puVar25 + -0x4c) = uVar4;
    *(undefined4 *)(puVar25 + -9) = uVar5;
    *(undefined4 *)((longlong)puVar25 + -0x44) = uVar6;
    puVar25[-8] = uVar11;
    puVar25[-7] = uVar12;
    puVar25[-6] = uVar13;
    puVar25[-5] = uVar14;
    puVar25[-4] = uVar15;
    puVar25[-3] = uVar16;
    puVar25[-2] = uVar17;
    puVar25[-1] = uVar18;
  }
  local_358._0_4_ = (int)local_358 + -1;
  if (((longlong)puVar24 + (-0x50 - (longlong)puVar26)) / 0x50 <
      ((longlong)puVar22 - (longlong)puVar27) / 0x50) {
    if (puVar27 < puVar22) {
      *plVar28 = (longlong)puVar27;
      plVar28[1] = (longlong)puVar22;
      *(int *)(plVar28 + 2) = (int)local_358;
      plVar28 = plVar28 + 3;
    }
    if (puVar24 <= puVar26 + 10) goto LAB_140fe4b86;
    puVar22 = puVar25 + -0x14;
    puVar27 = puVar26;
  }
  else {
    if (puVar26 + 10 < puVar24) {
      *plVar28 = (longlong)puVar26;
      plVar28[1] = (longlong)(puVar25 + -0x14);
      *(int *)(plVar28 + 2) = (int)local_358;
      plVar28 = plVar28 + 3;
    }
    if (puVar22 <= puVar27) goto LAB_140fe4b86;
  }
  lVar21 = ((longlong)puVar22 - (longlong)puVar27) / 0x50 + 1;
  puVar26 = puVar27;
  if ((int)local_358 == 0) goto LAB_140fe4b77;
  goto LAB_140fe4950;
}



// FUNCTION 140fe4c80 FUN_140fe4c80 body=69 status=ok
// SIG undefined FUN_140fe4c80(void)

ulonglong FUN_140fe4c80(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UUGJournalKey::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140fe4cd0 FUN_140fe4cd0 body=617 status=ok
// SIG undefined FUN_140fe4cd0(void)

bool FUN_140fe4cd0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (lVar9 == 0) goto LAB_140fe4ee4;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_140fe4e27;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_142f18d50();
LAB_140fe4e27:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_140fe4e9b:
    lVar9 = 0;
  }
  else {
    lVar10 = FUN_142f18d50();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140fe4e9b;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar9;
LAB_140fe4ee4:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return *param_2 != 0;
}



// FUNCTION 140fe4f40 FUN_140fe4f40 body=879 status=ok
// SIG undefined FUN_140fe4f40(void)

bool FUN_140fe4f40(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_140fe4fff:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_140fe4fff;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_140fe5014;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_140fe5014:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_140fe524f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_140fe519d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_142f1e6c0();
LAB_140fe519d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_140fe5216:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_142f1e6c0();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_140fe5216;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *param_2 = lVar11;
LAB_140fe524f:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 140fe52b0 FUN_140fe52b0 body=617 status=ok
// SIG undefined FUN_140fe52b0(void)

bool FUN_140fe52b0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (lVar9 == 0) goto LAB_140fe54c4;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_140fe5407;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_142f25280();
LAB_140fe5407:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_140fe547b:
    lVar9 = 0;
  }
  else {
    lVar10 = FUN_142f25280();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140fe547b;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar9;
LAB_140fe54c4:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return *param_2 != 0;
}



// FUNCTION 140fe5520 TFunction<void___cdecl(void)> body=185 status=ok
// SIG undefined TFunction<void___cdecl(void)>(void)

undefined8 *
TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
          (undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2[6] == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_1 + 2,param_2 + 2,0x20);
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    plVar2 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar2 = param_1 + 2;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2);
      pcVar1 = (code *)*param_2;
      goto LAB_140fe55b5;
    }
  }
  pcVar1 = FHardwareCursor::GetHandle;
LAB_140fe55b5:
  *param_1 = pcVar1;
  *param_2 = FHardwareCursor::GetHandle;
  return param_1;
}



// FUNCTION 140fe55e0 FUN_140fe55e0 body=212 status=ok
// SIG undefined FUN_140fe55e0(void)

undefined8 * FUN_140fe55e0(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = 0;
  FString::FString(param_1 + 1);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x60,param_1 + 6);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_14465fbb0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_3);
  }
  param_1[4] = UE4Function_Private::
               TFunctionRefCaller<<lambda_50573a4081bc06268289253819177437>,void___cdecl(void)>::
               Call;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0xe] = FUN_1407c3030;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  if (*param_2 != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    plVar2 = *(longlong **)(param_3 + 0x30);
    if (*(longlong **)(param_3 + 0x30) == (longlong *)0x0) {
      plVar2 = (longlong *)(param_3 + 0x10);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140fe56c0 TFunction<void___cdecl(void)> body=112 status=ok
// SIG undefined TFunction<void___cdecl(void)>(void)

undefined8 *
TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_2 + 8) != 0) {
    puVar2 = (undefined8 *)param_2[6];
    if ((undefined8 *)param_2[6] == (undefined8 *)0x0) {
      puVar2 = param_2 + 2;
    }
    if (puVar2 != (undefined8 *)0x0) {
      plVar1 = (longlong *)(**(code **)*puVar2)(puVar2,param_1 + 2);
      (**(code **)(*plVar1 + 8))(plVar1);
      *param_1 = *param_2;
      return param_1;
    }
  }
  *param_1 = FHardwareCursor::GetHandle;
  return param_1;
}



// FUNCTION 140fe5730 FUN_140fe5730 body=104 status=ok
// SIG undefined FUN_140fe5730(void)

longlong FUN_140fe5730(longlong param_1,longlong param_2)

{
  FText::FText();
  FText::FText(param_1 + 0x18,param_2 + 0x18);
  FString::FString(param_1 + 0x30,param_2 + 0x30);
  FString::FString(param_1 + 0x40,param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(param_2 + 0x59);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  return param_1;
}



// FUNCTION 140fe57a0 FUN_140fe57a0 body=129 status=ok
// SIG undefined FUN_140fe57a0(void)

longlong FUN_140fe57a0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_1441d26b8;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined **)(param_1 + 0x20) = &DAT_1441d2800;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(param_2 + 0x59);
  *(undefined1 *)(param_1 + 0x5a) = *(undefined1 *)(param_2 + 0x5a);
  return param_1;
}



// FUNCTION 140fe5830 FUN_140fe5830 body=232 status=ok
// SIG undefined FUN_140fe5830(void)

longlong FUN_140fe5830(longlong param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar5 = FUN_1404b03b0();
  FText::FText(param_1,uVar5);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined **)(param_1 + 0x20) = &DAT_1441d2800;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x18) = param_4;
  FText::operator=(param_1,param_3);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x28);
  cVar4 = FUN_142f63b10(param_1 + 0x20);
  if (cVar4 != '\0') {
    lVar6 = FUN_142f5f490(param_1 + 0x20);
    if (lVar6 != 0) {
      *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(lVar6 + 0xa8);
      *(undefined1 *)(param_1 + 0x5a) = *(undefined1 *)(lVar6 + 0xba);
    }
  }
  return param_1;
}



// FUNCTION 140fe5920 FUN_140fe5920 body=147 status=ok
// SIG undefined FUN_140fe5920(void)

longlong FUN_140fe5920(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1404b03b0();
  FText::FText(param_1,uVar1);
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined **)(param_1 + 0x20) = &DAT_1441d2800;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  uVar1 = FUN_1404b03b0();
  FText::operator=(param_1,uVar1);
  (**(code **)(*(longlong *)(param_1 + 0x20) + 0x10))(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined2 *)(param_1 + 0x59) = 0;
  return param_1;
}



// FUNCTION 140fe59c0 FUN_140fe59c0 body=494 status=ok
// SIG undefined FUN_140fe59c0(void)

undefined8 * FUN_140fe59c0(undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    _guard_xfg_dispatch_icall_nop(param_1 + 7,(void *)(param_2 + 0x38),4);
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_140fe68f0(param_1 + 0xb,param_2 + 0x58);
  if (*(longlong *)(param_2 + 0x98) == 0) {
    _guard_xfg_dispatch_icall_nop(param_1 + 0x12,(void *)(param_2 + 0x90),4);
  }
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  param_1[0x13] = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)(param_2 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  param_1[0x16] = 0;
  param_1[0x16] = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  *(undefined8 *)(param_2 + 0xb8) = 0;
  param_1[0x18] = 0;
  param_1[0x18] = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_2 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  *(undefined8 *)(param_2 + 200) = 0;
  param_1[0x1a] = *(undefined8 *)(param_2 + 0xd0);
  return param_1;
}



// FUNCTION 140fe5bb0 FUN_140fe5bb0 body=488 status=ok
// SIG undefined FUN_140fe5bb0(void)

undefined8 * FUN_140fe5bb0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::operator=();
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 0xb,param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  param_1[0x16] = 0;
  iVar6 = *(int *)(param_2 + 0xb8);
  lVar2 = *(longlong *)(param_2 + 0xb0);
  *(int *)(param_1 + 0x17) = iVar6;
  if (iVar6 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  }
  else {
    TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(param_1 + 0x16,iVar6,0);
    puVar4 = (undefined8 *)param_1[0x16];
    puVar5 = (undefined4 *)(lVar2 + 0x18);
    do {
      *puVar4 = 0xffffffffffffffff;
      *(undefined4 *)(puVar4 + 1) = 0xffffffff;
      puVar4[2] = *(undefined8 *)(puVar5 + -2);
      *(undefined4 *)(puVar4 + 3) = *puVar5;
      puVar4[4] = 0;
      iVar6 = iVar6 + -1;
      puVar4 = puVar4 + 5;
      puVar5 = puVar5 + 10;
    } while (iVar6 != 0);
  }
  param_1[0x18] = 0;
  iVar6 = *(int *)(param_2 + 200);
  lVar2 = *(longlong *)(param_2 + 0xc0);
  *(int *)(param_1 + 0x19) = iVar6;
  if (iVar6 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  }
  else {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1 + 0x18,iVar6,0);
    puVar4 = (undefined8 *)param_1[0x18];
    puVar7 = (undefined8 *)(lVar2 + 0x10);
    do {
      *puVar4 = 0;
      iVar1 = *(int *)(puVar7 + -1);
      _Src = (void *)puVar7[-2];
      *(int *)(puVar4 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar4,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar4,_Src,(longlong)iVar1 << 3);
      }
      uVar3 = *puVar7;
      puVar7 = puVar7 + 3;
      puVar4[2] = uVar3;
      puVar4 = puVar4 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  param_1[0x1a] = *(undefined8 *)(param_2 + 0xd0);
  return param_1;
}



// FUNCTION 140fe5da0 FUN_140fe5da0 body=89 status=ok
// SIG undefined FUN_140fe5da0(void)

undefined8 * FUN_140fe5da0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_140e9aa30(param_1,uVar1);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x100000;
  *param_1 = &PTR__scalar_deleting_destructor__14465e0e8;
  param_1[0x9b] = &PTR_LAB_14465e650;
  *(undefined4 *)(param_1 + 0xd0) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 0x694) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5df) = 1;
  return param_1;
}



// FUNCTION 140fe5e00 FUN_140fe5e00 body=622 status=ok
// SIG undefined FUN_140fe5e00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140fe5e00(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong local_18 [2];
  
  uVar1 = FUN_14178c940();
  FUN_140e9aa30(param_1,uVar1);
  *param_1 = &PTR_FUN_14465e918;
  param_1[0x9b] = &PTR_LAB_14465eea8;
  param_1[0xd0] = &PTR_LAB_14465f028;
  FName::FName(param_1 + 0xd1,"Select_Close",1);
  FName::FName(param_1 + 0xd2,"MainMenu_Option_SubCategory_Open",1);
  FName::FName(param_1 + 0xd3,"MainMenu_Confirm",1);
  FName::FName(param_1 + 0xd4,"MainMenu_Confirm",1);
  FName::FName(param_1 + 0xd5,"PhotoMode_TakePhoto",1);
  FName::FName(param_1 + 0xd6,"Numeric_Slider",1);
  FName::FName(param_1 + 0xd7,"Numeric_Slider",1);
  FName::FName(param_1 + 0xd8,"Navigate",1);
  *(undefined1 *)(param_1 + 0xdb) = 1;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6dc) = 0x3f000000;
  param_1[0xdc] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xdd) = DAT_1468b5d98;
  *(undefined1 *)((longlong)param_1 + 0x6ec) = 1;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  FUN_141785db0(L"/Game/UI/_Shared/_Design/Audio/MainMenu.MainMenu");
  local_18[0] = 0;
  local_18[1] = 0x31;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy
            (local_18[0],L"/Game/UI/_Shared/_Design/Audio/MainMenu.MainMenu",0x62);
  FUN_14179acf0(local_18,1);
  lVar2 = FUN_140fe2be0(local_18);
  if (lVar2 == 0) {
    FUN_14178ab20(L"/Game/UI/_Shared/_Design/Audio/MainMenu.MainMenu");
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (param_1[0x48] == 0) {
    param_1[0x48] = lVar2;
  }
  return param_1;
}



// FUNCTION 140fe6070 FUN_140fe6070 body=747 status=ok
// SIG undefined FUN_140fe6070(void)

undefined8 * FUN_140fe6070(undefined8 *param_1)

{
  FUN_140e9a810();
  *param_1 = &PTR_FUN_14465f238;
  param_1[0x9b] = &PTR_LAB_14465f7e8;
  param_1[0xd3] = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x6a4) = 0x3e800000;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6b4) = 0;
  *(undefined2 *)(param_1 + 0xd9) = 0x10c;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  *(undefined4 *)(param_1 + 0xe5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x72c) = 0;
  param_1[0xe7] = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = param_1 + 0xe9;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  FUN_1411c8bf0(param_1 + 0xf4);
  *(undefined1 *)(param_1 + 0x167) = 1;
  *(undefined4 *)((longlong)param_1 + 0xb3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x168) = 0;
  FName::FName(param_1 + 0x16a,L"rightContainer",1);
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  *(undefined1 *)(param_1 + 0x172) = 2;
  *(undefined4 *)((longlong)param_1 + 0xb94) = 0x41700000;
  *(undefined4 *)(param_1 + 0x173) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0xb9c) = 0x3e800000;
  param_1[0x174] = 0;
  param_1[0x175] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x174,0);
  FGenericPlatformString::Memcpy(param_1[0x174],L"emoteIcon",0x14);
  param_1[0x176] = 0;
  param_1[0x177] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x176,0);
  FGenericPlatformString::Memcpy(param_1[0x176],L"EmoteIcon_%02d_nopack",0x2c);
  *(undefined4 *)(param_1 + 0x178) = 4;
  *(undefined4 *)((longlong)param_1 + 0xbc4) = 10;
  param_1[0x179] = 0;
  param_1[0x17a] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x179,0);
  FGenericPlatformString::Memcpy(param_1[0x179],L"iconPlaceholder",0x20);
  param_1[0x17b] = 0;
  param_1[0x17c] = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x17b,0);
  FGenericPlatformString::Memcpy(param_1[0x17b],L"CustomIcon_%02d_nopack",0x2e);
  *(undefined4 *)(param_1 + 0x17d) = 10;
  *(undefined8 *)((longlong)param_1 + 0xbec) = 0xffffffffffffffff;
  param_1[0x17f] = 0;
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  param_1[0x182] = 0;
  *(undefined2 *)(param_1 + 0x183) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x681) = 1;
  return param_1;
}



// FUNCTION 140fe6360 FUN_140fe6360 body=96 status=ok
// SIG undefined FUN_140fe6360(void)

void FUN_140fe6360(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x18);
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
  FUN_1416f8340(*(undefined4 *)(param_1 + 8));
  return;
}



// FUNCTION 140fe63c0 FUN_140fe63c0 body=170 status=ok
// SIG undefined FUN_140fe63c0(void)

void FUN_140fe63c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
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



// FUNCTION 140fe6470 ~FFastArraySerializer body=118 status=ok
// SIG undefined ~FFastArraySerializer(void)

void FFastArraySerializer::~FFastArraySerializer(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x58,0);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}



// FUNCTION 140fe64f0 FUN_140fe64f0 body=117 status=ok
// SIG undefined FUN_140fe64f0(void)

void FUN_140fe64f0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 200);
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0xc0);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  FFastArraySerializer::~FFastArraySerializer(param_1);
  return;
}



// FUNCTION 140fe6570 FUN_140fe6570 body=221 status=ok
// SIG undefined FUN_140fe6570(void)

void FUN_140fe6570(longlong param_1)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x308);
  FTickFunction::~FTickFunction(param_1 + 0x2b0);
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x290);
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x260);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x250);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x240);
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xd8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 200);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xb8);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140fe6650 FUN_140fe6650 body=283 status=ok
// SIG undefined FUN_140fe6650(void)

void FUN_140fe6650(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xc08) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0xbf8);
  if (*(longlong *)(param_1 + 0xbd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xbc8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xbb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xba0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb58) != 0) {
    FMemory::Free();
  }
  FUN_140fe6570(param_1 + 0x7a0);
  if (*(longlong *)(param_1 + 0x790) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x758) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x748) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x740) = 0;
  if (*(longlong *)(param_1 + 0x738) != 0) {
    FMemory::Free();
  }
  FUN_140ff3f20(param_1 + 0x6f8,0);
  if (*(longlong *)(param_1 + 0x718) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    FMemory::Free();
  }
  FUN_140e9c5f0(param_1);
  return;
}



// FUNCTION 140fe6770 FUN_140fe6770 body=383 status=ok
// SIG undefined FUN_140fe6770(void)

longlong * FUN_140fe6770(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  undefined1 local_res8 [8];
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    FUN_140ff3ea0(param_1,(int)param_2[1] - *(int *)((longlong)param_2 + 0x34));
    iVar1 = (int)param_2[5];
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    uStack_40 = 0;
    local_48._4_4_ = 0;
    if (iVar1 != 0) {
      puVar6 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar6 = puStack_20;
      }
      uVar2 = *puVar6;
      local_58 = 0;
      uStack_40 = 0;
      while (uVar2 == 0) {
        lVar4 = (longlong)local_58;
        uStack_40 = uStack_40 + 0x20;
        iVar5 = local_58 + 1;
        bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar5;
        if (bVar3) goto LAB_140fe684d;
        uVar2 = puVar6[lVar4 + 1];
      }
      uStack_54 = -uVar2 & uVar2;
      iVar5 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      local_48._4_4_ = (uStack_40 - iVar5) + 0x1f;
      if (iVar1 < local_48._4_4_) {
LAB_140fe684d:
        local_48._4_4_ = iVar1;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    iStack_10 = uStack_40;
    uStack_c = iStack_3c;
    iStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar5 = local_48._4_4_;
    iStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar3 = local_48._4_4_ < iVar1;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar5;
    if (bVar3) {
      do {
        FUN_140fe21e0(param_1,local_res8,(longlong)iStack_3c * 0x78 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 140fe68f0 FUN_140fe68f0 body=672 status=ok
// SIG undefined FUN_140fe68f0(void)

longlong * FUN_140fe68f0(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int local_78;
  uint uStack_74;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_1 + 5);
    _Dst = (uint *)(param_1 + 2);
    uStack_74 = 1;
    local_78 = 0;
    uStack_64 = 0;
    iStack_60 = 0;
    if (uVar1 != 0) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar2 = *puVar7;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar4 = local_78 + 1;
        bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar4;
        if (bVar3) goto LAB_140fe69cd;
        uVar2 = puVar7[lVar6 + 1];
      }
      uStack_74 = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (iStack_60 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_140fe69cd:
        uStack_64 = uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar8 = uVar2 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar2;
    if (uVar2 != uVar1) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar5 = puVar7[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
      iVar4 = (int)uVar2 >> 5;
      while (uVar5 == 0) {
        uVar8 = uVar8 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_140fe6a83;
        uVar5 = puVar7[(longlong)iVar4 + 1];
        iVar4 = iVar4 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar4 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar5 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (uVar8 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_140fe6a83:
        uStack_64 = uVar1;
      }
    }
    while ((uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      FFastArraySerializerGuidReferences::~FFastArraySerializerGuidReferences
                ((longlong)(int)uStack_3c * 200 + 8 + *param_1);
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    }
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (_Dst != (uint *)(param_2 + 2)) {
      if (param_2[4] == 0) {
        _guard_xfg_dispatch_icall_nop(_Dst,param_2 + 2,0x10);
      }
      if (param_1[4] != 0) {
        FMemory::Free();
      }
      param_1[4] = param_2[4];
      param_2[4] = 0;
      *(int *)(param_1 + 5) = (int)param_2[5];
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      param_2[5] = 0;
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 140fe6b90 FUN_140fe6b90 body=107 status=ok
// SIG undefined FUN_140fe6b90(void)

undefined8 * FUN_140fe6b90(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  FText::operator=(param_1 + 3,param_2 + 3);
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x44) = *(undefined1 *)((longlong)param_2 + 0x44);
  *(undefined1 *)((longlong)param_1 + 0x45) = *(undefined1 *)((longlong)param_2 + 0x45);
  param_1[9] = param_2[9];
  return param_1;
}



// FUNCTION 140fe6c00 FUN_140fe6c00 body=308 status=ok
// SIG undefined FUN_140fe6c00(void)

longlong FUN_140fe6c00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  
  FText::operator=();
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  plVar1 = (longlong *)(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x19);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  if (plVar1 != (longlong *)(param_2 + 0x40)) {
    iVar7 = *(int *)(param_1 + 0x48);
    if (iVar7 != 0) {
      plVar8 = (longlong *)(*plVar1 + 8);
      do {
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
        plVar8 = plVar8 + 3;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar7 = *(int *)(param_2 + 0x48);
    lVar6 = *(longlong *)(param_2 + 0x40);
    *(int *)(param_1 + 0x48) = iVar7;
    if ((iVar7 == 0) && (*(int *)(param_1 + 0x4c) == 0)) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar1,iVar7);
      lVar9 = *plVar1;
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        FText::FText(lVar9,lVar6);
        lVar9 = lVar9 + 0x18;
        lVar6 = lVar6 + 0x18;
      }
    }
  }
  return param_1;
}



// FUNCTION 140fe6d40 FUN_140fe6d40 body=162 status=ok
// SIG undefined FUN_140fe6d40(void)

ulonglong FUN_140fe6d40(longlong param_1,longlong param_2)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  undefined2 *puVar4;
  longlong lVar5;
  
  psVar3 = *(short **)(param_2 + 0xf0);
  if (*(short **)(param_1 + 0xf0) == psVar3) {
    psVar3 = (short *)FText::EqualToCaseIgnored(param_1 + 0x30,param_2 + 0x30);
    if ((char)psVar3 != '\0') {
      psVar3 = (short *)FText::EqualToCaseIgnored(param_1 + 0x48,param_2 + 0x48);
      if ((char)psVar3 != '\0') {
        psVar3 = &DAT_143f3eda8;
        if (*(int *)(param_2 + 0x68) == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = *(undefined2 **)(param_2 + 0x60);
        }
        if (*(int *)(param_1 + 0x68) != 0) {
          psVar3 = *(short **)(param_1 + 0x60);
        }
        lVar5 = (longlong)puVar4 - (longlong)psVar3;
        do {
          sVar1 = *psVar3;
          sVar2 = *(short *)((longlong)psVar3 + lVar5);
          if (sVar1 != sVar2) break;
          psVar3 = psVar3 + 1;
        } while (sVar2 != 0);
        if (sVar1 == sVar2) {
          return CONCAT71((int7)((ulonglong)psVar3 >> 8),1);
        }
      }
    }
  }
  return (ulonglong)psVar3 & 0xffffffffffffff00;
}



// FUNCTION 140fe6df0 FUN_140fe6df0 body=588 status=ok
// SIG undefined FUN_140fe6df0(void)

void FUN_140fe6df0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0;
  undefined **local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined2 local_7f;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined *local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar4 != '\0') {
    lVar6 = FWeakObjectPtr::Get(&local_res10);
    lVar9 = 0;
    iVar3 = *(int *)(lVar6 + 0xc);
    lVar6 = lVar9;
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar8 = iVar3 >> 0x1f & 0xffff;
      uVar5 = iVar3 + uVar8;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar8) * 0x18;
    }
    if ((*(uint *)(lVar6 + 8) & 0x30000000) == 0) {
      uVar7 = FUN_1404b03b0();
      FText::FText(local_d8,uVar7);
      local_c0 = 0;
      uVar10 = 0;
      local_98 = 0xffffffff;
      local_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = (undefined **)&DAT_1441d2800;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      uVar7 = FUN_1404b03b0();
      FText::operator=(local_d8,uVar7);
      (*(code *)local_b8[2])(&local_b8);
      local_c0 = 0;
      local_88 = 0;
      local_7f = 0;
      FText::operator=(local_d8,*param_1 + 0x198);
      cVar4 = FUN_142f63b10(*param_1 + 0x210);
      if (cVar4 == '\0') {
        local_70 = 0;
        puVar12 = &local_68;
        local_68 = 0;
        local_60 = 0;
        local_58 = 0xffffffff;
        uVar11 = 0xffffffff;
        local_54 = 0;
        local_78 = &DAT_1441d2800;
        local_50 = 0;
        lVar6 = *param_1;
        local_90 = lVar9;
      }
      else {
        lVar6 = *param_1;
        puVar12 = &local_38;
        local_48 = &DAT_1441d2800;
        lVar9 = *(longlong *)(lVar6 + 0x218);
        local_20 = *(longlong *)(lVar6 + 0x238);
        local_28 = *(undefined4 *)(lVar6 + 0x230);
        uVar10 = *(undefined4 *)(lVar6 + 0x234);
        local_38 = *(undefined8 *)(lVar6 + 0x220);
        uStack_30 = *(undefined8 *)(lVar6 + 0x228);
        local_40 = lVar9;
        local_90 = local_20;
        local_24 = uVar10;
        uVar11 = local_28;
      }
      local_a8 = *puVar12;
      uStack_a0 = puVar12[1];
      local_98 = CONCAT44(uVar10,uVar11);
      if (*(char *)(lVar6 + 0x1b0) == '\t') {
        local_c0 = 10;
      }
      else if (*(char *)(lVar6 + 0x1b0) != '\0') {
        local_c0 = 0xb;
      }
      local_b0 = lVar9;
      FUN_141011d90(*(undefined4 *)puVar12,local_d8);
      local_b8 = &PTR_FUN_1441d26b8;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_d0 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar2 = (int *)((longlong)local_d0 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_d0 + 8))(local_d0,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140fe7040 FUN_140fe7040 body=906 status=ok
// SIG undefined FUN_140fe7040(void)

void FUN_140fe7040(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  PSRWLOCK SRWLock;
  uint uVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined4 local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  longlong local_38;
  longlong local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  longlong local_20;
  
  local_res18 = (undefined4)param_1[1];
  local_res1c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar4 = FWeakObjectPtr::IsValid(&local_res18);
  if (cVar4 != '\0') {
    lVar6 = FWeakObjectPtr::Get(&local_res18);
    lVar7 = 0;
    iVar2 = *(int *)(lVar6 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar10 = iVar2 >> 0x1f & 0xffff;
      uVar5 = iVar2 + uVar10;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18;
    }
    if ((((*(uint *)(lVar7 + 8) & 0x30000000) == 0) && (lVar7 = param_1[2], lVar7 != 0)) &&
       (*(longlong *)(lVar7 + 0x30) != 0)) {
      lVar8 = AXAnimatedUsable::GetPrivateStaticClass();
      for (lVar6 = *(longlong *)(lVar7 + 0x30); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar8) {
          if (*(longlong *)(lVar7 + 0x30) == 0) {
            return;
          }
          FText::FText(local_50);
          lVar7 = param_1[2];
          local_28 = 0x41200000;
          local_38 = 0;
          local_30 = 0;
          local_20 = 0;
          local_24 = 0;
          FText::operator=(local_50,param_1 + 3);
          local_58 = (undefined4)param_1[6];
          local_20 = param_1[7];
          local_23 = 0;
          local_38 = *(longlong *)(param_1[2] + 0x60);
          local_30 = *(longlong *)(param_1[2] + 0x68);
          if ((char)param_1[8] != '\0') {
            FUN_140eccbe0(*param_1);
            cVar4 = FWeakObjectPtr::IsValid(*param_1 + 0x5d0);
            if (cVar4 == '\0') {
LAB_140fe71da:
              bVar3 = false;
              local_58 = 0x7fffffff;
            }
            else {
              uVar9 = FWeakObjectPtr::Get(*param_1 + 0x5d0);
              cVar4 = FUN_142ebe1f0(uVar9,*param_1);
              if (cVar4 == '\0') goto LAB_140fe71da;
              bVar3 = true;
            }
            if (((char)param_1[8] != '\0') && (bVar3)) {
              AcquireSRWLockExclusive((PSRWLOCK)(*param_1 + 0x6a0));
              lVar6 = *param_1;
              if (*(char *)(lVar6 + 0x694) != '\0') {
                FUN_140ff4330(lVar6,lVar6 + 0x650);
                lVar6 = *param_1;
              }
              *(longlong *)(lVar6 + 0x650) = lVar7;
              *(undefined8 *)(lVar6 + 0x658) = 0;
              *(undefined4 *)(lVar6 + 0x660) = local_58;
              FText::operator=(lVar6 + 0x668,local_50);
              *(longlong *)(lVar6 + 0x680) = local_38;
              *(longlong *)(lVar6 + 0x688) = local_30;
              *(undefined4 *)(lVar6 + 0x690) = local_28;
              *(undefined1 *)(lVar6 + 0x694) = local_24;
              *(undefined1 *)(lVar6 + 0x695) = local_23;
              *(longlong *)(lVar6 + 0x698) = local_20;
              FUN_140ff1150(*param_1,*param_1 + 0x650);
              SRWLock = (PSRWLOCK)(*param_1 + 0x6a0);
              goto LAB_140fe7379;
            }
          }
          AcquireSRWLockExclusive((PSRWLOCK)(*param_1 + 0x648));
          lVar6 = *param_1;
          iVar2 = *(int *)(lVar6 + 0x640);
          *(int *)(lVar6 + 0x640) = iVar2 + 1;
          if (*(int *)(lVar6 + 0x644) < iVar2 + 1) {
            TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(lVar6 + 0x638,iVar2);
          }
          plVar11 = (longlong *)((longlong)iVar2 * 0x50 + *(longlong *)(lVar6 + 0x638));
          *plVar11 = lVar7;
          plVar11[1] = 0;
          *(undefined4 *)(plVar11 + 2) = local_58;
          FText::FText(plVar11 + 3,local_50);
          plVar11[6] = local_38;
          plVar11[7] = local_30;
          *(undefined4 *)(plVar11 + 8) = local_28;
          *(undefined1 *)((longlong)plVar11 + 0x44) = local_24;
          *(undefined1 *)((longlong)plVar11 + 0x45) = local_23;
          plVar11[9] = local_20;
          local_res10[0] = 0;
          FUN_140fe4850(*(undefined8 *)(*param_1 + 0x638),(longlong)*(int *)(*param_1 + 0x640),
                        local_res8[0],local_res10);
          SRWLock = (PSRWLOCK)(*param_1 + 0x648);
LAB_140fe7379:
          ReleaseSRWLockExclusive(SRWLock);
          if (local_48 == (longlong *)0x0) {
            return;
          }
          LOCK();
          plVar11 = local_48 + 1;
          lVar7 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar7 != 1) {
            return;
          }
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 != 1) {
            return;
          }
          (**(code **)(*local_48 + 8))(local_48,1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140fe73d0 FUN_140fe73d0 body=552 status=ok
// SIG undefined FUN_140fe73d0(void)

void FUN_140fe73d0(longlong *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  undefined8 local_res8;
  longlong local_18;
  wchar_t *local_10;
  
  lVar5 = FWeakObjectPtr::Get(*param_1 + 0x5d8);
  pwVar10 = (wchar_t *)0x0;
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((((bVar1) && (*param_1 != 0)) && (*(int *)(lVar5 + 0xb90) != 0)) &&
        ((*(longlong **)(lVar5 + 0xb88) != (longlong *)0x0 &&
         (cVar4 = (**(code **)(**(longlong **)(lVar5 + 0xb88) + 8))(), cVar4 != '\0')))) &&
       ((*(int *)(lVar5 + 0xb90) != 0 &&
        (plVar8 = *(longlong **)(lVar5 + 0xb88), plVar8 != (longlong *)0x0)))) {
      (**(code **)(*plVar8 + 0x28))(plVar8,0);
      if (*(longlong *)(lVar5 + 0xb88) != 0) {
        uVar7 = FMemory::Realloc(*(longlong *)(lVar5 + 0xb88),0,0);
        *(undefined8 *)(lVar5 + 0xb88) = uVar7;
      }
      *(undefined4 *)(lVar5 + 0xb90) = 0;
    }
  }
  plVar8 = (longlong *)FWeakObjectPtr::Get(*param_1 + 0x5c8);
  if (plVar8 != (longlong *)0x0) {
    lVar5 = FUN_14142a560();
    if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar5 = (**(code **)(*plVar8 + 0x148))(plVar8), lVar5 != 0)) {
      if (*(longlong *)(lVar5 + 400) == 0) {
        uVar7 = *(undefined8 *)(lVar5 + 0x3f8);
      }
      else {
        uVar7 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
      }
      lVar5 = *param_1;
      FUN_142880530(uVar7,lVar5 + 0x690);
      *(undefined8 *)(lVar5 + 0x690) = 0;
      pwVar9 = _guard_xfg_dispatch_icall_nop
                         (L"&UGFxMissionTrackerHUDWidget::OnInputDeviceChanged",L"::");
      pwVar3 = pwVar10;
      while (pwVar2 = pwVar9, pwVar2 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res8,pwVar3 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(plVar8 + 0xbf,*param_1,local_res8);
      FUN_140483870(plVar8 + 0xf9,*param_1);
    }
  }
  lVar5 = *param_1;
  if (*(longlong *)(lVar5 + 0x698) != 0) {
    lVar6 = 0;
    local_18 = lVar5;
    if (lVar5 != 0) {
      uVar7 = FUN_142f768a0();
      pwVar10 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar7);
      lVar6 = *param_1;
    }
    local_10 = pwVar10;
    FUN_142f6e000(*(undefined8 *)(lVar6 + 0x698),&local_18);
  }
  return;
}



// FUNCTION 140fe7600 FUN_140fe7600 body=542 status=ok
// SIG undefined FUN_140fe7600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140fe7600(undefined4 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_e8 [32];
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
  undefined4 local_50;
  longlong *local_40;
  char local_30;
  ulonglong local_28 [4];
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uVar3 = *param_1;
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_80,&DAT_14465f228,L"GFxPhotoModeMenu",L"SliderDegreesFormat");
  puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_68,uVar7);
  local_b8 = local_58;
  local_58[0] = 2;
  puStack_b0 = local_28;
  local_c8 = *puVar8;
  lStack_c0 = puVar8[1];
  local_30 = '\0';
  if (lStack_c0 != 0) {
    LOCK();
    *(int *)(lStack_c0 + 8) = *(int *)(lStack_c0 + 8) + 1;
    UNLOCK();
  }
  local_50 = uVar3;
  uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_a8,&local_b8);
  uVar7 = FText::Format(local_98,&local_c8,uVar7);
  FText::FText(param_2,uVar7);
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_90 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
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
      plVar5 = local_40 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  plVar5 = (longlong *)puVar8[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_78 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 140fe7820 FUN_140fe7820 body=435 status=ok
// SIG undefined FUN_140fe7820(void)

void FUN_140fe7820(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined4 uStack_c;
  
  local_res10 = (undefined4)param_1[2];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0x14);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar2 = *(int *)(lVar5 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar9 = iVar2 >> 0x1f & 0xffff;
      uVar4 = iVar2 + uVar9;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
      lVar5 = *param_1;
      FUN_140eb0f20(lVar5 + 0xb30,*(undefined8 *)(param_1[1] + 0x990),lVar5 + 0x770,lVar5 + 0x778);
      FUN_140ec1260(*param_1 + 0xb30);
      FUN_1411e8430(*param_1 + 0x7a0,*param_1,param_1[1]);
      FUN_1411f9ae0(*param_1 + 0x7a0,1,0);
      lVar5 = *param_1;
      plVar1 = (longlong *)(lVar5 + 0xaa8);
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar6 + 1,lVar5);
        *(undefined4 *)(plVar6 + 2) = 0x40ff90d0;
        *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
        *(undefined4 *)(plVar6 + 3) = 0;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_c;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar7;
        *plVar6 = (longlong)&PTR_FUN_143fcff08;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        (**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
        iVar2 = *(int *)(lVar5 + 0xab0);
        *(int *)(lVar5 + 0xab0) = iVar2 + 1;
        if (*(int *)(lVar5 + 0xab4) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar8 = plVar6;
        *(undefined4 *)(puVar8 + 1) = 3;
      }
    }
  }
  return;
}



// FUNCTION 140fe79e0 FUN_140fe79e0 body=321 status=ok
// SIG undefined FUN_140fe79e0(void)

void FUN_140fe79e0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = FUN_1416f8720((int)param_1[1]);
  if (lVar1 != 0) {
    lVar1 = FUN_1416f8720((int)param_1[1]);
    *(undefined1 *)(lVar1 + 0x330) = 2;
    lVar1 = FUN_1416f8720((int)param_1[1]);
    FText::operator=(lVar1 + 0x350,*param_1 + 0xf68);
    lVar1 = FUN_1416f8720((int)param_1[1]);
    FText::operator=(lVar1 + 0x338,*param_1 + 0xc60);
    uVar2 = FUN_1416f8720((int)param_1[1]);
    UItemViewerScrollSelector::SetNumPages(uVar2,1);
    FName::FName(&local_res8,L"OnSlotButtonClicked",1);
    lVar1 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar1 + 0x1b0,*param_1);
    *(undefined8 *)(lVar1 + 0x1b8) = local_res8;
    FName::FName(&local_res8,L"OnSlotButtonFocused",1);
    lVar1 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar1 + 0x1d0,*param_1);
    *(undefined8 *)(lVar1 + 0x1d8) = local_res8;
    FName::FName(&local_res8,L"OnSlotButtonHovered",1);
    lVar1 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar1 + 0x210,*param_1);
    *(undefined8 *)(lVar1 + 0x218) = local_res8;
  }
  return;
}



// FUNCTION 140fe7b30 FUN_140fe7b30 body=717 status=ok
// SIG undefined FUN_140fe7b30(void)

void FUN_140fe7b30(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  uint uVar13;
  wchar_t *pwVar14;
  undefined8 local_res8;
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar6 = FWeakObjectPtr::IsValid(&local_res10);
  pwVar14 = (wchar_t *)0x0;
  if (cVar6 != '\0') {
    lVar8 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar8 + 0xc);
    pwVar12 = pwVar14;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar13 = iVar1 >> 0x1f & 0xffff;
      uVar7 = iVar1 + uVar13;
      pwVar12 = (wchar_t *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                (longlong)(int)((uVar7 & 0xffff) - uVar13) * 0x18);
    }
    if ((*(uint *)(pwVar12 + 4) & 0x30000000) == 0) {
      bVar3 = true;
      goto LAB_140fe7bbd;
    }
  }
  bVar3 = false;
LAB_140fe7bbd:
  if (bVar3) {
    lVar8 = FUN_140ff6a30(*param_1);
    if ((lVar8 != 0) && (*(longlong *)(lVar8 + 0x910) != 0)) {
      FUN_140483870(*(longlong *)(lVar8 + 0x910) + 0x218,*param_1);
    }
    AcquireSRWLockShared((PSRWLOCK)(*param_1 + 0x280));
    lVar8 = *param_1;
    lVar9 = *(longlong *)(lVar8 + 0x270);
    pwVar12 = pwVar14;
    if (lVar9 != 0) {
      pwVar12 = *(wchar_t **)(lVar8 + 0x278);
    }
    ReleaseSRWLockShared((PSRWLOCK)(lVar8 + 0x280));
    if ((lVar9 != 0) && (pwVar12 != (wchar_t *)0x0)) {
      lVar8 = (**(code **)(*(longlong *)pwVar12 + 0x98))(pwVar12);
      if (lVar8 != 0) {
        FUN_140483870(lVar8 + 0x268,*param_1);
        lVar9 = AGFreezeCharacterCue::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((((bVar3) && (*param_1 != 0)) && (*(int *)(lVar8 + 0x960) != 0)) &&
           (((*(longlong **)(lVar8 + 0x958) != (longlong *)0x0 &&
             (cVar6 = (**(code **)(**(longlong **)(lVar8 + 0x958) + 8))(), cVar6 != '\0')) &&
            ((*(int *)(lVar8 + 0x960) != 0 &&
             (plVar2 = *(longlong **)(lVar8 + 0x958), plVar2 != (longlong *)0x0)))))) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*(longlong *)(lVar8 + 0x958) != 0) {
            uVar10 = FMemory::Realloc(*(longlong *)(lVar8 + 0x958),0,0);
            *(undefined8 *)(lVar8 + 0x958) = uVar10;
          }
          *(undefined4 *)(lVar8 + 0x960) = 0;
        }
      }
      lVar8 = (**(code **)(*(longlong *)pwVar12 + 0xa8))(pwVar12);
      if (lVar8 != 0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop(L"&UGFxNameplate::OnLevelChanged",L"::");
        pwVar5 = pwVar14;
        while (pwVar4 = pwVar11, pwVar4 != (wchar_t *)0x0) {
          pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar5 = pwVar4;
        }
        FName::FName(&local_res8,pwVar5 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar8,*param_1,local_res8);
      }
      lVar8 = (**(code **)(*(longlong *)pwVar12 + 0xb0))(pwVar12);
      if (lVar8 != 0) {
        pwVar12 = _guard_xfg_dispatch_icall_nop(L"&UGFxNameplate::OnNameUpdated",L"::");
        while (pwVar5 = pwVar12, pwVar5 != (wchar_t *)0x0) {
          pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
          pwVar14 = pwVar5;
        }
        FName::FName(&local_res8,pwVar14 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar8,*param_1,local_res8);
      }
    }
  }
  return;
}



// FUNCTION 140fe7e00 FUN_140fe7e00 body=211 status=ok
// SIG undefined FUN_140fe7e00(void)

void FUN_140fe7e00(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 2);
  local_res14 = *(undefined4 *)((longlong)param_1 + 0x14);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if (((((*(uint *)(lVar4 + 8) & 0x30000000) == 0) &&
         (lVar4 = FUN_1416f8720(*(undefined4 *)(param_1 + 1)), lVar4 != 0)) &&
        (lVar4 = FUN_140f578e0(*param_1), lVar4 != 0)) &&
       (lVar4 = *(longlong *)(lVar4 + 0x2a60), lVar4 != 0)) {
      uVar5 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
      FUN_142e438a0(lVar4,uVar5,0);
    }
  }
  return;
}



// FUNCTION 140fe7ee0 FUN_140fe7ee0 body=141 status=ok
// SIG undefined FUN_140fe7ee0(void)

void FUN_140fe7ee0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = 0;
  uVar2 = uVar3;
  if (*(int *)(param_1 + 10) != 0) {
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 4;
    }
    if (plVar4 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar4 + 8))();
    }
  }
  uVar2 = (*(code *)param_1[2])(uVar2);
  puVar1 = *(undefined8 **)*param_1;
  puVar1[0xc] = uVar2;
  *(undefined1 *)(puVar1 + 0xb) = 1;
  (**(code **)(*(longlong *)puVar1[10] + 0x10))();
  if (*(int *)(puVar1 + 8) != 0) {
    plVar4 = (longlong *)puVar1[6];
    if ((longlong *)puVar1[6] == (longlong *)0x0) {
      plVar4 = puVar1 + 2;
    }
    if (plVar4 != (longlong *)0x0) {
      if (plVar4 != (longlong *)0x0) {
        uVar3 = (**(code **)(*plVar4 + 8))();
      }
      (*(code *)*puVar1)(uVar3);
    }
  }
  return;
}



// FUNCTION 140fe7f70 FUN_140fe7f70 body=150 status=ok
// SIG undefined FUN_140fe7f70(void)

void FUN_140fe7f70(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 0x10);
  local_res14 = *(undefined4 *)(param_1 + 0x14);
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
      FUN_140fee3a0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140fe8010 FUN_140fe8010 body=329 status=ok
// SIG undefined FUN_140fe8010(void)

void FUN_140fe8010(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_18 [2];
  
  lVar2 = FWeakObjectPtr::Get(*param_1 + 0x5d8);
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
      lVar3 = *param_1;
      plVar5 = (longlong *)(lVar2 + 0xbe8);
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_FUN_14419ca48;
        FWeakObjectPtr::operator=(plVar4 + 1,lVar3);
        plVar4[2] = (longlong)FUN_140ffcad0;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar4[4] = lVar3;
        *plVar4 = (longlong)&PTR_FUN_14419ca90;
      }
      if (local_18 != plVar5) {
        if (plVar4 == (longlong *)0x0) {
          if (*(int *)(lVar2 + 0xbf0) == 0) {
            return;
          }
          plVar4 = (longlong *)*plVar5;
          if (plVar4 == (longlong *)0x0) {
            return;
          }
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          if (*plVar5 != 0) {
            lVar3 = FMemory::Realloc(*plVar5,0,0);
            *plVar5 = lVar3;
          }
          *(undefined4 *)(lVar2 + 0xbf0) = 0;
          return;
        }
        (**(code **)(*plVar4 + 0x30))(plVar4,plVar5);
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        lVar2 = FMemory::Realloc(plVar4,0,0);
        if (lVar2 != 0) {
          FMemory::Free(lVar2);
        }
      }
    }
  }
  return;
}



// FUNCTION 140fe8160 FUN_140fe8160 body=1902 status=ok
// SIG undefined FUN_140fe8160(void)

void FUN_140fe8160(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  bool bVar16;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res18 [2];
  undefined4 local_res20;
  undefined4 local_res24;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [8];
  longlong *local_160;
  char local_150;
  undefined **local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  longlong local_118;
  undefined1 local_110;
  char local_10f;
  char local_10e;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_a8;
  undefined1 *local_98 [2];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  
  local_res20 = (undefined4)param_1[1];
  local_res24 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res20);
  if (cVar3 == '\0') {
    return;
  }
  lVar7 = FWeakObjectPtr::Get(&local_res20);
  lVar8 = 0;
  iVar6 = *(int *)(lVar7 + 0xc);
  lVar7 = lVar8;
  if (iVar6 < (int)DAT_1469e91c4) {
    uVar13 = iVar6 >> 0x1f & 0xffff;
    uVar5 = iVar6 + uVar13;
    lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
            (longlong)(int)((uVar5 & 0xffff) - uVar13) * 0x18;
  }
  if ((*(uint *)(lVar7 + 8) & 0x30000000) != 0) {
    return;
  }
  if (*(int *)(*param_1 + 0x200) < 1) goto LAB_140fe889a;
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 2);
  if (cVar3 != '\0') {
    lVar7 = FWeakObjectPtr::Get(param_1 + 2);
    iVar6 = *(int *)(lVar7 + 0xc);
    if (iVar6 < (int)DAT_1469e91c4) {
      uVar13 = iVar6 >> 0x1f & 0xffff;
      uVar5 = iVar6 + uVar13;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar13) * 0x18;
    }
    if ((((*(uint *)(lVar8 + 8) & 0x30000000) == 0) &&
        (lVar8 = FWeakObjectPtr::Get(param_1 + 2), 0 < *(int *)(lVar8 + 0x66c))) &&
       (bVar4 = *(byte *)(*(longlong *)(*param_1 + 0x1f8) + 0x18), 1 < bVar4)) {
      if (bVar4 < 4) {
        return;
      }
      if ((byte)(bVar4 - 5) < 4) {
        return;
      }
    }
  }
  if (*(char *)(*param_1 + 400) != '\0') {
    return;
  }
  FUN_140fe57a0(local_168,*(undefined8 *)(*param_1 + 0x1f8));
  FUN_141013930(*param_1 + 0x1f8,0,1,1);
  if ((local_118 != 0) && (cVar3 = FUN_142f63b10(&local_148), cVar3 != '\0')) {
    FWeakObjectPtr::operator=(&local_190,*(undefined8 *)(local_118 + 0x178));
    FWeakObjectPtr::operator=(&local_198,local_118);
    local_188 = local_140;
    local_c8 = local_140;
    local_res10 = local_128;
    local_res18[0] = local_124;
    local_180 = local_120;
    local_a8 = local_120;
    local_e0 = local_198;
    local_dc = local_194;
    local_d8 = local_190;
    local_d4 = local_18c;
    local_178 = CONCAT44(uStack_134,local_138);
    uStack_170 = CONCAT44(uStack_12c,uStack_130);
    local_68 = 0;
    local_c0 = local_138;
    uStack_bc = uStack_134;
    uStack_b8 = uStack_130;
    uStack_b4 = uStack_12c;
    local_58 = 0;
    puVar9 = (undefined8 *)FUN_140438ef0(0x50,local_88);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &PTR_FUN_14465faa8;
      puVar9[1] = local_118;
      *(undefined4 *)(puVar9 + 2) = local_198;
      *(undefined4 *)((longlong)puVar9 + 0x14) = local_194;
      *(undefined4 *)(puVar9 + 3) = local_190;
      *(undefined4 *)((longlong)puVar9 + 0x1c) = local_18c;
      puVar9[5] = local_188;
      *(undefined4 *)(puVar9 + 6) = (undefined4)local_178;
      *(undefined4 *)((longlong)puVar9 + 0x34) = local_178._4_4_;
      *(undefined4 *)(puVar9 + 7) = (undefined4)uStack_170;
      *(undefined4 *)((longlong)puVar9 + 0x3c) = uStack_170._4_4_;
      *(undefined4 *)(puVar9 + 8) = local_res10;
      *(undefined4 *)((longlong)puVar9 + 0x44) = local_res18[0];
      puVar9[4] = &DAT_1441d2800;
      puVar9[9] = local_180;
    }
    local_98[0] = &LAB_140ff1be0;
    FUN_14208c5d0(local_118,local_98);
  }
  lVar8 = 0;
  local_118 = 0;
  if (local_150 == '\0') goto switchD_140fe850d_caseD_4;
  uVar10 = FUN_140ff6b30();
  FUN_142088910(*param_1,uVar10);
  *(bool *)(*param_1 + 400) = local_150 != '\x01';
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 2);
  if (cVar3 == '\0') goto switchD_140fe850d_caseD_4;
  lVar7 = FWeakObjectPtr::Get(param_1 + 2);
  iVar6 = *(int *)(lVar7 + 0xc);
  if (iVar6 < (int)DAT_1469e91c4) {
    uVar13 = iVar6 >> 0x1f & 0xffff;
    uVar5 = iVar6 + uVar13;
    lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
            (longlong)(int)((uVar5 & 0xffff) - uVar13) * 0x18;
  }
  if (((*(uint *)(lVar8 + 8) & 0x30000000) != 0) ||
     (plVar11 = (longlong *)FWeakObjectPtr::Get(param_1 + 2),
     *(char *)((longlong)plVar11 + 0x682) != '\0')) goto switchD_140fe850d_caseD_4;
  switch(local_150) {
  case '\x01':
    cVar3 = FUN_142f63b10(&local_148);
    if (((cVar3 != '\0') && (lVar8 = FUN_142f5f490(&local_148), lVar8 != 0)) &&
       (bVar4 = FUN_140472310(lVar8), 1 < bVar4)) {
      lVar8 = *plVar11;
      local_f8 = 0;
      local_f0 = 0;
      puVar12 = (undefined8 *)FName::FName(&local_180,L"Mission_SubObjective_Complete",1);
      puVar9 = &local_f8;
      goto LAB_140fe85c6;
    }
    break;
  case '\x02':
  case '\x03':
  case '\x05':
  case '\x06':
  case '\a':
  case '\b':
    lVar8 = *plVar11;
    local_178 = 0;
    uStack_170 = 0;
    puVar12 = (undefined8 *)FName::FName(&local_188,L"Mission_Slide_In",1);
    puVar9 = &local_178;
    goto LAB_140fe85c6;
  case '\t':
    lVar8 = *plVar11;
    local_108 = 0;
    local_100 = 0;
    puVar12 = (undefined8 *)FName::FName(local_res18,L"Mission_Objective_Complete",1);
    puVar9 = &local_108;
LAB_140fe85c6:
    (**(code **)(lVar8 + 0x4e8))(plVar11,*puVar12,puVar9);
  }
switchD_140fe850d_caseD_4:
  lVar8 = *param_1;
  pwVar15 = L"standard";
  plVar11 = *(longlong **)(lVar8 + 0x288);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar11[1];
    bVar16 = iVar6 == 0;
    if (bVar16) {
      *(int *)(plVar11 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (!bVar16) {
      LOCK();
      bVar16 = iVar6 == (int)plVar11[1];
      if (bVar16) {
        *(int *)(plVar11 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar16) {
        if (plVar11 != (longlong *)0x0) {
          lVar8 = *(longlong *)(lVar8 + 0x280);
          if (lVar8 != 0) {
            if (local_10e == '\0') {
              pwVar14 = L"standard";
              if (local_10f != '\0') {
                pwVar14 = L"optional";
              }
              FUN_14203e4e0(lVar8,pwVar14);
            }
            else {
              FUN_142056670(lVar8,0);
            }
          }
          LOCK();
          plVar1 = plVar11 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar11[1];
      bVar16 = iVar6 == 0;
      if (bVar16) {
        *(int *)(plVar11 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  lVar8 = *param_1;
  plVar11 = *(longlong **)(lVar8 + 0x298);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar11[1];
    bVar16 = iVar6 == 0;
    if (bVar16) {
      *(int *)(plVar11 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (!bVar16) {
      LOCK();
      bVar16 = iVar6 == (int)plVar11[1];
      if (bVar16) {
        *(int *)(plVar11 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar16) {
        if (plVar11 != (longlong *)0x0) {
          lVar8 = *(longlong *)(lVar8 + 0x290);
          if (lVar8 != 0) {
            pwVar14 = L"standard";
            if (local_10f != '\0') {
              pwVar14 = L"optional";
            }
            FUN_14203e4e0(lVar8,pwVar14);
          }
          LOCK();
          plVar1 = plVar11 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar11[1];
      bVar16 = iVar6 == 0;
      if (bVar16) {
        *(int *)(plVar11 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  lVar8 = *param_1;
  plVar11 = *(longlong **)(lVar8 + 0x2a8);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar11[1];
    bVar16 = iVar6 == 0;
    if (bVar16) {
      *(int *)(plVar11 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (!bVar16) {
      LOCK();
      bVar16 = iVar6 == (int)plVar11[1];
      if (bVar16) {
        *(int *)(plVar11 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar16) {
        if (plVar11 != (longlong *)0x0) {
          lVar8 = *(longlong *)(lVar8 + 0x2a0);
          if (lVar8 != 0) {
            if (local_10f != '\0') {
              pwVar15 = L"optional";
            }
            FUN_14203e4e0(lVar8,pwVar15);
          }
          LOCK();
          plVar1 = plVar11 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar11[1];
      bVar16 = iVar6 == 0;
      if (bVar16) {
        *(int *)(plVar11 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  lVar8 = *param_1;
  FText::operator=(lVar8 + 0x240,local_168);
  if ((*(longlong *)(lVar8 + 0x270) != 0) && (*(longlong *)(lVar8 + 0x278) != 0)) {
    piVar2 = (int *)(*(longlong *)(lVar8 + 0x278) + 8);
    LOCK();
    iVar6 = *piVar2;
    if (iVar6 == 0) {
      *piVar2 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      FUN_142f0bf30(lVar8 + 0x268,&DAT_1464aa6c0,1);
      UMistDebugEntityScreen::InspectEntity(lVar8 + 0x268,lVar8 + 0x240,1,0);
    }
  }
  lVar8 = *param_1;
  FText::operator=(lVar8 + 0x198,local_168);
  *(char *)(lVar8 + 0x1b0) = local_150;
  *(undefined8 *)(lVar8 + 0x1c0) = local_140;
  *(undefined4 *)(lVar8 + 0x1c8) = local_138;
  *(undefined4 *)(lVar8 + 0x1cc) = uStack_134;
  *(undefined4 *)(lVar8 + 0x1d0) = uStack_130;
  *(undefined4 *)(lVar8 + 0x1d4) = uStack_12c;
  *(undefined4 *)(lVar8 + 0x1d8) = local_128;
  *(undefined4 *)(lVar8 + 0x1dc) = local_124;
  *(undefined8 *)(lVar8 + 0x1e0) = local_120;
  *(longlong *)(lVar8 + 0x1e8) = local_118;
  *(undefined1 *)(lVar8 + 0x1f0) = local_110;
  *(char *)(lVar8 + 0x1f1) = local_10f;
  *(char *)(lVar8 + 0x1f2) = local_10e;
  FUN_14101a0c0(*param_1);
  local_148 = &PTR_FUN_1441d26b8;
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_160 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_160)(local_160);
      LOCK();
      piVar2 = (int *)((longlong)local_160 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_160 + 8))(local_160,1);
      }
    }
  }
LAB_140fe889a:
  if ((0 < *(int *)(*param_1 + 0x200)) && (*(char *)(*param_1 + 400) == '\0')) {
    FUN_1410100d0();
  }
  return;
}



// FUNCTION 140fe8900 FUN_140fe8900 body=150 status=ok
// SIG undefined FUN_140fe8900(void)

void FUN_140fe8900(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 0x30);
  local_res14 = *(undefined4 *)(param_1 + 0x34);
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
      FUN_140fed420(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140fe89a0 FUN_140fe89a0 body=299 status=ok
// SIG undefined FUN_140fe89a0(void)

void FUN_140fe89a0(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 local_18 [4];
  undefined1 local_14 [12];
  
  local_res10 = (undefined4)param_1[2];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0x14);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar7;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
      bVar2 = true;
      goto LAB_140fe8a29;
    }
  }
  bVar2 = false;
LAB_140fe8a29:
  if ((bVar2) && (lVar5 = FWeakObjectPtr::Get(*param_1 + 0x58c), lVar5 != 0)) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar5 = FUN_140cfc7b0(lVar5), lVar5 != 0)) {
      local_18[0] = 0;
      FWeakObjectPtr::operator=(local_14,0);
      local_18[0] = 2;
      FWeakObjectPtr::operator=(local_14,param_1[1]);
      FUN_140ae3800(lVar5,local_18);
    }
  }
  return;
}



// FUNCTION 140fe8ad0 FUN_140fe8ad0 body=1371 status=ok
// SIG undefined FUN_140fe8ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fe8ad0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  void *_Dst;
  int iVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong lVar6;
  undefined4 *_Src;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  void *local_158;
  int local_150;
  int local_14c;
  undefined4 *local_148;
  ulonglong *puStack_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong *local_118;
  uint local_110;
  undefined *local_108;
  undefined4 *local_f8;
  ulonglong *puStack_f0;
  undefined1 local_e8 [16];
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
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_188;
  if (*(longlong *)(*param_1 + 0x6c8) != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146873978) &&
       (_Init_thread_header(&DAT_146873978), DAT_146873978 == -1)) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146873960,L"Press {0} for text chat",L"GFxPCTextChatMenu",
                 L"PressToChatFormatText");
      atexit(FUN_143e5bf60);
      _Init_thread_footer(&DAT_146873978);
    }
    lVar8 = *param_1;
    uVar7 = FUN_140eccc40(lVar8);
    local_168 = *(undefined4 *)(lVar8 + 0x698);
    FUN_142ee98f0(local_c0,*param_1 + 0x6a0,uVar7,1);
    lVar8 = FText::FText(local_80,local_c0);
    puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_90,&DAT_146873960);
    local_68[0] = 4;
    FText::FText(local_58,lVar8);
    local_138 = *puVar9;
    local_148 = local_68;
    puStack_140 = local_38;
    local_130 = puVar9[1];
    local_40 = '\x01';
    if (local_130 != 0) {
      LOCK();
      *(int *)(local_130 + 8) = *(int *)(local_130 + 8) + 1;
      UNLOCK();
    }
    local_f8 = local_148;
    puStack_f0 = puStack_140;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_e8,&local_f8);
    uVar7 = FText::Format(local_a8,&local_138,uVar7);
    FText::FText(local_d8,uVar7);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a0 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
              (local_e8);
    if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_50 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    plVar4 = (longlong *)puVar9[1];
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
    plVar4 = *(longlong **)(lVar8 + 8);
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
    local_150 = (int)param_1[2];
    lVar8 = (longlong)local_150;
    pvVar5 = (void *)param_1[1];
    local_158 = (void *)0x0;
    if (local_150 == 0) {
      local_14c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_158,local_150,0);
      _guard_xfg_dispatch_icall_nop(local_158,pvVar5,lVar8 * 2);
    }
    if (*(char *)(*param_1 + 0x6b8) != '\0') {
      local_148 = (undefined4 *)0x0;
      puStack_140 = (ulonglong *)0x2;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
      _Src = local_148;
      FGenericPlatformString::Memcpy(local_148,&DAT_1440a3e48,4);
      iVar3 = local_150;
      if (((int)puStack_140 != 0) && (iVar10 = (int)puStack_140 + -1, iVar10 != 0)) {
        lVar8 = (longlong)local_150;
        local_150 = (uint)(local_150 == 0) + local_150 + iVar10;
        if (local_14c < local_150) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,iVar3);
        }
        pvVar5 = (void *)((longlong)local_158 + (lVar8 - (ulonglong)(iVar3 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar5,_Src,(longlong)iVar10 * 2);
        *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar5) = 0;
      }
      if (_Src != (undefined4 *)0x0) {
        FMemory::Free(_Src);
      }
      puVar9 = (undefined8 *)FText::ToString(local_d8);
      iVar3 = local_150;
      pvVar5 = (void *)*puVar9;
      iVar10 = *(int *)(puVar9 + 1) + -1;
      if (*(int *)(puVar9 + 1) == 0) {
        iVar10 = 0;
      }
      if (iVar10 != 0) {
        lVar8 = (longlong)local_150;
        local_150 = (uint)(local_150 == 0) + local_150 + iVar10;
        if (local_14c < local_150) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,iVar3);
        }
        _Dst = (void *)((longlong)local_158 + (lVar8 - (ulonglong)(iVar3 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,pvVar5,(longlong)iVar10 * 2);
        *(undefined2 *)((longlong)_Dst + (longlong)iVar10 * 2) = 0;
      }
    }
    (**(code **)(**(longlong **)(*param_1 + 0x6c8) + 0x2a8))
              (*(longlong **)(*param_1 + 0x6c8),&local_158,1,0);
    FUN_142f10ae0(*(undefined8 *)(*param_1 + 0x6c8),0);
    FUN_142f0de70(*(undefined8 *)(*param_1 + 0x6c8),PTR_DAT_14629ec90);
    local_128 = 0xffffffffffffffff;
    uStack_120 = 0xffffffffffffffff;
    local_118 = (longlong *)0x0;
    local_110 = 6;
    local_108 = PTR_s_bottom_14629ec08;
    FUN_142f10860(*(undefined8 *)(*param_1 + 0x6c8),&local_128);
    if ((local_110 >> 6 & 1) != 0) {
      (**(code **)(*local_118 + 0x10))(local_118,&local_128,local_108);
    }
    if (local_158 != (void *)0x0) {
      FMemory::Free();
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
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b8 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
  }
  return;
}



// FUNCTION 140fe9030 FUN_140fe9030 body=582 status=ok
// SIG undefined FUN_140fe9030(void)

void FUN_140fe9030(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar12 = 0;
  lVar8 = FWeakObjectPtr::Get(*param_1 + 0x58c);
  if (lVar8 == 0) {
LAB_140fe9102:
    plVar11 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
    lVar9 = lVar12;
  }
  else {
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_140fe9102;
    lVar9 = FUN_1422312c0(lVar8);
    if (lVar9 == 0) {
LAB_140fe90e5:
      lVar9 = lVar12;
    }
    else {
      lVar10 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) goto LAB_140fe90e5;
    }
    bVar7 = true;
    bVar6 = false;
    plVar11 = (longlong *)FUN_142dcf3a0(lVar8,local_38);
    lVar12 = *plVar11;
  }
  plVar5 = (longlong *)plVar11[1];
  plVar11[1] = 0;
  *plVar11 = 0;
  plVar11 = plStack_40;
  if (bVar6) {
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_40 + 8))(plStack_40,1);
        }
      }
    }
  }
  if ((bVar7) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar11 = local_30 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if ((lVar9 != 0) && (lVar12 != 0)) {
    cVar4 = (char)param_1[1];
    if (cVar4 == '\0') {
      uVar14 = 0x1b;
    }
    else if (cVar4 == '\x01') {
      uVar14 = 0x19;
    }
    else if (cVar4 == '\x02') {
      uVar14 = 0x1a;
    }
    else {
      if (cVar4 != '\x03') goto LAB_140fe9227;
      uVar14 = 0x1c;
    }
    local_58 = (undefined4)lVar12;
    uStack_54 = (undefined4)((ulonglong)lVar12 >> 0x20);
    uStack_50 = SUB84(plVar5,0);
    uStack_4c = (undefined4)((ulonglong)plVar5 >> 0x20);
    local_28 = local_58;
    uStack_24 = uStack_54;
    uStack_20 = uStack_50;
    uStack_1c = uStack_4c;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    uVar13 = FUN_140bb7440(lVar9);
    FUN_140d9f870(uVar13,&local_28,uVar14);
  }
LAB_140fe9227:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar5 + 1;
    lVar12 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar5)(plVar5);
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



// FUNCTION 140fe9280 FUN_140fe9280 body=1296 status=ok
// SIG undefined FUN_140fe9280(void)

void FUN_140fe9280(longlong *param_1)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  longlong local_res8;
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 == '\0') {
    return;
  }
  lVar5 = FWeakObjectPtr::Get(&local_res10);
  iVar14 = *(int *)(lVar5 + 0xc);
  if (iVar14 < (int)DAT_1469e91c4) {
    uVar8 = iVar14 >> 0x1f & 0xffff;
    uVar4 = iVar14 + uVar8;
    lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
  }
  else {
    lVar5 = 0;
  }
  if ((*(uint *)(lVar5 + 8) & 0x30000000) != 0) {
    return;
  }
  bVar2 = true;
  switch((char)param_1[6]) {
  case '\x01':
  case '\x02':
  case '\x05':
  case '\a':
    bVar1 = *(byte *)(*param_1 + 0x208);
    if (((bVar1 < 8) && ((0xa6U >> (bVar1 & 0x1f) & 1) != 0)) &&
       (cVar3 = FUN_142f4ff30(*param_1 + 0x210,param_1 + 7), cVar3 != '\0')) {
      if ((char)param_1[0xe] == '\0') {
        return;
      }
      cVar3 = FText::EqualTo(*param_1 + 0x198,param_1 + 3,0);
      if (cVar3 == '\x01') {
        return;
      }
    }
    iVar14 = *(int *)(*param_1 + 0x200) + -1;
    if (-1 < iVar14) {
      lVar5 = (longlong)iVar14 * 0x60;
      do {
        bVar1 = *(byte *)(lVar5 + 0x18 + *(longlong *)(*param_1 + 0x1f8));
        if ((bVar1 < 8) && ((0xa6U >> (bVar1 & 0x1f) & 1) != 0)) {
          cVar3 = FUN_142f4ff30(*(longlong *)(*param_1 + 0x1f8) + 0x20 + (longlong)iVar14 * 0x60,
                                param_1 + 7);
          if (cVar3 != '\0') {
            if ((char)param_1[0xe] == '\0') {
              return;
            }
            cVar3 = FText::EqualTo(*(longlong *)(*param_1 + 0x1f8) + (longlong)iVar14 * 0x60,
                                   param_1 + 3,0);
            if (cVar3 == '\x01') {
              return;
            }
          }
        }
        lVar5 = lVar5 + -0x60;
        iVar14 = iVar14 + -1;
      } while (-1 < iVar14);
    }
    break;
  case '\x03':
  case '\x06':
  case '\b':
    bVar1 = *(byte *)(*param_1 + 0x208);
    if (((bVar1 < 10) && ((0x348U >> (bVar1 & 0x1f) & 1) != 0)) &&
       (cVar3 = FUN_142f4ff30(*param_1 + 0x210,param_1 + 7), cVar3 != '\0')) {
      return;
    }
    iVar14 = *(int *)(*param_1 + 0x200) + -1;
    if (-1 < iVar14) {
      lVar5 = (longlong)iVar14 * 0x60;
      do {
        bVar1 = *(byte *)(lVar5 + 0x18 + *(longlong *)(*param_1 + 0x1f8));
        if (((bVar1 < 10) && ((0x348U >> (bVar1 & 0x1f) & 1) != 0)) &&
           (cVar3 = FUN_142f4ff30((longlong)iVar14 * 0x60 + *(longlong *)(*param_1 + 0x1f8) + 0x20,
                                  param_1 + 7), cVar3 != '\0')) {
          return;
        }
        lVar5 = lVar5 + -0x60;
        iVar14 = iVar14 + -1;
      } while (-1 < iVar14);
    }
    break;
  case '\x04':
  case '\f':
    if (((*(char *)(*param_1 + 0x208) - 4U & 0xf7) == 0) &&
       (cVar3 = FUN_142f4ff30(*param_1 + 0x210,param_1 + 7), cVar3 != '\0')) {
      return;
    }
    iVar14 = *(int *)(*param_1 + 0x200) + -1;
    if (-1 < iVar14) {
      lVar13 = (longlong)iVar14;
      lVar5 = lVar13 * 0x60;
      do {
        local_res8 = lVar5;
        if (((*(char *)(lVar5 + 0x18 + *(longlong *)(*param_1 + 0x1f8)) - 4U & 0xf7) == 0) &&
           (cVar3 = FUN_142f4ff30((longlong)iVar14 * 0x60 + *(longlong *)(*param_1 + 0x1f8) + 0x20,
                                  param_1 + 7), cVar3 != '\0')) {
          return;
        }
        bVar1 = *(byte *)(lVar5 + 0x18 + *(longlong *)(*param_1 + 0x1f8));
        if (((bVar1 < 8) && ((0xa6U >> (bVar1 & 0x1f) & 1) != 0)) &&
           (cVar3 = FUN_142f4ff30((longlong)iVar14 * 0x60 + *(longlong *)(*param_1 + 0x1f8) + 0x20,
                                  param_1 + 7), cVar3 != '\0')) {
          iVar12 = *(int *)(*param_1 + 0x200) + -1;
          lVar11 = (longlong)iVar12;
          if (lVar13 <= lVar11) {
            lVar10 = lVar11 * 0x60;
            lVar11 = (lVar11 - lVar13) + 1;
            do {
              cVar3 = FUN_142f50050((longlong)iVar12 * 0x60 + *(longlong *)(*param_1 + 0x1f8) + 0x20
                                    ,param_1 + 7);
              if (cVar3 == '\0') {
                cVar3 = FWeakObjectPtr::IsValid(param_1 + 2);
                if ((cVar3 != '\0') &&
                   ((*(char *)(*(longlong *)(*param_1 + 0x1f8) + 0x18 + lVar10) - 4U & 0xf7) == 0))
                {
                  lVar5 = FWeakObjectPtr::Get(param_1 + 2);
                  iVar9 = *(int *)(lVar5 + 0x66c) + -1;
                  iVar7 = 0;
                  if (-1 < iVar9) {
                    iVar7 = iVar9;
                  }
                  *(int *)(lVar5 + 0x66c) = iVar7;
                }
                FUN_141013930(*param_1 + 0x1f8,iVar12,1,1);
                bVar2 = false;
              }
              iVar12 = iVar12 + -1;
              lVar10 = lVar10 + -0x60;
              lVar11 = lVar11 + -1;
              lVar5 = local_res8;
            } while (lVar11 != 0);
          }
        }
        lVar5 = lVar5 + -0x60;
        lVar13 = lVar13 + -1;
        iVar14 = iVar14 + -1;
      } while (-1 < iVar14);
      local_res8 = lVar5;
      if (!bVar2) goto LAB_140fe973f;
    }
  }
  lVar5 = *param_1;
  iVar14 = *(int *)(lVar5 + 0x200);
  *(int *)(lVar5 + 0x200) = iVar14 + 1;
  if (*(int *)(lVar5 + 0x204) < iVar14 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(lVar5 + 0x1f8,iVar14);
  }
  FUN_140fe57a0((longlong)iVar14 * 0x60 + *(longlong *)(lVar5 + 0x1f8),param_1 + 3);
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 2);
  if ((cVar3 != '\0') && (((char)param_1[6] - 4U & 0xf7) == 0)) {
    uVar6 = FWeakObjectPtr::Get(param_1 + 2);
    cVar3 = FUN_142ebe180(uVar6);
    if (cVar3 == '\x01') {
      lVar5 = FWeakObjectPtr::Get(param_1 + 2);
      *(int *)(lVar5 + 0x66c) = *(int *)(lVar5 + 0x66c) + 1;
    }
  }
LAB_140fe973f:
  lVar5 = *param_1;
  if ((0 < *(int *)(lVar5 + 0x200)) && (*(char *)(lVar5 + 400) == '\0')) {
    FUN_1410100d0();
    lVar5 = *param_1;
  }
  FUN_14101a0c0(lVar5);
  return;
}



// FUNCTION 140fe97c0 FUN_140fe97c0 body=322 status=ok
// SIG undefined FUN_140fe97c0(void)

void FUN_140fe97c0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 < 0) {
    return;
  }
  if (*(int *)(lVar3 + 0x2d0) <= iVar2) {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x14);
  if ((cVar1 == '\0') || (*(char *)(param_1 + 0x28) == '\0')) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x28) != '\0')) {
    uVar4 = 1;
  }
  else {
    uVar8 = 0;
    uVar4 = 0;
    if (cVar1 != '\0') {
      puVar7 = (undefined8 *)&local_48;
      uStack_44 = *(undefined4 *)(param_1 + 0x1c);
      local_48 = *(undefined4 *)(param_1 + 0x18);
      lVar5 = (longlong)iVar2 * 0x34;
      local_40 = *(undefined4 *)(param_1 + 0x20);
      local_34 = *(undefined4 *)(*(longlong *)(lVar3 + 0x2c8) + 0xc + lVar5);
      puVar6 = &local_3c;
      local_3c = *(undefined8 *)(*(longlong *)(lVar3 + 0x2c8) + 4 + lVar5);
      goto LAB_140fe985d;
    }
  }
  uVar8 = uVar4;
  puVar7 = &local_3c;
  uStack_44 = *(undefined4 *)(param_1 + 0x1c);
  lVar5 = (longlong)iVar2 * 0x34;
  local_34 = *(undefined4 *)(lVar5 + 0x18 + *(longlong *)(lVar3 + 0x2c8));
  puVar6 = (undefined8 *)&local_48;
  local_3c = *(undefined8 *)(lVar5 + 0x10 + *(longlong *)(lVar3 + 0x2c8));
  local_48 = *(undefined4 *)(param_1 + 0x18);
  local_40 = *(undefined4 *)(param_1 + 0x20);
LAB_140fe985d:
  local_28 = *puVar7;
  local_20 = *(undefined4 *)(puVar7 + 1);
  local_18 = *puVar6;
  local_10 = *(undefined4 *)(puVar6 + 1);
  FUN_142e43820(lVar3,iVar2,&local_18,&local_28,uVar8,uVar9);
  return;
}



// FUNCTION 140fe9910 FUN_140fe9910 body=138 status=ok
// SIG undefined FUN_140fe9910(void)

void FUN_140fe9910(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(*param_1 + 0x5c8);
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
      FUN_1407665e0(lVar2 + 0x758,*param_1);
      FUN_1407665e0(lVar2 + 0x778,*param_1);
      FUN_140cc9500(lVar2,*param_1);
    }
  }
  return;
}



// FUNCTION 140fe99a0 FUN_140fe99a0 body=150 status=ok
// SIG undefined FUN_140fe99a0(void)

void FUN_140fe99a0(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 0x10);
  local_res14 = *(undefined4 *)(param_1 + 0x14);
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
      FUN_140fe9030(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140fe9a40 FUN_140fe9a40 body=447 status=ok
// SIG undefined FUN_140fe9a40(void)

void FUN_140fe9a40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_res8;
  
  lVar2 = FUN_1416f8720((int)param_1[1]);
  if (lVar2 != 0) {
    lVar2 = FUN_1416f8720((int)param_1[1]);
    *(undefined1 *)(lVar2 + 0x330) = 1;
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FText::operator=(lVar2 + 0x350,*param_1 + 0xf98);
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FText::operator=(lVar2 + 0x338);
    lVar2 = FUN_1416f8720((int)param_1[1]);
    plVar1 = (longlong *)(lVar2 + 1000);
    if ((wchar_t *)*plVar1 != L"grenade") {
      iVar4 = 0;
      *(undefined4 *)(lVar2 + 0x3f0) = 0;
      if (*(int *)(lVar2 + 0x3f4) != 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,8);
        iVar4 = *(int *)(lVar2 + 0x3f0);
      }
      *(int *)(lVar2 + 0x3f0) = iVar4 + 8;
      if (*(int *)(lVar2 + 0x3f4) < iVar4 + 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      builtin_wcsncpy((wchar_t *)*plVar1,L"grenade",8);
    }
    lVar2 = FUN_1416f8720((int)param_1[1]);
    *(undefined1 *)(lVar2 + 0x428) = 1;
    uVar3 = FUN_1416f8720((int)param_1[1]);
    UItemViewerScrollSelector::SetNumPages(uVar3,1);
    FName::FName(&local_res8,L"OnSlotButtonClicked",1);
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar2 + 0x1b0,*param_1);
    *(undefined8 *)(lVar2 + 0x1b8) = local_res8;
    FName::FName(&local_res8,L"OnSlotButtonFocused",1);
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar2 + 0x1d0,*param_1);
    *(undefined8 *)(lVar2 + 0x1d8) = local_res8;
    FName::FName(&local_res8,L"OnSlotButtonHovered",1);
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar2 + 0x210,*param_1);
    *(undefined8 *)(lVar2 + 0x218) = local_res8;
    lVar2 = FUN_1416f8720((int)param_1[1]);
    *(undefined8 *)(lVar2 + 0x3f8) = *(undefined8 *)(*param_1 + 0xf20);
  }
  return;
}



// FUNCTION 140fe9c00 FUN_140fe9c00 body=322 status=ok
// SIG undefined FUN_140fe9c00(void)

void FUN_140fe9c00(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 < 0) {
    return;
  }
  if (*(int *)(lVar3 + 0x2d0) <= iVar2) {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x14);
  if ((cVar1 == '\0') || (*(char *)(param_1 + 0x28) == '\0')) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x28) != '\0')) {
    uVar4 = 1;
  }
  else {
    uVar8 = 0;
    uVar4 = 0;
    if (cVar1 != '\0') {
      puVar7 = (undefined8 *)&local_48;
      uStack_44 = *(undefined4 *)(param_1 + 0x1c);
      local_48 = *(undefined4 *)(param_1 + 0x18);
      lVar5 = (longlong)iVar2 * 0x34;
      local_40 = *(undefined4 *)(param_1 + 0x20);
      local_34 = *(undefined4 *)(*(longlong *)(lVar3 + 0x2c8) + 0xc + lVar5);
      puVar6 = &local_3c;
      local_3c = *(undefined8 *)(*(longlong *)(lVar3 + 0x2c8) + 4 + lVar5);
      goto LAB_140fe9c9d;
    }
  }
  uVar8 = uVar4;
  puVar7 = &local_3c;
  uStack_44 = *(undefined4 *)(param_1 + 0x1c);
  lVar5 = (longlong)iVar2 * 0x34;
  local_34 = *(undefined4 *)(lVar5 + 0x18 + *(longlong *)(lVar3 + 0x2c8));
  puVar6 = (undefined8 *)&local_48;
  local_3c = *(undefined8 *)(lVar5 + 0x10 + *(longlong *)(lVar3 + 0x2c8));
  local_48 = *(undefined4 *)(param_1 + 0x18);
  local_40 = *(undefined4 *)(param_1 + 0x20);
LAB_140fe9c9d:
  local_28 = *puVar7;
  local_20 = *(undefined4 *)(puVar7 + 1);
  local_18 = *puVar6;
  local_10 = *(undefined4 *)(puVar6 + 1);
  FUN_142d27130(lVar3,iVar2,&local_18,&local_28,uVar8,uVar9);
  return;
}



// FUNCTION 140fe9d50 FUN_140fe9d50 body=373 status=ok
// SIG undefined FUN_140fe9d50(void)

void FUN_140fe9d50(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  
  FUN_141012490(*param_1,0);
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 1);
  if ((cVar3 != '\0') && (lVar4 = FWeakObjectPtr::Get(param_1 + 1), lVar4 != 0)) {
    lVar5 = FUN_1413ffe00();
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
      FUN_140483870(lVar4 + 0x2c50,*param_1);
    }
  }
  lVar4 = FWeakObjectPtr::Get(*param_1 + 0x5e0);
  if (lVar4 != 0) {
    lVar5 = FUN_1413ffe00();
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
      lVar5 = *param_1;
      plVar8 = (longlong *)(lVar4 + 0x2c50);
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_143f4d290;
        FWeakObjectPtr::operator=(plVar6 + 1,lVar5);
        plVar6[2] = (longlong)AConGaTrongCharacter::HandleTargetDestroyed;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar6[4] = lVar5;
        *plVar6 = (longlong)&PTR_FUN_143f4d2d8;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
        (**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
        iVar1 = *(int *)(lVar4 + 0x2c58);
        *(int *)(lVar4 + 0x2c58) = iVar1 + 1;
        if (*(int *)(lVar4 + 0x2c5c) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar1);
        }
        puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar8);
        *puVar7 = plVar6;
        *(undefined4 *)(puVar7 + 1) = 3;
      }
    }
  }
  return;
}



// FUNCTION 140fe9ed0 FUN_140fe9ed0 body=148 status=ok
// SIG undefined FUN_140fe9ed0(void)

void FUN_140fe9ed0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar3 = 0;
    lVar4 = 0;
    do {
      if ((-1 < iVar3) && (lVar1 = *(longlong *)(param_1 + 8), iVar3 < *(int *)(lVar1 + 0x2d0))) {
        lVar2 = *(longlong *)(lVar1 + 0x2c8) + lVar4;
        local_28 = *(undefined8 *)(lVar2 + 0x10);
        local_20 = *(undefined4 *)(lVar2 + 0x18);
        local_18 = *(undefined8 *)(lVar2 + 4);
        local_10 = *(undefined4 *)(lVar2 + 0xc);
        FUN_142e43820(lVar1,iVar3,&local_18,&local_28,1,1);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x34;
    } while (iVar3 < 3);
  }
  return;
}



// FUNCTION 140fe9f70 FUN_140fe9f70 body=340 status=ok
// SIG undefined FUN_140fe9f70(void)

void FUN_140fe9f70(longlong *param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  uVar4 = 0;
  uVar2 = uVar4;
  if (*(longlong *)(*param_1 + 0x800) != 0) {
    local_28 = 0;
    local_20 = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"missionTaskLine.fill",0x2a);
    local_38 = (longlong *)0x0;
    local_30 = 0;
    uVar2 = FUN_140ecbdf0(*(undefined8 *)(*param_1 + 0x800),&local_28,0,6,&local_38);
    uVar4 = 3;
  }
  if ((uVar4 & 2) != 0) {
    uVar4 = (ulonglong)((uint)uVar4 & 0xfffffffd);
    plVar6 = local_38;
    for (iVar5 = (int)local_30; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  if (((uVar4 & 1) != 0) && (local_28 != 0)) {
    FMemory::Free();
  }
  if (uVar2 != 0) {
    lVar3 = *param_1;
    if (*(int *)(lVar3 + 0x808) == -1) {
      uVar1 = FUN_142eee830(uVar2);
      *(undefined4 *)(*param_1 + 0x808) = uVar1;
      lVar3 = *param_1;
    }
    FUN_142088ee0(uVar2,(int)((1.0 - *(float *)(param_1 + 1)) * (float)*(int *)(lVar3 + 0x808)));
  }
  return;
}



// FUNCTION 140fea0d0 FUN_140fea0d0 body=318 status=ok
// SIG undefined FUN_140fea0d0(void)

void FUN_140fea0d0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = FUN_1416f8720((int)param_1[1]);
  if (lVar1 != 0) {
    lVar1 = FUN_1416f8720((int)param_1[1]);
    *(undefined1 *)(lVar1 + 0x330) = 2;
    lVar1 = FUN_1416f8720((int)param_1[1]);
    FText::operator=(lVar1 + 0x350,*param_1 + 0xf68);
    lVar1 = FUN_1416f8720((int)param_1[1]);
    FText::operator=(lVar1 + 0x338,*param_1 + 0xc60);
    uVar2 = FUN_1416f8720((int)param_1[1]);
    UItemViewerScrollSelector::SetNumPages(uVar2,0);
    FName::FName(&local_res8,L"OnSlotButtonClicked",1);
    lVar1 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar1 + 0x1b0,*param_1);
    *(undefined8 *)(lVar1 + 0x1b8) = local_res8;
    FName::FName(&local_res8,L"OnSlotButtonFocused",1);
    lVar1 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar1 + 0x1d0,*param_1);
    *(undefined8 *)(lVar1 + 0x1d8) = local_res8;
    FName::FName(&local_res8,L"OnSlotButtonHovered",1);
    lVar1 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar1 + 0x210,*param_1);
    *(undefined8 *)(lVar1 + 0x218) = local_res8;
  }
  return;
}



// FUNCTION 140fea210 FUN_140fea210 body=160 status=ok
// SIG undefined FUN_140fea210(void)

void FUN_140fea210(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 local_res8 [32];
  
  cVar2 = FWeakObjectPtr::IsValid(*param_1 + 0x668);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(*param_1 + 0x668);
    FUN_140fe2050(lVar1 + 0x2d8,local_res8,*param_1,&LAB_141007220);
    lVar1 = FWeakObjectPtr::Get(*param_1 + 0x668);
    FUN_140fe2050(lVar1 + 0x2f0,local_res8,*param_1,&LAB_1410072c0);
    lVar1 = FWeakObjectPtr::Get(*param_1 + 0x668);
    FUN_140fe2050(lVar1 + 0x308,local_res8,*param_1,FUN_141007230);
  }
  return;
}



// FUNCTION 140fea2b0 FUN_140fea2b0 body=218 status=ok
// SIG undefined FUN_140fea2b0(void)

void FUN_140fea2b0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  FWeakObjectPtr::operator=(local_28,0);
  FWeakObjectPtr::operator=(local_20,0);
  FWeakObjectPtr::operator=(local_18,0);
  FWeakObjectPtr::operator=(local_10,0);
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x618) == 7) {
    FWeakObjectPtr::operator=(local_18,*(undefined8 *)(lVar1 + 0xf30));
    puVar3 = local_10;
    uVar2 = *(undefined8 *)(*param_1 + 0xf40);
  }
  else {
    FWeakObjectPtr::operator=(local_28,*(undefined8 *)(lVar1 + 0xf40));
    puVar3 = local_18;
    uVar2 = *(undefined8 *)(*param_1 + 0xf30);
  }
  FWeakObjectPtr::operator=(puVar3,uVar2);
  lVar4 = *param_1;
  lVar1 = *(longlong *)(lVar4 + 0xf48);
  local_38 = lVar1;
  if (lVar1 == 0) {
    local_30 = 0;
  }
  else {
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    lVar4 = *param_1;
  }
  FUN_142ecfd10(lVar4,&local_38,local_28);
  return;
}



// FUNCTION 140fea390 FUN_140fea390 body=112 status=ok
// SIG undefined FUN_140fea390(void)

void FUN_140fea390(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(*param_1 + 0x5c8);
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
      FUN_140483870(lVar2 + 0x7c8,*param_1);
    }
  }
  return;
}



// FUNCTION 140fea400 FUN_140fea400 body=307 status=ok
// SIG undefined FUN_140fea400(void)

void FUN_140fea400(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_18;
  longlong *local_10;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar5 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar5 != '\0') {
    lVar7 = FWeakObjectPtr::Get(&local_res10);
    lVar8 = 0;
    iVar3 = *(int *)(lVar7 + 0xc);
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar10 = iVar3 >> 0x1f & 0xffff;
      uVar6 = iVar3 + uVar10;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar10) * 0x18;
    }
    if (((*(uint *)(lVar8 + 8) & 0x30000000) == 0) && (*(longlong *)(*param_1 + 0x340) != 0)) {
      FUN_142833de0();
      FUN_14283ef20(*(undefined8 *)(*param_1 + 0x340));
      lVar8 = *param_1;
      puVar9 = (undefined8 *)(lVar8 + 0x340);
      local_10 = (longlong *)0x0;
      if (puVar9 != &local_18) {
        *puVar9 = 0;
        local_18 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(lVar8 + 0x348,&local_10);
        plVar4 = local_10;
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_10 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
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
      }
    }
  }
  return;
}



// FUNCTION 140fea540 FUN_140fea540 body=315 status=ok
// SIG undefined FUN_140fea540(void)

void FUN_140fea540(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  
  cVar4 = FWeakObjectPtr::IsValid(*param_1 + 0x5d8);
  if (cVar4 != '\0') {
    lVar6 = FWeakObjectPtr::Get(*param_1 + 0x5d8);
    iVar1 = *(int *)(lVar6 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar9 = iVar1 >> 0x1f & 0xffff;
      uVar5 = iVar1 + uVar9;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar9) * 0x18;
    }
    else {
      lVar6 = 0;
    }
    if (((*(uint *)(lVar6 + 8) & 0x30000000) == 0) &&
       (lVar6 = FWeakObjectPtr::Get(*param_1 + 0x5d8), lVar6 != 0)) {
      lVar7 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((((bVar3) && (*param_1 != 0)) && (*(int *)(lVar6 + 0xbf0) != 0)) &&
         (((*(longlong **)(lVar6 + 0xbe8) != (longlong *)0x0 &&
           (cVar4 = (**(code **)(**(longlong **)(lVar6 + 0xbe8) + 8))(), cVar4 != '\0')) &&
          ((*(int *)(lVar6 + 0xbf0) != 0 &&
           (plVar2 = *(longlong **)(lVar6 + 0xbe8), plVar2 != (longlong *)0x0)))))) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*(longlong *)(lVar6 + 0xbe8) != 0) {
          uVar8 = FMemory::Realloc(*(longlong *)(lVar6 + 0xbe8),0,0);
          *(undefined8 *)(lVar6 + 0xbe8) = uVar8;
        }
        *(undefined4 *)(lVar6 + 0xbf0) = 0;
      }
    }
  }
  return;
}



// FUNCTION 140fea680 FUN_140fea680 body=189 status=ok
// SIG undefined FUN_140fea680(void)

void FUN_140fea680(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  FWeakObjectPtr::operator=(local_28,0);
  FWeakObjectPtr::operator=(local_20,0);
  FWeakObjectPtr::operator=(local_18,0);
  FWeakObjectPtr::operator=(local_10,0);
  puVar3 = local_28;
  if (*(int *)(*param_1 + 0x618) == 7) {
    puVar3 = local_18;
  }
  FWeakObjectPtr::operator=(puVar3,*(undefined8 *)(*param_1 + 0xf28));
  FWeakObjectPtr::operator=(local_10,*(undefined8 *)(*param_1 + 0xf48));
  lVar4 = *param_1;
  lVar1 = *(longlong *)(lVar4 + 0xf30);
  local_38 = lVar1;
  if (lVar1 == 0) {
    local_30 = 0;
  }
  else {
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    lVar4 = *param_1;
  }
  FUN_142ecfd10(lVar4,&local_38,local_28);
  return;
}



// FUNCTION 140fea740 FUN_140fea740 body=348 status=ok
// SIG undefined FUN_140fea740(void)

void FUN_140fea740(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = FUN_1416f8720((int)param_1[1]);
  if (lVar1 != 0) {
    lVar1 = FUN_1416f8720((int)param_1[1]);
    *(uint *)(lVar1 + 0x40) = *(uint *)(lVar1 + 0x40) & 0xfffffffb;
    lVar1 = FUN_1416f8720((int)param_1[1]);
    *(uint *)(lVar1 + 0x40) = *(uint *)(lVar1 + 0x40) & 0xfffffff7;
    lVar1 = FUN_1416f8720((int)param_1[1]);
    *(uint *)(lVar1 + 0x40) = *(uint *)(lVar1 + 0x40) & 0xfffffdff;
    lVar1 = FUN_1416f8720((int)param_1[1]);
    *(uint *)(lVar1 + 0x40) = *(uint *)(lVar1 + 0x40) & 0xffffff7f;
    lVar1 = FUN_1416f8720((int)param_1[1]);
    *(uint *)(lVar1 + 0x40) = *(uint *)(lVar1 + 0x40) & 0xfffffeff;
    lVar1 = FUN_1416f8720((int)param_1[1]);
    *(uint *)(lVar1 + 0x40) = *(uint *)(lVar1 + 0x40) & 0xfffffbff;
    uVar2 = FWeakObjectPtr::Get(*param_1 + 0x5d8);
    uVar3 = FUN_1416f8720((int)param_1[1]);
    FUN_142ed95f0(uVar3,uVar2,0);
    plVar4 = (longlong *)FUN_1416f8720((int)param_1[1]);
    (**(code **)(*plVar4 + 0x508))(plVar4,*param_1);
    plVar4 = (longlong *)FUN_1416f8720((int)param_1[1]);
    (**(code **)(*plVar4 + 0x510))(plVar4,param_1 + 2);
    plVar4 = (longlong *)FUN_1416f8720((int)param_1[1]);
    (**(code **)(*plVar4 + 0x518))(plVar4,(longlong)param_1 + 0xc,param_1 + 2);
    uVar2 = FWeakObjectPtr::Get(*param_1 + 0x5d8);
    uVar3 = FUN_1416f8720((int)param_1[1]);
    FUN_142ed56a0(uVar3,uVar2);
    if (param_1[5] == 0) {
      uVar2 = FUN_1416f8720((int)param_1[1]);
      FUN_140f0ea00(uVar2);
      return;
    }
    local_18 = 0;
    local_10 = 0;
    (**(code **)(*(longlong *)*param_1 + 0x4e8))((longlong *)*param_1,param_1[5],&local_18);
  }
  return;
}



// FUNCTION 140fea8a0 FUN_140fea8a0 body=1077 status=ok
// SIG undefined FUN_140fea8a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fea8a0(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  bool bVar16;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  plVar6 = (longlong *)FWeakObjectPtr::Get(*param_1 + 0x5c8);
  if (plVar6 != (longlong *)0x0) {
    lVar7 = FUN_14142a560();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    if (bVar16) {
      lVar7 = (**(code **)(*plVar6 + 0x148))(plVar6);
      if (lVar7 != 0) {
        lVar9 = *param_1;
        local_c8 = FUN_141018010;
        uStack_c0 = uStack_c0 & 0xffffffff00000000;
        plVar8 = (longlong *)FMemory::Realloc(0,0x30,0);
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar8 + 1,lVar9);
          *(int *)(plVar8 + 2) = (int)local_c8;
          *(int *)((longlong)plVar8 + 0x14) = local_c8._4_4_;
          *(undefined4 *)(plVar8 + 3) = (undefined4)uStack_c0;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_c0._4_4_;
          lVar9 = FDelegateHandle::GenerateNewID();
          plVar8[5] = lVar9;
          *plVar8 = (longlong)&PTR_FUN_143f77bd0;
        }
        if (*(longlong *)(lVar7 + 400) == 0) {
          uVar14 = *(undefined8 *)(lVar7 + 0x3f8);
        }
        else {
          uVar14 = *(undefined8 *)(*(longlong *)(lVar7 + 400) + 0x90);
        }
        lVar7 = *param_1;
        local_a8 = 0;
        local_a0 = 0;
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x30))(plVar8,&local_a8);
        }
        FWeakObjectPtr::operator=(local_98,0);
        local_d0 = 0xbf800000;
        local_d8 = 1;
        local_90 = 0;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar14,lVar7 + 0x690,&local_a8,0x3f000000);
        if (local_48 != 0) {
          plVar11 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar11 = local_58;
          }
          if (plVar11 != (longlong *)0x0) {
            (**(code **)(*plVar11 + 0x10))(plVar11,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x28))(plVar8,0);
          lVar7 = FMemory::Realloc(plVar8,0,0);
          if (lVar7 != 0) {
            FMemory::Free(lVar7);
          }
        }
      }
      pwVar10 = _guard_xfg_dispatch_icall_nop
                          (L"&UGFxMissionTrackerHUDWidget::OnInputDeviceChanged",L"::");
      pwVar4 = (wchar_t *)0x0;
      while (pwVar3 = pwVar10, pwVar3 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar4 = pwVar3;
      }
      FName::FName(&local_b0,pwVar4 + 2,1);
      lVar7 = *param_1;
      plVar8 = plVar6 + 0xbf;
      FWeakObjectPtr::operator=(&local_c8,0);
      uStack_c0 = 0;
      FWeakObjectPtr::operator=(&local_c8,lVar7);
      uStack_c0 = local_b0;
      local_b8 = 0;
      if ((local_b0 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_c8), lVar7 != 0)) {
        UObject::FindFunction(lVar7,uStack_c0);
      }
      piVar2 = (int *)*plVar8;
      lVar7 = plVar6[0xc0];
      for (piVar13 = piVar2; piVar13 != piVar2 + (longlong)(int)lVar7 * 4; piVar13 = piVar13 + 4) {
        if (((*piVar13 == (int)local_c8) &&
            (local_c8._4_4_ = (int)((ulonglong)local_c8 >> 0x20),
            bVar16 = piVar13[1] == local_c8._4_4_, bVar16)) ||
           ((cVar5 = FWeakObjectPtr::IsValid(piVar13), cVar5 == '\0' &&
            (cVar5 = FWeakObjectPtr::IsValid(&local_c8), cVar5 == '\0')))) {
          bVar16 = true;
        }
        else {
          bVar16 = false;
        }
        if ((bVar16) && (*(ulonglong *)(piVar13 + 2) == uStack_c0)) {
          bVar16 = true;
        }
        else {
          bVar16 = false;
        }
        if (bVar16) {
          if ((int)((longlong)piVar13 - (longlong)piVar2 >> 4) != -1) goto LAB_140feabe7;
          break;
        }
      }
      iVar1 = (int)plVar6[0xc0];
      *(int *)(plVar6 + 0xc0) = iVar1 + 1;
      if (*(int *)((longlong)plVar6 + 0x604) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar1);
      }
      puVar15 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar8);
      *puVar15 = (int)local_c8;
      puVar15[1] = local_c8._4_4_;
      *(ulonglong *)(puVar15 + 2) = uStack_c0;
LAB_140feabe7:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar8);
      lVar7 = *param_1;
      local_c8 = FUN_141003280;
      uStack_c0 = uStack_c0 & 0xffffffff00000000;
      plVar8 = plVar6 + 0xf9;
      plVar11 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar11 != (longlong *)0x0) {
        *plVar11 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar11 + 1,lVar7);
        *(int *)(plVar11 + 2) = (int)local_c8;
        *(int *)((longlong)plVar11 + 0x14) = local_c8._4_4_;
        *(undefined4 *)(plVar11 + 3) = (undefined4)uStack_c0;
        *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_c0._4_4_;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar11[5] = lVar7;
        *plVar11 = (longlong)&PTR_FUN_143f77bd0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_b0);
        iVar1 = (int)plVar6[0xfa];
        *(int *)(plVar6 + 0xfa) = iVar1 + 1;
        if (*(int *)((longlong)plVar6 + 0x7d4) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar1);
        }
        puVar12 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar8);
        *puVar12 = plVar11;
        *(undefined4 *)(puVar12 + 1) = 3;
      }
    }
  }
  return;
}



// FUNCTION 140feace0 FUN_140feace0 body=662 status=ok
// SIG undefined FUN_140feace0(void)

void FUN_140feace0(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_38 [2];
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar1 != '\0') {
    lVar3 = FWeakObjectPtr::Get(&local_res10);
    iVar9 = *(int *)(lVar3 + 0xc);
    if (iVar9 < (int)DAT_1469e91c4) {
      uVar6 = iVar9 >> 0x1f & 0xffff;
      uVar2 = iVar9 + uVar6;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) & 0x30000000) == 0) {
      cVar1 = FUN_142f4ff30(*param_1 + 0x1b8,param_1 + 3);
      if (cVar1 != '\0') {
        cVar1 = FWeakObjectPtr::IsValid(param_1 + 2);
        if ((cVar1 != '\0') && ((*(char *)(*param_1 + 0x1b0) - 4U & 0xf7) == 0)) {
          lVar3 = FWeakObjectPtr::Get(param_1 + 2);
          iVar7 = *(int *)(lVar3 + 0x66c) + -1;
          iVar9 = 0;
          if (-1 < iVar7) {
            iVar9 = iVar7;
          }
          *(int *)(lVar3 + 0x66c) = iVar9;
        }
        lVar3 = *param_1;
        uVar4 = FUN_1404b03b0();
        FText::operator=(lVar3 + 0x198,uVar4);
        (**(code **)(*(longlong *)(lVar3 + 0x1b8) + 0x10))();
        *(undefined1 *)(lVar3 + 0x1b0) = 0;
        *(undefined8 *)(lVar3 + 0x1e8) = 0;
        *(undefined2 *)(lVar3 + 0x1f1) = 0;
      }
      lVar3 = *param_1;
      iVar9 = *(int *)(lVar3 + 0x200) + -1;
      if (-1 < iVar9) {
        lVar10 = (longlong)iVar9 * 0x60;
        lVar3 = lVar10;
        do {
          cVar1 = FUN_142f4ff30(*(longlong *)(*param_1 + 0x1f8) + 0x20 + lVar10,param_1 + 3);
          if (cVar1 != '\0') {
            cVar1 = FWeakObjectPtr::IsValid(param_1 + 2);
            if ((cVar1 != '\0') &&
               ((*(char *)(*(longlong *)(*param_1 + 0x1f8) + 0x18 + lVar3) - 4U & 0xf7) == 0)) {
              lVar5 = FWeakObjectPtr::Get(param_1 + 2);
              iVar8 = *(int *)(lVar5 + 0x66c) + -1;
              iVar7 = 0;
              if (-1 < iVar8) {
                iVar7 = iVar8;
              }
              *(int *)(lVar5 + 0x66c) = iVar7;
            }
            FUN_141013930(*param_1 + 0x1f8,iVar9,1,1);
          }
          lVar10 = lVar10 + -0x60;
          lVar3 = lVar3 + -0x60;
          iVar9 = iVar9 + -1;
        } while (-1 < iVar9);
        lVar3 = *param_1;
      }
      FUN_14101a0c0(lVar3);
      if (*(int *)(*param_1 + 0x200) != 0) {
        FUN_1410100d0();
        return;
      }
      *(undefined1 *)(*param_1 + 400) = 0;
      uVar4 = FUN_1404b03b0();
      FUN_141017d50(*param_1,uVar4);
      local_38[0] = 0;
      local_38[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
      FGenericPlatformString::Memcpy(local_38[0],&DAT_14465dea8,10);
      FUN_142088cf0(*param_1,local_38);
      if (local_38[0] != 0) {
        FMemory::Free();
        return;
      }
    }
  }
  return;
}



// FUNCTION 140feaf80 FUN_140feaf80 body=129 status=ok
// SIG undefined FUN_140feaf80(void)

void FUN_140feaf80(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(*param_1 + 0x668);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(*param_1 + 0x668);
    FUN_140483870(lVar1 + 0x2d8,*param_1);
    lVar1 = FWeakObjectPtr::Get(*param_1 + 0x668);
    FUN_140483870(lVar1 + 0x2f0,*param_1);
    lVar1 = FWeakObjectPtr::Get(*param_1 + 0x668);
    FUN_140483870(lVar1 + 0x308,*param_1);
    return;
  }
  return;
}



// FUNCTION 140feb010 FUN_140feb010 body=124 status=ok
// SIG undefined FUN_140feb010(void)

void FUN_140feb010(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  lVar2 = FWeakObjectPtr::Get(*param_1 + 0x5c8);
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
      FUN_140ac3b30(lVar2 + 0x7c8,local_res8,*param_1,FUN_141003d90);
    }
  }
  return;
}



// FUNCTION 140feb090 FUN_140feb090 body=746 status=ok
// SIG undefined FUN_140feb090(void)

void FUN_140feb090(undefined4 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 local_28;
  longlong *local_20;
  
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 6);
  if (cVar5 == '\0') {
    return;
  }
  lVar7 = FWeakObjectPtr::Get(param_1 + 6);
  cVar5 = FWeakObjectPtr::IsValid(lVar7 + 0x240);
  lVar7 = 0;
  if (cVar5 == '\0') goto LAB_140feb23a;
  lVar8 = FWeakObjectPtr::Get(param_1 + 6);
  lVar8 = FWeakObjectPtr::Get(lVar8 + 0x240);
  iVar3 = *(int *)(lVar8 + 0xc);
  lVar8 = lVar7;
  if (iVar3 < (int)DAT_1469e91c4) {
    uVar12 = iVar3 >> 0x1f & 0xffff;
    uVar6 = iVar3 + uVar12;
    lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
            (longlong)(int)((uVar6 & 0xffff) - uVar12) * 0x18;
  }
  if ((*(uint *)(lVar8 + 8) >> 0x1d & 1) != 0) goto LAB_140feb23a;
  lVar8 = FWeakObjectPtr::Get(param_1 + 6);
  lVar8 = *(longlong *)(lVar8 + 0x308);
  if (lVar8 == 0) goto LAB_140feb23a;
  lVar9 = FWeakObjectPtr::Get(param_1 + 6);
  plVar10 = (longlong *)FWeakObjectPtr::Get(lVar9 + 0x240);
  lVar13 = lVar8 + 0x90;
  lVar9 = FWeakObjectPtr::Get(lVar13);
  if (lVar9 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar8 + 0x98)) && (*(longlong *)(lVar8 + 0xa0) != 0)) {
      lVar9 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar13,lVar9);
      if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar8 + 0x98) = DAT_1464b56f4;
      }
      lVar9 = FWeakObjectPtr::Get(lVar13);
      if (lVar9 != 0) goto LAB_140feb1e4;
    }
LAB_140feb21a:
    lVar9 = lVar7;
  }
  else {
LAB_140feb1e4:
    lVar8 = UTexture::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140feb21a;
  }
  (**(code **)(*plVar10 + 0x2a0))(plVar10,param_1 + 2,lVar9);
LAB_140feb23a:
  lVar8 = FUN_1416f8720(*param_1);
  if (lVar8 != 0) {
    lVar8 = FUN_1416f8720(*param_1);
    iVar3 = *(int *)(lVar8 + 0xc);
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar12 = iVar3 >> 0x1f & 0xffff;
      uVar6 = iVar3 + uVar12;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar12) * 0x18;
    }
    if ((*(uint *)(lVar7 + 8) & 0x30000000) == 0) {
      plVar10 = (longlong *)FUN_1416f8720(*param_1);
      (**(code **)(*plVar10 + 0x278))(plVar10,1);
      uVar11 = FUN_1416f8720(*param_1);
      FUN_142088ee0(uVar11,param_1[1]);
    }
  }
  lVar7 = FWeakObjectPtr::Get(param_1 + 6);
  if (*(longlong *)(lVar7 + 0x340) != 0) {
    lVar7 = FWeakObjectPtr::Get(param_1 + 6);
    FUN_142833de0(*(undefined8 *)(lVar7 + 0x340));
    lVar7 = FWeakObjectPtr::Get(param_1 + 6);
    FUN_14283ef20(*(undefined8 *)(lVar7 + 0x340));
    lVar7 = FWeakObjectPtr::Get(param_1 + 6);
    local_20 = (longlong *)0x0;
    if ((undefined8 *)(lVar7 + 0x340) != &local_28) {
      *(undefined8 *)(lVar7 + 0x340) = 0;
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(lVar7 + 0x348,&local_20);
      plVar10 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
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
  return;
}



// FUNCTION 140feb380 FUN_140feb380 body=271 status=ok
// SIG undefined FUN_140feb380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140feb380(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
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
  uVar1 = *param_1;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = uVar1;
    *puVar2 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_140ff1ed0;
  uVar3 = FUN_1420849a0(uVar1,local_68,local_b8);
  FUN_14208c260(uVar1,uVar3);
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
  return;
}



// FUNCTION 140feb490 FUN_140feb490 body=150 status=ok
// SIG undefined FUN_140feb490(void)

void FUN_140feb490(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 0x20);
  local_res14 = *(undefined4 *)(param_1 + 0x24);
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
      FUN_140fec280(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140feb530 FUN_140feb530 body=584 status=ok
// SIG undefined FUN_140feb530(void)

void FUN_140feb530(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar1 != '\0') {
    lVar3 = FWeakObjectPtr::Get(&local_res10);
    lVar4 = 0;
    iVar9 = *(int *)(lVar3 + 0xc);
    if (iVar9 < (int)DAT_1469e91c4) {
      uVar7 = iVar9 >> 0x1f & 0xffff;
      uVar2 = iVar9 + uVar7;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar7) * 0x18;
    }
    if (((*(uint *)(lVar4 + 8) & 0x30000000) == 0) && (*(int *)(*param_1 + 0x170) != -1)) {
      if (*(longlong *)(*param_1 + 0x1a8) == 0) {
        local_18 = 0;
        local_10 = 0x18;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
        FGenericPlatformString::Memcpy(local_18,L"passiveTextureContainer",0x30);
        local_28 = (longlong *)0x0;
        local_20 = 0;
        uVar5 = FUN_140ecbdf0(*param_1,&local_18,0,6,&local_28);
        *(undefined8 *)(*param_1 + 0x1a8) = uVar5;
        plVar6 = local_28;
        for (iVar9 = (int)local_20; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (*plVar6 != 0) {
            FMemory::Free();
          }
          plVar6 = plVar6 + 2;
        }
        if (local_28 != (longlong *)0x0) {
          FMemory::Free(local_28);
        }
        if (local_18 != 0) {
          FMemory::Free();
        }
      }
      lVar4 = *param_1;
      if (*(longlong *)(lVar4 + 0x1a8) != 0) {
        FUN_142088ee0(*(longlong *)(lVar4 + 0x1a8),*(int *)(lVar4 + 0x170) + 1);
        lVar4 = *param_1;
      }
      cVar1 = FWeakObjectPtr::IsValid(lVar4 + 0x1b0);
      if (cVar1 != '\0') {
        uVar5 = FUN_1416f8720((int)param_1[2]);
        cVar1 = FUN_1405dc8f0(*param_1 + 0x1b8,uVar5);
        if (cVar1 != '\0') {
          uVar5 = FUN_1416f8720((int)param_1[2]);
          FWeakObjectPtr::operator=(*param_1 + 0x1b8,uVar5);
          lVar4 = *param_1;
          if (*(int *)(lVar4 + 0x1d8) == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = *(undefined2 **)(lVar4 + 0x1d0);
          }
          FString::PrintfImpl(&local_18,puVar8,*(undefined4 *)(lVar4 + 0x170));
          plVar6 = (longlong *)FWeakObjectPtr::Get(*param_1 + 0x1b0);
          uVar5 = FUN_1416f8720((int)param_1[2]);
          (**(code **)(*plVar6 + 0x2a0))(plVar6,&local_18,uVar5);
          if (local_18 != 0) {
            FMemory::Free();
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140feb780 FUN_140feb780 body=795 status=ok
// SIG undefined FUN_140feb780(void)

void FUN_140feb780(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  wchar_t *pwVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined8 local_res8;
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_res18 [2];
  int local_38;
  int local_34;
  longlong local_30;
  
  local_res10 = *(undefined4 *)(param_1 + 1);
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar4 != '\0') {
    lVar6 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar6 + 0xc);
    pwVar7 = (wchar_t *)0x0;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar12 = iVar1 >> 0x1f & 0xffff;
      uVar5 = iVar1 + uVar12;
      pwVar7 = (wchar_t *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
               (longlong)(int)((uVar5 & 0xffff) - uVar12) * 0x18);
    }
    if (((*(uint *)(pwVar7 + 4) & 0x30000000) == 0) && (lVar6 = FUN_140ff6a30(*param_1), lVar6 != 0)
       ) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPrimaryCharacterChanged",L"::");
      pwVar7 = (wchar_t *)0x0;
      while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar7 = pwVar3;
      }
      FName::FName(local_res18,pwVar7 + 2,1);
      uVar15 = *param_1;
      plVar16 = (longlong *)(lVar6 + 0x8c0);
      FWeakObjectPtr::operator=(&local_38,0);
      local_30 = 0;
      FWeakObjectPtr::operator=(&local_38,uVar15);
      local_30 = local_res18[0];
      local_res8 = 0;
      if ((local_res18[0] != 0) && (lVar9 = FWeakObjectPtr::Get(&local_38), lVar9 != 0)) {
        UObject::FindFunction(lVar9,local_30);
      }
      piVar13 = (int *)*plVar16;
      iVar1 = *(int *)(lVar6 + 0x8c8);
      for (piVar14 = piVar13; piVar14 != piVar13 + (longlong)iVar1 * 4; piVar14 = piVar14 + 4) {
        if ((((*piVar14 == local_38) && (piVar14[1] == local_34)) ||
            ((cVar4 = FWeakObjectPtr::IsValid(piVar14), cVar4 == '\0' &&
             (cVar4 = FWeakObjectPtr::IsValid(&local_38), cVar4 == '\0')))) &&
           (*(longlong *)(piVar14 + 2) == local_30)) {
          if ((int)((longlong)piVar14 - (longlong)piVar13 >> 4) != -1) goto LAB_140feb976;
          break;
        }
      }
      iVar1 = *(int *)(lVar6 + 0x8c8);
      *(int *)(lVar6 + 0x8c8) = iVar1 + 1;
      if (*(int *)(lVar6 + 0x8cc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar16,iVar1);
      }
      piVar13 = (int *)((longlong)iVar1 * 0x10 + *plVar16);
      *piVar13 = local_38;
      piVar13[1] = local_34;
      *(longlong *)(piVar13 + 2) = local_30;
LAB_140feb976:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar16);
      lVar6 = (**(code **)(*(longlong *)*param_1 + 0x148))();
      if ((lVar6 != 0) && (lVar6 = UWorld::GetGameState<APVPGameState>(lVar6), lVar6 != 0)) {
        uVar15 = *param_1;
        plVar16 = (longlong *)(lVar6 + 0x658);
        plVar10 = (longlong *)*plVar16;
        plVar17 = plVar10 + (longlong)*(int *)(lVar6 + 0x660) * 2;
        if (plVar10 != plVar17) {
          do {
            if ((((int)plVar10[1] != 0) &&
                (plVar2 = (longlong *)*plVar10, plVar2 != (longlong *)0x0)) &&
               (cVar4 = (**(code **)(*plVar2 + 8))(plVar2,uVar15), cVar4 != '\0')) {
              return;
            }
            plVar10 = plVar10 + 2;
          } while (plVar10 != plVar17);
          uVar15 = *param_1;
        }
        plVar10 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar10 != (longlong *)0x0) {
          *plVar10 = (longlong)&PTR_FUN_1442e7fd8;
          FWeakObjectPtr::operator=(plVar10 + 1,uVar15);
          plVar10[2] = (longlong)FUN_140ffdd40;
          lVar9 = FDelegateHandle::GenerateNewID();
          plVar10[4] = lVar9;
          *plVar10 = (longlong)&PTR_FUN_1442e8020;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar16,1);
          (**(code **)(*plVar10 + 0x20))(plVar10,&local_res8);
          iVar1 = *(int *)(lVar6 + 0x660);
          *(int *)(lVar6 + 0x660) = iVar1 + 1;
          if (*(int *)(lVar6 + 0x664) < iVar1 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar16,iVar1);
          }
          puVar11 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar16);
          *puVar11 = plVar10;
          *(undefined4 *)(puVar11 + 1) = 3;
        }
      }
    }
  }
  return;
}



// FUNCTION 140febaa0 FUN_140febaa0 body=322 status=ok
// SIG undefined FUN_140febaa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140febaa0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [80];
  code *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar1 = *param_1;
  uVar2 = 0;
  if (*(int *)(lVar1 + 0x60) != 0) {
    plVar4 = *(longlong **)(lVar1 + 0x50);
    if (*(longlong **)(lVar1 + 0x50) == (longlong *)0x0) {
      plVar4 = (longlong *)(lVar1 + 0x30);
    }
    if (plVar4 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar4 + 8))();
    }
  }
  uVar2 = (**(code **)(lVar1 + 0x20))(uVar2);
  lVar1 = *param_1;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  local_68[0] = FHardwareCursor::GetHandle;
  lVar3 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,local_68);
  FGenericPlatformMemory::MemswapGreaterThan8(lVar3,lVar1 + 0x20,0x50);
  if (*(int *)(lVar3 + 0x40) != 0) {
    plVar4 = *(longlong **)(lVar3 + 0x30);
    if (*(longlong **)(lVar3 + 0x30) == (longlong *)0x0) {
      plVar4 = (longlong *)(lVar3 + 0x10);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (*(longlong *)(lVar3 + 0x30) != 0) {
    FMemory::Free();
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
  return uVar2;
}



// FUNCTION 140febbf0 FUN_140febbf0 body=1505 status=ok
// SIG undefined FUN_140febbf0(void)

void FUN_140febbf0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  wchar_t *pwVar14;
  undefined8 local_res8;
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_res18;
  int local_48;
  int local_44;
  longlong local_40;
  
  local_res10 = *(undefined4 *)(param_1 + 1);
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar5 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar5 != '\0') {
    lVar7 = FWeakObjectPtr::Get(&local_res10);
    pwVar14 = (wchar_t *)0x0;
    iVar2 = *(int *)(lVar7 + 0xc);
    pwVar10 = pwVar14;
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar11 = iVar2 >> 0x1f & 0xffff;
      uVar6 = iVar2 + uVar11;
      pwVar10 = (wchar_t *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                (longlong)(int)((uVar6 & 0xffff) - uVar11) * 0x18);
    }
    if (((*(uint *)(pwVar10 + 4) & 0x30000000) == 0) &&
       (lVar7 = FUN_140eccbe0(*param_1), lVar7 != 0)) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnHUDErrorNotification",L"::");
      pwVar10 = pwVar14;
      while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar10 = pwVar4;
      }
      FName::FName(&local_res18,pwVar10 + 2,1);
      lVar9 = local_res18;
      uVar3 = *param_1;
      plVar1 = (longlong *)(lVar7 + 0x778);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      FWeakObjectPtr::operator=(&local_48,uVar3);
      local_40 = lVar9;
      local_res8 = 0;
      if ((lVar9 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_48), lVar9 != 0)) {
        UObject::FindFunction(lVar9,local_40);
      }
      piVar12 = (int *)*plVar1;
      iVar2 = *(int *)(lVar7 + 0x780);
      for (piVar13 = piVar12; piVar13 != piVar12 + (longlong)iVar2 * 4; piVar13 = piVar13 + 4) {
        if ((((*piVar13 == local_48) && (piVar13[1] == local_44)) ||
            ((cVar5 = FWeakObjectPtr::IsValid(piVar13), cVar5 == '\0' &&
             (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) &&
           (*(longlong *)(piVar13 + 2) == local_40)) {
          if ((int)((longlong)piVar13 - (longlong)piVar12 >> 4) != -1) goto LAB_140febde0;
          break;
        }
      }
      iVar2 = *(int *)(lVar7 + 0x780);
      *(int *)(lVar7 + 0x780) = iVar2 + 1;
      if (*(int *)(lVar7 + 0x784) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      piVar12 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
      *piVar12 = local_48;
      piVar12[1] = local_44;
      *(longlong *)(piVar12 + 2) = local_40;
LAB_140febde0:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::DisplayNotification",L"::");
      pwVar10 = pwVar14;
      while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar10 = pwVar4;
      }
      FName::FName(&local_res18,pwVar10 + 2,1);
      lVar9 = local_res18;
      uVar3 = *param_1;
      plVar1 = (longlong *)(lVar7 + 0x758);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      FWeakObjectPtr::operator=(&local_48,uVar3);
      local_40 = lVar9;
      local_res8 = 0;
      if ((lVar9 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_48), lVar9 != 0)) {
        UObject::FindFunction(lVar9,local_40);
      }
      piVar12 = (int *)*plVar1;
      iVar2 = *(int *)(lVar7 + 0x760);
      for (piVar13 = piVar12; piVar13 != piVar12 + (longlong)iVar2 * 4; piVar13 = piVar13 + 4) {
        if ((((*piVar13 == local_48) && (piVar13[1] == local_44)) ||
            ((cVar5 = FWeakObjectPtr::IsValid(piVar13), cVar5 == '\0' &&
             (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) &&
           (*(longlong *)(piVar13 + 2) == local_40)) {
          if ((int)((longlong)piVar13 - (longlong)piVar12 >> 4) != -1) goto LAB_140febf20;
          break;
        }
      }
      iVar2 = *(int *)(lVar7 + 0x760);
      *(int *)(lVar7 + 0x760) = iVar2 + 1;
      if (*(int *)(lVar7 + 0x764) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      piVar12 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
      *piVar12 = local_48;
      piVar12[1] = local_44;
      *(longlong *)(piVar12 + 2) = local_40;
LAB_140febf20:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::DisplayNotificationWithId",L"::");
      pwVar10 = pwVar14;
      while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar10 = pwVar4;
      }
      FName::FName(&local_res18,pwVar10 + 2,1);
      lVar9 = local_res18;
      uVar3 = *param_1;
      plVar1 = (longlong *)(lVar7 + 0x768);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      FWeakObjectPtr::operator=(&local_48,uVar3);
      local_40 = lVar9;
      local_res8 = 0;
      if ((lVar9 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_48), lVar9 != 0)) {
        UObject::FindFunction(lVar9,local_40);
      }
      piVar12 = (int *)*plVar1;
      iVar2 = *(int *)(lVar7 + 0x770);
      for (piVar13 = piVar12; piVar13 != piVar12 + (longlong)iVar2 * 4; piVar13 = piVar13 + 4) {
        if ((((*piVar13 == local_48) && (piVar13[1] == local_44)) ||
            ((cVar5 = FWeakObjectPtr::IsValid(piVar13), cVar5 == '\0' &&
             (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) &&
           (*(longlong *)(piVar13 + 2) == local_40)) {
          if ((int)((longlong)piVar13 - (longlong)piVar12 >> 4) != -1) goto LAB_140fec060;
          break;
        }
      }
      iVar2 = *(int *)(lVar7 + 0x770);
      *(int *)(lVar7 + 0x770) = iVar2 + 1;
      if (*(int *)(lVar7 + 0x774) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      piVar12 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
      *piVar12 = local_48;
      piVar12[1] = local_44;
      *(longlong *)(piVar12 + 2) = local_40;
LAB_140fec060:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
      pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::ClearNotifications",L"::");
      while (pwVar8 = pwVar10, pwVar8 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar8 + 1,L"::");
        pwVar14 = pwVar8;
      }
      FName::FName(&local_res18,pwVar14 + 2,1);
      uVar3 = *param_1;
      plVar1 = (longlong *)(lVar7 + 0x788);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      FWeakObjectPtr::operator=(&local_48,uVar3);
      local_40 = local_res18;
      local_res8 = 0;
      if ((local_res18 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_48), lVar9 != 0)) {
        UObject::FindFunction(lVar9,local_40);
      }
      piVar12 = (int *)*plVar1;
      iVar2 = *(int *)(lVar7 + 0x790);
      for (piVar13 = piVar12; piVar13 != piVar12 + (longlong)iVar2 * 4; piVar13 = piVar13 + 4) {
        if ((((*piVar13 == local_48) && (piVar13[1] == local_44)) ||
            ((cVar5 = FWeakObjectPtr::IsValid(piVar13), cVar5 == '\0' &&
             (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) &&
           (*(longlong *)(piVar13 + 2) == local_40)) {
          if ((int)((longlong)piVar13 - (longlong)piVar12 >> 4) != -1) goto LAB_140fec1a0;
          break;
        }
      }
      iVar2 = *(int *)(lVar7 + 0x790);
      *(int *)(lVar7 + 0x790) = iVar2 + 1;
      if (*(int *)(lVar7 + 0x794) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      piVar12 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
      *piVar12 = local_48;
      piVar12[1] = local_44;
      *(longlong *)(piVar12 + 2) = local_40;
LAB_140fec1a0:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
    }
  }
  return;
}



// FUNCTION 140fec1e0 FUN_140fec1e0 body=150 status=ok
// SIG undefined FUN_140fec1e0(void)

void FUN_140fec1e0(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 1);
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
      FUN_14101c5e0(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140fec280 FUN_140fec280 body=524 status=ok
// SIG undefined FUN_140fec280(void)

void FUN_140fec280(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined2 local_10;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 uStack_c;
  
  lVar4 = *param_1;
  if (*(int *)(lVar4 + 0x700) != *(int *)(lVar4 + 0x72c)) {
    lVar2 = *(longlong *)(lVar4 + 0x738);
    if (*(longlong *)(lVar4 + 0x738) == 0) {
      lVar2 = lVar4 + 0x730;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(lVar4 + 0x740) - 1U &
                             (ulonglong)*(byte *)(param_1 + 3)) * 4);
    if (iVar1 != -1) {
      do {
        pbVar3 = (byte *)((longlong)iVar1 * 0x78 + *(longlong *)(lVar4 + 0x6f8));
        if (*pbVar3 == *(byte *)(param_1 + 3)) {
          if (iVar1 != -1) goto LAB_140fec311;
          break;
        }
        iVar1 = *(int *)(pbVar3 + 0x70);
      } while (iVar1 != -1);
    }
  }
  pbVar3 = (byte *)0x0;
LAB_140fec311:
  pbVar6 = pbVar3 + 8;
  if (pbVar3 == (byte *)0x0) {
    pbVar6 = (byte *)0x0;
  }
  if (pbVar6 != (byte *)0x0) {
    FUN_1411f9b50(lVar4 + 0x7a0,*(undefined8 *)(pbVar6 + 0x50));
    UTutorialLightToggler::OnStateChange(*param_1 + 0x7a0,pbVar6[0x58]);
  }
  lVar4 = *param_1;
  if ((char)param_1[3] == '\x06') {
    FUN_140ebff20(lVar4 + 0xb30,lVar4 + 0x788);
    lVar2 = *param_1;
    lVar4 = lVar2 + 0x780;
  }
  else {
    FUN_140ebff20(lVar4 + 0xb30,lVar4 + 0x778);
    lVar2 = *param_1;
    lVar4 = lVar2 + 0x770;
  }
  FUN_140ec02d0(lVar2 + 0xb30,lVar4,0);
  switch((char)param_1[3]) {
  case '\0':
    FUN_1411f9ae0(*param_1 + 0x7a0,0x140000001,0);
    FUN_141016a80(*param_1,0);
    goto LAB_140fec46d;
  case '\x01':
    local_10 = 0;
    uStack_e = 1;
    break;
  case '\x02':
    local_10 = 0x100;
    uStack_e = 0;
    break;
  case '\x03':
  case '\x04':
  case '\x05':
    uVar5 = 0x140000001;
    goto LAB_140fec45b;
  case '\b':
  case '\t':
  case '\n':
    FUN_1411f9ae0(*param_1 + 0x7a0,0,0);
  default:
    uVar5 = 0;
LAB_140fec45b:
    FUN_1411f9ae0(*param_1 + 0x7a0,uVar5,0);
    goto LAB_140fec46d;
  }
  uStack_c = 0;
  uStack_d = 0;
  local_58[0] = 1;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  FUN_1411f9940(*param_1 + 0x7a0,local_58,0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
LAB_140fec46d:
  FUN_141019c30(*param_1,0);
  return;
}



// FUNCTION 140fec4c0 FUN_140fec4c0 body=723 status=ok
// SIG undefined FUN_140fec4c0(void)

void FUN_140fec4c0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  wchar_t *pwVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  wchar_t *pwVar10;
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
  
  local_res10 = *(undefined4 *)(param_1 + 1);
  uStackX_14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar5 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar5 != '\0') {
    lVar7 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar7 + 0xc);
    pwVar8 = (wchar_t *)0x0;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar11 = iVar1 >> 0x1f & 0xffff;
      uVar6 = iVar1 + uVar11;
      pwVar8 = (wchar_t *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
               (longlong)(int)((uVar6 & 0xffff) - uVar11) * 0x18);
    }
    if ((*(uint *)(pwVar8 + 4) & 0x30000000) == 0) {
      bVar3 = true;
      goto LAB_140fec54d;
    }
  }
  bVar3 = false;
LAB_140fec54d:
  if (bVar3) {
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 3);
    if ((cVar5 != '\0') && (lVar7 = FWeakObjectPtr::Get(param_1 + 3), lVar7 != 0)) {
      lVar9 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_1407665e0(lVar7 + 0x2660,*param_1);
      }
    }
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 2);
    if ((cVar5 != '\0') && (lVar7 = FWeakObjectPtr::Get(param_1 + 2), lVar7 != 0)) {
      lVar9 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnGrenadeThrowFailed",L"::");
        pwVar8 = (wchar_t *)0x0;
        while (pwVar4 = pwVar10, pwVar4 != (wchar_t *)0x0) {
          pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar8 = pwVar4;
        }
        FName::FName(&local_res10,pwVar8 + 2,1);
        lVar9 = CONCAT44(uStackX_14,local_res10);
        uVar2 = *param_1;
        plVar14 = (longlong *)(lVar7 + 0x2660);
        FWeakObjectPtr::operator=(&local_28,0);
        local_20 = 0;
        FWeakObjectPtr::operator=(&local_28,uVar2);
        local_res8 = 0;
        local_20 = lVar9;
        if ((lVar9 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_28), lVar9 != 0)) {
          UObject::FindFunction(lVar9,local_20);
        }
        piVar12 = (int *)*plVar14;
        iVar1 = *(int *)(lVar7 + 0x2668);
        for (piVar13 = piVar12; piVar13 != piVar12 + (longlong)iVar1 * 4; piVar13 = piVar13 + 4) {
          if (((*piVar13 == local_28) && (piVar13[1] == local_24)) ||
             ((cVar5 = FWeakObjectPtr::IsValid(piVar13), cVar5 == '\0' &&
              (cVar5 = FWeakObjectPtr::IsValid(&local_28), cVar5 == '\0')))) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if ((bVar3) && (*(longlong *)(piVar13 + 2) == local_20)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if (bVar3) {
            if ((int)((longlong)piVar13 - (longlong)piVar12 >> 4) != -1) goto LAB_140fec77a;
            break;
          }
        }
        iVar1 = *(int *)(lVar7 + 0x2668);
        *(int *)(lVar7 + 0x2668) = iVar1 + 1;
        if (*(int *)(lVar7 + 0x266c) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar1);
        }
        piVar12 = (int *)((longlong)iVar1 * 0x10 + *plVar14);
        *piVar12 = local_28;
        piVar12[1] = local_24;
        *(longlong *)(piVar12 + 2) = local_20;
LAB_140fec77a:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar14);
      }
    }
  }
  return;
}



// FUNCTION 140fec7a0 FUN_140fec7a0 body=317 status=ok
// SIG undefined FUN_140fec7a0(void)

void FUN_140fec7a0(longlong *param_1)

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
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint local_20;
  undefined *local_18;
  
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
    if (((*(uint *)(lVar5 + 8) & 0x30000000) == 0) &&
       (plVar2 = *(longlong **)(*param_1 + 0x6a0), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x2a8))(plVar2,param_1 + 2,1,0);
      FUN_142f10ae0(*(undefined8 *)(*param_1 + 0x6a0),0);
      FUN_142f0de70(*(undefined8 *)(*param_1 + 0x6a0),PTR_DAT_14629ec90);
      local_38 = 0xffffffffffffffff;
      uStack_30 = 0xffffffffffffffff;
      local_28 = (longlong *)0x0;
      local_20 = 6;
      local_18 = PTR_s_bottom_14629ec08;
      FUN_142f10860(*(undefined8 *)(*param_1 + 0x6a0),&local_38);
      if ((local_20 >> 6 & 1) != 0) {
        (**(code **)(*local_28 + 0x10))(local_28,&local_38,local_18);
      }
    }
  }
  return;
}



// FUNCTION 140fec8e0 FUN_140fec8e0 body=567 status=ok
// SIG undefined FUN_140fec8e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140fec8e0(float *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_e8 [32];
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
  ulonglong local_28 [4];
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  fVar3 = *param_1;
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_80,L"{0}%",L"GFxPhotoModeMenu",L"SliderPercentFormat");
  puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_68,uVar7);
  local_58[0] = 0;
  local_30 = '\0';
  local_b8 = local_58;
  puStack_b0 = local_28;
  local_c8 = *puVar8;
  local_50 = (longlong)(int)ROUND(fVar3 * 200.0 - 0.5) >> 1;
  lStack_c0 = puVar8[1];
  if (lStack_c0 != 0) {
    LOCK();
    *(int *)(lStack_c0 + 8) = *(int *)(lStack_c0 + 8) + 1;
    UNLOCK();
  }
  uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_a8,&local_b8);
  uVar7 = FText::Format(local_98,&local_c8,uVar7);
  FText::FText(param_2,uVar7);
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_90 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
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
      plVar5 = local_40 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  plVar5 = (longlong *)puVar8[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_78 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 140fecb20 FUN_140fecb20 body=304 status=ok
// SIG undefined FUN_140fecb20(void)

bool FUN_140fecb20(undefined8 *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = FUN_140cfd840(*param_1,*(undefined8 *)(param_2 + 0xf0));
  if (param_2 == lVar3) {
    return true;
  }
  lVar3 = FUN_140cfd840(*param_1,*(undefined8 *)(param_3 + 0xf0));
  if (param_3 != lVar3) {
    if (*(char *)(param_2 + 0x109) != '\0') {
      return true;
    }
    if (*(char *)(param_3 + 0x109) == '\0') {
      if ((param_1[1] != 0) && (cVar1 = FUN_140fe6d40(param_2), cVar1 != '\0')) {
        return true;
      }
      if ((param_1[1] != 0) && (cVar1 = FUN_140fe6d40(param_3), cVar1 != '\0')) {
        return false;
      }
      if (((param_1[1] == 0) || (*(longlong *)(param_2 + 0xf0) != *(longlong *)(param_1[1] + 0xf0)))
         && (lVar3 = FUN_140cfd240(*param_1,*(undefined8 *)(param_2 + 0xf0)), param_2 == lVar3)) {
        return true;
      }
      if (((param_1[1] == 0) || (*(longlong *)(param_3 + 0xf0) != *(longlong *)(param_1[1] + 0xf0)))
         && (lVar3 = FUN_140cfd240(*param_1,*(undefined8 *)(param_3 + 0xf0)), param_3 == lVar3)) {
        return false;
      }
      iVar2 = FText::CompareToCaseIgnored(param_2 + 0x30,param_3 + 0x30);
      return iVar2 < 0;
    }
  }
  return false;
}



// FUNCTION 140fecc50 FUN_140fecc50 body=184 status=ok
// SIG undefined FUN_140fecc50(void)

void FUN_140fecc50(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  FWeakObjectPtr::operator=(local_28,0);
  FWeakObjectPtr::operator=(local_20,0);
  FWeakObjectPtr::operator=(local_18,0);
  FWeakObjectPtr::operator=(local_10,0);
  lVar1 = *param_1;
  puVar3 = local_18;
  if (*(int *)(lVar1 + 0x618) != 7) {
    FWeakObjectPtr::operator=(puVar3,*(undefined8 *)(lVar1 + 0xf20));
    lVar1 = *param_1;
    puVar3 = local_20;
  }
  FWeakObjectPtr::operator=(puVar3,*(undefined8 *)(lVar1 + 0xf40));
  lVar4 = *param_1;
  lVar1 = *(longlong *)(lVar4 + 0xf38);
  local_38 = lVar1;
  if (lVar1 == 0) {
    local_30 = 0;
  }
  else {
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    lVar4 = *param_1;
  }
  FUN_142ecfd10(lVar4,&local_38,local_28);
  return;
}



// FUNCTION 140fecd10 FUN_140fecd10 body=175 status=ok
// SIG undefined FUN_140fecd10(void)

void FUN_140fecd10(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(*param_1 + 0x60c);
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140fecd71;
  }
  lVar2 = 0;
LAB_140fecd71:
  lVar3 = *param_1;
  if ((*(longlong *)(lVar3 + 0x6d0) != 0) && (lVar2 != 0)) {
    FUN_142880530(*(undefined8 *)(lVar2 + 0x90),lVar3 + 0x6d0);
    *(undefined8 *)(lVar3 + 0x6d0) = 0;
    *(undefined8 *)(*param_1 + 0x6d0) = 0;
  }
  return;
}



// FUNCTION 140fecdc0 FUN_140fecdc0 body=184 status=ok
// SIG undefined FUN_140fecdc0(void)

void FUN_140fecdc0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  FWeakObjectPtr::operator=(local_28,0);
  FWeakObjectPtr::operator=(local_20,0);
  FWeakObjectPtr::operator=(local_18,0);
  FWeakObjectPtr::operator=(local_10,0);
  lVar1 = *param_1;
  puVar3 = local_10;
  if (*(int *)(lVar1 + 0x618) != 7) {
    FWeakObjectPtr::operator=(puVar3,*(undefined8 *)(lVar1 + 0xf38));
    lVar1 = *param_1;
    puVar3 = local_20;
  }
  FWeakObjectPtr::operator=(puVar3,*(undefined8 *)(lVar1 + 0xf28));
  lVar4 = *param_1;
  lVar1 = *(longlong *)(lVar4 + 0xf20);
  local_38 = lVar1;
  if (lVar1 == 0) {
    local_30 = 0;
  }
  else {
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    lVar4 = *param_1;
  }
  FUN_142ecfd10(lVar4,&local_38,local_28);
  return;
}



// FUNCTION 140fece80 FUN_140fece80 body=221 status=ok
// SIG undefined FUN_140fece80(void)

void FUN_140fece80(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  FWeakObjectPtr::operator=(local_28,0);
  FWeakObjectPtr::operator=(local_20,0);
  FWeakObjectPtr::operator=(local_18,0);
  FWeakObjectPtr::operator=(local_10,0);
  uVar2 = *(undefined8 *)(*param_1 + 0xf20);
  if (*(int *)(*param_1 + 0x618) == 7) {
    FWeakObjectPtr::operator=(local_18,uVar2);
    puVar3 = local_10;
  }
  else {
    FWeakObjectPtr::operator=(local_28,uVar2);
    FWeakObjectPtr::operator=(local_10,*(undefined8 *)(*param_1 + 0xf40));
    puVar3 = local_20;
  }
  FWeakObjectPtr::operator=(puVar3,*(undefined8 *)(*param_1 + 0xf30));
  lVar4 = *param_1;
  lVar1 = *(longlong *)(lVar4 + 0xf28);
  local_38 = lVar1;
  if (lVar1 == 0) {
    local_30 = 0;
  }
  else {
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    lVar4 = *param_1;
  }
  FUN_142ecfd10(lVar4,&local_38,local_28);
  return;
}



// FUNCTION 140fecf60 FUN_140fecf60 body=271 status=ok
// SIG undefined FUN_140fecf60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fecf60(undefined8 *param_1)

{
  undefined8 uVar1;
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
  uVar1 = *param_1;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = uVar1;
    *puVar2 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = FUN_140ff1cc0;
  uVar3 = FUN_1420849a0(uVar1,local_68,local_b8);
  FUN_14208c260(uVar1,uVar3);
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
  return;
}



// FUNCTION 140fed070 FUN_140fed070 body=159 status=ok
// SIG undefined FUN_140fed070(void)

void FUN_140fed070(undefined8 *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 2);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(param_1 + 2);
    if (lVar3 != 0) {
      lVar4 = FUN_1413f82e0();
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
        FUN_140483870(lVar3 + 0xf28,*param_1);
      }
    }
  }
  lVar3 = FUN_140eccca0(*param_1);
  if (lVar3 != 0) {
    FUN_140fe1f60(lVar3 + 0xf28,local_res8,*param_1,FUN_141007010);
  }
  return;
}



// FUNCTION 140fed110 FUN_140fed110 body=394 status=ok
// SIG undefined FUN_140fed110(void)

void FUN_140fed110(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  uVar2 = 0;
  uVar1 = uVar2;
  if (*(longlong *)(*param_1 + 0x7f8) != 0) {
    local_38 = 0;
    local_30 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"missionTaskLine",0x20);
    local_48 = (longlong *)0x0;
    local_40 = 0;
    uVar1 = FUN_140ecbdf0(*(undefined8 *)(*param_1 + 0x7f8),&local_38,0,6,&local_48);
    uVar2 = 3;
  }
  if ((uVar2 & 2) != 0) {
    uVar2 = (ulonglong)((uint)uVar2 & 0xfffffffd);
    plVar4 = local_48;
    for (iVar3 = (int)local_40; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  if (((uVar2 & 1) != 0) && (local_38 != 0)) {
    FMemory::Free();
  }
  if (uVar1 != 0) {
    local_28[0] = 0;
    local_28[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],L"task",10);
    FUN_142088cf0(uVar1,local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  *(undefined4 *)(*param_1 + 0x80c) = 0xbf800000;
  *(undefined4 *)(*param_1 + 0x810) = 0xbf800000;
  *(undefined8 *)(*param_1 + 0x7f8) = 0;
  return;
}



// FUNCTION 140fed2a0 FUN_140fed2a0 body=381 status=ok
// SIG undefined FUN_140fed2a0(void)

void FUN_140fed2a0(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  uVar2 = 0;
  uVar1 = uVar2;
  if (*(longlong *)(*param_1 + 0x800) != 0) {
    local_38 = 0;
    local_30 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"missionTaskLine",0x20);
    local_48 = (longlong *)0x0;
    local_40 = 0;
    uVar1 = FUN_140ecbdf0(*(undefined8 *)(*param_1 + 0x800),&local_38,0,6,&local_48);
    uVar2 = 3;
  }
  if ((uVar2 & 2) != 0) {
    uVar2 = (ulonglong)((uint)uVar2 & 0xfffffffd);
    plVar4 = local_48;
    for (iVar3 = (int)local_40; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  if (((uVar2 & 1) != 0) && (local_38 != 0)) {
    FMemory::Free();
  }
  if (uVar1 != 0) {
    local_28[0] = 0;
    local_28[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],L"task",10);
    FUN_142088cf0(uVar1,local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  *(undefined8 *)(*param_1 + 0x800) = 0;
  *(undefined4 *)(*param_1 + 0x808) = 0xffffffff;
  return;
}



// FUNCTION 140fed420 FUN_140fed420 body=585 status=ok
// SIG undefined FUN_140fed420(void)

void FUN_140fed420(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 local_res8 [2];
  longlong local_78 [3];
  undefined4 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  cVar5 = FWeakObjectPtr::IsValid();
  if (cVar5 != '\0') {
    lVar6 = FWeakObjectPtr::Get(param_1);
    plVar7 = (longlong *)FWeakObjectPtr::Get(lVar6 + 0x240);
    (**(code **)(*plVar7 + 0x2a0))(plVar7,param_1 + 6,0);
    local_78[1] = 0x20;
    local_78[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
    FGenericPlatformString::Memcpy(local_78[0],L"RequestAsyncLoad SingleDelegate",0x40);
    local_res8[0] = 0xffffffff;
    local_48 = 0xffffffff;
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_14170c210(local_res8);
      local_48 = local_res8[0];
    }
    local_44 = param_1[4];
    local_res8[0] = 0xffffffff;
    FString::FString(&local_40,param_1 + 6);
    uVar3 = *param_1;
    uVar4 = param_1[1];
    local_78[2] = 0;
    local_60 = 0;
    puVar8 = (undefined8 *)operator_new(0x38,local_78 + 2);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_GetPoolName_14465f970;
      *(undefined4 *)(puVar8 + 1) = local_48;
      *(undefined4 *)((longlong)puVar8 + 0xc) = local_44;
      puVar8[2] = local_40;
      *(undefined4 *)(puVar8 + 3) = local_38;
      *(undefined4 *)((longlong)puVar8 + 0x1c) = local_34;
      *(undefined4 *)(puVar8 + 4) = uVar3;
      *(undefined4 *)((longlong)puVar8 + 0x24) = uVar4;
      local_48 = 0xffffffff;
      local_40 = 0;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[6] = uVar9;
      *puVar8 = &PTR_GetPoolName_14465f9b8;
    }
    lVar6 = *(longlong *)(param_1 + 10);
    lVar10 = FUN_1422ca050();
    lVar11 = FWeakObjectPtr::Get(param_1);
    puVar8 = (undefined8 *)
             FStreamableManager::RequestAsyncLoad
                       (lVar10 + 0x178,local_58,lVar6 + 0xa0,local_78 + 2,0,0,0,local_78);
    if ((undefined8 *)(lVar11 + 0x340) != puVar8) {
      *(undefined8 *)(lVar11 + 0x340) = *puVar8;
      *puVar8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(lVar11 + 0x348,puVar8 + 1);
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_50 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if (local_40 != 0) {
      FMemory::Free();
    }
    FUN_1416f8340(local_48);
    FUN_1416f8340(local_res8[0]);
    if (local_78[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140fed670 FUN_140fed670 body=241 status=ok
// SIG undefined FUN_140fed670(void)

void FUN_140fed670(longlong *param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FWeakObjectPtr::Get(*param_1 + 0x5d8);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1407665e0(plVar2 + 0x27d,*param_1);
      lVar3 = (**(code **)(*plVar2 + 0xfa8))(plVar2);
      if (lVar3 != 0) {
        FUN_1407665e0(lVar3 + 0x138,*param_1);
      }
    }
  }
  lVar3 = FWeakObjectPtr::Get(*param_1 + 0x60c);
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(lVar3 + 0x5b8) != 0)) {
      FUN_1407665e0(*(longlong *)(lVar3 + 0x5b8) + 0x28,*param_1);
    }
  }
  return;
}



// FUNCTION 140fed770 FUN_140fed770 body=550 status=ok
// SIG undefined FUN_140fed770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140fed770(float *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_e8 [32];
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
  float local_50;
  longlong *local_40;
  char local_30;
  ulonglong local_28 [4];
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  fVar3 = *param_1;
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_80,L"{0}m",L"GFxPhotoModeMenu",L"SliderMetersFormat_M_is_meters");
  puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_68,uVar7);
  local_b8 = local_58;
  local_58[0] = 2;
  puStack_b0 = local_28;
  local_c8 = *puVar8;
  lStack_c0 = puVar8[1];
  local_30 = '\0';
  if (lStack_c0 != 0) {
    LOCK();
    *(int *)(lStack_c0 + 8) = *(int *)(lStack_c0 + 8) + 1;
    UNLOCK();
  }
  local_50 = fVar3 * 0.01;
  uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_a8,&local_b8);
  uVar7 = FText::Format(local_98,&local_c8,uVar7);
  FText::FText(param_2,uVar7);
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_90 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
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
      plVar5 = local_40 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  plVar5 = (longlong *)puVar8[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_78 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 140fed9a0 FUN_140fed9a0 body=409 status=ok
// SIG undefined FUN_140fed9a0(void)

undefined8 * FUN_140fed9a0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  if ((*(longlong *)param_1[1] != 0) &&
     (cVar6 = FWeakObjectPtr::IsValid(*param_1 + 0x98), cVar6 != '\0')) {
    plVar4 = (longlong *)((undefined8 *)param_1[1])[1];
    local_28 = *(undefined8 *)param_1[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_20 = plVar4;
    uVar7 = FWeakObjectPtr::Get(*param_1 + 0x98);
    cVar6 = FUN_140bca7d0(uVar7,&local_28);
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
    if (cVar6 == '\0') {
      plVar4 = *(longlong **)param_1[1];
      uVar7 = FWeakObjectPtr::Get(*param_1 + 0x98);
      puVar8 = (undefined8 *)(**(code **)(*plVar4 + 8))(plVar4,local_res8);
      cVar6 = FUN_140bcac80(uVar7,*puVar8);
      if (cVar6 == '\0') {
        local_38 = *(undefined8 *)param_1[1];
        local_30 = (longlong *)((undefined8 *)param_1[1])[1];
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        uVar7 = FWeakObjectPtr::Get(*param_1 + 0x98);
        FUN_140bbc950(uVar7,param_2,&local_38);
        plVar4 = local_30;
        if (local_30 == (longlong *)0x0) {
          return param_2;
        }
        LOCK();
        plVar1 = local_30 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 != 1) {
          return param_2;
        }
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 != 1) {
          return param_2;
        }
        (**(code **)(*plVar4 + 8))(plVar4,1);
        return param_2;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140fedb40 FUN_140fedb40 body=770 status=ok
// SIG undefined FUN_140fedb40(void)

void FUN_140fedb40(longlong *param_1)

{
  int *piVar1;
  void *pvVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  void *pvVar10;
  undefined2 *puVar11;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  int local_70;
  int local_6c;
  void *local_68;
  int local_60;
  int local_5c;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  if ((int)param_1[1] < 0) {
    return;
  }
  plVar8 = (longlong *)*param_1;
  pvVar10 = (void *)0x0;
  if (plVar8[0xd9] != 0) {
    if (plVar8[0xda] != 0) {
      piVar1 = (int *)(plVar8[0xda] + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) goto LAB_140fedc0b;
    }
    plVar8 = (longlong *)*param_1;
  }
  if ((int)plVar8[0xcb] == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)plVar8[0xca];
  }
  uVar6 = (**(code **)(*plVar8 + 0x4a8))(plVar8,local_58,puVar11);
  FUN_142ede260(*param_1 + 0x6c0,uVar6);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_50 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
LAB_140fedc0b:
  if ((*(longlong *)(*param_1 + 0x6c8) != 0) &&
     (lVar3 = *(longlong *)(*param_1 + 0x6d0), lVar3 != 0)) {
    piVar1 = (int *)(lVar3 + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      local_88 = (void *)0x0;
      local_80 = 0;
      FString::AppendInt(&local_88,(int)param_1[1]);
      puVar7 = (undefined8 *)FText::ToString(*param_1 + 0x690);
      iVar4 = *(int *)(puVar7 + 1);
      if (iVar4 < 2) {
        local_68 = local_88;
        local_60 = (int)local_80;
        local_5c = local_80._4_4_;
        local_80 = 0;
        local_88 = (void *)0x0;
      }
      else {
        iVar9 = 0;
        if ((int)local_80 != 0) {
          iVar9 = (int)local_80 + -1;
        }
        if ((iVar4 != 0) || (iVar5 = 1, iVar9 == 0)) {
          iVar5 = 0;
        }
        pvVar2 = (void *)*puVar7;
        local_78 = (void *)0x0;
        local_70 = iVar4;
        if ((iVar4 == 0) && (iVar5 + iVar9 == 0)) {
          local_6c = 0;
          local_60 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,iVar4 + iVar5 + iVar9,0);
          pvVar10 = local_78;
          _guard_xfg_dispatch_icall_nop(local_78,pvVar2,(longlong)iVar4 * 2);
          local_60 = local_70;
        }
        pvVar2 = local_88;
        local_68 = pvVar10;
        local_5c = local_6c;
        if (iVar9 != 0) {
          local_70 = local_60 + (uint)(local_60 == 0) + iVar9;
          if (local_6c < local_70) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,local_60);
            local_68 = local_78;
          }
          iVar5 = local_6c;
          iVar4 = local_70;
          pvVar10 = (void *)(((longlong)local_60 - (ulonglong)(local_60 != 0)) * 2 +
                            (longlong)local_68);
          _guard_xfg_dispatch_icall_nop(pvVar10,pvVar2,(longlong)iVar9 * 2);
          *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar10) = 0;
          local_60 = iVar4;
          local_5c = iVar5;
        }
      }
      uVar6 = FText::FromString(local_48,&local_68);
      UMistDebugEntityScreen::InspectEntity(*param_1 + 0x6c0,uVar6,1,0);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_40 + 1;
        lVar3 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
      if (local_68 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free();
      }
    }
  }
  *(undefined4 *)(*param_1 + 0x6bc) = *(undefined4 *)(*param_1 + 0x6b8);
  return;
}



// FUNCTION 140fede50 FUN_140fede50 body=114 status=ok
// SIG undefined FUN_140fede50(void)

void FUN_140fede50(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((*(char *)(*param_1 + 0x838) != '\x02') &&
     (lVar1 = *(longlong *)(*param_1 + 0x808), lVar1 != 0)) {
    lVar3 = FUN_141404840();
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
      FUN_140e58390(lVar1,param_1[1]);
    }
  }
  return;
}



// FUNCTION 140feded0 FUN_140feded0 body=789 status=ok
// SIG undefined FUN_140feded0(void)

void FUN_140feded0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_68 [3];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar4 != '\0') {
    lVar7 = FWeakObjectPtr::Get(&local_res10);
    lVar8 = 0;
    iVar6 = *(int *)(lVar7 + 0xc);
    if (iVar6 < (int)DAT_1469e91c4) {
      uVar11 = iVar6 >> 0x1f & 0xffff;
      uVar5 = iVar6 + uVar11;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar11) * 0x18;
    }
    if (((*(uint *)(lVar8 + 8) & 0x30000000) == 0) &&
       (cVar4 = FWeakObjectPtr::IsValid(param_1 + 2), cVar4 != '\0')) {
      cVar4 = FWeakObjectPtr::IsValid(param_1 + 2);
      if (cVar4 != '\0') {
        lVar8 = *param_1;
        if ((*(char *)(lVar8 + 400) != '\0') &&
           ((*(char *)(lVar8 + 0x1b0) == '\x04' || (*(char *)(lVar8 + 0x1b0) == '\f')))) {
          lVar8 = FWeakObjectPtr::Get(param_1 + 2);
          iVar12 = *(int *)(lVar8 + 0x66c) + -1;
          iVar6 = 0;
          if (-1 < iVar12) {
            iVar6 = iVar12;
          }
          *(int *)(lVar8 + 0x66c) = iVar6;
          lVar8 = *param_1;
        }
        iVar6 = *(int *)(lVar8 + 0x200) + -1;
        lVar8 = (longlong)iVar6;
        if (-1 < iVar6) {
          lVar7 = lVar8 * 0x60;
          do {
            if ((*(char *)(*(longlong *)(*param_1 + 0x1f8) + 0x18 + lVar7) - 4U & 0xf7) == 0) {
              lVar9 = FWeakObjectPtr::Get(param_1 + 2);
              iVar12 = *(int *)(lVar9 + 0x66c) + -1;
              iVar6 = 0;
              if (-1 < iVar12) {
                iVar6 = iVar12;
              }
              *(int *)(lVar9 + 0x66c) = iVar6;
            }
            lVar7 = lVar7 + -0x60;
            lVar8 = lVar8 + -1;
          } while (-1 < lVar8);
        }
      }
      lVar8 = *param_1;
      uVar10 = FUN_1404b03b0();
      FText::operator=(lVar8 + 0x198,uVar10);
      (**(code **)(*(longlong *)(lVar8 + 0x1b8) + 0x10))();
      *(undefined1 *)(lVar8 + 0x1b0) = 0;
      *(undefined8 *)(lVar8 + 0x1e8) = 0;
      *(undefined2 *)(lVar8 + 0x1f1) = 0;
      lVar8 = *param_1;
      iVar6 = *(int *)(lVar8 + 0x200);
      if (iVar6 != 0) {
        plVar13 = (longlong *)(*(longlong *)(lVar8 + 0x1f8) + 8);
        do {
          plVar13[3] = (longlong)&PTR_FUN_1441d26b8;
          plVar3 = (longlong *)*plVar13;
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
              iVar12 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          plVar13 = plVar13 + 0xc;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      *(undefined4 *)(lVar8 + 0x200) = 0;
      if (*(int *)(lVar8 + 0x204) != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeTo(lVar8 + 0x1f8,0);
      }
      local_48 = 0;
      uStack_40 = 0;
      *(undefined1 *)(*param_1 + 0x208) = 0;
      lVar8 = *param_1;
      local_50 = 0;
      *(undefined8 *)(lVar8 + 0x218) = 0;
      *(undefined4 *)(lVar8 + 0x220) = 0;
      *(undefined4 *)(lVar8 + 0x224) = 0;
      *(undefined4 *)(lVar8 + 0x228) = 0;
      *(undefined4 *)(lVar8 + 0x22c) = 0;
      *(undefined4 *)(lVar8 + 0x230) = 0xffffffff;
      *(undefined4 *)(lVar8 + 0x234) = 0;
      *(undefined8 *)(lVar8 + 0x238) = 0;
      *(undefined1 *)(*param_1 + 400) = 0;
      uVar10 = FUN_1404b03b0();
      FUN_141017d50(*param_1,uVar10);
      local_68[0] = 0;
      local_68[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
      FGenericPlatformString::Memcpy(local_68[0],&DAT_14465dea8,10);
      FUN_142088cf0(*param_1,local_68);
      if (local_68[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140fee1f0 FUN_140fee1f0 body=426 status=ok
// SIG undefined FUN_140fee1f0(void)

void FUN_140fee1f0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  lVar2 = FUN_1416f8720((int)param_1[1]);
  if (lVar2 != 0) {
    lVar2 = FUN_1416f8720((int)param_1[1]);
    *(undefined1 *)(lVar2 + 0x330) = 1;
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FText::operator=(lVar2 + 0x350,*param_1 + 0xf50);
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FText::operator=(lVar2 + 0x338,*param_1 + 0xc60);
    uVar3 = FUN_1416f8720((int)param_1[1]);
    UItemViewerScrollSelector::SetNumPages(uVar3,0);
    uVar3 = FUN_1416f8720((int)param_1[1]);
    lVar2 = *param_1;
    iVar1 = *(int *)(lVar2 + 0xc28);
    *(int *)(lVar2 + 0xc28) = iVar1 + 1;
    if (*(int *)(lVar2 + 0xc2c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0xc20,iVar1);
    }
    *(undefined8 *)(*(longlong *)(lVar2 + 0xc20) + (longlong)iVar1 * 8) = uVar3;
    FName::FName(&local_res8,L"OnSlotButtonClicked",1);
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar2 + 0x1b0,*param_1);
    *(undefined8 *)(lVar2 + 0x1b8) = local_res8;
    FName::FName(&local_res8,L"OnSlotButtonFocused",1);
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar2 + 0x1d0,*param_1);
    *(undefined8 *)(lVar2 + 0x1d8) = local_res8;
    FName::FName(&local_res8,L"OnSlotButtonHovered",1);
    lVar2 = FUN_1416f8720((int)param_1[1]);
    FWeakObjectPtr::operator=(lVar2 + 0x210,*param_1);
    *(undefined8 *)(lVar2 + 0x218) = local_res8;
    lVar2 = FUN_1416f8720((int)param_1[1]);
    *(undefined8 *)(lVar2 + 0x3f8) = *(undefined8 *)(*param_1 + 0xf38);
  }
  return;
}



// FUNCTION 140fee3a0 FUN_140fee3a0 body=336 status=ok
// SIG undefined FUN_140fee3a0(void)

/* WARNING: Removing unreachable block (ram,0x000140fee3f9) */

undefined4 FUN_140fee3a0(longlong *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = param_1[1];
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    lVar4 = FUN_14138e2b0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      lVar7 = 0;
    }
  }
  lVar4 = FWeakObjectPtr::Get(*param_1 + 0x58c);
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
    if (bVar3) goto LAB_140fee450;
  }
  lVar4 = 0;
LAB_140fee450:
  if ((lVar7 != 0) && (lVar4 != 0)) {
    FUN_141019c30(*param_1,0);
    lVar5 = *(longlong *)(lVar7 + 0x308);
    if (lVar5 != 0) {
      lVar6 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
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
        FUN_140d02880(lVar4,lVar5);
      }
    }
    plVar2 = *(longlong **)(lVar7 + 0x318);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x278))(plVar2,0);
    }
  }
  LOCK();
  uVar1 = *(undefined4 *)(*param_1 + 0x588);
  *(undefined4 *)(*param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 140fee4f0 FUN_140fee4f0 body=542 status=ok
// SIG undefined FUN_140fee4f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140fee4f0(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FUN_140ff2350(*param_1);
  lVar4 = FWeakObjectPtr::Get(*param_1 + 0x60c);
  if (lVar4 != 0) {
    lVar5 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140fee570;
  }
  lVar4 = 0;
LAB_140fee570:
  lVar5 = *param_1;
  if ((*(longlong *)(lVar5 + 0x6d0) == 0) && (lVar4 != 0)) {
    uVar2 = *(undefined8 *)(lVar4 + 0x90);
    uVar1 = *(undefined4 *)(lVar5 + 0x644);
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)&PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(plVar6 + 1,lVar5);
      plVar6[2] = (longlong)FUN_140ffed70;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar6[4] = lVar4;
      *plVar6 = (longlong)&PTR_FUN_143f4d1b8;
    }
    local_a8 = 0;
    local_a0 = 0;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x30))(plVar6,&local_a8);
    }
    FWeakObjectPtr::operator=(local_98,0);
    local_b0 = 0xbf800000;
    local_b8 = 0;
    local_90 = 0;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_88 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar2,lVar5 + 0x6d0,&local_a8,uVar1);
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
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6,0);
      lVar4 = FMemory::Realloc(plVar6,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
  }
  return;
}



// FUNCTION 140fee710 FUN_140fee710 body=918 status=ok
// SIG undefined FUN_140fee710(void)

void FUN_140fee710(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  PSRWLOCK SRWLock;
  uint uVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined4 local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  longlong local_38;
  longlong local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  longlong local_20;
  
  local_res18 = (undefined4)param_1[1];
  local_res1c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar4 = FWeakObjectPtr::IsValid(&local_res18);
  if (cVar4 != '\0') {
    lVar6 = FWeakObjectPtr::Get(&local_res18);
    lVar7 = 0;
    iVar2 = *(int *)(lVar6 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar10 = iVar2 >> 0x1f & 0xffff;
      uVar5 = iVar2 + uVar10;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18;
    }
    if ((((*(uint *)(lVar7 + 8) & 0x30000000) == 0) && (lVar7 = param_1[2], lVar7 != 0)) &&
       (*(longlong *)(lVar7 + 0x30) != 0)) {
      lVar8 = AXAnimatedUsable::GetPrivateStaticClass();
      for (lVar6 = *(longlong *)(lVar7 + 0x30); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar8) {
          if (*(longlong *)(lVar7 + 0x30) == 0) {
            return;
          }
          FText::FText(local_50);
          lVar7 = param_1[2];
          local_28 = 0x41200000;
          local_38 = 0;
          local_30 = 0;
          local_20 = 0;
          local_24 = 0;
          FText::operator=(local_50,param_1 + 4);
          local_23 = (undefined1)param_1[3];
          local_58 = (undefined4)param_1[7];
          local_20 = param_1[8];
          local_38 = *(longlong *)(param_1[2] + 0x60);
          local_30 = *(longlong *)(param_1[2] + 0x68);
          if ((char)param_1[9] == '\0') {
LAB_140fee98e:
            AcquireSRWLockExclusive((PSRWLOCK)(*param_1 + 0x648));
            lVar6 = *param_1;
            iVar2 = *(int *)(lVar6 + 0x640);
            *(int *)(lVar6 + 0x640) = iVar2 + 1;
            if (*(int *)(lVar6 + 0x644) < iVar2 + 1) {
              TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(lVar6 + 0x638,iVar2);
            }
            plVar11 = (longlong *)((longlong)iVar2 * 0x50 + *(longlong *)(lVar6 + 0x638));
            *plVar11 = lVar7;
            plVar11[1] = 0;
            *(undefined4 *)(plVar11 + 2) = local_58;
            FText::FText(plVar11 + 3,local_50);
            plVar11[6] = local_38;
            plVar11[7] = local_30;
            *(undefined4 *)(plVar11 + 8) = local_28;
            *(undefined1 *)((longlong)plVar11 + 0x44) = local_24;
            *(undefined1 *)((longlong)plVar11 + 0x45) = local_23;
            plVar11[9] = local_20;
            local_res10[0] = 0;
            FUN_140fe4850(*(undefined8 *)(*param_1 + 0x638),(longlong)*(int *)(*param_1 + 0x640),
                          local_res8[0],local_res10);
            SRWLock = (PSRWLOCK)(*param_1 + 0x648);
          }
          else {
            FUN_140eccbe0(*param_1);
            cVar4 = FWeakObjectPtr::IsValid(*param_1 + 0x5d0);
            if (cVar4 == '\0') {
LAB_140fee8ad:
              bVar3 = false;
              if (*(char *)((longlong)param_1 + 0x49) != '\0') goto LAB_140feea5b;
              local_58 = 0x7fffffff;
            }
            else {
              uVar9 = FWeakObjectPtr::Get(*param_1 + 0x5d0);
              cVar4 = FUN_142ebe1f0(uVar9,*param_1);
              if (cVar4 == '\0') goto LAB_140fee8ad;
              bVar3 = true;
            }
            if (((char)param_1[9] == '\0') || (!bVar3)) goto LAB_140fee98e;
            AcquireSRWLockExclusive((PSRWLOCK)(*param_1 + 0x6a0));
            lVar6 = *param_1;
            if (*(char *)(lVar6 + 0x694) != '\0') {
              FUN_140ff4330(lVar6,lVar6 + 0x650);
              lVar6 = *param_1;
            }
            *(longlong *)(lVar6 + 0x650) = lVar7;
            *(undefined8 *)(lVar6 + 0x658) = 0;
            *(undefined4 *)(lVar6 + 0x660) = local_58;
            FText::operator=(lVar6 + 0x668,local_50);
            *(longlong *)(lVar6 + 0x680) = local_38;
            *(longlong *)(lVar6 + 0x688) = local_30;
            *(undefined4 *)(lVar6 + 0x690) = local_28;
            *(undefined1 *)(lVar6 + 0x694) = local_24;
            *(undefined1 *)(lVar6 + 0x695) = local_23;
            *(longlong *)(lVar6 + 0x698) = local_20;
            FUN_140ff1150(*param_1,*param_1 + 0x650);
            SRWLock = (PSRWLOCK)(*param_1 + 0x6a0);
          }
          ReleaseSRWLockExclusive(SRWLock);
LAB_140feea5b:
          if (local_48 == (longlong *)0x0) {
            return;
          }
          LOCK();
          plVar11 = local_48 + 1;
          lVar7 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar7 != 1) {
            return;
          }
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 != 1) {
            return;
          }
          (**(code **)(*local_48 + 8))(local_48,1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140feeab0 FUN_140feeab0 body=442 status=ok
// SIG undefined FUN_140feeab0(void)

void FUN_140feeab0(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    lVar6 = 0;
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar7;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
    }
    if ((*(uint *)(lVar6 + 8) & 0x30000000) == 0) {
      lVar6 = *param_1;
      if (*(char *)(lVar6 + 0x1b0) != '\0') {
        *(char *)(lVar6 + 0x208) = *(char *)(lVar6 + 0x1b0);
        lVar6 = *param_1;
        *(undefined8 *)(lVar6 + 0x218) = *(undefined8 *)(lVar6 + 0x1c0);
        *(undefined8 *)(lVar6 + 0x220) = *(undefined8 *)(lVar6 + 0x1c8);
        *(undefined8 *)(lVar6 + 0x228) = *(undefined8 *)(lVar6 + 0x1d0);
        *(undefined4 *)(lVar6 + 0x230) = *(undefined4 *)(lVar6 + 0x1d8);
        *(undefined4 *)(lVar6 + 0x234) = *(undefined4 *)(lVar6 + 0x1dc);
        *(undefined8 *)(lVar6 + 0x238) = *(undefined8 *)(lVar6 + 0x1e0);
        return;
      }
      if (0 < *(int *)(lVar6 + 0x200)) {
        *(undefined1 *)(lVar6 + 0x208) =
             *(undefined1 *)
              ((longlong)*(int *)(lVar6 + 0x200) * 0x60 + -0x48 + *(longlong *)(lVar6 + 0x1f8));
        lVar6 = *param_1;
        lVar5 = (longlong)*(int *)(lVar6 + 0x200) * 0x60 + *(longlong *)(lVar6 + 0x1f8);
        *(undefined8 *)(lVar6 + 0x218) = *(undefined8 *)(lVar5 + -0x38);
        uVar2 = *(undefined8 *)(lVar5 + -0x28);
        *(undefined8 *)(lVar6 + 0x220) = *(undefined8 *)(lVar5 + -0x30);
        *(undefined8 *)(lVar6 + 0x228) = uVar2;
        *(undefined4 *)(lVar6 + 0x230) = *(undefined4 *)(lVar5 + -0x20);
        *(undefined4 *)(lVar6 + 0x234) = *(undefined4 *)(lVar5 + -0x1c);
        *(undefined8 *)(lVar6 + 0x238) = *(undefined8 *)(lVar5 + -0x18);
        return;
      }
      *(undefined1 *)(lVar6 + 0x208) = 0;
      lVar6 = *param_1;
      *(undefined8 *)(lVar6 + 0x218) = 0;
      *(undefined8 *)(lVar6 + 0x220) = 0;
      *(undefined8 *)(lVar6 + 0x228) = 0;
      *(undefined4 *)(lVar6 + 0x230) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0x234) = 0;
      *(undefined8 *)(lVar6 + 0x238) = 0;
    }
  }
  return;
}



// FUNCTION 140feec70 FUN_140feec70 body=654 status=ok
// SIG undefined FUN_140feec70(void)

void FUN_140feec70(longlong *param_1)

{
  char *pcVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0;
  undefined **local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined2 local_7f;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined *local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar6 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar6 != '\0') {
    lVar8 = FWeakObjectPtr::Get(&local_res10);
    lVar10 = 0;
    iVar4 = *(int *)(lVar8 + 0xc);
    lVar8 = lVar10;
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar12 = iVar4 >> 0x1f & 0xffff;
      uVar7 = iVar4 + uVar12;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
              (longlong)(int)((uVar7 & 0xffff) - uVar12) * 0x18;
    }
    if ((*(uint *)(lVar8 + 8) & 0x30000000) == 0) {
      uVar9 = FUN_1404b03b0();
      FText::FText(local_d8,uVar9);
      local_c0 = 0;
      uVar14 = 0;
      local_98 = 0xffffffff;
      local_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = (undefined **)&DAT_1441d2800;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      uVar9 = FUN_1404b03b0();
      FText::operator=(local_d8,uVar9);
      (*(code *)local_b8[2])(&local_b8);
      local_c0 = 0;
      local_88 = 0;
      local_7f = 0;
      FText::operator=(local_d8,*param_1 + 0x198);
      cVar6 = FUN_142f63b10(*param_1 + 0x210);
      if (cVar6 == '\0') {
        local_70 = 0;
        puVar15 = &local_68;
        local_68 = 0;
        local_60 = 0;
        local_58 = 0xffffffff;
        uVar13 = 0xffffffff;
        local_54 = 0;
        local_78 = &DAT_1441d2800;
        local_50 = 0;
        lVar8 = *param_1;
        local_90 = lVar10;
      }
      else {
        lVar8 = *param_1;
        puVar15 = &local_38;
        local_48 = &DAT_1441d2800;
        lVar10 = *(longlong *)(lVar8 + 0x218);
        local_20 = *(longlong *)(lVar8 + 0x238);
        uVar13 = *(undefined4 *)(lVar8 + 0x230);
        uVar14 = *(undefined4 *)(lVar8 + 0x234);
        local_38 = *(undefined8 *)(lVar8 + 0x220);
        uStack_30 = *(undefined8 *)(lVar8 + 0x228);
        local_40 = lVar10;
        local_90 = local_20;
        local_28 = uVar13;
        local_24 = uVar14;
      }
      local_a8 = *puVar15;
      uStack_a0 = puVar15[1];
      local_98 = CONCAT44(uVar14,uVar13);
      lVar11 = *(longlong *)(lVar8 + 0x1f8);
      bVar5 = (byte)(*(char *)(lVar8 + 0x1b0) - 10U) < 2;
      lVar16 = (longlong)*(int *)(lVar8 + 0x200) * 0x60 + lVar11;
      if (lVar11 != lVar16) {
        do {
          pcVar1 = (char *)(lVar11 + 0x18);
          lVar11 = lVar11 + 0x60;
          bVar5 = (bool)(bVar5 | (byte)(*pcVar1 - 10U) < 2);
        } while (lVar11 != lVar16);
        lVar8 = *param_1;
      }
      local_c0 = 4;
      if (bVar5) {
        local_c0 = 0xc;
      }
      local_b0 = lVar10;
      FUN_141011d90(lVar8,local_d8);
      local_b8 = &PTR_FUN_1441d26b8;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_d0 + 1;
        lVar10 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar3 = (int *)((longlong)local_d0 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_d0 + 8))(local_d0,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140feef00 FUN_140feef00 body=238 status=ok
// SIG undefined FUN_140feef00(void)

void FUN_140feef00(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  FWeakObjectPtr::operator=(local_28,0);
  FWeakObjectPtr::operator=(local_20,0);
  FWeakObjectPtr::operator=(local_18,0);
  FWeakObjectPtr::operator=(local_10,0);
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x618) == 7) {
    FWeakObjectPtr::operator=(local_18,*(undefined8 *)(lVar1 + 0xf48));
    puVar3 = local_10;
    uVar2 = *(undefined8 *)(*param_1 + 0xf38);
  }
  else {
    FWeakObjectPtr::operator=(local_28,*(undefined8 *)(lVar1 + 0xf38));
    FWeakObjectPtr::operator=(local_18,*(undefined8 *)(*param_1 + 0xf28));
    puVar3 = local_20;
    uVar2 = *(undefined8 *)(*param_1 + 0xf48);
  }
  FWeakObjectPtr::operator=(puVar3,uVar2);
  lVar4 = *param_1;
  lVar1 = *(longlong *)(lVar4 + 0xf40);
  local_38 = lVar1;
  if (lVar1 == 0) {
    local_30 = 0;
  }
  else {
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
    lVar4 = *param_1;
  }
  FUN_142ecfd10(lVar4,&local_38,local_28);
  return;
}



// FUNCTION 140feeff0 FUN_140feeff0 body=987 status=ok
// SIG undefined FUN_140feeff0(void)

void FUN_140feeff0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  uint uVar14;
  longlong *local_e8;
  ulonglong local_e0;
  longlong *local_d8;
  ulonglong local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8 [2];
  longlong local_98 [2];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  
  plVar7 = (longlong *)0x0;
  plVar12 = plVar7;
  plVar2 = plVar7;
  if (*(longlong *)(*param_1 + 0x7f8) != 0) {
    local_b8 = 0;
    local_b0 = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    FGenericPlatformString::Memcpy(local_b8,L"missionTaskLine.timer",0x2c);
    local_c8 = (longlong *)0x0;
    local_c0 = 0;
    plVar2 = (longlong *)FUN_140ecc7d0(*(undefined8 *)(*param_1 + 0x7f8),&local_b8,0,6,&local_c8);
    plVar12 = (longlong *)0x3;
  }
  if (((ulonglong)plVar12 & 2) != 0) {
    plVar12 = (longlong *)(ulonglong)((uint)plVar12 & 0xfffffffd);
    plVar10 = local_c8;
    for (iVar8 = (int)local_c0; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
  }
  if ((((ulonglong)plVar12 & 1) != 0) && (local_b8 != 0)) {
    FMemory::Free();
  }
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  uVar14 = *(uint *)(param_1 + 1);
  plVar12 = plVar7;
  if (0x3b < (int)uVar14) {
    plVar12 = (longlong *)(ulonglong)(uVar14 / 0x3c);
    uVar14 = uVar14 % 0x3c;
  }
  if (*(char *)(*param_1 + 0x814) == '\0') {
    local_d8 = (longlong *)0x0;
    local_d0 = 0;
    pwVar13 = L"%i:0%i %s";
    if (9 < (int)uVar14) {
      pwVar13 = L"%i:%i %s";
    }
    puVar11 = &DAT_143f3eda8;
    if (*pwVar13 == L'\0') {
LAB_140fef2ac:
      plVar7 = (longlong *)&DAT_143f3eda8;
    }
    else {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (pwVar13[lVar6] != L'\0');
      uVar5 = (int)lVar6 + 1;
      local_d0 = (ulonglong)uVar5;
      uVar9 = uVar5;
      if (0 < (int)uVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
        uVar9 = (uint)local_d0;
      }
      plVar7 = local_d8;
      FGenericPlatformString::Memcpy(local_d8,pwVar13,(longlong)(int)uVar5 * 2);
      if (uVar9 == 0) goto LAB_140fef2ac;
    }
    uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"Remaining",L"MissionTrackerHUDWidget",L"MissionTimeRemaining");
    puVar4 = (undefined8 *)FText::ToString(uVar3);
    if (*(int *)(puVar4 + 1) != 0) {
      puVar11 = (undefined2 *)*puVar4;
    }
    FString::PrintfImpl(local_98,plVar7,plVar12,uVar14,puVar11);
    lVar6 = *plVar2;
    uVar3 = FText::FromString(local_70,local_98);
    (**(code **)(lVar6 + 0x2b0))(plVar2,uVar3,1,0);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_68 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
    if (local_98[0] != 0) {
      FMemory::Free();
    }
    plVar7 = local_d8;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_50 + 1;
      lVar6 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar7 = local_d8;
        if (iVar8 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
          plVar7 = local_d8;
        }
      }
    }
    goto joined_r0x000140fef399;
  }
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  pwVar13 = L"%i:0%i";
  if (9 < (int)uVar14) {
    pwVar13 = L"%i:%i";
  }
  if (*pwVar13 == L'\0') {
LAB_140fef1a7:
    plVar10 = (longlong *)&DAT_143f3eda8;
  }
  else {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (pwVar13[lVar6] != L'\0');
    uVar5 = (int)lVar6 + 1;
    local_e0 = (ulonglong)uVar5;
    uVar9 = uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
      uVar9 = (uint)local_e0;
    }
    plVar7 = local_e8;
    FGenericPlatformString::Memcpy(local_e8,pwVar13,(longlong)(int)uVar5 * 2);
    plVar10 = plVar7;
    if (uVar9 == 0) goto LAB_140fef1a7;
  }
  FString::PrintfImpl(local_a8,plVar10,plVar12,uVar14);
  lVar6 = *plVar2;
  uVar3 = FText::FromString(local_88,local_a8);
  (**(code **)(lVar6 + 0x2b0))(plVar2,uVar3,1,0);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_80 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    plVar7 = local_e8;
    if ((int)lVar6 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar7 = local_e8;
      if (iVar8 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
        plVar7 = local_e8;
      }
    }
  }
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
joined_r0x000140fef399:
  if (plVar7 != (longlong *)0x0) {
    FMemory::Free(plVar7);
  }
  return;
}



// FUNCTION 140fef3d0 FUN_140fef3d0 body=1130 status=ok
// SIG undefined FUN_140fef3d0(void)

void FUN_140fef3d0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  
  plVar7 = (longlong *)0x0;
  *(float *)(*param_1 + 0x80c) = (float)*(uint *)(param_1 + 1);
  *(float *)(*param_1 + 0x810) = (float)*(uint *)((longlong)param_1 + 0xc);
  if (param_1[2] != 0) {
    lVar3 = FUN_142f71d80();
    lVar5 = param_1[2];
joined_r0x000140fef42c:
    if (lVar5 != 0) {
      if (lVar5 != lVar3) goto code_r0x000140fef439;
      if (param_1[2] != 0) {
        plVar4 = (longlong *)FUN_142f71d80();
        for (plVar9 = (longlong *)param_1[2];
            (plVar10 = plVar7, plVar9 != (longlong *)0x0 &&
            (plVar10 = (longlong *)param_1[2], plVar9 != plVar4)); plVar9 = (longlong *)plVar9[6]) {
        }
        lVar5 = plVar10[0x1f];
        if (lVar5 == 0) {
          (**(code **)(*plVar10 + 0x368))();
          lVar5 = plVar10[0x1f];
          if (lVar5 != 0) goto LAB_140fef539;
          goto LAB_140fef442;
        }
LAB_140fef539:
        lVar3 = FUN_142f71d80();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((!bVar1) || (*(char *)(lVar5 + 0x181) == '\0')) goto LAB_140fef442;
        uVar6 = 1;
        goto LAB_140fef444;
      }
    }
  }
LAB_140fef442:
  uVar6 = 0;
LAB_140fef444:
  *(undefined1 *)(*param_1 + 0x814) = uVar6;
  lVar5 = *param_1;
  plVar9 = plVar7;
  plVar4 = plVar7;
  if (0 < *(int *)(lVar5 + 0x720)) {
    do {
      iVar8 = (int)plVar9;
      lVar3 = *(longlong *)((longlong)plVar4 + *(longlong *)(lVar5 + 0x718));
      if ((lVar3 != 0) && (cVar2 = FUN_142f63b10(lVar3 + 0x1b8), cVar2 == '\0')) {
        if ((*(char *)(lVar3 + 400) != '\0') || (bVar1 = false, *(int *)(lVar3 + 0x200) != 0)) {
          bVar1 = true;
        }
        if (!bVar1) {
          if ((iVar8 < 0) || (lVar5 = *param_1, *(int *)(lVar5 + 0x720) <= iVar8))
          goto LAB_140fef4be;
          bVar1 = true;
          goto LAB_140fef4c3;
        }
      }
      plVar9 = (longlong *)(ulonglong)(iVar8 + 1U);
      plVar4 = plVar4 + 1;
    } while ((int)(iVar8 + 1U) < *(int *)(lVar5 + 0x720));
  }
  iVar8 = -1;
LAB_140fef4be:
  lVar5 = *param_1;
  bVar1 = false;
LAB_140fef4c3:
  plVar9 = plVar7;
  if (bVar1) {
    lVar5 = *param_1;
    plVar9 = *(longlong **)(*(longlong *)(lVar5 + 0x718) + (longlong)iVar8 * 8);
  }
  *(longlong **)(lVar5 + 0x7f8) = plVar9;
  lVar5 = *param_1;
  if (*(longlong *)(lVar5 + 0x7f8) != 0) {
    local_48 = 0;
    local_40 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"missionTaskLine",0x20);
    local_58 = (longlong *)0x0;
    local_50 = 0;
    lVar5 = FUN_140ecbdf0(*(undefined8 *)(*param_1 + 0x7f8),&local_48,0,6,&local_58);
    plVar9 = local_58;
    for (iVar11 = (int)local_50; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (lVar5 != 0) {
      local_38 = (longlong *)0x0;
      local_30 = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      FGenericPlatformString::Memcpy(local_38,L"timer",0xc);
      FUN_142088cf0(lVar5,&local_38);
      if (local_38 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    FUN_14101ace0(*param_1,(int)*(float *)(*param_1 + 0x80c));
    lVar5 = *param_1;
  }
  if ((iVar8 + 1 < 0) || (*(int *)(lVar5 + 0x720) <= iVar8 + 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    plVar7 = *(longlong **)(*(longlong *)(lVar5 + 0x718) + 8 + (longlong)iVar8 * 8);
  }
  *(longlong **)(lVar5 + 0x800) = plVar7;
  if ((*(longlong *)(*param_1 + 0x800) != 0) &&
     (cVar2 = FUN_142f63b10(*(longlong *)(*param_1 + 0x800) + 0x1b8), cVar2 == '\0')) {
    local_48 = 0;
    local_40 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"missionTaskLine",0x20);
    local_38 = (longlong *)0x0;
    local_30 = 0;
    lVar5 = FUN_140ecbdf0(*(undefined8 *)(*param_1 + 0x800),&local_48,0,6,&local_38);
    plVar7 = local_38;
    for (iVar8 = (int)local_30; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (lVar5 != 0) {
      local_58 = (longlong *)0x0;
      local_50 = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      FGenericPlatformString::Memcpy(local_58,&DAT_14465dd38,8);
      FUN_142088cf0(lVar5,&local_58);
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    FUN_14101abf0(*param_1,0x3f800000);
  }
  return;
code_r0x000140fef439:
  lVar5 = *(longlong *)(lVar5 + 0x30);
  goto joined_r0x000140fef42c;
}



// FUNCTION 140fef840 FUN_140fef840 body=1325 status=ok
// SIG undefined FUN_140fef840(void)

void FUN_140fef840(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  int *piVar11;
  int *piVar12;
  longlong *plVar13;
  wchar_t *pwVar14;
  longlong local_res10;
  int local_48;
  int local_44;
  longlong local_40;
  
  *(undefined1 *)(*param_1 + 0x6b9) = 0;
  plVar6 = (longlong *)FWeakObjectPtr::Get(*param_1 + 0x5d8);
  pwVar14 = (wchar_t *)0x0;
  if (plVar6 != (longlong *)0x0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnTextChatOptionChanged",L"::");
      pwVar10 = pwVar14;
      while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar10 = pwVar3;
      }
      FName::FName(&local_res10,pwVar10 + 2,1);
      lVar9 = local_res10;
      lVar7 = *param_1;
      plVar13 = plVar6 + 0x27d;
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      FWeakObjectPtr::operator=(&local_48,lVar7);
      local_40 = lVar9;
      if ((lVar9 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_48), lVar7 != 0)) {
        UObject::FindFunction(lVar7,local_40);
      }
      piVar11 = (int *)*plVar13;
      lVar7 = plVar6[0x27e];
      for (piVar12 = piVar11; piVar12 != piVar11 + (longlong)(int)lVar7 * 4; piVar12 = piVar12 + 4)
      {
        if (((*piVar12 == local_48) && (piVar12[1] == local_44)) ||
           ((cVar5 = FWeakObjectPtr::IsValid(piVar12), cVar5 == '\0' &&
            (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((bVar2) && (*(longlong *)(piVar12 + 2) == local_40)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          if ((int)((longlong)piVar12 - (longlong)piVar11 >> 4) != -1) goto LAB_140fefa09;
          break;
        }
      }
      iVar1 = (int)plVar6[0x27e];
      lVar7 = (longlong)iVar1;
      *(int *)(plVar6 + 0x27e) = iVar1 + 1;
      if (*(int *)((longlong)plVar6 + 0x13f4) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar1);
      }
      lVar9 = *plVar13;
      *(int *)(lVar9 + lVar7 * 0x10) = local_48;
      *(int *)(lVar9 + 4 + lVar7 * 0x10) = local_44;
      *(longlong *)(lVar9 + 8 + lVar7 * 0x10) = local_40;
LAB_140fefa09:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar13);
      lVar7 = (**(code **)(*plVar6 + 0xfa8))(plVar6);
      if (lVar7 != 0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnMenuActivated",L"::");
        pwVar10 = pwVar14;
        while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
          pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar10 = pwVar3;
        }
        FName::FName(&local_res10,pwVar10 + 2,1);
        lVar4 = local_res10;
        lVar9 = *param_1;
        plVar13 = (longlong *)(lVar7 + 0x138);
        FWeakObjectPtr::operator=(&local_48,0);
        local_40 = 0;
        FWeakObjectPtr::operator=(&local_48,lVar9);
        local_40 = lVar4;
        if ((lVar4 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_48), lVar9 != 0)) {
          UObject::FindFunction(lVar9,local_40);
        }
        piVar11 = (int *)*plVar13;
        iVar1 = *(int *)(lVar7 + 0x140);
        for (piVar12 = piVar11; piVar12 != piVar11 + (longlong)iVar1 * 4; piVar12 = piVar12 + 4) {
          if (((*piVar12 == local_48) && (piVar12[1] == local_44)) ||
             ((cVar5 = FWeakObjectPtr::IsValid(piVar12), cVar5 == '\0' &&
              (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if ((bVar2) && (*(longlong *)(piVar12 + 2) == local_40)) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (bVar2) {
            if ((int)((longlong)piVar12 - (longlong)piVar11 >> 4) != -1) goto LAB_140fefb79;
            break;
          }
        }
        iVar1 = *(int *)(lVar7 + 0x140);
        lVar9 = (longlong)iVar1;
        *(int *)(lVar7 + 0x140) = iVar1 + 1;
        if (*(int *)(lVar7 + 0x144) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar1);
        }
        lVar7 = *plVar13;
        *(int *)(lVar7 + lVar9 * 0x10) = local_48;
        *(int *)(lVar7 + 4 + lVar9 * 0x10) = local_44;
        *(longlong *)(lVar7 + 8 + lVar9 * 0x10) = local_40;
LAB_140fefb79:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar13);
      }
      lVar7 = FUN_140cff230(plVar6);
      if (lVar7 != 0) {
        *(undefined1 *)(*param_1 + 0x6b9) = *(undefined1 *)(lVar7 + 0x90);
      }
    }
  }
  lVar7 = FWeakObjectPtr::Get(*param_1 + 0x60c);
  if (lVar7 != 0) {
    lVar9 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar7 = *(longlong *)(lVar7 + 0x5b8), lVar7 != 0)) {
      pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnTextLogChanged",L"::");
      while (pwVar8 = pwVar10, pwVar8 != (wchar_t *)0x0) {
        pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar8 + 1,L"::");
        pwVar14 = pwVar8;
      }
      FName::FName(&local_res10,pwVar14 + 2,1);
      lVar9 = *param_1;
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      FWeakObjectPtr::operator=(&local_48,lVar9);
      local_40 = local_res10;
      if ((local_res10 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_48), lVar9 != 0)) {
        UObject::FindFunction(lVar9,local_40);
      }
      piVar11 = *(int **)(lVar7 + 0x28);
      iVar1 = *(int *)(lVar7 + 0x30);
      for (piVar12 = piVar11; piVar12 != piVar11 + (longlong)iVar1 * 4; piVar12 = piVar12 + 4) {
        if (((*piVar12 == local_48) && (piVar12[1] == local_44)) ||
           ((cVar5 = FWeakObjectPtr::IsValid(piVar12), cVar5 == '\0' &&
            (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((bVar2) && (*(longlong *)(piVar12 + 2) == local_40)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          if ((int)((longlong)piVar12 - (longlong)piVar11 >> 4) != -1) goto LAB_140fefd55;
          break;
        }
      }
      iVar1 = *(int *)(lVar7 + 0x30);
      *(int *)(lVar7 + 0x30) = iVar1 + 1;
      if (*(int *)(lVar7 + 0x34) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar7 + 0x28,iVar1);
      }
      piVar11 = (int *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar7 + 0x28));
      *piVar11 = local_48;
      piVar11[1] = local_44;
      *(longlong *)(piVar11 + 2) = local_40;
LAB_140fefd55:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(lVar7 + 0x28);
    }
  }
  return;
}



// FUNCTION 140fefdc0 FUN_140fefdc0 body=80 status=ok
// SIG undefined FUN_140fefdc0(void)

undefined8 * FUN_140fefdc0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FUN_1416f8340(*(undefined4 *)(param_1 + 1));
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140fefe10 FUN_140fefe10 body=134 status=ok
// SIG undefined FUN_140fefe10(void)

undefined8 * FUN_140fefe10(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 140fefea0 FUN_140fefea0 body=72 status=ok
// SIG undefined FUN_140fefea0(void)

undefined8 * FUN_140fefea0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 140fefef0 FUN_140fefef0 body=145 status=ok
// SIG undefined FUN_140fefef0(void)

undefined8 * FUN_140fefef0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  param_1[8] = &PTR_FUN_1441d26b8;
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
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 140feff90 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE::Core::Private::Function::
TFunction_CopyableOwnedObject<``FOnlineSessionEOS::OnLobbyInviteReceived'::`2'::<lambda_1>::operator()'::`15'::<lambda_1>,1>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_140fe6360(param_1 + 1);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140feffe0 FUN_140feffe0 body=54 status=ok
// SIG undefined FUN_140feffe0(void)

undefined8 * FUN_140feffe0(undefined8 *param_1,ulonglong param_2)

{
  param_1[4] = &PTR_FUN_1441d26b8;
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 140ff0020 FUN_140ff0020 body=134 status=ok
// SIG undefined FUN_140ff0020(void)

undefined8 * FUN_140ff0020(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[6];
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
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 140ff00b0 FUN_140ff00b0 body=43 status=ok
// SIG undefined FUN_140ff00b0(void)

undefined8 * FUN_140ff00b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14465db78;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 140ff00e0 FUN_140ff00e0 body=87 status=ok
// SIG undefined FUN_140ff00e0(void)

longlong FUN_140ff00e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x720) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x680) = &PTR_FUN_14465db78;
  FUN_140e9c5f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x790);
  }
  return param_1;
}



// FUNCTION 140ff0140 FUN_140ff0140 body=52 status=ok
// SIG undefined FUN_140ff0140(void)

undefined8 FUN_140ff0140(undefined8 param_1,ulonglong param_2)

{
  FUN_140fe6650();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc30);
  }
  return param_1;
}



// FUNCTION 140ff0180 FUN_140ff0180 body=729 status=ok
// SIG undefined FUN_140ff0180(void)

longlong FUN_140ff0180(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  undefined4 local_res8 [2];
  undefined4 local_res18 [4];
  longlong local_48 [2];
  undefined1 local_38 [16];
  
  bVar10 = false;
  local_res8[0] = 0;
  if (*(longlong *)(param_1 + 0x6f0) == 0) {
LAB_140ff023a:
    lVar6 = 0;
  }
  else {
    local_48[0] = 0;
    local_48[1] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Memcpy(local_48[0],L"SelectionItem",0x1c);
    uVar2 = *(undefined8 *)(param_1 + 0x6f0);
    bVar10 = true;
    uVar5 = FUN_14138e2b0();
    lVar6 = FUN_142ebcee0(uVar2,local_48,uVar5,0);
    if (lVar6 == 0) goto LAB_140ff023a;
    lVar7 = FUN_14138e2b0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140ff023a;
  }
  if ((bVar10) && (local_48[0] != 0)) {
    FMemory::Free();
  }
  if ((lVar6 != 0) && (lVar7 = *(longlong *)(lVar6 + 0x360), lVar7 != 0)) {
    iVar1 = *(int *)(param_1 + 0xc10);
    *(int *)(param_1 + 0xc10) = iVar1 + 1;
    if (*(int *)(param_1 + 0xc14) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xc08,iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0xc08) + (longlong)iVar1 * 8) = lVar7;
    *(undefined8 *)(lVar6 + 0x360) = 0;
  }
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar7 != 0) {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_140ff02f6;
  }
  lVar7 = 0;
LAB_140ff02f6:
  if (((lVar6 != 0) && (lVar7 != 0)) && (param_2 != 0)) {
    uVar4 = 1;
    lVar8 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
         ) != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) {
      uVar4 = FUN_140d01840(lVar7,param_2);
    }
    else {
      lVar8 = FUN_14142e810();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if (bVar10) {
        uVar4 = FUN_140d01cd0(lVar7,param_2);
      }
    }
    FUN_142ed2600(lVar6,*(undefined1 *)(param_1 + 0xb90));
    FUN_141014ae0(lVar6,param_2 + 0x30);
    if (*(longlong *)(lVar6 + 0x338) != 0) {
      local_res18[0] = FUN_142d1beb0(param_2);
      local_res8[0] = CONCAT31(local_res8[0]._1_3_,1);
      FUN_1410148e0(lVar6,local_res8,local_res18);
    }
    (**(code **)(*(longlong *)(lVar6 + 0x170) + 0x38))((longlong *)(lVar6 + 0x170),1);
    plVar9 = *(longlong **)(lVar6 + 0x318);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x278))(plVar9,uVar4);
    }
    plVar9 = (longlong *)FString::FString(local_38,param_1 + 0xbc8);
    FString::operator=(lVar6 + 0x350,plVar9);
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    *(longlong *)(lVar6 + 0x308) = param_2;
  }
  return lVar6;
}



// FUNCTION 140ff0460 FUN_140ff0460 body=548 status=ok
// SIG undefined FUN_140ff0460(void)

longlong FUN_140ff0460(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  uint7 uVar11;
  bool bVar12;
  longlong local_18 [2];
  
  bVar12 = false;
  if (*(longlong *)(param_1 + 0x6f0) == 0) {
LAB_140ff0520:
    lVar6 = 0;
  }
  else {
    local_18[0] = 0;
    local_18[1] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"SelectionItem",0x1c);
    uVar1 = *(undefined8 *)(param_1 + 0x6f0);
    bVar12 = true;
    uVar5 = FUN_14138e2b0();
    lVar6 = FUN_142ebcee0(uVar1,local_18,uVar5,0);
    if (lVar6 == 0) goto LAB_140ff0520;
    lVar7 = FUN_14138e2b0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140ff0520;
  }
  if ((bVar12) && (local_18[0] != 0)) {
    FMemory::Free();
  }
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x594);
  if (lVar7 == 0) {
LAB_140ff057d:
    lVar7 = 0;
  }
  else {
    lVar8 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (!bVar12) goto LAB_140ff057d;
  }
  lVar8 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar8 != 0) {
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_140ff05cb;
  }
  lVar8 = 0;
LAB_140ff05cb:
  if (((lVar6 != 0) && (lVar7 != 0)) && (lVar8 != 0)) {
    FUN_142ed2600(lVar6,3);
    plVar10 = *(longlong **)(lVar7 + 0x26d0);
    plVar2 = plVar10 + *(int *)(lVar7 + 0x26d8);
    uVar11 = (uint7)((ulonglong)plVar2 >> 8);
    for (; plVar10 != plVar2; plVar10 = plVar10 + 1) {
      if (*plVar10 == param_2) {
        lVar7 = CONCAT71(uVar11,1);
        goto LAB_140ff0617;
      }
    }
    lVar7 = (ulonglong)uVar11 << 8;
LAB_140ff0617:
    FUN_142ed2820(lVar6,lVar7,1);
    FUN_141014ae0(lVar6,param_2 + 0x30);
    (**(code **)(*(longlong *)(lVar6 + 0x170) + 0x38))((longlong *)(lVar6 + 0x170),1);
    uVar4 = FUN_140d01840(lVar8,param_2);
    plVar2 = *(longlong **)(lVar6 + 0x318);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x278))(plVar2,uVar4);
    }
    *(longlong *)(lVar6 + 0x308) = param_2;
  }
  return lVar6;
}



// FUNCTION 140ff0690 FUN_140ff0690 body=390 status=ok
// SIG undefined FUN_140ff0690(void)

void FUN_140ff0690(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  
  if (0 < *(int *)(param_1 + 0x38)) {
    if (*(int *)(param_1 + 0x48) < *(int *)(param_1 + 0x38)) {
      iVar4 = *(int *)(param_1 + 0x48);
      *(int *)(param_1 + 0x48) = iVar4 + 1;
      if (*(int *)(param_1 + 0x4c) < iVar4 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 0x40,iVar4);
      }
      puVar5 = (undefined8 *)((longlong)iVar4 * 0x38 + *(longlong *)(param_1 + 0x40));
      *puVar5 = *param_2;
      puVar5[1] = param_2[1];
      param_2[1] = 0;
      *param_2 = 0;
      puVar5[2] = param_2[2];
      puVar5[3] = param_2[3];
      param_2[3] = 0;
      param_2[2] = 0;
      puVar5[4] = 0;
      puVar5[4] = param_2[4];
      param_2[4] = 0;
      *(undefined4 *)(puVar5 + 5) = *(undefined4 *)(param_2 + 5);
      *(undefined4 *)((longlong)puVar5 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      param_2[5] = 0;
      *(undefined1 *)(puVar5 + 6) = *(undefined1 *)(param_2 + 6);
      return;
    }
    iVar4 = *(int *)(param_1 + 0x50);
    if ((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 0x48))) {
      puVar5 = (undefined8 *)((longlong)iVar4 * 0x38 + *(longlong *)(param_1 + 0x40));
      if (puVar5 != param_2) {
        *puVar5 = *param_2;
        *param_2 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(puVar5 + 1,param_2 + 1);
      }
      puVar1 = param_2 + 2;
      if (puVar5 + 2 != puVar1) {
        puVar5[2] = *puVar1;
        *puVar1 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(puVar5 + 3,param_2 + 3);
      }
      plVar2 = param_2 + 4;
      plVar3 = puVar5 + 4;
      if (plVar3 != plVar2) {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        *plVar3 = *plVar2;
        *plVar2 = 0;
        *(undefined4 *)(puVar5 + 5) = *(undefined4 *)(param_2 + 5);
        *(undefined4 *)((longlong)puVar5 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
        param_2[5] = 0;
      }
      *(undefined1 *)(puVar5 + 6) = *(undefined1 *)(param_2 + 6);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      iVar4 = *(int *)(param_1 + 0x50);
      if (*(int *)(param_1 + 0x38) <= iVar4) {
        iVar4 = 0;
      }
      *(int *)(param_1 + 0x50) = iVar4;
    }
  }
  return;
}



// FUNCTION 140ff0820 FUN_140ff0820 body=692 status=ok
// SIG undefined FUN_140ff0820(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ff0820(longlong *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_128 [32];
  ulonglong local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  code *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined1 local_98 [16];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar2 = *(longlong *)(param_2 + 0x20);
  local_108 = param_2;
  iVar4 = FUN_140ff6aa0(param_1,lVar2);
  if (iVar4 == -1) {
    plVar7 = (longlong *)param_1[0xc6];
    plVar10 = plVar7 + (int)param_1[199];
    for (; plVar7 != plVar10; plVar7 = plVar7 + 1) {
      lVar3 = *plVar7;
      if ((lVar3 != 0) && (*(int *)(lVar3 + 0x174) == -1)) {
        if (lVar3 == 0) {
          return;
        }
        local_100 = lVar2;
        uStack_f8 = lVar3;
        AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xca));
        iVar4 = (int)param_1[0xc9];
        lVar9 = (longlong)iVar4;
        *(int *)(param_1 + 0xc9) = iVar4 + 1;
        if (*(int *)((longlong)param_1 + 0x64c) < iVar4 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 200,iVar4);
        }
        puVar1 = (undefined4 *)(param_1[200] + lVar9 * 0x10);
        *puVar1 = (undefined4)local_100;
        puVar1[1] = local_100._4_4_;
        puVar1[2] = (undefined4)uStack_f8;
        puVar1[3] = uStack_f8._4_4_;
        ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0xca));
        if (-1 < iVar4) {
          (**(code **)(*param_1 + 0x578))(param_1,0);
        }
        if (((*(int *)(lVar3 + 0x174) != iVar4) && (-1 < iVar4)) && (iVar4 < (int)param_1[0xcc])) {
          *(int *)(lVar3 + 0x174) = iVar4;
          FUN_14208ff10(lVar3,*(undefined4 *)(param_1[0xcb] + lVar9 * 8),
                        *(undefined4 *)(param_1[0xcb] + 4 + lVar9 * 8));
        }
        FUN_14101c400(param_1,lVar3,local_108 + 0x28);
        if (lVar2 == 0) {
          return;
        }
        local_108._0_4_ = 0xffffffff;
        uVar8 = 0xffffffff;
        if (*(longlong *)(lVar2 + 0x38) != 0) {
          FUN_14170c210(&local_108);
          uVar8 = (undefined4)local_108;
        }
        local_108 = CONCAT44(local_108._4_4_,0xffffffff);
        local_b8 = (longlong *)0x0;
        local_a8 = 0;
        puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_d8);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = &PTR_FUN_144266c70;
          puVar5[1] = param_1;
          *(undefined4 *)(puVar5 + 2) = uVar8;
          uVar8 = 0xffffffff;
        }
        local_e8[0] = FUN_140ff18c0;
        uVar6 = FUN_1420849a0(param_1,local_98,local_e8);
        FUN_14208c260(param_1,uVar6);
        if (local_58 != 0) {
          plVar10 = local_88;
          if (local_68 != (longlong *)0x0) {
            plVar10 = local_68;
          }
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x10))(plVar10,0);
          }
        }
        if (local_68 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (local_a8 != 0) {
          plVar10 = local_d8;
          if (local_b8 != (longlong *)0x0) {
            plVar10 = local_b8;
          }
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x10))(plVar10,0);
          }
        }
        if (local_b8 != (longlong *)0x0) {
          FMemory::Free();
        }
        FUN_1416f8340(uVar8);
        FUN_1416f8340(local_108 & 0xffffffff);
        FUN_141017dd0(lVar3,*(undefined8 *)(lVar2 + 0x30));
        return;
      }
    }
  }
  return;
}



// FUNCTION 140ff0ae0 FUN_140ff0ae0 body=369 status=ok
// SIG undefined FUN_140ff0ae0(void)

void FUN_140ff0ae0(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  
  iVar8 = *(int *)(param_1 + 0x7e8);
  plVar3 = (longlong *)(param_1 + 0x7e0);
  iVar4 = *(int *)(param_1 + 0x7e8);
  *(int *)(param_1 + 0x7e8) = iVar4 + 1;
  if (*(int *)(param_1 + 0x7ec) < iVar4 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar3,iVar4);
  }
  lVar10 = (longlong)iVar8 * 0x30;
  puVar7 = (undefined8 *)((longlong)iVar4 * 0x30 + *plVar3);
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  *(undefined8 *)(*plVar3 + 0x20 + lVar10) = param_2;
  *(undefined1 *)(*plVar3 + 0x2c + lVar10) = param_4;
  lVar5 = *plVar3;
  *(undefined4 *)(lVar10 + lVar5) = *param_3;
  puVar7 = (undefined8 *)(lVar5 + 0x10 + lVar10);
  *(undefined8 *)(lVar10 + 8 + lVar5) = *(undefined8 *)(param_3 + 2);
  if (puVar7 != (undefined8 *)(param_3 + 4)) {
    plVar9 = (longlong *)*puVar7;
    for (iVar8 = *(int *)(puVar7 + 1); iVar8 != 0; iVar8 = iVar8 + -1) {
      plVar6 = (longlong *)plVar9[5];
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      if (plVar9[2] != 0) {
        FMemory::Free();
      }
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 8;
    }
    FUN_140fe2130(puVar7,*(undefined8 *)(param_3 + 4),param_3[6],
                  *(undefined4 *)((longlong)puVar7 + 0xc),0);
  }
  *(undefined4 *)(*plVar3 + 0x28 + lVar10) = 0xbf800000;
  *(undefined1 *)(*plVar3 + 0x2d + lVar10) = 0;
  return;
}



// FUNCTION 140ff0c60 FUN_140ff0c60 body=119 status=ok
// SIG undefined FUN_140ff0c60(void)

void FUN_140ff0c60(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4)

{
  if ((0 < *param_3) || (0 < param_3[6])) {
    FUN_140ff0ae0();
  }
  if ((0 < *param_4) || (0 < param_4[6])) {
    FUN_140ff0ae0(param_1,param_2,param_4,1);
  }
  FUN_140ce1790(param_3 + 4);
  FUN_140ce1790(param_4 + 4);
  return;
}



// FUNCTION 140ff0ce0 FUN_140ff0ce0 body=610 status=ok
// SIG undefined FUN_140ff0ce0(void)

void FUN_140ff0ce0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  float *pfVar4;
  double dVar5;
  longlong lVar6;
  int iVar7;
  float *pfVar8;
  bool bVar9;
  float fVar10;
  float local_res8;
  longlong local_38;
  longlong *local_30;
  
  local_res8 = 0.0;
  if (*(char *)(param_1 + 0x868) == '\0') {
    if ((*(longlong *)(param_1 + 0x838) != 0) && (*(longlong *)(param_1 + 0x840) != 0)) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x840) + 8);
      LOCK();
      iVar7 = *piVar1;
      if (iVar7 == 0) {
        *piVar1 = 0;
        iVar7 = 0;
      }
      UNLOCK();
      if (0 < iVar7) {
        fVar10 = (float)FUN_142eee5e0(param_1 + 0x830);
        goto LAB_140ff0d9a;
      }
    }
    fVar10 = 0.0;
    goto LAB_140ff0d9a;
  }
  if ((*(longlong *)(param_1 + 0x850) == 0) || (*(longlong *)(param_1 + 0x858) == 0)) {
LAB_140ff0d3b:
    fVar10 = 0.0;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x858) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (iVar7 < 1) goto LAB_140ff0d3b;
    fVar10 = (float)FUN_142eee5e0(param_1 + 0x848);
  }
  if (*(longlong *)(param_1 + 0x860) == 0) {
    fVar10 = fVar10 + 0.0;
  }
  else {
    dVar5 = (double)FUN_142eeea40();
    fVar10 = fVar10 + (float)dVar5;
  }
LAB_140ff0d9a:
  if ((*(longlong *)(param_1 + 0x7f0) != 0) && (*(longlong *)(param_1 + 0x7f8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x7f8) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      local_res8 = (float)FUN_142eee5e0(param_1 + 0x7e8);
    }
  }
  if (local_res8 <= fVar10) {
    local_res8 = fVar10;
  }
  if ((*(char *)(param_1 + 0x9d8) != '\0') || (*(char *)(param_1 + 0x9bc) != '\0')) {
    local_res8 = local_res8 + *(float *)(param_1 + 0x9b8);
  }
  plVar3 = *(longlong **)(param_1 + 0x9f8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar3[1];
    bVar9 = iVar7 == 0;
    if (bVar9) {
      *(int *)(plVar3 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (!bVar9) {
      while( true ) {
        LOCK();
        bVar9 = iVar7 == (int)plVar3[1];
        if (bVar9) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
        }
        UNLOCK();
        if (bVar9) break;
        LOCK();
        iVar7 = (int)plVar3[1];
        bVar9 = iVar7 == 0;
        if (bVar9) {
          *(int *)(plVar3 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar9) {
          return;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        if (*(longlong *)(param_1 + 0x9f0) != 0) {
          FUN_1420392d0(*(longlong *)(param_1 + 0x9f0),&local_38,L"bgMC");
          if (local_38 != 0) {
            pfVar4 = *(float **)(param_1 + 0x9a8);
            for (pfVar8 = pfVar4; pfVar8 != pfVar4 + *(int *)(param_1 + 0x9b0); pfVar8 = pfVar8 + 1)
            {
              if (local_res8 < *pfVar8 || local_res8 == *pfVar8) {
                if ((pfVar8 != pfVar4 + *(int *)(param_1 + 0x9b0)) &&
                   (iVar7 = (int)((longlong)pfVar8 - (longlong)pfVar4 >> 2), iVar7 != -1))
                goto LAB_140ff0ec6;
                break;
              }
            }
            iVar7 = *(int *)(param_1 + 0x9b0);
LAB_140ff0ec6:
            FUN_14203e3e0(local_38,iVar7 + 1);
          }
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
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*local_30 + 8))(local_30,1);
              }
            }
          }
        }
        LOCK();
        plVar2 = plVar3 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
  return;
}



// FUNCTION 140ff0f50 FUN_140ff0f50 body=66 status=ok
// SIG undefined FUN_140ff0f50(void)

void FUN_140ff0f50(longlong param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  
  if ((param_2 < 3) &&
     (lVar1 = *(longlong *)(param_1 + 0x1e8 + (longlong)(int)param_2 * 0x28), lVar1 != 0)) {
    FUN_142088910(lVar1,param_3);
  }
  if (*param_3 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140ff0fa0 FUN_140ff0fa0 body=432 status=ok
// SIG undefined FUN_140ff0fa0(void)

void FUN_140ff0fa0(longlong *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar3 = FUN_1420fc090();
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
      lVar4 = FUN_140cff1b0(lVar3);
      goto LAB_140ff1006;
    }
  }
  lVar3 = 0;
  lVar4 = 0;
LAB_140ff1006:
  if ((((*(char *)((longlong)param_1 + 0x5d9) != '\0') && (param_1[0xaa] != 0)) && (lVar3 != 0)) &&
     ((lVar4 != 0 && (*(char *)(lVar3 + 0x128) == '\x03')))) {
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar6 = FUN_142f6c9f0(uVar5);
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      plVar7 = (longlong *)FUN_142f5ed60(lVar6);
      lVar6 = *plVar7;
    }
    if (((param_1[0xaa] != 0) && (*(char *)(lVar3 + 0x128) == '\x03')) && (lVar6 != 0)) {
      lVar8 = FUN_142f71d80();
      lVar3 = lVar6;
      do {
        if (lVar3 == lVar8) {
          lVar8 = FUN_142f71d80();
          lVar3 = lVar6;
          goto LAB_140ff10c0;
        }
        lVar3 = *(longlong *)(lVar3 + 0x30);
      } while (lVar3 != 0);
    }
  }
  return;
  while (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0) {
LAB_140ff10c0:
    if (lVar3 == lVar8) goto LAB_140ff10d0;
  }
  lVar6 = 0;
LAB_140ff10d0:
  if (param_1[0xb6] != 0) {
    lVar9 = FUN_142f71d80();
    lVar3 = param_1[0xb6];
    for (lVar8 = lVar3; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      if (lVar8 == lVar9) goto LAB_140ff1100;
    }
  }
  lVar3 = 0;
LAB_140ff1100:
  if (lVar6 == lVar3) {
    return;
  }
  *(longlong *)(param_1[0xaa] + 0x5b0) = param_1[0xb9];
  uVar2 = FUN_140ccaa90(lVar4,param_1[0xaa]);
  FUN_141012d90(param_1,uVar2);
  *(undefined1 *)((longlong)param_1 + 0x5d9) = 0;
  return;
}



// FUNCTION 140ff1150 FUN_140ff1150 body=811 status=ok
// SIG undefined FUN_140ff1150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140ff1150(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  float fVar10;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined1 local_128 [8];
  ulonglong local_120;
  longlong local_118;
  longlong local_110;
  undefined4 local_108;
  undefined1 local_104;
  undefined1 local_100 [8];
  longlong *local_f8;
  longlong local_e8;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  lVar6 = *param_2;
  if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x30) != 0)) {
    lVar3 = AXAnimatedUsable::GetPrivateStaticClass();
    for (lVar8 = *(longlong *)(lVar6 + 0x30); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      if (lVar8 == lVar3) {
        if (*(longlong *)(lVar6 + 0x30) == 0) {
          return 0;
        }
        fVar10 = *(float *)(param_1 + 0x630);
        if (*(float *)(*param_2 + 0x58) <= *(float *)(param_1 + 0x630)) {
          fVar10 = *(float *)(*param_2 + 0x58);
        }
        *(undefined1 *)((longlong)param_2 + 0x44) = 1;
        *(float *)(param_2 + 8) = fVar10;
        FUN_14172a070(local_128,0);
        lVar6 = *param_2;
        local_118 = 0;
        lVar8 = 0;
        if (*(longlong *)(lVar6 + 0x30) != 0) {
          lVar4 = AXAnimatedUsable::GetPrivateStaticClass();
          lVar6 = *(longlong *)(lVar6 + 0x30);
          for (lVar3 = lVar6; (lVar8 = 0, lVar3 != 0 && (lVar8 = lVar6, lVar3 != lVar4));
              lVar3 = *(longlong *)(lVar3 + 0x30)) {
          }
        }
        uVar5 = GetTransientPackage();
        lVar6 = local_118;
        local_120 = 0;
        if (local_118 == 0) {
          FUN_1417846f0(uVar5,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
        }
        local_138 = 0;
        local_140 = 0;
        local_148 = 0;
        local_150 = 0;
        local_158 = 0;
        lVar6 = FUN_1417985e0(lVar8,uVar5,lVar6,0);
        if (lVar6 == 0) {
          FUN_14172a400(local_128);
          return 0;
        }
        param_2[1] = lVar6;
        local_120._0_4_ = 0xffffffff;
        FUN_14170c210(&local_120,lVar6);
        local_108 = (undefined4)local_120;
        local_104 = *(undefined1 *)((longlong)param_2 + 0x45);
        local_120 = CONCAT44(local_120._4_4_,0xffffffff);
        local_110 = param_1;
        FText::FText(local_100,param_2 + 3);
        local_e8 = param_2[6];
        local_a8 = (longlong *)0x0;
        local_98 = 0;
        puVar7 = (undefined8 *)FUN_140438ef0(0x38,local_c8);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &PTR_FUN_14465faf0;
          puVar7[1] = local_110;
          *(undefined4 *)(puVar7 + 2) = local_108;
          local_108 = 0xffffffff;
          *(undefined1 *)((longlong)puVar7 + 0x14) = local_104;
          FText::FText(puVar7 + 3,local_100);
          puVar7[6] = local_e8;
        }
        local_d8[0] = &LAB_140ff1bc0;
        uVar5 = FUN_1420849a0(param_1,local_88,local_d8);
        FUN_14208c260(param_1,uVar5);
        if (local_48 != 0) {
          plVar9 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar9 = local_58;
          }
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x10))(plVar9,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (local_98 != 0) {
          plVar9 = local_c8;
          if (local_a8 != (longlong *)0x0) {
            plVar9 = local_a8;
          }
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x10))(plVar9,0);
          }
        }
        if (local_a8 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (local_f8 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_f8 + 1;
          lVar6 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
        FUN_1416f8340(local_108);
        FUN_1416f8340(local_120 & 0xffffffff);
        if (param_2[9] != 0) {
          lVar3 = UObject::GetPrivateStaticClass();
          lVar6 = param_2[9];
          lVar8 = lVar6;
          if (lVar6 != 0) {
            while (lVar8 != lVar3) {
              lVar8 = *(longlong *)(lVar8 + 0x30);
              if (lVar8 == 0) {
                FUN_14172a400(local_128);
                return 1;
              }
            }
            if (lVar6 != 0) {
              (**(code **)(*(longlong *)param_2[1] + 0x530))();
            }
          }
        }
        FUN_14172a400(local_128);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140ff1480 FUN_140ff1480 body=823 status=ok
// SIG undefined FUN_140ff1480(void)

void FUN_140ff1480(longlong param_1,int param_2,int param_3,byte param_4)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  longlong *plVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  longlong *local_88;
  int local_80;
  longlong local_78;
  byte *local_70;
  longlong *local_68;
  int local_60;
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  
  pbVar11 = (byte *)0x0;
  if (*(int *)(param_1 + 0x700) != *(int *)(param_1 + 0x72c)) {
    lVar5 = *(longlong *)(param_1 + 0x738);
    if (*(longlong *)(param_1 + 0x738) == 0) {
      lVar5 = param_1 + 0x730;
    }
    iVar3 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x740) - 1U & (ulonglong)param_4) * 4);
    if (iVar3 != -1) {
      do {
        pbVar8 = (byte *)((longlong)iVar3 * 0x78 + *(longlong *)(param_1 + 0x6f8));
        if (*pbVar8 == param_4) {
          if (iVar3 != -1) goto LAB_140ff1511;
          break;
        }
        iVar3 = *(int *)(pbVar8 + 0x70);
      } while (iVar3 != -1);
    }
  }
  pbVar8 = pbVar11;
LAB_140ff1511:
  uVar7 = *(undefined8 *)(pbVar8 + 0x68);
  pbVar8 = (byte *)FWeakObjectPtr::Get(param_1 + 0x58c);
  if (pbVar8 != (byte *)0x0) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(pbVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pbVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140ff156a;
  }
  pbVar8 = pbVar11;
LAB_140ff156a:
  if ((*(longlong *)(param_1 + 0x6f0) != 0) && (pbVar8 != (byte *)0x0)) {
    plVar9 = (longlong *)(*(longlong *)(param_1 + 0x6f0) + 0x170);
    (**(code **)(*plVar9 + 0x38))(plVar9,1);
    lVar5 = *(longlong *)(param_1 + 0x6f0);
    local_70 = pbVar11;
    local_78 = lVar5;
    if (lVar5 != 0) {
      uVar6 = UBlendableInterface::GetPrivateStaticClass();
      local_70 = (byte *)UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar6);
    }
    FUN_142ed36d0(param_1,&local_78,0);
    FUN_140fe2890(*(undefined8 *)(param_1 + 0x768),&local_88,uVar7);
    pbVar12 = (byte *)((ulonglong)((longlong)(local_88 + local_80) + (7 - (longlong)local_88)) >> 3)
    ;
    if (local_88 + local_80 < local_88) {
      pbVar12 = pbVar11;
    }
    pbVar10 = pbVar11;
    plVar9 = local_88;
    if (pbVar12 != (byte *)0x0) {
      do {
        if ((*plVar9 != 0) && (lVar5 = FUN_140ff0180(param_1), lVar5 != 0)) {
          param_2 = param_2 + 1;
        }
        plVar9 = plVar9 + 1;
        pbVar10 = pbVar10 + 1;
      } while (pbVar10 != pbVar12);
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
    FUN_140fe2890(param_1 + 0x758,&local_68,uVar7);
    pbVar12 = (byte *)((ulonglong)((longlong)(local_68 + local_60) + (7 - (longlong)local_68)) >> 3)
    ;
    if (local_68 + local_60 < local_68) {
      pbVar12 = pbVar11;
    }
    plVar9 = local_68;
    if (pbVar12 != (byte *)0x0) {
      do {
        iVar3 = param_3 + 1;
        if (*plVar9 == 0) {
          iVar3 = param_3;
        }
        param_3 = iVar3;
        pbVar11 = pbVar11 + 1;
        plVar9 = plVar9 + 1;
      } while (pbVar11 != pbVar12);
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
    uVar4 = FUN_140ff5d30(param_1,pbVar8,uVar7);
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x2b8))
              (*(longlong **)(param_1 + 0x6f0),uVar4,1,0);
    plVar9 = *(longlong **)(param_1 + 0xb80);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x278))(plVar9,1);
    }
    if (*(longlong *)(param_1 + 0xb88) != 0) {
      FString::PrintfImpl(local_58,L"%i / %i",param_2,param_2 + param_3);
      plVar9 = *(longlong **)(param_1 + 0xb88);
      lVar5 = *plVar9;
      uVar7 = FText::FromString(local_48,local_58);
      (**(code **)(lVar5 + 0x2b0))(plVar9,uVar7,1,0);
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
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      if (local_58[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140ff17c0 FUN_140ff17c0 body=221 status=ok
// SIG undefined FUN_140ff17c0(void)

void FUN_140ff17c0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  plVar6 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x2fc) = 0xffffffff;
  plVar5 = plVar6;
  if (lVar1 != 0) {
    lVar4 = UGSquadMemberWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      plVar5 = (longlong *)FUN_140eccca0(lVar1);
    }
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x280));
  if ((((*(longlong *)(param_1 + 0x270) != 0) &&
       (*(longlong **)(param_1 + 0x278) != (longlong *)0x0)) && (plVar5 != (longlong *)0x0)) &&
     (plVar5[0x21b] != 0)) {
    plVar5 = *(longlong **)(param_1 + 0x278);
    if (*(longlong *)(param_1 + 0x270) == 0) {
      plVar5 = plVar6;
    }
    uVar3 = (**(code **)(*plVar5 + 0x78))();
    *(undefined4 *)(param_1 + 0x2fc) = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x000140ff1896. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x280));
  return;
}



// FUNCTION 140ff18c0 FUN_140ff18c0 body=62 status=ok
// SIG undefined FUN_140ff18c0(void)

void FUN_140ff18c0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_28 [32];
  
  lVar1 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
  if (lVar1 != 0) {
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
    FUN_142ece5e0(*param_1,local_28,uVar2);
    FUN_140591060(local_28);
  }
  return;
}



// FUNCTION 140ff1950 FUN_140ff1950 body=84 status=ok
// SIG undefined FUN_140ff1950(void)

void FUN_140ff1950(longlong *param_1)

{
  char cVar1;
  
  cVar1 = FUN_142ebd920(*param_1);
  if (cVar1 != '\0') {
    if ((*(char *)(*param_1 + 0x6d8) != '\0') && (cVar1 = FUN_142ebe180(), cVar1 != '\0')) {
      return;
    }
    cVar1 = FUN_142ebe180(*param_1);
    if (cVar1 == '\0') {
      (**(code **)(*(longlong *)*param_1 + 0x578))((longlong *)*param_1,0);
    }
    *(undefined1 *)(*param_1 + 0x6d8) = 1;
  }
  return;
}



// FUNCTION 140ff19d0 FUN_140ff19d0 body=48 status=ok
// SIG undefined FUN_140ff19d0(void)

void FUN_140ff19d0(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140eccca0(*param_1);
  if (lVar1 != 0) {
    FUN_140483870(lVar1 + 0xf28,*param_1);
    return;
  }
  return;
}



// FUNCTION 140ff1a20 FUN_140ff1a20 body=104 status=ok
// SIG undefined FUN_140ff1a20(void)

undefined8 FUN_140ff1a20(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = FWeakObjectPtr::Get(*param_1 + 0x58c);
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
      uVar4 = FUN_140cfbfb0(lVar2);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 140ff1bf0 FUN_140ff1bf0 body=108 status=ok
// SIG undefined FUN_140ff1bf0(void)

void FUN_140ff1bf0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(*param_1 + 0x5c8);
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
      FUN_140cc9500(lVar2,*param_1);
    }
  }
  return;
}



// FUNCTION 140ff1c80 FUN_140ff1c80 body=60 status=ok
// SIG undefined FUN_140ff1c80(void)

void FUN_140ff1c80(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  
  cVar1 = FUN_142ebe180(*param_1);
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)*param_1 + 0x578);
  if (cVar1 == '\0') {
    (*UNRECOVERED_JUMPTABLE)();
    FUN_1410101c0(*param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140ff1cb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)((longlong *)*param_1,0);
  return;
}



// FUNCTION 140ff1cc0 FUN_140ff1cc0 body=55 status=ok
// SIG undefined FUN_140ff1cc0(void)

void FUN_140ff1cc0(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  
  lVar1 = FUN_140eccca0(*param_1);
  if (lVar1 != 0) {
    FUN_140fe1f60(lVar1 + 0xf28,local_res8,*param_1,FUN_141007010);
  }
  return;
}



// FUNCTION 140ff1e20 thunk_FUN_140fedb40 body=5 status=ok
// SIG undefined thunk_FUN_140fedb40(void)

void thunk_FUN_140fedb40(void)

{
  FUN_140fedb40();
  return;
}



// FUNCTION 140ff1ee0 FUN_140ff1ee0 body=129 status=ok
// SIG undefined FUN_140ff1ee0(void)

void FUN_140ff1ee0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
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
    if ((bVar1) && (*(char *)(lVar3 + 0xac0) != '\0')) {
      cVar2 = (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x170))();
      if (cVar2 == '\0') {
        *(undefined1 *)(lVar3 + 0xac0) = 0;
      }
    }
  }
  return;
}



// FUNCTION 140ff1f70 FUN_140ff1f70 body=217 status=ok
// SIG undefined FUN_140ff1f70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ff1f70(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [80];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_68[0] = &LAB_140ff1e00;
  uVar2 = FUN_1420849a0(param_1,local_b8,local_68);
  FUN_14208c4f0(param_1,uVar2);
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



// FUNCTION 140ff2050 FUN_140ff2050 body=217 status=ok
// SIG undefined FUN_140ff2050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ff2050(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [80];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_68[0] = &LAB_140ff1df0;
  uVar2 = FUN_1420849a0(param_1,local_b8,local_68);
  FUN_14208c4f0(param_1,uVar2);
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



// FUNCTION 140ff2130 FUN_140ff2130 body=271 status=ok
// SIG undefined FUN_140ff2130(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ff2130(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
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
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = FUN_140ff19d0;
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



// FUNCTION 140ff2240 FUN_140ff2240 body=271 status=ok
// SIG undefined FUN_140ff2240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ff2240(undefined8 param_1)

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
  local_b8[0] = &LAB_140ff1e10;
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



// FUNCTION 140ff2350 FUN_140ff2350 body=271 status=ok
// SIG undefined FUN_140ff2350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ff2350(undefined8 param_1)

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
  local_b8[0] = &LAB_140ff1da0;
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



// FUNCTION 140ff2460 FUN_140ff2460 body=64 status=ok
// SIG undefined FUN_140ff2460(void)

void FUN_140ff2460(longlong param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x648));
  FUN_140ff3cf0(param_1 + 0x638,0);
                    /* WARNING: Could not recover jumptable at 0x000140ff2499. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x648));
  return;
}



// FUNCTION 140ff24a0 FUN_140ff24a0 body=294 status=ok
// SIG undefined FUN_140ff24a0(void)

void FUN_140ff24a0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  if ((*(longlong *)(param_1 + 0x6c8) != 0) && (*(longlong *)(param_1 + 0x6d0) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x6d0) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      FUN_142f10d20(param_1 + 0x6c0,0);
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x6e0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar6 = iVar5 == 0;
    if (bVar6) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar6) {
      LOCK();
      bVar6 = iVar5 == (int)plVar3[1];
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar6) {
        if (plVar3 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x6d8) != 0) {
            FUN_14203e4e0(*(longlong *)(param_1 + 0x6d8),&DAT_144651310);
          }
          LOCK();
          plVar2 = plVar3 + 1;
          lVar4 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar3)(plVar3);
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
        break;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar6 = iVar5 == 0;
      if (bVar6) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x6a0);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x278))(plVar3,1);
  }
  if ((*(longlong *)(param_1 + 0x708) != 0) && (*(longlong *)(param_1 + 0x710) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x710) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      FUN_142f10d20(param_1 + 0x700,0);
    }
  }
  FUN_140ff25d0(param_1);
  return;
}



// FUNCTION 140ff25d0 FUN_140ff25d0 body=335 status=ok
// SIG undefined FUN_140ff25d0(void)

void FUN_140ff25d0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  iVar5 = *(int *)(param_1 + 0x720);
  iVar9 = 0;
  if (0 < iVar5) {
    lVar8 = 0;
    do {
      if ((lVar8 < 0) || (iVar5 <= iVar9)) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x718) + lVar8 * 8);
      }
      if (lVar7 != 0) {
        FWeakObjectPtr::operator=(&local_res10,*(undefined8 *)(lVar7 + 0x178));
        FWeakObjectPtr::operator=(&local_res8,lVar7);
        uVar4 = local_res14;
        uVar3 = local_res10;
        uVar2 = local_resc;
        uVar1 = local_res8;
        local_58 = 0;
        local_48 = 0;
        puVar6 = (undefined8 *)FUN_140438ef0(0x20,local_78);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = &PTR_FUN_144605c80;
          puVar6[1] = lVar7;
          *(undefined4 *)(puVar6 + 2) = uVar1;
          *(undefined4 *)((longlong)puVar6 + 0x14) = uVar2;
          *(undefined4 *)(puVar6 + 3) = uVar3;
          *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar4;
        }
        local_88[0] = &LAB_140ff1e40;
        FUN_14208c5d0(lVar7,local_88);
        iVar5 = *(int *)(param_1 + 0x720);
      }
      iVar9 = iVar9 + 1;
      lVar8 = lVar8 + 1;
    } while (iVar9 < iVar5);
  }
  FUN_140ff2050(param_1);
  FUN_140ff1f70(param_1);
  return;
}



// FUNCTION 140ff2720 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<enum_EXRarity,FGOfferWidgetRaritySettings>,TDefaultMapHashableKeyFuncs<enum_EXRarity,FGOfferWidgetRaritySettings,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

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
      TSet<TTuple<enum_ESocialSubsystem,USocialUser::FSubsystemUserInfo>,TDefaultMapHashableKeyFuncs<enum_ESocialSubsystem,USocialUser::FSubsystemUserInfo,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140ff27d0 FUN_140ff27d0 body=898 status=ok
// SIG undefined FUN_140ff27d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140ff27d0(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  char *pcVar10;
  longlong lVar11;
  undefined1 auStack_1a8 [32];
  undefined4 *local_188;
  ulonglong *puStack_180;
  undefined8 local_178;
  longlong *plStack_170;
  undefined8 local_168;
  longlong local_160;
  undefined1 local_158 [16];
  undefined1 local_148 [8];
  undefined4 local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [16];
  undefined1 local_c0 [24];
  undefined4 local_a8 [2];
  longlong local_a0;
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  FText::FText();
  FNumberFormattingOptions::FNumberFormattingOptions(local_148);
  lVar11 = 2;
  local_140 = 2;
  local_178 = 0;
  plStack_170 = (longlong *)0x0;
  FText::AsNumber(local_118,param_2 % 0x3c,local_148,&local_178);
  plVar5 = plStack_170;
  if (plStack_170 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_170 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_170)(plStack_170);
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
  lVar7 = FText::FText(local_c0,local_118);
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_e8,L"{0}:{1}",L"GFxPhotoModeMenu",L"SliderTimeFormat");
  puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_d0,uVar8);
  local_a8[0] = 0;
  local_a0 = (longlong)((param_2 / 0x3c) % 0x18);
  local_80 = 0;
  local_78 = 4;
  FText::FText(local_68,lVar7);
  local_50 = 1;
  puStack_180 = local_48;
  local_168 = *puVar9;
  local_160 = puVar9[1];
  if (local_160 != 0) {
    LOCK();
    *(int *)(local_160 + 8) = *(int *)(local_160 + 8) + 1;
    UNLOCK();
  }
  local_188 = local_a8;
  uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_158,&local_188);
  uVar8 = FText::Format(local_100,&local_168,uVar8);
  FText::FText(local_130,uVar8);
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_f8 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar2 = (int *)((longlong)local_f8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_f8 + 8))(local_f8,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_158);
  pcVar10 = &stack0xffffffffffffffe0;
  do {
    lVar11 = lVar11 + -1;
    pcVar3 = pcVar10 + -0x30;
    if (*pcVar3 != '\0') {
      *pcVar3 = '\0';
      plVar5 = *(longlong **)(pcVar10 + -0x40);
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
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
    pcVar10 = pcVar3;
  } while (lVar11 != 0);
  plVar5 = (longlong *)puVar9[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  plVar5 = *(longlong **)(lVar7 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  FText::operator=(param_1,local_130);
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_128 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_128)(local_128);
      LOCK();
      piVar2 = (int *)((longlong)local_128 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_128 + 8))(local_128,1);
      }
    }
  }
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_e0 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar2 = (int *)((longlong)local_e0 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_e0 + 8))(local_e0,1);
      }
    }
  }
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_110 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar2 = (int *)((longlong)local_110 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140ff2b60 FUN_140ff2b60 body=128 status=ok
// SIG undefined FUN_140ff2b60(void)

undefined8 * FUN_140ff2b60(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14465fac0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    FText::FText(puVar1 + 4,param_1 + 0x20);
    *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_1 + 0x38);
    puVar1[8] = *(undefined8 *)(param_1 + 0x40);
    *(undefined1 *)(puVar1 + 9) = *(undefined1 *)(param_1 + 0x48);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ff2be0 FUN_140ff2be0 body=72 status=ok
// SIG undefined FUN_140ff2be0(void)

undefined8 * FUN_140ff2be0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14465fbc8;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ff2c30 FUN_140ff2c30 body=123 status=ok
// SIG undefined FUN_140ff2c30(void)

undefined8 * FUN_140ff2c30(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14465fbe0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x10));
    FUN_14170c210(puVar1 + 2,uVar2);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ff2cb0 CopyToEmptyStorage body=104 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_86b5239219762420415e95617a23a7af>_>::
CopyToEmptyStorage(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x70);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_CopyToEmptyStorage_14465fc28;
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar2 + 4,param_1 + 0x20);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ff2d20 FUN_140ff2d20 body=125 status=ok
// SIG undefined FUN_140ff2d20(void)

undefined8 * FUN_140ff2d20(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14465fc10;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    FString::FString(puVar1 + 4,param_1 + 0x20);
    puVar1[6] = *(undefined8 *)(param_1 + 0x30);
    *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)((longlong)puVar1 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ff2da0 FUN_140ff2da0 body=111 status=ok
// SIG undefined FUN_140ff2da0(void)

undefined8 * FUN_140ff2da0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14465fa90;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    FUN_140fe57a0(puVar1 + 4,param_1 + 0x20);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ff2e10 FUN_140ff2e10 body=139 status=ok
// SIG undefined FUN_140ff2e10(void)

undefined8 * FUN_140ff2e10(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14465faf0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x10));
    FUN_14170c210(puVar1 + 2,uVar2);
    *(undefined1 *)((longlong)puVar1 + 0x14) = *(undefined1 *)(param_1 + 0x14);
    FText::FText(puVar1 + 3,param_1 + 0x18);
    puVar1[6] = *(undefined8 *)(param_1 + 0x30);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ff2ea0 FUN_140ff2ea0 body=149 status=ok
// SIG undefined FUN_140ff2ea0(void)

undefined8 * FUN_140ff2ea0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x50);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14465faa8;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((longlong)puVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    puVar2[4] = &PTR_FUN_1441d26b8;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    puVar2[7] = uVar1;
    *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)((longlong)puVar2 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    puVar2[4] = &DAT_1441d2800;
    puVar2[9] = *(undefined8 *)(param_1 + 0x48);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ff2f40 FUN_140ff2f40 body=80 status=ok
// SIG undefined FUN_140ff2f40(void)

undefined8 * FUN_140ff2f40(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14465fbf8;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)((longlong)puVar2 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ff2f90 FUN_140ff2f90 body=99 status=ok
// SIG undefined FUN_140ff2f90(void)

undefined8 * FUN_140ff2f90(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14465fb08;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    FString::FString(puVar1 + 3,param_1 + 0x18);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ff3000 FUN_140ff3000 body=142 status=ok
// SIG undefined FUN_140ff3000(void)

undefined8 * FUN_140ff3000(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14465fad8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_1 + 0x20);
    FText::FText(puVar1 + 5,param_1 + 0x28);
    *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(param_1 + 0x40);
    puVar1[9] = *(undefined8 *)(param_1 + 0x48);
    *(undefined1 *)(puVar1 + 10) = *(undefined1 *)(param_1 + 0x50);
    *(undefined1 *)((longlong)puVar1 + 0x51) = *(undefined1 *)(param_1 + 0x51);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ff3090 CopyToEmptyStorage body=79 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_7a02e06ca5db01d82e81cc92e1965566>_>::
CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_14465fbb0;
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140ff30e0 FUN_140ff30e0 body=138 status=ok
// SIG undefined FUN_140ff30e0(void)

void FUN_140ff30e0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14465f970;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
    FUN_14170c210(puVar1 + 1,uVar2);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    FString::FString(puVar1 + 2,param_1 + 0x10);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    puVar1[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar1 = &PTR_GetPoolName_14465f9b8;
  }
  return;
}



// FUNCTION 140ff3170 FUN_140ff3170 body=84 status=ok
// SIG undefined FUN_140ff3170(void)

void FUN_140ff3170(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14465fa00;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_14465fa48;
  }
  return;
}



// FUNCTION 140ff31d0 FUN_140ff31d0 body=84 status=ok
// SIG undefined FUN_140ff31d0(void)

void FUN_140ff31d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14465fb20;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_14465fb68;
  }
  return;
}


