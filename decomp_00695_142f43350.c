// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142f43350 FUN_142f43350 body=48 status=ok
// SIG undefined FUN_142f43350(void)

void FUN_142f43350(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x8e8))();
  if (lVar1 != 0) {
    FUN_142f43380(lVar1,param_1,0);
    return;
  }
  return;
}



// FUNCTION 142f43380 FUN_142f43380 body=350 status=ok
// SIG undefined FUN_142f43380(void)

char FUN_142f43380(longlong param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  cVar2 = '\x01';
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x48);
  uVar6 = 0;
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(param_1 + 0x50)) || (*(longlong *)(param_1 + 0x58) == 0))
    goto LAB_142f43467;
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(param_1 + 0x48,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x50) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x48);
    if (lVar3 == 0) goto LAB_142f43467;
  }
  lVar4 = FUN_142f47520();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (cVar2 = FUN_142f43380(lVar3,param_2,param_3), cVar2 == '\0')) {
    return '\0';
  }
LAB_142f43467:
  plVar5 = *(longlong **)(param_1 + 0x38);
  uVar7 = (longlong)*(int *)(param_1 + 0x40) & 0x1fffffffffffffff;
  if (plVar5 + *(int *)(param_1 + 0x40) < plVar5) {
    uVar7 = uVar6;
  }
  if (uVar7 != 0) {
    do {
      if (((*plVar5 != 0) && (cVar2 = FUN_142c48f60(*plVar5,param_2,0), cVar2 == '\0')) &&
         (param_3 != (longlong *)0x0)) {
        *param_3 = param_1;
      }
      plVar5 = plVar5 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar7);
  }
  return cVar2;
}



// FUNCTION 142f434e0 FUN_142f434e0 body=304 status=ok
// SIG undefined FUN_142f434e0(void)

void FUN_142f434e0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  longlong local_res10;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  
  FUN_142ef7550();
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop
                       (L"&UFastTravelStationDebugButton::OnStationClicked",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar5, pwVar3 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    lVar2 = *(longlong *)(param_1 + 0x2c8);
    plVar8 = (longlong *)(lVar2 + 0x3c0);
    FWeakObjectPtr::operator=(&local_28,0);
    local_20 = 0;
    FWeakObjectPtr::operator=(&local_28,param_1);
    local_20 = local_res10;
    if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_28), lVar6 != 0)) {
      UObject::FindFunction(lVar6,local_20);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar8);
    iVar1 = *(int *)(lVar2 + 0x3c8);
    *(int *)(lVar2 + 0x3c8) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x3cc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar1);
    }
    puVar7 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar8);
    *puVar7 = local_28;
    puVar7[1] = local_24;
    *(longlong *)(puVar7 + 2) = local_20;
  }
  return;
}



// FUNCTION 142f43610 FUN_142f43610 body=403 status=ok
// SIG undefined FUN_142f43610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f43610(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  uVar1 = AActor::GetWorldTimerManager();
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    plVar2[2] = (longlong)&LAB_142f3c8c0;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_143f4d1b8;
  }
  local_88 = 0;
  local_80 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_88);
  }
  FWeakObjectPtr::operator=(local_78,0);
  local_90 = 0xbf800000;
  local_98 = 0;
  local_70 = 0;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  local_68 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar1,param_1 + 0x530,&local_88,0x3dcccccd);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 142f437c0 FUN_142f437c0 body=236 status=ok
// SIG undefined FUN_142f437c0(void)

void FUN_142f437c0(longlong param_1)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  *(undefined1 *)(param_1 + 0x540) = 0;
  *(undefined4 *)(param_1 + 0x460) = 0;
  if (*(int *)(param_1 + 0x464) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x458,0);
  }
  *(undefined4 *)(param_1 + 0x470) = 0;
  if (*(int *)(param_1 + 0x474) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x468,0);
  }
  *(undefined4 *)(param_1 + 0x480) = 0;
  if (*(int *)(param_1 + 0x484) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x478,0);
  }
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x4d0) = local_res8;
  *(undefined4 *)(param_1 + 0x4d4) = local_resc;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x4b8) = local_res8;
  *(undefined4 *)(param_1 + 0x4bc) = local_resc;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x4c8) = local_res8;
  *(undefined4 *)(param_1 + 0x4cc) = local_resc;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x4c0) = local_res8;
  *(undefined4 *)(param_1 + 0x4c4) = local_resc;
  return;
}



// FUNCTION 142f438b0 FUN_142f438b0 body=44 status=ok
// SIG undefined FUN_142f438b0(void)

void FUN_142f438b0(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  *(byte *)(param_1 + 0x358) = param_2 ^ 1;
  if (*(char *)(param_1 + 0x359) == '\0') {
    lVar1 = param_1 + 0x338;
    if (param_2 == 0) {
      lVar1 = param_1 + 0x328;
    }
    FUN_142f44750(param_1,lVar1);
    return;
  }
  return;
}



// FUNCTION 142f438e0 FUN_142f438e0 body=441 status=ok
// SIG undefined FUN_142f438e0(void)

void FUN_142f438e0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if (lVar4 != 0) {
    FUN_142f41e00(lVar4,param_1 + 0x8b,1);
    plVar5 = (longlong *)UDynamicEntryBox::GetAllEntries(lVar4);
    plVar9 = (longlong *)*plVar5;
    plVar5 = plVar9 + (int)plVar5[1];
    for (; plVar9 != plVar5; plVar9 = plVar9 + 1) {
      lVar7 = *plVar9;
      if (lVar7 != 0) {
        plVar8 = *(longlong **)(lVar7 + 0xa0);
        plVar1 = plVar8 + *(int *)(lVar7 + 0xa8);
        for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
          plVar3 = (longlong *)*plVar8;
          if (plVar3 != (longlong *)0x0) {
            uVar6 = UUGHitTextureButton::GetPrivateStaticClass();
            lVar7 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar6);
            if (lVar7 != 0) {
              iVar2 = (int)param_1[0x8e];
              *(int *)(param_1 + 0x8e) = iVar2 + 1;
              if (*(int *)((longlong)param_1 + 0x474) < iVar2 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (param_1 + 0x8d,iVar2);
              }
              *(longlong *)(param_1[0x8d] + (longlong)iVar2 * 8) = lVar7;
            }
          }
        }
      }
    }
    plVar5 = (longlong *)UDynamicEntryBox::GetAllEntries(lVar4);
    plVar9 = (longlong *)*plVar5;
    plVar5 = plVar9 + (int)plVar5[1];
    for (; plVar9 != plVar5; plVar9 = plVar9 + 1) {
      lVar4 = *plVar9;
      if (lVar4 != 0) {
        plVar8 = *(longlong **)(lVar4 + 0xa0);
        plVar1 = plVar8 + *(int *)(lVar4 + 0xa8);
        for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
          plVar3 = (longlong *)*plVar8;
          if (plVar3 != (longlong *)0x0) {
            uVar6 = UUGButton::GetPrivateStaticClass();
            lVar4 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar6);
            if (lVar4 != 0) {
              iVar2 = (int)param_1[0x90];
              *(int *)(param_1 + 0x90) = iVar2 + 1;
              if (*(int *)((longlong)param_1 + 0x484) < iVar2 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (param_1 + 0x8f,iVar2);
              }
              *(longlong *)(param_1[0x8f] + (longlong)iVar2 * 8) = lVar4;
            }
          }
        }
      }
    }
    *(undefined1 *)(param_1 + 0xa8) = 1;
  }
  return;
}



// FUNCTION 142f43aa0 FUN_142f43aa0 body=522 status=ok
// SIG undefined FUN_142f43aa0(void)

void FUN_142f43aa0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  void *_Src;
  int iVar8;
  short *psVar9;
  short *psVar10;
  uint uVar11;
  void *local_48;
  ulonglong local_40;
  void *local_38;
  uint local_30;
  undefined4 local_2c;
  longlong local_28 [2];
  
  psVar10 = (short *)*param_2;
  iVar2 = *(int *)(param_2 + 1);
  psVar9 = psVar10;
  if (psVar10 != psVar10 + iVar2) {
    while (*psVar9 != 0x3f) {
      psVar9 = psVar9 + 1;
      if (psVar9 == psVar10 + iVar2) {
        return;
      }
    }
    iVar8 = (int)((longlong)psVar9 - (longlong)psVar10 >> 1);
    if (iVar8 != -1) {
      lVar7 = -1;
      if (iVar2 == 0) {
        psVar10 = &DAT_143f3eda8;
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = iVar2 - 1;
      }
      _Src = (void *)0x0;
      uVar11 = 0;
      if (iVar2 == 0) {
        uVar5 = uVar11;
      }
      uVar6 = uVar5 - iVar8;
      uVar3 = uVar11;
      if ((-1 < (int)uVar6) && (uVar3 = uVar5, (int)uVar6 < (int)uVar5)) {
        uVar3 = uVar6;
      }
      local_48 = (void *)0x0;
      psVar10 = psVar10 + ((longlong)(int)uVar5 - (longlong)(int)uVar3);
      if ((psVar10 != (short *)0x0) && (*psVar10 != 0)) {
        do {
          lVar7 = lVar7 + 1;
        } while (psVar10[lVar7] != 0);
        uVar5 = (int)lVar7 + 1;
        local_40 = (ulonglong)uVar5;
        uVar11 = uVar5;
        if (0 < (int)uVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
          uVar11 = (uint)local_40;
        }
        _Src = local_48;
        FGenericPlatformString::Memcpy(local_48,psVar10,(longlong)(int)uVar5 * 2);
      }
      local_48 = (void *)0x0;
      local_40 = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      FGenericPlatformString::Memcpy(local_48,L"travelstation",0x1c);
      local_38 = (void *)0x0;
      local_30 = uVar11;
      if (uVar11 == 0) {
        local_2c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,uVar11,0);
        _guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)(int)uVar11 * 2);
      }
      plVar4 = (longlong *)UGameplayStatics::ParseOption(local_28,&local_38,&local_48);
      plVar1 = (longlong *)(param_1 + 0x4d8);
      if (plVar1 != plVar4) {
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        *plVar1 = *plVar4;
        *plVar4 = 0;
        *(int *)(param_1 + 0x4e0) = (int)plVar4[1];
        *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)((longlong)plVar4 + 0xc);
        plVar4[1] = 0;
      }
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      if (local_48 != (void *)0x0) {
        FMemory::Free();
      }
      if (_Src != (void *)0x0) {
        FMemory::Free(_Src);
      }
    }
  }
  return;
}



// FUNCTION 142f43cb0 FUN_142f43cb0 body=311 status=ok
// SIG undefined FUN_142f43cb0(void)

void FUN_142f43cb0(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  
  uVar7 = 0;
  plVar8 = *(longlong **)(param_1 + 0x4a8);
  uVar10 = (longlong)*(int *)(param_1 + 0x4b0) & 0x1fffffffffffffff;
  if (plVar8 + *(int *)(param_1 + 0x4b0) < plVar8) {
    uVar10 = uVar7;
  }
  if (uVar10 != 0) {
    do {
      lVar4 = *plVar8;
      if (lVar4 != 0) {
        plVar9 = (longlong *)(param_1 + 0x498);
        plVar6 = (longlong *)*plVar9;
        iVar3 = *(int *)(param_1 + 0x4a0);
        plVar1 = plVar6 + (longlong)iVar3 * 2;
        for (; plVar6 != plVar1; plVar6 = plVar6 + 2) {
          if (*plVar6 == lVar4) goto LAB_142f43d62;
        }
        *(int *)(param_1 + 0x4a0) = iVar3 + 1;
        if (*(int *)(param_1 + 0x4a4) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9);
        }
        local_28 = (undefined4)lVar4;
        uStack_24 = (undefined4)((ulonglong)lVar4 >> 0x20);
        puVar2 = (undefined4 *)(*plVar9 + (longlong)iVar3 * 0x10);
        *puVar2 = local_28;
        puVar2[1] = uStack_24;
        puVar2[2] = 0;
        puVar2[3] = uStack_1c;
      }
LAB_142f43d62:
      plVar8 = plVar8 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar10);
  }
  plVar8 = *(longlong **)(param_1 + 0x498);
  plVar9 = plVar8 + (longlong)*(int *)(param_1 + 0x4a0) * 2;
  do {
    if (plVar8 == plVar9) {
      return;
    }
    plVar6 = *(longlong **)(param_1 + 0x4a8);
    plVar1 = plVar6 + *(int *)(param_1 + 0x4b0);
    if (plVar6 != plVar1) {
      do {
        if (*plVar6 == *plVar8) {
          uVar5 = 0;
          goto LAB_142f43dd0;
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar1);
    }
    uVar5 = 1;
LAB_142f43dd0:
    *(undefined1 *)((longlong)plVar8 + 10) = uVar5;
    plVar8 = plVar8 + 2;
  } while( true );
}



// FUNCTION 142f43df0 FUN_142f43df0 body=249 status=ok
// SIG undefined FUN_142f43df0(void)

void FUN_142f43df0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  
  *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_1 + 0x4b8);
  *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_1 + 0x4bc);
  cVar2 = FUN_140bf9690(0,param_1 + 0x4b8);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x4b8);
    uVar4 = UUGButton::GetPrivateStaticClass();
    lVar5 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
    if ((lVar5 != 0) && (lVar1 = *(longlong *)(lVar5 + 0x710), lVar1 != 0)) {
      plVar3 = *(longlong **)(param_1 + 0x498);
      plVar6 = plVar3 + (longlong)*(int *)(param_1 + 0x4a0) * 2;
      for (plVar7 = plVar3; plVar7 != plVar6; plVar7 = plVar7 + 2) {
        if (*plVar7 == lVar1) goto joined_r0x000142f43e97;
      }
LAB_142f43eb6:
      local_res8[0] = 1;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (lVar5 + 0x718,local_res8);
LAB_142f43ecc:
      FUN_142f3e130(param_1,*(undefined8 *)(lVar5 + 0x710),1);
    }
  }
  return;
joined_r0x000142f43e97:
  if (plVar3 == plVar6) goto LAB_142f43ecc;
  if (*plVar3 == lVar1) {
    if (*(char *)((longlong)plVar3 + 0xb) != '\0') goto LAB_142f43eb6;
    goto LAB_142f43ecc;
  }
  plVar3 = plVar3 + 2;
  goto joined_r0x000142f43e97;
}



// FUNCTION 142f43ef0 FUN_142f43ef0 body=61 status=ok
// SIG undefined FUN_142f43ef0(void)

void FUN_142f43ef0(longlong param_1)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  if (*(char *)(param_1 + 0x710) != '\0') {
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x738,local_res8);
    return;
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x748,local_res8);
  return;
}



// FUNCTION 142f43f30 FUN_142f43f30 body=53 status=ok
// SIG undefined FUN_142f43f30(void)

void FUN_142f43f30(longlong param_1,char param_2)

{
  longlong lVar1;
  
  *(char *)(param_1 + 0x359) = param_2;
  if (param_2 != '\0') {
    FUN_142f44750(param_1,param_1 + 0x348);
    return;
  }
  lVar1 = 0x338;
  if (*(char *)(param_1 + 0x358) != '\0') {
    lVar1 = 0x328;
  }
  FUN_142f44750(param_1,lVar1 + param_1);
  return;
}



// FUNCTION 142f43f70 FUN_142f43f70 body=76 status=ok
// SIG undefined FUN_142f43f70(void)

void FUN_142f43f70(longlong param_1)

{
  longlong local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = CONCAT31(uStack_10._1_3_,1);
  local_18 = param_1;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x2b8,&local_18);
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    local_18 = *(longlong *)(param_1 + 0x2d8);
    uStack_10 = *(undefined4 *)(param_1 + 0x2e0);
    uStack_c = *(undefined4 *)(param_1 + 0x2e4);
    FUN_14212f5e0(*(longlong *)(param_1 + 0x2c8),&local_18);
  }
  return;
}



// FUNCTION 142f43fc0 FUN_142f43fc0 body=169 status=ok
// SIG undefined FUN_142f43fc0(void)

void FUN_142f43fc0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_res8 [32];
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0();
  }
  lVar2 = FUN_142f429c0(lVar2);
  if (lVar2 != 0) {
    plVar3 = *(longlong **)(lVar2 + 0x498);
    lVar1 = *(longlong *)(param_1 + 0x710);
    plVar5 = plVar3 + (longlong)*(int *)(lVar2 + 0x4a0) * 2;
    plVar4 = plVar3;
    if (plVar3 != plVar5) {
LAB_142f44010:
      if (*plVar4 != lVar1) goto code_r0x000142f44015;
      if (plVar3 == plVar5) {
        return;
      }
      while (*plVar3 != lVar1) {
        plVar3 = plVar3 + 2;
        if (plVar3 == plVar5) {
          return;
        }
      }
      if (*(char *)((longlong)plVar3 + 0xb) == '\0') {
        return;
      }
    }
LAB_142f4403f:
    FUN_142f3e130(lVar2,lVar1,CONCAT71((int7)((ulonglong)plVar4 >> 8),1));
    local_res8[0] = 0;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x718,local_res8);
  }
  return;
code_r0x000142f44015:
  plVar4 = plVar4 + 2;
  if (plVar4 == plVar5) goto LAB_142f4403f;
  goto LAB_142f44010;
}



// FUNCTION 142f44070 FUN_142f44070 body=465 status=ok
// SIG undefined FUN_142f44070(void)

void FUN_142f44070(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar4 = 0;
  if (*(char *)(param_1 + 0x359) == '\0') {
    if (*(char *)(param_1 + 0x358) == '\0') {
      uVar5 = uVar4;
      if (0 < *(int *)(param_1 + 0x340)) {
        do {
          lVar2 = *(longlong *)(param_1 + 0x338);
          lVar1 = *(longlong *)(lVar2 + 0x10 + uVar5);
          if (lVar1 == param_2) {
            *(char *)(lVar2 + 0x18 + uVar5) = param_3;
            lVar2 = *(longlong *)(lVar1 + 0x2c8);
            if (lVar2 != 0) {
              local_18 = *(undefined4 *)(lVar1 + 0x2d8);
              uStack_14 = *(undefined4 *)(lVar1 + 0x2dc);
              uStack_10 = *(undefined4 *)(lVar1 + 0x2e0);
              uStack_c = *(undefined4 *)(lVar1 + 0x2e4);
LAB_142f44209:
              FUN_14212f5e0(lVar2,&local_18);
            }
          }
          else if (param_3 != '\0') {
            *(undefined1 *)(lVar2 + 0x18 + uVar5) = 0;
            lVar2 = *(longlong *)(lVar1 + 0x2c8);
            if (lVar2 != 0) {
              local_18 = *(undefined4 *)(lVar1 + 0x2e8);
              uStack_14 = *(undefined4 *)(lVar1 + 0x2ec);
              uStack_10 = *(undefined4 *)(lVar1 + 0x2f0);
              uStack_c = *(undefined4 *)(lVar1 + 0x2f4);
              goto LAB_142f44209;
            }
          }
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
          uVar5 = uVar5 + 0x20;
        } while ((int)uVar3 < *(int *)(param_1 + 0x340));
      }
    }
    else {
      uVar5 = uVar4;
      if (0 < *(int *)(param_1 + 0x330)) {
        do {
          lVar2 = *(longlong *)(param_1 + 0x328);
          lVar1 = *(longlong *)(lVar2 + 0x10 + uVar5);
          if (lVar1 == param_2) {
            *(char *)(lVar2 + 0x18 + uVar5) = param_3;
            lVar2 = *(longlong *)(lVar1 + 0x2c8);
            if (lVar2 != 0) {
              local_18 = *(undefined4 *)(lVar1 + 0x2d8);
              uStack_14 = *(undefined4 *)(lVar1 + 0x2dc);
              uStack_10 = *(undefined4 *)(lVar1 + 0x2e0);
              uStack_c = *(undefined4 *)(lVar1 + 0x2e4);
LAB_142f44189:
              FUN_14212f5e0(lVar2,&local_18);
            }
          }
          else if (param_3 != '\0') {
            *(undefined1 *)(lVar2 + 0x18 + uVar5) = 0;
            lVar2 = *(longlong *)(lVar1 + 0x2c8);
            if (lVar2 != 0) {
              local_18 = *(undefined4 *)(lVar1 + 0x2e8);
              uStack_14 = *(undefined4 *)(lVar1 + 0x2ec);
              uStack_10 = *(undefined4 *)(lVar1 + 0x2f0);
              uStack_c = *(undefined4 *)(lVar1 + 0x2f4);
              goto LAB_142f44189;
            }
          }
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
          uVar5 = uVar5 + 0x20;
        } while ((int)uVar3 < *(int *)(param_1 + 0x330));
      }
    }
  }
  else {
    uVar5 = uVar4;
    if (0 < *(int *)(param_1 + 0x350)) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x348);
        lVar1 = *(longlong *)(lVar2 + 0x10 + uVar5);
        if (lVar1 == param_2) {
          *(char *)(lVar2 + 0x18 + uVar5) = param_3;
          lVar2 = *(longlong *)(lVar1 + 0x2c8);
          if (lVar2 != 0) {
            local_18 = *(undefined4 *)(lVar1 + 0x2d8);
            uStack_14 = *(undefined4 *)(lVar1 + 0x2dc);
            uStack_10 = *(undefined4 *)(lVar1 + 0x2e0);
            uStack_c = *(undefined4 *)(lVar1 + 0x2e4);
LAB_142f440f9:
            FUN_14212f5e0(lVar2,&local_18);
          }
        }
        else if (param_3 != '\0') {
          *(undefined1 *)(lVar2 + 0x18 + uVar5) = 0;
          lVar2 = *(longlong *)(lVar1 + 0x2c8);
          if (lVar2 != 0) {
            local_18 = *(undefined4 *)(lVar1 + 0x2e8);
            uStack_14 = *(undefined4 *)(lVar1 + 0x2ec);
            uStack_10 = *(undefined4 *)(lVar1 + 0x2f0);
            uStack_c = *(undefined4 *)(lVar1 + 0x2f4);
            goto LAB_142f440f9;
          }
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
        uVar5 = uVar5 + 0x20;
      } while ((int)uVar3 < *(int *)(param_1 + 0x350));
    }
  }
  return;
}



// FUNCTION 142f44250 FUN_142f44250 body=310 status=ok
// SIG undefined FUN_142f44250(void)

void FUN_142f44250(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 *local_38;
  int local_30;
  
  lVar11 = *param_1;
  lVar1 = lVar11 + (longlong)(int)param_1[1] * 0x18;
  do {
    if (lVar11 == lVar1) {
      return;
    }
    FString::FString(&local_38,lVar11);
    puVar6 = local_38;
    uVar4 = *(undefined1 *)(lVar11 + 0x10);
    if (1 < local_30) {
      puVar10 = &DAT_143f3eda8;
      if (local_30 != 0) {
        puVar10 = local_38;
      }
      uVar7 = FUN_142f477c0();
      lVar8 = FUN_141799c90(uVar7,0,puVar10,0,0,0,1);
      if (lVar8 != 0) {
        plVar9 = (longlong *)*param_2;
        iVar5 = (int)param_2[1];
        plVar2 = plVar9 + (longlong)iVar5 * 2;
        for (; plVar9 != plVar2; plVar9 = plVar9 + 2) {
          if (*plVar9 == lVar8) goto LAB_142f44343;
        }
        uStack_40 = CONCAT13(uVar4,0x100);
        *(int *)(param_2 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2);
        }
        local_48 = (undefined4)lVar8;
        uStack_44 = (undefined4)((ulonglong)lVar8 >> 0x20);
        puVar3 = (undefined4 *)(*param_2 + (longlong)iVar5 * 0x10);
        *puVar3 = local_48;
        puVar3[1] = uStack_44;
        puVar3[2] = uStack_40;
        puVar3[3] = uStack_3c;
      }
    }
LAB_142f44343:
    if (puVar6 != (undefined2 *)0x0) {
      FMemory::Free(puVar6);
    }
    lVar11 = lVar11 + 0x18;
  } while( true );
}



// FUNCTION 142f44390 FUN_142f44390 body=88 status=ok
// SIG undefined FUN_142f44390(void)

void FUN_142f44390(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_1423945d0();
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = UUGButton::GetPrivateStaticClass();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if ((lVar3 != 0) && (*(longlong *)(param_1 + 0x768) != 0)) {
      *(undefined8 *)(param_1 + 0x768) = 0;
    }
  }
  return;
}



// FUNCTION 142f443f0 FUN_142f443f0 body=789 status=ok
// SIG undefined FUN_142f443f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f443f0(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  int local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar2 = param_1[0x9e];
  param_1[0x9d] = (longlong)param_2;
  plVar4 = (longlong *)UMoviePlayerSettings::StaticClass();
  lVar5 = plVar4[0x1f];
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
    lVar5 = plVar4[0x1f];
  }
  *(undefined4 *)(param_1 + 0x9e) = *(undefined4 *)(lVar5 + 0x30);
  *(undefined1 *)((longlong)param_1 + 0x4f4) = 1;
  *(undefined1 *)((longlong)param_1 + 0x4f5) = param_3;
  lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar5 != 0) && (param_2 != (longlong *)0x0)) {
    lVar6 = (**(code **)(*param_2 + 0x2a0))(param_2);
    if ((lVar6 != 0) && (*(longlong **)(lVar6 + 0xb8) != (longlong *)0x0)) {
      cVar3 = (**(code **)(**(longlong **)(lVar6 + 0xb8) + 0x288))();
      if (cVar3 != '\0') {
        UWorld::GetPlayerControllerIterator(lVar5,&local_a8);
        do {
          if ((local_a0 < 0) || (*(int *)(local_a8 + 8) <= local_a0)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_142f44577;
          lVar5 = FWeakObjectPtr::Get();
          if (lVar5 != 0) {
            lVar7 = FUN_1429e18b0();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              cVar3 = (**(code **)(**(longlong **)(lVar6 + 0xb8) + 0x280))
                                (*(longlong **)(lVar6 + 0xb8),lVar5);
              if (cVar3 == '\0') break;
            }
          }
          local_a0 = local_a0 + 1;
        } while( true );
      }
      *(undefined1 *)((longlong)param_1 + 0x4f4) = 5;
      *(int *)(param_1 + 0x9e) = (int)lVar2 + 1;
    }
  }
LAB_142f44577:
  (**(code **)(*param_1 + 0x260))(param_1);
  if (*(char *)((longlong)param_1 + 0x4f4) == '\x01') {
    uVar8 = AActor::GetWorldTimerManager(param_1);
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(plVar4 + 1,param_1);
      plVar4[2] = (longlong)FUN_142f46090;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar5;
      *plVar4 = (longlong)&PTR_FUN_143f4d1b8;
    }
    local_98 = 0;
    local_90 = 0;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x30))(plVar4,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_b0 = 0xbf800000;
    local_b8 = 0;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar8,param_1 + 0xa7,&local_98,0x3f800000);
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
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      lVar5 = FMemory::Realloc(plVar4,0,0);
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
  }
  (**(code **)(*param_1 + 0x6f0))(param_1);
  return;
}



// FUNCTION 142f44710 FUN_142f44710 body=52 status=ok
// SIG undefined FUN_142f44710(void)

void FUN_142f44710(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x778);
  *(undefined4 *)(param_1 + 0x778) = 0;
  if (*(int *)(param_1 + 0x77c) != iVar1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo();
  }
  FUN_142f45000(param_1);
  return;
}



// FUNCTION 142f44750 FUN_142f44750 body=125 status=ok
// SIG undefined FUN_142f44750(void)

void FUN_142f44750(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x310) != 0) {
    FUN_1420e74a0();
    lVar2 = *param_2;
    lVar3 = (longlong)(int)param_2[1] * 0x20 + lVar2;
    for (; lVar2 != lVar3; lVar2 = lVar2 + 0x20) {
      cVar1 = UPanelWidget::HasChild(*(undefined8 *)(param_1 + 0x310),*(undefined8 *)(lVar2 + 0x10))
      ;
      if (cVar1 == '\0') {
        FUN_1420def40(*(undefined8 *)(param_1 + 0x310),*(undefined8 *)(lVar2 + 0x10));
      }
    }
  }
  return;
}



// FUNCTION 142f447d0 Remove body=265 status=ok
// SIG undefined Remove(void)

int TArray<FMaiFlyingConnection,TSizedDefaultAllocator<32>_>::Remove
              (longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  
  iVar1 = (int)param_1[1];
  lVar6 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar7 = 0;
  bVar8 = *(longlong *)*param_1 != *param_2;
  lVar3 = 0;
  iVar4 = 0;
  do {
    lVar3 = lVar3 + 1;
    iVar5 = iVar4 + 1;
    if (lVar3 < lVar6) {
      plVar2 = (longlong *)(lVar3 * 0x10 + *param_1);
      do {
        if (bVar8 != (*plVar2 != *param_2)) break;
        iVar5 = iVar5 + 1;
        lVar3 = lVar3 + 1;
        plVar2 = plVar2 + 2;
      } while (lVar3 < lVar6);
    }
    if (bVar8 != false) {
      if (iVar7 != iVar4) {
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar7 * 0x10 + *param_1),
                   (void *)((longlong)iVar4 * 0x10 + *param_1),(longlong)(iVar5 - iVar4) << 4);
      }
      iVar7 = iVar7 + (iVar5 - iVar4);
    }
    bVar8 = (bool)(bVar8 ^ 1);
    iVar4 = iVar5;
    if (lVar6 <= lVar3) {
      *(int *)(param_1 + 1) = iVar7;
      return iVar1 - iVar7;
    }
  } while( true );
}



// FUNCTION 142f448e0 FUN_142f448e0 body=437 status=ok
// SIG undefined FUN_142f448e0(void)

void FUN_142f448e0(longlong param_1,longlong param_2,char param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  longlong local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_4 == '\0') {
    plVar3 = *(longlong **)(param_1 + 0x498);
    plVar4 = plVar3 + (longlong)*(int *)(param_1 + 0x4a0) * 2;
    for (; (plVar3 != plVar4 && (*plVar3 != param_2)); plVar3 = plVar3 + 2) {
    }
  }
  plVar3 = (longlong *)(param_1 + 0x498);
  uStack_30 = 0x101;
  local_38 = param_2;
  TArray<FMaiFlyingConnection,TSizedDefaultAllocator<32>_>::Remove(plVar3,&local_38);
  if (param_4 != '\0') {
    plVar4 = (longlong *)*plVar3;
    iVar6 = *(int *)(param_1 + 0x4a0);
    uStack_30 = 0x1000100;
    for (plVar1 = plVar4; plVar1 != plVar4 + (longlong)iVar6 * 2; plVar1 = plVar1 + 2) {
      if (*plVar1 == param_2) {
        local_38 = param_2;
        if ((int)((longlong)plVar1 - (longlong)plVar4 >> 4) != -1) goto LAB_142f449b1;
        break;
      }
    }
    *(int *)(param_1 + 0x4a0) = iVar6 + 1;
    local_38 = param_2;
    if (*(int *)(param_1 + 0x4a4) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar6);
    }
    plVar3 = (longlong *)(*plVar3 + (longlong)iVar6 * 0x10);
    *plVar3 = local_38;
    plVar3[1] = CONCAT44(uStack_2c,uStack_30);
  }
LAB_142f449b1:
  if (((param_3 != '\0') && (*(char *)(param_1 + 0x128) == '\x03')) &&
     (lVar2 = (longlong)*(int *)(param_1 + 0x4b0), *(int *)(param_1 + 0x4b0) != 0)) {
    iVar8 = 0;
    bVar9 = **(longlong **)(param_1 + 0x4a8) != param_2;
    lVar5 = 0;
    iVar6 = 0;
    do {
      lVar5 = lVar5 + 1;
      iVar7 = iVar6 + 1;
      if (lVar5 < lVar2) {
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x4a8) + lVar5 * 8);
        do {
          if (bVar9 != (*plVar3 != param_2)) break;
          iVar7 = iVar7 + 1;
          lVar5 = lVar5 + 1;
          plVar3 = plVar3 + 1;
        } while (lVar5 < lVar2);
      }
      if (bVar9 != false) {
        if (iVar8 != iVar6) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x4a8) + (longlong)iVar8 * 8),
                     (void *)(*(longlong *)(param_1 + 0x4a8) + (longlong)iVar6 * 8),
                     (longlong)(iVar7 - iVar6) << 3);
        }
        iVar8 = iVar8 + (iVar7 - iVar6);
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar6 = iVar7;
    } while (lVar5 < lVar2);
    *(int *)(param_1 + 0x4b0) = iVar8;
  }
  return;
}



// FUNCTION 142f44aa0 FUN_142f44aa0 body=49 status=ok
// SIG undefined FUN_142f44aa0(void)

void FUN_142f44aa0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    FUN_1407665e0(*(longlong *)(param_1 + 0x2c8) + 0x3c0,param_1);
  }
  FUN_14212c7b0(param_1);
  return;
}



// FUNCTION 142f44ae0 FUN_142f44ae0 body=257 status=ok
// SIG undefined FUN_142f44ae0(void)

void FUN_142f44ae0(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x188);
  if (uVar1 < 0x19) {
    uVar2 = 0x18;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x18c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 << 4,0);
    uVar2 = (uint)(uVar3 >> 4);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x18c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x180);
  if (uVar2 < 0x19) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 4);
    pvVar4 = *(void **)((longlong)param_1 + 0x180);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 4,0);
        *(void **)((longlong)param_1 + 0x180) = pvVar4;
      }
      _guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 4);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 4;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x180) = uVar5;
  return;
}



// FUNCTION 142f44bf0 FUN_142f44bf0 body=278 status=ok
// SIG undefined FUN_142f44bf0(void)

void FUN_142f44bf0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    do {
      cVar2 = FUN_142f43380(lVar3,param_2,0);
      if (cVar2 != '\0') {
        return;
      }
      lVar4 = *param_1;
      lVar5 = lVar4 + 0x48;
      lVar3 = FWeakObjectPtr::Get(lVar5);
      if (lVar3 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(lVar4 + 0x50)) && (*(longlong *)(lVar4 + 0x58) != 0)) {
          lVar3 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar5,lVar3);
          if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(lVar4 + 0x50) = DAT_1464b56f4;
          }
          lVar3 = FWeakObjectPtr::Get(lVar5);
          if (lVar3 != 0) goto LAB_142f44caf;
        }
LAB_142f44ce5:
        lVar3 = 0;
      }
      else {
LAB_142f44caf:
        lVar4 = FUN_142f47520();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_142f44ce5;
      }
      *param_1 = lVar3;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 142f44d10 FUN_142f44d10 body=52 status=ok
// SIG undefined FUN_142f44d10(void)

void FUN_142f44d10(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x498);
    plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x4a0) * 2;
    if (plVar1 != plVar2) {
      while (*plVar1 != param_2) {
        plVar1 = plVar1 + 2;
        if (plVar1 == plVar2) {
          return;
        }
      }
      *(undefined1 *)(plVar1 + 1) = param_3;
    }
  }
  return;
}



// FUNCTION 142f44d50 FUN_142f44d50 body=688 status=ok
// SIG undefined FUN_142f44d50(void)

