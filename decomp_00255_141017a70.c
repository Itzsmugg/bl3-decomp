// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141017a70 FUN_141017a70 body=614 status=ok
// SIG undefined FUN_141017a70(void)

void FUN_141017a70(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  short *psVar6;
  char *pcVar7;
  undefined8 uVar8;
  short *local_38;
  ulonglong local_30;
  short *local_28;
  ulonglong local_20;
  
  if (param_2 == *(char *)(param_1 + 0x2fa)) {
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x280));
  lVar2 = *(longlong *)(param_1 + 0x270);
  plVar5 = (longlong *)0x0;
  if (lVar2 != 0) {
    plVar5 = *(longlong **)(param_1 + 0x278);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x280));
  lVar4 = -1;
  if (lVar2 == 0) {
    plVar5 = (longlong *)0x0;
  }
  if (plVar5 == (longlong *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  *(char *)(param_1 + 0x2fa) = param_2;
  if (param_2 == '\0') {
    if (*(longlong *)(param_1 + 0x1a8) == 0) {
      return;
    }
    local_38 = (short *)0x0;
    local_30 = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_38,7,"oneBar",7,0x3f);
    if (iVar1 == 1) {
      local_28 = (short *)0x0;
      local_20 = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      uVar8 = 7;
      pcVar7 = "oneBar";
LAB_141017c6b:
      psVar6 = local_28;
      FGenericPlatformString::Convert<char,wchar_t>(local_28,uVar8,pcVar7,uVar8,0x3f);
      if (local_38 != (short *)0x0) {
        FMemory::Free();
      }
      local_30 = local_20;
      local_38 = psVar6;
    }
    else {
      if (iVar1 == 2) {
        local_28 = (short *)0x0;
        local_20 = 8;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        uVar8 = 8;
        pcVar7 = "twoBars";
        goto LAB_141017c6b;
      }
      if (iVar1 == 3) {
        local_28 = (short *)0x0;
        local_20 = 10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        uVar8 = 10;
        pcVar7 = "threeBars";
        goto LAB_141017c6b;
      }
    }
    lVar2 = *(longlong *)(param_1 + 0x1a8);
  }
  else {
    FString::PrintfImpl(&local_28,L"immune%d",iVar1);
    psVar6 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      psVar6 = local_28;
    }
    local_38 = (short *)0x0;
    local_30 = 0;
    if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
      do {
        lVar4 = lVar4 + 1;
      } while (psVar6[lVar4] != 0);
      uVar3 = (int)lVar4 + 1;
      local_30 = (ulonglong)uVar3;
      if (0 < (int)uVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      }
      FGenericPlatformString::Memcpy(local_38,psVar6,(longlong)(int)uVar3 * 2);
    }
    if (local_28 != (short *)0x0) {
      FMemory::Free();
    }
    lVar2 = *(longlong *)(param_1 + 0x1a8);
    if (lVar2 == 0) goto LAB_141017cad;
  }
  FUN_142088910(lVar2,&local_38);
LAB_141017cad:
  if (local_38 != (short *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141017ce0 FUN_141017ce0 body=82 status=ok
// SIG undefined FUN_141017ce0(void)

void FUN_141017ce0(longlong param_1,char param_2)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = FUN_140f70280();
  if (cVar2 != param_2) {
    FUN_140f8ef00(param_1,param_2);
    plVar1 = *(longlong **)(param_1 + 0x2a0);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x278))(plVar1,param_2);
    }
    FUN_141012a10(param_1);
  }
  return;
}



// FUNCTION 141017d40 FUN_141017d40 body=9 status=ok
// SIG undefined FUN_141017d40(void)

void FUN_141017d40(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 800) = param_2;
  return;
}



// FUNCTION 141017d50 FUN_141017d50 body=118 status=ok
// SIG undefined FUN_141017d50(void)

void FUN_141017d50(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  FText::operator=(param_1 + 0x240);
  if ((*(longlong *)(param_1 + 0x270) != 0) && (*(longlong *)(param_1 + 0x278) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x278) + 8);
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 0;
      iVar2 = 0;
    }
    UNLOCK();
    if (0 < iVar2) {
      FUN_142f0bf30(param_1 + 0x268,&DAT_1464aa6c0,1);
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x268,param_1 + 0x240,1,0);
    }
  }
  return;
}



// FUNCTION 141017dd0 FUN_141017dd0 body=203 status=ok
// SIG undefined FUN_141017dd0(void)

void FUN_141017dd0(undefined8 param_1,longlong param_2)

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
  if (param_2 != 0) {
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
  local_68[0] = &LAB_140ff1d20;
  FUN_14208c5d0(param_1,local_68);
  FUN_1416f8340(uVar2);
  FUN_1416f8340(local_res8[0]);
  return;
}



// FUNCTION 141017ea0 String_Actor__Remove body=45 status=ok
// SIG undefined String_Actor__Remove(void)

void UVictoryTMapComp::String_Actor__Remove(longlong param_1,longlong *param_2)

{
  FString::operator=(param_1 + 0x1d0);
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141017ed0 FUN_141017ed0 body=310 status=ok
// SIG undefined FUN_141017ed0(void)

void FUN_141017ed0(longlong param_1,longlong param_2)

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
  
  if (param_2 != 0) {
    lVar4 = UObject::GetPrivateStaticClass();
    lVar7 = param_2;
    do {
      if (lVar7 == lVar4) goto LAB_141017f02;
      lVar7 = *(longlong *)(lVar7 + 0x30);
    } while (lVar7 != 0);
  }
  param_2 = 0;
LAB_141017f02:
  *(longlong *)(param_1 + 0x5b0) = param_2;
  if (param_2 != 0) {
    lVar5 = FUN_142f71d80();
    lVar7 = *(longlong *)(param_1 + 0x5b0);
    lVar4 = lVar7;
    if (lVar7 != 0) {
      while (lVar4 != lVar5) {
        plVar1 = (longlong *)(lVar4 + 0x30);
        lVar4 = *plVar1;
        if (*plVar1 == 0) {
          return;
        }
      }
      if (lVar7 != 0) {
        if (*(longlong *)(param_1 + 0x2b8) == 0) {
          *(undefined1 *)(param_1 + 0x5d8) = 1;
          return;
        }
        if (*(longlong **)(param_1 + 0x5b8) != (longlong *)0x0) {
          lVar7 = **(longlong **)(param_1 + 0x5b8);
          uVar6 = FUN_142f5bb60(param_1 + 0x5b0);
          uVar6 = FUN_142dea370(uVar6,local_28);
          (**(code **)(lVar7 + 0x2b0))(*(undefined8 *)(param_1 + 0x5b8),uVar6,1,0);
          if (local_20 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_20 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
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
        FUN_140ff0fa0(param_1);
      }
    }
  }
  return;
}



// FUNCTION 141018010 FUN_141018010 body=391 status=ok
// SIG undefined FUN_141018010(void)

void FUN_141018010(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_res8;
  longlong local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 0x698) != 0) goto LAB_141018098;
  plVar2 = (longlong *)FUN_140eccbe0();
  if (((plVar2 == (longlong *)0x0) || (lVar3 = (**(code **)(*plVar2 + 0x148))(plVar2), lVar3 == 0))
     || (lVar3 = FUN_142f6c9f0(lVar3), lVar3 == 0)) {
LAB_141018086:
    lVar3 = 0;
  }
  else {
    lVar4 = UWebSocketNetDriver::StaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_141018086;
  }
  *(longlong *)(param_1 + 0x698) = lVar3;
  if (lVar3 == 0) {
    return;
  }
LAB_141018098:
  local_10 = 0;
  local_18 = param_1;
  uVar5 = FUN_142f768a0();
  local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar5);
  FUN_142f690f0(*(undefined8 *)(param_1 + 0x698),&local_18,1);
  FUN_142f5ed60(*(undefined8 *)(param_1 + 0x698),&local_res8);
  plVar2 = (longlong *)FUN_140eccbe0(param_1);
  if ((plVar2 != (longlong *)0x0) && (lVar3 = (**(code **)(*plVar2 + 0x148))(plVar2), lVar3 != 0)) {
    if (*(longlong *)(lVar3 + 400) == 0) {
      uVar5 = *(undefined8 *)(lVar3 + 0x3f8);
    }
    else {
      uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
    }
    FUN_142880530(uVar5,param_1 + 0x690);
    *(undefined8 *)(param_1 + 0x690) = 0;
  }
  if (local_res8 != 0) {
    lVar3 = FUN_142f71d80();
    for (; local_res8 != 0; local_res8 = *(longlong *)(local_res8 + 0x30)) {
      if (local_res8 == lVar3) {
        (**(code **)(*(longlong *)(param_1 + 0x630) + 0x40))();
        break;
      }
    }
  }
  if (*(char *)(param_1 + 0x681) != '\0') {
    *(undefined1 *)(param_1 + 0x681) = 0;
    FUN_1410196e0(param_1);
  }
  *(undefined1 *)(param_1 + 0x680) = 1;
  return;
}



// FUNCTION 1410181a0 FUN_1410181a0 body=111 status=ok
// SIG undefined FUN_1410181a0(void)

void FUN_1410181a0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 local_res8 [8];
  
  local_res8[0] = 0xffffffff;
  if (param_2 != 0) {
    FUN_14170c210(local_res8);
  }
  puVar2 = (undefined4 *)(param_1 + 0x744);
  if (local_res8 != puVar2) {
    if (*(char *)(param_1 + 0x748) != '\0') {
      *(undefined1 *)(param_1 + 0x748) = 0;
      FUN_1416f8340(*puVar2);
    }
    *puVar2 = 0xffffffff;
    uVar1 = FUN_1416f8720(local_res8[0]);
    FUN_14170c210(puVar2,uVar1);
    *(undefined1 *)(param_1 + 0x748) = 1;
  }
  FUN_1416f8340(local_res8[0]);
  return;
}



// FUNCTION 141018210 FUN_141018210 body=3153 status=ok
// SIG undefined FUN_141018210(void)

bool FUN_141018210(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  void *pvVar2;
  longlong *plVar3;
  ulonglong uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong **pplVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  undefined8 *puVar16;
  uint uVar17;
  bool bVar19;
  longlong *plVar20;
  bool bVar21;
  undefined1 local_res8;
  undefined1 local_1f7 [7];
  longlong *local_1f0;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  undefined2 *local_1d8;
  int local_1d0;
  int local_1cc;
  void *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  undefined8 local_188;
  longlong local_180;
  undefined8 local_178;
  longlong *local_170;
  longlong *local_168;
  longlong *local_160;
  undefined8 local_158;
  longlong local_150;
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_128;
  longlong *local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *plStack_f0;
  longlong *local_e8;
  longlong *plStack_e0;
  longlong local_d0 [2];
  longlong local_c0 [2];
  longlong local_b0 [2];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  undefined4 local_80;
  undefined1 local_78 [8];
  int local_70;
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong *plVar18;
  
  plVar13 = (longlong *)0x0;
  bVar19 = false;
  local_1e0 = 0;
  *(undefined1 *)(param_1 + 0x1a0) = 0;
  if ((param_3 == 0) || (param_4 == 0)) {
    return false;
  }
  *(longlong *)(param_1 + 0x198) = param_4;
  FUN_142088cf0();
  local_180 = 0;
  local_178 = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_180,0);
  FGenericPlatformString::Memcpy(local_180,L"skillTreeBG.branchFill",0x2e);
  local_190 = (longlong *)0x0;
  local_188 = 0;
  local_a0 = 0;
  uVar7 = FUN_140ecc430(param_1,&local_180,0,6,&local_190);
  *(undefined8 *)(param_1 + 400) = uVar7;
  plVar8 = local_190;
  for (iVar14 = (int)local_188; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_190 != (longlong *)0x0) {
    FMemory::Free(local_190);
  }
  if (local_180 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x198);
    local_1d0 = *(int *)(param_2 + 1);
    lVar15 = (longlong)local_1d0;
    pvVar2 = (void *)*param_2;
    local_1d8 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_1d8,(7 - (uint)(local_1d0 != 0)) + local_1d0,0);
    _guard_xfg_dispatch_icall_nop(local_1d8,pvVar2,lVar15 * 2);
    iVar14 = local_1d0;
    lVar15 = (longlong)local_1d0;
    local_1d0 = (7 - (uint)(local_1d0 != 0)) + local_1d0;
    if (local_1cc < local_1d0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,iVar14);
    }
    local_1e0 = 0;
    lVar15 = lVar15 - (ulonglong)(iVar14 != 0);
    *(undefined8 *)(local_1d8 + lVar15) = 0x5f00690025005f;
    *(undefined4 *)(local_1d8 + lVar15 + 4) = 0x690025;
    local_1d8[lVar15 + 6] = 0;
    local_198 = *(longlong **)(lVar11 + 0xa8);
    plVar8 = local_198 + *(int *)(lVar11 + 0xb0);
    local_100 = plVar8;
    if (local_198 != plVar8) {
      local_res8 = (undefined1)param_1;
      plVar18 = plVar13;
LAB_141018400:
      lVar11 = *local_198;
      if (lVar11 != 0) {
        local_1e8 = *(int *)(lVar11 + 0x40);
        lVar15 = (longlong)local_1e8;
        pvVar2 = *(void **)(lVar11 + 0x38);
        local_1f0 = (longlong *)0x0;
        if (local_1e8 == 0) {
          local_1e4 = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                    (&local_1f0,local_1e8,0);
          _guard_xfg_dispatch_icall_nop(local_1f0,pvVar2,lVar15 << 3);
        }
        local_1f7[0] = 0;
        FUN_140fe44a0(local_1f0,(longlong)local_1e8,local_res8,local_1f7);
        plVar20 = *(longlong **)(lVar11 + 0x48);
        plVar8 = plVar20 + *(int *)(lVar11 + 0x50);
        iVar14 = local_1e8;
        for (; local_1e8 = iVar14, plVar20 != plVar8; plVar20 = plVar20 + 1) {
          lVar11 = *plVar20;
          if (lVar11 != 0) {
            if (*(char *)(lVar11 + 0x34) == '\x03') {
              local_1e8 = iVar14 + 1;
              if (local_1e4 < local_1e8) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1f0,iVar14)
                ;
              }
              plVar10 = local_1f0;
              _guard_xfg_dispatch_icall_nop(local_1f0 + 1,local_1f0,(longlong)iVar14 << 3);
              *plVar10 = lVar11;
            }
            else if (*(char *)(lVar11 + 0x34) == '\x04') {
              local_1e8 = iVar14 + 1;
              if (local_1e4 < local_1e8) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1f0,iVar14)
                ;
              }
              local_1f0[iVar14] = lVar11;
            }
          }
          iVar14 = local_1e8;
        }
        bVar19 = false;
        local_1c8 = (void *)0x0;
        local_1c0 = 0;
        local_1b8 = 0;
        local_1b0 = 1;
        AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x180));
        do {
          puVar12 = &DAT_143f3eda8;
          if (local_1d0 != 0) {
            puVar12 = local_1d8;
          }
          local_160 = (longlong *)0x0;
          local_158 = 0;
          FString::PrintfImpl(local_d0,puVar12,local_1c0 & 0xffffffff,
                              *(undefined4 *)(param_1 + 0x178));
          cVar5 = FUN_142091120(param_1,local_d0);
          if (cVar5 == '\0') {
            if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_1410185fb:
              pplVar9 = &local_f8;
              local_f8 = (longlong *)0x0;
              plStack_f0 = (longlong *)0x0;
              uVar17 = 8;
              local_170 = plVar13;
            }
            else {
              piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
              LOCK();
              iVar14 = *piVar1;
              if (iVar14 == 0) {
                *piVar1 = 0;
                iVar14 = 0;
              }
              UNLOCK();
              if (iVar14 < 1) goto LAB_1410185fb;
              local_1a0 = *(longlong **)(param_1 + 0x30);
              local_1a8 = (longlong *)0x0;
              if (local_1a0 != (longlong *)0x0) {
                LOCK();
                uVar17 = *(uint *)(local_1a0 + 1);
                bVar21 = uVar17 == 0;
                if (bVar21) {
                  *(uint *)(local_1a0 + 1) = 0;
                  plVar8 = plVar13;
                }
                else {
                  plVar8 = (longlong *)(ulonglong)uVar17;
                }
                UNLOCK();
                while (!bVar21) {
                  iVar14 = (int)plVar8;
                  LOCK();
                  bVar21 = iVar14 == (int)local_1a0[1];
                  if (bVar21) {
                    *(int *)(local_1a0 + 1) = iVar14 + 1;
                  }
                  UNLOCK();
                  if (bVar21) {
                    local_1a8 = *(longlong **)(param_1 + 0x28);
                    pplVar9 = &local_1a8;
                    uVar17 = 4;
                    local_170 = local_1a8;
                    goto LAB_141018610;
                  }
                  plVar8 = (longlong *)0x0;
                  LOCK();
                  uVar17 = *(uint *)(local_1a0 + 1);
                  bVar21 = uVar17 == 0;
                  if (bVar21) {
                    *(uint *)(local_1a0 + 1) = 0;
                  }
                  else {
                    plVar8 = (longlong *)(ulonglong)uVar17;
                  }
                  UNLOCK();
                }
                local_1a0 = (longlong *)0x0;
              }
              pplVar9 = &local_1a8;
              uVar17 = 4;
              local_170 = (longlong *)0x0;
            }
LAB_141018610:
            uVar17 = uVar17 | (uint)plVar18 | 1;
            plVar18 = (longlong *)(ulonglong)uVar17;
            plVar8 = pplVar9[1];
            pplVar9[1] = (longlong *)0x0;
            plVar20 = plStack_f0;
            local_168 = plVar8;
            *pplVar9 = (longlong *)0x0;
            if (((uVar17 & 8) != 0) &&
               (plVar18 = (longlong *)(ulonglong)(uVar17 & 0xfffffff7),
               plStack_f0 != (longlong *)0x0)) {
              LOCK();
              plVar8 = plStack_f0 + 1;
              lVar11 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plStack_f0)(plStack_f0);
                LOCK();
                piVar1 = (int *)((longlong)plVar20 + 0xc);
                iVar14 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar14 == 1) {
                  (**(code **)(*plStack_f0 + 8))(plStack_f0,1);
                }
              }
            }
            plVar8 = local_1a0;
            if ((((ulonglong)plVar18 & 4) != 0) &&
               (plVar18 = (longlong *)(ulonglong)((uint)plVar18 & 0xfffffffb),
               local_1a0 != (longlong *)0x0)) {
              LOCK();
              plVar20 = local_1a0 + 1;
              lVar11 = *plVar20;
              *(int *)plVar20 = (int)*plVar20 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*local_1a0)(local_1a0);
                LOCK();
                piVar1 = (int *)((longlong)plVar8 + 0xc);
                iVar14 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar14 == 1) {
                  (**(code **)(*local_1a0 + 8))(local_1a0,1);
                }
              }
            }
            pplVar9 = &local_170;
            plVar8 = local_170;
          }
          else {
            pplVar9 = &local_e8;
            local_e8 = (longlong *)0x0;
            plStack_e0 = (longlong *)0x0;
            plVar18 = (longlong *)(ulonglong)((uint)plVar18 | 2);
            plVar8 = plVar13;
          }
          plVar20 = pplVar9[1];
          pplVar9[1] = (longlong *)0x0;
          plVar10 = plStack_e0;
          *pplVar9 = (longlong *)0x0;
          if ((((ulonglong)plVar18 & 2) != 0) &&
             (plVar18 = (longlong *)(ulonglong)((uint)plVar18 & 0xfffffffd),
             plStack_e0 != (longlong *)0x0)) {
            LOCK();
            plVar3 = plStack_e0 + 1;
            lVar11 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plStack_e0)(plStack_e0);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              iVar14 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
              }
            }
          }
          plVar10 = local_168;
          if ((((ulonglong)plVar18 & 1) != 0) &&
             (plVar18 = (longlong *)(ulonglong)((uint)plVar18 & 0xfffffffe),
             local_168 != (longlong *)0x0)) {
            LOCK();
            plVar3 = local_168 + 1;
            lVar11 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_168)(local_168);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              iVar14 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)(*local_168 + 8))(local_168,1);
              }
            }
          }
          plVar10 = plVar13;
          if (plVar8 == (longlong *)0x0) {
            if (plVar20 != (longlong *)0x0) {
              LOCK();
              plVar8 = plVar20 + 1;
              lVar11 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
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
          }
          else {
            uVar7 = UPlatformGameInstance::StaticClass();
            plVar3 = (longlong *)plVar8[0x10];
            lVar11 = plVar8[0xf];
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
            }
            plVar10 = (longlong *)FUN_14203b1b0(lVar11,uVar7,local_d0,param_1,6,&local_160);
            if (plVar10 == (longlong *)0x0) {
LAB_1410187df:
              plVar10 = plVar13;
            }
            else {
              lVar11 = UPlatformGameInstance::StaticClass();
              if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
                  lVar11 + 0x88)) {
                bVar21 = false;
              }
              else {
                bVar21 = true;
              }
              if (!bVar21) goto LAB_1410187df;
            }
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar8 = plVar3 + 1;
              lVar11 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                iVar14 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar14 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            if (plVar20 != (longlong *)0x0) {
              LOCK();
              plVar8 = plVar20 + 1;
              lVar11 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
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
          }
          if (local_d0[0] != 0) {
            FMemory::Free();
          }
          plVar8 = local_160;
          for (iVar14 = (int)local_158; iVar14 != 0; iVar14 = iVar14 + -1) {
            if (*plVar8 != 0) {
              FMemory::Free();
            }
            plVar8 = plVar8 + 2;
          }
          if (local_160 != (longlong *)0x0) {
            FMemory::Free(local_160);
          }
          if (plVar10 == (longlong *)0x0) goto LAB_141018a29;
          if (((int)local_1c0 < 0) || (local_1e8 <= (int)local_1c0)) {
            bVar21 = false;
          }
          else {
            bVar21 = true;
          }
          plVar8 = plVar13;
          if (bVar21) {
            plVar8 = (longlong *)local_1f0[(int)local_1c0];
          }
          local_60 = 0;
          if ((plVar8 == (longlong *)0x0) ||
             (cVar5 = FUN_1409a7560(param_3,plVar8,local_78), cVar5 == '\0')) {
            (**(code **)(*plVar10 + 0x278))(plVar10,0);
          }
          else {
            cVar5 = FUN_1409a1f80(local_78);
            if ((cVar5 == '\0') || (local_70 < 1)) {
              local_140 = 0;
              local_138 = 4;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_140,0);
              FGenericPlatformString::Memcpy(local_140,&DAT_14465a740,8);
              FUN_142088cf0(plVar10,&local_140);
              if (local_140 != 0) {
                FMemory::Free();
              }
            }
            else {
              local_150 = 0;
              local_148 = 3;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_150,0);
              FGenericPlatformString::Memcpy(local_150,&DAT_144659d34,6);
              FUN_142088cf0(plVar10,&local_150);
              if (local_150 != 0) {
                FMemory::Free();
              }
              if (*(int *)(param_1 + 0x178) != 0) {
                iVar14 = FUN_1409ab610(param_3);
                bVar19 = 0 < iVar14;
              }
            }
          }
          uVar4 = local_1c0;
          lVar11 = (longlong)(int)local_1c0;
          iVar14 = (int)local_1c0 + 1;
          local_1c0 = CONCAT44(local_1c0._4_4_,iVar14);
          if (local_1c0._4_4_ < iVar14) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (&local_1c8,uVar4 & 0xffffffff);
          }
          *(longlong **)((longlong)local_1c8 + lVar11 * 8) = plVar10;
        } while( true );
      }
      goto LAB_141018bd1;
    }
LAB_141018c60:
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x180));
    iVar14 = local_1e0;
    FUN_142f0ead0(*(undefined8 *)(param_1 + 400),(float)local_1e0 / (float)*(int *)(param_1 + 0x178)
                 );
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x180));
    bVar19 = 0 < iVar14;
    if (local_1d8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  local_110 = 0;
  local_108 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_110,0);
  FGenericPlatformString::Memcpy(local_110,L"amountText",0x16);
  local_120 = (longlong *)0x0;
  local_118 = 0;
  local_90 = 0;
  uVar7 = FUN_140ecc7d0(param_1,&local_110,0,6,&local_120);
  *(undefined8 *)(param_1 + 0x188) = uVar7;
  plVar13 = local_120;
  for (iVar14 = (int)local_118; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_120 != (longlong *)0x0) {
    FMemory::Free(local_120);
  }
  if (local_110 != 0) {
    FMemory::Free();
  }
  if ((*(longlong *)(param_1 + 0x188) != 0) &&
     (cVar5 = FUN_1409a73a0(param_3,*(undefined8 *)(param_1 + 0x198),local_88), cVar5 != '\0')) {
    uVar6 = FUN_1409aa850(*(undefined8 *)(param_1 + 0x198));
    FString::PrintfImpl(local_b0,L"%i / %i",local_80,uVar6);
    plVar13 = *(longlong **)(param_1 + 0x188);
    lVar11 = *plVar13;
    uVar7 = FText::FromString(local_58,local_b0);
    (**(code **)(lVar11 + 0x2b0))(plVar13,uVar7,1,0);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_50 + 1;
      lVar11 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    if (local_b0[0] != 0) {
      FMemory::Free();
    }
  }
  return bVar19;
LAB_141018a29:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x180));
  if ((int)local_1c0 == 0) {
    if (local_1c8 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_1f0 != (longlong *)0x0) {
      FMemory::Free(local_1f0);
    }
    goto LAB_141018c60;
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x180));
  local_130 = (longlong *)0x0;
  local_128 = 0;
  local_98 = 0;
  FString::PrintfImpl(local_c0,L"fill.respecAnim%i",*(undefined4 *)(param_1 + 0x178));
  uVar7 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 400),local_c0,0,6,&local_130);
  local_1b8 = uVar7;
  if (local_c0[0] != 0) {
    FMemory::Free();
  }
  plVar8 = local_130;
  for (iVar14 = (int)local_128; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_130 != (longlong *)0x0) {
    FMemory::Free(local_130);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x180));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x180));
  iVar14 = *(int *)(param_1 + 0x178);
  *(int *)(param_1 + 0x178) = iVar14 + 1;
  if (*(int *)(param_1 + 0x17c) < iVar14 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1 + 0x170,iVar14);
  }
  lVar11 = (longlong)(int)local_1c0;
  puVar16 = (undefined8 *)((longlong)iVar14 * 0x20 + *(longlong *)(param_1 + 0x170));
  *puVar16 = 0;
  *(int *)(puVar16 + 1) = (int)local_1c0;
  TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
            (puVar16,local_1c0 & 0xffffffff,0);
  _guard_xfg_dispatch_icall_nop((void *)*puVar16,local_1c8,lVar11 << 3);
  puVar16[2] = uVar7;
  *(undefined1 *)(puVar16 + 3) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x180));
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x180));
  if ((bVar19) && (0 < *(int *)(param_1 + 0x178))) {
    local_1e0 = *(int *)(param_1 + 0x178) + -1;
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x180));
  if (local_1c8 != (void *)0x0) {
    FMemory::Free();
  }
  plVar8 = local_100;
  if (local_1f0 != (longlong *)0x0) {
    FMemory::Free(local_1f0);
    plVar8 = local_100;
  }
LAB_141018bd1:
  plVar20 = local_198;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x180));
  lVar11 = 1;
  iVar14 = 1;
  if (0 < (longlong)local_1e0) {
    lVar15 = 0x20;
    do {
      if (*(int *)(param_1 + 0x178) <= iVar14) break;
      iVar14 = iVar14 + 1;
      lVar11 = lVar11 + 1;
      *(undefined1 *)(*(longlong *)(param_1 + 0x170) + 0x18 + lVar15) = 1;
      lVar15 = lVar15 + 0x20;
    } while (lVar11 <= local_1e0);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x180));
  local_198 = plVar20 + 1;
  if (local_198 == plVar8) goto LAB_141018c60;
  goto LAB_141018400;
}



// FUNCTION 141018e70 FUN_141018e70 body=481 status=ok
// SIG undefined FUN_141018e70(void)

void FUN_141018e70(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  undefined2 *puVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  int local_res8 [2];
  longlong local_58 [2];
  int local_48;
  undefined8 local_40;
  int local_38;
  int local_34;
  
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x58c);
  uVar12 = 0;
  if (lVar7 != 0) {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_141018ed3;
  }
  lVar7 = 0;
LAB_141018ed3:
  bVar13 = false;
  cVar5 = FUN_142ebdd70(param_1);
  if (lVar7 != 0) {
    local_res8[0] = -1;
    cVar6 = FUN_142710360(lVar7,local_res8);
    if (cVar6 != '\0') {
      bVar13 = local_res8[0] != 0;
    }
  }
  if ((cVar5 != '\0') && (bVar13)) {
    uVar12 = *(uint *)(param_1 + 0xbe8);
  }
  iVar11 = *(int *)(param_1 + 0xbc4);
  plVar1 = (longlong *)(param_1 + 0xc08);
  if (*(int *)(param_1 + 0xc14) < iVar11) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,iVar11);
    iVar11 = *(int *)(param_1 + 0xbc4);
  }
  if (0 < iVar11) {
    iVar11 = uVar12 + 1;
    plVar2 = (longlong *)(param_1 + 0xbf8);
    do {
      if (*(int *)(param_1 + 0xbe0) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = *(undefined2 **)(param_1 + 0xbd8);
      }
      FString::PrintfImpl(local_58,puVar10,iVar11 + -1);
      local_48 = iVar11;
      FString::FString(&local_40,local_58);
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      iVar3 = *(int *)(param_1 + 0xc00);
      *(int *)(param_1 + 0xc00) = iVar3 + 1;
      if (*(int *)(param_1 + 0xc04) < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar2,iVar3);
      }
      piVar9 = (int *)(*plVar2 + (longlong)iVar3 * 0x18);
      *piVar9 = local_48;
      *(undefined8 *)(piVar9 + 2) = local_40;
      piVar9[4] = local_38;
      piVar9[5] = local_34;
      iVar4 = *(int *)(param_1 + 0xc10);
      lVar7 = *plVar2;
      *(int *)(param_1 + 0xc10) = iVar4 + 1;
      if (*(int *)(param_1 + 0xc14) < iVar4 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
      }
      iVar11 = iVar11 + 1;
      *(longlong *)(*plVar1 + (longlong)iVar4 * 8) = lVar7 + (longlong)iVar3 * 0x18;
    } while ((int)(iVar11 + ~uVar12) < *(int *)(param_1 + 0xbc4));
  }
  return;
}



// FUNCTION 141019060 FUN_141019060 body=149 status=ok
// SIG undefined FUN_141019060(void)

void FUN_141019060(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 800) = 1;
  if ((*(longlong *)(param_1 + 0x260) != 0) && (*(longlong *)(param_1 + 0x268) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x268) + 8);
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 0;
      iVar2 = 0;
    }
    UNLOCK();
    if (0 < iVar2) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 600,param_2,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x288) != 0) && (*(longlong *)(param_1 + 0x290) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x290) + 8);
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 0;
      iVar2 = 0;
    }
    UNLOCK();
    if (0 < iVar2) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x280,param_2,1,0);
    }
  }
  return;
}



// FUNCTION 141019110 FUN_141019110 body=1039 status=ok
// SIG undefined FUN_141019110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141019110(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_108 [32];
  int local_e8;
  longlong local_e0;
  longlong *plStack_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  FUN_141061e20();
  FUN_140ff9650(param_1);
  plVar2 = (longlong *)param_1[0x141];
  lVar7 = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar12 = iVar4 == 0;
    if (bVar12) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (!bVar12) {
      LOCK();
      bVar12 = iVar4 == (int)plVar2[1];
      if (bVar12) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar12) {
        if (plVar2 != (longlong *)0x0) {
          if (param_1[0x140] != 0) {
            FUN_142056670(param_1[0x140],0);
          }
          LOCK();
          plVar6 = plVar2 + 1;
          lVar5 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
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
      bVar12 = iVar4 == 0;
      if (bVar12) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  if ((*(char *)(param_2 + 0x138) != '\0') && (lVar5 = *(longlong *)(param_2 + 0x148), lVar5 != 0))
  {
    plVar6 = *(longlong **)(param_2 + 0x150);
    plVar2 = param_1 + 0x139;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_e0 = lVar5;
    plStack_d8 = plVar6;
    if (&local_e0 != plVar2) {
      local_e0 = *plVar2;
      plStack_d8 = (longlong *)param_1[0x13a];
      *plVar2 = lVar5;
      param_1[0x13a] = (longlong)plVar6;
      local_58 = lVar5;
      plStack_50 = plVar6;
    }
    plVar6 = plStack_d8;
    if (plStack_d8 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_d8 + 1;
      lVar5 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_d8)(plStack_d8);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_d8 + 8))(plStack_d8,1);
        }
      }
    }
    lVar5 = FUN_140fe3ca0(param_1);
    if (lVar5 != 0) {
      lVar3 = *(longlong *)(lVar5 + 0x478);
      plVar11 = (longlong *)(lVar3 + 0x208);
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      local_68 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_143f4d290;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        plVar6[2] = (longlong)FUN_141007bf0;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar6[4] = lVar7;
        *plVar6 = (longlong)&PTR_FUN_143f4d2d8;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar11,1);
        plVar8 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,local_90);
        local_e8 = *(int *)(lVar3 + 0x210);
        lVar7 = *plVar8;
        *(int *)(lVar3 + 0x210) = local_e8 + 1;
        if (*(int *)(lVar3 + 0x214) < local_e8 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,local_e8);
        }
        puVar9 = (undefined8 *)((longlong)local_e8 * 0x10 + *plVar11);
        *puVar9 = plVar6;
        *(undefined4 *)(puVar9 + 1) = 3;
      }
      param_1[0x138] = lVar7;
      local_d0 = *plVar2;
      local_c8 = (longlong *)param_1[0x13a];
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
        UNLOCK();
      }
      FUN_140d84620(*(longlong *)(lVar5 + 0x478) + 0x1f8,&local_b0,&local_d0);
      plVar6 = local_c8;
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_c8 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_c8)(local_c8);
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
      if ((local_b0 == (longlong *)0x0) || (lVar7 = (**(code **)(*local_b0 + 0x10))(), lVar7 == 0))
      {
        local_c0 = *plVar2;
        local_b8 = (longlong *)param_1[0x13a];
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
          UNLOCK();
        }
        FUN_140d94190(*(longlong *)(lVar5 + 0x478) + 0x1f8,&local_c0);
        plVar6 = local_b8;
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_b8 + 1;
          lVar7 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_b8)(local_b8);
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
        local_a0 = *plVar2;
        local_98 = param_1[0x13a];
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        if (local_98 != 0) {
          LOCK();
          *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
          UNLOCK();
        }
        lVar7 = FUN_1411e5cb0(lVar5,&local_a0,&local_78,&local_88);
        if (lVar7 != 0) {
          FUN_141019520(param_1);
          (**(code **)(*param_1 + 0x2a0))(param_1,param_1 + 0x133,lVar7);
        }
      }
      else {
        FUN_141019520(param_1);
        lVar7 = *param_1;
        uVar10 = (**(code **)(*local_b0 + 0x10))();
        (**(code **)(lVar7 + 0x2a0))(param_1,param_1 + 0x133,uVar10);
      }
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_a8 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar1 = (int *)((longlong)local_a8 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_a8 + 8))(local_a8,1);
          }
        }
      }
    }
  }
  FUN_140ff0ce0(param_1);
  return;
}



// FUNCTION 141019520 FUN_141019520 body=438 status=ok
// SIG undefined FUN_141019520(void)

void FUN_141019520(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x9f8);
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
          if (*(longlong *)(param_1 + 0x9f0) != 0) {
            FUN_14203e030(*(longlong *)(param_1 + 0x9f0),L"showProfileImage");
          }
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
  plVar3 = *(longlong **)(param_1 + 0x7b0);
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
          lVar4 = *(longlong *)(param_1 + 0x7a8);
          if (lVar4 != 0) {
            *(undefined1 *)(param_1 + 0x9d8) = 1;
            FUN_142056670(lVar4,1);
            FUN_14203de70(lVar4,&DAT_14465d034);
          }
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
  plVar3 = *(longlong **)(param_1 + 0x9e8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar6 = iVar5 == 0;
    if (bVar6) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (!bVar6) {
      while( true ) {
        LOCK();
        bVar6 = iVar5 == (int)plVar3[1];
        if (bVar6) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar6) break;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar6 = iVar5 == 0;
        if (bVar6) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar6) {
          return;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        if (*(longlong *)(param_1 + 0x9e0) != 0) {
          FUN_142056670(*(longlong *)(param_1 + 0x9e0),1);
        }
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
    }
  }
  return;
}



// FUNCTION 1410196e0 FUN_1410196e0 body=217 status=ok
// SIG undefined FUN_1410196e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410196e0(undefined8 param_1)

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
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_68[0] = FUN_140ff1c80;
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



// FUNCTION 1410197c0 FUN_1410197c0 body=281 status=ok
// SIG undefined FUN_1410197c0(void)

void FUN_1410197c0(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  plVar2 = (longlong *)FUN_1420fc090();
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
      plVar4 = (longlong *)FUN_140cff1b0(plVar2);
      goto LAB_141019826;
    }
  }
  plVar2 = (longlong *)0x0;
  plVar4 = plVar2;
LAB_141019826:
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    lVar5 = FUN_142f71d80();
    for (lVar3 = *(longlong *)(param_1 + 0x5b0); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar5) {
        if ((*(longlong *)(param_1 + 0x5b0) != 0) && (plVar2 != (longlong *)0x0)) {
          uVar6 = FUN_142f7b660();
          lVar3 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar6);
          if (lVar3 != 0) {
            FUN_142f7b710(lVar3,*(undefined8 *)(param_1 + 0x5b0));
          }
        }
        break;
      }
    }
  }
  if ((plVar4 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x5c8) != 0)) {
    FUN_140cc9500(plVar4,*(undefined8 *)(param_1 + 0x550));
    (**(code **)(**(longlong **)(param_1 + 0x5c8) + 0x278))(*(longlong **)(param_1 + 0x5c8),0);
    (**(code **)(**(longlong **)(param_1 + 0x5d0) + 0x278))(*(longlong **)(param_1 + 0x5d0),0);
  }
  return;
}



// FUNCTION 1410198e0 FUN_1410198e0 body=487 status=ok
// SIG undefined FUN_1410198e0(void)

void FUN_1410198e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined8 *local_28;
  undefined8 local_20;
  
  lVar8 = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar1 = FUN_142f71d80();
    lVar4 = *(longlong *)(param_1 + 0x58);
    lVar2 = lVar4;
    if (lVar4 != 0) {
      while (lVar2 != lVar1) {
        lVar2 = *(longlong *)(lVar2 + 0x30);
        if (lVar2 == 0) goto LAB_141019a86;
      }
      if (lVar4 == 0) goto LAB_141019a86;
      lVar2 = FUN_142f71d80();
      for (lVar4 = *(longlong *)(param_1 + 0x58);
          (lVar1 = lVar8, lVar4 != 0 && (lVar1 = *(longlong *)(param_1 + 0x58), lVar4 != lVar2));
          lVar4 = *(longlong *)(lVar4 + 0x30)) {
      }
      lVar4 = lVar8;
      if (param_2 != 0) {
        lVar3 = FUN_142f71d80();
        lVar2 = param_2;
        do {
          lVar4 = param_2;
          if (lVar2 == lVar3) break;
          lVar2 = *(longlong *)(lVar2 + 0x30);
          lVar4 = lVar8;
        } while (lVar2 != 0);
      }
      if (lVar1 == lVar4) {
        lVar4 = lVar8;
        if (*(longlong *)(param_1 + 0x58) != 0) {
          lVar1 = FUN_142f71d80();
          for (lVar2 = *(longlong *)(param_1 + 0x58);
              (lVar4 = lVar8, lVar2 != 0 && (lVar4 = *(longlong *)(param_1 + 0x58), lVar2 != lVar1))
              ; lVar2 = *(longlong *)(lVar2 + 0x30)) {
          }
        }
        plVar5 = (longlong *)FUN_142f5ed60(*(undefined8 *)(param_1 + 0x68),local_res8);
        lVar2 = lVar8;
        if (*plVar5 != 0) {
          lVar3 = FUN_142f71d80();
          for (lVar1 = *plVar5; (lVar2 = lVar8, lVar1 != 0 && (lVar2 = *plVar5, lVar1 != lVar3));
              lVar1 = *(longlong *)(lVar1 + 0x30)) {
          }
        }
        if (lVar4 != lVar2) {
          local_28 = (undefined8 *)0x0;
          local_20 = 0;
          FUN_140ff7300(param_1 + -0x630,&local_28,0);
          puVar6 = local_28;
          iVar7 = (int)local_20;
          if ((int)local_20 == 0) {
            *(undefined8 *)(param_1 + 0x58) = 0;
            if (local_28 == (undefined8 *)0x0) {
              return;
            }
            FMemory::Free();
            return;
          }
          do {
            *puVar6 = &PTR_FUN_1441d26b8;
            iVar7 = iVar7 + -1;
            puVar6 = puVar6 + 6;
          } while (iVar7 != 0);
          if (local_28 != (undefined8 *)0x0) {
            FMemory::Free(local_28);
          }
          goto LAB_141019a86;
        }
      }
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0xbf800000;
    }
  }
LAB_141019a86:
  *(undefined1 *)(param_1 + 0x52) = 1;
  FUN_140ff24a0(param_1 + -0x630);
  FUN_14101e0c0(param_1 + -0x630,param_2);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_1410101c0(param_1 + -0x630);
  *(undefined1 *)(param_1 + 0x52) = 0;
  return;
}



// FUNCTION 141019ad0 FUN_141019ad0 body=182 status=ok
// SIG undefined FUN_141019ad0(void)

undefined8 FUN_141019ad0(longlong param_1,undefined8 param_2,float param_3)

{
  float local_res8 [4];
  float local_res18 [2];
  float local_res20 [2];
  
  local_res8[0] = param_3;
  local_res18[0] = param_3;
  local_res20[0] = param_3;
  switch(*(undefined1 *)(param_1 + 0x3b0)) {
  case 1:
  case 2:
    FUN_140fe7600(local_res8,param_2);
    return param_2;
  default:
    <lambda_1d79419b289ab2267df04f358c8cdfe2>::operator()(param_1,param_2);
    return param_2;
  case 4:
  case 5:
    FUN_140fed770(local_res20,param_2);
    return param_2;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x11:
    FUN_140fec8e0(local_res18,param_2);
    return param_2;
  case 0xb:
    FUN_140ff27d0(param_2,(int)ROUND((param_3 + param_3) - 0.5) >> 1);
    return param_2;
  }
}



// FUNCTION 141019be0 FUN_141019be0 body=76 status=ok
// SIG undefined FUN_141019be0(void)

void FUN_141019be0(longlong param_1)

{
  FUN_140a678a0();
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x6a0));
  if (*(longlong **)(param_1 + 0x658) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x658) + 0x520))();
  }
                    /* WARNING: Could not recover jumptable at 0x000141019c25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x6a0));
  return;
}



// FUNCTION 141019c30 FUN_141019c30 body=1116 status=ok
// SIG undefined FUN_141019c30(void)

void FUN_141019c30(longlong param_1,char param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 uVar12;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  
  if (*(longlong **)(param_1 + 0x6f0) == (longlong *)0x0) {
    return;
  }
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x2b0))();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = FUN_14138e2b0();
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
  if (*(char *)(param_1 + 0xc18) == '\0') {
    if (param_2 == '\0') {
      lVar2 = *(longlong *)(lVar2 + 0x308);
      if ((*(char *)(param_1 + 0xc19) != '\0') && (lVar2 == *(longlong *)(param_1 + 0xc20))) {
        return;
      }
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      lVar3 = *(longlong *)(DAT_146b33f38 + 0xd0);
      if (lVar3 == 0) {
        return;
      }
      *(undefined1 *)(param_1 + 0xc19) = 1;
      *(longlong *)(param_1 + 0xc20) = lVar2;
      *(undefined4 *)(param_1 + 0xc1c) = *(undefined4 *)(lVar3 + 0x440);
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xc18) = 0;
  }
  uVar8 = 0;
  *(undefined1 *)(param_1 + 0xc19) = 0;
  *(undefined4 *)(param_1 + 0xc1c) = 0;
  *(undefined8 *)(param_1 + 0xc20) = 0;
  switch(*(undefined1 *)(param_1 + 0x6c8)) {
  case 1:
  case 2:
  case 3:
    lVar2 = *(longlong *)(lVar2 + 0x308);
    if (lVar2 == 0) {
      return;
    }
    lVar3 = FUN_140fe3d00(param_1 + 0x7a0,0);
    lVar4 = FUN_140f578e0(param_1);
    uVar9 = uVar8;
    if (lVar4 != 0) {
      uVar9 = *(ulonglong *)(lVar4 + 0x2a60);
    }
    uVar11 = uVar8;
    if (lVar3 != 0) {
      uVar11 = *(ulonglong *)(lVar3 + 0x2298);
    }
    if (uVar11 == 0) {
      return;
    }
    if (uVar9 == 0) {
      return;
    }
    uVar12 = 0;
    if (*(char *)(param_1 + 0x6c8) == '\x03') {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      uVar6 = *(undefined8 *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x5b8);
LAB_141019e3c:
      uVar12 = 1;
      lVar3 = FUN_142d1a6c0(uVar9,uVar6);
      if ((lVar3 == 0) || (lVar3 == lVar2)) {
        uVar12 = 0;
      }
    }
    else if (*(char *)(param_1 + 0x6c8) == '\x01') {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      uVar6 = *(undefined8 *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x5b0);
      goto LAB_141019e3c;
    }
    FUN_142d271f0(uVar11,lVar2,0);
    uVar10 = uVar8;
    do {
      iVar7 = (int)uVar8;
      if ((iVar7 < 0) || (*(int *)(uVar9 + 0x2d0) <= iVar7)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        pcVar5 = (char *)(*(longlong *)(uVar9 + 0x2c8) + uVar10);
        lVar2 = 0x28;
        if (pcVar5[1] == '\0') {
          lVar2 = 0x10;
        }
        local_98 = *(undefined8 *)(pcVar5 + lVar2);
        local_90 = *(undefined4 *)(pcVar5 + lVar2 + 8);
        lVar2 = 0x1c;
        if (*pcVar5 == '\0') {
          lVar2 = 4;
        }
        local_88 = *(undefined8 *)(pcVar5 + lVar2);
        local_80 = *(undefined4 *)(pcVar5 + lVar2 + 8);
        FUN_142d27130(uVar11,uVar8,&local_88,&local_98,uVar12,uVar12);
      }
      uVar8 = (ulonglong)(iVar7 + 1U);
      uVar10 = uVar10 + 0x34;
    } while ((int)(iVar7 + 1U) < 3);
    break;
  case 5:
    uVar9 = *(ulonglong *)(lVar2 + 0x308);
    if (uVar9 != 0) {
      lVar2 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(uVar9 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (lVar2 = FUN_140fe3d00(param_1 + 0x7a0,0), lVar2 != 0)) {
        lVar3 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(uVar9 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          uVar9 = uVar8;
        }
        FUN_140e58390(lVar2,uVar9);
      }
    }
    break;
  case 6:
    lVar2 = *(longlong *)(lVar2 + 0x308);
    if (lVar2 != 0) {
      lVar3 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
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
        FUN_141016a80(param_1,lVar2);
      }
    }
    break;
  case 8:
    local_78[0] = 4;
    goto LAB_141019fd5;
  case 9:
    local_78[0] = 3;
    goto LAB_141019fd5;
  case 10:
    local_78[0] = 5;
LAB_141019fd5:
    local_38 = *(undefined8 *)(lVar2 + 0x308);
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_30 = 0;
    local_2c = 0;
    FUN_1411f9940(param_1 + 0x7a0,local_78,0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_68);
  }
  return;
}



// FUNCTION 14101a0c0 FUN_14101a0c0 body=140 status=ok
// SIG undefined FUN_14101a0c0(void)

void FUN_14101a0c0(undefined8 param_1)

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
  local_58[0] = &LAB_140ff1e80;
  FUN_14208c5d0(param_1,local_58);
  return;
}



// FUNCTION 14101a150 FUN_14101a150 body=293 status=ok
// SIG undefined FUN_14101a150(void)

void FUN_14101a150(longlong param_1,undefined4 param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [32];
  
  puVar4 = (undefined8 *)FUN_140f67ae0(param_1,&local_38);
  pfVar1 = (float *)(param_1 + 0x300);
  *(undefined8 *)pfVar1 = *puVar4;
  *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(puVar4 + 1);
  lVar5 = FUN_140f67a80(param_1);
  pfVar2 = (float *)(param_1 + 0x2f4);
  if (lVar5 == 0) {
    if (*(longlong *)(param_1 + 0x318) != 0) {
      *(undefined8 *)pfVar2 = *(undefined8 *)pfVar1;
      *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_1 + 0x308);
    }
    local_38 = *(undefined8 *)pfVar2;
    fVar6 = *(float *)(param_1 + 0x304) - *(float *)(param_1 + 0x2f8);
    fVar7 = *(float *)(param_1 + 0x308) - *(float *)(param_1 + 0x2fc);
    local_30 = *(undefined4 *)(param_1 + 0x2fc);
    fVar6 = SQRT((*pfVar1 - *pfVar2) * (*pfVar1 - *pfVar2) + fVar6 * fVar6 + fVar7 * fVar7);
    if (fVar6 <= 470.0) {
      fVar6 = 470.0;
    }
    puVar4 = (undefined8 *)FMath::VInterpConstantTo(local_28,&local_38,pfVar1,param_2,fVar6);
    *(undefined8 *)pfVar2 = *puVar4;
    uVar3 = *(undefined4 *)(puVar4 + 1);
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x308);
    *(undefined8 *)pfVar2 = *(undefined8 *)pfVar1;
  }
  *(undefined4 *)(param_1 + 0x2fc) = uVar3;
  UTTLLightningMoveObject::SetMoveVector(param_1,pfVar2);
  *(longlong *)(param_1 + 0x318) = lVar5;
  return;
}



// FUNCTION 14101a280 FUN_14101a280 body=1201 status=ok
// SIG undefined FUN_14101a280(void)

void FUN_14101a280(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint7 uVar11;
  longlong *plVar12;
  uint uVar13;
  uint *puVar14;
  char *pcVar15;
  longlong *plVar16;
  uint uVar17;
  int local_res10;
  int local_198;
  uint uStack_194;
  uint uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  longlong *local_178;
  int iStack_170;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  undefined8 uStack_158;
  longlong *local_150;
  int iStack_148;
  uint uStack_144;
  uint *local_140;
  uint uStack_138;
  uint uStack_134;
  undefined8 local_130;
  undefined1 local_128 [96];
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8 [104];
  longlong local_50;
  
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
    if ((bVar4) && (*(longlong *)(param_1 + 0x6e8) != 0)) {
      local_178 = (longlong *)(param_1 + 0x6f8);
      local_res10 = 0;
      uVar17 = *(uint *)(param_1 + 0x720);
      puVar1 = (uint *)(param_1 + 0x708);
      local_198 = 0;
      uStack_194 = 1;
      uStack_184 = 0;
      iStack_180 = 0;
      if (uVar17 != 0) {
        puVar14 = *(uint **)(param_1 + 0x718);
        if (*(uint **)(param_1 + 0x718) == (uint *)0x0) {
          puVar14 = puVar1;
        }
        uVar13 = *puVar14;
        iStack_180 = 0;
        local_198 = 0;
        while (uVar13 == 0) {
          lVar7 = (longlong)local_198;
          iStack_180 = iStack_180 + 0x20;
          iVar9 = local_198 + 1;
          bVar4 = (int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_198;
          local_198 = iVar9;
          if (bVar4) goto LAB_14101a3f2;
          uVar13 = puVar14[lVar7 + 1];
        }
        uStack_194 = uVar13 - 1 & uVar13 ^ uVar13;
        iVar9 = 0x1f;
        if (uStack_194 != 0) {
          for (; uStack_194 >> iVar9 == 0; iVar9 = iVar9 + -1) {
          }
        }
        if (uStack_194 == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - iVar9;
        }
        uStack_184 = (iStack_180 - iVar9) + 0x1f;
        if ((int)uVar17 < (int)uStack_184) {
LAB_14101a3f2:
          uStack_184 = uVar17;
        }
      }
      uStack_164 = *(uint *)(param_1 + 0x720);
      iStack_170 = local_198;
      uStack_16c = uStack_194;
      uStack_138 = 0xffffffff;
      uStack_134 = uStack_184;
      uStack_158 = CONCAT44(uStack_17c,iStack_180);
      uStack_168 = -1 << ((byte)uStack_164 & 0x1f);
      uVar13 = uStack_164 & 0xffffffe0;
      iStack_148 = local_198;
      uStack_144 = uStack_194;
      local_140 = puVar1;
      local_130 = uStack_158;
      local_150 = local_178;
      uStack_160 = uStack_138;
      uStack_15c = uStack_134;
      uVar10 = uStack_164;
      if (uStack_164 != uVar17) {
        puVar14 = *(uint **)(param_1 + 0x718);
        if (*(uint **)(param_1 + 0x718) == (uint *)0x0) {
          puVar14 = puVar1;
        }
        uVar10 = puVar14[(int)uStack_164 >> 5] & uStack_168;
        iVar9 = (int)uStack_164 >> 5;
        while (uVar10 == 0) {
          uVar13 = uVar13 + 0x20;
          if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
          goto LAB_14101a4c4;
          uVar10 = puVar14[(longlong)iVar9 + 1];
          uStack_168 = 0xffffffff;
          iVar9 = iVar9 + 1;
        }
        uVar10 = uVar10 - 1 & uVar10 ^ uVar10;
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
        uStack_164 = (uVar13 - iVar9) + 0x1f;
        uVar10 = uStack_164;
        if ((int)uVar17 < (int)uStack_164) {
LAB_14101a4c4:
          uStack_164 = uVar17;
          uVar10 = uVar17;
        }
      }
      while( true ) {
        if ((uStack_134 == uVar10) && (local_140 == puVar1)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if ((bVar4) && (local_150 == (longlong *)(param_1 + 0x6f8))) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) break;
        pcVar15 = (char *)((longlong)(int)uStack_134 * 0x78 + *local_150);
        if (*pcVar15 != '\0') {
          FUN_140fe5730(local_b8,pcVar15 + 8);
          local_50 = lVar6;
          FUN_140fe5730(local_128,local_b8);
          plVar16 = (longlong *)0x0;
          plVar12 = *(longlong **)(param_1 + 0x748);
          uVar17 = 0;
          iVar9 = 0;
          local_178 = (longlong *)0x0;
          uStack_16c = 0;
          plVar3 = plVar12 + *(int *)(param_1 + 0x750);
          local_c0 = local_50;
          for (; plVar12 != plVar3; plVar12 = plVar12 + 1) {
            lVar7 = *plVar12;
            if (lVar7 != 0) {
              lVar8 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if ((bVar4) && (*(longlong *)(lVar7 + 0xf0) == local_c8)) {
                cVar5 = FUN_140d01840(local_c0,lVar7);
                if (cVar5 != '\0') {
                  iStack_170 = iVar9 + 1;
                  if ((int)uVar17 < iStack_170) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (&local_178,iVar9);
                    plVar16 = local_178;
                    uVar17 = uStack_16c;
                  }
                  plVar16[iVar9] = *plVar12;
                  iVar9 = iStack_170;
                }
              }
            }
          }
          FUN_140fe63c0(local_128);
          lVar7 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x6e8),local_res10);
          if (lVar7 != 0) {
            lVar8 = FUN_14138e2b0();
            iVar2 = *(int *)(lVar8 + 0x90);
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < iVar2) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)iVar2 * 8) !=
                lVar8 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              uVar11 = (uint7)(int3)((uint)iVar2 >> 8);
              if (((iVar9 < 1) || (*pcVar15 == '\x04')) || (*pcVar15 == '\a')) {
                lVar8 = (ulonglong)uVar11 << 8;
              }
              else {
                lVar8 = CONCAT71(uVar11,1);
              }
              plVar3 = *(longlong **)(lVar7 + 0x318);
              if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0x278))(plVar3,lVar8);
              }
            }
          }
          local_res10 = local_res10 + 1;
          if (plVar16 != (longlong *)0x0) {
            FMemory::Free(plVar16);
          }
          FUN_140fe63c0(local_b8);
        }
        uStack_138 = uStack_138 & ~uStack_144;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_148);
      }
    }
  }
  return;
}



// FUNCTION 14101a740 FUN_14101a740 body=1185 status=ok
// SIG undefined FUN_14101a740(void)

void FUN_14101a740(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  uVar10 = 0;
  uVar12 = uVar10;
  if ((*(char *)(param_1 + 0x838) != '\x02') &&
     (lVar11 = *(longlong *)(param_1 + 0x808), lVar11 != 0)) {
    lVar3 = FUN_141404840();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar12 = *(ulonglong *)(lVar11 + 0x2298);
    }
  }
  if (*(longlong *)(param_1 + 0xc60) == 0) {
    return;
  }
  if (uVar12 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x6e8) == 0) {
    return;
  }
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  cVar2 = FUN_142d1a2c0(uVar12,0,local_68);
  if (cVar2 != '\0') {
    puVar4 = (undefined4 *)FLinearColor::ToFColor(local_68,local_res8,0);
    uVar5 = local_70;
    lVar11 = (longlong)(int)local_70;
    iVar7 = (int)local_70 + 1;
    local_70 = CONCAT44(local_70._4_4_,iVar7);
    if (local_70._4_4_ < iVar7) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_78,uVar5 & 0xffffffff);
    }
    *(undefined4 *)(local_78 + lVar11 * 4) = *puVar4;
  }
  cVar2 = FUN_142d1a310(uVar12,0,local_68);
  if (cVar2 != '\0') {
    puVar4 = (undefined4 *)FLinearColor::ToFColor(local_68,local_res8,0);
    uVar5 = local_70;
    lVar11 = (longlong)(int)local_70;
    iVar7 = (int)local_70 + 1;
    local_70 = CONCAT44(local_70._4_4_,iVar7);
    if (local_70._4_4_ < iVar7) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_78,uVar5 & 0xffffffff);
    }
    *(undefined4 *)(local_78 + lVar11 * 4) = *puVar4;
  }
  cVar2 = FUN_142d1a2c0(uVar12,1,local_68);
  if (cVar2 != '\0') {
    puVar4 = (undefined4 *)FLinearColor::ToFColor(local_68,local_res8,0);
    uVar5 = local_80;
    lVar11 = (longlong)(int)local_80;
    iVar7 = (int)local_80 + 1;
    local_80 = CONCAT44(local_80._4_4_,iVar7);
    if (local_80._4_4_ < iVar7) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_88,uVar5 & 0xffffffff);
    }
    *(undefined4 *)(local_88 + lVar11 * 4) = *puVar4;
  }
  cVar2 = FUN_142d1a310(uVar12,1,local_68);
  if (cVar2 != '\0') {
    puVar4 = (undefined4 *)FLinearColor::ToFColor(local_68,local_res8,0);
    uVar5 = local_80;
    lVar11 = (longlong)(int)local_80;
    iVar7 = (int)local_80 + 1;
    local_80 = CONCAT44(local_80._4_4_,iVar7);
    if (local_80._4_4_ < iVar7) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_88,uVar5 & 0xffffffff);
    }
    *(undefined4 *)(local_88 + lVar11 * 4) = *puVar4;
  }
  cVar2 = FUN_142d1a2c0(uVar12,2,local_68);
  if (cVar2 != '\0') {
    puVar4 = (undefined4 *)FLinearColor::ToFColor(local_68,local_res8,0);
    uVar5 = local_90;
    lVar11 = (longlong)(int)local_90;
    iVar7 = (int)local_90 + 1;
    local_90 = CONCAT44(local_90._4_4_,iVar7);
    if (local_90._4_4_ < iVar7) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_98,uVar5 & 0xffffffff);
    }
    *(undefined4 *)(local_98 + lVar11 * 4) = *puVar4;
  }
  cVar2 = FUN_142d1a310(uVar12,2,local_68);
  if (cVar2 != '\0') {
    puVar4 = (undefined4 *)FLinearColor::ToFColor(local_68,local_res8,0);
    uVar5 = local_90;
    lVar11 = (longlong)(int)local_90;
    iVar7 = (int)local_90 + 1;
    local_90 = CONCAT44(local_90._4_4_,iVar7);
    if (local_90._4_4_ < iVar7) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_98,uVar5 & 0xffffffff);
    }
    *(undefined4 *)(local_98 + lVar11 * 4) = *puVar4;
  }
  iVar7 = UCrowdFollowingComponent::GetCurrentPathElement(uVar12);
  lVar11 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x6e8),4);
  FUN_140f0bd70(*(undefined8 *)(param_1 + 0xc60),param_1,param_1 + 0x790,&local_78,&local_88,
                &local_98,0);
  uVar5 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (uVar5 == 0) {
LAB_14101aa64:
    uVar5 = uVar10;
  }
  else {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(uVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_14101aa64;
  }
  FUN_140f10f60(*(undefined8 *)(param_1 + 0xc60),uVar5);
  uVar5 = uVar10;
  if (0 < *(int *)(uVar12 + 0x2d0)) {
    do {
      lVar3 = *(longlong *)(uVar12 + 0x2c8);
      iVar9 = (int)uVar10;
      if (*(char *)(uVar5 + lVar3) == '\0') {
        uVar6 = FLinearColor::FLinearColor(local_58,lVar3 + 4 + (longlong)iVar9 * 0x34);
        FLinearColor::ToFColor(uVar6,local_res8,0);
        FUN_140f08c20(*(undefined8 *)(param_1 + 0xc60),uVar10);
        lVar3 = *(longlong *)(uVar12 + 0x2c8);
      }
      if (*(char *)(lVar3 + 1 + uVar5) == '\0') {
        uVar6 = FLinearColor::FLinearColor(local_48,lVar3 + 0x10 + (longlong)iVar9 * 0x34);
        FLinearColor::ToFColor(uVar6,local_res10,0);
        FUN_140f08e20(*(undefined8 *)(param_1 + 0xc60),uVar10);
      }
      uVar10 = (ulonglong)(iVar9 + 1U);
      uVar5 = uVar5 + 0x34;
    } while ((int)(iVar9 + 1U) < *(int *)(uVar12 + 0x2d0));
  }
  if (iVar7 == 0) {
    plVar8 = (longlong *)(*(longlong *)(param_1 + 0xc60) + 0x170);
    (**(code **)(*plVar8 + 0x38))(plVar8,0);
    if (lVar11 == 0) goto LAB_14101ab9a;
    uVar6 = 0;
  }
  else {
    if ((((iVar7 != 1) && (iVar7 != 2)) && (iVar7 != 3)) ||
       (plVar8 = (longlong *)(*(longlong *)(param_1 + 0xc60) + 0x170),
       (**(code **)(*plVar8 + 0x38))(plVar8,1), lVar11 == 0)) goto LAB_14101ab9a;
    uVar6 = 1;
  }
  (**(code **)(*(longlong *)(lVar11 + 0x170) + 0x38))((longlong *)(lVar11 + 0x170),uVar6);
LAB_14101ab9a:
  if (local_98 != 0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14101abf0 FUN_14101abf0 body=239 status=ok
// SIG undefined FUN_14101abf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14101abf0(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [80];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  local_c8 = param_1;
  uStack_c0 = param_2;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar1 + 1) = (undefined4)local_c8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = local_c8._4_4_;
    *(undefined4 *)(puVar1 + 2) = uStack_c0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_bc;
  }
  local_68[0] = &LAB_140ff1b40;
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



// FUNCTION 14101ace0 FUN_14101ace0 body=237 status=ok
// SIG undefined FUN_14101ace0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14101ace0(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [80];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  local_c8 = param_1;
  uStack_c0 = param_2;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar1 + 1) = (undefined4)local_c8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = local_c8._4_4_;
    *(undefined4 *)(puVar1 + 2) = uStack_c0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_bc;
  }
  local_68[0] = &LAB_140ff1eb0;
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



// FUNCTION 14101add0 FUN_14101add0 body=423 status=ok
// SIG undefined FUN_14101add0(void)

void FUN_14101add0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  bool bVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x38);
  iVar1 = 0;
  *(undefined1 *)(param_1 + 0x2b1) = param_2;
  if (lVar3 != 0) {
    lVar2 = UGSquadMemberWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      lVar2 = FUN_140fe3d70(lVar3);
      lVar3 = FUN_140eccca0(lVar3);
      iVar1 = 0;
      if ((lVar3 != 0) && (*(longlong **)(lVar3 + 0x10d8) != (longlong *)0x0)) {
        iVar1 = (**(code **)(**(longlong **)(lVar3 + 0x10d8) + 0x408))();
      }
      goto LAB_14101ae62;
    }
  }
  lVar2 = 0;
LAB_14101ae62:
  bVar6 = false;
  *(int *)(param_1 + 0x300) = iVar1;
  if (lVar2 != 0) {
    bVar6 = *(int *)(lVar2 + 0x460) <= *(int *)(param_1 + 0x2fc) - iVar1;
  }
  if ((*(char *)(param_1 + 0x2b0) == '\0') && (*(char *)(param_1 + 0x2b1) != '\0')) {
    if (*(char *)(param_1 + 0x2b1) != '\x01') {
      return;
    }
    plVar4 = *(longlong **)(param_1 + 0x198);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x278))(plVar4,0);
    }
    plVar4 = *(longlong **)(param_1 + 0x1d8);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x278))(plVar4,0);
    }
    plVar4 = *(longlong **)(param_1 + 0x1c8);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x278))(plVar4,0);
    }
    plVar4 = *(longlong **)(param_1 + 0x1d0);
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    uVar5 = 1;
  }
  else {
    FUN_142f0b170(param_1,0x42c80000);
    plVar4 = *(longlong **)(param_1 + 0x198);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x278))(plVar4,bVar6);
    }
    plVar4 = *(longlong **)(param_1 + 0x1d8);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x278))(plVar4,1);
    }
    plVar4 = *(longlong **)(param_1 + 0x1c8);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x278))(plVar4,1);
    }
    plVar4 = *(longlong **)(param_1 + 0x1d0);
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    uVar5 = 0;
  }
  (**(code **)(*plVar4 + 0x278))(plVar4,uVar5);
  return;
}



// FUNCTION 14101af80 FUN_14101af80 body=3474 status=ok
// SIG undefined FUN_14101af80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14101af80(char *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int iVar11;
  char *pcVar12;
  longlong *plVar13;
  char *pcVar14;
  int iVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  undefined1 auStack_368 [32];
  char *local_348;
  longlong local_340;
  char *local_338;
  uint local_330;
  uint local_32c;
  char *local_328;
  uint local_320;
  uint local_31c;
  char *local_318;
  uint local_310;
  uint local_30c;
  char *local_308;
  uint local_300;
  uint local_2fc;
  undefined1 local_2f8 [8];
  longlong *local_2f0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined8 local_2a0;
  longlong local_298;
  ulonglong local_290;
  undefined8 local_288;
  longlong local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  longlong local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  longlong local_240;
  ulonglong local_238;
  undefined8 local_230;
  longlong local_228;
  undefined8 local_220;
  longlong *local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined1 local_1f8 [64];
  longlong local_1b8;
  undefined4 local_1b0;
  longlong local_1a0 [4];
  longlong local_180;
  longlong local_160;
  undefined4 local_158;
  longlong local_148;
  longlong *local_138;
  int local_130;
  undefined1 local_118 [176];
  longlong local_68;
  int local_60;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_368;
  if (*(longlong *)(param_1 + 0x6e8) == 0) {
    return;
  }
  pcVar17 = (char *)0x0;
  iVar11 = 0;
  if (*(int *)(param_1 + 0x700) != *(int *)(param_1 + 0x72c)) {
    pcVar12 = *(char **)(param_1 + 0x738);
    if (*(char **)(param_1 + 0x738) == (char *)0x0) {
      pcVar12 = param_1 + 0x730;
    }
    iVar15 = *(int *)(pcVar12 + (ulonglong)(*(int *)(param_1 + 0x740) - 1U & 2) * 4);
    if (iVar15 != -1) {
      do {
        pcVar12 = (char *)((longlong)iVar15 * 0x78 + *(longlong *)(param_1 + 0x6f8));
        if (*pcVar12 == '\x02') {
          if (iVar15 != -1) goto LAB_14101b041;
          break;
        }
        iVar15 = *(int *)(pcVar12 + 0x70);
      } while (iVar15 != -1);
    }
  }
  pcVar12 = pcVar17;
LAB_14101b041:
  local_338 = param_1;
  lVar4 = FUN_142eb6a30(*(longlong *)(param_1 + 0x6e8),1);
  local_340 = lVar4;
  if (lVar4 != 0) {
    lVar5 = FUN_14138e2b0();
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
      pcVar12 = *(char **)(pcVar12 + 0x68);
      local_328 = pcVar12;
      pcVar6 = (char *)FUN_1411e2250(param_1 + 0x7a0,pcVar12);
      if (pcVar6 == (char *)0x0) {
LAB_14101b0ef:
        pcVar6 = pcVar17;
      }
      else {
        lVar4 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(pcVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(pcVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_14101b0ef;
      }
      local_308 = (char *)0x0;
      local_300 = 0;
      local_2fc = 0;
      plVar13 = (longlong *)**(ulonglong **)(param_1 + 0x768);
      uVar7 = (ulonglong)(int)(*(ulonglong **)(param_1 + 0x768))[1];
      pcVar14 = (char *)(uVar7 & 0x1fffffffffffffff);
      if (plVar13 + uVar7 < plVar13) {
        pcVar14 = pcVar17;
      }
      pcVar16 = pcVar17;
      pcVar19 = pcVar17;
      pcVar20 = pcVar17;
      pcVar18 = pcVar17;
      local_348 = pcVar14;
      if (pcVar14 != (char *)0x0) {
        do {
          lVar4 = *plVar13;
          if ((lVar4 == 0) || (*(char **)(lVar4 + 0xf0) != pcVar12)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            iVar11 = (int)pcVar16;
            local_300 = iVar11 + 1;
            if ((int)pcVar19 < (int)local_300) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_308,pcVar16);
              lVar4 = *plVar13;
              pcVar19 = (char *)(ulonglong)local_2fc;
              pcVar14 = local_348;
              pcVar20 = local_308;
            }
            pcVar16 = (char *)(ulonglong)local_300;
            *(longlong *)(pcVar20 + (longlong)iVar11 * 8) = lVar4;
            pcVar12 = local_328;
          }
          iVar11 = (int)pcVar16;
          plVar13 = plVar13 + 1;
          pcVar18 = pcVar18 + 1;
        } while (pcVar18 != pcVar14);
      }
      lVar4 = local_340;
      pcVar12 = (char *)((ulonglong)(pcVar20 + (longlong)iVar11 * 8 + (7 - (longlong)pcVar20)) >> 3)
      ;
      if (pcVar20 + (longlong)iVar11 * 8 < pcVar20) {
        pcVar12 = pcVar17;
      }
      pcVar14 = pcVar20;
      pcVar16 = pcVar17;
      if (pcVar12 != (char *)0x0) {
        do {
          pcVar19 = *(char **)pcVar14;
          if (pcVar19 != (char *)0x0) {
            if (pcVar6 == (char *)0x0) {
              if (pcVar19[0x109] != '\0') goto LAB_14101b1ed;
            }
            else if (pcVar6 == pcVar19) {
LAB_14101b1ed:
              FUN_141014a80(lVar4,pcVar19 + 0x30);
            }
          }
          pcVar16 = pcVar16 + 1;
          pcVar14 = pcVar14 + 8;
          param_1 = local_338;
        } while (pcVar16 != pcVar12);
      }
      if (pcVar20 != (char *)0x0) {
        FMemory::Free(pcVar20);
      }
    }
  }
  if (*(int *)(param_1 + 0x700) != *(int *)(param_1 + 0x72c)) {
    pcVar12 = *(char **)(param_1 + 0x738);
    if (*(char **)(param_1 + 0x738) == (char *)0x0) {
      pcVar12 = param_1 + 0x730;
    }
    iVar11 = *(int *)(pcVar12 + (ulonglong)(*(int *)(param_1 + 0x740) - 1U & 1) * 4);
    if (iVar11 != -1) {
      do {
        pcVar12 = (char *)((longlong)iVar11 * 0x78 + *(longlong *)(param_1 + 0x6f8));
        if (*pcVar12 == '\x01') {
          if (iVar11 != -1) goto LAB_14101b281;
          break;
        }
        iVar11 = *(int *)(pcVar12 + 0x70);
      } while (iVar11 != -1);
    }
  }
  pcVar12 = pcVar17;
LAB_14101b281:
  lVar4 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x6e8),0);
  iVar11 = 0;
  if (lVar4 != 0) {
    lVar5 = FUN_14138e2b0();
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
      lVar5 = *(longlong *)(pcVar12 + 0x68);
      local_340 = lVar5;
      pcVar12 = (char *)FUN_1411e2250(param_1 + 0x7a0,lVar5);
      if (pcVar12 == (char *)0x0) {
LAB_14101b328:
        local_348 = (char *)0x0;
      }
      else {
        local_348 = pcVar12;
        lVar8 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(pcVar12 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(pcVar12 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_14101b328;
      }
      local_328 = (char *)0x0;
      local_320 = 0;
      local_31c = 0;
      plVar13 = (longlong *)**(ulonglong **)(param_1 + 0x768);
      uVar7 = (ulonglong)(int)(*(ulonglong **)(param_1 + 0x768))[1];
      pcVar12 = (char *)(uVar7 & 0x1fffffffffffffff);
      if (plVar13 + uVar7 < plVar13) {
        pcVar12 = pcVar17;
      }
      pcVar6 = pcVar17;
      pcVar14 = pcVar17;
      pcVar16 = pcVar17;
      pcVar19 = pcVar17;
      iVar15 = iVar11;
      if (pcVar12 != (char *)0x0) {
        do {
          lVar8 = *plVar13;
          if ((lVar8 == 0) || (*(longlong *)(lVar8 + 0xf0) != lVar5)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            iVar15 = (int)pcVar6;
            local_320 = iVar15 + 1;
            if ((int)pcVar14 < (int)local_320) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_328,pcVar6);
              lVar8 = *plVar13;
              pcVar14 = (char *)(ulonglong)local_31c;
              pcVar16 = local_328;
            }
            pcVar6 = (char *)(ulonglong)local_320;
            *(longlong *)(pcVar16 + (longlong)iVar15 * 8) = lVar8;
            lVar5 = local_340;
          }
          iVar15 = (int)pcVar6;
          plVar13 = plVar13 + 1;
          pcVar19 = pcVar19 + 1;
        } while (pcVar19 != pcVar12);
      }
      pcVar12 = local_348;
      pcVar6 = (char *)((ulonglong)(pcVar16 + (longlong)iVar15 * 8 + (7 - (longlong)pcVar16)) >> 3);
      if (pcVar16 + (longlong)iVar15 * 8 < pcVar16) {
        pcVar6 = pcVar17;
      }
      pcVar14 = pcVar16;
      pcVar19 = pcVar17;
      if (pcVar6 != (char *)0x0) {
        do {
          pcVar14 = *(char **)pcVar16;
          if (pcVar14 != (char *)0x0) {
            if (pcVar12 == (char *)0x0) {
              if (pcVar14[0x109] != '\0') goto LAB_14101b41d;
            }
            else if (pcVar12 == pcVar14) {
LAB_14101b41d:
              plVar13 = *(longlong **)(lVar4 + 0x328);
              if (plVar13 != (longlong *)0x0) {
                (**(code **)(*plVar13 + 0x2b0))(plVar13,pcVar14 + 0x30,1,0);
              }
              plVar13 = *(longlong **)(lVar4 + 0x330);
              if (plVar13 != (longlong *)0x0) {
                (**(code **)(*plVar13 + 0x2b0))(plVar13,pcVar14 + 0x30,1);
              }
            }
          }
          pcVar16 = pcVar16 + 8;
          pcVar19 = pcVar19 + 1;
          pcVar14 = local_328;
          param_1 = local_338;
        } while (pcVar19 != pcVar6);
      }
      if (pcVar14 != (char *)0x0) {
        FMemory::Free(pcVar14);
      }
    }
  }
  if (*(int *)(param_1 + 0x700) != *(int *)(param_1 + 0x72c)) {
    pcVar12 = *(char **)(param_1 + 0x738);
    if (*(char **)(param_1 + 0x738) == (char *)0x0) {
      pcVar12 = param_1 + 0x730;
    }
    iVar15 = *(int *)(pcVar12 + (ulonglong)(*(int *)(param_1 + 0x740) - 1U & 3) * 4);
    if (iVar15 != -1) {
      do {
        pcVar12 = (char *)((longlong)iVar15 * 0x78 + *(longlong *)(param_1 + 0x6f8));
        if (*pcVar12 == '\x03') {
          if (iVar15 != -1) goto LAB_14101b4f1;
          break;
        }
        iVar15 = *(int *)(pcVar12 + 0x70);
      } while (iVar15 != -1);
    }
  }
  pcVar12 = pcVar17;
LAB_14101b4f1:
  lVar4 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x6e8),2);
  if (lVar4 == 0) goto LAB_14101b705;
  lVar5 = FUN_14138e2b0();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) goto LAB_14101b705;
  local_340 = *(longlong *)(pcVar12 + 0x68);
  pcVar12 = (char *)FUN_1411e2250(param_1 + 0x7a0,local_340);
  if (pcVar12 == (char *)0x0) {
LAB_14101b59d:
    local_348 = (char *)0x0;
  }
  else {
    local_348 = pcVar12;
    lVar5 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pcVar12 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pcVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14101b59d;
  }
  lVar5 = local_340;
  local_318 = (char *)0x0;
  local_310 = 0;
  local_30c = 0;
  plVar13 = (longlong *)**(ulonglong **)(param_1 + 0x768);
  uVar7 = (ulonglong)(int)(*(ulonglong **)(param_1 + 0x768))[1];
  pcVar12 = (char *)(uVar7 & 0x1fffffffffffffff);
  if (plVar13 + uVar7 < plVar13) {
    pcVar12 = pcVar17;
  }
  pcVar6 = pcVar17;
  pcVar14 = pcVar17;
  pcVar16 = pcVar17;
  pcVar19 = pcVar17;
  iVar15 = iVar11;
  if (pcVar12 != (char *)0x0) {
    do {
      lVar8 = *plVar13;
      if ((lVar8 == 0) || (*(longlong *)(lVar8 + 0xf0) != lVar5)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        iVar15 = (int)pcVar6;
        local_310 = iVar15 + 1;
        if ((int)pcVar14 < (int)local_310) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_318,pcVar6);
          lVar8 = *plVar13;
          pcVar14 = (char *)(ulonglong)local_30c;
          pcVar16 = local_318;
        }
        pcVar6 = (char *)(ulonglong)local_310;
        *(longlong *)(pcVar16 + (longlong)iVar15 * 8) = lVar8;
      }
      iVar15 = (int)pcVar6;
      plVar13 = plVar13 + 1;
      pcVar19 = pcVar19 + 1;
      param_1 = local_338;
    } while (pcVar19 != pcVar12);
  }
  pcVar12 = local_348;
  pcVar6 = (char *)((ulonglong)(pcVar16 + (longlong)iVar15 * 8 + (7 - (longlong)pcVar16)) >> 3);
  if (pcVar16 + (longlong)iVar15 * 8 < pcVar16) {
    pcVar6 = pcVar17;
  }
  pcVar14 = pcVar16;
  pcVar19 = pcVar17;
  if (pcVar6 != (char *)0x0) {
    do {
      pcVar14 = *(char **)pcVar16;
      if (pcVar14 != (char *)0x0) {
        if (pcVar12 == (char *)0x0) {
          if (pcVar14[0x109] != '\0') goto LAB_14101b69d;
        }
        else if (pcVar12 == pcVar14) {
LAB_14101b69d:
          plVar13 = *(longlong **)(lVar4 + 0x328);
          if (plVar13 != (longlong *)0x0) {
            (**(code **)(*plVar13 + 0x2b0))(plVar13,pcVar14 + 0x30,1,0);
          }
          plVar13 = *(longlong **)(lVar4 + 0x330);
          if (plVar13 != (longlong *)0x0) {
            (**(code **)(*plVar13 + 0x2b0))(plVar13,pcVar14 + 0x30,1);
          }
        }
      }
      pcVar16 = pcVar16 + 8;
      pcVar19 = pcVar19 + 1;
      pcVar14 = local_318;
      param_1 = local_338;
    } while (pcVar19 != pcVar6);
  }
  if (pcVar14 != (char *)0x0) {
    FMemory::Free(pcVar14);
  }
LAB_14101b705:
  iVar15 = 2;
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x594);
  pcVar12 = pcVar17;
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
      pcVar12 = *(char **)(lVar4 + 0x2a60);
    }
  }
  if (pcVar12 == (char *)0x0) {
    local_2d8 = 0;
    local_2c8 = 0;
    local_2c0 = 0;
    local_2a0 = 0;
    local_290 = 0;
    local_270 = 0;
    local_268 = 0;
    local_248 = 0;
    local_238 = 0;
    local_208 = 0;
    puVar9 = &local_2d8;
    local_2d0 = 0;
    local_2b8 = 0;
    local_2b0 = 0;
    local_2a8 = 0xffffffff;
    local_2a4 = 0;
    local_298 = 0;
    local_288 = 0;
    local_280 = 0;
    local_278 = 0;
    local_260 = 0;
    local_258 = 0;
    local_250 = 0xffffffff;
    local_24c = 0;
    local_240 = 0;
    local_230 = 0xffffffffffffffff;
    local_228 = 0;
    local_220 = 0;
    local_218 = (longlong *)0x0;
    local_210 = 0;
  }
  else {
    puVar9 = (undefined8 *)FUN_140fe5bb0(local_1f8,pcVar12 + 0x1f0);
    iVar15 = iVar11;
  }
  FUN_140fe59c0(local_118,puVar9);
  if (iVar15 != 0) {
    plVar13 = local_218;
    for (iVar15 = (int)local_210; iVar15 != 0; iVar15 = iVar15 + -1) {
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      plVar13 = plVar13 + 3;
    }
    if (local_218 != (longlong *)0x0) {
      FMemory::Free(local_218);
    }
    if (local_228 != 0) {
      FMemory::Free();
    }
    local_238 = local_238 & 0xffffffff00000000;
    if (local_240 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&local_280,0);
    if (local_260 != 0) {
      FMemory::Free();
    }
    if (local_280 != 0) {
      FMemory::Free();
    }
    local_290 = local_290 & 0xffffffff00000000;
    if (local_298 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_2d8);
  }
  plVar13 = local_138;
  iVar15 = local_130;
  if (pcVar12 != (char *)0x0) {
    for (; iVar15 != 0; iVar15 = iVar15 + -1) {
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      plVar13 = plVar13 + 3;
    }
    if (local_138 != (longlong *)0x0) {
      FMemory::Free(local_138);
    }
    if (local_148 != 0) {
      FMemory::Free();
    }
    local_158 = 0;
    if (local_160 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<int,FFastArraySerializerGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(local_1a0,0);
    if (local_180 != 0) {
      FMemory::Free();
    }
    if (local_1a0[0] != 0) {
      FMemory::Free();
    }
    local_1b0 = 0;
    if (local_1b8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_1f8);
  }
  pcVar12 = (char *)FUN_142eb6a30(*(undefined8 *)(param_1 + 0x6e8),5);
  local_348 = pcVar12;
  if (pcVar12 != (char *)0x0) {
    lVar4 = FUN_14138e2b0();
    if ((*(int *)(*(longlong *)((longlong)pcVar12 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)((longlong)pcVar12 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar10 = FUN_1404b03b0();
      FText::FText(local_2f8,uVar10);
      lVar4 = local_68 + (longlong)local_60 * 0x28;
      for (; local_68 != lVar4; local_68 = local_68 + 0x28) {
        lVar5 = *(longlong *)(local_68 + 0x10);
        if (lVar5 != 0) {
          if (*(int *)(param_1 + 0x700) != *(int *)(param_1 + 0x72c)) {
            pcVar6 = *(char **)(param_1 + 0x738);
            if (*(char **)(param_1 + 0x738) == (char *)0x0) {
              pcVar6 = param_1 + 0x730;
            }
            iVar15 = *(int *)(pcVar6 + (ulonglong)(*(int *)(param_1 + 0x740) - 1U & 6) * 4);
            if (iVar15 != -1) {
              do {
                pcVar6 = (char *)((longlong)iVar15 * 0x78 + *(longlong *)(param_1 + 0x6f8));
                if (*pcVar6 == '\x06') {
                  if (iVar15 != -1) goto LAB_14101ba61;
                  break;
                }
                iVar15 = *(int *)(pcVar6 + 0x70);
              } while (iVar15 != -1);
            }
          }
          pcVar6 = pcVar17;
LAB_14101ba61:
          if (*(longlong *)(lVar5 + 0xf0) == *(longlong *)(pcVar6 + 0x68)) {
            FText::operator=(local_2f8,lVar5 + 0x30);
            break;
          }
        }
      }
      cVar3 = FText::IsEmpty(local_2f8);
      if (cVar3 != '\0') {
        if (*(int *)(param_1 + 0x700) != *(int *)(param_1 + 0x72c)) {
          pcVar12 = *(char **)(param_1 + 0x738);
          if (*(char **)(param_1 + 0x738) == (char *)0x0) {
            pcVar12 = param_1 + 0x730;
          }
          iVar15 = *(int *)(pcVar12 + (ulonglong)(*(int *)(param_1 + 0x740) - 1U & 6) * 4);
          if (iVar15 != -1) {
            do {
              pcVar12 = (char *)((longlong)iVar15 * 0x78 + *(longlong *)(param_1 + 0x6f8));
              if (*pcVar12 == '\x06') {
                if (iVar15 != -1) goto LAB_14101bb02;
                break;
              }
              iVar15 = *(int *)(pcVar12 + 0x70);
            } while (iVar15 != -1);
          }
        }
        pcVar12 = pcVar17;
LAB_14101bb02:
        lVar4 = *(longlong *)(pcVar12 + 0x68);
        local_340 = lVar4;
        pcVar12 = (char *)FUN_1411e2250(param_1 + 0x7a0,lVar4);
        if ((pcVar12 == (char *)0x0) || (cVar3 = FUN_140cdf510(pcVar12), cVar3 == '\0')) {
          pcVar12 = pcVar17;
        }
        local_338 = (char *)0x0;
        local_330 = 0;
        local_32c = 0;
        plVar13 = (longlong *)**(ulonglong **)(param_1 + 0x768);
        uVar7 = (ulonglong)(int)(*(ulonglong **)(param_1 + 0x768))[1];
        pcVar6 = (char *)(uVar7 & 0x1fffffffffffffff);
        if (plVar13 + uVar7 < plVar13) {
          pcVar6 = pcVar17;
        }
        pcVar14 = pcVar17;
        pcVar16 = pcVar17;
        pcVar19 = pcVar17;
        pcVar20 = pcVar17;
        if (pcVar6 != (char *)0x0) {
          do {
            lVar5 = *plVar13;
            if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0xf0) != lVar4)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              iVar11 = (int)pcVar14;
              local_330 = iVar11 + 1;
              if ((int)pcVar16 < (int)local_330) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (&local_338,pcVar14);
                lVar5 = *plVar13;
                pcVar16 = (char *)(ulonglong)local_32c;
                pcVar19 = local_338;
              }
              pcVar14 = (char *)(ulonglong)local_330;
              *(longlong *)(pcVar19 + (longlong)iVar11 * 8) = lVar5;
              lVar4 = local_340;
            }
            iVar11 = (int)pcVar14;
            plVar13 = plVar13 + 1;
            pcVar20 = pcVar20 + 1;
          } while (pcVar20 != pcVar6);
        }
        pcVar6 = (char *)((ulonglong)(pcVar19 + (longlong)iVar11 * 8 + (7 - (longlong)pcVar19)) >> 3
                         );
        if (pcVar19 + (longlong)iVar11 * 8 < pcVar19) {
          pcVar6 = pcVar17;
        }
        pcVar14 = pcVar19;
        if (pcVar6 != (char *)0x0) {
          do {
            pcVar16 = *(char **)pcVar14;
            if (pcVar16 != (char *)0x0) {
              if (pcVar12 == (char *)0x0) {
                if (pcVar16[0x109] != '\0') goto LAB_14101bc13;
              }
              else if (pcVar12 == pcVar16) {
LAB_14101bc13:
                FText::operator=(local_2f8,pcVar16 + 0x30);
              }
            }
            pcVar14 = pcVar14 + 8;
            pcVar17 = pcVar17 + 1;
          } while (pcVar17 != pcVar6);
        }
        pcVar12 = local_348;
        if (pcVar19 != (char *)0x0) {
          FMemory::Free(pcVar19);
          pcVar12 = local_348;
        }
      }
      plVar13 = *(longlong **)((longlong)pcVar12 + 0x328);
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x2b0))(plVar13,local_2f8,1,0);
      }
      plVar13 = *(longlong **)((longlong)pcVar12 + 0x330);
      if (plVar13 != (longlong *)0x0) {
        (**(code **)(*plVar13 + 0x2b0))(plVar13,local_2f8,1,0);
      }
      if (local_2f0 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_2f0 + 1;
        lVar4 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_2f0)(local_2f0);
          LOCK();
          piVar1 = (int *)((longlong)local_2f0 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_2f0 + 8))(local_2f0,1);
          }
        }
      }
    }
  }
  FUN_140fe64f0(local_118);
  return;
}



// FUNCTION 14101bd20 FUN_14101bd20 body=279 status=ok
// SIG undefined FUN_14101bd20(void)

void FUN_14101bd20(longlong param_1,undefined1 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined7 uStack_5f;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x594);
  if (lVar2 != 0) {
    lVar3 = FUN_1413ffe00();
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
      uVar4 = *(undefined8 *)(lVar2 + 0x2a60);
      goto LAB_14101bd90;
    }
  }
  lVar2 = 0;
  uVar4 = 0;
LAB_14101bd90:
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_28 = 0;
  local_18 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x30,local_48);
  if (puVar5 != (undefined8 *)0x0) {
    local_78 = (undefined4)param_1;
    uStack_74 = (undefined4)((ulonglong)param_1 >> 0x20);
    uStack_70 = (undefined4)uVar4;
    uStack_6c = (undefined4)((ulonglong)uVar4 >> 0x20);
    *puVar5 = &PTR_FUN_14465fbf8;
    *(undefined4 *)(puVar5 + 1) = local_78;
    *(undefined4 *)((longlong)puVar5 + 0xc) = uStack_74;
    *(undefined4 *)(puVar5 + 2) = uStack_70;
    *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_6c;
    puVar5[3] = lVar2;
    puVar5[4] = CONCAT71(uStack_5f,param_2);
    *(undefined4 *)(puVar5 + 5) = local_res8;
    *(undefined4 *)((longlong)puVar5 + 0x2c) = local_resc;
  }
  local_58[0] = &LAB_140ff1d10;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 14101be40 FUN_14101be40 body=653 status=ok
// SIG undefined FUN_14101be40(void)

void FUN_14101be40(longlong param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong local_38 [4];
  
  if (*(char *)(param_1 + 0x314) != '\0') {
    plVar10 = (longlong *)0x0;
    uVar7 = 0;
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x280));
    lVar5 = *(longlong *)(param_1 + 0x270);
    plVar6 = plVar10;
    if (lVar5 != 0) {
      plVar6 = *(longlong **)(param_1 + 0x278);
    }
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x280));
    if (lVar5 == 0) {
      plVar6 = plVar10;
    }
    if (plVar6 != (longlong *)0x0) {
      iVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar5 = (longlong)iVar3;
      plVar8 = plVar10;
      plVar6 = plVar10;
      if (3 < lVar5) {
        lVar9 = (lVar5 - 4U >> 2) + 1;
        plVar6 = (longlong *)(lVar9 * 4);
        pfVar4 = (float *)(param_1 + 0x228);
        do {
          uVar7 = (uint)plVar8 + 1;
          if (pfVar4[-10] < 1e-08) {
            uVar7 = (uint)plVar8;
          }
          uVar2 = uVar7 + 1;
          if (*pfVar4 < 1e-08) {
            uVar2 = uVar7;
          }
          uVar7 = uVar2 + 1;
          if (pfVar4[10] < 1e-08) {
            uVar7 = uVar2;
          }
          uVar2 = uVar7 + 1;
          if (pfVar4[0x14] < 1e-08) {
            uVar2 = uVar7;
          }
          plVar8 = (longlong *)(ulonglong)uVar2;
          lVar9 = lVar9 + -1;
          pfVar4 = pfVar4 + 0x28;
        } while (lVar9 != 0);
      }
      uVar7 = (uint)plVar8;
      if ((longlong)plVar6 < lVar5) {
        lVar5 = lVar5 - (longlong)plVar6;
        pfVar4 = (float *)(param_1 + (longlong)plVar6 * 0x28 + 0x200);
        do {
          fVar1 = *pfVar4;
          pfVar4 = pfVar4 + 10;
          uVar7 = (uint)plVar8 + 1;
          if (fVar1 < 1e-08) {
            uVar7 = (uint)plVar8;
          }
          plVar8 = (longlong *)(ulonglong)uVar7;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
    }
    *(uint *)(param_1 + 0x304) = uVar7;
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x280));
    lVar5 = *(longlong *)(param_1 + 0x270);
    plVar6 = plVar10;
    if (lVar5 != 0) {
      plVar6 = *(longlong **)(param_1 + 0x278);
    }
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x280));
    if (lVar5 == 0) {
      plVar6 = plVar10;
    }
    if (plVar6 != (longlong *)0x0) {
      iVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
      uVar7 = iVar3 - 1;
      lVar5 = (longlong)(int)uVar7;
      if (-1 < (int)uVar7) {
        pfVar4 = (float *)(param_1 + lVar5 * 0x28 + 0x200);
        do {
          if (1e-08 < *pfVar4 || *pfVar4 == 1e-08) {
            if ((int)uVar7 < 0) {
              return;
            }
            if (uVar7 == *(uint *)(param_1 + 0x318)) {
              return;
            }
            if (*(char *)(param_1 + 0x2b0) == '\x01') {
              FUN_140ff48d0(param_1,uVar7);
              local_38[0] = 0;
              local_38[1] = 0xd;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
              FGenericPlatformString::Convert<char,wchar_t>(local_38[0],0xd,"enterFocused",0xd,0x3f)
              ;
              if ((uVar7 < 3) &&
                 (lVar5 = *(longlong *)(param_1 + 0x1e8 + (longlong)(int)uVar7 * 0x28), lVar5 != 0))
              {
                FUN_142088910(lVar5,local_38);
              }
              if (local_38[0] != 0) {
                FMemory::Free();
              }
              if (*(char *)(param_1 + 0x2fa) != '\0') {
                *(undefined1 *)(param_1 + 0x2fa) = 0;
                FUN_141017a70(param_1,1);
              }
            }
            *(undefined2 *)(param_1 + 0x324) = 0x100;
            return;
          }
          uVar7 = uVar7 - 1;
          pfVar4 = pfVar4 + -10;
          lVar5 = lVar5 + -1;
        } while (-1 < lVar5);
      }
    }
  }
  return;
}



// FUNCTION 14101c0d0 FUN_14101c0d0 body=809 status=ok
// SIG undefined FUN_14101c0d0(void)

void FUN_14101c0d0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 local_res8;
  undefined4 local_res10;
  undefined4 local_res14;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong *local_a0;
  undefined4 local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  if ((((*(int **)(param_1 + 0x360) != (int *)0x0) && (*(longlong *)(param_1 + 0x310) != 0)) &&
      (**(int **)(param_1 + 0x360) != -1)) &&
     (cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x240), cVar1 != '\0')) {
    lVar4 = *(longlong *)(param_1 + 0x308);
    if ((lVar4 != 0) && (local_res8 = 0, *(longlong *)(lVar4 + 0xa0) != 0)) {
      local_c8 = (longlong *)0x0;
      local_c0 = 0;
      plVar2 = (longlong *)
               FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x310),param_1 + 0x350,0,6,&local_c8);
      plVar5 = local_c8;
      for (iVar6 = (int)local_c0; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        plVar5 = plVar5 + 2;
      }
      if (local_c8 != (longlong *)0x0) {
        FMemory::Free(local_c8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x278))(plVar2,0);
        FWeakObjectPtr::operator=(&local_res8,param_1);
        local_a8 = (undefined4)local_res8;
        local_a4 = local_res8._4_4_;
        local_98 = **(undefined4 **)(param_1 + 0x360);
        local_a0 = plVar2;
        FString::FString(&local_90,*(undefined4 **)(param_1 + 0x360) + 2);
        FWeakObjectPtr::operator=(&local_res10,param_1);
        local_48 = 0;
        local_38 = 0;
        puVar3 = (undefined8 *)FUN_140438ef0(0x40,local_68);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = &PTR_FUN_14465fc10;
          *(undefined4 *)(puVar3 + 1) = local_a8;
          *(undefined4 *)((longlong)puVar3 + 0xc) = local_a4;
          *(undefined4 *)(puVar3 + 3) = local_98;
          puVar3[2] = local_a0;
          puVar3[4] = local_90;
          *(undefined4 *)(puVar3 + 5) = local_88;
          *(undefined4 *)((longlong)puVar3 + 0x2c) = local_84;
          puVar3[6] = lVar4;
          *(undefined4 *)(puVar3 + 7) = local_res10;
          *(undefined4 *)((longlong)puVar3 + 0x3c) = local_res14;
          local_90 = 0;
        }
        local_78[0] = &LAB_140ff1a90;
        if (local_90 != 0) {
          FMemory::Free(local_90);
        }
        FUN_14204c280(local_78);
        return;
      }
    }
    local_c8 = (longlong *)0x0;
    local_c0 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
    FGenericPlatformString::Memcpy(local_c8,L"text",10);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x310),&local_c8);
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_b8 = 0;
    local_b0 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    FGenericPlatformString::Memcpy(local_b8,L"emptyText",0x14);
    local_c8 = (longlong *)0x0;
    local_c0 = 0;
    plVar2 = (longlong *)FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x310),&local_b8,0,6,&local_c8);
    plVar5 = local_c8;
    for (iVar6 = (int)local_c0; iVar6 != 0; iVar6 = iVar6 + -1) {
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
    if (plVar2 != (longlong *)0x0) {
      if (*(longlong *)(param_1 + 0x308) == 0) {
        lVar4 = FUN_1404b03b0();
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x308) + 0x30;
      }
      (**(code **)(*plVar2 + 0x2b0))(plVar2,lVar4,1,0);
    }
  }
  return;
}



// FUNCTION 14101c400 FUN_14101c400 body=174 status=ok
// SIG undefined FUN_14101c400(void)

void FUN_14101c400(undefined8 param_1,longlong param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  float fVar4;
  
  if (param_2 != 0) {
    iVar1 = *param_3;
    fVar4 = (float)(100 - param_3[1]) * 0.01;
    if ((0.0 < fVar4) || (*(float *)(param_2 + 0x1c4) <= 0.0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (iVar1 < 2) {
      if (fVar4 <= 0.0) {
        cVar3 = !bVar2;
      }
      else {
        cVar3 = '\x03';
      }
    }
    else {
      cVar3 = '\x02';
    }
    if (cVar3 != *(char *)(param_2 + 0x1c8)) {
      FUN_141017130(param_2);
    }
    if (fVar4 != *(float *)(param_2 + 0x1c4)) {
      FUN_141014570(param_2,fVar4);
    }
    if (iVar1 != *(int *)(param_2 + 0x1c0)) {
      FUN_141016b60(param_2,iVar1);
    }
  }
  return;
}



// FUNCTION 14101c4b0 FUN_14101c4b0 body=299 status=ok
// SIG undefined FUN_14101c4b0(void)

void FUN_14101c4b0(longlong param_1,char param_2,char param_3)

{
  longlong local_18 [2];
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (param_2 == '\x03') {
    if (param_3 != '\0') {
      return;
    }
  }
  else if ((param_2 != '\x04') && (param_2 != '\x06')) {
    return;
  }
  if (*(longlong *)(param_1 + 0x728) != 0) {
    local_18[0] = 0;
    local_18[1] = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"initialization",0x1e);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x728),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  if (param_3 == '\0') {
    if (*(longlong *)(param_1 + 0x5f0) != 0) {
      local_18[0] = 0;
      local_18[1] = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"reinitializeAnim",0x22);
      FUN_142088910(*(undefined8 *)(param_1 + 0x5f0),local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    return;
  }
  *(undefined1 *)(param_1 + 0x5f9) = 1;
  return;
}



// FUNCTION 14101c5e0 FUN_14101c5e0 body=1024 status=ok
// SIG undefined FUN_14101c5e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14101c5e0(longlong param_1)

{
  undefined **ppuVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined ***pppuVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  undefined **local_b0;
  undefined **local_a8;
  longlong local_a0;
  int local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined **local_88 [2];
  undefined1 local_78 [16];
  char local_68;
  undefined **local_60 [2];
  undefined1 local_50 [16];
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar9 = param_1 + 0x670;
  local_b8 = local_b8 & 0xffffffff00000000;
  lVar6 = FUN_1405ec200(lVar9);
  if (lVar6 != 0) {
    FUN_140680770();
  }
  lVar6 = param_1 + 0x648;
  lVar7 = FUN_1405ec200(lVar6);
  if (lVar7 != 0) {
    FUN_1406804e0();
  }
  FKey::operator=(param_1 + 0x6a0,&DAT_1469e9b68);
  *(undefined1 *)(param_1 + 0x6b8) = 0;
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  if (lVar7 != 0) {
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
    if ((bVar2) && (lVar7 = *(longlong *)(lVar7 + 0x5b8), lVar7 != 0)) {
      lVar8 = FUN_140681420();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar8 = FWeakObjectPtr::Get(lVar9);
        if (lVar8 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != *(int *)(param_1 + 0x678)) &&
             (local_b8 = 0, *(longlong *)(param_1 + 0x680) != 0)) {
            lVar8 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar9,lVar8);
            if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(param_1 + 0x678) = DAT_1464b56f4;
            }
            lVar8 = FWeakObjectPtr::Get(lVar9);
            if (lVar8 != 0) goto LAB_14101c771;
          }
LAB_14101c7a7:
          lVar8 = 0;
        }
        else {
LAB_14101c771:
          lVar9 = FUN_140680770();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_14101c7a7;
        }
        lVar9 = FUN_14067a470(lVar7,lVar8);
        if (lVar9 != 0) {
          bVar4 = true;
          bVar2 = false;
          lVar7 = FWeakObjectPtr::Get(lVar6);
          if (lVar7 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != *(int *)(param_1 + 0x650)) &&
               (local_b8 = 0, *(longlong *)(param_1 + 0x658) != 0)) {
              lVar7 = FUN_141796df0();
              FWeakObjectPtr::operator=(lVar6,lVar7);
              if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                *(int *)(param_1 + 0x650) = DAT_1464b56f4;
              }
              lVar7 = FWeakObjectPtr::Get(lVar6);
              if (lVar7 != 0) goto LAB_14101c838;
            }
LAB_14101c870:
            lVar7 = 0;
          }
          else {
LAB_14101c838:
            lVar6 = FUN_1406804e0();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) goto LAB_14101c870;
          }
          pppuVar10 = (undefined ***)FUN_140679a20(lVar9,local_60,lVar7);
          goto LAB_14101c895;
        }
      }
    }
  }
  bVar4 = false;
  bVar2 = true;
  local_68 = '\0';
  pppuVar10 = local_88;
LAB_14101c895:
  bVar3 = false;
  local_90 = 0;
  if (*(char *)(pppuVar10 + 4) != '\0') {
    iVar12 = *(int *)(pppuVar10 + 3);
    local_a8 = pppuVar10[1];
    ppuVar1 = pppuVar10[2];
    local_b0 = &PTR__scalar_deleting_destructor__1440385f8;
    local_a0 = 0;
    local_98 = iVar12;
    if (iVar12 == 0) {
      local_94 = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_a0,iVar12,0);
      lVar9 = (longlong)ppuVar1 - local_a0;
      puVar11 = (undefined8 *)(local_a0 + 8);
      do {
        puVar11[-1] = *(undefined8 *)(lVar9 + -8 + (longlong)puVar11);
        *puVar11 = *(undefined8 *)(lVar9 + (longlong)puVar11);
        lVar6 = *(longlong *)(lVar9 + 8 + (longlong)puVar11);
        puVar11[1] = lVar6;
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
        }
        puVar11 = puVar11 + 3;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    bVar3 = true;
  }
  if ((bVar2) && (local_68 != '\0')) {
    local_68 = '\0';
    local_88[0] = &PTR__scalar_deleting_destructor__1440385f8;
    TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
    ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(local_78);
  }
  if ((bVar4) && (local_40 != '\0')) {
    local_40 = '\0';
    local_60[0] = &PTR__scalar_deleting_destructor__1440385f8;
    TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
    ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(local_50);
  }
  if (bVar3) {
    lVar9 = local_a0 + (longlong)local_98 * 0x18;
    for (lVar6 = local_a0; lVar6 != lVar9; lVar6 = lVar6 + 0x18) {
      cVar5 = FKey::IsGamepadKey(lVar6);
      if (cVar5 == '\0') {
        FKey::operator=(param_1 + 0x6a0,lVar6);
        *(undefined1 *)(param_1 + 0x6b8) = 1;
        break;
      }
    }
    local_90 = 0;
    local_b0 = &PTR__scalar_deleting_destructor__1440385f8;
    TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
    ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(&local_a0);
  }
  return;
}



// FUNCTION 14101c9e0 FUN_14101c9e0 body=779 status=ok
// SIG undefined FUN_14101c9e0(void)

void FUN_14101c9e0(longlong param_1,byte param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined1 uVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  longlong local_18 [2];
  
  bVar1 = *(byte *)(param_1 + 0x2f1);
  if (param_2 == bVar1) {
    return;
  }
  if (param_2 == 1) {
    if (((byte)(bVar1 - 3) < 2) || (bVar1 == 0)) {
      local_18[0] = 0;
      local_18[1] = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"centeredName",0x1a);
      FUN_142088cf0(param_1,local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0x250) == 0) goto LAB_14101cccf;
    local_18[0] = 0;
    local_18[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    uVar5 = 10;
    pwVar4 = L"name";
LAB_14101cca8:
    FGenericPlatformString::Memcpy(local_18[0],pwVar4,uVar5);
    uVar5 = *(undefined8 *)(param_1 + 0x250);
  }
  else {
    if (param_2 == 2) {
      if (((byte)(bVar1 - 3) < 2) || (bVar1 == 0)) {
        local_18[0] = 0;
        local_18[1] = 0xd;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
        FGenericPlatformString::Memcpy(local_18[0],L"centeredName",0x1a);
        FUN_142088cf0(param_1,local_18);
        if (local_18[0] != 0) {
          FMemory::Free();
        }
      }
      if (*(longlong *)(param_1 + 0x250) == 0) goto LAB_14101cccf;
      local_18[0] = 0;
      local_18[1] = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      uVar5 = 0xc;
      pwVar4 = L"arrow";
      goto LAB_14101cca8;
    }
    if (param_2 != 3) {
      if (param_2 == 4) {
        if (bVar1 < 3) {
          local_18[0] = 0;
          local_18[1] = 6;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
          FGenericPlatformString::Memcpy(local_18[0],L"state",0xc);
          FUN_142088cf0(param_1,local_18);
          if (local_18[0] != 0) {
            FMemory::Free();
          }
        }
        if (*(longlong *)(param_1 + 0x278) != 0) {
          local_18[0] = 0;
          local_18[1] = 7;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
          FGenericPlatformString::Memcpy(local_18[0],L"center",0xe);
          FUN_142088cf0(*(undefined8 *)(param_1 + 0x278),local_18);
          if (local_18[0] != 0) {
            FMemory::Free();
          }
        }
        if (*(longlong **)(param_1 + 0x2a0) != (longlong *)0x0) {
          lVar2 = **(longlong **)(param_1 + 0x2a0);
          uVar3 = FUN_140f70280(param_1);
          (**(code **)(lVar2 + 0x278))(*(undefined8 *)(param_1 + 0x2a0),uVar3);
        }
      }
      goto LAB_14101cccf;
    }
    if (bVar1 < 3) {
      local_18[0] = 0;
      local_18[1] = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"state",0xc);
      FUN_142088cf0(param_1,local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0x278) == 0) goto LAB_14101cccf;
    local_18[0] = 0;
    local_18[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"left",10);
    uVar5 = *(undefined8 *)(param_1 + 0x278);
  }
  FUN_142088cf0(uVar5,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
LAB_14101cccf:
  *(byte *)(param_1 + 0x2f1) = param_2;
  return;
}



// FUNCTION 14101ccf0 FUN_14101ccf0 body=301 status=ok
// SIG undefined FUN_14101ccf0(void)

void FUN_14101ccf0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x2d8));
  lVar1 = *(longlong *)(param_1 + 0x2e0);
  if (lVar1 == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = *(longlong **)(param_1 + 0x2e8);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x2d8));
  if (lVar1 == 0) {
    return;
  }
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  cVar3 = (**(code **)(*plVar6 + 0x48))(plVar6);
  cVar4 = (**(code **)(*plVar6 + 0x50))(plVar6);
  if ((byte)(cVar3 - 3U) < 2) {
    if (*(char *)(param_1 + 0x2f0) == '\x03') {
      return;
    }
    *(undefined1 *)(param_1 + 0x2f0) = 3;
  }
  else if (cVar3 == '\0') {
    if (*(char *)(param_1 + 0x2f0) == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x2f0) = 0;
  }
  else if (cVar4 == '\0') {
    if (*(char *)(param_1 + 0x2f0) == '\x01') {
      return;
    }
    *(undefined1 *)(param_1 + 0x2f0) = 1;
  }
  else {
    if (cVar4 != '\x01') {
      return;
    }
    lVar1 = *(longlong *)(param_1 + 0x38);
    if (lVar1 == 0) {
      return;
    }
    lVar5 = UGSquadMemberWidget::GetPrivateStaticClass();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return;
    }
    if (*(char *)(param_1 + 0x2f0) == '\x02') {
      return;
    }
    *(undefined1 *)(param_1 + 0x2f0) = 2;
  }
  FUN_141012a10(param_1);
  return;
}



// FUNCTION 14101ce20 FUN_14101ce20 body=346 status=ok
// SIG undefined FUN_14101ce20(void)

void FUN_14101ce20(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  wchar_t *pwVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong local_28 [2];
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x280));
  lVar1 = *(longlong *)(param_1 + 0x270);
  plVar4 = (longlong *)0x0;
  if (lVar1 != 0) {
    plVar4 = *(longlong **)(param_1 + 0x278);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x280));
  if (lVar1 == 0) {
    plVar4 = (longlong *)0x0;
  }
  if (plVar4 != (longlong *)0x0) {
    iVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(char *)(param_1 + 0x2b0) == '\0') && (*(char *)(param_1 + 0x2b1) == '\x01')) {
      iVar2 = 0;
    }
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
      local_28[0] = 0;
      if (iVar2 < 1) {
        local_28[1] = 7;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
        uVar5 = 0xe;
        pwVar3 = L"noBars";
      }
      else if (iVar2 == 1) {
        local_28[1] = 7;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
        uVar5 = 0xe;
        pwVar3 = L"oneBar";
      }
      else if (iVar2 == 2) {
        local_28[1] = 8;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
        uVar5 = 0x10;
        pwVar3 = L"twoBars";
      }
      else {
        local_28[1] = 10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
        uVar5 = 0x14;
        pwVar3 = L"threeBars";
      }
      FGenericPlatformString::Memcpy(local_28[0],pwVar3,uVar5);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x1a8),local_28);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
    }
  }
  *(undefined1 *)(param_1 + 0x324) = 1;
  return;
}



// FUNCTION 14101cf80 FUN_14101cf80 body=642 status=ok
// SIG undefined FUN_14101cf80(void)

void FUN_14101cf80(longlong param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  
  if ((*(longlong *)(param_1 + 400) != 0) && (*(char *)(param_1 + 0x1a0) != '\0')) {
    uVar10 = 0;
    local_48 = 0;
    local_40 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"fill",10);
    local_58 = (longlong *)0x0;
    local_50 = 0;
    lVar3 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 400),&local_48,0,6,&local_58);
    plVar6 = local_58;
    for (iVar9 = (int)local_50; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (lVar3 != 0) {
      if (param_2 <= 0.0) {
        param_2 = 0.0;
      }
      fVar1 = *(float *)(param_1 + 0x1a4);
      AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x180));
      iVar9 = *(int *)(param_1 + 0x178);
      iVar5 = (int)((float)iVar9 * (param_2 / fVar1));
      if (iVar5 < iVar9) {
        lVar3 = (longlong)iVar5;
        lVar7 = lVar3 << 5;
LAB_14101d0b7:
        if (((lVar3 < 0) || (*(int *)(param_1 + 0x178) <= iVar5)) ||
           (lVar2 = *(longlong *)(param_1 + 0x170), *(char *)(lVar7 + 0x18 + lVar2) == '\0'))
        goto LAB_14101d0d2;
        if (*(longlong *)(lVar7 + 0x10 + lVar2) != 0) {
          local_48 = 0;
          local_40 = 3;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
          FGenericPlatformString::Memcpy(local_48,&DAT_14465b350,6);
          FUN_142088910(*(undefined8 *)(lVar7 + 0x10 + lVar2),&local_48);
          if (local_48 != 0) {
            FMemory::Free();
          }
        }
        uVar4 = (ulonglong)*(int *)(lVar7 + 8 + lVar2);
        plVar6 = *(longlong **)(lVar7 + lVar2);
        uVar8 = uVar4 & 0x1fffffffffffffff;
        if (plVar6 + uVar4 < plVar6) {
          uVar8 = uVar10;
        }
        if (uVar8 != 0) {
          do {
            lVar3 = *plVar6;
            if (lVar3 != 0) {
              local_48 = 0;
              local_40 = 4;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
              FGenericPlatformString::Memcpy(local_48,&DAT_14465b368,8);
              FUN_142088cf0(lVar3);
              if (local_48 != 0) {
                FMemory::Free();
              }
            }
            plVar6 = plVar6 + 1;
            uVar10 = uVar10 + 1;
          } while (uVar10 != uVar8);
        }
        *(undefined1 *)(lVar7 + 0x18 + lVar2) = 0;
      }
LAB_14101d1cb:
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x180));
    }
  }
  return;
LAB_14101d0d2:
  iVar5 = iVar5 + 1;
  lVar3 = lVar3 + 1;
  lVar7 = lVar7 + 0x20;
  if (iVar9 <= lVar3) goto LAB_14101d1cb;
  goto LAB_14101d0b7;
}



// FUNCTION 14101d210 FUN_14101d210 body=218 status=ok
// SIG undefined FUN_14101d210(void)

void FUN_14101d210(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x6a8);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if (1 < *(int *)(param_1 + 0x6dc)) {
    (**(code **)(*plVar1 + 0x278))(plVar1,1);
    fVar4 = 1.0 / (float)(*(int *)(param_1 + 0x6dc) + -1);
    FUN_142f10910(*(undefined8 *)(param_1 + 0x6a8),fVar4);
    fVar2 = 1.0 / *(float *)(param_1 + 0x684);
    fVar3 = 1.0 / (float)*(int *)(param_1 + 0x6dc);
    if (fVar2 <= fVar3) {
      fVar2 = fVar3;
    }
    FUN_142f10880(*(undefined8 *)(param_1 + 0x6a8),fVar2);
    FUN_142f0fa70(*(undefined8 *)(param_1 + 0x6a8),1.0 - (float)*(int *)(param_1 + 0x6d8) * fVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014101d2e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x278))(plVar1,0);
  return;
}



// FUNCTION 14101d2f0 FUN_14101d2f0 body=189 status=ok
// SIG undefined FUN_14101d2f0(void)

void FUN_14101d2f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if ((param_2 != *(longlong *)(param_1 + 0x730)) &&
     (*(longlong *)(param_1 + 0x730) = param_2, param_2 != 0)) {
    FUN_142ed3540(param_2 + 0x170,1,0);
  }
  uVar3 = 0;
  plVar2 = *(longlong **)(param_1 + 0x720);
  uVar4 = (longlong)*(int *)(param_1 + 0x728) & 0x1fffffffffffffff;
  if (plVar2 + *(int *)(param_1 + 0x728) < plVar2) {
    uVar4 = uVar3;
  }
  if (uVar4 != 0) {
    do {
      lVar1 = *plVar2;
      if ((lVar1 != 0) && (lVar1 != *(longlong *)(param_1 + 0x730))) {
        FUN_142ed3540(lVar1 + 0x170,0,0);
      }
      plVar2 = plVar2 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar4);
  }
  FUN_141010a00(param_1,0);
  return;
}



// FUNCTION 14101d3b0 FUN_14101d3b0 body=143 status=ok
// SIG undefined FUN_14101d3b0(void)

void FUN_14101d3b0(longlong param_1,int param_2,float param_3)

{
  bool bVar1;
  char cVar2;
  
  if ((0.0 < param_3) || (*(float *)(param_1 + 0x1c4) <= 0.0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (param_2 < 2) {
    if (0.0 < param_3) {
      cVar2 = '\x03';
    }
    else {
      cVar2 = !bVar1;
    }
  }
  else {
    cVar2 = '\x02';
  }
  if (cVar2 != *(char *)(param_1 + 0x1c8)) {
    FUN_141017130(param_1);
  }
  if (param_3 != *(float *)(param_1 + 0x1c4)) {
    FUN_141014570(param_1,param_3);
  }
  if (param_2 != *(int *)(param_1 + 0x1c0)) {
    FUN_141016b60(param_1,param_2);
  }
  return;
}



// FUNCTION 14101d440 FUN_14101d440 body=678 status=ok
// SIG undefined FUN_14101d440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14101d440(longlong param_1,char param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  float fVar10;
  undefined4 uVar11;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char local_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  plVar8 = (longlong *)(param_1 + 0x1f0);
  uVar7 = 0;
  do {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x280));
    lVar6 = *(longlong *)(param_1 + 0x270);
    if (lVar6 == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x278);
    }
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x280));
    if ((*plVar8 != 0) && ((longlong *)plVar8[1] != (longlong *)0x0)) {
      lVar6 = *plVar8;
      plVar9 = (longlong *)plVar8[1];
    }
    if (((lVar6 != 0) && (plVar9 != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(*plVar9 + 0x80))(plVar9), cVar3 != '\0')) {
      uVar1 = *(uint *)((longlong)plVar8 + 0x14);
      fVar10 = (float)(**(code **)(*plVar9 + 0x18))(plVar9,uVar1);
      if (0.0 <= fVar10) {
        uVar11 = (**(code **)(*plVar9 + 0x18))(plVar9,uVar1);
        *(undefined4 *)(plVar8 + 2) = uVar11;
        lVar6 = *plVar9;
        uVar4 = FUN_140ff6a30(param_1);
        (**(code **)(lVar6 + 0x20))(plVar9,&local_68,uVar1,uVar4);
        lVar6 = *(longlong *)(param_1 + 0x38);
        if (lVar6 == 0) {
LAB_14101d583:
          lVar6 = 0;
        }
        else {
          lVar5 = UGSquadMemberWidget::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_14101d583;
        }
        if (((uVar7 == 0) && (*(int *)(param_1 + 0x288) == 0)) &&
           ((lVar6 != 0 &&
            ((lVar6 = FUN_140fe3d70(lVar6), lVar6 != 0 &&
             ((undefined4 *)(lVar6 + 0xe38) != &local_68)))))) {
          local_68 = *(undefined4 *)(lVar6 + 0xe38);
          uStack_64 = *(undefined4 *)(lVar6 + 0xe3c);
          uStack_60 = *(undefined4 *)(lVar6 + 0xe40);
          uStack_5c = *(undefined4 *)(lVar6 + 0xe44);
          local_58 = '\x01';
LAB_14101d5d4:
          if ((uVar7 < 3) && (plVar8[-2] != 0)) {
            local_88 = local_68;
            uStack_84 = uStack_64;
            uStack_80 = uStack_60;
            uStack_7c = uStack_5c;
            FUN_142f0cf50(plVar8[-2],&local_88);
          }
        }
        else if (local_58 != '\0') goto LAB_14101d5d4;
        uVar4 = (**(code **)(*plVar9 + 0x28))(plVar9,local_78,uVar1);
        if ((uVar1 < 3) &&
           (lVar6 = *(longlong *)(param_1 + ((longlong)(int)uVar1 + 0xc) * 0x28), lVar6 != 0)) {
          FUN_142088cf0(lVar6,uVar4);
        }
        if (local_78[0] != 0) {
          FMemory::Free();
        }
      }
    }
    uVar7 = uVar7 + 1;
    plVar8 = plVar8 + 5;
    if (2 < (int)uVar7) {
      for (plVar8 = (longlong *)(param_1 + 0x1e0); plVar8 != (longlong *)(param_1 + 600);
          plVar8 = plVar8 + 5) {
        if (*plVar8 != 0) {
          if ((param_2 == '\0') || (ABS(*(float *)(plVar8 + 4)) <= 1e-08)) {
            FUN_142f0ead0();
          }
          else {
            FUN_142ef4810();
          }
        }
      }
      return;
    }
  } while( true );
}



// FUNCTION 14101d6f0 FUN_14101d6f0 body=1577 status=ok
// SIG undefined FUN_14101d6f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14101d6f0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  bool bVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  undefined1 auStack_1f8 [32];
  undefined4 *local_1d8;
  ulonglong *puStack_1d0;
  longlong local_1c8 [7];
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  longlong *plStack_178;
  longlong local_170 [3];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined4 local_98 [4];
  undefined1 local_88 [24];
  undefined1 local_70;
  undefined4 local_68;
  undefined1 local_58 [24];
  undefined1 local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  if (*(longlong **)(param_1 + 0x1c8) != (longlong *)0x0) {
    if (*(int *)(param_1 + 0x2fc) < 1) {
      local_1d8 = (undefined4 *)0x0;
      puStack_1d0 = (ulonglong *)0x0;
      lVar5 = **(longlong **)(param_1 + 0x1c8);
      uVar7 = FText::FromString(local_f0,&local_1d8);
      (**(code **)(lVar5 + 0x2b0))(*(undefined8 *)(param_1 + 0x1c8),uVar7,1,0);
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_e8 + 1;
        lVar5 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      if (local_1d8 != (undefined4 *)0x0) {
        FMemory::Free();
      }
    }
    else {
      local_180 = 0;
      plStack_178 = (longlong *)0x0;
      lVar5 = FText::AsNumber(local_c8,*(int *)(param_1 + 0x2fc),0,&local_180);
      local_1c8[6] = lVar5;
      lVar6 = FText::FText(local_b0,param_1 + 0x170);
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_108,L"{0} {1}",L"GFxNameplate",L"LevelFormatString");
      puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_d8,uVar7);
      local_98[0] = 4;
      FText::FText(local_88,lVar6);
      local_70 = 1;
      local_68 = 4;
      FText::FText(local_58,lVar5);
      local_1d8 = local_98;
      local_40 = 1;
      puStack_1d0 = local_38;
      local_190 = *puVar8;
      local_188 = puVar8[1];
      if (local_188 != 0) {
        LOCK();
        *(int *)(local_188 + 8) = *(int *)(local_188 + 8) + 1;
        UNLOCK();
      }
      local_158 = local_1d8;
      uStack_150 = puStack_1d0;
      uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_148,&local_158);
      uVar7 = FText::Format(local_120,&local_190,uVar7);
      FText::FText(local_138,uVar7);
      if (local_118 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_118 + 1;
        lVar5 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_118)(local_118);
          LOCK();
          piVar1 = (int *)((longlong)local_118 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_118 + 8))(local_118,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_148);
      lVar5 = 2;
      plVar12 = (longlong *)&stack0xffffffffffffffe0;
      do {
        lVar5 = lVar5 + -1;
        if ((char)plVar12[-4] != '\0') {
          *(undefined1 *)(plVar12 + -4) = 0;
          plVar4 = (longlong *)plVar12[-6];
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
        plVar12 = plVar12 + -6;
      } while (lVar5 != 0);
      plVar12 = (longlong *)puVar8[1];
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar12 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      plVar12 = *(longlong **)(lVar6 + 8);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar12 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      plVar12 = *(longlong **)(local_1c8[6] + 8);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar12 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_100 + 1;
        lVar5 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      plVar12 = plStack_178;
      if (plStack_178 != (longlong *)0x0) {
        LOCK();
        plVar4 = plStack_178 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_178)(plStack_178);
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
      puVar11 = &DAT_143f3eda8;
      if (*(int *)(param_1 + 0x2c0) == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = *(undefined2 **)(param_1 + 0x2b8);
      }
      puVar8 = (undefined8 *)FText::ToString(local_138);
      if (*(int *)(puVar8 + 1) != 0) {
        puVar11 = (undefined2 *)*puVar8;
      }
      FString::PrintfImpl(local_170,puVar13,puVar11);
      (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x2a8))
                (*(longlong **)(param_1 + 0x1c8),local_170,1,0);
      if (local_170[0] != 0) {
        FMemory::Free();
      }
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_130 + 1;
        lVar5 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar1 = (int *)((longlong)local_130 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_130 + 8))(local_130,1);
          }
        }
      }
    }
  }
  lVar5 = 0;
  if ((*(longlong *)(param_1 + 0x198) != 0) &&
     ((*(char *)(param_1 + 0x2b0) != '\0' || (*(char *)(param_1 + 0x2b1) == '\0')))) {
    lVar6 = *(longlong *)(param_1 + 0x38);
    if (lVar6 != 0) {
      lVar9 = UGSquadMemberWidget::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if (bVar10) {
        lVar5 = FUN_140fe3d70(lVar6);
      }
    }
    bVar10 = false;
    if (lVar5 != 0) {
      bVar10 = *(int *)(lVar5 + 0x460) <= *(int *)(param_1 + 0x2fc) - *(int *)(param_1 + 0x300);
    }
    (**(code **)(**(longlong **)(param_1 + 0x198) + 0x278))(*(longlong **)(param_1 + 0x198),bVar10);
    if ((bVar10 != false) && (*(longlong *)(param_1 + 400) != 0)) {
      if (*(int *)(param_1 + 0x2fc) < 100) {
        if (*(int *)(param_1 + 0x2fc) < 10) {
          local_1c8[4] = 0;
          local_1c8[5] = 9;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1c8 + 4,0);
          FGenericPlatformString::Memcpy(local_1c8[4],L"oneDigit",0x12);
          FUN_142088cf0(*(undefined8 *)(param_1 + 400),local_1c8 + 4);
          lVar5 = local_1c8[4];
        }
        else {
          local_1c8[2] = 0;
          local_1c8[3] = 9;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1c8 + 2,0);
          FGenericPlatformString::Memcpy(local_1c8[2],L"twoDigit",0x12);
          FUN_142088cf0(*(undefined8 *)(param_1 + 400),local_1c8 + 2);
          lVar5 = local_1c8[2];
        }
      }
      else {
        local_1c8[0] = 0;
        local_1c8[1] = 0xb;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1c8,0);
        FGenericPlatformString::Memcpy(local_1c8[0],L"threeDigit",0x16);
        FUN_142088cf0(*(undefined8 *)(param_1 + 400),local_1c8);
        lVar5 = local_1c8[0];
      }
      if (lVar5 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 14101dd20 FUN_14101dd20 body=267 status=ok
// SIG undefined FUN_14101dd20(void)

void FUN_14101dd20(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  longlong local_18 [2];
  
  if ((*(char *)(param_1 + 0x2b0) == '\0') && (*(char *)(param_1 + 0x2b1) != '\0')) {
    if (*(char *)(param_1 + 0x2b1) != '\x01') {
      return;
    }
    if (*(longlong *)(param_1 + 0x1d0) == 0) {
      return;
    }
    puVar4 = &DAT_143f3eda8;
    if (*(int *)(param_1 + 0x2c0) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = *(undefined2 **)(param_1 + 0x2b8);
    }
    puVar1 = (undefined8 *)FText::ToString(param_1 + 0x298);
    if (*(int *)(puVar1 + 1) != 0) {
      puVar4 = (undefined2 *)*puVar1;
    }
    FString::PrintfImpl(local_18,puVar3,puVar4);
    plVar2 = *(longlong **)(param_1 + 0x1d0);
  }
  else {
    if (*(longlong *)(param_1 + 0x1d8) == 0) {
      return;
    }
    puVar4 = &DAT_143f3eda8;
    if (*(int *)(param_1 + 0x2c0) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = *(undefined2 **)(param_1 + 0x2b8);
    }
    puVar1 = (undefined8 *)FText::ToString(param_1 + 0x298);
    if (*(int *)(puVar1 + 1) != 0) {
      puVar4 = (undefined2 *)*puVar1;
    }
    FString::PrintfImpl(local_18,puVar3,puVar4);
    plVar2 = *(longlong **)(param_1 + 0x1d8);
  }
  (**(code **)(*plVar2 + 0x2a8))(plVar2,local_18,1,0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14101de30 FUN_14101de30 body=353 status=ok
// SIG undefined FUN_14101de30(void)

void FUN_14101de30(longlong *param_1,char param_2)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  float fVar4;
  longlong local_18 [2];
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 == 0) {
    fVar4 = 0.0;
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    fVar4 = *(float *)(lVar1 + 0x790);
  }
  if (param_2 == '\0') {
    if (*(char *)((longlong)param_1 + 0x2b2) == '\x02') {
      *(float *)((longlong)param_1 + 0x30c) = fVar4;
    }
    goto LAB_14101df7f;
  }
  if (param_2 == '\x01') {
    if (*(char *)((longlong)param_1 + 0x2b2) != '\0') goto LAB_14101df7f;
    local_18[1] = 8;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    uVar3 = 0x10;
    pwVar2 = L"fadeOut";
  }
  else {
    if (param_2 != '\x02') goto LAB_14101df7f;
    if (*(char *)((longlong)param_1 + 0x2b2) == '\x01') {
      if (*(float *)((longlong)param_1 + 0x30c) + *(float *)(param_1 + 0x4d) < fVar4) {
        local_18[1] = 0xf;
        local_18[0] = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
        uVar3 = 0x1e;
        pwVar2 = L"fadeInBrackets";
        goto LAB_14101df36;
      }
    }
    else if (*(char *)((longlong)param_1 + 0x2b2) == '\0') goto LAB_14101df7f;
    local_18[1] = 7;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    uVar3 = 0xe;
    pwVar2 = L"fadeIn";
  }
LAB_14101df36:
  FGenericPlatformString::Memcpy(local_18[0],pwVar2,uVar3);
  FUN_142088910(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
    *(char *)((longlong)param_1 + 0x2b2) = param_2;
    return;
  }
LAB_14101df7f:
  *(char *)((longlong)param_1 + 0x2b2) = param_2;
  return;
}



// FUNCTION 14101dfa0 FUN_14101dfa0 body=280 status=ok
// SIG undefined FUN_14101dfa0(void)

void FUN_14101dfa0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  byte local_20;
  byte local_1f;
  undefined8 local_18;
  
  if (*(int *)(param_1 + 0x700) != *(int *)(param_1 + 0x72c)) {
    lVar3 = *(longlong *)(param_1 + 0x738);
    if (*(longlong *)(param_1 + 0x738) == 0) {
      lVar3 = param_1 + 0x730;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x740) - 1U &
                             (ulonglong)*(byte *)(param_1 + 0x6c8)) * 4);
    if (iVar2 != -1) {
      do {
        pbVar4 = (byte *)((longlong)iVar2 * 0x78 + *(longlong *)(param_1 + 0x6f8));
        if (*pbVar4 == *(byte *)(param_1 + 0x6c8)) {
          if (iVar2 != -1) goto LAB_14101e020;
          break;
        }
        iVar2 = *(int *)(pbVar4 + 0x70);
      } while (iVar2 != -1);
    }
  }
  pbVar4 = (byte *)0x0;
LAB_14101e020:
  FText::FText(local_78,pbVar4 + 8);
  FText::FText(local_60,pbVar4 + 0x20);
  FString::FString(local_48,pbVar4 + 0x38);
  FString::FString(local_38,pbVar4 + 0x48);
  local_28 = *(undefined8 *)(pbVar4 + 0x58);
  plVar1 = *(longlong **)(param_1 + 0x6d8);
  local_20 = pbVar4[0x60];
  local_1f = pbVar4[0x61];
  local_18 = *(undefined8 *)(pbVar4 + 0x68);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,local_78,1,0);
  }
  FUN_140fe63c0(local_78);
  return;
}



// FUNCTION 14101e0c0 FUN_14101e0c0 body=1194 status=ok
// SIG undefined FUN_14101e0c0(void)

void FUN_14101e0c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong local_res10;
  undefined1 local_res18;
  uint local_res20;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 *local_118;
  ulonglong local_110;
  longlong local_108 [5];
  undefined **local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined **local_78;
  
  local_res10 = param_2;
  if (param_2 != 0) {
    lVar7 = FUN_142f71d80();
    for (lVar11 = local_res10; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x30)) {
      if (lVar11 == lVar7) {
        if (*(longlong *)(param_1 + 0x698) != 0) {
          uVar10 = 0;
          local_118 = (undefined8 *)0x0;
          local_110 = 0;
          FUN_140ff7300(param_1,&local_118,1);
          uVar13 = (ulonglong)(int)local_110;
          local_res20 = 0;
          local_108[4] = uVar13;
          if ((int)local_110 != 0) {
            puVar16 = local_118 + 1;
            uVar13 = uVar10;
            uVar15 = uVar10;
            do {
              lVar11 = 0;
              if ((-1 < (longlong)uVar13) && ((int)uVar15 < *(int *)(param_1 + 0x720))) {
                lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x718) + uVar13 * 8);
              }
              puVar14 = local_118 + (longlong)(int)uVar10 * 6;
              cVar4 = FUN_142f63b10(puVar14);
              if ((((cVar4 != '\0') && (lVar7 = FUN_142f5f490(puVar14), lVar7 != 0)) &&
                  (lVar11 != 0)) &&
                 ((*(char *)(lVar7 + 0xa5) == '\0' && (*(char *)(lVar7 + 0xa4) == '\0')))) {
                local_res18 = 0;
                lVar8 = FUN_142f5c680(*(undefined8 *)(param_1 + 0x698),local_res10);
                if (lVar8 == 0) {
                  uVar5 = 0;
                }
                else {
                  iVar6 = FUN_142f5d020(&local_res10,lVar7);
                  uVar5 = local_res18;
                  if ((-1 < iVar6) && (iVar6 < *(int *)(lVar8 + 0x20))) {
                    uVar5 = FUN_142f6dbd0(lVar7,*(undefined4 *)
                                                 (*(longlong *)(lVar8 + 0x18) + (longlong)iVar6 * 4)
                                         );
                  }
                }
                cVar4 = FUN_142f63b10(puVar14);
                if (cVar4 == '\0') {
                  uVar9 = 0;
                }
                else {
                  uVar9 = FUN_142f5f490(puVar14);
                }
                FUN_140ff74c0(param_1,local_b0,uVar9,uVar5);
                uVar5 = 0;
                local_d8 = *puVar16;
                local_d0 = *(undefined4 *)(puVar16 + 1);
                uStack_cc = *(undefined4 *)((longlong)puVar16 + 0xc);
                uStack_c8 = *(undefined4 *)(puVar16 + 2);
                uStack_c4 = *(undefined4 *)((longlong)puVar16 + 0x14);
                local_c0 = *(undefined4 *)(puVar16 + 3);
                local_bc = *(undefined4 *)((longlong)puVar16 + 0x1c);
                local_e0 = (undefined **)&DAT_1441d2800;
                local_b8 = puVar16[4];
                iVar6 = FUN_142f5de00(*(undefined8 *)(param_1 + 0x698),&local_e0,0,param_1);
                if (iVar6 == 1) {
                  uVar5 = 1;
                }
                else if (iVar6 == 3) {
                  uVar5 = 9;
                }
                uVar9 = FUN_140fe5830(local_98,puVar14,local_b0,uVar5);
                FUN_141011d90(lVar11,uVar9);
                plVar3 = local_90;
                local_78 = &PTR_FUN_1441d26b8;
                if (local_90 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_90 + 1;
                  lVar11 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*local_90)(local_90);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar3 + 0xc);
                    iVar6 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar6 == 1) {
                      (**(code **)(*plVar3 + 8))(plVar3,1);
                    }
                  }
                }
                plVar3 = local_a8;
                uVar15 = (ulonglong)((int)uVar15 + 1);
                uVar13 = uVar13 + 1;
                local_e0 = &PTR_FUN_1441d26b8;
                if (local_a8 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_a8 + 1;
                  lVar11 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar11 == 1) {
                    (**(code **)*local_a8)(local_a8);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar3 + 0xc);
                    iVar6 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar6 == 1) {
                      (**(code **)(*plVar3 + 8))(plVar3,1);
                    }
                  }
                }
              }
              puVar16 = puVar16 + 6;
              local_res20 = local_res20 + 1;
              uVar10 = (ulonglong)local_res20;
              local_108[4] = local_108[4] - 1;
            } while (local_108[4] != 0);
            uVar13 = local_110 & 0xffffffff;
            local_108[4] = 0;
          }
          local_11c = 0;
          local_120 = 0;
          cVar4 = FUN_142f5e6c0(*(undefined8 *)(param_1 + 0x698),local_res10,&local_11c);
          if ((cVar4 != '\0') &&
             (cVar4 = FUN_142f5eb90(*(undefined8 *)(param_1 + 0x698),local_res10,&local_120),
             cVar4 != '\0')) {
            (**(code **)(*(longlong *)(param_1 + 0x630) + 0x28))
                      ((longlong *)(param_1 + 0x630),local_res10,0,local_11c,local_120);
          }
          uVar12 = (uint)uVar13;
          FUN_141013470(param_1,0 < (int)uVar12);
          FUN_141003280(param_1);
          puVar16 = local_118;
          if (*(longlong *)(param_1 + 0x728) != 0) {
            cVar4 = FUN_142f63c20(&local_res10);
            if (cVar4 == '\0') {
              local_108[2] = 0;
              local_108[3] = 0x10;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 2,0);
              FGenericPlatformString::Memcpy(local_108[2],L"standardMission",0x20);
              FUN_142088910(*(undefined8 *)(param_1 + 0x728),local_108 + 2);
              lVar11 = local_108[2];
            }
            else {
              local_108[0] = 0;
              local_108[1] = 0xd;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108,0);
              FGenericPlatformString::Memcpy(local_108[0],L"storyMission",0x1a);
              FUN_142088cf0(*(undefined8 *)(param_1 + 0x728),local_108);
              lVar11 = local_108[0];
            }
            puVar16 = local_118;
            if (lVar11 != 0) {
              FMemory::Free();
              puVar16 = local_118;
            }
          }
          while (uVar12 != 0) {
            *puVar16 = &PTR_FUN_1441d26b8;
            uVar12 = (int)uVar13 - 1;
            uVar13 = (ulonglong)uVar12;
            puVar16 = puVar16 + 6;
          }
          if (local_118 == (undefined8 *)0x0) {
            return;
          }
          FMemory::Free();
          return;
        }
        break;
      }
    }
  }
  FUN_140ff24a0(param_1);
  FUN_14101e570(param_1,local_res10,0);
  return;
}



// FUNCTION 14101e570 FUN_14101e570 body=458 status=ok
// SIG undefined FUN_14101e570(void)

void FUN_14101e570(longlong param_1,longlong param_2,byte param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte bVar12;
  undefined1 uVar13;
  int iVar14;
  bool bVar15;
  undefined8 *local_28;
  undefined8 local_20;
  
  if (param_2 == 0) {
    return;
  }
  lVar6 = FUN_142f71d80();
  lVar9 = param_2;
  while (lVar9 != lVar6) {
    lVar9 = *(longlong *)(lVar9 + 0x30);
    if (lVar9 == 0) {
      return;
    }
  }
  if (*(longlong *)(param_1 + 0x698) == 0) {
    return;
  }
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x5d0);
  if (cVar4 == '\0') {
    return;
  }
  uVar11 = 0;
  iVar1 = *(int *)(param_1 + 0x7e8);
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_140ff7300(param_1,&local_28,1);
  iVar14 = (int)local_20;
  if ((int)local_20 < 1) {
    if (param_3 == 0) {
      plVar8 = *(longlong **)(param_1 + 0x718);
      uVar10 = (longlong)*(int *)(param_1 + 0x720) & 0x1fffffffffffffff;
      if (plVar8 + *(int *)(param_1 + 0x720) < plVar8) {
        uVar10 = uVar11;
      }
      bVar12 = 0;
      if (uVar10 != 0) {
        do {
          if ((*plVar8 == 0) || (*(char *)(*plVar8 + 0x208) == '\0')) {
            param_3 = 0;
          }
          else {
            param_3 = 1;
          }
          param_3 = bVar12 | param_3;
          plVar8 = plVar8 + 1;
          uVar11 = uVar11 + 1;
          bVar12 = param_3;
        } while (uVar11 != uVar10);
      }
    }
  }
  else {
    param_3 = 1;
  }
  iVar5 = FUN_142f5c9d0(*(undefined8 *)(param_1 + 0x698),param_2);
  bVar15 = iVar5 == 3;
  if (((param_3 != 0) || (0 < iVar1)) || (bVar15)) {
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x5d0);
    cVar4 = FUN_142ebe1d0(uVar7,param_1);
    if (cVar4 != '\0') {
      bVar2 = true;
      goto LAB_14101e6ac;
    }
  }
  bVar2 = false;
LAB_14101e6ac:
  if (((param_3 != 0) && (iVar1 < 1)) || (bVar15)) {
    uVar13 = 1;
  }
  else {
    uVar13 = 0;
  }
  if ((bVar2) || (puVar3 = local_28, bVar15)) {
    FUN_1410196e0(param_1);
    plVar8 = *(longlong **)(param_1 + 0x728);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x278))(plVar8,uVar13);
    }
    FUN_141015cd0(param_1,bVar15);
    puVar3 = local_28;
  }
  for (; iVar14 != 0; iVar14 = iVar14 + -1) {
    *puVar3 = &PTR_FUN_1441d26b8;
    puVar3 = puVar3 + 6;
  }
  if (local_28 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14101e740 FUN_14101e740 body=299 status=ok
// SIG undefined FUN_14101e740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_14101e740(longlong param_1,longlong param_2)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_3d8 [32];
  undefined1 local_3b8 [896];
  char local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_3d8;
  if ((param_2 != 0) && (lVar5 = *(longlong *)(param_2 + 0x910), lVar5 != 0)) {
    FUN_142dc1ad0(local_3b8);
    FUN_142dcd6e0(lVar5,local_3b8,0);
    plVar4 = (longlong *)FUN_142dd0030(local_3b8);
    if (plVar4 == (longlong *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (**(code **)(*plVar4 + 0x680))(plVar4);
    }
    SRWLock = (PSRWLOCK)(param_1 + 0x2d8);
    AcquireSRWLockShared(SRWLock);
    if ((((lVar5 != 0) && (lVar1 = *(longlong *)(param_1 + 0x2e0), lVar1 == lVar5)) &&
        (local_38 == '\x02')) && (lVar1 != 0)) {
      lVar5 = UInputKeySelector::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        ReleaseSRWLockShared(SRWLock);
        cVar3 = FUN_140e53a00(lVar1,param_2);
        return cVar3 == '\0';
      }
    }
    ReleaseSRWLockShared(SRWLock);
  }
  return true;
}



// FUNCTION 14101e880 FUN_14101e880 body=559 status=ok
// SIG undefined FUN_14101e880(void)

void FUN_14101e880(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  
  plVar5 = *(longlong **)(param_1 + 0x718);
  iVar9 = *(int *)(param_1 + 0x720);
  for (plVar10 = plVar5; plVar10 != plVar5 + iVar9; plVar10 = plVar10 + 1) {
    lVar1 = *plVar10;
    if (lVar1 != 0) {
      if (*(int *)(param_2 + 1) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)*param_2;
      }
      if (*(int *)(lVar1 + 0x188) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = *(undefined2 **)(lVar1 + 0x180);
      }
      iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
      if (iVar2 == 0) {
        if ((((plVar10 != plVar5 + iVar9) &&
             (iVar9 = (int)((longlong)plVar10 - (longlong)plVar5 >> 3), -1 < iVar9)) &&
            (iVar9 < *(int *)(param_1 + 0x720))) &&
           (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x718) + (longlong)iVar9 * 8), lVar1 != 0)
           ) {
          cVar6 = *(char *)(lVar1 + 0x1b0);
          *(undefined1 *)(lVar1 + 400) = 0;
          if (((cVar6 == '\x02') || ((byte)(cVar6 - 5U) < 3)) || (cVar6 == '\b')) {
            *(undefined1 *)(lVar1 + 0x1b0) = 1;
            cVar6 = '\x01';
          }
          if (cVar6 == '\x03') {
            *(undefined1 *)(lVar1 + 0x1b0) = 9;
            cVar6 = '\t';
          }
          lVar3 = *(longlong *)(lVar1 + 0x178);
          if ((lVar3 != 0) && ((cVar6 - 4U & 0xf7) == 0)) {
            iVar2 = *(int *)(lVar3 + 0x66c) + -1;
            iVar9 = 0;
            if (-1 < iVar2) {
              iVar9 = iVar2;
            }
            *(int *)(lVar3 + 0x66c) = iVar9;
            FUN_14101a0c0(lVar1);
          }
        }
        break;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x688) != 0) {
    lVar3 = FUN_142f71d80();
    for (lVar1 = *(longlong *)(param_1 + 0x688); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar3) {
        if (*(longlong *)(param_1 + 0x688) != 0) {
          plVar10 = *(longlong **)(param_1 + 0x718);
          plVar5 = plVar10 + *(int *)(param_1 + 0x720);
          goto joined_r0x00014101e9f2;
        }
        break;
      }
    }
  }
LAB_14101ea2a:
  if (*(int *)(param_1 + 0x7e8) < 1) {
    FUN_1410101c0(param_1);
  }
  if (*(longlong *)(param_1 + 0x688) != 0) {
    lVar4 = FUN_142f71d80();
    lVar3 = *(longlong *)(param_1 + 0x688);
    for (lVar1 = lVar3; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar4) {
        if (lVar3 != 0) goto LAB_14101ea7e;
        break;
      }
    }
  }
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x698) != 0) {
    plVar5 = (longlong *)FUN_142f5ed60(*(longlong *)(param_1 + 0x698),local_res8);
    lVar3 = *plVar5;
  }
LAB_14101ea7e:
  FUN_14101e570(param_1,lVar3,0);
  return;
joined_r0x00014101e9f2:
  if (plVar10 == plVar5) goto LAB_14101ea15;
  lVar1 = *plVar10;
  if ((lVar1 != 0) && ((*(char *)(lVar1 + 400) != '\0' || (*(int *)(lVar1 + 0x200) != 0))))
  goto LAB_14101ea2a;
  plVar10 = plVar10 + 1;
  goto joined_r0x00014101e9f2;
LAB_14101ea15:
  if (*(longlong *)(param_1 + 0x698) != 0) {
    *(undefined4 *)(param_1 + 0x664) = *(undefined4 *)(param_1 + 0x660);
  }
  goto LAB_14101ea2a;
}



// FUNCTION 14101eab0 thunk_FUN_14101de30 body=7 status=ok
// SIG undefined thunk_FUN_14101de30(void)

void thunk_FUN_14101de30(undefined8 param_1)

{
  FUN_14101de30(param_1,1);
  return;
}



// FUNCTION 14101eac0 FUN_14101eac0 body=336 status=ok
// SIG undefined FUN_14101eac0(void)

void FUN_14101eac0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_res8;
  undefined1 local_res10 [8];
  longlong local_18 [2];
  
  FUN_142edc290();
  if (*(longlong *)(param_1 + 0x688) != 0) {
    lVar2 = FUN_142f71d80();
    local_res8 = *(longlong *)(param_1 + 0x688);
    for (lVar4 = local_res8; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
      if (lVar4 == lVar2) {
        if (local_res8 != 0) goto LAB_14101eb27;
        break;
      }
    }
  }
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x698) != 0) {
    plVar3 = (longlong *)FUN_142f5ed60(*(longlong *)(param_1 + 0x698),local_res10);
    local_res8 = *plVar3;
  }
LAB_14101eb27:
  if ((local_res8 != 0) && (lVar2 = FUN_142f71d80(), lVar4 = local_res8, local_res8 != 0)) {
    while (lVar4 != lVar2) {
      lVar4 = *(longlong *)(lVar4 + 0x30);
      if (lVar4 == 0) {
        return;
      }
    }
    if (*(longlong *)(param_1 + 0x728) != 0) {
      cVar1 = FUN_142f63c20(&local_res8);
      local_18[0] = 0;
      if (cVar1 == '\0') {
        local_18[1] = 0x10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
        FGenericPlatformString::Memcpy(local_18[0],L"standardMission",0x20);
        FUN_142088910(*(undefined8 *)(param_1 + 0x728),local_18);
      }
      else {
        local_18[1] = 0xd;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
        FGenericPlatformString::Memcpy(local_18[0],L"storyMission",0x1a);
        FUN_142088cf0(*(undefined8 *)(param_1 + 0x728),local_18);
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 14101ec10 FUN_14101ec10 body=151 status=ok
// SIG undefined FUN_14101ec10(void)

void FUN_14101ec10(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x710);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar6 = iVar5 == 0;
    if (bVar6) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (!bVar6) {
      while( true ) {
        LOCK();
        bVar6 = iVar5 == (int)plVar3[1];
        if (bVar6) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar6) break;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar6 = iVar5 == 0;
        if (bVar6) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar6) {
          return;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        if (*(longlong *)(param_1 + 0x708) != 0) {
          FUN_14203dbf0(*(longlong *)(param_1 + 0x708),param_1 + 0x760);
        }
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
    }
  }
  return;
}



// FUNCTION 14101ecb0 FUN_14101ecb0 body=128 status=ok
// SIG undefined FUN_14101ecb0(void)

void FUN_14101ecb0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  if (0 < *(int *)(param_1 + 0x7e8)) {
    plVar1 = (longlong *)(param_1 + 0x7e0);
    FUN_140ce1790(*plVar1 + 0x10);
    iVar2 = *(int *)(param_1 + 0x7e8);
    if (iVar2 + -1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)*plVar1,(void *)(*plVar1 + 0x30),(longlong)(iVar2 + -1) * 0x30);
      iVar2 = *(int *)(param_1 + 0x7e8);
    }
    *(int *)(param_1 + 0x7e8) = iVar2 + -1;
    TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(plVar1);
    if (0 < *(int *)(param_1 + 0x7e8)) {
      FUN_140ff3800(param_1);
    }
  }
  FUN_141013470(param_1,0);
  return;
}



// FUNCTION 14101ed30 FUN_14101ed30 body=66 status=ok
// SIG undefined FUN_14101ed30(void)

void FUN_14101ed30(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144678770;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1446787b8;
  }
  return;
}



// FUNCTION 14101ed90 FUN_14101ed90 body=26 status=ok
// SIG undefined FUN_14101ed90(void)

undefined1 FUN_14101ed90(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 8) + 8) == '\0') {
    FUN_14103e3e0();
  }
  return 1;
}



// FUNCTION 14101edb0 FUN_14101edb0 body=66 status=ok
// SIG undefined FUN_14101edb0(void)

void FUN_14101edb0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144678800;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144678848;
  }
  return;
}



// FUNCTION 14101ee00 FUN_14101ee00 body=70 status=ok
// SIG undefined FUN_14101ee00(void)

void FUN_14101ee00(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 5) == '\0') {
    puVar3 = (undefined8 *)FUN_141037370();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 5) != '\0') {
        *(undefined1 *)(puVar1 + 5) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      puVar1[4] = puVar3[4];
      *(undefined1 *)(puVar1 + 5) = 1;
    }
  }
  return;
}



// FUNCTION 14101ee50 FUN_14101ee50 body=72 status=ok
// SIG undefined FUN_14101ee50(void)

undefined1 FUN_14101ee50(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 5) == '\0') {
    puVar3 = (undefined8 *)FUN_141037370();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 5) != '\0') {
        *(undefined1 *)(puVar1 + 5) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      puVar1[4] = puVar3[4];
      *(undefined1 *)(puVar1 + 5) = 1;
    }
  }
  return 1;
}



// FUNCTION 14101eea0 AddUObject<UHelloNeighborGameInstance> body=224 status=ok
// SIG undefined AddUObject<UHelloNeighborGameInstance>(void)

undefined8
TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_28;
  int local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_4;
  uStack_14 = param_4[1];
  uStack_10 = param_4[2];
  uStack_c = param_4[3];
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_144089a20;
    FWeakObjectPtr::operator=(plVar1 + 1,param_3);
    *(undefined4 *)(plVar1 + 2) = local_18;
    *(undefined4 *)((longlong)plVar1 + 0x14) = uStack_14;
    *(undefined4 *)(plVar1 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uStack_c;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[5] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_144089a68;
  }
  Add(param_1,param_2,&local_28);
  plVar1 = local_28;
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return param_2;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    plVar1 = (longlong *)FMemory::Realloc(plVar1,0,0);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return param_2;
}



// FUNCTION 14101ef80 FUN_14101ef80 body=239 status=ok
// SIG undefined FUN_14101ef80(void)

void FUN_14101ef80(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_14428ae88;
    FWeakObjectPtr::operator=(plVar2 + 1,param_2);
    *(undefined4 *)(plVar2 + 2) = local_18;
    *(undefined4 *)((longlong)plVar2 + 0x14) = uStack_14;
    *(undefined4 *)(plVar2 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_14428aed0;
  }
  if ((longlong *)&local_18 != param_1) {
    if (plVar2 == (longlong *)0x0) {
      if (((int)param_1[1] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*param_1 != 0) {
          lVar3 = FMemory::Realloc(*param_1,0,0);
          *param_1 = lVar3;
        }
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 14101f070 FUN_14101f070 body=224 status=ok
// SIG undefined FUN_14101f070(void)

undefined8 FUN_14101f070(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
  ResizeTo(&local_18,1);
  uVar4 = local_10;
  lVar6 = (longlong)(int)local_10;
  iVar5 = (int)local_10 + 1;
  local_10 = CONCAT44(local_10._4_4_,iVar5);
  if (local_10._4_4_ < iVar5) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_18,uVar4 & 0xffffffff);
  }
  puVar7 = (undefined4 *)(lVar6 * 0x30 + local_18);
  *puVar7 = 4;
  FText::FText(puVar7 + 4,param_3);
  *(undefined1 *)(puVar7 + 10) = 1;
  FText::FormatNamedImpl(param_1,param_2,&local_18);
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (&local_18);
  plVar3 = *(longlong **)(param_2 + 8);
  if (plVar3 != (longlong *)0x0) {
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
  }
  return param_1;
}



// FUNCTION 14101f150 FUN_14101f150 body=224 status=ok
// SIG undefined FUN_14101f150(void)

undefined8 FUN_14101f150(undefined8 param_1,longlong param_2,ushort *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
  ResizeTo(&local_18,1);
  uVar5 = local_10;
  lVar8 = (longlong)(int)local_10;
  iVar6 = (int)local_10 + 1;
  local_10 = CONCAT44(local_10._4_4_,iVar6);
  if (local_10._4_4_ < iVar6) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_18,uVar5 & 0xffffffff);
  }
  uVar3 = *param_3;
  puVar7 = (undefined4 *)(lVar8 * 0x30 + local_18);
  *puVar7 = 0;
  *(undefined1 *)(puVar7 + 10) = 0;
  *(ulonglong *)(puVar7 + 2) = (ulonglong)uVar3;
  FText::FormatNamedImpl(param_1,param_2,&local_18);
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (&local_18);
  plVar4 = *(longlong **)(param_2 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 14101f230 FUN_14101f230 body=666 status=ok
// SIG undefined FUN_14101f230(void)

longlong FUN_14101f230(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
      if (lVar9 == lVar6) goto LAB_14101f396;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = FUN_141392c00();
LAB_14101f396:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_141392c00();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_14101f409;
  }
  lVar7 = 0;
LAB_14101f409:
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



// FUNCTION 14101f4d0 FUN_14101f4d0 body=666 status=ok
// SIG undefined FUN_14101f4d0(void)

longlong FUN_14101f4d0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
      if (lVar9 == lVar6) goto LAB_14101f636;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = FUN_1413930c0();
LAB_14101f636:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_1413930c0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_14101f6a9;
  }
  lVar7 = 0;
LAB_14101f6a9:
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



// FUNCTION 14101f770 FUN_14101f770 body=666 status=ok
// SIG undefined FUN_14101f770(void)

longlong FUN_14101f770(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
      if (lVar9 == lVar6) goto LAB_14101f8d6;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = FUN_141392a90();
LAB_14101f8d6:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_141392a90();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_14101f949;
  }
  lVar7 = 0;
LAB_14101f949:
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



// FUNCTION 14101fa10 FUN_14101fa10 body=666 status=ok
// SIG undefined FUN_14101fa10(void)

longlong FUN_14101fa10(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
      if (lVar9 == lVar6) goto LAB_14101fb76;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = FUN_141397380();
LAB_14101fb76:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_141397380();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_14101fbe9;
  }
  lVar7 = 0;
LAB_14101fbe9:
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



// FUNCTION 14101fcb0 FUN_14101fcb0 body=917 status=ok
// SIG undefined FUN_14101fcb0(void)

longlong FUN_14101fcb0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
LAB_14101fd5f:
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
      if (iVar9 < 1) goto LAB_14101fd5f;
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
            goto LAB_14101fd74;
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
LAB_14101fd74:
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
      if (lVar12 == lVar11) goto LAB_14101fefd;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = FUN_141398ff0();
LAB_14101fefd:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = FUN_141398ff0();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14101ff7a;
  }
  lVar12 = 0;
LAB_14101ff7a:
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



// FUNCTION 141020050 FUN_141020050 body=666 status=ok
// SIG undefined FUN_141020050(void)

longlong FUN_141020050(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
      if (lVar9 == lVar6) goto LAB_1410201b6;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = FUN_141397870();
LAB_1410201b6:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_141397870();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_141020229;
  }
  lVar7 = 0;
LAB_141020229:
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



// FUNCTION 1410202f0 FUN_1410202f0 body=666 status=ok
// SIG undefined FUN_1410202f0(void)

longlong FUN_1410202f0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
      if (lVar9 == lVar6) goto LAB_141020456;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = UReplicationGraphNode_GridSpatialization2D::GetPrivateStaticClass();
LAB_141020456:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = UReplicationGraphNode_GridSpatialization2D::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_1410204c9;
  }
  lVar7 = 0;
LAB_1410204c9:
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



// FUNCTION 141020590 FUN_141020590 body=666 status=ok
// SIG undefined FUN_141020590(void)

longlong FUN_141020590(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
      if (lVar9 == lVar6) goto LAB_1410206f6;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = UReplicationGraphNode_GridSpatialization2D::GetPrivateStaticClass();
LAB_1410206f6:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = UReplicationGraphNode_GridSpatialization2D::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_141020769;
  }
  lVar7 = 0;
LAB_141020769:
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



// FUNCTION 141020830 FUN_141020830 body=666 status=ok
// SIG undefined FUN_141020830(void)

longlong FUN_141020830(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
      if (lVar9 == lVar6) goto LAB_141020996;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = UXAnimInstanceBase::GetPrivateStaticClass();
LAB_141020996:
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
    if (bVar10) goto LAB_141020a09;
  }
  lVar7 = 0;
LAB_141020a09:
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



// FUNCTION 141020ad0 FUN_141020ad0 body=666 status=ok
// SIG undefined FUN_141020ad0(void)

longlong FUN_141020ad0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
      if (lVar9 == lVar6) goto LAB_141020c36;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = FUN_141398730();
LAB_141020c36:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_141398730();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_141020ca9;
  }
  lVar7 = 0;
LAB_141020ca9:
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



// FUNCTION 141020d70 FUN_141020d70 body=666 status=ok
// SIG undefined FUN_141020d70(void)

longlong FUN_141020d70(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
      if (lVar9 == lVar6) goto LAB_141020ed6;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = FUN_141398a60();
LAB_141020ed6:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_141398a60();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_141020f49;
  }
  lVar7 = 0;
LAB_141020f49:
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



// FUNCTION 141021010 FUN_141021010 body=917 status=ok
// SIG undefined FUN_141021010(void)

longlong FUN_141021010(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
LAB_1410210bf:
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
      if (iVar9 < 1) goto LAB_1410210bf;
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
            goto LAB_1410210d4;
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
LAB_1410210d4:
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
      if (lVar12 == lVar11) goto LAB_14102125d;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = FUN_141398ca0();
LAB_14102125d:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = FUN_141398ca0();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_1410212da;
  }
  lVar12 = 0;
LAB_1410212da:
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



// FUNCTION 1410213b0 FUN_1410213b0 body=666 status=ok
// SIG undefined FUN_1410213b0(void)

longlong FUN_1410213b0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
      if (lVar9 == lVar6) goto LAB_141021516;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = FUN_141397c50();
LAB_141021516:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_141397c50();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_141021589;
  }
  lVar7 = 0;
LAB_141021589:
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



// FUNCTION 141021650 FUN_141021650 body=917 status=ok
// SIG undefined FUN_141021650(void)

longlong FUN_141021650(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
LAB_1410216ff:
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
      if (iVar9 < 1) goto LAB_1410216ff;
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
            goto LAB_141021714;
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
LAB_141021714:
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
      if (lVar12 == lVar11) goto LAB_14102189d;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = FUN_1413989b0();
LAB_14102189d:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = FUN_1413989b0();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_14102191a;
  }
  lVar12 = 0;
LAB_14102191a:
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



// FUNCTION 1410219f0 FUN_1410219f0 body=666 status=ok
// SIG undefined FUN_1410219f0(void)

longlong FUN_1410219f0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
      if (lVar9 == lVar6) goto LAB_141021b56;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
LAB_141021b56:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_141021bc9;
  }
  lVar7 = 0;
LAB_141021bc9:
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



// FUNCTION 141021c90 FUN_141021c90 body=666 status=ok
// SIG undefined FUN_141021c90(void)

longlong FUN_141021c90(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
      if (lVar9 == lVar6) goto LAB_141021df6;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = AReplicationGraphDebugActor::GetPrivateStaticClass();
LAB_141021df6:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = AReplicationGraphDebugActor::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_141021e69;
  }
  lVar7 = 0;
LAB_141021e69:
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



// FUNCTION 141021f30 FUN_141021f30 body=917 status=ok
// SIG undefined FUN_141021f30(void)

longlong FUN_141021f30(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
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
LAB_141021fdf:
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
      if (iVar9 < 1) goto LAB_141021fdf;
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
            goto LAB_141021ff4;
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
LAB_141021ff4:
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
      if (lVar12 == lVar11) goto LAB_14102217d;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = FUN_142f25280();
LAB_14102217d:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = FUN_142f25280();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_1410221fa;
  }
  lVar12 = 0;
LAB_1410221fa:
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



// FUNCTION 1410222d0 FUN_1410222d0 body=879 status=ok
// SIG undefined FUN_1410222d0(void)

bool FUN_1410222d0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
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
LAB_14102238f:
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
      if (iVar8 < 1) goto LAB_14102238f;
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
            goto LAB_1410223a4;
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
LAB_1410223a4:
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
  if (local_68 == 0) goto LAB_1410225df;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_14102252d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = UXGameInstance::GetPrivateStaticClass();
LAB_14102252d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_1410225a6:
    lVar11 = 0;
  }
  else {
    lVar10 = UXGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_1410225a6;
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
LAB_1410225df:
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



// FUNCTION 141022640 TFunction<void___cdecl(void)> body=185 status=ok
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
      goto LAB_1410226d5;
    }
  }
  pcVar1 = FRollingHash::GetWindowSize;
LAB_1410226d5:
  *param_1 = pcVar1;
  *param_2 = FRollingHash::GetWindowSize;
  return param_1;
}



// FUNCTION 141022700 FUN_141022700 body=212 status=ok
// SIG undefined FUN_141022700(void)

undefined8 * FUN_141022700(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = 0;
  FString::FString(param_1 + 1);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x60,param_1 + 6);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_14467a5f0;
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



// FUNCTION 1410227e0 TFunction<void___cdecl(void)> body=112 status=ok
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
  *param_1 = FRollingHash::GetWindowSize;
  return param_1;
}



// FUNCTION 141022850 TPromiseBase<int> body=153 status=ok
// SIG undefined TPromiseBase<int>(void)

undefined8 * TPromiseBase<int>::TPromiseBase<int>(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)operator_new(0x70);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *puVar1 = AK::MemoryMgr::StartProfileThreadUsage;
    uVar2 = FUN_1415ab270(1);
    puVar1[10] = uVar2;
    *(undefined1 *)(puVar1 + 0xb) = 0;
  }
  puVar3 = (undefined8 *)operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_DestroyObject_144145d88;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    puVar3[2] = puVar1;
  }
  *param_1 = puVar1;
  param_1[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_1,puVar1,puVar1);
  return param_1;
}



// FUNCTION 1410228f0 FUN_1410228f0 body=211 status=ok
// SIG undefined FUN_1410228f0(void)

longlong FUN_1410228f0(longlong param_1)

{
  FText::FText(param_1 + 8);
  FText::FText(param_1 + 0x20);
  FText::FText(param_1 + 0x38);
  FText::FText(param_1 + 0x50);
  FText::FText(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = DAT_1464aa730;
  *(undefined1 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xb8,0);
  FGenericPlatformString::Memcpy(*(undefined8 *)(param_1 + 0xb8),L"noIcon",0xe);
  return param_1;
}



// FUNCTION 1410229d0 FUN_1410229d0 body=2125 status=ok
// SIG undefined FUN_1410229d0(void)

undefined8 * FUN_1410229d0(undefined8 *param_1)

{
  undefined8 local_res8;
  longlong local_38 [6];
  
  FUN_140e9aa30();
  *param_1 = &PTR_FUN_144646880;
  param_1[0x9b] = &PTR_LAB_144646df0;
  FWeakObjectPtr::operator=(param_1 + 0xd0,0);
  *(undefined4 *)(param_1 + 0xd1) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x69c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd2) = 0x10000;
  *(undefined2 *)((longlong)param_1 + 0x694) = 0;
  param_1[0xd4] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144679478;
  param_1[0x9b] = &PTR_LAB_144679a40;
  param_1[0xd5] = &PTR_LAB_144679bc0;
  *(undefined2 *)(param_1 + 0xd6) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6b2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6b4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x6bc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6be) = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xfa] = 0;
  *(undefined4 *)(param_1 + 0xe7) = 0;
  param_1[0xfb] = 0;
  *(undefined4 *)(param_1 + 0xea) = 0;
  param_1[0xfd] = 0;
  *(undefined4 *)(param_1 + 0xed) = 0;
  param_1[0xfe] = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf3) = 0;
  *(undefined4 *)(param_1 + 0xf6) = 0;
  *(undefined4 *)(param_1 + 0xf9) = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  FText::FText(param_1 + 0x104);
  *(undefined2 *)(param_1 + 0x107) = 0;
  FUN_1410228f0(param_1 + 0x108);
  param_1[0x121] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  *(undefined4 *)(param_1 + 299) = 0;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  *(undefined4 *)(param_1 + 0x136) = 1;
  *(undefined8 *)((longlong)param_1 + 0x9b4) = 2;
  *(undefined4 *)((longlong)param_1 + 0x9bc) = 0;
  param_1[0x138] = 0xffffffffffffffff;
  param_1[0x139] = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  param_1[0x147] = 0;
  param_1[0x148] = 0;
  param_1[0x149] = 0;
  param_1[0x14a] = 0;
  param_1[0x14b] = 0;
  param_1[0x14c] = 0;
  param_1[0x14d] = 0;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  param_1[0x15e] = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  param_1[0x163] = 0;
  param_1[0x164] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  *(undefined4 *)(param_1 + 0x143) = 0;
  param_1[0x169] = 0;
  *(undefined4 *)(param_1 + 0x146) = 0;
  param_1[0x16a] = 0;
  *(undefined4 *)(param_1 + 0x15f) = 0;
  param_1[0x16c] = 0;
  *(undefined4 *)(param_1 + 0x162) = 0;
  param_1[0x16d] = 0;
  *(undefined4 *)(param_1 + 0x165) = 0;
  param_1[0x16f] = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  param_1[0x170] = 0;
  *(undefined4 *)(param_1 + 0x16b) = 0;
  param_1[0x172] = 0;
  *(undefined4 *)(param_1 + 0x16e) = 0;
  param_1[0x173] = 0;
  *(undefined4 *)(param_1 + 0x171) = 0;
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x17b));
  param_1[0x17c] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x17d));
  param_1[0x17e] = 0;
  param_1[0x17f] = 0;
  param_1[0x180] = 0;
  *(undefined2 *)(param_1 + 0x181) = 0;
  param_1[0x182] = 0;
  param_1[0x183] = 0;
  param_1[0x184] = 0;
  param_1[0x185] = 0;
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  param_1[0x188] = 0;
  param_1[0x189] = 0;
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 0x18c,L"Empty Slot",L"GFxSkillScreenTree_Header",L"TreeEmptySlot");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 399,L"Class Ability",L"GFxSkillScreenTree_Header",L"TreeUnlockedAbility");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 0x192,L"Unlocked",L"GFxSkillScreenTree_Header",L"TreeUnlockedText");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 0x195,L"Action Skill",L"GFxSkillScreenTree_Header",L"TreeActionSkill");
  FText::FText(param_1 + 0x198);
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 0x19b,L"Primary Mod",L"GFxSkillScreenTree_Header",L"TreeModPrimary");
  FText::FText(param_1 + 0x19e);
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 0x1a1,L"Secondary Mod",L"GFxSkillScreenTree_Header",L"TreeModSecondary");
  FText::FText(param_1 + 0x1a4);
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 0x1a7,L"Passive Ability",L"GFxSkillScreenTree_Header",L"TreePassiveSlot");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 0x1aa,L"Equipped",L"GFxSkillScreenTree_Header",L"TreeEquippedName");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 0x1ad,L"Unlocked At Level",L"GFxSkillScreenTree_Header",L"TreeUnlocksAtLevel"
            );
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 0x1b0,L"Ability Currently In Use!",L"GFxSkillScreenTree_Header",
             L"TreeAbilityInUse");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 0x1b3,L"Cannot Be Unequipped",L"GFxSkillScreenTree_Header",
             L"TreeCannotBeUnequipped");
  FText::FText(param_1 + 0x1b6);
  FText::FText(param_1 + 0x1b9);
  FText::FText(param_1 + 0x1bc);
  FText::FText(param_1 + 0x1bf);
  local_38[0] = 0;
  local_38[1] = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],&DAT_1446608d8,8);
  FText::FromString(param_1 + 0x1c2,local_38);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[2] = 0;
  local_38[3] = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],&DAT_1446608e0,8);
  FText::FromString(param_1 + 0x1c5,local_38 + 2);
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  local_38[4] = 0;
  local_38[5] = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 4,0);
  FGenericPlatformString::Memcpy(local_38[4],&DAT_1446608e8,8);
  FText::FromString(param_1 + 0x1c8,local_38 + 4);
  if (local_38[4] != 0) {
    FMemory::Free();
  }
  FText::FText(param_1 + 0x1cb);
  FText::FText(param_1 + 0x1ce);
  FText::FText(param_1 + 0x1d1);
  FText::FText(param_1 + 0x1d4);
  param_1[0x1d7] = 0;
  param_1[0x1d8] = 0;
  *(undefined1 *)(param_1 + 0x1d9) = 0;
  *(undefined4 *)((longlong)param_1 + 0xecc) = 0xbf800000;
  *(undefined2 *)(param_1 + 0x1da) = 0;
  *(undefined4 *)((longlong)param_1 + 0xed4) = 0;
  *(undefined4 *)(param_1 + 0x1db) = 0;
  *(undefined4 *)((longlong)param_1 + 0xedc) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  param_1[0x1dd] = 0;
  *(undefined4 *)(param_1 + 0x1de) = 0;
  *(undefined4 *)(param_1 + 0x1df) = 0;
  *(undefined4 *)((longlong)param_1 + 0xefc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined1 *)(param_1 + 0x1e1) = 0;
  FName::FName(&local_res8,L"Skills_Unlocked",1);
  param_1[0x121] = local_res8;
  return param_1;
}



// FUNCTION 141023220 FUN_141023220 body=156 status=ok
// SIG undefined FUN_141023220(void)

void FUN_141023220(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x28);
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
  plVar4 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 1410232c0 FUN_1410232c0 body=312 status=ok
// SIG undefined FUN_1410232c0(void)

void FUN_1410232c0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  lVar5 = *param_1;
  iVar7 = (int)param_1[1];
  if (iVar7 != 0) {
    plVar6 = (longlong *)(lVar5 + 0xa8);
    do {
      if (plVar6[2] != 0) {
        FMemory::Free();
      }
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      if (plVar6[-2] != 0) {
        FMemory::Free();
      }
      if (plVar6[-4] != 0) {
        FMemory::Free();
      }
      if (plVar6[-6] != 0) {
        FMemory::Free();
      }
      if (plVar6[-8] != 0) {
        FMemory::Free();
      }
      plVar4 = (longlong *)plVar6[-10];
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
      plVar4 = (longlong *)plVar6[-0xd];
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
      plVar6 = plVar6 + 0x1a;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141023400 ~FBindingList body=102 status=ok
// SIG undefined ~FBindingList(void)

void FBindingList::~FBindingList(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  FUN_1408708d0(param_1 + 2);
  iVar2 = (int)param_1[1];
  lVar1 = *param_1;
  if (iVar2 != 0) {
    lVar1 = lVar1 + 8;
    do {
      FUN_1410232c0(lVar1);
      lVar1 = lVar1 + 0x18;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141023470 FUN_141023470 body=682 status=ok
// SIG undefined FUN_141023470(void)

void FUN_141023470(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x148);
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
  plVar4 = *(longlong **)(param_1 + 0x110);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0xf8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0xe0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 200);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0xb0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x98);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x80);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x68);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  plVar4 = *(longlong **)(param_1 + 0x40);
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
  plVar4 = *(longlong **)(param_1 + 0x30);
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
  plVar4 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 141023720 FUN_141023720 body=388 status=ok
// SIG undefined FUN_141023720(void)

void FUN_141023720(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0xac) != '\0') {
    *(undefined1 *)(param_1 + 0xac) = 0;
  }
  if (*(char *)(param_1 + 0xa0) != '\0') {
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  if (*(char *)(param_1 + 0x94) != '\0') {
    *(undefined1 *)(param_1 + 0x94) = 0;
  }
  if (*(char *)(param_1 + 0x88) != '\0') {
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  plVar4 = *(longlong **)(param_1 + 0x70);
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
  plVar4 = *(longlong **)(param_1 + 0x58);
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
  plVar4 = *(longlong **)(param_1 + 0x40);
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
  plVar4 = *(longlong **)(param_1 + 0x28);
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
  plVar4 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 1410238b0 FUN_1410238b0 body=2743 status=ok
// SIG undefined FUN_1410238b0(void)

void FUN_1410238b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0xf08) != '\0') {
    *(undefined1 *)(param_1 + 0xf08) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xee8);
  plVar3 = *(longlong **)(param_1 + 0xea8);
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
  plVar3 = *(longlong **)(param_1 + 0xe90);
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
  plVar3 = *(longlong **)(param_1 + 0xe78);
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
  plVar3 = *(longlong **)(param_1 + 0xe60);
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
  plVar3 = *(longlong **)(param_1 + 0xe48);
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
  plVar3 = *(longlong **)(param_1 + 0xe30);
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
  plVar3 = *(longlong **)(param_1 + 0xe18);
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
  plVar3 = *(longlong **)(param_1 + 0xe00);
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
  plVar3 = *(longlong **)(param_1 + 0xde8);
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
  plVar3 = *(longlong **)(param_1 + 0xdd0);
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
  plVar3 = *(longlong **)(param_1 + 0xdb8);
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
  plVar3 = *(longlong **)(param_1 + 0xda0);
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
  plVar3 = *(longlong **)(param_1 + 0xd88);
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
  plVar3 = *(longlong **)(param_1 + 0xd70);
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
  plVar3 = *(longlong **)(param_1 + 0xd58);
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
  plVar3 = *(longlong **)(param_1 + 0xd40);
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
  plVar3 = *(longlong **)(param_1 + 0xd28);
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
  plVar3 = *(longlong **)(param_1 + 0xd10);
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
  plVar3 = *(longlong **)(param_1 + 0xcf8);
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
  plVar3 = *(longlong **)(param_1 + 0xce0);
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
  plVar3 = *(longlong **)(param_1 + 0xcc8);
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
  plVar3 = *(longlong **)(param_1 + 0xcb0);
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
  plVar3 = *(longlong **)(param_1 + 0xc98);
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
  plVar3 = *(longlong **)(param_1 + 0xc80);
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
  plVar3 = *(longlong **)(param_1 + 0xc68);
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
  if (*(longlong *)(param_1 + 0xc50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc10) != 0) {
    FMemory::Free();
  }
  plVar3 = *(longlong **)(param_1 + 0xb98);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)(param_1 + 0xb80);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)(param_1 + 0xb68);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)(param_1 + 0xb50);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)(param_1 + 0xb38);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)(param_1 + 0xb20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)(param_1 + 0xb08);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)(param_1 + 0xaf0);
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
  plVar3 = *(longlong **)(param_1 + 0xae0);
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
  plVar3 = *(longlong **)(param_1 + 0xad0);
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
  plVar3 = *(longlong **)(param_1 + 0xac0);
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
  plVar3 = *(longlong **)(param_1 + 0xab0);
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
  plVar3 = *(longlong **)(param_1 + 0xaa0);
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
  plVar3 = *(longlong **)(param_1 + 0xa90);
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
  plVar3 = *(longlong **)(param_1 + 0xa80);
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
  plVar3 = *(longlong **)(param_1 + 0xa70);
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
  plVar3 = *(longlong **)(param_1 + 0xa60);
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
  plVar3 = *(longlong **)(param_1 + 0xa50);
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
  plVar3 = *(longlong **)(param_1 + 0xa40);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)(param_1 + 0xa28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if (*(longlong *)(param_1 + 0xa08) != 0) {
    FMemory::Free();
  }
  FBindingList::~FBindingList(param_1 + 0x980);
  if (*(longlong *)(param_1 + 0x918) != 0) {
    FMemory::Free();
  }
  FUN_141023720(param_1 + 0x840);
  FUN_141023470(param_1 + 0x6e0);
  iVar5 = *(int *)(param_1 + 0x6c8);
  lVar4 = *(longlong *)(param_1 + 0x6c0);
  if (iVar5 != 0) {
    lVar4 = lVar4 + 0x30;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar4);
      lVar4 = lVar4 + 0x40;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar4 = *(longlong *)(param_1 + 0x6c0);
  }
  if (lVar4 != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x6a8) = &PTR_FUN_143fcb7e0;
  FUN_140e9c5f0(param_1);
  return;
}



// FUNCTION 141024370 FUN_141024370 body=790 status=ok
// SIG undefined FUN_141024370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141024370(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  FText::operator=();
  FText::operator=(param_1 + 0x18,param_2 + 0x18);
  FText::operator=(param_1 + 0x30,param_2 + 0x30);
  FText::operator=(param_1 + 0x48,param_2 + 0x48);
  FText::operator=(param_1 + 0x60,param_2 + 0x60);
  FString::operator=(param_1 + 0x78,param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  *(undefined1 *)(param_1 + 0x99) = *(undefined1 *)(param_2 + 0x99);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined1 *)(param_1 + 0xa4) = *(undefined1 *)(param_2 + 0xa4);
  *(undefined1 *)(param_1 + 0xa5) = *(undefined1 *)(param_2 + 0xa5);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  uVar7 = *(undefined4 *)(param_2 + 0xc4);
  uVar8 = *(undefined4 *)(param_2 + 200);
  uVar9 = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0xc4) = uVar7;
  *(undefined4 *)(param_1 + 200) = uVar8;
  *(undefined4 *)(param_1 + 0xcc) = uVar9;
  FUN_140692440(param_1 + 0xd0,param_2 + 0xd0);
  puVar3 = (undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  uVar7 = *(undefined4 *)(param_2 + 0x10c);
  uVar8 = *(undefined4 *)(param_2 + 0x110);
  uVar9 = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x10c) = uVar7;
  *(undefined4 *)(param_1 + 0x110) = uVar8;
  *(undefined4 *)(param_1 + 0x114) = uVar9;
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined1 *)(param_1 + 0x11c) = *(undefined1 *)(param_2 + 0x11c);
  *(undefined1 *)(param_1 + 0x11d) = *(undefined1 *)(param_2 + 0x11d);
  *(undefined1 *)(param_1 + 0x11e) = *(undefined1 *)(param_2 + 0x11e);
  *(undefined1 *)(param_1 + 0x11f) = *(undefined1 *)(param_2 + 0x11f);
  plVar5 = *(longlong **)(param_2 + 0x128);
  uVar6 = *(undefined8 *)(param_2 + 0x120);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_68 = uVar6;
  plStack_60 = plVar5;
  if (&local_68 != puVar3) {
    local_68 = *puVar3;
    plStack_60 = *(longlong **)(param_1 + 0x128);
    *puVar3 = uVar6;
    *(longlong **)(param_1 + 0x128) = plVar5;
    local_48 = uVar6;
    plStack_40 = plVar5;
  }
  plVar5 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  puVar3 = (undefined8 *)(param_1 + 0x148);
  *(byte *)(param_1 + 0x130) =
       *(byte *)(param_1 + 0x130) ^ (*(byte *)(param_2 + 0x130) ^ *(byte *)(param_1 + 0x130)) & 1;
  *(byte *)(param_1 + 0x130) =
       (*(byte *)(param_1 + 0x130) ^ *(byte *)(param_2 + 0x130)) & 2 ^ *(byte *)(param_1 + 0x130);
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  plVar5 = *(longlong **)(param_2 + 0x150);
  uVar6 = *(undefined8 *)(param_2 + 0x148);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_58 = uVar6;
  plStack_50 = plVar5;
  if (&local_58 != puVar3) {
    local_58 = *puVar3;
    plStack_50 = *(longlong **)(param_1 + 0x150);
    *puVar3 = uVar6;
    *(longlong **)(param_1 + 0x150) = plVar5;
    local_38 = uVar6;
    plStack_30 = plVar5;
  }
  plVar5 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
  return param_1;
}



// FUNCTION 141024690 FUN_141024690 body=598 status=ok
// SIG undefined FUN_141024690(void)

void FUN_141024690(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong local_78 [5];
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  cVar6 = FWeakObjectPtr::IsValid(*param_1 + 0x184);
  uVar9 = 0;
  if (cVar6 != '\0') {
    local_78[0] = 0;
    local_78[1] = 0x28;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
    FGenericPlatformString::Memcpy(local_78[0],L"resetPasswordPanelMC.resetPasswordTitle",0x50);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"Reset Password",L"SHiFTMenu",L"ResetPasswordText");
    FUN_142f100e0(*param_1,local_78,uVar7);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    local_78[2] = 0;
    local_78[3] = 0x2e;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78 + 2,0);
    FGenericPlatformString::Memcpy
              (local_78[2],L"resetPasswordPanelMC.resetPasswordDescription",0x5c);
    lVar8 = FWeakObjectPtr::Get(*param_1 + 0x184);
    FUN_142f100e0(*param_1,local_78 + 2,lVar8 + 2000);
    if (local_78[2] != 0) {
      FMemory::Free();
    }
  }
  FUN_141060710(*param_1);
  lVar4 = *param_1;
  lVar8 = lVar4 + 0x184;
  cVar6 = FWeakObjectPtr::IsValid(lVar8);
  if (cVar6 != '\0') {
    lVar5 = *(longlong *)(lVar4 + 0x1f8);
    local_50 = uVar9;
    local_78[4] = lVar5;
    if (lVar5 != 0) {
      uVar7 = UBlendableInterface::GetPrivateStaticClass();
      local_50 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar7);
    }
    uVar7 = FWeakObjectPtr::Get(lVar8);
    FUN_142ecfdd0(uVar7,local_78 + 4,0,*(undefined8 *)(lVar4 + 0x208),0,0);
    lVar5 = *(longlong *)(lVar4 + 0x208);
    local_40 = uVar9;
    local_48 = lVar5;
    if (lVar5 != 0) {
      uVar7 = UBlendableInterface::GetPrivateStaticClass();
      local_40 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar7);
    }
    uVar7 = FWeakObjectPtr::Get(lVar8);
    FUN_142ecfdd0(uVar7,&local_48,*(undefined8 *)(lVar4 + 0x1f8),0,0,0);
    lVar4 = *(longlong *)(lVar4 + 0x1f8);
    local_38 = lVar4;
    if (lVar4 != 0) {
      uVar9 = UBlendableInterface::GetPrivateStaticClass();
      uVar9 = UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar9);
    }
    local_30 = uVar9;
    uVar9 = FWeakObjectPtr::Get(lVar8);
    FUN_142ed36d0(uVar9,&local_38,0);
  }
  return;
}



// FUNCTION 1410248f0 FUN_1410248f0 body=232 status=ok
// SIG undefined FUN_1410248f0(void)

void FUN_1410248f0(longlong *param_1)

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
  
  local_res10 = (undefined4)param_1[2];
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
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      lVar4 = *param_1;
      if (*(longlong **)(lVar4 + 0x690) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar4 + 0x690) + 0x2b8))();
        lVar4 = *param_1;
      }
      uVar5 = FUN_141039eb0(lVar4,(int)param_1[1]);
      *(undefined8 *)(*param_1 + 0x690) = uVar5;
      if (*(longlong *)(*param_1 + 0x690) != 0) {
        FUN_141058b70();
                    /* WARNING: Could not recover jumptable at 0x0001410249cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(*param_1 + 0x690) + 0x2b0))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1410249e0 FUN_1410249e0 body=2402 status=ok
// SIG undefined FUN_1410249e0(void)

void FUN_1410249e0(longlong *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  wchar_t *pwVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  longlong local_res18;
  longlong local_res20;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  
  lVar8 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
  if ((lVar8 != 0) && (lVar8 = FUN_1416f8720((int)param_1[2]), lVar8 != 0)) {
    lVar8 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
    (**(code **)(*(longlong *)(lVar8 + 0x170) + 0x38))((longlong *)(lVar8 + 0x170),0);
    lVar8 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
    FWeakObjectPtr::operator=(lVar8 + 0x368,*(undefined8 *)(*param_1 + 0x2f0));
    lVar9 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
    lVar8 = *param_1;
    FString::operator=(lVar9 + 0x348,lVar8 + 0x3d8);
    uVar2 = *(undefined4 *)(lVar8 + 0x3fc);
    uVar3 = *(undefined4 *)(lVar8 + 0x400);
    uVar4 = *(undefined4 *)(lVar8 + 0x404);
    *(undefined4 *)(lVar9 + 0x358) = *(undefined4 *)(lVar8 + 0x3f8);
    *(undefined4 *)(lVar9 + 0x35c) = uVar2;
    *(undefined4 *)(lVar9 + 0x360) = uVar3;
    *(undefined4 *)(lVar9 + 0x364) = uVar4;
    lVar8 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
    uVar1 = *(uint *)(param_1 + 1);
    uVar20 = 0;
    uVar17 = (ulonglong)uVar1;
    if ((int)uVar1 < 1) {
      uVar17 = uVar20;
    }
    iVar15 = (int)uVar17;
    *(int *)(lVar8 + 0x33c) = iVar15;
    iVar14 = uVar1 + 1;
    if ((int)(uVar1 + 1) <= iVar15) {
      iVar14 = iVar15;
    }
    *(int *)(lVar8 + 0x340) = iVar14;
    lVar8 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
    plVar16 = (longlong *)(lVar8 + 0x308);
    uVar17 = uVar20;
    if (plVar16 <= (longlong *)(lVar8 + 0x330)) {
      do {
        lVar8 = *plVar16;
        if (lVar8 != 0) {
          *(undefined8 *)(lVar8 + 0x458) = 0;
          FUN_141057000(lVar8,0);
        }
        plVar16 = plVar16 + 1;
        uVar17 = uVar17 + 1;
      } while (uVar17 != 5);
    }
    uVar10 = FUN_1416f8720((int)param_1[2]);
    lVar8 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
    *(undefined8 *)(lVar8 + 0x330) = uVar10;
    lVar8 = FUN_1416f8720((int)param_1[2]);
    puVar18 = *(undefined8 **)(lVar8 + 0x38);
    uVar17 = (longlong)*(int *)(lVar8 + 0x40) & 0x1fffffffffffffff;
    if (puVar18 + *(int *)(lVar8 + 0x40) < puVar18) {
      uVar17 = uVar20;
    }
    if (uVar17 != 0) {
      do {
        uVar10 = *puVar18;
        uVar11 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
        lVar8 = FUN_14105c1d0(uVar11,*(undefined8 *)(*param_1 + 0x2e8),uVar10,
                              *(undefined8 *)(*param_1 + 0x2e0));
        if (lVar8 != 0) {
          pwVar12 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnTreeItemFocused",L"::");
          pwVar7 = (wchar_t *)0x0;
          while (pwVar6 = pwVar12, pwVar6 != (wchar_t *)0x0) {
            pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
            pwVar7 = pwVar6;
          }
          FName::FName(&local_res18,pwVar7 + 2,1);
          lVar9 = local_res18;
          FWeakObjectPtr::operator=(lVar8 + 0x1d0,*param_1);
          *(longlong *)(lVar8 + 0x1d8) = lVar9;
          if ((lVar9 != 0) && (lVar9 = FWeakObjectPtr::Get(lVar8 + 0x1d0), lVar9 != 0)) {
            UObject::FindFunction(lVar9,*(undefined8 *)(lVar8 + 0x1d8));
          }
          pwVar12 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnTreeItemPressed",L"::");
          pwVar7 = (wchar_t *)0x0;
          while (pwVar6 = pwVar12, pwVar6 != (wchar_t *)0x0) {
            pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
            pwVar7 = pwVar6;
          }
          FName::FName(&local_res20,pwVar7 + 2,1);
          lVar9 = local_res20;
          FWeakObjectPtr::operator=(lVar8 + 0x1f0,*param_1);
          *(longlong *)(lVar8 + 0x1f8) = lVar9;
          if ((lVar9 != 0) && (lVar9 = FWeakObjectPtr::Get(lVar8 + 0x1f0), lVar9 != 0)) {
            UObject::FindFunction(lVar9,*(undefined8 *)(lVar8 + 0x1f8));
          }
          local_58._0_4_ = 0x4104ccb0;
          local_58._4_4_ = 1;
          uStack_50 = 0;
          FUN_14101ef80(lVar8 + 0x2d8,*param_1,&local_58);
          local_58._0_4_ = 0x4104cdb0;
          local_58._4_4_ = 1;
          uStack_50 = 0;
          FUN_14058c4b0(lVar8 + 0x2c8,*param_1,&local_58);
          lVar9 = *param_1;
          plVar16 = (longlong *)(lVar8 + 0x2e8);
          plVar13 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar13 != (longlong *)0x0) {
            *plVar13 = (longlong)&PTR_FUN_1442cc120;
            FWeakObjectPtr::operator=(plVar13 + 1,lVar9);
            *(undefined4 *)(plVar13 + 2) = 0x4104cb70;
            *(undefined4 *)((longlong)plVar13 + 0x14) = 1;
            *(undefined4 *)(plVar13 + 3) = 0;
            *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_6c;
            lVar9 = FDelegateHandle::GenerateNewID();
            plVar13[5] = lVar9;
            *plVar13 = (longlong)&PTR_FUN_1442cc168;
          }
          if (&local_58 == plVar16) {
LAB_141024d97:
            if (plVar13 != (longlong *)0x0) {
              (**(code **)(*plVar13 + 0x28))(plVar13,0);
              lVar9 = FMemory::Realloc(plVar13,0,0);
              if (lVar9 != 0) {
                FMemory::Free(lVar9);
              }
            }
          }
          else {
            if (plVar13 != (longlong *)0x0) {
              (**(code **)(*plVar13 + 0x30))(plVar13,plVar16);
              goto LAB_141024d97;
            }
            if ((*(int *)(lVar8 + 0x2f0) != 0) &&
               (plVar13 = (longlong *)*plVar16, plVar13 != (longlong *)0x0)) {
              (**(code **)(*plVar13 + 0x28))(plVar13,0);
              if (*plVar16 != 0) {
                lVar9 = FMemory::Realloc(*plVar16,0,0);
                *plVar16 = lVar9;
              }
              *(undefined4 *)(lVar8 + 0x2f0) = 0;
            }
          }
          local_58._0_4_ = 0x4104cd20;
          local_58._4_4_ = 1;
          uStack_50 = 0;
          FUN_1407ffe80(lVar8 + 0x2f8,*param_1,&local_58);
          *(int *)(lVar8 + 0x4a8) = (int)param_1[1];
        }
        puVar18 = puVar18 + 1;
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar17);
    }
    lVar8 = FUN_1416f8720((int)param_1[2]);
    puVar19 = *(undefined8 **)(lVar8 + 0x48);
    puVar18 = puVar19 + *(int *)(lVar8 + 0x50);
    for (; puVar19 != puVar18; puVar19 = puVar19 + 1) {
      uVar10 = *puVar19;
      uVar11 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
      lVar8 = FUN_14105c1d0(uVar11,*(undefined8 *)(*param_1 + 0x2e8),uVar10,
                            *(undefined8 *)(*param_1 + 0x2e0));
      if (lVar8 != 0) {
        pwVar12 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnTreeItemFocused",L"::");
        pwVar7 = (wchar_t *)0x0;
        while (pwVar6 = pwVar12, pwVar6 != (wchar_t *)0x0) {
          pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
          pwVar7 = pwVar6;
        }
        FName::FName(&local_res18,pwVar7 + 2,1);
        lVar9 = local_res18;
        FWeakObjectPtr::operator=(lVar8 + 0x1d0,*param_1);
        *(longlong *)(lVar8 + 0x1d8) = lVar9;
        if ((lVar9 != 0) && (lVar9 = FWeakObjectPtr::Get(lVar8 + 0x1d0), lVar9 != 0)) {
          UObject::FindFunction(lVar9,*(undefined8 *)(lVar8 + 0x1d8));
        }
        pwVar12 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnTreeItemPressed",L"::");
        pwVar7 = (wchar_t *)0x0;
        while (pwVar6 = pwVar12, pwVar6 != (wchar_t *)0x0) {
          pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
          pwVar7 = pwVar6;
        }
        FName::FName(&local_res20,pwVar7 + 2,1);
        lVar9 = local_res20;
        FWeakObjectPtr::operator=(lVar8 + 0x1f0,*param_1);
        *(longlong *)(lVar8 + 0x1f8) = lVar9;
        if ((lVar9 != 0) && (lVar9 = FWeakObjectPtr::Get(lVar8 + 0x1f0), lVar9 != 0)) {
          UObject::FindFunction(lVar9,*(undefined8 *)(lVar8 + 0x1f8));
        }
        lVar9 = *param_1;
        plVar16 = (longlong *)(lVar8 + 0x2d8);
        plVar13 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar13 != (longlong *)0x0) {
          *plVar13 = (longlong)&PTR_FUN_14428ae88;
          FWeakObjectPtr::operator=(plVar13 + 1,lVar9);
          *(undefined4 *)(plVar13 + 2) = 0x4104ccb0;
          *(undefined4 *)((longlong)plVar13 + 0x14) = 1;
          *(undefined4 *)(plVar13 + 3) = 0;
          *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_5c;
          lVar9 = FDelegateHandle::GenerateNewID();
          plVar13[5] = lVar9;
          *plVar13 = (longlong)&PTR_FUN_14428aed0;
        }
        if (&local_58 == plVar16) {
LAB_141025001:
          if (plVar13 != (longlong *)0x0) {
            (**(code **)(*plVar13 + 0x28))(plVar13,0);
            lVar9 = FMemory::Realloc(plVar13,0,0);
            if (lVar9 != 0) {
              FMemory::Free(lVar9);
            }
          }
        }
        else {
          if (plVar13 != (longlong *)0x0) {
            (**(code **)(*plVar13 + 0x30))(plVar13,plVar16);
            goto LAB_141025001;
          }
          if ((*(int *)(lVar8 + 0x2e0) != 0) &&
             (plVar13 = (longlong *)*plVar16, plVar13 != (longlong *)0x0)) {
            (**(code **)(*plVar13 + 0x28))(plVar13,0);
            if (*plVar16 != 0) {
              lVar9 = FMemory::Realloc(*plVar16,0,0);
              *plVar16 = lVar9;
            }
            *(undefined4 *)(lVar8 + 0x2e0) = 0;
          }
        }
        lVar9 = *param_1;
        plVar16 = (longlong *)(lVar8 + 0x2c8);
        plVar13 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar13 != (longlong *)0x0) {
          *plVar13 = (longlong)&PTR_FUN_143fcfec0;
          FWeakObjectPtr::operator=(plVar13 + 1,lVar9);
          *(undefined4 *)(plVar13 + 2) = 0x4104cdb0;
          *(undefined4 *)((longlong)plVar13 + 0x14) = 1;
          *(undefined4 *)(plVar13 + 3) = 0;
          *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_6c;
          lVar9 = FDelegateHandle::GenerateNewID();
          plVar13[5] = lVar9;
          *plVar13 = (longlong)&PTR_FUN_143fcff08;
        }
        if (&local_58 == plVar16) {
LAB_1410250ac:
          if (plVar13 != (longlong *)0x0) {
            (**(code **)(*plVar13 + 0x28))(plVar13,0);
            lVar9 = FMemory::Realloc(plVar13,0,0);
            if (lVar9 != 0) {
              FMemory::Free(lVar9);
            }
          }
        }
        else {
          if (plVar13 != (longlong *)0x0) {
            (**(code **)(*plVar13 + 0x30))(plVar13,plVar16);
            goto LAB_1410250ac;
          }
          if ((*(int *)(lVar8 + 0x2d0) != 0) &&
             (plVar13 = (longlong *)*plVar16, plVar13 != (longlong *)0x0)) {
            (**(code **)(*plVar13 + 0x28))(plVar13,0);
            if (*plVar16 != 0) {
              lVar9 = FMemory::Realloc(*plVar16,0,0);
              *plVar16 = lVar9;
            }
            *(undefined4 *)(lVar8 + 0x2d0) = 0;
          }
        }
        lVar9 = *param_1;
        plVar16 = (longlong *)(lVar8 + 0x2f8);
        plVar13 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar13 != (longlong *)0x0) {
          *plVar13 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar13 + 1,lVar9);
          *(undefined4 *)(plVar13 + 2) = 0x4104cd20;
          *(undefined4 *)((longlong)plVar13 + 0x14) = 1;
          *(undefined4 *)(plVar13 + 3) = 0;
          *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_7c;
          lVar9 = FDelegateHandle::GenerateNewID();
          plVar13[5] = lVar9;
          *plVar13 = (longlong)&PTR_FUN_143f77bd0;
        }
        if (&local_58 == plVar16) {
LAB_141025157:
          if (plVar13 != (longlong *)0x0) {
            (**(code **)(*plVar13 + 0x28))(plVar13,0);
            lVar9 = FMemory::Realloc(plVar13,0,0);
            if (lVar9 != 0) {
              FMemory::Free(lVar9);
            }
          }
        }
        else {
          if (plVar13 != (longlong *)0x0) {
            (**(code **)(*plVar13 + 0x30))(plVar13,plVar16);
            goto LAB_141025157;
          }
          if ((*(int *)(lVar8 + 0x300) != 0) &&
             (plVar13 = (longlong *)*plVar16, plVar13 != (longlong *)0x0)) {
            (**(code **)(*plVar13 + 0x28))(plVar13,0);
            if (*plVar16 != 0) {
              lVar9 = FMemory::Realloc(*plVar16,0,0);
              *plVar16 = lVar9;
            }
            *(undefined4 *)(lVar8 + 0x300) = 0;
          }
        }
        lVar9 = param_1[1];
        *(int *)(lVar8 + 0x4a8) = (int)lVar9;
        if (((*(char *)(lVar8 + 0x5b0) != '\0') && (0 < (int)lVar9)) &&
           (lVar8 = *(longlong *)(*param_1 + 0x38), lVar8 != 0)) {
          lVar9 = FUN_14139c4f0();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            *(undefined1 *)(lVar8 + 0x6bd) = 1;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141025350 FUN_141025350 body=268 status=ok
// SIG undefined FUN_141025350(void)

void FUN_141025350(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  
  lVar3 = FWeakObjectPtr::Get(*param_1 + 0x5c8);
  if (lVar3 != 0) {
    lVar4 = FUN_14142a560();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar4 = *param_1;
      plVar7 = (longlong *)(lVar3 + 0x7c8);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143f4d170;
        FWeakObjectPtr::operator=(plVar5 + 1,lVar4);
        plVar5[2] = (longlong)FUN_14104c8b0;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar5[4] = lVar4;
        *plVar5 = (longlong)&PTR_FUN_143f4d1b8;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
        (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
        iVar1 = *(int *)(lVar3 + 2000);
        *(int *)(lVar3 + 2000) = iVar1 + 1;
        if (*(int *)(lVar3 + 0x7d4) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
        }
        puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar7);
        *puVar6 = plVar5;
        *(undefined4 *)(puVar6 + 1) = 3;
      }
    }
  }
  return;
}



// FUNCTION 141025460 FUN_141025460 body=1005 status=ok
// SIG undefined FUN_141025460(void)

void FUN_141025460(longlong *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined8 local_res8;
  
  lVar3 = FWeakObjectPtr::Get(*param_1 + 0x5c8);
  pwVar8 = (wchar_t *)0x0;
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
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnInputDeviceChanged",L"::");
      pwVar7 = pwVar8;
      while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar7 = pwVar2;
      }
      FName::FName(&local_res8,pwVar7 + 2,1);
      FUN_14074ba20(lVar3 + 0x5f8,*param_1,FUN_14104c8b0,local_res8);
    }
  }
  lVar3 = *param_1;
  if (*(longlong *)(lVar3 + 0x630) != 0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::UpdateCachedAmmoComponent",L"::");
    pwVar7 = pwVar8;
    while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar7 = pwVar2;
    }
    FName::FName(&local_res8,pwVar7 + 2,1);
    FUN_14074ba20(*(longlong *)(*param_1 + 0x630) + 0x510,*param_1,FUN_141063ea0,local_res8);
    FUN_141063ea0(*param_1);
    lVar3 = *param_1;
  }
  lVar3 = FWeakObjectPtr::Get(lVar3 + 0x5e0);
  if (lVar3 != 0) {
    lVar4 = FUN_1413f82e0();
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
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnWeaponChanged",L"::");
      pwVar7 = pwVar8;
      while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar7 = pwVar2;
      }
      FName::FName(&local_res8,pwVar7 + 2,1);
      FUN_14074ba20(lVar3 + 0x1050,*param_1,FUN_141052c00,local_res8);
      if (*(longlong *)(*param_1 + 0x630) == 0) {
        uVar6 = FUN_140c46a10(lVar3,0);
        FUN_141052c00(*param_1,uVar6,0);
      }
      lVar3 = *(longlong *)(lVar3 + 0x900);
      if (lVar3 != 0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnLadderExit",L"::");
        pwVar7 = pwVar8;
        while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
          pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar7 = pwVar2;
        }
        FName::FName(&local_res8,pwVar7 + 2,1);
        FUN_14074ba20(lVar3 + 0x11a0,*param_1,&LAB_14104ce20,local_res8);
        pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnLadderExit",L"::");
        pwVar7 = pwVar8;
        while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
          pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar7 = pwVar2;
        }
        FName::FName(&local_res8,pwVar7 + 2,1);
        FUN_14074ba20(lVar3 + 0x11b0,*param_1,&LAB_14104ce20,local_res8);
        pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnLadderExit",L"::");
        pwVar7 = pwVar8;
        while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
          pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar7 = pwVar2;
        }
        FName::FName(&local_res8,pwVar7 + 2,1);
        FUN_14074ba20(lVar3 + 0x11c0,*param_1,&LAB_14104ce20,local_res8);
        pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnLadderEnter",L"::");
        while (pwVar5 = pwVar7, pwVar5 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
          pwVar8 = pwVar5;
        }
        FName::FName(&local_res8,pwVar8 + 2,1);
        FUN_14074ba20(lVar3 + 0x1190,*param_1,&LAB_14104ce00,local_res8);
      }
    }
  }
  return;
}



// FUNCTION 141025850 FUN_141025850 body=1005 status=ok
// SIG undefined FUN_141025850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141025850(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
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
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    return;
  }
  lVar3 = (**(code **)(*(longlong *)param_1[8] + 0x148))();
  if (lVar3 == 0) {
    return;
  }
  iVar2 = (int)param_1[7];
  if (iVar2 < 0) {
    return;
  }
  if (iVar2 < 4) {
    lVar3 = FUN_140f578e0(*param_1);
    if (lVar3 == 0) {
      return;
    }
    iVar2 = (int)param_1[7];
    if (iVar2 < 0) {
      return;
    }
    if (*(int *)(lVar3 + 0x26d8) <= iVar2) {
      return;
    }
    if (*(longlong *)(*(longlong *)(lVar3 + 0x26d0) + (longlong)iVar2 * 8) == 0) {
      return;
    }
    FUN_140d08950(param_1[8]);
  }
  else {
    if (iVar2 != 4) {
      if (iVar2 == 5) {
        local_c0 = FUN_140cf7850;
        local_c8 = 0;
        uStack_b8 = 0;
        lVar3 = (**(code **)(*(longlong *)param_1[8] + 0x148))();
        if (*(longlong *)(lVar3 + 400) == 0) {
          uVar5 = *(undefined8 *)(lVar3 + 0x3f8);
        }
        else {
          uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
        }
        lVar3 = param_1[8];
        uVar1 = *(undefined4 *)(*param_1 + 0x6a0);
        plVar4 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar4 != (longlong *)0x0) {
          *plVar4 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar4 + 1,lVar3);
          *(undefined4 *)(plVar4 + 2) = (undefined4)local_c0;
          *(undefined4 *)((longlong)plVar4 + 0x14) = local_c0._4_4_;
          *(undefined4 *)(plVar4 + 3) = uStack_b8;
          *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_b4;
          lVar3 = FDelegateHandle::GenerateNewID();
          plVar4[5] = lVar3;
          *plVar4 = (longlong)&PTR_FUN_143f77bd0;
        }
        local_a8 = 0;
        local_a0 = 0;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x30))(plVar4,&local_a8);
        }
        FWeakObjectPtr::operator=(local_98,0);
        local_d0 = 0xbf800000;
        local_d8 = 0;
        local_90 = 0;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar5,&local_c8,&local_a8,uVar1);
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
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          lVar3 = FMemory::Realloc(plVar4,0,0);
          if (lVar3 != 0) {
            FMemory::Free(lVar3);
          }
        }
        FUN_142eb3990(*param_1);
        return;
      }
      if (iVar2 != 6) {
        return;
      }
      FUN_142eb3990(*param_1);
      FUN_140cf9d90(param_1[8]);
      return;
    }
    FUN_140d18be0(param_1[8]);
  }
  local_c0 = FUN_142eb3990;
  local_c8 = 0;
  uStack_b8 = 0;
  lVar3 = (**(code **)(*(longlong *)param_1[8] + 0x148))();
  if (*(longlong *)(lVar3 + 400) == 0) {
    uVar5 = *(undefined8 *)(lVar3 + 0x3f8);
  }
  else {
    uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
  }
  lVar3 = *param_1;
  uVar1 = *(undefined4 *)(lVar3 + 0x6a0);
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar4 + 1,lVar3);
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_c0;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_c0._4_4_;
    *(undefined4 *)(plVar4 + 3) = uStack_b8;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_b4;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar3;
    *plVar4 = (longlong)&PTR_FUN_143f77bd0;
  }
  local_a8 = 0;
  local_a0 = 0;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_a8);
  }
  FWeakObjectPtr::operator=(local_98,0);
  local_d0 = 0xbf800000;
  local_d8 = 0;
  local_90 = 0;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  local_88 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar5,&local_c8,&local_a8,uVar1);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    lVar3 = FMemory::Realloc(plVar4,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 141025c40 FUN_141025c40 body=1084 status=ok
// SIG undefined FUN_141025c40(void)

void FUN_141025c40(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong **pplVar11;
  int iVar12;
  longlong *plVar13;
  bool bVar14;
  longlong *local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong *local_108;
  undefined8 local_100;
  longlong *local_f8 [2];
  longlong local_e8 [2];
  undefined1 *local_d8 [2];
  undefined1 local_c8 [32];
  undefined8 local_a8;
  undefined4 local_98;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  plVar13 = (longlong *)((longlong)param_2 * 0x40 + *(longlong *)(*param_1 + 0x6c0));
  FString::PrintfImpl(local_e8,L"branch%d",param_2);
  lVar6 = *param_1;
  local_118 = FUN_1410423e0;
  uStack_110 = (longlong *)((ulonglong)uStack_110._4_4_ << 0x20);
  pplVar11 = (longlong **)(plVar13 + 6);
  plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_f8[0] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar5 + 1,lVar6);
    *(undefined4 *)(plVar5 + 2) = (undefined4)local_118;
    *(undefined4 *)((longlong)plVar5 + 0x14) = local_118._4_4_;
    *(undefined4 *)(plVar5 + 3) = (undefined4)uStack_110;
    *(uint *)((longlong)plVar5 + 0x1c) = uStack_110._4_4_;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[5] = lVar6;
    *plVar5 = (longlong)&PTR_FUN_143fcff08;
  }
  if (local_f8 != pplVar11) {
    if (plVar5 == (longlong *)0x0) {
      if (((int)plVar13[7] != 0) && (plVar7 = *pplVar11, plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        if (*pplVar11 != (longlong *)0x0) {
          plVar7 = (longlong *)FMemory::Realloc(*pplVar11,0,0);
          *pplVar11 = plVar7;
        }
        *(undefined4 *)(plVar13 + 7) = 0;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,pplVar11);
    }
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    local_f8[0] = (longlong *)FMemory::Realloc(plVar5,0,0);
    if (local_f8[0] != (longlong *)0x0) {
      FMemory::Free(local_f8[0]);
    }
  }
  local_108 = (longlong *)0x0;
  local_100 = 0;
  uVar4 = FUN_142ebe120(*param_1);
  pplVar11 = &local_108;
  lVar6 = *(longlong *)(*param_1 + 0xbd0);
  lVar8 = FUN_140e96f30(*param_1,local_e8,0,6,pplVar11);
  *(undefined1 *)((longlong)plVar13 + 0x29) = uVar4;
  *plVar13 = lVar8;
  if ((lVar8 != 0) && (lVar6 != 0)) {
    uVar9 = UPlatformGameInstance::StaticClass();
    local_a8 = 0;
    local_98 = 0;
    puVar10 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
    if (puVar10 != (undefined8 *)0x0) {
      puVar10[1] = plVar13;
      *puVar10 = &PTR_FUN_143f77b70;
    }
    local_d8[0] = &LAB_141032480;
    lVar6 = FUN_140ecde40(*plVar13,lVar6,local_d8,uVar9,(ulonglong)pplVar11 & 0xffffffff00000000);
    plVar13[1] = lVar6;
  }
  plVar5 = local_108;
  for (iVar12 = (int)local_100; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free(local_108);
  }
  if ((param_2 < 1) || (lVar6 = *plVar13, lVar6 == 0)) goto LAB_141026052;
  if ((*(longlong *)(lVar6 + 0x28) == 0) || (*(longlong *)(lVar6 + 0x30) == 0)) {
LAB_141025ed6:
    pplVar11 = (longlong **)&local_118;
    local_118 = (code *)0x0;
    uStack_110 = (longlong *)0x0;
    bVar3 = false;
    bVar14 = true;
    plVar5 = (longlong *)0x0;
  }
  else {
    piVar1 = (int *)(*(longlong *)(lVar6 + 0x30) + 8);
    LOCK();
    iVar12 = *piVar1;
    if (iVar12 == 0) {
      *piVar1 = 0;
      iVar12 = 0;
    }
    UNLOCK();
    if (iVar12 < 1) goto LAB_141025ed6;
    local_120 = *(longlong **)(lVar6 + 0x30);
    local_128 = (longlong *)0x0;
    if (local_120 != (longlong *)0x0) {
      LOCK();
      iVar12 = (int)local_120[1];
      bVar14 = iVar12 == 0;
      if (bVar14) {
        *(int *)(local_120 + 1) = 0;
        iVar12 = 0;
      }
      UNLOCK();
      while (!bVar14) {
        LOCK();
        bVar14 = iVar12 == (int)local_120[1];
        if (bVar14) {
          *(int *)(local_120 + 1) = iVar12 + 1;
        }
        UNLOCK();
        if (bVar14) {
          local_128 = *(longlong **)(lVar6 + 0x28);
          pplVar11 = &local_128;
          bVar3 = true;
          bVar14 = false;
          plVar5 = local_128;
          goto LAB_141025eed;
        }
        LOCK();
        iVar12 = (int)local_120[1];
        bVar14 = iVar12 == 0;
        if (bVar14) {
          *(int *)(local_120 + 1) = 0;
          iVar12 = 0;
        }
        UNLOCK();
      }
      local_120 = (longlong *)0x0;
    }
    pplVar11 = &local_128;
    bVar3 = true;
    bVar14 = false;
    plVar5 = (longlong *)0x0;
  }
LAB_141025eed:
  plVar13 = pplVar11[1];
  pplVar11[1] = (longlong *)0x0;
  *pplVar11 = (longlong *)0x0;
  plVar7 = uStack_110;
  if ((bVar14) && (uStack_110 != (longlong *)0x0)) {
    LOCK();
    plVar2 = uStack_110 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*uStack_110)(uStack_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*uStack_110 + 8))(uStack_110,1);
      }
    }
  }
  plVar7 = local_120;
  if ((bVar3) && (local_120 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_120 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    local_58 = 0;
    local_48 = 0;
    puVar10 = (undefined8 *)FUN_140438ef0(0x18,local_78);
    plVar7 = plVar13;
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &PTR_FUN_14461b758;
      puVar10[1] = plVar5;
      puVar10[2] = plVar13;
      plVar7 = (longlong *)0x0;
    }
    local_88[0] = &LAB_1410322a0;
    FUN_14208c4f0(*param_1,local_88);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar7 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar13 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
LAB_141026052:
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141026080 FUN_141026080 body=150 status=ok
// SIG undefined FUN_141026080(void)

void FUN_141026080(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 8);
  local_res14 = *(undefined4 *)(param_1 + 0xc);
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
      FUN_14102c230(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 141026120 FUN_141026120 body=495 status=ok
// SIG undefined FUN_141026120(void)

void FUN_141026120(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_58 [4];
  undefined1 local_38 [8];
  longlong *local_30;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar4 != '\0') {
    lVar6 = FWeakObjectPtr::Get(&local_res10);
    lVar8 = 0;
    iVar3 = *(int *)(lVar6 + 0xc);
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar9 = iVar3 >> 0x1f & 0xffff;
      uVar5 = iVar3 + uVar9;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar9) * 0x18;
    }
    if ((*(uint *)(lVar8 + 8) & 0x30000000) == 0) {
      local_58[0] = 0;
      local_58[1] = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
      FGenericPlatformString::Memcpy(local_58[0],L"pageTitle",0x14);
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_38,L"SHiFT CODE",L"SHiFTMenu",L"SHiFTCodeText");
      FUN_142f100e0(*param_1,local_58,uVar7);
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
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      cVar4 = FWeakObjectPtr::IsValid(*param_1 + 0x184);
      if (cVar4 != '\0') {
        local_58[2] = 0;
        local_58[3] = 0x10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58 + 2,0);
        FGenericPlatformString::Memcpy(local_58[2],L"pageDescription",0x20);
        lVar8 = FWeakObjectPtr::Get(*param_1 + 0x184);
        FUN_142f100e0(*param_1,local_58 + 2,lVar8 + 0x800);
        if (local_58[2] != 0) {
          FMemory::Free();
        }
      }
      FUN_14105f320(*param_1);
      FUN_1410595b0(*param_1);
    }
  }
  return;
}



// FUNCTION 141026310 FUN_141026310 body=335 status=ok
// SIG undefined FUN_141026310(void)

void FUN_141026310(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  undefined4 uStack_1c;
  
  lVar5 = FUN_1410833d0(*param_1);
  if (lVar5 != 0) {
    uVar9 = *param_1;
    plVar1 = (longlong *)(lVar5 + 0x9e8);
    plVar6 = (longlong *)*plVar1;
    plVar10 = plVar6 + (longlong)*(int *)(lVar5 + 0x9f0) * 2;
    if (plVar6 != plVar10) {
      do {
        if ((((int)plVar6[1] != 0) && (plVar3 = (longlong *)*plVar6, plVar3 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar3 + 8))(plVar3,uVar9), cVar4 != '\0')) goto LAB_141026431;
        plVar6 = plVar6 + 2;
      } while (plVar6 != plVar10);
      uVar9 = *param_1;
    }
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar6 + 1,uVar9);
      *(undefined4 *)(plVar6 + 2) = 0x4103cb50;
      *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
      *(undefined4 *)(plVar6 + 3) = 0;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_1c;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar6[5] = lVar7;
      *plVar6 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      (**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
      iVar2 = *(int *)(lVar5 + 0x9f0);
      *(int *)(lVar5 + 0x9f0) = iVar2 + 1;
      if (*(int *)(lVar5 + 0x9f4) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar8 = plVar6;
      *(undefined4 *)(puVar8 + 1) = 3;
    }
LAB_141026431:
    FUN_1411f9ae0(lVar5 + 0x6e0,2,0);
  }
  return;
}



// FUNCTION 141026460 FUN_141026460 body=929 status=ok
// SIG undefined FUN_141026460(void)

void FUN_141026460(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined8 local_res20;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *plStack_50;
  
  bVar6 = false;
  AcquireSRWLockShared((PSRWLOCK)(*param_1 + 0xbe8));
  lVar10 = *(longlong *)(*param_1 + 0xbf0);
  ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 0xbe8));
  if (((param_1[1] != 0) && (lVar10 != 0)) && (lVar3 = *param_1, 0 < *(int *)(lVar3 + 0xc58))) {
    plVar14 = *(longlong **)(lVar3 + 0xc50);
    plVar13 = plVar14 + *(int *)(lVar3 + 0xc58);
    if (plVar14 != plVar13) {
      do {
        lVar3 = *plVar14;
        if ((*(longlong *)(lVar3 + 0x28) == 0) || (*(longlong *)(lVar3 + 0x30) == 0)) {
LAB_14102658d:
          plVar9 = &local_58;
          local_58 = 0;
          plStack_50 = (longlong *)0x0;
          lVar11 = 0;
          bVar5 = false;
          bVar16 = true;
        }
        else {
          piVar1 = (int *)(*(longlong *)(lVar3 + 0x30) + 8);
          LOCK();
          iVar8 = *piVar1;
          if (iVar8 == 0) {
            *piVar1 = 0;
            iVar8 = 0;
          }
          UNLOCK();
          if (iVar8 < 1) goto LAB_14102658d;
          local_60 = *(longlong **)(lVar3 + 0x30);
          local_68 = 0;
          if (local_60 == (longlong *)0x0) {
LAB_14102657c:
            plVar9 = &local_68;
            bVar5 = true;
            bVar16 = false;
            lVar11 = local_68;
          }
          else {
            LOCK();
            iVar8 = (int)local_60[1];
            bVar16 = iVar8 == 0;
            if (bVar16) {
              *(int *)(local_60 + 1) = 0;
              iVar8 = 0;
            }
            UNLOCK();
            while (!bVar16) {
              LOCK();
              bVar16 = iVar8 == (int)local_60[1];
              if (bVar16) {
                *(int *)(local_60 + 1) = iVar8 + 1;
              }
              UNLOCK();
              if (bVar16) {
                if (local_60 != (longlong *)0x0) {
                  local_68 = *(longlong *)(lVar3 + 0x28);
                }
                goto LAB_14102657c;
              }
              LOCK();
              iVar8 = (int)local_60[1];
              bVar16 = iVar8 == 0;
              if (bVar16) {
                *(int *)(local_60 + 1) = 0;
                iVar8 = 0;
              }
              UNLOCK();
            }
            plVar9 = &local_68;
            local_60 = (longlong *)0x0;
            bVar5 = true;
            bVar16 = false;
            lVar11 = 0;
          }
        }
        plVar4 = (longlong *)plVar9[1];
        plVar9[1] = 0;
        *plVar9 = 0;
        plVar9 = plStack_50;
        if ((bVar16) && (plStack_50 != (longlong *)0x0)) {
          LOCK();
          plVar2 = plStack_50 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_50)(plStack_50);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plStack_50 + 8))(plStack_50,1);
            }
          }
        }
        plVar9 = local_60;
        if ((bVar5) && (local_60 != (longlong *)0x0)) {
          LOCK();
          plVar2 = local_60 + 1;
          lVar7 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_60 + 8))(local_60,1);
            }
          }
        }
        if ((lVar11 != param_1[1]) || (bVar6)) {
          bVar16 = false;
        }
        else {
          bVar16 = true;
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar4 + 1;
          lVar11 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
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
        if (bVar16) {
          FUN_1410626a0(*param_1,lVar3,*(undefined8 *)(lVar10 + 0x458));
          bVar6 = true;
        }
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar13);
      if (bVar6) goto LAB_1410266dd;
    }
  }
  FUN_141065c60(*param_1,1);
LAB_1410266dd:
  lVar10 = *param_1;
  uVar12 = 0;
  plVar13 = *(longlong **)(lVar10 + 0xc30);
  uVar15 = (longlong)*(int *)(lVar10 + 0xc38) & 0x1fffffffffffffff;
  if (plVar13 + *(int *)(lVar10 + 0xc38) < plVar13) {
    uVar15 = uVar12;
  }
  if (uVar15 != 0) {
    do {
      lVar10 = *plVar13;
      if (lVar10 != 0) {
        FName::FName(&local_res20,L"OnSlotButtonHovered",1);
        FWeakObjectPtr::operator=(lVar10 + 0x210,*param_1);
        *(undefined8 *)(lVar10 + 0x218) = local_res20;
        *(undefined1 *)(lVar10 + 0x198) = 1;
      }
      plVar13 = plVar13 + 1;
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar15);
    lVar10 = *param_1;
  }
  if ((((*(longlong *)(lVar10 + 0xec0) != 0) && (lVar10 = FUN_1410833d0(), lVar10 != 0)) &&
      (lVar10 = FUN_1410833d0(*param_1), *(longlong *)(lVar10 + 0xa88) != 0)) &&
     (lVar10 = FUN_142eee1b0(), lVar10 != 0)) {
    FUN_142f06340(lVar10,*param_1 + 0xec0);
    *(undefined8 *)(*param_1 + 0xec0) = 0;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(*param_1 + 0xbe8));
  *(undefined8 *)(*param_1 + 0xbf0) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)(*param_1 + 0xbe8));
  lVar10 = *param_1;
  *(undefined4 *)(lVar10 + 0xc58) = 0;
  if (0x7fffffff < *(uint *)(lVar10 + 0xc5c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(lVar10 + 0xc50,0);
  }
  return;
}



// FUNCTION 141026810 FUN_141026810 body=150 status=ok
// SIG undefined FUN_141026810(void)

void FUN_141026810(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 8);
  local_res14 = *(undefined4 *)(param_1 + 0xc);
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
      FUN_14102d110(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1410268b0 FUN_1410268b0 body=1045 status=ok
// SIG undefined FUN_1410268b0(void)

void FUN_1410268b0(undefined4 *param_1)

{
  char cVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  
  lVar5 = FUN_1416f8720(*param_1);
  if (lVar5 == 0) {
    return;
  }
  lVar5 = FUN_1416f8720(*param_1);
  iVar11 = *(int *)(lVar5 + 0xc);
  if (iVar11 < (int)DAT_1469e91c4) {
    uVar10 = iVar11 >> 0x1f & 0xffff;
    uVar4 = iVar11 + uVar10;
    lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar10) * 0x18;
  }
  else {
    lVar5 = 0;
  }
  if ((*(uint *)(lVar5 + 8) & 0x30000000) != 0) {
    return;
  }
  lVar5 = FUN_1416f8720(param_1[1]);
  if (lVar5 == 0) {
    return;
  }
  lVar5 = FUN_1416f8720(param_1[1]);
  lVar5 = *(longlong *)(lVar5 + 0x458);
  if (lVar5 == 0) {
    return;
  }
  lVar6 = FUN_1416f8720(param_1[1]);
  lVar7 = FUN_14144ecc0();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((bVar3) && (plVar2 = *(longlong **)(lVar5 + 0x88), plVar2 != (longlong *)0x0)) {
    lVar7 = plVar2[0x1f];
    if (lVar7 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar7 = plVar2[0x1f];
      if (lVar7 == 0) goto LAB_141026b60;
    }
    lVar8 = UUGLoadoutBarUW::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar8 = lVar6 + 0x550;
      if (*(char *)(lVar6 + 0x5b0) == '\0') {
        uVar9 = FUN_1404b03b0();
        FText::operator=(lVar8,uVar9);
        uVar9 = FUN_1416f8720(*param_1);
        uVar9 = FUN_140e97230(uVar9);
        FUN_1409a07f0(lVar7,uVar9,0,1,lVar8);
      }
      else {
        uVar9 = FUN_1416f8720(*param_1);
        uVar9 = FUN_140e97230(uVar9);
        FUN_1409a07f0(lVar7,uVar9,0,1,lVar8);
        uVar9 = FUN_1404b03b0();
        FText::operator=(lVar6 + 0x568,uVar9);
      }
    }
    lVar8 = FUN_1414425d0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      iVar11 = *(int *)(lVar6 + 0x598) + *(int *)(lVar6 + 0x580);
      if (iVar11 < 1) {
        uVar9 = FUN_1404b03b0();
        FText::operator=(lVar6 + 0x550,uVar9);
      }
      else {
        uVar9 = FUN_1416f8720(*param_1);
        uVar9 = FUN_140e97230(uVar9);
        FUN_1409a0f80(lVar7,uVar9,iVar11,0,1,lVar6 + 0x550);
      }
      if (*(int *)(lVar6 + 0x580) < *(int *)(lVar6 + 0x58c)) {
        uVar9 = FUN_1416f8720(*param_1);
        uVar9 = FUN_140e97230(uVar9);
        FUN_1409a0f80(lVar7,uVar9,iVar11 + 1,0,1,lVar6 + 0x568);
      }
      else {
        uVar9 = FUN_1404b03b0();
        FText::operator=(lVar6 + 0x568,uVar9);
      }
    }
  }
LAB_141026b60:
  lVar7 = FUN_14144ee20();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((bVar3) && (lVar7 = *(longlong *)(lVar5 + 0x88), lVar7 != 0)) {
    cVar1 = *(char *)(lVar6 + 0x5b0);
    uVar9 = FUN_1416f8720(*param_1);
    lVar8 = lVar6 + 0x550;
    uVar9 = FUN_140e97230(uVar9);
    if (cVar1 == '\0') {
      FUN_1409a0840(lVar7,uVar9,0,1,lVar6 + 0x568);
      uVar9 = FUN_1404b03b0();
    }
    else {
      FUN_1409a0840(lVar7,uVar9,0,1,lVar8);
      uVar9 = FUN_1404b03b0();
      lVar8 = lVar6 + 0x568;
    }
    FText::operator=(lVar8,uVar9);
  }
  lVar7 = FUN_14144ef80();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((bVar3) && (lVar5 = *(longlong *)(lVar5 + 0x88), lVar5 != 0)) {
    cVar1 = *(char *)(lVar6 + 0x5b0);
    uVar9 = FUN_1416f8720(*param_1);
    lVar7 = lVar6 + 0x550;
    uVar9 = FUN_140e97230(uVar9);
    if (cVar1 == '\0') {
      FUN_140e45b10(lVar5,uVar9,0,1,lVar6 + 0x568);
      uVar9 = FUN_1404b03b0();
    }
    else {
      FUN_140e45b10(lVar5,uVar9,0,1,lVar7);
      uVar9 = FUN_1404b03b0();
      lVar7 = lVar6 + 0x568;
    }
    FText::operator=(lVar7,uVar9);
  }
  return;
}



// FUNCTION 141026cd0 FUN_141026cd0 body=669 status=ok
// SIG undefined FUN_141026cd0(void)

void FUN_141026cd0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong local_88 [7];
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  local_88[1] = 0x14;
  uVar8 = 0;
  local_88[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_88,0);
  FGenericPlatformString::Memcpy(local_88[0],L"offlineMC.pageTitle",0x28);
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_38,L"Welcome to SHiFT!",L"SHiFTMenuUnavailblePage",L"WelcomeSHiFT");
  FUN_142f100e0(*param_1,local_88,uVar6);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  local_88[2] = 0;
  local_88[3] = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_88 + 2,0);
  FGenericPlatformString::Memcpy(local_88[2],L"offlineMC.retryProgress",0x30);
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_20,L"Retrying",L"SHiFTMenuUnavailblePage",L"Retrying");
  FUN_142f100e0(*param_1,local_88 + 2,uVar6);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  if (local_88[2] != 0) {
    FMemory::Free();
  }
  cVar5 = FWeakObjectPtr::IsValid(*param_1 + 0x184);
  if (cVar5 != '\0') {
    local_88[4] = 0;
    local_88[5] = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_88 + 4,0);
    FGenericPlatformString::Memcpy(local_88[4],L"offlineMC.description",0x2c);
    lVar7 = FWeakObjectPtr::Get(*param_1 + 0x184);
    FUN_142f100e0(*param_1,local_88 + 4,lVar7 + 0x878);
    if (local_88[4] != 0) {
      FMemory::Free();
    }
  }
  FUN_1410604a0(*param_1);
  lVar7 = *param_1;
  cVar5 = FWeakObjectPtr::IsValid(lVar7 + 0x184);
  if (cVar5 != '\0') {
    lVar4 = *(longlong *)(lVar7 + 0x200);
    local_50 = uVar8;
    local_88[6] = lVar4;
    if (lVar4 != 0) {
      uVar6 = UBlendableInterface::GetPrivateStaticClass();
      local_50 = UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar6);
    }
    uVar6 = FWeakObjectPtr::Get(lVar7 + 0x184);
    FUN_142ecfdd0(uVar6,local_88 + 6,0,0,0,0);
    lVar4 = *(longlong *)(lVar7 + 0x200);
    local_48 = lVar4;
    if (lVar4 != 0) {
      uVar6 = UBlendableInterface::GetPrivateStaticClass();
      uVar8 = UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar6);
    }
    local_40 = uVar8;
    uVar6 = FWeakObjectPtr::Get(lVar7 + 0x184);
    FUN_142ed36d0(uVar6,&local_48,0);
  }
  return;
}



// FUNCTION 141026f70 FUN_141026f70 body=534 status=ok
// SIG undefined FUN_141026f70(void)

void FUN_141026f70(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  longlong *local_48;
  int local_40;
  code *local_38;
  longlong *plStack_30;
  code *local_28;
  longlong *plStack_20;
  
  cVar3 = FWeakObjectPtr::IsValid(*param_1 + 0x6d8);
  if (cVar3 == '\0') {
    return;
  }
  uVar4 = FWeakObjectPtr::Get(*param_1 + 0x6d8);
  FUN_142dcf3a0(uVar4,&local_28);
  uVar4 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  plVar5 = (longlong *)FUN_140d3a420(uVar4);
  if (plVar5 == (longlong *)0x0) goto LAB_14102713e;
  lVar7 = *param_1;
  local_38 = FUN_141050470;
  plStack_30 = (longlong *)((ulonglong)plStack_30 & 0xffffffff00000000);
  local_48 = (longlong *)0x0;
  plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_40 = 3;
  local_48 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar6 + 1,lVar7);
    plVar6[2] = (longlong)local_38;
    plVar6[3] = (longlong)plStack_30;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[5] = lVar7;
    *plVar6 = (longlong)&PTR_FUN_143fcff08;
  }
  puVar8 = (undefined8 *)(**(code **)(*plVar5 + 0x80))(plVar5,local_res8,&local_48);
  *(undefined8 *)(*param_1 + 0x890) = *puVar8;
  if (local_40 == 0) {
LAB_1410270cb:
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
    goto LAB_1410270cb;
  }
  local_38 = local_28;
  plStack_30 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
    UNLOCK();
  }
  FUN_140d2abc0(plVar5,&local_38,0);
  plVar5 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_30 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_30)(plStack_30);
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
LAB_14102713e:
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_20 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plStack_20 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  return;
}



// FUNCTION 141027190 FUN_141027190 body=158 status=ok
// SIG undefined FUN_141027190(void)

void FUN_141027190(undefined8 *param_1)

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
      FUN_141034dc0(*param_1,0,0,0,0);
    }
  }
  return;
}



// FUNCTION 141027230 FUN_141027230 body=177 status=ok
// SIG undefined FUN_141027230(void)

undefined4 FUN_141027230(longlong *param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = *param_1;
  lVar4 = *(longlong *)(lVar3 + 0x6c0);
  lVar5 = (longlong)*(int *)(lVar3 + 0x6c8) * 0x40 + lVar4;
  if (lVar4 != lVar5) {
    do {
      if (*(longlong *)(lVar4 + 0x10) != 0) {
        FUN_141032eb0();
      }
      lVar4 = lVar4 + 0x40;
    } while (lVar4 != lVar5);
    lVar3 = *param_1;
  }
  FUN_14105ecc0(lVar3);
  lVar3 = *param_1;
  cVar2 = *(char *)(lVar3 + 0xc09);
  if (cVar2 == '\0') {
    cVar2 = *(char *)(lVar3 + 0xc08);
  }
  if (cVar2 != '\x04') {
    FUN_141063a00(lVar3,0,1,0);
    lVar3 = *param_1;
  }
  FUN_142ecd4d0(lVar3);
  LOCK();
  *(undefined4 *)(*param_1 + 0xed8) = 1;
  UNLOCK();
  LOCK();
  uVar1 = *(undefined4 *)(*param_1 + 0xed4);
  *(undefined4 *)(*param_1 + 0xed4) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(*param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 1410272f0 FUN_1410272f0 body=1894 status=ok
// SIG undefined FUN_1410272f0(void)

void FUN_1410272f0(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
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
  longlong *local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  longlong *local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  
  local_1d0 = 0x14;
  uVar6 = 0;
  local_1d8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
  FGenericPlatformString::Memcpy(local_1d8,L"welcomeMC.pageTitle",0x28);
  uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_50,L"Welcome to SHiFT!",L"SHiFTMenu",L"WelcomeSHiFT");
  FUN_142f100e0(*param_1,&local_1d8,uVar3);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_48 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (local_1d8 != 0) {
    FMemory::Free();
  }
  cVar2 = FWeakObjectPtr::IsValid(*param_1 + 0x184);
  if (cVar2 != '\0') {
    local_1b8 = 0;
    local_1b0 = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
    FGenericPlatformString::Memcpy(local_1b8,L"welcomeMC.description",0x2c);
    local_1c8 = (longlong *)0x0;
    local_1c0 = 0;
    FUN_140e99270(*param_1,*param_1 + 0x208,&local_1b8,0,6,&local_1c8);
    plVar8 = local_1c8;
    for (iVar9 = (int)local_1c0; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_1c8 != (longlong *)0x0) {
      FMemory::Free(local_1c8);
    }
    if (local_1b8 != 0) {
      FMemory::Free();
    }
    local_198 = 0;
    local_190 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
    FGenericPlatformString::Memcpy(local_198,L"welcomeMC.scrollBar",0x28);
    local_1a8 = (longlong *)0x0;
    local_1a0 = 0;
    FUN_140e98f00(*param_1,*param_1 + 0x210,&local_198,0,6,&local_1a8);
    plVar8 = local_1a8;
    for (iVar9 = (int)local_1a0; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_1a8 != (longlong *)0x0) {
      FMemory::Free(local_1a8);
    }
    if (local_198 != 0) {
      FMemory::Free();
    }
    local_178 = 0;
    local_170 = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
    FGenericPlatformString::Memcpy(local_178,L"welcomeMC.gridArea",0x26);
    local_188 = (longlong *)0x0;
    local_180 = 0;
    FUN_140e98b90(*param_1,*param_1 + 0x218,&local_178,0,6,&local_188);
    plVar8 = local_188;
    for (iVar9 = (int)local_180; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_188 != (longlong *)0x0) {
      FMemory::Free(local_188);
    }
    if (local_178 != 0) {
      FMemory::Free();
    }
    lVar4 = *param_1;
    if (((*(longlong *)(lVar4 + 0x208) != 0) && (*(longlong *)(lVar4 + 0x218) != 0)) &&
       (*(longlong *)(lVar4 + 0x210) != 0)) {
      FUN_142f0f790(*(longlong *)(lVar4 + 0x210),1);
      lVar4 = *param_1;
      FUN_142f118f0(*(undefined8 *)(lVar4 + 0x208),*(undefined8 *)(lVar4 + 0x210),
                    *(undefined8 *)(lVar4 + 0x218));
      lVar4 = *param_1;
    }
    if (*(longlong *)(lVar4 + 0x208) != 0) {
      lVar4 = FWeakObjectPtr::Get(lVar4 + 0x184);
      (**(code **)(**(longlong **)(*param_1 + 0x208) + 0x2b0))
                (*(longlong **)(*param_1 + 0x208),lVar4 + 0x6f8,1,0);
    }
    local_158 = 0;
    local_150 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_158,0xd,"signInButton",0xd,0x3f);
    local_168 = (longlong *)0x0;
    local_160 = 0;
    uVar3 = FUN_140f9a360(*param_1,&local_158,0,6,&local_168);
    *(undefined8 *)(*param_1 + 0x1f8) = uVar3;
    plVar8 = local_168;
    for (iVar9 = (int)local_160; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_168 != (longlong *)0x0) {
      FMemory::Free(local_168);
    }
    if (local_158 != 0) {
      FMemory::Free();
    }
    local_f8 = *(undefined8 *)(*param_1 + 0x1f8);
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_80,L"Sign In",L"SHiFTMenu",L"SignInText");
    local_f0 = local_80;
    local_e8 = *param_1;
    puVar5 = (undefined8 *)FName::FName(local_98,L"OnClickSignIn",1);
    local_d8 = 0;
    local_d0 = 1;
    local_e0 = *puVar5;
    FUN_14105eed0(*param_1,&local_f8);
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_78 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    local_138 = 0;
    local_130 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_138,0xf,"registerButton",0xf,0x3f);
    local_148 = (longlong *)0x0;
    local_140 = 0;
    local_90 = 0;
    uVar3 = FUN_140f9a360(*param_1,&local_138,0,6,&local_148);
    *(undefined8 *)(*param_1 + 0x200) = uVar3;
    plVar8 = local_148;
    for (iVar9 = (int)local_140; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free(local_148);
    }
    if (local_138 != 0) {
      FMemory::Free();
    }
    local_c8 = *(undefined8 *)(*param_1 + 0x200);
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_68,L"New Account",L"SHiFTMenu",L"NewAccountText");
    local_c0 = local_68;
    local_b8 = *param_1;
    puVar5 = (undefined8 *)FName::FName(local_88,L"OnClickCreateAccount",1);
    local_a8 = 0;
    local_a0 = 1;
    local_b0 = *puVar5;
    FUN_14105eed0(*param_1,&local_c8);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_60 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    lVar7 = *param_1;
    lVar4 = *(longlong *)(lVar7 + 0x1f8);
    local_120 = uVar6;
    local_128 = lVar4;
    if (lVar4 != 0) {
      uVar3 = UBlendableInterface::GetPrivateStaticClass();
      local_120 = UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar3);
      lVar7 = *param_1;
    }
    uVar3 = FWeakObjectPtr::Get(lVar7 + 0x184);
    FUN_142ecfdd0(uVar3,&local_128,0,0,0,*(undefined8 *)(*param_1 + 0x200));
    lVar7 = *param_1;
    lVar4 = *(longlong *)(lVar7 + 0x200);
    local_110 = uVar6;
    local_118 = lVar4;
    if (lVar4 != 0) {
      uVar3 = UBlendableInterface::GetPrivateStaticClass();
      local_110 = UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar3);
      lVar7 = *param_1;
    }
    uVar3 = FWeakObjectPtr::Get(lVar7 + 0x184);
    FUN_142ecfdd0(uVar3,&local_118,0,0,*(undefined8 *)(*param_1 + 0x1f8),0);
    lVar4 = *param_1;
    lVar7 = *(longlong *)(lVar4 + 0x1f8);
    local_108 = lVar7;
    if (lVar7 != 0) {
      uVar3 = UBlendableInterface::GetPrivateStaticClass();
      uVar6 = UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar3);
      lVar4 = *param_1;
    }
    local_100 = uVar6;
    uVar3 = FWeakObjectPtr::Get(lVar4 + 0x184);
    FUN_142ed36d0(uVar3,&local_108,0);
  }
  return;
}



// FUNCTION 141027a60 FUN_141027a60 body=2559 status=ok
// SIG undefined FUN_141027a60(void)

void FUN_141027a60(longlong *param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  wchar_t *pwVar5;
  char cVar6;
  undefined1 uVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  undefined8 uVar12;
  wchar_t *pwVar13;
  int *piVar14;
  longlong *plVar15;
  wchar_t *pwVar16;
  wchar_t *local_res10;
  longlong local_res20;
  int local_108;
  int local_104;
  longlong local_100;
  int local_f8;
  int local_f4;
  longlong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  char local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  *(undefined1 *)(*param_1 + 0x672) = 0;
  pwVar8 = (wchar_t *)FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
  pwVar16 = (wchar_t *)0x0;
  if (pwVar8 == (wchar_t *)0x0) {
LAB_141027acb:
    pwVar8 = pwVar16;
  }
  else {
    lVar9 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(pwVar8 + 8) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar8 + 8) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_141027acb;
  }
  local_res10 = (wchar_t *)FUN_1416f8720((int)param_1[1]);
  if (local_res10 == (wchar_t *)0x0) {
LAB_141027b16:
    local_res10 = (wchar_t *)0x0;
  }
  else {
    lVar9 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(local_res10 + 8) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_res10 + 8) + 0x88) +
         (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_141027b16;
  }
  if ((pwVar8 != (wchar_t *)0x0) &&
     (lVar9 = (**(code **)(*(longlong *)pwVar8 + 0x670))(pwVar8), lVar9 != 0)) {
    lVar10 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      FUN_1407665e0(lVar9 + 0xaf8,*param_1);
      FUN_1407665e0(lVar9 + 0xb08,*param_1);
    }
  }
  if ((local_res10 == (wchar_t *)0x0) ||
     (lVar9 = (**(code **)(*(longlong *)local_res10 + 0x670))(local_res10), lVar9 == 0))
  goto LAB_141028237;
  lVar10 = FUN_14145f370();
  if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
      != lVar10 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) goto LAB_141028237;
  pwVar11 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnCurrentUsableChanged",L"::");
  pwVar13 = pwVar16;
  while (pwVar5 = pwVar11, pwVar5 != (wchar_t *)0x0) {
    pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
    pwVar13 = pwVar5;
  }
  FName::FName(&local_res20,pwVar13 + 2,1);
  lVar10 = *param_1;
  plVar15 = (longlong *)(lVar9 + 0xaf8);
  FWeakObjectPtr::operator=(&local_108,0);
  local_100 = 0;
  FWeakObjectPtr::operator=(&local_108,lVar10);
  local_100 = local_res20;
  if ((local_res20 != 0) && (lVar10 = FWeakObjectPtr::Get(&local_108), lVar10 != 0)) {
    UObject::FindFunction(lVar10,local_100);
  }
  piVar2 = (int *)*plVar15;
  iVar1 = *(int *)(lVar9 + 0xb00);
  for (piVar14 = piVar2; piVar14 != piVar2 + (longlong)iVar1 * 4; piVar14 = piVar14 + 4) {
    if (((*piVar14 == local_108) && (piVar14[1] == local_104)) ||
       ((cVar6 = FWeakObjectPtr::IsValid(piVar14), cVar6 == '\0' &&
        (cVar6 = FWeakObjectPtr::IsValid(&local_108), cVar6 == '\0')))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((bVar4) && (*(longlong *)(piVar14 + 2) == local_100)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      if ((int)((longlong)piVar14 - (longlong)piVar2 >> 4) != -1) goto LAB_141027d56;
      break;
    }
  }
  iVar1 = *(int *)(lVar9 + 0xb00);
  lVar10 = (longlong)iVar1;
  *(int *)(lVar9 + 0xb00) = iVar1 + 1;
  if (*(int *)(lVar9 + 0xb04) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar1);
  }
  lVar3 = *plVar15;
  *(int *)(lVar3 + lVar10 * 0x10) = local_108;
  *(int *)(lVar3 + 4 + lVar10 * 0x10) = local_104;
  *(longlong *)(lVar3 + 8 + lVar10 * 0x10) = local_100;
LAB_141027d56:
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar15);
  local_90 = *(undefined1 *)(lVar9 + 0xcc8);
  local_8f = *(char *)(lVar9 + 0xcc9);
  local_8e = *(undefined1 *)(lVar9 + 0xcca);
  local_8d = *(undefined1 *)(lVar9 + 0xccb);
  local_8c = *(undefined1 *)(lVar9 + 0xccc);
  local_8b = *(undefined1 *)(lVar9 + 0xccd);
  local_8a = *(undefined1 *)(lVar9 + 0xcce);
  FText::FText(local_88,lVar9 + 0xcd0);
  local_70 = *(undefined8 *)(lVar9 + 0xce8);
  lVar10 = *param_1;
  local_68 = *(undefined8 *)(lVar9 + 0xcf0);
  local_60 = *(undefined8 *)(lVar9 + 0xcf8);
  local_58 = *(undefined8 *)(lVar9 + 0xd00);
  if ((*(longlong *)(lVar9 + 0xcc0) == 0) || (local_8f == '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(lVar10 + 0x671) = uVar7;
  LOCK();
  *(undefined4 *)(lVar10 + 0x678) = 1;
  UNLOCK();
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_80 + 1;
    lVar10 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  pwVar11 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnUsabilityChanged",L"::");
  pwVar13 = pwVar16;
  while (pwVar5 = pwVar11, pwVar5 != (wchar_t *)0x0) {
    pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
    pwVar13 = pwVar5;
  }
  FName::FName(&local_e8,pwVar13 + 2,1);
  lVar10 = *param_1;
  plVar15 = (longlong *)(lVar9 + 0xb08);
  FWeakObjectPtr::operator=(&local_f8,0);
  local_f0 = 0;
  FWeakObjectPtr::operator=(&local_f8,lVar10);
  local_f0 = local_e8;
  if ((local_e8 != 0) && (lVar10 = FWeakObjectPtr::Get(&local_f8), lVar10 != 0)) {
    UObject::FindFunction(lVar10,local_f0);
  }
  piVar2 = (int *)*plVar15;
  iVar1 = *(int *)(lVar9 + 0xb10);
  for (piVar14 = piVar2; piVar14 != piVar2 + (longlong)iVar1 * 4; piVar14 = piVar14 + 4) {
    if (((*piVar14 == local_f8) && (piVar14[1] == local_f4)) ||
       ((cVar6 = FWeakObjectPtr::IsValid(piVar14), cVar6 == '\0' &&
        (cVar6 = FWeakObjectPtr::IsValid(&local_f8), cVar6 == '\0')))) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((bVar4) && (*(longlong *)(piVar14 + 2) == local_f0)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      if ((int)((longlong)piVar14 - (longlong)piVar2 >> 4) != -1) goto LAB_141027f9e;
      break;
    }
  }
  iVar1 = *(int *)(lVar9 + 0xb10);
  lVar10 = (longlong)iVar1;
  *(int *)(lVar9 + 0xb10) = iVar1 + 1;
  if (*(int *)(lVar9 + 0xb14) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar1);
  }
  lVar3 = *plVar15;
  *(int *)(lVar3 + lVar10 * 0x10) = local_f8;
  *(int *)(lVar3 + 4 + lVar10 * 0x10) = local_f4;
  *(longlong *)(lVar3 + 8 + lVar10 * 0x10) = local_f0;
LAB_141027f9e:
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar15);
  lVar10 = *(longlong *)(local_res10 + 0x480);
  if (lVar10 != 0) {
    pwVar11 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnLadderExit",L"::");
    pwVar13 = pwVar16;
    while (pwVar5 = pwVar11, pwVar5 != (wchar_t *)0x0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar13 = pwVar5;
    }
    FName::FName(&local_e0,pwVar13 + 2,1);
    FUN_14074ba20(lVar10 + 0x11a0,*param_1,&LAB_14104ce20,local_e0);
    pwVar11 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnLadderExit",L"::");
    pwVar13 = pwVar16;
    while (pwVar5 = pwVar11, pwVar5 != (wchar_t *)0x0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar13 = pwVar5;
    }
    FName::FName(&local_d8,pwVar13 + 2,1);
    FUN_14074ba20(lVar10 + 0x11b0,*param_1,&LAB_14104ce20,local_d8);
    pwVar11 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnLadderExit",L"::");
    pwVar13 = pwVar16;
    while (pwVar5 = pwVar11, pwVar5 != (wchar_t *)0x0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar13 = pwVar5;
    }
    FName::FName(&local_d0,pwVar13 + 2,1);
    FUN_14074ba20(lVar10 + 0x11c0,*param_1,&LAB_14104ce20,local_d0);
    pwVar11 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnLadderEnter",L"::");
    pwVar13 = pwVar16;
    while (pwVar5 = pwVar11, pwVar5 != (wchar_t *)0x0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar13 = pwVar5;
    }
    FName::FName(&local_c8,pwVar13 + 2,1);
    FUN_14074ba20(lVar10 + 0x1190,*param_1,&LAB_14104ce00,local_c8);
  }
  lVar9 = *(longlong *)(lVar9 + 0x488);
  if (lVar9 == 0) {
LAB_1410281b2:
    pwVar11 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnWeaponChanged",L"::");
    pwVar13 = pwVar16;
    while (pwVar5 = pwVar11, pwVar5 != (wchar_t *)0x0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar13 = pwVar5;
    }
    FName::FName(&local_c0,pwVar13 + 2,1);
    FUN_14074ba20(local_res10 + 0x828,*param_1,FUN_141052c00,local_c0);
    uVar12 = FUN_140c46a10(local_res10,0);
  }
  else {
    lVar10 = FUN_1414bbb50();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_1410281b2;
    uVar12 = (**(code **)(*(longlong *)(lVar9 + 0x4c8) + 0xf0))((longlong *)(lVar9 + 0x4c8),0);
  }
  FUN_141052c00(*param_1,uVar12,0);
LAB_141028237:
  if ((pwVar8 != (wchar_t *)0x0) && (pwVar8 != local_res10)) {
    pwVar11 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnWeaponChanged",L"::");
    pwVar13 = pwVar16;
    while (pwVar5 = pwVar11, pwVar5 != (wchar_t *)0x0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar13 = pwVar5;
    }
    FName::FName(&local_b8,pwVar13 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(pwVar8 + 0x828,*param_1,local_b8);
    lVar9 = *(longlong *)(pwVar8 + 0x480);
    if (lVar9 != 0) {
      pwVar13 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnLadderExit",L"::");
      pwVar8 = pwVar16;
      while (pwVar11 = pwVar13, pwVar11 != (wchar_t *)0x0) {
        pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar11 + 1,L"::");
        pwVar8 = pwVar11;
      }
      FName::FName(&local_b0,pwVar8 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar9 + 0x11a0,*param_1,local_b0);
      pwVar13 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnLadderExit",L"::");
      pwVar8 = pwVar16;
      while (pwVar11 = pwVar13, pwVar11 != (wchar_t *)0x0) {
        pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar11 + 1,L"::");
        pwVar8 = pwVar11;
      }
      FName::FName(&local_a8,pwVar8 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar9 + 0x11b0,*param_1,local_a8);
      pwVar13 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnLadderExit",L"::");
      pwVar8 = pwVar16;
      while (pwVar11 = pwVar13, pwVar11 != (wchar_t *)0x0) {
        pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar11 + 1,L"::");
        pwVar8 = pwVar11;
      }
      FName::FName(&local_a0,pwVar8 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar9 + 0x11c0,*param_1,local_a0);
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnLadderEnter",L"::");
      while (pwVar13 = pwVar8, pwVar13 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar13 + 1,L"::");
        pwVar16 = pwVar13;
      }
      FName::FName(&local_98,pwVar16 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar9 + 0x1190,*param_1,local_98);
    }
  }
  return;
}



// FUNCTION 141028460 FUN_141028460 body=723 status=ok
// SIG undefined FUN_141028460(void)

void FUN_141028460(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 == '\0') {
LAB_1410284e7:
    bVar2 = false;
  }
  else {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar9 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar9;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) & 0x30000000) != 0) goto LAB_1410284e7;
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  plVar6 = (longlong *)FName::FName(local_res8,"Cancel",1);
  lVar5 = param_1[3];
  if (lVar5 == *plVar6) {
    lVar7 = *param_1;
    iVar1 = *(int *)(lVar7 + 0x8b0);
    if ((iVar1 < 0) || (*(int *)(lVar7 + 0x8a8) <= iVar1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_14105c630(lVar7 + 0x8a0,iVar1,CONCAT71((int7)((ulonglong)lVar5 >> 8),1));
      goto LAB_14102857b;
    }
  }
  lVar7 = *param_1;
  iVar1 = *(int *)(lVar7 + 0x8b0);
  if ((iVar1 < 0) || (*(int *)(lVar7 + 0x8a8) <= iVar1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar2) && (lVar7 = (longlong)iVar1 * 0x40 + *(longlong *)(lVar7 + 0x8a0), lVar7 != 0)) {
    *(bool *)(lVar7 + 0x38) = lVar5 == DAT_146875028;
  }
LAB_14102857b:
  cVar3 = FWeakObjectPtr::IsValid(*param_1 + 0x59c);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(*param_1 + 0x59c);
    if (((0 < *(int *)(lVar5 + 0x48)) &&
        (plVar6 = *(longlong **)
                   (*(longlong *)(lVar5 + 0x40) + -8 + (longlong)*(int *)(lVar5 + 0x48) * 8),
        plVar6 != (longlong *)0x0)) && (lVar5 = (**(code **)(*plVar6 + 0x278))(), lVar5 != 0)) {
      lVar7 = AUGDungeon::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_18 = FUN_1410459f0;
        uStack_10 = 0;
        lVar7 = FWeakObjectPtr::Get(*param_1 + 0x59c);
        lVar5 = *param_1;
        plVar6 = (longlong *)(lVar7 + 0xf8);
        plVar8 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar8 + 1,lVar5);
          *(undefined4 *)(plVar8 + 2) = (undefined4)local_18;
          *(undefined4 *)((longlong)plVar8 + 0x14) = local_18._4_4_;
          *(undefined4 *)(plVar8 + 3) = uStack_10;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_c;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar8[5] = lVar5;
          *plVar8 = (longlong)&PTR_FUN_143f77bd0;
        }
        if (&local_18 != plVar6) {
          if (plVar8 == (longlong *)0x0) {
            if (*(int *)(lVar7 + 0x100) == 0) {
              return;
            }
            plVar8 = (longlong *)*plVar6;
            if (plVar8 == (longlong *)0x0) {
              return;
            }
            (**(code **)(*plVar8 + 0x28))(plVar8,0);
            if (*plVar6 != 0) {
              lVar5 = FMemory::Realloc(*plVar6,0,0);
              *plVar6 = lVar5;
            }
            *(undefined4 *)(lVar7 + 0x100) = 0;
            return;
          }
          (**(code **)(*plVar8 + 0x30))(plVar8,plVar6);
        }
        if (plVar8 == (longlong *)0x0) {
          return;
        }
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        lVar5 = FMemory::Realloc(plVar8,0,0);
        if (lVar5 == 0) {
          return;
        }
        FMemory::Free(lVar5);
        return;
      }
    }
    FUN_1410459f0(*param_1);
  }
  return;
}



// FUNCTION 141028740 FUN_141028740 body=666 status=ok
// SIG undefined FUN_141028740(void)

void FUN_141028740(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 local_48;
  uint uStack_34;
  undefined4 local_28 [2];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  
  plVar4 = (longlong *)0x0;
  local_48 = CONCAT31(local_48._1_3_,0xff);
  local_18 = (ulonglong)uStack_34 << 0x20;
  local_28[0] = local_48;
  uStack_20 = 0;
  uStack_1c = 0;
  FUN_14105f020(*param_1,local_28);
  lVar1 = *param_1;
  if (((*(longlong *)(lVar1 + 0x700) != 0) && (*(longlong *)(lVar1 + 0x708) != 0)) &&
     (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x708) + 0x18))(), cVar2 != '\0')) {
    lVar1 = *param_1;
    plVar3 = plVar4;
    if (*(longlong *)(lVar1 + 0x700) != 0) {
      plVar3 = *(longlong **)(lVar1 + 0x708);
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,DAT_146871290,lVar1 + 0x630);
    lVar1 = *param_1;
    plVar3 = plVar4;
    if (*(longlong *)(lVar1 + 0x700) != 0) {
      plVar3 = *(longlong **)(lVar1 + 0x708);
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,DAT_146871298,lVar1 + 0x640);
    lVar1 = *param_1;
    plVar3 = plVar4;
    if (*(longlong *)(lVar1 + 0x700) != 0) {
      plVar3 = *(longlong **)(lVar1 + 0x708);
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,DAT_1468712a0,lVar1 + 0x650);
    lVar1 = *param_1;
    plVar3 = plVar4;
    if (*(longlong *)(lVar1 + 0x700) != 0) {
      plVar3 = *(longlong **)(lVar1 + 0x708);
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,DAT_1468712a8,lVar1 + 0x660);
    lVar1 = *param_1;
    plVar3 = plVar4;
    if (*(longlong *)(lVar1 + 0x700) != 0) {
      plVar3 = *(longlong **)(lVar1 + 0x708);
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,DAT_1468712b0,lVar1 + 0x670);
    lVar1 = *param_1;
    plVar3 = plVar4;
    if (*(longlong *)(lVar1 + 0x700) != 0) {
      plVar3 = *(longlong **)(lVar1 + 0x708);
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,DAT_1468712b8,lVar1 + 0x680);
    lVar1 = *param_1;
    if (*(longlong *)(lVar1 + 0x700) != 0) {
      plVar4 = *(longlong **)(lVar1 + 0x708);
    }
    (**(code **)(*plVar4 + 0x30))(plVar4,DAT_1468712c0,lVar1 + 0x690);
  }
  lVar1 = *param_1;
  FWeakObjectPtr::operator=(lVar1 + 0x630,0);
  *(undefined8 *)(lVar1 + 0x638) = 0;
  lVar1 = *param_1;
  FWeakObjectPtr::operator=(lVar1 + 0x640,0);
  *(undefined8 *)(lVar1 + 0x648) = 0;
  lVar1 = *param_1;
  FWeakObjectPtr::operator=(lVar1 + 0x650,0);
  *(undefined8 *)(lVar1 + 0x658) = 0;
  lVar1 = *param_1;
  FWeakObjectPtr::operator=(lVar1 + 0x660,0);
  *(undefined8 *)(lVar1 + 0x668) = 0;
  lVar1 = *param_1;
  FWeakObjectPtr::operator=(lVar1 + 0x670,0);
  *(undefined8 *)(lVar1 + 0x678) = 0;
  lVar1 = *param_1;
  FWeakObjectPtr::operator=(lVar1 + 0x680,0);
  *(undefined8 *)(lVar1 + 0x688) = 0;
  lVar1 = *param_1;
  FWeakObjectPtr::operator=(lVar1 + 0x690,0);
  *(undefined8 *)(lVar1 + 0x698) = 0;
  return;
}



// FUNCTION 1410289e0 FUN_1410289e0 body=1374 status=ok
// SIG undefined FUN_1410289e0(void)

void FUN_1410289e0(undefined8 *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  wchar_t *pwVar16;
  undefined8 local_res8;
  undefined4 local_res10;
  undefined4 uStackX_14;
  int local_48;
  int local_44;
  longlong local_40;
  
  local_res10 = *(undefined4 *)(param_1 + 1);
  uStackX_14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    pwVar16 = (wchar_t *)0x0;
    iVar1 = *(int *)(lVar5 + 0xc);
    pwVar10 = pwVar16;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar13 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar13;
      pwVar10 = (wchar_t *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar13) * 0x18);
    }
    if (((*(uint *)(pwVar10 + 4) & 0x30000000) == 0) &&
       (plVar6 = (longlong *)FUN_140eccca0(*param_1), plVar6 != (longlong *)0x0)) {
      uVar7 = AGFireballProjectile::GetPrivateStaticClass();
      lVar5 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar7);
      if (lVar5 != 0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop
                           (L"&UGFxSkillDurationBars::OnAbilitySlotChanged",L"::");
        pwVar10 = pwVar16;
        while (pwVar2 = pwVar8, pwVar2 != (wchar_t *)0x0) {
          pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar10 = pwVar2;
        }
        FName::FName(&local_res10,pwVar10 + 2,1);
        lVar9 = CONCAT44(uStackX_14,local_res10);
        uVar7 = *param_1;
        plVar6 = (longlong *)(lVar5 + 0x2a8);
        FWeakObjectPtr::operator=(&local_48,0);
        local_40 = 0;
        FWeakObjectPtr::operator=(&local_48,uVar7);
        local_res8 = 0;
        local_40 = lVar9;
        if ((lVar9 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_48), lVar9 != 0)) {
          UObject::FindFunction(lVar9,local_40);
        }
        piVar14 = (int *)*plVar6;
        iVar1 = *(int *)(lVar5 + 0x2b0);
        for (piVar15 = piVar14; piVar15 != piVar14 + (longlong)iVar1 * 4; piVar15 = piVar15 + 4) {
          if ((((*piVar15 == local_48) && (piVar15[1] == local_44)) ||
              ((cVar3 = FWeakObjectPtr::IsValid(piVar15), cVar3 == '\0' &&
               (cVar3 = FWeakObjectPtr::IsValid(&local_48), cVar3 == '\0')))) &&
             (*(longlong *)(piVar15 + 2) == local_40)) {
            if ((int)((longlong)piVar15 - (longlong)piVar14 >> 4) != -1) goto LAB_141028bf0;
            break;
          }
        }
        iVar1 = *(int *)(lVar5 + 0x2b0);
        *(int *)(lVar5 + 0x2b0) = iVar1 + 1;
        if (*(int *)(lVar5 + 0x2b4) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
        }
        piVar14 = (int *)((longlong)iVar1 * 0x10 + *plVar6);
        *piVar14 = local_48;
        piVar14[1] = local_44;
        *(longlong *)(piVar14 + 2) = local_40;
LAB_141028bf0:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar6);
        pwVar8 = _guard_xfg_dispatch_icall_nop
                           (L"&UGFxSkillDurationBars::OnActionAbilityAugmentChanged",L"::");
        pwVar10 = pwVar16;
        while (pwVar2 = pwVar8, pwVar2 != (wchar_t *)0x0) {
          pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar10 = pwVar2;
        }
        FName::FName(&local_res10,pwVar10 + 2,1);
        lVar9 = CONCAT44(uStackX_14,local_res10);
        uVar7 = *param_1;
        plVar6 = (longlong *)(lVar5 + 0x298);
        FWeakObjectPtr::operator=(&local_48,0);
        local_40 = 0;
        FWeakObjectPtr::operator=(&local_48,uVar7);
        local_res8 = 0;
        local_40 = lVar9;
        if ((lVar9 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_48), lVar9 != 0)) {
          UObject::FindFunction(lVar9,local_40);
        }
        piVar14 = (int *)*plVar6;
        iVar1 = *(int *)(lVar5 + 0x2a0);
        for (piVar15 = piVar14; piVar15 != piVar14 + (longlong)iVar1 * 4; piVar15 = piVar15 + 4) {
          if ((((*piVar15 == local_48) && (piVar15[1] == local_44)) ||
              ((cVar3 = FWeakObjectPtr::IsValid(piVar15), cVar3 == '\0' &&
               (cVar3 = FWeakObjectPtr::IsValid(&local_48), cVar3 == '\0')))) &&
             (*(longlong *)(piVar15 + 2) == local_40)) {
            if ((int)((longlong)piVar15 - (longlong)piVar14 >> 4) != -1) goto LAB_141028d30;
            break;
          }
        }
        iVar1 = *(int *)(lVar5 + 0x2a0);
        *(int *)(lVar5 + 0x2a0) = iVar1 + 1;
        if (*(int *)(lVar5 + 0x2a4) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
        }
        piVar14 = (int *)((longlong)iVar1 * 0x10 + *plVar6);
        *piVar14 = local_48;
        piVar14[1] = local_44;
        *(longlong *)(piVar14 + 2) = local_40;
LAB_141028d30:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar6);
        pwVar10 = _guard_xfg_dispatch_icall_nop
                            (L"&UGFxSkillDurationBars::OnActionSkillCoolingDown",L"::");
        while (pwVar8 = pwVar10, pwVar8 != (wchar_t *)0x0) {
          pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar8 + 1,L"::");
          pwVar16 = pwVar8;
        }
        FName::FName(&local_res10,pwVar16 + 2,1);
        lVar9 = CONCAT44(uStackX_14,local_res10);
        uVar7 = *param_1;
        plVar6 = (longlong *)(lVar5 + 0x268);
        FWeakObjectPtr::operator=(&local_48,0);
        local_40 = 0;
        FWeakObjectPtr::operator=(&local_48,uVar7);
        local_res8 = 0;
        local_40 = lVar9;
        if ((lVar9 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_48), lVar9 != 0)) {
          UObject::FindFunction(lVar9,local_40);
        }
        piVar14 = (int *)*plVar6;
        iVar1 = *(int *)(lVar5 + 0x270);
        for (piVar15 = piVar14; piVar15 != piVar14 + (longlong)iVar1 * 4; piVar15 = piVar15 + 4) {
          if ((((*piVar15 == local_48) && (piVar15[1] == local_44)) ||
              ((cVar3 = FWeakObjectPtr::IsValid(piVar15), cVar3 == '\0' &&
               (cVar3 = FWeakObjectPtr::IsValid(&local_48), cVar3 == '\0')))) &&
             (*(longlong *)(piVar15 + 2) == local_40)) {
            if ((int)((longlong)piVar15 - (longlong)piVar14 >> 4) != -1) goto LAB_141028e70;
            break;
          }
        }
        iVar1 = *(int *)(lVar5 + 0x270);
        *(int *)(lVar5 + 0x270) = iVar1 + 1;
        if (*(int *)(lVar5 + 0x274) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
        }
        piVar14 = (int *)((longlong)iVar1 * 0x10 + *plVar6);
        *piVar14 = local_48;
        piVar14[1] = local_44;
        *(longlong *)(piVar14 + 2) = local_40;
LAB_141028e70:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar6);
        uVar7 = *param_1;
        plVar6 = (longlong *)(lVar5 + 800);
        plVar11 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar11 != (longlong *)0x0) {
          *plVar11 = (longlong)&PTR_FUN_143f4d290;
          FWeakObjectPtr::operator=(plVar11 + 1,uVar7);
          plVar11[2] = (longlong)&LAB_141040970;
          lVar9 = FDelegateHandle::GenerateNewID();
          plVar11[4] = lVar9;
          *plVar11 = (longlong)&PTR_FUN_143f4d2d8;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_res8);
          iVar1 = *(int *)(lVar5 + 0x328);
          *(int *)(lVar5 + 0x328) = iVar1 + 1;
          if (*(int *)(lVar5 + 0x32c) < iVar1 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar1);
          }
          puVar12 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar6);
          *puVar12 = plVar11;
          *(undefined4 *)(puVar12 + 1) = 3;
        }
      }
    }
  }
  return;
}



// FUNCTION 141028f40 FUN_141028f40 body=2051 status=ok
// SIG undefined FUN_141028f40(void)

void FUN_141028f40(longlong *param_1)

{
  int *piVar1;
  void *pvVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  void **ppvVar9;
  short **ppsVar10;
  ulonglong uVar11;
  short *psVar12;
  undefined1 *puVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  char cVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulonglong local_res10;
  short *local_108;
  int local_100;
  int local_fc;
  short *local_f8;
  int local_f0;
  void *local_e8;
  ulonglong local_e0;
  longlong local_d8;
  int local_d0;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  longlong local_b8 [2];
  undefined1 local_a8 [32];
  undefined1 local_88 [16];
  longlong local_78 [4];
  undefined1 local_58 [32];
  
  uVar18 = 0;
  lVar21 = -1;
  iVar22 = -1;
  lVar16 = *(longlong *)(*param_1 + 0x2e0);
  if (lVar16 == 0) {
    return;
  }
  if ((char)param_1[1] != '\0') {
    iVar7 = *(int *)(*param_1 + 0x418);
    local_res10 = 0;
    iVar15 = 0;
    iVar6 = FUN_142eb7440(lVar16);
    uVar11 = uVar18;
    uVar19 = uVar18;
    if (0 < iVar6) {
      do {
        uVar11 = *(ulonglong *)(*(longlong *)(lVar16 + 0x278) + 0x18 + uVar19);
        if (uVar11 != 0) {
          lVar8 = FUN_141397a70();
          if ((*(int *)(*(longlong *)(uVar11 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar11 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            iVar22 = iVar15 - (int)uVar18;
            local_res10 = uVar11;
            if (*(longlong *)(uVar11 + 0x330) == 0) {
              uVar18 = (ulonglong)((int)uVar18 + 1);
            }
            else if (iVar7 < *(int *)(uVar11 + 0x340)) break;
          }
        }
        iVar15 = iVar15 + 1;
        uVar19 = uVar19 + 0x20;
        iVar6 = FUN_142eb7440(lVar16);
        uVar11 = local_res10;
      } while (iVar15 < iVar6);
    }
    if (uVar11 != 0) {
      lVar16 = *param_1;
      if (1 < *(int *)(lVar16 + 0x40c)) {
        fVar23 = (float)(*(int *)(lVar16 + 0x418) - *(int *)(uVar11 + 0x33c)) /
                 (float)(*(int *)(uVar11 + 0x340) - *(int *)(uVar11 + 0x33c));
        if (0.0 <= fVar23) {
          if (1.0 <= fVar23) {
            fVar23 = 1.0;
          }
        }
        else {
          fVar23 = 0.0;
        }
        *(float *)(lVar16 + 0x420) =
             ((float)iVar22 + fVar23) /
             (float)((*(int *)(lVar16 + 0x40c) - *(int *)(lVar16 + 0x408)) + -1);
      }
    }
  }
  iVar7 = FUN_142eb7450(*(undefined8 *)(*param_1 + 0x2e0));
  iVar22 = 0;
  if (-1 < iVar7) {
    iVar22 = iVar7;
  }
  iVar7 = FUN_142eb62e0(*(undefined8 *)(*param_1 + 0x2e0));
  local_108 = (short *)0x0;
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  local_100 = *(int *)(*param_1 + 0x3e0);
  lVar16 = (longlong)local_100;
  pvVar2 = *(void **)(*param_1 + 0x3d8);
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_108,(5 - (uint)(local_100 != 0)) + local_100,0);
  psVar12 = local_108;
  _guard_xfg_dispatch_icall_nop(local_108,pvVar2,lVar16 * 2);
  iVar6 = local_100;
  lVar16 = (longlong)local_100;
  local_100 = (5 - (uint)(local_100 != 0)) + local_100;
  local_f8 = psVar12;
  if (local_fc < local_100) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,iVar6);
    local_f8 = local_108;
  }
  lVar16 = lVar16 - (ulonglong)(iVar6 != 0);
  psVar12 = local_f8 + lVar16;
  psVar12[0] = 0x46;
  psVar12[1] = 0x6c;
  psVar12[2] = 0x61;
  psVar12[3] = 0x74;
  local_f8[lVar16 + 4] = 0;
  if ((iVar22 < 2) || (iVar22 + -1 <= iVar7)) {
    cVar17 = '\0';
  }
  else {
    cVar17 = '\x01';
  }
  lVar8 = 2;
  lVar16 = *(longlong *)(*param_1 + 0x2d8);
  bVar4 = false;
  bVar3 = true;
  local_f0 = local_100;
  if (lVar16 != 0) {
    cVar5 = FUN_14208d2d0(lVar16,*param_1 + 800,L"branchHeaderBG");
    if (cVar5 != '\0') {
      if (iVar7 == 0) {
        local_c8 = (void *)0x0;
        local_c0 = *(int *)(*param_1 + 0x3e0);
        lVar16 = (longlong)local_c0;
        pvVar2 = *(void **)(*param_1 + 0x3d8);
        if (local_c0 == 0) {
          local_bc = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,local_c0,0);
          _guard_xfg_dispatch_icall_nop(local_c8,pvVar2,lVar16 * 2);
        }
        ppvVar9 = &local_c8;
      }
      else {
        bVar4 = true;
        bVar3 = false;
        psVar12 = &DAT_143f3eda8;
        if (local_f0 != 0) {
          psVar12 = local_f8;
        }
        local_e8 = (void *)0x0;
        local_e0 = 0;
        if ((psVar12 != (short *)0x0) && (*psVar12 != 0)) {
          do {
            lVar21 = lVar21 + 1;
          } while (psVar12[lVar21] != 0);
          uVar20 = (int)lVar21 + 1;
          local_e0 = (ulonglong)uVar20;
          if (0 < (int)uVar20) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
          }
          FGenericPlatformString::Memcpy(local_e8,psVar12,(longlong)(int)uVar20 * 2);
        }
        ppvVar9 = &local_e8;
      }
      FUN_14203e230(*(undefined8 *)(*param_1 + 800),ppvVar9);
      if ((bVar3) && (local_c8 != (void *)0x0)) {
        FMemory::Free();
      }
      if ((bVar4) && (local_e8 != (void *)0x0)) {
        FMemory::Free();
      }
    }
    cVar5 = FUN_14208d2d0(*(undefined8 *)(*param_1 + 0x2d8),*param_1 + 0x360,L"branchFillBG");
    if (cVar5 != '\0') {
      if (cVar17 == '\0') {
        ppsVar10 = (short **)(*param_1 + 0x3d8);
      }
      else {
        ppsVar10 = &local_f8;
      }
      FUN_14203e230(*(undefined8 *)(*param_1 + 0x360),ppsVar10);
    }
    cVar5 = FUN_14208d2d0(*(undefined8 *)(*param_1 + 0x2d8),*param_1 + 0x330,L"branchFooterBG");
    if (cVar5 != '\0') {
      if (cVar17 == '\0') {
        ppsVar10 = (short **)(*param_1 + 0x3d8);
      }
      else {
        ppsVar10 = &local_f8;
      }
      FUN_14203e230(*(undefined8 *)(*param_1 + 0x330),ppsVar10);
    }
    cVar5 = FUN_14208d2d0(*(undefined8 *)(*param_1 + 0x2d8),*param_1 + 0x340,L"branchDarkBG");
    if (cVar5 != '\0') {
      if (cVar17 == '\0') {
        ppsVar10 = (short **)(*param_1 + 0x3d8);
      }
      else {
        ppsVar10 = &local_f8;
      }
      FUN_14203e230(*(undefined8 *)(*param_1 + 0x340),ppsVar10);
    }
  }
  if ((*(char *)(*param_1 + 0x414) != '\0') &&
     (lVar16 = *(longlong *)(*param_1 + 0x38), lVar16 != 0)) {
    lVar21 = FUN_14139c4f0();
    if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x90) < *(int *)(lVar21 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x88) + (longlong)*(int *)(lVar21 + 0x90) * 8
         ) != lVar21 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      cVar5 = FUN_14208d120(lVar16,lVar16 + 0xa48,L"arrowWrapperUp");
      if ((cVar5 != '\0') &&
         (cVar5 = FUN_14204d380(*(undefined8 *)(lVar16 + 0xa48),lVar16 + 0xa58,L"arrow"),
         cVar5 != '\0')) {
        FUN_142056670(*(undefined8 *)(lVar16 + 0xa58),iVar7 != 0);
      }
      cVar5 = FUN_14208d120(lVar16,lVar16 + 0xa68,L"arrowWrapperDown");
      if ((cVar5 != '\0') &&
         (cVar5 = FUN_14204d380(*(undefined8 *)(lVar16 + 0xa68),lVar16 + 0xa78,L"arrow"),
         cVar5 != '\0')) {
        FUN_142056670(*(undefined8 *)(lVar16 + 0xa78),cVar17);
      }
    }
  }
  lVar16 = *param_1;
  if (((*(char *)(lVar16 + 0x41c) != '\0') && (*(longlong *)(lVar16 + 0x3c8) != 0)) &&
     (*(longlong *)(lVar16 + 0x3d0) != 0)) {
    piVar1 = (int *)(*(longlong *)(lVar16 + 0x3d0) + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if ((0 < iVar6) && (FUN_142f10d20(*param_1 + 0x3c0,1 < iVar22), 1 < iVar22)) {
      FStringFormatArg::FStringFormatArg(local_a8,iVar7 + 1);
      FStringFormatArg::FStringFormatArg(local_88,iVar22);
      local_d8 = 0;
      local_d0 = 2;
      TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_d8,2,0);
      puVar13 = local_a8;
      iVar6 = 2;
      lVar16 = local_d8;
      do {
        FStringFormatArg::FStringFormatArg(lVar16,puVar13);
        lVar16 = lVar16 + 0x20;
        puVar13 = puVar13 + 0x20;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      FString::Format(local_b8,L"{0}/{1}",&local_d8);
      if (local_d0 != 0) {
        plVar14 = (longlong *)(local_d8 + 0x10);
        iVar6 = local_d0;
        do {
          if (*plVar14 != 0) {
            FMemory::Free();
          }
          plVar14 = plVar14 + 4;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (local_d8 != 0) {
        FMemory::Free();
      }
      puVar13 = local_58;
      do {
        plVar14 = (longlong *)(puVar13 + -0x20);
        puVar13 = puVar13 + -0x20;
        lVar8 = lVar8 + -1;
        if (*plVar14 != 0) {
          FMemory::Free();
        }
      } while (lVar8 != 0);
      FUN_142f0fdc0(*param_1 + 0x3c0,local_b8,1,0);
      if (local_b8[0] != 0) {
        FMemory::Free();
      }
    }
  }
  if (*(longlong *)(*param_1 + 0x310) == 0) goto LAB_14102970a;
  fVar23 = *(float *)(*param_1 + 0x420);
  if (1 < iVar22) {
    fVar25 = (float)(iVar7 + 1) * (1.0 / (float)iVar22);
    fVar26 = (float)iVar7 * (1.0 / (float)iVar22);
    fVar24 = fVar25 - fVar26;
    if (1e-08 < ABS(fVar24)) {
      fVar23 = (fVar23 - fVar26) / fVar24;
      if (fVar23 < 0.0) {
        fVar23 = 0.0;
        goto LAB_141029699;
      }
    }
    else {
      bVar3 = fVar25 <= fVar23;
      fVar23 = 0.0;
      if (bVar3) {
        fVar23 = 1.0;
      }
    }
    if (1.0 <= fVar23) {
      fVar23 = 1.0;
    }
  }
LAB_141029699:
  if (*(char *)((longlong)param_1 + 9) == '\0') {
    FUN_142f0ead0();
  }
  else {
    fVar24 = (float)FUN_142eedc90();
    *(float *)(*(longlong *)(*param_1 + 0x310) + 0x2dc) = (fVar23 - fVar24) * 3.3;
    FUN_142ef4ad0();
  }
LAB_14102970a:
  if (local_f8 != (short *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141029750 FUN_141029750 body=376 status=ok
// SIG undefined FUN_141029750(void)

void FUN_141029750(int *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_18 [2];
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 1);
  if (cVar2 == '\0') {
    return;
  }
  FWeakObjectPtr::Get(param_1 + 1);
  lVar3 = FUN_140f578e0();
  if (lVar3 == 0) {
    return;
  }
  if ((*param_1 < 0) || (*(int *)(lVar3 + 0x26d8) <= *param_1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  FString::PrintfImpl(local_18,L"EmoteIcon_%02d_nopack");
  plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 1);
  lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x26d0) + (longlong)*param_1 * 8);
  lVar6 = lVar3 + 0x90;
  lVar5 = FWeakObjectPtr::Get(lVar6);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar3 + 0x98)) && (*(longlong *)(lVar3 + 0xa0) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar6,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar3 + 0x98) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar6);
      if (lVar5 != 0) goto LAB_141029857;
    }
  }
  else {
LAB_141029857:
    lVar3 = UTexture::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_141029890;
  }
  lVar5 = 0;
LAB_141029890:
  (**(code **)(*plVar4 + 0x2a0))(plVar4,local_18,lVar5);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410298d0 FUN_1410298d0 body=357 status=ok
// SIG undefined FUN_1410298d0(void)

void FUN_1410298d0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_res10 = *(undefined4 *)(param_1 + 1);
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar4 != '\0') {
    lVar6 = FWeakObjectPtr::Get(&local_res10);
    lVar7 = 0;
    iVar3 = *(int *)(lVar6 + 0xc);
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar9 = iVar3 >> 0x1f & 0xffff;
      uVar5 = iVar3 + uVar9;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar9) * 0x18;
    }
    if ((*(uint *)(lVar7 + 8) & 0x30000000) == 0) {
      local_38[0] = 0;
      local_38[1] = 0x17;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
      FGenericPlatformString::Memcpy(local_38[0],L"createAccountPageTitle",0x2e);
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_28,L"Create Account",L"SHiFTMenu",L"CreateAccountText");
      FUN_142f100e0(*param_1,local_38,uVar8);
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      FUN_14105fd00(*param_1);
      FUN_1410598b0(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 141029a40 FUN_141029a40 body=204 status=ok
// SIG undefined FUN_141029a40(void)

void FUN_141029a40(longlong *param_1)

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
  
  local_res10 = (undefined4)param_1[4];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0x24);
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
       (plVar2 = *(longlong **)(*param_1 + 0x6d0), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x2a8))(plVar2,param_1 + 2,1,0);
                    /* WARNING: Could not recover jumptable at 0x000141029aff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(*param_1 + 0x6d0) + 0x278))
                (*(longlong **)(*param_1 + 0x6d0),(char)param_1[1]);
      return;
    }
  }
  return;
}



// FUNCTION 141029b10 FUN_141029b10 body=320 status=ok
// SIG undefined FUN_141029b10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_141029b10(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [80];
  code *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar1 = *param_1;
  uVar3 = 0;
  if (*(int *)(lVar1 + 0x60) != 0) {
    plVar5 = *(longlong **)(lVar1 + 0x50);
    if (*(longlong **)(lVar1 + 0x50) == (longlong *)0x0) {
      plVar5 = (longlong *)(lVar1 + 0x30);
    }
    if (plVar5 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar5 + 8))();
    }
  }
  uVar2 = (**(code **)(lVar1 + 0x20))(uVar3);
  lVar1 = *param_1;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  local_68[0] = FRollingHash::GetWindowSize;
  lVar4 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_b8,local_68);
  FGenericPlatformMemory::MemswapGreaterThan8(lVar4,lVar1 + 0x20,0x50);
  if (*(int *)(lVar4 + 0x40) != 0) {
    plVar5 = *(longlong **)(lVar4 + 0x30);
    if (*(longlong **)(lVar4 + 0x30) == (longlong *)0x0) {
      plVar5 = (longlong *)(lVar4 + 0x10);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(lVar4 + 0x30) != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    plVar5 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar5 = local_38;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 141029c50 FUN_141029c50 body=1082 status=ok
// SIG undefined FUN_141029c50(void)

void FUN_141029c50(longlong *param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 local_58;
  uint uStack_44;
  undefined4 local_38 [2];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  
  cVar3 = '\0';
  lVar5 = *param_1;
  plVar11 = (longlong *)0x0;
  if (((*(longlong *)(lVar5 + 0x700) != 0) && (*(longlong *)(lVar5 + 0x708) != 0)) &&
     (cVar2 = (**(code **)(**(longlong **)(lVar5 + 0x708) + 0x18))(), cVar2 != '\0')) {
    lVar5 = *param_1;
    plVar7 = plVar11;
    if (*(longlong *)(lVar5 + 0x700) != 0) {
      plVar7 = *(longlong **)(lVar5 + 0x708);
    }
    (**(code **)(*plVar7 + 0x30))(plVar7,DAT_146871290,lVar5 + 0x630);
    lVar5 = *param_1;
    plVar7 = plVar11;
    if (*(longlong *)(lVar5 + 0x700) != 0) {
      plVar7 = *(longlong **)(lVar5 + 0x708);
    }
    (**(code **)(*plVar7 + 0x30))(plVar7,DAT_146871298,lVar5 + 0x640);
    lVar5 = *param_1;
    plVar7 = plVar11;
    if (*(longlong *)(lVar5 + 0x700) != 0) {
      plVar7 = *(longlong **)(lVar5 + 0x708);
    }
    (**(code **)(*plVar7 + 0x30))(plVar7,DAT_1468712a0,lVar5 + 0x650);
    lVar5 = *param_1;
    plVar7 = plVar11;
    if (*(longlong *)(lVar5 + 0x700) != 0) {
      plVar7 = *(longlong **)(lVar5 + 0x708);
    }
    (**(code **)(*plVar7 + 0x30))(plVar7,DAT_1468712a8,lVar5 + 0x660);
    lVar5 = *param_1;
    plVar7 = plVar11;
    if (*(longlong *)(lVar5 + 0x700) != 0) {
      plVar7 = *(longlong **)(lVar5 + 0x708);
    }
    (**(code **)(*plVar7 + 0x30))(plVar7,DAT_1468712b0,lVar5 + 0x670);
    lVar5 = *param_1;
    plVar7 = plVar11;
    if (*(longlong *)(lVar5 + 0x700) != 0) {
      plVar7 = *(longlong **)(lVar5 + 0x708);
    }
    (**(code **)(*plVar7 + 0x30))(plVar7,DAT_1468712b8,lVar5 + 0x680);
    lVar5 = *param_1;
    plVar7 = plVar11;
    if (*(longlong *)(lVar5 + 0x700) != 0) {
      plVar7 = *(longlong **)(lVar5 + 0x708);
    }
    (**(code **)(*plVar7 + 0x30))(plVar7,DAT_1468712c0,lVar5 + 0x690);
    plVar7 = plVar11;
    if (*(longlong *)(*param_1 + 0x700) != 0) {
      plVar7 = *(longlong **)(*param_1 + 0x708);
    }
    cVar3 = (**(code **)(*plVar7 + 0x10))();
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 1);
  plVar7 = plVar11;
  if (cVar2 != '\0') {
    lVar5 = FWeakObjectPtr::Get(param_1 + 1);
    iVar1 = *(int *)(lVar5 + 0xc);
    plVar6 = plVar11;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar10 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar10;
      plVar6 = (longlong *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
               (longlong)(int)((uVar4 & 0xffff) - uVar10) * 0x18);
    }
    if ((*(uint *)(plVar6 + 1) & 0x30000000) == 0) {
      plVar7 = (longlong *)FWeakObjectPtr::Get(param_1 + 1);
    }
  }
  plVar6 = plVar11;
  plVar12 = plVar11;
  if (plVar7 != (longlong *)0x0) {
    uVar8 = UUserObjectListEntry::GetPrivateStaticClass();
    plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar7,uVar8);
    if (plVar9 != (longlong *)0x0) {
      plVar6 = plVar7;
      plVar12 = plVar9;
    }
  }
  lVar5 = *param_1;
  *(longlong **)(lVar5 + 0x700) = plVar6;
  *(longlong **)(lVar5 + 0x708) = plVar12;
  lVar5 = *param_1;
  if (((*(longlong *)(lVar5 + 0x700) != 0) && (*(longlong *)(lVar5 + 0x708) != 0)) &&
     (cVar2 = (**(code **)(**(longlong **)(lVar5 + 0x708) + 0x18))(), cVar2 != '\0')) {
    lVar5 = *param_1;
    if (*(longlong *)(lVar5 + 0x2b8) != 0) {
      plVar7 = plVar11;
      if (*(longlong *)(lVar5 + 0x700) != 0) {
        plVar7 = *(longlong **)(lVar5 + 0x708);
      }
      cVar2 = (**(code **)(*plVar7 + 0x10))();
      if (cVar2 == '\0') {
        (**(code **)(*(longlong *)*param_1 + 0x580))((longlong *)*param_1,cVar3 == '\0');
        local_58 = CONCAT31(local_58._1_3_,0xff);
        local_28 = (ulonglong)uStack_44 << 0x20;
        local_38[0] = local_58;
        uStack_30 = 0;
        uStack_2c = 0;
        FUN_14105f020(*param_1,local_38);
      }
      else {
        FUN_14104fa80();
      }
    }
    lVar5 = *param_1;
    plVar7 = plVar11;
    if (*(longlong *)(lVar5 + 0x700) != 0) {
      plVar7 = *(longlong **)(lVar5 + 0x708);
    }
    (**(code **)(*plVar7 + 0x28))(plVar7,DAT_146871290,lVar5 + 0x630);
    lVar5 = *param_1;
    plVar7 = plVar11;
    if (*(longlong *)(lVar5 + 0x700) != 0) {
      plVar7 = *(longlong **)(lVar5 + 0x708);
    }
    (**(code **)(*plVar7 + 0x28))(plVar7,DAT_146871298,lVar5 + 0x640);
    lVar5 = *param_1;
    plVar7 = plVar11;
    if (*(longlong *)(lVar5 + 0x700) != 0) {
      plVar7 = *(longlong **)(lVar5 + 0x708);
    }
    (**(code **)(*plVar7 + 0x28))(plVar7,DAT_1468712a0,lVar5 + 0x650);
    lVar5 = *param_1;
    plVar7 = plVar11;
    if (*(longlong *)(lVar5 + 0x700) != 0) {
      plVar7 = *(longlong **)(lVar5 + 0x708);
    }
    (**(code **)(*plVar7 + 0x28))(plVar7,DAT_1468712a8,lVar5 + 0x660);
    lVar5 = *param_1;
    plVar7 = plVar11;
    if (*(longlong *)(lVar5 + 0x700) != 0) {
      plVar7 = *(longlong **)(lVar5 + 0x708);
    }
    (**(code **)(*plVar7 + 0x28))(plVar7,DAT_1468712b0,lVar5 + 0x670);
    lVar5 = *param_1;
    plVar7 = plVar11;
    if (*(longlong *)(lVar5 + 0x700) != 0) {
      plVar7 = *(longlong **)(lVar5 + 0x708);
    }
    (**(code **)(*plVar7 + 0x28))(plVar7,DAT_1468712b8,lVar5 + 0x680);
    lVar5 = *param_1;
    if (*(longlong *)(lVar5 + 0x700) != 0) {
      plVar11 = *(longlong **)(lVar5 + 0x708);
    }
    (**(code **)(*plVar11 + 0x28))(plVar11,DAT_1468712c0,lVar5 + 0x690);
  }
  return;
}



// FUNCTION 14102a090 FUN_14102a090 body=140 status=ok
// SIG undefined FUN_14102a090(void)

void FUN_14102a090(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  uVar4 = 0;
  uVar3 = uVar4;
  if (*(int *)(param_1 + 10) != 0) {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 4;
    }
    if (plVar5 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar5 + 8))();
    }
  }
  uVar2 = (*(code *)param_1[2])(uVar3);
  puVar1 = *(undefined8 **)*param_1;
  *(undefined4 *)(puVar1 + 0xc) = uVar2;
  *(undefined1 *)(puVar1 + 0xb) = 1;
  (**(code **)(*(longlong *)puVar1[10] + 0x10))();
  if (*(int *)(puVar1 + 8) != 0) {
    plVar5 = (longlong *)puVar1[6];
    if ((longlong *)puVar1[6] == (longlong *)0x0) {
      plVar5 = puVar1 + 2;
    }
    if (plVar5 != (longlong *)0x0) {
      if (plVar5 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar5 + 8))();
      }
      (*(code *)*puVar1)(uVar4);
    }
  }
  return;
}



// FUNCTION 14102a120 FUN_14102a120 body=1269 status=ok
// SIG undefined FUN_14102a120(void)

void FUN_14102a120(longlong *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined8 local_res8;
  
  pwVar7 = (wchar_t *)0x0;
  lVar4 = *param_1;
  if (*(longlong *)(lVar4 + 0x630) != 0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::UpdateCachedAmmoComponent",L"::");
    pwVar6 = pwVar7;
    while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar6 = pwVar2;
    }
    FName::FName(&local_res8,pwVar6 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x630) + 0x510,*param_1,local_res8);
    lVar4 = *param_1;
  }
  if (*(longlong *)(lVar4 + 0x640) != 0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::UpdateCachedAmmoCounts",L"::");
    pwVar6 = pwVar7;
    while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar6 = pwVar2;
    }
    FName::FName(&local_res8,pwVar6 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x640) + 400,*param_1,local_res8);
    *(undefined8 *)(*param_1 + 0x640) = 0;
    lVar4 = *param_1;
  }
  lVar4 = FWeakObjectPtr::Get(lVar4 + 0x5e0);
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
    if (bVar1) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnWeaponChanged",L"::");
      pwVar6 = pwVar7;
      while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
        pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar6 = pwVar2;
      }
      FName::FName(&local_res8,pwVar6 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar4 + 0x1050,*param_1,local_res8);
      *(undefined8 *)(*param_1 + 0x630) = 0;
      lVar4 = *(longlong *)(lVar4 + 0x900);
      if (lVar4 != 0) {
        pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnLadderExit",L"::");
        pwVar6 = pwVar7;
        while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
          pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar6 = pwVar2;
        }
        FName::FName(&local_res8,pwVar6 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar4 + 0x11a0,*param_1,local_res8);
        pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnLadderExit",L"::");
        pwVar6 = pwVar7;
        while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
          pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar6 = pwVar2;
        }
        FName::FName(&local_res8,pwVar6 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar4 + 0x11b0,*param_1,local_res8);
        pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnLadderExit",L"::");
        pwVar6 = pwVar7;
        while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
          pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar6 = pwVar2;
        }
        FName::FName(&local_res8,pwVar6 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar4 + 0x11c0,*param_1,local_res8);
        pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnLadderEnter",L"::");
        pwVar6 = pwVar7;
        while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
          pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
          pwVar6 = pwVar2;
        }
        FName::FName(&local_res8,pwVar6 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar4 + 0x1190,*param_1,local_res8);
      }
    }
  }
  lVar4 = *param_1;
  if (*(longlong *)(lVar4 + 0x648) != 0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnReloadStarted",L"::");
    pwVar6 = pwVar7;
    while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar6 = pwVar2;
    }
    FName::FName(&local_res8,pwVar6 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x648) + 400,*param_1,local_res8);
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnReloadEnded",L"::");
    pwVar6 = pwVar7;
    while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar6 = pwVar2;
    }
    FName::FName(&local_res8,pwVar6 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x648) + 0x1a0,*param_1,local_res8);
    *(undefined8 *)(*param_1 + 0x648) = 0;
    lVar4 = *param_1;
  }
  lVar4 = FWeakObjectPtr::Get(lVar4 + 0x5c8);
  if (lVar4 != 0) {
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
    if (bVar1) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnInputDeviceChanged",L"::");
      while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
        pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar7 = pwVar3;
      }
      FName::FName(&local_res8,pwVar7 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar4 + 0x5f8,*param_1,local_res8);
    }
  }
  return;
}



// FUNCTION 14102a620 FUN_14102a620 body=271 status=ok
// SIG undefined FUN_14102a620(void)

void FUN_14102a620(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  lVar1 = FUN_1416f8720(*param_1);
  if (lVar1 != 0) {
    lVar1 = FUN_1416f8720(param_1[1]);
    if (lVar1 != 0) {
      FWeakObjectPtr::operator=(&local_28,0);
      FWeakObjectPtr::operator=(&local_20,0);
      FWeakObjectPtr::operator=(local_18,0);
      FWeakObjectPtr::operator=(local_10,0);
      FWeakObjectPtr::operator=(&local_res8,0);
      local_28 = local_res8;
      local_24 = local_resc;
      uVar2 = FUN_1416f8720(param_1[2]);
      FWeakObjectPtr::operator=(local_18,uVar2);
      uVar2 = FUN_1416f8720(param_1[3]);
      FWeakObjectPtr::operator=(local_10,uVar2);
      FWeakObjectPtr::operator=(&local_res8,0);
      local_20 = local_res8;
      local_1c = local_resc;
      lVar1 = FUN_1416f8720(param_1[1]);
      local_30 = 0;
      local_38 = lVar1;
      if (lVar1 != 0) {
        uVar2 = UBlendableInterface::GetPrivateStaticClass();
        local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
      }
      uVar2 = FUN_1416f8720(*param_1);
      FUN_142ecfd10(uVar2,&local_38,&local_28);
    }
  }
  return;
}



// FUNCTION 14102a730 FUN_14102a730 body=150 status=ok
// SIG undefined FUN_14102a730(void)

void FUN_14102a730(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 0x18);
  local_res14 = *(undefined4 *)(param_1 + 0x1c);
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
      FUN_14102d330(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14102a7d0 FUN_14102a7d0 body=836 status=ok
// SIG undefined FUN_14102a7d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14102a7d0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  ulonglong *puStack_100;
  undefined4 *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  int local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
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
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  cVar5 = FWeakObjectPtr::IsValid(*param_1 + 0x184);
  if (cVar5 != '\0') {
    uVar6 = FWeakObjectPtr::Get(*param_1 + 0x184);
    FUN_14103aaf0(uVar6,&local_e8);
    if (local_e0 < 2) {
      local_108 = (undefined4 *)0x0;
      puStack_100 = (ulonglong *)&DAT_00000010;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
      FGenericPlatformString::Memcpy(local_108,L"websiteLinkText",0x20);
      lVar7 = FWeakObjectPtr::Get(*param_1 + 0x184);
      FUN_142f100e0(*param_1,&local_108,lVar7 + 0x848);
      puVar10 = local_108;
    }
    else {
      local_f8 = (undefined4 *)0x0;
      local_f0 = 0x10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
      FGenericPlatformString::Memcpy(local_f8,L"websiteLinkText",0x20);
      lVar7 = FWeakObjectPtr::Get(*param_1 + 0x184);
      lVar8 = FText::FromString(local_68,&local_e8);
      puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_78,lVar7 + 0x860);
      local_50[0] = 4;
      FText::FText(local_40,lVar8);
      local_d8 = *puVar9;
      local_108 = local_50;
      puStack_100 = &local_20;
      local_d0 = puVar9[1];
      local_28 = '\x01';
      if (local_d0 != 0) {
        LOCK();
        *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
        UNLOCK();
      }
      local_c8 = local_108;
      uStack_c0 = puStack_100;
      uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_b8,&local_c8);
      uVar6 = FText::Format(local_90,&local_d8,uVar6);
      FText::FText(local_a8,uVar6);
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_88 + 1;
        lVar7 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_b8);
      if ((local_28 != '\0') && (local_28 = '\0', local_38 != (longlong *)0x0)) {
        LOCK();
        plVar4 = local_38 + 1;
        lVar7 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      plVar4 = *(longlong **)(lVar8 + 8);
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
      FUN_142f100e0(*param_1,&local_f8,local_a8);
      puVar10 = local_f8;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_a0 + 1;
        lVar7 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)local_a0 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          puVar10 = local_f8;
          if (iVar3 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
            puVar10 = local_f8;
          }
        }
      }
    }
    if (puVar10 != (undefined4 *)0x0) {
      FMemory::Free();
    }
    if (local_e8 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14102ab20 FUN_14102ab20 body=2648 status=ok
// SIG undefined FUN_14102ab20(void)

void FUN_14102ab20(longlong *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 local_68 [40];
  
  lVar5 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
  if (lVar5 == 0) {
LAB_14102abc7:
    bVar1 = false;
  }
  else {
    lVar6 = FUN_14144ee20();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) || (lVar5 = *(longlong *)(lVar5 + 0x88), lVar5 == 0)) goto LAB_14102abc7;
    lVar6 = FUN_1413e04a0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) || (*(char *)(lVar5 + 0x110) != '\a')) goto LAB_14102abc7;
    bVar1 = true;
  }
  lVar5 = FUN_1416f8720((int)param_1[1]);
  if (lVar5 == 0) {
    lVar5 = 0;
LAB_14102ac1d:
    lVar6 = 0;
  }
  else {
    lVar5 = FUN_1416f8720((int)param_1[1]);
    if (bVar1) {
      lVar5 = *(longlong *)(lVar5 + 0x400);
    }
    else {
      lVar5 = *(longlong *)(lVar5 + 0x3f8);
    }
    if (lVar5 == 0) goto LAB_14102ac1d;
    lVar6 = FWeakObjectPtr::Get(lVar5 + 0x420);
  }
  plVar7 = (longlong *)FWeakObjectPtr::Get(*param_1 + 0x594);
  if (plVar7 == (longlong *)0x0) goto LAB_14102b540;
  lVar8 = FUN_1413f82e0();
  if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) goto LAB_14102b540;
  uVar9 = AGFireballProjectile::GetPrivateStaticClass();
  lVar8 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar9);
  if ((lVar8 == 0) || (lVar10 = FUN_1416f8720((int)param_1[1]), lVar10 == 0)) goto LAB_14102b540;
  lVar10 = FUN_1416f8720((int)param_1[1]);
  if ((*(longlong *)(lVar10 + 0x2f8) == 0) || (cVar3 = FOpenXRHMD::IsStereoEnabled(), cVar3 == '\0')
     ) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    puVar15 = local_b0;
LAB_14102acee:
    uVar9 = FText::FText(puVar15,*param_1 + 0xd80);
    FUN_141053760(*param_1,uVar9);
    uVar9 = FUN_140e971d0(*param_1);
    FUN_140ab72e0(uVar9,1);
    return;
  }
  lVar11 = FUN_1416f8720((int)param_1[1]);
  lVar10 = *(longlong *)(lVar11 + 0x410);
  if ((lVar10 == 0) && (lVar10 = *(longlong *)(lVar11 + 0x408), lVar10 == 0)) {
    lVar10 = *(longlong *)(lVar11 + 0x418);
  }
  FUN_1410400c0(*param_1,lVar10);
  lVar10 = FUN_1416f8720((int)param_1[1]);
  if (*(longlong *)(lVar10 + 0x410) == 0) {
    lVar10 = FUN_1416f8720((int)param_1[1]);
    if (*(longlong *)(lVar10 + 0x408) == 0) {
      lVar5 = FUN_1416f8720((int)param_1[1]);
      if ((*(longlong *)(lVar5 + 0x418) != 0) &&
         (lVar5 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc)), lVar5 != 0)) {
        lVar6 = FUN_14144ef80();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          lVar6 = *(longlong *)(lVar5 + 0x88);
          lVar8 = FUN_1416f8720((int)param_1[1]);
          plVar17 = *(longlong **)(*(longlong *)(lVar8 + 0x418) + 0x60);
          plVar18 = plVar17 + *(int *)(*(longlong *)(lVar8 + 0x418) + 0x68);
          for (; plVar17 != plVar18; plVar17 = plVar17 + 1) {
            if (*plVar17 == lVar6) {
              local_b8 = FUN_1414add30();
              lVar6 = (**(code **)(*plVar7 + 0x628))(plVar7,local_b8);
              if (lVar6 != 0) {
                uVar9 = *(undefined8 *)(lVar5 + 0x88);
                lVar8 = FUN_1416f8720((int)param_1[1]);
                FUN_1414adf40(lVar6,*(undefined8 *)(lVar8 + 0x418),uVar9);
                uVar9 = *(undefined8 *)(lVar5 + 0x88);
                lVar5 = FUN_1416f8720((int)param_1[1]);
                if (DAT_14686ad35 == '\0') {
                  FUN_140bfdec0(&DAT_14686ad34);
                  DAT_14686ad35 = '\x01';
                }
                uVar13 = FUN_1410833d0(*param_1);
                FUN_140c08ed0(&DAT_14686ad34,uVar13,*(undefined8 *)(lVar5 + 0x418),uVar9);
                goto LAB_14102b47f;
              }
              break;
            }
          }
        }
      }
    }
    else {
      lVar10 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
      if (lVar10 != 0) {
        lVar11 = FUN_14144ee20();
        if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          plVar18 = *(longlong **)(*param_1 + 0xc10);
          plVar7 = plVar18 + *(int *)(*param_1 + 0xc18);
          for (; plVar18 != plVar7; plVar18 = plVar18 + 1) {
            lVar11 = *plVar18;
            if (lVar11 != 0) {
              lVar12 = FUN_1416f8720((int)param_1[1]);
              plVar16 = *(longlong **)(lVar11 + 0x140);
              plVar17 = plVar16 + *(int *)(lVar11 + 0x148);
              for (; plVar16 != plVar17; plVar16 = plVar16 + 1) {
                if (*plVar16 == *(longlong *)(lVar12 + 0x408)) {
                  if ((bVar1) && (lVar6 != 0)) {
                    lVar12 = FUN_1416f8720((int)param_1[1]);
                    lVar12 = FWeakObjectPtr::Get(lVar12 + 0x420);
                    if (lVar12 != 0) {
                      lVar6 = FUN_1416f8720((int)param_1[1]);
                      lVar6 = FWeakObjectPtr::Get(lVar6 + 0x420);
                      lVar6 = *(longlong *)(lVar6 + 0x458);
                      if (lVar6 == 0) goto LAB_14102b139;
                      lVar12 = FUN_14144ee20();
                      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90))
                         || (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                              (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
                        bVar1 = false;
                      }
                      else {
                        bVar1 = true;
                      }
                      if ((!bVar1) || (*(longlong *)(lVar6 + 0x88) == *(longlong *)(lVar10 + 0x88)))
                      goto LAB_14102b139;
                      plVar18 = *(longlong **)(*param_1 + 0xc10);
                      plVar7 = plVar18 + *(int *)(*param_1 + 0xc18);
                      if (plVar18 == plVar7) goto LAB_14102b139;
                      goto LAB_14102b0f0;
                    }
                  }
                  if (((lVar5 == 0) || (lVar6 == 0)) ||
                     (lVar6 = *(longlong *)(lVar6 + 0x458), lVar6 == 0)) goto LAB_14102b139;
                  lVar12 = FUN_14144ee20();
                  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = true;
                  }
                  if (!bVar1) goto LAB_14102b139;
                  plVar18 = *(longlong **)(*param_1 + 0xc10);
                  plVar7 = plVar18 + *(int *)(*param_1 + 0xc18);
                  if (plVar18 == plVar7) goto LAB_14102b139;
                  goto LAB_14102b2d4;
                }
              }
            }
          }
        }
      }
    }
    goto LAB_14102b540;
  }
  lVar10 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
  if (lVar10 == 0) goto LAB_14102b540;
  lVar11 = FUN_14144ecc0();
  if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
      != lVar11 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_14102b540;
  if (((lVar5 != 0) && (lVar6 != 0)) && (*(longlong *)(lVar6 + 0x458) == lVar10)) {
    cVar3 = AAIController::PerformAction(lVar5);
    if (cVar3 != '\0') {
      puVar15 = local_98;
      goto LAB_14102acee;
    }
    lVar6 = FUN_1416f8720((int)param_1[1]);
    lVar6 = FWeakObjectPtr::Get(lVar6 + 0x420);
    if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x458), lVar6 != 0)) {
      lVar11 = FUN_14144ecc0();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_141457410(lVar8,*(undefined8 *)(lVar5 + 0x410),*(undefined8 *)(lVar6 + 0x88));
        if (*(longlong *)(lVar6 + 0x88) != 0) {
          lVar12 = FUN_14144bcb0();
          lVar6 = *(longlong *)(lVar6 + 0x88);
          for (lVar11 = lVar6; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x30)) {
            if (lVar11 == lVar12) goto LAB_14102ae91;
          }
        }
        lVar6 = 0;
LAB_14102ae91:
        if (DAT_14686ad35 == '\0') {
          FUN_140bfdec0(&DAT_14686ad34);
          DAT_14686ad35 = '\x01';
        }
        uVar9 = FUN_1410833d0(*param_1);
        FUN_140c041f0(&DAT_14686ad34,uVar9,*(undefined8 *)(lVar5 + 0x410),lVar6);
      }
    }
  }
  lVar5 = FUN_1416f8720((int)param_1[1]);
  FUN_141457410(lVar8,*(undefined8 *)(lVar5 + 0x410),*(undefined8 *)(lVar10 + 0x88));
  if (*(longlong *)(lVar10 + 0x88) != 0) {
    lVar8 = FUN_14144bcb0();
    lVar5 = *(longlong *)(lVar10 + 0x88);
    for (lVar6 = lVar5; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
      if (lVar6 == lVar8) goto LAB_14102af20;
    }
  }
  lVar5 = 0;
LAB_14102af20:
  lVar6 = FUN_1416f8720((int)param_1[1]);
  if (DAT_14686ad35 == '\0') {
    FUN_140bfdec0(&DAT_14686ad34);
    DAT_14686ad35 = '\x01';
  }
  uVar9 = FUN_1410833d0(*param_1);
  FUN_140c041f0(&DAT_14686ad34,uVar9,*(undefined8 *)(lVar6 + 0x410),lVar5);
  goto LAB_14102b47f;
LAB_14102b0f0:
  do {
    lVar12 = *plVar18;
    if (lVar12 != 0) {
      plVar16 = *(longlong **)(lVar12 + 0x140);
      plVar17 = plVar16 + *(int *)(lVar12 + 0x148);
      for (; plVar16 != plVar17; plVar16 = plVar16 + 1) {
        if (*plVar16 == *(longlong *)(lVar5 + 0x408)) {
          lVar14 = FWeakObjectPtr::Get(lVar5 + 0x420);
          if ((*(longlong *)(lVar14 + 0x458) != lVar10) ||
             (cVar3 = AAIController::PerformAction(lVar5), cVar3 == '\0')) {
            uVar9 = *(undefined8 *)(lVar12 + 0x10);
            goto LAB_14102b1f3;
          }
          puVar15 = local_80;
          goto LAB_14102acee;
        }
      }
    }
    plVar18 = plVar18 + 1;
  } while (plVar18 != plVar7);
  goto LAB_14102b139;
code_r0x00014102b305:
  plVar16 = plVar16 + 1;
  if (plVar16 == plVar17) goto LAB_14102b30e;
  goto LAB_14102b300;
LAB_14102b2d4:
  do {
    lVar12 = *plVar18;
    if (lVar12 != 0) {
      plVar16 = *(longlong **)(lVar12 + 0x140);
      plVar17 = plVar16 + *(int *)(lVar12 + 0x148);
      if (plVar16 != plVar17) {
LAB_14102b300:
        if (*plVar16 != *(longlong *)(lVar5 + 0x408)) goto code_r0x00014102b305;
        cVar3 = AAIController::PerformAction(lVar5);
        if ((cVar3 == '\0') || (lVar6 != lVar10)) {
          uVar9 = *(undefined8 *)(lVar12 + 0x10);
LAB_14102b1f3:
          FUN_141457460(lVar8,uVar9,*(undefined8 *)(lVar5 + 0x408),*(undefined8 *)(lVar6 + 0x88));
          uVar9 = *(undefined8 *)(lVar6 + 0x88);
          if (DAT_14686ad35 == '\0') {
            FUN_140bfdec0(&DAT_14686ad34);
            DAT_14686ad35 = '\x01';
          }
          uVar13 = FUN_1410833d0(*param_1);
          FUN_140c038d0(&DAT_14686ad34,uVar13,*(undefined8 *)(lVar5 + 0x408),uVar9);
          break;
        }
        puVar15 = local_68;
        goto LAB_14102acee;
      }
    }
LAB_14102b30e:
    plVar18 = plVar18 + 1;
  } while (plVar18 != plVar7);
LAB_14102b139:
  uVar9 = *(undefined8 *)(lVar10 + 0x88);
  lVar5 = FUN_1416f8720((int)param_1[1]);
  FUN_141457460(lVar8,*(undefined8 *)(lVar11 + 0x10),*(undefined8 *)(lVar5 + 0x408),uVar9);
  uVar9 = *(undefined8 *)(lVar10 + 0x88);
  lVar5 = FUN_1416f8720((int)param_1[1]);
  if (DAT_14686ad35 == '\0') {
    FUN_140bfdec0(&DAT_14686ad34);
    DAT_14686ad35 = '\x01';
  }
  uVar13 = FUN_1410833d0(*param_1);
  FUN_140c038d0(&DAT_14686ad34,uVar13,*(undefined8 *)(lVar5 + 0x408),uVar9);
LAB_14102b47f:
  local_d8 = 0;
  local_d0 = 0;
  *(undefined1 *)(*param_1 + 0x6bc) = 1;
  plVar7 = (longlong *)*param_1;
  (**(code **)(*plVar7 + 0x4e8))(plVar7,plVar7[0x128],&local_d8);
  lVar5 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
  if (lVar5 != 0) {
    local_c8 = 0;
    local_c0 = 0;
    lVar5 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0xc));
    (**(code **)(*(longlong *)*param_1 + 0x4e8))
              ((longlong *)*param_1,*(undefined8 *)(lVar5 + 0x80),&local_c8);
  }
  lVar5 = *(longlong *)(*param_1 + 0xbc8);
  if (lVar5 != 0) {
    cVar3 = FUN_140fb3d70(lVar5,*param_1 + 0x9c8);
    if (cVar3 == '\0') {
      iVar4 = -1;
    }
    else {
      iVar4 = FUN_1406ab3e0(*(undefined8 *)(*param_1 + 0xbc8));
    }
    lVar5 = *param_1;
    if (((iVar4 == *(int *)(lVar5 + 0x9b8)) || (iVar4 == *(int *)(lVar5 + 0x9bc))) ||
       (iVar4 == *(int *)(lVar5 + 0x9c0))) {
      LOCK();
      *(undefined4 *)(lVar5 + 0xedc) = 1;
      UNLOCK();
    }
  }
LAB_14102b540:
  FUN_141065c60(*param_1,1);
  return;
}



// FUNCTION 14102b580 FUN_14102b580 body=150 status=ok
// SIG undefined FUN_14102b580(void)

void FUN_14102b580(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 8);
  local_res14 = *(undefined4 *)(param_1 + 0xc);
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
      FUN_1410272f0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14102b620 FUN_14102b620 body=1171 status=ok
// SIG undefined FUN_14102b620(void)

void FUN_14102b620(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *_Src;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  void *local_118;
  ulonglong local_110;
  longlong local_108;
  undefined1 local_100;
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  longlong local_e8;
  longlong *plStack_e0;
  longlong local_d8;
  undefined1 local_d0;
  longlong local_c8 [2];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  lVar11 = 0;
  local_res8 = 0;
  lVar7 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (lVar7 == 0) {
LAB_14102b697:
    lVar7 = lVar11;
  }
  else {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (!bVar13) goto LAB_14102b697;
  }
  cVar5 = FWeakObjectPtr::IsValid(*param_1 + 0x6d8);
  bVar13 = cVar5 == '\0';
  if (bVar13) {
    plVar10 = &local_e8;
    local_e8 = 0;
    plStack_e0 = (longlong *)0x0;
  }
  else {
    uVar9 = FWeakObjectPtr::Get(*param_1 + 0x6d8);
    plVar10 = (longlong *)FUN_142dcf3a0(uVar9,local_88);
    lVar11 = *plVar10;
  }
  plVar3 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10 = plStack_e0;
  if (bVar13) {
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_e0 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_e0)(plStack_e0);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
        }
      }
    }
  }
  if ((!bVar13) && (local_80 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_80 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if ((lVar7 == 0) || (lVar11 == 0)) goto LAB_14102ba47;
  local_128 = (undefined4)lVar11;
  uStack_124 = (undefined4)((ulonglong)lVar11 >> 0x20);
  uStack_120 = SUB84(plVar3,0);
  uStack_11c = (undefined4)((ulonglong)plVar3 >> 0x20);
  local_118 = (void *)0x0;
  local_110 = 0;
  local_a8 = local_128;
  uStack_a4 = uStack_124;
  uStack_a0 = uStack_120;
  uStack_9c = uStack_11c;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  cVar5 = FUN_140d79f00(*(undefined8 *)(lVar7 + 0x478),&local_a8,1,1,&local_118);
  plVar10 = (longlong *)CONCAT44(uStack_9c,uStack_a0);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  if (cVar5 == '\0') {
    local_98 = local_128;
    uStack_94 = uStack_124;
    uStack_90 = uStack_120;
    uStack_8c = uStack_11c;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    FUN_140d938f0(*(undefined8 *)(lVar7 + 0x478),&local_98);
    plVar10 = (longlong *)CONCAT44(uStack_8c,uStack_90);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar10 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
  else {
    lVar11 = *param_1;
    lVar7 = FWeakObjectPtr::Get(lVar11 + 0x5cc);
    if (lVar7 == 0) {
LAB_14102b90a:
      local_100 = 0;
    }
    else {
      lVar8 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      if (!bVar13) goto LAB_14102b90a;
      cVar5 = FUN_140bca8a0(lVar7);
      if (cVar5 == '\0') goto LAB_14102b90a;
      iVar6 = FUN_14046e5c0(lVar7);
      if (iVar6 < 2) goto LAB_14102b90a;
      local_100 = 1;
    }
    _Src = local_118;
    lVar7 = (longlong)(int)local_110;
    local_f8 = (void *)0x0;
    local_f0 = (int)local_110;
    local_108 = lVar11;
    if ((int)local_110 == 0) {
      local_ec = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f8,local_110 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_f8,_Src,lVar7 * 2);
    }
    uVar4 = local_100;
    lVar7 = local_108;
    FWeakObjectPtr::operator=(&local_res8,lVar11);
    local_d8 = lVar7;
    local_d0 = uVar4;
    FString::FString(local_c8,&local_f8);
    local_b8 = local_res8;
    local_b4 = local_resc;
    local_48 = 0;
    local_38 = 0;
    puVar12 = (undefined8 *)FUN_140438ef0(0x30,local_68);
    if (puVar12 != (undefined8 *)0x0) {
      *puVar12 = &PTR_FUN_14467a620;
      puVar12[1] = local_d8;
      *(undefined1 *)(puVar12 + 2) = local_d0;
      FString::FString(puVar12 + 3,local_c8);
      *(undefined4 *)(puVar12 + 5) = local_b8;
      *(undefined4 *)((longlong)puVar12 + 0x2c) = local_b4;
    }
    local_78[0] = &LAB_141031f40;
    if (local_c8[0] != 0) {
      FMemory::Free();
    }
    FUN_14208c4f0(lVar11,local_78);
    if (local_f8 != (void *)0x0) {
      FMemory::Free();
    }
    plVar10 = *(longlong **)(lVar11 + 0x690);
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x2c8))(plVar10,&local_118);
    }
  }
  if (local_118 != (void *)0x0) {
    FMemory::Free();
  }
LAB_14102ba47:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar3 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 14102bac0 FUN_14102bac0 body=152 status=ok
// SIG undefined FUN_14102bac0(void)

void FUN_14102bac0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(*param_1 + 0x184);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(*param_1 + 0x184);
    if (*(longlong *)(lVar1 + 0x6e0) != 0) {
      lVar1 = FWeakObjectPtr::Get(*param_1 + 0x184);
      TBaseMulticastDelegate<void>::Remove
                (*(longlong *)(lVar1 + 0x6e0) + 0x138,*(undefined8 *)(*param_1 + 0x200));
      lVar1 = FWeakObjectPtr::Get(*param_1 + 0x184);
      TBaseMulticastDelegate<void>::Remove
                (*(longlong *)(lVar1 + 0x6e0) + 0x150,*(undefined8 *)(*param_1 + 0x208));
      return;
    }
  }
  return;
}



// FUNCTION 14102bb60 FUN_14102bb60 body=266 status=ok
// SIG undefined FUN_14102bb60(void)

void FUN_14102bb60(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [8];
  
  lVar1 = FUN_1416f8720(*param_1);
  if (lVar1 != 0) {
    lVar1 = FUN_1416f8720(param_1[1]);
    if (lVar1 != 0) {
      FWeakObjectPtr::operator=(&local_28,0);
      FWeakObjectPtr::operator=(&local_20,0);
      FWeakObjectPtr::operator=(&local_18,0);
      FWeakObjectPtr::operator=(local_10,0);
      FWeakObjectPtr::operator=(&local_res8,0);
      local_28 = local_res8;
      local_24 = local_resc;
      FWeakObjectPtr::operator=(&local_res8,0);
      local_18 = local_res8;
      local_14 = local_resc;
      uVar2 = FUN_1416f8720(param_1[2]);
      FWeakObjectPtr::operator=(local_10,uVar2);
      FWeakObjectPtr::operator=(&local_res8,0);
      local_20 = local_res8;
      local_1c = local_resc;
      lVar1 = FUN_1416f8720(param_1[1]);
      local_30 = 0;
      local_38 = lVar1;
      if (lVar1 != 0) {
        uVar2 = UBlendableInterface::GetPrivateStaticClass();
        local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
      }
      uVar2 = FUN_1416f8720(*param_1);
      FUN_142ecfd10(uVar2,&local_38,&local_28);
    }
  }
  return;
}



// FUNCTION 14102bc70 FUN_14102bc70 body=293 status=ok
// SIG undefined FUN_14102bc70(void)

void FUN_14102bc70(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  cVar4 = FUN_14208d120(*param_1,*param_1 + 0xab8,L"errorMessage");
  if (cVar4 != '\0') {
    uVar6 = FUN_1420392d0(*(undefined8 *)(*param_1 + 0xab8),local_18,L"errorMessageText");
    FUN_142ede260(*param_1 + 0xb88,uVar6);
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
    if ((*(longlong *)(*param_1 + 0xb90) != 0) &&
       (lVar3 = *(longlong *)(*param_1 + 0xb98), lVar3 != 0)) {
      piVar2 = (int *)(lVar3 + 8);
      LOCK();
      iVar5 = *piVar2;
      if (iVar5 == 0) {
        *piVar2 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (0 < iVar5) {
        UMistDebugEntityScreen::InspectEntity(*param_1 + 0xb88,param_1 + 1,1,0);
      }
    }
    FUN_14203e030(*(undefined8 *)(*param_1 + 0xab8),&DAT_144603cf8);
  }
  param_1 = (longlong *)*param_1;
  local_28 = 0;
  local_20 = 0;
  (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0x12e],&local_28);
  return;
}



// FUNCTION 14102bda0 FUN_14102bda0 body=591 status=ok
// SIG undefined FUN_14102bda0(void)

void FUN_14102bda0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_68 [3];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar5 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar5 != '\0') {
    lVar7 = FWeakObjectPtr::Get(&local_res10);
    lVar9 = 0;
    iVar3 = *(int *)(lVar7 + 0xc);
    lVar7 = lVar9;
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar10 = iVar3 >> 0x1f & 0xffff;
      uVar6 = iVar3 + uVar10;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
              (longlong)(int)((uVar6 & 0xffff) - uVar10) * 0x18;
    }
    if ((*(uint *)(lVar7 + 8) & 0x30000000) == 0) {
      local_68[0] = 0;
      local_68[1] = 0x19;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
      FGenericPlatformString::Memcpy(local_68[0],L"signInMC.signInPageTitle",0x32);
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_38,L"LINK ACCOUNT",L"SHiFTMenu",L"SHiFTFollowStepsText");
      FUN_142f100e0(*param_1,local_68,uVar8);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      FUN_141060c00(*param_1);
      lVar7 = *param_1;
      cVar5 = FWeakObjectPtr::IsValid(lVar7 + 0x184);
      if (cVar5 != '\0') {
        lVar4 = *(longlong *)(lVar7 + 0x238);
        local_50 = lVar9;
        local_68[2] = lVar4;
        if (lVar4 != 0) {
          uVar8 = UBlendableInterface::GetPrivateStaticClass();
          local_50 = UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar8);
        }
        uVar8 = FWeakObjectPtr::Get(lVar7 + 0x184);
        FUN_142ecfdd0(uVar8,local_68 + 2,0,0,0,0);
        lVar4 = *(longlong *)(lVar7 + 0x238);
        local_48 = lVar4;
        if (lVar4 != 0) {
          uVar8 = UBlendableInterface::GetPrivateStaticClass();
          lVar9 = UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar8);
        }
        local_40 = lVar9;
        uVar8 = FWeakObjectPtr::Get(lVar7 + 0x184);
        FUN_142ed36d0(uVar8,&local_48,0);
      }
      FUN_142f10940(*param_1,1);
    }
  }
  return;
}



// FUNCTION 14102bff0 FUN_14102bff0 body=120 status=ok
// SIG undefined FUN_14102bff0(void)

void FUN_14102bff0(undefined8 *param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_1[1] != 0) && (lVar3 = FUN_14203d310(), lVar3 != 0)) {
    lVar4 = FUN_1413976e0();
    iVar1 = *(int *)(lVar4 + 0x90);
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < iVar1) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)iVar1 * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_1410658b0(lVar3,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
      FUN_14103feb0(*param_1,0,0);
    }
  }
  return;
}



// FUNCTION 14102c070 FUN_14102c070 body=150 status=ok
// SIG undefined FUN_14102c070(void)

void FUN_14102c070(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 8);
  local_res14 = *(undefined4 *)(param_1 + 0xc);
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
      FUN_14102a7d0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14102c110 FUN_14102c110 body=277 status=ok
// SIG undefined FUN_14102c110(void)

void FUN_14102c110(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = FUN_1416f8720((int)param_1[1]);
  *(undefined8 *)(*param_1 + 0xbf8) = uVar2;
  cVar1 = *(char *)(*param_1 + 0xc09);
  if (cVar1 == '\0') {
    cVar1 = *(char *)(*param_1 + 0xc08);
  }
  if (cVar1 == '\x02') {
    lVar3 = FUN_1416f8720((int)param_1[1]);
    if (lVar3 != 0) {
      lVar3 = FUN_1416f8720((int)param_1[1]);
      lVar3 = FWeakObjectPtr::Get(lVar3 + 0x420);
      if (lVar3 == 0) {
        lVar3 = FUN_1416f8720((int)param_1[1]);
        FUN_141045cb0(*param_1 + 0x6e0,*param_1,lVar3 + 0x330);
      }
      else {
        FUN_141047400(*param_1 + 0x6e0,*param_1,lVar3);
      }
      LOCK();
      *(undefined4 *)(*param_1 + 0xef8) = 1;
      UNLOCK();
    }
  }
  lVar3 = FUN_1416f8720((int)param_1[1]);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar4 = FUN_1416f8720((int)param_1[1]);
    lVar3 = *(longlong *)(lVar4 + 0x410);
    if ((lVar3 == 0) && (lVar3 = *(longlong *)(lVar4 + 0x408), lVar3 == 0)) {
      lVar3 = *(longlong *)(lVar4 + 0x418);
    }
  }
  FUN_14103feb0(*param_1,lVar3,0);
  lVar3 = *param_1;
  if (*(longlong *)(lVar3 + 0xbf8) != 0) {
    FUN_1410652a0(lVar3,*(undefined1 *)(*(longlong *)(lVar3 + 0xbf8) + 0x330));
    lVar3 = *param_1;
  }
  LOCK();
  *(undefined4 *)(lVar3 + 0x588) = 1;
  UNLOCK();
  return;
}



// FUNCTION 14102c230 FUN_14102c230 body=1619 status=ok
// SIG undefined FUN_14102c230(void)

void FUN_14102c230(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
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
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_110 = 0x10;
  uVar5 = 0;
  local_118 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
  FGenericPlatformString::Memcpy(local_118,L"rewardPageTitle",0x20);
  uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"REWARD HISTORY",L"SHiFTMenu",L"RewardHistoryPageTitle");
  FUN_142f100e0(*param_1,&local_118,uVar3);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_20 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if (local_118 != 0) {
    FMemory::Free();
  }
  FUN_14105e790(*param_1);
  local_f8 = 0;
  local_f0 = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
  FGenericPlatformString::Memcpy(local_f8,L"headerPanel.accountName",0x30);
  local_108 = (longlong *)0x0;
  local_100 = 0;
  uVar3 = FUN_140ecc7d0(*param_1,&local_f8,0,6,&local_108);
  *(undefined8 *)(*param_1 + 0x220) = uVar3;
  plVar7 = local_108;
  for (iVar8 = (int)local_100; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free(local_108);
  }
  if (local_f8 != 0) {
    FMemory::Free();
  }
  local_d8 = 0;
  local_d0 = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"headerPanel.diamondKeys",0x30);
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  uVar3 = FUN_140ecc7d0(*param_1,&local_d8,0,6,&local_e8);
  *(undefined8 *)(*param_1 + 0x228) = uVar3;
  plVar7 = local_e8;
  for (iVar8 = (int)local_e0; iVar8 != 0; iVar8 = iVar8 + -1) {
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
  plVar7 = *(longlong **)(*param_1 + 0x228);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x278))(plVar7,0);
  }
  local_b8 = 0;
  local_b0 = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  FGenericPlatformString::Memcpy(local_b8,L"headerPanel.goldenKeys",0x2e);
  local_c8 = (longlong *)0x0;
  local_c0 = 0;
  uVar3 = FUN_140ecc7d0(*param_1,&local_b8,0,6,&local_c8);
  *(undefined8 *)(*param_1 + 0x230) = uVar3;
  plVar7 = local_c8;
  for (iVar8 = (int)local_c0; iVar8 != 0; iVar8 = iVar8 + -1) {
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
  plVar7 = *(longlong **)(*param_1 + 0x230);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x278))(plVar7,0);
  }
  local_98 = 0;
  local_90 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  FGenericPlatformString::Memcpy(local_98,L"rewardHistoryList",0x24);
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  uVar3 = FUN_140ecb6b0(*param_1,&local_98,0,6,&local_a8);
  *(undefined8 *)(*param_1 + 0x208) = uVar3;
  plVar7 = local_a8;
  for (iVar8 = (int)local_a0; iVar8 != 0; iVar8 = iVar8 + -1) {
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
  if (*(longlong *)(*param_1 + 0x208) != 0) {
    *(undefined2 *)(*(longlong *)(*param_1 + 0x208) + 0x20a) = 0x102;
  }
  local_78 = 0;
  local_70 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Memcpy(local_78,L"noRewardsText",0x1c);
  local_88 = (longlong *)0x0;
  local_80 = 0;
  uVar3 = FUN_140ecc7d0(*param_1,&local_78,0,6,&local_88);
  *(undefined8 *)(*param_1 + 0x200) = uVar3;
  plVar7 = local_88;
  for (iVar8 = (int)local_80; iVar8 != 0; iVar8 = iVar8 + -1) {
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
  lVar4 = *param_1;
  plVar7 = *(longlong **)(lVar4 + 0x200);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x278))(plVar7,0);
    lVar4 = *param_1;
  }
  cVar2 = FWeakObjectPtr::IsValid(lVar4 + 0x184);
  if (cVar2 != '\0') {
    lVar4 = *param_1;
    if (*(longlong *)(lVar4 + 0x200) != 0) {
      lVar4 = FWeakObjectPtr::Get(lVar4 + 0x184);
      (**(code **)(**(longlong **)(*param_1 + 0x200) + 0x2b0))
                (*(longlong **)(*param_1 + 0x200),lVar4 + 0x830,1,0);
      lVar4 = *param_1;
    }
    lVar6 = *(longlong *)(lVar4 + 0x210);
    local_60 = uVar5;
    local_68 = lVar6;
    if (lVar6 != 0) {
      uVar3 = UBlendableInterface::GetPrivateStaticClass();
      local_60 = UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar3);
      lVar4 = *param_1;
    }
    uVar3 = FWeakObjectPtr::Get(lVar4 + 0x184);
    FUN_142ecfdd0(uVar3,&local_68,0,*(undefined8 *)(*param_1 + 0x218),0,
                  *(undefined8 *)(*param_1 + 0x208));
    lVar6 = *param_1;
    lVar4 = *(longlong *)(lVar6 + 0x218);
    local_50 = uVar5;
    local_58 = lVar4;
    if (lVar4 != 0) {
      uVar3 = UBlendableInterface::GetPrivateStaticClass();
      local_50 = UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar3);
      lVar6 = *param_1;
    }
    uVar3 = FWeakObjectPtr::Get(lVar6 + 0x184);
    FUN_142ecfdd0(uVar3,&local_58,*(undefined8 *)(*param_1 + 0x210),0,0,
                  *(undefined8 *)(*param_1 + 0x208));
    lVar6 = *param_1;
    lVar4 = *(longlong *)(lVar6 + 0x208);
    local_40 = uVar5;
    local_48 = lVar4;
    if (lVar4 != 0) {
      uVar3 = UBlendableInterface::GetPrivateStaticClass();
      local_40 = UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar3);
      lVar6 = *param_1;
    }
    uVar3 = FWeakObjectPtr::Get(lVar6 + 0x184);
    FUN_142ecfdd0(uVar3,&local_48,0,0,*(undefined8 *)(*param_1 + 0x210),0);
    lVar4 = *param_1;
    lVar6 = *(longlong *)(lVar4 + 0x210);
    local_38 = lVar6;
    if (lVar6 != 0) {
      uVar3 = UBlendableInterface::GetPrivateStaticClass();
      uVar5 = UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar3);
      lVar4 = *param_1;
    }
    local_30 = uVar5;
    uVar3 = FWeakObjectPtr::Get(lVar4 + 0x184);
    FUN_142ed36d0(uVar3,&local_38,0);
  }
  return;
}



// FUNCTION 14102c890 FUN_14102c890 body=218 status=ok
// SIG undefined FUN_14102c890(void)

void FUN_14102c890(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if ((param_1[1] != 0) && (lVar3 = FUN_14203d310(), lVar3 != 0)) {
    lVar4 = FUN_1413976e0();
    iVar1 = *(int *)(lVar4 + 0x90);
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < iVar1) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)iVar1 * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_1410658b0(lVar3,CONCAT71((int7)(int3)((uint)iVar1 >> 8),2));
      AcquireSRWLockShared((PSRWLOCK)(*param_1 + 0xbe8));
      lVar4 = *(longlong *)(*param_1 + 0xbf0);
      uVar5 = 0;
      if (lVar4 != 0) {
        uVar5 = *(undefined8 *)(lVar4 + 0x458);
      }
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 0xbe8));
      lVar4 = *(longlong *)(lVar3 + 0x410);
      if ((lVar4 == 0) && (lVar4 = *(longlong *)(lVar3 + 0x408), lVar4 == 0)) {
        lVar4 = *(longlong *)(lVar3 + 0x418);
      }
      FUN_14103feb0(*param_1,lVar4,uVar5);
    }
  }
  return;
}



// FUNCTION 14102c970 FUN_14102c970 body=427 status=ok
// SIG undefined FUN_14102c970(void)

void FUN_14102c970(undefined4 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong local_48 [3];
  undefined4 local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  cVar8 = FWeakObjectPtr::IsValid();
  if (cVar8 != '\0') {
    local_48[0] = 0;
    local_48[1] = 0x20;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Memcpy(local_48[0],L"RequestAsyncLoad SingleDelegate",0x40);
    uVar4 = param_1[2];
    uVar5 = *param_1;
    uVar6 = param_1[1];
    local_48[2] = 0;
    local_30 = 0;
    puVar9 = (undefined8 *)operator_new(0x20,local_48 + 2);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &PTR_GetPoolName_14467a1e8;
      *(undefined4 *)(puVar9 + 1) = uVar4;
      *(undefined4 *)((longlong)puVar9 + 0xc) = uVar5;
      *(undefined4 *)(puVar9 + 2) = uVar6;
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[3] = uVar10;
      *puVar9 = &PTR_GetPoolName_14467a230;
    }
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 4) + (longlong)(int)param_1[2] * 8);
    lVar11 = FUN_1422ca050();
    lVar12 = FWeakObjectPtr::Get(param_1);
    puVar13 = (undefined8 *)((longlong)(int)param_1[2] * 0x10 + *(longlong *)(lVar12 + 0x700));
    puVar9 = (undefined8 *)
             FStreamableManager::RequestAsyncLoad
                       (lVar11 + 0x178,local_28,lVar7 + 0xa0,local_48 + 2,0,0,0,local_48);
    if (puVar13 != puVar9) {
      *puVar13 = *puVar9;
      *puVar9 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(puVar13 + 1,puVar9 + 1);
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14102cb20 FUN_14102cb20 body=367 status=ok
// SIG undefined FUN_14102cb20(void)

void FUN_14102cb20(undefined4 *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  uint uVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  uint uVar8;
  wchar_t *pwVar9;
  undefined8 local_res8;
  
  lVar4 = FUN_1416f8720(*param_1);
  if (lVar4 != 0) {
    lVar4 = FUN_1416f8720(*param_1);
    pwVar9 = (wchar_t *)0x0;
    iVar1 = *(int *)(lVar4 + 0xc);
    pwVar7 = pwVar9;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar8;
      pwVar7 = (wchar_t *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
               (longlong)(int)((uVar3 & 0xffff) - uVar8) * 0x18);
    }
    if (((*(uint *)(pwVar7 + 4) & 0x30000000) == 0) &&
       (lVar4 = FUN_1416f8720(param_1[1]), lVar4 != 0)) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnAbilityPointsChanged",L"::");
      pwVar7 = pwVar9;
      while (pwVar2 = pwVar5, pwVar2 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar7 = pwVar2;
      }
      FName::FName(&local_res8,pwVar7 + 2,1);
      uVar6 = FUN_1416f8720(*param_1);
      lVar4 = FUN_1416f8720(param_1[1]);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar4 + 0x48,uVar6,local_res8);
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnAbilityTierChanged",L"::");
      while (pwVar5 = pwVar7, pwVar5 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
        pwVar9 = pwVar5;
      }
      FName::FName(&local_res8,pwVar9 + 2,1);
      uVar6 = FUN_1416f8720(*param_1);
      lVar4 = FUN_1416f8720(param_1[1]);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar4 + 0x28,uVar6,local_res8);
    }
  }
  return;
}



// FUNCTION 14102cc90 FUN_14102cc90 body=266 status=ok
// SIG undefined FUN_14102cc90(void)

void FUN_14102cc90(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  
  lVar1 = FUN_1416f8720(*param_1);
  if (lVar1 != 0) {
    lVar1 = FUN_1416f8720(param_1[1]);
    if (lVar1 != 0) {
      FWeakObjectPtr::operator=(&local_28,0);
      FWeakObjectPtr::operator=(&local_20,0);
      FWeakObjectPtr::operator=(local_18,0);
      FWeakObjectPtr::operator=(&local_10,0);
      FWeakObjectPtr::operator=(&local_res8,0);
      local_28 = local_res8;
      local_24 = local_resc;
      uVar2 = FUN_1416f8720(param_1[2]);
      FWeakObjectPtr::operator=(local_18,uVar2);
      FWeakObjectPtr::operator=(&local_res8,0);
      local_10 = local_res8;
      local_c = local_resc;
      FWeakObjectPtr::operator=(&local_res8,0);
      local_20 = local_res8;
      local_1c = local_resc;
      lVar1 = FUN_1416f8720(param_1[1]);
      local_30 = 0;
      local_38 = lVar1;
      if (lVar1 != 0) {
        uVar2 = UBlendableInterface::GetPrivateStaticClass();
        local_30 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar2);
      }
      uVar2 = FUN_1416f8720(*param_1);
      FUN_142ecfd10(uVar2,&local_38,&local_28);
    }
  }
  return;
}



// FUNCTION 14102cda0 FUN_14102cda0 body=342 status=ok
// SIG undefined FUN_14102cda0(void)

void FUN_14102cda0(undefined8 *param_1)

{
  wchar_t *pwVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined8 local_res8;
  code *local_18;
  undefined8 uStack_10;
  
  lVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
  pwVar5 = (wchar_t *)0x0;
  pwVar6 = pwVar5;
  if (lVar2 != 0) {
    lVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
    pwVar6 = *(wchar_t **)(lVar2 + 0x118);
  }
  if (pwVar6 != (wchar_t *)0x0) {
    uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
    local_18 = FUN_141040940;
    pwVar3 = _guard_xfg_dispatch_icall_nop
                       (L"&UGFxSkillScreenLoadoutSlot::OnActionSkillActivated",L"::");
    pwVar4 = pwVar5;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar4 = pwVar1;
    }
    FName::FName(&local_res8,pwVar4 + 2,1);
    FUN_1407260e0(pwVar6 + 0x13c,*param_1,&local_18,local_res8);
    uStack_10 = uStack_10 & 0xffffffff00000000;
    local_18 = FUN_141040940;
    pwVar4 = _guard_xfg_dispatch_icall_nop
                       (L"&UGFxSkillScreenLoadoutSlot::OnActionSkillCoolingDown",L"::");
    while (pwVar3 = pwVar4, pwVar3 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar5 = pwVar3;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    FUN_1407260e0(pwVar6 + 0x134,*param_1,&local_18,local_res8);
  }
  return;
}



// FUNCTION 14102cf00 FUN_14102cf00 body=363 status=ok
// SIG undefined FUN_14102cf00(void)

void FUN_14102cf00(longlong *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  
  lVar4 = *param_1;
  pwVar5 = (wchar_t *)0x0;
  if (*(longlong *)(lVar4 + 0x640) != 0) {
    pwVar2 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::UpdateCachedAmmoCounts",L"::");
    pwVar3 = pwVar5;
    while (pwVar1 = pwVar2, pwVar1 != (wchar_t *)0x0) {
      pwVar2 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar3 = pwVar1;
    }
    FName::FName(&local_res8,pwVar3 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x640) + 400,*param_1,local_res8);
    lVar4 = *param_1;
  }
  if (*(longlong *)(lVar4 + 0x648) != 0) {
    pwVar2 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnReloadStarted",L"::");
    pwVar3 = pwVar5;
    while (pwVar1 = pwVar2, pwVar1 != (wchar_t *)0x0) {
      pwVar2 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar3 = pwVar1;
    }
    FName::FName(&local_res10,pwVar3 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x648) + 400,*param_1,local_res10);
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnReloadEnded",L"::");
    while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar5 = pwVar2;
    }
    FName::FName(&local_res18,pwVar5 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x648) + 0x1a0,*param_1,local_res18);
    lVar4 = *param_1;
  }
  LOCK();
  *(undefined4 *)(lVar4 + 0x674) = 1;
  UNLOCK();
  return;
}



// FUNCTION 14102d070 FUN_14102d070 body=150 status=ok
// SIG undefined FUN_14102d070(void)

void FUN_14102d070(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 8);
  local_res14 = *(undefined4 *)(param_1 + 0xc);
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
      FUN_141026f70(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14102d110 FUN_14102d110 body=540 status=ok
// SIG undefined FUN_14102d110(void)

void FUN_14102d110(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 local_res8 [8];
  undefined4 uStack_4c;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  
  cVar5 = FWeakObjectPtr::IsValid(*param_1 + 0x184);
  if (cVar5 != '\0') {
    lVar6 = FWeakObjectPtr::Get(*param_1 + 0x184);
    plVar4 = *(longlong **)(lVar6 + 0x6e8);
    lVar6 = *(longlong *)(lVar6 + 0x6e0);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (lVar6 != 0) {
      cVar5 = FUN_142b40fe0(lVar6);
      lVar8 = *param_1;
      if (*(longlong *)(lVar8 + 0x1f8) == 0) {
        if (cVar5 == '\0') {
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            lVar8 = *param_1;
          }
          local_48 = lVar6;
          local_40 = plVar4;
          FUN_141045aa0(lVar8,&local_48);
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
        else {
          plVar2 = (longlong *)(lVar6 + 0xd8);
          plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
          local_38 = plVar7;
          if (plVar7 != (longlong *)0x0) {
            *plVar7 = (longlong)&PTR_FUN_143fcfec0;
            FWeakObjectPtr::operator=(plVar7 + 1,lVar8);
            *(undefined4 *)(plVar7 + 2) = 0x41045aa0;
            *(undefined4 *)((longlong)plVar7 + 0x14) = 1;
            *(undefined4 *)(plVar7 + 3) = 0;
            *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_4c;
            lVar8 = FDelegateHandle::GenerateNewID();
            plVar7[5] = lVar8;
            *plVar7 = (longlong)&PTR_FUN_143fcff08;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
            (**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
            iVar3 = *(int *)(lVar6 + 0xe0);
            *(int *)(lVar6 + 0xe0) = iVar3 + 1;
            if (*(int *)(lVar6 + 0xe4) < iVar3 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar3);
            }
            puVar9 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar2);
            *puVar9 = plVar7;
            *(undefined4 *)(puVar9 + 1) = 3;
          }
          FUN_142b65bf0(lVar6);
        }
      }
    }
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
  return;
}



// FUNCTION 14102d330 FUN_14102d330 body=868 status=ok
// SIG undefined FUN_14102d330(void)

void FUN_14102d330(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  char cVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined2 *puVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 local_res8 [8];
  longlong local_98 [3];
  longlong *plStack_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  lVar10 = *param_1;
  plVar4 = *(longlong **)(lVar10 + 0x200);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x278))(plVar4,(int)param_1[2] == 0);
    lVar10 = *param_1;
  }
  if (*(longlong *)(lVar10 + 0x208) != 0) {
    FUN_142ecffe0();
    uVar11 = FWeakObjectPtr::Get(*param_1 + 0x184);
    cVar9 = FUN_142ebdd70(uVar11);
    lVar10 = *param_1;
    lVar19 = 0x248;
    if (cVar9 != '\0') {
      lVar19 = 600;
    }
    uVar20 = 0;
    uVar18 = uVar20;
    uVar21 = uVar20;
    if (0 < (int)param_1[2]) {
      do {
        lVar5 = param_1[1];
        lVar14 = *(longlong *)(lVar5 + uVar21);
        if (*(int *)(lVar14 + 0x28) == 0) {
          puVar16 = &DAT_143f3eda8;
        }
        else {
          puVar16 = *(undefined2 **)(lVar14 + 0x20);
        }
        cVar9 = FDateTime::ParseIso8601(puVar16,local_res8);
        if (cVar9 != '\0') {
          lVar14 = *param_1;
          uVar13 = uVar20;
          if (*(longlong *)(lVar14 + 0x268) != 0) {
            uVar12 = URemnantGameInstance::GetPrivateStaticClass();
            uVar6 = *(ulonglong *)(lVar14 + 0x268);
            for (uVar7 = uVar6; (uVar13 = uVar20, uVar7 != 0 && (uVar13 = uVar6, uVar7 != uVar12));
                uVar7 = *(ulonglong *)(uVar7 + 0x30)) {
            }
          }
          uVar13 = FUN_142ebcee0(*(undefined8 *)(*param_1 + 0x208),lVar19 + lVar10,uVar13,0);
          if (uVar13 == 0) {
LAB_14102d4a4:
            uVar13 = uVar20;
          }
          else {
            lVar14 = URemnantGameInstance::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(uVar13 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(uVar13 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            if (!bVar8) goto LAB_14102d4a4;
          }
          if (uVar13 != 0) {
            lVar5 = *(longlong *)(lVar5 + uVar21);
            local_98[0] = 0;
            local_98[2] = 0;
            plStack_80 = (longlong *)0x0;
            local_98[1] = 0;
            FText::FromString(local_48,lVar5 + 0x10);
            uVar11 = FText::FromString(local_60,lVar5);
            uVar15 = FUN_1415fc6d0(local_78,local_res8,0,local_98,local_98 + 2);
            FUN_14105b770(uVar13,uVar15,uVar11);
            plVar4 = local_70;
            if (local_70 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_70 + 1;
              lVar5 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*local_70)(local_70);
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
            plVar4 = local_58;
            if (local_58 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_58 + 1;
              lVar5 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*local_58)(local_58);
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
            plVar4 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_40 + 1;
              lVar5 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*local_40)(local_40);
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
            if (local_98[0] != 0) {
              FMemory::Free();
            }
            plVar4 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_80 + 1;
              lVar5 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*plStack_80)(plStack_80);
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
        }
        uVar17 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar17;
        uVar21 = uVar21 + 0x10;
      } while ((int)uVar17 < (int)param_1[2]);
      lVar10 = *param_1;
    }
    (**(code **)(**(longlong **)(lVar10 + 0x208) + 0x2c8))(*(longlong **)(lVar10 + 0x208),0,0);
  }
  return;
}



// FUNCTION 14102d6a0 FUN_14102d6a0 body=1529 status=ok
// SIG undefined FUN_14102d6a0(void)

void FUN_14102d6a0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  int *piVar14;
  bool bVar15;
  undefined8 local_res8;
  longlong local_res10;
  longlong local_res18;
  ulonglong local_res20;
  int local_78;
  int local_74;
  longlong local_70;
  int local_68;
  int local_64;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  lVar7 = FUN_141037590(*param_1);
  if (lVar7 != 0) {
    lVar9 = *(longlong *)(lVar7 + 0x398);
    if (lVar9 != 0) {
      (**(code **)(*(longlong *)*param_1 + 0x5b0))((longlong *)*param_1,lVar9);
      *(undefined8 *)(*param_1 + 0x6d8) = *(undefined8 *)(lVar9 + 0x30);
    }
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnAbilitySlotChanged",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    lVar9 = *param_1;
    plVar10 = (longlong *)(lVar7 + 0x2a8);
    FWeakObjectPtr::operator=(&local_78,0);
    local_70 = 0;
    FWeakObjectPtr::operator=(&local_78,lVar9);
    local_70 = local_res10;
    local_res8 = 0;
    if ((local_res10 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_78), lVar9 != 0)) {
      UObject::FindFunction(lVar9,local_70);
    }
    piVar1 = (int *)*plVar10;
    iVar6 = *(int *)(lVar7 + 0x2b0);
    for (piVar14 = piVar1; piVar14 != piVar1 + (longlong)iVar6 * 4; piVar14 = piVar14 + 4) {
      if (((*piVar14 == local_78) && (piVar14[1] == local_74)) ||
         ((cVar5 = FWeakObjectPtr::IsValid(piVar14), cVar5 == '\0' &&
          (cVar5 = FWeakObjectPtr::IsValid(&local_78), cVar5 == '\0')))) {
        bVar15 = true;
      }
      else {
        bVar15 = false;
      }
      if ((bVar15) && (*(longlong *)(piVar14 + 2) == local_70)) {
        bVar15 = true;
      }
      else {
        bVar15 = false;
      }
      if (bVar15) {
        if ((int)((longlong)piVar14 - (longlong)piVar1 >> 4) != -1) goto LAB_14102d84f;
        break;
      }
    }
    iVar6 = *(int *)(lVar7 + 0x2b0);
    lVar9 = (longlong)iVar6;
    *(int *)(lVar7 + 0x2b0) = iVar6 + 1;
    if (*(int *)(lVar7 + 0x2b4) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar6);
    }
    lVar2 = *plVar10;
    *(int *)(lVar2 + lVar9 * 0x10) = local_78;
    *(int *)(lVar2 + 4 + lVar9 * 0x10) = local_74;
    *(longlong *)(lVar2 + 8 + lVar9 * 0x10) = local_70;
LAB_14102d84f:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnAbilityAugmentChanged",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res18,pwVar4 + 2,1);
    lVar9 = *param_1;
    plVar10 = (longlong *)(lVar7 + 0x298);
    FWeakObjectPtr::operator=(&local_68,0);
    local_60 = 0;
    FWeakObjectPtr::operator=(&local_68,lVar9);
    local_60 = local_res18;
    local_res8 = 0;
    if ((local_res18 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_68), lVar9 != 0)) {
      UObject::FindFunction(lVar9,local_60);
    }
    piVar1 = (int *)*plVar10;
    iVar6 = *(int *)(lVar7 + 0x2a0);
    for (piVar14 = piVar1; piVar14 != piVar1 + (longlong)iVar6 * 4; piVar14 = piVar14 + 4) {
      if (((*piVar14 == local_68) && (piVar14[1] == local_64)) ||
         ((cVar5 = FWeakObjectPtr::IsValid(piVar14), cVar5 == '\0' &&
          (cVar5 = FWeakObjectPtr::IsValid(&local_68), cVar5 == '\0')))) {
        bVar15 = true;
      }
      else {
        bVar15 = false;
      }
      if ((bVar15) && (*(longlong *)(piVar14 + 2) == local_60)) {
        bVar15 = true;
      }
      else {
        bVar15 = false;
      }
      if (bVar15) {
        if ((int)((longlong)piVar14 - (longlong)piVar1 >> 4) != -1) goto LAB_14102d9ab;
        break;
      }
    }
    iVar6 = *(int *)(lVar7 + 0x2a0);
    lVar9 = (longlong)iVar6;
    *(int *)(lVar7 + 0x2a0) = iVar6 + 1;
    if (*(int *)(lVar7 + 0x2a4) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar6);
    }
    lVar2 = *plVar10;
    *(int *)(lVar2 + lVar9 * 0x10) = local_68;
    *(int *)(lVar2 + 4 + lVar9 * 0x10) = local_64;
    *(longlong *)(lVar2 + 8 + lVar9 * 0x10) = local_60;
LAB_14102d9ab:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
    *(undefined8 *)(*param_1 + 0x6d0) = *(undefined8 *)(lVar7 + 0x3b0);
    if (*(longlong *)(*param_1 + 0x6d0) != 0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnAbilityPointsChanged",L"::");
      pwVar4 = (wchar_t *)0x0;
      while (pwVar3 = pwVar8, pwVar3 != (wchar_t *)0x0) {
        pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
        pwVar4 = pwVar3;
      }
      FName::FName(&local_res20,pwVar4 + 2,1);
      lVar7 = *param_1;
      lVar9 = *(longlong *)(lVar7 + 0x6d0);
      FWeakObjectPtr::operator=(&local_58,0);
      uStack_50 = 0;
      FWeakObjectPtr::operator=(&local_58,lVar7);
      uStack_50 = local_res20;
      local_res8 = 0;
      if ((local_res20 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_58), lVar7 != 0)) {
        UObject::FindFunction(lVar7,uStack_50);
      }
      piVar1 = *(int **)(lVar9 + 0x48);
      iVar6 = *(int *)(lVar9 + 0x50);
      uVar11 = local_58;
      for (piVar14 = piVar1; local_58 = (code *)uVar11, piVar14 != piVar1 + (longlong)iVar6 * 4;
          piVar14 = piVar14 + 4) {
        local_58._0_4_ = (int)uVar11;
        if (((*piVar14 == (int)local_58) &&
            (local_58._4_4_ = (int)((ulonglong)uVar11 >> 0x20),
            bVar15 = piVar14[1] == local_58._4_4_, bVar15)) ||
           ((cVar5 = FWeakObjectPtr::IsValid(piVar14), cVar5 == '\0' &&
            (cVar5 = FWeakObjectPtr::IsValid(&local_58), cVar5 == '\0')))) {
          bVar15 = true;
        }
        else {
          bVar15 = false;
        }
        if ((bVar15) && (*(ulonglong *)(piVar14 + 2) == uStack_50)) {
          bVar15 = true;
        }
        else {
          bVar15 = false;
        }
        if (bVar15) {
          if ((int)((longlong)piVar14 - (longlong)piVar1 >> 4) != -1) goto LAB_14102db1e;
          break;
        }
        uVar11 = local_58;
      }
      iVar6 = *(int *)(lVar9 + 0x50);
      lVar7 = (longlong)iVar6;
      *(int *)(lVar9 + 0x50) = iVar6 + 1;
      if (*(int *)(lVar9 + 0x54) < iVar6 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar9 + 0x48,iVar6);
      }
      lVar2 = *(longlong *)(lVar9 + 0x48);
      *(int *)(lVar2 + lVar7 * 0x10) = (int)local_58;
      *(int *)(lVar2 + 4 + lVar7 * 0x10) = local_58._4_4_;
      *(ulonglong *)(lVar2 + 8 + lVar7 * 0x10) = uStack_50;
LAB_14102db1e:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(lVar9 + 0x48);
      iVar6 = FAnimNode_AimOffsetLookAt::GetLODThreshold(*(undefined8 *)(*param_1 + 0x6d0));
      lVar7 = *param_1;
      if (iVar6 < *(int *)(lVar7 + 0x6b8)) {
        *(undefined1 *)(lVar7 + 0x6bc) = 1;
      }
      *(int *)(lVar7 + 0x6b8) = iVar6;
      FUN_14105c6d0(lVar7 + 0x6e0,iVar6);
      LOCK();
      *(undefined4 *)(lVar7 + 0xed4) = 1;
      UNLOCK();
      LOCK();
      *(undefined4 *)(lVar7 + 0x588) = 1;
      UNLOCK();
    }
  }
  plVar10 = (longlong *)FWeakObjectPtr::Get(*param_1 + 0x594);
  if (plVar10 != (longlong *)0x0) {
    lVar7 = FUN_1413f82e0();
    if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if (bVar15) {
      uVar11 = FUN_1414add30();
      lVar7 = (**(code **)(*plVar10 + 0x628))(plVar10,uVar11);
      if (lVar7 != 0) {
        lVar9 = *param_1;
        local_58 = FUN_141040280;
        uStack_50 = uStack_50 & 0xffffffff00000000;
        plVar10 = (longlong *)(lVar7 + 0x178);
        plVar12 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar12 != (longlong *)0x0) {
          *plVar12 = (longlong)&PTR_FUN_143fcfec0;
          FWeakObjectPtr::operator=(plVar12 + 1,lVar9);
          *(int *)(plVar12 + 2) = (int)local_58;
          *(int *)((longlong)plVar12 + 0x14) = local_58._4_4_;
          *(undefined4 *)(plVar12 + 3) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)plVar12 + 0x1c) = uStack_50._4_4_;
          lVar9 = FDelegateHandle::GenerateNewID();
          plVar12[5] = lVar9;
          *plVar12 = (longlong)&PTR_FUN_143fcff08;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
          (**(code **)(*plVar12 + 0x20))(plVar12,&local_res8);
          iVar6 = *(int *)(lVar7 + 0x180);
          *(int *)(lVar7 + 0x180) = iVar6 + 1;
          if (*(int *)(lVar7 + 0x184) < iVar6 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar6);
          }
          puVar13 = (undefined8 *)((longlong)iVar6 * 0x10 + *plVar10);
          *puVar13 = plVar12;
          *(undefined4 *)(puVar13 + 1) = 3;
        }
      }
    }
  }
  return;
}



// FUNCTION 14102dca0 FUN_14102dca0 body=356 status=ok
// SIG undefined FUN_14102dca0(void)

void FUN_14102dca0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_28 [8];
  int local_20;
  undefined8 local_10;
  
  local_10 = 0;
  lVar1 = *(longlong *)(*param_1 + 0x460);
  if ((((lVar1 != 0) &&
       (cVar3 = FUN_1409a7560(lVar1,*(undefined8 *)(*param_1 + 0x458),local_28), cVar3 != '\0')) &&
      (*(char *)(*param_1 + 0x5b1) != '\0')) &&
     ((*(longlong *)(*param_1 + 0x458) != 0 && (iVar4 = FUN_1409aa830(), local_20 < iVar4)))) {
    FUN_141455e20(*(undefined8 *)(*param_1 + 0x460),*(undefined8 *)(*param_1 + 0x458));
    lVar1 = *(longlong *)(*param_1 + 0x458);
    if (lVar1 != 0) {
      lVar5 = FUN_14144ecc0();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (*(longlong *)(lVar1 + 0x88) != 0)) {
        lVar6 = FUN_14144bcb0();
        lVar1 = *(longlong *)(lVar1 + 0x88);
        lVar5 = lVar1;
        if (lVar1 != 0) {
          while (lVar5 != lVar6) {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            if (lVar5 == 0) {
              return;
            }
          }
          if (lVar1 != 0) {
            uVar7 = FWeakObjectPtr::Get(*param_1 + 0x240);
            if (DAT_14686ad35 == '\0') {
              FUN_140bfdec0(&DAT_14686ad34);
              DAT_14686ad35 = '\x01';
            }
            FUN_140c03d90(&DAT_14686ad34,uVar7,lVar1,local_20 + 1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14102de10 FUN_14102de10 body=240 status=ok
// SIG undefined FUN_14102de10(void)

void FUN_14102de10(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  cVar1 = TBaseSPMethodDelegateInstance<0,SSearchBox,1,enum_EActiveTimerReturnType___cdecl(double,float),FDefaultDelegateUserPolicy,FText>
          ::IsSafeToExecute(*(undefined8 *)(*param_1 + 0xeb8));
  uVar5 = 0;
  if (cVar1 != '\0') {
    lVar3 = *param_1;
    plVar4 = *(longlong **)(lVar3 + 0xc50);
    uVar6 = (longlong)*(int *)(lVar3 + 0xc58) & 0x1fffffffffffffff;
    if (plVar4 + *(int *)(lVar3 + 0xc58) < plVar4) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      do {
        *(undefined1 *)(*plVar4 + 0x198) = 0;
        FUN_142eaf850(*(undefined8 *)(*param_1 + 0xeb8));
        uVar5 = uVar5 + 1;
        plVar4 = plVar4 + 1;
      } while (uVar5 != uVar6);
      lVar3 = *param_1;
    }
    FUN_142edb460(*(undefined8 *)(lVar3 + 0xeb8));
  }
  lVar3 = *param_1;
  if ((*(int *)(lVar3 + 0xef0) != 0) &&
     (plVar4 = *(longlong **)(lVar3 + 0xee8), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    if (*(longlong *)(lVar3 + 0xee8) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(lVar3 + 0xee8),0,0);
      *(undefined8 *)(lVar3 + 0xee8) = uVar2;
    }
    *(undefined4 *)(lVar3 + 0xef0) = 0;
  }
  return;
}



// FUNCTION 14102df00 FUN_14102df00 body=784 status=ok
// SIG undefined FUN_14102df00(void)

void FUN_14102df00(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong local_res10;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_38 = FUN_14104ccd0;
  uStack_30 = 0;
  lVar6 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
  uVar2 = *param_1;
  plVar1 = (longlong *)(lVar6 + 0x458);
  plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_14428ae88;
    FWeakObjectPtr::operator=(plVar7 + 1,uVar2);
    *(undefined4 *)(plVar7 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar7 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar7 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_2c;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar8;
    *plVar7 = (longlong)&PTR_FUN_14428aed0;
  }
  if (&local_38 != plVar1) {
    if (plVar7 == (longlong *)0x0) {
      if ((*(int *)(lVar6 + 0x460) != 0) &&
         (plVar3 = (longlong *)*plVar1, plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        if (*plVar1 != 0) {
          lVar8 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar8;
        }
        *(undefined4 *)(lVar6 + 0x460) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,plVar1);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    lVar6 = FMemory::Realloc(plVar7,0,0);
    if (lVar6 != 0) {
      FMemory::Free(lVar6);
    }
  }
  local_38 = FUN_14104cdd0;
  uStack_30 = 0;
  lVar6 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
  FUN_14058c4b0(lVar6 + 0x438,*param_1,&local_38);
  local_38 = FUN_141052490;
  uStack_30 = 0;
  lVar6 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
  FUN_14058c4b0(lVar6 + 0x448,*param_1,&local_38);
  local_38 = FUN_14104cbe0;
  uStack_30 = 0;
  lVar6 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
  uVar2 = *param_1;
  plVar1 = (longlong *)(lVar6 + 0x468);
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_1442cc120;
    FWeakObjectPtr::operator=(plVar7 + 1,uVar2);
    *(undefined4 *)(plVar7 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar7 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar7 + 3) = uStack_30;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_2c;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar8;
    *plVar7 = (longlong)&PTR_FUN_1442cc168;
  }
  if (&local_38 != plVar1) {
    if (plVar7 == (longlong *)0x0) {
      if ((*(int *)(lVar6 + 0x470) != 0) &&
         (plVar3 = (longlong *)*plVar1, plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        if (*plVar1 != 0) {
          lVar8 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar8;
        }
        *(undefined4 *)(lVar6 + 0x470) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,plVar1);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    lVar6 = FMemory::Realloc(plVar7,0,0);
    if (lVar6 != 0) {
      FMemory::Free(lVar6);
    }
  }
  local_38 = FUN_14104cd80;
  uStack_30 = 0;
  lVar6 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
  FUN_1407ffe80(lVar6 + 0x478,*param_1,&local_38);
  pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnBranchHovered",L"::");
  pwVar5 = (wchar_t *)0x0;
  while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
    pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
    pwVar5 = pwVar4;
  }
  FName::FName(&local_res10,pwVar5 + 2,1);
  lVar6 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
  FWeakObjectPtr::operator=(lVar6 + 0x210,*param_1);
  *(longlong *)(lVar6 + 0x218) = local_res10;
  if ((local_res10 != 0) && (lVar8 = FWeakObjectPtr::Get(lVar6 + 0x210), lVar8 != 0)) {
    UObject::FindFunction(lVar8,*(undefined8 *)(lVar6 + 0x218));
  }
  return;
}



// FUNCTION 14102e210 FUN_14102e210 body=157 status=ok
// SIG undefined FUN_14102e210(void)

void FUN_14102e210(longlong *param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  
  if (param_3 != 0) {
    if ((param_2 < 0) || (*(int *)(*param_1 + 0x58) <= param_2)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    *(undefined1 *)(param_1[1] + 3) = uVar3;
    *(bool *)(param_1[1] + 1) = param_2 == *(int *)(*param_1 + 0x5c);
    plVar4 = (longlong *)*param_1;
    lVar1 = param_1[1];
    if ((((int)plVar4[1] != 0) && ((longlong *)*plVar4 != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(*(longlong *)*plVar4 + 0x18))(), cVar2 != '\0')) {
      if ((int)plVar4[1] == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)*plVar4;
      }
      (**(code **)(*plVar4 + 0x40))(plVar4,param_2,param_3,lVar1);
    }
  }
  return;
}



// FUNCTION 14102e2b0 FUN_14102e2b0 body=139 status=ok
// SIG undefined FUN_14102e2b0(void)

void FUN_14102e2b0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_1416f8720((int)param_1[1]);
  if (lVar3 != 0) {
    lVar4 = FUN_1413976e0();
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
      lVar3 = FWeakObjectPtr::Get(lVar3 + 0x420);
      if (lVar3 != 0) {
        lVar3 = *param_1;
        cVar2 = *(char *)(lVar3 + 0xc09);
        if (cVar2 == '\0') {
          cVar2 = *(char *)(lVar3 + 0xc08);
        }
        if (cVar2 == '\x01') {
          FUN_141065c60(lVar3,2);
        }
      }
    }
  }
  return;
}



// FUNCTION 14102e340 FUN_14102e340 body=267 status=ok
// SIG undefined FUN_14102e340(void)

undefined8 FUN_14102e340(undefined8 *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 1);
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar8;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
      bVar2 = true;
      goto LAB_14102e3c9;
    }
  }
  bVar2 = false;
LAB_14102e3c9:
  if (bVar2) {
    lVar5 = FUN_140e97230(*param_1);
    if (lVar5 != 0) {
      lVar5 = (**(code **)(*(longlong *)(lVar5 + 0xd80) + 0x18))();
      if (lVar5 != 0) {
        lVar6 = ANavLinkProxy::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar6 = FUN_140aab8c0();
          if (lVar6 != 0) {
            uVar7 = FUN_140aabfe0(lVar6);
            uVar7 = FUN_142ff7c90(lVar5,uVar7);
            return uVar7;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14102e450 FUN_14102e450 body=256 status=ok
// SIG undefined FUN_14102e450(void)

void FUN_14102e450(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  
  bVar2 = true;
  if (*(longlong *)(*param_1 + 0xbc8) != 0) {
    cVar4 = FUN_140cb6290();
    if (cVar4 != '\0') {
      iVar5 = FUN_1406ab3e0(*(undefined8 *)(*param_1 + 0xbc8));
      cVar4 = FUN_140fb3d70(*(undefined8 *)(*param_1 + 0xbc8),*param_1 + 0x9c8);
      if ((cVar4 == '\0') ||
         (((lVar1 = *param_1, iVar5 != *(int *)(lVar1 + 0x9b8) && (iVar5 != *(int *)(lVar1 + 0x9c0))
           ) && (iVar5 != *(int *)(lVar1 + 0x9bc))))) {
        bVar2 = false;
      }
    }
  }
  AcquireSRWLockShared((PSRWLOCK)(*param_1 + 0xbd8));
  lVar1 = *(longlong *)(*param_1 + 0xbe0);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x5b0) == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 0xbd8));
  if (bVar2) {
    lVar1 = *param_1;
    cVar4 = *(char *)(lVar1 + 0xc09);
    if (cVar4 == '\0') {
      cVar4 = *(char *)(lVar1 + 0xc08);
    }
    if (((cVar4 == '\x01') && (*(longlong *)(lVar1 + 0xbc0) != 0)) &&
       ((bVar3 && (0 < *(int *)(lVar1 + 0xc48))))) {
      FUN_141065c60(lVar1,6);
    }
  }
  return;
}



// FUNCTION 14102e550 FUN_14102e550 body=177 status=ok
// SIG undefined FUN_14102e550(void)

void FUN_14102e550(longlong *param_1)

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
  
  local_res10 = (undefined4)param_1[3];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0x1c);
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
       (plVar2 = *(longlong **)(*param_1 + 0x220), plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014102e5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x2a8))(plVar2,param_1 + 1,1,0);
      return;
    }
  }
  return;
}



// FUNCTION 14102e610 FUN_14102e610 body=723 status=ok
// SIG undefined FUN_14102e610(void)

void FUN_14102e610(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 == '\0') {
LAB_14102e697:
    bVar2 = false;
  }
  else {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar9 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar9;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) & 0x30000000) != 0) goto LAB_14102e697;
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  plVar6 = (longlong *)FName::FName(local_res8,"Cancel",1);
  lVar5 = param_1[3];
  if (lVar5 == *plVar6) {
    lVar7 = *param_1;
    iVar1 = *(int *)(lVar7 + 0x6c0);
    if ((iVar1 < 0) || (*(int *)(lVar7 + 0x6b8) <= iVar1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_14105c630(lVar7 + 0x6b0,iVar1,CONCAT71((int7)((ulonglong)lVar5 >> 8),1));
      goto LAB_14102e72b;
    }
  }
  lVar7 = *param_1;
  iVar1 = *(int *)(lVar7 + 0x6c0);
  if ((iVar1 < 0) || (*(int *)(lVar7 + 0x6b8) <= iVar1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((bVar2) && (lVar7 = (longlong)iVar1 * 0x40 + *(longlong *)(lVar7 + 0x6b0), lVar7 != 0)) {
    *(bool *)(lVar7 + 0x38) = lVar5 == DAT_146875028;
  }
LAB_14102e72b:
  cVar3 = FWeakObjectPtr::IsValid(*param_1 + 0x59c);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(*param_1 + 0x59c);
    if (((0 < *(int *)(lVar5 + 0x48)) &&
        (plVar6 = *(longlong **)
                   (*(longlong *)(lVar5 + 0x40) + -8 + (longlong)*(int *)(lVar5 + 0x48) * 8),
        plVar6 != (longlong *)0x0)) && (lVar5 = (**(code **)(*plVar6 + 0x278))(), lVar5 != 0)) {
      lVar7 = AUGDungeon::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_18 = FUN_141045960;
        uStack_10 = 0;
        lVar7 = FWeakObjectPtr::Get(*param_1 + 0x59c);
        lVar5 = *param_1;
        plVar6 = (longlong *)(lVar7 + 0xf8);
        plVar8 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar8 + 1,lVar5);
          *(undefined4 *)(plVar8 + 2) = (undefined4)local_18;
          *(undefined4 *)((longlong)plVar8 + 0x14) = local_18._4_4_;
          *(undefined4 *)(plVar8 + 3) = uStack_10;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_c;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar8[5] = lVar5;
          *plVar8 = (longlong)&PTR_FUN_143f77bd0;
        }
        if (&local_18 != plVar6) {
          if (plVar8 == (longlong *)0x0) {
            if (*(int *)(lVar7 + 0x100) == 0) {
              return;
            }
            plVar8 = (longlong *)*plVar6;
            if (plVar8 == (longlong *)0x0) {
              return;
            }
            (**(code **)(*plVar8 + 0x28))(plVar8,0);
            if (*plVar6 != 0) {
              lVar5 = FMemory::Realloc(*plVar6,0,0);
              *plVar6 = lVar5;
            }
            *(undefined4 *)(lVar7 + 0x100) = 0;
            return;
          }
          (**(code **)(*plVar8 + 0x30))(plVar8,plVar6);
        }
        if (plVar8 == (longlong *)0x0) {
          return;
        }
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        lVar5 = FMemory::Realloc(plVar8,0,0);
        if (lVar5 == 0) {
          return;
        }
        FMemory::Free(lVar5);
        return;
      }
    }
    FUN_141045960(*param_1);
  }
  return;
}



// FUNCTION 14102e8f0 FUN_14102e8f0 body=229 status=ok
// SIG undefined FUN_14102e8f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14102e8f0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  code *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(*param_1 + 8);
  if (lVar1 != 0) {
    FUN_142f06340(lVar1,*param_1 + 0x20);
    lVar1 = *param_1;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = lVar1;
      *puVar2 = &PTR_FUN_143f77b70;
    }
    local_68[0] = FUN_141032020;
    FUN_14208c9c0(*(undefined8 *)(*param_1 + 8),local_68);
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
  }
  return;
}



// FUNCTION 14102e9e0 FUN_14102e9e0 body=303 status=ok
// SIG undefined FUN_14102e9e0(void)

ulonglong FUN_14102e9e0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_18;
  ulonglong local_10;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  uVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if ((char)uVar4 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    local_10 = 0;
    iVar1 = *(int *)(lVar5 + 0xc);
    uVar4 = local_10;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar8;
      uVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar8) * 0x18;
    }
    if ((*(uint *)(uVar4 + 8) & 0x30000000) == 0) {
      lVar5 = *param_1;
      lVar2 = *(longlong *)(lVar5 + 0x638);
      local_18 = lVar2;
      if (lVar2 != 0) {
        uVar6 = FUN_142f25a40();
        local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar2,uVar6);
        lVar5 = *param_1;
      }
      FUN_142f0dc90(*(undefined8 *)(lVar5 + 0x630),&local_18);
      uVar6 = FWeakObjectPtr::Get(*param_1 + 0x5d8);
      plVar7 = (longlong *)(*(longlong *)(*param_1 + 0x638) + 800);
      (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined8 *)(*param_1 + 0x630),uVar6);
      FUN_142ed2120(*(undefined8 *)(*param_1 + 0x638),2);
      LOCK();
      uVar3 = *(uint *)(*param_1 + 0x64c);
      *(uint *)(*param_1 + 0x64c) = 1;
      uVar4 = (ulonglong)uVar3;
      UNLOCK();
    }
  }
  return uVar4;
}



// FUNCTION 14102eb10 FUN_14102eb10 body=813 status=ok
// SIG undefined FUN_14102eb10(void)

void FUN_14102eb10(longlong *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  lVar5 = *param_1;
  pwVar6 = (wchar_t *)0x0;
  if (*(longlong *)(lVar5 + 0x640) != 0) {
    pwVar2 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::UpdateCachedAmmoCounts",L"::");
    pwVar3 = pwVar6;
    while (pwVar1 = pwVar2, pwVar1 != (wchar_t *)0x0) {
      pwVar2 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar3 = pwVar1;
    }
    FName::FName(&local_res8,pwVar3 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x640) + 400,*param_1,local_res8);
    lVar5 = *param_1;
  }
  if (*(longlong *)(lVar5 + 0x648) != 0) {
    pwVar2 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnReloadStarted",L"::");
    pwVar3 = pwVar6;
    while (pwVar1 = pwVar2, pwVar1 != (wchar_t *)0x0) {
      pwVar2 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar3 = pwVar1;
    }
    FName::FName(&local_res10,pwVar3 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x648) + 400,*param_1,local_res10);
    pwVar2 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnReloadEnded",L"::");
    pwVar3 = pwVar6;
    while (pwVar1 = pwVar2, pwVar1 != (wchar_t *)0x0) {
      pwVar2 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar3 = pwVar1;
    }
    FName::FName(&local_res18,pwVar3 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(*param_1 + 0x648) + 0x1a0,*param_1,local_res18);
    lVar5 = *param_1;
  }
  lVar4 = *(longlong *)(lVar5 + 0x630);
  pwVar3 = pwVar6;
  if (lVar4 != 0) {
    pwVar3 = (wchar_t *)
             (**(code **)(*(longlong *)(lVar4 + 0x460) + 0x10))
                       ((longlong *)(lVar4 + 0x460),*(undefined1 *)(lVar4 + 0x690));
    lVar5 = *param_1;
  }
  *(wchar_t **)(lVar5 + 0x640) = pwVar3;
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0x630);
  pwVar3 = pwVar6;
  if (lVar5 != 0) {
    pwVar3 = (wchar_t *)FUN_14307c550(lVar5,*(undefined1 *)(lVar5 + 0x690));
    lVar4 = *param_1;
  }
  *(wchar_t **)(lVar4 + 0x648) = pwVar3;
  lVar5 = *param_1;
  if (*(longlong *)(lVar5 + 0x640) != 0) {
    pwVar2 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::UpdateCachedAmmoCounts",L"::");
    pwVar3 = pwVar6;
    while (pwVar1 = pwVar2, pwVar1 != (wchar_t *)0x0) {
      pwVar2 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar3 = pwVar1;
    }
    FName::FName(&local_res20,pwVar3 + 2,1);
    FUN_14074ba20(*(longlong *)(*param_1 + 0x640) + 400,*param_1,FUN_141064060,local_res20);
    lVar5 = *param_1;
  }
  if (*(longlong *)(lVar5 + 0x648) != 0) {
    pwVar2 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnReloadStarted",L"::");
    pwVar3 = pwVar6;
    while (pwVar1 = pwVar2, pwVar1 != (wchar_t *)0x0) {
      pwVar2 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar3 = pwVar1;
    }
    FName::FName(&local_38,pwVar3 + 2,1);
    FUN_14074ba20(*(longlong *)(*param_1 + 0x648) + 400,*param_1,FUN_14104f970,local_38);
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&UGFxReloadWidget::OnReloadEnded",L"::");
    while (pwVar2 = pwVar3, pwVar2 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar6 = pwVar2;
    }
    FName::FName(local_30,pwVar6 + 2,1);
    FUN_14074ba20(*(longlong *)(*param_1 + 0x648) + 0x1a0,*param_1,FUN_14104f970,local_30[0]);
    lVar5 = *param_1;
  }
  LOCK();
  *(undefined4 *)(lVar5 + 0x674) = 1;
  UNLOCK();
  return;
}



// FUNCTION 14102ee40 FUN_14102ee40 body=595 status=ok
// SIG undefined FUN_14102ee40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14102ee40(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
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
  local_b0 = (code *)param_1[1];
  FUN_141729b50(local_b8);
  FUN_14172a400(local_b8);
  cVar2 = FWeakObjectPtr::IsValid(&local_b0);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_b0);
    lVar5 = 0;
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar7;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
    }
    if (((*(uint *)(lVar5 + 8) & 0x30000000) == 0) &&
       (lVar5 = (**(code **)(*(longlong *)*param_1 + 0x148))(), lVar5 != 0)) {
      local_b0 = FUN_141058b30;
      uStack_a8 = 0;
      if (*(longlong *)(lVar5 + 400) == 0) {
        uVar8 = *(undefined8 *)(lVar5 + 0x3f8);
      }
      else {
        uVar8 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
      }
      lVar5 = *param_1;
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar6 + 1,lVar5);
        *(undefined4 *)(plVar6 + 2) = (undefined4)local_b0;
        *(undefined4 *)((longlong)plVar6 + 0x14) = local_b0._4_4_;
        *(undefined4 *)(plVar6 + 3) = uStack_a8;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_a4;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar4;
        *plVar6 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_98 = 0;
      local_90 = 0;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x30))(plVar6,&local_98);
      }
      FWeakObjectPtr::operator=(local_88,0);
      local_c0 = 0xbf800000;
      local_c8 = 0;
      local_80 = 0;
      local_48 = (longlong *)0x0;
      local_38 = 0;
      local_78 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar8,lVar5 + 0x208,&local_98,0x3f800000);
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
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        lVar5 = FMemory::Realloc(plVar6,0,0);
        if (lVar5 != 0) {
          FMemory::Free(lVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 14102f0a0 FUN_14102f0a0 body=150 status=ok
// SIG undefined FUN_14102f0a0(void)

void FUN_14102f0a0(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 8);
  local_res14 = *(undefined4 *)(param_1 + 0xc);
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
      FUN_141024690(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14102f140 FUN_14102f140 body=321 status=ok
// SIG undefined FUN_14102f140(void)

void FUN_14102f140(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
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
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      lVar4 = *param_1;
      if (*(longlong *)(lVar4 + 0x200) != 0) {
        plVar5 = (longlong *)(*(longlong *)(lVar4 + 0x200) + 0x170);
        (**(code **)(*plVar5 + 0x38))(plVar5,0);
        lVar4 = *param_1;
      }
      if (*(longlong *)(lVar4 + 0x1f8) != 0) {
        local_18[0] = 0;
        local_18[1] = 0xd;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
        FGenericPlatformString::Memcpy(local_18[0],L"transitionOn",0x1a);
        FUN_142088910(*(undefined8 *)(*param_1 + 0x1f8),local_18);
        if (local_18[0] != 0) {
          FMemory::Free();
        }
      }
      cVar2 = FWeakObjectPtr::IsValid(*param_1 + 0x184);
      if (cVar2 != '\0') {
        lVar4 = FWeakObjectPtr::Get(*param_1 + 0x184);
        LOCK();
        *(undefined4 *)(lVar4 + 0x588) = 1;
        UNLOCK();
      }
    }
  }
  return;
}



// FUNCTION 14102f290 FUN_14102f290 body=290 status=ok
// SIG undefined FUN_14102f290(void)

undefined8 FUN_14102f290(undefined8 *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 1);
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar8;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
      bVar2 = true;
      goto LAB_14102f319;
    }
  }
  bVar2 = false;
LAB_14102f319:
  if (bVar2) {
    lVar5 = FUN_140e97230(*param_1);
    if (lVar5 != 0) {
      lVar5 = (**(code **)(*(longlong *)(lVar5 + 0xd80) + 0x18))();
      if (lVar5 != 0) {
        lVar6 = ANavLinkProxy::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          if (DAT_146b33f38 == 0) {
            FUN_142d7ebe0();
          }
          if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
            uVar7 = FUN_142ff7c90(lVar5,*(undefined8 *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2e0)
                                 );
            return uVar7;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14102f3c0 FUN_14102f3c0 body=150 status=ok
// SIG undefined FUN_14102f3c0(void)

void FUN_14102f3c0(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 8);
  local_res14 = *(undefined4 *)(param_1 + 0xc);
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
      FUN_14102b620(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14102f460 FUN_14102f460 body=470 status=ok
// SIG undefined FUN_14102f460(void)

void FUN_14102f460(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar6 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar6 != '\0') {
    lVar8 = FWeakObjectPtr::Get(&local_res10);
    iVar4 = *(int *)(lVar8 + 0xc);
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar11 = iVar4 >> 0x1f & 0xffff;
      uVar7 = iVar4 + uVar11;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
              (longlong)(int)((uVar7 & 0xffff) - uVar11) * 0x18;
    }
    else {
      lVar8 = 0;
    }
    if (((*(uint *)(lVar8 + 8) & 0x30000000) == 0) &&
       (cVar6 = FWeakObjectPtr::IsValid(*param_1 + 0x6d8), cVar6 != '\0')) {
      lVar8 = FUN_142b45e90();
      uVar5 = *(undefined8 *)(lVar8 + 0x18);
      uVar9 = FWeakObjectPtr::Get(*param_1 + 0x6d8);
      FUN_142dcf3a0(uVar9,&local_28);
      local_38 = local_28;
      plStack_30 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
        UNLOCK();
      }
      puVar10 = (undefined8 *)FUN_142b4a990(uVar5,local_18,&local_38);
      lVar8 = *param_1;
      puVar12 = (undefined8 *)(lVar8 + 0x6e0);
      if (puVar12 != puVar10) {
        *puVar12 = *puVar10;
        *puVar10 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(lVar8 + 0x6e8,puVar10 + 1);
      }
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      plVar1 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_30 + 1;
        lVar8 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plStack_30)(plStack_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_20 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
    }
  }
  return;
}



// FUNCTION 14102f640 FUN_14102f640 body=150 status=ok
// SIG undefined FUN_14102f640(void)

void FUN_14102f640(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 8);
  local_res14 = *(undefined4 *)(param_1 + 0xc);
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
      FUN_141026cd0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14102f6e0 FUN_14102f6e0 body=177 status=ok
// SIG undefined FUN_14102f6e0(void)

void FUN_14102f6e0(longlong *param_1)

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
  
  local_res10 = (undefined4)param_1[3];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0x1c);
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
       (plVar2 = *(longlong **)(*param_1 + 0x208), plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014102f784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x2a8))(plVar2,param_1 + 1,1,0);
      return;
    }
  }
  return;
}



// FUNCTION 14102f7a0 FUN_14102f7a0 body=355 status=ok
// SIG undefined FUN_14102f7a0(void)

void FUN_14102f7a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  longlong lVar6;
  
  FUN_141063b70(*param_1);
  if (*(char *)(*param_1 + 0x6b1) != '\0') {
    *(undefined1 *)(*param_1 + 0x6b1) = 0;
    lVar1 = *param_1;
    AcquireSRWLockShared((PSRWLOCK)(lVar1 + 0xbd8));
    ReleaseSRWLockShared((PSRWLOCK)(lVar1 + 0xbd8));
    lVar6 = *(longlong *)(lVar1 + 0x6c0);
    lVar2 = *(longlong *)(lVar6 + 0x10);
    if (lVar2 != 0) {
      FUN_14105c2c0(lVar2,1);
      *(undefined1 *)(lVar2 + 0x414) = 1;
      lVar6 = *(longlong *)(lVar6 + 0x10);
      lVar2 = *(longlong *)(lVar6 + 0x2e0);
      if ((lVar2 != 0) && (cVar3 = FUN_14105a570(lVar2,0,0,1), cVar3 == '\0')) {
        FUN_14105a570(*(undefined8 *)(lVar6 + 0x2e0),0,0,1);
      }
    }
    iVar5 = 1;
    if (1 < *(int *)(lVar1 + 0x6c8)) {
      lVar6 = 0x40;
      do {
        lVar2 = *(longlong *)(lVar6 + 0x10 + *(longlong *)(lVar1 + 0x6c0));
        if (lVar2 != 0) {
          FUN_14105c2c0(lVar2,0);
          *(undefined1 *)(lVar2 + 0x414) = 0;
        }
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 0x40;
      } while (iVar5 < *(int *)(lVar1 + 0x6c8));
    }
  }
  lVar1 = DAT_146873e98;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
    lVar6 = 4;
  }
  else {
    lVar6 = 0;
  }
  if (*(int *)(lVar6 + lVar1) != 0) {
    return;
  }
  FUN_14105ecc0(*param_1);
  FUN_142ecd4d0(*param_1);
  return;
}



// FUNCTION 14102f910 FUN_14102f910 body=519 status=ok
// SIG undefined FUN_14102f910(void)

void FUN_14102f910(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 local_res8 [8];
  
  cVar5 = FUN_142d52a00(*param_1 + 0x6a0);
  if (cVar5 != '\0') {
    lVar9 = *param_1;
    uVar6 = FUN_142d52a20(lVar9 + 0x6a0);
    uVar6 = FArchive::operator<<(uVar6);
    uVar6 = FUN_142d621c0(uVar6);
    FUN_140483870(uVar6,lVar9);
  }
  lVar9 = *param_1;
  uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
  lVar4 = param_1[2];
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
  *(int *)(lVar9 + 0x6a0) = (int)param_1[1];
  *(undefined4 *)(lVar9 + 0x6a4) = uVar2;
  *(int *)(lVar9 + 0x6a8) = (int)lVar4;
  *(undefined4 *)(lVar9 + 0x6ac) = uVar3;
  *(longlong *)(lVar9 + 0x6b0) = param_1[3];
  cVar5 = FUN_142d52a00(*param_1 + 0x6a0);
  if (cVar5 != '\0') {
    lVar9 = *param_1;
    uVar6 = FUN_142d52a20(lVar9 + 0x6a0);
    uVar6 = FArchive::operator<<(uVar6);
    plVar7 = (longlong *)FUN_142d621c0(uVar6);
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_FUN_14461b568;
      FWeakObjectPtr::operator=(plVar8 + 1,lVar9);
      plVar8[2] = (longlong)thunk_FUN_1410587c0;
      lVar9 = FDelegateHandle::GenerateNewID();
      plVar8[4] = lVar9;
      *plVar8 = (longlong)&PTR_FUN_14461b5b0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
      (**(code **)(*plVar8 + 0x20))(plVar8,local_res8);
      iVar1 = (int)plVar7[1];
      *(int *)(plVar7 + 1) = iVar1 + 1;
      if (*(int *)((longlong)plVar7 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
      }
      puVar10 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar7);
      *puVar10 = plVar8;
      *(undefined4 *)(puVar10 + 1) = 3;
    }
    lVar9 = *param_1;
    uVar6 = FUN_142d52a20(lVar9 + 0x6a0);
    uVar6 = FArchive::operator<<(uVar6);
    plVar7 = (longlong *)FUN_142d62330(uVar6);
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_FUN_14461b5f8;
      FWeakObjectPtr::operator=(plVar8 + 1,lVar9);
      plVar8[2] = (longlong)thunk_FUN_1410587c0;
      lVar9 = FDelegateHandle::GenerateNewID();
      plVar8[4] = lVar9;
      *plVar8 = (longlong)&PTR_FUN_14461b640;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
      (**(code **)(*plVar8 + 0x20))(plVar8,local_res8);
      iVar1 = (int)plVar7[1];
      *(int *)(plVar7 + 1) = iVar1 + 1;
      if (*(int *)((longlong)plVar7 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
      }
      puVar10 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar7);
      *puVar10 = plVar8;
      *(undefined4 *)(puVar10 + 1) = 3;
    }
  }
  return;
}



// FUNCTION 14102fb20 FUN_14102fb20 body=290 status=ok
// SIG undefined FUN_14102fb20(void)

void FUN_14102fb20(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  longlong local_18;
  ulonglong local_10;
  
  lVar3 = *param_1;
  plVar1 = *(longlong **)(lVar3 + 0x658);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1 + 1,1);
    lVar3 = *param_1;
  }
  plVar1 = *(longlong **)(lVar3 + 0x668);
  if ((plVar1 != (longlong *)0x0) && (*(longlong *)(lVar3 + 0x660) != 0)) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1 + 4,1,0);
    pwVar4 = L"reload";
    if (*(char *)(*param_1 + 0x670) == '\x03') {
      pwVar4 = L"outOfAmmo";
    }
    local_18 = 0;
    local_10 = 0;
    if (*pwVar4 != L'\0') {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (pwVar4[lVar3] != L'\0');
      uVar2 = (int)lVar3 + 1;
      local_10 = (ulonglong)uVar2;
      if (0 < (int)uVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      }
      FGenericPlatformString::Memcpy(local_18,pwVar4,(longlong)(int)uVar2 * 2);
    }
    FUN_142088cf0(*(undefined8 *)(*param_1 + 0x660),&local_18);
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(*param_1 + 0x650) != 0) {
    FUN_142088910(*(longlong *)(*param_1 + 0x650),param_1 + 7);
    return;
  }
  return;
}



// FUNCTION 14102fc80 FUN_14102fc80 body=65 status=ok
// SIG undefined FUN_14102fc80(void)

undefined8 * FUN_14102fc80(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)(param_1 + 1));
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14102fcd0 FUN_14102fcd0 body=134 status=ok
// SIG undefined FUN_14102fcd0(void)

undefined8 * FUN_14102fcd0(undefined8 *param_1,ulonglong param_2)

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
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14102fd60 `scalar_deleting_destructor' body=134 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
`FMediaPlayerFacade::ContinueOpen'::`5'::FAsyncResourceReleaseNotification::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[3];
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
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14102fdf0 FUN_14102fdf0 body=72 status=ok
// SIG undefined FUN_14102fdf0(void)

undefined8 * FUN_14102fdf0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14102fe40 FUN_14102fe40 body=89 status=ok
// SIG undefined FUN_14102fe40(void)

undefined8 * FUN_14102fe40(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)((longlong)param_1 + 0x14));
  FUN_1416f8340(*(undefined4 *)(param_1 + 2));
  FUN_1416f8340(*(undefined4 *)((longlong)param_1 + 0xc));
  FUN_1416f8340(*(undefined4 *)(param_1 + 1));
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14102fea0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TSlotlessChildren<SDockTab>::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 2);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14102fef0 FUN_14102fef0 body=81 status=ok
// SIG undefined FUN_14102fef0(void)

undefined8 * FUN_14102fef0(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)(param_1 + 2));
  FUN_1416f8340(*(undefined4 *)((longlong)param_1 + 0xc));
  FUN_1416f8340(*(undefined4 *)(param_1 + 1));
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14102ff50 FUN_14102ff50 body=134 status=ok
// SIG undefined FUN_14102ff50(void)

undefined8 * FUN_14102ff50(undefined8 *param_1,ulonglong param_2)

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
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14102ffe0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_663464369c1590981c9f122ae74cbfd4>,1>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_141023220(param_1 + 1);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 141030030 FUN_141030030 body=43 status=ok
// SIG undefined FUN_141030030(void)

undefined8 * FUN_141030030(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 141030060 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<FCanvas>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 141030090 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 ATTLSyncCannonPawn::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1410238b0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf10);
  }
  return param_1;
}



// FUNCTION 1410300d0 FUN_1410300d0 body=597 status=ok
// SIG undefined FUN_1410300d0(void)

void FUN_1410300d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  short *psVar10;
  undefined1 local_res10 [8];
  longlong local_68;
  ulonglong local_60;
  longlong *local_58;
  longlong *local_50;
  code *local_48;
  longlong *plStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  Online::GetIdentityInterface(&local_58,0);
  pcVar3 = *(code **)(param_1 + 0x698);
  lVar9 = -1;
  if ((pcVar3 == (code *)0x0) || (local_58 == (longlong *)0x0)) {
    FUN_141052d80(param_1);
  }
  else if (*(int *)(param_1 + 0x6b8) < 1) {
    plVar4 = *(longlong **)(param_1 + 0x6a0);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_48 = pcVar3;
    plStack_40 = plVar4;
    cVar5 = FUN_14103f020(param_1,&local_48);
    if (cVar5 != '\0') {
      if ((*(longlong *)(param_1 + 0x698) != 0) && (*(longlong *)(param_1 + 0x6c8) != 0)) {
        TBaseMulticastDelegate<void>::Remove
                  (*(longlong *)(param_1 + 0x698) + 0x210,*(undefined8 *)(param_1 + 0x6c8));
      }
      cVar5 = FUN_142b4f460(pcVar3);
      if (cVar5 == '\0') {
        FUN_141052d80();
      }
      else {
        FUN_142eb3990(param_1);
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  else {
    iVar6 = (**(code **)(*local_58 + 0x40))();
    uStack_2c = (undefined4)((ulonglong)plStack_40 >> 0x20);
    plStack_40 = (longlong *)((ulonglong)plStack_40 & 0xffffffff00000000);
    local_48 = FUN_1410406f0;
    local_38 = 0x410406f0;
    uStack_34 = 1;
    uStack_30 = 0;
    puVar7 = (undefined8 *)
             TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
                       (*(longlong *)(param_1 + 0x698) + 0x210,local_res10,param_1,&local_38);
    *(undefined8 *)(param_1 + 0x6c8) = *puVar7;
    if (iVar6 == 0) {
      psVar10 = &DAT_14450f870;
    }
    else if (iVar6 == 1) {
      psVar10 = &DAT_14450f878;
    }
    else if (iVar6 == 2) {
      psVar10 = &DAT_14450f880;
    }
    else {
      psVar10 = &DAT_143f3eda8;
    }
    local_68 = 0;
    local_60 = 0;
    if (*psVar10 != 0) {
      do {
        lVar9 = lVar9 + 1;
      } while (psVar10[lVar9] != 0);
      uVar8 = (int)lVar9 + 1;
      local_60 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      }
      FGenericPlatformString::Memcpy(local_68,psVar10,(longlong)(int)uVar8 * 2);
    }
    FUN_142b3e220(*(undefined8 *)(param_1 + 0x698),param_1 + 0x6b0,&local_68);
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  plVar4 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return;
}



// FUNCTION 141030330 FUN_141030330 body=609 status=ok
// SIG undefined FUN_141030330(void)

void FUN_141030330(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  short *psVar10;
  undefined1 local_res10 [8];
  longlong local_68;
  ulonglong local_60;
  longlong *local_58;
  longlong *local_50;
  code *local_48;
  longlong *plStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  Online::GetIdentityInterface(&local_58,0);
  pcVar3 = *(code **)(param_1 + 0x6e0);
  lVar9 = -1;
  if ((pcVar3 == (code *)0x0) || (local_58 == (longlong *)0x0)) {
    FUN_1410622b0(param_1,7);
  }
  else if (*(int *)(param_1 + 0x8a8) < 1) {
    plVar4 = *(longlong **)(param_1 + 0x6e8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_48 = pcVar3;
    plStack_40 = plVar4;
    cVar5 = FUN_14103f160(param_1,&local_48);
    if (cVar5 != '\0') {
      if ((*(longlong *)(param_1 + 0x6e0) != 0) && (*(longlong *)(param_1 + 0x8b8) != 0)) {
        TBaseMulticastDelegate<void>::Remove
                  (*(longlong *)(param_1 + 0x6e0) + 0x210,*(undefined8 *)(param_1 + 0x8b8));
      }
      cVar5 = FUN_142b4f460(pcVar3);
      if (cVar5 == '\0') {
        *(undefined1 *)(param_1 + 0x688) = 2;
        FUN_141066f40();
      }
      else {
        FUN_142eb3990(param_1);
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
  }
  else {
    iVar6 = (**(code **)(*local_58 + 0x40))();
    uStack_2c = (undefined4)((ulonglong)plStack_40 >> 0x20);
    plStack_40 = (longlong *)((ulonglong)plStack_40 & 0xffffffff00000000);
    local_48 = FUN_141040780;
    local_38 = 0x41040780;
    uStack_34 = 1;
    uStack_30 = 0;
    puVar7 = (undefined8 *)
             TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
                       (*(longlong *)(param_1 + 0x6e0) + 0x210,local_res10,param_1,&local_38);
    *(undefined8 *)(param_1 + 0x8b8) = *puVar7;
    if (iVar6 == 0) {
      psVar10 = &DAT_14450f870;
    }
    else if (iVar6 == 1) {
      psVar10 = &DAT_14450f878;
    }
    else if (iVar6 == 2) {
      psVar10 = &DAT_14450f880;
    }
    else {
      psVar10 = &DAT_143f3eda8;
    }
    local_68 = 0;
    local_60 = 0;
    if (*psVar10 != 0) {
      do {
        lVar9 = lVar9 + 1;
      } while (psVar10[lVar9] != 0);
      uVar8 = (int)lVar9 + 1;
      local_60 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      }
      FGenericPlatformString::Memcpy(local_68,psVar10,(longlong)(int)uVar8 * 2);
    }
    FUN_142b3e220(*(undefined8 *)(param_1 + 0x6e0),param_1 + 0x8a0,&local_68);
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  plVar4 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return;
}



// FUNCTION 1410305a0 FUN_1410305a0 body=609 status=ok
// SIG undefined FUN_1410305a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1410305a0(longlong param_1,undefined4 param_2,longlong param_3)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  short *psVar11;
  longlong *plVar12;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_f0;
  ulonglong local_e8;
  undefined1 local_d8 [80];
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_f8 = 0;
  lVar8 = 0;
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    psVar11 = &DAT_144660628;
    local_e8 = 0;
    if (*(char *)(param_1 + 0x41c) != '\0') {
      psVar11 = &DAT_1446605f8;
    }
    local_f0 = 0;
    if (*psVar11 != 0) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (psVar11[lVar8] != 0);
      uVar7 = (int)lVar8 + 1;
      local_e8 = (ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f0,0);
      }
      FGenericPlatformString::Memcpy(local_f0,psVar11,(longlong)(int)uVar7 * 2);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x2e0);
    lVar8 = 1;
    uVar2 = FUN_141397a70();
    lVar3 = FUN_142ebcee0(uVar6,&local_f0,uVar2,1);
    if (lVar3 != 0) {
      lVar4 = FUN_141397a70();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_1410306ba;
    }
  }
  lVar3 = 0;
LAB_1410306ba:
  if ((lVar8 != 0) && (local_f0 != 0)) {
    FMemory::Free();
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    local_f8 = 0xffffffff;
    if (param_3 != 0) {
      FUN_14170c210(&local_f8,param_3);
    }
    local_f4 = 0xffffffff;
    FUN_14170c210(&local_f4,lVar3);
    uVar10 = local_f4;
    uVar9 = local_f8;
    local_f4 = 0xffffffff;
    local_f8 = 0xffffffff;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    puVar5 = (undefined8 *)FUN_140438ef0(0x20,local_78);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_14461b830;
      puVar5[1] = param_1;
      *(undefined4 *)(puVar5 + 2) = param_2;
      *(undefined4 *)((longlong)puVar5 + 0x14) = uVar10;
      uVar10 = 0xffffffff;
      *(undefined4 *)(puVar5 + 3) = uVar9;
      uVar9 = 0xffffffff;
    }
    local_88[0] = &LAB_141031d80;
    uVar6 = FUN_1420849a0(param_1,local_d8,local_88);
    FUN_14208c5d0(param_1,uVar6);
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
    FUN_1416f8340(uVar9);
    FUN_1416f8340(uVar10);
    FUN_1416f8340(local_f4);
    FUN_1416f8340(local_f8);
  }
  return lVar3;
}



// FUNCTION 141030820 FUN_141030820 body=826 status=ok
// SIG undefined FUN_141030820(void)

void FUN_141030820(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined *puVar11;
  undefined1 local_res8 [8];
  longlong local_58 [2];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong *local_38;
  
  piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar10 < DAT_146873f38) && (_Init_thread_header(&DAT_146873f38), DAT_146873f38 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146873f20,L"Code Redemption Failed",L"SHiFTMenu",L"CodeRedeemErrorHeader");
    atexit(FUN_143e5ca50);
    _Init_thread_footer(&DAT_146873f38);
  }
  puVar11 = &DAT_146873f40;
  if ((*piVar10 < DAT_146873f58) && (_Init_thread_header(&DAT_146873f58), DAT_146873f58 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146873f40,&DAT_1446673b0,L"SHiFTMenu",L"CodeRedeemErrorNetworkFailure");
    atexit(FUN_143e5cc30);
    _Init_thread_footer(&DAT_146873f58);
  }
  if ((*piVar10 < DAT_146873f78) && (_Init_thread_header(&DAT_146873f78), DAT_146873f78 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146873f60,
               L"Sorry, but the code you have entered is not valid. Please ensure all 25 characters of the code are entered correctly."
               ,L"SHiFTMenu",L"CodeRedeemErrorInvalid");
    atexit(FUN_143e5cb90);
    _Init_thread_footer(&DAT_146873f78);
  }
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x184);
  if (cVar4 == '\0') {
    return;
  }
  FUN_1410391f0(param_1,local_58);
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x184);
  plVar3 = *(longlong **)(lVar5 + 0x6e8);
  lVar5 = *(longlong *)(lVar5 + 0x6e0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (lVar5 != 0) {
    cVar4 = FUN_14103f310(param_1,local_58);
    if (cVar4 != '\0') {
      TBaseMulticastDelegate<void>::Remove(lVar5 + 0x1b0,*(undefined8 *)(param_1 + 0x1f8));
      uVar6 = 0;
      local_48 = FUN_141040c40;
      uStack_40 = 0;
      plVar1 = (longlong *)(lVar5 + 0x1b0);
      plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
      local_38 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_1442cc120;
        FWeakObjectPtr::operator=(plVar7 + 1,param_1);
        *(undefined4 *)(plVar7 + 2) = (undefined4)local_48;
        *(undefined4 *)((longlong)plVar7 + 0x14) = local_48._4_4_;
        *(undefined4 *)(plVar7 + 3) = uStack_40;
        *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_3c;
        lVar8 = FDelegateHandle::GenerateNewID();
        plVar7[5] = lVar8;
        *plVar7 = (longlong)&PTR_FUN_1442cc168;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
        iVar2 = *(int *)(lVar5 + 0x1b8);
        uVar6 = *puVar9;
        *(int *)(lVar5 + 0x1b8) = iVar2 + 1;
        if (*(int *)(lVar5 + 0x1bc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar9 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar9 = plVar7;
        *(undefined4 *)(puVar9 + 1) = 3;
      }
      *(undefined8 *)(param_1 + 0x1f8) = uVar6;
      FUN_142b64c90(lVar5,local_58);
      goto LAB_141030a02;
    }
    puVar11 = &DAT_146873f60;
  }
  uVar6 = FWeakObjectPtr::Get(param_1 + 0x184);
  FUN_141061c00(uVar6,&DAT_146873f20,puVar11);
LAB_141030a02:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar10 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141030b60 FUN_141030b60 body=1463 status=ok
// SIG undefined FUN_141030b60(void)

/* WARNING: Removing unreachable block (ram,0x000141030e63) */
/* WARNING: Removing unreachable block (ram,0x000141030e72) */
/* WARNING: Removing unreachable block (ram,0x000141030e7e) */
/* WARNING: Removing unreachable block (ram,0x000141030e97) */

void FUN_141030b60(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  undefined1 local_res10 [8];
  longlong local_158;
  longlong *local_150;
  longlong local_148 [2];
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
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
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [8];
  longlong *local_60;
  longlong *local_50;
  
  lVar10 = 0;
  bVar15 = *(longlong *)(param_1 + 0x200) == 0;
  if (bVar15) {
    uVar6 = FUN_1404b03b0();
    uVar6 = FText::FText(local_e0,uVar6);
  }
  else {
    uVar6 = FUN_142eb8880(*(longlong *)(param_1 + 0x200) + 0x308,local_c8);
  }
  FText::FText(local_110,uVar6);
  if ((bVar15) && (local_d8 != (longlong *)0x0)) {
    LOCK();
    plVar8 = local_d8 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar1 = (int *)((longlong)local_d8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_d8 + 8))(local_d8,1);
      }
    }
  }
  if ((!bVar15) && (local_c0 != (longlong *)0x0)) {
    LOCK();
    plVar8 = local_c0 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  bVar15 = *(longlong *)(param_1 + 0x208) == 0;
  if (bVar15) {
    uVar6 = FUN_1404b03b0();
    uVar6 = FText::FText(local_b0,uVar6);
  }
  else {
    uVar6 = FUN_142eb8880(*(longlong *)(param_1 + 0x208) + 0x308,local_98);
  }
  FText::FText(local_128,uVar6);
  if ((bVar15) && (local_a8 != (longlong *)0x0)) {
    LOCK();
    plVar8 = local_a8 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar1 = (int *)((longlong)local_a8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
  if ((!bVar15) && (local_90 != (longlong *)0x0)) {
    LOCK();
    plVar8 = local_90 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  bVar15 = *(longlong *)(param_1 + 0x210) == 0;
  if (bVar15) {
    uVar6 = FUN_1404b03b0();
    uVar6 = FText::FText(local_80,uVar6);
  }
  else {
    uVar6 = FUN_142eb8880(*(longlong *)(param_1 + 0x210) + 0x308,local_68);
  }
  FText::FText(local_f8,uVar6);
  if ((bVar15) && (local_78 != (longlong *)0x0)) {
    LOCK();
    plVar8 = local_78 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  if ((!bVar15) && (local_60 != (longlong *)0x0)) {
    LOCK();
    plVar8 = local_60 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x184);
  if (cVar5 == '\0') {
    plVar8 = local_148;
    local_148[0] = 0;
    local_148[1] = 0;
    bVar15 = false;
    lVar7 = lVar10;
  }
  else {
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x184);
    local_150 = *(longlong **)(lVar7 + 0x6e8);
    local_158 = *(longlong *)(lVar7 + 0x6e0);
    if (local_150 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_150 + 1) = (int)local_150[1] + 1;
      UNLOCK();
    }
    plVar8 = &local_158;
    bVar15 = true;
    lVar7 = local_158;
  }
  plVar3 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  *plVar8 = 0;
  plVar8 = local_150;
  if ((bVar15) && (local_150 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_150 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  if (((lVar7 != 0) && (cVar5 = FText::IsEmpty(local_110), cVar5 == '\0')) &&
     (cVar5 = FText::IsEmpty(local_128), cVar5 == '\0')) {
    plVar8 = (longlong *)(lVar7 + 0x120);
    TBaseMulticastDelegate<void>::Remove(plVar8,*(undefined8 *)(param_1 + 0x220));
    uStack_130 = 0;
    local_138 = FUN_141041590;
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    local_50 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_FUN_1442cc120;
      FWeakObjectPtr::operator=(plVar9 + 1,param_1);
      *(undefined4 *)(plVar9 + 2) = (undefined4)local_138;
      *(undefined4 *)((longlong)plVar9 + 0x14) = local_138._4_4_;
      *(undefined4 *)(plVar9 + 3) = uStack_130;
      *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_12c;
      lVar10 = FDelegateHandle::GenerateNewID();
      plVar9[5] = lVar10;
      *plVar9 = (longlong)&PTR_FUN_1442cc168;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
      plVar11 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9,local_res10);
      iVar2 = *(int *)(lVar7 + 0x128);
      lVar10 = *plVar11;
      *(int *)(lVar7 + 0x128) = iVar2 + 1;
      if (*(int *)(lVar7 + 300) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar2);
      }
      puVar12 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar8);
      *puVar12 = plVar9;
      *(undefined4 *)(puVar12 + 1) = 3;
    }
    *(longlong *)(param_1 + 0x220) = lVar10;
    uVar6 = FText::ToString(local_f8);
    uVar13 = FText::ToString(local_128);
    uVar14 = FText::ToString(local_110);
    FUN_142b6ea80(lVar7,uVar14,uVar13,uVar6);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_f0 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)local_f0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_120 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_108 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  return;
}



// FUNCTION 141031120 FUN_141031120 body=863 status=ok
// SIG undefined FUN_141031120(void)

/* WARNING: Removing unreachable block (ram,0x00014103126d) */

void FUN_141031120(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  void *_Src;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  wchar_t *local_78;
  uint local_70;
  int local_6c;
  wchar_t *local_68;
  undefined8 local_60;
  wchar_t *local_58;
  uint local_50;
  undefined4 local_4c;
  undefined1 local_48 [8];
  longlong *local_40;
  
  if (param_2 != 0) {
    lVar5 = FUN_141398ff0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14103117d;
  }
  param_2 = 0;
LAB_14103117d:
  plVar2 = *(longlong **)(param_1 + 0x218);
  plVar10 = plVar2;
  while( true ) {
    if (plVar10 == plVar2 + *(int *)(param_1 + 0x220)) {
      return;
    }
    if (*plVar10 == param_2) break;
    plVar10 = plVar10 + 1;
  }
  iVar9 = (int)((longlong)plVar10 - (longlong)plVar2 >> 3);
  if (iVar9 == -1) {
    return;
  }
  local_70 = *(uint *)(param_3 + 1);
  lVar5 = (longlong)(int)local_70;
  _Src = (void *)*param_3;
  local_78 = (wchar_t *)0x0;
  if (local_70 == 0) {
    local_6c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,local_70,0);
    _guard_xfg_dispatch_icall_nop(local_78,_Src,lVar5 * 2);
  }
  FString::ReplaceInline(&local_78,PTR_DAT_14629fca8,&DAT_14466123c,1);
  if (1 < (int)local_70) {
    lVar5 = (longlong)iVar9 * 8;
    do {
      if (0x27 < lVar5) break;
      uVar11 = 0;
      uVar7 = local_70 - 1;
      if (local_70 == 0) {
        uVar7 = uVar11;
      }
      if (5 < uVar7) {
        uVar7 = 5;
      }
      local_58 = (wchar_t *)0x0;
      local_4c = 0;
      pwVar12 = L"";
      if (local_70 != 0) {
        pwVar12 = local_78;
      }
      local_50 = uVar7 + 1;
      if (uVar7 == 0) {
        local_50 = uVar11;
      }
      if ((0 < (int)local_50) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0), pwVar13 = local_58,
         0 < (int)local_50)) {
        wcsncpy(local_58,pwVar12,(longlong)(int)uVar7);
        pwVar13[(int)uVar7] = L'\0';
      }
      lVar3 = *(longlong *)(lVar5 + *(longlong *)(param_1 + 0x218));
      if (lVar3 != 0) {
        uVar6 = FText::FromString(local_48,&local_58);
        FUN_142ed51f0(lVar3,uVar6,0);
        plVar2 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_40 + 1;
          lVar3 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2);
            }
          }
        }
      }
      if ((local_50 == 0) || ((int)(local_50 - 1) < 5)) {
        local_70 = 0;
        if (local_6c != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
        }
      }
      else {
        uVar7 = local_70 - 1;
        if (local_70 == 0) {
          uVar7 = uVar11;
        }
        if (5 < uVar7) {
          uVar7 = 5;
        }
        uVar8 = local_70 - 1;
        if (local_70 == 0) {
          uVar8 = uVar11;
        }
        uVar11 = uVar7;
        if ((uVar7 < 0x80000005) && (uVar11 = uVar8, 0x80000004 < uVar8)) {
          uVar11 = 0x80000004;
        }
        pwVar12 = L"";
        if (local_70 != 0) {
          pwVar12 = local_78;
        }
        iVar9 = uVar11 - uVar7;
        local_68 = (wchar_t *)0x0;
        uVar11 = iVar9 + 1;
        if (iVar9 == 0) {
          uVar11 = 0;
        }
        local_60 = (ulonglong)uVar11;
        pwVar13 = local_68;
        if (0 < (int)uVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
          pwVar13 = local_68;
          uVar11 = (uint)local_60;
          if (0 < (int)(uint)local_60) {
            wcsncpy(local_68,pwVar12 + (int)uVar7,(longlong)iVar9);
            pwVar13[iVar9] = L'\0';
          }
        }
        if (local_78 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        local_6c = local_60._4_4_;
        local_60 = 0;
        local_68 = (wchar_t *)0x0;
        local_78 = pwVar13;
        local_70 = uVar11;
      }
      lVar5 = lVar5 + 8;
      if (local_58 != (wchar_t *)0x0) {
        FMemory::Free();
      }
    } while (1 < (int)local_70);
  }
  if (local_78 == (wchar_t *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 141031480 FUN_141031480 body=859 status=ok
// SIG undefined FUN_141031480(void)

void FUN_141031480(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *plStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  longlong *local_48;
  
  lVar14 = 0;
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x184);
  if (cVar6 == '\0') {
    plVar9 = &local_78;
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    bVar5 = false;
    bVar4 = true;
    lVar8 = lVar14;
  }
  else {
    lVar8 = FWeakObjectPtr::Get(param_1 + 0x184);
    local_80 = *(longlong **)(lVar8 + 0x6e8);
    local_88 = *(longlong *)(lVar8 + 0x6e0);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
    }
    plVar9 = &local_88;
    bVar5 = true;
    bVar4 = false;
    lVar8 = local_88;
  }
  plVar3 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  *plVar9 = 0;
  plVar9 = plStack_70;
  if ((bVar4) && (plStack_70 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plStack_70 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_70 + 8))(plStack_70,1);
      }
    }
  }
  plVar9 = local_80;
  if ((bVar5) && (local_80 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_80 + 1;
    lVar11 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if (lVar8 != 0) {
    TBaseMulticastDelegate<void>::Remove(lVar8 + 0x138,*(undefined8 *)(param_1 + 0x200));
    plVar9 = (longlong *)(lVar8 + 0x150);
    TBaseMulticastDelegate<void>::Remove(plVar9,*(undefined8 *)(param_1 + 0x208));
    uStack_60 = 0;
    local_68 = FUN_14104d190;
    plVar10 = (longlong *)FMemory::Realloc(0,0x30);
    lVar11 = lVar14;
    local_58 = plVar10;
    if (plVar10 != (longlong *)0x0) {
      *plVar10 = (longlong)&PTR_FUN_14428ae88;
      FWeakObjectPtr::operator=(plVar10 + 1,param_1);
      *(undefined4 *)(plVar10 + 2) = (undefined4)local_68;
      *(undefined4 *)((longlong)plVar10 + 0x14) = local_68._4_4_;
      *(undefined4 *)(plVar10 + 3) = uStack_60;
      *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_5c;
      lVar11 = FDelegateHandle::GenerateNewID();
      plVar10[5] = lVar11;
      *plVar10 = (longlong)&PTR_FUN_14428aed0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar8 + 0x138,1);
      plVar12 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10,local_res10);
      iVar2 = *(int *)(lVar8 + 0x140);
      lVar11 = *plVar12;
      iVar7 = iVar2 + 1;
      *(int *)(lVar8 + 0x140) = iVar7;
      if (*(int *)(lVar8 + 0x144) < iVar7) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow();
      }
      puVar13 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar8 + 0x138));
      *puVar13 = plVar10;
      *(undefined4 *)(puVar13 + 1) = 3;
    }
    *(longlong *)(param_1 + 0x200) = lVar11;
    uStack_60 = 0;
    local_68 = FUN_14104ce40;
    plVar10 = (longlong *)FMemory::Realloc(0,0x30);
    local_48 = plVar10;
    if (plVar10 != (longlong *)0x0) {
      *plVar10 = (longlong)&PTR_FUN_1442cc120;
      FWeakObjectPtr::operator=(plVar10 + 1,param_1);
      *(undefined4 *)(plVar10 + 2) = (undefined4)local_68;
      *(undefined4 *)((longlong)plVar10 + 0x14) = local_68._4_4_;
      *(undefined4 *)(plVar10 + 3) = uStack_60;
      *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_5c;
      lVar14 = FDelegateHandle::GenerateNewID();
      plVar10[5] = lVar14;
      *plVar10 = (longlong)&PTR_FUN_1442cc168;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar9,1);
      plVar12 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10,local_res18);
      iVar2 = *(int *)(lVar8 + 0x158);
      lVar14 = *plVar12;
      *(int *)(lVar8 + 0x158) = iVar2 + 1;
      if (*(int *)(lVar8 + 0x15c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar2);
      }
      puVar13 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar9);
      *puVar13 = plVar10;
      *(undefined4 *)(puVar13 + 1) = 3;
    }
    *(longlong *)(param_1 + 0x208) = lVar14;
    FUN_142b6f220(lVar8);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    lVar14 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 1410317e0 FUN_1410317e0 body=700 status=ok
// SIG undefined FUN_1410317e0(void)

void FUN_1410317e0(longlong param_1,int param_2,int param_3,byte param_4)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  longlong *plVar10;
  byte *pbVar11;
  longlong local_68;
  byte *local_60;
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  
  pbVar11 = (byte *)0x0;
  if (*(int *)(param_1 + 0x700) != *(int *)(param_1 + 0x72c)) {
    lVar5 = *(longlong *)(param_1 + 0x738);
    if (*(longlong *)(param_1 + 0x738) == 0) {
      lVar5 = param_1 + 0x730;
    }
    iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x740) - 1U & (ulonglong)param_4) * 4);
    if (iVar4 != -1) {
      do {
        pbVar9 = (byte *)((longlong)iVar4 * 0x78 + *(longlong *)(param_1 + 0x6f8));
        if (*pbVar9 == param_4) {
          if (iVar4 != -1) goto LAB_141031870;
          break;
        }
        iVar4 = *(int *)(pbVar9 + 0x70);
      } while (iVar4 != -1);
    }
  }
  pbVar9 = pbVar11;
LAB_141031870:
  lVar5 = *(longlong *)(pbVar9 + 0x68);
  pbVar9 = (byte *)FWeakObjectPtr::Get(param_1 + 0x58c);
  if (pbVar9 != (byte *)0x0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(pbVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pbVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1410318c1;
  }
  pbVar9 = pbVar11;
LAB_1410318c1:
  if ((*(longlong *)(param_1 + 0x6f0) != 0) && (pbVar9 != (byte *)0x0)) {
    FUN_141013f30(param_1);
    FUN_142ecffe0(*(undefined8 *)(param_1 + 0x6f0));
    plVar10 = (longlong *)(*(longlong *)(param_1 + 0x6f0) + 0x170);
    (**(code **)(*plVar10 + 0x38))(plVar10,1);
    lVar6 = *(longlong *)(param_1 + 0x6f0);
    local_60 = pbVar11;
    local_68 = lVar6;
    if (lVar6 != 0) {
      uVar7 = UBlendableInterface::GetPrivateStaticClass();
      local_60 = (byte *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar7);
    }
    FUN_142ed36d0(param_1,&local_68,0);
    plVar10 = (longlong *)**(ulonglong **)(param_1 + 0x768);
    uVar8 = (ulonglong)(int)(*(ulonglong **)(param_1 + 0x768))[1];
    pbVar9 = (byte *)(uVar8 & 0x1fffffffffffffff);
    if (plVar10 + uVar8 < plVar10) {
      pbVar9 = pbVar11;
    }
    if (pbVar9 != (byte *)0x0) {
      do {
        lVar6 = *plVar10;
        if (((lVar6 != 0) && (*(longlong *)(lVar6 + 0xf0) == lVar5)) &&
           (cVar3 = FUN_141032b70(param_1,lVar6), cVar3 != '\0')) {
          FUN_140ff0180(param_1,lVar6);
        }
        plVar10 = plVar10 + 1;
        pbVar11 = pbVar11 + 1;
      } while (pbVar11 != pbVar9);
    }
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x2b8))(*(longlong **)(param_1 + 0x6f0),0,1,0);
    plVar10 = *(longlong **)(param_1 + 0xb80);
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x278))(plVar10,1);
    }
    if (*(longlong *)(param_1 + 0xb88) != 0) {
      FString::PrintfImpl(local_58,L"%i / %i",param_2,param_2 + param_3);
      lVar5 = **(longlong **)(param_1 + 0xb88);
      uVar7 = FText::FromString(local_48,local_58);
      (**(code **)(lVar5 + 0x2b0))(*(undefined8 *)(param_1 + 0xb88),uVar7,1,0);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_40 + 1;
        lVar5 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      if (local_58[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 141031aa0 FUN_141031aa0 body=606 status=ok
// SIG undefined FUN_141031aa0(void)

void FUN_141031aa0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong local_38;
  uint local_30;
  uint local_2c;
  undefined1 local_28 [8];
  undefined4 local_20;
  
  if (*(longlong *)(param_1 + 0x2e8) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x2f0) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x2e0) == 0) {
    return;
  }
  FUN_141032eb0();
  uVar9 = 0;
  local_38 = 0;
  local_2c = 0;
  plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x2f0) + 0xa8);
  uVar5 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x2f0) + 0xb0);
  uVar15 = uVar5 & 0x1fffffffffffffff;
  if (plVar11 + uVar5 < plVar11) {
    uVar15 = uVar9;
  }
  uVar5 = uVar9;
  uVar13 = uVar9;
  uVar14 = uVar9;
  if (uVar15 != 0) {
    do {
      lVar8 = *plVar11;
      if (lVar8 != 0) {
        iVar12 = (int)uVar13;
        local_30 = iVar12 + 1;
        if ((int)uVar9 < (int)local_30) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,uVar13);
          lVar8 = *plVar11;
          uVar9 = (ulonglong)local_2c;
          uVar14 = local_38;
        }
        uVar13 = (ulonglong)local_30;
        *(longlong *)(uVar14 + (longlong)iVar12 * 8) = lVar8;
      }
      plVar11 = plVar11 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar15);
  }
  iVar12 = (int)uVar13;
  if ((*(char *)(param_1 + 0x41c) != '\0') && (iVar7 = *(int *)(param_1 + 0x2d0), iVar7 < iVar12)) {
    iVar3 = (iVar12 - iVar7) + -1;
    uVar9 = (longlong)iVar3 % (longlong)(iVar7 + -1) & 0xffffffff;
    iVar12 = iVar12 + 1 + iVar3 / (iVar7 + -1);
  }
  *(int *)(param_1 + 0x40c) = iVar12;
  iVar12 = FUN_142eed730(*(undefined8 *)(param_1 + 0x2e0),uVar9);
  uVar10 = iVar12 - 1;
  cVar2 = FUN_1409a73a0(*(undefined8 *)(param_1 + 0x2e8),*(undefined8 *)(param_1 + 0x2f0),local_28);
  if (cVar2 != '\0') {
    if ((int)uVar10 < *(int *)(param_1 + 0x40c)) {
      if ((*(char *)(param_1 + 0x41c) != '\0') && (uVar10 != 0)) {
        uVar4 = uVar10 & 0x80000003;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
        }
        if (uVar4 == 0) {
          FUN_1410305a0(param_1,0,0);
          *(int *)(param_1 + 0x408) = *(int *)(param_1 + 0x408) + 1;
          goto LAB_141031cd7;
        }
      }
      lVar8 = *(longlong *)(uVar14 + (longlong)(int)(uVar10 - *(int *)(param_1 + 0x408)) * 8);
      if (lVar8 != 0) {
        lVar1 = *(longlong *)(param_1 + 0x318);
        iVar12 = *(int *)(lVar8 + 0x30);
        if (lVar1 != 0) {
          iVar7 = 0;
          if (*(longlong *)(lVar1 + 0x330) != 0) {
            iVar7 = *(int *)(*(longlong *)(lVar1 + 0x330) + 0x30);
          }
          if (iVar7 < 1) {
            iVar7 = 0;
          }
          *(int *)(lVar1 + 0x33c) = iVar7;
          iVar3 = iVar12;
          if (iVar12 <= iVar7) {
            iVar3 = iVar7;
          }
          *(int *)(lVar1 + 0x340) = iVar3;
        }
        uVar6 = FUN_1410305a0(param_1,iVar12);
        *(undefined8 *)(param_1 + 0x318) = uVar6;
        if (uVar10 == *(int *)(param_1 + 0x40c) - 1U) {
          *(int *)(param_1 + 0x410) = iVar12;
        }
      }
    }
    else {
      FUN_14105b730(param_1,0,local_20);
      *(undefined8 *)(param_1 + 0x318) = 0;
      (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x300))();
      *(undefined1 *)(param_1 + 0x2d4) = 4;
    }
  }
LAB_141031cd7:
  if (uVar14 != 0) {
    FMemory::Free(uVar14);
  }
  return;
}



// FUNCTION 141031d00 FUN_141031d00 body=108 status=ok
// SIG undefined FUN_141031d00(void)

void FUN_141031d00(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(*param_1 + 0x184);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(*param_1 + 0x184);
    if (*(longlong *)(lVar1 + 0x6e0) != 0) {
      lVar1 = FWeakObjectPtr::Get(*param_1 + 0x184);
      TBaseMulticastDelegate<void>::Remove
                (*(longlong *)(lVar1 + 0x6e0) + 0x1b0,*(undefined8 *)(*param_1 + 0x1f8));
      return;
    }
  }
  return;
}



// FUNCTION 141031e30 FUN_141031e30 body=68 status=ok
// SIG undefined FUN_141031e30(void)

void FUN_141031e30(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1416f8720(*(undefined4 *)(param_1 + 0xc));
  if (lVar1 != 0) {
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
    uVar3 = FUN_1416f8720(*(undefined4 *)(param_1 + 0xc));
    FUN_140e57610(uVar3,uVar2);
  }
  return;
}



// FUNCTION 141031ee0 FUN_141031ee0 body=74 status=ok
// SIG undefined FUN_141031ee0(void)

void FUN_141031ee0(undefined8 *param_1)

{
  longlong lVar1;
  code *local_18;
  undefined4 uStack_10;
  
  local_18 = FUN_141047a60;
  uStack_10 = 0;
  lVar1 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
  FUN_14058c4b0(lVar1 + 0x428,*param_1,&local_18);
  return;
}



// FUNCTION 141032020 FUN_141032020 body=82 status=ok
// SIG undefined FUN_141032020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141032020(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *param_1;
  if ((*(int *)(lVar1 + 0x38) != 0) && (*(longlong **)(lVar1 + 0x30) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x18))();
    if (cVar2 != '\0') {
      if (*(int *)(lVar1 + 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000141032057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x40))(*(longlong **)(lVar1 + 0x30),lVar1);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000141032068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x40))(0,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 141032090 FUN_141032090 body=56 status=ok
// SIG undefined FUN_141032090(void)

void FUN_141032090(undefined4 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_1416f8720(*param_1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1416f8720(*param_1);
                    /* WARNING: Could not recover jumptable at 0x0001410320bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x278))(plVar2,*(undefined1 *)(param_1 + 1));
    return;
  }
  return;
}



// FUNCTION 1410320d0 thunk_FUN_14102c110 body=5 status=ok
// SIG undefined thunk_FUN_14102c110(void)

void thunk_FUN_14102c110(void)

{
  FUN_14102c110();
  return;
}



// FUNCTION 1410320f0 FUN_1410320f0 body=91 status=ok
// SIG undefined FUN_1410320f0(void)

void FUN_1410320f0(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
    lVar1 = *(longlong *)(lVar1 + 0x118);
  }
  if (lVar1 != 0) {
    FUN_1407665e0(lVar1 + 0x278,*param_1);
    FUN_1407665e0(lVar1 + 0x268,*param_1);
  }
  return;
}



// FUNCTION 141032170 FUN_141032170 body=38 status=ok
// SIG undefined FUN_141032170(void)

void FUN_141032170(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *param_1;
  cVar2 = *(char *)(lVar1 + 0xc09);
  if (cVar2 == '\0') {
    cVar2 = *(char *)(lVar1 + 0xc08);
  }
  if (cVar2 == '\x02') {
    FUN_141063340(lVar1,*(undefined8 *)(lVar1 + 0xbf8));
    return;
  }
  return;
}



// FUNCTION 1410321d0 FUN_1410321d0 body=91 status=ok
// SIG undefined FUN_1410321d0(void)

void FUN_1410321d0(undefined8 *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_141083310(*param_1);
  if (lVar2 != 0) {
    lVar3 = FUN_141404840();
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
      FUN_140e576a0(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 141032230 FUN_141032230 body=103 status=ok
// SIG undefined FUN_141032230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141032230(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  if ((*(int *)(lVar1 + 0x2f0) != 0) && (*(longlong **)(lVar1 + 0x2e8) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x2e8) + 0x18))();
    if (cVar3 != '\0') {
      if (*(int *)(lVar1 + 0x2f0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014103227e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(lVar1 + 0x2e8) + 0x40))
                  (*(longlong **)(lVar1 + 0x2e8),(int)lVar2);
        return;
      }
      (**(code **)(_DAT_00000000 + 0x40))(0,(int)lVar2);
    }
  }
  return;
}



// FUNCTION 1410322d0 FUN_1410322d0 body=81 status=ok
// SIG undefined FUN_1410322d0(void)

void FUN_1410322d0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_1416f8720((int)param_1[1]);
  if (lVar2 != 0) {
    lVar1 = *param_1;
    if (lVar2 == *(longlong *)(lVar1 + 0xba0)) {
      FUN_141062820(lVar1,0,1);
      return;
    }
    if (lVar2 == *(longlong *)(lVar1 + 0xbb0)) {
      FUN_141062820(lVar1,1);
      return;
    }
  }
  return;
}



// FUNCTION 141032360 FUN_141032360 body=10 status=ok
// SIG undefined FUN_141032360(void)

void FUN_141032360(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  FUN_14102e210(param_1,*param_2,*param_3);
  return;
}



// FUNCTION 141032370 thunk_FUN_14102e2b0 body=5 status=ok
// SIG undefined thunk_FUN_14102e2b0(void)

void thunk_FUN_14102e2b0(void)

{
  FUN_14102e2b0();
  return;
}



// FUNCTION 141032390 FUN_141032390 body=55 status=ok
// SIG undefined FUN_141032390(void)

void FUN_141032390(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1410833d0(*param_1);
  if (lVar1 != 0) {
    FUN_140ebbab0(lVar1 + 0x6b8,*param_1 + 0x908);
    return;
  }
  return;
}



// FUNCTION 1410323d0 thunk_FUN_14102e450 body=5 status=ok
// SIG undefined thunk_FUN_14102e450(void)

void thunk_FUN_14102e450(void)

{
  FUN_14102e450();
  return;
}



// FUNCTION 141032400 FUN_141032400 body=92 status=ok
// SIG undefined FUN_141032400(void)

void FUN_141032400(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_1416f8720(*(undefined4 *)(param_1 + 0xc));
  if (lVar1 != 0) {
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x10));
    uVar3 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
    uVar4 = FUN_1416f8720(*(undefined4 *)(param_1 + 0xc));
    FUN_140e575f0(uVar4,uVar3,uVar2);
  }
  return;
}



// FUNCTION 1410324b0 FUN_1410324b0 body=83 status=ok
// SIG undefined FUN_1410324b0(void)

void FUN_1410324b0(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1416f8720(*param_1);
  if (lVar1 != 0) {
    lVar1 = FUN_1416f8720(param_1[1]);
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_1416f8720(param_1[1]);
    }
    uVar3 = FUN_1416f8720(*param_1);
    FUN_141057ae0(uVar3,uVar2);
  }
  return;
}



// FUNCTION 1410325d0 FUN_1410325d0 body=102 status=ok
// SIG undefined FUN_1410325d0(void)

void FUN_1410325d0(undefined8 *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 1));
  if (lVar2 != 0) {
    lVar3 = FUN_1413976e0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_141032621;
  }
  lVar2 = 0;
LAB_141032621:
  FUN_141047880(*param_1,lVar2);
  return;
}



// FUNCTION 141032640 thunk_FUN_14102fb20 body=5 status=ok
// SIG undefined thunk_FUN_14102fb20(void)

void thunk_FUN_14102fb20(void)

{
  FUN_14102fb20();
  return;
}



// FUNCTION 141032650 FUN_141032650 body=642 status=ok
// SIG undefined FUN_141032650(void)

undefined8 FUN_141032650(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  
  lVar15 = param_1 + 0x184;
  lVar12 = 0;
  cVar9 = FWeakObjectPtr::IsValid(lVar15);
  if (cVar9 == '\0') {
    plVar13 = &local_38;
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    bVar6 = false;
    bVar5 = true;
  }
  else {
    lVar12 = FWeakObjectPtr::Get(lVar15);
    local_40 = *(longlong **)(lVar12 + 0x6e8);
    lVar12 = *(longlong *)(lVar12 + 0x6e0);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    plVar13 = &local_48;
    bVar6 = true;
    bVar5 = false;
    local_48 = lVar12;
  }
  plVar4 = (longlong *)plVar13[1];
  plVar13[1] = 0;
  *plVar13 = 0;
  plVar13 = plStack_30;
  if (bVar5) {
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar14 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_30 + 8))(plStack_30,1);
        }
      }
    }
  }
  plVar13 = local_40;
  if ((bVar6) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar14 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x1f8) == 0) {
LAB_141032787:
    bVar5 = false;
  }
  else {
    cVar9 = FUN_142ebda90();
    if (cVar9 == '\0') goto LAB_141032787;
    bVar5 = true;
  }
  cVar9 = FUN_14103f670(*(undefined8 *)(param_1 + 0x200));
  cVar10 = FUN_14103f8b0(*(undefined8 *)(param_1 + 0x208));
  cVar11 = FUN_14103ec10(param_1);
  if ((((bVar5) && (cVar9 != '\0')) && (cVar10 != '\0')) && (cVar11 != '\0')) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (lVar12 == 0) {
LAB_1410327ed:
    bVar6 = false;
  }
  else {
    lVar14 = FWeakObjectPtr::Get(lVar15);
    cVar9 = (**(code **)(**(longlong **)(lVar14 + 0x6e0) + 0x10))();
    if (cVar9 == '\0') goto LAB_1410327ed;
    bVar6 = true;
  }
  if (lVar12 == 0) {
LAB_14103282b:
    bVar7 = false;
  }
  else {
    lVar14 = FWeakObjectPtr::Get(lVar15);
    cVar9 = (**(code **)(**(longlong **)(lVar14 + 0x6e0) + 0x38))();
    if (cVar9 == '\0') {
      lVar14 = FWeakObjectPtr::Get(lVar15);
      cVar9 = (**(code **)(**(longlong **)(lVar14 + 0x6e0) + 0x30))();
      if (cVar9 == '\0') goto LAB_14103282b;
    }
    bVar7 = true;
  }
  if (lVar12 == 0) {
LAB_141032867:
    bVar8 = false;
  }
  else {
    lVar12 = FWeakObjectPtr::Get(lVar15);
    cVar9 = (**(code **)(**(longlong **)(lVar12 + 0x6e0) + 0x28))();
    if (cVar9 == '\0') {
      lVar15 = FWeakObjectPtr::Get(lVar15);
      cVar9 = FUN_142b54830(*(undefined8 *)(lVar15 + 0x6e0));
      if (cVar9 == '\0') goto LAB_141032867;
    }
    bVar8 = true;
  }
  if (((!bVar5) || (bVar6)) || ((bVar7 || (bVar8)))) {
    uVar16 = 0;
  }
  else {
    uVar16 = 1;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar4 + 1;
    lVar15 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
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
  return uVar16;
}



// FUNCTION 1410328e0 FUN_1410328e0 body=149 status=ok
// SIG undefined FUN_1410328e0(void)

ulonglong FUN_1410328e0(longlong param_1)

{
  ulonglong in_RAX;
  longlong lVar1;
  longlong lVar2;
  uint7 uVar4;
  ulonglong uVar3;
  
  if ((*(longlong **)(param_1 + 0x6f0) != (longlong *)0x0) && (*(longlong *)(param_1 + 0xc88) != 0))
  {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x2b0))();
    in_RAX = 0;
    if (lVar1 != 0) {
      lVar2 = FUN_14138e2b0();
      uVar4 = (uint7)((ulonglong)(lVar2 + 0x88) >> 8);
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        in_RAX = (ulonglong)uVar4 << 8;
      }
      else {
        in_RAX = CONCAT71(uVar4,1);
      }
      if (((char)in_RAX != '\0') && (*(longlong *)(lVar1 + 0x308) != 0)) {
        uVar3 = FUN_140e45c80(*(undefined8 *)(param_1 + 0xc88));
        return uVar3;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141032980 FUN_141032980 body=490 status=ok
// SIG undefined FUN_141032980(void)

undefined8 FUN_141032980(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  param_1 = param_1 + 0x184;
  lVar8 = 0;
  cVar7 = FWeakObjectPtr::IsValid(param_1);
  if (cVar7 == '\0') {
    plVar9 = &local_28;
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
    bVar6 = false;
    bVar5 = true;
  }
  else {
    lVar8 = FWeakObjectPtr::Get(param_1);
    local_30 = *(longlong **)(lVar8 + 0x6e8);
    lVar8 = *(longlong *)(lVar8 + 0x6e0);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    plVar9 = &local_38;
    bVar6 = true;
    bVar5 = false;
    local_38 = lVar8;
  }
  plVar4 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  *plVar9 = 0;
  plVar9 = plStack_20;
  if (bVar5) {
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_20 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  plVar9 = local_30;
  if ((bVar6) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (lVar8 == 0) {
LAB_141032ad2:
    bVar5 = false;
  }
  else {
    lVar10 = FWeakObjectPtr::Get(param_1);
    cVar7 = (**(code **)(**(longlong **)(lVar10 + 0x6e0) + 0x38))();
    if (cVar7 == '\0') {
      lVar10 = FWeakObjectPtr::Get(param_1);
      cVar7 = (**(code **)(**(longlong **)(lVar10 + 0x6e0) + 0x30))();
      if (cVar7 == '\0') goto LAB_141032ad2;
    }
    bVar5 = true;
  }
  if (lVar8 == 0) {
LAB_141032b0e:
    bVar6 = false;
  }
  else {
    lVar8 = FWeakObjectPtr::Get(param_1);
    cVar7 = (**(code **)(**(longlong **)(lVar8 + 0x6e0) + 0x28))();
    if (cVar7 == '\0') {
      lVar8 = FWeakObjectPtr::Get(param_1);
      cVar7 = FUN_142b54830(*(undefined8 *)(lVar8 + 0x6e0));
      if (cVar7 == '\0') goto LAB_141032b0e;
    }
    bVar6 = true;
  }
  if ((bVar5) || (bVar6)) {
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar4 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
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
  return uVar11;
}



// FUNCTION 141032b70 FUN_141032b70 body=386 status=ok
// SIG undefined FUN_141032b70(void)

undefined8 FUN_141032b70(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (param_2 != (longlong *)0x0)) {
      cVar1 = (**(code **)(*param_2 + 0x2a8))(param_2,lVar2);
      if (cVar1 == '\0') {
        lVar3 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
        if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
            != lVar3 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          cVar1 = FUN_140d01880(lVar2,param_2);
          if (cVar1 != '\0') {
            return 0;
          }
          if (param_2[0x26] == 0) {
            return 1;
          }
          bVar4 = param_2[0x26] == *(longlong *)(lVar2 + 0xa58);
        }
        else {
          lVar3 = FUN_14142e810();
          if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
              != lVar3 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            cVar1 = FUN_140d01d10(lVar2,param_2);
          }
          else {
            lVar3 = FUN_1412fb190();
            if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
                lVar3 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) {
              return 1;
            }
            cVar1 = FUN_140d01780(lVar2,param_2);
          }
          bVar4 = cVar1 == '\0';
        }
        if (bVar4) {
          return 1;
        }
      }
      return 0;
    }
  }
  return 1;
}



// FUNCTION 141032d00 FUN_141032d00 body=164 status=ok
// SIG undefined FUN_141032d00(void)

int FUN_141032d00(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  if (*(float *)(param_1 + 0x90) <= 0.0) {
    iVar2 = 0;
  }
  else {
    fVar4 = (float)FUN_142eedeb0(param_1 + 0x20);
    fVar4 = fVar4 / *(float *)(param_1 + 0x90);
    iVar2 = (int)ROUND((fVar4 + fVar4) - 0.5) >> 1;
  }
  if (param_2 != -1) {
    iVar1 = *(int *)(param_1 + 0x54);
    param_2 = iVar1 * iVar2 + param_2;
    if (-1 < param_2) {
      if ((*(int *)(param_1 + 0x58) < 1) || (iVar1 < 1)) {
        iVar2 = 1;
      }
      else {
        iVar2 = (*(int *)(param_1 + 0x58) + -1 + iVar1) / iVar1;
      }
      iVar3 = *(int *)(param_1 + 0x88);
      if (0 < iVar1) {
        iVar3 = (iVar3 - iVar1) / iVar1;
      }
      if (iVar3 <= iVar2) {
        iVar3 = iVar2;
      }
      if (param_2 < iVar3 * iVar1) {
        return param_2;
      }
    }
  }
  return -1;
}



// FUNCTION 141032db0 FUN_141032db0 body=246 status=ok
// SIG undefined FUN_141032db0(void)

bool FUN_141032db0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  byte *pbVar6;
  
  if (param_2 == 0) {
    return false;
  }
  if (*(int *)(param_1 + 0x700) != *(int *)(param_1 + 0x72c)) {
    lVar4 = *(longlong *)(param_1 + 0x738);
    if (*(longlong *)(param_1 + 0x738) == 0) {
      lVar4 = param_1 + 0x730;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x740) - 1U &
                             (ulonglong)*(byte *)(param_2 + 0x368)) * 4);
    if (iVar3 != -1) {
      do {
        pbVar6 = (byte *)((longlong)iVar3 * 0x78 + *(longlong *)(param_1 + 0x6f8));
        if (*pbVar6 == *(byte *)(param_2 + 0x368)) {
          if (iVar3 != -1) goto LAB_141032e40;
          break;
        }
        iVar3 = *(int *)(pbVar6 + 0x70);
      } while (iVar3 != -1);
    }
  }
  pbVar6 = (byte *)0x0;
LAB_141032e40:
  plVar5 = (longlong *)**(longlong **)(param_1 + 0x768);
  plVar1 = plVar5 + (int)(*(longlong **)(param_1 + 0x768))[1];
  for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
    if (((*plVar5 != 0) && (*(longlong *)(*plVar5 + 0xf0) == *(longlong *)(pbVar6 + 0x68))) &&
       (cVar2 = FUN_141032b70(param_1), cVar2 != '\0')) goto LAB_141032e83;
  }
  plVar5 = (longlong *)0x0;
LAB_141032e83:
  return plVar5 != (longlong *)0x0;
}



// FUNCTION 141032eb0 FUN_141032eb0 body=383 status=ok
// SIG undefined FUN_141032eb0(void)

void FUN_141032eb0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar2 = *(longlong **)(param_1 + 0x398);
  plVar7 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar2[1];
    bVar9 = iVar6 == 0;
    if (bVar9) {
      *(int *)(plVar2 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (!bVar9) {
      while( true ) {
        LOCK();
        bVar9 = iVar6 == (int)plVar2[1];
        if (bVar9) {
          *(int *)(plVar2 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar9) break;
        LOCK();
        iVar6 = (int)plVar2[1];
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(plVar2 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar9) {
          return;
        }
      }
      if (plVar2 != (longlong *)0x0) {
        lVar3 = *(longlong *)(param_1 + 0x390);
        if (lVar3 != 0) {
          if ((*(longlong *)(param_1 + 0x2e8) == 0) || (cVar5 = FUN_1409ae940(), cVar5 == '\0')) {
            FUN_14203e4e0(lVar3,L"locked");
          }
          else {
            FUN_14203e4e0(lVar3,L"unlocked");
            plVar4 = *(longlong **)(param_1 + 0x3b8);
            plVar8 = plVar4;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              iVar6 = (int)plVar4[1];
              bVar9 = iVar6 == 0;
              if (bVar9) {
                *(int *)(plVar4 + 1) = 0;
                iVar6 = 0;
              }
              UNLOCK();
              while (plVar8 = plVar7, !bVar9) {
                LOCK();
                bVar9 = iVar6 == (int)plVar4[1];
                if (bVar9) {
                  *(int *)(plVar4 + 1) = iVar6 + 1;
                }
                UNLOCK();
                if (bVar9) {
                  plVar8 = plVar4;
                  if (plVar4 != (longlong *)0x0) {
                    plVar7 = *(longlong **)(param_1 + 0x3b0);
                  }
                  break;
                }
                LOCK();
                iVar6 = (int)plVar4[1];
                bVar9 = iVar6 == 0;
                if (bVar9) {
                  *(int *)(plVar4 + 1) = 0;
                  iVar6 = 0;
                }
                UNLOCK();
              }
            }
            if ((*(char *)(param_1 + 0x424) == '\0') && (plVar7 != (longlong *)0x0)) {
              FUN_14203e030(plVar7,L"start");
              *(undefined1 *)(param_1 + 0x424) = 1;
            }
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              plVar7 = plVar8 + 1;
              lVar3 = *plVar7;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)lVar3 == 1) {
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
          }
        }
        LOCK();
        plVar7 = plVar2 + 1;
        lVar3 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141033030 FUN_141033030 body=72 status=ok
// SIG undefined FUN_141033030(void)

ulonglong FUN_141033030(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong in_RAX;
  longlong *plVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (iVar1 = *(int *)(param_1 + 0x88), in_RAX = (longlong)iVar1, 0 < iVar1)) {
    plVar2 = *(longlong **)(param_1 + 0x80);
    in_RAX = 0;
    do {
      if (*plVar2 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(longlong *)(*plVar2 + 0x10);
      }
      if (lVar3 == param_2) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
      in_RAX = in_RAX + 1;
      plVar2 = plVar2 + 1;
    } while ((longlong)in_RAX < (longlong)iVar1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141033080 FUN_141033080 body=139 status=ok
// SIG undefined FUN_141033080(void)

undefined8 * FUN_141033080(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x50);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14467a3e8;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(param_1 + 0x18);
    *(undefined1 *)((longlong)puVar2 + 0x1c) = *(undefined1 *)(param_1 + 0x1c);
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    lVar1 = *(longlong *)(param_1 + 0x30);
    puVar2[6] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined1 *)(puVar2 + 7) = *(undefined1 *)(param_1 + 0x38);
    *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(param_1 + 0x40);
    puVar2[9] = *(undefined8 *)(param_1 + 0x48);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141033110 FUN_141033110 body=79 status=ok
// SIG undefined FUN_141033110(void)

void FUN_141033110(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14467a5d8;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return;
    }
  }
  return;
}



// FUNCTION 141033160 FUN_141033160 body=98 status=ok
// SIG undefined FUN_141033160(void)

undefined8 * FUN_141033160(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14467a490;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1410331d0 FUN_1410331d0 body=106 status=ok
// SIG undefined FUN_1410331d0(void)

undefined8 * FUN_1410331d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14467a620;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
    FString::FString(puVar1 + 3,param_1 + 0x18);
    *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)((longlong)puVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141033240 CopyToEmptyStorage body=104 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_86b5239219762420415e95617a23a7af>_>::
CopyToEmptyStorage(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x70);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_CopyToEmptyStorage_14467a650;
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



// FUNCTION 1410332b0 FUN_1410332b0 body=198 status=ok
// SIG undefined FUN_1410332b0(void)

undefined8 * FUN_1410332b0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14467a530;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
    FUN_14170c210(puVar1 + 1,uVar2);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0xc));
    FUN_14170c210((longlong)puVar1 + 0xc,uVar2);
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x10));
    FUN_14170c210(puVar1 + 2,uVar2);
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x14));
    FUN_14170c210((longlong)puVar1 + 0x14,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141033380 FUN_141033380 body=201 status=ok
// SIG undefined FUN_141033380(void)

undefined8 * FUN_141033380(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14467a638;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = 0;
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    iVar5 = *(int *)(param_1 + 0x18);
    *(int *)(puVar2 + 3) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar2 + 2,iVar5,0);
      puVar3 = (undefined8 *)puVar2[2];
      do {
        *puVar3 = *puVar4;
        lVar1 = puVar4[1];
        puVar3[1] = lVar1;
        if (lVar1 != 0) {
          LOCK();
          *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
          UNLOCK();
        }
        puVar3 = puVar3 + 2;
        puVar4 = puVar4 + 2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141033450 FUN_141033450 body=167 status=ok
// SIG undefined FUN_141033450(void)

undefined8 * FUN_141033450(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14467a518;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
    FUN_14170c210(puVar1 + 1,uVar2);
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0xc));
    FUN_14170c210((longlong)puVar1 + 0xc,uVar2);
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x10));
    FUN_14170c210(puVar1 + 2,uVar2);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141033500 FUN_141033500 body=110 status=ok
// SIG undefined FUN_141033500(void)

undefined8 * FUN_141033500(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14467a500;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
    FUN_14170c210(puVar1 + 1,uVar2);
    *(undefined1 *)((longlong)puVar1 + 0xc) = *(undefined1 *)(param_1 + 0xc);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141033570 FUN_141033570 body=191 status=ok
// SIG undefined FUN_141033570(void)

undefined8 * FUN_141033570(longlong param_1)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar2 = &PTR_FUN_14467a3d0;
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_1 + 0x10);
  puVar2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar2 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
    return puVar2;
  }
  TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar2 + 3,iVar1,0);
  _guard_xfg_dispatch_icall_nop((void *)puVar2[3],_Src,(longlong)iVar1 << 3);
  return puVar2;
}



// FUNCTION 141033630 FUN_141033630 body=99 status=ok
// SIG undefined FUN_141033630(void)

undefined8 * FUN_141033630(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14467a608;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    FString::FString(puVar1 + 2,param_1 + 0x10);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1410336a0 FUN_1410336a0 body=85 status=ok
// SIG undefined FUN_1410336a0(void)

undefined8 * FUN_1410336a0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14467a4e8;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(param_1 + 0x18);
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141033700 FUN_141033700 body=113 status=ok
// SIG undefined FUN_141033700(void)

undefined8 * FUN_141033700(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14467a298;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    FText::FText(puVar1 + 2,param_1 + 0x10);
    FText::FText(puVar1 + 5,param_1 + 0x28);
    FString::FString(puVar1 + 8,param_1 + 0x40);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141033780 CopyToEmptyStorage body=79 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_7a02e06ca5db01d82e81cc92e1965566>_>::
CopyToEmptyStorage(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_14467a5f0;
    ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar1 + 2,param_1 + 0x10);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1410337d0 FUN_1410337d0 body=91 status=ok
// SIG undefined FUN_1410337d0(void)

void FUN_1410337d0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14467a2b0;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_1 + 0x10);
    *(undefined1 *)((longlong)puVar1 + 0x11) = *(undefined1 *)(param_1 + 0x11);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_14467a2f8;
  }
  return;
}



// FUNCTION 141033830 FUN_141033830 body=107 status=ok
// SIG undefined FUN_141033830(void)

void FUN_141033830(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14467a400;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
    FUN_14170c210(puVar1 + 1,uVar2);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_14467a448;
  }
  return;
}



// FUNCTION 1410338a0 FUN_1410338a0 body=82 status=ok
// SIG undefined FUN_1410338a0(void)

void FUN_1410338a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14467a1e8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_14467a230;
  }
  return;
}



// FUNCTION 141033900 FUN_141033900 body=66 status=ok
// SIG undefined FUN_141033900(void)

void FUN_141033900(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14467a340;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_14467a388;
  }
  return;
}



// FUNCTION 141033950 FUN_141033950 body=130 status=ok
// SIG undefined FUN_141033950(void)

void FUN_141033950(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0x70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14467a548;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x60,puVar1 + 4);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_CopyToEmptyStorage_1444f81f0;
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar2 + 2,param_1 + 0x10);
    }
    puVar1[2] = UE4Function_Private::
                TFunctionRefCaller<<lambda_50573a4081bc06268289253819177437>,void___cdecl(void)>::
                Call;
    puVar1[0xd] = *(undefined8 *)(param_1 + 0x68);
    *puVar1 = &PTR_GetPoolName_14467a590;
  }
  return;
}



// FUNCTION 1410339e0 CreateCopy body=48 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<FString___cdecl(TSharedPtr<FInterfaceContainer,0>),<lambda_5e27373bf3904ac0086c7d4deb00b610>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14467a4a8;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 141033a10 FUN_141033a10 body=439 status=ok
// SIG undefined FUN_141033a10(void)

void FUN_141033a10(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  
  plVar3 = param_1 + 0x10;
  plVar6 = (longlong *)*plVar3;
  uVar8 = (ulonglong)(int)param_1[0x11];
  plVar5 = plVar6 + uVar8;
  if (plVar6 != plVar5) {
    do {
      if ((*plVar6 != 0) && (plVar1 = *(longlong **)(*plVar6 + 0x10), plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x288))();
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar5);
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x11);
  }
  plVar5 = (longlong *)*plVar3;
  uVar7 = (uint)uVar8;
  while (uVar7 != 0) {
    puVar2 = (undefined8 *)*plVar5;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    plVar5 = plVar5 + 1;
    uVar7 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar7;
  }
  plVar5 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (*(int *)((longlong)param_1 + 0x8c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar3,0);
  }
  if ((param_1[0xe] != 0) && (lVar4 = *(longlong *)(param_1[0xe] + 0x10), lVar4 != 0)) {
    FWeakObjectPtr::operator=(lVar4 + 0x378,0);
    *(undefined8 *)(lVar4 + 0x380) = 0;
    if (param_1[0xe] != 0) {
      plVar5 = *(longlong **)(param_1[0xe] + 0x10);
    }
    (**(code **)(*plVar5 + 0x288))();
  }
  if (param_1[0xe] != 0) {
    *(undefined8 *)(param_1[0xe] + 0x10) = 0;
  }
  if ((param_1[0xd] != 0) &&
     (plVar3 = *(longlong **)(param_1[0xd] + 0x10), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x288))();
  }
  if (param_1[0xd] != 0) {
    *(undefined8 *)(param_1[0xd] + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_142f0ee50(param_1 + 4,0);
  FUN_142f11a80(param_1 + 4,0,0,0);
  if (((int)param_1[1] != 0) && (plVar3 = (longlong *)*param_1, plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    if (*param_1 != 0) {
      lVar4 = FMemory::Realloc(*param_1,0,0);
      *param_1 = lVar4;
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (((int)param_1[3] != 0) && (plVar3 = (longlong *)param_1[2], plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    if (param_1[2] != 0) {
      lVar4 = FMemory::Realloc(param_1[2],0,0);
      param_1[2] = lVar4;
    }
    *(undefined4 *)(param_1 + 3) = 0;
  }
  return;
}



// FUNCTION 141033bd0 FUN_141033bd0 body=2074 status=ok
// SIG undefined FUN_141033bd0(void)

void FUN_141033bd0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 local_128;
  longlong *local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
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
  
  lVar8 = *(longlong *)(param_1 + 0x6c0);
  lVar9 = (longlong)*(int *)(param_1 + 0x6c8) * 0x40 + lVar8;
  for (; lVar8 != lVar9; lVar8 = lVar8 + 0x40) {
    if (*(longlong **)(lVar8 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar8 + 0x10) + 0x288))();
    }
  }
  lVar8 = 0;
  local_120 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0xac8) != &local_128) {
    *(undefined8 *)(param_1 + 0xac8) = 0;
    local_128 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xad0,&local_120);
    plVar4 = local_120;
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_120 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  if ((undefined8 *)(param_1 + 0x6e8) != &local_118) {
    *(undefined8 *)(param_1 + 0x6e8) = 0;
    local_118 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x6f0,&local_110);
    plVar4 = local_110;
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_110 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  if ((undefined8 *)(param_1 + 0x6f8) != &local_108) {
    *(undefined8 *)(param_1 + 0x6f8) = 0;
    local_108 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x700,&local_100);
    plVar4 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_100 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  if ((undefined8 *)(param_1 + 0x708) != &local_f8) {
    *(undefined8 *)(param_1 + 0x708) = 0;
    local_f8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x710,&local_f0);
    plVar4 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f0 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  if ((undefined8 *)(param_1 + 0x718) != &local_e8) {
    *(undefined8 *)(param_1 + 0x718) = 0;
    local_e8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x720,&local_e0);
    plVar4 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e0 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  if ((undefined8 *)(param_1 + 0x728) != &local_d8) {
    *(undefined8 *)(param_1 + 0x728) = 0;
    local_d8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x730,&local_d0);
    plVar4 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d0 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  lVar9 = *(longlong *)(param_1 + 0xbc0);
  if (lVar9 != 0) {
    local_c0 = (longlong *)0x0;
    if ((undefined8 *)(lVar9 + 0x170) != &local_c8) {
      *(undefined8 *)(lVar9 + 0x170) = 0;
      local_c8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(lVar9 + 0x178,&local_c0);
      plVar4 = local_c0;
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_c0 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
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
    lVar9 = *(longlong *)(param_1 + 0xbc0);
    puVar6 = (undefined8 *)(lVar9 + 0x180);
    local_b0 = (longlong *)0x0;
    if (puVar6 != &local_b8) {
      *puVar6 = 0;
      local_b8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(lVar9 + 0x188,&local_b0);
      plVar4 = local_b0;
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_b0 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
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
  }
  local_a0 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0xa48) != &local_a8) {
    *(undefined8 *)(param_1 + 0xa48) = 0;
    local_a8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xa50,&local_a0);
    plVar4 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a0 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  if ((undefined8 *)(param_1 + 0xa58) != &local_98) {
    *(undefined8 *)(param_1 + 0xa58) = 0;
    local_98 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xa60,&local_90);
    plVar4 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  if ((undefined8 *)(param_1 + 0xa68) != &local_88) {
    *(undefined8 *)(param_1 + 0xa68) = 0;
    local_88 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xa70,&local_80);
    plVar4 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  if ((undefined8 *)(param_1 + 0xa78) != &local_78) {
    *(undefined8 *)(param_1 + 0xa78) = 0;
    local_78 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xa80,&local_70);
    plVar4 = local_70;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  if ((undefined8 *)(param_1 + 0xa88) != &local_68) {
    *(undefined8 *)(param_1 + 0xa88) = 0;
    local_68 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xa90,&local_60);
    plVar4 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  if ((undefined8 *)(param_1 + 0xa98) != &local_58) {
    *(undefined8 *)(param_1 + 0xa98) = 0;
    local_58 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xaa0,&local_50);
    plVar4 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  local_40 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0xaa8) != &local_48) {
    *(undefined8 *)(param_1 + 0xaa8) = 0;
    local_48 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xab0,&local_40);
    plVar4 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
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
  if ((undefined8 *)(param_1 + 0xab8) != &local_38) {
    *(undefined8 *)(param_1 + 0xab8) = 0;
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xac0,&local_30);
    plVar4 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
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
  if ((undefined8 *)(param_1 + 0xad8) != &local_28) {
    *(undefined8 *)(param_1 + 0xad8) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xae0,&local_20);
    plVar4 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0xae8) != &local_18) {
    *(undefined8 *)(param_1 + 0xae8) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xaf0,&local_10);
    plVar4 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  if (*(longlong *)(param_1 + 0xeb8) != 0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0xeb8) + 0xc);
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar7 = iVar3 >> 0x1f & 0xffff;
      uVar5 = iVar3 + uVar7;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar7) * 0x18;
    }
    *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) & 0xfbffffff;
  }
  *(undefined8 *)(param_1 + 0xeb8) = 0;
  FUN_142eb3890(param_1);
  return;
}



// FUNCTION 1410343f0 FUN_1410343f0 body=9 status=ok
// SIG undefined FUN_1410343f0(void)

void FUN_1410343f0(longlong param_1)

{
  FUN_140ddebc0(param_1 + 0x10);
  return;
}



// FUNCTION 141034400 FUN_141034400 body=9 status=ok
// SIG undefined FUN_141034400(void)

void FUN_141034400(longlong param_1)

{
  FUN_140e14820(param_1 + 0x10);
  return;
}



// FUNCTION 141034410 FUN_141034410 body=1293 status=ok
// SIG undefined FUN_141034410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141034410(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined1 auStack_328 [32];
  undefined2 local_308;
  undefined4 local_2f8 [2];
  longlong *local_2f0;
  longlong *local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  longlong *local_2b8;
  LARGE_INTEGER local_2b0;
  undefined1 *local_2a8 [2];
  undefined1 local_298 [32];
  undefined8 local_278;
  undefined4 local_268;
  longlong *local_258;
  longlong *local_250;
  undefined1 local_248 [16];
  longlong local_238 [4];
  longlong *local_218;
  int local_208;
  undefined1 *local_1f8 [2];
  longlong local_1e8 [4];
  longlong *local_1c8;
  int local_1b8;
  undefined1 *local_1a8 [2];
  longlong local_198 [4];
  longlong *local_178;
  int local_168;
  undefined1 *local_158 [2];
  longlong local_148 [4];
  longlong *local_128;
  int local_118;
  LARGE_INTEGER local_108 [24];
  longlong local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  local_2f8[0] = 0xffffffff;
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    FUN_14170c210(local_2f8);
  }
  FWeakObjectPtr::operator=(&local_2e0,param_1);
  uVar7 = local_2f8[0];
  plVar6 = (longlong *)0x0;
  local_2f8[0] = 0xffffffff;
  local_278 = 0;
  local_268 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x20,local_298);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_144605c50;
    puVar4[1] = param_1;
    *(undefined4 *)(puVar4 + 2) = local_2e0;
    *(undefined4 *)((longlong)puVar4 + 0x14) = local_2dc;
    *(undefined4 *)(puVar4 + 3) = uVar7;
    uVar7 = 0xffffffff;
  }
  local_2d0 = 0;
  local_2a8[0] = &LAB_141032560;
  local_2c8 = 0x2e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d0,0);
  local_308 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_2d0,0x2e,"UGFxSHiFTMenuNoCrossplay::RefreshSparkAccount");
  FUN_140cdf730(local_108,&local_2d0,local_2a8);
  FUN_1416f8340(uVar7);
  FUN_1416f8340(local_2f8[0]);
  QueryPerformanceCounter(&local_2b0);
  local_108[0] = local_2b0;
  plVar5 = (longlong *)operator_new(0x18);
  plVar8 = plVar6;
  if (plVar5 != (longlong *)0x0) {
    TPromiseBase<int>::TPromiseBase<int>(plVar5);
    *(undefined1 *)(plVar5 + 2) = 0;
    plVar8 = plVar5;
  }
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *plVar5 = (longlong)&PTR_DestroyObject_1444f8938;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    plVar5[2] = (longlong)plVar8;
    plVar6 = plVar5;
  }
  local_2f0 = plVar8;
  local_2e8 = plVar6;
  SharedPointerInternals::EnableSharedFromThis(&local_2f0,plVar8,plVar8);
  *(undefined1 *)(local_2f0 + 2) = 1;
  local_2b8 = (longlong *)local_2f0[1];
  local_48 = *local_2f0;
  if (local_2b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2b8 + 1) = (int)local_2b8[1] + 1;
    UNLOCK();
  }
  local_2c0 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_40,&local_2b8);
  plVar6 = local_2b8;
  if (local_2b8 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_2b8 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_2b8)(local_2b8);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_2b8 + 8))(local_2b8,1);
      }
    }
  }
  local_1c8 = (longlong *)0x0;
  local_1b8 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_1e8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_1444f8620;
    puVar4[1] = local_108;
  }
  local_1f8[0] = &LAB_140cee980;
  local_258 = local_2f0;
  local_250 = local_2e8;
  if (local_2e8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2e8 + 1) = (int)local_2e8[1] + 1;
    UNLOCK();
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_248,local_1f8);
  local_178 = (longlong *)0x0;
  local_168 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x70,local_198);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_CopyToEmptyStorage_1444f8578;
    puVar4[2] = local_258;
    puVar4[3] = local_250;
    if (local_250 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_250 + 1) = (int)local_250[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 4,local_248);
  }
  local_1a8[0] = &LAB_140cee8d0;
  if (local_208 != 0) {
    plVar6 = local_238;
    if (local_218 != (longlong *)0x0) {
      plVar6 = local_218;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_218 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar6 = local_250;
  if (local_250 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_250 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_250)(local_250);
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
  if (local_1b8 != 0) {
    plVar6 = local_1e8;
    if (local_1c8 != (longlong *)0x0) {
      plVar6 = local_1c8;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_1c8 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar6 = local_2e8;
  if (local_2e8 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_2e8 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_2e8)(local_2e8);
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
  FUN_14208c260(param_1,local_1a8);
  if (local_168 != 0) {
    plVar6 = local_198;
    if (local_178 != (longlong *)0x0) {
      plVar6 = local_178;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_178 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_140d1b3a0(local_108);
  if ((*(longlong *)(param_1 + 0x6e0) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x6e0) + 0x18) == '\0')) {
    FWeakObjectPtr::operator=(&local_2d8,param_1);
    local_128 = (longlong *)0x0;
    local_118 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_148);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_1444f8920;
      puVar4[1] = param_1;
      *(undefined4 *)(puVar4 + 2) = local_2d8;
      *(undefined4 *)((longlong)puVar4 + 0x14) = local_2d4;
    }
    local_158[0] = &LAB_1410322b0;
    FUN_14208c260(param_1,local_158);
    if (local_118 != 0) {
      plVar6 = local_148;
      if (local_128 != (longlong *)0x0) {
        plVar6 = local_128;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_128 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    FUN_141066f40(param_1);
  }
  FUN_140ce1dc0(local_108);
  return;
}



// FUNCTION 141034920 FUN_141034920 body=592 status=ok
// SIG undefined FUN_141034920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141034920(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_198 [32];
  code *local_178 [2];
  longlong local_168 [4];
  longlong *local_148;
  int local_138;
  undefined1 local_128 [80];
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  plVar8 = (longlong *)param_2[1];
  param_1 = param_1 + -0x6a8;
  uVar3 = *param_2;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  plVar9 = (longlong *)0x0;
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_FUN_14467a5d8;
    puVar7[1] = param_1;
    puVar7[2] = uVar3;
    puVar7[3] = plVar8;
    plVar8 = plVar9;
  }
  local_d8[0] = &LAB_1410320e0;
  FUN_1420849a0(param_1,local_88,local_d8);
  if (local_98 != 0) {
    plVar10 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar10 = local_a8;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  lVar4 = DAT_146873ec8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar6 = GetCurrentThreadId();
    plVar8 = (longlong *)&DAT_00000004;
    if (DVar6 != DAT_1468c21c0) goto LAB_141034a55;
  }
  plVar8 = plVar9;
LAB_141034a55:
  if (*(int *)(lVar4 + (longlong)plVar8) == 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_178,local_88);
    if (local_138 != 0) {
      plVar8 = local_168;
      if (local_148 != (longlong *)0x0) {
        plVar8 = local_148;
      }
      if (plVar8 != (longlong *)0x0) {
        plVar9 = (longlong *)(**(code **)(*plVar8 + 8))();
      }
    }
    (*local_178[0])(plVar9);
    if (local_138 != 0) {
      plVar8 = local_168;
      if (local_148 != (longlong *)0x0) {
        plVar8 = local_148;
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,0);
      }
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_128);
    FUN_14208c4f0(param_1,local_128);
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
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 141034b70 FUN_141034b70 body=592 status=ok
// SIG undefined FUN_141034b70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141034b70(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_198 [32];
  code *local_178 [2];
  longlong local_168 [4];
  longlong *local_148;
  int local_138;
  undefined1 local_128 [80];
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  plVar8 = (longlong *)param_2[1];
  param_1 = param_1 + -0x6a8;
  uVar3 = *param_2;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  plVar9 = (longlong *)0x0;
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_FUN_14467a5d8;
    puVar7[1] = param_1;
    puVar7[2] = uVar3;
    puVar7[3] = plVar8;
    plVar8 = plVar9;
  }
  local_d8[0] = &LAB_141032010;
  FUN_1420849a0(param_1,local_88,local_d8);
  if (local_98 != 0) {
    plVar10 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar10 = local_a8;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  lVar4 = DAT_146873ec8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar6 = GetCurrentThreadId();
    plVar8 = (longlong *)&DAT_00000004;
    if (DVar6 != DAT_1468c21c0) goto LAB_141034ca5;
  }
  plVar8 = plVar9;
LAB_141034ca5:
  if (*(int *)(lVar4 + (longlong)plVar8) == 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_178,local_88);
    if (local_138 != 0) {
      plVar8 = local_168;
      if (local_148 != (longlong *)0x0) {
        plVar8 = local_148;
      }
      if (plVar8 != (longlong *)0x0) {
        plVar9 = (longlong *)(**(code **)(*plVar8 + 8))();
      }
    }
    (*local_178[0])(plVar9);
    if (local_138 != 0) {
      plVar8 = local_168;
      if (local_148 != (longlong *)0x0) {
        plVar8 = local_148;
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,0);
      }
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_128);
    FUN_14208c4f0(param_1,local_128);
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
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 141034dc0 FUN_141034dc0 body=845 status=ok
// SIG undefined FUN_141034dc0(void)

void FUN_141034dc0(longlong *param_1,char param_2,longlong param_3,char param_4,char param_5)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint local_res10;
  undefined1 local_58 [24];
  
  uVar8 = 0;
  local_res10 = 0;
  uVar10 = uVar8;
  if ((longlong *)param_1[0x180] != (longlong *)0x0) {
    local_res10 = (**(code **)(*(longlong *)param_1[0x180] + 0x408))();
    uVar10 = (ulonglong)local_res10;
  }
  if (param_2 == '\0') {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x17b));
    lVar5 = param_1[0x17c];
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x17b));
    if (lVar5 != 0) {
      uVar3 = TScriptInterface<IBlendableInterface>::
              TScriptInterface<IBlendableInterface><UMaterialInterface>(local_58,lVar5);
      FUN_142ed36d0(param_1,uVar3,0);
    }
    plVar7 = (longlong *)param_1[0x186];
    uVar10 = (longlong)(int)param_1[0x187] & 0x1fffffffffffffff;
    if (plVar7 + (int)param_1[0x187] < plVar7) {
      uVar10 = uVar8;
    }
    uVar9 = uVar8;
    if (uVar10 != 0) {
      do {
        if (*plVar7 != 0) {
          plVar4 = (longlong *)(*plVar7 + 0x170);
          (**(code **)(*plVar4 + 0x38))(plVar4,0);
        }
        plVar7 = plVar7 + 1;
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar10);
    }
LAB_14103509b:
    if ((param_4 != '\0') && (uVar8 != 0)) {
      lVar5 = *(longlong *)(uVar8 + 0x410);
      if ((lVar5 == 0) && (lVar5 = *(longlong *)(uVar8 + 0x408), lVar5 == 0)) {
        lVar5 = *(longlong *)(uVar8 + 0x418);
      }
      goto LAB_1410350c8;
    }
  }
  else {
    uVar9 = uVar8;
    if (param_2 != '\x01') {
      if ((param_2 == '\x02') && (param_1[0xda] != 0)) {
        puVar6 = (ulonglong *)param_1[0x186];
        uVar10 = (longlong)(int)param_1[0x187] & 0x1fffffffffffffff;
        if (puVar6 + (int)param_1[0x187] < puVar6) {
          uVar10 = uVar8;
        }
        if (uVar10 != 0) {
          do {
            uVar11 = *puVar6;
            if (uVar11 != 0) {
              (**(code **)(*(longlong *)(uVar11 + 0x170) + 0x38))((longlong *)(uVar11 + 0x170),1);
              if (uVar9 == 0) {
                uVar9 = uVar11;
              }
            }
            puVar6 = puVar6 + 1;
            uVar8 = uVar8 + 1;
          } while (uVar8 != uVar10);
          uVar8 = uVar9;
          if (uVar9 != 0) {
            if (param_4 == '\0') goto LAB_1410350c5;
            if (((param_5 != '\0') && (param_1[0x17f] != 0)) &&
               (cVar2 = (**(code **)(*(longlong *)(param_1[0x17f] + 0x170) + 0x40))(), cVar2 != '\0'
               )) {
              uVar9 = param_1[0x17f];
            }
LAB_141034fe0:
            uVar3 = TScriptInterface<IBlendableInterface>::
                    TScriptInterface<IBlendableInterface><UMaterialInterface>(local_58,uVar9);
            FUN_142ed36d0(param_1,uVar3,0);
            uVar8 = uVar9;
          }
        }
      }
      goto LAB_14103509b;
    }
    if ((param_3 == 0) || (lVar5 = *(longlong *)(param_3 + 0x458), lVar5 == 0)) goto LAB_14103509b;
    puVar6 = (ulonglong *)param_1[0x186];
    uVar11 = (longlong)(int)param_1[0x187] & 0x1fffffffffffffff;
    if (puVar6 + (int)param_1[0x187] < puVar6) {
      uVar11 = uVar8;
    }
    if (uVar11 == 0) goto LAB_14103509b;
    do {
      uVar1 = *puVar6;
      cVar2 = (**(code **)(*param_1 + 0x5b8))(param_1,uVar1,lVar5,uVar10);
      if (uVar1 != 0) {
        (**(code **)(*(longlong *)(uVar1 + 0x170) + 0x38))((longlong *)(uVar1 + 0x170),cVar2);
      }
      if ((cVar2 != '\0') && (uVar9 == 0)) {
        uVar9 = uVar1;
      }
      uVar10 = (ulonglong)local_res10;
      puVar6 = puVar6 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar11);
    uVar8 = uVar9;
    if (uVar9 == 0) goto LAB_14103509b;
    if (param_4 != '\0') goto LAB_141034fe0;
  }
LAB_1410350c5:
  lVar5 = 0;
LAB_1410350c8:
  uVar3 = 0;
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x458);
  }
  FUN_14103feb0(param_1,lVar5,uVar3);
  return;
}



// FUNCTION 141035110 FUN_141035110 body=592 status=ok
// SIG undefined FUN_141035110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141035110(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_198 [32];
  code *local_178 [2];
  longlong local_168 [4];
  longlong *local_148;
  int local_138;
  undefined1 local_128 [80];
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  plVar8 = (longlong *)param_2[1];
  param_1 = param_1 + -0x6a8;
  uVar3 = *param_2;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  plVar9 = (longlong *)0x0;
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_FUN_14467a5d8;
    puVar7[1] = param_1;
    puVar7[2] = uVar3;
    puVar7[3] = plVar8;
    plVar8 = plVar9;
  }
  local_d8[0] = &LAB_141031df0;
  FUN_1420849a0(param_1,local_88,local_d8);
  if (local_98 != 0) {
    plVar10 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar10 = local_a8;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  lVar4 = DAT_146873ec8;
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar6 = GetCurrentThreadId();
    plVar8 = (longlong *)&DAT_00000004;
    if (DVar6 != DAT_1468c21c0) goto LAB_141035245;
  }
  plVar8 = plVar9;
LAB_141035245:
  if (*(int *)(lVar4 + (longlong)plVar8) == 0) {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_178,local_88);
    if (local_138 != 0) {
      plVar8 = local_168;
      if (local_148 != (longlong *)0x0) {
        plVar8 = local_148;
      }
      if (plVar8 != (longlong *)0x0) {
        plVar9 = (longlong *)(**(code **)(*plVar8 + 8))();
      }
    }
    (*local_178[0])(plVar9);
    if (local_138 != 0) {
      plVar8 = local_168;
      if (local_148 != (longlong *)0x0) {
        plVar8 = local_148;
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,0);
      }
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_128);
    FUN_14208c4f0(param_1,local_128);
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
  plVar8 = (longlong *)param_2[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar8 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 141035360 FUN_141035360 body=62 status=ok
// SIG undefined FUN_141035360(void)

void FUN_141035360(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    FUN_141043040(lVar1,param_2,*(undefined1 *)(param_1 + 0x11),*(undefined1 *)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 1410353a0 FUN_1410353a0 body=221 status=ok
// SIG undefined FUN_1410353a0(void)

void FUN_1410353a0(longlong param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
  if (lVar2 != 0) {
    if (param_2 == 1) {
      lVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
      FWeakObjectPtr::IsValid(lVar2 + 0x680);
    }
    else if (param_2 == 2) {
      lVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
      cVar1 = FWeakObjectPtr::IsValid(lVar2 + 0x680);
      if (cVar1 != '\0') {
        plVar3 = (longlong *)FWeakObjectPtr::Get(lVar2 + 0x680);
                    /* WARNING: Could not recover jumptable at 0x00014103544c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x578))(plVar3);
        return;
      }
    }
    else {
      if (param_2 != 3) {
        return;
      }
      lVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 8));
      cVar1 = FWeakObjectPtr::IsValid(lVar2 + 0x680);
      if (cVar1 != '\0') {
        plVar3 = (longlong *)FWeakObjectPtr::Get(lVar2 + 0x680);
                    /* WARNING: Could not recover jumptable at 0x00014103540e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x570))(plVar3);
        return;
      }
    }
    FUN_142eb3990(lVar2);
  }
  return;
}