void FUN_142f44d50(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong local_60;
  ulonglong local_58;
  
  if (*(int *)(param_2 + 8) < 2) {
    return;
  }
  uVar3 = (**(code **)(*param_1 + 0x148))();
  plVar4 = (longlong *)FUN_142f405b0(uVar3,param_2,param_1 + 0x8f);
  if (plVar4 == (longlong *)0x0) {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar4 = (longlong *)FUN_142f40770(uVar3,param_2,param_1 + 0x8d);
    if (plVar4 == (longlong *)0x0) {
      lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      if (lVar5 == 0) {
        return;
      }
      uVar8 = 0;
      local_60 = 0;
      local_58 = 0;
      plVar4 = (longlong *)UDynamicEntryBox::GetAllEntries(lVar5);
      plVar7 = (longlong *)*plVar4;
      plVar4 = plVar7 + (int)plVar4[1];
      uVar11 = uVar8;
      uVar14 = uVar8;
      for (; plVar7 != plVar4; plVar7 = plVar7 + 1) {
        uVar13 = 0;
        lVar6 = *plVar7;
        if (lVar6 != 0) {
          plVar9 = *(longlong **)(lVar6 + 0xa0);
          uVar12 = (longlong)*(int *)(lVar6 + 0xa8) & 0x1fffffffffffffff;
          if (plVar9 + *(int *)(lVar6 + 0xa8) < plVar9) {
            uVar12 = uVar13;
          }
          if (uVar12 != 0) {
            do {
              plVar1 = (longlong *)*plVar9;
              if (plVar1 != (longlong *)0x0) {
                uVar3 = AArchVisCharacter::StaticClass();
                lVar6 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar3);
                if ((lVar6 != 0) && (*(char *)(lVar6 + 0x714) == '\0')) {
                  iVar2 = (int)uVar8;
                  uVar10 = iVar2 + 1;
                  local_58 = CONCAT44(local_58._4_4_,uVar10);
                  if ((int)uVar11 < (int)uVar10) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (&local_60,uVar8);
                    uVar11 = local_58 >> 0x20;
                    uVar14 = local_60;
                    uVar10 = (uint)local_58;
                  }
                  uVar8 = (ulonglong)uVar10;
                  *(longlong *)(uVar14 + (longlong)iVar2 * 8) = lVar6;
                }
              }
              plVar9 = plVar9 + 1;
              uVar13 = uVar13 + 1;
            } while (uVar13 != uVar12);
          }
        }
      }
      plVar4 = (longlong *)FUN_142f409e0(lVar5,param_2,&local_60);
      if (local_60 != 0) {
        FMemory::Free();
      }
      if (plVar4 == (longlong *)0x0) {
        return;
      }
      iVar2 = FUN_142235230(param_1);
      if (2 < iVar2) {
        return;
      }
      lVar5 = (**(code **)(*plVar4 + 0x8e8))(plVar4);
      if (lVar5 == 0) {
        return;
      }
      if ((char)plVar4[0xe0] != '\0') {
        return;
      }
      param_1 = param_1 + 0x99;
      goto LAB_142f44fe8;
    }
    if ((char)plVar4[0xe0] == '\0') {
      lVar5 = plVar4[0x23];
      goto LAB_142f44dc1;
    }
  }
  else {
    if ((plVar4[0xe2] != 0) && (*(char *)(plVar4[0xe2] + 0xd8) == '\x01')) {
      return;
    }
    if ((char)plVar4[0xe0] == '\0') {
      lVar5 = plVar4[0x23];
LAB_142f44dc1:
      FWeakObjectPtr::operator=(param_1 + 0x97,lVar5);
      FWeakObjectPtr::operator=(param_1 + 0x99,plVar4[0x23]);
    }
  }
  param_1 = param_1 + 0x98;
LAB_142f44fe8:
  FWeakObjectPtr::operator=(param_1,plVar4[0x23]);
  return;
}



// FUNCTION 142f45000 FUN_142f45000 body=409 status=ok
// SIG undefined FUN_142f45000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f45000(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_1e8 [32];
  longlong local_1c8 [48];
  longlong *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  if (*(int *)(param_1 + 0x778) == 0) {
    lVar7 = *(longlong *)(param_1 + 0x118);
    if (*(longlong *)(param_1 + 0x120) == 0) {
      FUN_1423407b0();
    }
    if (lVar7 != 0) {
      FUN_142f42590(local_1c8,lVar7,1);
      lVar7 = 0;
      plVar5 = local_1c8;
      if (local_48 != (longlong *)0x0) {
        plVar5 = local_48;
      }
      plVar8 = plVar5 + (longlong)local_40 * 2;
      for (; plVar5 != plVar8; plVar5 = plVar5 + 2) {
        lVar2 = *plVar5;
        lVar6 = lVar7;
        if (lVar2 != 0) {
          lVar6 = plVar5[1];
        }
        iVar1 = *(int *)(param_1 + 0x778);
        if (lVar2 == 0) {
          lVar6 = lVar7;
        }
        *(int *)(param_1 + 0x778) = iVar1 + 1;
        if (*(int *)(param_1 + 0x77c) < iVar1 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x770,iVar1);
        }
        lVar3 = *(longlong *)(param_1 + 0x770);
        *(longlong *)(lVar3 + (longlong)iVar1 * 0x28) = lVar2;
        lVar3 = lVar3 + (longlong)iVar1 * 0x28;
        lVar4 = lVar7;
        if (lVar2 != 0) {
          lVar4 = lVar6;
        }
        *(longlong *)(lVar3 + 8) = lVar4;
        *(undefined4 *)(lVar3 + 0x10) = 0;
        *(undefined8 *)(lVar3 + 0x18) = 0;
        *(undefined8 *)(lVar3 + 0x20) = 0;
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 142f451a0 FUN_142f451a0 body=54 status=ok
// SIG undefined FUN_142f451a0(void)

ulonglong FUN_142f451a0(longlong param_1,longlong param_2)

{
  longlong *in_RAX;
  longlong *plVar1;
  
  if (param_2 != 0) {
    in_RAX = *(longlong **)(param_1 + 0x498);
    plVar1 = in_RAX + (longlong)*(int *)(param_1 + 0x4a0) * 2;
    for (; in_RAX != plVar1; in_RAX = in_RAX + 2) {
      if (*in_RAX == param_2) {
        return (ulonglong)*(byte *)(in_RAX + 1);
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142f451e0 FUN_142f451e0 body=202 status=ok
// SIG undefined FUN_142f451e0(void)

void FUN_142f451e0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_142e56420(param_2);
  if (*(longlong *)(param_1 + 0x718) != 0) {
    lVar1 = FUN_142dfdfe0();
    lVar4 = *(longlong *)(param_1 + 0x718);
    lVar5 = lVar4;
    if (lVar4 != 0) {
      while (lVar5 != lVar1) {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        if (lVar5 == 0) {
          return;
        }
      }
      if (lVar4 != 0) {
        uVar2 = FUN_142e035e0();
        plVar3 = (longlong *)(**(code **)(*param_2 + 0x628))(param_2,uVar2);
        if (plVar3 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x718) != 0) {
            lVar1 = FUN_142dfdfe0();
            lVar4 = *(longlong *)(param_1 + 0x718);
            for (lVar5 = lVar4; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
              if (lVar5 == lVar1) goto LAB_142f45290;
            }
          }
          lVar4 = 0;
LAB_142f45290:
          (**(code **)(*plVar3 + 0x410))(plVar3,lVar4,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 142f452b0 FUN_142f452b0 body=60 status=ok
// SIG undefined FUN_142f452b0(void)

ulonglong FUN_142f452b0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0x500))(param_2,param_3,param_4,0,0);
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142f452f0 FUN_142f452f0 body=348 status=ok
// SIG undefined FUN_142f452f0(void)

void FUN_142f452f0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  longlong *local_30;
  int local_28;
  longlong local_20;
  longlong *plStack_18;
  
  if (param_1 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x148))();
  }
  if ((param_2 != 0) && (lVar3 != 0)) {
    UWorld::GetPlayerControllerIterator(lVar3,&local_30);
    while ((-1 < local_28 && (local_28 < (int)local_30[1]))) {
      lVar3 = FWeakObjectPtr::Get(*local_30 + (longlong)local_28 * 8);
      if ((lVar3 == 0) || (plVar1 = *(longlong **)(lVar3 + 0x488), plVar1 == (longlong *)0x0)) {
LAB_142f45417:
        local_28 = local_28 + 1;
      }
      else {
        plVar2 = *(longlong **)(param_2 + 0x458);
        if (plVar2 == (longlong *)0x0) {
          local_20 = 0;
          plStack_18 = (longlong *)0x0;
          goto LAB_142f45417;
        }
        (**(code **)(*plVar2 + 0x8f8))(plVar2,&local_20,plVar1,0,0);
        plVar2 = plStack_18;
        if ((local_20 == 0) || (plStack_18 == (longlong *)0x0)) goto LAB_142f45417;
        lVar3 = *plVar1;
        uVar4 = (**(code **)(*plStack_18 + 0x28))(plStack_18,local_48);
        uVar5 = (**(code **)(*plVar2 + 0x20))(plVar2,local_3c);
        (**(code **)(lVar3 + 0x500))(plVar1,uVar5,uVar4,0,0);
        local_28 = local_28 + 1;
      }
    }
  }
  return;
}



// FUNCTION 142f45450 FUN_142f45450 body=990 status=ok
// SIG undefined FUN_142f45450(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142f45450(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  int local_48;
  undefined1 local_40 [24];
  
  if (param_3 == (longlong *)0x0) {
    plVar5 = (longlong *)FUN_142f3f4c0(0);
    cVar3 = (char)plVar5;
  }
  else {
    lVar11 = FUN_142f40c20();
    plVar5 = (longlong *)(lVar11 + 0x20);
    if (((*(int *)(lVar11 + 0x28) == 0) || ((longlong *)*plVar5 == (longlong *)0x0)) ||
       (plVar5 = (longlong *)(**(code **)(*(longlong *)*plVar5 + 0x18))(), (char)plVar5 == '\0')) {
      cVar3 = '\x01';
    }
    else {
      lVar11 = FUN_142f40c20();
      if (*(int *)(lVar11 + 0x28) == 0) {
        plVar5 = (longlong *)(**(code **)(_DAT_00000000 + 0x38))(0,param_3);
        cVar3 = (char)plVar5;
      }
      else {
        plVar5 = (longlong *)
                 (**(code **)(**(longlong **)(lVar11 + 0x20) + 0x38))
                           (*(longlong **)(lVar11 + 0x20),param_3);
        cVar3 = (char)plVar5;
      }
    }
  }
  if (((((param_1 != 0) && (plVar5 = (longlong *)FUN_1428cf800(param_1), (int)plVar5 != 3)) &&
       ((cVar3 != '\0' &&
        ((1 < *(int *)(param_2 + 8) && (plVar5 = (longlong *)FUN_142f40c20(), (int)plVar5[1] != 0)))
        ))) && ((longlong *)*plVar5 != (longlong *)0x0)) &&
     (plVar5 = (longlong *)(**(code **)(*(longlong *)*plVar5 + 0x18))(), (char)plVar5 != '\0')) {
    puVar6 = (undefined8 *)FUN_142f40c20();
    if (*(int *)(puVar6 + 1) == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)*puVar6;
    }
    plVar7 = (longlong *)(**(code **)(*plVar5 + 0x38))();
    plVar5 = plVar7;
    if ((plVar7 != (longlong *)0x0) && (1 < *(int *)(param_2 + 8))) {
      plVar8 = (longlong *)FUN_142f40770(param_1,param_2,plVar7 + 0x8d);
      if ((plVar8 == (longlong *)0x0) &&
         (plVar8 = (longlong *)FUN_142f405b0(param_1,param_2,plVar7 + 0x8f),
         plVar8 == (longlong *)0x0)) {
        plVar8 = (longlong *)FUN_142f409e0(param_1,param_2,plVar7 + 0x8b);
        plVar5 = (longlong *)0x0;
        if (plVar8 == (longlong *)0x0) goto LAB_142f4580e;
      }
      if (param_3 == (longlong *)0x0) {
        uVar9 = (**(code **)(*plVar8 + 0x8e8))(plVar8);
        plVar5 = (longlong *)FUN_142f3f530(uVar9,0);
        if ((char)plVar5 == '\0') goto LAB_142f4580e;
      }
      UWorld::GetPlayerControllerIterator(param_1,&local_50);
      for (; (-1 < local_48 && (local_48 < (int)local_50[1])); local_48 = local_48 + 1) {
        plVar5 = (longlong *)FWeakObjectPtr::Get(*local_50 + (longlong)local_48 * 8);
        if (plVar5 != (longlong *)0x0) {
          local_80 = DAT_1468b5d98;
          local_88 = _DAT_1468b5d90;
          local_90 = DAT_1468b5da8;
          local_98 = DAT_1468b5da0;
          plVar5 = (longlong *)(**(code **)(*plVar5 + 0x688))(plVar5);
          if ((plVar5 != (longlong *)0x0) && ((param_3 == (longlong *)0x0 || (plVar5 == param_3))))
          {
            (**(code **)(*plVar8 + 0x8f8))(plVar8,&local_60,plVar5,0,0);
            if ((local_60 == 0) || (local_58 == (longlong *)0x0)) {
              plVar10 = (longlong *)(**(code **)(*plVar8 + 0x900))(plVar8,local_40);
              local_60 = *plVar10;
              local_58 = (longlong *)plVar10[1];
            }
            if ((local_60 != 0) && (local_58 != (longlong *)0x0)) {
              puVar6 = (undefined8 *)(**(code **)(*local_58 + 0x20))(local_58,local_78);
              local_88 = *puVar6;
              plVar10 = (longlong *)0x0;
              if (local_60 != 0) {
                plVar10 = local_58;
              }
              local_80 = *(undefined4 *)(puVar6 + 1);
              puVar6 = (undefined8 *)(**(code **)(*plVar10 + 0x28))(local_88,local_6c);
              local_98 = *puVar6;
              local_90 = *(undefined4 *)(puVar6 + 1);
              cVar3 = (**(code **)(*plVar7 + 0x6f8))(plVar7,plVar5,&local_88);
              if (cVar3 == '\0') {
                (**(code **)(*plVar5 + 0x500))(plVar5,&local_88,&local_98,0,0);
              }
              plVar10 = (longlong *)0x0;
              if (local_60 != 0) {
                plVar10 = local_58;
              }
              (**(code **)(*plVar10 + 0x18))(plVar10,plVar5);
              plVar5 = (longlong *)plVar8[0x23];
              if (plVar5 != (longlong *)0x0) {
                uVar9 = AArchVisCharacter::StaticClass();
                lVar11 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar9);
                if (lVar11 != 0) {
                  FUN_142f3ce80(lVar11,0);
                }
              }
              bVar2 = false;
              *(int *)((longlong)plVar7 + 0x514) = *(int *)((longlong)plVar7 + 0x514) + 1;
              iVar12 = *(int *)((longlong)plVar7 + 0x514);
              iVar4 = (int)plVar7[0xa1] + -1;
              lVar11 = (longlong)iVar4;
              if (-1 < iVar4) {
                lVar13 = lVar11 << 4;
                do {
                  lVar1 = plVar7[0xa0];
                  if (((*(int *)(lVar13 + 8 + lVar1) == 0) ||
                      (plVar5 = *(longlong **)(lVar13 + lVar1), plVar5 == (longlong *)0x0)) ||
                     (cVar3 = (**(code **)(*plVar5 + 0x40))(plVar5,param_3), cVar3 == '\0')) {
                    bVar2 = true;
                  }
                  lVar13 = lVar13 + -0x10;
                  lVar11 = lVar11 + -1;
                } while (-1 < lVar11);
                iVar12 = *(int *)((longlong)plVar7 + 0x514);
              }
              *(int *)((longlong)plVar7 + 0x514) = iVar12 + -1;
              if (bVar2) {
                FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7 + 0xa0,0);
              }
            }
          }
        }
      }
      return CONCAT71((uint7)(uint3)((uint)local_48 >> 8),1);
    }
  }
LAB_142f4580e:
  return (ulonglong)plVar5 & 0xffffffffffffff00;
}



// FUNCTION 142f45830 FUN_142f45830 body=455 status=ok
// SIG undefined FUN_142f45830(void)

void FUN_142f45830(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x4d0);
  if (cVar3 == '\0') {
    FWeakObjectPtr::operator=(param_1 + 0x4d0,param_2);
  }
  uVar6 = UUGButton::GetPrivateStaticClass();
  lVar7 = (**(code **)(*param_2 + 0x628))(param_2,uVar6);
  if (lVar7 == 0) {
    uVar6 = UUGHitTextureButton::GetPrivateStaticClass();
    lVar7 = (**(code **)(*param_2 + 0x628))(param_2,uVar6);
    if (lVar7 == 0) {
      uVar6 = AArchVisCharacter::StaticClass();
      plVar8 = (longlong *)(**(code **)(*param_2 + 0x628))(param_2,uVar6);
      if ((((plVar8 == (longlong *)0x0) || (iVar4 = FUN_142235230(param_1), 2 < iVar4)) ||
          (lVar7 = (**(code **)(*plVar8 + 0x8e8))(plVar8), lVar7 == 0)) ||
         ((char)plVar8[0xe0] != '\0')) goto LAB_142f45975;
      lVar7 = param_1 + 0x4c8;
    }
    else {
      if (*(char *)(lVar7 + 0x700) != '\0') goto LAB_142f458cc;
      FWeakObjectPtr::operator=(param_1 + 0x4b8,param_2);
      FWeakObjectPtr::operator=(param_1 + 0x4c8,param_2);
      lVar7 = param_1 + 0x4c0;
    }
  }
  else {
    if ((*(longlong *)(lVar7 + 0x710) != 0) &&
       (*(char *)(*(longlong *)(lVar7 + 0x710) + 0xd8) == '\x01')) goto LAB_142f45975;
    if (*(char *)(lVar7 + 0x700) == '\0') {
      FWeakObjectPtr::operator=(param_1 + 0x4b8,param_2);
      FWeakObjectPtr::operator=(param_1 + 0x4c8,param_2);
    }
LAB_142f458cc:
    lVar7 = param_1 + 0x4c0;
  }
  FWeakObjectPtr::operator=(lVar7,param_2);
LAB_142f45975:
  bVar2 = false;
  *(int *)(param_1 + 0x52c) = *(int *)(param_1 + 0x52c) + 1;
  iVar4 = *(int *)(param_1 + 0x52c);
  iVar5 = *(int *)(param_1 + 0x520) + -1;
  lVar7 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar9 = lVar7 << 4;
    bVar2 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x518);
      if (((*(int *)(lVar9 + 8 + lVar1) == 0) ||
          (plVar8 = *(longlong **)(lVar9 + lVar1), plVar8 == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(*plVar8 + 0x40))(), cVar3 == '\0')) {
        bVar2 = true;
      }
      lVar9 = lVar9 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar4 = *(int *)(param_1 + 0x52c);
  }
  *(int *)(param_1 + 0x52c) = iVar4 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x518),0);
  }
  return;
}



// FUNCTION 142f45a00 FUN_142f45a00 body=1217 status=ok
// SIG undefined FUN_142f45a00(void)

undefined8
FUN_142f45a00(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,char param_5,
             char param_6)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong **pplVar12;
  longlong *plVar13;
  int iVar14;
  longlong *plVar15;
  undefined2 *_Dst;
  longlong *_Src;
  longlong local_res8;
  int local_88;
  longlong *local_78;
  int local_70;
  int iStack_6c;
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  int local_50;
  int iStack_4c;
  longlong local_48 [2];
  
  plVar15 = (longlong *)0x0;
  iVar5 = 0;
  if (param_1 == 0) {
    return 0;
  }
  local_res8 = param_1;
  iVar4 = FUN_1428cf800();
  if (iVar4 == 3) {
    return 0;
  }
  if ((param_6 == '\0') && (cVar3 = FUN_142f3f4c0(0), cVar3 == '\0')) {
    return 0;
  }
  local_78 = (longlong *)0x0;
  local_70 = 0;
  iStack_6c = 0;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  iStack_4c = 0;
  local_68 = (longlong *)0x0;
  local_60 = 0;
  if (*(int *)(param_3 + 1) < 2) {
    return 0;
  }
  uVar11 = *param_3;
  uVar6 = FUN_142f47520();
  lVar7 = FUN_141799c90(uVar6,0,uVar11,0,0,0,1);
  _Src = plVar15;
  plVar8 = plVar15;
  if ((lVar7 == 0) || ((param_6 == '\0' && (cVar3 = FUN_142f3f530(lVar7,0), cVar3 == '\0')))) {
LAB_142f45e7c:
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (plVar8 != (longlong *)0x0) {
      FMemory::Free(plVar8);
    }
    if (_Src != (longlong *)0x0) {
      FMemory::Free(_Src);
    }
    return 0;
  }
  plVar8 = (longlong *)FUN_142f40c20();
  if (((int)plVar8[1] != 0) &&
     (((longlong *)*plVar8 != (longlong *)0x0 &&
      (cVar3 = (**(code **)(*(longlong *)*plVar8 + 0x18))(), cVar3 != '\0')))) {
    puVar9 = (undefined8 *)FUN_142f40c20();
    plVar8 = plVar15;
    if (*(int *)(puVar9 + 1) != 0) {
      plVar8 = (longlong *)*puVar9;
    }
    lVar10 = (**(code **)(*plVar8 + 0x38))();
    if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x538) != 0)) {
      uVar11 = AActor::GetWorldTimerManager(lVar10);
      FUN_142880530(uVar11,lVar10 + 0x538);
      *(undefined8 *)(lVar10 + 0x538) = 0;
      *(undefined4 *)(lVar10 + 0x4f0) = 0;
      *(undefined2 *)(lVar10 + 0x4f4) = 0;
    }
  }
  lVar10 = FUN_142f40c20();
  plVar8 = plVar15;
  if (*(int *)(lVar10 + 0x48) != 0) {
    plVar8 = *(longlong **)(lVar10 + 0x40);
  }
  (**(code **)(*plVar8 + 0x38))(plVar8,lVar7,param_4);
  if (*(int *)(param_2 + 8) < 2) {
    pplVar12 = (longlong **)FName::ToString(lVar7 + 0x30,local_48);
    if (&local_78 != pplVar12) {
      _Src = *pplVar12;
      *pplVar12 = (longlong *)0x0;
      iVar5 = *(int *)(pplVar12 + 1);
      pplVar12[1] = (longlong *)0x0;
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    UObjectBaseUtility::GetPathName(lVar7,&local_58,0);
    plVar8 = (longlong *)&DAT_143f3eda8;
    if (local_50 != 0) {
      plVar8 = local_58;
    }
    FString::PrintfImpl(&local_78,L"?travelstation=%s",plVar8);
    iVar4 = local_70;
    plVar8 = local_78;
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    FString::operator=(&local_78,param_2);
    FUN_142f3f5b0(param_3,&local_58);
    _Src = local_78;
    plVar8 = local_58;
    iVar4 = local_50;
    iVar5 = local_70;
  }
  plVar13 = plVar15;
  if (iVar5 < 2) {
    local_58 = (longlong *)0x0;
    local_50 = iVar4;
    if (iVar4 == 0) {
      local_88 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,iVar4,0);
      plVar13 = local_58;
      _guard_xfg_dispatch_icall_nop(local_58,plVar8,(longlong)iVar4 * 2);
      iVar4 = local_50;
      local_88 = iStack_4c;
    }
  }
  else {
    iVar14 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar14 = 0;
    }
    if ((iVar5 != 0) || (iVar4 = 1, iVar14 == 0)) {
      iVar4 = 0;
    }
    local_78 = (longlong *)0x0;
    local_70 = iVar5;
    if ((iVar5 == 0) && (iVar4 + iVar14 == 0)) {
      iStack_6c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,iVar5 + iVar4 + iVar14,0);
      plVar13 = local_78;
      _guard_xfg_dispatch_icall_nop(local_78,_Src,(longlong)iVar5 * 2);
    }
    iVar5 = local_70;
    iVar4 = local_70;
    local_88 = iStack_6c;
    if (iVar14 != 0) {
      lVar10 = (longlong)local_70;
      local_70 = local_70 + (uint)(local_70 == 0) + iVar14;
      if (iStack_6c < local_70) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar5);
        plVar13 = local_78;
      }
      local_88 = iStack_6c;
      iVar4 = local_70;
      _Dst = (undefined2 *)((lVar10 - (ulonglong)(iVar5 != 0)) * 2 + (longlong)plVar13);
      _guard_xfg_dispatch_icall_nop(_Dst,plVar8,(longlong)iVar14 * 2);
      _Dst[iVar14] = 0;
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar10 = local_res8;
  local_60 = CONCAT44(local_88,iVar4);
  local_68 = plVar13;
  iVar5 = FUN_1428cf800(local_res8);
  if (iVar5 == 3) goto LAB_142f45e7c;
  if (((param_5 == '\0') && (*(longlong *)(lVar10 + 0x30) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(lVar10 + 0x30) + 0xc0), lVar1 != 0)) {
    local_res8 = *(longlong *)(lVar1 + 0x18);
    FName::ToString(&local_res8,&local_58);
    plVar13 = (longlong *)&DAT_143f3eda8;
    if (local_50 != 0) {
      plVar13 = local_58;
    }
    plVar13 = (longlong *)FName::FName(&local_res8,plVar13,1);
    if (*plVar13 == *(longlong *)(lVar7 + 0x30)) {
LAB_142f45df6:
      bVar2 = true;
    }
    else {
      plVar15 = (longlong *)0x1;
      uVar11 = FName::ToString((longlong *)(lVar7 + 0x30),local_48);
      cVar3 = FString::EndsWith(uVar11,&local_58,1);
      if (cVar3 != '\0') goto LAB_142f45df6;
      bVar2 = false;
    }
    if ((plVar15 != (longlong *)0x0) && (local_48[0] != 0)) {
      FMemory::Free();
    }
    if (bVar2) {
      FUN_142f45450(lVar10,param_3,param_4);
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      goto LAB_142f45e50;
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  FUN_1428d76e0(lVar10,&local_68,1,0);
LAB_142f45e50:
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (plVar8 != (longlong *)0x0) {
    FMemory::Free(plVar8);
  }
  if (_Src != (longlong *)0x0) {
    FMemory::Free(_Src);
  }
  return 1;
}



// FUNCTION 142f45ed0 FUN_142f45ed0 body=433 status=ok
// SIG undefined FUN_142f45ed0(void)

undefined8
FUN_142f45ed0(longlong *param_1,longlong *param_2,char param_3,longlong param_4,undefined1 param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong local_res10;
  longlong local_38 [2];
  
  plVar8 = (longlong *)0x0;
  local_res10 = local_res10 & 0xffffffff00000000;
  plVar9 = plVar8;
  if (param_2 == (longlong *)0x0) {
LAB_142f45f1e:
    bVar1 = false;
  }
  else {
    lVar4 = (**(code **)(*param_2 + 0x298))(param_2,local_38);
    plVar9 = (longlong *)0x1;
    if (*(int *)(lVar4 + 8) < 2) goto LAB_142f45f1e;
    bVar1 = true;
  }
  if ((plVar9 != (longlong *)0x0) && (local_38[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar1) && (param_1 != (longlong *)0x0)) {
    lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar4 == 0) {
      return 0;
    }
    if ((((param_4 != 0) && (lVar5 = (**(code **)(*param_1 + 0x148))(param_1), lVar5 != 0)) &&
        (*(longlong *)(lVar5 + 0x30) != 0)) &&
       (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0xc0), lVar5 != 0)) {
      local_res10 = *(ulonglong *)(lVar5 + 0x18);
      FName::ToString(&local_res10,local_38);
      cVar2 = FUN_142f3e860(param_2[6],local_38);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      if (cVar2 != '\0') goto LAB_142f4604d;
    }
    if (((param_3 != '\0') || (iVar3 = FUN_1428cf800(lVar4), iVar3 == 0)) ||
       ((*(longlong **)(lVar4 + 0x140) != (longlong *)0x0 &&
        (iVar3 = (**(code **)(**(longlong **)(lVar4 + 0x140) + 0x760))(), iVar3 == 1)))) {
LAB_142f4604d:
      uVar7 = FUN_142f46290(param_1,param_2,param_4,param_5,param_3);
      return uVar7;
    }
    plVar9 = (longlong *)FUN_142f40c20();
    if ((((int)plVar9[1] != 0) && ((longlong *)*plVar9 != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(*(longlong *)*plVar9 + 0x18))(), cVar2 != '\0')) {
      puVar6 = (undefined8 *)FUN_142f40c20();
      if (*(int *)(puVar6 + 1) != 0) {
        plVar8 = (longlong *)*puVar6;
      }
      lVar4 = (**(code **)(*plVar8 + 0x38))(plVar8);
      if (lVar4 != 0) {
        FUN_142f443f0(lVar4,param_2,param_5);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142f46090 FUN_142f46090 body=506 status=ok
// SIG undefined FUN_142f46090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f46090(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  *(int *)(param_1 + 0x9e) = (int)param_1[0x9e] + -1;
  if ((int)param_1[0x9e] < 1) {
    if (*(char *)((longlong)param_1 + 0x4f4) == '\x01') {
      uVar1 = (**(code **)(*param_1 + 0x148))();
      local_98 = 0;
      FUN_142f46290(uVar1,param_1[0x9d],0,*(undefined1 *)((longlong)param_1 + 0x4f5));
    }
  }
  else {
    uVar1 = AActor::GetWorldTimerManager();
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      plVar2[2] = (longlong)FUN_142f46090;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[4] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_143f4d1b8;
    }
    local_88 = 0;
    local_80 = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_90 = 0xbf800000;
    local_98 = 0;
    local_70 = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar1,param_1 + 0xa7,&local_88,0x3f800000);
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
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      lVar3 = FMemory::Realloc(plVar2,0,0);
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
    }
    (**(code **)(*param_1 + 0x6f0))(param_1);
  }
  return;
}



// FUNCTION 142f46290 FUN_142f46290 body=795 status=ok
// SIG undefined FUN_142f46290(void)

ulonglong FUN_142f46290(longlong *param_1,longlong *param_2,undefined8 param_3,char param_4,
                       undefined1 param_5)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  ulonglong in_RAX;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 local_res10;
  longlong local_68;
  int local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  
  if (param_2 == (longlong *)0x0) goto LAB_142f4659d;
  (**(code **)(*param_2 + 0x298))(param_2,local_58);
  in_RAX = (**(code **)(*param_2 + 0x288))(param_2,local_38);
  if (param_1 != (longlong *)0x0) {
    lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    in_RAX = 0;
    if ((lVar4 != 0) && (in_RAX = FUN_1428cf800(lVar4), (int)in_RAX != 3)) {
      plVar8 = (longlong *)0x1;
      lVar5 = (**(code **)(*param_2 + 0x2a0))(param_2);
      if ((lVar5 != 0) && (*(longlong **)(lVar5 + 0xb8) != (longlong *)0x0)) {
        cVar2 = (**(code **)(**(longlong **)(lVar5 + 0xb8) + 0x288))();
        plVar10 = (longlong *)0x0;
        if (cVar2 != '\0') {
          UWorld::GetPlayerControllerIterator(lVar4,&local_68);
          while( true ) {
            if ((local_60 < 0) || (*(int *)(local_68 + 8) <= local_60)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (!bVar1) break;
            lVar6 = FWeakObjectPtr::Get();
            if (lVar6 != 0) {
              lVar7 = FUN_1429e18b0();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if ((bVar1) &&
                 (cVar2 = (**(code **)(**(longlong **)(lVar5 + 0xb8) + 0x280))
                                    (*(longlong **)(lVar5 + 0xb8),lVar6), cVar2 == '\0')) {
                plVar8 = plVar10;
              }
            }
            local_60 = local_60 + 1;
          }
          if ((char)plVar8 != '\0') goto LAB_142f4646e;
        }
        plVar8 = (longlong *)FUN_142f40c20();
        if ((((int)plVar8[1] == 0) || ((longlong *)*plVar8 == (longlong *)0x0)) ||
           (cVar2 = (**(code **)(*(longlong *)*plVar8 + 0x18))(), cVar2 == '\0')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          puVar9 = (undefined8 *)FUN_142f40c20();
          if (*(int *)(puVar9 + 1) != 0) {
            plVar10 = (longlong *)*puVar9;
          }
          plVar8 = (longlong *)(**(code **)(*plVar10 + 0x38))();
          if (plVar8 != (longlong *)0x0) {
            plVar8[0x9d] = (longlong)param_2;
            *(undefined4 *)(plVar8 + 0x9e) = 0;
            *(undefined1 *)((longlong)plVar8 + 0x4f4) = 5;
            (**(code **)(*plVar8 + 0x6f0))(plVar8);
          }
        }
        bVar3 = 0;
        goto LAB_142f4653a;
      }
LAB_142f4646e:
      if (((param_4 == '\0') && (*(longlong *)(lVar4 + 0x30) != 0)) &&
         (lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0xc0), lVar5 != 0)) {
        local_res10 = *(undefined8 *)(lVar5 + 0x18);
        FName::ToString(&local_res10,&local_68);
        puVar9 = (undefined8 *)(**(code **)(*param_2 + 0x290))(param_2,&local_res10);
        cVar2 = FUN_142f3e860(*puVar9,&local_68);
        if (cVar2 == '\0') {
          if (local_68 != 0) {
            FMemory::Free();
          }
          goto LAB_142f464f1;
        }
        bVar3 = FUN_142f45450(lVar4,local_58,param_3);
      }
      else {
LAB_142f464f1:
        (**(code **)(*param_2 + 0x288))(param_2,local_48);
        bVar3 = FUN_142f45a00(lVar4,local_48,local_58,param_3,param_4,param_5);
        local_68 = local_48[0];
      }
      if (local_68 != 0) {
        FMemory::Free();
      }
LAB_142f4653a:
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      return (ulonglong)bVar3;
    }
  }
  if (local_38[0] != 0) {
    in_RAX = FMemory::Free();
  }
  if (local_58[0] != 0) {
    in_RAX = FMemory::Free();
  }
LAB_142f4659d:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142f465d0 FUN_142f465d0 body=47 status=ok
// SIG undefined FUN_142f465d0(void)

longlong FUN_142f465d0(void)

{
  if (DAT_146b426e8 == 0) {
    FUN_141786a30(&DAT_146b426e8,&PTR_FUN_14675fb80);
  }
  return DAT_146b426e8;
}



// FUNCTION 142f46600 FUN_142f46600 body=47 status=ok
// SIG undefined FUN_142f46600(void)

longlong FUN_142f46600(void)

{
  if (DAT_146b426f0 == 0) {
    FUN_141786a30(&DAT_146b426f0,&PTR_FUN_14675fd70);
  }
  return DAT_146b426f0;
}



// FUNCTION 142f46630 FUN_142f46630 body=47 status=ok
// SIG undefined FUN_142f46630(void)

longlong FUN_142f46630(void)

{
  if (DAT_146b426f8 == 0) {
    FUN_141786a30(&DAT_146b426f8,&PTR_FUN_14675ff60);
  }
  return DAT_146b426f8;
}



// FUNCTION 142f46660 FUN_142f46660 body=53 status=ok
// SIG undefined FUN_142f46660(void)

void FUN_142f46660(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1459d9c30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f466c0 FUN_142f466c0 body=47 status=ok
// SIG undefined FUN_142f466c0(void)

longlong FUN_142f466c0(void)

{
  if (DAT_146b42710 == 0) {
    FUN_141786a30(&DAT_146b42710,&PTR_FUN_146760070);
  }
  return DAT_146b42710;
}



// FUNCTION 142f46700 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UMoviePlayerSettings::StaticClass(void)

{
  if (DAT_146b42730 == 0) {
    FUN_14171ccd0(L"/Script/GbxTravelStation",L"TravelStationModuleSettings",&DAT_146b42730,
                  FUN_140447710,0x40,0x10000006,0,L"Game",FUN_142f4a040,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b42730;
}



// FUNCTION 142f467b0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong AArchVisCharacter::StaticClass(void)

{
  if (DAT_146b42770 == 0) {
    FUN_14171ccd0(L"/Script/GbxTravelStation",L"TravelStationResurrectComponent",&DAT_146b42770,
                  FUN_142f4b390,0x7a0,0x10000000,0,L"Engine",&LAB_142f4a080,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142f46fc0,&LAB_140447700,0);
  }
  return DAT_146b42770;
}



// FUNCTION 142f46860 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ATroiCaoGateActor::GetPrivateStaticClass(void)

{
  if (DAT_146b42610 == 0) {
    FUN_14171ccd0(L"/Script/GbxTravelStation",L"FastTravelStationDebugMenu",&DAT_146b42610,
                  StaticRegisterNativesATroiCaoGateActor,0x360,0x10000000,0,L"Game",FUN_142f49d70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141301c60,&LAB_140447700,0);
  }
  return DAT_146b42610;
}



// FUNCTION 142f46920 FUN_142f46920 body=47 status=ok
// SIG undefined FUN_142f46920(void)

longlong FUN_142f46920(void)

{
  if (DAT_146b42768 == 0) {
    FUN_141786440(&DAT_146b42768,&PTR_StaticClass_1459d5840);
  }
  return DAT_146b42768;
}



// FUNCTION 142f46950 FUN_142f46950 body=47 status=ok
// SIG undefined FUN_142f46950(void)

longlong FUN_142f46950(void)

{
  if (DAT_146b42758 == 0) {
    FUN_141786a30(&DAT_146b42758,&PTR_FUN_1467606d0);
  }
  return DAT_146b42758;
}



// FUNCTION 142f46980 FUN_142f46980 body=47 status=ok
// SIG undefined FUN_142f46980(void)

longlong FUN_142f46980(void)

{
  if (DAT_146b42760 == 0) {
    FUN_141786a30(&DAT_146b42760,&PTR_FUN_146760710);
  }
  return DAT_146b42760;
}



// FUNCTION 142f469b0 FUN_142f469b0 body=53 status=ok
// SIG undefined FUN_142f469b0(void)

void FUN_142f469b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_1459db8b0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f469f0 FUN_142f469f0 body=47 status=ok
// SIG undefined FUN_142f469f0(void)

longlong FUN_142f469f0(void)

{
  if (DAT_146b42608 == 0) {
    FUN_141786440(&DAT_146b42608,&PTR_GetPrivateStaticClass_1459d5e00);
  }
  return DAT_146b42608;
}



// FUNCTION 142f46a20 FUN_142f46a20 body=47 status=ok
// SIG undefined FUN_142f46a20(void)

longlong FUN_142f46a20(void)

{
  if (DAT_146b425e8 == 0) {
    FUN_141786a30(&DAT_146b425e8,&PTR_FUN_14675e840);
  }
  return DAT_146b425e8;
}



// FUNCTION 142f46a50 FUN_142f46a50 body=47 status=ok
// SIG undefined FUN_142f46a50(void)

longlong FUN_142f46a50(void)

{
  if (DAT_146b425f0 == 0) {
    FUN_141786a30(&DAT_146b425f0,&PTR_FUN_14675e8d0);
  }
  return DAT_146b425f0;
}



// FUNCTION 142f46a80 FUN_142f46a80 body=47 status=ok
// SIG undefined FUN_142f46a80(void)

longlong FUN_142f46a80(void)

{
  if (DAT_146b425f8 == 0) {
    FUN_141786a30(&DAT_146b425f8,&PTR_FUN_14675e910);
  }
  return DAT_146b425f8;
}



// FUNCTION 142f46ab0 FUN_142f46ab0 body=47 status=ok
// SIG undefined FUN_142f46ab0(void)

longlong FUN_142f46ab0(void)

{
  if (DAT_146b42600 == 0) {
    FUN_141786a30(&DAT_146b42600,&PTR_FUN_14675e9e0);
  }
  return DAT_146b42600;
}



// FUNCTION 142f46ae0 FUN_142f46ae0 body=53 status=ok
// SIG undefined FUN_142f46ae0(void)

void FUN_142f46ae0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_1459db190;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f46b30 FUN_142f46b30 body=162 status=ok
// SIG undefined FUN_142f46b30(void)

longlong FUN_142f46b30(void)

{
  if (DAT_146b42788 == 0) {
    FUN_14171ccd0(L"/Script/GbxTravelStation",L"TravelStationSpawnPointInterface",&DAT_146b42788,
                  FUN_140447710,0x28,0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146b42788;
}



// FUNCTION 142f46bf0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGButton::GetPrivateStaticClass(void)

{
  if (DAT_146b42798 == 0) {
    FUN_14171ccd0(L"/Script/GbxTravelStation",L"TravelStationSpawnPointComponent",&DAT_146b42798,
                  FUN_140447710,0x740,0x10000000,0,L"Engine",&LAB_142f4a0a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142912e90,&LAB_140447700,0);
  }
  return DAT_146b42798;
}



// FUNCTION 142f46ca0 FUN_142f46ca0 body=151 status=ok
// SIG undefined FUN_142f46ca0(void)

longlong FUN_142f46ca0(void)

{
  if (DAT_146b426c0 == 0) {
    FUN_14171ccd0(L"/Script/GbxTravelStation",L"TravelGraph",&DAT_146b426c0,FUN_140447710,0x90,
                  0x10000000,0,L"Engine",&LAB_142f49fb0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b426c0;
}



// FUNCTION 142f46d50 FUN_142f46d50 body=47 status=ok
// SIG undefined FUN_142f46d50(void)

longlong FUN_142f46d50(void)

{
  if (DAT_146b42838 == 0) {
    FUN_141786440(&DAT_146b42838,&PTR_GetPrivateStaticClass_1459d6df0);
  }
  return DAT_146b42838;
}



// FUNCTION 142f46d80 FUN_142f46d80 body=47 status=ok
// SIG undefined FUN_142f46d80(void)

longlong FUN_142f46d80(void)

{
  if (DAT_146b427d8 == 0) {
    FUN_141786a30(&DAT_146b427d8,&PTR_FUN_146761070);
  }
  return DAT_146b427d8;
}



// FUNCTION 142f46db0 FUN_142f46db0 body=47 status=ok
// SIG undefined FUN_142f46db0(void)

longlong FUN_142f46db0(void)

{
  if (DAT_146b427e0 == 0) {
    FUN_141786a30(&DAT_146b427e0,&PTR_FUN_146761130);
  }
  return DAT_146b427e0;
}



// FUNCTION 142f46de0 FUN_142f46de0 body=47 status=ok
// SIG undefined FUN_142f46de0(void)

longlong FUN_142f46de0(void)

{
  if (DAT_146b427e8 == 0) {
    FUN_141786a30(&DAT_146b427e8,&PTR_FUN_1467611f0);
  }
  return DAT_146b427e8;
}



// FUNCTION 142f46e10 FUN_142f46e10 body=47 status=ok
// SIG undefined FUN_142f46e10(void)

longlong FUN_142f46e10(void)

{
  if (DAT_146b427f0 == 0) {
    FUN_141786a30(&DAT_146b427f0,&PTR_FUN_1467612b0);
  }
  return DAT_146b427f0;
}



// FUNCTION 142f46e40 FUN_142f46e40 body=47 status=ok
// SIG undefined FUN_142f46e40(void)

longlong FUN_142f46e40(void)

{
  if (DAT_146b427f8 == 0) {
    FUN_141786a30(&DAT_146b427f8,&PTR_FUN_146761370);
  }
  return DAT_146b427f8;
}



// FUNCTION 142f46e70 FUN_142f46e70 body=47 status=ok
// SIG undefined FUN_142f46e70(void)

longlong FUN_142f46e70(void)

{
  if (DAT_146b42800 == 0) {
    FUN_141786a30(&DAT_146b42800,&PTR_FUN_1467613f0);
  }
  return DAT_146b42800;
}



// FUNCTION 142f46ea0 FUN_142f46ea0 body=47 status=ok
// SIG undefined FUN_142f46ea0(void)

longlong FUN_142f46ea0(void)

{
  if (DAT_146b42808 == 0) {
    FUN_141786a30(&DAT_146b42808,&PTR_FUN_1467614b0);
  }
  return DAT_146b42808;
}



// FUNCTION 142f46ed0 FUN_142f46ed0 body=47 status=ok
// SIG undefined FUN_142f46ed0(void)

longlong FUN_142f46ed0(void)

{
  if (DAT_146b42810 == 0) {
    FUN_141786a30(&DAT_146b42810,&PTR_FUN_1467614f0);
  }
  return DAT_146b42810;
}



// FUNCTION 142f46f00 FUN_142f46f00 body=47 status=ok
// SIG undefined FUN_142f46f00(void)

longlong FUN_142f46f00(void)

{
  if (DAT_146b42818 == 0) {
    FUN_141786a30(&DAT_146b42818,&PTR_FUN_146761530);
  }
  return DAT_146b42818;
}



// FUNCTION 142f46f30 FUN_142f46f30 body=47 status=ok
// SIG undefined FUN_142f46f30(void)

longlong FUN_142f46f30(void)

{
  if (DAT_146b42820 == 0) {
    FUN_141786a30(&DAT_146b42820,&PTR_FUN_146761570);
  }
  return DAT_146b42820;
}



// FUNCTION 142f46f60 FUN_142f46f60 body=47 status=ok
// SIG undefined FUN_142f46f60(void)

longlong FUN_142f46f60(void)

{
  if (DAT_146b42828 == 0) {
    FUN_141786a30(&DAT_146b42828,&PTR_FUN_1467615b0);
  }
  return DAT_146b42828;
}



// FUNCTION 142f46f90 FUN_142f46f90 body=47 status=ok
// SIG undefined FUN_142f46f90(void)

longlong FUN_142f46f90(void)

{
  if (DAT_146b42830 == 0) {
    FUN_141786a30(&DAT_146b42830,&PTR_FUN_1467615f0);
  }
  return DAT_146b42830;
}



// FUNCTION 142f46fc0 FUN_142f46fc0 body=162 status=ok
// SIG undefined FUN_142f46fc0(void)

longlong FUN_142f46fc0(void)

{
  if (DAT_146b42708 == 0) {
    FUN_14171ccd0(L"/Script/GbxTravelStation",L"TravelStationComponentBase",&DAT_146b42708,
                  FUN_142f4b330,0x710,0x10000000,0,L"Engine",&LAB_142f4a000,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079feb0,&LAB_140447700,0);
  }
  return DAT_146b42708;
}



// FUNCTION 142f47080 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGButton::GetPrivateStaticClass(void)

{
  if (DAT_146b42598 == 0) {
    FUN_14171ccd0(L"/Script/GbxTravelStation",L"FastTravelStationComponent",&DAT_146b42598,
                  FUN_142f4b240,0x740,0x10000000,0,L"Engine",&LAB_142f49c90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142f46fc0,&LAB_140447700,0);
  }
  return DAT_146b42598;
}



// FUNCTION 142f47130 FUN_142f47130 body=47 status=ok
// SIG undefined FUN_142f47130(void)

longlong FUN_142f47130(void)

{
  if (DAT_146b42590 == 0) {
    FUN_141786440(&DAT_146b42590,&PTR_GetPrivateStaticClass_1459d7920);
  }
  return DAT_146b42590;
}



// FUNCTION 142f47160 FUN_142f47160 body=47 status=ok
// SIG undefined FUN_142f47160(void)

longlong FUN_142f47160(void)

{
  if (DAT_146b42700 == 0) {
    FUN_141786440(&DAT_146b42700,&PTR_FUN_1459d3870);
  }
  return DAT_146b42700;
}



// FUNCTION 142f47190 FUN_142f47190 body=47 status=ok
// SIG undefined FUN_142f47190(void)

longlong FUN_142f47190(void)

{
  if (DAT_146b42570 == 0) {
    FUN_141786a30(&DAT_146b42570,&PTR_FUN_14675e070);
  }
  return DAT_146b42570;
}



// FUNCTION 142f471c0 FUN_142f471c0 body=47 status=ok
// SIG undefined FUN_142f471c0(void)

longlong FUN_142f471c0(void)

{
  if (DAT_146b42578 == 0) {
    FUN_141786a30(&DAT_146b42578,&PTR_FUN_14675e140);
  }
  return DAT_146b42578;
}



// FUNCTION 142f471f0 FUN_142f471f0 body=47 status=ok
// SIG undefined FUN_142f471f0(void)

longlong FUN_142f471f0(void)

{
  if (DAT_146b42580 == 0) {
    FUN_141786a30(&DAT_146b42580,&PTR_FUN_14675e240);
  }
  return DAT_146b42580;
}



// FUNCTION 142f47220 FUN_142f47220 body=47 status=ok
// SIG undefined FUN_142f47220(void)

longlong FUN_142f47220(void)

{
  if (DAT_146b42588 == 0) {
    FUN_141786a30(&DAT_146b42588,&PTR_FUN_14675e2c0);
  }
  return DAT_146b42588;
}



// FUNCTION 142f47250 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGButton::GetPrivateStaticClass(void)

{
  if (DAT_146b42850 == 0) {
    FUN_14171ccd0(L"/Script/GbxTravelStation",L"TravelStationVehicleSpawnPointComponent",
                  &DAT_146b42850,FUN_140447710,0x740,0x10000000,0,L"Engine",&LAB_142f4a0c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1412e8700,&LAB_140447700,0);
  }
  return DAT_146b42850;
}



// FUNCTION 142f47300 FUN_142f47300 body=47 status=ok
// SIG undefined FUN_142f47300(void)

longlong FUN_142f47300(void)

{
  if (DAT_146b42628 == 0) {
    FUN_141786440(&DAT_146b42628,&PTR_thunk_FUN_142f4aef0_1459d7570);
  }
  return DAT_146b42628;
}



// FUNCTION 142f47330 FUN_142f47330 body=47 status=ok
// SIG undefined FUN_142f47330(void)

longlong FUN_142f47330(void)

{
  if (DAT_146b426b8 == 0) {
    FUN_141786440(&DAT_146b426b8,&PTR_FUN_1459d9310);
  }
  return DAT_146b426b8;
}



// FUNCTION 142f47360 FUN_142f47360 body=47 status=ok
// SIG undefined FUN_142f47360(void)

longlong FUN_142f47360(void)

{
  if (DAT_146b42620 == 0) {
    FUN_141786a30(&DAT_146b42620,&PTR_FUN_14675ee60);
  }
  return DAT_146b42620;
}



// FUNCTION 142f473c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGHitTextureButton::GetPrivateStaticClass(void)

{
  if (DAT_146b42668 == 0) {
    FUN_14171ccd0(L"/Script/GbxTravelStation",L"LevelTravelStationComponent",&DAT_146b42668,
                  StaticRegisterNativesUUGHitTextureButton,0x750,0x10000000,0,L"Engine",
                  &LAB_142f49e40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142f46fc0,&LAB_140447700,0);
  }
  return DAT_146b42668;
}



// FUNCTION 142f47470 FUN_142f47470 body=162 status=ok
// SIG undefined FUN_142f47470(void)

longlong FUN_142f47470(void)

{
  if (DAT_146b426d0 == 0) {
    FUN_14171ccd0(L"/Script/GbxTravelStation",L"TravelLocationData",&DAT_146b426d0,FUN_140447710,
                  0x30,0x10000001,0,L"Engine",FUN_142f49fd0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_146b426d0;
}



// FUNCTION 142f47520 FUN_142f47520 body=162 status=ok
// SIG undefined FUN_142f47520(void)

longlong FUN_142f47520(void)

{
  if (DAT_146b42720 == 0) {
    FUN_14171ccd0(L"/Script/GbxTravelStation",L"TravelStationData",&DAT_146b42720,FUN_142f4b360,0xd8
                  ,0x10000001,0,L"Engine",&LAB_142f4a020,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142f47470,&LAB_140447700,0);
  }
  return DAT_146b42720;
}



// FUNCTION 142f475d0 FUN_142f475d0 body=162 status=ok
// SIG undefined FUN_142f475d0(void)

longlong FUN_142f475d0(void)

{
  if (DAT_146b425d0 == 0) {
    FUN_14171ccd0(L"/Script/GbxTravelStation",L"FastTravelStationDebugButton",&DAT_146b425d0,
                  FUN_142f4b270,0x2f8,0x10000000,0,L"Engine",FUN_142f49d10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141301c80,&LAB_140447700,0);
  }
  return DAT_146b425d0;
}



// FUNCTION 142f47680 FUN_142f47680 body=47 status=ok
// SIG undefined FUN_142f47680(void)

longlong FUN_142f47680(void)

{
  if (DAT_146b425c8 == 0) {
    FUN_141786440(&DAT_146b425c8,&PTR_FUN_1459d7cc0);
  }
  return DAT_146b425c8;
}



// FUNCTION 142f476b0 FUN_142f476b0 body=47 status=ok
// SIG undefined FUN_142f476b0(void)

longlong FUN_142f476b0(void)

{
  if (DAT_146b425c0 == 0) {
    FUN_141786a30(&DAT_146b425c0,&PTR_FUN_14675e5b0);
  }
  return DAT_146b425c0;
}



// FUNCTION 142f476e0 FUN_142f476e0 body=47 status=ok
// SIG undefined FUN_142f476e0(void)

longlong FUN_142f476e0(void)

{
  if (DAT_146b42660 == 0) {
    FUN_141786440(&DAT_146b42660,&PTR_GetPrivateStaticClass_1459d8040);
  }
  return DAT_146b42660;
}



// FUNCTION 142f47710 FUN_142f47710 body=47 status=ok
// SIG undefined FUN_142f47710(void)

longlong FUN_142f47710(void)

{
  if (DAT_146b42650 == 0) {
    FUN_141786a30(&DAT_146b42650,&PTR_FUN_14675f170);
  }
  return DAT_146b42650;
}



// FUNCTION 142f47740 FUN_142f47740 body=47 status=ok
// SIG undefined FUN_142f47740(void)

longlong FUN_142f47740(void)

{
  if (DAT_146b42658 == 0) {
    FUN_141786a30(&DAT_146b42658,&PTR_FUN_14675f1f0);
  }
  return DAT_146b42658;
}



// FUNCTION 142f47770 FUN_142f47770 body=53 status=ok
// SIG undefined FUN_142f47770(void)

void FUN_142f47770(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_1459db360;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f477c0 FUN_142f477c0 body=162 status=ok
// SIG undefined FUN_142f477c0(void)

longlong FUN_142f477c0(void)

{
  if (DAT_146b425b0 == 0) {
    FUN_14171ccd0(L"/Script/GbxTravelStation",L"FastTravelStationData",&DAT_146b425b0,FUN_140447710,
                  0x120,0x10000000,0,L"Engine",FUN_142f49cb0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142f47520,&LAB_140447700,0);
  }
  return DAT_146b425b0;
}



// FUNCTION 142f47880 FUN_142f47880 body=47 status=ok
// SIG undefined FUN_142f47880(void)

longlong FUN_142f47880(void)

{
  if (DAT_146b42718 == 0) {
    FUN_141786440(&DAT_146b42718,&PTR_FUN_1459d4d90);
  }
  return DAT_146b42718;
}



// FUNCTION 142f478b0 FUN_142f478b0 body=162 status=ok
// SIG undefined FUN_142f478b0(void)

longlong FUN_142f478b0(void)

{
  if (DAT_146b42678 == 0) {
    FUN_14171ccd0(L"/Script/GbxTravelStation",L"LevelTravelStationData",&DAT_146b42678,FUN_140447710
                  ,0x120,0x10000000,0,L"Engine",FUN_142f49e60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142f47520,&LAB_140447700,0);
  }
  return DAT_146b42678;
}



// FUNCTION 142f47980 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UTextureRenderTargetCube::GetPrivateStaticClass(void)

{
  if (DAT_146b42688 == 0) {
    FUN_14171ccd0(L"/Script/GbxTravelStation",L"ResurrectTravelStationData",&DAT_146b42688,
                  FUN_140447710,0xd8,0x10000000,0,L"Engine",FUN_142f49f80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142f47520,&LAB_140447700,0);
  }
  return DAT_146b42688;
}



// FUNCTION 142f47a40 FUN_142f47a40 body=162 status=ok
// SIG undefined FUN_142f47a40(void)

longlong FUN_142f47a40(void)

{
  if (DAT_146b426a0 == 0) {
    FUN_14171ccd0(L"/Script/GbxTravelStation",L"TeleportDestinationActor",&DAT_146b426a0,
                  FUN_142f4b1e0,0x460,0x10000001,0,L"Engine",&LAB_142f49c30,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146b426a0;
}



// FUNCTION 142f47af0 FUN_142f47af0 body=47 status=ok
// SIG undefined FUN_142f47af0(void)

longlong FUN_142f47af0(void)

{
  if (DAT_146b42698 == 0) {
    FUN_141786440(&DAT_146b42698,&PTR_FUN_1459d9030);
  }
  return DAT_146b42698;
}



// FUNCTION 142f47b20 FUN_142f47b20 body=47 status=ok
// SIG undefined FUN_142f47b20(void)

longlong FUN_142f47b20(void)

{
  if (DAT_146b42690 == 0) {
    FUN_141786a30(&DAT_146b42690,&PTR_FUN_14675f600);
  }
  return DAT_146b42690;
}



// FUNCTION 142f47b60 FUN_142f47b60 body=53 status=ok
// SIG undefined FUN_142f47b60(void)

void FUN_142f47b60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_1459db758;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f47bb0 FUN_142f47bb0 body=47 status=ok
// SIG undefined FUN_142f47bb0(void)

longlong FUN_142f47bb0(void)

{
  if (DAT_146b426c8 == 0) {
    FUN_141786440(&DAT_146b426c8,&PTR_FUN_1459d9540);
  }
  return DAT_146b426c8;
}



// FUNCTION 142f47bf0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AXScriptedBotSpawner::GetPrivateStaticClass(void)

{
  if (DAT_146b426e0 == 0) {
    FUN_14171ccd0(L"/Script/GbxTravelStation",L"TravelStationBase",&DAT_146b426e0,FUN_140447710,
                  0x458,0x10000001,0,L"Engine",&LAB_142f49c50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146b426e0;
}



// FUNCTION 142f47ca0 FUN_142f47ca0 body=47 status=ok
// SIG undefined FUN_142f47ca0(void)

longlong FUN_142f47ca0(void)

{
  if (DAT_146b42618 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146b42618,&PTR_s__Script_GbxTravelStation_1459db328);
  }
  return DAT_146b42618;
}



// FUNCTION 142f47ce0 FUN_142f47ce0 body=53 status=ok
// SIG undefined FUN_142f47ce0(void)

void FUN_142f47ce0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 200;
    *puVar1 = &PTR_FUN_1459d9b18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142f47d20 FUN_142f47d20 body=7940 status=ok
// SIG undefined FUN_142f47d20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_142f47d20(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  uint **ppuVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  longlong *plVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  longlong *plVar11;
  int *piVar12;
  uint *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint *puVar18;
  longlong lVar19;
  longlong *plVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  uint *puVar25;
  uint *puVar26;
  undefined8 uVar27;
  longlong *plVar28;
  uint *puVar29;
  undefined1 auStack_618 [32];
  uint *local_5f8;
  char *local_5f0;
  char local_5e8 [4];
  uint local_5e4;
  longlong *local_5e0;
  char local_5d8;
  char local_5d7;
  undefined1 local_5d6 [2];
  uint local_5d4;
  longlong *local_5d0;
  undefined4 local_5c8;
  uint local_5c4;
  uint local_5c0;
  uint local_5bc;
  uint local_5b8 [2];
  uint *local_5b0;
  uint local_5a8;
  undefined4 local_5a4;
  int local_5a0;
  uint local_59c;
  undefined4 local_598;
  int local_594;
  uint *local_590;
  undefined8 uStack_588;
  uint *puStack_580;
  undefined1 auStack_578 [16];
  longlong local_568;
  longlong *local_560;
  int local_558 [2];
  undefined8 local_550;
  int local_548;
  int local_544;
  uint *local_540;
  int local_538;
  undefined4 uStack_534;
  int local_530;
  undefined4 uStack_52c;
  int local_528;
  int local_524;
  uint *local_520;
  longlong *local_518;
  uint *local_510;
  undefined8 uStack_508;
  uint *local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  int local_4e8 [2];
  uint local_4e0;
  uint uStack_4dc;
  uint *puStack_4d8;
  undefined4 local_4d0;
  uint uStack_4cc;
  uint uStack_4c8;
  undefined4 uStack_4c4;
  uint local_4c0;
  uint uStack_4bc;
  uint *puStack_4b8;
  undefined4 local_4b0;
  uint uStack_4ac;
  uint uStack_4a8;
  undefined4 uStack_4a4;
  uint local_4a0;
  uint uStack_49c;
  uint *puStack_498;
  undefined4 local_490;
  int iStack_48c;
  uint uStack_488;
  undefined4 uStack_484;
  uint local_480;
  uint uStack_47c;
  uint *puStack_478;
  undefined4 local_470;
  undefined8 uStack_46c;
  undefined4 uStack_464;
  longlong *local_460;
  uint *local_458;
  longlong *local_448;
  undefined8 uStack_440;
  uint *local_438;
  undefined8 uStack_430;
  undefined1 local_428 [16];
  longlong *local_418;
  char local_410;
  char cStack_40f;
  undefined4 local_408;
  undefined4 uStack_404;
  uint *puStack_400;
  undefined4 local_3f8;
  undefined8 uStack_3f4;
  undefined4 uStack_3ec;
  undefined4 local_3e8;
  uint uStack_3e4;
  uint *puStack_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  uint *puStack_3c0;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  longlong *local_3a8;
  undefined8 uStack_3a0;
  uint *local_398;
  undefined8 uStack_390;
  undefined4 local_388;
  undefined4 uStack_384;
  longlong *local_380;
  uint *local_378;
  undefined8 uStack_370;
  uint *local_368;
  undefined8 uStack_360;
  undefined1 local_358 [16];
  uint *local_348;
  undefined2 local_340;
  undefined8 local_338;
  undefined4 uStack_330;
  uint uStack_32c;
  uint *local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined1 local_310 [4];
  undefined1 local_30c [4];
  longlong *local_308;
  uint uStack_300;
  uint uStack_2fc;
  uint *local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  uint *local_2e0;
  longlong *local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  uint *local_2c0;
  uint *local_2b8;
  longlong local_2b0;
  uint *local_2a8;
  uint local_290;
  uint uStack_28c;
  uint local_270;
  uint uStack_26c;
  int local_250;
  int iStack_24c;
  int local_230;
  int iStack_22c;
  uint local_218 [36];
  longlong local_188;
  longlong local_158 [4];
  longlong *local_138;
  undefined8 local_130;
  undefined1 local_128 [32];
  undefined1 *local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [32];
  undefined1 *local_d8;
  undefined8 local_d0;
  longlong local_c8 [8];
  longlong *local_88;
  undefined8 local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_618;
  local_5e0 = param_2;
  local_5d0 = param_1;
  local_560 = param_3;
  local_550 = FUN_142f4b640();
  puVar25 = (uint *)0x0;
  iVar7 = 0;
  if ((((char)param_2[8] != '\0') || (*param_2 == 0)) &&
     ((int)param_3[1] - *(int *)((longlong)param_3 + 0x34) != (int)param_1[1])) {
    TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty(param_3,0);
    local_5a8 = 0;
    puVar18 = puVar25;
    if (0 < (int)param_1[1]) {
      do {
        uVar24 = (uint)puVar18;
        if ((*(int *)(*param_1 + (longlong)(int)uVar24 * 0x18) != -1) || (*param_2 != 0)) {
          local_2a8 = &local_5a8;
          local_2b0 = *param_1 + (longlong)(int)uVar24 * 0x18;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_&&>_>(param_3,local_30c,&local_2b0,0);
          uVar24 = local_5a8;
        }
        local_5a8 = uVar24 + 1;
        puVar18 = (uint *)(ulonglong)local_5a8;
      } while ((int)local_5a8 < (int)param_1[1]);
    }
  }
  if (param_2[10] == 0) {
    if ((int *)param_2[0xc] != (int *)0x0) {
      iVar7 = *(int *)param_2[0xc];
      local_5d0 = param_3 + 0xb;
      uVar24 = *(uint *)(param_3 + 0x10);
      puVar18 = (uint *)(param_3 + 0xd);
      uVar27 = 0;
      local_4c0 = 0;
      uStack_4bc = 1;
      uStack_4ac = 0;
      uStack_4a8 = 0;
      if (uVar24 != 0) {
        puVar26 = (uint *)param_3[0xf];
        if ((uint *)param_3[0xf] == (uint *)0x0) {
          puVar26 = puVar18;
        }
        uVar21 = *puVar26;
        puVar13 = puVar25;
        while (uVar21 == 0) {
          iVar8 = (int)puVar25;
          uStack_4a8 = (int)puVar13 + 0x20;
          puVar13 = (uint *)(ulonglong)uStack_4a8;
          local_4c0 = iVar8 + 1;
          puVar25 = (uint *)(ulonglong)local_4c0;
          if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
          goto LAB_142f480fd;
          uVar21 = puVar26[(longlong)iVar8 + 1];
        }
        uStack_4bc = -uVar21 & uVar21;
        iVar8 = 0x1f;
        if (uStack_4bc != 0) {
          for (; uStack_4bc >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        if (uStack_4bc == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - iVar8;
        }
        uStack_4ac = (uStack_4a8 - iVar8) + 0x1f;
        if ((int)uVar24 < (int)uStack_4ac) {
LAB_142f480fd:
          uStack_4ac = uVar24;
        }
      }
      local_4b0 = 0xffffffff;
      uStack_26c = *(uint *)(param_3 + 0x10);
      uStack_588 = CONCAT44(uStack_4bc,local_4c0);
      uStack_4f8 = CONCAT44(uStack_4ac,0xffffffff);
      local_4f0 = CONCAT44(uStack_4a4,uStack_4a8);
      local_270 = -1 << ((byte)uStack_26c & 0x1f);
      uVar21 = uStack_26c & 0xffffffe0;
      auStack_578._8_8_ = local_4f0;
      auStack_578._0_8_ = uStack_4f8;
      uStack_508 = CONCAT44(uStack_4bc,local_4c0);
      local_590 = (uint *)local_5d0;
      puStack_580 = puVar18;
      local_548 = iVar7;
      local_510 = (uint *)local_5d0;
      local_500 = puVar18;
      puStack_4b8 = puVar18;
      uVar17 = uStack_26c;
      if (uStack_26c != uVar24) {
        puVar25 = (uint *)param_3[0xf];
        if ((uint *)param_3[0xf] == (uint *)0x0) {
          puVar25 = puVar18;
        }
        uVar17 = puVar25[(int)uStack_26c >> 5] & local_270;
        iVar8 = (int)uStack_26c >> 5;
        while (uVar17 == 0) {
          uVar21 = uVar21 + 0x20;
          if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
          goto LAB_142f481d9;
          uVar17 = puVar25[(longlong)iVar8 + 1];
          local_270 = 0xffffffff;
          iVar8 = iVar8 + 1;
        }
        uVar17 = -uVar17 & uVar17;
        iVar8 = 0x1f;
        if (uVar17 != 0) {
          for (; uVar17 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        if (uVar17 == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - iVar8;
        }
        uStack_26c = (uVar21 - iVar8) + 0x1f;
        uVar17 = uStack_26c;
        if ((int)uVar24 < (int)uStack_26c) {
LAB_142f481d9:
          uStack_26c = uVar24;
          uVar17 = uVar24;
        }
      }
LAB_142f481f0:
      if (((uStack_4f8._4_4_ == uVar17) && (local_500 == puVar18)) &&
         (local_510 == (uint *)local_5d0)) {
        return uVar27;
      }
      lVar19 = (longlong)(int)uStack_4f8._4_4_ * 200 + *(longlong *)local_510;
      if (*(int *)(lVar19 + 0x60) != *(int *)(lVar19 + 0x8c)) {
        lVar15 = *(longlong *)(lVar19 + 0x98);
        if (*(longlong *)(lVar19 + 0x98) == 0) {
          lVar15 = lVar19 + 0x90;
        }
        iVar8 = *(int *)(lVar15 + ((longlong)*(int *)(lVar19 + 0xa0) - 1U & (longlong)iVar7) * 4);
        if (iVar8 != -1) {
          lVar15 = *(longlong *)(lVar19 + 0x58);
          do {
            if (*(int *)(lVar15 + (longlong)iVar8 * 0xc) == iVar7) {
              if (iVar8 != -1) {
                lVar22 = *(longlong *)(lVar19 + 0x98);
                if (*(longlong *)(lVar19 + 0x98) == 0) {
                  lVar22 = lVar19 + 0x90;
                }
                uVar23 = (longlong)*(int *)(lVar19 + 0xa0) - 1;
                iVar8 = *(int *)(lVar22 + (uVar23 & (longlong)iVar7) * 4);
                goto joined_r0x000142f482b0;
              }
              break;
            }
            iVar8 = *(int *)(lVar15 + 4 + (longlong)iVar8 * 0xc);
          } while (iVar8 != -1);
        }
      }
      goto LAB_142f48336;
    }
    if ((char)param_2[8] == '\0') {
      plVar11 = (longlong *)*param_2;
      local_460 = plVar11;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = (longlong *)param_2[1];
        puVar18 = *(uint **)plVar11[1];
        if ((uint *)((undefined8 *)plVar11[1])[1] < puVar18 + 1) {
          (**(code **)(*plVar11 + 0x50))(plVar11,local_5b8,4);
          if ((*(byte *)((longlong)plVar11 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar11,local_5b8,4);
          }
        }
        else {
          local_5b8[0] = *puVar18;
          *(longlong *)plVar11[1] = *(longlong *)plVar11[1] + 4;
        }
        piVar12 = *(int **)plVar11[1];
        if ((int *)((undefined8 *)plVar11[1])[1] < piVar12 + 1) {
          (**(code **)(*plVar11 + 0x50))(plVar11,&local_594,4);
          if ((*(byte *)((longlong)plVar11 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar11,&local_594,4);
          }
        }
        else {
          local_594 = *piVar12;
          *(longlong *)plVar11[1] = *(longlong *)plVar11[1] + 4;
        }
        puVar18 = *(uint **)plVar11[1];
        if ((uint *)((undefined8 *)plVar11[1])[1] < puVar18 + 1) {
          (**(code **)(*plVar11 + 0x50))(plVar11,&local_5c0,4);
          if ((*(byte *)((longlong)plVar11 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar11,&local_5c0,4);
          }
        }
        else {
          local_5c0 = *puVar18;
          *(longlong *)plVar11[1] = *(longlong *)plVar11[1] + 4;
        }
        if (0x800 < local_5c0) {
LAB_142f49239:
          *(byte *)(plVar11 + 5) = *(byte *)(plVar11 + 5) | 0x80;
          return 0;
        }
        puVar18 = *(uint **)plVar11[1];
        if ((uint *)((undefined8 *)plVar11[1])[1] < puVar18 + 1) {
          (**(code **)(*plVar11 + 0x50))(plVar11,&local_5c4,4);
          if ((*(byte *)((longlong)plVar11 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar11,&local_5c4,4);
          }
        }
        else {
          local_5c4 = *puVar18;
          *(longlong *)plVar11[1] = *(longlong *)plVar11[1] + 4;
        }
        if (0x800 < local_5c4) goto LAB_142f49239;
        local_138 = (longlong *)0x0;
        local_130 = 0;
        local_108 = (undefined1 *)0x0;
        uStack_100 = (uint *)0x0;
        local_58 = (undefined1 *)0x0;
        local_50 = 0;
        puVar18 = puVar25;
        if (local_5c0 != 0) {
          do {
            plVar28 = (longlong *)plVar11[1];
            if ((uint *)plVar28[1] < (uint *)*plVar28 + 1) {
              (**(code **)(*plVar11 + 0x50))(plVar11,&local_5d4,4);
              if ((*(byte *)((longlong)plVar11 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(plVar11,&local_5d4,4);
              }
            }
            else {
              local_5d4 = *(uint *)*plVar28;
              *plVar28 = *plVar28 + 4;
            }
            TSet<TTuple<enum_EAssetRegistryDependencyType::Type,int>,TDefaultMapHashableKeyFuncs<enum_EAssetRegistryDependencyType::Type,int,0>,FDefaultSetAllocator>
            ::FindId(param_3,&local_544,local_5d4);
            uVar23 = local_130;
            puVar26 = puVar25;
            if (local_544 != -1) {
              puVar26 = (uint *)((longlong)local_544 * 0x10 + *param_3);
            }
            puVar13 = puVar26 + 1;
            if (puVar26 == (uint *)0x0) {
              puVar13 = puVar25;
            }
            if (puVar13 != (uint *)0x0) {
              lVar19 = (longlong)(int)local_130;
              uVar24 = *puVar13;
              iVar8 = (int)local_130 + 1;
              local_130 = CONCAT44(local_130._4_4_,iVar8);
              if (local_130._4_4_ < iVar8) {
                FUN_140a95f50(local_158,uVar23 & 0xffffffff);
              }
              plVar28 = local_158;
              if (local_138 != (longlong *)0x0) {
                plVar28 = local_138;
              }
              *(uint *)((longlong)plVar28 + lVar19 * 4) = uVar24;
            }
            uVar24 = (int)puVar18 + 1;
            puVar18 = (uint *)(ulonglong)uVar24;
          } while (uVar24 < local_5c0);
          puVar18 = (uint *)(local_130 & 0xffffffff);
        }
        local_5d4 = 0;
        puVar26 = puVar25;
        if (local_5c4 != 0) {
          do {
            plVar28 = (longlong *)plVar11[1];
            if ((uint *)plVar28[1] < (uint *)*plVar28 + 1) {
              (**(code **)(*plVar11 + 0x50))(plVar11,&local_5e4,4);
              if ((*(byte *)((longlong)plVar11 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(plVar11,&local_5e4,4);
              }
            }
            else {
              local_5e4 = *(uint *)*plVar28;
              *plVar28 = *plVar28 + 4;
            }
            TSet<TTuple<enum_EAssetRegistryDependencyType::Type,int>,TDefaultMapHashableKeyFuncs<enum_EAssetRegistryDependencyType::Type,int,0>,FDefaultSetAllocator>
            ::FindId(param_3,&local_528,local_5e4);
            uVar23 = local_50;
            puVar18 = puVar25;
            if (local_528 != -1) {
              puVar18 = (uint *)((longlong)local_528 * 0x10 + *param_3);
            }
            local_5bc = 0;
            puVar13 = puVar18 + 1;
            if (puVar18 == (uint *)0x0) {
              puVar13 = puVar25;
            }
            if (puVar13 == (uint *)0x0) {
              iVar8 = (int)param_1[1];
              *(int *)(param_1 + 1) = iVar8 + 1;
              if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
                ResizeGrow(param_1,iVar8);
              }
              puVar13 = (uint *)(*param_1 + (longlong)iVar8 * 0x18);
              puVar18 = puVar25;
              if (puVar13 != (uint *)0x0) {
                puVar13[0] = 0xffffffff;
                puVar13[1] = 0xffffffff;
                puVar13[2] = 0xffffffff;
                puVar13[4] = 0;
                puVar13[5] = 0;
                puVar18 = puVar13;
              }
              *puVar18 = local_5e4;
              local_5bc = (int)param_1[1] - 1;
              local_2c0 = &local_5e4;
              local_2b8 = &local_5bc;
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Emplace<TPairInitializer<int_const_&,int_&&>_>(param_3,&local_540,&local_2c0,0);
              puVar13 = uStack_100;
              lVar19 = (longlong)(int)uStack_100;
              iVar8 = (int)uStack_100 + 1;
              uStack_100 = (uint *)CONCAT44(uStack_100._4_4_,iVar8);
              if (uStack_100._4_4_ < iVar8) {
                FUN_140a95f50(local_128,(ulonglong)puVar13 & 0xffffffff);
              }
              puVar16 = local_128;
              if (local_108 != (undefined1 *)0x0) {
                puVar16 = local_108;
              }
              *(uint *)(puVar16 + lVar19 * 4) = local_5bc;
            }
            else {
              local_5bc = *puVar13;
              lVar19 = (longlong)(int)local_50;
              puVar18 = (uint *)(*param_1 + (longlong)(int)local_5bc * 0x18);
              iVar8 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar8);
              if (local_50._4_4_ < iVar8) {
                FUN_140a95f50(local_78,uVar23 & 0xffffffff);
              }
              puVar16 = local_78;
              if (local_58 != (undefined1 *)0x0) {
                puVar16 = local_58;
              }
              *(uint *)(puVar16 + lVar19 * 4) = local_5bc;
            }
            plVar28 = local_5e0;
            puVar18[1] = puVar18[1] + 1;
            puVar18[2] = local_5b8[0];
            UPackageMap::ResetTrackedGuids(local_5e0[4],1);
            local_560 = (longlong *)plVar11[0x15];
            local_5f0 = &local_5d7;
            local_5d7 = '\0';
            local_5f8 = puVar18;
            (*(code *)**(undefined8 **)plVar28[7])((undefined8 *)plVar28[7],local_550,plVar11);
            uVar24 = (uint)puVar26;
            if (-1 < (char)plVar11[5]) {
              lVar19 = plVar28[4];
              uVar21 = *(uint *)(lVar19 + 100);
              puVar18 = (uint *)(lVar19 + 0x30);
              uVar17 = *(uint *)(lVar19 + 0x38);
              local_568 = lVar19 + 0x80;
              local_5b0 = puVar18;
              if ((uVar17 == uVar21) && (*(int *)(lVar19 + 0x88) == *(int *)(lVar19 + 0xb4))) {
                TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
                ::Remove(param_3 + 0xb,local_5e4);
                param_1 = local_5d0;
                plVar28 = local_5e0;
              }
              else {
                TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
                ::FindId(param_3 + 0xb,&local_524,local_5e4);
                if ((local_524 == -1) ||
                   (lVar19 = (longlong)local_524 * 200 + param_3[0xb], puVar18 = local_5b0,
                   lVar19 == 0)) {
                  local_2e0 = &local_5e4;
                  TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
                  ::Emplace<TKeyInitializer<int_const_&>_>(param_3 + 0xb,local_4e8,&local_2e0,0);
                  uVar21 = puVar18[0xd];
                  uVar17 = puVar18[2];
                  lVar19 = (longlong)local_4e8[0] * 200 + param_3[0xb];
                }
                puVar26 = (uint *)(lVar19 + 8);
                puVar18 = local_5b0;
                if (*(int *)(lVar19 + 0x10) - *(int *)(lVar19 + 0x3c) == uVar17 - uVar21) {
                  puVar13 = (uint *)(lVar19 + 0x18);
                  local_3e8 = 0;
                  uStack_3e4 = 1;
                  local_3d8 = 0xffffffff;
                  uStack_3d4 = 0;
                  uStack_3d0 = 0;
                  iVar8 = 0;
                  puStack_3e0 = puVar13;
                  if (*(int *)(lVar19 + 0x30) != 0) {
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3e8);
                    iVar8 = *(int *)(lVar19 + 0x30);
                  }
                  puVar18 = local_5b0;
                  uStack_508 = CONCAT44(uStack_3e4,local_3e8);
                  uStack_4f8 = CONCAT44(uStack_3d4,local_3d8);
                  local_4f0 = CONCAT44(uStack_3cc,uStack_3d0);
                  local_500 = puStack_3e0;
                  local_250 = -1 << ((byte)iVar8 & 0x1f);
                  uStack_330 = local_3e8;
                  uStack_32c = uStack_3e4;
                  local_328 = puStack_3e0;
                  local_510 = puVar26;
                  uStack_320 = uStack_4f8;
                  local_318 = local_4f0;
                  iStack_24c = iVar8;
                  local_338 = puVar26;
                  while( true ) {
                    if (((uStack_320._4_4_ == iVar8) && (local_328 == puVar13)) &&
                       (local_338 == puVar26)) goto LAB_142f49a62;
                    piVar12 = (int *)TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                                     ::FindId(puVar18,&local_538,
                                              *(longlong *)local_338 +
                                              (longlong)uStack_320._4_4_ * 0xc);
                    if (*piVar12 == -1) break;
                    uStack_320 = CONCAT44(uStack_320._4_4_,(uint)uStack_320 & ~uStack_32c);
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_330);
                  }
                }
                TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=
                          (puVar26,puVar18);
                *(undefined1 *)((longlong)local_5e0 + 0x44) = 1;
LAB_142f49a62:
                puVar18 = (uint *)(lVar19 + 0x58);
                if (*(int *)(lVar19 + 0x60) - *(int *)(lVar19 + 0x8c) ==
                    *(int *)(local_568 + 8) - *(int *)(local_568 + 0x34)) {
                  puVar26 = (uint *)(lVar19 + 0x68);
                  local_3c8 = 0;
                  uStack_3c4 = 1;
                  local_3b8 = 0xffffffff;
                  uStack_3b4 = 0;
                  uStack_3b0 = 0;
                  iVar8 = 0;
                  puStack_3c0 = puVar26;
                  if (*(int *)(lVar19 + 0x80) != 0) {
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3c8);
                    iVar8 = *(int *)(lVar19 + 0x80);
                  }
                  uStack_508 = CONCAT44(uStack_3c4,local_3c8);
                  uStack_4f8 = CONCAT44(uStack_3b4,local_3b8);
                  local_4f0 = CONCAT44(uStack_3ac,uStack_3b0);
                  local_500 = puStack_3c0;
                  local_230 = -1 << ((byte)iVar8 & 0x1f);
                  uStack_588 = CONCAT44(uStack_3c4,local_3c8);
                  puStack_580 = puStack_3c0;
                  auStack_578._8_8_ = local_4f0;
                  auStack_578._0_8_ = uStack_4f8;
                  local_590 = puVar18;
                  local_510 = puVar18;
                  iStack_22c = iVar8;
                  while( true ) {
                    if (((auStack_578._4_4_ == iVar8) && (puStack_580 == puVar26)) &&
                       (local_590 == puVar18)) goto LAB_142f49b84;
                    piVar12 = (int *)TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
                                     ::FindId(local_568,&local_530,
                                              *(longlong *)local_590 +
                                              (longlong)(int)auStack_578._4_4_ * 0xc);
                    if (*piVar12 == -1) break;
                    auStack_578._0_4_ = auStack_578._0_4_ & ~uStack_588._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_588);
                  }
                }
                TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=
                          (puVar18,local_568);
                *(undefined1 *)((longlong)local_5e0 + 0x44) = 1;
LAB_142f49b84:
                *(undefined4 *)(lVar19 + 0xb0) = 0;
                if (*(int *)(lVar19 + 0xb4) != 0) {
                  TArray<unsigned_char,FDefaultAllocator>::ResizeTo(lVar19 + 0xa8,0);
                }
                *(int *)(lVar19 + 0xb8) = (int)plVar11[0x15] - (int)local_560;
                FBitReaderMark::Copy(&local_560,plVar11,lVar19 + 0xa8);
                param_1 = local_5d0;
                plVar28 = local_5e0;
                uVar24 = local_5d4;
                if (local_5b0[2] != local_5b0[0xd]) {
                  *(undefined1 *)((longlong)local_5e0 + 0x43) = 1;
                }
              }
            }
            UPackageMap::ResetTrackedGuids(plVar28[4],0);
            if ((char)plVar11[5] < '\0') {
              if (local_58 != (undefined1 *)0x0) {
                FMemory::Free();
              }
              if (local_108 != (undefined1 *)0x0) {
                FMemory::Free();
              }
              if (local_138 == (longlong *)0x0) {
                return 0;
              }
              FMemory::Free();
              return 0;
            }
            local_5d4 = uVar24 + 1;
            puVar26 = (uint *)(ulonglong)local_5d4;
          } while (local_5d4 < local_5c4);
          puVar18 = (uint *)(local_130 & 0xffffffff);
        }
        iVar8 = (int)puVar18;
        plVar11 = local_138;
        puVar26 = puVar25;
        puVar13 = puVar25;
        if (0 < (int)param_1[1]) {
          do {
            iVar8 = *(int *)(*param_1 + 8 + (longlong)puVar13);
            iVar10 = (int)puVar26;
            if ((iVar8 < (int)local_5b8[0]) && (local_594 < iVar8)) {
              iVar8 = (int)puVar18;
              plVar28 = local_158;
              if (plVar11 != (longlong *)0x0) {
                plVar28 = plVar11;
              }
              plVar20 = (longlong *)((longlong)plVar28 + (longlong)iVar8 * 4);
              for (; plVar28 != plVar20; plVar28 = (longlong *)((longlong)plVar28 + 4)) {
                if ((int)*plVar28 == iVar10) goto LAB_142f49708;
              }
              local_130 = CONCAT44(local_130._4_4_,iVar8 + 1);
              if (local_130._4_4_ < iVar8 + 1) {
                FUN_140a95f50(local_158,puVar18);
                plVar11 = local_138;
              }
              plVar28 = local_158;
              if (plVar11 != (longlong *)0x0) {
                plVar28 = plVar11;
              }
              *(int *)((longlong)plVar28 + (longlong)iVar8 * 4) = iVar10;
              puVar18 = (uint *)(local_130 & 0xffffffff);
              plVar11 = local_138;
            }
LAB_142f49708:
            iVar8 = (int)puVar18;
            puVar26 = (uint *)(ulonglong)(iVar10 + 1U);
            puVar13 = puVar13 + 6;
          } while ((int)(iVar10 + 1U) < (int)param_1[1]);
        }
        plVar28 = local_5e0;
        if ((0 < iVar8) || (local_5c4 != 0)) {
          iVar10 = *(int *)((longlong)param_3 + 0x54) + 1;
          if (iVar10 == -1) {
            iVar10 = iVar7;
          }
          *(int *)((longlong)param_3 + 0x54) = iVar10;
        }
        plVar20 = local_158;
        if (plVar11 != (longlong *)0x0) {
          plVar20 = plVar11;
        }
        puVar18 = (uint *)((longlong)iVar8 & 0x3fffffffffffffff);
        if ((longlong *)((longlong)iVar8 * 4 + (longlong)plVar20) < plVar20) {
          puVar18 = puVar25;
        }
        if (puVar18 != (uint *)0x0) {
          do {
            iVar7 = (int)*plVar20;
            if ((-1 < iVar7) && (iVar7 < (int)param_1[1])) {
              iVar7 = TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
                      ::Remove(param_3 + 0xb,*(undefined4 *)(*param_1 + (longlong)iVar7 * 0x18));
              if (0 < iVar7) {
                *(undefined1 *)((longlong)plVar28 + 0x44) = 1;
              }
            }
            plVar20 = (longlong *)((longlong)plVar20 + 4);
            puVar25 = (uint *)((longlong)puVar25 + 1);
          } while (puVar25 != puVar18);
          plVar11 = local_138;
          iVar8 = (int)local_130;
        }
        if (0 < iVar8) {
          plVar28 = local_158;
          if (plVar11 != (longlong *)0x0) {
            plVar28 = plVar11;
          }
          AlgoImpl::IntroSortInternal<int,FIdentityFunctor,TDereferenceWrapper<int,TLess<int>_>_>
                    (plVar28,(longlong)iVar8,local_5d6[0],local_5d6);
          lVar19 = (longlong)((int)local_130 + -1);
          plVar11 = local_138;
          if (-1 < (int)local_130 + -1) {
            do {
              plVar28 = local_158;
              if (plVar11 != (longlong *)0x0) {
                plVar28 = plVar11;
              }
              iVar7 = *(int *)((longlong)plVar28 + lVar19 * 4);
              if ((-1 < iVar7) && (iVar7 < (int)param_1[1])) {
                TArray<FLobbyPlayerStateActorInfo,FDefaultAllocator>::RemoveAtSwapImpl
                          (param_1,iVar7,1);
                plVar11 = local_138;
              }
              lVar19 = lVar19 + -1;
            } while (-1 < lVar19);
          }
          TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty
                    (param_3,0);
          plVar11 = local_138;
        }
        if (local_58 != (undefined1 *)0x0) {
          FMemory::Free();
          plVar11 = local_138;
        }
        if (local_108 != (undefined1 *)0x0) {
          FMemory::Free();
          plVar11 = local_138;
        }
      }
      else {
        puVar18 = (uint *)operator_new(0x60);
        if (puVar18 == (uint *)0x0) {
          local_458 = (uint *)0x0;
          puVar18 = puVar25;
        }
        else {
          *(undefined ***)puVar18 = &PTR__scalar_deleting_destructor__144999a40;
          puVar18[2] = 0;
          puVar18[3] = 0;
          puVar18[4] = 0;
          puVar18[5] = 0;
          local_458 = puVar18;
          TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>
                    (puVar18 + 6,0,0);
          puVar18[0xe] = 0xffffffff;
          puVar18[0xf] = 0;
          puVar18[0x12] = 0;
          puVar18[0x13] = 0;
          puVar18[0x14] = 0;
          puVar18[0x16] = 0xffffffff;
        }
        local_520 = puVar18;
        plVar28 = (longlong *)FUN_1413bfd70(puVar18);
        local_518 = plVar28;
        SharedPointerInternals::EnableSharedFromThis(&local_520,puVar18,puVar18);
        ppuVar2 = (uint **)local_5e0[2];
        if (ppuVar2 != &local_520) {
          *ppuVar2 = local_520;
          local_520 = (uint *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(ppuVar2 + 1,&local_518);
          plVar28 = local_518;
        }
        if (plVar28 != (longlong *)0x0) {
          LOCK();
          plVar20 = plVar28 + 1;
          lVar19 = *plVar20;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)lVar19 == 1) {
            (**(code **)*plVar28)(plVar28);
            LOCK();
            piVar12 = (int *)((longlong)plVar28 + 0xc);
            iVar8 = *piVar12;
            *piVar12 = *piVar12 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar28 + 8))(plVar28,1);
            }
          }
        }
        local_5b0 = puVar18 + 2;
        puVar18[0x16] = *(uint *)((longlong)param_3 + 0x54);
        lVar19 = local_5e0[3];
        if (lVar19 == 0) {
          local_5a0 = -1;
          puVar18 = puVar25;
        }
        else {
          local_5a0 = *(int *)(lVar19 + 0x58);
          puVar18 = (uint *)(lVar19 + 8);
        }
        local_2c8 = local_5e0;
        local_540 = puVar18;
        local_2d8 = param_3;
        local_2d0 = param_1;
        if ((lVar19 != 0) && (*(int *)((longlong)param_3 + 0x54) == local_5a0)) {
          if ((puVar18 != (uint *)0x0) &&
             ((((int)param_3[0x15] == -1 || ((int)param_3[0x15] != (int)param_1[1])) ||
              (*(int *)((longlong)param_3 + 0xac) == -1)))) {
            *(int *)(param_3 + 0x15) = (int)param_1[1];
            uVar9 = <lambda_425717d80d7fcf41fab83dc3d937ea93>::operator()(&local_2d8);
            *(undefined4 *)((longlong)param_3 + 0xac) = uVar9;
            return 0;
          }
          return 0;
        }
        plVar28 = local_5e0;
        iVar8 = <lambda_425717d80d7fcf41fab83dc3d937ea93>::operator()(&local_2d8);
        local_88 = (longlong *)0x0;
        local_80 = 0;
        local_d8 = (undefined1 *)0x0;
        local_d0 = 0;
        if (puVar18 != (uint *)0x0) {
          iVar7 = puVar18[2] - puVar18[0xd];
        }
        iVar7 = iVar7 - iVar8;
        puVar26 = puVar18;
        puVar13 = puVar25;
        puVar29 = puVar25;
        if (0 < (int)local_5d0[1]) {
          do {
            lVar19 = *local_5d0;
            iVar8 = (int)puVar13;
            if ((*(char *)((longlong)plVar28 + 0x45) == '\0') ||
               (*(int *)(lVar19 + (longlong)puVar29) != -1)) {
              if (*(int *)(lVar19 + (longlong)puVar29) == -1) {
                *(int *)(param_3 + 10) = (int)param_3[10] + 1;
                *(undefined4 *)(lVar19 + (longlong)puVar29) = (int)param_3[10];
                iVar10 = (int)param_3[10];
                if ((int)param_3[10] == -1) {
                  iVar10 = 0;
                }
                *(int *)(param_3 + 10) = iVar10;
                piVar12 = (undefined4 *)(lVar19 + (longlong)puVar29) + 1;
                *piVar12 = *piVar12 + 1;
                TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
                Reset(param_3);
                *(int *)((longlong)param_3 + 0x54) = *(int *)((longlong)param_3 + 0x54) + 1;
                if (*(int *)((longlong)param_3 + 0x54) == -1) {
                  *(undefined4 *)((longlong)param_3 + 0x54) = 0;
                }
                param_3[0x15] = -1;
                lVar19 = *local_5d0;
              }
              lVar19 = lVar19 + (longlong)iVar8 * 0x18;
              TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
              Emplace<int_const_&,int_const_&>(local_5b0,lVar19,lVar19 + 4);
              lVar19 = *local_5d0;
              puVar26 = puVar25;
              if (puVar18 != (uint *)0x0) {
                TSet<TTuple<enum_EAssetRegistryDependencyType::Type,int>,TDefaultMapHashableKeyFuncs<enum_EAssetRegistryDependencyType::Type,int,0>,FDefaultSetAllocator>
                ::FindId(puVar18,local_558,*(undefined4 *)(lVar19 + (longlong)puVar29));
                if (local_558[0] == -1) {
                  puVar26 = (uint *)0x0;
                }
                else {
                  lVar15 = (longlong)local_558[0] * 0x10 + *(longlong *)puVar18;
                  puVar26 = (uint *)(lVar15 + 4);
                  if (lVar15 == 0) {
                    puVar26 = puVar25;
                  }
                }
              }
              uVar23 = local_80;
              iVar10 = (int)local_80;
              if (puVar26 == (uint *)0x0) {
                uStack_534 = *(undefined4 *)((longlong)puVar29 + lVar19);
                local_80._0_4_ = (int)local_80 + 1;
                local_538 = iVar8;
                if (local_80._4_4_ < (int)local_80) {
                  TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
                            (local_c8,uVar23 & 0xffffffff);
                }
                plVar11 = local_c8;
                if (local_88 != (longlong *)0x0) {
                  plVar11 = local_88;
                }
                lVar19 = CONCAT44(uStack_534,local_538);
                iVar7 = iVar7 + 1;
              }
              else {
                plVar28 = local_5e0;
                if (*puVar26 == *(uint *)((longlong)puVar29 + lVar19 + 4)) goto LAB_142f48ca5;
                uStack_52c = *(undefined4 *)((longlong)puVar29 + lVar19);
                local_80._0_4_ = (int)local_80 + 1;
                local_530 = iVar8;
                if (local_80._4_4_ < (int)local_80) {
                  TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
                            (local_c8,uVar23 & 0xffffffff);
                }
                plVar11 = local_c8;
                if (local_88 != (longlong *)0x0) {
                  plVar11 = local_88;
                }
                lVar19 = CONCAT44(uStack_52c,local_530);
              }
              plVar11[iVar10] = lVar19;
              plVar28 = local_5e0;
            }
LAB_142f48ca5:
            plVar11 = local_460;
            puVar26 = local_540;
            puVar13 = (uint *)(ulonglong)(iVar8 + 1U);
            puVar29 = puVar29 + 6;
          } while ((int)(iVar8 + 1U) < (int)local_5d0[1]);
        }
        if ((0 < iVar7) && (puVar26 != (uint *)0x0)) {
          puStack_400 = puVar26 + 4;
          local_408 = 0;
          uStack_404 = 1;
          local_3f8 = 0xffffffff;
          uStack_3f4 = 0;
          if (puVar26[10] != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_408);
          }
          puVar18 = local_5b0;
          auVar4._4_8_ = uStack_3f4;
          auVar4._0_4_ = local_3f8;
          auVar3._12_4_ = uStack_3ec;
          auVar3._0_12_ = auVar4;
          uStack_100 = puVar26;
          puVar26 = uStack_100;
          uStack_588 = CONCAT44(uStack_404,local_408);
          puStack_580 = puStack_400;
          local_340 = 0;
          auStack_578._0_8_ = auVar4._0_8_;
          uStack_100._0_4_ = (int)puVar26;
          uStack_100._4_4_ = (int)((ulonglong)puVar26 >> 0x20);
          local_368 = puStack_400;
          uStack_360 = auStack_578._0_8_;
          local_358._8_4_ = (int)uStack_100;
          local_358._0_8_ = auVar3._8_8_;
          local_358._12_4_ = uStack_100._4_4_;
          iVar8 = (int)uStack_3f4;
          local_590 = puVar26;
          auStack_578 = auVar3;
          local_378 = puVar26;
          uStack_370 = uStack_588;
          local_348 = puVar26;
          uStack_100 = puVar26;
          if (iVar8 < (int)puStack_400[6]) {
            do {
              lVar19 = *(longlong *)local_378;
              piVar12 = (int *)TSet<TTuple<enum_EAssetRegistryDependencyType::Type,int>,TDefaultMapHashableKeyFuncs<enum_EAssetRegistryDependencyType::Type,int,0>,FDefaultSetAllocator>
                               ::FindId(puVar18,&local_568,
                                        *(undefined4 *)(lVar19 + (longlong)iVar8 * 0x10));
              uVar23 = local_d0;
              if (*piVar12 == -1) {
                lVar15 = (longlong)(int)local_d0;
                iVar10 = (int)local_d0 + 1;
                local_d0 = CONCAT44(local_d0._4_4_,iVar10);
                if (local_d0._4_4_ < iVar10) {
                  FUN_140a95f50(local_f8,uVar23 & 0xffffffff);
                }
                puVar16 = local_f8;
                if (local_d8 != (undefined1 *)0x0) {
                  puVar16 = local_d8;
                }
                iVar7 = iVar7 + -1;
                *(undefined4 *)(puVar16 + lVar15 * 4) =
                     *(undefined4 *)(lVar19 + (longlong)iVar8 * 0x10);
                if (iVar7 < 1) break;
              }
              uStack_360 = CONCAT44(uStack_360._4_4_,(uint)uStack_360 & ~uStack_370._4_4_);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_370);
              iVar8 = uStack_360._4_4_;
            } while (uStack_360._4_4_ < (int)local_368[6]);
            plVar11 = local_460;
            if (((char)local_340 != '\0') && (local_340._1_1_ != '\0')) {
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
              ConditionalRehash(local_348,local_348[2] - local_348[0xd],1);
            }
          }
        }
        local_458[0x16] = *(uint *)((longlong)param_3 + 0x54);
        local_5a4 = *(undefined4 *)((longlong)param_3 + 0x54);
        puVar1 = *(undefined4 **)plVar11[1];
        if ((undefined4 *)((undefined8 *)plVar11[1])[1] < puVar1 + 1) {
          (**(code **)(*plVar11 + 0x50))(plVar11,&local_5a4,4);
          if ((*(byte *)((longlong)plVar11 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar11,&local_5a4,4);
          }
        }
        else {
          local_5a4 = *puVar1;
          *(longlong *)plVar11[1] = *(longlong *)plVar11[1] + 4;
        }
        piVar12 = *(int **)plVar11[1];
        if ((int *)((undefined8 *)plVar11[1])[1] < piVar12 + 1) {
          (**(code **)(*plVar11 + 0x50))(plVar11,&local_5a0,4);
          if ((*(byte *)((longlong)plVar11 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar11,&local_5a0,4);
          }
        }
        else {
          local_5a0 = *piVar12;
          *(longlong *)plVar11[1] = *(longlong *)plVar11[1] + 4;
        }
        local_5c8 = (int)local_d0;
        plVar28 = (longlong *)plVar11[1];
        if ((ulonglong)plVar28[1] < *plVar28 + 4U) {
          (**(code **)(*plVar11 + 0x50))(plVar11,&local_5c8,4);
          if ((*(byte *)((longlong)plVar11 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar11,&local_5c8,4);
          }
        }
        else {
          *plVar28 = *plVar28 + 4;
        }
        local_5c8 = (int)local_80;
        puVar1 = *(undefined4 **)plVar11[1];
        puVar18 = puVar25;
        if ((undefined4 *)((undefined8 *)plVar11[1])[1] < puVar1 + 1) {
          (**(code **)(*plVar11 + 0x50))(plVar11,&local_5c8,4);
          if ((*(byte *)((longlong)plVar11 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar11,&local_5c8,4);
          }
        }
        else {
          local_5c8 = *puVar1;
          *(longlong *)plVar11[1] = *(longlong *)plVar11[1] + 4;
        }
        while ((iVar7 = (int)puVar18, -1 < iVar7 && (iVar7 < (int)local_d0))) {
          puVar16 = local_f8;
          if (local_d8 != (undefined1 *)0x0) {
            puVar16 = local_d8;
          }
          local_59c = *(uint *)(puVar16 + (longlong)iVar7 * 4);
          plVar28 = (longlong *)plVar11[1];
          if ((uint *)plVar28[1] < (uint *)*plVar28 + 1) {
            (**(code **)(*plVar11 + 0x50))(plVar11,&local_59c,4);
            if ((*(byte *)((longlong)plVar11 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(plVar11,&local_59c,4);
            }
            puVar18 = (uint *)(ulonglong)(iVar7 + 1);
          }
          else {
            local_59c = *(uint *)*plVar28;
            *plVar28 = *plVar28 + 4;
            puVar18 = (uint *)(ulonglong)(iVar7 + 1);
          }
        }
        while ((iVar7 = (int)puVar25, -1 < iVar7 && (iVar7 < (int)local_80))) {
          plVar28 = local_c8;
          if (local_88 != (longlong *)0x0) {
            plVar28 = local_88;
          }
          lVar15 = plVar28[iVar7];
          lVar19 = *local_5d0;
          local_598 = *(undefined4 *)((longlong)iVar7 * 8 + 4 + (longlong)plVar28);
          plVar28 = (longlong *)plVar11[1];
          if ((undefined4 *)plVar28[1] < (undefined4 *)*plVar28 + 1) {
            (**(code **)(*plVar11 + 0x50))(plVar11,&local_598,4);
            if ((*(byte *)((longlong)plVar11 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(plVar11,&local_598,4);
            }
          }
          else {
            local_598 = *(undefined4 *)*plVar28;
            *plVar28 = *plVar28 + 4;
          }
          local_5f0 = local_5e8;
          local_5e8[0] = '\0';
          local_5f8 = (uint *)(lVar19 + (longlong)(int)lVar15 * 0x18);
          (*(code *)**(undefined8 **)local_5e0[7])
                    ((undefined8 *)local_5e0[7],local_550,plVar11,local_5e0[4]);
          puVar25 = (uint *)(ulonglong)(iVar7 + 1);
        }
        if (local_d8 != (undefined1 *)0x0) {
          FMemory::Free();
        }
        plVar11 = local_88;
      }
      if (plVar11 != (longlong *)0x0) {
        FMemory::Free(plVar11);
      }
    }
    else {
      local_590 = (uint *)(param_3 + 0xb);
      uStack_49c = 1;
      iVar7 = (int)param_3[0x10];
      puStack_580 = (uint *)(param_3 + 0xd);
      local_4a0 = 0;
      iStack_48c = 0;
      uStack_488 = 0;
      if (iVar7 != 0) {
        puVar18 = (uint *)param_3[0xf];
        if ((uint *)param_3[0xf] == (uint *)0x0) {
          puVar18 = puStack_580;
        }
        uVar24 = *puVar18;
        puVar26 = puVar25;
        puVar13 = puVar25;
        while (uVar24 == 0) {
          iVar8 = (int)puVar26;
          uStack_488 = (int)puVar13 + 0x20;
          puVar13 = (uint *)(ulonglong)uStack_488;
          local_4a0 = iVar8 + 1;
          puVar26 = (uint *)(ulonglong)local_4a0;
          if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_142f48428;
          uVar24 = puVar18[(longlong)iVar8 + 1];
        }
        uStack_49c = -uVar24 & uVar24;
        iVar8 = 0x1f;
        if (uStack_49c != 0) {
          for (; uStack_49c >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        if (uStack_49c == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - iVar8;
        }
        iStack_48c = (uStack_488 - iVar8) + 0x1f;
        if (iVar7 < iStack_48c) {
LAB_142f48428:
          iStack_48c = iVar7;
        }
      }
      local_490 = 0xffffffff;
      uStack_430 = CONCAT44(iStack_48c,0xffffffff);
      auStack_578._8_4_ = uStack_488;
      auStack_578._0_8_ = uStack_430;
      auStack_578._12_4_ = uStack_484;
      uStack_588 = CONCAT44(uStack_49c,local_4a0);
      local_410 = '\0';
      cStack_40f = '\0';
      uStack_100._0_4_ = (int)local_590;
      uStack_100._4_4_ = (int)((ulonglong)local_590 >> 0x20);
      local_428._8_4_ = (int)uStack_100;
      local_428._0_8_ = auStack_578._8_8_;
      local_428._12_4_ = uStack_100._4_4_;
      puStack_498 = puStack_580;
      local_448 = (longlong *)local_590;
      uStack_440 = uStack_588;
      local_438 = puStack_580;
      local_418 = (longlong *)local_590;
      uStack_100 = local_590;
      iVar7 = iStack_48c;
      if (iStack_48c < (int)param_3[0x10]) {
        do {
          plVar11 = local_5e0;
          uVar24 = *(uint *)((longlong)iVar7 * 200 + *local_448);
          plVar28 = (longlong *)(*local_448 + 8 + (longlong)iVar7 * 200);
          if (((int)plVar28[1] == *(int *)((longlong)plVar28 + 0x34)) &&
             ((int)plVar28[0xb] == *(int *)((longlong)plVar28 + 0x84))) {
LAB_142f48889:
            TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
            ::Remove(local_428._8_8_,iVar7);
            local_410 = '\x01';
          }
          else {
            if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
              plVar20 = (longlong *)param_3[8];
              if ((longlong *)param_3[8] == (longlong *)0x0) {
                plVar20 = param_3 + 7;
              }
              uVar21 = *(uint *)((longlong)plVar20 +
                                ((longlong)(int)param_3[9] - 1U & (longlong)(int)uVar24) * 4);
              if (uVar21 != 0xffffffff) {
                do {
                  puVar18 = (uint *)(*param_3 + (longlong)(int)uVar21 * 0x10);
                  if (*puVar18 == uVar24) {
                    if (uVar21 != 0xffffffff) goto LAB_142f48542;
                    break;
                  }
                  uVar21 = puVar18[2];
                } while (uVar21 != 0xffffffff);
              }
            }
            puVar18 = puVar25;
LAB_142f48542:
            puVar26 = puVar18 + 1;
            if (puVar18 == (uint *)0x0) {
              puVar26 = puVar25;
            }
            if (puVar26 == (uint *)0x0) goto LAB_142f48889;
            iVar7 = (int)plVar28[5];
            puStack_580 = (uint *)(plVar28 + 2);
            cVar6 = '\0';
            uStack_47c = 1;
            local_5e8[0] = '\0';
            local_480 = 0;
            uStack_46c = 0;
            if (iVar7 != 0) {
              puVar18 = (uint *)plVar28[4];
              if ((uint *)plVar28[4] == (uint *)0x0) {
                puVar18 = puStack_580;
              }
              uVar21 = *puVar18;
              puVar26 = puVar25;
              puVar13 = puVar25;
              uVar17 = 0;
              while (uVar21 == 0) {
                iVar8 = (int)puVar26;
                uVar17 = (int)puVar13 + 0x20;
                puVar13 = (uint *)(ulonglong)uVar17;
                local_480 = iVar8 + 1;
                puVar26 = (uint *)(ulonglong)local_480;
                uStack_46c = (ulonglong)uVar17 << 0x20;
                if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar8)
                goto LAB_142f4862e;
                uVar21 = puVar18[(longlong)iVar8 + 1];
              }
              uStack_47c = -uVar21 & uVar21;
              iVar8 = 0x1f;
              if (uStack_47c != 0) {
                for (; uStack_47c >> iVar8 == 0; iVar8 = iVar8 + -1) {
                }
              }
              if (uStack_47c == 0) {
                iVar8 = 0x20;
              }
              else {
                iVar8 = 0x1f - iVar8;
              }
              iVar8 = (uVar17 - iVar8) + 0x1f;
              uStack_46c._4_4_ = (undefined4)((ulonglong)uStack_46c >> 0x20);
              uStack_46c = CONCAT44(uStack_46c._4_4_,iVar8);
              if (iVar7 < iVar8) {
LAB_142f4862e:
                uStack_46c = CONCAT44(uStack_46c._4_4_,iVar7);
              }
            }
            local_470 = 0xffffffff;
            uStack_588 = CONCAT44(uStack_47c,local_480);
            auStack_578._4_4_ = (int)uStack_46c;
            auStack_578._0_4_ = 0xffffffff;
            auStack_578._8_4_ = uStack_46c._4_4_;
            auStack_578._12_4_ = uStack_464;
            local_388 = uStack_46c._4_4_;
            uStack_384 = uStack_464;
            uStack_390 = auStack_578._0_8_;
            iVar8 = (int)uStack_46c;
            local_590 = (uint *)plVar28;
            puStack_478 = puStack_580;
            local_3a8 = plVar28;
            uStack_3a0 = uStack_588;
            local_398 = puStack_580;
            local_380 = plVar28;
            if ((int)uStack_46c < iVar7) {
              do {
                plVar5 = local_380;
                plVar20 = (longlong *)plVar11[4];
                puVar18 = (uint *)(*local_3a8 + (longlong)iVar8 * 0xc);
                cVar6 = (**(code **)(*plVar20 + 0x2e8))(plVar20,puVar18,0);
                if (cVar6 == '\0') {
                  plVar20 = (longlong *)plVar11[4];
                  lVar19 = (**(code **)(*plVar20 + 0x2d8))(plVar20,puVar18,0);
                  if (lVar19 != 0) {
                    if ((*puVar18 != 0) && ((*puVar18 & 1) == 0)) {
                      FUN_140ac3dd0(plVar28 + 10,&local_5b0,puVar18,0);
                    }
                    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Remove
                              (plVar5,iVar8);
                    local_5e8[0] = '\x01';
                  }
                }
                else {
                  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Remove
                            (plVar5,iVar8);
                }
                cVar6 = local_5e8[0];
                uStack_390 = CONCAT44(uStack_390._4_4_,(uint)uStack_390 & ~uStack_3a0._4_4_);
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_3a0);
                param_3 = local_560;
                iVar8 = uStack_390._4_4_;
              } while (uStack_390._4_4_ < (int)local_398[6]);
            }
            param_2 = local_5e0;
            if (cVar6 != '\0') {
              *(undefined1 *)((longlong)local_5e0 + 0x41) = 1;
              if (*(char *)((longlong)local_5e0 + 0x42) == '\0') {
                (**(code **)(*(longlong *)local_5e0[9] + 0x1d8))();
                *(undefined1 *)((longlong)param_2 + 0x42) = 1;
              }
              if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
                plVar11 = (longlong *)param_3[8];
                if ((longlong *)param_3[8] == (longlong *)0x0) {
                  plVar11 = param_3 + 7;
                }
                uVar21 = *(uint *)((longlong)plVar11 +
                                  ((longlong)(int)param_3[9] - 1U & (longlong)(int)uVar24) * 4);
                if (uVar21 != 0xffffffff) {
                  do {
                    puVar18 = (uint *)((longlong)(int)uVar21 * 0x10 + *param_3);
                    if (*puVar18 == uVar24) {
                      if (uVar21 != 0xffffffff) goto LAB_142f487f1;
                      break;
                    }
                    uVar21 = puVar18[2];
                  } while (uVar21 != 0xffffffff);
                }
              }
              puVar18 = puVar25;
LAB_142f487f1:
              uVar24 = puVar18[1];
              lVar19 = *local_5d0;
              FNetBitReader::FNetBitReader
                        (local_218,param_2[4],plVar28[0x14],(longlong)(int)plVar28[0x16]);
              local_5f0 = &local_5d8;
              local_5d8 = '\0';
              local_5f8 = (uint *)(lVar19 + (longlong)(int)uVar24 * 0x18);
              (*(code *)**(undefined8 **)param_2[7])
                        ((undefined8 *)param_2[7],local_550,local_218,param_2[4]);
              if (local_188 != 0) {
                FMemory::Free();
              }
              FArchive::~FArchive(local_218);
            }
            if (((int)plVar28[1] == *(int *)((longlong)plVar28 + 0x34)) &&
               ((int)plVar28[0xb] == *(int *)((longlong)plVar28 + 0x84))) {
              iVar7 = uStack_430._4_4_;
              goto LAB_142f48889;
            }
          }
          uStack_430 = CONCAT44(uStack_430._4_4_,(uint)uStack_430 & ~uStack_440._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_440);
          iVar7 = uStack_430._4_4_;
        } while (uStack_430._4_4_ < (int)local_438[6]);
        if ((local_410 != '\0') && (cStack_40f != '\0')) {
          TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_418,(int)local_418[1] - *(int *)((longlong)local_418 + 0x34),1);
        }
      }
      if (0 < (int)param_3[0xc] - *(int *)((longlong)param_3 + 0x8c)) {
        *(undefined1 *)((longlong)param_2 + 0x43) = 1;
      }
    }
  }
  else {
    plVar11 = param_3 + 0xb;
    uStack_4dc = 1;
    uVar24 = *(uint *)(param_3 + 0x10);
    puVar18 = (uint *)(param_3 + 0xd);
    local_4e0 = 0;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    if (uVar24 != 0) {
      puVar26 = (uint *)param_3[0xf];
      if ((uint *)param_3[0xf] == (uint *)0x0) {
        puVar26 = puVar18;
      }
      uVar21 = *puVar26;
      puVar13 = puVar25;
      while (uVar21 == 0) {
        iVar7 = (int)puVar25;
        uStack_4c8 = (int)puVar13 + 0x20;
        puVar13 = (uint *)(ulonglong)uStack_4c8;
        local_4e0 = iVar7 + 1;
        puVar25 = (uint *)(ulonglong)local_4e0;
        if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_142f47ecd;
        uVar21 = puVar26[(longlong)iVar7 + 1];
      }
      uStack_4dc = -uVar21 & uVar21;
      iVar7 = 0x1f;
      if (uStack_4dc != 0) {
        for (; uStack_4dc >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_4dc == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_4cc = (uStack_4c8 - iVar7) + 0x1f;
      if ((int)uVar24 < (int)uStack_4cc) {
LAB_142f47ecd:
        uStack_4cc = uVar24;
      }
    }
    local_4d0 = 0xffffffff;
    uStack_28c = *(uint *)(param_3 + 0x10);
    uStack_588 = CONCAT44(uStack_4dc,local_4e0);
    uStack_2f0 = CONCAT44(uStack_4cc,0xffffffff);
    local_2e8 = CONCAT44(uStack_4c4,uStack_4c8);
    local_290 = -1 << ((byte)uStack_28c & 0x1f);
    uVar21 = uStack_28c & 0xffffffe0;
    auStack_578._8_8_ = local_2e8;
    auStack_578._0_8_ = uStack_2f0;
    uStack_300 = local_4e0;
    uStack_2fc = uStack_4dc;
    local_590 = (uint *)plVar11;
    puStack_580 = puVar18;
    puStack_4d8 = puVar18;
    local_2f8 = puVar18;
    local_308 = plVar11;
    uVar17 = uStack_28c;
    if (uStack_28c != uVar24) {
      puVar25 = (uint *)param_3[0xf];
      if ((uint *)param_3[0xf] == (uint *)0x0) {
        puVar25 = puVar18;
      }
      uVar17 = puVar25[(int)uStack_28c >> 5] & local_290;
      iVar7 = (int)uStack_28c >> 5;
      while (uVar17 == 0) {
        uVar21 = uVar21 + 0x20;
        if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_142f47fa8;
        uVar17 = puVar25[(longlong)iVar7 + 1];
        local_290 = 0xffffffff;
        iVar7 = iVar7 + 1;
      }
      uVar17 = -uVar17 & uVar17;
      iVar7 = 0x1f;
      if (uVar17 != 0) {
        for (; uVar17 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uVar17 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_28c = (uVar21 - iVar7) + 0x1f;
      uVar17 = uStack_28c;
      if ((int)uVar24 < (int)uStack_28c) {
LAB_142f47fa8:
        uStack_28c = uVar24;
        uVar17 = uVar24;
      }
    }
    while( true ) {
      if (((uStack_2f0._4_4_ == uVar17) && (local_2f8 == puVar18)) && (local_308 == plVar11)) break;
      lVar19 = (longlong)(int)uStack_2f0._4_4_ * 200 + *local_308;
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
      Append<FDefaultSetAllocator>(param_2[10],lVar19 + 8);
      TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
      Append<FDefaultSetAllocator>(param_2[10],lVar19 + 0x58);
      piVar12 = (int *)param_2[0xb];
      if (piVar12 != (int *)0x0) {
        *piVar12 = *piVar12 + *(int *)(lVar19 + 0xb0);
      }
      uStack_2f0 = CONCAT44(uStack_2f0._4_4_,(uint)uStack_2f0 & ~uStack_2fc);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_300);
    }
  }
  return 1;
joined_r0x000142f482b0:
  if (iVar8 == -1) goto LAB_142f4831c;
  lVar14 = (longlong)iVar8;
  if (*(int *)(lVar15 + lVar14 * 0xc) == iVar7) {
    uVar23 = (longlong)*(int *)(lVar15 + 8 + lVar14 * 0xc) & uVar23;
    puVar1 = (undefined4 *)(lVar22 + uVar23 * 4);
    iVar10 = *(int *)(lVar22 + uVar23 * 4);
    goto joined_r0x000142f482e6;
  }
  iVar8 = *(int *)(lVar15 + 4 + lVar14 * 0xc);
  goto joined_r0x000142f482b0;
joined_r0x000142f482e6:
  if (iVar10 == -1) goto LAB_142f4830d;
  if (iVar10 == iVar8) {
    *puVar1 = *(undefined4 *)(lVar15 + lVar14 * 0xc + 4);
    goto LAB_142f4830d;
  }
  lVar22 = (longlong)iVar10 * 3 + 1;
  iVar10 = *(int *)(lVar15 + lVar22 * 4);
  puVar1 = (undefined4 *)(lVar15 + lVar22 * 4);
  goto joined_r0x000142f482e6;
LAB_142f4830d:
  TSparseArray<TSetElement<unsigned_char>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(lVar19 + 0x58,iVar8,1);
LAB_142f4831c:
  FUN_140ac3dd0(lVar19 + 8,local_310,&local_548,0);
  uVar27 = 1;
LAB_142f48336:
  uStack_4f8 = CONCAT44(uStack_4f8._4_4_,(uint)uStack_4f8 & ~uStack_508._4_4_);
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_508);
  goto LAB_142f481f0;
}



// FUNCTION 142f49cb0 FUN_142f49cb0 body=96 status=ok
// SIG undefined FUN_142f49cb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142f49cb0(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142f4a0e0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1459da2f8;
    uVar2 = uRam0000000146b421fc;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    *(undefined4 *)((longlong)puVar1 + 0xe4) = 0;
    *(undefined4 *)(puVar1 + 0x1d) = 0;
    *(uint *)((longlong)puVar1 + 0xec) = uVar2;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    uVar2 = uRam0000000146b421f4 & uRam0000000146b42204;
    uVar3 = uRam0000000146b421f8 & uRam0000000146b42208;
    uVar4 = uRam0000000146b421fc & uRam0000000146b4220c;
    *(uint *)(puVar1 + 0x20) = _DAT_146b421f0 & _DAT_146b42200;
    *(uint *)((longlong)puVar1 + 0x104) = uVar2;
    *(uint *)(puVar1 + 0x21) = uVar3;
    *(uint *)((longlong)puVar1 + 0x10c) = uVar4;
  }
  return;
}



// FUNCTION 142f49d10 FUN_142f49d10 body=85 status=ok
// SIG undefined FUN_142f49d10(void)

void FUN_142f49d10(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141300770(puVar1,param_1);
    *puVar1 = &PTR_FUN_1459da5d8;
    puVar1[0x20] = &PTR_LAB_1459daa70;
    puVar1[0x41] = &PTR_LAB_1459daa98;
    puVar1[0x57] = 0;
    puVar1[0x58] = 0;
  }
  return;
}



// FUNCTION 142f49d70 FUN_142f49d70 body=161 status=ok
// SIG undefined FUN_142f49d70(void)

void FUN_142f49d70(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141300770(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x2ed) = 1;
    *(undefined4 *)(puVar1 + 0x5e) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x2f4) = 0;
    *puVar1 = &PTR_FUN_1459daaf8;
    puVar1[0x20] = &PTR_LAB_1459daf98;
    puVar1[0x41] = &PTR_LAB_1459dafc0;
    puVar1[0x57] = &PTR_LAB_1459db010;
    puVar1[100] = 0;
    puVar1[0x65] = 0;
    puVar1[0x66] = 0;
    puVar1[0x67] = 0;
    puVar1[0x68] = 0;
    puVar1[0x69] = 0;
    puVar1[0x6a] = 0;
  }
  return;
}



// FUNCTION 142f49e60 FUN_142f49e60 body=275 status=ok
// SIG undefined FUN_142f49e60(void)

void FUN_142f49e60(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142f4a0e0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1459db498;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x21] = 0;
    puVar1[0x22] = 0;
    *(undefined4 *)(puVar1 + 0x1e) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xf4) = 0;
    puVar1[0x20] = 0;
    *(undefined4 *)(puVar1 + 0x22) = 0;
    if (0x7fffffff < *(uint *)((longlong)puVar1 + 0x114)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 0x21,0);
    }
    if ((undefined2 *)puVar1[0x21] != (undefined2 *)0x0) {
      *(undefined2 *)puVar1[0x21] = 0;
    }
    *(undefined8 *)((longlong)puVar1 + 0xf4) = 0;
    *(undefined4 *)(puVar1 + 0x1e) = 0xffffffff;
    puVar1[0x20] = 0;
    *(undefined4 *)(puVar1 + 0x22) = 0;
    if ((*(int *)((longlong)puVar1 + 0x114) < 0) && (*(int *)((longlong)puVar1 + 0x114) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 0x21,0);
    }
    if ((undefined2 *)puVar1[0x21] != (undefined2 *)0x0) {
      *(undefined2 *)puVar1[0x21] = 0;
    }
    *(undefined4 *)(puVar1 + 0x1f) = 0;
    *(undefined2 *)(puVar1 + 0x23) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x11a) = 0;
  }
  return;
}



// FUNCTION 142f49f80 FUN_142f49f80 body=41 status=ok
// SIG undefined FUN_142f49f80(void)

void FUN_142f49f80(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142f4a0e0(puVar1,param_1);
    *puVar1 = &PTR_FUN_1459da048;
  }
  return;
}



// FUNCTION 142f49fd0 FUN_142f49fd0 body=41 status=ok
// SIG undefined FUN_142f49fd0(void)

void FUN_142f49fd0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_1459d9dc0;
  }
  return;
}



// FUNCTION 142f4a040 FUN_142f4a040 body=62 status=ok
// SIG undefined FUN_142f4a040(void)

void FUN_142f4a040(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144839a18;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x43960000;
    *(undefined4 *)(puVar1 + 7) = 0x43480000;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x43160000;
  }
  return;
}



// FUNCTION 142f4a0e0 FUN_142f4a0e0 body=374 status=ok
// SIG undefined FUN_142f4a0e0(void)

undefined8 * FUN_142f4a0e0(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_1459da048;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x6c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xc,0);
  }
  if ((undefined2 *)param_1[0xc] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xc] = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((*(int *)((longlong)param_1 + 0x6c) < 0) && (*(int *)((longlong)param_1 + 0x6c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xc,0);
  }
  if ((undefined2 *)param_1[0xc] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xc] = 0;
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if ((*(int *)((longlong)param_1 + 0x94) < 0) && (*(int *)((longlong)param_1 + 0x94) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x11,0);
  }
  if ((undefined2 *)param_1[0x11] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x11] = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if ((*(int *)((longlong)param_1 + 0x94) < 0) && (*(int *)((longlong)param_1 + 0x94) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x11,0);
  }
  if ((undefined2 *)param_1[0x11] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x11] = 0;
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  FText::FText(param_1 + 0x13);
  FText::FText(param_1 + 0x17);
  return param_1;
}



// FUNCTION 142f4a260 FUN_142f4a260 body=200 status=ok
// SIG undefined FUN_142f4a260(void)

void FUN_142f4a260(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0xc0);
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
  plVar4 = *(longlong **)(param_1 + 0xa0);
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
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 142f4a330 FUN_142f4a330 body=551 status=ok
// SIG undefined FUN_142f4a330(void)

longlong * FUN_142f4a330(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  uint *puVar10;
  undefined1 local_res8 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  local_58 = (uint *)CONCAT44(local_58._4_4_,(undefined4)local_58);
  if (param_1 != param_2) {
    TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty
              (param_1,(int)param_2[1] - *(int *)((longlong)param_2 + 0x34));
    iVar9 = (int)param_2[5];
    puStack_30 = (uint *)(param_2 + 2);
    local_68 = 0x100000000;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar9 != 0) {
      puVar10 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar10 = puStack_30;
      }
      uVar5 = *puVar10;
      uStack_50 = 0;
      iVar6 = 0;
      while (uVar5 == 0) {
        uStack_50 = uStack_50 + 0x20;
        uVar4 = (ulonglong)local_68 >> 0x20;
        local_68 = CONCAT44((int)uVar4,iVar6 + 1);
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_142f4a3fd;
        uVar5 = puVar10[(longlong)iVar6 + 1];
        iVar6 = iVar6 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar6 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      local_68 = CONCAT44(uVar5,(undefined4)local_68);
      if (uVar5 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      local_58._4_4_ = (uStack_50 - iVar6) + 0x1f;
      if (iVar9 < local_58._4_4_) {
LAB_142f4a3fd:
        local_58._4_4_ = iVar9;
      }
    }
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    iStack_20 = uStack_50;
    iStack_1c = iStack_4c;
    uStack_38 = local_68;
    uStack_60 = local_68;
    local_48 = uStack_50;
    iStack_44 = iStack_4c;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar3 = local_58._4_4_ < iVar9;
    local_40 = param_2;
    local_58 = puStack_30;
    if (bVar3) {
      do {
        TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
        ::Emplace<TTuple<unsigned_int,bool>_const_&>
                  (param_1,local_res8,(longlong)iStack_4c * 0x10 + *param_2,0);
        uStack_50 = uStack_50 & ~uStack_60._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  *(int *)(param_1 + 10) = (int)param_2[10];
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  TSet<TTuple<int,FFastArraySerializerGuidReferences>,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 0xb,param_2 + 0xb);
  plVar1 = param_1 + 0x16;
  *(int *)(param_1 + 0x15) = (int)param_2[0x15];
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xac);
  if (plVar1 != param_2 + 0x16) {
    iVar9 = (int)param_2[0x17];
    lVar2 = param_2[0x16];
    *(int *)(param_1 + 0x17) = iVar9;
    if ((iVar9 == 0) && (*(int *)((longlong)param_1 + 0xbc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar1,iVar9);
      if (iVar9 != 0) {
        puVar7 = (undefined8 *)*plVar1;
        puVar8 = (undefined8 *)(lVar2 + 0x10);
        do {
          *puVar7 = 0xffffffffffffffff;
          *(undefined4 *)(puVar7 + 1) = 0xffffffff;
          puVar7[2] = *puVar8;
          iVar9 = iVar9 + -1;
          puVar7 = puVar7 + 3;
          puVar8 = puVar8 + 3;
        } while (iVar9 != 0);
      }
    }
  }
  param_1[0x18] = param_2[0x18];
  return param_1;
}



// FUNCTION 142f4a560 operator() body=76 status=ok
// SIG undefined operator()(void)

int <lambda_425717d80d7fcf41fab83dc3d937ea93>::operator()(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0;
  piVar3 = (int *)**(undefined8 **)(param_1 + 8);
  piVar1 = piVar3 + (longlong)*(int *)(*(undefined8 **)(param_1 + 8) + 1) * 6;
  if (piVar3 != piVar1) {
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x45) == '\0') {
        bVar5 = true;
      }
      else {
        bVar5 = *piVar3 != -1;
      }
      iVar2 = iVar4 + 1;
      if (!bVar5) {
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      piVar3 = piVar3 + 6;
    } while (piVar3 != piVar1);
  }
  return iVar4;
}



// FUNCTION 142f4a5f0 FUN_142f4a5f0 body=52 status=ok
// SIG undefined FUN_142f4a5f0(void)

undefined8 FUN_142f4a5f0(undefined8 param_1,ulonglong param_2)

{
  FUN_142f4a260();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 142f4a630 FUN_142f4a630 body=87 status=ok
// SIG undefined FUN_142f4a630(void)

longlong FUN_142f4a630(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2f8);
  }
  return param_1;
}



// FUNCTION 142f4a690 FUN_142f4a690 body=297 status=ok
// SIG undefined FUN_142f4a690(void)

longlong FUN_142f4a690(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x350);
  plVar1 = *(longlong **)(param_1 + 0x348);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x348);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 0x340);
  plVar1 = *(longlong **)(param_1 + 0x338);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x338);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 0x330);
  plVar1 = *(longlong **)(param_1 + 0x328);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x328);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  *(undefined ***)(param_1 + 0x2b8) = &PTR_FUN_1445e3d48;
  *(undefined ***)(param_1 + 0x208) = &PTR_FUN_14468d298;
  FUN_141300980(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x360);
  }
  return param_1;
}



// FUNCTION 142f4a7c0 FUN_142f4a7c0 body=90 status=ok
// SIG undefined FUN_142f4a7c0(void)

longlong FUN_142f4a7c0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  FUN_142f4a260(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 142f4a820 FUN_142f4a820 body=52 status=ok
// SIG undefined FUN_142f4a820(void)

undefined8 FUN_142f4a820(undefined8 param_1,ulonglong param_2)

{
  FUN_142f4a260();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 142f4a890 Construct body=135 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FLobbyPlayerStateInfoArray>::Construct
               (undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,200);
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined4 *)((longlong)param_2 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined4 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined4 *)((longlong)param_2 + 0x88) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined4 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  return;
}



// FUNCTION 142f4a960 FUN_142f4a960 body=106 status=ok
// SIG undefined FUN_142f4a960(void)

undefined8 FUN_142f4a960(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined1 *)(param_2 + 0x18);
    do {
      FString::operator=(puVar1 + -0x18,puVar1 + param_3 + -0x18);
      *(undefined8 *)(puVar1 + -8) = *(undefined8 *)(puVar1 + param_3 + -8);
      *puVar1 = puVar1[param_3];
      puVar1 = puVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142f4a9d0 FUN_142f4a9d0 body=529 status=ok
// SIG undefined FUN_142f4a9d0(void)

undefined8 FUN_142f4a9d0(undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [24];
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    do {
      *param_2 = *(undefined4 *)(param_3 + -0x18);
      param_2[1] = *(undefined4 *)(param_3 + -0x14);
      param_2[2] = *(undefined4 *)(param_3 + -0x10);
      local_70 = *(undefined8 *)(param_3 + -8);
      FString::FString(local_68,param_3);
      FSoftObjectPath::operator=(param_2 + 4,&local_70);
      plVar1 = (longlong *)(param_2 + 10);
      if (plVar1 != (longlong *)(param_3 + 0x10)) {
        iVar4 = param_2[0xc];
        if (iVar4 != 0) {
          plVar3 = (longlong *)(*plVar1 + 0x18);
          do {
            if (*plVar3 != 0) {
              FMemory::Free();
            }
            plVar3 = plVar3 + 5;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        iVar4 = *(int *)(param_3 + 0x18);
        lVar2 = *(longlong *)(param_3 + 0x10);
        param_2[0xc] = iVar4;
        if ((iVar4 == 0) && (param_2[0xd] == 0)) {
          param_2[0xd] = 0;
        }
        else {
          TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(plVar1,iVar4);
          puVar7 = (undefined4 *)*plVar1;
          if (iVar4 != 0) {
            puVar5 = (undefined8 *)(puVar7 + 8);
            puVar6 = (undefined4 *)(lVar2 + 4);
            do {
              puVar5[-1] = 0;
              *puVar5 = 0;
              *puVar7 = 0xffffffff;
              *(undefined4 *)((longlong)puVar5 + -0x1c) = 0;
              puVar5[-2] = 0;
              *(undefined4 *)puVar5 = 0;
              if (0x7fffffff < *(uint *)((longlong)puVar5 + 4)) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar5 + -1,0);
              }
              if ((undefined2 *)puVar5[-1] != (undefined2 *)0x0) {
                *(undefined2 *)puVar5[-1] = 0;
              }
              *(undefined4 *)(puVar5 + -3) = 0;
              *puVar7 = puVar6[-1];
              *(undefined4 *)((longlong)puVar5 + -0x1c) = *puVar6;
              *(undefined4 *)(puVar5 + -3) = puVar6[1];
              local_58 = *(undefined8 *)(puVar6 + 3);
              FString::FString(local_50,puVar6 + 5);
              FSoftObjectPath::operator=(puVar5 + -2);
              puVar7 = puVar7 + 10;
              puVar5 = puVar5 + 5;
              puVar6 = puVar6 + 10;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
      }
      param_3 = param_3 + 0x38;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xe;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142f4abf0 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FAnimNode_BlendByAnimTags>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_142f4a330(param_2 + param_3,param_3);
      param_3 = param_3 + 200;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142f4acd0 FUN_142f4acd0 body=123 status=ok
// SIG undefined FUN_142f4acd0(void)

undefined8 FUN_142f4acd0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x18);
    do {
      FString::operator=(puVar1 + -6,param_3 + -0x18 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + -2) = *(undefined8 *)(param_3 + -8 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(param_3 + 8 + (longlong)puVar1);
      *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 0x10 + (longlong)puVar1);
      puVar1 = puVar1 + 0xc;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142f4ad50 Destruct body=43 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FCheatInputAction>::Destruct(undefined8 param_1,longlong param_2)

{
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_2 + 0x28);
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142f4ad80 FUN_142f4ad80 body=85 status=ok
// SIG undefined FUN_142f4ad80(void)

void FUN_142f4ad80(void)

{
  if (DAT_146b42190 == 0) {
    if (DAT_146b42618 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b42618,&PTR_s__Script_GbxTravelStation_1459db328);
    }
    DAT_146b42190 = GetStaticEnum(FUN_142f4bb10,DAT_146b42618,L"EFastTravelDirection");
  }
  return;
}



// FUNCTION 142f4ade0 FUN_142f4ade0 body=85 status=ok
// SIG undefined FUN_142f4ade0(void)

void FUN_142f4ade0(void)

{
  if (DAT_146b42188 == 0) {
    if (DAT_146b42618 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b42618,&PTR_s__Script_GbxTravelStation_1459db328);
    }
    DAT_146b42188 = GetStaticEnum(FUN_142f4bb40,DAT_146b42618,L"ETravelStatus");
  }
  return;
}



// FUNCTION 142f4ae40 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGPracticeMode::GetPrivateStaticClass(void)

{
  if (DAT_146b42840 == 0) {
    FUN_14171ccd0(L"/Script/GbxTravelStation",L"TravelStationTracker",&DAT_146b42840,FUN_142f4b210,
                  0x548,0x10000008,0,L"Engine",&LAB_142f49c70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146b42840;
}



// FUNCTION 142f4aef0 FUN_142f4aef0 body=162 status=ok
// SIG undefined FUN_142f4aef0(void)

longlong FUN_142f4aef0(void)

{
  if (DAT_146b42630 == 0) {
    FUN_14171ccd0(L"/Script/GbxTravelStation",L"GlobalTravelGraph",&DAT_146b42630,FUN_142f4b2d0,0xa0
                  ,0x10000000,0,L"Engine",&LAB_142f49e20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_142f46ca0,&LAB_140447700,0);
  }
  return DAT_146b42630;
}



// FUNCTION 142f4afa0 FUN_142f4afa0 body=6 status=ok
// SIG undefined FUN_142f4afa0(void)

undefined8 FUN_142f4afa0(void)

{
  return 0x43885490;
}



// FUNCTION 142f4afb0 FUN_142f4afb0 body=6 status=ok
// SIG undefined FUN_142f4afb0(void)

undefined8 FUN_142f4afb0(void)

{
  return 0x3fd1b320;
}



// FUNCTION 142f4afc0 FUN_142f4afc0 body=6 status=ok
// SIG undefined FUN_142f4afc0(void)

undefined8 FUN_142f4afc0(void)

{
  return 0x9f702d67;
}



// FUNCTION 142f4afd0 FUN_142f4afd0 body=6 status=ok
// SIG undefined FUN_142f4afd0(void)

undefined8 FUN_142f4afd0(void)

{
  return 0xe0e4498d;
}



// FUNCTION 142f4afe0 FUN_142f4afe0 body=6 status=ok
// SIG undefined FUN_142f4afe0(void)

undefined8 FUN_142f4afe0(void)

{
  return 0x50a32c6e;
}



// FUNCTION 142f4aff0 FUN_142f4aff0 body=6 status=ok
// SIG undefined FUN_142f4aff0(void)

undefined8 FUN_142f4aff0(void)

{
  return 0x7832f98;
}



// FUNCTION 142f4b000 FUN_142f4b000 body=6 status=ok
// SIG undefined FUN_142f4b000(void)

undefined8 FUN_142f4b000(void)

{
  return 0xdd0f342;
}



// FUNCTION 142f4b010 FUN_142f4b010 body=6 status=ok
// SIG undefined FUN_142f4b010(void)

undefined8 FUN_142f4b010(void)

{
  return 0x43c6b580;
}



// FUNCTION 142f4b020 FUN_142f4b020 body=6 status=ok
// SIG undefined FUN_142f4b020(void)

undefined8 FUN_142f4b020(void)

{
  return 0x475fd4f;
}



// FUNCTION 142f4b090 RemoveAtSwapImpl body=153 status=ok
// SIG undefined RemoveAtSwapImpl(void)

void TArray<FLobbyPlayerStateActorInfo,FDefaultAllocator>::RemoveAtSwapImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar2 = (int)param_1[1];
    iVar1 = (iVar2 - param_2) - param_3;
    if (param_3 <= iVar1) {
      iVar1 = param_3;
    }
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x18),
                 (void *)(*param_1 + (longlong)(iVar2 - iVar1) * 0x18),(longlong)iVar1 * 0x18);
      iVar2 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 - param_3;
    if (param_4 != '\0') {
      ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 142f4b130 ResizeShrink body=168 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<FLobbyPlayerStateActorInfo,FDefaultAllocator>::ResizeShrink(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0x18) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0x18,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
        iVar4 = (int)(uVar3 / 0x18);
      }
      goto LAB_142f4b1a6;
    }
    if (iVar4 == 0) goto LAB_142f4b1a6;
  }
  iVar4 = iVar5;
LAB_142f4b1a6:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x18,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 142f4b1e0 FUN_142f4b1e0 body=34 status=ok
// SIG undefined FUN_142f4b1e0(void)

void FUN_142f4b1e0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142f47a40();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_TeleportPlayersToDestination_1459db748,1)
  ;
  return;
}



// FUNCTION 142f4b210 FUN_142f4b210 body=34 status=ok
// SIG undefined FUN_142f4b210(void)

void FUN_142f4b210(void)

{
  undefined8 uVar1;
  
  uVar1 = AGPracticeMode::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_FindFastTravelStationForMap_1459dba50,0xc);
  return;
}



// FUNCTION 142f4b240 FUN_142f4b240 body=34 status=ok
// SIG undefined FUN_142f4b240(void)

void FUN_142f4b240(void)

{
  undefined8 uVar1;
  
  uVar1 = UUGButton::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ActivateFastTravel_1459d9d80,4);
  return;
}



// FUNCTION 142f4b270 FUN_142f4b270 body=34 status=ok
// SIG undefined FUN_142f4b270(void)

void FUN_142f4b270(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142f475d0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnStationClicked_1459daae8,1);
  return;
}



// FUNCTION 142f4b2a0 StaticRegisterNativesATroiCaoGateActor body=34 status=ok
// SIG undefined StaticRegisterNativesATroiCaoGateActor(void)

void ATroiCaoGateActor::StaticRegisterNativesATroiCaoGateActor(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnActiveStationsStateChanged_1459db2b0,4)
  ;
  return;
}



// FUNCTION 142f4b2d0 FUN_142f4b2d0 body=34 status=ok
// SIG undefined FUN_142f4b2d0(void)

void FUN_142f4b2d0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142f4aef0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_DebugFindClosestLevel_1459db350,1);
  return;
}



// FUNCTION 142f4b300 StaticRegisterNativesUUGHitTextureButton body=34 status=ok
// SIG undefined StaticRegisterNativesUUGHitTextureButton(void)

void UUGHitTextureButton::StaticRegisterNativesUUGHitTextureButton(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ActivateLevelTravel_1459db478,2);
  return;
}



// FUNCTION 142f4b330 FUN_142f4b330 body=34 status=ok
// SIG undefined FUN_142f4b330(void)

void FUN_142f4b330(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142f46fc0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_EnumerateValidTravelStation_1459db870,3);
  return;
}



// FUNCTION 142f4b360 FUN_142f4b360 body=34 status=ok
// SIG undefined FUN_142f4b360(void)

void FUN_142f4b360(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142f47520();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetStationMapName_1459db8a0,1);
  return;
}



// FUNCTION 142f4b390 FUN_142f4b390 body=34 status=ok
// SIG undefined FUN_142f4b390(void)

void FUN_142f4b390(void)

{
  undefined8 uVar1;
  
  uVar1 = AArchVisCharacter::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ActivateTravelStation_1459db9c8,2);
  return;
}



// FUNCTION 142f4b3c0 FUN_142f4b3c0 body=113 status=ok
// SIG undefined FUN_142f4b3c0(void)

void FUN_142f4b3c0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b427b8 == 0) {
    if (DAT_146b42618 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b42618,&PTR_s__Script_GbxTravelStation_1459db328);
    }
    lVar1 = DAT_146b42618;
    uVar2 = FUN_142f4afa0();
    DAT_146b427b8 = GetStaticStruct(FUN_142f4bb70,lVar1,L"ActiveFastTravelData",0x10,uVar2);
  }
  return;
}



// FUNCTION 142f4b440 FUN_142f4b440 body=113 status=ok
// SIG undefined FUN_142f4b440(void)

void FUN_142f4b440(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b427c8 == 0) {
    if (DAT_146b42618 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b42618,&PTR_s__Script_GbxTravelStation_1459db328);
    }
    lVar1 = DAT_146b42618;
    uVar2 = FUN_142f4afb0();
    DAT_146b427c8 = GetStaticStruct(FUN_142f4bba0,lVar1,L"ActiveFastTravelSaveData",0x18,uVar2);
  }
  return;
}



// FUNCTION 142f4b4c0 FUN_142f4b4c0 body=113 status=ok
// SIG undefined FUN_142f4b4c0(void)

void FUN_142f4b4c0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b425d8 == 0) {
    if (DAT_146b42618 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b42618,&PTR_s__Script_GbxTravelStation_1459db328);
    }
    lVar1 = DAT_146b42618;
    uVar2 = FUN_142f4afc0();
    DAT_146b425d8 = GetStaticStruct(FUN_142f4bbd0,lVar1,L"AvailableTravelStation",0x20,uVar2);
  }
  return;
}



// FUNCTION 142f4b540 FUN_142f4b540 body=113 status=ok
// SIG undefined FUN_142f4b540(void)

void FUN_142f4b540(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b426a8 == 0) {
    if (DAT_146b42618 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b42618,&PTR_s__Script_GbxTravelStation_1459db328);
    }
    lVar1 = DAT_146b42618;
    uVar2 = FUN_142f4afd0();
    DAT_146b426a8 = GetStaticStruct(FUN_142f4bc00,lVar1,L"ExternalGraphLevelLinks",0x38,uVar2);
  }
  return;
}



// FUNCTION 142f4b5c0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAnimNode_BlendListBase::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b42540 == 0) {
    if (DAT_146b42618 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b42618,&PTR_s__Script_GbxTravelStation_1459db328);
    }
    lVar1 = DAT_146b42618;
    uVar2 = FUN_142f4afe0();
    DAT_146b42540 =
         GetStaticStruct(FUN_142f4bc30,lVar1,L"FastTravelStationActiveContainer",200,uVar2);
  }
  return;
}



// FUNCTION 142f4b640 FUN_142f4b640 body=113 status=ok
// SIG undefined FUN_142f4b640(void)

void FUN_142f4b640(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b42550 == 0) {
    if (DAT_146b42618 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b42618,&PTR_s__Script_GbxTravelStation_1459db328);
    }
    lVar1 = DAT_146b42618;
    uVar2 = FUN_142f4aff0();
    DAT_146b42550 = GetStaticStruct(FUN_142f4bc60,lVar1,L"FastTravelStationActiveEntry",0x18,uVar2);
  }
  return;
}



// FUNCTION 142f4b6c0 FUN_142f4b6c0 body=113 status=ok
// SIG undefined FUN_142f4b6c0(void)

void FUN_142f4b6c0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b42748 == 0) {
    if (DAT_146b42618 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b42618,&PTR_s__Script_GbxTravelStation_1459db328);
    }
    lVar1 = DAT_146b42618;
    uVar2 = FUN_142f4b000();
    DAT_146b42748 = GetStaticStruct(FUN_142f4bc90,lVar1,L"SpawnPointTracker",0x28,uVar2);
  }
  return;
}



// FUNCTION 142f4b740 FUN_142f4b740 body=113 status=ok
// SIG undefined FUN_142f4b740(void)

void FUN_142f4b740(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b427a8 == 0) {
    if (DAT_146b42618 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b42618,&PTR_s__Script_GbxTravelStation_1459db328);
    }
    lVar1 = DAT_146b42618;
    uVar2 = FUN_142f4b010();
    DAT_146b427a8 = GetStaticStruct(FUN_142f4bcc0,lVar1,L"TravelCountdownInfo",0x10,uVar2);
  }
  return;
}



// FUNCTION 142f4b7c0 FUN_142f4b7c0 body=113 status=ok
// SIG undefined FUN_142f4b7c0(void)

void FUN_142f4b7c0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146b42640 == 0) {
    if (DAT_146b42618 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146b42618,&PTR_s__Script_GbxTravelStation_1459db328);
    }
    lVar1 = DAT_146b42618;
    uVar2 = FUN_142f4b020();
    DAT_146b42640 = GetStaticStruct(FUN_142f4bcf0,lVar1,L"TravelDataConditional",0x30,uVar2);
  }
  return;
}



// FUNCTION 142f4b840 FUN_142f4b840 body=47 status=ok
// SIG undefined FUN_142f4b840(void)

longlong FUN_142f4b840(void)

{
  if (DAT_146b426d8 == 0) {
    FUN_141786440(&DAT_146b426d8,&PTR_GetPrivateStaticClass_1459d9720);
  }
  return DAT_146b426d8;
}



// FUNCTION 142f4b870 FUN_142f4b870 body=47 status=ok
// SIG undefined FUN_142f4b870(void)

longlong FUN_142f4b870(void)

{
  if (DAT_146b425a8 == 0) {
    FUN_141786440(&DAT_146b425a8,&PTR_FUN_1459d83b0);
  }
  return DAT_146b425a8;
}



// FUNCTION 142f4b8a0 FUN_142f4b8a0 body=47 status=ok
// SIG undefined FUN_142f4b8a0(void)

longlong FUN_142f4b8a0(void)

{
  if (DAT_146b42670 == 0) {
    FUN_141786440(&DAT_146b42670,&PTR_FUN_1459d8490);
  }
  return DAT_146b42670;
}



// FUNCTION 142f4b8d0 FUN_142f4b8d0 body=47 status=ok
// SIG undefined FUN_142f4b8d0(void)

longlong FUN_142f4b8d0(void)

{
  if (DAT_146b42680 == 0) {
    FUN_141786440(&DAT_146b42680,&PTR_GetPrivateStaticClass_1459d8a50);
  }
  return DAT_146b42680;
}



// FUNCTION 142f4b900 FUN_142f4b900 body=47 status=ok
// SIG undefined FUN_142f4b900(void)

longlong FUN_142f4b900(void)

{
  if (DAT_146b42728 == 0) {
    FUN_141786440(&DAT_146b42728,&PTR_StaticClass_1459d52a0);
  }
  return DAT_146b42728;
}



// FUNCTION 142f4b930 FUN_142f4b930 body=47 status=ok
// SIG undefined FUN_142f4b930(void)

longlong FUN_142f4b930(void)

{
  if (DAT_146b42790 == 0) {
    FUN_141786440(&DAT_146b42790,&PTR_GetPrivateStaticClass_1459d6270);
  }
  return DAT_146b42790;
}



// FUNCTION 142f4b960 FUN_142f4b960 body=47 status=ok
// SIG undefined FUN_142f4b960(void)

longlong FUN_142f4b960(void)

{
  if (DAT_146b42780 == 0) {
    FUN_141786440(&DAT_146b42780,&PTR_FUN_1459d60c0);
  }
  return DAT_146b42780;
}



// FUNCTION 142f4b990 FUN_142f4b990 body=47 status=ok
// SIG undefined FUN_142f4b990(void)

longlong FUN_142f4b990(void)

{
  if (DAT_146b42848 == 0) {
    FUN_141786440(&DAT_146b42848,&PTR_GetPrivateStaticClass_1459d7460);
  }
  return DAT_146b42848;
}



// FUNCTION 142f4b9c0 FUN_142f4b9c0 body=47 status=ok
// SIG undefined FUN_142f4b9c0(void)

longlong FUN_142f4b9c0(void)

{
  if (DAT_146b42568 == 0) {
    FUN_141786a30(&DAT_146b42568,&PTR_FUN_14675dfe0);
  }
  return DAT_146b42568;
}



// FUNCTION 142f4b9f0 FUN_142f4b9f0 body=47 status=ok
// SIG undefined FUN_142f4b9f0(void)

longlong FUN_142f4b9f0(void)

{
  if (DAT_146b42560 == 0) {
    FUN_141786a30(&DAT_146b42560,&PTR_FUN_14675df50);
  }
  return DAT_146b42560;
}



// FUNCTION 142f4ba20 FUN_142f4ba20 body=47 status=ok
// SIG undefined FUN_142f4ba20(void)

longlong FUN_142f4ba20(void)

{
  if (DAT_146b42638 == 0) {
    FUN_141786a30(&DAT_146b42638,&PTR_FUN_14675ef10);
  }
  return DAT_146b42638;
}



// FUNCTION 142f4ba50 FUN_142f4ba50 body=47 status=ok
// SIG undefined FUN_142f4ba50(void)

longlong FUN_142f4ba50(void)

{
  if (DAT_146b42778 == 0) {
    FUN_141786a30(&DAT_146b42778,&PTR_FUN_146760bc0);
  }
  return DAT_146b42778;
}



// FUNCTION 142f4ba80 FUN_142f4ba80 body=47 status=ok
// SIG undefined FUN_142f4ba80(void)

longlong FUN_142f4ba80(void)

{
  if (DAT_146b42738 == 0) {
    FUN_141786a30(&DAT_146b42738,&PTR_FUN_146760460);
  }
  return DAT_146b42738;
}



// FUNCTION 142f4bab0 FUN_142f4bab0 body=47 status=ok
// SIG undefined FUN_142f4bab0(void)

longlong FUN_142f4bab0(void)

{
  if (DAT_146b425b8 == 0) {
    FUN_141786a30(&DAT_146b425b8,&PTR_FUN_14675e570);
  }
  return DAT_146b425b8;
}



// FUNCTION 142f4bae0 FUN_142f4bae0 body=47 status=ok
// SIG undefined FUN_142f4bae0(void)

longlong FUN_142f4bae0(void)

{
  if (DAT_146b42740 == 0) {
    FUN_141786a30(&DAT_146b42740,&PTR_FUN_1467604e0);
  }
  return DAT_146b42740;
}



// FUNCTION 142f4bb10 FUN_142f4bb10 body=47 status=ok
// SIG undefined FUN_142f4bb10(void)

longlong FUN_142f4bb10(void)

{
  if (DAT_146b425a0 == 0) {
    FUN_1417866a0(&DAT_146b425a0,&PTR_FUN_146761b90);
  }
  return DAT_146b425a0;
}



// FUNCTION 142f4bb40 FUN_142f4bb40 body=47 status=ok
// SIG undefined FUN_142f4bb40(void)

longlong FUN_142f4bb40(void)

{
  if (DAT_146b427a0 == 0) {
    FUN_1417866a0(&DAT_146b427a0,&PTR_FUN_146761be0);
  }
  return DAT_146b427a0;
}



// FUNCTION 142f4bb70 FUN_142f4bb70 body=47 status=ok
// SIG undefined FUN_142f4bb70(void)

longlong FUN_142f4bb70(void)

{
  if (DAT_146b427c0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b427c0,&PTR_FUN_146760ed0);
  }
  return DAT_146b427c0;
}



// FUNCTION 142f4bba0 FUN_142f4bba0 body=47 status=ok
// SIG undefined FUN_142f4bba0(void)

longlong FUN_142f4bba0(void)

{
  if (DAT_146b427d0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b427d0,&PTR_FUN_146760fa0);
  }
  return DAT_146b427d0;
}



// FUNCTION 142f4bbd0 FUN_142f4bbd0 body=47 status=ok
// SIG undefined FUN_142f4bbd0(void)

longlong FUN_142f4bbd0(void)

{
  if (DAT_146b425e0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b425e0,&PTR_FUN_14675e7a0);
  }
  return DAT_146b425e0;
}



// FUNCTION 142f4bc00 FUN_142f4bc00 body=47 status=ok
// SIG undefined FUN_142f4bc00(void)

longlong FUN_142f4bc00(void)

{
  if (DAT_146b426b0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b426b0,&PTR_FUN_14675f760);
  }
  return DAT_146b426b0;
}



// FUNCTION 142f4bc30 FUN_142f4bc30 body=47 status=ok
// SIG undefined FUN_142f4bc30(void)

longlong FUN_142f4bc30(void)

{
  if (DAT_146b42548 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b42548,&PTR_FUN_14675de40);
  }
  return DAT_146b42548;
}



// FUNCTION 142f4bc60 FUN_142f4bc60 body=47 status=ok
// SIG undefined FUN_142f4bc60(void)

longlong FUN_142f4bc60(void)

{
  if (DAT_146b42558 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b42558,&PTR_FUN_14675def0);
  }
  return DAT_146b42558;
}



// FUNCTION 142f4bc90 FUN_142f4bc90 body=47 status=ok
// SIG undefined FUN_142f4bc90(void)

longlong FUN_142f4bc90(void)

{
  if (DAT_146b42750 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b42750,&PTR_FUN_1467605e0);
  }
  return DAT_146b42750;
}



// FUNCTION 142f4bcc0 FUN_142f4bcc0 body=47 status=ok
// SIG undefined FUN_142f4bcc0(void)

longlong FUN_142f4bcc0(void)

{
  if (DAT_146b427b0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b427b0,&PTR_FUN_146760df0);
  }
  return DAT_146b427b0;
}



// FUNCTION 142f4bcf0 FUN_142f4bcf0 body=47 status=ok
// SIG undefined FUN_142f4bcf0(void)

longlong FUN_142f4bcf0(void)

{
  if (DAT_146b42648 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146b42648,&PTR_FUN_14675f090);
  }
  return DAT_146b42648;
}



// FUNCTION 142f4bd20 FUN_142f4bd20 body=43 status=ok
// SIG undefined FUN_142f4bd20(void)

void FUN_142f4bd20(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142f3cc70();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f4bd50 FUN_142f4bd50 body=143 status=ok
// SIG undefined FUN_142f4bd50(void)

void FUN_142f4bd50(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_142f3cd50(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f4bde0 FUN_142f4bde0 body=144 status=ok
// SIG undefined FUN_142f4bde0(void)

void FUN_142f4bde0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int local_res10 [2];
  
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
  uVar1 = thunk_FUN_142f3ce80(param_1,local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f4be70 FUN_142f4be70 body=143 status=ok
// SIG undefined FUN_142f4be70(void)

void FUN_142f4be70(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_142f3f780(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f4bf00 execConvertRenderTargetToTexture2DEditorOnly body=238 status=ok
// SIG undefined execConvertRenderTargetToTexture2DEditorOnly(void)

void UKismetRenderingLibrary::execConvertRenderTargetToTexture2DEditorOnly
               (undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
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
  AK::MemoryMgr::StartProfileThreadUsage((long)local_18[0]);
  return;
}



// FUNCTION 142f4bff0 execGetNamesOfLoadedLevels body=248 status=ok
// SIG undefined execGetNamesOfLoadedLevels(void)

void UVictoryBPFunctionLibrary::execGetNamesOfLoadedLevels(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_res10 [3];
  longlong *local_18;
  undefined8 local_10;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_18 = (longlong *)0x0;
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage((long)local_res10[0]);
  plVar1 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 142f4c0f0 execConvertRenderTargetToTexture2DEditorOnly body=238 status=ok
// SIG undefined execConvertRenderTargetToTexture2DEditorOnly(void)

void UKismetRenderingLibrary::execConvertRenderTargetToTexture2DEditorOnly
               (undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  local_18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
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
  UE::Net::Private::FReliableNetBlobQueue::Serialize(local_18[0],local_res20,local_res10[0]);
  return;
}



// FUNCTION 142f4c1e0 FUN_142f4c1e0 body=144 status=ok
// SIG undefined FUN_142f4c1e0(void)

void FUN_142f4c1e0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_142f40660(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f4c270 FUN_142f4c270 body=134 status=ok
// SIG undefined FUN_142f4c270(void)

void FUN_142f4c270(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)UAssetRegistryImpl::OnPathAdded();
  if (param_3 != puVar2) {
    _Src = (void *)*puVar2;
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(param_3 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      return;
    }
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_3,iVar1);
    _guard_xfg_dispatch_icall_nop((void *)*param_3,_Src,(longlong)iVar1 << 4);
  }
  return;
}



// FUNCTION 142f4c300 FUN_142f4c300 body=134 status=ok
// SIG undefined FUN_142f4c300(void)

void FUN_142f4c300(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)USkinnedMeshComponent::GetSlavePoseComponents();
  if (param_3 != puVar2) {
    _Src = (void *)*puVar2;
    iVar1 = *(int *)(puVar2 + 1);
    *(int *)(param_3 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      return;
    }
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_3,iVar1);
    _guard_xfg_dispatch_icall_nop((void *)*param_3,_Src,(longlong)iVar1 << 3);
  }
  return;
}



// FUNCTION 142f4c390 FUN_142f4c390 body=458 status=ok
// SIG undefined FUN_142f4c390(void)

void FUN_142f4c390(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  int local_res8 [2];
  int local_res10 [2];
  undefined8 local_res18 [2];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_58;
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_res8[0] = 0;
  puVar3 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  bVar4 = local_res8[0] != 0;
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
  uVar1 = (**(code **)(*param_1 + 0x8f0))
                    (param_1,local_res18[0],puVar2,puVar3,bVar4,local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f4c560 FUN_142f4c560 body=239 status=ok
// SIG undefined FUN_142f4c560(void)

void FUN_142f4c560(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  void *local_28;
  ulonglong local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  _Src = local_28;
  local_18 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_20;
  local_10 = (int)local_20;
  if ((int)local_20 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_20 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar2 * 2);
  }
  uVar1 = FUN_142f41a20(param_1,&local_18);
  *param_3 = uVar1;
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142f4c650 FUN_142f4c650 body=144 status=ok
// SIG undefined FUN_142f4c650(void)

void FUN_142f4c650(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_142f41d90(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f4c6e0 FUN_142f4c6e0 body=44 status=ok
// SIG undefined FUN_142f4c6e0(void)

void FUN_142f4c6e0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142f41de0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f4c710 FUN_142f4c710 body=44 status=ok
// SIG undefined FUN_142f4c710(void)

void FUN_142f4c710(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142f41f60();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f4c760 FUN_142f4c760 body=144 status=ok
// SIG undefined FUN_142f4c760(void)

void FUN_142f4c760(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_142f428d0(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f4c7f0 FUN_142f4c7f0 body=130 status=ok
// SIG undefined FUN_142f4c7f0(void)

void FUN_142f4c7f0(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  
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
  FUN_142f438b0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 142f4c8e0 FUN_142f4c8e0 body=130 status=ok
// SIG undefined FUN_142f4c8e0(void)

void FUN_142f4c8e0(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  
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
  FUN_142f43f30(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 142f4c990 FUN_142f4c990 body=128 status=ok
// SIG undefined FUN_142f4c990(void)

void FUN_142f4c990(undefined8 param_1,longlong param_2)

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
  FUN_142f43fc0(param_1,local_res10);
  return;
}



// FUNCTION 142f4ca10 FUN_142f4ca10 body=194 status=ok
// SIG undefined FUN_142f4ca10(void)

void FUN_142f4ca10(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
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
  FUN_142f44070(param_1,local_res20,local_res10[0] != 0);
  return;
}



// FUNCTION 142f4cae0 FUN_142f4cae0 body=175 status=ok
// SIG undefined FUN_142f4cae0(void)

void FUN_142f4cae0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
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
  FUN_142f452f0(local_res20,local_res10[0]);
  return;
}



// FUNCTION 142f4cb90 FUN_142f4cb90 body=387 status=ok
// SIG undefined FUN_142f4cb90(void)

void FUN_142f4cb90(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res18 [2];
  undefined8 local_res20;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_142f45ed0(local_20,local_28,bVar2,local_res20,local_res18[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142f4cd40 TScriptInterface<IBlendableInterface><UMaterialInterface> body=82 status=ok
// SIG undefined TScriptInterface<IBlendableInterface><UMaterialInterface>(void)

longlong *
TScriptInterface<IBlendableInterface>::TScriptInterface<IBlendableInterface><UMaterialInterface>
          (longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = param_2;
  param_1[1] = 0;
  if (param_2 != 0) {
    uVar1 = UBlendableInterface::GetPrivateStaticClass();
    lVar2 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar1);
    param_1[1] = lVar2;
    return param_1;
  }
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 142f4cda0 FUN_142f4cda0 body=141 status=ok
// SIG undefined FUN_142f4cda0(void)

ulonglong FUN_142f4cda0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  uVar3 = FUN_142f588e0();
  if ((int)uVar3 == -1) {
    uVar1 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar1 + 1)) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,uVar1);
    }
    puVar4 = (undefined8 *)((longlong)(int)uVar1 * 0x30 + *param_1);
    *puVar4 = &PTR_FUN_1441d26b8;
    puVar4[1] = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    puVar4[2] = *(undefined8 *)(param_2 + 0x10);
    puVar4[3] = uVar2;
    *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)((longlong)puVar4 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *puVar4 = &DAT_1441d2800;
    uVar3 = (ulonglong)uVar1;
    puVar4[5] = *(undefined8 *)(param_2 + 0x28);
  }
  return uVar3;
}



// FUNCTION 142f4ce30 FUN_142f4ce30 body=124 status=ok
// SIG undefined FUN_142f4ce30(void)

ulonglong FUN_142f4ce30(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar4 = FUN_142f58a50();
  if ((int)uVar4 == -1) {
    uVar2 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar2 + 1)) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1,uVar2);
    }
    lVar1 = *param_1 + (longlong)(int)uVar2 * 0x48;
    TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(lVar1,param_2);
    uVar4 = (ulonglong)uVar2;
    *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(lVar1 + 0x38) = uVar3;
    *(undefined4 *)(lVar1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(lVar1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  }
  return uVar4;
}



// FUNCTION 142f4ceb0 FUN_142f4ceb0 body=707 status=ok
// SIG undefined FUN_142f4ceb0(void)

int * FUN_142f4ceb0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 uVar11;
  longlong lVar12;
  ulonglong *_Src;
  uint uVar13;
  undefined4 uVar14;
  void *_Dst;
  bool bVar15;
  int local_res8 [2];
  
  uVar14 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar7 * 0x20 + 4 + *param_1);
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  _Src = (ulonglong *)((longlong)iVar7 * 0x20 + *param_1);
  *_Src = *(ulonglong *)*param_3;
  _Src[1] = 0;
  _Src[2] = 0;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FUN_142f58d00(param_1,local_res8,_Src);
    iVar7 = local_res8[0];
    lVar12 = (longlong)local_res8[0];
    bVar15 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar15);
    if (bVar15) {
      _Dst = (void *)(lVar12 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      iVar3 = *param_2;
      bVar4 = (byte)iVar3 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar3;
      }
      puVar10 = (undefined4 *)((longlong)iVar3 * 0x20 + *param_1);
      *puVar10 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar14 = (undefined4)param_1[6];
      }
      puVar10[1] = uVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar3;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar7;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      uVar11 = (undefined1)local_res8[0];
      goto LAB_142f4d153;
    }
  }
  uVar11 = 0;
  cVar5 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar5 == '\0') {
    iVar7 = (int)(*_Src >> 4);
    uVar9 = 0x9e3779b9U - iVar7 ^ iVar7 << 8;
    uVar13 = -(uVar9 + iVar7) ^ uVar9 >> 0xd;
    uVar8 = (iVar7 - uVar9) - uVar13 ^ uVar13 >> 0xc;
    uVar9 = (uVar9 - uVar8) - uVar13 ^ uVar8 << 0x10;
    uVar13 = (uVar13 - uVar9) - uVar8 ^ uVar9 >> 5;
    uVar8 = (uVar8 - uVar9) - uVar13 ^ uVar13 >> 3;
    uVar9 = (uVar9 - uVar8) - uVar13 ^ uVar8 << 10;
    uVar8 = ((uVar13 - uVar9) - uVar8 ^ uVar9 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar8;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_142f4d153:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar11;
  }
  return param_2;
}



// FUNCTION 142f4d180 FUN_142f4d180 body=547 status=ok
// SIG undefined FUN_142f4d180(void)

int * FUN_142f4d180(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong *puVar13;
  uint uVar14;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar10 * 0x40 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x40 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar2 = *puVar2 | 1 << ((byte)iVar10 & 0x1f);
  lVar4 = param_3[1];
  puVar13 = (ulonglong *)((longlong)iVar10 * 0x40 + *param_1);
  *puVar13 = *(ulonglong *)*param_3;
  puVar13[1] = (ulonglong)&PTR_FUN_1441d26b8;
  puVar13[2] = *(ulonglong *)(lVar4 + 8);
  uVar5 = *(undefined4 *)(lVar4 + 0x14);
  uVar6 = *(undefined4 *)(lVar4 + 0x18);
  uVar7 = *(undefined4 *)(lVar4 + 0x1c);
  *(undefined4 *)(puVar13 + 3) = *(undefined4 *)(lVar4 + 0x10);
  *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar5;
  *(undefined4 *)(puVar13 + 4) = uVar6;
  *(undefined4 *)((longlong)puVar13 + 0x24) = uVar7;
  *(undefined4 *)(puVar13 + 5) = *(undefined4 *)(lVar4 + 0x20);
  *(undefined4 *)((longlong)puVar13 + 0x2c) = *(undefined4 *)(lVar4 + 0x24);
  puVar13[1] = (ulonglong)&DAT_1441d2800;
  puVar13[6] = *(ulonglong *)(lVar4 + 0x28);
  *(undefined4 *)(puVar13 + 7) = 0xffffffff;
  cVar8 = TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar8 == '\0') {
    iVar10 = (int)(*puVar13 >> 4);
    uVar12 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar14 = -(iVar10 + uVar12) ^ uVar12 >> 0xd;
    uVar11 = (iVar10 - uVar12) - uVar14 ^ uVar14 >> 0xc;
    uVar12 = (uVar12 - uVar11) - uVar14 ^ uVar11 << 0x10;
    uVar14 = (uVar14 - uVar12) - uVar11 ^ uVar12 >> 5;
    uVar11 = (uVar11 - uVar12) - uVar14 ^ uVar14 >> 3;
    uVar12 = (uVar12 - uVar11) - uVar14 ^ uVar11 << 10;
    uVar11 = ((uVar14 - uVar12) - uVar11 ^ uVar12 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)puVar13 + 0x3c) = uVar11;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(puVar13 + 7) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  return param_2;
}



// FUNCTION 142f4d3b0 GetGameState<APVPGameState> body=89 status=ok
// SIG undefined GetGameState<APVPGameState>(void)

longlong UWorld::GetGameState<APVPGameState>(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x148);
  if (lVar1 != 0) {
    lVar3 = ARemnantQuest::GetPrivateStaticClass();
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



// FUNCTION 142f4d410 FUN_142f4d410 body=391 status=ok
// SIG undefined FUN_142f4d410(void)

void FUN_142f4d410(undefined4 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
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
joined_r0x000142f4d456:
    do {
      if (iVar5 < param_2) {
        iVar5 = iVar4 * 2;
        iVar6 = iVar5 + 1;
        if (iVar5 + 2 < param_2) {
          cVar3 = FUN_142f50490(param_4,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
          if (cVar3 != '\0') {
            iVar6 = iVar5;
          }
          iVar6 = iVar6 + 1;
        }
        cVar3 = FUN_142f50490(param_4,param_1[iVar4],param_1[iVar6]);
        if (cVar3 != '\0') {
          uVar1 = param_1[iVar4];
          param_1[iVar4] = param_1[iVar6];
          iVar5 = iVar6 * 2 + 1;
          param_1[iVar6] = uVar1;
          iVar4 = iVar6;
          goto joined_r0x000142f4d456;
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
      uVar1 = *param_1;
      iVar4 = 0;
      *param_1 = param_1[lVar8];
      param_1[lVar8] = uVar1;
      if (1 < param_2) {
        do {
          iVar2 = iVar4 * 2;
          iVar5 = iVar2 + 1;
          if (iVar2 + 2 < param_2) {
            cVar3 = FUN_142f50490(param_4,param_1[(longlong)iVar2 + 2],param_1[iVar5]);
            if (cVar3 != '\0') {
              iVar5 = iVar2;
            }
            iVar5 = iVar5 + 1;
          }
          cVar3 = FUN_142f50490(param_4,param_1[iVar4],param_1[iVar5]);
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



// FUNCTION 142f4d5a0 HeapSortInternal<FObjectExport,FIdentityFunctor,TDereferenceWrapper<FObjectExport,FObjectExportSortHelper>_> body=905 status=ok
// SIG undefined HeapSortInternal<FObjectExport,FIdentityFunctor,TDereferenceWrapper<FObjectExport,FObjectExportSortHelper>_>(void)

void AlgoImpl::
     HeapSortInternal<FObjectExport,FIdentityFunctor,TDereferenceWrapper<FObjectExport,FObjectExportSortHelper>_>
               (undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
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
  undefined8 uVar20;
  undefined8 uVar21;
  char cVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  int iVar28;
  undefined8 *puVar29;
  
  iVar23 = (param_2 + -2) / 2;
  if (-1 < iVar23) {
    iVar25 = iVar23 * 2 + 1;
    iVar1 = iVar25;
    iVar28 = iVar23;
joined_r0x000142f4d5f6:
    do {
      if (iVar25 < param_2) {
        iVar25 = iVar23 * 2;
        iVar24 = iVar25 + 1;
        if (iVar25 + 2 < param_2) {
          cVar22 = FUN_142f50070(param_4,param_1 + (longlong)(iVar25 + 2) * 0x10,
                                 param_1 + (longlong)iVar24 * 0x10);
          if (cVar22 != '\0') {
            iVar24 = iVar25;
          }
          iVar24 = iVar24 + 1;
        }
        puVar26 = param_1 + (longlong)iVar24 * 0x10;
        puVar29 = param_1 + (longlong)iVar23 * 0x10;
        cVar22 = FUN_142f50070(param_4,puVar29,puVar26);
        if (cVar22 != '\0') {
          if (puVar29 != puVar26) {
            uVar5 = puVar26[1];
            uVar6 = *puVar29;
            uVar7 = puVar29[1];
            uVar8 = puVar29[2];
            uVar9 = puVar29[3];
            uVar10 = puVar29[4];
            uVar11 = puVar29[5];
            uVar12 = puVar29[6];
            uVar13 = puVar29[7];
            uVar14 = puVar29[8];
            uVar15 = puVar29[9];
            uVar16 = puVar29[10];
            uVar17 = puVar29[0xb];
            uVar18 = puVar29[0xc];
            uVar19 = puVar29[0xd];
            uVar20 = puVar29[0xe];
            uVar21 = puVar29[0xf];
            *puVar29 = *puVar26;
            puVar29[1] = uVar5;
            uVar5 = puVar26[3];
            puVar29[2] = puVar26[2];
            puVar29[3] = uVar5;
            uVar5 = puVar26[5];
            puVar29[4] = puVar26[4];
            puVar29[5] = uVar5;
            uVar5 = puVar26[7];
            puVar29[6] = puVar26[6];
            puVar29[7] = uVar5;
            uVar5 = puVar26[9];
            puVar29[8] = puVar26[8];
            puVar29[9] = uVar5;
            uVar5 = puVar26[0xb];
            puVar29[10] = puVar26[10];
            puVar29[0xb] = uVar5;
            uVar2 = *(undefined4 *)((longlong)puVar26 + 100);
            uVar3 = *(undefined4 *)(puVar26 + 0xd);
            uVar4 = *(undefined4 *)((longlong)puVar26 + 0x6c);
            *(undefined4 *)(puVar29 + 0xc) = *(undefined4 *)(puVar26 + 0xc);
            *(undefined4 *)((longlong)puVar29 + 100) = uVar2;
            *(undefined4 *)(puVar29 + 0xd) = uVar3;
            *(undefined4 *)((longlong)puVar29 + 0x6c) = uVar4;
            uVar5 = puVar26[0xf];
            puVar29[0xe] = puVar26[0xe];
            puVar29[0xf] = uVar5;
            *puVar26 = uVar6;
            puVar26[1] = uVar7;
            puVar26[2] = uVar8;
            puVar26[3] = uVar9;
            puVar26[4] = uVar10;
            puVar26[5] = uVar11;
            puVar26[6] = uVar12;
            puVar26[7] = uVar13;
            puVar26[8] = uVar14;
            puVar26[9] = uVar15;
            puVar26[10] = uVar16;
            puVar26[0xb] = uVar17;
            puVar26[0xc] = uVar18;
            puVar26[0xd] = uVar19;
            puVar26[0xe] = uVar20;
            puVar26[0xf] = uVar21;
          }
          iVar25 = iVar24 * 2 + 1;
          iVar23 = iVar24;
          goto joined_r0x000142f4d5f6;
        }
      }
      iVar25 = iVar1 + -2;
      iVar23 = iVar28 + -1;
      iVar1 = iVar25;
      iVar28 = iVar23;
    } while (-1 < iVar23);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar29 = param_1 + (longlong)param_2 * 0x10;
    do {
      if (param_1 != puVar29) {
        uVar5 = puVar29[1];
        uVar6 = *param_1;
        uVar7 = param_1[1];
        uVar8 = param_1[2];
        uVar9 = param_1[3];
        uVar10 = param_1[4];
        uVar11 = param_1[5];
        uVar12 = param_1[6];
        uVar13 = param_1[7];
        uVar14 = param_1[8];
        uVar15 = param_1[9];
        uVar16 = param_1[10];
        uVar17 = param_1[0xb];
        uVar18 = param_1[0xc];
        uVar19 = param_1[0xd];
        uVar20 = param_1[0xe];
        uVar21 = param_1[0xf];
        *param_1 = *puVar29;
        param_1[1] = uVar5;
        uVar5 = puVar29[3];
        param_1[2] = puVar29[2];
        param_1[3] = uVar5;
        uVar5 = puVar29[5];
        param_1[4] = puVar29[4];
        param_1[5] = uVar5;
        uVar5 = puVar29[7];
        param_1[6] = puVar29[6];
        param_1[7] = uVar5;
        uVar5 = puVar29[9];
        param_1[8] = puVar29[8];
        param_1[9] = uVar5;
        uVar5 = puVar29[0xb];
        param_1[10] = puVar29[10];
        param_1[0xb] = uVar5;
        uVar2 = *(undefined4 *)((longlong)puVar29 + 100);
        uVar3 = *(undefined4 *)(puVar29 + 0xd);
        uVar4 = *(undefined4 *)((longlong)puVar29 + 0x6c);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(puVar29 + 0xc);
        *(undefined4 *)((longlong)param_1 + 100) = uVar2;
        *(undefined4 *)(param_1 + 0xd) = uVar3;
        *(undefined4 *)((longlong)param_1 + 0x6c) = uVar4;
        uVar5 = puVar29[0xf];
        param_1[0xe] = puVar29[0xe];
        param_1[0xf] = uVar5;
        *puVar29 = uVar6;
        puVar29[1] = uVar7;
        puVar29[2] = uVar8;
        puVar29[3] = uVar9;
        puVar29[4] = uVar10;
        puVar29[5] = uVar11;
        puVar29[6] = uVar12;
        puVar29[7] = uVar13;
        puVar29[8] = uVar14;
        puVar29[9] = uVar15;
        puVar29[10] = uVar16;
        puVar29[0xb] = uVar17;
        puVar29[0xc] = uVar18;
        puVar29[0xd] = uVar19;
        puVar29[0xe] = uVar20;
        puVar29[0xf] = uVar21;
      }
      iVar23 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar23 * 2;
          iVar25 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            cVar22 = FUN_142f50070(param_4,param_1 + (longlong)(iVar1 + 2) * 0x10,
                                   param_1 + (longlong)iVar25 * 0x10);
            if (cVar22 != '\0') {
              iVar25 = iVar1;
            }
            iVar25 = iVar25 + 1;
          }
          puVar27 = param_1 + (longlong)iVar25 * 0x10;
          puVar26 = param_1 + (longlong)iVar23 * 0x10;
          cVar22 = FUN_142f50070(param_4,puVar26,puVar27);
          if (cVar22 == '\0') break;
          if (puVar26 != puVar27) {
            uVar5 = puVar27[1];
            uVar6 = *puVar26;
            uVar7 = puVar26[1];
            uVar8 = puVar26[2];
            uVar9 = puVar26[3];
            uVar10 = puVar26[4];
            uVar11 = puVar26[5];
            uVar12 = puVar26[6];
            uVar13 = puVar26[7];
            uVar14 = puVar26[8];
            uVar15 = puVar26[9];
            uVar16 = puVar26[10];
            uVar17 = puVar26[0xb];
            uVar18 = puVar26[0xc];
            uVar19 = puVar26[0xd];
            uVar20 = puVar26[0xe];
            uVar21 = puVar26[0xf];
            *puVar26 = *puVar27;
            puVar26[1] = uVar5;
            uVar5 = puVar27[3];
            puVar26[2] = puVar27[2];
            puVar26[3] = uVar5;
            uVar5 = puVar27[5];
            puVar26[4] = puVar27[4];
            puVar26[5] = uVar5;
            uVar5 = puVar27[7];
            puVar26[6] = puVar27[6];
            puVar26[7] = uVar5;
            uVar5 = puVar27[9];
            puVar26[8] = puVar27[8];
            puVar26[9] = uVar5;
            uVar5 = puVar27[0xb];
            puVar26[10] = puVar27[10];
            puVar26[0xb] = uVar5;
            uVar2 = *(undefined4 *)((longlong)puVar27 + 100);
            uVar3 = *(undefined4 *)(puVar27 + 0xd);
            uVar4 = *(undefined4 *)((longlong)puVar27 + 0x6c);
            *(undefined4 *)(puVar26 + 0xc) = *(undefined4 *)(puVar27 + 0xc);
            *(undefined4 *)((longlong)puVar26 + 100) = uVar2;
            *(undefined4 *)(puVar26 + 0xd) = uVar3;
            *(undefined4 *)((longlong)puVar26 + 0x6c) = uVar4;
            uVar5 = puVar27[0xf];
            puVar26[0xe] = puVar27[0xe];
            puVar26[0xf] = uVar5;
            *puVar27 = uVar6;
            puVar27[1] = uVar7;
            puVar27[2] = uVar8;
            puVar27[3] = uVar9;
            puVar27[4] = uVar10;
            puVar27[5] = uVar11;
            puVar27[6] = uVar12;
            puVar27[7] = uVar13;
            puVar27[8] = uVar14;
            puVar27[9] = uVar15;
            puVar27[10] = uVar16;
            puVar27[0xb] = uVar17;
            puVar27[0xc] = uVar18;
            puVar27[0xd] = uVar19;
            puVar27[0xe] = uVar20;
            puVar27[0xf] = uVar21;
          }
          iVar23 = iVar25;
        } while (iVar25 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar29 = puVar29 + -0x10;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142f4d930 FUN_142f4d930 body=676 status=ok
// SIG undefined FUN_142f4d930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f4d930(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
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
    lStack_340 = param_1 + (param_2 - 1) * 4;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar11 = _guard_xfg_dispatch_icall_nop(fVar11);
    local_338 = (undefined4)(longlong)(fVar11 + fVar11);
    _guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar7 = &local_348;
    do {
      puVar5 = (undefined4 *)*plVar7;
      puVar4 = (undefined4 *)plVar7[1];
      local_358 = plVar7[2];
      lVar3 = ((longlong)puVar4 - (longlong)puVar5 >> 2) + 1;
      puVar10 = puVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_142f4da10:
        if (8 < lVar3) {
          if (lVar3 < 0) {
            lVar3 = lVar3 + 1;
          }
          puVar8 = puVar4 + 1;
          uVar1 = puVar10[lVar3 >> 1];
          puVar10[lVar3 >> 1] = *puVar10;
          *puVar10 = uVar1;
          puVar5 = puVar10;
LAB_142f4da40:
          puVar5 = puVar5 + 1;
          if (puVar5 <= puVar4) goto code_r0x000142f4da49;
          goto LAB_142f4da60;
        }
        for (; puVar8 = puVar10, puVar5 = puVar10, puVar10 < puVar4; puVar4 = puVar4 + -1) {
          while (puVar5 = puVar5 + 1, puVar5 <= puVar4) {
            cVar2 = FUN_142f50490(param_4,*puVar8,*puVar5);
            if (cVar2 != '\0') {
              puVar8 = puVar5;
            }
          }
          uVar1 = *puVar8;
          *puVar8 = *puVar4;
          *puVar4 = uVar1;
        }
        goto LAB_142f4db23;
      }
LAB_142f4db14:
      FUN_142f4d410(puVar5,lVar3,param_3,param_4);
LAB_142f4db23:
      plVar7 = plVar7 + -3;
    } while (&local_348 <= plVar7);
  }
  return;
code_r0x000142f4da49:
  cVar2 = FUN_142f50490(param_4,*puVar10,*puVar5);
  if (cVar2 == '\0') goto LAB_142f4da40;
LAB_142f4da60:
  do {
    puVar9 = puVar8;
    puVar8 = puVar9 + -1;
    if (puVar8 <= puVar10) break;
    cVar2 = FUN_142f50490(param_4,*puVar8,*puVar10);
  } while (cVar2 == '\0');
  if (puVar5 <= puVar8) {
    uVar1 = *puVar5;
    *puVar5 = *puVar8;
    *puVar8 = uVar1;
    goto LAB_142f4da40;
  }
  uVar1 = *puVar10;
  iVar6 = iVar6 + -1;
  *puVar10 = *puVar8;
  *puVar8 = uVar1;
  if ((longlong)((longlong)puVar8 + (-4 - (longlong)puVar10) & 0xfffffffffffffffcU) <
      (longlong)((longlong)puVar4 - (longlong)puVar5 & 0xfffffffffffffffcU)) {
    if (puVar5 < puVar4) {
      *plVar7 = (longlong)puVar5;
      plVar7[1] = (longlong)puVar4;
      *(int *)(plVar7 + 2) = iVar6;
      plVar7 = plVar7 + 3;
    }
    if (puVar8 <= puVar10 + 1) goto LAB_142f4db23;
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
    if (puVar4 <= puVar5) goto LAB_142f4db23;
  }
  lVar3 = ((longlong)puVar4 - (longlong)puVar5 >> 2) + 1;
  puVar10 = puVar5;
  if (iVar6 == 0) goto LAB_142f4db14;
  goto LAB_142f4da10;
}



// FUNCTION 142f4dbe0 FUN_142f4dbe0 body=921 status=ok
// SIG undefined FUN_142f4dbe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142f4dbe0(longlong param_1,ulonglong param_2)

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
LAB_142f4dcb0:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          lVar1 = plVar8[lVar9 >> 1];
          plVar8[lVar9 >> 1] = *plVar8;
          plVar10 = plVar13 + 1;
          *plVar8 = lVar1;
          plVar5 = plVar8;
LAB_142f4dce0:
          plVar5 = plVar5 + 1;
          if (plVar5 <= plVar13) goto code_r0x000142f4dce9;
          goto LAB_142f4dd00;
        }
        for (; plVar10 = plVar8, plVar5 = plVar8, plVar8 < plVar13; plVar13 = plVar13 + -1) {
          while (plVar11 = plVar10, plVar5 = plVar5 + 1, plVar5 <= plVar13) {
            plVar10 = plVar5;
            if (*(int *)(*plVar5 + 0x28) <= *(int *)(*plVar11 + 0x28)) {
              plVar10 = plVar11;
            }
          }
          lVar9 = *plVar11;
          *plVar11 = *plVar13;
          *plVar13 = lVar9;
        }
        goto LAB_142f4ded8;
      }
LAB_142f4ddb5:
      iVar6 = (int)lVar9;
      iVar3 = (iVar6 + -2) / 2;
      if (-1 < iVar3) {
        iVar4 = iVar3 * 2 + 1;
        iVar2 = iVar4;
        iVar7 = iVar3;
joined_r0x000142f4ddd5:
        do {
          if (iVar4 < iVar6) {
            iVar4 = iVar3 * 2;
            iVar12 = iVar4 + 1;
            if (iVar4 + 2 < iVar6) {
              if (*(int *)(plVar5[(longlong)iVar4 + 2] + 0x28) < *(int *)(plVar5[iVar12] + 0x28)) {
                iVar12 = iVar4;
              }
              iVar12 = iVar12 + 1;
            }
            lVar9 = plVar5[iVar3];
            if (*(int *)(lVar9 + 0x28) < *(int *)(plVar5[iVar12] + 0x28)) {
              iVar4 = iVar12 * 2 + 1;
              plVar5[iVar3] = plVar5[iVar12];
              plVar5[iVar12] = lVar9;
              iVar3 = iVar12;
              goto joined_r0x000142f4ddd5;
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
                if (*(int *)(plVar5[(longlong)iVar2 + 2] + 0x28) < *(int *)(plVar5[iVar4] + 0x28)) {
                  iVar4 = iVar2;
                }
                iVar4 = iVar4 + 1;
              }
              lVar1 = plVar5[iVar3];
              if (*(int *)(plVar5[iVar4] + 0x28) <= *(int *)(lVar1 + 0x28)) break;
              plVar5[iVar3] = plVar5[iVar4];
              plVar5[iVar4] = lVar1;
              iVar3 = iVar4;
            } while (iVar4 * 2 + 1 < iVar6);
          }
          iVar6 = iVar6 + -1;
          lVar9 = lVar9 + -1;
        } while (0 < lVar9);
      }
LAB_142f4ded8:
      plVar14 = plVar14 + -3;
    } while (&local_328 <= plVar14);
  }
  return;
code_r0x000142f4dce9:
  if (*(int *)(*plVar5 + 0x28) <= *(int *)(*plVar8 + 0x28)) goto LAB_142f4dce0;
LAB_142f4dd00:
  do {
    plVar11 = plVar10;
    lVar9 = plVar11[-1];
    plVar10 = plVar11 + -1;
    if (plVar10 <= plVar8) break;
  } while (*(int *)(*plVar8 + 0x28) <= *(int *)(lVar9 + 0x28));
  if (plVar5 <= plVar10) {
    lVar1 = *plVar5;
    *plVar5 = lVar9;
    *plVar10 = lVar1;
    goto LAB_142f4dce0;
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
    if (plVar10 <= plVar8 + 1) goto LAB_142f4ded8;
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
    if (plVar13 <= plVar5) goto LAB_142f4ded8;
  }
  lVar9 = ((longlong)plVar13 - (longlong)plVar5 >> 3) + 1;
  plVar8 = plVar5;
  if (local_338 == 0) goto LAB_142f4ddb5;
  goto LAB_142f4dcb0;
}



// FUNCTION 142f4df80 IntroSortInternal<FObjectExport,FIdentityFunctor,TDereferenceWrapper<FObjectExport,FObjectExportSortHelper>_> body=1318 status=ok
// SIG undefined IntroSortInternal<FObjectExport,FIdentityFunctor,TDereferenceWrapper<FObjectExport,FObjectExportSortHelper>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FObjectExport,FIdentityFunctor,TDereferenceWrapper<FObjectExport,FObjectExportSortHelper>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
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
  undefined8 uVar20;
  char cVar21;
  longlong lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  longlong *plVar26;
  int iVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  float fVar31;
  undefined1 auStack_3c8 [48];
  longlong local_398;
  longlong local_388;
  longlong lStack_380;
  undefined4 local_378;
  undefined1 local_370 [744];
  ulonglong local_88;
  
  if (1 < param_2) {
    local_88 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
    lStack_380 = param_2 * 0x80 + -0x80 + param_1;
    fVar31 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar31 = fVar31 + 1.8446744e+19;
    }
    local_388 = param_1;
    fVar31 = ::_guard_xfg_dispatch_icall_nop(fVar31);
    local_378 = (undefined4)(longlong)(fVar31 + fVar31);
    ::_guard_xfg_dispatch_icall_nop(local_370,0,0x2e8);
    plVar26 = &local_388;
    do {
      puVar29 = (undefined8 *)*plVar26;
      puVar30 = (undefined8 *)plVar26[1];
      local_398 = plVar26[2];
      lVar22 = ((longlong)puVar30 - (longlong)puVar29 >> 7) + 1;
      puVar28 = puVar29;
      iVar27 = (int)local_398;
      if ((int)local_398 != 0) {
LAB_142f4e080:
        if (8 < lVar22) {
          puVar29 = puVar28 + (lVar22 / 2) * 0x10;
          if (puVar29 != puVar28) {
            uVar1 = puVar28[1];
            uVar5 = *puVar29;
            uVar6 = puVar29[1];
            uVar7 = puVar29[2];
            uVar8 = puVar29[3];
            uVar9 = puVar29[4];
            uVar10 = puVar29[5];
            uVar11 = puVar29[6];
            uVar12 = puVar29[7];
            uVar13 = puVar29[8];
            uVar14 = puVar29[9];
            uVar15 = puVar29[10];
            uVar16 = puVar29[0xb];
            uVar17 = puVar29[0xc];
            uVar18 = puVar29[0xd];
            uVar19 = puVar29[0xe];
            uVar20 = puVar29[0xf];
            *puVar29 = *puVar28;
            puVar29[1] = uVar1;
            uVar1 = puVar28[3];
            puVar29[2] = puVar28[2];
            puVar29[3] = uVar1;
            uVar1 = puVar28[5];
            puVar29[4] = puVar28[4];
            puVar29[5] = uVar1;
            uVar1 = puVar28[7];
            puVar29[6] = puVar28[6];
            puVar29[7] = uVar1;
            uVar1 = puVar28[9];
            puVar29[8] = puVar28[8];
            puVar29[9] = uVar1;
            uVar1 = puVar28[0xb];
            puVar29[10] = puVar28[10];
            puVar29[0xb] = uVar1;
            uVar2 = *(undefined4 *)((longlong)puVar28 + 100);
            uVar3 = *(undefined4 *)(puVar28 + 0xd);
            uVar4 = *(undefined4 *)((longlong)puVar28 + 0x6c);
            *(undefined4 *)(puVar29 + 0xc) = *(undefined4 *)(puVar28 + 0xc);
            *(undefined4 *)((longlong)puVar29 + 100) = uVar2;
            *(undefined4 *)(puVar29 + 0xd) = uVar3;
            *(undefined4 *)((longlong)puVar29 + 0x6c) = uVar4;
            uVar1 = puVar28[0xf];
            puVar29[0xe] = puVar28[0xe];
            puVar29[0xf] = uVar1;
            *puVar28 = uVar5;
            puVar28[1] = uVar6;
            puVar28[2] = uVar7;
            puVar28[3] = uVar8;
            puVar28[4] = uVar9;
            puVar28[5] = uVar10;
            puVar28[6] = uVar11;
            puVar28[7] = uVar12;
            puVar28[8] = uVar13;
            puVar28[9] = uVar14;
            puVar28[10] = uVar15;
            puVar28[0xb] = uVar16;
            puVar28[0xc] = uVar17;
            puVar28[0xd] = uVar18;
            puVar28[0xe] = uVar19;
            puVar28[0xf] = uVar20;
          }
          puVar24 = puVar30 + 0x10;
          puVar29 = puVar28;
LAB_142f4e140:
          puVar23 = puVar29;
          puVar29 = puVar23 + 0x10;
          if (puVar29 <= puVar30) goto code_r0x000142f4e149;
          goto LAB_142f4e160;
        }
        for (; puVar24 = puVar28, puVar29 = puVar28, puVar28 < puVar30; puVar30 = puVar30 + -0x10) {
          while (puVar29 = puVar29 + 0x10, puVar29 <= puVar30) {
            cVar21 = FUN_142f50070(param_4,puVar24,puVar29);
            if (cVar21 != '\0') {
              puVar24 = puVar29;
            }
          }
          if (puVar24 != puVar30) {
            uVar1 = puVar30[1];
            uVar5 = *puVar24;
            uVar6 = puVar24[1];
            uVar7 = puVar24[2];
            uVar8 = puVar24[3];
            uVar9 = puVar24[4];
            uVar10 = puVar24[5];
            uVar11 = puVar24[6];
            uVar12 = puVar24[7];
            uVar13 = puVar24[8];
            uVar14 = puVar24[9];
            uVar15 = puVar24[10];
            uVar16 = puVar24[0xb];
            uVar17 = puVar24[0xc];
            uVar18 = puVar24[0xd];
            uVar19 = puVar24[0xe];
            uVar20 = puVar24[0xf];
            *puVar24 = *puVar30;
            puVar24[1] = uVar1;
            uVar1 = puVar30[3];
            puVar24[2] = puVar30[2];
            puVar24[3] = uVar1;
            uVar1 = puVar30[5];
            puVar24[4] = puVar30[4];
            puVar24[5] = uVar1;
            uVar1 = puVar30[7];
            puVar24[6] = puVar30[6];
            puVar24[7] = uVar1;
            uVar1 = puVar30[9];
            puVar24[8] = puVar30[8];
            puVar24[9] = uVar1;
            uVar1 = puVar30[0xb];
            puVar24[10] = puVar30[10];
            puVar24[0xb] = uVar1;
            uVar2 = *(undefined4 *)((longlong)puVar30 + 100);
            uVar3 = *(undefined4 *)(puVar30 + 0xd);
            uVar4 = *(undefined4 *)((longlong)puVar30 + 0x6c);
            *(undefined4 *)(puVar24 + 0xc) = *(undefined4 *)(puVar30 + 0xc);
            *(undefined4 *)((longlong)puVar24 + 100) = uVar2;
            *(undefined4 *)(puVar24 + 0xd) = uVar3;
            *(undefined4 *)((longlong)puVar24 + 0x6c) = uVar4;
            uVar1 = puVar30[0xf];
            puVar24[0xe] = puVar30[0xe];
            puVar24[0xf] = uVar1;
            *puVar30 = uVar5;
            puVar30[1] = uVar6;
            puVar30[2] = uVar7;
            puVar30[3] = uVar8;
            puVar30[4] = uVar9;
            puVar30[5] = uVar10;
            puVar30[6] = uVar11;
            puVar30[7] = uVar12;
            puVar30[8] = uVar13;
            puVar30[9] = uVar14;
            puVar30[10] = uVar15;
            puVar30[0xb] = uVar16;
            puVar30[0xc] = uVar17;
            puVar30[0xd] = uVar18;
            puVar30[0xe] = uVar19;
            puVar30[0xf] = uVar20;
          }
        }
        goto LAB_142f4e33c;
      }
LAB_142f4e32d:
      HeapSortInternal<FObjectExport,FIdentityFunctor,TDereferenceWrapper<FObjectExport,FObjectExportSortHelper>_>
                (puVar29,lVar22,param_3,param_4);
LAB_142f4e33c:
      plVar26 = plVar26 + -3;
    } while (&local_388 <= plVar26);
  }
  return;
code_r0x000142f4e149:
  cVar21 = FUN_142f50070(param_4,puVar28,puVar29);
  if (cVar21 == '\0') goto LAB_142f4e140;
LAB_142f4e160:
  do {
    puVar25 = puVar24;
    puVar24 = puVar25 + -0x10;
    if (puVar24 <= puVar28) break;
    cVar21 = FUN_142f50070(param_4,puVar24,puVar28);
  } while (cVar21 == '\0');
  if (puVar29 <= puVar24) {
    if (puVar29 != puVar24) {
      uVar1 = puVar25[-0xf];
      uVar5 = *puVar29;
      uVar6 = puVar23[0x11];
      uVar7 = puVar23[0x12];
      uVar8 = puVar23[0x13];
      uVar9 = puVar23[0x14];
      uVar10 = puVar23[0x15];
      uVar11 = puVar23[0x16];
      uVar12 = puVar23[0x17];
      uVar13 = puVar23[0x18];
      uVar14 = puVar23[0x19];
      uVar15 = puVar23[0x1a];
      uVar16 = puVar23[0x1b];
      uVar17 = puVar23[0x1c];
      uVar18 = puVar23[0x1d];
      uVar19 = puVar23[0x1e];
      uVar20 = puVar23[0x1f];
      *puVar29 = *puVar24;
      puVar23[0x11] = uVar1;
      uVar1 = puVar25[-0xd];
      puVar23[0x12] = puVar25[-0xe];
      puVar23[0x13] = uVar1;
      uVar1 = puVar25[-0xb];
      puVar23[0x14] = puVar25[-0xc];
      puVar23[0x15] = uVar1;
      uVar1 = puVar25[-9];
      puVar23[0x16] = puVar25[-10];
      puVar23[0x17] = uVar1;
      uVar1 = puVar25[-7];
      puVar23[0x18] = puVar25[-8];
      puVar23[0x19] = uVar1;
      uVar1 = puVar25[-5];
      puVar23[0x1a] = puVar25[-6];
      puVar23[0x1b] = uVar1;
      uVar2 = *(undefined4 *)((longlong)puVar25 + -0x1c);
      uVar3 = *(undefined4 *)(puVar25 + -3);
      uVar4 = *(undefined4 *)((longlong)puVar25 + -0x14);
      *(undefined4 *)(puVar23 + 0x1c) = *(undefined4 *)(puVar25 + -4);
      *(undefined4 *)((longlong)puVar23 + 0xe4) = uVar2;
      *(undefined4 *)(puVar23 + 0x1d) = uVar3;
      *(undefined4 *)((longlong)puVar23 + 0xec) = uVar4;
      uVar1 = puVar25[-1];
      puVar23[0x1e] = puVar25[-2];
      puVar23[0x1f] = uVar1;
      *puVar24 = uVar5;
      puVar25[-0xf] = uVar6;
      puVar25[-0xe] = uVar7;
      puVar25[-0xd] = uVar8;
      puVar25[-0xc] = uVar9;
      puVar25[-0xb] = uVar10;
      puVar25[-10] = uVar11;
      puVar25[-9] = uVar12;
      puVar25[-8] = uVar13;
      puVar25[-7] = uVar14;
      puVar25[-6] = uVar15;
      puVar25[-5] = uVar16;
      puVar25[-4] = uVar17;
      puVar25[-3] = uVar18;
      puVar25[-2] = uVar19;
      puVar25[-1] = uVar20;
    }
    goto LAB_142f4e140;
  }
  if (puVar28 != puVar24) {
    uVar1 = puVar25[-0xf];
    uVar5 = *puVar28;
    uVar6 = puVar28[1];
    uVar7 = puVar28[2];
    uVar8 = puVar28[3];
    uVar9 = puVar28[4];
    uVar10 = puVar28[5];
    uVar11 = puVar28[6];
    uVar12 = puVar28[7];
    uVar13 = puVar28[8];
    uVar14 = puVar28[9];
    uVar15 = puVar28[10];
    uVar16 = puVar28[0xb];
    uVar17 = puVar28[0xc];
    uVar18 = puVar28[0xd];
    uVar19 = puVar28[0xe];
    uVar20 = puVar28[0xf];
    *puVar28 = *puVar24;
    puVar28[1] = uVar1;
    uVar1 = puVar25[-0xd];
    puVar28[2] = puVar25[-0xe];
    puVar28[3] = uVar1;
    uVar1 = puVar25[-0xb];
    puVar28[4] = puVar25[-0xc];
    puVar28[5] = uVar1;
    uVar1 = puVar25[-9];
    puVar28[6] = puVar25[-10];
    puVar28[7] = uVar1;
    uVar1 = puVar25[-7];
    puVar28[8] = puVar25[-8];
    puVar28[9] = uVar1;
    uVar1 = puVar25[-5];
    puVar28[10] = puVar25[-6];
    puVar28[0xb] = uVar1;
    uVar2 = *(undefined4 *)((longlong)puVar25 + -0x1c);
    uVar3 = *(undefined4 *)(puVar25 + -3);
    uVar4 = *(undefined4 *)((longlong)puVar25 + -0x14);
    *(undefined4 *)(puVar28 + 0xc) = *(undefined4 *)(puVar25 + -4);
    *(undefined4 *)((longlong)puVar28 + 100) = uVar2;
    *(undefined4 *)(puVar28 + 0xd) = uVar3;
    *(undefined4 *)((longlong)puVar28 + 0x6c) = uVar4;
    uVar1 = puVar25[-1];
    puVar28[0xe] = puVar25[-2];
    puVar28[0xf] = uVar1;
    *puVar24 = uVar5;
    puVar25[-0xf] = uVar6;
    puVar25[-0xe] = uVar7;
    puVar25[-0xd] = uVar8;
    puVar25[-0xc] = uVar9;
    puVar25[-0xb] = uVar10;
    puVar25[-10] = uVar11;
    puVar25[-9] = uVar12;
    puVar25[-8] = uVar13;
    puVar25[-7] = uVar14;
    puVar25[-6] = uVar15;
    puVar25[-5] = uVar16;
    puVar25[-4] = uVar17;
    puVar25[-3] = uVar18;
    puVar25[-2] = uVar19;
    puVar25[-1] = uVar20;
  }
  iVar27 = iVar27 + -1;
  if ((longlong)((longlong)puVar24 + (-0x80 - (longlong)puVar28) & 0xffffffffffffff80U) <
      (longlong)((longlong)puVar30 - (longlong)puVar29 & 0xffffffffffffff80U)) {
    if (puVar29 < puVar30) {
      *plVar26 = (longlong)puVar29;
      plVar26[1] = (longlong)puVar30;
      *(int *)(plVar26 + 2) = iVar27;
      plVar26 = plVar26 + 3;
    }
    if (puVar24 <= puVar28 + 0x10) goto LAB_142f4e33c;
    puVar30 = puVar25 + -0x20;
    puVar29 = puVar28;
  }
  else {
    if (puVar28 + 0x10 < puVar24) {
      *plVar26 = (longlong)puVar28;
      plVar26[1] = (longlong)(puVar25 + -0x20);
      *(int *)(plVar26 + 2) = iVar27;
      plVar26 = plVar26 + 3;
    }
    if (puVar30 <= puVar29) goto LAB_142f4e33c;
  }
  lVar22 = ((longlong)puVar30 - (longlong)puVar29 >> 7) + 1;
  puVar28 = puVar29;
  if (iVar27 == 0) goto LAB_142f4e32d;
  goto LAB_142f4e080;
}



// FUNCTION 142f4e4b0 FUN_142f4e4b0 body=595 status=ok
// SIG undefined FUN_142f4e4b0(void)

void FUN_142f4e4b0(longlong *param_1,ulonglong param_2,longlong *param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  undefined8 *puVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  
  TSet<TTuple<ULightComponent_const_*,FTemporalAAHistory>,TDefaultMapHashableKeyFuncs<ULightComponent_const_*,FTemporalAAHistory,0>,FDefaultSetAllocator>
  ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if ((int)param_1[9] != 0) {
    iVar21 = (int)(param_2 >> 4);
    uVar20 = 0x9e3779b9U - iVar21 ^ iVar21 << 8;
    uVar14 = -(uVar20 + iVar21) ^ uVar20 >> 0xd;
    uVar22 = (iVar21 - uVar20) - uVar14 ^ uVar14 >> 0xc;
    uVar20 = (uVar20 - uVar22) - uVar14 ^ uVar22 << 0x10;
    uVar14 = (uVar14 - uVar20) - uVar22 ^ uVar20 >> 5;
    uVar22 = (uVar22 - uVar20) - uVar14 ^ uVar14 >> 3;
    uVar20 = (uVar20 - uVar22) - uVar14 ^ uVar22 << 10;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    iVar21 = *(int *)((longlong)plVar12 +
                     (((longlong)(int)((uVar14 - uVar20) - uVar22) ^ (ulonglong)(uVar20 >> 0xf)) &
                     (longlong)(int)param_1[9] - 1U) * 4);
    iVar18 = iVar21;
    if (iVar21 != -1) {
      do {
        iVar21 = *(int *)((longlong)iVar18 * 0x40 + 0x38 + *param_1);
        if (*(ulonglong *)((longlong)iVar18 * 0x40 + *param_1) == param_2) break;
        iVar18 = iVar21;
      } while (iVar21 != -1);
    }
joined_r0x000142f4e5bc:
    if (iVar18 != -1) {
      iVar1 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
      }
      puVar19 = (undefined8 *)((longlong)iVar1 * 0x30 + *param_3);
      if (puVar19 != (undefined8 *)0x0) {
        lVar16 = (longlong)iVar18 * 0x40 + *param_1;
        *puVar19 = &PTR_FUN_1441d26b8;
        puVar19[1] = *(undefined8 *)(lVar16 + 0x10);
        uVar2 = *(undefined4 *)(lVar16 + 0x1c);
        uVar3 = *(undefined4 *)(lVar16 + 0x20);
        uVar4 = *(undefined4 *)(lVar16 + 0x24);
        *(undefined4 *)(puVar19 + 2) = *(undefined4 *)(lVar16 + 0x18);
        *(undefined4 *)((longlong)puVar19 + 0x14) = uVar2;
        *(undefined4 *)(puVar19 + 3) = uVar3;
        *(undefined4 *)((longlong)puVar19 + 0x1c) = uVar4;
        *(undefined4 *)(puVar19 + 4) = *(undefined4 *)(lVar16 + 0x28);
        *(undefined4 *)((longlong)puVar19 + 0x24) = *(undefined4 *)(lVar16 + 0x2c);
        *puVar19 = &DAT_1441d2800;
        puVar19[5] = *(undefined8 *)(lVar16 + 0x30);
      }
      if (iVar21 == -1) goto LAB_142f4e685;
      iVar18 = iVar21;
      do {
        iVar21 = *(int *)((longlong)iVar18 * 0x40 + 0x38 + *param_1);
        if (*(ulonglong *)((longlong)iVar18 * 0x40 + *param_1) == param_2) break;
        iVar18 = iVar21;
      } while (iVar21 != -1);
      goto joined_r0x000142f4e5bc;
    }
  }
LAB_142f4e685:
  if (param_4 != '\0') {
    iVar21 = (int)param_3[1];
    puVar19 = (undefined8 *)*param_3;
    if (0 < iVar21 / 2) {
      uVar17 = (ulonglong)(uint)(iVar21 / 2);
      puVar15 = puVar19;
      do {
        iVar21 = iVar21 + -1;
        puVar13 = puVar19 + (longlong)iVar21 * 6;
        if (puVar15 != puVar13) {
          uVar5 = puVar13[1];
          uVar6 = *puVar15;
          uVar7 = puVar15[1];
          uVar8 = puVar15[2];
          uVar9 = puVar15[3];
          uVar10 = puVar15[4];
          uVar11 = puVar15[5];
          *puVar15 = *puVar13;
          puVar15[1] = uVar5;
          uVar5 = puVar13[3];
          puVar15[2] = puVar13[2];
          puVar15[3] = uVar5;
          uVar5 = puVar13[5];
          puVar15[4] = puVar13[4];
          puVar15[5] = uVar5;
          *puVar13 = uVar6;
          puVar13[1] = uVar7;
          puVar13[2] = uVar8;
          puVar13[3] = uVar9;
          puVar13[4] = uVar10;
          puVar13[5] = uVar11;
        }
        puVar15 = puVar15 + 6;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  return;
}



// FUNCTION 142f4e710 FUN_142f4e710 body=345 status=ok
// SIG undefined FUN_142f4e710(void)

int FUN_142f4e710(longlong *param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  
  iVar1 = (int)param_1[1];
  lVar6 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  plVar7 = (longlong *)0x0;
  plVar13 = *(longlong **)*param_1;
  plVar4 = plVar7;
  plVar5 = plVar7;
  if (plVar13 != (longlong *)0x0) {
    plVar4 = plVar13;
    plVar5 = (longlong *)((longlong *)*param_1)[1];
  }
  if (plVar4 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  plVar13 = plVar7;
  if ((plVar5 == (longlong *)0x0) || (cVar2 = (**(code **)(*plVar5 + 0x58))(), cVar2 == '\0')) {
    bVar8 = 0;
    plVar4 = plVar7;
  }
  else {
    bVar8 = 1;
    plVar4 = plVar7;
  }
  do {
    iVar9 = (int)plVar4;
    plVar4 = (longlong *)(ulonglong)(iVar9 + 1);
    plVar7 = (longlong *)((longlong)plVar7 + 1);
    if ((longlong)plVar7 < lVar6) {
      lVar11 = (longlong)plVar7 * 0x10;
      do {
        plVar5 = (longlong *)0x0;
        if (*(longlong *)(lVar11 + *param_1) != 0) {
          plVar5 = *(longlong **)(lVar11 + 8 + *param_1);
        }
        if ((plVar5 == (longlong *)0x0) || (cVar2 = (**(code **)(*plVar5 + 0x58))(), cVar2 == '\0'))
        {
          bVar3 = 0;
        }
        else {
          bVar3 = 1;
        }
        if (bVar8 != bVar3) break;
        plVar4 = (longlong *)(ulonglong)((int)plVar4 + 1);
        plVar7 = (longlong *)((longlong)plVar7 + 1);
        lVar11 = lVar11 + 0x10;
      } while ((longlong)plVar7 < lVar6);
    }
    iVar10 = (int)plVar4 - iVar9;
    if (bVar8 != 0) {
      iVar12 = (int)plVar13;
      if (iVar12 != iVar9) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar12 * 0x10 + *param_1),
                   (void *)((longlong)iVar9 * 0x10 + *param_1),(longlong)iVar10 << 4);
      }
      plVar13 = (longlong *)(ulonglong)(uint)(iVar12 + iVar10);
    }
    bVar8 = bVar8 ^ 1;
    if (lVar6 <= (longlong)plVar7) {
      *(int *)(param_1 + 1) = (int)plVar13;
      return iVar1 - (int)plVar13;
    }
  } while( true );
}



// FUNCTION 142f4e870 FUN_142f4e870 body=546 status=ok
// SIG undefined FUN_142f4e870(void)

int FUN_142f4e870(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar9;
  bool bVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined8 local_res20;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  ulonglong uVar8;
  
  iVar1 = (int)param_1[1];
  uVar5 = 0;
  if (iVar1 == 0) {
    return 0;
  }
  cVar3 = FUN_142f50370(param_2,*(undefined8 *)*param_1);
  bVar12 = cVar3 == '\0';
  uVar8 = uVar5;
  uVar9 = uVar5;
  uVar11 = uVar5;
  do {
    uVar6 = (uint)uVar8;
    uVar7 = uVar6;
    do {
      uVar9 = uVar9 + 1;
      uVar7 = uVar7 + 1;
      uVar8 = (ulonglong)uVar7;
      if ((longlong)iVar1 <= (longlong)uVar9) break;
      lVar2 = *(longlong *)(*param_1 + uVar9 * 8);
      if ((*(byte *)(lVar2 + 0xb4) & 1) == 0) {
        local_res20 = *(undefined8 *)(lVar2 + 0x18);
        uVar4 = (uint)uVar5;
        uVar5 = (ulonglong)(uVar4 | 1);
        FName::ToString(&local_res20,local_48);
        cVar3 = FString::StartsWith(local_48,L"SKEL_",1);
        if (cVar3 != '\0') goto LAB_142f4e9c2;
        local_78 = *(undefined8 *)(lVar2 + 0x18);
        uVar5 = (ulonglong)(uVar4 | 3);
        FName::ToString(&local_78,local_58);
        cVar3 = FString::StartsWith(local_58,L"REINST_",1);
        if (cVar3 != '\0') goto LAB_142f4e9c2;
        local_70 = *(undefined8 *)(lVar2 + 0x18);
        uVar5 = 7;
        FName::ToString(&local_70,local_68);
        cVar3 = FString::EndsWith(local_68,&DAT_145896498,1);
        if (cVar3 == '\0') goto LAB_142f4e9c2;
        bVar10 = true;
      }
      else {
LAB_142f4e9c2:
        bVar10 = false;
      }
      if (((uVar5 & 4) != 0) && (uVar5 = (ulonglong)((uint)uVar5 & 0xfffffffb), local_68[0] != 0)) {
        FMemory::Free();
      }
      if (((uVar5 & 2) != 0) && (uVar5 = (ulonglong)((uint)uVar5 & 0xfffffffd), local_58[0] != 0)) {
        FMemory::Free();
      }
      if (((uVar5 & 1) != 0) && (uVar5 = (ulonglong)((uint)uVar5 & 0xfffffffe), local_48[0] != 0)) {
        FMemory::Free();
      }
    } while (bVar12 == bVar10);
    if (bVar12 != false) {
      uVar4 = (uint)uVar11;
      if (uVar4 != uVar6) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)(int)uVar4 * 8),
                   (void *)(*param_1 + (longlong)(int)uVar6 * 8),(longlong)(int)(uVar7 - uVar6) << 3
                  );
      }
      uVar11 = (ulonglong)(uVar4 + (uVar7 - uVar6));
    }
    bVar12 = (bool)(bVar12 ^ 1);
    if ((longlong)iVar1 <= (longlong)uVar9) {
      *(int *)(param_1 + 1) = (int)uVar11;
      return iVar1 - (int)uVar11;
    }
  } while( true );
}



// FUNCTION 142f4eaa0 FUN_142f4eaa0 body=122 status=ok
// SIG undefined FUN_142f4eaa0(void)

undefined8 * FUN_142f4eaa0(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1459ea0b8;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined1 *)((longlong)param_1 + 0x129) = 4;
  return param_1;
}



// FUNCTION 142f4eb20 FUN_142f4eb20 body=163 status=ok
// SIG undefined FUN_142f4eb20(void)

undefined8 * FUN_142f4eb20(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)param_1[2],_Src,(longlong)iVar1 << 2);
  }
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)((longlong)param_2 + 0x29);
  *(undefined1 *)((longlong)param_1 + 0x2a) = *(undefined1 *)((longlong)param_2 + 0x2a);
  return param_1;
}



// FUNCTION 142f4ebd0 FUN_142f4ebd0 body=435 status=ok
// SIG undefined FUN_142f4ebd0(void)

undefined4 * FUN_142f4ebd0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 *_Dst;
  undefined4 *_Src;
  
  puVar1 = param_1 + 4;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  if (puVar1 != param_2 + 4) {
    uVar4 = param_2[10] + 0x1f + (param_2[10] + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (uVar4 != 0) {
      param_1[0xb] = uVar4;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
    }
    iVar2 = param_2[10];
    param_1[10] = iVar2;
    if (iVar2 != 0) {
      _Src = *(undefined4 **)(param_2 + 8);
      if (*(undefined4 **)(param_2 + 8) == (undefined4 *)0x0) {
        _Src = param_2 + 4;
      }
      _Dst = *(undefined4 **)(param_1 + 8);
      if (*(undefined4 **)(param_1 + 8) == (undefined4 *)0x0) {
        _Dst = puVar1;
      }
      _guard_xfg_dispatch_icall_nop
                (_Dst,_Src,
                 (longlong)((int)(param_1[0xb] + 0x1f + (param_1[0xb] + 0x1f >> 0x1f & 0x1fU)) >> 5)
                 << 2);
    }
  }
  *(undefined8 *)(param_1 + 0xc) = 0;
  iVar2 = param_2[0xe];
  pvVar3 = *(void **)(param_2 + 0xc);
  param_1[0xe] = iVar2;
  if (iVar2 == 0) {
    param_1[0xf] = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 0xc,iVar2,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0xc),pvVar3,(longlong)iVar2);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  iVar2 = param_2[0x12];
  pvVar3 = *(void **)(param_2 + 0x10);
  param_1[0x12] = iVar2;
  if (iVar2 == 0) {
    param_1[0x13] = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 0x10,iVar2,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x10),pvVar3,(longlong)iVar2 << 2);
  }
  *(undefined8 *)(param_1 + 0x14) = 0;
  iVar2 = param_2[0x16];
  pvVar3 = *(void **)(param_2 + 0x14);
  param_1[0x16] = iVar2;
  if (iVar2 == 0) {
    param_1[0x17] = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 0x14,iVar2,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x14),pvVar3,(longlong)iVar2 << 2);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar2 = param_2[0x1a];
  pvVar3 = *(void **)(param_2 + 0x18);
  param_1[0x1a] = iVar2;
  if (iVar2 == 0) {
    param_1[0x1b] = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 0x18,iVar2,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x18),pvVar3,(longlong)iVar2 << 2);
  }
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  return param_1;
}



// FUNCTION 142f4ed90 FUN_142f4ed90 body=968 status=ok
// SIG undefined FUN_142f4ed90(void)

undefined4 * FUN_142f4ed90(undefined4 *param_1,longlong *param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  
  *param_1 = 0xffffffff;
  *(undefined1 *)(param_1 + 1) = 4;
  uVar12 = 0;
  param_1[2] = 0xffffffff;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  if ((*param_2 != 0) && (*(int *)(*param_2 + 0x218) == (int)param_2[4])) {
    *param_1 = param_3;
    *(char *)(param_1 + 1) = (char)param_2[2];
    *(char *)(param_1 + 0x1c) = (char)param_2[0xd];
    lVar13 = param_2[5];
    if (lVar13 != 0) {
      plVar5 = *(longlong **)(*param_2 + 0x200);
      for (plVar8 = plVar5; plVar8 != plVar5 + *(int *)(*param_2 + 0x208); plVar8 = plVar8 + 1) {
        if (*plVar8 == lVar13) {
          uVar9 = (undefined4)((longlong)plVar8 - (longlong)plVar5 >> 3);
          goto LAB_142f4ee5e;
        }
      }
    }
    uVar9 = 0xffffffff;
LAB_142f4ee5e:
    param_1[2] = uVar9;
    TArray<int,FDefaultAllocator>::SetNum
              (param_1 + 0x14,(int)param_2[7],CONCAT71((int7)((ulonglong)lVar13 >> 8),1));
    uVar16 = uVar12;
    uVar17 = uVar12;
    if (0 < (int)param_1[0x16]) {
      do {
        plVar5 = *(longlong **)(*param_2 + 0x210);
        if (plVar5 != plVar5 + *(int *)(*param_2 + 0x218)) {
          plVar8 = plVar5;
          do {
            if (*plVar8 == *(longlong *)(uVar17 + param_2[6])) {
              uVar9 = (undefined4)((longlong)plVar8 - (longlong)plVar5 >> 3);
              goto LAB_142f4eec3;
            }
            plVar8 = plVar8 + 1;
          } while (plVar8 != plVar5 + *(int *)(*param_2 + 0x218));
        }
        uVar9 = 0xffffffff;
LAB_142f4eec3:
        *(undefined4 *)(*(longlong *)(param_1 + 0x14) + uVar12) = uVar9;
        uVar14 = (int)uVar16 + 1;
        uVar12 = uVar12 + 4;
        uVar16 = (ulonglong)uVar14;
        uVar17 = uVar17 + 8;
      } while ((int)uVar14 < (int)param_1[0x16]);
    }
    iVar15 = param_1[0x1a];
    iVar10 = (int)param_2[9];
    if (iVar15 < iVar10) {
      param_1[0x1a] = iVar10;
      if ((int)param_1[0x1b] < iVar10) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x18);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar15 * 4),0,
                 (longlong)(iVar10 - iVar15) << 2);
    }
    else if ((iVar10 < iVar15) && (iVar10 != iVar15)) {
      param_1[0x1a] = iVar10;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_1 + 0x18);
    }
    iVar15 = 0;
    if (0 < (int)param_1[0x1a]) {
      lVar18 = 0;
      lVar13 = 0;
      do {
        plVar5 = *(longlong **)(*param_2 + 0x210);
        if (plVar5 != plVar5 + *(int *)(*param_2 + 0x218)) {
          plVar8 = plVar5;
          do {
            if (*plVar8 == *(longlong *)(lVar18 + param_2[8])) {
              uVar9 = (undefined4)((longlong)plVar8 - (longlong)plVar5 >> 3);
              goto LAB_142f4ef97;
            }
            plVar8 = plVar8 + 1;
          } while (plVar8 != plVar5 + *(int *)(*param_2 + 0x218));
        }
        uVar9 = 0xffffffff;
LAB_142f4ef97:
        *(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar13) = uVar9;
        iVar15 = iVar15 + 1;
        lVar13 = lVar13 + 4;
        lVar18 = lVar18 + 8;
      } while (iVar15 < (int)param_1[0x1a]);
    }
    lVar13 = *param_2;
    iVar15 = 0;
    if (0 < *(int *)(lVar13 + 0x218)) {
      lVar18 = 0;
      lVar19 = 0;
      do {
        lVar13 = *(longlong *)(lVar19 + *(longlong *)(lVar13 + 0x210));
        if (*(char *)(lVar13 + 0x28) == '\x01') {
          iVar3 = param_1[10];
          iVar10 = iVar3 + 1;
          iVar4 = *(int *)(lVar18 + param_2[3]);
          param_1[10] = iVar10;
          if ((int)param_1[0xb] <= iVar3) {
            uVar14 = (int)(iVar3 + 0x20 + (iVar3 + 0x20 >> 0x1f & 0x1fU)) >> 5;
            if (uVar14 < 5) {
              iVar7 = 4;
            }
            else {
              uVar12 = FMemory::QuantizeSize
                                 ((((ulonglong)((longlong)(int)uVar14 * 3) >> 3) +
                                  (longlong)(int)uVar14) * 4 + 0x40,0);
              iVar10 = param_1[10];
              iVar7 = (int)(uVar12 >> 2);
              if (iVar7 < (int)uVar14) {
                iVar7 = 0x7fffffff;
              }
            }
            param_1[0xb] = iVar7 << 5;
            TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 4,iVar10 + -1);
          }
          puVar11 = *(undefined4 **)(param_1 + 8);
          if (*(undefined4 **)(param_1 + 8) == (undefined4 *)0x0) {
            puVar11 = param_1 + 4;
          }
          iVar10 = iVar3;
          if (iVar3 < 0) {
            iVar10 = iVar3 + 0x1f;
          }
          puVar1 = puVar11 + (iVar10 >> 5);
          uVar14 = 1 << ((byte)iVar3 & 0x1f);
          if (iVar4 == 1) {
            *puVar1 = *puVar1 | uVar14;
          }
          else {
            *puVar1 = *puVar1 & ~uVar14;
          }
        }
        else {
          lVar6 = param_2[3];
          if (*(char *)(lVar13 + 0xa0) == '\0') {
            iVar10 = param_1[0xe];
            uVar2 = *(undefined1 *)(lVar18 + lVar6);
            param_1[0xe] = iVar10 + 1;
            if ((int)param_1[0xf] < iVar10 + 1) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0xc,iVar10);
            }
            *(undefined1 *)((longlong)iVar10 + *(longlong *)(param_1 + 0xc)) = uVar2;
          }
          else {
            iVar10 = param_1[0x12];
            param_1[0x12] = iVar10 + 1;
            if ((int)param_1[0x13] < iVar10 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar10);
            }
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar10 * 4) =
                 *(undefined4 *)(lVar18 + lVar6);
          }
        }
        lVar13 = *param_2;
        iVar15 = iVar15 + 1;
        lVar19 = lVar19 + 8;
        lVar18 = lVar18 + 4;
      } while (iVar15 < *(int *)(lVar13 + 0x218));
    }
  }
  return param_1;
}



// FUNCTION 142f4f160 FUN_142f4f160 body=90 status=ok
// SIG undefined FUN_142f4f160(void)

undefined8 * FUN_142f4f160(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1459ea7e8;
  *(undefined4 *)(param_1 + 5) = 0;
  FText::FText(param_1 + 6);
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__1459eaa88;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 142f4f1c0 FUN_142f4f1c0 body=1115 status=ok
// SIG undefined FUN_142f4f1c0(void)

undefined8 * FUN_142f4f1c0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_141781840();
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_1459e9e38;
  uVar5 = FUN_1404b03b0();
  FText::FText(param_1 + 7,uVar5);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  uVar5 = FUN_1404b03b0();
  FText::FText(param_1 + 0x14,uVar5);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar5 = FUN_1404b03b0();
  FText::FText(param_1 + 0x21,uVar5);
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined2 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  FUN_140aecb80(param_1 + 0x35);
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x52) = 0;
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"DESIGNER FIX ME: Add a description.",L"Mission",
                     L"DefaultDescription");
  FText::FText(param_1 + 0x54,uVar5);
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
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
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x32c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 100,0);
  }
  if ((undefined2 *)param_1[100] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[100] = 0;
  }
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  if ((*(int *)((longlong)param_1 + 0x35c) < 0) && (*(int *)((longlong)param_1 + 0x35c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x6a,0);
  }
  if ((undefined2 *)param_1[0x6a] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x6a] = 0;
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  if ((*(int *)((longlong)param_1 + 900) < 0) && (*(int *)((longlong)param_1 + 900) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x6f,0);
  }
  if ((undefined2 *)param_1[0x6f] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x6f] = 0;
  }
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if ((*(int *)((longlong)param_1 + 0x3c4) < 0) && (*(int *)((longlong)param_1 + 0x3c4) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x77,0);
  }
  if ((undefined2 *)param_1[0x77] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x77] = 0;
  }
  *(undefined4 *)(param_1 + 0x75) = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  if ((*(int *)((longlong)param_1 + 0x3ec) < 0) && (*(int *)((longlong)param_1 + 0x3ec) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x7c,0);
  }
  if ((undefined2 *)param_1[0x7c] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x7c] = 0;
  }
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0;
  *(undefined4 *)(param_1 + 0x79) = 0xffffffff;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  if ((*(int *)((longlong)param_1 + 0x3ec) < 0) && (*(int *)((longlong)param_1 + 0x3ec) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x7c,0);
  }
  if ((undefined2 *)param_1[0x7c] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x7c] = 0;
  }
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  return param_1;
}



// FUNCTION 142f4f620 FUN_142f4f620 body=258 status=ok
// SIG undefined FUN_142f4f620(void)

undefined8 * FUN_142f4f620(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_14237f6c0(param_1,uVar1);
  *param_1 = &PTR_FUN_1459eb7f8;
  param_1[5] = &PTR_LAB_1459ebd48;
  param_1[0x5a] = &PTR_LAB_1459ebd78;
  param_1[0x5b] = &PTR_LAB_1459ebdd8;
  param_1[0x5c] = &PTR_FUN_1459ebe38;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined1 *)(param_1 + 0x5f) = 1;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  uVar1 = FUN_1404b03b0();
  FText::FText(param_1 + 99,uVar1);
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) & 0xdf;
  return param_1;
}



// FUNCTION 142f4f730 FUN_142f4f730 body=72 status=ok
// SIG undefined FUN_142f4f730(void)

undefined8 * FUN_142f4f730(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1459ea7e8;
  *(undefined4 *)(param_1 + 5) = 0;
  FText::FText(param_1 + 6);
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 142f4f780 FUN_142f4f780 body=249 status=ok
// SIG undefined FUN_142f4f780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142f4f780(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_14178c940();
  FUN_14237eb90(param_1,uVar4);
  *param_1 = &PTR_FUN_1459ead28;
  param_1[5] = &PTR_LAB_1459eb628;
  param_1[0x5a] = &PTR_LAB_1459eb658;
  param_1[0xde] = &PTR_LAB_1459eb6b0;
  param_1[0xdf] = &PTR_FUN_1459eb710;
  param_1[0xe0] = &PTR_LAB_1459eb728;
  param_1[0xe1] = &PTR_FUN_1459eb788;
  param_1[0xe4] = 0;
  *(undefined1 *)(param_1 + 0xe5) = 1;
  param_1[0xe7] = 0;
  uVar4 = uRam00000001468b5b78;
  param_1[0xe8] = _DAT_1468b5b70;
  param_1[0xe9] = uVar4;
  uVar3 = uRam00000001468b5b8c;
  uVar2 = uRam00000001468b5b88;
  uVar1 = uRam00000001468b5b84;
  *(undefined4 *)(param_1 + 0xea) = _DAT_1468b5b80;
  *(undefined4 *)((longlong)param_1 + 0x754) = uVar1;
  *(undefined4 *)(param_1 + 0xeb) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x75c) = uVar3;
  uVar3 = uRam00000001468b5b9c;
  uVar2 = uRam00000001468b5b98;
  uVar1 = uRam00000001468b5b94;
  *(undefined4 *)(param_1 + 0xec) = _DAT_1468b5b90;
  *(undefined4 *)((longlong)param_1 + 0x764) = uVar1;
  *(undefined4 *)(param_1 + 0xed) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x76c) = uVar3;
  *(undefined1 *)((longlong)param_1 + 0x771) = 1;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf4] = 0;
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) | 0x20;
  FUN_142717090(param_1,0);
  return param_1;
}



// FUNCTION 142f4f880 FUN_142f4f880 body=43 status=ok
// SIG undefined FUN_142f4f880(void)

undefined8 * FUN_142f4f880(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1459ebe58;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 142f4f8b0 ~TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_> body=95 status=ok
// SIG undefined ~TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>(void)

void TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>::
     ~TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x18);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 9;
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



// FUNCTION 142f4f910 FUN_142f4f910 body=215 status=ok
// SIG undefined FUN_142f4f910(void)

void FUN_142f4f910(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  lVar7 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    lVar7 = lVar7 + 0x58;
    do {
      plVar4 = *(longlong **)(lVar7 + 0x20);
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
      FUN_1405f0e70(lVar7,0,0);
      if (*(longlong *)(lVar7 + -0x18) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar7 + -0x28) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar7 + -0x40) != 0) {
        FMemory::Free();
      }
      lVar7 = lVar7 + 0x80;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar7 = *param_1;
  }
  if (lVar7 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142f4f9f0 FUN_142f4f9f0 body=179 status=ok
// SIG undefined FUN_142f4f9f0(void)

void FUN_142f4f9f0(longlong *param_1)

{
  bool bVar1;
  undefined2 *puVar2;
  ulonglong local_res8;
  undefined2 *local_18;
  int local_10;
  
  bVar1 = false;
  local_res8 = local_res8 & 0xffffffff00000000;
  if ((char)param_1[1] != '\0') {
    if (*(longlong *)(*param_1 + 0x2f8) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      local_res8 = *(ulonglong *)(*(longlong *)(*param_1 + 0x2f8) + 0x18);
      FName::ToString(&local_res8,&local_18);
      bVar1 = true;
      puVar2 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar2 = local_18;
      }
    }
    FConfigCacheIni::SetString
              (DAT_1468b6148,L"MissionDebugMenu",L"MissionGraphName",puVar2,&DAT_1468e2360);
    if ((bVar1) && (local_18 != (undefined2 *)0x0)) {
      FMemory::Free();
    }
  }
  if ((char)param_1[1] != '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 142f4fab0 FUN_142f4fab0 body=110 status=ok
// SIG undefined FUN_142f4fab0(void)

void FUN_142f4fab0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x38);
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
  FUN_141782120(param_1);
  return;
}



// FUNCTION 142f4fb20 FUN_142f4fb20 body=114 status=ok
// SIG undefined FUN_142f4fb20(void)

undefined8 * FUN_142f4fb20(undefined8 *param_1,undefined8 *param_2)

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
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
  }
  return param_1;
}



// FUNCTION 142f4fba0 FUN_142f4fba0 body=751 status=ok
// SIG undefined FUN_142f4fba0(void)

longlong * FUN_142f4fba0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    if (*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x38) + *(int *)(param_2 + 0x28) !=
        *(int *)(lVar3 + 0x218)) {
      *(undefined1 *)((longlong)param_1 + 0x6a) = 1;
      return param_1;
    }
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 4);
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0x70);
    iVar8 = *(int *)(param_2 + 8);
    if ((iVar8 < 0) || (*(int *)(lVar3 + 0x208) <= iVar8)) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x200) + (longlong)iVar8 * 8);
    }
    param_1[5] = lVar3;
    TArray<unsigned___int64,FDefaultAllocator>::SetNum(param_1 + 6);
    iVar8 = 0;
    if (0 < (int)param_1[7]) {
      lVar7 = 0;
      lVar3 = 0;
      do {
        iVar6 = *(int *)(lVar3 + *(longlong *)(param_2 + 0x50));
        if ((iVar6 < 0) || (*(int *)(*param_1 + 0x218) <= iVar6)) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(*(longlong *)(*param_1 + 0x210) + (longlong)iVar6 * 8);
        }
        iVar8 = iVar8 + 1;
        lVar3 = lVar3 + 4;
        *(undefined8 *)(lVar7 + param_1[6]) = uVar5;
        lVar7 = lVar7 + 8;
      } while (iVar8 < (int)param_1[7]);
    }
    iVar8 = (int)param_1[9];
    iVar6 = *(int *)(param_2 + 0x68);
    if (iVar8 < iVar6) {
      *(int *)(param_1 + 9) = iVar6;
      if (*(int *)((longlong)param_1 + 0x4c) < iVar6) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 8);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(param_1[8] + (longlong)iVar8 * 8),0,(longlong)(iVar6 - iVar8) << 3);
    }
    else if ((iVar6 < iVar8) && (iVar6 != iVar8)) {
      *(int *)(param_1 + 9) = iVar6;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 8);
    }
    iVar8 = 0;
    if (0 < (int)param_1[9]) {
      lVar7 = 0;
      lVar3 = 0;
      do {
        iVar6 = *(int *)(lVar3 + *(longlong *)(param_2 + 0x60));
        if ((iVar6 < 0) || (*(int *)(*param_1 + 0x218) <= iVar6)) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(*(longlong *)(*param_1 + 0x210) + (longlong)iVar6 * 8);
        }
        iVar8 = iVar8 + 1;
        lVar3 = lVar3 + 4;
        *(undefined8 *)(lVar7 + param_1[8]) = uVar5;
        lVar7 = lVar7 + 8;
      } while (iVar8 < (int)param_1[9]);
    }
    iVar8 = (int)param_1[4];
    iVar6 = *(int *)(*param_1 + 0x218);
    if (iVar8 < iVar6) {
      *(int *)(param_1 + 4) = iVar6;
      if (*(int *)((longlong)param_1 + 0x24) < iVar6) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 3);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(param_1[3] + (longlong)iVar8 * 4),0,(longlong)(iVar6 - iVar8) << 2);
    }
    else if ((iVar6 < iVar8) && (iVar6 != iVar8)) {
      *(int *)(param_1 + 4) = iVar6;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_1 + 3);
    }
    lVar3 = *param_1;
    uVar4 = 0;
    iVar6 = 0;
    iVar9 = 0;
    iVar8 = 0;
    if (0 < *(int *)(lVar3 + 0x218)) {
      lVar7 = 0;
      lVar10 = 0;
      do {
        lVar3 = *(longlong *)(lVar10 + *(longlong *)(lVar3 + 0x210));
        if (*(char *)(lVar3 + 0x28) == '\x01') {
          if (((int)uVar4 < 0) || (*(int *)(param_2 + 0x28) <= (int)uVar4)) goto LAB_142f4fe6d;
          lVar3 = *(longlong *)(param_2 + 0x20);
          if (*(longlong *)(param_2 + 0x20) == 0) {
            lVar3 = param_2 + 0x10;
          }
          uVar1 = uVar4;
          if ((int)uVar4 < 0) {
            uVar1 = uVar4 + 0x1f;
          }
          uVar2 = uVar4 & 0x1f;
          uVar4 = uVar4 + 1;
          *(uint *)(lVar7 + param_1[3]) =
               (uint)((*(uint *)(lVar3 + (longlong)((int)uVar1 >> 5) * 4) >> uVar2 & 1) != 0);
        }
        else if (*(char *)(lVar3 + 0xa0) == '\0') {
          if ((iVar6 < 0) || (*(int *)(param_2 + 0x38) <= iVar6)) {
LAB_142f4fe6d:
            *(undefined1 *)((longlong)param_1 + 0x6a) = 1;
            return param_1;
          }
          lVar3 = (longlong)iVar6;
          iVar6 = iVar6 + 1;
          *(uint *)(lVar7 + param_1[3]) = (uint)*(byte *)(*(longlong *)(param_2 + 0x30) + lVar3);
        }
        else {
          if ((iVar9 < 0) || (*(int *)(param_2 + 0x48) <= iVar9)) goto LAB_142f4fe6d;
          lVar3 = (longlong)iVar9;
          iVar9 = iVar9 + 1;
          *(undefined4 *)(lVar7 + param_1[3]) =
               *(undefined4 *)(*(longlong *)(param_2 + 0x40) + lVar3 * 4);
        }
        lVar3 = *param_1;
        iVar8 = iVar8 + 1;
        lVar10 = lVar10 + 8;
        lVar7 = lVar7 + 4;
      } while (iVar8 < *(int *)(lVar3 + 0x218));
    }
  }
  return param_1;
}



// FUNCTION 142f4fe90 FUN_142f4fe90 body=153 status=ok
// SIG undefined FUN_142f4fe90(void)

ulonglong FUN_142f4fe90(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (*param_1 != 0) {
    in_RAX = FUN_142f71d80();
    uVar3 = *param_1;
    for (uVar2 = uVar3; uVar2 != 0; uVar2 = *(ulonglong *)(uVar2 + 0x30)) {
      if (uVar2 == in_RAX) goto LAB_142f4fed0;
    }
  }
  uVar3 = 0;
LAB_142f4fed0:
  if (*param_2 != 0) {
    in_RAX = FUN_142f71d80();
    uVar2 = *param_2;
    for (uVar1 = uVar2; uVar1 != 0; uVar1 = *(ulonglong *)(uVar1 + 0x30)) {
      if (uVar1 == in_RAX) goto LAB_142f4fef6;
    }
  }
  uVar2 = 0;
LAB_142f4fef6:
  if ((uVar3 == uVar2) && (in_RAX = param_2[1], param_1[1] == in_RAX)) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142f4ff30 FUN_142f4ff30 body=275 status=ok
// SIG undefined FUN_142f4ff30(void)

bool FUN_142f4ff30(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  ulonglong local_res18;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 4);
  if (cVar2 != '\0') {
    cVar2 = FWeakObjectPtr::IsValid(param_2 + 4);
    if (cVar2 != '\0') {
      lVar3 = FWeakObjectPtr::Get(param_1 + 4);
      lVar4 = FWeakObjectPtr::Get(param_2 + 4);
      return lVar3 == lVar4;
    }
  }
  (**(code **)(*param_1 + 0x18))(param_1,&local_res8);
  (**(code **)(*param_2 + 0x18))(param_2);
  if (local_res8 != 0) {
    uVar5 = FUN_142f71d80();
    for (uVar1 = local_res8; uVar1 != 0; uVar1 = *(ulonglong *)(uVar1 + 0x30)) {
      uVar6 = local_res8;
      if (uVar1 == uVar5) goto LAB_142f4ffd0;
    }
  }
  uVar6 = 0;
LAB_142f4ffd0:
  if (local_res18 != 0) {
    uVar5 = FUN_142f71d80();
    for (uVar1 = local_res18; uVar1 != 0; uVar1 = *(ulonglong *)(uVar1 + 0x30)) {
      if (uVar1 == uVar5) goto LAB_142f50000;
    }
  }
  local_res18 = 0;
LAB_142f50000:
  if ((uVar6 == local_res18) &&
     (((*(int *)((longlong)param_1 + 0x1c) == *(int *)((longlong)param_2 + 0x1c) &&
       (int)param_1[3] == (int)param_2[3]) &&
      *(int *)((longlong)param_1 + 0x14) == *(int *)((longlong)param_2 + 0x14)) &&
      (int)param_2[2] == (int)param_1[2])) {
    return true;
  }
  return false;
}



// FUNCTION 142f50050 FUN_142f50050 body=19 status=ok
// SIG undefined FUN_142f50050(void)

bool FUN_142f50050(void)

{
  char cVar1;
  
  cVar1 = FUN_142f4ff30();
  return cVar1 == '\0';
}



// FUNCTION 142f50070 FUN_142f50070 body=761 status=ok
// SIG undefined FUN_142f50070(void)

bool FUN_142f50070(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  plVar3 = (longlong *)FUN_142f647e0(*param_2 + 0x3c8);
  plVar4 = (longlong *)FUN_142f647e0();
  if (plVar3 != (longlong *)0x0) {
    plVar5 = (longlong *)FUN_142f791f0();
    plVar6 = plVar3;
    do {
      if (plVar6 == plVar5) {
        plVar5 = (longlong *)FUN_142f791f0();
        plVar6 = plVar3;
        goto LAB_142f50103;
      }
      plVar6 = (longlong *)plVar6[6];
    } while (plVar6 != (longlong *)0x0);
  }
  lVar9 = 0;
  goto LAB_142f500d0;
  while (plVar3 = (longlong *)plVar3[6], plVar3 != (longlong *)0x0) {
LAB_142f50140:
    if (plVar3 == plVar6) goto LAB_142f50150;
  }
  plVar4 = (longlong *)0x0;
LAB_142f50150:
  lVar7 = plVar4[0x1f];
  if (lVar7 == 0) {
    (**(code **)(*plVar4 + 0x368))();
    lVar7 = plVar4[0x1f];
  }
  goto LAB_142f500f0;
  while (plVar6 = (longlong *)plVar6[6], plVar6 != (longlong *)0x0) {
LAB_142f50103:
    if (plVar6 == plVar5) goto LAB_142f50113;
  }
  plVar3 = (longlong *)0x0;
LAB_142f50113:
  lVar9 = plVar3[0x1f];
  if (lVar9 == 0) {
    (**(code **)(*plVar3 + 0x368))();
    lVar9 = plVar3[0x1f];
  }
LAB_142f500d0:
  if (plVar4 != (longlong *)0x0) {
    plVar6 = (longlong *)FUN_142f791f0();
    plVar3 = plVar4;
    do {
      if (plVar3 == plVar6) {
        plVar6 = (longlong *)FUN_142f791f0();
        plVar3 = plVar4;
        goto LAB_142f50140;
      }
      plVar3 = (longlong *)plVar3[6];
    } while (plVar3 != (longlong *)0x0);
  }
  lVar7 = 0;
LAB_142f500f0:
  if (lVar9 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(longlong *)(lVar9 + 0x60);
  }
  lVar8 = 0;
  if (lVar7 != 0) {
    lVar8 = *(longlong *)(lVar7 + 0x60);
  }
  if (lVar9 == lVar8) {
    if (*(char *)(*param_2 + 0x191) == '\0') {
      if (*(char *)(*param_3 + 0x191) != '\0') {
        return false;
      }
      cVar1 = *(char *)(*param_3 + 0x177);
      if (*(char *)(*param_2 + 0x177) == '\0') {
        if (cVar1 != '\0') {
          return false;
        }
        cVar1 = FUN_142f62f70(param_2[1],param_3[1]);
        if (cVar1 != '\0') {
          return false;
        }
        cVar1 = FUN_142f62f70(param_3[1],param_2[1]);
        if (cVar1 == '\0') {
          local_28 = 0;
          local_20 = 0;
          FUN_142f5a300(param_2[1],&local_28);
          local_38 = 0;
          local_30 = 0;
          FUN_142f5a300(param_3[1]);
          if ((int)local_20 == 0) {
            if ((int)local_30 == 0) {
              if (param_3[1] != 0) {
                lVar8 = FUN_142f71d80();
                lVar9 = param_3[1];
                for (lVar7 = lVar9; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
                  if (lVar7 == lVar8) goto LAB_142f502a1;
                }
              }
              lVar9 = 0;
LAB_142f502a1:
              local_res10 = *(undefined8 *)(lVar9 + 0x18);
              if (param_2[1] != 0) {
                lVar8 = FUN_142f71d80();
                lVar9 = param_2[1];
                for (lVar7 = lVar9; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
                  if (lVar7 == lVar8) goto LAB_142f502d2;
                }
              }
              lVar9 = 0;
LAB_142f502d2:
              local_res18 = *(undefined8 *)(lVar9 + 0x18);
              iVar2 = FName::Compare(&local_res18,&local_res10);
              bVar10 = iVar2 < 0;
            }
            else {
              bVar10 = true;
            }
          }
          else if ((int)local_30 == 0) {
            bVar10 = false;
          }
          else {
            cVar1 = FUN_142f560f0(&local_28,&local_38);
            bVar10 = cVar1 == '\0';
          }
          if (local_38 != 0) {
            FMemory::Free();
          }
          if (local_28 != 0) {
            FMemory::Free();
          }
          return bVar10;
        }
      }
      else if (cVar1 != '\0') {
        cVar1 = FUN_142f62f70(param_2[1],param_3[1]);
        return cVar1 == '\0';
      }
    }
  }
  else if (lVar9 != 0) {
    if (lVar8 == 0) {
      return false;
    }
    local_res10 = *(undefined8 *)(lVar8 + 0x18);
    local_res18 = *(undefined8 *)(lVar9 + 0x18);
    iVar2 = FName::Compare(&local_res18,&local_res10);
    return iVar2 < 0;
  }
  return true;
}



// FUNCTION 142f50370 FUN_142f50370 body=282 status=ok
// SIG undefined FUN_142f50370(void)

undefined8 FUN_142f50370(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  ulonglong local_res10 [3];
  longlong local_38 [2];
  longlong local_28 [2];
  longlong local_18 [2];
  
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  local_res10[0] = local_res10[0] & 0xffffffff00000000;
  if ((*(byte *)(param_2 + 0xb4) & 1) == 0) {
    local_res10[0] = *(ulonglong *)(param_2 + 0x18);
    FName::ToString(local_res10,local_18);
    bVar3 = true;
    bVar2 = false;
    bVar1 = false;
    cVar4 = FString::StartsWith(local_18,L"SKEL_",1);
    if (cVar4 == '\0') {
      local_res10[0] = *(ulonglong *)(param_2 + 0x18);
      FName::ToString(local_res10,local_28);
      bVar3 = true;
      bVar2 = true;
      bVar1 = false;
      cVar4 = FString::StartsWith(local_28,L"REINST_",1);
      if (cVar4 == '\0') {
        local_res10[0] = *(ulonglong *)(param_2 + 0x18);
        FName::ToString(local_res10,local_38);
        bVar3 = true;
        bVar2 = true;
        bVar1 = true;
        cVar4 = FString::EndsWith(local_38,&DAT_145896498,1);
        if (cVar4 != '\0') {
          uVar5 = 0;
          goto LAB_142f50439;
        }
      }
    }
  }
  uVar5 = 1;
LAB_142f50439:
  if (bVar1) {
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  if (bVar2) {
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  if ((bVar3) && (local_18[0] != 0)) {
    FMemory::Free();
  }
  return uVar5;
}



// FUNCTION 142f50490 FUN_142f50490 body=104 status=ok
// SIG undefined FUN_142f50490(void)

bool FUN_142f50490(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *(longlong *)param_1[1];
  iVar2 = FUN_142f5bbc0(*param_1,*(undefined8 *)(lVar1 + (longlong)param_3 * 0x30));
  iVar3 = FUN_142f5bbc0(*param_1,*(undefined8 *)(lVar1 + (longlong)param_2 * 0x30));
  return iVar3 < iVar2;
}



// FUNCTION 142f50580 FUN_142f50580 body=97 status=ok
// SIG undefined FUN_142f50580(void)

longlong FUN_142f50580(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  TArray<FGameplayCueNotifyData,TSizedDefaultAllocator<32>_>::
  ~TArray<FGameplayCueNotifyData,TSizedDefaultAllocator<32>_>(param_1 + 0x470);
  FUN_142f4f910(param_1 + 0x458);
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4a0);
  }
  return param_1;
}



// FUNCTION 142f505f0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UNiagaraSimulationStageGeneric::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  FUN_142f4fab0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 142f50640 FUN_142f50640 body=409 status=ok
// SIG undefined FUN_142f50640(void)

longlong FUN_142f50640(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x378) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x350) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 800) != 0) {
    FMemory::Free();
  }
  FUN_140bff340(param_1 + 0x2a0);
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x268);
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x228);
  plVar2 = *(longlong **)(param_1 + 0x220);
  if (iVar1 != 0) {
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    plVar2 = *(longlong **)(param_1 + 0x220);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x1a8) = &PTR_FUN_144278ac0;
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x1a8) = &PTR_FUN_1441d26b8;
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x198);
  FUN_140bff340(param_1 + 0x108);
  FUN_140bff340(param_1 + 0xa0);
  FUN_140bff340(param_1 + 0x38);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x408);
  }
  return param_1;
}


