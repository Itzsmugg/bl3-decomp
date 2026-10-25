// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1415c19a0 FindConsoleObjectUnfiltered body=403 status=ok
// SIG undefined FindConsoleObjectUnfiltered(void)

undefined2 * FConsoleManager::FindConsoleObjectUnfiltered(longlong param_1,short *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xd0);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  puVar9 = (undefined2 *)0x0;
  local_38 = (undefined2 *)0x0;
  local_2c = 0;
  puVar10 = puVar9;
  iVar8 = 0;
  if ((param_2 != (short *)0x0) && (puVar10 = (undefined2 *)0x0, iVar8 = 0, *param_2 != 0)) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != 0);
    iVar5 = (int)lVar6 + 1;
    local_30 = iVar5;
    if (0 < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    iVar8 = local_30;
    puVar10 = local_38;
    FGenericPlatformString::Memcpy(local_38,param_2,(longlong)iVar5 * 2);
  }
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    puVar3 = &DAT_143f3eda8;
    if (iVar8 != 0) {
      puVar3 = puVar10;
    }
    iVar5 = FUN_140438070(puVar3);
    lVar6 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar6 = param_1 + 0x40;
    }
    iVar5 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)iVar5) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar7 = (longlong)iVar5 * 0x20;
        puVar3 = &DAT_143f3eda8;
        if (iVar8 != 0) {
          puVar3 = puVar10;
        }
        if (*(int *)(lVar7 + 8 + lVar6) == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = *(undefined2 **)(lVar7 + lVar6);
        }
        iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar3);
        if (iVar2 == 0) {
          if ((iVar5 != -1) &&
             (lVar6 = (longlong)iVar5 * 0x20 + *(longlong *)(param_1 + 8), lVar6 != 0)) {
            puVar9 = *(undefined2 **)(lVar6 + 0x10);
          }
          break;
        }
        lVar6 = *(longlong *)(param_1 + 8);
        iVar5 = *(int *)(lVar7 + 0x18 + lVar6);
      } while (iVar5 != -1);
    }
  }
  if (puVar10 != (undefined2 *)0x0) {
    FMemory::Free(puVar10);
  }
  LeaveCriticalSection(lpCriticalSection);
  return puVar9;
}



// FUNCTION 1415c1b40 FUN_1415c1b40 body=62 status=ok
// SIG undefined FUN_1415c1b40(void)

undefined8 FUN_1415c1b40(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0xa0))();
  if (plVar2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
    if ((uVar1 >> 3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001415c1b72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1415c1b80 FUN_1415c1b80 body=2383 status=ok
// SIG undefined FUN_1415c1b80(void)

void FUN_1415c1b80(longlong *param_1,undefined8 param_2,short *param_3,short *param_4)

{
  wchar_t wVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  void *_Src;
  wint_t wVar6;
  int iVar7;
  uint uVar8;
  wchar_t **ppwVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  wchar_t *pwVar13;
  char *pcVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  wchar_t *pwVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  undefined2 uVar23;
  wchar_t *local_90;
  uint local_88;
  undefined4 local_84;
  wchar_t *local_80;
  uint local_78;
  int local_74;
  void *local_70;
  ulonglong local_68;
  wchar_t *local_60;
  undefined8 local_58;
  wchar_t *local_50;
  undefined8 local_48;
  
  if (param_3 == (short *)0x0) {
    return;
  }
  pwVar13 = (wchar_t *)0x0;
  uVar12 = 0;
  local_70 = (void *)0x0;
  local_68 = 0;
  if (*param_3 != 0) {
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (param_3[lVar11] != 0);
    uVar10 = (int)lVar11 + 1;
    local_68 = (ulonglong)uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
    }
    FGenericPlatformString::Memcpy(local_70,param_3,(longlong)(int)uVar10 * 2);
  }
  if (param_4 == (short *)0x0) {
    local_58 = 0;
    ppwVar9 = &local_60;
    bVar3 = true;
    bVar2 = false;
    local_90 = pwVar13;
  }
  else {
    local_50 = (wchar_t *)0x0;
    local_48 = 0;
    pwVar20 = pwVar13;
    if (*param_4 != 0) {
      lVar11 = -1;
      do {
        lVar11 = lVar11 + 1;
      } while (param_4[lVar11] != 0);
      uVar10 = (int)lVar11 + 1;
      local_48 = (ulonglong)uVar10;
      if (0 < (int)uVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
      }
      pwVar20 = local_50;
      FGenericPlatformString::Memcpy(local_50,param_4,(longlong)(int)uVar10 * 2);
    }
    ppwVar9 = &local_50;
    bVar3 = false;
    bVar2 = true;
    local_90 = pwVar20;
  }
  *ppwVar9 = (wchar_t *)0x0;
  local_88 = *(uint *)(ppwVar9 + 1);
  local_84 = *(undefined4 *)((longlong)ppwVar9 + 0xc);
  ppwVar9[1] = (wchar_t *)0x0;
  if ((bVar3) && (local_60 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  if ((bVar2) && (local_50 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  if (((uint)local_68 == 0) || ((int)((uint)local_68 + -1) < 1)) goto LAB_1415c248e;
  FPaths::NormalizeDirectoryName(&local_70);
  uVar22 = 0xffffffff;
  iVar7 = FUN_141592950(&local_90,&DAT_144ca14fc,1,0,0xffffffff);
  uVar23 = (undefined2)((uint)uVar22 >> 0x10);
  if (iVar7 == -1) {
    pcVar14 = "";
    pwVar20 = L"";
    if (local_88 != 0) {
      pwVar20 = local_90;
    }
    do {
      uVar23 = (undefined2)((uint)uVar22 >> 0x10);
      wVar1 = *pwVar20;
      if ((wVar1 == L'\0') && (*pcVar14 == '\0')) goto LAB_1415c1d60;
      if ((uint)(ushort)wVar1 != (int)*pcVar14) {
        wVar6 = towlower(wVar1);
        iVar7 = tolower((int)*pcVar14);
        uVar23 = (undefined2)((uint)uVar22 >> 0x10);
        if ((uint)wVar6 != (int)(char)iVar7) goto LAB_1415c1d5c;
      }
      pcVar14 = pcVar14 + 1;
      pwVar20 = pwVar20 + 1;
    } while( true );
  }
  goto LAB_1415c2215;
LAB_1415c1e72:
  if ((uint)wVar6 == (int)(char)iVar7) {
LAB_1415c1e7a:
    local_60 = (wchar_t *)0x0;
    local_58 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
    pwVar20 = local_60;
    uVar22 = CONCAT22(uVar23,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_60,2,&DAT_144ca2394,2,uVar22);
    pwVar15 = local_90;
    uVar23 = (undefined2)((uint)uVar22 >> 0x10);
    if ((int)(uint)local_58 < 2) {
      lVar11 = (longlong)(int)local_88;
      local_60 = (wchar_t *)0x0;
      local_58 = CONCAT44(local_58._4_4_,local_88);
      if (local_88 == 0) {
        ppwVar9 = &local_60;
        local_58 = 0;
        bVar5 = true;
        bVar4 = true;
        bVar3 = false;
        bVar2 = false;
        pwVar15 = (wchar_t *)0x0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_60,local_88,0);
        _guard_xfg_dispatch_icall_nop(local_60,pwVar15,lVar11 * 2);
        ppwVar9 = &local_60;
        bVar5 = true;
        bVar4 = true;
        bVar3 = false;
        bVar2 = false;
        pwVar15 = local_60;
      }
    }
    else {
      uVar10 = uVar12;
      if (local_88 != 0) {
        uVar10 = local_88 - 1;
      }
      if (((uint)local_58 != 0) || (uVar19 = 1, uVar10 == 0)) {
        uVar19 = uVar12;
      }
      local_80 = pwVar20;
      local_78 = (uint)local_58;
      local_74 = local_58._4_4_;
      if (local_58._4_4_ < (int)((uint)local_58 + uVar19 + uVar10)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_80);
      }
      uVar19 = local_78;
      pwVar20 = local_90;
      pwVar15 = local_80;
      uVar17 = local_78;
      iVar7 = local_74;
      if (uVar10 != 0) {
        lVar11 = (longlong)(int)local_78;
        local_78 = local_78 + (local_78 == 0) + uVar10;
        if (local_74 < (int)local_78) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,uVar19);
        }
        iVar7 = local_74;
        uVar17 = local_78;
        pwVar15 = local_80;
        pwVar16 = local_80 + (lVar11 - (ulonglong)(uVar19 != 0));
        _guard_xfg_dispatch_icall_nop(pwVar16,pwVar20,(longlong)(int)uVar10 * 2);
        pwVar16[(int)uVar10] = L'\0';
      }
      local_60 = pwVar15;
      ppwVar9 = &local_60;
      bVar5 = true;
      bVar4 = true;
      bVar3 = false;
      bVar2 = false;
      local_58 = CONCAT44(iVar7,uVar17);
      pwVar20 = (wchar_t *)0x0;
      pwVar16 = local_50;
    }
  }
  else {
    local_60 = (wchar_t *)0x0;
    local_58 = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
    pwVar15 = local_60;
    uVar22 = CONCAT22(uVar23,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_60,3,&DAT_144ca2ce4,3,uVar22);
    pwVar20 = local_90;
    uVar23 = (undefined2)((uint)uVar22 >> 0x10);
    if ((int)(uint)local_58 < 2) {
      lVar11 = (longlong)(int)local_88;
      local_80 = (wchar_t *)0x0;
      local_78 = local_88;
      if (local_88 == 0) {
        local_74 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,local_88,0);
        _guard_xfg_dispatch_icall_nop(local_80,pwVar20,lVar11 * 2);
      }
    }
    else {
      uVar10 = uVar12;
      if (local_88 != 0) {
        uVar10 = local_88 - 1;
      }
      if (((uint)local_58 != 0) || (uVar19 = 1, uVar10 == 0)) {
        uVar19 = uVar12;
      }
      local_80 = pwVar15;
      local_78 = (uint)local_58;
      local_74 = local_58._4_4_;
      uVar17 = (uint)local_58;
      if (local_58._4_4_ < (int)((uint)local_58 + uVar10 + uVar19)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_80);
        uVar17 = local_78;
      }
      pwVar20 = local_90;
      pwVar16 = local_80;
      iVar7 = local_74;
      uVar19 = uVar17;
      if (uVar10 != 0) {
        local_78 = uVar10 + (uVar17 == 0) + uVar17;
        if (local_74 < (int)local_78) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,uVar17);
        }
        iVar7 = local_74;
        uVar19 = local_78;
        pwVar16 = local_80;
        pwVar15 = local_80 + ((longlong)(int)uVar17 - (ulonglong)(uVar17 != 0));
        _guard_xfg_dispatch_icall_nop(pwVar15,pwVar20,(longlong)(int)uVar10 * 2);
        pwVar15[(int)uVar10] = L'\0';
      }
      pwVar15 = (wchar_t *)0x0;
      local_80 = pwVar16;
      local_78 = uVar19;
      local_74 = iVar7;
      pwVar16 = local_50;
    }
    ppwVar9 = &local_80;
    bVar5 = false;
    bVar4 = false;
    bVar3 = true;
    bVar2 = true;
    pwVar20 = local_60;
  }
  if (local_90 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  local_90 = *ppwVar9;
  *ppwVar9 = (wchar_t *)0x0;
  local_88 = *(uint *)(ppwVar9 + 1);
  local_84 = *(undefined4 *)((longlong)ppwVar9 + 0xc);
  ppwVar9[1] = (wchar_t *)0x0;
  if ((bVar2) && (local_80 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  if ((bVar3) && (pwVar15 != (wchar_t *)0x0)) {
    FMemory::Free(pwVar15);
  }
  if ((bVar4) && (local_60 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  if ((bVar5) && (pwVar20 != (wchar_t *)0x0)) {
    FMemory::Free(pwVar20);
  }
  if (pwVar16 != (wchar_t *)0x0) {
    FMemory::Free(pwVar16);
  }
  goto LAB_1415c2215;
LAB_1415c1d5c:
  if ((uint)wVar6 != (int)(char)iVar7) {
    if (local_88 == 0) {
      pwVar20 = L"";
      uVar10 = uVar12;
    }
    else {
      pwVar20 = local_90;
      uVar10 = local_88 - 1;
    }
    local_50 = (wchar_t *)0x0;
    if (1 < (int)uVar10) {
      uVar10 = 1;
    }
    uVar19 = uVar10 + 1;
    if (uVar10 == 0) {
      uVar19 = uVar12;
    }
    local_48 = (ulonglong)uVar19;
    pwVar16 = pwVar13;
    if (0 < (int)uVar19) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
      pwVar16 = local_50;
      uVar19 = (uint)local_48;
      if (0 < (int)(uint)local_48) {
        wcsncpy(local_50,pwVar20,(longlong)(int)uVar10);
        pwVar16[(int)uVar10] = L'\0';
      }
    }
    pcVar14 = ".";
    pwVar20 = L"";
    if (uVar19 != 0) {
      pwVar20 = pwVar16;
    }
    do {
      uVar23 = (undefined2)((uint)uVar22 >> 0x10);
      wVar1 = *pwVar20;
      if ((wVar1 == L'\0') && (*pcVar14 == '\0')) goto LAB_1415c1e7a;
      if ((uint)(ushort)wVar1 != (int)*pcVar14) {
        wVar6 = towlower(wVar1);
        iVar7 = tolower((int)*pcVar14);
        uVar23 = (undefined2)((uint)uVar22 >> 0x10);
        if ((uint)wVar6 != (int)(char)iVar7) goto LAB_1415c1e72;
      }
      pwVar20 = pwVar20 + 1;
      pcVar14 = pcVar14 + 1;
    } while( true );
  }
LAB_1415c1d60:
  local_50 = (wchar_t *)0x0;
  local_48 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
  pwVar20 = local_50;
  uVar22 = CONCAT22(uVar23,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_50,4,&DAT_144ca1f44,4,uVar22);
  uVar23 = (undefined2)((uint)uVar22 >> 0x10);
  if (local_90 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  local_88 = (uint)local_48;
  local_84 = local_48._4_4_;
  local_90 = pwVar20;
LAB_1415c2215:
  local_50 = (wchar_t *)0x0;
  local_48 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
  pwVar20 = local_50;
  uVar10 = CONCAT22(uVar23,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_50,2,&DAT_144ca2d54,2,uVar10);
  _Src = local_70;
  lVar11 = (longlong)(int)(uint)local_68;
  if ((int)(uint)local_68 < 2) {
    uVar21 = local_48 & 0xffffffff;
    pwVar15 = pwVar13;
    pwVar16 = pwVar20;
    iVar7 = local_48._4_4_;
  }
  else {
    uVar19 = uVar12;
    if ((uint)local_48 != 0) {
      uVar19 = (uint)local_48 - 1;
    }
    if (((uint)local_68 != 0) || (uVar17 = 1, uVar19 == 0)) {
      uVar17 = uVar12;
    }
    local_80 = (wchar_t *)0x0;
    local_78 = (uint)local_68;
    if (((uint)local_68 == 0) && (uVar19 + uVar17 == 0)) {
      local_74 = 0;
      uVar21 = 0;
      pwVar16 = pwVar13;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,uVar19 + uVar17 + (uint)local_68,0)
      ;
      pwVar16 = local_80;
      _guard_xfg_dispatch_icall_nop(local_80,_Src,lVar11 * 2);
      uVar21 = (ulonglong)local_78;
    }
    pwVar15 = pwVar20;
    iVar7 = local_74;
    if (uVar19 != 0) {
      iVar18 = (int)uVar21;
      local_78 = iVar18 + (uint)(iVar18 == 0) + uVar19;
      if (local_74 < (int)local_78) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,uVar21);
        pwVar16 = local_80;
      }
      iVar7 = local_74;
      uVar21 = (ulonglong)local_78;
      _guard_xfg_dispatch_icall_nop
                (pwVar16 + ((longlong)iVar18 - (ulonglong)(iVar18 != 0)),pwVar20,
                 (longlong)(int)uVar19 * 2);
      (pwVar16 + ((longlong)iVar18 - (ulonglong)(iVar18 != 0)))[(int)uVar19] = L'\0';
    }
  }
  pwVar20 = local_90;
  uVar19 = (uint)uVar21;
  if ((int)uVar19 < 2) {
    lVar11 = (longlong)(int)local_88;
    local_50 = (wchar_t *)0x0;
    local_48 = CONCAT44(local_48._4_4_,local_88);
    uVar12 = 0;
    if (local_88 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_50,local_88,0);
      pwVar13 = local_50;
      _guard_xfg_dispatch_icall_nop(local_50,pwVar20,lVar11 * 2);
      uVar12 = (uint)local_48;
    }
    if (pwVar16 != (wchar_t *)0x0) {
      FMemory::Free(pwVar16);
    }
  }
  else {
    uVar17 = uVar12;
    if (local_88 != 0) {
      uVar17 = local_88 - 1;
    }
    if ((uVar19 != 0) || (uVar8 = 1, uVar17 == 0)) {
      uVar8 = uVar12;
    }
    local_80 = pwVar16;
    local_78 = uVar19;
    local_74 = iVar7;
    if (iVar7 < (int)(uVar17 + uVar8 + uVar19)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_80);
      uVar21 = (ulonglong)local_78;
    }
    pwVar20 = local_90;
    uVar19 = (uint)uVar21;
    pwVar13 = local_80;
    uVar12 = uVar19;
    if (uVar17 != 0) {
      local_78 = uVar19 + (uVar19 == 0) + uVar17;
      if (local_74 < (int)local_78) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,uVar21);
      }
      uVar12 = local_78;
      pwVar13 = local_80;
      pwVar16 = local_80 + ((longlong)(int)uVar19 - (ulonglong)(uVar19 != 0));
      _guard_xfg_dispatch_icall_nop(pwVar16,pwVar20,(longlong)(int)uVar17 * 2);
      pwVar16[(int)uVar17] = L'\0';
    }
  }
  if (pwVar15 != (wchar_t *)0x0) {
    FMemory::Free(pwVar15);
  }
  pwVar20 = L"";
  if (uVar12 != 0) {
    pwVar20 = pwVar13;
  }
  (**(code **)(*param_1 + 0x78))(param_1,param_2,pwVar20,1,uVar10 & 0xffffff00);
  if (pwVar13 != (wchar_t *)0x0) {
    FMemory::Free(pwVar13);
  }
LAB_1415c248e:
  if (local_90 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1415c24d0 FUN_1415c24d0 body=695 status=ok
// SIG undefined FUN_1415c24d0(void)

void FUN_1415c24d0(undefined8 param_1,undefined8 param_2,short *param_3,undefined1 param_4,
                  undefined1 param_5)

{
  bool bVar1;
  bool bVar2;
  undefined2 *_Src;
  wint_t wVar3;
  wint_t wVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  void **ppvVar8;
  uint uVar9;
  longlong lVar10;
  wint_t *pwVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  longlong local_98;
  ulonglong local_90;
  undefined2 *local_88;
  int local_80;
  void *local_78;
  undefined4 local_6c;
  void *local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined8 local_50;
  longlong local_48 [2];
  undefined1 local_38;
  undefined1 local_37;
  
  local_98 = 0;
  local_90 = 0;
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (param_3[lVar10] != 0);
    uVar9 = (int)lVar10 + 1;
    local_90 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    }
    FGenericPlatformString::Memcpy(local_98,param_3,(longlong)(int)uVar9 * 2);
  }
  FPaths::NormalizeFilename(&local_98);
  FUN_141671d50(&local_88,&local_98);
  puVar13 = &DAT_143f3eda8;
  pwVar11 = &DAT_144ca1314;
  puVar12 = &DAT_143f3eda8;
  if (local_80 != 0) {
    puVar12 = local_88;
  }
  do {
    wVar3 = *(wint_t *)((longlong)(puVar12 + -0xa265098a) + (longlong)pwVar11);
    if ((wVar3 == 0) && (*pwVar11 == 0)) goto LAB_1415c2668;
    if (wVar3 != *pwVar11) {
      wVar3 = towlower(wVar3);
      wVar4 = towlower(*pwVar11);
      if (wVar3 != wVar4) goto LAB_1415c25ba;
    }
    pwVar11 = pwVar11 + 1;
  } while( true );
LAB_1415c2611:
  if (wVar3 != wVar4) {
    local_78 = (void *)0x0;
    if (local_80 == 0) {
      local_6c = 0;
      ppvVar8 = &local_78;
      bVar2 = false;
      bVar1 = true;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,local_80,0);
      _guard_xfg_dispatch_icall_nop(local_78,_Src,(longlong)local_80 * 2);
      ppvVar8 = &local_78;
      bVar2 = false;
      bVar1 = true;
    }
    goto LAB_1415c269e;
  }
  goto LAB_1415c2668;
LAB_1415c25ba:
  if (wVar3 != wVar4) {
    pwVar11 = &DAT_144cac238;
    puVar12 = &DAT_143f3eda8;
    if (local_80 != 0) {
      puVar12 = local_88;
    }
    do {
      wVar3 = *(wint_t *)((longlong)(puVar12 + -0xa265611c) + (longlong)pwVar11);
      if ((wVar3 == 0) && (*pwVar11 == 0)) break;
      if (wVar3 != *pwVar11) {
        wVar3 = towlower(wVar3);
        wVar4 = towlower(*pwVar11);
        _Src = local_88;
        if (wVar3 != wVar4) goto LAB_1415c2611;
      }
      pwVar11 = pwVar11 + 1;
    } while( true );
  }
LAB_1415c2668:
  local_68 = (void *)0x0;
  local_60 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,&DAT_144ca135c,4);
  ppvVar8 = &local_68;
  bVar2 = true;
  bVar1 = false;
LAB_1415c269e:
  local_58 = &PTR_FUN_144cadf90;
  local_50 = param_2;
  FString::FString(local_48,ppvVar8);
  local_37 = param_5;
  local_38 = param_4;
  if (bVar1) {
    if (local_78 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar2) && (local_68 != (void *)0x0)) {
    FMemory::Free();
  }
  uVar5 = FPlatformFileManager::Get();
  plVar6 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar5);
  puVar7 = (undefined8 *)FUN_141672d20(&local_68,&local_98);
  if (*(int *)(puVar7 + 1) != 0) {
    puVar13 = (undefined2 *)*puVar7;
  }
  (**(code **)(*plVar6 + 0xf0))(plVar6,puVar13,&local_58);
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_58 = &PTR_FUN_143f47c98;
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1415c2790 FindFilesRecursive body=160 status=ok
// SIG undefined FindFilesRecursive(void)

void FFileManagerGeneric::FindFilesRecursive
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,char param_7)

{
  longlong *plVar1;
  int iVar2;
  
  if (param_7 != '\0') {
    plVar1 = (longlong *)*param_2;
    for (iVar2 = *(int *)(param_2 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
    }
  }
  FindFilesRecursiveInternal(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1415c2830 FindFilesRecursiveInternal body=1311 status=ok
// SIG undefined FindFilesRecursiveInternal(void)

/* WARNING: Removing unreachable block (ram,0x0001415c2a87) */

void FFileManagerGeneric::FindFilesRecursiveInternal
               (longlong *param_1,longlong *param_2,short *param_3,longlong param_4,
               undefined1 param_5,undefined1 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  undefined2 *puVar17;
  longlong local_res18;
  undefined2 *local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  uint local_60;
  int local_5c;
  undefined2 *local_58;
  uint local_50;
  int local_4c;
  
  puVar8 = (undefined2 *)0x0;
  local_98 = (undefined2 *)0x0;
  local_90 = (ulonglong)(uint)local_90;
  local_4c = 0;
  local_50 = 0;
  if ((param_3 != (short *)0x0) && (local_4c = 0, local_50 = 0, *param_3 != 0)) {
    lVar14 = -1;
    do {
      lVar14 = lVar14 + 1;
    } while (param_3[lVar14] != 0);
    uVar12 = (int)lVar14 + 1;
    local_90 = (ulonglong)uVar12;
    local_4c = 0;
    local_50 = uVar12;
    if (0 < (int)uVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
      local_4c = local_90._4_4_;
      local_50 = (uint)local_90;
    }
    puVar8 = local_98;
    FGenericPlatformString::Memcpy(local_98,param_3,(longlong)(int)uVar12 * 2);
  }
  uVar15 = 0xffffffffffffffff;
  do {
    uVar7 = uVar15;
    uVar15 = uVar7 + 1;
  } while (*(short *)(param_4 + uVar15 * 2) != 0);
  if ((local_50 != 0) || (iVar16 = 2, (int)uVar7 == -2)) {
    iVar16 = 1;
  }
  local_58 = puVar8;
  if (local_4c < (int)(local_50 + iVar16 + (int)uVar15)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
  }
  FString::PathAppend(&local_58,param_4,uVar15 & 0xffffffff);
  local_78 = (longlong *)0x0;
  puVar8 = &DAT_143f3eda8;
  if (local_50 != 0) {
    puVar8 = local_58;
  }
  local_70 = 0;
  (**(code **)(*param_1 + 0x78))(param_1,&local_78,puVar8,param_5,param_6);
  iVar16 = 0;
  if (0 < (int)local_70) {
    local_res18 = 0;
    puVar8 = local_a8;
    uVar2 = local_a0;
    do {
      local_a0 = uVar2;
      local_a8 = puVar8;
      plVar10 = local_78;
      puVar9 = (undefined2 *)0x0;
      local_98 = (undefined2 *)0x0;
      iVar4 = 0;
      puVar8 = puVar9;
      if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
        lVar14 = -1;
        do {
          lVar1 = lVar14 + 1;
          lVar14 = lVar14 + 1;
        } while (param_3[lVar1] != 0);
        local_90._0_4_ = (int)lVar14 + 1;
        lVar14 = (longlong)(int)(uint)local_90;
        local_90._4_4_ = 0;
        puVar11 = puVar9;
        if (0 < (int)(uint)local_90) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
          puVar11 = (undefined2 *)(ulonglong)local_90._4_4_;
        }
        puVar8 = local_98;
        puVar9 = (undefined2 *)(ulonglong)(uint)local_90;
        iVar4 = (int)puVar11;
        FGenericPlatformString::Memcpy(local_98,param_3,lVar14 * 2);
      }
      iVar5 = *(int *)(local_res18 + 8 + (longlong)plVar10);
      iVar13 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar13 = 0;
      }
      iVar5 = (int)puVar9;
      if ((iVar5 != 0) || (iVar3 = 2, iVar13 == -1)) {
        iVar3 = 1;
      }
      local_98 = (undefined2 *)0x0;
      local_a0 = CONCAT44(iVar4,iVar5);
      local_90 = 0;
      local_a8 = puVar8;
      if (iVar4 < iVar13 + iVar5 + iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a8);
      }
      FString::PathAppend(&local_a8,*(undefined8 *)(local_res18 + (longlong)plVar10),iVar13);
      lVar14 = param_2[1];
      iVar4 = (int)lVar14 + 1;
      *(int *)(param_2 + 1) = iVar4;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2);
      }
      puVar6 = (ulonglong *)((longlong)(int)lVar14 * 0x10 + *param_2);
      *puVar6 = 0;
      *puVar6 = (ulonglong)local_a8;
      local_a8 = (undefined2 *)0x0;
      puVar8 = local_a8;
      *(int *)(puVar6 + 1) = (int)local_a0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = local_a0._4_4_;
      local_a0 = 0;
      uVar2 = local_a0;
      local_a0 = 0;
      local_a8 = (undefined2 *)0x0;
      local_res18 = local_res18 + 0x10;
      iVar16 = iVar16 + 1;
    } while (iVar16 < (int)local_70);
  }
  puVar9 = (undefined2 *)0x0;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  local_98 = (undefined2 *)0x0;
  puVar8 = (undefined2 *)0x0;
  local_90 = local_90 & 0xffffffff;
  puVar11 = (undefined2 *)0x0;
  puVar17 = puVar8;
  if ((param_3 != (short *)0x0) &&
     (puVar11 = puVar9, puVar17 = puVar9, puVar9 = (undefined2 *)0x0, *param_3 != 0)) {
    lVar14 = -1;
    do {
      lVar14 = lVar14 + 1;
    } while (param_3[lVar14] != 0);
    uVar12 = (int)lVar14 + 1;
    local_90 = (ulonglong)uVar12;
    local_60 = uVar12;
    if (0 < (int)uVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
      puVar8 = (undefined2 *)(local_90 >> 0x20);
      local_60 = (uint)local_90;
    }
    puVar9 = local_98;
    puVar11 = (undefined2 *)(ulonglong)local_60;
    iVar4 = (int)puVar8;
    FGenericPlatformString::Memcpy(local_98,param_3,(longlong)(int)uVar12 * 2);
    iVar16 = 2;
    puVar17 = puVar8;
    if (local_60 != 0) goto LAB_1415c2b1e;
  }
  iVar4 = (int)puVar17;
  local_60 = (uint)puVar11;
  iVar16 = 3;
LAB_1415c2b1e:
  local_68 = puVar9;
  local_5c = iVar4;
  if (iVar4 < (int)(local_60 + iVar16)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
  }
  FString::PathAppend(&local_68,&DAT_144ca3f14,1);
  puVar8 = &DAT_143f3eda8;
  if (local_60 != 0) {
    puVar8 = local_68;
  }
  (**(code **)(*param_1 + 0x78))(param_1,&local_88,puVar8,0,1);
  uVar7 = 0;
  uVar15 = uVar7;
  if (0 < (int)local_80) {
    do {
      plVar10 = local_88;
      puVar8 = (undefined2 *)0x0;
      local_98 = (undefined2 *)0x0;
      puVar9 = puVar8;
      iVar16 = 0;
      if ((param_3 != (short *)0x0) && (puVar9 = (undefined2 *)0x0, iVar16 = 0, *param_3 != 0)) {
        lVar14 = -1;
        do {
          lVar1 = lVar14 + 1;
          lVar14 = lVar14 + 1;
        } while (param_3[lVar1] != 0);
        local_90._0_4_ = (int)lVar14 + 1;
        lVar14 = (longlong)(int)(uint)local_90;
        local_90._4_4_ = 0;
        puVar11 = puVar8;
        if (0 < (int)(uint)local_90) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
          puVar11 = (undefined2 *)(ulonglong)local_90._4_4_;
        }
        puVar8 = local_98;
        puVar9 = (undefined2 *)(ulonglong)(uint)local_90;
        iVar16 = (int)puVar11;
        FGenericPlatformString::Memcpy(local_98,param_3,lVar14 * 2);
      }
      iVar13 = *(int *)((longlong)plVar10 + uVar15 + 8);
      iVar4 = iVar13 + -1;
      if (iVar13 == 0) {
        iVar4 = 0;
      }
      iVar13 = (int)puVar9;
      if ((iVar13 != 0) || (iVar5 = 2, iVar4 == -1)) {
        iVar5 = 1;
      }
      local_98 = (undefined2 *)0x0;
      local_a0 = CONCAT44(iVar16,iVar13);
      local_90 = 0;
      local_a8 = puVar8;
      if (iVar16 < iVar4 + iVar13 + iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a8);
      }
      FString::PathAppend(&local_a8,*(undefined8 *)((longlong)plVar10 + uVar15),iVar4);
      puVar8 = &DAT_143f3eda8;
      if ((int)local_a0 != 0) {
        puVar8 = local_a8;
      }
      FindFilesRecursiveInternal(param_1,param_2,puVar8,param_4,param_5,param_6);
      if (local_a8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      uVar12 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar12;
      uVar15 = uVar15 + 0x10;
    } while ((int)uVar12 < (int)local_80);
  }
  iVar16 = (int)local_80;
  plVar10 = local_88;
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
    iVar16 = (int)local_80;
    plVar10 = local_88;
  }
  for (; iVar16 != 0; iVar16 = iVar16 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  plVar10 = local_78;
  for (iVar16 = (int)local_70; iVar16 != 0; iVar16 = iVar16 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1415c2d50 FindPoolInfo body=81 status=ok
// SIG undefined FindPoolInfo(void)

longlong FMallocBinned2::Private::FindPoolInfo(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  
  uVar3 = param_2 >> ((byte)*(undefined8 *)(param_1 + 0x10) & 0x3f);
  puVar2 = (ulonglong *)
           (((ulonglong)(*(int *)(param_1 + 0x20) - 1) & uVar3 & 0xffffffff) * 0x20 +
           *(longlong *)(param_1 + 0x460));
  puVar1 = puVar2;
  do {
    if (*puVar1 == uVar3) {
      return (ulonglong)
             ((uint)(param_2 >> ((byte)*(undefined8 *)(param_1 + 8) & 0x3f)) &
             *(uint *)(param_1 + 0x18)) * 0x20 + puVar1[1];
    }
    puVar1 = (ulonglong *)puVar1[3];
  } while (puVar1 != puVar2);
  return 0;
}



// FUNCTION 1415c2db0 FUN_1415c2db0 body=102 status=ok
// SIG undefined FUN_1415c2db0(void)

void FUN_1415c2db0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  
  if (param_1[0x15] != 0) {
    cVar2 = (**(code **)(*param_1 + 0x200))(param_1,param_1 + 0x17);
    if ((cVar2 == '\0') &&
       (*(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x80, (char)param_1[0x217] == '\0')) {
      *(undefined1 *)(param_1 + 0x217) = 0;
    }
    param_1[0x15] = 0;
  }
  plVar1 = (longlong *)param_1[0x16];
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001415c2e0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,0);
    return;
  }
  return;
}



// FUNCTION 1415c2e20 FlushCurrentThreadCache body=254 status=ok
// SIG undefined FlushCurrentThreadCache(void)

void FMallocBinned2::FlushCurrentThreadCache(longlong param_1)

{
  longlong lVar1;
  BOOL BVar2;
  LPVOID pvVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if ((DAT_1468b1f84 != 0) && (pvVar3 = TlsGetValue(DAT_1468b1f84), pvVar3 != (LPVOID)0x0)) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x880));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x880));
    }
    uVar7 = 0;
    do {
      plVar4 = (longlong *)(uVar7 * 0x20 + (longlong)pvVar3);
      lVar1 = *plVar4;
      if (lVar1 != 0) {
        *plVar4 = 0;
        *(undefined4 *)(plVar4 + 1) = 0;
        *(undefined8 *)(lVar1 + 8) = 0;
      }
      lVar5 = plVar4[2];
      if (lVar5 != 0) {
        plVar4[2] = 0;
        *(undefined4 *)(plVar4 + 3) = 0;
        *(undefined8 *)(lVar5 + 8) = 0;
      }
      if (lVar1 != 0) {
        *(longlong *)(lVar1 + 8) = lVar5;
        lVar5 = lVar1;
      }
      if (lVar5 != 0) {
        FUN_1415c3770(param_1,lVar5,
                      *(undefined2 *)(&DAT_1468b1f90 + (ulonglong)(0x2c - (int)uVar7) * 2),uVar7);
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 != 0x2d);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x880));
  }
  return;
}



// FUNCTION 1415c2f20 FUN_1415c2f20 body=1136 status=ok
// SIG undefined FUN_1415c2f20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415c2f20(longlong param_1,undefined8 *param_2,wint_t *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  wint_t wVar5;
  wint_t wVar6;
  BOOL BVar7;
  int iVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  wint_t *pwVar15;
  uint *puVar16;
  wint_t *pwVar17;
  undefined8 *puVar18;
  short *psVar19;
  int local_res20;
  undefined8 local_d8;
  uint *puStack_d0;
  undefined4 local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  uint *local_88;
  uint uStack_80;
  int iStack_7c;
  int local_78;
  undefined4 uStack_74;
  longlong *local_70;
  undefined8 uStack_68;
  uint *puStack_60;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  
  local_b0 = (longlong *)0x0;
  local_a8 = 0;
  local_d8 = 0;
  lVar13 = -1;
  puStack_d0 = (uint *)0x0;
  if ((param_3 != (wint_t *)0x0) && (lVar11 = lVar13, *param_3 != 0)) {
    do {
      lVar11 = lVar11 + 1;
    } while (param_3[lVar11] != 0);
    uVar10 = (int)lVar11 + 1;
    puStack_d0 = (uint *)(ulonglong)uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    }
    FGenericPlatformString::Memcpy(local_d8,param_3,(longlong)(int)uVar10 * 2);
  }
  FUN_141594550(&local_d8,&local_b0);
  if (local_d8 != 0) {
    FMemory::Free();
  }
  do {
    lVar13 = lVar13 + 1;
  } while (param_3[lVar13] != 0);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xd0);
  local_b8 = lVar13;
  BVar7 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar7 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  local_98 = (longlong *)(param_1 + 8);
  local_d8 = 0x100000000;
  iVar14 = *(int *)(param_1 + 0x30);
  puStack_d0 = (uint *)(param_1 + 0x18);
  iStack_c4 = 0;
  iStack_c0 = 0;
  if (iVar14 != 0) {
    puVar16 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar16 = puStack_d0;
    }
    uVar10 = *puVar16;
    iStack_c0 = 0;
    iVar8 = 0;
    while (uVar10 == 0) {
      iStack_c0 = iStack_c0 + 0x20;
      uVar4 = (ulonglong)local_d8 >> 0x20;
      local_d8 = CONCAT44((int)uVar4,iVar8 + 1);
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_1415c30af;
      uVar10 = puVar16[(longlong)iVar8 + 1];
      iVar8 = iVar8 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    iVar8 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    local_d8 = CONCAT44(uVar10,(undefined4)local_d8);
    if (uVar10 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    iStack_c4 = (iStack_c0 - iVar8) + 0x1f;
    if (iVar14 < iStack_c4) {
LAB_1415c30af:
      iStack_c4 = iVar14;
    }
  }
  local_c8 = 0xffffffff;
  uStack_58 = 0xffffffff;
  iStack_54 = iStack_c4;
  iStack_50 = iStack_c0;
  uStack_4c = uStack_bc;
  uStack_68 = local_d8;
  uStack_80 = 0xffffffff;
  iStack_7c = iStack_c4;
  uStack_90 = local_d8;
  local_78 = iStack_c0;
  uStack_74 = uStack_bc;
  local_88 = puStack_d0;
  local_70 = local_98;
  puStack_60 = puStack_d0;
  if (iStack_c4 < iVar14) {
    do {
      puVar18 = (undefined8 *)(*local_98 + (longlong)iStack_7c * 0x20);
      local_d8 = puVar18[2];
      if ((int)lVar13 == 1) {
        iVar14 = *(int *)(puVar18 + 1);
        if (iVar14 == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar18;
        }
        if (*param_3 != 0) {
          pwVar17 = param_3;
          do {
            wVar5 = towlower(*(wint_t *)(((longlong)puVar9 - (longlong)param_3) + (longlong)pwVar17)
                            );
            wVar6 = towlower(*pwVar17);
            lVar13 = local_b8;
            if (wVar5 != wVar6) goto LAB_1415c32fa;
            pwVar17 = pwVar17 + 1;
          } while (*pwVar17 != 0);
          iVar14 = *(int *)(puVar18 + 1);
        }
        if (iVar14 == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar18;
        }
        if (*(int *)(param_2 + 1) == 0) {
          (**(code **)(_DAT_00000000 + 0x38))(0,puVar9,local_d8);
          lVar13 = local_b8;
        }
        else {
          (**(code **)(*(longlong *)*param_2 + 0x38))();
          lVar13 = local_b8;
        }
      }
      else {
        local_res20 = 0;
        if (0 < (int)local_a8) {
          local_a0 = 0;
          bVar3 = true;
          do {
            if (*(int *)((longlong)local_b0 + local_a0 + 8) == 0) {
              pwVar17 = &DAT_143f3eda8;
            }
            else {
              pwVar17 = *(wint_t **)((longlong)local_b0 + local_a0);
            }
            if ((*(int *)(puVar18 + 1) != 0) && (psVar19 = (short *)*puVar18, *psVar19 != 0)) {
              lVar13 = (longlong)psVar19 - (longlong)pwVar17;
              pwVar15 = pwVar17;
LAB_1415c3214:
              do {
                if (*pwVar15 == 0) {
LAB_1415c32ac:
                  bVar1 = true;
                  goto LAB_1415c326a;
                }
                wVar5 = towlower(*(wint_t *)(lVar13 + (longlong)pwVar15));
                wVar6 = towlower(*pwVar15);
                if (wVar5 == wVar6) {
                  pwVar15 = pwVar15 + 1;
                  if (*(short *)(lVar13 + (longlong)pwVar15) != 0) goto LAB_1415c3214;
                  if (*pwVar15 == 0) goto LAB_1415c32ac;
                }
                psVar19 = psVar19 + 1;
                lVar13 = lVar13 + 2;
                pwVar15 = pwVar17;
              } while (*psVar19 != 0);
            }
            bVar1 = false;
LAB_1415c326a:
            bVar2 = false;
            if (bVar1) {
              bVar2 = bVar3;
            }
            local_res20 = local_res20 + 1;
            local_a0 = local_a0 + 0x10;
            bVar3 = bVar2;
          } while (local_res20 < (int)local_a8);
          lVar13 = local_b8;
          if ((bVar2) && (0 < (int)local_a8)) {
            if (*(int *)(puVar18 + 1) == 0) {
              puVar9 = &DAT_143f3eda8;
            }
            else {
              puVar9 = (undefined2 *)*puVar18;
            }
            if (*(int *)(param_2 + 1) == 0) {
              (**(code **)(_DAT_00000000 + 0x38))(0,puVar9,local_d8);
              lVar13 = local_b8;
            }
            else {
              (**(code **)(*(longlong *)*param_2 + 0x38))((longlong *)*param_2,puVar9,local_d8);
              lVar13 = local_b8;
            }
          }
        }
      }
LAB_1415c32fa:
      uStack_80 = uStack_80 & ~uStack_90._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
    } while (iStack_7c < (int)local_88[6]);
  }
  LeaveCriticalSection(lpCriticalSection);
  plVar12 = local_b0;
  for (iVar14 = (int)local_a8; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_b0 != (longlong *)0x0) {
    FMemory::Free(local_b0);
  }
  return;
}



// FUNCTION 1415c3390 FUN_1415c3390 body=545 status=ok
// SIG undefined FUN_1415c3390(void)

void FUN_1415c3390(longlong param_1,undefined8 *param_2,wint_t *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  wint_t wVar4;
  wint_t wVar5;
  BOOL BVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  wint_t *pwVar13;
  uint *puVar14;
  undefined8 *puVar15;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  int local_58;
  undefined4 uStack_54;
  longlong *local_50;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xd0);
  BVar6 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar6 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  plVar12 = (longlong *)(param_1 + 8);
  local_78 = 0;
  uStack_74 = 1;
  iVar7 = *(int *)(param_1 + 0x30);
  puStack_40 = (uint *)(param_1 + 0x18);
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar7 != 0) {
    puVar14 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar14 = puStack_40;
    }
    uVar1 = *puVar14;
    uStack_60 = 0;
    local_78 = 0;
    while (uVar1 == 0) {
      lVar10 = (longlong)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar8 = local_78 + 1;
      bVar3 = (int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar8;
      if (bVar3) goto LAB_1415c346f;
      uVar1 = puVar14[lVar10 + 1];
    }
    uStack_74 = -uVar1 & uVar1;
    iVar8 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    local_68._4_4_ = (uStack_60 - iVar8) + 0x1f;
    if (iVar7 < local_68._4_4_) {
LAB_1415c346f:
      local_68._4_4_ = iVar7;
    }
  }
  uStack_38 = 0xffffffff;
  iStack_34 = local_68._4_4_;
  iStack_30 = uStack_60;
  uStack_2c = iStack_5c;
  iStack_48 = local_78;
  uStack_44 = uStack_74;
  iStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58 = uStack_60;
  uStack_54 = iStack_5c;
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  bVar3 = local_68._4_4_ < iVar7;
  local_50 = plVar12;
  local_68 = puStack_40;
  if (bVar3) {
    do {
      puVar15 = (undefined8 *)((longlong)iStack_5c * 0x20 + *plVar12);
      uVar2 = puVar15[2];
      iVar7 = *(int *)(puVar15 + 1);
      if (iVar7 == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*puVar15;
      }
      if (*param_3 != 0) {
        pwVar13 = param_3;
        do {
          wVar4 = towlower(*(wint_t *)(((longlong)puVar11 - (longlong)param_3) + (longlong)pwVar13))
          ;
          wVar5 = towlower(*pwVar13);
          if (wVar4 != wVar5) goto LAB_1415c3563;
          pwVar13 = pwVar13 + 1;
        } while (*pwVar13 != 0);
        iVar7 = *(int *)(puVar15 + 1);
      }
      if (iVar7 == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*puVar15;
      }
      if (*(int *)(param_2 + 1) == 0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = (longlong *)*param_2;
      }
      (**(code **)(*plVar9 + 0x38))(plVar9,puVar11,uVar2);
LAB_1415c3563:
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    } while (iStack_5c < (int)local_68[6]);
  }
                    /* WARNING: Could not recover jumptable at 0x0001415c35aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1415c35c0 FUN_1415c35c0 body=247 status=ok
// SIG undefined FUN_1415c35c0(void)

void FUN_1415c35c0(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (0x1000000 < param_3) {
    FUN_14169c490(param_2,param_3);
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x80);
  while (uVar2 != 0) {
    if ((uVar2 < 0x40) && (param_3 + *(uint *)((longlong)param_1 + 0x404) < 0x4000001)) break;
    uVar3 = param_1[1];
    uVar4 = *param_1;
    *(uint *)((longlong)param_1 + 0x404) = *(uint *)((longlong)param_1 + 0x404) - (int)uVar3;
    piVar1 = (int *)(param_1 + 0x80);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      _guard_xfg_dispatch_icall_nop(param_1,param_1 + 2,(ulonglong)*(uint *)(param_1 + 0x80) << 4);
    }
    FUN_14169c490(uVar4,uVar3);
    uVar2 = *(uint *)(param_1 + 0x80);
  }
  param_1[(ulonglong)uVar2 * 2] = param_2;
  param_1[(ulonglong)*(uint *)(param_1 + 0x80) * 2 + 1] = param_3;
  *(int *)((longlong)param_1 + 0x404) = *(int *)((longlong)param_1 + 0x404) + (int)param_3;
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  return;
}



// FUNCTION 1415c36c0 FUN_1415c36c0 body=171 status=ok
// SIG undefined FUN_1415c36c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415c36c0(undefined8 param_1,undefined8 *param_2)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  
  LOCK();
  _DAT_1468b504c = _DAT_1468b504c + 1;
  UNLOCK();
  if (((short)param_2 != 0) && (DAT_1468b1f84 != 0)) {
    pvVar1 = TlsGetValue(DAT_1468b1f84);
    if ((pvVar1 != (LPVOID)0x0) &&
       (puVar3 = (ushort *)((ulonglong)param_2 & 0xffffffffffff0000),
       *(char *)((longlong)puVar3 + 3) == -0x1d)) {
      puVar2 = (undefined8 *)((ulonglong)(byte)puVar3[1] * 0x20 + (longlong)pvVar1);
      if ((0x3f < *(uint *)(puVar2 + 1)) || (0xffff < (uint)*puVar3 * *(uint *)(puVar2 + 1))) {
        if (puVar2[2] != 0) goto LAB_1415c3756;
        puVar2[2] = *puVar2;
        puVar2[3] = puVar2[1];
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 1) = 0;
      }
      *param_2 = *puVar2;
      param_2[1] = 0;
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      *puVar2 = param_2;
      return;
    }
  }
LAB_1415c3756:
  FUN_1415c3ac0(param_1,param_2);
  return;
}



// FUNCTION 1415c3770 FUN_1415c3770 body=842 status=ok
// SIG undefined FUN_1415c3770(void)

void FUN_1415c3770(longlong param_1,longlong *param_2,undefined2 param_3,uint param_4)

{
  longlong *plVar1;
  undefined8 *_Dst;
  int *piVar2;
  longlong *plVar3;
  short sVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong *puVar10;
  longlong lVar11;
  ulonglong *puVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  short *psVar15;
  
  if (param_2 != (longlong *)0x0) {
    plVar3 = (longlong *)(param_1 + 0x28 + (ulonglong)param_4 * 0x18);
    do {
      plVar6 = (longlong *)param_2[1];
      do {
        plVar7 = (longlong *)*param_2;
        uVar14 = (ulonglong)param_2 >> ((byte)*(undefined8 *)(param_1 + 0x10) & 0x3f);
        puVar12 = (ulonglong *)
                  (((ulonglong)(*(int *)(param_1 + 0x20) - 1) & uVar14 & 0xffffffff) * 0x20 +
                  *(longlong *)(param_1 + 0x460));
        puVar10 = puVar12;
        do {
          if (*puVar10 == uVar14) {
            psVar15 = (short *)((ulonglong)
                                ((uint)((ulonglong)param_2 >>
                                       ((byte)*(undefined8 *)(param_1 + 8) & 0x3f)) &
                                *(uint *)(param_1 + 0x18)) * 0x20 + puVar10[1]);
            if (psVar15 == (short *)0x0) goto LAB_1415c3823;
            goto LAB_1415c3863;
          }
          puVar10 = (ulonglong *)puVar10[3];
        } while (puVar10 != puVar12);
        psVar15 = (short *)0x0;
LAB_1415c3823:
        LowLevelFatalErrorHandler
                  ("Unknown",0x1e1,L"FMallocBinned2 Attempt to free an unrecognized small block %p",
                   param_2);
        FDebug::AssertFailed
                  (&DAT_143f3f584,"Unknown",0x1e1,
                   L"FMallocBinned2 Attempt to free an unrecognized small block %p",param_2);
LAB_1415c3863:
        if (psVar15[1] != -0xce9) {
          LowLevelFatalErrorHandler
                    ("Unknown",0x8a,L"MallocBinned2 Corruption Canary was 0x%x, should be 0x%x",
                     psVar15[1],0xf317);
          FDebug::AssertFailed
                    (&DAT_143f3f584,"Unknown",0x8a,
                     L"MallocBinned2 Corruption Canary was 0x%x, should be 0x%x",psVar15[1],0xf317);
        }
        if (*(longlong *)(psVar15 + 4) == 0) {
          plVar1 = (longlong *)(psVar15 + 8);
          lVar11 = 0;
          if (*(longlong *)(psVar15 + 8) != 0) {
            *(undefined8 *)(*(longlong *)(psVar15 + 8) + 0x18) = *(undefined8 *)(psVar15 + 0xc);
            lVar11 = *plVar1;
          }
          **(longlong **)(psVar15 + 0xc) = lVar11;
          lVar11 = 0;
          if (*plVar3 != 0) {
            *(longlong **)(*plVar3 + 0x18) = plVar1;
            lVar11 = *plVar3;
          }
          *plVar1 = lVar11;
          *(longlong **)(psVar15 + 0xc) = plVar3;
          *plVar3 = (longlong)psVar15;
        }
        *(undefined4 *)((longlong)param_2 + 4) = 1;
        param_2[1] = *(longlong *)(psVar15 + 4);
        *(undefined2 *)param_2 = param_3;
        *(undefined1 *)((longlong)param_2 + 3) = 0xe3;
        *(char *)((longlong)param_2 + 2) = (char)param_4;
        *psVar15 = *psVar15 + -1;
        *(longlong **)(psVar15 + 4) = param_2;
        if (*psVar15 == 0) {
          sVar4 = psVar15[1];
          if ((sVar4 != 0x17ea) && (sVar4 != -0xce9)) {
            LowLevelFatalErrorHandler
                      ("Unknown",0x99,
                       L"MallocBinned2 Corruption Canary was 0x%x, will be 0x%x because this block should be preexisting and in use."
                       ,sVar4,0x3941);
            FDebug::AssertFailed
                      (&DAT_143f3f584,"Unknown",0x99,
                       L"MallocBinned2 Corruption Canary was 0x%x, will be 0x%x because this block should be preexisting and in use."
                       ,psVar15[1],0x3941);
          }
          psVar15[1] = 0x3941;
          uVar13 = 0;
          if (*(longlong *)(psVar15 + 8) != 0) {
            *(undefined8 *)(*(longlong *)(psVar15 + 8) + 0x18) = *(undefined8 *)(psVar15 + 0xc);
            uVar13 = *(undefined8 *)(psVar15 + 8);
          }
          _Dst = (undefined8 *)(param_1 + 0x478);
          **(undefined8 **)(psVar15 + 0xc) = uVar13;
          uVar9 = DAT_1468b1ff8;
          uVar14 = (ulonglong)DAT_1468b1ff8;
          if (uVar14 < 0x1000001) {
            uVar5 = *(uint *)(param_1 + 0x878);
            while (uVar5 != 0) {
              if ((uVar5 < 0x40) && (*(uint *)(param_1 + 0x87c) + uVar14 < 0x4000001)) break;
              uVar13 = *(undefined8 *)(param_1 + 0x480);
              uVar8 = *_Dst;
              *(uint *)(param_1 + 0x87c) = *(uint *)(param_1 + 0x87c) - (int)uVar13;
              piVar2 = (int *)(param_1 + 0x878);
              *piVar2 = *piVar2 + -1;
              if (*piVar2 != 0) {
                _guard_xfg_dispatch_icall_nop
                          (_Dst,(void *)(param_1 + 0x488),(ulonglong)*(uint *)(param_1 + 0x878) << 4
                          );
              }
              FUN_14169c490(uVar8,uVar13);
              uVar5 = *(uint *)(param_1 + 0x878);
            }
            _Dst[(ulonglong)uVar5 * 2] = (ulonglong)param_2 & 0xffffffffffff0000;
            *(ulonglong *)(param_1 + 0x480 + (ulonglong)*(uint *)(param_1 + 0x878) * 0x10) = uVar14;
            *(int *)(param_1 + 0x87c) = *(int *)(param_1 + 0x87c) + uVar9;
            *(int *)(param_1 + 0x878) = *(int *)(param_1 + 0x878) + 1;
          }
          else {
            FUN_14169c490((ulonglong)param_2 & 0xffffffffffff0000,uVar14);
          }
        }
        param_2 = plVar7;
      } while (plVar7 != (longlong *)0x0);
      param_2 = plVar6;
    } while (plVar6 != (longlong *)0x0);
  }
  return;
}



// FUNCTION 1415c3ac0 FUN_1415c3ac0 body=656 status=ok
// SIG undefined FUN_1415c3ac0(void)

void FUN_1415c3ac0(longlong param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  ushort uVar3;
  BOOL BVar4;
  LPVOID pvVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  ulonglong *puVar8;
  uint uVar9;
  ulonglong uVar10;
  ushort *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  
  if ((short)param_2 == 0) {
    if (param_2 == (undefined8 *)0x0) {
      return;
    }
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x880));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x880));
    }
    uVar10 = (ulonglong)param_2 >> ((byte)*(undefined8 *)(param_1 + 0x10) & 0x3f);
    puVar8 = (ulonglong *)
             (((ulonglong)(*(int *)(param_1 + 0x20) - 1) & uVar10 & 0xffffffff) * 0x20 +
             *(longlong *)(param_1 + 0x460));
    puVar6 = puVar8;
    do {
      if (*puVar6 == uVar10) {
        lVar13 = (ulonglong)
                 ((uint)((ulonglong)param_2 >> ((byte)*(undefined8 *)(param_1 + 8) & 0x3f)) &
                 *(uint *)(param_1 + 0x18)) * 0x20 + puVar6[1];
        if (lVar13 == 0) goto LAB_1415c3cc2;
        goto LAB_1415c3d02;
      }
      puVar6 = (ulonglong *)puVar6[3];
    } while (puVar6 != puVar8);
    lVar13 = 0;
LAB_1415c3cc2:
    LowLevelFatalErrorHandler
              ("Unknown",0x397,L"FMallocBinned2 Attempt to free an unrecognized block %p",param_2);
    FDebug::AssertFailed
              (&DAT_144ca111f,"Unknown",0x397,
               L"FMallocBinned2 Attempt to free an unrecognized block %p",param_2);
LAB_1415c3d02:
    FUN_1415c0090(lVar13,0x17ea);
    uVar2 = *(undefined8 *)(lVar13 + 8);
    FUN_1415c8af0(lVar13,0x3941,1,0);
    FUN_1415c35c0(param_1 + 0x478,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001415c3d49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x880));
    return;
  }
  puVar11 = (ushort *)((ulonglong)param_2 & 0xffffffffffff0000);
  if (*(char *)((longlong)puVar11 + 3) != -0x1d) {
    FUN_1415c0020(puVar11);
  }
  uVar1 = *puVar11;
  uVar3 = puVar11[1];
  if ((DAT_1468b1f84 == 0) || (pvVar5 = TlsGetValue(DAT_1468b1f84), pvVar5 == (LPVOID)0x0)) {
    *param_2 = 0;
    puVar12 = param_2;
  }
  else {
    uVar10 = (ulonglong)(byte)puVar11[1];
    puVar12 = (undefined8 *)0x0;
    lVar13 = *(longlong *)((longlong)pvVar5 + uVar10 * 0x20 + 0x10);
    if (lVar13 != 0) {
      *(undefined4 *)(lVar13 + 8) = *(undefined4 *)((longlong)pvVar5 + uVar10 * 0x20 + 0x18);
      lVar13 = *(longlong *)((longlong)pvVar5 + uVar10 * 0x20 + 0x10);
      plVar14 = &DAT_1468b3900 + uVar10 * 0x10;
      puVar7 = puVar12;
      do {
        if (*plVar14 == 0) {
          LOCK();
          bVar15 = (&DAT_1468b3900)[(longlong)(puVar7 + uVar10 * 2)] == 0;
          if (bVar15) {
            (&DAT_1468b3900)[(longlong)(puVar7 + uVar10 * 2)] = lVar13;
          }
          UNLOCK();
          if (bVar15) goto LAB_1415c3b9f;
        }
        uVar9 = (int)puVar7 + 1;
        puVar7 = (undefined8 *)(ulonglong)uVar9;
        plVar14 = plVar14 + 1;
      } while (uVar9 < 8);
      puVar12 = *(undefined8 **)((longlong)pvVar5 + uVar10 * 0x20 + 0x10);
      puVar12[1] = 0;
LAB_1415c3b9f:
      *(undefined8 *)((longlong)pvVar5 + uVar10 * 0x20 + 0x10) = 0;
      *(undefined4 *)((longlong)pvVar5 + uVar10 * 0x20 + 0x18) = 0;
    }
    puVar7 = (undefined8 *)((ulonglong)(byte)uVar3 * 0x20 + (longlong)pvVar5);
    if ((0x3f < *(uint *)(puVar7 + 1)) || (0xffff < *(uint *)(puVar7 + 1) * (uint)uVar1)) {
      if (puVar7[2] != 0) goto LAB_1415c3bf6;
      *(undefined4 *)(puVar7 + 2) = *(undefined4 *)puVar7;
      *(undefined4 *)((longlong)puVar7 + 0x14) = *(undefined4 *)((longlong)puVar7 + 4);
      *(undefined4 *)(puVar7 + 3) = *(undefined4 *)(puVar7 + 1);
      *(undefined4 *)((longlong)puVar7 + 0x1c) = *(undefined4 *)((longlong)puVar7 + 0xc);
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
    }
    *param_2 = *puVar7;
    param_2[1] = 0;
    *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
    *puVar7 = param_2;
  }
LAB_1415c3bf6:
  if (puVar12 != (undefined8 *)0x0) {
    puVar12[1] = 0;
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x880));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x880));
    }
    FUN_1415c3770(param_1,puVar12,uVar1,(ulonglong)(byte)uVar3);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x880));
  }
  return;
}



// FUNCTION 1415c3d50 FUN_1415c3d50 body=166 status=ok
// SIG undefined FUN_1415c3d50(void)

longlong * FUN_1415c3d50(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b4f88) {
    _Init_thread_header(&DAT_1468b4f88);
    if (DAT_1468b4f88 == -1) {
      atexit((_func_5014 *)&LAB_143e763f0);
      _Init_thread_footer(&DAT_1468b4f88);
    }
  }
  plVar3 = DAT_1468b4f80;
  if (DAT_1468b4f80 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(8);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_StartProfileThreadUsage_144cad850;
    }
    plVar2 = DAT_1468b4f80;
    if (DAT_1468b4f80 != (longlong *)0x0) {
      lVar1 = *DAT_1468b4f80;
      DAT_1468b4f80 = plVar3;
      (**(code **)(lVar1 + 0x108))(plVar2,1);
      plVar3 = DAT_1468b4f80;
    }
  }
  DAT_1468b4f80 = plVar3;
  return plVar3;
}



// FUNCTION 1415c3e00 GetAccessTimeStamp body=62 status=ok
// SIG undefined GetAccessTimeStamp(void)

undefined8
FFileManagerGeneric::GetAccessTimeStamp(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FPlatformFileManager::Get();
  plVar2 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
  (**(code **)(*plVar2 + 0xa8))(plVar2,param_2,param_3);
  return param_2;
}



// FUNCTION 1415c3e70 FUN_1415c3e70 body=340 status=ok
// SIG undefined FUN_1415c3e70(void)

undefined8 FUN_1415c3e70(longlong param_1,ulonglong param_2,ulonglong *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  ushort *puVar6;
  
  if ((param_2 & 0xffff) != 0) {
    puVar6 = (ushort *)(param_2 & 0xffffffffffff0000);
    if (*(char *)((longlong)puVar6 + 3) != -0x1d) {
      FUN_1415c0020(puVar6);
    }
    *param_3 = (ulonglong)*puVar6;
    return 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x880);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar4 = param_2 >> ((byte)*(undefined8 *)(param_1 + 0x10) & 0x3f);
  puVar3 = (ulonglong *)
           (((ulonglong)(*(int *)(param_1 + 0x20) - 1) & uVar4 & 0xffffffff) * 0x20 +
           *(longlong *)(param_1 + 0x460));
  puVar2 = puVar3;
  do {
    if (*puVar2 == uVar4) {
      lVar5 = (ulonglong)
              ((uint)(param_2 >> ((byte)*(undefined8 *)(param_1 + 8) & 0x3f)) &
              *(uint *)(param_1 + 0x18)) * 0x20 + puVar2[1];
      if (lVar5 == 0) goto LAB_1415c3f4f;
      goto LAB_1415c3f8f;
    }
    puVar2 = (ulonglong *)puVar2[3];
  } while (puVar2 != puVar3);
  lVar5 = 0;
LAB_1415c3f4f:
  LowLevelFatalErrorHandler
            ("Unknown",0x3bb,
             L"FMallocBinned2 Attempt to GetAllocationSizeExternal an unrecognized block %p",param_2
            );
  FDebug::AssertFailed
            (&DAT_144ca113a,"Unknown",0x3bb,
             L"FMallocBinned2 Attempt to GetAllocationSizeExternal an unrecognized block %p",param_2
            );
LAB_1415c3f8f:
  FUN_1415c0090(lVar5,0x17ea);
  *param_3 = *(ulonglong *)(lVar5 + 8);
  LeaveCriticalSection(lpCriticalSection);
  return 1;
}



// FUNCTION 1415c4050 FUN_1415c4050 body=33 status=ok
// SIG undefined FUN_1415c4050(void)

undefined8 FUN_1415c4050(longlong param_1,undefined8 param_2)

{
  FString::FString(param_2,param_1 + 0x90);
  return param_2;
}



// FUNCTION 1415c4080 GetArchiveName body=62 status=ok
// SIG undefined GetArchiveName(void)

undefined8 * FArchiveFileWriterDummy::GetArchiveName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FArchiveFileWriterDummy",0x30);
  return param_2;
}



// FUNCTION 1415c40c0 GetConsoleHistory body=402 status=ok
// SIG undefined GetConsoleHistory(void)

void FConsoleManager::GetConsoleHistory(longlong param_1,short *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 *puVar6;
  int local_res8 [2];
  longlong *local_res10;
  longlong local_38;
  ulonglong local_30;
  
  FUN_1415c50a0();
  local_30 = 0;
  local_38 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (param_2[lVar3] != 0);
    uVar2 = (int)lVar3 + 1;
    local_30 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar2 * 2);
  }
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x60,local_res8,&local_38);
  if ((local_res8[0] == -1) ||
     (lVar3 = *(longlong *)(param_1 + 0x60) + (longlong)local_res8[0] * 0x28, lVar3 == 0)) {
    local_res10 = &local_38;
    TSet<TTuple<FString,TArray<FString,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FString_&&>_>(param_1 + 0x60,local_res8,&local_res10,0);
    lVar3 = *(longlong *)(param_1 + 0x60) + (longlong)local_res8[0] * 0x28;
  }
  if (param_3 != (undefined8 *)(lVar3 + 0x10)) {
    plVar4 = (longlong *)*param_3;
    for (iVar5 = *(int *)(param_3 + 1); iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    iVar5 = *(int *)(lVar3 + 0x18);
    puVar6 = *(undefined8 **)(lVar3 + 0x10);
    *(int *)(param_3 + 1) = iVar5;
    if ((iVar5 == 0) && (*(int *)((longlong)param_3 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(param_3,iVar5);
      param_3 = (undefined8 *)*param_3;
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        *param_3 = 0;
        iVar1 = *(int *)(puVar6 + 1);
        _Src = (void *)*puVar6;
        *(int *)(param_3 + 1) = iVar1;
        if (iVar1 == 0) {
          *(undefined4 *)((longlong)param_3 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_3,iVar1,0);
          ::_guard_xfg_dispatch_icall_nop((void *)*param_3,_Src,(longlong)iVar1 * 2);
        }
        param_3 = param_3 + 2;
        puVar6 = puVar6 + 2;
      }
    }
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1415c4260 GetCrashType body=7 status=ok
// SIG undefined GetCrashType(void)

undefined4 GetCrashType(void)

{
  return DAT_1468b2808;
}



// FUNCTION 1415c4280 GetFileAgeSeconds body=131 status=ok
// SIG undefined GetFileAgeSeconds(void)

double FFileManagerGeneric::GetFileAgeSeconds(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  uVar2 = FPlatformFileManager::Get();
  plVar3 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar2);
  cVar1 = (**(code **)(*plVar3 + 0x68))(plVar3,param_2);
  if (cVar1 == '\0') {
    return -1.0;
  }
  plVar3 = (longlong *)(**(code **)(*param_1 + 0xb0))(param_1,local_res18,param_2);
  plVar4 = (longlong *)FDateTime::UtcNow(local_res20);
  return (double)(*plVar4 - *plVar3) * 1e-07;
}



// FUNCTION 1415c4310 FUN_1415c4310 body=62 status=ok
// SIG undefined FUN_1415c4310(void)

undefined8 FUN_1415c4310(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FPlatformFileManager::Get();
  plVar2 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,param_2,param_3);
  return param_2;
}



// FUNCTION 1415c4350 FUN_1415c4350 body=76 status=ok
// SIG undefined FUN_1415c4350(void)

void FUN_1415c4350(void)

{
  char cVar1;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  return;
}



// FUNCTION 1415c43a0 FUN_1415c43a0 body=73 status=ok
// SIG undefined FUN_1415c43a0(void)

undefined4 FUN_1415c43a0(longlong param_1)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    lVar3 = 0x3c;
    if (DVar2 != DAT_1468c21c0) goto LAB_1415c43de;
  }
  lVar3 = 0x38;
LAB_1415c43de:
  return *(undefined4 *)(lVar3 + param_1);
}



// FUNCTION 1415c43f0 FUN_1415c43f0 body=112 status=ok
// SIG undefined FUN_1415c43f0(void)

float FUN_1415c43f0(longlong param_1)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  double dVar4;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    lVar3 = 0x48;
    if (DVar2 != DAT_1468c21c0) goto LAB_1415c442e;
  }
  lVar3 = 0x38;
LAB_1415c442e:
  if (*(int *)(param_1 + 8 + lVar3) != 0) {
    dVar4 = _wtof(*(wchar_t **)(param_1 + lVar3));
    return (float)dVar4;
  }
  dVar4 = _wtof(L"");
  return (float)dVar4;
}



// FUNCTION 1415c4470 FUN_1415c4470 body=6 status=ok
// SIG undefined FUN_1415c4470(void)

undefined4 FUN_1415c4470(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// FUNCTION 1415c4490 GetFloat body=22 status=ok
// SIG undefined GetFloat(void)

void FConsoleVariableBitRef::GetFloat(longlong *param_1)

{
  (**(code **)(*param_1 + 0x68))();
  return;
}



// FUNCTION 1415c44b0 FUN_1415c44b0 body=138 status=ok
// SIG undefined FUN_1415c44b0(void)

undefined * FUN_1415c44b0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b4fb8) {
    _Init_thread_header(&DAT_1468b4fb8);
    if (DAT_1468b4fb8 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1468b4f90);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1468b4f90,4000);
      atexit((_func_5014 *)&LAB_143e78120);
      _Init_thread_footer(&DAT_1468b4fb8);
      return &DAT_1468b4f90;
    }
  }
  return &DAT_1468b4f90;
}



// FUNCTION 1415c4560 FUN_1415c4560 body=71 status=ok
// SIG undefined FUN_1415c4560(void)

undefined4 FUN_1415c4560(longlong param_1)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    lVar3 = 0x3c;
    if (DVar2 != DAT_1468c21c0) goto LAB_1415c459e;
  }
  lVar3 = 0x38;
LAB_1415c459e:
  return *(undefined4 *)(lVar3 + param_1);
}



// FUNCTION 1415c45b0 FUN_1415c45b0 body=73 status=ok
// SIG undefined FUN_1415c45b0(void)

int FUN_1415c45b0(longlong param_1)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    lVar3 = 0x3c;
    if (DVar2 != DAT_1468c21c0) goto LAB_1415c45ee;
  }
  lVar3 = 0x38;
LAB_1415c45ee:
  return (int)*(float *)(lVar3 + param_1);
}



// FUNCTION 1415c4600 FUN_1415c4600 body=104 status=ok
// SIG undefined FUN_1415c4600(void)

void FUN_1415c4600(longlong param_1)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    lVar3 = 0x48;
    if (DVar2 != DAT_1468c21c0) goto LAB_1415c463e;
  }
  lVar3 = 0x38;
LAB_1415c463e:
  if (*(int *)(param_1 + 8 + lVar3) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001415c464e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _wtoi(*(wchar_t **)(param_1 + lVar3));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001415c4661. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _wtoi(L"");
  return;
}



// FUNCTION 1415c46d0 GetOrCreatePoolInfo body=648 status=ok
// SIG undefined GetOrCreatePoolInfo(void)

longlong FMallocBinned2::Private::GetOrCreatePoolInfo
                   (longlong param_1,ulonglong param_2,undefined2 param_3,undefined1 param_4)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong *puVar8;
  uint uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  uVar13 = param_2 >> ((byte)*(undefined8 *)(param_1 + 0x10) & 0x3f);
  uVar12 = (uint)(param_2 >> ((byte)*(undefined8 *)(param_1 + 8) & 0x3f)) &
           *(uint *)(param_1 + 0x18);
  puVar8 = (ulonglong *)
           (((ulonglong)(*(int *)(param_1 + 0x20) - 1) & uVar13 & 0xffffffff) * 0x20 +
           *(longlong *)(param_1 + 0x460));
  puVar10 = puVar8;
  do {
    if (puVar10[1] == 0) {
      *puVar10 = uVar13;
      uVar13 = *(ulonglong *)(param_1 + 0x470);
      uVar11 = FWindowsPlatformMemory::BinnedAllocFromOS(uVar13 << 5);
      if (uVar11 == 0) {
        FUN_1415af0f0(uVar13 << 5,0);
      }
      if ((int)uVar13 != 0) {
        lVar5 = uVar11 + 4;
        do {
          *(undefined8 *)(lVar5 + -4) = 0x39410000;
          *(undefined8 *)(lVar5 + 4) = 0;
          *(undefined8 *)(lVar5 + 0xc) = 0;
          *(undefined8 *)(lVar5 + 0x14) = 0;
          lVar5 = lVar5 + 0x20;
          uVar9 = (int)uVar13 - 1;
          uVar13 = (ulonglong)uVar9;
        } while (uVar9 != 0);
      }
      uVar2 = 1;
      lVar7 = (ulonglong)uVar12 * 0x20;
      puVar10[1] = uVar11;
      lVar5 = lVar7 + uVar11;
LAB_1415c492f:
      FUN_1415c8af0(lVar5,param_3,param_4,uVar2);
      uVar13 = puVar10[1];
      goto LAB_1415c4940;
    }
    if (*puVar10 == uVar13) {
      lVar7 = (ulonglong)uVar12 * 0x20;
      uVar2 = 0;
      lVar5 = lVar7 + puVar10[1];
      goto LAB_1415c492f;
    }
    puVar10 = (ulonglong *)puVar10[3];
    if (puVar10 == puVar8) {
      if (*(longlong *)(param_1 + 0x468) == 0) {
        uVar2 = FWindowsPlatformMemory::BinnedAllocFromOS(DAT_1468b1ff8);
        *(undefined8 *)(param_1 + 0x468) = uVar2;
        puVar10 = (ulonglong *)0x0;
        for (uVar11 = (ulonglong)(DAT_1468b1ff8 >> 5); uVar11 != 0; uVar11 = uVar11 - 1) {
          puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x468) + (longlong)puVar10);
          puVar10 = puVar10 + 4;
          puVar6[2] = puVar6;
          puVar6[3] = puVar6;
          *puVar6 = 0;
          puVar6[1] = 0;
          lVar5 = *(longlong *)(param_1 + 0x468);
          puVar6[2] = *(undefined8 *)(lVar5 + 0x10);
          puVar6[3] = lVar5;
          *(undefined8 **)(*(longlong *)(lVar5 + 0x10) + 0x18) = puVar6;
          *(undefined8 **)(lVar5 + 0x10) = puVar6;
        }
      }
      puVar10 = *(ulonglong **)(param_1 + 0x468);
      puVar1 = (ulonglong *)puVar10[3];
      puVar1[2] = puVar10[2];
      *(ulonglong *)(puVar10[2] + 0x18) = puVar10[3];
      puVar3 = (ulonglong *)0x0;
      if (puVar1 != puVar10) {
        puVar3 = puVar1;
      }
      puVar10[2] = (ulonglong)puVar10;
      puVar10[3] = (ulonglong)puVar10;
      *(ulonglong **)(param_1 + 0x468) = puVar3;
      if (puVar10[1] == 0) {
        uVar11 = *(ulonglong *)(param_1 + 0x470);
        uVar4 = FWindowsPlatformMemory::BinnedAllocFromOS(uVar11 << 5);
        if (uVar4 == 0) {
          FUN_1415af0f0(uVar11 << 5,0);
        }
        if ((int)uVar11 != 0) {
          lVar5 = uVar4 + 4;
          do {
            *(undefined8 *)(lVar5 + -4) = 0x39410000;
            *(undefined8 *)(lVar5 + 4) = 0;
            *(undefined8 *)(lVar5 + 0xc) = 0;
            *(undefined8 *)(lVar5 + 0x14) = 0;
            lVar5 = lVar5 + 0x20;
            uVar9 = (int)uVar11 - 1;
            uVar11 = (ulonglong)uVar9;
          } while (uVar9 != 0);
        }
        uVar2 = 1;
        lVar7 = (ulonglong)uVar12 * 0x20;
        puVar10[1] = uVar4;
        lVar5 = lVar7 + uVar4;
      }
      else {
        lVar7 = (ulonglong)uVar12 * 0x20;
        uVar2 = 0;
        lVar5 = puVar10[1] + lVar7;
      }
      FUN_1415c8af0(lVar5,param_3,param_4,uVar2);
      *puVar10 = uVar13;
      puVar10[2] = puVar8[2];
      puVar10[3] = (ulonglong)puVar8;
      *(ulonglong **)(puVar8[2] + 0x18) = puVar10;
      puVar8[2] = (ulonglong)puVar10;
      uVar13 = puVar10[1];
LAB_1415c4940:
      return uVar13 + lVar7;
    }
  } while( true );
}



// FUNCTION 1415c4960 FUN_1415c4960 body=124 status=ok
// SIG undefined FUN_1415c4960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415c4960(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b4fd0) {
    _Init_thread_header(&DAT_1468b4fd0);
    if (DAT_1468b4fd0 == -1) {
      DAT_1468b4fc0 = 0;
      _DAT_1468b4fc8 = 0;
      atexit((_func_5014 *)&LAB_143e78180);
      _Init_thread_footer(&DAT_1468b4fd0);
      return &DAT_1468b4fc0;
    }
  }
  return &DAT_1468b4fc0;
}



// FUNCTION 1415c49e0 GetSetByTCHAR body=172 status=ok
// SIG undefined GetSetByTCHAR(void)

wchar_t * GetSetByTCHAR(uint param_1)

{
  param_1 = param_1 & 0xff000000;
  if ((int)param_1 < 0x5000001) {
    if (param_1 == 0x5000000) {
      return L"DeviceProfile";
    }
    if (param_1 == 0) {
      return L"Constructor";
    }
    if (param_1 == 0x1000000) {
      return L"Scalability";
    }
    if (param_1 == 0x2000000) {
      return L"GameSetting";
    }
    if (param_1 == 0x3000000) {
      return L"ProjectSetting";
    }
    if (param_1 == 0x4000000) {
      return L"SystemSettingsIni";
    }
  }
  else {
    if (param_1 == 0x6000000) {
      return L"ConsoleVariablesIni";
    }
    if (param_1 == 0x7000000) {
      return L"Commandline";
    }
    if (param_1 == 0x8000000) {
      return L"Code";
    }
    if (param_1 == 0x9000000) {
      return L"Console";
    }
  }
  return L"<UNKNOWN>";
}



// FUNCTION 1415c4a90 GetStatData body=62 status=ok
// SIG undefined GetStatData(void)

undefined8
FFileManagerGeneric::GetStatData(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FPlatformFileManager::Get();
  plVar2 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
  (**(code **)(*plVar2 + 0xe8))(plVar2,param_2,param_3);
  return param_2;
}



// FUNCTION 1415c4ad0 FUN_1415c4ad0 body=102 status=ok
// SIG undefined FUN_1415c4ad0(void)

undefined8 FUN_1415c4ad0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    lVar3 = 0x3c;
    if (DVar2 != DAT_1468c21c0) goto LAB_1415c4b15;
  }
  lVar3 = 0x38;
LAB_1415c4b15:
  FString::PrintfImpl(param_2,&DAT_144ca1148,*(undefined4 *)(lVar3 + param_1));
  return param_2;
}



// FUNCTION 1415c4b40 FUN_1415c4b40 body=111 status=ok
// SIG undefined FUN_1415c4b40(void)

undefined8 FUN_1415c4b40(longlong param_1,undefined8 param_2)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    lVar3 = 0x3c;
    if (DVar2 != DAT_1468c21c0) goto LAB_1415c4b85;
  }
  lVar3 = 0x38;
LAB_1415c4b85:
  FString::PrintfImpl(param_2,&DAT_144ca1150,(double)*(float *)(lVar3 + param_1));
  return param_2;
}



// FUNCTION 1415c4bb0 FUN_1415c4bb0 body=95 status=ok
// SIG undefined FUN_1415c4bb0(void)

undefined8 FUN_1415c4bb0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    lVar3 = 0x48;
    if (DVar2 != DAT_1468c21c0) goto LAB_1415c4bf5;
  }
  lVar3 = 0x38;
LAB_1415c4bf5:
  FString::FString(param_2,param_1 + lVar3);
  return param_2;
}



// FUNCTION 1415c4c10 GetString body=37 status=ok
// SIG undefined GetString(void)

undefined8 FConsoleVariableRef<int>::GetString(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,&DAT_1440da628,*(undefined4 *)(param_1 + 0x40));
  return param_2;
}



// FUNCTION 1415c4c40 GetString body=43 status=ok
// SIG undefined GetString(void)

undefined8 FConsoleVariableRef<float>::GetString(longlong param_1,undefined8 param_2)

{
  FString::SanitizeFloat(param_2,(double)**(float **)(param_1 + 0x38),1);
  return param_2;
}



// FUNCTION 1415c4c70 FUN_1415c4c70 body=128 status=ok
// SIG undefined FUN_1415c4c70(void)

undefined8 * FUN_1415c4c70(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  
  pwVar3 = L"false";
  if (*(char *)(param_1 + 0x40) != '\0') {
    pwVar3 = L"true";
  }
  *param_2 = 0;
  param_2[1] = 0;
  if (*pwVar3 != L'\0') {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (pwVar3[lVar2] != L'\0');
    iVar1 = (int)lVar2 + 1;
    *(int *)(param_2 + 1) = iVar1;
    if (0 < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    }
    FGenericPlatformString::Memcpy(*param_2,pwVar3,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 1415c4cf0 GetString body=42 status=ok
// SIG undefined GetString(void)

undefined8 FConsoleVariableBitRef::GetString(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x68))();
  FString::PrintfImpl(param_2,&DAT_143f3edc0,uVar1);
  return param_2;
}



// FUNCTION 1415c4d20 GetTimeStamp body=62 status=ok
// SIG undefined GetTimeStamp(void)

undefined8
FFileManagerGeneric::GetTimeStamp(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FPlatformFileManager::Get();
  plVar2 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
  (**(code **)(*plVar2 + 0x98))(plVar2,param_2,param_3);
  return param_2;
}



// FUNCTION 1415c4d60 FUN_1415c4d60 body=74 status=ok
// SIG undefined FUN_1415c4d60(void)

void FUN_1415c4d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FPlatformFileManager::Get();
  plVar2 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415c4da3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x118))(plVar2,param_2,param_3,param_4);
  return;
}



// FUNCTION 1415c4dc0 IsInteractiveEnsureMode body=8 status=ok
// SIG undefined IsInteractiveEnsureMode(void)

undefined1 IsInteractiveEnsureMode(void)

{
  return DAT_1468b1f83;
}



// FUNCTION 1415c4dd0 IsNameRegistered body=374 status=ok
// SIG undefined IsNameRegistered(void)

bool FConsoleManager::IsNameRegistered(longlong param_1,short *param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong lVar8;
  int iVar9;
  undefined2 *local_28;
  int local_20;
  undefined4 local_1c;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd0));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd0));
  }
  local_28 = (undefined2 *)0x0;
  local_1c = 0;
  puVar7 = (undefined2 *)0x0;
  iVar9 = 0;
  if ((param_2 != (short *)0x0) && (puVar7 = (undefined2 *)0x0, iVar9 = 0, *param_2 != 0)) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != 0);
    iVar5 = (int)lVar6 + 1;
    local_20 = iVar5;
    if (0 < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    iVar9 = local_20;
    puVar7 = local_28;
    FGenericPlatformString::Memcpy(local_28,param_2,(longlong)iVar5 * 2);
  }
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    puVar3 = &DAT_143f3eda8;
    if (iVar9 != 0) {
      puVar3 = puVar7;
    }
    iVar5 = FUN_140438070(puVar3);
    lVar6 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar6 = param_1 + 0x40;
    }
    iVar5 = *(int *)(lVar6 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)iVar5) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar8 = (longlong)iVar5 * 0x20;
        puVar3 = &DAT_143f3eda8;
        if (iVar9 != 0) {
          puVar3 = puVar7;
        }
        if (*(int *)(lVar8 + 8 + lVar6) == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = *(undefined2 **)(lVar8 + lVar6);
        }
        iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar3);
        if (iVar2 == 0) goto LAB_1415c4f04;
        lVar6 = *(longlong *)(param_1 + 8);
        iVar5 = *(int *)(lVar8 + 0x18 + lVar6);
      } while (iVar5 != -1);
    }
  }
  iVar5 = -1;
LAB_1415c4f04:
  if (puVar7 != (undefined2 *)0x0) {
    FMemory::Free(puVar7);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd0));
  return iVar5 != -1;
}



// FUNCTION 1415c4f50 IsReadOnly body=43 status=ok
// SIG undefined IsReadOnly(void)

void FFileManagerGeneric::IsReadOnly(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FPlatformFileManager::Get();
  plVar2 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415c4f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x80))(plVar2,param_2);
  return;
}



// FUNCTION 1415c4f80 IsSandboxEnabled body=31 status=ok
// SIG undefined IsSandboxEnabled(void)

void FFileManagerGeneric::IsSandboxEnabled(void)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FPlatformFileManager::Get();
  plVar2 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415c4f9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2);
  return;
}



// FUNCTION 1415c4fa0 IterateDirectory body=58 status=ok
// SIG undefined IterateDirectory(void)

void FFileManagerGeneric::IterateDirectory(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FPlatformFileManager::Get();
  plVar2 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415c4fd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xf0))(plVar2,param_2,param_3);
  return;
}



// FUNCTION 1415c4fe0 IterateDirectoryStatRecursively body=58 status=ok
// SIG undefined IterateDirectoryStatRecursively(void)

void FFileManagerGeneric::IterateDirectoryStatRecursively
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FPlatformFileManager::Get();
  plVar2 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415c5013. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x128))(plVar2,param_2,param_3);
  return;
}



// FUNCTION 1415c5020 FUN_1415c5020 body=58 status=ok
// SIG undefined FUN_1415c5020(void)

void FUN_1415c5020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FPlatformFileManager::Get();
  plVar2 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415c5053. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xf8))(plVar2,param_2,param_3);
  return;
}



// FUNCTION 1415c5060 FUN_1415c5060 body=58 status=ok
// SIG undefined FUN_1415c5060(void)

void FUN_1415c5060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FPlatformFileManager::Get();
  plVar2 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415c5093. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x130))(plVar2,param_2,param_3);
  return;
}



// FUNCTION 1415c50a0 FUN_1415c50a0 body=1852 status=ok
// SIG undefined FUN_1415c50a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415c50a0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  uint uVar15;
  wchar_t *pwVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  undefined2 *puVar20;
  undefined1 auStack_298 [32];
  undefined1 local_278;
  undefined2 *local_268;
  int local_260;
  int local_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  uint uStack_244;
  int iStack_240;
  undefined4 uStack_23c;
  wchar_t *local_238;
  int local_230;
  uint uStack_22c;
  uint *puStack_228;
  uint local_220;
  uint uStack_21c;
  int iStack_218;
  undefined4 uStack_214;
  wchar_t *local_210;
  undefined8 local_208;
  undefined2 *local_200;
  undefined8 local_1f8;
  int local_1f0 [2];
  undefined2 *local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  undefined8 uStack_1d0;
  uint *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  longlong local_1b0;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  uint *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  longlong *local_180;
  undefined8 uStack_178;
  uint *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  longlong local_158 [2];
  uint local_148 [4];
  uint *local_138;
  uint local_130;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  if (*(char *)(param_1 + 0x58) == '\0') {
    plVar14 = (longlong *)(param_1 + 0x60);
    *(undefined1 *)(param_1 + 0x58) = 1;
    local_1e0 = plVar14;
    TSet<TTuple<FString,TArray<FString,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Reset(plVar14);
    FConfigFile::FConfigFile(local_158);
    puVar8 = (undefined8 *)FPaths::GeneratedConfigDir(&local_258);
    local_268 = (undefined2 *)*puVar8;
    iVar7 = *(int *)(puVar8 + 1);
    *puVar8 = 0;
    local_260 = *(int *)(puVar8 + 1);
    local_25c = *(int *)((longlong)puVar8 + 0xc);
    puVar8[1] = 0;
    iVar13 = local_260;
    if (local_25c < (int)((0x13 - (uint)(iVar7 != 0)) + local_260)) {
      local_1e8 = local_268;
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_268);
      iVar13 = local_260;
    }
    local_260 = (0x13 - (uint)(iVar13 != 0)) + iVar13;
    local_1e8 = local_268;
    if (local_25c < local_260) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,iVar13);
      local_1e8 = local_268;
    }
    puVar20 = local_1e8;
    iVar7 = local_260;
    builtin_wcsncpy(local_1e8 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)),L"ConsoleHistory.ini",
                    0x13);
    local_268 = local_1e8;
    if (local_258 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_278 = 0;
    puVar10 = &DAT_143f3eda8;
    if (iVar7 != 0) {
      puVar10 = puVar20;
    }
    ProcessIniContents(puVar10,puVar10,local_158,0);
    local_200 = (undefined2 *)0x0;
    local_1f8 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_200,0);
    FGenericPlatformString::Memcpy(local_200,L"ConsoleHistory",0x1e);
    FName::FName(&local_1b0,L"History",1);
    uStack_250 = local_148;
    local_258 = (wchar_t *)0x100000000;
    uStack_244 = 0;
    iStack_240 = 0;
    uStack_21c = local_130;
    if (local_130 != 0) {
      puVar18 = local_148;
      if (local_138 != (uint *)0x0) {
        puVar18 = local_138;
      }
      uVar6 = *puVar18;
      iStack_240 = 0;
      iVar7 = 0;
      while (uVar6 == 0) {
        iStack_240 = iStack_240 + 0x20;
        uVar3 = (ulonglong)local_258 >> 0x20;
        local_258 = (wchar_t *)CONCAT44((int)uVar3,iVar7 + 1);
        if ((int)((local_130 - 1) + ((int)(local_130 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) {
          uStack_244 = local_130;
          goto LAB_1415c52fd;
        }
        uVar6 = puVar18[(longlong)iVar7 + 1];
        iVar7 = iVar7 + 1;
      }
      uVar6 = -uVar6 & uVar6;
      iVar7 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      local_258 = (wchar_t *)CONCAT44(uVar6,SUB84(local_258,0));
      if (uVar6 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_244 = (iStack_240 - iVar7) + 0x1f;
      if ((int)local_130 < (int)uStack_244) {
        uStack_244 = local_130;
      }
    }
LAB_1415c52fd:
    local_248 = 0xffffffff;
    uStack_1c0 = CONCAT44(uStack_244,0xffffffff);
    uStack_1b8 = CONCAT44(uStack_23c,iStack_240);
    local_220 = -1 << ((byte)local_130 & 0x1f);
    local_1d8 = local_158;
    uStack_1d0 = local_258;
    pwVar16 = uStack_1d0;
    uStack_1d0._0_4_ = SUB84(local_258,0);
    uStack_1d0._4_4_ = (uint)((ulonglong)local_258 >> 0x20);
    local_268 = (undefined2 *)(ulonglong)local_130;
    uStack_1a0 = (undefined4)uStack_1d0;
    uStack_19c = uStack_1d0._4_4_;
    uStack_1d0 = pwVar16;
    puStack_1c8 = uStack_250;
    local_198 = uStack_250;
    uStack_190 = uStack_1c0;
    local_188 = uStack_1b8;
    local_1a8 = local_1d8;
    while( true ) {
      pwVar16 = (wchar_t *)0x0;
      if (((uStack_190._4_4_ == (int)local_268) && (local_198 == local_148)) &&
         (local_1a8 == local_158)) break;
      local_238 = (wchar_t *)0x0;
      puVar8 = (undefined8 *)((longlong)uStack_190._4_4_ * 0xb8 + *local_1a8);
      local_258 = (wchar_t *)0x0;
      puVar20 = &DAT_143f3eda8;
      if ((int)local_1f8 != 0) {
        puVar20 = local_200;
      }
      uStack_250 = (uint *)0x0;
      if (*(int *)(puVar8 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*puVar8;
      }
      iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar20);
      if (iVar7 == 0) {
LAB_1415c54ae:
        TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
        ::FindId(plVar14,local_1f0,&local_258);
        if ((local_1f0[0] == -1) || (lVar12 = *plVar14 + (longlong)local_1f0[0] * 0x28, lVar12 == 0)
           ) {
          plVar14 = (longlong *)
                    TMapBase<FString,TArray<FString,FDefaultAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,FDefaultAllocator>,0>_>
                    ::Emplace<FString_const_&>(plVar14,&local_258);
          local_238 = local_258;
        }
        else {
          plVar14 = (longlong *)(lVar12 + 0x10);
        }
        plVar1 = puVar8 + 2;
        uStack_22c = 1;
        uVar6 = *(uint *)(puVar8 + 7);
        puVar18 = (uint *)(puVar8 + 4);
        local_230 = 0;
        uStack_21c = 0;
        iStack_218 = 0;
        if (uVar6 != 0) {
          puVar19 = (uint *)puVar8[6];
          if ((uint *)puVar8[6] == (uint *)0x0) {
            puVar19 = puVar18;
          }
          uVar15 = *puVar19;
          while (uVar15 == 0) {
            lVar12 = (longlong)local_230;
            iStack_218 = iStack_218 + 0x20;
            iVar7 = local_230 + 1;
            bVar2 = (int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_230;
            local_230 = iVar7;
            if (bVar2) goto LAB_1415c55b3;
            uVar15 = puVar19[lVar12 + 1];
          }
          uStack_22c = -uVar15 & uVar15;
          iVar7 = 0x1f;
          if (uStack_22c != 0) {
            for (; uStack_22c >> iVar7 == 0; iVar7 = iVar7 + -1) {
            }
          }
          if (uStack_22c == 0) {
            iVar7 = 0x20;
          }
          else {
            iVar7 = 0x1f - iVar7;
          }
          uStack_21c = (iStack_218 - iVar7) + 0x1f;
          if ((int)uVar6 < (int)uStack_21c) {
LAB_1415c55b3:
            uStack_21c = uVar6;
          }
        }
        uVar15 = *(uint *)(puVar8 + 7);
        uStack_1c0 = CONCAT44(uStack_21c,0xffffffff);
        uStack_1b8 = CONCAT44(uStack_214,iStack_218);
        uStack_178 = CONCAT44(uStack_22c,local_230);
        local_220 = -1 << ((byte)uVar15 & 0x1f);
        uVar17 = uVar15 & 0xffffffe0;
        uStack_1d0 = (wchar_t *)CONCAT44(uStack_22c,local_230);
        puStack_228 = puVar18;
        uStack_21c = uVar15;
        local_1d8 = plVar1;
        puStack_1c8 = puVar18;
        local_180 = plVar1;
        puStack_170 = puVar18;
        uStack_168 = uStack_1c0;
        uStack_160 = uStack_1b8;
        if (uVar15 != uVar6) {
          puVar19 = (uint *)puVar8[6];
          if ((uint *)puVar8[6] == (uint *)0x0) {
            puVar19 = puVar18;
          }
          uVar11 = puVar19[(int)uVar15 >> 5] & local_220;
          iVar7 = (int)uVar15 >> 5;
          while (uVar11 == 0) {
            uVar17 = uVar17 + 0x20;
            if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
            goto LAB_1415c5688;
            uVar11 = puVar19[(longlong)iVar7 + 1];
            local_220 = 0xffffffff;
            iVar7 = iVar7 + 1;
          }
          uVar11 = -uVar11 & uVar11;
          iVar7 = 0x1f;
          if (uVar11 != 0) {
            for (; uVar11 >> iVar7 == 0; iVar7 = iVar7 + -1) {
            }
          }
          if (uVar11 == 0) {
            iVar7 = 0x20;
          }
          else {
            iVar7 = 0x1f - iVar7;
          }
          uStack_21c = (uVar17 - iVar7) + 0x1f;
          uVar15 = uStack_21c;
          if ((int)uVar6 < (int)uStack_21c) {
LAB_1415c5688:
            uStack_21c = uVar6;
            uVar15 = uVar6;
          }
        }
        while( true ) {
          if (((uStack_1c0._4_4_ == uVar15) && (puStack_1c8 == puVar18)) && (local_1d8 == plVar1))
          break;
          plVar9 = (longlong *)((longlong)(int)uStack_1c0._4_4_ * 0x30 + *local_1d8);
          if (*plVar9 == local_1b0) {
            iVar13 = (int)plVar14[1];
            iVar7 = (int)plVar9[4] + -1;
            if ((int)plVar9[4] == 0) {
              iVar7 = 0;
            }
            lVar12 = 0x18;
            if (iVar7 < 1) {
              lVar12 = 8;
            }
            *(int *)(plVar14 + 1) = iVar13 + 1;
            if (*(int *)((longlong)plVar14 + 0xc) < iVar13 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar13);
            }
            FString::FString((longlong)iVar13 * 0x10 + *plVar14,lVar12 + (longlong)plVar9);
          }
          uStack_1c0 = CONCAT44(uStack_1c0._4_4_,(uint)uStack_1c0 & ~uStack_1d0._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1d0);
        }
        plVar14 = local_1e0;
        if (local_238 != (wchar_t *)0x0) {
          FMemory::Free(local_238);
          plVar14 = local_1e0;
        }
      }
      else {
        cVar5 = FString::StartsWith(puVar8,&local_200,1);
        if (cVar5 != '\0') {
          uVar15 = 0;
          uVar6 = uVar15;
          if ((int)local_1f8 != 0) {
            uVar6 = (int)local_1f8 - 1;
          }
          iVar7 = *(int *)(puVar8 + 1);
          uVar17 = uVar6 + 0x7fffffff;
          uVar11 = iVar7 - 1;
          if (iVar7 == 0) {
            uVar11 = uVar15;
          }
          if (uVar6 < uVar11) {
            uVar11 = uVar6;
          }
          uVar6 = iVar7 - 1;
          if (iVar7 == 0) {
            uVar6 = uVar15;
          }
          uVar15 = uVar11;
          if ((uVar11 <= uVar17) && (uVar15 = uVar6, uVar17 < uVar6)) {
            uVar15 = uVar17;
          }
          if (iVar7 == 0) {
            puVar20 = &DAT_143f3eda8;
          }
          else {
            puVar20 = (undefined2 *)*puVar8;
          }
          iVar13 = uVar15 - uVar11;
          local_238 = (wchar_t *)0x0;
          local_210 = (wchar_t *)0x0;
          iVar7 = iVar13 + 1;
          if (iVar13 == 0) {
            iVar7 = 0;
          }
          local_208._4_4_ = 0;
          if (0 < iVar7) {
            local_208._0_4_ = iVar7;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_210,0);
            iVar7 = (int)local_208;
            pwVar16 = local_210;
            local_238 = local_210;
            if (0 < (int)local_208) {
              wcsncpy(local_210,puVar20 + (int)uVar11,(longlong)iVar13);
              pwVar16[iVar13] = L'\0';
            }
          }
          uVar4 = local_208._4_4_;
          local_208 = 0;
          local_210 = (wchar_t *)0x0;
          uStack_250 = (uint *)CONCAT44(uVar4,iVar7);
          local_258 = pwVar16;
          goto LAB_1415c54ae;
        }
      }
      uStack_190 = CONCAT44(uStack_190._4_4_,(uint)uStack_190 & ~uStack_19c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1a0);
    }
    if (local_200 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_1e8 != (undefined2 *)0x0) {
      FMemory::Free(local_1e8);
    }
    FConfigFile::~FConfigFile(local_158);
  }
  return;
}



// FUNCTION 1415c57e0 FUN_1415c57e0 body=77 status=ok
// SIG undefined FUN_1415c57e0(void)

void FUN_1415c57e0(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FPlatformFileManager::Get();
  plVar2 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
  if (param_3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001415c5815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x150))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001415c5826. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xd8))(plVar2,param_2);
  return;
}



// FUNCTION 1415c5830 FUN_1415c5830 body=196 status=ok
// SIG undefined FUN_1415c5830(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415c5830(undefined8 param_1,ulonglong param_2,uint param_3)

{
  LPVOID pvVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  LOCK();
  _DAT_1468b5048 = _DAT_1468b5048 + 1;
  UNLOCK();
  if ((param_2 < 0x7ff1 && param_3 < 0x11) && (DAT_1468b1f84 != 0)) {
    pvVar1 = TlsGetValue(DAT_1468b1f84);
    if (pvVar1 != (LPVOID)0x0) {
      plVar3 = (longlong *)
               ((ulonglong)(byte)(&DAT_1468b2000)[param_2 + 0xf >> 4] * 0x20 + (longlong)pvVar1);
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
LAB_1415c58be:
        *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
        *plVar3 = *plVar2;
        return;
      }
      if (plVar3[2] != 0) {
        *(int *)plVar3 = (int)plVar3[2];
        *(undefined4 *)((longlong)plVar3 + 4) = *(undefined4 *)((longlong)plVar3 + 0x14);
        *(int *)(plVar3 + 1) = (int)plVar3[3];
        *(undefined4 *)((longlong)plVar3 + 0xc) = *(undefined4 *)((longlong)plVar3 + 0x1c);
        plVar3[2] = 0;
        *(undefined4 *)(plVar3 + 3) = 0;
        plVar2 = (longlong *)*plVar3;
        if (plVar2 != (longlong *)0x0) goto LAB_1415c58be;
      }
    }
  }
  FUN_1415c5900(param_1,param_2,param_3);
  return;
}



// FUNCTION 1415c5900 FUN_1415c5900 body=1224 status=ok
// SIG undefined FUN_1415c5900(void)

ulonglong * FUN_1415c5900(longlong param_1,ulonglong param_2,uint param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  short sVar8;
  BOOL BVar9;
  uint uVar10;
  LPVOID pvVar11;
  undefined2 *puVar12;
  short *psVar13;
  longlong lVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  bool bVar22;
  
  if (0x7ff0 < param_2 || 0x10 < param_3) {
    uVar19 = 0x10;
    if (0xf < param_3) {
      uVar19 = (ulonglong)param_3;
    }
    if (param_2 < 2) {
      param_2 = 1;
    }
    uVar21 = (param_2 - 1) + uVar19 & ~(uVar19 - 1);
    BVar9 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x880));
    if (BVar9 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x880));
    }
    lVar14 = param_1 + 0x478;
    uVar18 = ((ulonglong)DAT_1468b1ffc - 1) + uVar21 & ~((ulonglong)DAT_1468b1ffc - 1);
    puVar16 = (ulonglong *)
              FCachedOSPageAllocator::AllocateImpl
                        (lVar14,uVar18,0x4000000,lVar14,
                         (ulonglong)*(uint *)(param_1 + 0x878) * 0x10 + lVar14,
                         (uint *)(param_1 + 0x878),param_1 + 0x87c);
    if (((ulonglong)puVar16 & uVar19 - 1) != 0) {
      LowLevelFatalErrorHandler
                ("Unknown",0x30d,
                 L"FMallocBinned2 alignment was too large for OS. Alignment=%d   Ptr=%p",uVar19,
                 puVar16);
      FDebug::AssertFailed
                ((longlong)L"Close %s" + 0x13,"Unknown",0x30d,
                 L"FMallocBinned2 alignment was too large for OS. Alignment=%d   Ptr=%p",uVar19,
                 puVar16);
    }
    if (puVar16 == (ulonglong *)0x0) {
      FUN_1415af0f0(uVar18,0);
    }
    lVar14 = FMallocBinned2::Private::GetOrCreatePoolInfo(param_1,puVar16,0x17ea,0);
    FUN_1415c0090(lVar14,0x17ea);
    *(int *)(lVar14 + 4) = (int)uVar21;
    *(ulonglong *)(lVar14 + 8) = uVar18;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x880));
    return puVar16;
  }
  bVar4 = (&DAT_1468b2000)[param_2 + 0xf >> 4];
  if (DAT_1468b1f84 == 0) {
    pvVar11 = (LPVOID)0x0;
  }
  else {
    pvVar11 = TlsGetValue(DAT_1468b1f84);
    if (pvVar11 != (LPVOID)0x0) {
      uVar19 = (ulonglong)bVar4;
      puVar16 = (ulonglong *)(uVar19 * 0x20 + (longlong)pvVar11);
      if (*puVar16 == 0) {
        *(undefined4 *)(puVar16 + 1) = 0;
        puVar15 = &DAT_1468b3900 + uVar19 * 0x10;
        uVar21 = 0;
        do {
          uVar18 = *puVar15;
          if (uVar18 != 0) {
            LOCK();
            bVar22 = uVar18 == (&DAT_1468b3900)[uVar21 + uVar19 * 0x10];
            if (bVar22) {
              (&DAT_1468b3900)[uVar21 + uVar19 * 0x10] = 0;
            }
            UNLOCK();
            if (bVar22) break;
          }
          uVar20 = (int)uVar21 + 1;
          uVar21 = (ulonglong)uVar20;
          puVar15 = puVar15 + 1;
          uVar18 = 0;
        } while (uVar20 < 8);
        *puVar16 = uVar18;
        if (uVar18 == 0) goto LAB_1415c5a37;
        *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(uVar18 + 8);
        *(undefined8 *)(uVar18 + 8) = 0;
      }
      puVar15 = (ulonglong *)*puVar16;
      if (puVar15 != (ulonglong *)0x0) {
LAB_1415c5a0c:
        *(int *)(puVar16 + 1) = (int)puVar16[1] + -1;
        *puVar16 = *puVar15;
        return puVar15;
      }
      if (puVar16[2] != 0) {
        *(int *)puVar16 = (int)puVar16[2];
        *(undefined4 *)((longlong)puVar16 + 4) = *(undefined4 *)((longlong)puVar16 + 0x14);
        *(int *)(puVar16 + 1) = (int)puVar16[3];
        *(undefined4 *)((longlong)puVar16 + 0xc) = *(undefined4 *)((longlong)puVar16 + 0x1c);
        puVar16[2] = 0;
        *(undefined4 *)(puVar16 + 3) = 0;
        puVar15 = (ulonglong *)*puVar16;
        if (puVar15 != (ulonglong *)0x0) goto LAB_1415c5a0c;
      }
    }
  }
LAB_1415c5a37:
  BVar9 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x880));
  if (BVar9 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x880));
  }
  uVar20 = DAT_1468b1ff8;
  lVar14 = (ulonglong)bVar4 * 3 + 5;
  psVar13 = *(short **)(param_1 + lVar14 * 8);
  plVar3 = (longlong *)(param_1 + lVar14 * 8);
  if (psVar13 == (short *)0x0) {
    lVar14 = param_1 + 0x478;
    uVar5 = *(uint *)(plVar3 + 2);
    puVar12 = (undefined2 *)
              FCachedOSPageAllocator::AllocateImpl
                        (lVar14,DAT_1468b1ff8,0x4000000,lVar14,
                         (ulonglong)*(uint *)(param_1 + 0x878) * 0x10 + lVar14,
                         (uint *)(param_1 + 0x878),param_1 + 0x87c);
    if (puVar12 == (undefined2 *)0x0) {
      FUN_1415af0f0(uVar20);
    }
    *puVar12 = (short)uVar5;
    uVar10 = uVar20 / uVar5;
    *(byte *)(puVar12 + 1) = bVar4;
    *(undefined1 *)((longlong)puVar12 + 3) = 0xe3;
    *(undefined8 *)(puVar12 + 4) = 0;
    *(uint *)(puVar12 + 2) = uVar10;
    if (uVar20 < uVar10 * uVar5 + 0x10) {
      *(uint *)(puVar12 + 2) = uVar10 - 1;
    }
    psVar13 = (short *)FMallocBinned2::Private::GetOrCreatePoolInfo(param_1,puVar12,0xf317,0);
    lVar14 = 0;
    if (*plVar3 != 0) {
      *(short **)(*plVar3 + 0x18) = psVar13 + 8;
      lVar14 = *plVar3;
    }
    *(longlong *)(psVar13 + 8) = lVar14;
    *(longlong **)(psVar13 + 0xc) = plVar3;
    sVar8 = 0;
    *plVar3 = (longlong)psVar13;
    *(undefined2 **)(psVar13 + 4) = puVar12;
  }
  else {
    sVar8 = *psVar13;
  }
  iVar17 = 0;
  puVar7 = *(ushort **)(psVar13 + 4);
  *psVar13 = sVar8 + 1;
  iVar6 = *(int *)(puVar7 + 2);
  iVar1 = iVar6 + -1;
  *(int *)(puVar7 + 2) = iVar1;
  if ((short)puVar7 == 0) {
    uVar19 = 0x10000 - (ulonglong)(iVar6 * (uint)*puVar7);
  }
  else {
    uVar19 = (ulonglong)(iVar1 * (uint)*puVar7);
  }
  puVar16 = (ulonglong *)((longlong)puVar7 + uVar19);
  if (*(int *)(*(longlong *)(psVar13 + 4) + 4) == 0) {
    *(undefined8 *)(psVar13 + 4) = *(undefined8 *)(*(longlong *)(psVar13 + 4) + 8);
  }
  if (pvVar11 != (LPVOID)0x0) {
    do {
      FUN_1415c0090(psVar13,0xf317);
      if ((*(longlong *)(psVar13 + 4) == 0) || (*(int *)(*(longlong *)(psVar13 + 4) + 4) == 0))
      break;
      puVar15 = (ulonglong *)((ulonglong)bVar4 * 0x20 + (longlong)pvVar11);
      if ((0x3f < (uint)puVar15[1]) || (0xffff < (int)plVar3[2] * (uint)puVar15[1])) {
        if (puVar15[2] != 0) break;
        *(int *)(puVar15 + 2) = (int)*puVar15;
        *(undefined4 *)((longlong)puVar15 + 0x14) = *(undefined4 *)((longlong)puVar15 + 4);
        *(int *)(puVar15 + 3) = (int)puVar15[1];
        *(undefined4 *)((longlong)puVar15 + 0x1c) = *(undefined4 *)((longlong)puVar15 + 0xc);
        *puVar15 = 0;
        *(undefined4 *)(puVar15 + 1) = 0;
      }
      *puVar16 = *puVar15;
      puVar16[1] = 0;
      *(int *)(puVar15 + 1) = (int)puVar15[1] + 1;
      *puVar15 = (ulonglong)puVar16;
      puVar16 = (ulonglong *)FMallocBinned2::FPoolInfo::AllocateRegularBlock(psVar13);
      iVar17 = iVar17 + 1;
    } while (iVar17 < 0x20);
  }
  FUN_1415c0090(psVar13,0xf317);
  if ((*(longlong *)(psVar13 + 4) == 0) || (*(int *)(*(longlong *)(psVar13 + 4) + 4) == 0)) {
    plVar2 = (longlong *)(psVar13 + 8);
    lVar14 = 0;
    if (*(longlong *)(psVar13 + 8) != 0) {
      *(undefined8 *)(*(longlong *)(psVar13 + 8) + 0x18) = *(undefined8 *)(psVar13 + 0xc);
      lVar14 = *plVar2;
    }
    **(longlong **)(psVar13 + 0xc) = lVar14;
    plVar3 = plVar3 + 1;
    lVar14 = 0;
    if (*plVar3 != 0) {
      *(longlong **)(*plVar3 + 0x18) = plVar2;
      lVar14 = *plVar3;
    }
    *plVar2 = lVar14;
    *(longlong **)(psVar13 + 0xc) = plVar3;
    *plVar3 = (longlong)psVar13;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x880));
  return puVar16;
}



// FUNCTION 1415c5dd0 Move body=456 status=ok
// SIG undefined Move(void)

undefined8
FFileManagerGeneric::Move
          (longlong *param_1,short *param_2,LPBYTE param_3,int param_4,undefined8 param_5,
          undefined8 param_6,char param_7)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 extraout_var;
  undefined8 uVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  uint uVar7;
  longlong lVar8;
  LPBYTE aj;
  tagPOINT local_38;
  ulonglong local_30;
  longlong local_28 [4];
  
  cVar2 = (char)param_4;
  local_38.x = 0;
  local_38.y = 0;
  local_30 = 0;
  aj = param_3;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (param_2[lVar8] != 0);
    uVar7 = (int)lVar8 + 1;
    local_30 = (ulonglong)uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    aj = (LPBYTE)((longlong)(int)uVar7 * 2);
    FGenericPlatformString::Memcpy(local_38,param_2);
  }
  iVar3 = FPaths::GetPath((HDC)local_28,&local_38,aj,param_4);
  if (*(int *)((undefined8 *)CONCAT44(extraout_var,iVar3) + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = *(undefined2 **)CONCAT44(extraout_var,iVar3);
  }
  (**(code **)(*param_1 + 0x58))(param_1,puVar6,1);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_38 != (tagPOINT)0x0) {
    FMemory::Free();
  }
  uVar4 = FPlatformFileManager::Get();
  plVar5 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar4);
  cVar1 = (**(code **)(*plVar5 + 0x68))(plVar5,param_2);
  if ((cVar1 != '\0') && (cVar2 != '\0')) {
    uVar4 = FPlatformFileManager::Get();
    plVar5 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar4);
    cVar2 = (**(code **)(*plVar5 + 0x78))(plVar5,param_2);
    if ((cVar2 == '\0') && (param_7 == '\0')) {
      FUN_1416b1760(0x3f000000);
      uVar4 = FPlatformFileManager::Get();
      plVar5 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar4);
      cVar2 = (**(code **)(*plVar5 + 0x78))(plVar5,param_2);
      if (cVar2 == '\0') {
        return 0;
      }
    }
  }
  uVar4 = FPlatformFileManager::Get();
  plVar5 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar4);
  cVar2 = (**(code **)(*plVar5 + 0x88))(plVar5,param_2,param_3);
  if (cVar2 == '\0') {
    if (param_7 == '\0') {
      iVar3 = 10;
      do {
        iVar3 = iVar3 + -1;
        FUN_1416b1760(0x3f000000);
        uVar4 = FPlatformFileManager::Get();
        plVar5 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar4);
        cVar2 = (**(code **)(*plVar5 + 0x88))(plVar5,param_2,param_3);
        if (cVar2 != '\0') {
          return 1;
        }
      } while (iVar3 != 0);
    }
    return 0;
  }
  return 1;
}



// FUNCTION 1415c5fa0 FUN_1415c5fa0 body=2397 status=ok
// SIG undefined FUN_1415c5fa0(void)

/* WARNING: Removing unreachable block (ram,0x0001415c60c1) */

wchar_t * FUN_1415c5fa0(longlong *param_1,wchar_t *param_2,undefined8 param_3,undefined8 param_4,
                       longlong param_5)

{
  wchar_t wVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  wint_t wVar5;
  wint_t wVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  wchar_t **ppwVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  wchar_t *pwVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  wint_t *pwVar22;
  wchar_t *pwVar23;
  int iVar24;
  undefined2 *puVar25;
  wchar_t *pwVar26;
  wchar_t *pwVar27;
  uint uVar28;
  uint uVar29;
  wchar_t *local_90;
  uint local_88;
  uint local_84;
  wchar_t *local_80;
  undefined8 local_78;
  wchar_t *local_70;
  ulonglong local_68;
  undefined1 local_60 [32];
  
  pwVar23 = (wchar_t *)0x0;
  uVar19 = 0;
  local_90 = (wchar_t *)0x0;
  local_88 = 0;
  local_84 = 0;
  wVar1 = *param_2;
  pwVar17 = pwVar23;
  pwVar26 = pwVar23;
  while (iVar24 = (int)pwVar17, wVar1 != L'\0') {
    if (wVar1 == L' ') goto LAB_1415c6043;
    param_2 = param_2 + 1;
    if (wVar1 != L'\0') {
      uVar28 = iVar24 - 1;
      if (iVar24 < 1) {
        uVar28 = uVar19;
      }
      local_88 = (iVar24 < 1) + 1 + iVar24;
      if ((int)pwVar26 < (int)local_88) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90);
      }
      local_90[(int)uVar28] = wVar1;
      local_90[(longlong)(int)uVar28 + 1] = L'\0';
      pwVar26 = (wchar_t *)(ulonglong)local_84;
      pwVar17 = (wchar_t *)(ulonglong)local_88;
    }
    wVar1 = *param_2;
  }
  wVar1 = L'\0';
  while (wVar1 == L' ') {
LAB_1415c6043:
    param_2 = param_2 + 1;
    wVar1 = *param_2;
  }
  pwVar17 = pwVar23;
  if (iVar24 < 2) goto LAB_1415c68b1;
  cVar3 = FString::EndsWith(&local_90,&DAT_144ca107c,0);
  uVar28 = 0;
  if (cVar3 != '\0') {
    uVar7 = local_88 - 1;
    if (local_88 == 0) {
      uVar7 = uVar28;
    }
    uVar18 = local_88 - 1;
    if (local_88 == 0) {
      uVar18 = uVar19;
    }
    if (uVar7 - 1 < uVar18) {
      uVar18 = uVar7 - 1;
    }
    local_80 = (wchar_t *)0x0;
    pwVar26 = L"";
    if (local_88 != 0) {
      pwVar26 = local_90;
    }
    uVar7 = uVar18 + 1;
    if (uVar18 == 0) {
      uVar7 = 0;
    }
    local_78 = (ulonglong)uVar7;
    pwVar27 = pwVar23;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,0);
      pwVar27 = local_80;
      uVar7 = (uint)local_78;
      if (0 < (int)(uint)local_78) {
        wcsncpy(local_80,pwVar26,(longlong)(int)uVar18);
        pwVar27[(int)uVar18] = L'\0';
      }
    }
    if (local_90 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_84 = local_78._4_4_;
    local_90 = pwVar27;
    local_88 = uVar7;
  }
  pwVar26 = L"";
  if (local_88 != 0) {
    pwVar26 = local_90;
  }
  plVar10 = (longlong *)(**(code **)(*param_1 + 0xa0))(param_1,pwVar26);
  if (((plVar10 == (longlong *)0x0) ||
      (uVar11 = (**(code **)(*plVar10 + 0x18))(plVar10), (uVar11 & 1) != 0)) ||
     (uVar7 = (**(code **)(*plVar10 + 0x18))(plVar10), pwVar17 = (wchar_t *)0x0,
     (uVar7 >> 3 & 1) != 0)) goto LAB_1415c68b1;
  ppwVar12 = (wchar_t **)FConsoleManager::FindConsoleObjectName(param_1,&local_70,plVar10);
  if (&local_90 != ppwVar12) {
    if (local_90 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_90 = *ppwVar12;
    *ppwVar12 = (wchar_t *)0x0;
    local_88 = *(uint *)(ppwVar12 + 1);
    local_84 = *(uint *)((longlong)ppwVar12 + 0xc);
    ppwVar12[1] = (wchar_t *)0x0;
  }
  if (local_70 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  plVar13 = (longlong *)(**(code **)(*plVar10 + 0x50))(plVar10);
  plVar14 = (longlong *)(**(code **)(*plVar10 + 0x28))(plVar10);
  if (plVar13 != (longlong *)0x0) {
    local_80 = (wchar_t *)0x0;
    local_70 = (wchar_t *)0x0;
    local_78 = 0;
    local_68 = 0;
    if (*param_2 != L'\0') {
      lVar21 = -1;
      do {
        lVar21 = lVar21 + 1;
      } while (param_2[lVar21] != L'\0');
      uVar19 = (int)lVar21 + 1;
      local_68 = (ulonglong)uVar19;
      if (0 < (int)uVar19) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
      }
      FGenericPlatformString::Memcpy(local_70,param_2,(longlong)(int)uVar19 * 2);
    }
    FString::ParseIntoArrayWS(&local_70,&local_80,0,1);
    if (local_70 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (cVar3 != '\0') goto LAB_1415c6430;
    if ((uint)local_78 == 1) {
      if (*(int *)(local_80 + 4) == 0) {
        puVar25 = &DAT_143f3eda8;
      }
      else {
        puVar25 = *(undefined2 **)local_80;
      }
      pwVar22 = &DAT_144ca10cc;
      do {
        wVar5 = *(wint_t *)((longlong)pwVar22 + (longlong)(puVar25 + -0xa2650866));
        if ((wVar5 == 0) && (*pwVar22 == 0)) goto LAB_1415c6430;
        if (wVar5 != *pwVar22) {
          wVar5 = towlower(wVar5);
          wVar6 = towlower(*pwVar22);
          if (wVar5 != wVar6) goto LAB_1415c62e7;
        }
        pwVar22 = pwVar22 + 1;
      } while( true );
    }
    goto LAB_1415c62f6;
  }
  if (plVar14 == (longlong *)0x0) goto LAB_1415c68ae;
  if (*param_2 == L'\0') {
    bVar2 = true;
    goto LAB_1415c67ec;
  }
  local_70 = (wchar_t *)0x0;
  lVar21 = -1;
  do {
    lVar21 = lVar21 + 1;
  } while (param_2[lVar21] != L'\0');
  uVar7 = (int)lVar21 + 1;
  local_68 = (ulonglong)uVar7;
  if (0 < (int)uVar7) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
  }
  FGenericPlatformString::Memcpy(local_70,param_2,(longlong)(int)uVar7 * 2);
  FString::TrimStartAndEnd(&local_70,&local_80);
  if (local_70 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  uVar7 = (**(code **)(*plVar14 + 0x18))(plVar14);
  pwVar17 = local_80;
  if ((uint)local_78 != 0) {
    uVar18 = (uint)local_78 - 1;
    uVar9 = (uint)local_78;
    if (1 < (int)uVar18) {
      if ((*local_80 == L'\"') && (local_80[(longlong)(int)uVar18 + -1] == L'\"')) {
        uVar9 = (uint)local_78 - 2;
        uVar29 = uVar18;
        if (1 < uVar18) {
          uVar29 = 1;
        }
        uVar20 = uVar29;
        if ((uVar29 <= uVar9) && (uVar20 = uVar18, uVar9 < uVar18)) {
          uVar20 = uVar9;
        }
        iVar24 = uVar20 - uVar29;
        local_70 = (wchar_t *)0x0;
        uVar9 = iVar24 + 1;
        if (iVar24 == 0) {
          uVar9 = uVar19;
        }
        local_68 = (ulonglong)uVar9;
        pwVar26 = pwVar23;
        if (0 < (int)uVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
          pwVar26 = local_70;
          uVar9 = (uint)local_68;
          if (0 < (int)(uint)local_68) {
            wcsncpy(local_70,pwVar17 + (int)uVar29,(longlong)iVar24);
            pwVar26[iVar24] = L'\0';
          }
        }
        if (local_80 != (wchar_t *)0x0) {
          FMemory::Free(local_80);
        }
        local_78 = CONCAT44((int)(local_68 >> 0x20),uVar9);
        local_80 = pwVar26;
      }
      if (uVar9 == 0) goto LAB_1415c66d7;
      if ((0 < (int)(uVar9 - 1)) && (*local_80 == L'=')) {
        FOutputDevice::LogfImpl
                  (param_3,
                   L"Warning: Processing the console input parameters the leading \'=\' is ignored (only needed for ini files)."
                  );
        uVar18 = (uint)local_78 - 1;
        if ((uint)local_78 == 0) {
          uVar18 = uVar28;
        }
        uVar29 = uVar18;
        if (1 < uVar18) {
          uVar29 = 1;
        }
        uVar9 = (uint)local_78 - 1;
        if ((uint)local_78 == 0) {
          uVar9 = uVar28;
        }
        uVar28 = uVar29;
        if ((uVar29 <= uVar18) && (uVar28 = uVar9, uVar18 < uVar9)) {
          uVar28 = uVar18;
        }
        local_70 = (wchar_t *)0x0;
        pwVar17 = L"";
        if ((uint)local_78 != 0) {
          pwVar17 = local_80;
        }
        iVar24 = uVar28 - uVar29;
        uVar9 = iVar24 + 1;
        if (iVar24 == 0) {
          uVar9 = uVar19;
        }
        local_68 = (ulonglong)uVar9;
        if (0 < (int)uVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
          pwVar23 = local_70;
          uVar9 = (uint)local_68;
          if (0 < (int)(uint)local_68) {
            wcsncpy(local_70,pwVar17 + (int)uVar29,(longlong)iVar24);
            pwVar23[iVar24] = L'\0';
          }
        }
        if (local_80 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        local_78 = CONCAT44((int)(local_68 >> 0x20),uVar9);
        local_80 = pwVar23;
      }
    }
    pwVar17 = local_80;
    if (uVar9 != 0) goto LAB_1415c66da;
  }
LAB_1415c66d7:
  pwVar17 = L"";
LAB_1415c66da:
  pwVar22 = &DAT_144ca10f4;
  do {
    wVar5 = *(wint_t *)((longlong)pwVar22 + (longlong)(pwVar17 + -0xa265087a));
    if ((wVar5 == 0) && (*pwVar22 == 0)) goto LAB_1415c671e;
    if (wVar5 != *pwVar22) {
      wVar5 = towlower(wVar5);
      wVar6 = towlower(*pwVar22);
      if (wVar5 != wVar6) goto LAB_1415c6714;
    }
    pwVar22 = pwVar22 + 1;
  } while( true );
LAB_1415c62e7:
  if (wVar5 != wVar6) {
LAB_1415c62f6:
    if ((param_5 == 0) || (cVar3 = (**(code **)(*plVar13 + 0x70))(plVar13), cVar3 == '\0')) {
      cVar3 = (**(code **)(*plVar13 + 0x70))(plVar13);
      if (cVar3 == '\0') {
        bVar4 = (**(code **)(*plVar13 + 0x68))(plVar13,&local_80,param_4,param_3);
        goto LAB_1415c63f0;
      }
    }
    else {
      uVar19 = (**(code **)(*plVar10 + 0x18))(plVar10);
      pwVar17 = local_90;
      if ((uVar19 >> 0x10 & 1) != 0) {
        lVar21 = (longlong)(int)local_88;
        local_70 = (wchar_t *)0x0;
        local_68 = CONCAT44(local_68._4_4_,local_88);
        if (local_88 == 0) {
          local_68 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_70,local_88,0);
          _guard_xfg_dispatch_icall_nop(local_70,pwVar17,lVar21 * 2);
        }
        uVar8 = (**(code **)(*plVar10 + 0x18))(plVar10);
        if (DAT_1468b3018 != 0) {
          pwVar23 = DAT_1468b3010;
        }
        lVar21 = *(longlong *)pwVar23;
        uVar15 = FString::FString(local_60,&local_70);
        cVar3 = (**(code **)(lVar21 + 0x38))(pwVar23,uVar15,&local_80,uVar8,param_5);
        if (local_70 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        if (cVar3 != '\0') {
          pwVar23 = (wchar_t *)0x1;
          goto LAB_1415c63f3;
        }
      }
      bVar4 = (**(code **)(*plVar13 + 0x60))(plVar13,param_5,&local_80,param_3);
LAB_1415c63f0:
      pwVar23 = (wchar_t *)(ulonglong)bVar4;
    }
LAB_1415c63f3:
    pwVar17 = local_80;
    for (iVar24 = (uint)local_78; iVar24 != 0; iVar24 = iVar24 + -1) {
      if (*(longlong *)pwVar17 != 0) {
        FMemory::Free();
      }
      pwVar17 = pwVar17 + 8;
    }
    pwVar17 = pwVar23;
    if (local_80 != (wchar_t *)0x0) {
      FMemory::Free(local_80);
    }
    goto LAB_1415c68b1;
  }
LAB_1415c6430:
  pwVar17 = L"";
  if (local_88 != 0) {
    pwVar17 = local_90;
  }
  uVar15 = (**(code **)(*plVar13 + 8))(plVar13);
  FOutputDevice::LogfImpl(param_3,L"HELP for \'%s\':\n%s",pwVar17,uVar15);
  pwVar17 = local_80;
  pwVar26 = local_80;
  for (iVar24 = (uint)local_78; local_80 = pwVar26, iVar24 != 0; iVar24 = iVar24 + -1) {
    if (*(longlong *)pwVar17 != 0) {
      FMemory::Free();
    }
    pwVar17 = pwVar17 + 8;
    pwVar26 = local_80;
  }
  if (pwVar26 == (wchar_t *)0x0) goto LAB_1415c68ae;
LAB_1415c68a9:
  FMemory::Free(pwVar26);
  goto LAB_1415c68ae;
LAB_1415c6714:
  if (wVar5 == wVar6) {
LAB_1415c671e:
    cVar3 = '\x01';
  }
  else if ((uVar7 >> 2 & 1) == 0) {
    pwVar17 = L"";
    if ((uint)local_78 != 0) {
      pwVar17 = local_80;
    }
    (**(code **)(*plVar14 + 0x60))(plVar14,pwVar17,0x9000000);
    puVar16 = (undefined8 *)(**(code **)(*plVar14 + 0x78))(plVar14,&local_70);
    if (*(int *)(puVar16 + 1) == 0) {
      puVar25 = &DAT_143f3eda8;
    }
    else {
      puVar25 = (undefined2 *)*puVar16;
    }
    pwVar17 = L"";
    if (local_88 != 0) {
      pwVar17 = local_90;
    }
    FOutputDevice::LogfImpl(param_3,L"%s = \"%s\"",pwVar17,puVar25);
    if (local_70 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    (**(code **)(*param_1 + 0x38))();
  }
  else {
    puVar16 = (undefined8 *)(**(code **)(*plVar14 + 0x78))(plVar14,&local_70);
    if (*(int *)(puVar16 + 1) == 0) {
      puVar25 = &DAT_143f3eda8;
    }
    else {
      puVar25 = (undefined2 *)*puVar16;
    }
    pwVar17 = L"";
    if (local_88 != 0) {
      pwVar17 = local_90;
    }
    FOutputDevice::LogfImpl(param_3,L"Error: %s is read only!",pwVar17,puVar25);
    if (local_70 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  if (local_80 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  bVar2 = false;
LAB_1415c67ec:
  if (cVar3 == '\0') {
    if (bVar2) goto LAB_1415c6850;
  }
  else {
    uVar19 = (**(code **)(*plVar14 + 0x18))(plVar14);
    pwVar17 = L"";
    if (local_88 != 0) {
      pwVar17 = local_90;
    }
    uVar15 = (**(code **)(*plVar14 + 8))(plVar14);
    pwVar26 = L"";
    if ((uVar19 >> 2 & 1) != 0) {
      pwVar26 = L"(ReadOnly)";
    }
    FOutputDevice::LogfImpl(param_3,L"HELP for \'%s\'%s:\n%s",pwVar17,pwVar26,uVar15);
LAB_1415c6850:
    puVar16 = (undefined8 *)(**(code **)(*plVar14 + 0x78))(plVar14,&local_70);
    if (*(int *)(puVar16 + 1) == 0) {
      puVar25 = &DAT_143f3eda8;
    }
    else {
      puVar25 = (undefined2 *)*puVar16;
    }
    pwVar17 = L"";
    if (local_88 != 0) {
      pwVar17 = local_90;
    }
    uVar8 = (**(code **)(*plVar14 + 0x18))(plVar14);
    uVar15 = GetSetByTCHAR(uVar8);
    FOutputDevice::LogfImpl(param_3,L"%s = \"%s\"      LastSetBy: %s",pwVar17,puVar25,uVar15);
    pwVar26 = local_70;
    if (local_70 != (wchar_t *)0x0) goto LAB_1415c68a9;
  }
LAB_1415c68ae:
  pwVar17 = (wchar_t *)0x1;
LAB_1415c68b1:
  if (local_90 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return pwVar17;
}



// FUNCTION 1415c6960 Read body=84 status=ok
// SIG undefined Read(void)

undefined1 FLoggedFileHandle::Read(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                    (*(longlong **)(param_1 + 8),param_2,param_3);
  QueryPerformanceCounter(&local_res8);
  return uVar1;
}



// FUNCTION 1415c69c0 ReadLowLevel body=51 status=ok
// SIG undefined ReadLowLevel(void)

void FArchiveFileReaderGeneric::ReadLowLevel
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x20))();
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = param_3;
  }
  *param_4 = uVar2;
  return;
}



// FUNCTION 1415c6a00 FUN_1415c6a00 body=486 status=ok
// SIG undefined FUN_1415c6a00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1415c6a00(undefined8 param_1,longlong *param_2,longlong *param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  LPVOID pvVar3;
  ushort *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  LOCK();
  _DAT_1468b5050 = _DAT_1468b5050 + 1;
  UNLOCK();
  if ((((((longlong *)0x7ff0 < param_3) || (0x10 < param_4)) || (DAT_1468b1f84 == 0)) ||
      (pvVar3 = TlsGetValue(DAT_1468b1f84), pvVar3 == (LPVOID)0x0)) ||
     ((param_2 != (longlong *)0x0 && ((short)param_2 == 0)))) goto LAB_1415c6bb8;
  plVar5 = (longlong *)0x0;
  plVar8 = plVar5;
  plVar7 = plVar5;
  if (param_2 != (longlong *)0x0) {
    puVar4 = (ushort *)((ulonglong)param_2 & 0xffffffffffff0000);
    plVar8 = (longlong *)(ulonglong)*puVar4;
    bVar1 = (byte)puVar4[1];
    plVar7 = (longlong *)(ulonglong)bVar1;
    if (*(char *)((longlong)puVar4 + 3) != -0x1d) goto LAB_1415c6bb8;
    if ((param_3 != (longlong *)0x0) && (param_3 <= plVar8)) {
      if (bVar1 == 0) {
        return param_2;
      }
      if ((longlong *)(ulonglong)*(ushort *)(&DAT_1468b1f90 + (ulonglong)(0x2d - bVar1) * 2) <
          param_3) {
        return param_2;
      }
    }
    if ((*(longlong *)((longlong)plVar7 * 0x20 + 0x10 + (longlong)pvVar3) != 0) &&
       ((uVar2 = *(uint *)((longlong)plVar7 * 0x20 + 8 + (longlong)pvVar3), 0x3f < uVar2 ||
        (0xffff < uVar2 * *puVar4)))) goto LAB_1415c6bb8;
  }
  if (param_3 != (longlong *)0x0) {
    plVar6 = (longlong *)
             ((ulonglong)(byte)(&DAT_1468b2000)[(longlong)param_3 + 0xfU >> 4] * 0x20 +
             (longlong)pvVar3);
    plVar5 = (longlong *)*plVar6;
    if (plVar5 == (longlong *)0x0) {
      if (plVar6[2] == 0) {
LAB_1415c6bb8:
        plVar5 = (longlong *)FUN_1415c6bf0(param_1,param_2,param_3,param_4);
        return plVar5;
      }
      *(int *)plVar6 = (int)plVar6[2];
      *(undefined4 *)((longlong)plVar6 + 4) = *(undefined4 *)((longlong)plVar6 + 0x14);
      *(int *)(plVar6 + 1) = (int)plVar6[3];
      *(undefined4 *)((longlong)plVar6 + 0xc) = *(undefined4 *)((longlong)plVar6 + 0x1c);
      plVar6[2] = 0;
      *(undefined4 *)(plVar6 + 3) = 0;
      plVar5 = (longlong *)*plVar6;
      if (plVar5 == (longlong *)0x0) goto LAB_1415c6bb8;
    }
    *(int *)(plVar6 + 1) = (int)plVar6[1] + -1;
    *plVar6 = *plVar5;
    if (param_2 == (longlong *)0x0) {
      return plVar5;
    }
    plVar6 = plVar8;
    if (param_3 <= plVar8) {
      plVar6 = param_3;
    }
    _guard_xfg_dispatch_icall_nop(plVar5,param_2,(size_t)plVar6);
  }
  if (param_2 == (longlong *)0x0) {
    return plVar5;
  }
  plVar7 = (longlong *)((longlong)plVar7 * 0x20 + (longlong)pvVar3);
  if ((0x3f < *(uint *)(plVar7 + 1)) || (0xffff < *(uint *)(plVar7 + 1) * (int)plVar8)) {
    if (plVar7[2] != 0) {
      return plVar5;
    }
    plVar7[2] = *plVar7;
    plVar7[3] = plVar7[1];
    *plVar7 = 0;
    *(undefined4 *)(plVar7 + 1) = 0;
  }
  *param_2 = *plVar7;
  param_2[1] = 0;
  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  *plVar7 = (longlong)param_2;
  return plVar5;
}



// FUNCTION 1415c6bf0 FUN_1415c6bf0 body=535 status=ok
// SIG undefined FUN_1415c6bf0(void)

void * FUN_1415c6bf0(longlong param_1,void *param_2,ulonglong param_3,uint param_4)

{
  uint uVar1;
  BOOL BVar2;
  void *pvVar3;
  longlong lVar4;
  ushort *puVar5;
  ulonglong uVar6;
  
  if (param_3 != 0) {
    if ((short)param_2 == 0) {
      if (param_2 == (void *)0x0) {
        param_2 = (void *)FUN_1415c5900(param_1,param_3,param_4);
      }
      else {
        BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x880));
        if (BVar2 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x880));
        }
        lVar4 = FMallocBinned2::Private::FindPoolInfo(param_1,param_2);
        if (lVar4 == 0) {
          LowLevelFatalErrorHandler
                    ("Unknown",0x34f,L"FMallocBinned2 Attempt to realloc an unrecognized block %p",
                     param_2);
          FDebug::AssertFailed
                    (&DAT_144ca111e,"Unknown",0x34f,
                     L"FMallocBinned2 Attempt to realloc an unrecognized block %p",param_2);
        }
        FUN_1415c0090(lVar4,0x17ea);
        uVar1 = *(uint *)(lVar4 + 4);
        if ((*(ulonglong *)(lVar4 + 8) < param_3) ||
           (((param_3 < 0x7ff1 && (param_4 < 0x11)) ||
            ((((ulonglong)DAT_1468b1ffc - 1) + param_3 & ~((ulonglong)DAT_1468b1ffc - 1)) <
             *(ulonglong *)(lVar4 + 8))))) {
          pvVar3 = (void *)FUN_1415c5900(param_1,param_3,param_4);
          uVar6 = (ulonglong)uVar1;
          if (param_3 <= uVar1) {
            uVar6 = param_3;
          }
          _guard_xfg_dispatch_icall_nop(pvVar3,param_2,uVar6);
          FUN_1415c3ac0(param_1,param_2);
          param_2 = pvVar3;
        }
        else {
          FMallocBinned2::FPoolInfo::SetOSAllocationSizes(lVar4,param_3 & 0xffffffff);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x880));
      }
    }
    else {
      puVar5 = (ushort *)((ulonglong)param_2 & 0xffffffffffff0000);
      if (*(char *)((longlong)puVar5 + 3) != -0x1d) {
        FUN_1415c0020(puVar5);
      }
      uVar6 = (ulonglong)*puVar5;
      if ((0x10 < param_4 || uVar6 < param_3) ||
         (((byte)puVar5[1] != 0 &&
          (param_3 <= *(ushort *)(&DAT_1468b1f90 + (ulonglong)(0x2d - (byte)puVar5[1]) * 2))))) {
        pvVar3 = (void *)FUN_1415c5900(param_1,param_3,param_4);
        if (param_3 <= uVar6) {
          uVar6 = param_3;
        }
        _guard_xfg_dispatch_icall_nop(pvVar3,param_2,uVar6);
        FUN_1415c3ac0(param_1,param_2);
        param_2 = pvVar3;
      }
    }
    return param_2;
  }
  FUN_1415c3ac0();
  return (void *)0x0;
}



// FUNCTION 1415c6e10 RegisterConsoleCommand body=179 status=ok
// SIG undefined RegisterConsoleCommand(void)

void FConsoleManager::RegisterConsoleCommand
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
               undefined4 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FConsoleCommandBase::FConsoleCommandBase(puVar1,param_3,param_5);
    *puVar1 = &PTR__scalar_deleting_destructor__144cad380;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    if (((param_4 != puVar1 + 4) && ((int)param_4[1] != 0)) &&
       ((longlong *)*param_4 != (longlong *)0x0)) {
      (**(code **)(*(longlong *)*param_4 + 0x30))();
    }
  }
  plVar2 = (longlong *)FUN_1415bf780(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415c6ebf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x50))(plVar2);
  return;
}



// FUNCTION 1415c6ed0 RegisterConsoleCommand body=179 status=ok
// SIG undefined RegisterConsoleCommand(void)

void FConsoleManager::RegisterConsoleCommand
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
               undefined4 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FConsoleCommandBase::FConsoleCommandBase(puVar1,param_3,param_5);
    *puVar1 = &PTR__scalar_deleting_destructor__144cad650;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    if (((param_4 != puVar1 + 4) && ((int)param_4[1] != 0)) &&
       ((longlong *)*param_4 != (longlong *)0x0)) {
      (**(code **)(*(longlong *)*param_4 + 0x30))();
    }
  }
  plVar2 = (longlong *)FUN_1415bf780(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415c6f7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x50))(plVar2);
  return;
}



// FUNCTION 1415c6f90 RegisterConsoleCommand body=179 status=ok
// SIG undefined RegisterConsoleCommand(void)

void FConsoleManager::RegisterConsoleCommand
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
               undefined4 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FConsoleCommandBase::FConsoleCommandBase(puVar1,param_3,param_5);
    *puVar1 = &PTR__scalar_deleting_destructor__144cad3f8;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    if (((param_4 != puVar1 + 4) && ((int)param_4[1] != 0)) &&
       ((longlong *)*param_4 != (longlong *)0x0)) {
      (**(code **)(*(longlong *)*param_4 + 0x30))();
    }
  }
  plVar2 = (longlong *)FUN_1415bf780(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415c703f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x50))(plVar2);
  return;
}



// FUNCTION 1415c7050 RegisterConsoleCommand body=179 status=ok
// SIG undefined RegisterConsoleCommand(void)

void FConsoleManager::RegisterConsoleCommand
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
               undefined4 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FConsoleCommandBase::FConsoleCommandBase(puVar1,param_3,param_5);
    *puVar1 = &PTR__scalar_deleting_destructor__144cad5d8;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    if (((param_4 != puVar1 + 4) && ((int)param_4[1] != 0)) &&
       ((longlong *)*param_4 != (longlong *)0x0)) {
      (**(code **)(*(longlong *)*param_4 + 0x30))();
    }
  }
  plVar2 = (longlong *)FUN_1415bf780(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415c70ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x50))(plVar2);
  return;
}



// FUNCTION 1415c7110 RegisterConsoleCommand body=179 status=ok
// SIG undefined RegisterConsoleCommand(void)

void FConsoleManager::RegisterConsoleCommand
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
               undefined4 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FConsoleCommandBase::FConsoleCommandBase(puVar1,param_3,param_5);
    *puVar1 = &PTR__scalar_deleting_destructor__144cad4e8;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    if (((param_4 != puVar1 + 4) && ((int)param_4[1] != 0)) &&
       ((longlong *)*param_4 != (longlong *)0x0)) {
      (**(code **)(*(longlong *)*param_4 + 0x30))();
    }
  }
  plVar2 = (longlong *)FUN_1415bf780(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415c71bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x50))(plVar2);
  return;
}



// FUNCTION 1415c71d0 RegisterConsoleCommand body=179 status=ok
// SIG undefined RegisterConsoleCommand(void)

void FConsoleManager::RegisterConsoleCommand
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
               undefined4 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FConsoleCommandBase::FConsoleCommandBase(puVar1,param_3,param_5);
    *puVar1 = &PTR__scalar_deleting_destructor__144cad560;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    if (((param_4 != puVar1 + 4) && ((int)param_4[1] != 0)) &&
       ((longlong *)*param_4 != (longlong *)0x0)) {
      (**(code **)(*(longlong *)*param_4 + 0x30))();
    }
  }
  plVar2 = (longlong *)FUN_1415bf780(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415c727f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x50))(plVar2);
  return;
}



// FUNCTION 1415c7290 RegisterConsoleCommand body=179 status=ok
// SIG undefined RegisterConsoleCommand(void)

void FConsoleManager::RegisterConsoleCommand
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
               undefined4 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FConsoleCommandBase::FConsoleCommandBase(puVar1,param_3,param_5);
    *puVar1 = &PTR__scalar_deleting_destructor__144cad470;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    if (((param_4 != puVar1 + 4) && ((int)param_4[1] != 0)) &&
       ((longlong *)*param_4 != (longlong *)0x0)) {
      (**(code **)(*(longlong *)*param_4 + 0x30))();
    }
  }
  plVar2 = (longlong *)FUN_1415bf780(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415c733f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x50))(plVar2);
  return;
}



// FUNCTION 1415c7350 RegisterConsoleCommand body=134 status=ok
// SIG undefined RegisterConsoleCommand(void)

void FConsoleManager::RegisterConsoleCommand
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FConsoleCommandBase::FConsoleCommandBase(puVar1,param_3,param_4);
    *puVar1 = &PTR_FUN_144cad6c8;
  }
  plVar2 = (longlong *)FUN_1415bf780(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415c73d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x50))(plVar2);
  return;
}



// FUNCTION 1415c73e0 RegisterConsoleVariable body=333 status=ok
// SIG undefined RegisterConsoleVariable(void)

void FConsoleManager::RegisterConsoleVariable
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  puVar2 = (undefined8 *)operator_new(0x58);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    plVar3 = (longlong *)FString::FString(local_58,param_3);
    FConsoleVariableBase::FConsoleVariableBase(puVar2,param_4,param_5);
    *puVar2 = &PTR__scalar_deleting_destructor__144cad1e8;
    plVar4 = (longlong *)FString::FString(local_48,plVar3);
    plVar5 = puVar2 + 7;
    *plVar5 = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    lVar6 = 2;
    puVar2[10] = 0;
    do {
      if (plVar5 != plVar4) {
        iVar1 = (int)plVar4[1];
        _Src = (void *)*plVar4;
        *(int *)(plVar5 + 1) = iVar1;
        if ((iVar1 == 0) && (*(int *)((longlong)plVar5 + 0xc) == 0)) {
          *(undefined4 *)((longlong)plVar5 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar5,iVar1);
          ::_guard_xfg_dispatch_icall_nop((void *)*plVar5,_Src,(longlong)iVar1 * 2);
        }
      }
      plVar5 = plVar5 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    if (*plVar3 != 0) {
      FMemory::Free();
    }
  }
  plVar5 = (longlong *)FUN_1415bf780(param_1,param_2,puVar2);
  (**(code **)(*plVar5 + 0x28))(plVar5);
  return;
}



// FUNCTION 1415c7530 RegisterConsoleVariable body=142 status=ok
// SIG undefined RegisterConsoleVariable(void)

void FConsoleManager::RegisterConsoleVariable
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FConsoleVariableBase::FConsoleVariableBase(puVar1,param_4,param_5);
    *puVar1 = &PTR__scalar_deleting_destructor__144cad0d8;
    *(undefined4 *)(puVar1 + 7) = param_3;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = param_3;
  }
  plVar2 = (longlong *)FUN_1415bf780(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415c75ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}



// FUNCTION 1415c75c0 RegisterConsoleVariable body=144 status=ok
// SIG undefined RegisterConsoleVariable(void)

void FConsoleManager::RegisterConsoleVariable
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FConsoleVariableBase::FConsoleVariableBase(puVar1,param_4,param_5);
    *puVar1 = &PTR__scalar_deleting_destructor__144cad160;
    *(undefined4 *)(puVar1 + 7) = param_3;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = param_3;
  }
  plVar2 = (longlong *)FUN_1415bf780(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415c764c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}



// FUNCTION 1415c7650 RegisterConsoleVariableBitRef body=144 status=ok
// SIG undefined RegisterConsoleVariableBitRef(void)

void FConsoleManager::RegisterConsoleVariableBitRef
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FConsoleVariableBase::FConsoleVariableBase(puVar1,param_7,param_8);
    *puVar1 = &PTR__scalar_deleting_destructor__144cad2f8;
    puVar1[7] = param_5;
    puVar1[8] = param_6;
    *(undefined4 *)(puVar1 + 9) = param_4;
  }
  plVar2 = (longlong *)FUN_1415bf780(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415c76dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}



// FUNCTION 1415c76e0 RegisterConsoleVariableRef body=145 status=ok
// SIG undefined RegisterConsoleVariableRef(void)

void FConsoleManager::RegisterConsoleVariableRef
               (undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
               undefined4 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)operator_new(0x48);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FConsoleVariableBase::FConsoleVariableBase(puVar1,param_4,param_5);
    puVar1[7] = param_3;
    *puVar1 = &PTR__scalar_deleting_destructor__144cad740;
    *(undefined4 *)(puVar1 + 8) = *param_3;
  }
  plVar2 = (longlong *)FUN_1415bf780(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415c776d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}



// FUNCTION 1415c7780 RegisterConsoleVariableRef body=145 status=ok
// SIG undefined RegisterConsoleVariableRef(void)

void FConsoleManager::RegisterConsoleVariableRef
               (undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
               undefined4 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)operator_new(0x48);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FConsoleVariableBase::FConsoleVariableBase(puVar1,param_4,param_5);
    puVar1[7] = param_3;
    *puVar1 = &PTR__scalar_deleting_destructor__144cad270;
    *(undefined4 *)(puVar1 + 8) = *param_3;
  }
  plVar2 = (longlong *)FUN_1415bf780(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415c780d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}



// FUNCTION 1415c7820 RegisterConsoleVariableRef body=146 status=ok
// SIG undefined RegisterConsoleVariableRef(void)

void FConsoleManager::RegisterConsoleVariableRef
               (undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
               undefined4 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)operator_new(0x48);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FConsoleVariableBase::FConsoleVariableBase(puVar1,param_4,param_5);
    puVar1[7] = param_3;
    *puVar1 = &PTR__scalar_deleting_destructor__144cad7c8;
    *(undefined1 *)(puVar1 + 8) = *param_3;
  }
  plVar2 = (longlong *)FUN_1415bf780(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415c78ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}



// FUNCTION 1415c78c0 RegisterConsoleVariableSink_Handle body=159 status=ok
// SIG undefined RegisterConsoleVariableSink_Handle(void)

undefined8 *
FConsoleManager::RegisterConsoleVariableSink_Handle
          (longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  iVar1 = *(int *)(param_1 + 0xb8);
  *(int *)(param_1 + 0xb8) = iVar1 + 1;
  if (*(int *)(param_1 + 0xbc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0xb0),iVar1);
  }
  plVar3 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0xb0));
  *plVar3 = 0;
  *(undefined4 *)(plVar3 + 1) = 0;
  if (param_3 != plVar3) {
    if ((int)param_3[1] == 0) goto LAB_1415c7944;
    if ((longlong *)*param_3 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_3 + 0x30))();
    }
  }
  if (((int)param_3[1] != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
    return param_2;
  }
LAB_1415c7944:
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1415c7970 Reset body=272 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<FString,TArray<FString,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,FDefaultAllocator>,0>,FDefaultSetAllocator>
     ::Reset(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>
                (*local_38 + (longlong)local_1c * 0x28);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      uVar2 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar3 + uVar2 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1415c7a80 FUN_1415c7a80 body=1350 status=ok
// SIG undefined FUN_1415c7a80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415c7a80(longlong param_1)

{
  wchar_t *pwVar1;
  uint uVar2;
  uint uVar3;
  void *_Src;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined2 *puVar11;
  uint uVar12;
  uint *puVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  uint *puVar18;
  undefined8 *puVar19;
  undefined1 auStack_278 [32];
  longlong *local_258;
  int local_250;
  int local_24c;
  undefined2 *local_248;
  undefined8 local_240;
  longlong *local_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  uint uStack_220;
  uint uStack_21c;
  undefined8 uStack_218;
  longlong *local_210;
  undefined8 local_208;
  int local_200 [2];
  int local_1f8;
  uint uStack_1f4;
  uint *puStack_1f0;
  undefined4 local_1e8;
  uint uStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  longlong *local_1d8;
  int local_1d0;
  int local_1cc;
  undefined1 *local_1c8;
  longlong **local_1c0;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a8 [8];
  ulonglong local_1a0;
  longlong *local_198;
  int iStack_190;
  uint uStack_18c;
  uint *local_188;
  uint uStack_180;
  uint uStack_17c;
  undefined8 local_178;
  longlong local_170 [3];
  longlong local_158 [10];
  undefined1 local_108;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  FConfigFile::FConfigFile(local_158);
  local_240 = 0xf;
  local_248 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
  puVar15 = local_248;
  FGenericPlatformString::Memcpy(local_248,L"ConsoleHistory",0x1e);
  FName::FName(local_1a8,L"History",1);
  local_258 = (longlong *)(param_1 + 0x60);
  uStack_1f4 = 1;
  uVar2 = *(uint *)(param_1 + 0x88);
  puVar18 = (uint *)(param_1 + 0x70);
  local_1f8 = 0;
  uStack_1e4 = 0;
  iStack_1e0 = 0;
  if (uVar2 != 0) {
    puVar13 = *(uint **)(param_1 + 0x80);
    if (*(uint **)(param_1 + 0x80) == (uint *)0x0) {
      puVar13 = puVar18;
    }
    uVar3 = *puVar13;
    iStack_1e0 = 0;
    local_1f8 = 0;
    while (uVar3 == 0) {
      lVar8 = (longlong)local_1f8;
      iStack_1e0 = iStack_1e0 + 0x20;
      iVar7 = local_1f8 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_1f8;
      local_1f8 = iVar7;
      if (bVar4) goto LAB_1415c7bbc;
      uVar3 = puVar13[lVar8 + 1];
    }
    uStack_1f4 = -uVar3 & uVar3;
    iVar7 = 0x1f;
    if (uStack_1f4 != 0) {
      for (; uStack_1f4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_1f4 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_1e4 = (iStack_1e0 - iVar7) + 0x1f;
    if ((int)uVar2 < (int)uStack_1e4) {
LAB_1415c7bbc:
      uStack_1e4 = uVar2;
    }
  }
  local_1e8 = 0xffffffff;
  uVar3 = *(uint *)(param_1 + 0x88);
  uStack_230 = CONCAT44(uStack_1f4,local_1f8);
  uStack_180 = 0xffffffff;
  uStack_17c = uStack_1e4;
  uStack_218 = CONCAT44(uStack_1dc,iStack_1e0);
  uVar10 = -1 << ((byte)uVar3 & 0x1f);
  uVar12 = uVar3 & 0xffffffe0;
  uStack_228 = CONCAT44(uVar3,uVar10);
  iStack_190 = local_1f8;
  uStack_18c = uStack_1f4;
  if (uVar3 != uVar2) {
    puVar13 = *(uint **)(param_1 + 0x80);
    if (*(uint **)(param_1 + 0x80) == (uint *)0x0) {
      puVar13 = puVar18;
    }
    uVar10 = puVar13[(int)uVar3 >> 5] & uVar10;
    iVar7 = (int)uVar3 >> 5;
    while (uVar10 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1415c7c93;
      uVar10 = puVar13[(longlong)iVar7 + 1];
      uStack_228 = 0xffffffff;
      iVar7 = iVar7 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    iVar7 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iVar7 = (uVar12 - iVar7) + 0x1f;
    uStack_228 = CONCAT44(iVar7,(undefined4)uStack_228);
    if ((int)uVar2 < iVar7) {
LAB_1415c7c93:
      uStack_228 = CONCAT44(uVar2,(undefined4)uStack_228);
    }
  }
  uVar17 = uStack_228 >> 0x20;
  local_238 = local_258;
  puStack_1f0 = puVar18;
  local_1a0 = uVar17;
  local_188 = puVar18;
  local_178 = uStack_218;
  local_198 = local_258;
  uStack_220 = uStack_180;
  uStack_21c = uStack_17c;
  while (((uStack_17c != (uint)uVar17 || (local_188 != puVar18)) || (local_198 != local_258))) {
    puVar19 = (undefined8 *)(*local_198 + (longlong)(int)uStack_17c * 0x28);
    if (*(int *)(*local_198 + 8 + (longlong)(int)uStack_17c * 0x28) == 0) {
      puVar14 = &DAT_143f3eda8;
    }
    else {
      puVar14 = (undefined2 *)*puVar19;
    }
    puVar11 = &DAT_143f3eda8;
    if ((int)local_240 != 0) {
      puVar11 = puVar15;
    }
    FString::PrintfImpl(local_170,L"%s%s",puVar11,puVar14);
    local_1b0 = local_170;
    FUN_1415bc250(local_158,local_200,&local_1b0,0);
    lVar8 = (longlong)local_200[0] * 0xb8 + local_158[0];
    if (local_170[0] != 0) {
      FMemory::Free();
    }
    puVar9 = (undefined8 *)puVar19[2];
    puVar19 = puVar9 + (longlong)*(int *)(puVar19 + 3) * 2;
    if (puVar9 != puVar19) {
      local_1c8 = local_1a8;
      local_1c0 = &local_238;
      do {
        iVar7 = *(int *)(puVar9 + 1);
        _Src = (void *)*puVar9;
        local_210 = (longlong *)0x0;
        uVar16 = 0;
        plVar6 = (longlong *)0x0;
        if (iVar7 != 0) {
          local_208._0_4_ = iVar7;
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_210,iVar7,0);
          plVar6 = local_210;
          _guard_xfg_dispatch_icall_nop(local_210,_Src,(longlong)iVar7 * 2);
          iVar7 = (int)local_208;
          uVar16 = local_208._4_4_;
        }
        local_210 = (longlong *)0x0;
        uStack_230 = CONCAT44(uVar16,iVar7);
        local_208 = 0;
        uStack_228 = 0;
        uStack_220 = 0;
        uStack_21c = 0;
        local_238 = plVar6;
        cVar5 = FConfigValue::ExpandValue(&local_238,&uStack_228);
        if ((cVar5 == '\0') && (uStack_220 = 0, uStack_21c != 0)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&uStack_228,0);
        }
        FUN_1415bc5a0(lVar8 + 0x10,local_1b8,&local_1c8,0);
        if (uStack_228 != 0) {
          FMemory::Free();
        }
        if (local_238 != (longlong *)0x0) {
          FMemory::Free();
        }
        puVar9 = puVar9 + 2;
        uVar17 = local_1a0;
        puVar18 = puStack_1f0;
      } while (puVar9 != puVar19);
    }
    uStack_180 = uStack_180 & ~uStack_18c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_190);
    puVar15 = local_248;
  }
  plVar6 = (longlong *)FPaths::GeneratedConfigDir(&local_1c8);
  lVar8 = plVar6[1];
  local_258 = (longlong *)*plVar6;
  *plVar6 = 0;
  local_250 = (int)plVar6[1];
  local_24c = *(int *)((longlong)plVar6 + 0xc);
  plVar6[1] = 0;
  iVar7 = local_250;
  if (local_24c < (int)((0x13 - (uint)((int)lVar8 != 0)) + local_250)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_258);
    iVar7 = local_250;
  }
  local_250 = (0x13 - (uint)(iVar7 != 0)) + iVar7;
  if (local_24c < local_250) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_258,iVar7);
  }
  lVar8 = (longlong)iVar7 - (ulonglong)(iVar7 != 0);
  builtin_wcsncpy((wchar_t *)((longlong)local_258 + lVar8 * 2),L"ConsoleH",8);
  pwVar1 = (wchar_t *)((longlong)local_258 + lVar8 * 2 + 0x10);
  pwVar1[0] = L'i';
  pwVar1[1] = L's';
  pwVar1 = (wchar_t *)((longlong)local_258 + lVar8 * 2 + 0x14);
  pwVar1[0] = L't';
  pwVar1[1] = L'o';
  pwVar1 = (wchar_t *)((longlong)local_258 + lVar8 * 2 + 0x18);
  pwVar1[0] = L'r';
  pwVar1[1] = L'y';
  pwVar1 = (wchar_t *)((longlong)local_258 + lVar8 * 2 + 0x1c);
  pwVar1[0] = L'.';
  pwVar1[1] = L'i';
  *(undefined4 *)((longlong)local_258 + lVar8 * 2 + 0x20) = 0x69006e;
  *(undefined2 *)((longlong)local_258 + lVar8 * 2 + 0x24) = 0;
  local_1d8 = local_258;
  local_1d0 = local_250;
  local_1cc = local_24c;
  if (local_1c8 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  local_108 = 1;
  local_248 = (undefined2 *)0x0;
  local_240 = 0;
  FConfigFile::Write(local_158,&local_1d8,1,&local_248);
  if (local_248 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_1d8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (puVar15 != (undefined2 *)0x0) {
    FMemory::Free(puVar15);
  }
  FConfigFile::~FConfigFile(local_158);
  return;
}



// FUNCTION 1415c7fd0 FUN_1415c7fd0 body=69 status=ok
// SIG undefined FUN_1415c7fd0(void)

void FUN_1415c7fd0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x1f0))();
  if (cVar1 == '\0') {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x80;
  }
  param_1[0x15] = param_2;
  param_1[0x16] = param_2;
  param_1[0x17] = 0;
  return;
}



// FUNCTION 1415c8020 FUN_1415c8020 body=76 status=ok
// SIG undefined FUN_1415c8020(void)

void FUN_1415c8020(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  FUN_1415c2db0();
  cVar1 = (**(code **)(*param_1 + 0x1f0))(param_1,param_2);
  param_1[0x14] = param_2;
  if ((cVar1 == '\0') &&
     (*(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x80, (char)param_1[0x217] == '\0')) {
    *(undefined1 *)(param_1 + 0x217) = 0;
  }
  return;
}



// FUNCTION 1415c8070 Seek body=68 status=ok
// SIG undefined Seek(void)

undefined1 FLoggedFileHandle::Seek(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),param_2);
  QueryPerformanceCounter(&local_res8);
  return uVar1;
}



// FUNCTION 1415c80c0 SeekFromEnd body=68 status=ok
// SIG undefined SeekFromEnd(void)

undefined1 FLoggedFileHandle::SeekFromEnd(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2);
  QueryPerformanceCounter(&local_res8);
  return uVar1;
}



// FUNCTION 1415c8130 FUN_1415c8130 body=58 status=ok
// SIG undefined FUN_1415c8130(void)

void FUN_1415c8130(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FPlatformFileManager::Get();
  plVar2 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415c8163. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x178))(plVar2,param_2,param_3);
  return;
}



// FUNCTION 1415c8170 FUN_1415c8170 body=466 status=ok
// SIG undefined FUN_1415c8170(void)

void FUN_1415c8170(longlong *param_1,void *param_2,ulonglong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong local_38 [2];
  
  lVar4 = param_1[0x15];
  if (param_1[0x14] < (longlong)(lVar4 + param_3)) {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x80;
    return;
  }
  if (0 < (longlong)param_3) {
    do {
      lVar3 = param_1[0x16];
      uVar2 = param_1[0x17];
      uVar5 = (lVar3 - lVar4) + uVar2;
      if ((longlong)param_3 <= (longlong)uVar5) {
        uVar5 = param_3;
      }
      if ((longlong)uVar5 < 1) {
        if (0x3ff < param_3) {
          local_38[0] = 0;
          (**(code **)(*param_1 + 0x200))(param_1,param_2,param_3,local_38);
          if (local_38[0] != param_3) {
            *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x80;
          }
          param_1[0x15] = param_1[0x15] + param_3;
          return;
        }
        if (((lVar3 == 0) || (uVar2 == 0)) || (lVar3 != lVar4)) {
          param_1[0x16] = lVar4;
          local_38[0] = 0;
          uVar2 = 0x400 - (ulonglong)((uint)lVar4 & 0x3ff);
          if (0x7ffffffe < (longlong)uVar2) {
            uVar2 = 0x7fffffff;
          }
          uVar5 = param_1[0x14] - lVar4;
          if ((longlong)uVar2 <= param_1[0x14] - lVar4) {
            uVar5 = uVar2;
          }
          uVar2 = 0;
          if (-1 < (longlong)uVar5) {
            uVar2 = uVar5;
          }
          param_1[0x17] = uVar2;
          if ((0x400 < uVar2) || ((longlong)uVar2 < 1)) {
            *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x80;
            return;
          }
          (**(code **)(*param_1 + 0x200))(param_1,param_1 + 0x19,uVar2,local_38);
          uVar2 = param_1[0x17];
          if (local_38[0] != uVar2) {
            *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x80;
          }
        }
        lVar3 = param_1[0x16];
        lVar4 = param_1[0x15];
        uVar5 = (lVar3 - lVar4) + uVar2;
        bVar1 = *(byte *)(param_1 + 5);
        if ((longlong)param_3 <= (longlong)uVar5) {
          uVar5 = param_3;
        }
        if ((longlong)uVar5 < 1) {
          bVar1 = bVar1 | 0x80;
          *(byte *)(param_1 + 5) = bVar1;
        }
        if ((char)bVar1 < '\0') {
          return;
        }
      }
      _guard_xfg_dispatch_icall_nop
                (param_2,(void *)((longlong)param_1 + lVar4 + (200 - lVar3)),uVar5);
      param_1[0x15] = param_1[0x15] + uVar5;
      param_3 = param_3 - uVar5;
      lVar4 = param_1[0x15];
      param_2 = (void *)((longlong)param_2 + uVar5);
    } while (0 < (longlong)param_3);
  }
  return;
}



// FUNCTION 1415c8350 Serialize body=8 status=ok
// SIG undefined Serialize(void)

void FArchiveFileWriterDummy::Serialize(longlong param_1,undefined8 param_2,longlong param_3)

{
  *(longlong *)(param_1 + 0x90) = *(longlong *)(param_1 + 0x90) + param_3;
  return;
}



// FUNCTION 1415c8360 FUN_1415c8360 body=338 status=ok
// SIG undefined FUN_1415c8360(void)

void FUN_1415c8360(longlong *param_1,void *param_2,size_t param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  size_t _Size;
  
  param_1[0x14] = param_1[0x14] + param_3;
  if (param_3 < 0x1000) {
    lVar3 = param_1[0x15];
    _Size = 0x1000 - lVar3;
    if ((longlong)_Size < (longlong)param_3) {
      do {
        _guard_xfg_dispatch_icall_nop((void *)(lVar3 + (longlong)(param_1 + 0x17)),param_2,_Size);
        param_1[0x15] = param_1[0x15] + _Size;
        param_3 = param_3 - _Size;
        param_2 = (void *)((longlong)param_2 + _Size);
        if (param_1[0x15] != 0) {
          cVar2 = (**(code **)(*param_1 + 0x200))(param_1,param_1 + 0x17,param_1[0x15]);
          if ((cVar2 == '\0') &&
             (*(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x80, (char)param_1[0x217] == '\0'))
          {
            *(undefined1 *)(param_1 + 0x217) = 0;
          }
          param_1[0x15] = 0;
        }
        lVar3 = 0;
        plVar1 = (longlong *)param_1[0x16];
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x30))(plVar1,0);
          lVar3 = param_1[0x15];
        }
        _Size = 0x1000 - lVar3;
      } while ((longlong)_Size < (longlong)param_3);
    }
    if (param_3 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar3 + 0xb8 + (longlong)param_1),param_2,param_3);
      param_1[0x15] = param_1[0x15] + param_3;
    }
  }
  else {
    FUN_1415c2db0();
    cVar2 = (**(code **)(*param_1 + 0x200))(param_1,param_2,param_3);
    if ((cVar2 == '\0') &&
       (*(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x80, (char)param_1[0x217] == '\0')) {
      *(undefined1 *)(param_1 + 0x217) = 0;
      return;
    }
  }
  return;
}



// FUNCTION 1415c84c0 Set body=152 status=ok
// SIG undefined Set(void)

void FConsoleVariable<int>::Set(longlong param_1,wchar_t *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  
  cVar1 = FConsoleVariableBase::CanChange(param_1,param_3);
  if (cVar1 != '\0') {
    iVar2 = _wtoi(param_2);
    *(int *)(param_1 + 0x38) = iVar2;
    FUN_1415bc7b0(param_1 + 0x3c,param_1 + 0x38,*(undefined4 *)(param_1 + 0x18));
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffff | param_3;
    if ((*(int *)(param_1 + 0x28) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x28) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x20);
        }
        (**(code **)(*plVar3 + 0x40))(plVar3,param_1);
      }
    }
  }
  return;
}



// FUNCTION 1415c8560 Set body=161 status=ok
// SIG undefined Set(void)

void FConsoleVariable<float>::Set(longlong param_1,wchar_t *param_2,uint param_3)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  
  cVar1 = FConsoleVariableBase::CanChange(param_1,param_3);
  if (cVar1 != '\0') {
    dVar3 = _wtof(param_2);
    *(float *)(param_1 + 0x38) = (float)dVar3;
    FUN_1415bc850(param_1 + 0x3c,param_1 + 0x38,*(undefined4 *)(param_1 + 0x18));
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffff | param_3;
    if ((*(int *)(param_1 + 0x28) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x28) == 0) {
          plVar2 = (longlong *)0x0;
        }
        else {
          plVar2 = *(longlong **)(param_1 + 0x20);
        }
        (**(code **)(*plVar2 + 0x40))(plVar2,param_1);
      }
    }
  }
  return;
}



// FUNCTION 1415c8610 FUN_1415c8610 body=377 status=ok
// SIG undefined FUN_1415c8610(void)

void FUN_1415c8610(longlong param_1,short *param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  DWORD DVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  cVar3 = FConsoleVariableBase::CanChange(param_1,param_3);
  if (cVar3 != '\0') {
    plVar10 = (longlong *)0x0;
    if (*(short **)(param_1 + 0x38) != param_2) {
      plVar9 = plVar10;
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        lVar8 = -1;
        do {
          lVar8 = lVar8 + 1;
        } while (param_2[lVar8] != 0);
        plVar9 = (longlong *)(ulonglong)((int)lVar8 + 1);
      }
      *(undefined4 *)(param_1 + 0x40) = 0;
      iVar7 = (int)plVar9;
      plVar6 = plVar10;
      if (*(int *)(param_1 + 0x44) != iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x38,plVar9);
        plVar6 = (longlong *)(ulonglong)*(uint *)(param_1 + 0x40);
      }
      iVar4 = (int)plVar6 + iVar7;
      *(int *)(param_1 + 0x40) = iVar4;
      if (*(int *)(param_1 + 0x44) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x38);
      }
      if (iVar7 != 0) {
        _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x38),param_2,(longlong)iVar7 * 2);
      }
    }
    uVar1 = *(uint *)(param_1 + 0x18);
    if (DAT_1468b1f88 == 0) {
      IConsoleManager::SetupSingleton();
    }
    lVar8 = DAT_1468b1f88;
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)) {
      if (((uVar1 & 0x20) == 0) ||
         (puVar2 = *(undefined8 **)(lVar8 + 0xc0), puVar2 == (undefined8 *)0x0)) {
        FString::operator=(param_1 + 0x48,param_1 + 0x38);
      }
      else {
        (**(code **)*puVar2)(puVar2,param_1 + 0x48,param_1 + 0x38);
      }
    }
    *(undefined1 *)(lVar8 + 0xcc) = 1;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffff;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | param_3;
    if (((*(int *)(param_1 + 0x28) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) &&
       (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))(), cVar3 != '\0')) {
      if (*(int *)(param_1 + 0x28) != 0) {
        plVar10 = *(longlong **)(param_1 + 0x20);
      }
      (**(code **)(*plVar10 + 0x40))(plVar10,param_1);
    }
  }
  return;
}



// FUNCTION 1415c8790 Set body=166 status=ok
// SIG undefined Set(void)

void FConsoleVariableRef<int>::Set(longlong param_1,wchar_t *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  
  cVar1 = FConsoleVariableBase::CanChange(param_1,param_3);
  if (cVar1 != '\0') {
    iVar2 = _wtoi(param_2);
    *(int *)(param_1 + 0x40) = iVar2;
    cVar1 = FConsoleVariableBase::CanChange(param_1,param_3);
    if (cVar1 != '\0') {
      FUN_1415bc7b0(*(undefined8 *)(param_1 + 0x38),param_1 + 0x40,*(undefined4 *)(param_1 + 0x18));
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffff | param_3;
      if (((*(int *)(param_1 + 0x28) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0))
         && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))(), cVar1 != '\0')) {
        if (*(int *)(param_1 + 0x28) == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x20);
        }
        (**(code **)(*plVar3 + 0x40))(plVar3,param_1);
      }
    }
  }
  return;
}



// FUNCTION 1415c8840 Set body=175 status=ok
// SIG undefined Set(void)

void FConsoleVariableRef<float>::Set(longlong param_1,wchar_t *param_2,uint param_3)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  
  cVar1 = FConsoleVariableBase::CanChange(param_1,param_3);
  if (cVar1 != '\0') {
    dVar3 = _wtof(param_2);
    *(float *)(param_1 + 0x40) = (float)dVar3;
    cVar1 = FConsoleVariableBase::CanChange(param_1,param_3);
    if (cVar1 != '\0') {
      FUN_1415bc850(*(undefined8 *)(param_1 + 0x38),param_1 + 0x40,*(undefined4 *)(param_1 + 0x18));
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffff | param_3;
      if (((*(int *)(param_1 + 0x28) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0))
         && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))(), cVar1 != '\0')) {
        if (*(int *)(param_1 + 0x28) == 0) {
          plVar2 = (longlong *)0x0;
        }
        else {
          plVar2 = *(longlong **)(param_1 + 0x20);
        }
        (**(code **)(*plVar2 + 0x40))(plVar2,param_1);
      }
    }
  }
  return;
}



// FUNCTION 1415c88f0 FUN_1415c88f0 body=285 status=ok
// SIG undefined FUN_1415c88f0(void)

void FUN_1415c88f0(longlong param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  DWORD DVar6;
  longlong *plVar7;
  
  cVar4 = FConsoleVariableBase::CanChange(param_1,param_3);
  if (cVar4 == '\0') {
    return;
  }
  uVar5 = FToBoolHelper::FromCStringWide(param_2);
  *(undefined1 *)(param_1 + 0x40) = uVar5;
  cVar4 = FConsoleVariableBase::CanChange(param_1,param_3);
  if (cVar4 != '\0') {
    uVar1 = *(uint *)(param_1 + 0x18);
    puVar2 = *(undefined1 **)(param_1 + 0x38);
    if (DAT_1468b1f88 == 0) {
      IConsoleManager::SetupSingleton();
    }
    lVar3 = DAT_1468b1f88;
    cVar4 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
      if (((uVar1 & 0x20) == 0) ||
         (plVar7 = *(longlong **)(lVar3 + 0xc0), plVar7 == (longlong *)0x0)) {
        *puVar2 = *(undefined1 *)(param_1 + 0x40);
      }
      else {
        (**(code **)(*plVar7 + 8))(plVar7,puVar2,*(undefined1 *)(param_1 + 0x40));
      }
    }
    *(undefined1 *)(lVar3 + 0xcc) = 1;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffff;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | param_3;
    if (((*(int *)(param_1 + 0x28) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))(), cVar4 != '\0')) {
      if (*(int *)(param_1 + 0x28) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(param_1 + 0x20);
      }
      (**(code **)(*plVar7 + 0x40))(plVar7,param_1);
    }
    return;
  }
  return;
}



// FUNCTION 1415c8a10 FUN_1415c8a10 body=218 status=ok
// SIG undefined FUN_1415c8a10(void)

void FUN_1415c8a10(longlong param_1,wchar_t *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  longlong *plVar5;
  byte bVar6;
  
  cVar1 = FConsoleVariableBase::CanChange(param_1,param_3);
  if (cVar1 != '\0') {
    iVar2 = _wtoi(param_2);
    pbVar3 = (byte *)((ulonglong)(*(uint *)(param_1 + 0x48) >> 3) + *(longlong *)(param_1 + 0x38));
    bVar6 = '\x01' << ((byte)*(uint *)(param_1 + 0x48) & 7);
    bVar4 = *pbVar3;
    if (iVar2 == 0) {
      bVar4 = bVar4 | bVar6;
    }
    else {
      bVar4 = bVar4 & ~bVar6;
    }
    *pbVar3 = bVar4;
    pbVar3 = (byte *)((ulonglong)(*(uint *)(param_1 + 0x48) >> 3) + *(longlong *)(param_1 + 0x40));
    bVar6 = '\x01' << ((byte)*(uint *)(param_1 + 0x48) & 7);
    bVar4 = *pbVar3;
    if (iVar2 == 1) {
      bVar4 = bVar4 | bVar6;
    }
    else {
      bVar4 = bVar4 & ~bVar6;
    }
    *pbVar3 = bVar4;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffff;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | param_3;
    if ((*(int *)(param_1 + 0x28) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0x28) == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)(param_1 + 0x20);
        }
        (**(code **)(*plVar5 + 0x40))(plVar5,param_1);
      }
    }
  }
  return;
}



// FUNCTION 1415c8af0 FUN_1415c8af0 body=452 status=ok
// SIG undefined FUN_1415c8af0(void)

void FUN_1415c8af0(longlong param_1,short param_2,char param_3,char param_4)

{
  short *psVar1;
  short sVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  
  psVar1 = (short *)(param_1 + 2);
  if (param_3 == '\0') {
    sVar2 = *psVar1;
    if (param_4 == '\0') {
      if ((sVar2 == param_2) || (sVar2 == 0x3941)) goto LAB_1415c8ca1;
      LowLevelFatalErrorHandler
                ("Unknown",0xac,
                 L"MallocBinned2 Corruption Canary was 0x%x, will be 0x%x does not have an expected value."
                 ,sVar2,param_2);
      pwVar4 = 
      L"MallocBinned2 Corruption Canary was 0x%x, will be 0x%x does not have an expected value.";
      uVar3 = 0xac;
    }
    else {
      if (sVar2 == 0x3941) goto LAB_1415c8ca1;
      LowLevelFatalErrorHandler
                ("Unknown",0xa7,
                 L"MallocBinned2 Corruption Canary was 0x%x, will be 0x%x. This block is guaranteed to be new yet is it already assigned."
                 ,sVar2,param_2);
      pwVar4 = 
      L"MallocBinned2 Corruption Canary was 0x%x, will be 0x%x. This block is guaranteed to be new yet is it already assigned."
      ;
      uVar3 = 0xa7;
    }
  }
  else {
    if (param_4 != '\0') {
      LowLevelFatalErrorHandler
                ("Unknown",0x93,
                 L"MallocBinned2 Corruption Canary was 0x%x, should be 0x%x. This block is both preexisting and guaranteed to be new; which makes no sense."
                 ,*psVar1,param_2);
      FDebug::AssertFailed
                (&DAT_143f3f584,"Unknown",0x93,
                 L"MallocBinned2 Corruption Canary was 0x%x, should be 0x%x. This block is both preexisting and guaranteed to be new; which makes no sense."
                 ,*psVar1,param_2);
    }
    sVar2 = *psVar1;
    if (param_2 == 0x3941) {
      if ((sVar2 == 0x17ea) || (sVar2 == -0xce9)) goto LAB_1415c8ca1;
      LowLevelFatalErrorHandler
                ("Unknown",0x99,
                 L"MallocBinned2 Corruption Canary was 0x%x, will be 0x%x because this block should be preexisting and in use."
                 ,sVar2,0x3941);
      pwVar4 = 
      L"MallocBinned2 Corruption Canary was 0x%x, will be 0x%x because this block should be preexisting and in use."
      ;
      uVar3 = 0x99;
    }
    else {
      if (sVar2 == param_2) goto LAB_1415c8ca1;
      LowLevelFatalErrorHandler
                ("Unknown",0x9e,
                 L"MallocBinned2 Corruption Canary was 0x%x, should be 0x%x because this block should be preexisting."
                 ,sVar2,param_2);
      pwVar4 = 
      L"MallocBinned2 Corruption Canary was 0x%x, should be 0x%x because this block should be preexisting."
      ;
      uVar3 = 0x9e;
    }
  }
  FDebug::AssertFailed(&DAT_143f3f584,"Unknown",uVar3,pwVar4,*psVar1,param_2);
LAB_1415c8ca1:
  *psVar1 = param_2;
  return;
}



// FUNCTION 1415c8cc0 SetHelp body=140 status=ok
// SIG undefined SetHelp(void)

void FConsoleCommandBase::SetHelp(longlong param_1,short *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  if ((short *)*puVar1 != param_2) {
    iVar2 = 0;
    iVar3 = iVar2;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (param_2[lVar4] != 0);
      iVar3 = (int)lVar4 + 1;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (*(int *)(param_1 + 0x14) != iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1,iVar3);
      iVar2 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar2 + iVar3;
    if (*(int *)(param_1 + 0x14) < iVar2 + iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1);
    }
    if (iVar3 != 0) {
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,param_2,(longlong)iVar3 * 2);
    }
  }
  return;
}



// FUNCTION 1415c8d50 SetOSAllocationSizes body=56 status=ok
// SIG undefined SetOSAllocationSizes(void)

void FMallocBinned2::FPoolInfo::SetOSAllocationSizes
               (longlong param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_1415c0090(param_1,0x17ea);
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



// FUNCTION 1415c8d90 SetOnChangedCallback body=100 status=ok
// SIG undefined SetOnChangedCallback(void)

void FConsoleVariableBase::SetOnChangedCallback(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  if (param_2 != plVar1) {
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001415c8db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x30))(param_2,plVar1);
      return;
    }
    if ((*(int *)(param_1 + 0x28) != 0) && (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      if (*plVar1 != 0) {
        lVar3 = FMemory::Realloc(*plVar1,0,0);
        *plVar1 = lVar3;
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
  }
  return;
}



// FUNCTION 1415c8e00 SetSandboxEnabled body=40 status=ok
// SIG undefined SetSandboxEnabled(void)

void FFileManagerGeneric::SetSandboxEnabled(undefined8 param_1,undefined1 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FPlatformFileManager::Get();
  plVar2 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001415c8e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 8))(plVar2,param_2);
  return;
}



// FUNCTION 1415c8e30 SetTimeStamp body=102 status=ok
// SIG undefined SetTimeStamp(void)

undefined1
FFileManagerGeneric::SetTimeStamp(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  
  uVar1 = FPlatformFileManager::Get();
  plVar3 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
  cVar2 = (**(code **)(*plVar3 + 0x68))(plVar3,param_2);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar1 = FPlatformFileManager::Get();
  plVar3 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
  (**(code **)(*plVar3 + 0xa0))(plVar3,param_2,param_3);
  return 1;
}



// FUNCTION 1415c8ea0 SetupSingleton body=315 status=ok
// SIG undefined SetupSingleton(void)

void IConsoleManager::SetupSingleton(void)

{
  longlong *plVar1;
  
  do {
    if (DAT_1468b1f88 != (longlong *)0x0) {
      return;
    }
    plVar1 = (longlong *)operator_new(0xf8);
    if (plVar1 == (longlong *)0x0) {
      DAT_1468b1f88 = plVar1;
      SetupSingleton();
    }
    else {
      *plVar1 = (longlong)&PTR_RegisterConsoleVariable_144cacdc0;
      plVar1[1] = 0;
      plVar1[2] = 0;
      plVar1[5] = 0;
      plVar1[6] = 0;
      *(undefined4 *)(plVar1 + 7) = 0xffffffff;
      *(undefined4 *)((longlong)plVar1 + 0x3c) = 0;
      plVar1[9] = 0;
      *(undefined4 *)(plVar1 + 10) = 0;
      *(undefined1 *)(plVar1 + 0xb) = 0;
      plVar1[0xc] = 0;
      plVar1[0xd] = 0;
      plVar1[0x10] = 0;
      plVar1[0x11] = 0;
      *(undefined4 *)(plVar1 + 0x12) = 0xffffffff;
      *(undefined4 *)((longlong)plVar1 + 0x94) = 0;
      plVar1[0x14] = 0;
      *(undefined4 *)(plVar1 + 0x15) = 0;
      plVar1[0x16] = 0;
      plVar1[0x17] = 0;
      plVar1[0x18] = 0;
      *(undefined4 *)(plVar1 + 0x19) = 0;
      *(undefined1 *)((longlong)plVar1 + 0xcc) = 1;
      InitializeCriticalSection((LPCRITICAL_SECTION)(plVar1 + 0x1a));
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plVar1 + 0x1a),4000);
      DAT_1468b1f88 = plVar1;
    }
    (**(code **)(*DAT_1468b1f88 + 0x28))
              (DAT_1468b1f88,L"r.DumpingMovie",&DAT_1468c2180,
               L"Allows to dump each rendered frame to disk (slow fps, names MovieFrame..).\n<=0:off (default), <0:remains on, >0:remains on for n frames (n is the number specified)"
               ,1);
  } while (DAT_1468b1f88 == (longlong *)0x0);
  return;
}



// FUNCTION 1415c8fe0 SetupTLSCachesOnCurrentThread body=220 status=ok
// SIG undefined SetupTLSCachesOnCurrentThread(void)

void FMallocBinned2::SetupTLSCachesOnCurrentThread(void)

{
  int iVar1;
  BOOL BVar2;
  LPVOID pvVar3;
  undefined8 uVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar5;
  
  if (DAT_1468b1f84 == 0) {
    DAT_1468b1f84 = TlsAlloc();
  }
  pvVar3 = TlsGetValue(DAT_1468b1f84);
  if (pvVar3 == (LPVOID)0x0) {
    uVar4 = FWindowsPlatformMemory::BinnedAllocFromOS
                      (~((ulonglong)DAT_1468b1ffc - 1) & (ulonglong)DAT_1468b1ffc + 0x59f);
    pvVar3 = (LPVOID)FPerThreadFreeBlockLists::FPerThreadFreeBlockLists(uVar4);
    TlsSetValue(DAT_1468b1f84,pvVar3);
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_1415c44b0();
    BVar2 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar2 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    plVar5 = (longlong *)FUN_1415c4960();
    iVar1 = (int)plVar5[1];
    *(int *)(plVar5 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar5 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar1);
    }
    *(LPVOID *)(*plVar5 + (longlong)iVar1 * 8) = pvVar3;
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 1415c90d0 Size body=53 status=ok
// SIG undefined Size(void)

undefined8 FLoggedFileHandle::Size(longlong param_1)

{
  undefined8 uVar1;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))();
  QueryPerformanceCounter(local_res8);
  return uVar1;
}



// FUNCTION 1415c9110 Tell body=53 status=ok
// SIG undefined Tell(void)

undefined8 FLoggedFileHandle::Tell(longlong param_1)

{
  undefined8 uVar1;
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 8))();
  QueryPerformanceCounter(local_res8);
  return uVar1;
}



// FUNCTION 1415c9150 TotalSize body=33 status=ok
// SIG undefined TotalSize(void)

void FArchiveFileWriterGeneric::TotalSize(longlong param_1)

{
  FUN_1415c2db0();
                    /* WARNING: Could not recover jumptable at 0x0001415c916d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x40))();
  return;
}



// FUNCTION 1415c9180 FUN_1415c9180 body=344 status=ok
// SIG undefined FUN_1415c9180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415c9180(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  BOOL BVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auStack_88 [32];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = param_1;
    *puVar6 = &PTR_FUN_143f77b70;
  }
  local_68[0] = &LAB_1415bfe50;
  FUN_141590d60(0,0,local_68);
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
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x880);
  BVar5 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar5 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar2 = *(int *)(param_1 + 0x878);
  while (iVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x480);
    uVar4 = *(undefined8 *)(param_1 + 0x478);
    *(int *)(param_1 + 0x87c) = *(int *)(param_1 + 0x87c) - (int)uVar3;
    piVar1 = (int *)(param_1 + 0x878);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((undefined8 *)(param_1 + 0x478),(void *)(param_1 + 0x488),
                 (ulonglong)*(uint *)(param_1 + 0x878) << 4);
    }
    FUN_14169c490(uVar4,uVar3);
    iVar2 = *(int *)(param_1 + 0x878);
  }
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1415c92e0 FUN_1415c92e0 body=548 status=ok
// SIG undefined FUN_1415c92e0(void)

undefined8 FUN_1415c92e0(undefined8 param_1,undefined2 **param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined2 *local_48;
  ulonglong local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  undefined2 *local_28;
  int local_20;
  
  FUN_141671d50(&local_28,param_1);
  puVar8 = DAT_1468b38f0 + (longlong)DAT_1468b38f8 * 2;
  if (DAT_1468b38f0 != puVar8) {
    lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar6 = DAT_1468b38f0;
    do {
      if (*(int *)(puVar6 + 1) == 0) {
        local_38 = &DAT_143f3eda8;
      }
      else {
        local_38 = (undefined2 *)*puVar6;
      }
      local_48 = (undefined2 *)0x0;
      local_30 = &DAT_143f3eda8;
      if (local_20 != 0) {
        local_30 = local_28;
      }
      local_40 = 0;
      FPaths::CombineInternal(&local_48,&local_38,2);
      if ((*(int *)(lVar9 + 0x38) < DAT_1468b4f88) &&
         (_Init_thread_header(&DAT_1468b4f88), DAT_1468b4f88 == -1)) {
        DAT_1468b4f80 = (longlong *)0x0;
        atexit((_func_5014 *)&LAB_143e763f0);
        _Init_thread_footer(&DAT_1468b4f88);
      }
      plVar4 = DAT_1468b4f80;
      if (DAT_1468b4f80 == (longlong *)0x0) {
        plVar3 = (longlong *)operator_new(8);
        plVar4 = (longlong *)0x0;
        if (plVar3 != (longlong *)0x0) {
          *plVar3 = (longlong)&PTR_StartProfileThreadUsage_144cad850;
          plVar4 = plVar3;
        }
        plVar3 = DAT_1468b4f80;
        if (DAT_1468b4f80 != (longlong *)0x0) {
          lVar1 = *DAT_1468b4f80;
          DAT_1468b4f80 = plVar4;
          (**(code **)(lVar1 + 0x108))(plVar3,1);
          plVar4 = DAT_1468b4f80;
        }
      }
      DAT_1468b4f80 = plVar4;
      puVar5 = &DAT_143f3eda8;
      if ((int)local_40 != 0) {
        puVar5 = local_48;
      }
      cVar2 = (**(code **)(*DAT_1468b4f80 + 0x48))(DAT_1468b4f80,puVar5);
      puVar5 = local_48;
      if (cVar2 != '\0') {
        if (param_2 != &local_48) {
          lVar9 = (longlong)(int)local_40;
          *(int *)(param_2 + 1) = (int)local_40;
          if (((int)local_40 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
            *(undefined4 *)((longlong)param_2 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,local_40 & 0xffffffff);
            _guard_xfg_dispatch_icall_nop(*param_2,puVar5,lVar9 * 2);
          }
        }
        if (local_48 != (undefined2 *)0x0) {
          FMemory::Free(local_48);
        }
        uVar7 = 1;
        goto LAB_1415c942e;
      }
      if (local_48 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      puVar6 = puVar6 + 2;
    } while (puVar6 != puVar8);
  }
  uVar7 = 0;
LAB_1415c942e:
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 1415c9510 FUN_1415c9510 body=380 status=ok
// SIG undefined FUN_1415c9510(void)

void FUN_1415c9510(longlong *param_1,longlong param_2,char param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  longlong *plVar2;
  longlong *plVar3;
  short *psVar4;
  uint uVar5;
  longlong lVar6;
  longlong local_38;
  ulonglong local_30;
  short *local_28;
  int local_20;
  
  if (param_2 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1a);
    BVar1 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar1 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    FConsoleManager::FindConsoleObjectName(param_1,&local_28,param_2);
    if (1 < local_20) {
      psVar4 = &DAT_143f3eda8;
      if (local_20 != 0) {
        psVar4 = local_28;
      }
      BVar1 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar1 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      plVar2 = (longlong *)(**(code **)(*param_1 + 0xa0))(param_1,psVar4);
      if (plVar2 != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(*plVar2 + 0x28))(plVar2);
        if ((plVar3 == (longlong *)0x0) || (param_3 == '\0')) {
          lVar6 = 0;
          local_38 = 0;
          local_30 = 0;
          if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
            lVar6 = -1;
            do {
              lVar6 = lVar6 + 1;
            } while (psVar4[lVar6] != 0);
            uVar5 = (int)lVar6 + 1;
            local_30 = (ulonglong)uVar5;
            if (0 < (int)uVar5) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
            }
            lVar6 = local_38;
            FGenericPlatformString::Memcpy(local_38,psVar4,(longlong)(int)uVar5 * 2);
          }
          TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
          ::Remove(param_1 + 1,&local_38);
          if (lVar6 != 0) {
            FMemory::Free(lVar6);
          }
          (**(code **)(*plVar2 + 0x58))(plVar2);
        }
        else {
          (**(code **)(*plVar3 + 0x20))(plVar3,8);
        }
      }
      LeaveCriticalSection(lpCriticalSection);
    }
    if (local_28 != (short *)0x0) {
      FMemory::Free(local_28);
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 1415c9690 FUN_1415c9690 body=31 status=ok
// SIG undefined FUN_1415c9690(void)

void FUN_1415c9690(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  FUN_1415bc900(param_1 + 0xb0,local_res8);
  return;
}



// FUNCTION 1415c96b0 ValidateHeap body=52 status=ok
// SIG undefined ValidateHeap(void)

undefined4 FMallocBinned2::ValidateHeap(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x880);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  LeaveCriticalSection(lpCriticalSection);
  return 1;
}



// FUNCTION 1415c96f0 Visit body=456 status=ok
// SIG undefined Visit(void)

undefined8
`FFileManagerGeneric::FindFiles'::`2'::FFileMatch::Visit
          (longlong param_1,short *param_2,char param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_38;
  ulonglong local_30;
  longlong local_28 [2];
  
  lVar9 = -1;
  if (param_3 == '\0') {
    cVar6 = *(char *)(param_1 + 0x20);
  }
  else {
    cVar6 = *(char *)(param_1 + 0x21);
  }
  bVar5 = false;
  bVar4 = false;
  if (cVar6 != '\0') {
    local_30 = 0;
    local_38 = 0;
    if ((param_2 != (short *)0x0) && (lVar10 = lVar9, *param_2 != 0)) {
      do {
        lVar10 = lVar10 + 1;
      } while (param_2[lVar10] != 0);
      uVar8 = (int)lVar10 + 1;
      local_30 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      }
      FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar8 * 2);
    }
    bVar5 = true;
    bVar4 = true;
    uVar7 = FPaths::GetCleanFilename(local_28,&local_38);
    cVar6 = FUN_141593930(uVar7,param_1 + 0x10,1);
    if (cVar6 != '\0') {
      bVar3 = true;
      goto LAB_1415c9732;
    }
  }
  bVar3 = false;
LAB_1415c9732:
  if ((bVar4) && (local_28[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar5) && (local_38 != 0)) {
    FMemory::Free();
  }
  bVar4 = false;
  if (bVar3) {
    plVar2 = *(longlong **)(param_1 + 8);
    iVar1 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar1);
    }
    lVar10 = (longlong)iVar1 * 0x10 + *plVar2;
    if (lVar10 != 0) {
      local_38 = 0;
      local_30 = 0;
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        do {
          lVar9 = lVar9 + 1;
        } while (param_2[lVar9] != 0);
        uVar8 = (int)lVar9 + 1;
        local_30 = (ulonglong)uVar8;
        if (0 < (int)uVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        }
        FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar8 * 2);
      }
      bVar4 = true;
      FPaths::GetCleanFilename(lVar10,&local_38);
    }
    if ((bVar4) && (local_38 != 0)) {
      FMemory::Free();
    }
  }
  return 1;
}



// FUNCTION 1415c98c0 Write body=84 status=ok
// SIG undefined Write(void)

undefined1 FLoggedFileHandle::Write(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))
                    (*(longlong **)(param_1 + 8),param_2,param_3);
  QueryPerformanceCounter(&local_res8);
  return uVar1;
}



// FUNCTION 1415c9930 FUN_1415c9930 body=572 status=ok
// SIG undefined FUN_1415c9930(void)

/* WARNING: Removing unreachable block (ram,0x0001415c9abe) */
/* WARNING: Removing unreachable block (ram,0x0001415c9aca) */
/* WARNING: Removing unreachable block (ram,0x0001415c9ad6) */
/* WARNING: Removing unreachable block (ram,0x0001415c9aae) */
/* WARNING: Removing unreachable block (ram,0x0001415c9afc) */
/* WARNING: Removing unreachable block (ram,0x0001415c9b0c) */
/* WARNING: Removing unreachable block (ram,0x0001415c9b18) */
/* WARNING: Removing unreachable block (ram,0x0001415c9b24) */
/* WARNING: Removing unreachable block (ram,0x0001415c9b40) */
/* WARNING: Removing unreachable block (ram,0x0001415c9b4c) */
/* WARNING: Removing unreachable block (ram,0x0001415c9b58) */

undefined8 * FUN_1415c9930(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 local_res10 [8];
  
  if (DAT_1468c2208 == (longlong *)0x0) {
    FUN_1415d7ea0();
  }
  plVar6 = (longlong *)(**(code **)(*DAT_1468c2208 + 0x18))(DAT_1468c2208,0,0x30);
  if (plVar6 != (longlong *)0x0) {
    plVar6[1] = param_3;
    *plVar6 = (longlong)&DAT_143f3ed00;
    plVar6[2] = param_4;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar7;
    *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  uVar10 = 0;
  *param_2 = 0;
  if (plVar6 != (longlong *)0x0) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      *(int *)(param_1 + 2) = (int)param_1[2] + -1;
      iVar1 = (int)param_1[1];
      if ((int)param_1[2] <= iVar1) {
        uVar11 = uVar10;
        iVar9 = iVar1;
        if (0 < iVar1) {
          do {
            if (((*(int *)(uVar11 + 8 + *param_1) == 0) ||
                (plVar2 = *(longlong **)(uVar11 + *param_1), plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x10))(), cVar4 != '\0')) {
              TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(param_1,uVar10,1,1);
            }
            else {
              uVar10 = (ulonglong)((int)uVar10 + 1);
              uVar11 = uVar11 + 0x10;
            }
            iVar9 = (int)param_1[1];
          } while ((int)uVar10 < iVar9);
        }
        iVar5 = iVar9 * 2;
        if (iVar5 < 3) {
          iVar5 = 2;
        }
        *(int *)(param_1 + 2) = iVar5;
        if ((iVar5 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar9)) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1);
        }
      }
    }
    puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res10);
    iVar1 = (int)param_1[1];
    uVar3 = *puVar8;
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    *param_2 = uVar3;
    puVar8 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    *puVar8 = plVar6;
    *(undefined4 *)(puVar8 + 1) = 3;
  }
  return param_2;
}



// FUNCTION 1415c9b70 FUN_1415c9b70 body=147 status=ok
// SIG undefined FUN_1415c9b70(void)

ulonglong FUN_1415c9b70(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  plVar2 = (longlong *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  if (plVar2 != plVar2 + (int)uVar1) {
    plVar3 = plVar2;
    do {
      if (*plVar3 == *param_2) {
        uVar4 = (longlong)plVar3 - (longlong)plVar2 >> 3;
        if ((int)uVar4 != -1) {
          return uVar4;
        }
        break;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar2 + (int)uVar1);
  }
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar1 + 1)) {
    TArray<FMallocBinned2::FPerThreadFreeBlockLists_*,FDefaultAllocator>::ResizeGrow(param_1,uVar1);
  }
  *(longlong *)((longlong)(int)uVar1 * 8 + *param_1) = *param_2;
  return (ulonglong)uVar1;
}



// FUNCTION 1415c9c10 FUN_1415c9c10 body=939 status=ok
// SIG undefined FUN_1415c9c10(void)

int * FUN_1415c9c10(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  ulonglong *_Src;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  bool local_res8;
  
  iVar11 = 1;
  iVar17 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar14 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x18);
    *(int *)(param_1 + 6) = iVar14;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar14 * 0x18) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  lVar7 = (longlong)iVar10;
  *puVar3 = *puVar3 | 1 << ((byte)iVar10 & 0x1f);
  lVar4 = *param_1;
  *(undefined8 *)(lVar4 + lVar7 * 0x18) = *param_3;
  lVar5 = param_3[1];
  *(longlong *)(lVar4 + 8 + lVar7 * 0x18) = lVar5;
  _Src = (ulonglong *)(lVar4 + lVar7 * 0x18);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar16 != 1) {
    iVar10 = iVar17;
    if (uVar16 != 0) {
      iVar14 = (int)(*_Src >> 4);
      uVar13 = 0x9e3779b9U - iVar14 ^ iVar14 << 8;
      uVar9 = -(uVar13 + iVar14) ^ uVar13 >> 0xd;
      uVar15 = (iVar14 - uVar13) - uVar9 ^ uVar9 >> 0xc;
      uVar13 = (uVar13 - uVar15) - uVar9 ^ uVar15 << 0x10;
      uVar9 = (uVar9 - uVar13) - uVar15 ^ uVar13 >> 5;
      uVar15 = (uVar15 - uVar13) - uVar9 ^ uVar9 >> 3;
      uVar13 = (uVar13 - uVar15) - uVar9 ^ uVar15 << 10;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar14 = *(int *)((longlong)plVar8 +
                       (((longlong)(int)((uVar9 - uVar13) - uVar15) ^ (ulonglong)(uVar13 >> 0xf)) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar14 != -1) {
        do {
          iVar10 = iVar14;
          if (*(ulonglong *)(*param_1 + (longlong)iVar14 * 0x18) == *_Src) break;
          iVar14 = *(int *)(*param_1 + 0x10 + (longlong)iVar14 * 0x18);
          iVar10 = iVar17;
        } while (iVar14 != -1);
      }
    }
    local_res8 = iVar10 != -1;
    if (local_res8) {
      lVar4 = *param_1;
      plVar8 = *(longlong **)(lVar4 + 8 + (longlong)iVar10 * 0x18);
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
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar10 * 0x18),_Src,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar10;
      goto LAB_1415c9f92;
    }
  }
  if (3 < uVar16) {
    uVar9 = (uVar16 >> 1) + 8;
    iVar11 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    iVar17 = 0x20;
    if (uVar9 != 0) {
      iVar17 = 0x1f - iVar11;
    }
    uVar9 = (uVar16 >> 1) + 7;
    iVar11 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar9 == 0) {
      cVar12 = '\0';
    }
    else {
      cVar12 = '\x1f' - (char)iVar11;
    }
    iVar11 = 1 << (~(byte)((iVar17 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar16 < 1) || (((int)param_1[9] != 0 && (iVar11 <= (int)param_1[9])))) {
    iVar11 = (int)(*_Src >> 4);
    uVar13 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
    uVar9 = -(iVar11 + uVar13) ^ uVar13 >> 0xd;
    uVar16 = (iVar11 - uVar13) - uVar9 ^ uVar9 >> 0xc;
    uVar13 = (uVar13 - uVar16) - uVar9 ^ uVar16 << 0x10;
    uVar9 = (uVar9 - uVar13) - uVar16 ^ uVar13 >> 5;
    uVar16 = (uVar16 - uVar13) - uVar9 ^ uVar9 >> 3;
    uVar13 = (uVar13 - uVar16) - uVar9 ^ uVar16 << 10;
    uVar16 = ((uVar9 - uVar13) - uVar16 ^ uVar13 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar16;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    TSet<TSharedPtr<icu_53::BreakIterator,0>,DefaultKeyFuncs<TSharedPtr<icu_53::BreakIterator,0>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1415c9f92:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1415c9fc0 FUN_1415c9fc0 body=633 status=ok
// SIG undefined FUN_1415c9fc0(void)

int * FUN_1415c9fc0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  uint uStack_3c;
  
  iVar7 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar6 * 0x28);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  bVar10 = false;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar6 * 0x28);
  uVar9 = *(uint *)*param_3;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(ulonglong *)(puVar1 + 4) = (ulonglong)uStack_3c << 0x20;
  *puVar1 = uVar9;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0xffffffff;
  uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar9 != 1) {
    if (uVar9 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar1) * 4);
      if (iVar8 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar8 * 0x28) == *puVar1) goto LAB_1415ca11e;
          iVar8 = *(int *)(*param_1 + 0x20 + (longlong)iVar8 * 0x28);
        } while (iVar8 != -1);
      }
    }
    iVar8 = -1;
LAB_1415ca11e:
    bVar10 = iVar8 != -1;
    if (bVar10) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar8 * 0x28),puVar1,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar6,1);
      *param_2 = iVar8;
      goto LAB_1415ca20d;
    }
  }
  if (3 < uVar9) {
    uVar3 = (uVar9 >> 1) + 8;
    iVar7 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar5 = '\0';
    if (uVar3 != 0) {
      iVar8 = 0x1f - iVar7;
    }
    uVar3 = (uVar9 >> 1) + 7;
    iVar7 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar3 != 0) {
      cVar5 = '\x1f' - (char)iVar7;
    }
    iVar7 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar5 & 0x1f);
  }
  if (((int)uVar9 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar9 = (int)param_1[9] - 1U & *puVar1;
    puVar1[9] = uVar9;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    puVar1[8] = *(uint *)((longlong)plVar4 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) = iVar6
    ;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FThreadHeartBeat::FHeartBeatInfo,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1415ca20d:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 1415ca240 FUN_1415ca240 body=682 status=ok
// SIG undefined FUN_1415ca240(void)

uint * FUN_1415ca240(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *_Src;
  void *_Dst;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  char cVar11;
  undefined4 uVar12;
  bool bVar13;
  uint local_res8 [2];
  
  iVar10 = 1;
  uVar12 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar8 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar8 + 1)) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,uVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar8 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar6 = *(int *)(*param_1 + 4 + (longlong)(int)uVar8 * 0x28);
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = uVar8;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 +
                   (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar8 & 0x1f);
  _Src = (undefined8 *)(*param_1 + (longlong)(int)uVar8 * 0x28);
  FString::FString(_Src,*param_3);
  _Src[2] = 0;
  _Src[3] = 0;
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar8 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar13 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      _Dst = (void *)(*param_1 + lVar9 * 0x28);
      UE4Tuple_Private::TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FString>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FString>(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      uVar4 = *param_2;
      bVar2 = (byte)uVar4 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = uVar4;
      }
      lVar9 = *param_1;
      *(undefined4 *)(lVar9 + (longlong)(int)uVar4 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar9 + 4 + (longlong)(int)uVar4 * 0x28) = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar4;
      plVar5 = (longlong *)param_1[4];
      *param_2 = uVar8;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar5 +
                       (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_1415ca4c6;
    }
  }
  uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar8) {
    uVar4 = (uVar8 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar11 = '\0';
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar10;
    }
    uVar4 = (uVar8 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar11 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar8 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    uVar8 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*_Src;
    }
    uVar4 = FUN_140438070(puVar7);
    uVar4 = (int)param_1[9] - 1U & uVar4;
    *(uint *)((longlong)_Src + 0x24) = uVar4;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(uint *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         uVar8;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<FString,FICUInternationalization::FICUCachedFileData>,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1415ca4c6:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1415ca4f0 FUN_1415ca4f0 body=631 status=ok
// SIG undefined FUN_1415ca4f0(void)

int * FUN_1415ca4f0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  bool bVar11;
  
  iVar8 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  bVar11 = false;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar7 * 0x18);
  puVar3 = (undefined8 *)param_3[1];
  *puVar1 = *(uint *)*param_3;
  *(undefined8 *)(puVar1 + 2) = *puVar3;
  puVar1[4] = 0xffffffff;
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar10 != 1) {
    if (uVar10 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar1) * 4);
      if (iVar6 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar6 * 0x18) == *puVar1) goto LAB_1415ca64b;
          iVar6 = *(int *)(*param_1 + 0x10 + (longlong)iVar6 * 0x18);
        } while (iVar6 != -1);
      }
    }
    iVar6 = -1;
LAB_1415ca64b:
    bVar11 = iVar6 != -1;
    if (bVar11) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar6 * 0x18),puVar1,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar7,1);
      *param_2 = iVar6;
      goto LAB_1415ca73e;
    }
  }
  if (3 < uVar10) {
    uVar4 = (uVar10 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar8;
    }
    uVar4 = (uVar10 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar9 = '\0';
    }
    else {
      cVar9 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar10 = (int)param_1[9] - 1U & *puVar1;
    puVar1[5] = uVar10;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar1[4] = *(uint *)((longlong)plVar5 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         iVar7;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<unsigned_int,FRunnableThread_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1415ca73e:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 1415ca770 FUN_1415ca770 body=511 status=ok
// SIG undefined FUN_1415ca770(void)

int * FUN_1415ca770(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *_Src;
  void *_Dst;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  int iVar9;
  bool bVar10;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x28);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  puVar3 = (undefined4 *)param_3[1];
  _Src = (undefined8 *)(*param_1 + (longlong)iVar9 * 0x28);
  FString::FString(_Src,*param_3);
  bVar10 = false;
  *(undefined4 *)(_Src + 2) = *puVar3;
  _Src[3] = *(undefined8 *)(puVar3 + 2);
  *puVar3 = 0;
  *(undefined8 *)(puVar3 + 2) = 0;
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    bVar10 = local_res8[0] != -1;
    if (bVar10) {
      _Dst = (void *)(*param_1 + (longlong)local_res8[0] * 0x28);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FICUInternationalization::FICUCachedFileData>
      ::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FICUInternationalization::FICUCachedFileData>
                (_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1415ca94c;
    }
  }
  cVar4 = TSet<TTuple<FString,FICUInternationalization::FICUCachedFileData>,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar4 == '\0') {
    iVar9 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*_Src;
    }
    uVar6 = FUN_140438070(puVar8);
    uVar6 = (int)param_1[9] - 1U & uVar6;
    *(uint *)((longlong)_Src + 0x24) = uVar6;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) = iVar9
    ;
  }
LAB_1415ca94c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 1415ca970 FUN_1415ca970 body=621 status=ok
// SIG undefined FUN_1415ca970(void)

int * FUN_1415ca970(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  undefined8 *_Src;
  void *_Dst;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined4 uVar12;
  bool local_res8;
  int local_res10 [2];
  undefined8 *local_res18;
  longlong local_res20;
  
  uVar12 = 0xffffffff;
  local_res18 = param_3;
  local_res20 = param_4;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x28);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  puVar3 = (undefined8 *)local_res18[1];
  _Src = (undefined8 *)(*param_1 + (longlong)iVar11 * 0x28);
  FString::FString(_Src,*local_res18);
  _Src[2] = *puVar3;
  lVar4 = puVar3[1];
  _Src[3] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res10,_Src);
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)(*param_1 + (longlong)local_res10[0] * 0x28);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FCulture,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FCulture,1>_>(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      iVar11 = *param_2;
      bVar5 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar11;
      }
      lVar4 = *param_1;
      *(undefined4 *)(lVar4 + (longlong)iVar11 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar4 + 4 + (longlong)iVar11 * 0x28) = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar9 = (longlong *)param_1[4];
      *param_2 = local_res10[0];
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar9 +
                       (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      param_4 = local_res20;
      goto LAB_1415cabbd;
    }
  }
  cVar6 = TSet<TTuple<FString,FICUInternationalization::FICUCachedFileData>,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar6 == '\0') {
    iVar11 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*_Src;
    }
    uVar8 = FUN_140438070(puVar10);
    uVar8 = (int)param_1[9] - 1U & uVar8;
    *(uint *)((longlong)_Src + 0x24) = uVar8;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         iVar11;
  }
LAB_1415cabbd:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1415cabe0 FUN_1415cabe0 body=709 status=ok
// SIG undefined FUN_1415cabe0(void)

int * FUN_1415cabe0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  undefined8 *_Src;
  void *_Dst;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  char cVar13;
  undefined4 uVar14;
  bool local_res8;
  int local_res10 [2];
  undefined8 *local_res18;
  longlong local_res20;
  
  iVar12 = 1;
  uVar14 = 0xffffffff;
  local_res20 = param_4;
  local_res18 = param_3;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x28);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  puVar3 = (undefined8 *)local_res18[1];
  _Src = (undefined8 *)(*param_1 + (longlong)iVar9 * 0x28);
  FString::FString(_Src,*local_res18);
  _Src[2] = *puVar3;
  lVar4 = puVar3[1];
  _Src[3] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res10,_Src);
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)(*param_1 + (longlong)local_res10[0] * 0x28);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FCulture,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FCulture,1>_>(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      iVar12 = *param_2;
      bVar5 = (byte)iVar12 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar12;
      }
      lVar4 = *param_1;
      *(undefined4 *)(lVar4 + (longlong)iVar12 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar14 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar4 + 4 + (longlong)iVar12 * 0x28) = uVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar12;
      plVar8 = (longlong *)param_1[4];
      *param_2 = local_res10[0];
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar8 +
                       (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_1415cae85;
    }
  }
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar11) {
    uVar7 = (uVar11 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar9 = 0x20;
    cVar13 = '\0';
    if (uVar7 != 0) {
      iVar9 = 0x1f - iVar12;
    }
    uVar7 = (uVar11 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar7 != 0) {
      cVar13 = '\x1f' - (char)iVar12;
    }
    iVar12 = 1 << (~(byte)((iVar9 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    iVar12 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*_Src;
    }
    uVar11 = FUN_140438070(puVar10);
    uVar11 = (int)param_1[9] - 1U & uVar11;
    *(uint *)((longlong)_Src + 0x24) = uVar11;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         iVar12;
    local_res20 = param_4;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    TSet<TTuple<FString,FICUInternationalization::FICUCachedFileData>,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
    local_res20 = param_4;
  }
LAB_1415cae85:
  if (local_res20 != 0) {
    *(bool *)local_res20 = local_res8;
  }
  return param_2;
}



// FUNCTION 1415caeb0 FUN_1415caeb0 body=965 status=ok
// SIG undefined FUN_1415caeb0(void)

int * FUN_1415caeb0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  ulonglong *_Src;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  bool local_res8;
  
  iVar10 = 1;
  iVar16 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x18);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar11;
  local_res8 = false;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  lVar6 = (longlong)iVar11;
  *puVar3 = *puVar3 | 1 << ((byte)iVar11 & 0x1f);
  lVar4 = *param_1;
  *(undefined8 *)(lVar4 + lVar6 * 0x18) = *param_3;
  *(undefined8 *)(lVar4 + 8 + lVar6 * 0x18) = param_3[1];
  param_3[1] = 0;
  _Src = (ulonglong *)(lVar4 + lVar6 * 0x18);
  *param_3 = 0;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar15 != 1) {
    iVar9 = iVar16;
    if (uVar15 != 0) {
      iVar5 = (int)(*_Src >> 4);
      uVar13 = 0x9e3779b9U - iVar5 ^ iVar5 << 8;
      uVar8 = -(uVar13 + iVar5) ^ uVar13 >> 0xd;
      uVar14 = (iVar5 - uVar13) - uVar8 ^ uVar8 >> 0xc;
      uVar13 = (uVar13 - uVar14) - uVar8 ^ uVar14 << 0x10;
      uVar8 = (uVar8 - uVar13) - uVar14 ^ uVar13 >> 5;
      uVar14 = (uVar14 - uVar13) - uVar8 ^ uVar8 >> 3;
      uVar13 = (uVar13 - uVar14) - uVar8 ^ uVar14 << 10;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar7 +
                      (((longlong)(int)((uVar8 - uVar13) - uVar14) ^ (ulonglong)(uVar13 >> 0xf)) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar5 != -1) {
        do {
          iVar9 = iVar5;
          if (*(ulonglong *)(*param_1 + (longlong)iVar5 * 0x18) == *_Src) break;
          iVar5 = *(int *)(*param_1 + 0x10 + (longlong)iVar5 * 0x18);
          iVar9 = iVar16;
        } while (iVar5 != -1);
      }
    }
    local_res8 = iVar9 != -1;
    if (local_res8) {
      lVar4 = *param_1;
      plVar7 = *(longlong **)(lVar4 + 8 + (longlong)iVar9 * 0x18);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar7 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar9 * 0x18),_Src,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar9;
      goto LAB_1415cb237;
    }
  }
  if (3 < uVar15) {
    uVar8 = (uVar15 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar16 = 0x20;
    if (uVar8 != 0) {
      iVar16 = 0x1f - iVar10;
    }
    uVar8 = (uVar15 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar8 == 0) {
      cVar12 = '\0';
    }
    else {
      cVar12 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar16 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    iVar10 = (int)(*_Src >> 4);
    uVar8 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar13 = -(uVar8 + iVar10) ^ uVar8 >> 0xd;
    uVar15 = (iVar10 - uVar8) - uVar13 ^ uVar13 >> 0xc;
    uVar8 = (uVar8 - uVar15) - uVar13 ^ uVar15 << 0x10;
    uVar13 = (uVar13 - uVar8) - uVar15 ^ uVar8 >> 5;
    uVar15 = (uVar15 - uVar8) - uVar13 ^ uVar13 >> 3;
    uVar8 = (uVar8 - uVar15) - uVar13 ^ uVar15 << 10;
    uVar15 = ((uVar13 - uVar8) - uVar15 ^ uVar8 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar15;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         iVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TSharedPtr<icu_53::BreakIterator,0>,DefaultKeyFuncs<TSharedPtr<icu_53::BreakIterator,0>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1415cb237:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1415cb280 FUN_1415cb280 body=741 status=ok
// SIG undefined FUN_1415cb280(void)

uint * FUN_1415cb280(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *_Src;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  char cVar12;
  undefined4 uVar13;
  bool bVar14;
  uint local_res8 [2];
  void *local_res10;
  undefined8 *local_res18;
  undefined1 *local_res20;
  
  iVar10 = 1;
  uVar13 = 0xffffffff;
  local_res20 = param_4;
  local_res18 = param_3;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar11 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar11 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar11 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)(int)uVar11 * 0x18);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x18) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = uVar11;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 +
                   (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  lVar5 = (longlong)(int)uVar11;
  *puVar1 = *puVar1 | 1 << ((byte)uVar11 & 0x1f);
  lVar9 = *param_1;
  *(undefined8 *)(lVar9 + lVar5 * 0x18) = 0;
  *(undefined8 *)(lVar9 + lVar5 * 0x18) = *local_res18;
  *local_res18 = 0;
  _Src = (undefined8 *)(lVar9 + lVar5 * 0x18);
  *(undefined4 *)(_Src + 1) = *(undefined4 *)(local_res18 + 1);
  *(undefined4 *)((longlong)_Src + 0xc) = *(undefined4 *)((longlong)local_res18 + 0xc);
  local_res18[1] = 0;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId(param_1,local_res8,_Src);
    uVar11 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar14 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      lVar5 = *(longlong *)(*param_1 + lVar9 * 0x18);
      local_res10 = (void *)(*param_1 + lVar9 * 0x18);
      if (lVar5 != 0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar5);
      }
      _guard_xfg_dispatch_icall_nop(local_res10,_Src,0x10);
      uVar4 = *param_2;
      bVar2 = (byte)uVar4 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = uVar4;
      }
      lVar9 = *param_1;
      *(undefined4 *)(lVar9 + (longlong)(int)uVar4 * 0x18) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar13 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar9 + 4 + (longlong)(int)uVar4 * 0x18) = uVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar4;
      plVar6 = (longlong *)param_1[4];
      *param_2 = uVar11;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_1415cb543;
    }
  }
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar11) {
    uVar4 = (uVar11 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar12 = '\0';
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar10;
    }
    uVar4 = (uVar11 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar12 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    uVar11 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*_Src;
    }
    uVar4 = FUN_140438070(puVar8);
    uVar4 = (int)param_1[9] - 1U & uVar4;
    *(uint *)((longlong)_Src + 0x14) = uVar4;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(uint *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         uVar11;
    local_res20 = param_4;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash(param_1);
    local_res20 = param_4;
  }
LAB_1415cb543:
  if (local_res20 != (undefined1 *)0x0) {
    *local_res20 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1415cb570 Emplace<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData> body=403 status=ok
// SIG undefined Emplace<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData>(void)

void TSortedMap<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData,FDefaultAllocator,TLess<FString>_>
     ::
     Emplace<FString,_FCulture::FICUCultureImplementation::GetCanonicalName_::_2_::FCanonizedTagData>
               (longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  void *_Src;
  ulonglong uVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  uint uVar12;
  
  puVar11 = &DAT_143f3eda8;
  lVar2 = *param_1;
  uVar3 = (longlong)(int)param_1[1];
  lVar4 = 0;
  while (uVar3 != 0) {
    uVar9 = uVar3 >> 1;
    uVar12 = (uint)uVar3;
    lVar1 = uVar9 + lVar4;
    if ((int)param_2[1] == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*param_2;
    }
    if (*(int *)(lVar2 + 8 + lVar1 * 0x28) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = *(undefined2 **)(lVar2 + lVar1 * 0x28);
    }
    iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
    uVar3 = uVar9;
    if (iVar5 < 0) {
      lVar4 = (ulonglong)(uVar12 & 1) + lVar1;
    }
  }
  iVar5 = (int)lVar4;
  if ((-1 < iVar5) && (iVar5 < (int)param_1[1])) {
    lVar2 = (longlong)iVar5 * 0x28;
    if (*(int *)(lVar2 + 8 + *param_1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = *(undefined2 **)(lVar2 + *param_1);
    }
    if ((int)param_2[1] != 0) {
      puVar11 = (undefined2 *)*param_2;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar8);
    if (-1 < iVar6) {
      plVar10 = (longlong *)(lVar2 + *param_1);
      lVar2 = *plVar10;
      if (lVar2 != 0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar2);
      }
      goto LAB_1415cb6af;
    }
  }
  iVar6 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar6 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
    TArray<TTuple<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData>,FDefaultAllocator>
    ::ResizeGrow(param_1,iVar6);
  }
  _Src = (void *)(*param_1 + (longlong)iVar5 * 0x28);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + 0x28),_Src,(longlong)(iVar6 - iVar5) * 0x28);
  plVar10 = (longlong *)((longlong)iVar5 * 0x28 + *param_1);
LAB_1415cb6af:
  *plVar10 = 0;
  *plVar10 = *param_2;
  *param_2 = 0;
  *(int *)(plVar10 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)plVar10 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  lVar2 = param_3[1];
  plVar10[2] = *param_3;
  plVar10[3] = lVar2;
  plVar10[4] = param_3[2];
  return;
}



// FUNCTION 1415cb710 Emplace<FString,FString> body=414 status=ok
// SIG undefined Emplace<FString,FString>(void)

void TSortedMap<FString,FString,TInlineAllocator<4,FDefaultAllocator>,TLess<FString>_>::
     Emplace<FString,FString>(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar10 = (ulonglong)*(int *)(param_1 + 0x88);
  puVar9 = &DAT_143f3eda8;
  uVar7 = 0;
  if (uVar10 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar5 = param_1;
    }
    do {
      uVar11 = uVar10 >> 1;
      lVar3 = (uVar11 + uVar7) * 0x20;
      if (*(int *)(param_2 + 1) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = (undefined2 *)*param_2;
      }
      if (*(int *)(lVar3 + 8 + lVar5) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = *(undefined2 **)(lVar3 + lVar5);
      }
      iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar6);
      if (iVar1 < 0) {
        uVar7 = (ulonglong)((uint)uVar10 & 1) + uVar11 + uVar7;
      }
      uVar10 = uVar11;
    } while (uVar11 != 0);
  }
  iVar1 = (int)uVar7;
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x88))) {
    lVar3 = (longlong)iVar1 * 0x20;
    lVar5 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar5 = param_1;
    }
    if (*(int *)(lVar5 + 8 + lVar3) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = *(undefined2 **)(lVar5 + lVar3);
    }
    if (*(int *)(param_2 + 1) != 0) {
      puVar9 = (undefined2 *)*param_2;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar6);
    if (-1 < iVar2) {
      lVar5 = *(longlong *)(param_1 + 0x80);
      if (*(longlong *)(param_1 + 0x80) == 0) {
        lVar5 = param_1;
      }
      puVar8 = (undefined8 *)(lVar5 + lVar3);
      UE4Tuple_Private::TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FString>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FString>(puVar8);
      goto LAB_1415cb849;
    }
  }
  TArray<TTuple<FString,FString>,TInlineAllocator<4,FDefaultAllocator>_>::InsertUninitialized
            (param_1,uVar7 & 0xffffffff,1);
  lVar5 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar5 = param_1;
  }
  puVar8 = (undefined8 *)(lVar5 + (longlong)iVar1 * 0x20);
LAB_1415cb849:
  *puVar8 = 0;
  *puVar8 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)puVar8 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  puVar8[2] = 0;
  puVar8[2] = *param_3;
  *param_3 = 0;
  *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)puVar8 + 0x1c) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  return;
}



// FUNCTION 1415cb8b0 HeapSortInternal<FICUInternationalization::FICUCultureData,FIdentityFunctor,TDereferenceWrapper<FICUInternationalization::FICUCultureData,<lambda_ce5116e61a4c0a46f3db8549ec9beeaa>_>_> body=615 status=ok
// SIG undefined HeapSortInternal<FICUInternationalization::FICUCultureData,FIdentityFunctor,TDereferenceWrapper<FICUInternationalization::FICUCultureData,<lambda_ce5116e61a4c0a46f3db8549ec9beeaa>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FICUInternationalization::FICUCultureData,FIdentityFunctor,TDereferenceWrapper<FICUInternationalization::FICUCultureData,<lambda_ce5116e61a4c0a46f3db8549ec9beeaa>_>_>
               (undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  
  iVar14 = (param_2 + -2) / 2;
  if (-1 < iVar14) {
    iVar15 = iVar14 * 2 + 1;
    iVar17 = iVar15;
    iVar20 = iVar14;
joined_r0x0001415cb8f6:
    do {
      if (iVar15 < param_2) {
        iVar15 = iVar14 * 2;
        iVar16 = iVar15 + 1;
        if (iVar15 + 2 < param_2) {
          cVar13 = <lambda_ce5116e61a4c0a46f3db8549ec9beeaa>::operator()
                             (param_4,param_1 + (longlong)(iVar15 + 2) * 8,
                              param_1 + (longlong)iVar16 * 8);
          if (cVar13 != '\0') {
            iVar16 = iVar15;
          }
          iVar16 = iVar16 + 1;
        }
        puVar18 = param_1 + (longlong)iVar16 * 8;
        puVar21 = param_1 + (longlong)iVar14 * 8;
        cVar13 = <lambda_ce5116e61a4c0a46f3db8549ec9beeaa>::operator()(param_4,puVar21,puVar18);
        if (cVar13 != '\0') {
          if (puVar21 != puVar18) {
            uVar4 = puVar18[1];
            uVar5 = *puVar21;
            uVar6 = puVar21[1];
            uVar7 = puVar21[2];
            uVar8 = puVar21[3];
            uVar9 = puVar21[4];
            uVar10 = puVar21[5];
            uVar11 = puVar21[6];
            uVar12 = puVar21[7];
            *puVar21 = *puVar18;
            puVar21[1] = uVar4;
            uVar4 = puVar18[3];
            puVar21[2] = puVar18[2];
            puVar21[3] = uVar4;
            uVar1 = *(undefined4 *)((longlong)puVar18 + 0x24);
            uVar2 = *(undefined4 *)(puVar18 + 5);
            uVar3 = *(undefined4 *)((longlong)puVar18 + 0x2c);
            *(undefined4 *)(puVar21 + 4) = *(undefined4 *)(puVar18 + 4);
            *(undefined4 *)((longlong)puVar21 + 0x24) = uVar1;
            *(undefined4 *)(puVar21 + 5) = uVar2;
            *(undefined4 *)((longlong)puVar21 + 0x2c) = uVar3;
            uVar4 = puVar18[7];
            puVar21[6] = puVar18[6];
            puVar21[7] = uVar4;
            *puVar18 = uVar5;
            puVar18[1] = uVar6;
            puVar18[2] = uVar7;
            puVar18[3] = uVar8;
            puVar18[4] = uVar9;
            puVar18[5] = uVar10;
            puVar18[6] = uVar11;
            puVar18[7] = uVar12;
          }
          iVar15 = iVar16 * 2 + 1;
          iVar14 = iVar16;
          goto joined_r0x0001415cb8f6;
        }
      }
      iVar15 = iVar17 + -2;
      iVar14 = iVar20 + -1;
      iVar17 = iVar15;
      iVar20 = iVar14;
    } while (-1 < iVar14);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar21 = param_1 + (longlong)param_2 * 8;
    do {
      if (param_1 != puVar21) {
        uVar4 = puVar21[1];
        uVar5 = *param_1;
        uVar6 = param_1[1];
        uVar7 = param_1[2];
        uVar8 = param_1[3];
        uVar9 = param_1[4];
        uVar10 = param_1[5];
        uVar11 = param_1[6];
        uVar12 = param_1[7];
        *param_1 = *puVar21;
        param_1[1] = uVar4;
        uVar4 = puVar21[3];
        param_1[2] = puVar21[2];
        param_1[3] = uVar4;
        uVar1 = *(undefined4 *)((longlong)puVar21 + 0x24);
        uVar2 = *(undefined4 *)(puVar21 + 5);
        uVar3 = *(undefined4 *)((longlong)puVar21 + 0x2c);
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar21 + 4);
        *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
        *(undefined4 *)(param_1 + 5) = uVar2;
        *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
        uVar4 = puVar21[7];
        param_1[6] = puVar21[6];
        param_1[7] = uVar4;
        *puVar21 = uVar5;
        puVar21[1] = uVar6;
        puVar21[2] = uVar7;
        puVar21[3] = uVar8;
        puVar21[4] = uVar9;
        puVar21[5] = uVar10;
        puVar21[6] = uVar11;
        puVar21[7] = uVar12;
      }
      iVar14 = 0;
      if (1 < param_2) {
        do {
          iVar15 = iVar14 * 2;
          iVar17 = iVar15 + 1;
          if (iVar15 + 2 < param_2) {
            cVar13 = <lambda_ce5116e61a4c0a46f3db8549ec9beeaa>::operator()
                               (param_4,param_1 + (longlong)(iVar15 + 2) * 8,
                                param_1 + (longlong)iVar17 * 8);
            if (cVar13 != '\0') {
              iVar17 = iVar15;
            }
            iVar17 = iVar17 + 1;
          }
          puVar19 = param_1 + (longlong)iVar17 * 8;
          puVar18 = param_1 + (longlong)iVar14 * 8;
          cVar13 = <lambda_ce5116e61a4c0a46f3db8549ec9beeaa>::operator()(param_4,puVar18,puVar19);
          if (cVar13 == '\0') break;
          if (puVar18 != puVar19) {
            uVar4 = puVar19[1];
            uVar5 = *puVar18;
            uVar6 = puVar18[1];
            uVar7 = puVar18[2];
            uVar8 = puVar18[3];
            uVar9 = puVar18[4];
            uVar10 = puVar18[5];
            uVar11 = puVar18[6];
            uVar12 = puVar18[7];
            *puVar18 = *puVar19;
            puVar18[1] = uVar4;
            uVar4 = puVar19[3];
            puVar18[2] = puVar19[2];
            puVar18[3] = uVar4;
            uVar1 = *(undefined4 *)((longlong)puVar19 + 0x24);
            uVar2 = *(undefined4 *)(puVar19 + 5);
            uVar3 = *(undefined4 *)((longlong)puVar19 + 0x2c);
            *(undefined4 *)(puVar18 + 4) = *(undefined4 *)(puVar19 + 4);
            *(undefined4 *)((longlong)puVar18 + 0x24) = uVar1;
            *(undefined4 *)(puVar18 + 5) = uVar2;
            *(undefined4 *)((longlong)puVar18 + 0x2c) = uVar3;
            uVar4 = puVar19[7];
            puVar18[6] = puVar19[6];
            puVar18[7] = uVar4;
            *puVar19 = uVar5;
            puVar19[1] = uVar6;
            puVar19[2] = uVar7;
            puVar19[3] = uVar8;
            puVar19[4] = uVar9;
            puVar19[5] = uVar10;
            puVar19[6] = uVar11;
            puVar19[7] = uVar12;
          }
          iVar14 = iVar17;
        } while (iVar17 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar21 = puVar21 + -8;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1415cbb20 IntroSortInternal<FICUInternationalization::FICUCultureData,FIdentityFunctor,TDereferenceWrapper<FICUInternationalization::FICUCultureData,<lambda_ce5116e61a4c0a46f3db8549ec9beeaa>_>_> body=932 status=ok
// SIG undefined IntroSortInternal<FICUInternationalization::FICUCultureData,FIdentityFunctor,TDereferenceWrapper<FICUInternationalization::FICUCultureData,<lambda_ce5116e61a4c0a46f3db8549ec9beeaa>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FICUInternationalization::FICUCultureData,FIdentityFunctor,TDereferenceWrapper<FICUInternationalization::FICUCultureData,<lambda_ce5116e61a4c0a46f3db8549ec9beeaa>_>_>
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
  char cVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  float fVar23;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_2 * 0x40 + -0x40 + param_1;
    fVar23 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar23 = fVar23 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar23 = ::_guard_xfg_dispatch_icall_nop(fVar23);
    local_338 = (undefined4)(longlong)(fVar23 + fVar23);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar18 = &local_348;
    do {
      puVar21 = (undefined8 *)*plVar18;
      puVar22 = (undefined8 *)plVar18[1];
      local_358 = plVar18[2];
      lVar14 = ((longlong)puVar22 - (longlong)puVar21 >> 6) + 1;
      puVar20 = puVar21;
      iVar19 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1415cbc00:
        if (8 < lVar14) {
          puVar21 = puVar20 + (lVar14 / 2) * 8;
          if (puVar21 != puVar20) {
            uVar1 = puVar20[1];
            uVar5 = *puVar21;
            uVar6 = puVar21[1];
            uVar7 = puVar21[2];
            uVar8 = puVar21[3];
            uVar9 = puVar21[4];
            uVar10 = puVar21[5];
            uVar11 = puVar21[6];
            uVar12 = puVar21[7];
            *puVar21 = *puVar20;
            puVar21[1] = uVar1;
            uVar1 = puVar20[3];
            puVar21[2] = puVar20[2];
            puVar21[3] = uVar1;
            uVar2 = *(undefined4 *)((longlong)puVar20 + 0x24);
            uVar3 = *(undefined4 *)(puVar20 + 5);
            uVar4 = *(undefined4 *)((longlong)puVar20 + 0x2c);
            *(undefined4 *)(puVar21 + 4) = *(undefined4 *)(puVar20 + 4);
            *(undefined4 *)((longlong)puVar21 + 0x24) = uVar2;
            *(undefined4 *)(puVar21 + 5) = uVar3;
            *(undefined4 *)((longlong)puVar21 + 0x2c) = uVar4;
            uVar1 = puVar20[7];
            puVar21[6] = puVar20[6];
            puVar21[7] = uVar1;
            *puVar20 = uVar5;
            puVar20[1] = uVar6;
            puVar20[2] = uVar7;
            puVar20[3] = uVar8;
            puVar20[4] = uVar9;
            puVar20[5] = uVar10;
            puVar20[6] = uVar11;
            puVar20[7] = uVar12;
          }
          puVar15 = puVar22 + 8;
          puVar21 = puVar20;
LAB_1415cbc70:
          puVar17 = puVar21;
          puVar21 = puVar17 + 8;
          if (puVar21 <= puVar22) goto code_r0x0001415cbc79;
          goto LAB_1415cbc90;
        }
        for (; puVar15 = puVar20, puVar21 = puVar20, puVar20 < puVar22; puVar22 = puVar22 + -8) {
          while (puVar21 = puVar21 + 8, puVar21 <= puVar22) {
            cVar13 = <lambda_ce5116e61a4c0a46f3db8549ec9beeaa>::operator()(param_4,puVar15,puVar21);
            if (cVar13 != '\0') {
              puVar15 = puVar21;
            }
          }
          if (puVar15 != puVar22) {
            uVar1 = puVar22[1];
            uVar5 = *puVar15;
            uVar6 = puVar15[1];
            uVar7 = puVar15[2];
            uVar8 = puVar15[3];
            uVar9 = puVar15[4];
            uVar10 = puVar15[5];
            uVar11 = puVar15[6];
            uVar12 = puVar15[7];
            *puVar15 = *puVar22;
            puVar15[1] = uVar1;
            uVar1 = puVar22[3];
            puVar15[2] = puVar22[2];
            puVar15[3] = uVar1;
            uVar2 = *(undefined4 *)((longlong)puVar22 + 0x24);
            uVar3 = *(undefined4 *)(puVar22 + 5);
            uVar4 = *(undefined4 *)((longlong)puVar22 + 0x2c);
            *(undefined4 *)(puVar15 + 4) = *(undefined4 *)(puVar22 + 4);
            *(undefined4 *)((longlong)puVar15 + 0x24) = uVar2;
            *(undefined4 *)(puVar15 + 5) = uVar3;
            *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar4;
            uVar1 = puVar22[7];
            puVar15[6] = puVar22[6];
            puVar15[7] = uVar1;
            *puVar22 = uVar5;
            puVar22[1] = uVar6;
            puVar22[2] = uVar7;
            puVar22[3] = uVar8;
            puVar22[4] = uVar9;
            puVar22[5] = uVar10;
            puVar22[6] = uVar11;
            puVar22[7] = uVar12;
          }
        }
        goto LAB_1415cbdd2;
      }
LAB_1415cbdc3:
      HeapSortInternal<FICUInternationalization::FICUCultureData,FIdentityFunctor,TDereferenceWrapper<FICUInternationalization::FICUCultureData,<lambda_ce5116e61a4c0a46f3db8549ec9beeaa>_>_>
                (puVar21,lVar14,param_3,param_4);
LAB_1415cbdd2:
      plVar18 = plVar18 + -3;
    } while (&local_348 <= plVar18);
  }
  return;
code_r0x0001415cbc79:
  cVar13 = <lambda_ce5116e61a4c0a46f3db8549ec9beeaa>::operator()(param_4,puVar20,puVar21);
  if (cVar13 == '\0') goto LAB_1415cbc70;
LAB_1415cbc90:
  do {
    puVar16 = puVar15;
    puVar15 = puVar16 + -8;
    if (puVar15 <= puVar20) break;
    cVar13 = <lambda_ce5116e61a4c0a46f3db8549ec9beeaa>::operator()(param_4,puVar15,puVar20);
  } while (cVar13 == '\0');
  if (puVar21 <= puVar15) {
    if (puVar21 != puVar15) {
      uVar1 = puVar16[-7];
      uVar5 = *puVar21;
      uVar6 = puVar17[9];
      uVar7 = puVar17[10];
      uVar8 = puVar17[0xb];
      uVar9 = puVar17[0xc];
      uVar10 = puVar17[0xd];
      uVar11 = puVar17[0xe];
      uVar12 = puVar17[0xf];
      *puVar21 = *puVar15;
      puVar17[9] = uVar1;
      uVar1 = puVar16[-5];
      puVar17[10] = puVar16[-6];
      puVar17[0xb] = uVar1;
      uVar2 = *(undefined4 *)((longlong)puVar16 + -0x1c);
      uVar3 = *(undefined4 *)(puVar16 + -3);
      uVar4 = *(undefined4 *)((longlong)puVar16 + -0x14);
      *(undefined4 *)(puVar17 + 0xc) = *(undefined4 *)(puVar16 + -4);
      *(undefined4 *)((longlong)puVar17 + 100) = uVar2;
      *(undefined4 *)(puVar17 + 0xd) = uVar3;
      *(undefined4 *)((longlong)puVar17 + 0x6c) = uVar4;
      uVar1 = puVar16[-1];
      puVar17[0xe] = puVar16[-2];
      puVar17[0xf] = uVar1;
      *puVar15 = uVar5;
      puVar16[-7] = uVar6;
      puVar16[-6] = uVar7;
      puVar16[-5] = uVar8;
      puVar16[-4] = uVar9;
      puVar16[-3] = uVar10;
      puVar16[-2] = uVar11;
      puVar16[-1] = uVar12;
    }
    goto LAB_1415cbc70;
  }
  if (puVar20 != puVar15) {
    uVar1 = puVar16[-7];
    uVar5 = *puVar20;
    uVar6 = puVar20[1];
    uVar7 = puVar20[2];
    uVar8 = puVar20[3];
    uVar9 = puVar20[4];
    uVar10 = puVar20[5];
    uVar11 = puVar20[6];
    uVar12 = puVar20[7];
    *puVar20 = *puVar15;
    puVar20[1] = uVar1;
    uVar1 = puVar16[-5];
    puVar20[2] = puVar16[-6];
    puVar20[3] = uVar1;
    uVar2 = *(undefined4 *)((longlong)puVar16 + -0x1c);
    uVar3 = *(undefined4 *)(puVar16 + -3);
    uVar4 = *(undefined4 *)((longlong)puVar16 + -0x14);
    *(undefined4 *)(puVar20 + 4) = *(undefined4 *)(puVar16 + -4);
    *(undefined4 *)((longlong)puVar20 + 0x24) = uVar2;
    *(undefined4 *)(puVar20 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar20 + 0x2c) = uVar4;
    uVar1 = puVar16[-1];
    puVar20[6] = puVar16[-2];
    puVar20[7] = uVar1;
    *puVar15 = uVar5;
    puVar16[-7] = uVar6;
    puVar16[-6] = uVar7;
    puVar16[-5] = uVar8;
    puVar16[-4] = uVar9;
    puVar16[-3] = uVar10;
    puVar16[-2] = uVar11;
    puVar16[-1] = uVar12;
  }
  iVar19 = iVar19 + -1;
  if ((longlong)((longlong)puVar15 + (-0x40 - (longlong)puVar20) & 0xffffffffffffffc0U) <
      (longlong)((longlong)puVar22 - (longlong)puVar21 & 0xffffffffffffffc0U)) {
    if (puVar21 < puVar22) {
      *plVar18 = (longlong)puVar21;
      plVar18[1] = (longlong)puVar22;
      *(int *)(plVar18 + 2) = iVar19;
      plVar18 = plVar18 + 3;
    }
    if (puVar15 <= puVar20 + 8) goto LAB_1415cbdd2;
    puVar22 = puVar16 + -0x10;
    puVar21 = puVar20;
  }
  else {
    if (puVar20 + 8 < puVar15) {
      *plVar18 = (longlong)puVar20;
      plVar18[1] = (longlong)(puVar16 + -0x10);
      *(int *)(plVar18 + 2) = iVar19;
      plVar18 = plVar18 + 3;
    }
    if (puVar22 <= puVar21) goto LAB_1415cbdd2;
  }
  lVar14 = ((longlong)puVar22 - (longlong)puVar21 >> 6) + 1;
  puVar20 = puVar21;
  if (iVar19 == 0) goto LAB_1415cbdc3;
  goto LAB_1415cbc00;
}



// FUNCTION 1415cbed0 FUN_1415cbed0 body=330 status=ok
// SIG undefined FUN_1415cbed0(void)

/* WARNING: Removing unreachable block (ram,0x0001415cbfa7) */
/* WARNING: Removing unreachable block (ram,0x0001415cbfb7) */
/* WARNING: Removing unreachable block (ram,0x0001415cbfc3) */
/* WARNING: Removing unreachable block (ram,0x0001415cbfcf) */

undefined8 * FUN_1415cbed0(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_18 [2];
  
  if (DAT_1468c2208 == (longlong *)0x0) {
    FUN_1415d7ea0();
  }
  plVar1 = (longlong *)(**(code **)(*DAT_1468c2208 + 0x18))(DAT_1468c2208,0,0x20);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_144cb1608;
    *(undefined4 *)(plVar1 + 1) = *param_2;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[2] = lVar2;
  }
  *(undefined4 *)(param_1 + 1) = 2;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (local_18 != param_1 + 3) {
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar1 + 0x30))(plVar1);
    }
  }
  if (plVar1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    lVar2 = (**(code **)(*DAT_1468c2208 + 0x18))(DAT_1468c2208,plVar1,0,0);
  }
  if (lVar2 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar2);
  }
  return param_1;
}



// FUNCTION 1415cc020 FUN_1415cc020 body=445 status=ok
// SIG undefined FUN_1415cc020(void)

int FUN_1415cc020(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  int local_res8;
  undefined1 local_res20 [8];
  undefined1 local_58 [24];
  
  iVar1 = (int)param_1[1];
  if (iVar1 == 0) {
    return 0;
  }
  iVar6 = 0;
  local_res8 = 0;
  cVar3 = FUN_1415d06d0(param_2,*param_1);
  bVar11 = cVar3 == '\0';
  iVar7 = iVar6;
joined_r0x0001415cc090:
  do {
    iVar6 = iVar6 + 1;
    if (iVar6 < iVar1) {
      lVar2 = *param_2;
      lVar9 = (longlong)iVar6 * 0x10 + *param_1;
      FICUInternationalization::ConditionalInitializeAllowedCultures(lVar2);
      if (((*(int *)(lVar2 + 0x130) == *(int *)(lVar2 + 0x15c)) ||
          (piVar5 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                                     (lVar2 + 0x128,local_res20,lVar9), *piVar5 != -1)) &&
         (piVar5 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                                    (lVar2 + 0x178,local_58,lVar9), *piVar5 == -1)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar11 == bVar4) goto joined_r0x0001415cc090;
    }
    iVar8 = iVar6 - iVar7;
    if (bVar11 == false) {
      plVar10 = (longlong *)((longlong)iVar7 * 0x10 + *param_1);
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        lVar2 = *plVar10;
        if (lVar2 != 0) {
          if (DAT_1468c2208 == (longlong *)0x0) {
            FUN_1415d7ea0();
          }
          (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar2);
        }
        plVar10 = plVar10 + 2;
      }
    }
    else {
      if (local_res8 != iVar7) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)local_res8 * 0x10 + *param_1),
                   (void *)((longlong)iVar7 * 0x10 + *param_1),(longlong)iVar8 << 4);
      }
      local_res8 = local_res8 + iVar8;
    }
    bVar11 = (bool)(bVar11 ^ 1);
    iVar7 = iVar6;
    if (iVar1 <= iVar6) {
      *(int *)(param_1 + 1) = local_res8;
      return iVar1 - local_res8;
    }
  } while( true );
}



// FUNCTION 1415cc1e0 FUN_1415cc1e0 body=430 status=ok
// SIG undefined FUN_1415cc1e0(void)

int FUN_1415cc1e0(longlong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar10;
  
  iVar3 = (int)param_1[1];
  if (iVar3 == 0) {
    return 0;
  }
  uVar6 = 0;
  uVar1 = *(ushort *)*param_1;
  uVar10 = uVar6;
  uVar12 = uVar6;
  if (uVar1 != 0) {
    if (uVar1 == 0x2f) {
      *(undefined4 *)*param_2 = 0;
    }
    else if ((((0x34 < (ushort)(uVar1 - 0x2b)) ||
              ((0x10ffffffc0ffe5U >> ((ulonglong)(uVar1 - 0x2b) & 0x3f) & 1) == 0)) &&
             (0x19 < (ushort)(uVar1 - 0x61))) ||
            (iVar4 = *(int *)*param_2, *(int *)*param_2 = iVar4 + 1, 0xd < iVar4)) {
      bVar7 = 0;
      goto LAB_1415cc260;
    }
  }
  bVar7 = 1;
LAB_1415cc260:
  do {
    uVar8 = (uint)uVar10;
    uVar9 = uVar8;
    do {
      uVar6 = uVar6 + 1;
      uVar9 = uVar9 + 1;
      if ((longlong)iVar3 <= (longlong)uVar6) break;
      sVar2 = *(short *)(*param_1 + uVar6 * 2);
      if (sVar2 == 0) {
LAB_1415cc29d:
        bVar5 = 1;
      }
      else {
        if (sVar2 == 0x2f) {
          *(undefined4 *)*param_2 = 0;
          goto LAB_1415cc29d;
        }
        if (((((ushort)(sVar2 - 0x2bU) < 0x35) &&
             ((0x10ffffffc0ffe5U >> ((ulonglong)(ushort)(sVar2 - 0x2bU) & 0x3f) & 1) != 0)) ||
            ((ushort)(sVar2 - 0x61U) < 0x1a)) &&
           (iVar4 = *(int *)*param_2, *(int *)*param_2 = iVar4 + 1, iVar4 < 0xe))
        goto LAB_1415cc29d;
        bVar5 = 0;
      }
    } while (bVar7 == bVar5);
    if (bVar7 != 0) {
      uVar11 = (uint)uVar12;
      if (uVar11 != uVar8) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)(int)uVar11 * 2),
                   (void *)(*param_1 + (longlong)(int)uVar8 * 2),(longlong)(int)(uVar9 - uVar8) * 2)
        ;
      }
      uVar12 = (ulonglong)(uVar11 + (uVar9 - uVar8));
    }
    bVar7 = bVar7 ^ 1;
    uVar10 = (ulonglong)uVar9;
    if ((longlong)iVar3 <= (longlong)uVar6) {
      *(int *)(param_1 + 1) = (int)uVar12;
      return iVar3 - (int)uVar12;
    }
  } while( true );
}



// FUNCTION 1415cc390 FCachedFileHandle body=149 status=ok
// SIG undefined FCachedFileHandle(void)

undefined8 *
FCachedFileHandle::FCachedFileHandle
          (undefined8 *param_1,longlong *param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cb0950;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = (**(code **)(*param_2 + 0x40))(param_2);
  param_1[4] = uVar1;
  *(undefined1 *)(param_1 + 5) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x29) = param_3;
  *(undefined4 *)(param_1 + 0x400a) = 0;
  param_1[0x4008] = 0xffffffffffffffff;
  param_1[0x4006] = 0xffffffffffffffff;
  param_1[0x4009] = 0xffffffffffffffff;
  param_1[0x4007] = 0xffffffffffffffff;
  return param_1;
}



// FUNCTION 1415cc430 FUN_1415cc430 body=1052 status=ok
// SIG undefined FUN_1415cc430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1415cc430(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 uVar6;
  undefined8 ****_Src;
  int iVar7;
  longlong lVar8;
  char *pcVar9;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined **local_1e8;
  undefined8 ***local_1e0;
  int local_1d4;
  ushort local_1c2;
  undefined1 local_1b8 [384];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  lVar2 = operator_new(0x338);
  _Src = (undefined8 ****)0x0;
  ppppuVar3 = _Src;
  if (lVar2 != 0) {
    ppppuVar3 = (undefined8 ****)
                FCulture::FICUCultureImplementation::FICUCultureImplementation(lVar2,param_2);
  }
  *param_1 = (longlong)ppppuVar3;
  ppppuVar4 = (undefined8 ****)operator_new(0x18);
  ppppuVar5 = _Src;
  if (ppppuVar4 != (undefined8 ****)0x0) {
    *(undefined4 *)(ppppuVar4 + 1) = 1;
    *ppppuVar4 = (undefined8 ***)&PTR_DestroyObject_144cb1648;
    *(undefined4 *)((longlong)ppppuVar4 + 0xc) = 1;
    ppppuVar4[2] = ppppuVar3;
    ppppuVar5 = ppppuVar4;
  }
  param_1[1] = (longlong)ppppuVar5;
  SharedPointerInternals::EnableSharedFromThis(param_1,ppppuVar3,ppppuVar3);
  FCulture::FICUCultureImplementation::GetDisplayName(*param_1,param_1 + 2);
  lVar2 = *param_1;
  local_1e8 = icu_53::UnicodeString::vftable;
  local_1c2 = 0x200;
  local_1f8 = 0;
  uVar6 = FUN_143a8a690(local_1b8,&DAT_144cae96c,0,0);
  FUN_143a98fb0(lVar2,uVar6,&local_1e8);
  FUN_143a8acf0(local_1b8);
  param_1[4] = 0;
  param_1[5] = 0;
  iVar7 = (int)(char)local_1c2;
  if ((char)local_1c2 < '\0') {
    iVar7 = local_1d4;
  }
  if ((iVar7 != 0) && (0 < iVar7)) {
    iVar1 = iVar7 + 1;
    if (iVar1 < 1) {
      if ((iVar1 < 0) && (iVar1 != 0)) {
        *(int *)(param_1 + 5) = iVar1;
        TArray<wchar_t,FDefaultAllocator>::ResizeShrink(param_1 + 4);
      }
    }
    else {
      *(int *)(param_1 + 5) = iVar1;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 4,0);
    }
    ppppuVar3 = _Src;
    if (((local_1c2 & 0x1100) == 0) && (ppppuVar3 = &local_1e0, (local_1c2 & 0x200) == 0)) {
      ppppuVar3 = (undefined8 ****)local_1e0;
    }
    _guard_xfg_dispatch_icall_nop((void *)param_1[4],ppppuVar3,(longlong)iVar7 * 2);
    *(undefined2 *)((longlong)iVar7 * 2 + param_1[4]) = 0;
  }
  FUN_143a8dc60(&local_1e8);
  FCulture::FICUCultureImplementation::GetName(*param_1,param_1 + 6);
  local_1e8 = icu_53::UnicodeString::vftable;
  local_1c2 = 0x200;
  FUN_143a98fb0(*param_1,*param_1,&local_1e8);
  param_1[8] = 0;
  param_1[9] = 0;
  iVar7 = (int)(char)local_1c2;
  if ((char)local_1c2 < '\0') {
    iVar7 = local_1d4;
  }
  if (0 < iVar7) {
    iVar1 = iVar7 + 1;
    if (iVar1 < 1) {
      if ((iVar1 < 0) && (iVar1 != 0)) {
        *(int *)(param_1 + 9) = iVar1;
        TArray<wchar_t,FDefaultAllocator>::ResizeShrink(param_1 + 8);
      }
    }
    else {
      *(int *)(param_1 + 9) = iVar1;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 8,0);
    }
    if (((local_1c2 & 0x1100) == 0) && (_Src = &local_1e0, (local_1c2 & 0x200) == 0)) {
      _Src = (undefined8 ****)local_1e0;
    }
    _guard_xfg_dispatch_icall_nop((void *)param_1[8],_Src,(longlong)iVar7 * 2);
    *(undefined2 *)((longlong)iVar7 * 2 + param_1[8]) = 0;
  }
  FUN_143a8dc60(&local_1e8);
  FCulture::FICUCultureImplementation::GetUnrealLegacyThreeLetterISOLanguageName
            (*param_1,param_1 + 10);
  FCulture::FICUCultureImplementation::GetThreeLetterISOLanguageName(*param_1,param_1 + 0xc);
  lVar2 = -1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  pcVar9 = (char *)(*param_1 + 8);
  if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (pcVar9[lVar8] != '\0');
    iVar7 = (int)lVar8 + 1;
    *(int *)(param_1 + 0xf) = iVar7;
    if (0 < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xe,0);
    }
    local_1f8 = CONCAT62(local_1f8._2_6_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(param_1[0xe],iVar7,pcVar9,iVar7);
  }
  FCulture::FICUCultureImplementation::GetNativeLanguage(*param_1,param_1 + 0x10);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  pcVar9 = (char *)(*param_1 + 0x1a);
  if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (pcVar9[lVar8] != '\0');
    iVar7 = (int)lVar8 + 1;
    *(int *)(param_1 + 0x13) = iVar7;
    if (0 < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x12,0);
    }
    local_1f8 = CONCAT62(local_1f8._2_6_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(param_1[0x12],iVar7,pcVar9,iVar7);
  }
  FCulture::FICUCultureImplementation::GetNativeRegion(*param_1,param_1 + 0x14);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  pcVar9 = (char *)(*param_1 + 0x14);
  if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (pcVar9[lVar8] != '\0');
    iVar7 = (int)lVar8 + 1;
    *(int *)(param_1 + 0x17) = iVar7;
    if (0 < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x16,0);
    }
    local_1f8 = CONCAT62(local_1f8._2_6_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(param_1[0x16],iVar7,pcVar9,iVar7);
  }
  lVar8 = *param_1;
  FUN_143a8b520(lVar8);
  pcVar9 = (char *)((longlong)*(int *)(lVar8 + 0x20) + *(longlong *)(lVar8 + 0xd0));
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
    do {
      lVar2 = lVar2 + 1;
    } while (pcVar9[lVar2] != '\0');
    iVar7 = (int)lVar2 + 1;
    *(int *)(param_1 + 0x19) = iVar7;
    if (0 < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x18,0);
    }
    local_1f8 = CONCAT62(local_1f8._2_6_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(param_1[0x18],iVar7,pcVar9,iVar7);
  }
  return param_1;
}



// FUNCTION 1415cc850 FDecimalNumberFormattingRules body=193 status=ok
// SIG undefined FDecimalNumberFormattingRules(void)

longlong FDecimalNumberFormattingRules::FDecimalNumberFormattingRules
                   (longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FString::FString();
  FString::FString(param_1 + 0x10,param_2 + 0x10);
  FString::FString(param_1 + 0x20,param_2 + 0x20);
  FString::FString(param_1 + 0x30,param_2 + 0x30);
  FString::FString(param_1 + 0x40,param_2 + 0x40);
  FString::FString(param_1 + 0x50,param_2 + 0x50);
  FString::FString(param_1 + 0x60,param_2 + 0x60);
  *(undefined2 *)(param_1 + 0x70) = *(undefined2 *)(param_2 + 0x70);
  *(undefined2 *)(param_1 + 0x72) = *(undefined2 *)(param_2 + 0x72);
  *(undefined1 *)(param_1 + 0x74) = *(undefined1 *)(param_2 + 0x74);
  *(undefined1 *)(param_1 + 0x75) = *(undefined1 *)(param_2 + 0x75);
  uVar1 = *(undefined8 *)(param_2 + 0x7e);
  *(undefined8 *)(param_1 + 0x76) = *(undefined8 *)(param_2 + 0x76);
  *(undefined8 *)(param_1 + 0x7e) = uVar1;
  *(undefined4 *)(param_1 + 0x86) = *(undefined4 *)(param_2 + 0x86);
  uVar1 = *(undefined8 *)(param_2 + 0x94);
  *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)(param_2 + 0x8c);
  *(undefined8 *)(param_1 + 0x94) = uVar1;
  *(undefined8 *)(param_1 + 0x9c) = *(undefined8 *)(param_2 + 0x9c);
  return param_1;
}



// FUNCTION 1415cc920 FDecimalNumberFormattingRules body=135 status=ok
// SIG undefined FDecimalNumberFormattingRules(void)

undefined8 * FDecimalNumberFormattingRules::FDecimalNumberFormattingRules(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((longlong)param_1 + 0x74) = 0;
  FNumberFormattingOptions::FNumberFormattingOptions((longlong)param_1 + 0x8c);
  *(undefined4 *)((longlong)param_1 + 0x76) = 0x310030;
  *(undefined4 *)((longlong)param_1 + 0x7a) = 0x330032;
  *(undefined4 *)((longlong)param_1 + 0x7e) = 0x350034;
  *(undefined4 *)((longlong)param_1 + 0x82) = 0x370036;
  *(undefined4 *)((longlong)param_1 + 0x86) = 0x390038;
  return param_1;
}



// FUNCTION 1415cc9b0 FDecimalNumberSigningStrings body=816 status=ok
// SIG undefined FDecimalNumberSigningStrings(void)

longlong *
FastDecimalFormat::Internal::FDecimalNumberSigningStrings::FDecimalNumberSigningStrings
          (longlong *param_1,longlong param_2,byte param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong local_res8;
  longlong local_38 [2];
  
  plVar1 = param_1 + 4;
  *param_1 = 0;
  plVar2 = param_1 + 6;
  param_1[1] = 0;
  plVar3 = param_1 + 8;
  param_1[2] = 0;
  plVar4 = param_1 + 10;
  param_1[3] = 0;
  *plVar1 = 0;
  param_1[5] = 0;
  *plVar2 = 0;
  param_1[7] = 0;
  *plVar3 = 0;
  param_1[9] = 0;
  *plVar4 = 0;
  param_1[0xb] = 0;
  if (*(int *)(param_2 + 0x18) != 0) {
    lVar7 = *param_1;
    if (0 < *(int *)(param_2 + 0x18) + -1) {
      lVar7 = param_2 + 0x10;
    }
    *param_1 = lVar7;
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    lVar7 = param_1[1];
    if (0 < *(int *)(param_2 + 0x28) + -1) {
      lVar7 = param_2 + 0x20;
    }
    param_1[1] = lVar7;
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    lVar7 = param_1[2];
    if (0 < *(int *)(param_2 + 0x38) + -1) {
      lVar7 = param_2 + 0x30;
    }
    param_1[2] = lVar7;
  }
  if (*(int *)(param_2 + 0x48) != 0) {
    lVar7 = param_1[3];
    if (0 < *(int *)(param_2 + 0x48) + -1) {
      lVar7 = param_2 + 0x40;
    }
    param_1[3] = lVar7;
  }
  if ((param_3 & 1) != 0) {
    local_res8 = param_2;
    cVar5 = <lambda_4740f6923b049507587a193ad243d545>::operator()(&local_res8,param_2 + 0x10,plVar3)
    ;
    if (cVar5 != '\0') {
      param_1[2] = (longlong)plVar3;
    }
    cVar5 = <lambda_4740f6923b049507587a193ad243d545>::operator()(&local_res8,param_2 + 0x20,plVar4)
    ;
    if (cVar5 != '\0') {
      param_1[3] = (longlong)plVar4;
    }
  }
  if ((param_3 & 2) != 0) {
    puVar8 = &DAT_143f3eda8;
    if (*(int *)(param_2 + 0x68) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = *(undefined2 **)(param_2 + 0x60);
    }
    uVar6 = FUN_1415dcc00(param_1);
    uVar6 = FString::Replace(uVar6,local_38,puVar9,&DAT_144cb03f0,0);
    FString::operator=(plVar1,uVar6);
    lVar7 = local_38[0];
    if (local_38[0] != 0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar7);
    }
    if (*(int *)(param_2 + 0x68) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = *(undefined2 **)(param_2 + 0x60);
    }
    uVar6 = FUN_1415dcc90(param_1);
    uVar6 = FString::Replace(uVar6,local_38,puVar9,&DAT_144cb03f0,0);
    FString::operator=(plVar2,uVar6);
    lVar7 = local_38[0];
    if (local_38[0] != 0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar7);
    }
    if (*(int *)(param_2 + 0x58) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = *(undefined2 **)(param_2 + 0x50);
    }
    uVar6 = FUN_1415dd2b0(param_1);
    uVar6 = FString::Replace(uVar6,local_38,puVar9,&DAT_144cb0fa0,0);
    FString::operator=(plVar3,uVar6);
    lVar7 = local_38[0];
    if (local_38[0] != 0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar7);
    }
    if (*(int *)(param_2 + 0x58) != 0) {
      puVar8 = *(undefined2 **)(param_2 + 0x50);
    }
    uVar6 = FUN_1415dd340(param_1);
    uVar6 = FString::Replace(uVar6,local_38,puVar8,&DAT_144cb0fa0,0);
    FString::operator=(plVar4,uVar6);
    if (local_38[0] != 0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_38[0]);
    }
    if ((*(int *)(param_2 + 0x18) != 0) && (0 < *(int *)(param_2 + 0x18) + -1)) {
      *param_1 = (longlong)plVar1;
    }
    if ((*(int *)(param_2 + 0x28) != 0) && (0 < *(int *)(param_2 + 0x28) + -1)) {
      param_1[1] = (longlong)plVar2;
    }
    if ((*(int *)(param_2 + 0x38) != 0) && (0 < *(int *)(param_2 + 0x38) + -1)) {
      param_1[2] = (longlong)plVar3;
    }
    if ((*(int *)(param_2 + 0x48) != 0) && (0 < *(int *)(param_2 + 0x48) + -1)) {
      param_1[3] = (longlong)plVar4;
    }
  }
  return param_1;
}



// FUNCTION 1415ccce0 FICUBreakIterator body=38 status=ok
// SIG undefined FICUBreakIterator(void)

undefined8 * FICUBreakIterator::FICUBreakIterator(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_144cb0fc8;
  param_1[1] = *param_2;
  lVar1 = param_2[1];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1415ccd10 FICUCultureImplementation body=586 status=ok
// SIG undefined FICUCultureImplementation(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FCulture::FICUCultureImplementation::FICUCultureImplementation
                   (longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_c8 [4];
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_b8,puVar2);
  local_d8 = 0;
  FUN_143a8a690(param_1,local_30,0,0);
  if (local_38 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_38);
  }
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x228));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x228),4000);
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x260));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x260),4000);
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x298));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x298),4000);
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined4 *)(param_1 + 0x2f0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined4 *)(param_1 + 0x308) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x310));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x310),4000);
  local_c8[0] = 0;
  uVar1 = FUN_143b59970(param_1,0,local_c8);
  *(undefined8 *)(param_1 + 0x208) = uVar1;
  local_c8[0] = 0;
  uVar1 = FUN_143b59970(param_1,1,local_c8);
  *(undefined8 *)(param_1 + 0x210) = uVar1;
  return param_1;
}



// FUNCTION 1415ccf60 FICUInternationalization body=499 status=ok
// SIG undefined FICUInternationalization(void)

undefined8 *
FICUInternationalization::FICUInternationalization(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x43));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x43),4000);
  param_1[0x48] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x49));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x49),4000);
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  return param_1;
}



// FUNCTION 1415cd160 FICUTextCharacterIterator_NativeUTF16 body=109 status=ok
// SIG undefined FICUTextCharacterIterator_NativeUTF16(void)

undefined8 *
FICUTextCharacterIterator_NativeUTF16::FICUTextCharacterIterator_NativeUTF16
          (undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  
  FUN_143aa5db0();
  puVar1 = param_1 + 4;
  *param_1 = &PTR__scalar_deleting_destructor__144cb1028;
  FString::FString(puVar1,param_2);
  param_1[6] = puVar1;
  if (*(int *)(param_1 + 5) == 0) {
    iVar3 = 0;
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
    iVar3 = *(int *)(param_1 + 5) + -1;
  }
  FUN_143aa72b0(param_1,puVar2,iVar3);
  return param_1;
}



// FUNCTION 1415cd1d0 FICUTextCharacterIterator_NativeUTF16 body=117 status=ok
// SIG undefined FICUTextCharacterIterator_NativeUTF16(void)

undefined8 *
FICUTextCharacterIterator_NativeUTF16::FICUTextCharacterIterator_NativeUTF16
          (undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  int iVar4;
  
  FUN_143aa5db0();
  *param_1 = &PTR__scalar_deleting_destructor__144cb1028;
  puVar1 = param_1 + 4;
  uVar2 = FText::ToString(param_2);
  FString::FString(puVar1,uVar2);
  param_1[6] = puVar1;
  if (*(int *)(param_1 + 5) == 0) {
    iVar4 = 0;
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar1;
    iVar4 = *(int *)(param_1 + 5) + -1;
  }
  FUN_143aa72b0(param_1,puVar3,iVar4);
  return param_1;
}



// FUNCTION 1415cd250 FICUTextCharacterIterator_NativeUTF16 body=278 status=ok
// SIG undefined FICUTextCharacterIterator_NativeUTF16(void)

undefined8 *
FICUTextCharacterIterator_NativeUTF16::FICUTextCharacterIterator_NativeUTF16
          (undefined8 *param_1,short *param_2,int param_3)

{
  ulonglong *puVar1;
  undefined2 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong local_38;
  int local_30;
  int local_2c;
  
  FUN_143aa5db0();
  uVar7 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144cb1028;
  local_38 = 0;
  local_2c = 0;
  uVar8 = uVar7;
  iVar6 = 0;
  iVar5 = 0;
  if ((param_2 != (short *)0x0) && (uVar8 = 0, iVar6 = 0, iVar5 = 0, *param_2 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_2[lVar4] != 0);
    iVar3 = (int)lVar4 + 1;
    local_30 = iVar3;
    if (0 < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    iVar6 = local_2c;
    iVar5 = local_30;
    uVar8 = local_38;
    FGenericPlatformString::Memcpy(local_38,param_2,(longlong)iVar3 * 2);
  }
  puVar1 = param_1 + 4;
  if ((iVar5 != 0) || (iVar3 = 1, param_3 == 0)) {
    iVar3 = 0;
  }
  *puVar1 = uVar8;
  *(int *)(param_1 + 5) = iVar5;
  *(int *)((longlong)param_1 + 0x2c) = iVar6;
  if (iVar6 < iVar3 + iVar5 + param_3) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1);
  }
  param_1[6] = puVar1;
  if (*(int *)(param_1 + 5) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
    uVar7 = (ulonglong)(*(int *)(param_1 + 5) - 1);
  }
  FUN_143aa72b0(param_1,puVar2,uVar7);
  return param_1;
}



// FUNCTION 1415cd370 FUN_1415cd370 body=338 status=ok
// SIG undefined FUN_1415cd370(void)

undefined8 * FUN_1415cd370(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  puVar5 = (undefined8 *)operator_new(0x48);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    puVar7 = (undefined8 *)*param_2;
    *puVar5 = icu_53::UnicodeString::vftable;
    *(undefined2 *)((longlong)puVar5 + 0x26) = 0x200;
    ICUUtilities::ConvertString(param_3,puVar5,1);
    plVar2 = (longlong *)puVar7[1];
    plVar8 = plVar2;
    plVar9 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar10 = iVar4 == 0;
      if (bVar10) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (plVar8 = (longlong *)0x0, plVar9 = (longlong *)0x0, !bVar10) {
        LOCK();
        bVar10 = iVar4 == (int)plVar2[1];
        if (bVar10) {
          *(int *)(plVar2 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar10) {
          plVar8 = plVar2;
          if (plVar2 != (longlong *)0x0) {
            plVar9 = (longlong *)*puVar7;
          }
          break;
        }
        LOCK();
        iVar4 = (int)plVar2[1];
        bVar10 = iVar4 == 0;
        if (bVar10) {
          *(int *)(plVar2 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
    FUN_1415d4cf0(DAT_1468b5030,puVar5 + 5,plVar9,puVar5);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
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
    FString::FString(puVar5 + 7,param_3);
  }
  puVar7 = (undefined8 *)0x0;
  *param_1 = puVar5;
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_DestroyObject_144cb1668;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar5;
    puVar7 = puVar6;
  }
  param_1[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_1,puVar5,puVar5);
  return param_1;
}



// FUNCTION 1415cd4d0 FUN_1415cd4d0 body=463 status=ok
// SIG undefined FUN_1415cd4d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1415cd4d0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar4;
  BOOL BVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68 [2];
  longlong local_60;
  longlong *local_58;
  undefined1 local_50 [8];
  undefined **local_48 [4];
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar6 = (longlong *)operator_new(0x10);
  lpCriticalSection = DAT_1468b5030;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    local_48[0] = icu_53::UnicodeString::vftable;
    local_22 = 0x200;
    ICUUtilities::ConvertString(param_2,local_48,1);
    local_68[0] = 0;
    lVar7 = FUN_143b5e6a0(local_48,0,local_68);
    local_58 = (longlong *)operator_new(0x18);
    if (local_58 != (longlong *)0x0) {
      *(undefined4 *)(local_58 + 1) = 1;
      *local_58 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)local_58 + 0xc) = 1;
      local_58[2] = lVar7;
    }
    local_60 = lVar7;
    SharedPointerInternals::EnableSharedFromThis(&local_60,lVar7,lVar7);
    if (local_60 != 0) {
      BVar5 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar5 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      FUN_1415c9c10(lpCriticalSection + 1,local_50,&local_60,0);
      LeaveCriticalSection(lpCriticalSection);
    }
    plVar4 = local_58;
    *plVar6 = local_60;
    plVar6[1] = (longlong)local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_58 + 0xc) = *(int *)((longlong)local_58 + 0xc) + 1;
      UNLOCK();
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
    }
    FUN_143a8dc60(local_48);
  }
  *param_1 = (longlong)plVar6;
  puVar8 = (undefined8 *)operator_new(0x18);
  if (puVar8 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar8 + 1) = 1;
    *puVar8 = &PTR_FUN_144cb1658;
    *(undefined4 *)((longlong)puVar8 + 0xc) = 1;
    puVar8[2] = plVar6;
  }
  param_1[1] = (longlong)puVar8;
  SharedPointerInternals::EnableSharedFromThis(param_1,plVar6,plVar6);
  return param_1;
}



// FUNCTION 1415cd6a0 FRunnableThread body=52 status=ok
// SIG undefined FRunnableThread(void)

undefined8 * FRunnableThread::FRunnableThread(undefined8 *param_1)

{
  *param_1 = &PTR__purecall_144cb0360;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xffffffffffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 1415cd6e0 FScopedEvent body=179 status=ok
// SIG undefined FScopedEvent(void)

undefined8 * FScopedEvent::FScopedEvent(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  uVar2 = FUN_1415a8b50();
  uVar1 = FUN_141594c40(uVar2);
  lVar3 = 0;
  if (uVar1 != 0) {
    lVar3 = *(longlong *)((&DAT_1468a81f8)[uVar1 >> 0xe] + 8 + (ulonglong)(uVar1 & 0x3fff) * 0x18);
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar1);
  }
  if (lVar3 == 0) {
    lVar3 = FWindowsPlatformProcess::CreateSynchEvent(0);
  }
  puVar4 = (undefined8 *)operator_new(0x18);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar4 + 1) = 0;
    *puVar4 = &PTR__purecall_144ca0288;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = &PTR_LAB_144ca09f0;
    puVar4[2] = lVar3;
    *param_1 = puVar4;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1415cd7a0 ~ForElementType<`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FNameTag> body=60 status=ok
// SIG undefined ~ForElementType<`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FNameTag>(void)

void TInlineAllocator<4,FDefaultAllocator>::
     ForElementType<`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FNameTag>::
     ~ForElementType<_FCulture::FICUCultureImplementation::GetCanonicalName_::_2_::FNameTag>
               (longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
                    /* WARNING: Could not recover jumptable at 0x0001415cd7d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
    return;
  }
  return;
}



// FUNCTION 1415cd7e0 FUN_1415cd7e0 body=152 status=ok
// SIG undefined FUN_1415cd7e0(void)

void FUN_1415cd7e0(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar2 = (longlong *)*param_1;
  iVar3 = *(int *)(param_1 + 1);
  if (iVar3 != 0) {
    do {
      lVar1 = *plVar2;
      if (lVar1 != 0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
      }
      plVar2 = plVar2 + 5;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar2 = (longlong *)*param_1;
  }
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  if (DAT_1468c2208 == (longlong *)0x0) {
    FUN_1415d7ea0();
  }
                    /* WARNING: Could not recover jumptable at 0x0001415cd86e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,plVar2);
  return;
}



// FUNCTION 1415cd880 ~TArray<TTuple<FString,FString>,TInlineAllocator<4,FDefaultAllocator>_> body=135 status=ok
// SIG undefined ~TArray<TTuple<FString,FString>,TInlineAllocator<4,FDefaultAllocator>_>(void)

void TArray<TTuple<FString,FString>,TInlineAllocator<4,FDefaultAllocator>_>::
     ~TArray<TTuple<FString,FString>,TInlineAllocator<4,FDefaultAllocator>_>(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x80);
  iVar3 = *(int *)(param_1 + 0x88);
  lVar1 = lVar2;
  if (lVar2 == 0) {
    lVar1 = param_1;
  }
  if (iVar3 != 0) {
    do {
      UE4Tuple_Private::TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FString>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FString>(lVar1);
      lVar1 = lVar1 + 0x20;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar2 = *(longlong *)(param_1 + 0x80);
  }
  if (lVar2 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar2);
  }
  return;
}



// FUNCTION 1415cd910 ~TArray<FICUInternationalization::FICUCultureData,FDefaultAllocator> body=286 status=ok
// SIG undefined ~TArray<FICUInternationalization::FICUCultureData,FDefaultAllocator>(void)

void TArray<FICUInternationalization::FICUCultureData,FDefaultAllocator>::
     ~TArray<FICUInternationalization::FICUCultureData,FDefaultAllocator>(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar2 = (longlong *)*param_1;
  iVar3 = *(int *)(param_1 + 1);
  if (iVar3 != 0) {
    do {
      lVar1 = plVar2[6];
      if (lVar1 != 0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
      }
      lVar1 = plVar2[4];
      if (lVar1 != 0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
      }
      lVar1 = plVar2[2];
      if (lVar1 != 0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
      }
      lVar1 = *plVar2;
      if (lVar1 != 0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
      }
      plVar2 = plVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar2 = (longlong *)*param_1;
  }
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  if (DAT_1468c2208 == (longlong *)0x0) {
    FUN_1415d7ea0();
  }
                    /* WARNING: Could not recover jumptable at 0x0001415cda24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,plVar2);
  return;
}



// FUNCTION 1415cda30 ~TSparseArray<TSetElement<TTuple<unsigned_int,FRunnableThread_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=156 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<unsigned_int,FRunnableThread_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<unsigned_int,FRunnableThread_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<unsigned_int,FRunnableThread_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 1415cdad0 ~TSparseArray<TSetElement<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=156 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
  }
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 1415cdb70 ~TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FDecimalNumberFormattingRules_const_,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=448 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FDecimalNumberFormattingRules_const_,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FDecimalNumberFormattingRules_const_,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FDecimalNumberFormattingRules_const_,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
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
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_1415cdc31;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
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
LAB_1415cdc31:
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
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FCulture,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FCulture,1>_>
                (*param_1 + (longlong)iStack_1c * 0x28);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  lVar5 = param_1[4];
  if (lVar5 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar5);
  }
  lVar5 = *param_1;
  if (lVar5 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar5);
  }
  return;
}



// FUNCTION 1415cdd30 ~TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=114 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  longlong lVar1;
  
  FUN_1415d5b20(param_1,0);
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 1415cddb0 ~TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=114 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  longlong lVar1;
  
  TSparseArray<TSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1,0);
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 1415cde30 ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FICUInternationalization::FICUCachedFileData> body=107 status=ok
// SIG undefined ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FICUInternationalization::FICUCachedFileData>(void)

void UE4Tuple_Private::
     TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FICUInternationalization::FICUCachedFileData>
     ::
     ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FICUInternationalization::FICUCachedFileData>
               (longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 1415cdea0 ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FString> body=107 status=ok
// SIG undefined ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FString>(void)

void UE4Tuple_Private::TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FString>::
     ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FString>(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 1415cdf10 ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FCulture,1>_> body=137 status=ok
// SIG undefined ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FCulture,1>_>(void)

void UE4Tuple_Private::
     TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FCulture,1>_>::
     ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FCulture,1>_>
               (longlong *param_1)

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
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return;
  }
  if (DAT_1468c2208 == (longlong *)0x0) {
    FUN_1415d7ea0();
  }
                    /* WARNING: Could not recover jumptable at 0x0001415cdf8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar5);
  return;
}



// FUNCTION 1415cdfa0 FUN_1415cdfa0 body=598 status=ok
// SIG undefined FUN_1415cdfa0(void)

void FUN_1415cdfa0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = *(longlong *)(param_1 + 0xc0);
  if (lVar4 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar4);
  }
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (lVar4 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar4);
  }
  lVar4 = *(longlong *)(param_1 + 0xa0);
  if (lVar4 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar4);
  }
  lVar4 = *(longlong *)(param_1 + 0x90);
  if (lVar4 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar4);
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (lVar4 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar4);
  }
  lVar4 = *(longlong *)(param_1 + 0x70);
  if (lVar4 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar4);
  }
  lVar4 = *(longlong *)(param_1 + 0x60);
  if (lVar4 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar4);
  }
  lVar4 = *(longlong *)(param_1 + 0x50);
  if (lVar4 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar4);
  }
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (lVar4 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar4);
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  if (lVar4 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar4);
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar4);
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar4);
  }
  plVar5 = *(longlong **)(param_1 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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



// FUNCTION 1415ce200 ~FDecimalNumberFormattingRules body=317 status=ok
// SIG undefined ~FDecimalNumberFormattingRules(void)

void FDecimalNumberFormattingRules::~FDecimalNumberFormattingRules(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  lVar1 = param_1[10];
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  lVar1 = param_1[8];
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 1415ce340 ~FDecimalNumberSigningStrings body=192 status=ok
// SIG undefined ~FDecimalNumberSigningStrings(void)

void FastDecimalFormat::Internal::FDecimalNumberSigningStrings::~FDecimalNumberSigningStrings
               (longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 1415ce400 ~FICUCultureData body=191 status=ok
// SIG undefined ~FICUCultureData(void)

void FICUInternationalization::FICUCultureData::~FICUCultureData(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 1415ce4c0 FUN_1415ce4c0 body=854 status=ok
// SIG undefined FUN_1415ce4c0(void)

void FUN_1415ce4c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x310));
  *(undefined4 *)(param_1 + 0x308) = 0;
  lVar4 = *(longlong *)(param_1 + 0x300);
  if (lVar4 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar4);
  }
  TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FDecimalNumberFormattingRules_const_,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FDecimalNumberFormattingRules_const_,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x2c0);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x298));
  plVar5 = *(longlong **)(param_1 + 0x290);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x260));
  plVar5 = *(longlong **)(param_1 + 600);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x228));
  plVar5 = *(longlong **)(param_1 + 0x220);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  plVar5 = *(longlong **)(param_1 + 0x200);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  plVar5 = *(longlong **)(param_1 + 0x1f0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  plVar5 = *(longlong **)(param_1 + 0x1e0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  plVar5 = *(longlong **)(param_1 + 0x1d0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  plVar5 = *(longlong **)(param_1 + 0x1c0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  plVar5 = *(longlong **)(param_1 + 0x1b0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  plVar5 = *(longlong **)(param_1 + 0x1a0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  plVar5 = *(longlong **)(param_1 + 400);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  plVar5 = *(longlong **)(param_1 + 0x180);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  FUN_143a8acf0(param_1);
  return;
}



// FUNCTION 1415ce820 FUN_1415ce820 body=428 status=ok
// SIG undefined FUN_1415ce820(void)

void FUN_1415ce820(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  BOOL BVar5;
  longlong *plVar6;
  bool bVar7;
  longlong local_48;
  longlong *local_40;
  longlong local_38 [2];
  
  lVar3 = DAT_1468b5030;
  if (DAT_1468b5030 != 0) {
    plVar6 = *(longlong **)(param_1 + 0x30);
    plVar1 = (longlong *)(param_1 + 0x28);
    local_48 = 0;
    local_40 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(plVar6 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (!bVar7) {
        LOCK();
        bVar7 = iVar4 == (int)plVar6[1];
        if (bVar7) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar7) {
          if ((plVar6 != (longlong *)0x0) && (local_48 = *plVar1, local_48 != 0)) {
            BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x78));
            if (BVar5 == 0) {
              EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x78));
            }
            FUN_1406a1eb0(lVar3 + 0xa0,&local_48);
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x78));
          }
          goto LAB_1415ce8e8;
        }
        LOCK();
        iVar4 = (int)plVar6[1];
        bVar7 = iVar4 == 0;
        if (bVar7) {
          *(int *)(plVar6 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
      local_40 = (longlong *)0x0;
      plVar6 = (longlong *)0x0;
    }
LAB_1415ce8e8:
    if (plVar1 != local_38) {
      *plVar1 = 0;
      plVar1 = *(longlong **)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = 0;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar6 = local_40;
        if (iVar4 == 1) {
          (**(code **)(*plVar1 + 8))(plVar1,1);
          plVar6 = local_40;
        }
      }
    }
    plVar1 = local_40;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar6 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (lVar3 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar3);
  }
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 8))(plVar1,1);
    }
  }
  FUN_143a8dc60(param_1);
  return;
}



// FUNCTION 1415ce9d0 FUN_1415ce9d0 body=356 status=ok
// SIG undefined FUN_1415ce9d0(void)

void FUN_1415ce9d0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar4;
  BOOL BVar5;
  longlong *plVar6;
  bool bVar7;
  longlong local_38;
  longlong *local_30;
  longlong local_28 [2];
  
  lpCriticalSection = DAT_1468b5030;
  if (DAT_1468b5030 != (LPCRITICAL_SECTION)0x0) {
    plVar6 = (longlong *)param_1[1];
    local_38 = 0;
    local_30 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(plVar6 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (!bVar7) {
        LOCK();
        bVar7 = iVar4 == (int)plVar6[1];
        if (bVar7) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar7) {
          if ((plVar6 != (longlong *)0x0) && (local_38 = *param_1, local_38 != 0)) {
            BVar5 = TryEnterCriticalSection(lpCriticalSection);
            if (BVar5 == 0) {
              EnterCriticalSection(lpCriticalSection);
            }
            FUN_1406a1eb0(lpCriticalSection + 1,&local_38);
            LeaveCriticalSection(lpCriticalSection);
          }
          goto LAB_1415cea84;
        }
        LOCK();
        iVar4 = (int)plVar6[1];
        bVar7 = iVar4 == 0;
        if (bVar7) {
          *(int *)(plVar6 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
      local_30 = (longlong *)0x0;
      plVar6 = (longlong *)0x0;
    }
LAB_1415cea84:
    if (param_1 != local_28) {
      *param_1 = 0;
      plVar2 = (longlong *)param_1[1];
      param_1[1] = 0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar6 = local_30;
        if (iVar4 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
          plVar6 = local_30;
        }
      }
    }
    plVar2 = local_30;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar6 + 1;
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
  }
  plVar6 = (longlong *)param_1[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (plVar6 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001415ceb2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 8))(plVar6,1);
      return;
    }
  }
  return;
}



// FUNCTION 1415ceb40 FUN_1415ceb40 body=175 status=ok
// SIG undefined FUN_1415ceb40(void)

void FUN_1415ceb40(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR__purecall_144cb0360;
  uVar2 = FUN_1415d8270();
  FUN_1415d3d90(uVar2,param_1);
  FUN_1415bb690(param_1);
  FUN_1415bb5d0(param_1);
  if (DAT_1468c217e == '\0') {
    uVar2 = FUN_1415d8270();
    FUN_1415e4100(uVar2,param_1);
  }
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return;
}



// FUNCTION 1415cebf0 ~FScopedEvent body=60 status=ok
// SIG undefined ~FScopedEvent(void)

void FScopedEvent::~FScopedEvent(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    uVar2 = FUN_1415a8b50();
    FEventPool<0>::ReturnToPool(uVar2,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1415cec30 operator_new body=7 status=ok
// SIG void * operator_new(size_t _Size)

void * __cdecl FUseSystemMallocForNew::operator_new(size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001415cec30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = malloc(_Size);
  return pvVar1;
}



// FUNCTION 1415cec40 operator_delete body=7 status=ok
// SIG void operator_delete(void * _Memory)

void __cdecl FUseSystemMallocForNew::operator_delete(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x0001415cec40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



// FUNCTION 1415cec50 operator= body=8 status=ok
// SIG undefined operator=(void)

undefined4 *
icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=
          (undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return param_1;
}



// FUNCTION 1415cec60 FUN_1415cec60 body=371 status=ok
// SIG undefined FUN_1415cec60(void)

undefined8 FUN_1415cec60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int local_res8 [2];
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined1 *local_28;
  undefined1 **local_20;
  
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_38,param_1);
  local_28 = local_38;
  local_20 = &local_28;
  FUN_14158ce90(local_30,param_2);
  FUN_14158ce90(*(undefined8 *)(local_28 + 8),param_2 + 0x10);
  FUN_1415f8370(&local_28,param_2 + 0x20);
  local_res8[0] = *(int *)(param_2 + 0x78);
  plVar1 = *(longlong **)(local_28 + 8);
  piVar2 = *(int **)plVar1[1];
  if ((int *)((undefined8 *)plVar1[1])[1] < piVar2 + 1) {
    (**(code **)(*plVar1 + 0x50))(plVar1,local_res8,4);
    if ((*(byte *)((longlong)plVar1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *piVar2;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  if ((*(byte *)(*(longlong *)(local_28 + 8) + 0x28) & 1) != 0) {
    TArray<FTextSourceSiteContext,FDefaultAllocator>::SetNum
              ((longlong *)(param_2 + 0x70),local_res8[0],1);
  }
  iVar4 = 0;
  if (0 < local_res8[0]) {
    do {
      lVar3 = (longlong)iVar4 * 200 + *(longlong *)(param_2 + 0x70);
      FUN_14158ce90(*(undefined8 *)(local_28 + 8),lVar3);
      FUN_14158ce90(*(undefined8 *)(local_28 + 8),lVar3 + 0x10);
      (**(code **)(**(longlong **)(local_28 + 8) + 8))(*(longlong **)(local_28 + 8),lVar3 + 0x20);
      (**(code **)(**(longlong **)(local_28 + 8) + 8))(*(longlong **)(local_28 + 8),lVar3 + 0x21);
      FUN_1415f8370(&local_28,lVar3 + 0x28);
      FUN_1415f8370(&local_28,lVar3 + 0x78);
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_res8[0]);
  }
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_38);
  return param_1;
}



// FUNCTION 1415cede0 FUN_1415cede0 body=1596 status=ok
// SIG undefined FUN_1415cede0(void)

void FUN_1415cede0(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  wchar_t **ppwVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  wchar_t **ppwVar14;
  int iVar15;
  uint uVar16;
  wchar_t *pwVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong lVar20;
  uint uVar21;
  wchar_t *pwVar22;
  wchar_t *pwVar23;
  wchar_t *pwVar24;
  undefined1 local_res10 [8];
  longlong local_res18;
  wchar_t **local_res20;
  wchar_t *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  ulonglong local_98;
  wchar_t *local_90;
  ulonglong local_88;
  wchar_t *local_80;
  undefined8 local_78;
  wchar_t *local_70;
  undefined8 local_68;
  undefined2 *local_60;
  undefined8 local_58;
  
  iVar6 = *(int *)(param_2 + 1);
  local_res18 = param_3;
  if (*(int *)(param_3 + 8) - *(int *)(param_3 + 0x34) < iVar6) {
    FUN_1415e4440(param_3);
    iVar6 = *(int *)(param_2 + 1);
  }
  ppwVar14 = (wchar_t **)*param_2;
  ppwVar7 = ppwVar14 + (longlong)iVar6 * 2;
  do {
    local_res20 = ppwVar14;
    if (ppwVar14 == ppwVar7) {
      cVar3 = TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              ::Compact(param_3);
      if (cVar3 != '\0') {
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash(param_3);
      }
      return;
    }
    pwVar23 = (wchar_t *)0x0;
    local_b0 = (wchar_t *)0x0;
    local_a8 = 0;
    local_70 = (wchar_t *)0x0;
    local_68 = 0;
    local_60 = (undefined2 *)0x0;
    local_58 = 2;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
    puVar9 = local_60;
    FGenericPlatformString::Memcpy(local_60,&DAT_144cb1544,4);
    iVar6 = (int)local_58;
    puVar10 = &DAT_143f3eda8;
    if ((int)local_58 != 0) {
      puVar10 = puVar9;
    }
    iVar4 = FUN_141592950(ppwVar14,puVar10,0,0,0xffffffff);
    if (iVar4 < 0) {
      bVar2 = false;
      pwVar24 = pwVar23;
      iVar6 = 0;
    }
    else {
      iVar15 = *(int *)(ppwVar14 + 1);
      if (iVar15 == 0) {
        pwVar22 = L"";
      }
      else {
        pwVar22 = *ppwVar14;
      }
      iVar11 = iVar15 + -1;
      local_90 = (wchar_t *)0x0;
      pwVar23 = (wchar_t *)0x0;
      if (iVar15 == 0) {
        iVar11 = 0;
      }
      if (iVar4 < iVar11) {
        iVar11 = iVar4;
      }
      uVar16 = iVar11 + 1;
      if (iVar11 == 0) {
        uVar16 = 0;
      }
      pwVar24 = (wchar_t *)(ulonglong)uVar16;
      local_88 = (ulonglong)uVar16;
      if (0 < (int)uVar16) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,0);
        pwVar23 = local_90;
        pwVar24 = (wchar_t *)(local_88 & 0xffffffff);
        if (0 < (int)local_88) {
          wcsncpy(local_90,pwVar22,(longlong)iVar11);
          pwVar23[iVar11] = L'\0';
        }
      }
      uVar18 = local_88 >> 0x20;
      local_88 = 0;
      local_90 = (wchar_t *)0x0;
      local_a8 = CONCAT44((int)uVar18,(int)pwVar24);
      iVar15 = 0;
      if (iVar6 != 0) {
        iVar15 = iVar6 + -1;
      }
      uVar5 = iVar15 + iVar4;
      uVar16 = uVar5 + 0x7fffffff;
      iVar6 = *(int *)(local_res20 + 1);
      uVar21 = iVar6 - 1;
      if (iVar6 == 0) {
        uVar21 = 0xffffffff;
      }
      if (iVar6 == 0) {
        uVar21 = 0;
      }
      if (uVar5 < uVar21) {
        uVar21 = uVar5;
      }
      uVar5 = iVar6 - 1;
      if (iVar6 == 0) {
        uVar5 = 0;
      }
      uVar12 = uVar21;
      if ((uVar21 <= uVar16) && (uVar12 = uVar5, uVar16 < uVar5)) {
        uVar12 = uVar16;
      }
      if (iVar6 == 0) {
        pwVar22 = L"";
      }
      else {
        pwVar22 = *local_res20;
      }
      iVar6 = uVar12 - uVar21;
      local_80 = (wchar_t *)0x0;
      local_78 = (ulonglong)(iVar6 + 1);
      if (iVar6 == 0) {
        local_78 = 0;
      }
      iVar4 = (int)local_78;
      pwVar17 = local_80;
      local_b0 = pwVar23;
      if (0 < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,0);
        pwVar17 = local_80;
        iVar4 = (int)local_78;
        if (0 < (int)local_78) {
          wcsncpy(local_80,pwVar22 + (int)uVar21,(longlong)iVar6);
          pwVar17[iVar6] = L'\0';
        }
      }
      if (local_70 != (wchar_t *)0x0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))();
      }
      bVar2 = true;
      local_68 = CONCAT44(local_78._4_4_,iVar4);
      local_78 = 0;
      local_80 = (wchar_t *)0x0;
      puVar9 = local_60;
      iVar6 = local_a8._4_4_;
      local_70 = pwVar17;
    }
    iVar4 = (int)pwVar24;
    if (puVar9 != (undefined2 *)0x0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))();
    }
    if (bVar2) {
      local_a0 = (longlong *)0x0;
      local_98 = 0;
      iVar6 = FUN_141594550(&local_70,&local_a0,&DAT_144042018);
      if (iVar6 == 0) {
LAB_1415cf1e9:
        plVar13 = local_a0;
        for (iVar6 = (int)local_98; iVar6 != 0; iVar6 = iVar6 + -1) {
          if (*plVar13 != 0) {
            if (DAT_1468c2208 == (longlong *)0x0) {
              FUN_1415d7ea0();
            }
            (**(code **)(*DAT_1468c2208 + 0x20))();
          }
          plVar13 = plVar13 + 2;
        }
        if (local_a0 != (longlong *)0x0) {
          if (DAT_1468c2208 == (longlong *)0x0) {
            FUN_1415d7ea0();
          }
          (**(code **)(*DAT_1468c2208 + 0x20))();
        }
        goto LAB_1415cf2a1;
      }
      uVar18 = (ulonglong)(int)local_98;
      plVar19 = local_a0 + uVar18 * 2;
      plVar13 = local_a0;
      if (local_a0 != plVar19) {
        do {
          if (*(int *)((undefined8 *)param_1[1] + 1) == 0) {
            puVar9 = &DAT_143f3eda8;
          }
          else {
            puVar9 = *(undefined2 **)param_1[1];
          }
          iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9);
          if (iVar6 == 0) goto LAB_1415cf1e9;
          plVar13 = plVar13 + 2;
        } while (plVar13 != plVar19);
        uVar18 = local_98 & 0xffffffff;
      }
      uVar16 = (uint)uVar18;
      plVar13 = local_a0;
      while (uVar16 != 0) {
        if (*plVar13 != 0) {
          if (DAT_1468c2208 == (longlong *)0x0) {
            FUN_1415d7ea0();
          }
          (**(code **)(*DAT_1468c2208 + 0x20))();
        }
        plVar13 = plVar13 + 2;
        uVar16 = (int)uVar18 - 1;
        uVar18 = (ulonglong)uVar16;
      }
      if (local_a0 != (longlong *)0x0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))();
      }
      if (local_70 != (wchar_t *)0x0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        goto LAB_1415cf388;
      }
    }
    else {
      if (&local_b0 != local_res20) {
        iVar4 = *(int *)(local_res20 + 1);
        pwVar22 = *local_res20;
        local_a8 = CONCAT44(local_a8._4_4_,iVar4);
        if ((iVar4 == 0) && (iVar6 == 0)) {
          local_a8 = 0;
          iVar4 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b0,iVar4,iVar6);
          pwVar23 = local_b0;
          _guard_xfg_dispatch_icall_nop(local_b0,pwVar22,(longlong)iVar4 * 2);
          iVar4 = (int)local_a8;
        }
      }
LAB_1415cf2a1:
      lVar1 = *param_1;
      if (*(int *)(lVar1 + 0x30) != *(int *)(lVar1 + 0x5c)) {
        pwVar22 = L"";
        if (iVar4 != 0) {
          pwVar22 = pwVar23;
        }
        iVar6 = FUN_140438070(pwVar22);
        lVar8 = *(longlong *)(lVar1 + 0x68);
        if (*(longlong *)(lVar1 + 0x68) == 0) {
          lVar8 = lVar1 + 0x60;
        }
        iVar6 = *(int *)(lVar8 + ((longlong)*(int *)(lVar1 + 0x70) - 1U & (longlong)iVar6) * 4);
        if (iVar6 != -1) {
          lVar8 = *(longlong *)(lVar1 + 0x28);
          do {
            lVar20 = (longlong)iVar6 * 0x20;
            if (*(int *)(lVar20 + 8 + lVar8) == 0) {
              puVar9 = &DAT_143f3eda8;
            }
            else {
              puVar9 = *(undefined2 **)(lVar20 + lVar8);
            }
            iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9);
            if (iVar4 == 0) {
              if (iVar6 != -1) {
                FUN_1415cb280(local_res18,local_res10,&local_b0);
                pwVar23 = local_b0;
              }
              break;
            }
            lVar8 = *(longlong *)(lVar1 + 0x28);
            iVar6 = *(int *)(lVar20 + 0x18 + lVar8);
          } while (iVar6 != -1);
        }
      }
      if (local_70 != (wchar_t *)0x0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
LAB_1415cf388:
        (**(code **)(*DAT_1468c2208 + 0x20))();
      }
    }
    if (pwVar23 != (wchar_t *)0x0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))();
    }
    ppwVar14 = local_res20 + 2;
    param_3 = local_res18;
  } while( true );
}



// FUNCTION 1415cf420 operator() body=214 status=ok
// SIG undefined operator()(void)

undefined8
<lambda_4740f6923b049507587a193ad243d545>::operator()
          (longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong local_18 [2];
  
  puVar4 = &DAT_143f3eda8;
  if (*(int *)(*param_1 + 0x68) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = *(undefined2 **)(*param_1 + 0x60);
  }
  iVar2 = FUN_141592950(param_2,puVar5,0,0,0xffffffff);
  if (iVar2 == -1) {
    uVar3 = 0;
  }
  else {
    lVar1 = *param_1;
    if (*(int *)(lVar1 + 0x58) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = *(undefined2 **)(lVar1 + 0x50);
    }
    if (*(int *)(lVar1 + 0x68) != 0) {
      puVar4 = *(undefined2 **)(lVar1 + 0x60);
    }
    uVar3 = FString::Replace(param_2,local_18,puVar4,puVar5,0);
    FString::operator=(param_3,uVar3);
    if (local_18[0] != 0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_18[0]);
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1415cf500 operator() body=2821 status=ok
// SIG undefined operator()(void)

undefined8 *
<lambda_baddde5aeda862e686966c7b19c511e7>::operator()(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong local_58 [2];
  wchar_t *local_48;
  wchar_t *local_40;
  undefined *puStack_38;
  
  *param_2 = 0;
  param_2[1] = 0;
  local_48 = L"en-US-POSIX";
  local_58[0] = 0;
  local_58[1] = 0;
  local_40 = (wchar_t *)0x0;
  puStack_38 = (undefined *)0x0;
  TSortedMap<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData,FDefaultAllocator,TLess<FString>_>
  ::Emplace<FString,_FCulture::FICUCultureImplementation::GetCanonicalName_::_2_::FCanonizedTagData>
            (param_2,local_58,&local_48);
  lVar1 = local_58[0];
  if (local_58[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  local_48 = L"en-US-POSIX";
  local_58[0] = 0;
  local_58[1] = 2;
  local_40 = (wchar_t *)0x0;
  puStack_38 = (undefined *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],&DAT_144cb1110,4);
  TSortedMap<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData,FDefaultAllocator,TLess<FString>_>
  ::Emplace<FString,_FCulture::FICUCultureImplementation::GetCanonicalName_::_2_::FCanonizedTagData>
            (param_2,local_58,&local_48);
  lVar1 = local_58[0];
  if (local_58[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  local_48 = L"en-US-POSIX";
  local_58[0] = 0;
  local_58[1] = 6;
  local_40 = (wchar_t *)0x0;
  puStack_38 = (undefined *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"posix",0xc);
  TSortedMap<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData,FDefaultAllocator,TLess<FString>_>
  ::Emplace<FString,_FCulture::FICUCultureImplementation::GetCanonicalName_::_2_::FCanonizedTagData>
            (param_2,local_58,&local_48);
  lVar1 = local_58[0];
  if (local_58[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  local_58[0] = 0;
  local_48 = L"ca-ES";
  local_40 = L"currency";
  puStack_38 = &DAT_144cb1150;
  local_58[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"ca-ES-PREEURO",0x1c);
  TSortedMap<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData,FDefaultAllocator,TLess<FString>_>
  ::Emplace<FString,_FCulture::FICUCultureImplementation::GetCanonicalName_::_2_::FCanonizedTagData>
            (param_2,local_58,&local_48);
  lVar1 = local_58[0];
  if (local_58[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  local_40 = L"currency";
  local_48 = L"de-AT";
  local_58[0] = 0;
  puStack_38 = &DAT_144cb1188;
  local_58[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"de-AT-PREEURO",0x1c);
  TSortedMap<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData,FDefaultAllocator,TLess<FString>_>
  ::Emplace<FString,_FCulture::FICUCultureImplementation::GetCanonicalName_::_2_::FCanonizedTagData>
            (param_2,local_58,&local_48);
  lVar1 = local_58[0];
  if (local_58[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  local_40 = L"currency";
  local_48 = L"de-DE";
  local_58[0] = 0;
  puStack_38 = &DAT_144cb11c0;
  local_58[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"de-DE-PREEURO",0x1c);
  TSortedMap<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData,FDefaultAllocator,TLess<FString>_>
  ::Emplace<FString,_FCulture::FICUCultureImplementation::GetCanonicalName_::_2_::FCanonizedTagData>
            (param_2,local_58,&local_48);
  lVar1 = local_58[0];
  if (local_58[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  local_40 = L"currency";
  local_48 = L"de-LU";
  puStack_38 = &DAT_144cb11f8;
  local_58[0] = 0;
  local_58[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"de-LU-PREEURO",0x1c);
  TSortedMap<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData,FDefaultAllocator,TLess<FString>_>
  ::Emplace<FString,_FCulture::FICUCultureImplementation::GetCanonicalName_::_2_::FCanonizedTagData>
            (param_2,local_58,&local_48);
  lVar1 = local_58[0];
  if (local_58[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  local_40 = L"currency";
  local_48 = L"el-GR";
  local_58[0] = 0;
  puStack_38 = &DAT_144cb1230;
  local_58[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"el-GR-PREEURO",0x1c);
  TSortedMap<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData,FDefaultAllocator,TLess<FString>_>
  ::Emplace<FString,_FCulture::FICUCultureImplementation::GetCanonicalName_::_2_::FCanonizedTagData>
            (param_2,local_58,&local_48);
  lVar1 = local_58[0];
  if (local_58[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  local_40 = L"currency";
  local_48 = L"en-BE";
  puStack_38 = &DAT_144cb1268;
  local_58[0] = 0;
  local_58[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"en-BE-PREEURO",0x1c);
  TSortedMap<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData,FDefaultAllocator,TLess<FString>_>
  ::Emplace<FString,_FCulture::FICUCultureImplementation::GetCanonicalName_::_2_::FCanonizedTagData>
            (param_2,local_58,&local_48);
  lVar1 = local_58[0];
  if (local_58[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  local_40 = L"currency";
  local_48 = L"en-IE";
  puStack_38 = &DAT_144cb12a0;
  local_58[0] = 0;
  local_58[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"en-IE-PREEURO",0x1c);
  TSortedMap<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData,FDefaultAllocator,TLess<FString>_>
  ::Emplace<FString,_FCulture::FICUCultureImplementation::GetCanonicalName_::_2_::FCanonizedTagData>
            (param_2,local_58,&local_48);
  lVar1 = local_58[0];
  if (local_58[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  local_40 = L"currency";
  local_48 = L"es-ES";
  local_58[0] = 0;
  puStack_38 = &DAT_144cb1150;
  local_58[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"es-ES-PREEURO",0x1c);
  TSortedMap<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData,FDefaultAllocator,TLess<FString>_>
  ::Emplace<FString,_FCulture::FICUCultureImplementation::GetCanonicalName_::_2_::FCanonizedTagData>
            (param_2,local_58,&local_48);
  lVar1 = local_58[0];
  if (local_58[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  local_40 = L"currency";
  local_48 = L"eu-ES";
  local_58[0] = 0;
  puStack_38 = &DAT_144cb1150;
  local_58[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"eu-ES-PREEURO",0x1c);
  TSortedMap<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData,FDefaultAllocator,TLess<FString>_>
  ::Emplace<FString,_FCulture::FICUCultureImplementation::GetCanonicalName_::_2_::FCanonizedTagData>
            (param_2,local_58,&local_48);
  lVar1 = local_58[0];
  if (local_58[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  local_40 = L"currency";
  local_48 = L"fi-FI";
  local_58[0] = 0;
  puStack_38 = &DAT_144cb1338;
  local_58[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"fi-FI-PREEURO",0x1c);
  TSortedMap<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData,FDefaultAllocator,TLess<FString>_>
  ::Emplace<FString,_FCulture::FICUCultureImplementation::GetCanonicalName_::_2_::FCanonizedTagData>
            (param_2,local_58,&local_48);
  lVar1 = local_58[0];
  if (local_58[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  local_40 = L"currency";
  local_48 = L"fr-BE";
  puStack_38 = &DAT_144cb1268;
  local_58[0] = 0;
  local_58[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"fr-BE-PREEURO",0x1c);
  TSortedMap<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData,FDefaultAllocator,TLess<FString>_>
  ::Emplace<FString,_FCulture::FICUCultureImplementation::GetCanonicalName_::_2_::FCanonizedTagData>
            (param_2,local_58,&local_48);
  lVar1 = local_58[0];
  if (local_58[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  local_40 = L"currency";
  local_48 = L"fr-FR";
  local_58[0] = 0;
  puStack_38 = &DAT_144cb13a0;
  local_58[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"fr-FR-PREEURO",0x1c);
  TSortedMap<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData,FDefaultAllocator,TLess<FString>_>
  ::Emplace<FString,_FCulture::FICUCultureImplementation::GetCanonicalName_::_2_::FCanonizedTagData>
            (param_2,local_58,&local_48);
  lVar1 = local_58[0];
  if (local_58[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  local_40 = L"currency";
  local_48 = L"fr-LU";
  puStack_38 = &DAT_144cb11f8;
  local_58[0] = 0;
  local_58[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"fr-LU-PREEURO",0x1c);
  TSortedMap<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData,FDefaultAllocator,TLess<FString>_>
  ::Emplace<FString,_FCulture::FICUCultureImplementation::GetCanonicalName_::_2_::FCanonizedTagData>
            (param_2,local_58,&local_48);
  lVar1 = local_58[0];
  if (local_58[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  local_40 = L"currency";
  local_48 = L"ga-IE";
  puStack_38 = &DAT_144cb12a0;
  local_58[0] = 0;
  local_58[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"ga-IE-PREEURO",0x1c);
  TSortedMap<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData,FDefaultAllocator,TLess<FString>_>
  ::Emplace<FString,_FCulture::FICUCultureImplementation::GetCanonicalName_::_2_::FCanonizedTagData>
            (param_2,local_58,&local_48);
  lVar1 = local_58[0];
  if (local_58[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  local_40 = L"currency";
  local_48 = L"gl-ES";
  local_58[0] = 0;
  puStack_38 = &DAT_144cb1150;
  local_58[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"gl-ES-PREEURO",0x1c);
  TSortedMap<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData,FDefaultAllocator,TLess<FString>_>
  ::Emplace<FString,_FCulture::FICUCultureImplementation::GetCanonicalName_::_2_::FCanonizedTagData>
            (param_2,local_58,&local_48);
  lVar1 = local_58[0];
  if (local_58[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  local_40 = L"currency";
  local_48 = L"it-IT";
  local_58[0] = 0;
  puStack_38 = &DAT_144cb1468;
  local_58[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"it-IT-PREEURO",0x1c);
  TSortedMap<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData,FDefaultAllocator,TLess<FString>_>
  ::Emplace<FString,_FCulture::FICUCultureImplementation::GetCanonicalName_::_2_::FCanonizedTagData>
            (param_2,local_58,&local_48);
  lVar1 = local_58[0];
  if (local_58[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  local_40 = L"currency";
  local_48 = L"nl-BE";
  puStack_38 = &DAT_144cb1268;
  local_58[0] = 0;
  local_58[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"nl-BE-PREEURO",0x1c);
  TSortedMap<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData,FDefaultAllocator,TLess<FString>_>
  ::Emplace<FString,_FCulture::FICUCultureImplementation::GetCanonicalName_::_2_::FCanonizedTagData>
            (param_2,local_58,&local_48);
  lVar1 = local_58[0];
  if (local_58[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  local_40 = L"currency";
  local_48 = L"nl-NL";
  local_58[0] = 0;
  puStack_38 = &DAT_144cb14d0;
  local_58[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"nl-NL-PREEURO",0x1c);
  TSortedMap<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData,FDefaultAllocator,TLess<FString>_>
  ::Emplace<FString,_FCulture::FICUCultureImplementation::GetCanonicalName_::_2_::FCanonizedTagData>
            (param_2,local_58,&local_48);
  lVar1 = local_58[0];
  if (local_58[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  local_40 = L"currency";
  local_48 = L"pt-PT";
  local_58[0] = 0;
  puStack_38 = &DAT_144cb1508;
  local_58[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"pt-PT-PREEURO",0x1c);
  TSortedMap<FString,`FCulture::FICUCultureImplementation::GetCanonicalName'::`2'::FCanonizedTagData,FDefaultAllocator,TLess<FString>_>
  ::Emplace<FString,_FCulture::FICUCultureImplementation::GetCanonicalName_::_2_::FCanonizedTagData>
            (param_2,local_58,&local_48);
  lVar1 = local_58[0];
  if (local_58[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  return param_2;
}



// FUNCTION 1415d0010 operator() body=1067 status=ok
// SIG undefined operator()(void)

void <lambda_e999beae94941459fccc619780b4a803>::operator()
               (longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined2 **ppuVar9;
  longlong lVar10;
  int local_res8 [2];
  int local_res10 [2];
  undefined8 *local_res18;
  undefined8 *local_res20;
  undefined2 *local_68;
  int local_60;
  int local_5c;
  undefined2 **local_58;
  int *local_50;
  
  local_68 = (undefined2 *)0x0;
  local_60 = *(int *)(param_2 + 1);
  lVar8 = (longlong)local_60;
  pvVar1 = (void *)*param_2;
  local_res18 = param_3;
  if (local_60 == 0) {
    local_5c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_60,0);
    ::_guard_xfg_dispatch_icall_nop(local_68,pvVar1,lVar8 * 2);
  }
  if (1 < *(int *)(param_3 + 1)) {
    iVar2 = local_60 + -1;
    if (local_60 < 1) {
      iVar2 = 0;
    }
    local_60 = (local_60 < 1) + 1 + local_60;
    if (local_5c < local_60) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68);
    }
    iVar3 = local_60;
    local_68[iVar2] = 0x2d;
    local_68[(longlong)iVar2 + 1] = 0;
    pvVar1 = (void *)*param_3;
    iVar2 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar2 = 0;
    }
    if (iVar2 != 0) {
      lVar8 = (longlong)local_60;
      local_60 = (uint)(local_60 == 0) + iVar2 + local_60;
      if (local_5c < local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar3);
      }
      puVar6 = local_68 + (lVar8 - (ulonglong)(iVar3 != 0));
      ::_guard_xfg_dispatch_icall_nop(puVar6,pvVar1,(longlong)iVar2 * 2);
      puVar6[iVar2] = 0;
    }
  }
  if (1 < *(int *)(param_4 + 1)) {
    iVar2 = local_60 + -1;
    if (local_60 < 1) {
      iVar2 = 0;
    }
    local_60 = (local_60 < 1) + 1 + local_60;
    if (local_5c < local_60) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68);
    }
    iVar3 = local_60;
    local_68[iVar2] = 0x2d;
    local_68[(longlong)iVar2 + 1] = 0;
    pvVar1 = (void *)*param_4;
    iVar2 = *(int *)(param_4 + 1) + -1;
    if (*(int *)(param_4 + 1) == 0) {
      iVar2 = 0;
    }
    if (iVar2 != 0) {
      lVar8 = (longlong)local_60;
      local_60 = (uint)(local_60 == 0) + iVar2 + local_60;
      if (local_5c < local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar3);
      }
      puVar6 = local_68 + (lVar8 - (ulonglong)(iVar3 != 0));
      ::_guard_xfg_dispatch_icall_nop(puVar6,pvVar1,(longlong)iVar2 * 2);
      puVar6[iVar2] = 0;
    }
  }
  lVar8 = *param_1;
  if (*(int *)(lVar8 + 0x30) != *(int *)(lVar8 + 0x5c)) {
    puVar6 = &DAT_143f3eda8;
    if (local_60 != 0) {
      puVar6 = local_68;
    }
    iVar2 = FUN_140438070(puVar6);
    lVar4 = *(longlong *)(lVar8 + 0x68);
    if (*(longlong *)(lVar8 + 0x68) == 0) {
      lVar4 = lVar8 + 0x60;
    }
    iVar2 = *(int *)(lVar4 + ((longlong)*(int *)(lVar8 + 0x70) - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar4 = *(longlong *)(lVar8 + 0x28);
      do {
        lVar10 = (longlong)iVar2 * 0x20;
        puVar6 = &DAT_143f3eda8;
        if (local_60 != 0) {
          puVar6 = local_68;
        }
        if (*(int *)(lVar10 + 8 + lVar4) == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = *(undefined2 **)(lVar10 + lVar4);
        }
        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar6);
        if (iVar3 == 0) {
          if (iVar2 != -1) goto LAB_1415d0400;
          break;
        }
        lVar4 = *(longlong *)(lVar8 + 0x28);
        iVar2 = *(int *)(lVar10 + 0x18 + lVar4);
      } while (iVar2 != -1);
    }
  }
  lVar8 = *param_1;
  iVar2 = *(int *)(lVar8 + 0x20);
  *(int *)(lVar8 + 0x20) = iVar2 + 1;
  if (*(int *)(lVar8 + 0x24) < iVar2 + 1) {
    TArray<FICUInternationalization::FICUCultureData,FDefaultAllocator>::ResizeGrow
              (lVar8 + 0x18,iVar2);
  }
  puVar5 = (undefined8 *)((longlong)iVar2 * 0x40 + *(longlong *)(lVar8 + 0x18));
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  local_58 = &local_68;
  local_50 = local_res8;
  local_res8[0] = iVar2;
  FUN_1406c2bb0(*param_1 + 0x28,local_res10,&local_58,0);
  lVar8 = *param_1;
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(lVar8 + 0x78,local_res10,param_2);
  if ((local_res10[0] == -1) ||
     (lVar4 = *(longlong *)(lVar8 + 0x78) + (longlong)local_res10[0] * 0x28, lVar4 == 0)) {
    local_res20 = param_2;
    FUN_1415ca240(lVar8 + 0x78,local_res10,&local_res20,0);
    lVar4 = *(longlong *)(lVar8 + 0x78) + (longlong)local_res10[0] * 0x28;
  }
  iVar2 = *(int *)(lVar4 + 0x18);
  *(int *)(lVar4 + 0x18) = iVar2 + 1;
  if (*(int *)(lVar4 + 0x1c) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar4 + 0x10,iVar2);
  }
  puVar6 = local_68;
  *(int *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar2 * 4) = local_res8[0];
  ppuVar9 = (undefined2 **)((longlong)local_res8[0] * 0x40 + *(longlong *)(*param_1 + 0x18));
  if (ppuVar9 != &local_68) {
    lVar8 = (longlong)local_60;
    *(int *)(ppuVar9 + 1) = local_60;
    if ((local_60 == 0) && (*(int *)((longlong)ppuVar9 + 0xc) == 0)) {
      *(undefined4 *)((longlong)ppuVar9 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppuVar9,local_60);
      ::_guard_xfg_dispatch_icall_nop(*ppuVar9,puVar6,lVar8 * 2);
    }
  }
  FString::operator=(ppuVar9 + 2,param_2);
  FString::operator=(ppuVar9 + 4,local_res18);
  FString::operator=(ppuVar9 + 6,param_4);
LAB_1415d0400:
  puVar6 = local_68;
  if (local_68 != (undefined2 *)0x0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,puVar6);
  }
  return;
}



// FUNCTION 1415d0440 operator() body=353 status=ok
// SIG undefined operator()(void)

undefined8 *
<lambda_18f265aac54f246469c67c0101d9146f>::operator()(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FDecimalNumberFormattingRules::FDecimalNumberFormattingRules(param_2);
  iVar3 = 0;
  iVar2 = 0;
  if ((undefined8 *)*param_2 != &DAT_144cb0fc0) {
    *(undefined4 *)(param_2 + 1) = 0;
    iVar1 = iVar3;
    if (*(int *)((longlong)param_2 + 0xc) != 4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,4);
      iVar1 = *(int *)(param_2 + 1);
    }
    *(int *)(param_2 + 1) = iVar1 + 4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
    *(undefined8 *)*param_2 = 0x4e0061004e;
  }
  if ((undefined2 *)param_2[2] != &DAT_144cb03f0) {
    *(undefined4 *)(param_2 + 3) = 0;
    iVar1 = iVar3;
    if (*(int *)((longlong)param_2 + 0x1c) != 2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 2,2);
      iVar1 = *(int *)(param_2 + 3);
    }
    *(int *)(param_2 + 3) = iVar1 + 2;
    if (*(int *)((longlong)param_2 + 0x1c) < iVar1 + 2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2 + 2);
    }
    *(undefined4 *)param_2[2] = 0x2d;
  }
  if ((undefined4 *)param_2[10] != &DAT_144cb0fa0) {
    *(undefined4 *)(param_2 + 0xb) = 0;
    if (*(int *)((longlong)param_2 + 0x5c) != 2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 10,2);
      iVar3 = *(int *)(param_2 + 0xb);
    }
    *(int *)(param_2 + 0xb) = iVar3 + 2;
    if (*(int *)((longlong)param_2 + 0x5c) < iVar3 + 2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2 + 10);
    }
    *(undefined4 *)param_2[10] = 0x2b;
  }
  if ((undefined2 *)param_2[0xc] != &DAT_144cb03f0) {
    *(undefined4 *)(param_2 + 0xd) = 0;
    if (*(int *)((longlong)param_2 + 0x6c) != 2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 0xc,2);
      iVar2 = *(int *)(param_2 + 0xd);
    }
    *(int *)(param_2 + 0xd) = iVar2 + 2;
    if (*(int *)((longlong)param_2 + 0x6c) < iVar2 + 2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2 + 0xc,iVar2);
    }
    *(undefined4 *)param_2[0xc] = 0x2d;
  }
  *(undefined4 *)(param_2 + 0xe) = 0x2e002c;
  *(undefined2 *)((longlong)param_2 + 0x74) = 0x303;
  return param_2;
}



// FUNCTION 1415d05b0 operator() body=286 status=ok
// SIG undefined operator()(void)

longlong *
<lambda_80c23f523ba0da704c021ccb9de620b8>::operator()(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  void *_Dst;
  void *_Src;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  
  *param_2 = 0;
  param_2[1] = 0;
  puVar6 = (undefined8 *)*param_1;
  puVar1 = puVar6 + 4;
  for (; puVar6 != puVar1; puVar6 = puVar6 + 2) {
    iVar5 = (int)param_2[1];
    if (1 < iVar5) {
      iVar3 = (2 - (uint)(iVar5 != 0)) + iVar5;
      *(int *)(param_2 + 1) = iVar3;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
      }
      puVar2 = (undefined2 *)(*param_2 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
      *puVar2 = 10;
      puVar2[1] = 0;
    }
    _Src = (void *)*puVar6;
    iVar5 = *(int *)(puVar6 + 1) + -1;
    if (*(int *)(puVar6 + 1) == 0) {
      iVar5 = 0;
    }
    if (iVar5 != 0) {
      iVar3 = (int)param_2[1];
      iVar4 = (uint)(iVar3 == 0) + iVar5 + iVar3;
      *(int *)(param_2 + 1) = iVar4;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
      }
      _Dst = (void *)(*param_2 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar5 * 2);
      *(undefined2 *)((longlong)iVar5 * 2 + (longlong)_Dst) = 0;
    }
  }
  return param_2;
}



// FUNCTION 1415d06d0 FUN_1415d06d0 body=114 status=ok
// SIG undefined FUN_1415d06d0(void)

undefined8 FUN_1415d06d0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int *piVar2;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  lVar1 = *param_1;
  FICUInternationalization::ConditionalInitializeAllowedCultures(lVar1);
  if ((*(int *)(lVar1 + 0x130) != *(int *)(lVar1 + 0x15c)) &&
     (piVar2 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                                (lVar1 + 0x128,local_res8,param_2), *piVar2 == -1)) {
    return 1;
  }
  piVar2 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                            (lVar1 + 0x178,local_res18,param_2);
  if (*piVar2 != -1) {
    return 1;
  }
  return 0;
}



// FUNCTION 1415d0750 operator() body=346 status=ok
// SIG undefined operator()(void)

bool <lambda_ce5116e61a4c0a46f3db8549ec9beeaa>::operator()
               (char *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  wint_t wVar2;
  wint_t wVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  wint_t *pwVar7;
  int iVar8;
  undefined2 *puVar9;
  wint_t *pwVar10;
  int iVar11;
  undefined2 *puVar12;
  
  puVar12 = &DAT_143f3eda8;
  pwVar7 = &DAT_144cb1548;
  if (*param_1 != '\0') {
    if (*(int *)(param_2 + 0x28) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = *(undefined2 **)(param_2 + 0x20);
    }
    pwVar10 = &DAT_144cb1548;
    do {
      wVar2 = *(wint_t *)((longlong)(puVar9 + -0xa2658aa4) + (longlong)pwVar10);
      if ((wVar2 == 0) && (*pwVar10 == 0)) goto LAB_1415d07da;
      if (wVar2 != *pwVar10) {
        wVar2 = towlower(wVar2);
        wVar3 = towlower(*pwVar10);
        if (wVar2 != wVar3) goto LAB_1415d07d0;
      }
      pwVar10 = pwVar10 + 1;
    } while( true );
  }
LAB_1415d07ef:
  iVar5 = 0;
LAB_1415d07f1:
  iVar4 = 4;
  if (*(int *)(param_2 + 0x38) < 2) {
    iVar4 = 0;
  }
  iVar11 = 2;
  if (*(int *)(param_2 + 0x28) < 2) {
    iVar11 = 0;
  }
  if (*param_1 != '\0') {
    if (*(int *)(param_3 + 0x28) != 0) {
      puVar12 = *(undefined2 **)(param_3 + 0x20);
    }
    do {
      wVar2 = *(wint_t *)((longlong)(puVar12 + -0xa2658aa4) + (longlong)pwVar7);
      if ((wVar2 == 0) && (*pwVar7 == 0)) goto LAB_1415d086a;
      if (wVar2 != *pwVar7) {
        wVar2 = towlower(wVar2);
        wVar3 = towlower(*pwVar7);
        if (wVar2 != wVar3) goto LAB_1415d0860;
      }
      pwVar7 = pwVar7 + 1;
    } while( true );
  }
LAB_1415d0875:
  iVar6 = 0;
LAB_1415d0877:
  iVar1 = 4;
  if (*(int *)(param_3 + 0x38) < 2) {
    iVar1 = 0;
  }
  iVar8 = 2;
  if (*(int *)(param_3 + 0x28) < 2) {
    iVar8 = 0;
  }
  return (uint)(iVar8 + iVar6 + iVar1) <= (uint)(iVar11 + iVar4 + iVar5);
LAB_1415d07d0:
  if (wVar2 != wVar3) goto LAB_1415d07ef;
LAB_1415d07da:
  iVar5 = 1;
  goto LAB_1415d07f1;
LAB_1415d0860:
  if (wVar2 == wVar3) {
LAB_1415d086a:
    iVar6 = 1;
    goto LAB_1415d0877;
  }
  goto LAB_1415d0875;
}



// FUNCTION 1415d08b0 operator() body=347 status=ok
// SIG undefined operator()(void)

bool <lambda_8b80504b677f9d9564e84d4ee5403399>::operator()
               (longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  bool bVar7;
  int local_res8 [2];
  longlong local_18;
  longlong *local_10;
  
  lVar6 = *param_1;
  TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
  ::FindId(lVar6 + 0x28,local_res8,param_2);
  piVar5 = (int *)0x0;
  if (local_res8[0] != -1) {
    piVar5 = (int *)((longlong)local_res8[0] * 0x20 + *(longlong *)(lVar6 + 0x28));
  }
  piVar4 = piVar5 + 4;
  if (piVar5 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  if (piVar4 == (int *)0x0) {
    FICUInternationalization::FindOrMakeCulture(*param_1,&local_18,param_2,0);
    bVar7 = local_18 != 0;
    if (bVar7) {
      FString::operator=(param_3,local_18 + 0x30);
      FString::operator=(param_3 + 0x10,local_18 + 0x70);
      FString::operator=(param_3 + 0x20,local_18 + 0xb0);
      FString::operator=(param_3 + 0x30,local_18 + 0x90);
    }
    plVar3 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar5 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  else {
    lVar6 = (longlong)*piVar4 * 0x40 + *(longlong *)(*param_1 + 0x18);
    FString::operator=(param_3,lVar6);
    FString::operator=(param_3 + 0x10,lVar6 + 0x10);
    FString::operator=(param_3 + 0x20,lVar6 + 0x20);
    FString::operator=(param_3 + 0x30,lVar6 + 0x30);
    bVar7 = true;
  }
  return bVar7;
}



// FUNCTION 1415d0a10 `scalar_deleting_destructor' body=87 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FCachedFileHandle::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cb0950;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *param_1 = &PTR_FUN_144cacc30;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20058);
  }
  return param_1;
}



// FUNCTION 1415d0a70 FUN_1415d0a70 body=43 status=ok
// SIG undefined FUN_1415d0a70(void)

undefined8 * FUN_1415d0a70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144cb01d8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1415d0aa0 `scalar_deleting_destructor' body=81 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FFakeThread::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_StartProfileThreadUsage_144cb0bc8;
  uVar1 = FUN_1415d8270();
  FUN_1415e4100(uVar1,param_1);
  FUN_1415ceb40(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1415d0b00 FUN_1415d0b00 body=106 status=ok
// SIG undefined FUN_1415d0b00(void)

undefined8 * FUN_1415d0b00(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_IsPromotedBuild_144cb0b98;
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  param_1[1] = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x468);
  }
  return param_1;
}



// FUNCTION 1415d0b70 FUN_1415d0b70 body=129 status=ok
// SIG undefined FUN_1415d0b70(void)

undefined8 * FUN_1415d0b70(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_144cb0fc8;
  if (DAT_1468b5038 != 0) {
    FUN_1415d5570(DAT_1468b5038,param_1 + 1);
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *param_1 = &PTR_FUN_144cb0f40;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1415d0c00 FUN_1415d0c00 body=124 status=ok
// SIG undefined FUN_1415d0c00(void)

undefined8 * FUN_1415d0c00(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_144cb1558;
  FUN_1415d5570(DAT_1468b5038,param_1 + 1);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *param_1 = &PTR_FUN_144cb0f40;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1415d0c80 `scalar_deleting_destructor' body=93 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TextBiDi::Internal::FICUTextBiDi::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cb15b8;
  FUN_143aace40(param_1[1]);
  param_1[1] = 0;
  FUN_143a8dc60(param_1 + 2);
  *param_1 = &PTR_FUN_144cb0188;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1415d0ce0 `scalar_deleting_destructor' body=148 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FICUTextCharacterIterator_NativeUTF16::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cb1028;
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FUN_143a8d330();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1415d0d80 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

void * FMallocPoisonProxy::_scalar_deleting_destructor_(void *param_1,ulonglong param_2)

{
  FExec::~FExec();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      free(param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1415d0dd0 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

void * FMallocPurgatoryProxy::_scalar_deleting_destructor_(void *param_1,ulonglong param_2)

{
  FExec::~FExec();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      free(param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x440);
  }
  return param_1;
}



// FUNCTION 1415d0e20 `scalar_deleting_destructor' body=92 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

void * FMallocThreadSafeProxy::_scalar_deleting_destructor_(void *param_1,ulonglong param_2)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)((longlong)param_1 + 0x10));
  FExec::~FExec(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      free(param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1415d0e80 FUN_1415d0e80 body=43 status=ok
// SIG undefined FUN_1415d0e80(void)

undefined8 * FUN_1415d0e80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1415d0eb0 FUN_1415d0eb0 body=43 status=ok
// SIG undefined FUN_1415d0eb0(void)

undefined8 * FUN_1415d0eb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_144cb03a0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1415d0ee0 `scalar_deleting_destructor' body=209 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FQueuedThreadPoolBase::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_Create_144cb0c78;
  Destroy();
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
  }
  *param_1 = &PTR__purecall_144cb03a0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1415d0fc0 FUN_1415d0fc0 body=52 status=ok
// SIG undefined FUN_1415d0fc0(void)

undefined8 FUN_1415d0fc0(undefined8 param_1,ulonglong param_2)

{
  FUN_1415ceb40();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1415d1000 FUN_1415d1000 body=184 status=ok
// SIG undefined FUN_1415d1000(void)

undefined8 * FUN_1415d1000(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = &PTR_IsPromotedBuild_144cb0b68;
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  lVar2 = param_1[0x10];
  if (lVar2 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar2);
  }
  TSparseArray<TSetElement<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<unsigned_int,FThreadHeartBeat::FHeartBeatInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 8);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 1415d10c0 FUN_1415d10c0 body=43 status=ok
// SIG undefined FUN_1415d10c0(void)

undefined8 * FUN_1415d10c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144cb0f40;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1415d10f0 FUN_1415d10f0 body=43 status=ok
// SIG undefined FUN_1415d10f0(void)

undefined8 * FUN_1415d10f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144cb01d8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1415d1120 FUN_1415d1120 body=43 status=ok
// SIG undefined FUN_1415d1120(void)

undefined8 * FUN_1415d1120(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144cb0188;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1415d1150 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 icu_53::Replaceable::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  UCameraModifier_Climbing::~UCameraModifier_Climbing();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FUN_143a8d330();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8);
  }
  return param_1;
}



// FUNCTION 1415d11a0 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 icu_53::UObject::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  RtAudioError::~RtAudioError();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FUN_143a8d330();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,8);
  }
  return param_1;
}



// FUNCTION 1415d11f0 AddLocalDirectories body=60 status=ok
// SIG undefined AddLocalDirectories(void)

void IPlatformFile::AddLocalDirectories(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x50))();
  if (lVar1 != 0) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x50))(param_1);
    (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
  }
  return;
}



// FUNCTION 1415d1230 AddQueuedWork body=232 status=ok
// SIG undefined AddQueuedWork(void)

void FQueuedThreadPoolBase::AddQueuedWork(longlong param_1,longlong *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *_Dst;
  longlong lVar1;
  BOOL BVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001415d1256. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 8))(param_2);
    return;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x38);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    iVar3 = *(int *)(param_1 + 0x20);
    _Dst = *(longlong **)(param_1 + 0x18);
    lVar1 = *_Dst;
    if (iVar3 + -1 != 0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Dst + 1,(longlong)(iVar3 + -1) << 3);
      iVar3 = *(int *)(param_1 + 0x20);
    }
    *(int *)(param_1 + 0x20) = iVar3 + -1;
    FUN_1415e4f60(param_1 + 0x18);
    if (lVar1 != 0) {
      *(longlong **)(lVar1 + 0x18) = param_2;
      (**(code **)(**(longlong **)(lVar1 + 8) + 0x10))();
      goto LAB_1415d12fa;
    }
  }
  iVar3 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar3 + 1;
  if (*(int *)(param_1 + 0x14) < iVar3 + 1) {
    TArray<FMallocBinned2::FPerThreadFreeBlockLists_*,FDefaultAllocator>::ResizeGrow
              (param_1 + 8,iVar3);
  }
  *(longlong **)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 8) = param_2;
LAB_1415d12fa:
                    /* WARNING: Could not recover jumptable at 0x0001415d1311. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1415d1320 FUN_1415d1320 body=262 status=ok
// SIG undefined FUN_1415d1320(void)

void FUN_1415d1320(longlong *param_1,int param_2,undefined8 param_3)

{
  BOOL BVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 local_res8;
  int local_res10 [2];
  undefined8 local_res18;
  int *local_18;
  undefined8 *local_10;
  
  local_res10[0] = param_2;
  local_res18 = param_3;
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)param_1[9] - 1U & (longlong)local_res10[0]) * 4);
    if (iVar2 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x18) == local_res10[0]) {
          if (iVar2 != -1) goto LAB_1415d1411;
          break;
        }
        iVar2 = *(int *)(*param_1 + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  local_18 = local_res10;
  local_10 = &local_res18;
  FUN_1415ca4f0(param_1,&local_res8,&local_18,0);
  local_res8 = local_res18;
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  }
  FUN_1415c9b70(param_1 + 0xf,&local_res8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
LAB_1415d1411:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  return;
}



// FUNCTION 1415d1430 Allocate body=76 status=ok
// SIG undefined Allocate(void)

undefined8 * FQueuedThreadPool::Allocate(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_Create_144cb0c78;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(undefined1 *)(puVar1 + 8) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1415d1480 AsDate body=355 status=ok
// SIG undefined AsDate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FTextChronoFormatter::AsDate
          (longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 *param_5)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 ***_Src;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  undefined **local_68;
  undefined8 **local_60;
  int local_54;
  ushort local_42;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  lVar5 = FInternationalization::Get();
  uVar7 = FICUInternationalization::UEDateTimeToICUDate(*(undefined8 *)(lVar5 + 0x20),param_2);
  FCulture::FICUCultureImplementation::GetDateFormatter(*param_5,&local_78,param_3,param_4);
  local_68 = icu_53::UnicodeString::vftable;
  local_42 = 0x200;
  FUN_143b56f30(local_78,uVar7,&local_68);
  _Src = (undefined8 ***)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  iVar6 = (int)(char)local_42;
  if ((char)local_42 < '\0') {
    iVar6 = local_54;
  }
  if (0 < iVar6) {
    iVar1 = iVar6 + 1;
    if (iVar1 < 1) {
      if ((iVar1 < 0) && (iVar1 != 0)) {
        *(int *)(param_1 + 1) = iVar1;
        TArray<wchar_t,FDefaultAllocator>::ResizeShrink(param_1);
      }
    }
    else {
      *(int *)(param_1 + 1) = iVar1;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    if (((local_42 & 0x1100) == 0) && (_Src = &local_60, (local_42 & 0x200) == 0)) {
      _Src = (undefined8 ***)local_60;
    }
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)iVar6 * 2 + *param_1) = 0;
  }
  FUN_143a8dc60(&local_68);
  plVar4 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      iVar6 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1415d15f0 AsDateTime body=388 status=ok
// SIG undefined AsDateTime(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FTextChronoFormatter::AsDateTime
          (longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined8 param_5,undefined8 *param_6)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 ***_Src;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_78;
  longlong *local_70;
  undefined **local_68;
  undefined8 **local_60;
  int local_54;
  ushort local_42;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  lVar5 = FInternationalization::Get();
  uVar7 = FICUInternationalization::UEDateTimeToICUDate(*(undefined8 *)(lVar5 + 0x20),param_2);
  local_88 = param_5;
  FCulture::FICUCultureImplementation::GetDateTimeFormatter(*param_6,&local_78,param_3,param_4);
  local_68 = icu_53::UnicodeString::vftable;
  local_42 = 0x200;
  FUN_143b56f30(local_78,uVar7,&local_68);
  _Src = (undefined8 ***)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  iVar6 = (int)(char)local_42;
  if ((char)local_42 < '\0') {
    iVar6 = local_54;
  }
  if (0 < iVar6) {
    iVar1 = iVar6 + 1;
    if (iVar1 < 1) {
      if ((iVar1 < 0) && (iVar1 != 0)) {
        *(int *)(param_1 + 1) = iVar1;
        TArray<wchar_t,FDefaultAllocator>::ResizeShrink(param_1);
      }
    }
    else {
      *(int *)(param_1 + 1) = iVar1;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    if (((local_42 & 0x1100) == 0) && (_Src = &local_60, (local_42 & 0x200) == 0)) {
      _Src = (undefined8 ***)local_60;
    }
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)iVar6 * 2 + *param_1) = 0;
  }
  FUN_143a8dc60(&local_68);
  plVar4 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      iVar6 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1415d1780 AsTime body=355 status=ok
// SIG undefined AsTime(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FTextChronoFormatter::AsTime
          (longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 *param_5)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 ***_Src;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  undefined **local_68;
  undefined8 **local_60;
  int local_54;
  ushort local_42;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  lVar5 = FInternationalization::Get();
  uVar7 = FICUInternationalization::UEDateTimeToICUDate(*(undefined8 *)(lVar5 + 0x20),param_2);
  FCulture::FICUCultureImplementation::GetTimeFormatter(*param_5,&local_78,param_3,param_4);
  local_68 = icu_53::UnicodeString::vftable;
  local_42 = 0x200;
  FUN_143b56f30(local_78,uVar7,&local_68);
  _Src = (undefined8 ***)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  iVar6 = (int)(char)local_42;
  if ((char)local_42 < '\0') {
    iVar6 = local_54;
  }
  if (0 < iVar6) {
    iVar1 = iVar6 + 1;
    if (iVar1 < 1) {
      if ((iVar1 < 0) && (iVar1 != 0)) {
        *(int *)(param_1 + 1) = iVar1;
        TArray<wchar_t,FDefaultAllocator>::ResizeShrink(param_1);
      }
    }
    else {
      *(int *)(param_1 + 1) = iVar1;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    if (((local_42 & 0x1100) == 0) && (_Src = &local_60, (local_42 & 0x200) == 0)) {
      _Src = (undefined8 ***)local_60;
    }
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)iVar6 * 2 + *param_1) = 0;
  }
  FUN_143a8dc60(&local_68);
  plVar4 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      iVar6 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1415d18f0 FUN_1415d18f0 body=1048 status=ok
// SIG undefined FUN_1415d18f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415d18f0(char param_1,undefined1 param_2,longlong param_3,void *param_4,int param_5,
                  void *param_6,int param_7,longlong *param_8)

{
  void *pvVar1;
  short sVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  int *piVar10;
  undefined8 *puVar11;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  
  FastDecimalFormat::Internal::FDecimalNumberSigningStrings::FDecimalNumberSigningStrings
            (&local_98,param_3,param_2);
  iVar9 = 0;
  piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if (param_1 == '\0') {
    if (*piVar10 < DAT_1468b51c0) {
      _Init_thread_header(&DAT_1468b51c0);
      if (DAT_1468b51c0 == -1) {
        DAT_1468b51b0 = 0;
        _DAT_1468b51b8 = 0;
        atexit(FUN_143e78330);
        _Init_thread_footer(&DAT_1468b51c0);
      }
    }
    puVar8 = &DAT_1468b51b0;
    if (local_88 != (undefined8 *)0x0) {
      puVar8 = local_88;
    }
    if (*piVar10 < DAT_1468b51d8) {
      _Init_thread_header(&DAT_1468b51d8);
      if (DAT_1468b51d8 == -1) {
        DAT_1468b51c8 = 0;
        _DAT_1468b51d0 = 0;
        atexit(FUN_143e78370);
        _Init_thread_footer(&DAT_1468b51d8);
      }
    }
    puVar11 = &DAT_1468b51c8;
    local_90 = local_80;
  }
  else {
    if (*piVar10 < DAT_1468b5190) {
      _Init_thread_header(&DAT_1468b5190);
      if (DAT_1468b5190 == -1) {
        DAT_1468b5180 = 0;
        _DAT_1468b5188 = 0;
        atexit(FUN_143e782b0);
        _Init_thread_footer(&DAT_1468b5190);
      }
    }
    puVar8 = &DAT_1468b5180;
    if (local_98 != (undefined8 *)0x0) {
      puVar8 = local_98;
    }
    if (*piVar10 < DAT_1468b51a8) {
      _Init_thread_header(&DAT_1468b51a8);
      if (DAT_1468b51a8 == -1) {
        DAT_1468b5198 = 0;
        _DAT_1468b51a0 = 0;
        atexit(FUN_143e782f0);
        _Init_thread_footer(&DAT_1468b51a8);
      }
    }
    puVar11 = &DAT_1468b5198;
  }
  iVar7 = *(int *)(puVar8 + 1);
  if (local_90 != (undefined8 *)0x0) {
    puVar11 = local_90;
  }
  iVar6 = *(int *)(puVar11 + 1) + -1;
  if (*(int *)(puVar11 + 1) == 0) {
    iVar6 = iVar9;
  }
  iVar5 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar5 = iVar9;
  }
  iVar4 = (int)param_8[1] + -1 + iVar6 + iVar5;
  if ((int)param_8[1] == 0) {
    iVar4 = iVar6 + iVar5;
  }
  if (*(int *)((longlong)param_8 + 0xc) < param_7 + 2 + iVar4 + param_5) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_8);
    iVar7 = *(int *)(puVar8 + 1);
  }
  pvVar3 = (void *)*puVar8;
  iVar6 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar6 = iVar9;
  }
  if (iVar6 != 0) {
    iVar7 = (int)param_8[1];
    iVar5 = (uint)(iVar7 == 0) + iVar7 + iVar6;
    *(int *)(param_8 + 1) = iVar5;
    if (*(int *)((longlong)param_8 + 0xc) < iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_8,iVar7);
    }
    pvVar1 = (void *)(*param_8 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
  }
  if (param_5 != 0) {
    iVar7 = (int)param_8[1];
    iVar6 = (uint)(iVar7 == 0) + iVar7 + param_5;
    *(int *)(param_8 + 1) = iVar6;
    if (*(int *)((longlong)param_8 + 0xc) < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_8,iVar7);
    }
    pvVar3 = (void *)(*param_8 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar3,param_4,(longlong)param_5 * 2);
    *(undefined2 *)((longlong)param_5 * 2 + (longlong)pvVar3) = 0;
  }
  if (0 < param_7) {
    sVar2 = *(short *)(param_3 + 0x72);
    if (sVar2 != 0) {
      iVar7 = (int)param_8[1];
      iVar6 = iVar7 + -1;
      if (iVar7 < 1) {
        iVar6 = iVar9;
      }
      iVar7 = (iVar7 < 1) + 1 + iVar7;
      *(int *)(param_8 + 1) = iVar7;
      if (*(int *)((longlong)param_8 + 0xc) < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_8);
      }
      *(short *)(*param_8 + (longlong)iVar6 * 2) = sVar2;
      *(undefined2 *)(*param_8 + 2 + (longlong)iVar6 * 2) = 0;
    }
    iVar7 = (int)param_8[1];
    iVar6 = (uint)(iVar7 == 0) + iVar7 + param_7;
    *(int *)(param_8 + 1) = iVar6;
    if (*(int *)((longlong)param_8 + 0xc) < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_8,iVar7);
    }
    pvVar3 = (void *)(*param_8 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar3,param_6,(longlong)param_7 * 2);
    *(undefined2 *)((longlong)param_7 * 2 + (longlong)pvVar3) = 0;
  }
  pvVar3 = (void *)*puVar11;
  iVar7 = *(int *)(puVar11 + 1) + -1;
  if (*(int *)(puVar11 + 1) == 0) {
    iVar7 = iVar9;
  }
  if (iVar7 != 0) {
    iVar9 = (int)param_8[1];
    iVar6 = (uint)(iVar9 == 0) + iVar9 + iVar7;
    *(int *)(param_8 + 1) = iVar6;
    if (*(int *)((longlong)param_8 + 0xc) < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_8,iVar9);
    }
    pvVar1 = (void *)(*param_8 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar7 * 2);
    *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
  }
  FastDecimalFormat::Internal::FDecimalNumberSigningStrings::~FDecimalNumberSigningStrings
            (&local_98);
  return;
}



// FUNCTION 1415d1d10 BypassSecurity body=61 status=ok
// SIG undefined BypassSecurity(void)

void IPlatformFile::BypassSecurity(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x50))();
  if (lVar1 != 0) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x50))(param_1);
    (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
  }
  return;
}



// FUNCTION 1415d1d50 FUN_1415d1d50 body=871 status=ok
// SIG undefined FUN_1415d1d50(void)

undefined4 FUN_1415d1d50(longlong param_1,double *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  uint *puVar2;
  double dVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  double dVar7;
  BOOL BVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint *puVar13;
  uint uVar14;
  bool bVar15;
  LARGE_INTEGER local_res8;
  int local_c8;
  uint uStack_c4;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  int iStack_a0;
  uint uStack_9c;
  uint *local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  uint local_70;
  uint uStack_6c;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468b5140) && (_Init_thread_header(&DAT_1468b5140), DAT_1468b5140 == -1))
  {
    uVar9 = FCommandLine::Get();
    DAT_1468b513c = FParse::Param(uVar9,L"nothreadtimeout");
    _Init_thread_footer(&DAT_1468b5140);
  }
  if (0.0 < *(double *)(param_1 + 0x98)) {
    LOCK();
    bVar15 = *(int *)(param_1 + 0x90) == 0;
    if (bVar15) {
      *(int *)(param_1 + 0x90) = 0;
    }
    UNLOCK();
    if (((!bVar15) && (DAT_1468c217e == '\0')) && (DAT_1468b513c == '\0')) {
      QueryPerformanceCounter(&local_res8);
      lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
      dVar7 = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
      BVar8 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar8 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      plVar1 = (longlong *)(param_1 + 0x40);
      uStack_c4 = 1;
      uVar4 = *(uint *)(param_1 + 0x68);
      puVar2 = (uint *)(param_1 + 0x50);
      local_c8 = 0;
      uStack_b4 = 0;
      iStack_b0 = 0;
      if (uVar4 != 0) {
        puVar13 = *(uint **)(param_1 + 0x60);
        if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
          puVar13 = puVar2;
        }
        uVar14 = *puVar13;
        iStack_b0 = 0;
        local_c8 = 0;
        while (uVar14 == 0) {
          lVar12 = (longlong)local_c8;
          iStack_b0 = iStack_b0 + 0x20;
          iVar10 = local_c8 + 1;
          bVar15 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c8;
          local_c8 = iVar10;
          if (bVar15) goto LAB_1415d1eed;
          uVar14 = puVar13[lVar12 + 1];
        }
        uStack_c4 = -uVar14 & uVar14;
        iVar10 = 0x1f;
        if (uStack_c4 != 0) {
          for (; uStack_c4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
          }
        }
        if (uStack_c4 == 0) {
          iVar10 = 0x20;
        }
        else {
          iVar10 = 0x1f - iVar10;
        }
        uStack_b4 = (iStack_b0 - iVar10) + 0x1f;
        if ((int)uVar4 < (int)uStack_b4) {
LAB_1415d1eed:
          uStack_b4 = uVar4;
        }
      }
      uStack_6c = *(uint *)(param_1 + 0x68);
      uStack_58 = CONCAT44(uStack_c4,local_c8);
      uStack_90 = 0xffffffff;
      uStack_8c = uStack_b4;
      local_88 = CONCAT44(uStack_ac,iStack_b0);
      local_70 = -1 << ((byte)uStack_6c & 0x1f);
      uVar14 = uStack_6c & 0xffffffe0;
      iStack_a0 = local_c8;
      uStack_9c = uStack_c4;
      local_98 = puVar2;
      local_60 = plVar1;
      puStack_50 = puVar2;
      uStack_40 = local_88;
      uStack_48 = uStack_90;
      uStack_44 = uStack_8c;
      uVar11 = uStack_6c;
      if (uStack_6c != uVar4) {
        puVar13 = *(uint **)(param_1 + 0x60);
        if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
          puVar13 = puVar2;
        }
        uVar11 = puVar13[(int)uStack_6c >> 5] & local_70;
        iVar10 = (int)uStack_6c >> 5;
        while (uVar11 == 0) {
          uVar14 = uVar14 + 0x20;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
          goto LAB_1415d1fb2;
          uVar11 = puVar13[(longlong)iVar10 + 1];
          local_70 = 0xffffffff;
          iVar10 = iVar10 + 1;
        }
        uVar11 = -uVar11 & uVar11;
        iVar10 = 0x1f;
        if (uVar11 != 0) {
          for (; uVar11 >> iVar10 == 0; iVar10 = iVar10 + -1) {
          }
        }
        if (uVar11 == 0) {
          iVar10 = 0x20;
        }
        else {
          iVar10 = 0x1f - iVar10;
        }
        uStack_6c = (uVar14 - iVar10) + 0x1f;
        uVar11 = uStack_6c;
        if ((int)uVar4 < (int)uStack_6c) {
LAB_1415d1fb2:
          uStack_6c = uVar4;
          uVar11 = uVar4;
        }
      }
      while ((lVar12 = (longlong)(int)uStack_8c, uStack_8c != uVar11 || (local_98 != puVar2))) {
        lVar6 = *plVar1;
        if ((*(int *)(lVar6 + 0x10 + lVar12 * 0x28) == 0) &&
           (dVar3 = *(double *)(lVar6 + 0x18 + lVar12 * 0x28),
           dVar3 < dVar7 - *(double *)(lVar6 + 8 + lVar12 * 0x28))) {
          *(double *)(lVar6 + 8 + lVar12 * 0x28) = dVar7;
          *param_2 = dVar3;
          uVar5 = *(undefined4 *)(lVar6 + lVar12 * 0x28);
          LeaveCriticalSection(lpCriticalSection);
          return uVar5;
        }
        uStack_90 = uStack_90 & ~uStack_9c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
      }
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return 0xffffffff;
}



// FUNCTION 1415d20c0 ClearAndDisableTLSCachesOnCurrentThread body=20 status=ok
// SIG undefined ClearAndDisableTLSCachesOnCurrentThread(void)

void FMemory::ClearAndDisableTLSCachesOnCurrentThread(void)

{
  if (DAT_1468c2208 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001415d20cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_1468c2208 + 0x48))();
    return;
  }
  return;
}



// FUNCTION 1415d20e0 FUN_1415d20e0 body=226 status=ok
// SIG undefined FUN_1415d20e0(void)

void FUN_1415d20e0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)FUN_143a8d310(0x38);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_143aa5db0(puVar5);
    puVar6 = puVar5 + 4;
    *puVar5 = &PTR__scalar_deleting_destructor__144cb1028;
    *puVar6 = 0;
    puVar5[5] = 0;
    puVar5[6] = puVar6;
    if (*(int *)(puVar5 + 5) == 0) {
      FUN_143aa72b0(puVar5,&DAT_143f3eda8,0);
    }
    else {
      FUN_143aa72b0(puVar5,*puVar6,*(int *)(puVar5 + 5) + -1);
    }
  }
  puVar6 = (undefined8 *)FUN_1415dc080(param_1,local_18);
  (**(code **)(*(longlong *)*puVar6 + 0x40))((longlong *)*puVar6,puVar5);
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
                    /* WARNING: Could not recover jumptable at 0x0001415d21be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}



// FUNCTION 1415d21d0 CloseDataFile body=180 status=ok
// SIG undefined CloseDataFile(void)

void FICUInternationalization::CloseDataFile(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  int local_res10 [6];
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FInternationalization::Get();
    lVar1 = *(longlong *)(lVar1 + 0x20);
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x270,local_res10);
    piVar3 = (int *)0x0;
    if (local_res10[0] != -1) {
      piVar3 = (int *)(*(longlong *)(lVar1 + 0x270) + (longlong)local_res10[0] * 0x28);
    }
    piVar2 = piVar3 + 4;
    if (piVar3 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      TSet<TTuple<FString,FICUInternationalization::FICUCachedFileData>,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>,FDefaultSetAllocator>
      ::Remove(lVar1 + 0x270,param_2);
    }
    lVar1 = *param_2;
    if (lVar1 != 0) {
      if (DAT_1468c2208 == (longlong *)0x0) {
        FUN_1415d7ea0();
      }
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar1);
    }
    FMemory::operator_delete(param_2,0x10);
  }
  return;
}



// FUNCTION 1415d2290 CodepointToString body=330 status=ok
// SIG undefined CodepointToString(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUnicodeChar::CodepointToString(undefined4 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 ****_Src;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined **local_40;
  undefined8 ***local_38;
  int local_2c;
  ushort local_1a;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_1a = 0x200;
  local_40 = icu_53::UnicodeString::vftable;
  FUN_143a91100(&local_40);
  iVar3 = (int)(char)local_1a;
  if ((char)local_1a < '\0') {
    iVar3 = local_2c;
  }
  FUN_143a909d0(&local_40,0,iVar3,param_1);
  iVar3 = (int)(char)local_1a;
  if ((char)local_1a < '\0') {
    iVar3 = local_2c;
  }
  if (iVar3 == 0) {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0);
    }
  }
  else if (iVar3 < 1) {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(int *)((longlong)param_2 + 0xc) < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0);
    }
    if ((undefined2 *)*param_2 != (undefined2 *)0x0) {
      *(undefined2 *)*param_2 = 0;
    }
  }
  else {
    iVar2 = (int)param_2[1];
    iVar1 = iVar3 + 1;
    if (iVar2 < iVar1) {
      *(int *)(param_2 + 1) = iVar1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
    }
    else if ((iVar1 < iVar2) && (iVar1 != iVar2)) {
      *(int *)(param_2 + 1) = iVar1;
      TArray<wchar_t,FDefaultAllocator>::ResizeShrink(param_2);
    }
    _Src = (undefined8 ****)0x0;
    if (((local_1a & 0x1100) == 0) && (_Src = &local_38, (local_1a & 0x200) == 0)) {
      _Src = (undefined8 ****)local_38;
    }
    ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar3 * 2);
    *(undefined2 *)((longlong)iVar3 * 2 + *param_2) = 0;
  }
  FUN_143a8dc60(&local_40);
  return 1;
}



// FUNCTION 1415d23e0 Compact body=429 status=ok
// SIG undefined Compact(void)

ulonglong TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::Compact(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulonglong in_RAX;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if (iVar2 != 0) {
    iVar3 = (int)param_1[1];
    uVar13 = 0;
    iVar8 = (int)param_1[6];
    lVar5 = *param_1;
    iVar14 = iVar3 - iVar2;
    iVar12 = iVar3;
    if (iVar8 != -1) {
      do {
        iVar4 = *(int *)((longlong)iVar8 * 0x28 + 4 + *param_1);
        iVar11 = iVar12;
        if (iVar8 < iVar14) {
          bVar6 = (byte)iVar12 & 0x1f;
          uVar10 = 1 << bVar6 | 1U >> 0x20 - bVar6;
          plVar9 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar9 = param_1 + 2;
          }
          do {
            iVar11 = iVar12 + -1;
            uVar10 = uVar10 >> 1 | (uint)((uVar10 & 1) != 0) << 0x1f;
            iVar7 = iVar11;
            if (iVar11 < 0) {
              iVar7 = iVar12 + 0x1e;
            }
            iVar12 = iVar11;
          } while ((*(uint *)((longlong)plVar9 + (longlong)(iVar7 >> 5) * 4) & uVar10) == 0);
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar8 * 0x28 + lVar5),
                     (void *)((longlong)iVar11 * 0x28 + lVar5),0x28);
          plVar9 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar9 = param_1 + 2;
          }
          iVar12 = iVar8;
          if (iVar8 < 0) {
            iVar12 = iVar8 + 0x1f;
          }
          uVar13 = 1;
          puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
        }
        iVar12 = iVar11;
        iVar8 = iVar4;
      } while (iVar4 != -1);
      iVar12 = (int)param_1[1];
    }
    iVar8 = (iVar12 - iVar14) - iVar2;
    if (iVar8 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)iVar14 * 0x28),
                 (void *)(*param_1 + (longlong)iVar3 * 0x28),(longlong)iVar8 * 0x28);
      iVar12 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar12 - iVar2;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeShrink
              (param_1);
    TBitArray<FDefaultBitArrayAllocator>::RemoveAt(param_1 + 2,iVar14,iVar2);
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    return uVar13;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1415d2590 Compact body=429 status=ok
// SIG undefined Compact(void)

ulonglong TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::Compact(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulonglong in_RAX;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if (iVar2 != 0) {
    iVar3 = (int)param_1[1];
    uVar13 = 0;
    iVar8 = (int)param_1[6];
    lVar5 = *param_1;
    iVar14 = iVar3 - iVar2;
    iVar12 = iVar3;
    if (iVar8 != -1) {
      do {
        iVar4 = *(int *)((longlong)iVar8 * 0x18 + 4 + *param_1);
        iVar11 = iVar12;
        if (iVar8 < iVar14) {
          bVar6 = (byte)iVar12 & 0x1f;
          uVar10 = 1 << bVar6 | 1U >> 0x20 - bVar6;
          plVar9 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar9 = param_1 + 2;
          }
          do {
            iVar11 = iVar12 + -1;
            uVar10 = uVar10 >> 1 | (uint)((uVar10 & 1) != 0) << 0x1f;
            iVar7 = iVar11;
            if (iVar11 < 0) {
              iVar7 = iVar12 + 0x1e;
            }
            iVar12 = iVar11;
          } while ((*(uint *)((longlong)plVar9 + (longlong)(iVar7 >> 5) * 4) & uVar10) == 0);
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar8 * 0x18 + lVar5),
                     (void *)((longlong)iVar11 * 0x18 + lVar5),0x18);
          plVar9 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar9 = param_1 + 2;
          }
          iVar12 = iVar8;
          if (iVar8 < 0) {
            iVar12 = iVar8 + 0x1f;
          }
          uVar13 = 1;
          puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
        }
        iVar12 = iVar11;
        iVar8 = iVar4;
      } while (iVar4 != -1);
      iVar12 = (int)param_1[1];
    }
    iVar8 = (iVar12 - iVar14) - iVar2;
    if (iVar8 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)iVar14 * 0x18),
                 (void *)(*param_1 + (longlong)iVar3 * 0x18),(longlong)iVar8 * 0x18);
      iVar12 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar12 - iVar2;
    TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(param_1);
    TBitArray<FDefaultBitArrayAllocator>::RemoveAt(param_1 + 2,iVar14,iVar2);
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    return uVar13;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1415d2740 CompareTo body=571 status=ok
// SIG undefined CompareTo(void)

undefined4 FText::CompareTo(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined4 local_res8 [2];
  longlong *local_188;
  longlong *local_180;
  undefined **local_178 [4];
  longlong local_158;
  undefined8 local_150;
  undefined8 *local_148;
  undefined **local_140 [4];
  longlong local_120;
  undefined8 local_118;
  undefined8 *local_110;
  undefined1 local_108 [112];
  undefined1 local_98 [112];
  
  lVar6 = FInternationalization::Get();
  plVar3 = *(longlong **)(lVar6 + 0x30);
  puVar7 = *(undefined8 **)(lVar6 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  FUN_1415da2c0(*puVar7,&local_188,param_3);
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
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  puVar7 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x10))();
  FUN_143aa5db0(local_140);
  iVar10 = 0;
  local_120 = 0;
  local_140[0] = &PTR__scalar_deleting_destructor__144cb1028;
  puVar9 = &DAT_143f3eda8;
  local_118 = 0;
  if (*(int *)(puVar7 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
    iVar4 = iVar10;
  }
  else {
    puVar8 = (undefined2 *)*puVar7;
    iVar4 = *(int *)(puVar7 + 1) + -1;
  }
  local_110 = puVar7;
  FUN_143aa72b0(local_140,puVar8,iVar4);
  FUN_143a93fb0(local_98,local_140);
  puVar7 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x10))();
  FUN_143aa5db0(local_178);
  local_178[0] = &PTR__scalar_deleting_destructor__144cb1028;
  local_158 = 0;
  local_150 = 0;
  if (*(int *)(puVar7 + 1) != 0) {
    puVar9 = (undefined2 *)*puVar7;
    iVar10 = *(int *)(puVar7 + 1) + -1;
  }
  local_148 = puVar7;
  FUN_143aa72b0(local_178,puVar9,iVar10);
  FUN_143a93fb0(local_108,local_178);
  local_res8[0] = 0;
  uVar5 = (**(code **)(*local_188 + 0x28))(local_188,local_98,local_108,local_res8);
  lVar6 = local_158;
  local_178[0] = &PTR__scalar_deleting_destructor__144cb1028;
  if (local_158 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar6);
    }
    else {
      (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_158);
    }
  }
  UCameraModifier_Climbing::~UCameraModifier_Climbing(local_178);
  lVar6 = local_120;
  local_140[0] = &PTR__scalar_deleting_destructor__144cb1028;
  if (local_120 != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,lVar6);
  }
  UCameraModifier_Climbing::~UCameraModifier_Climbing(local_140);
  plVar3 = local_180;
  if (local_180 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_180 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_180 + 8))(local_180,1);
      }
    }
  }
  return uVar5;
}



// FUNCTION 1415d2980 CompareToCaseIgnored body=11 status=ok
// SIG undefined CompareToCaseIgnored(void)

void FText::CompareToCaseIgnored(undefined8 param_1,undefined8 param_2)

{
  CompareTo(param_1,param_2,2);
  return;
}



// FUNCTION 1415d2990 ComputeBaseDirection body=262 status=ok
// SIG undefined ComputeBaseDirection(void)

ulonglong TextBiDi::Internal::FICUTextBiDi::ComputeBaseDirection
                    (longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  void *_Dst;
  ulonglong uVar2;
  int iVar3;
  undefined2 *_Src;
  longlong *plVar4;
  
  uVar1 = *(uint *)(param_2 + 1);
  uVar2 = (ulonglong)uVar1;
  plVar4 = (longlong *)0x0;
  iVar3 = 0;
  if (uVar1 == 0) {
    _Src = &DAT_143f3eda8;
  }
  else {
    _Src = (undefined2 *)*param_2;
    iVar3 = uVar1 - 1;
  }
  if (iVar3 != 0) {
    if (iVar3 < 1) {
      *(undefined1 *)(param_1 + 0x36) = 0;
      if ((*(byte *)(param_1 + 0x37) & 1) != 0) {
        *(undefined1 *)(param_1 + 0x37) = 2;
      }
    }
    else {
      _Dst = (void *)FUN_143a8fd90(param_1 + 0x10,iVar3 + 1);
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar3 * 2);
      *(undefined2 *)((longlong)iVar3 * 2 + (longlong)_Dst) = 0;
      FUN_143a90820(param_1 + 0x10,iVar3);
    }
    iVar3 = (int)*(char *)(param_1 + 0x36);
    if (*(char *)(param_1 + 0x36) < '\0') {
      iVar3 = *(int *)(param_1 + 0x24);
    }
    if (((*(byte *)(param_1 + 0x37) & 0x11) == 0) &&
       (plVar4 = (longlong *)(param_1 + 0x18), (*(byte *)(param_1 + 0x37) & 2) == 0)) {
      plVar4 = (longlong *)*plVar4;
    }
    uVar2 = FUN_143aacf30(plVar4,iVar3);
    iVar3 = (int)uVar2;
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        return 1;
      }
      uVar2 = (ulonglong)(iVar3 - 2U);
      if (iVar3 - 2U == 0) {
        return 2;
      }
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1415d2aa0 ComputeBaseDirection body=278 status=ok
// SIG undefined ComputeBaseDirection(void)

ulonglong TextBiDi::Internal::FICUTextBiDi::ComputeBaseDirection
                    (longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *_Dst;
  int iVar2;
  undefined2 *_Src;
  longlong *plVar3;
  
  puVar1 = (undefined8 *)FText::ToString(param_2);
  plVar3 = (longlong *)0x0;
  iVar2 = *(int *)(puVar1 + 1) + -1;
  if (*(int *)(puVar1 + 1) == 0) {
    iVar2 = 0;
    _Src = &DAT_143f3eda8;
  }
  else {
    _Src = (undefined2 *)*puVar1;
  }
  if (iVar2 != 0) {
    if (iVar2 < 1) {
      *(undefined1 *)(param_1 + 0x36) = 0;
      if ((*(byte *)(param_1 + 0x37) & 1) != 0) {
        *(undefined1 *)(param_1 + 0x37) = 2;
      }
    }
    else {
      _Dst = (void *)FUN_143a8fd90(param_1 + 0x10,iVar2 + 1);
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar2 * 2);
      *(undefined2 *)((longlong)iVar2 * 2 + (longlong)_Dst) = 0;
      FUN_143a90820(param_1 + 0x10,iVar2);
    }
    iVar2 = (int)*(char *)(param_1 + 0x36);
    if (*(char *)(param_1 + 0x36) < '\0') {
      iVar2 = *(int *)(param_1 + 0x24);
    }
    if (((*(byte *)(param_1 + 0x37) & 0x11) == 0) &&
       (plVar3 = (longlong *)(param_1 + 0x18), (*(byte *)(param_1 + 0x37) & 2) == 0)) {
      plVar3 = (longlong *)*plVar3;
    }
    puVar1 = (undefined8 *)FUN_143aacf30(plVar3,iVar2);
    iVar2 = (int)puVar1;
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        return 1;
      }
      puVar1 = (undefined8 *)(ulonglong)(iVar2 - 2U);
      if (iVar2 - 2U == 0) {
        return 2;
      }
    }
  }
  return (ulonglong)puVar1 & 0xffffffffffffff00;
}



// FUNCTION 1415d2bc0 ComputeBaseDirection body=255 status=ok
// SIG undefined ComputeBaseDirection(void)

ulonglong TextBiDi::Internal::FICUTextBiDi::ComputeBaseDirection
                    (longlong param_1,longlong param_2,int param_3,int param_4)

{
  ulonglong in_RAX;
  void *_Dst;
  int iVar1;
  longlong *plVar2;
  
  if (param_4 != 0) {
    plVar2 = (longlong *)0x0;
    if (param_4 < 1) {
      *(undefined1 *)(param_1 + 0x36) = 0;
      if ((*(byte *)(param_1 + 0x37) & 1) != 0) {
        *(undefined1 *)(param_1 + 0x37) = 2;
      }
    }
    else {
      _Dst = (void *)FUN_143a8fd90(param_1 + 0x10,param_4 + 1);
      ::_guard_xfg_dispatch_icall_nop
                (_Dst,(void *)((longlong)param_3 * 2 + param_2),(longlong)param_4 * 2);
      *(undefined2 *)((longlong)param_4 * 2 + (longlong)_Dst) = 0;
      FUN_143a90820(param_1 + 0x10,param_4);
    }
    iVar1 = (int)*(char *)(param_1 + 0x36);
    if (*(char *)(param_1 + 0x36) < '\0') {
      iVar1 = *(int *)(param_1 + 0x24);
    }
    if (((*(byte *)(param_1 + 0x37) & 0x11) == 0) &&
       (plVar2 = (longlong *)(param_1 + 0x18), (*(byte *)(param_1 + 0x37) & 2) == 0)) {
      plVar2 = (longlong *)*plVar2;
    }
    in_RAX = FUN_143aacf30(plVar2,iVar1);
    iVar1 = (int)in_RAX;
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        return 1;
      }
      in_RAX = (ulonglong)(iVar1 - 2U);
      if (iVar1 - 2U == 0) {
        return 2;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1415d2cc0 ComputeBaseDirection body=273 status=ok
// SIG undefined ComputeBaseDirection(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong TextBiDi::ComputeBaseDirection(undefined8 *param_1)

{
  byte bVar1;
  int iVar2;
  void *_Dst;
  longlong lVar3;
  int iVar4;
  undefined8 ****ppppuVar5;
  undefined2 *_Src;
  undefined1 auStack_68 [32];
  undefined **local_48;
  undefined8 ***local_40;
  int local_34;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  iVar2 = *(int *)(param_1 + 1);
  iVar4 = 0;
  if (iVar2 == 0) {
    _Src = &DAT_143f3eda8;
  }
  else {
    _Src = (undefined2 *)*param_1;
    iVar4 = iVar2 + -1;
  }
  if (iVar4 == 0) {
    return (ulonglong)(uint3)((uint)iVar2 >> 8) << 8;
  }
  local_22._0_1_ = '\0';
  local_48 = icu_53::UnicodeString::vftable;
  local_22 = 0x200;
  local_22._1_1_ = 2;
  if (iVar4 < 1) {
LAB_1415d2d75:
    local_34 = (int)(char)local_22;
    bVar1 = local_22._1_1_;
  }
  else {
    _Dst = (void *)FUN_143a8fd90(&local_48,iVar4 + 1);
    ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar4 * 2);
    *(undefined2 *)((longlong)iVar4 * 2 + (longlong)_Dst) = 0;
    FUN_143a90820(&local_48,iVar4);
    bVar1 = local_22._1_1_;
    if (-1 < (char)local_22) goto LAB_1415d2d75;
  }
  ppppuVar5 = (undefined8 ****)0x0;
  if (((bVar1 & 0x11) == 0) && (ppppuVar5 = &local_40, (bVar1 & 2) == 0)) {
    ppppuVar5 = (undefined8 ****)local_40;
  }
  iVar2 = FUN_143aacf30(ppppuVar5,local_34);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      lVar3 = 1;
      goto LAB_1415d2da9;
    }
    if (iVar2 == 2) {
      lVar3 = 2;
      goto LAB_1415d2da9;
    }
  }
  lVar3 = 0;
LAB_1415d2da9:
  FUN_143a8dc60(&local_48);
  return lVar3;
}



// FUNCTION 1415d2de0 ComputeTextDirection body=201 status=ok
// SIG undefined ComputeTextDirection(void)

longlong TextBiDi::Internal::FICUTextBiDi::ComputeTextDirection
                   (longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Dst;
  longlong lVar2;
  int iVar3;
  undefined2 *_Src;
  
  iVar1 = *(int *)(param_2 + 1);
  iVar3 = 0;
  if (iVar1 == 0) {
    _Src = &DAT_143f3eda8;
  }
  else {
    _Src = (undefined2 *)*param_2;
    iVar3 = iVar1 + -1;
  }
  if (iVar3 != 0) {
    if (iVar3 < 1) {
      *(undefined1 *)(param_1 + 0x36) = 0;
      if ((*(byte *)(param_1 + 0x37) & 1) != 0) {
        *(undefined1 *)(param_1 + 0x37) = 2;
      }
    }
    else {
      _Dst = (void *)FUN_143a8fd90(param_1 + 0x10,iVar3 + 1);
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar3 * 2);
      *(undefined2 *)((longlong)iVar3 * 2 + (longlong)_Dst) = 0;
      FUN_143a90820(param_1 + 0x10,iVar3);
    }
    lVar2 = Internal::ComputeTextDirection(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
    return lVar2;
  }
  return (ulonglong)(uint3)((uint)iVar1 >> 8) << 8;
}



// FUNCTION 1415d2eb0 ComputeTextDirection body=241 status=ok
// SIG undefined ComputeTextDirection(void)

ulonglong TextBiDi::Internal::FICUTextBiDi::ComputeTextDirection
                    (longlong param_1,undefined8 *param_2,undefined1 param_3,longlong param_4)

{
  ulonglong uVar1;
  void *_Dst;
  int iVar2;
  undefined2 *_Src;
  
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
    _Src = &DAT_143f3eda8;
  }
  else {
    _Src = (undefined2 *)*param_2;
  }
  uVar1 = (ulonglong)*(uint *)(param_4 + 0xc);
  *(undefined4 *)(param_4 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_4 + 0xc)) {
    uVar1 = TArray<TextBiDi::FTextDirectionInfo,FDefaultAllocator>::ResizeTo(param_4,0);
  }
  if (iVar2 != 0) {
    if (iVar2 < 1) {
      *(undefined1 *)(param_1 + 0x36) = 0;
      if ((*(byte *)(param_1 + 0x37) & 1) != 0) {
        *(undefined1 *)(param_1 + 0x37) = 2;
      }
    }
    else {
      _Dst = (void *)FUN_143a8fd90(param_1 + 0x10,iVar2 + 1);
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar2 * 2);
      *(undefined2 *)((longlong)iVar2 * 2 + (longlong)_Dst) = 0;
      FUN_143a90820(param_1 + 0x10,iVar2);
    }
    uVar1 = Internal::ComputeTextDirection
                      (*(undefined8 *)(param_1 + 8),param_1 + 0x10,0,param_3,param_4);
    return uVar1;
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1415d2fb0 ComputeTextDirection body=211 status=ok
// SIG undefined ComputeTextDirection(void)

ulonglong TextBiDi::Internal::FICUTextBiDi::ComputeTextDirection
                    (longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *_Dst;
  ulonglong uVar2;
  int iVar3;
  undefined2 *_Src;
  
  puVar1 = (undefined8 *)FText::ToString(param_2);
  iVar3 = *(int *)(puVar1 + 1) + -1;
  if (*(int *)(puVar1 + 1) == 0) {
    iVar3 = 0;
    _Src = &DAT_143f3eda8;
  }
  else {
    _Src = (undefined2 *)*puVar1;
  }
  if (iVar3 != 0) {
    if (iVar3 < 1) {
      *(undefined1 *)(param_1 + 0x36) = 0;
      if ((*(byte *)(param_1 + 0x37) & 1) != 0) {
        *(undefined1 *)(param_1 + 0x37) = 2;
      }
    }
    else {
      _Dst = (void *)FUN_143a8fd90(param_1 + 0x10,iVar3 + 1);
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar3 * 2);
      *(undefined2 *)((longlong)iVar3 * 2 + (longlong)_Dst) = 0;
      FUN_143a90820(param_1 + 0x10,iVar3);
    }
    uVar2 = Internal::ComputeTextDirection(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
    return uVar2;
  }
  return (ulonglong)puVar1 & 0xffffffffffffff00;
}



// FUNCTION 1415d3090 ComputeTextDirection body=253 status=ok
// SIG undefined ComputeTextDirection(void)

ulonglong TextBiDi::Internal::FICUTextBiDi::ComputeTextDirection
                    (longlong param_1,undefined8 param_2,undefined1 param_3,longlong param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  void *_Dst;
  int iVar3;
  undefined2 *_Src;
  
  puVar1 = (undefined8 *)FText::ToString();
  iVar3 = *(int *)(puVar1 + 1) + -1;
  if (*(int *)(puVar1 + 1) == 0) {
    iVar3 = 0;
    _Src = &DAT_143f3eda8;
  }
  else {
    _Src = (undefined2 *)*puVar1;
  }
  uVar2 = (ulonglong)*(uint *)(param_4 + 0xc);
  *(undefined4 *)(param_4 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_4 + 0xc)) {
    uVar2 = TArray<TextBiDi::FTextDirectionInfo,FDefaultAllocator>::ResizeTo(param_4,0);
  }
  if (iVar3 != 0) {
    if (iVar3 < 1) {
      *(undefined1 *)(param_1 + 0x36) = 0;
      if ((*(byte *)(param_1 + 0x37) & 1) != 0) {
        *(undefined1 *)(param_1 + 0x37) = 2;
      }
    }
    else {
      _Dst = (void *)FUN_143a8fd90(param_1 + 0x10,iVar3 + 1);
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar3 * 2);
      *(undefined2 *)((longlong)iVar3 * 2 + (longlong)_Dst) = 0;
      FUN_143a90820(param_1 + 0x10,iVar3);
    }
    uVar2 = Internal::ComputeTextDirection
                      (*(undefined8 *)(param_1 + 8),param_1 + 0x10,0,param_3,param_4);
    return uVar2;
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1415d3190 ComputeTextDirection body=186 status=ok
// SIG undefined ComputeTextDirection(void)

ulonglong TextBiDi::Internal::FICUTextBiDi::ComputeTextDirection
                    (longlong param_1,longlong param_2,int param_3,int param_4)

{
  ulonglong in_RAX;
  void *_Dst;
  ulonglong uVar1;
  
  if (param_4 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  if (param_4 < 1) {
    *(undefined1 *)(param_1 + 0x36) = 0;
    if ((*(byte *)(param_1 + 0x37) & 1) != 0) {
      *(undefined1 *)(param_1 + 0x37) = 2;
    }
  }
  else {
    _Dst = (void *)FUN_143a8fd90(param_1 + 0x10,param_4 + 1);
    ::_guard_xfg_dispatch_icall_nop
              (_Dst,(void *)(param_2 + (longlong)param_3 * 2),(longlong)param_4 * 2);
    *(undefined2 *)((longlong)param_4 * 2 + (longlong)_Dst) = 0;
    FUN_143a90820(param_1 + 0x10,param_4);
  }
  uVar1 = Internal::ComputeTextDirection(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
  return uVar1;
}



// FUNCTION 1415d3250 ComputeTextDirection body=240 status=ok
// SIG undefined ComputeTextDirection(void)

ulonglong TextBiDi::Internal::FICUTextBiDi::ComputeTextDirection
                    (longlong param_1,longlong param_2,int param_3,int param_4,undefined1 param_5,
                    longlong param_6)

{
  ulonglong uVar1;
  void *_Dst;
  
  uVar1 = (ulonglong)*(uint *)(param_6 + 0xc);
  *(undefined4 *)(param_6 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_6 + 0xc)) {
    uVar1 = TArray<TextBiDi::FTextDirectionInfo,FDefaultAllocator>::ResizeTo(param_6,0);
  }
  if (param_4 == 0) {
    return uVar1 & 0xffffffffffffff00;
  }
  if (param_4 < 1) {
    *(undefined1 *)(param_1 + 0x36) = 0;
    if ((*(byte *)(param_1 + 0x37) & 1) != 0) {
      *(undefined1 *)(param_1 + 0x37) = 2;
    }
  }
  else {
    _Dst = (void *)FUN_143a8fd90(param_1 + 0x10,param_4 + 1);
    ::_guard_xfg_dispatch_icall_nop
              (_Dst,(void *)((longlong)param_3 * 2 + param_2),(longlong)param_4 * 2);
    *(undefined2 *)((longlong)param_4 * 2 + (longlong)_Dst) = 0;
    FUN_143a90820(param_1 + 0x10,param_4);
  }
  uVar1 = Internal::ComputeTextDirection
                    (*(undefined8 *)(param_1 + 8),param_1 + 0x10,param_3,param_5);
  return uVar1;
}



// FUNCTION 1415d3340 ComputeTextDirection body=134 status=ok
// SIG undefined ComputeTextDirection(void)

ulonglong TextBiDi::Internal::ComputeTextDirection(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  int iVar3;
  int local_res10 [6];
  
  puVar2 = (undefined8 *)0x0;
  iVar3 = (int)*(char *)(param_2 + 0x26);
  local_res10[0] = 0;
  if (*(char *)(param_2 + 0x26) < '\0') {
    iVar3 = *(int *)(param_2 + 0x14);
  }
  if (((*(byte *)(param_2 + 0x27) & 0x11) == 0) &&
     (puVar2 = (undefined8 *)(param_2 + 8), (*(byte *)(param_2 + 0x27) & 2) == 0)) {
    puVar2 = (undefined8 *)*puVar2;
  }
  uVar1 = FUN_143aad430(param_1,puVar2,iVar3,0,0,local_res10);
  if (local_res10[0] < 1) {
    uVar1 = FUN_143aad0b0(param_1);
    iVar3 = (int)uVar1;
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        return 1;
      }
      uVar1 = (ulonglong)(iVar3 - 2U);
      if (iVar3 - 2U == 0) {
        return 2;
      }
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1415d33d0 ComputeTextDirection body=432 status=ok
// SIG undefined ComputeTextDirection(void)

ulonglong TextBiDi::Internal::ComputeTextDirection
                    (undefined8 param_1,longlong param_2,int param_3,char param_4,longlong *param_5)

{
  longlong lVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int local_res10 [4];
  int local_res20 [2];
  undefined4 local_48 [4];
  
  puVar5 = (undefined8 *)0x0;
  local_res20[0] = 0;
  iVar8 = (int)*(char *)(param_2 + 0x26);
  if (*(char *)(param_2 + 0x26) < '\0') {
    iVar8 = *(int *)(param_2 + 0x14);
  }
  if (((*(byte *)(param_2 + 0x27) & 0x11) == 0) &&
     (puVar5 = (undefined8 *)(param_2 + 8), (*(byte *)(param_2 + 0x27) & 2) == 0)) {
    puVar5 = (undefined8 *)*puVar5;
  }
  uVar3 = FUN_143aad430(param_1,puVar5,iVar8,param_4 != '\0',0,local_res20);
  if (0 < local_res20[0]) {
    return uVar3 & 0xffffffffffffff00;
  }
  iVar8 = FUN_143aad0b0(param_1);
  if (iVar8 != 0) {
    if (iVar8 == 1) {
      uVar3 = 1;
      goto LAB_1415d3482;
    }
    if (iVar8 == 2) {
      uVar3 = 2;
      goto LAB_1415d3482;
    }
  }
  uVar3 = 0;
LAB_1415d3482:
  iVar8 = FUN_143aae710(param_1);
  lVar6 = (longlong)iVar8;
  lVar7 = param_5[1];
  iVar4 = (int)lVar7 + iVar8;
  *(int *)(param_5 + 1) = iVar4;
  if (*(int *)((longlong)param_5 + 0xc) < iVar4) {
    FUN_1415e4dc0(param_5);
  }
  ::_guard_xfg_dispatch_icall_nop((void *)(*param_5 + (longlong)(int)lVar7 * 0xc),0,lVar6 * 0xc);
  iVar4 = 0;
  if (0 < iVar8) {
    lVar7 = 0;
    do {
      lVar1 = *param_5;
      local_res10[0] = 0;
      local_48[0] = 0;
      iVar8 = FUN_143aaf600(param_1,iVar4,local_res10,local_48);
      if (iVar8 == 0) {
LAB_1415d351b:
        uVar2 = 0;
      }
      else if (iVar8 == 1) {
        uVar2 = 1;
      }
      else {
        if (iVar8 != 2) goto LAB_1415d351b;
        uVar2 = 2;
      }
      *(undefined1 *)(lVar1 + 8 + lVar7) = uVar2;
      iVar4 = iVar4 + 1;
      *(int *)(lVar1 + lVar7) = local_res10[0] + param_3;
      *(undefined4 *)(lVar1 + 4 + lVar7) = local_48[0];
      lVar7 = lVar7 + 0xc;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return uVar3;
}



// FUNCTION 1415d3580 ConditionalInitializeAllowedCultures body=390 status=ok
// SIG undefined ConditionalInitializeAllowedCultures(void)

void FICUInternationalization::ConditionalInitializeAllowedCultures
               (longlong param_1,ErrorLevel param_2,ulong param_3,__uint64 param_4)

{
  AKRESULT AVar1;
  short *_Src;
  int iVar2;
  longlong lVar3;
  short *_Dst;
  longlong local_38;
  undefined1 *local_30;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  if (*(char *)(param_1 + 0x120) != '\0') {
    return;
  }
  if (DAT_1468b6148 == 0) {
    return;
  }
  if (*(char *)(DAT_1468b6148 + 0x59) == '\0') {
    return;
  }
  iVar2 = 0;
  _Dst = (short *)0x0;
  *(undefined1 *)(param_1 + 0x120) = 1;
  AVar1 = AK::Monitor::PostCode((ErrorCode)param_1,param_2,param_3,param_4,0,false);
  if (AVar1 == 2) {
    AVar1 = 1;
  }
  else if (AVar1 == 0) goto LAB_1415d365f;
  _Src = (short *)FUN_1415bb3d0(AVar1);
  if (_Dst != _Src) {
    if ((_Src != (short *)0x0) && (*_Src != 0)) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (_Src[lVar3] != 0);
      iVar2 = (int)lVar3 + 1;
    }
    if (iVar2 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&stack0xffffffffffffffb8,iVar2);
    }
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&stack0xffffffffffffffb8);
    }
    if (iVar2 != 0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar2 * 2);
    }
  }
LAB_1415d365f:
  local_30 = &stack0xffffffffffffffb8;
  local_38 = param_1;
  LoadInternationalizationConfigArray(local_18,L"EnabledCultures");
  FUN_1415cede0(&local_38,local_18,param_1 + 0x128);
  LoadInternationalizationConfigArray(local_28,L"DisabledCultures");
  FUN_1415cede0(&local_38,local_28,param_1 + 0x178);
  TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(local_28);
  TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(local_18);
  if (_Dst != (short *)0x0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,_Dst);
  }
  return;
}



// FUNCTION 1415d3710 ConditionalInitializeCultureMappings body=723 status=ok
// SIG undefined ConditionalInitializeCultureMappings(void)

void FICUInternationalization::ConditionalInitializeCultureMappings(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined2 *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  longlong *local_38;
  undefined2 **local_30;
  
  if (((*(char *)(param_1 + 200) == '\0') && (DAT_1468b6148 != 0)) &&
     (*(char *)(DAT_1468b6148 + 0x59) != '\0')) {
    *(undefined1 *)(param_1 + 200) = 1;
    LoadInternationalizationConfigArray(&local_48,L"CultureMappings");
    lVar1 = param_1 + 0xd0;
    if (*(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0x104) < (int)local_40) {
      FUN_1409870b0(lVar1,local_40 & 0xffffffff);
    }
    for (lVar8 = local_48; lVar8 != (longlong)(int)local_40 * 0x10 + local_48; lVar8 = lVar8 + 0x10)
    {
      local_58 = 0;
      local_50 = 0;
      local_78 = (undefined2 *)0x0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 2;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      lVar5 = local_68;
      FGenericPlatformString::Memcpy(local_68,&DAT_144cae65c,4);
      cVar2 = FUN_1404e14f0(lVar8,&local_68,&local_58,&local_78,0,0);
      if (lVar5 != 0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
          (**(code **)(*DAT_1468c2208 + 0x20))();
        }
        else {
          (**(code **)(*DAT_1468c2208 + 0x20))();
        }
      }
      if ((cVar2 != '\0') && (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c))) {
        puVar6 = &DAT_143f3eda8;
        if ((int)local_70 != 0) {
          puVar6 = local_78;
        }
        iVar3 = FUN_140438070(puVar6);
        lVar5 = *(longlong *)(param_1 + 0x68);
        if (*(longlong *)(param_1 + 0x68) == 0) {
          lVar5 = param_1 + 0x60;
        }
        iVar3 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x70) - 1U & (longlong)iVar3) * 4);
        if (iVar3 != -1) {
          lVar5 = *(longlong *)(param_1 + 0x28);
          do {
            lVar7 = (longlong)iVar3 * 0x20;
            if (*(int *)(lVar7 + 8 + lVar5) == 0) {
              puVar6 = &DAT_143f3eda8;
            }
            else {
              puVar6 = *(undefined2 **)(lVar7 + lVar5);
            }
            iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6);
            if (iVar4 == 0) {
              if (iVar3 != -1) {
                local_38 = &local_58;
                local_30 = &local_78;
                FUN_140497620(lVar1,local_res8,&local_38,0);
              }
              break;
            }
            lVar5 = *(longlong *)(param_1 + 0x28);
            iVar3 = *(int *)(lVar7 + 0x18 + lVar5);
          } while (iVar3 != -1);
        }
      }
      if (local_78 != (undefined2 *)0x0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))();
      }
      if (local_58 != 0) {
        if (DAT_1468c2208 == (longlong *)0x0) {
          FUN_1415d7ea0();
        }
        (**(code **)(*DAT_1468c2208 + 0x20))();
      }
    }
    cVar2 = TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            ::Compact(lVar1);
    if (cVar2 != '\0') {
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Rehash(lVar1);
    }
    TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(&local_48);
  }
  return;
}



// FUNCTION 1415d39f0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FString,FICUInternationalization::FICUCachedFileData>,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>,FDefaultSetAllocator>
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
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1415d3aa0 ConvertString body=195 status=ok
// SIG undefined ConvertString(void)

void ICUUtilities::FStringConverter::ConvertString
               (undefined8 param_1,longlong param_2,int param_3,int param_4,longlong *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (param_4 < 1) {
    *(undefined4 *)(param_5 + 1) = 0;
    if ((*(int *)((longlong)param_5 + 0xc) < 0) && (*(int *)((longlong)param_5 + 0xc) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_5,0);
    }
    if ((undefined2 *)*param_5 != (undefined2 *)0x0) {
      *(undefined2 *)*param_5 = 0;
    }
  }
  else {
    iVar1 = (int)param_5[1];
    iVar2 = param_4 + 1;
    if (iVar1 < iVar2) {
      *(int *)(param_5 + 1) = iVar2;
      if (*(int *)((longlong)param_5 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_5,iVar1);
      }
    }
    else if ((iVar2 < iVar1) && (iVar2 != iVar1)) {
      *(int *)(param_5 + 1) = iVar2;
      TArray<wchar_t,FDefaultAllocator>::ResizeShrink(param_5);
    }
    puVar3 = (undefined8 *)0x0;
    if (((*(byte *)(param_2 + 0x27) & 0x11) == 0) &&
       (puVar3 = (undefined8 *)(param_2 + 8), (*(byte *)(param_2 + 0x27) & 2) == 0)) {
      puVar3 = (undefined8 *)*puVar3;
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)*param_5,(void *)((longlong)puVar3 + (longlong)param_3 * 2),
               (longlong)param_4 * 2);
    *(undefined2 *)((longlong)param_4 * 2 + *param_5) = 0;
  }
  return;
}



// FUNCTION 1415d3b70 ConvertString body=236 status=ok
// SIG undefined ConvertString(void)

void ICUUtilities::ConvertString(undefined8 *param_1,longlong param_2,char param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  undefined2 *_Src;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 1);
  iVar3 = iVar1 + -1;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = -1;
    iVar2 = -1;
  }
  iVar4 = 0;
  if (iVar1 == 0) {
    iVar2 = iVar4;
  }
  if (iVar2 < 1) {
    *(undefined1 *)(param_2 + 0x26) = 0;
    if ((*(byte *)(param_2 + 0x27) & 1) != 0) {
      *(undefined1 *)(param_2 + 0x27) = 2;
      return;
    }
  }
  else {
    if (iVar1 == 0) {
      _Src = &DAT_143f3eda8;
    }
    else {
      _Src = (undefined2 *)*param_1;
      iVar4 = iVar3;
    }
    if (iVar4 < 1) {
      *(undefined1 *)(param_2 + 0x26) = 0;
      if ((*(byte *)(param_2 + 0x27) & 1) != 0) {
        *(undefined1 *)(param_2 + 0x27) = 2;
      }
    }
    else {
      _Dst = (void *)FUN_143a8fd90(param_2,iVar4 + 1);
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar4 * 2);
      if (param_3 != '\0') {
        *(undefined2 *)((longlong)iVar4 * 2 + (longlong)_Dst) = 0;
      }
      FUN_143a90820(param_2,iVar4);
    }
  }
  return;
}



// FUNCTION 1415d3c60 ConvertToAbsolutePathForExternalAppForWrite body=31 status=ok
// SIG undefined ConvertToAbsolutePathForExternalAppForWrite(void)

undefined8
FCachedReadPlatformFile::ConvertToAbsolutePathForExternalAppForWrite
          (longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x168))();
  return param_2;
}



// FUNCTION 1415d3c80 FUN_1415d3c80 body=31 status=ok
// SIG undefined FUN_1415d3c80(void)

undefined8 FUN_1415d3c80(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))();
  return param_2;
}



// FUNCTION 1415d3cd0 FUN_1415d3cd0 body=181 status=ok
// SIG undefined FUN_1415d3cd0(void)

undefined1
FUN_1415d3cd0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  LARGE_INTEGER local_res8;
  longlong local_18 [2];
  
  FString::PrintfImpl(local_18,L"CopyFile %s %s",param_2,param_3);
  QueryPerformanceCounter(&local_res8);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x158))
                    (*(longlong **)(param_1 + 8),param_2,param_3,param_4,param_5);
  QueryPerformanceCounter(&local_res8);
  if (local_18[0] != 0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_18[0]);
  }
  return uVar1;
}



// FUNCTION 1415d3d90 FUN_1415d3d90 body=324 status=ok
// SIG undefined FUN_1415d3d90(void)

void FUN_1415d3d90(longlong *param_1,longlong param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  }
  if (param_2 == 0) {
    DVar2 = GetCurrentThreadId();
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar6 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)DVar2) * 4);
      if (iVar3 != -1) {
        do {
          plVar6 = (longlong *)(*param_1 + (longlong)iVar3 * 0x18);
          if (*(DWORD *)(*param_1 + (longlong)iVar3 * 0x18) == DVar2) {
            if (iVar3 != -1) goto LAB_1415d3e24;
            break;
          }
          iVar3 = (int)plVar6[2];
        } while (iVar3 != -1);
      }
    }
    plVar6 = (longlong *)0x0;
LAB_1415d3e24:
    plVar7 = plVar6 + 1;
    if (plVar6 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    if (plVar7 == (longlong *)0x0) goto LAB_1415d3eba;
    param_2 = *plVar7;
  }
  plVar6 = (longlong *)param_1[0xf];
  iVar3 = (int)param_1[0x10];
  for (plVar7 = plVar6; plVar7 != plVar6 + iVar3; plVar7 = plVar7 + 1) {
    if (*plVar7 == param_2) {
      iVar5 = (int)((longlong)plVar7 - (longlong)plVar6 >> 3);
      if (iVar5 != -1) {
        iVar4 = (iVar3 - iVar5) + -1;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (plVar6 + iVar5,plVar6 + (iVar3 - iVar4),(longlong)iVar4 << 3);
          iVar3 = (int)param_1[0x10];
        }
        *(int *)(param_1 + 0x10) = iVar3 + -1;
        FUN_1415e4f60(param_1 + 0xf);
      }
      break;
    }
  }
LAB_1415d3eba:
                    /* WARNING: Could not recover jumptable at 0x0001415d3ecd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  return;
}



// FUNCTION 1415d3ee0 FUN_1415d3ee0 body=318 status=ok
// SIG undefined FUN_1415d3ee0(void)

void FUN_1415d3ee0(longlong *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  longlong *plVar2;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 10);
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  DVar4 = GetCurrentThreadId();
  plVar9 = (longlong *)0x0;
  plVar8 = plVar9;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    iVar5 = *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)DVar4) * 4)
    ;
    if (iVar5 != -1) {
      lVar1 = *param_1;
      do {
        lVar7 = (longlong)iVar5;
        if (*(DWORD *)(lVar1 + lVar7 * 0x18) == DVar4) {
          if ((iVar5 != -1) && (lVar1 = lVar1 + lVar7 * 0x18, lVar1 != 0)) {
            plVar8 = *(longlong **)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10 + lVar7 * 0x18);
      } while (iVar5 != -1);
    }
  }
  plVar6 = (longlong *)param_1[0xf];
  plVar10 = (longlong *)((longlong)(int)param_1[0x10] & 0x1fffffffffffffff);
  if (plVar6 + (int)param_1[0x10] < plVar6) {
    plVar10 = plVar9;
  }
  if (plVar10 != (longlong *)0x0) {
    do {
      plVar2 = (longlong *)*plVar6;
      if (plVar2 != plVar8) {
        (**(code **)(*plVar2 + 0x10))(plVar2,1);
      }
      plVar6 = plVar6 + 1;
      plVar9 = (longlong *)((longlong)plVar9 + 1);
    } while (plVar9 != plVar10);
  }
  if (DVar4 != DAT_1468c21c0) {
    FUN_1416b1930(DAT_1468c21c0,1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001415d3ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1415d4020 Create body=188 status=ok
// SIG undefined Create(void)

undefined8
FQueuedThread::Create(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined2 *local_18;
  int local_10;
  
  FString::PrintfImpl(&local_18,L"PoolThread %d (pri %d)",DAT_1468b5170);
  DAT_1468b5170 = DAT_1468b5170 + 1;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  uVar1 = FUN_1415ab270(0);
  *(undefined8 *)(param_1 + 8) = uVar1;
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = local_18;
  }
  uVar1 = FUN_1415d42a0(param_1,puVar2,param_3,param_4,0xffffffffffffffff);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  if (local_18 != (undefined2 *)0x0) {
    if (DAT_1468c2208 == (longlong *)0x0) {
      FUN_1415d7ea0();
    }
    (**(code **)(*DAT_1468c2208 + 0x20))(DAT_1468c2208,local_18);
  }
  return 1;
}



// FUNCTION 1415d40e0 Create body=440 status=ok
// SIG undefined Create(void)

bool FQueuedThreadPoolBase::Create(longlong *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  BOOL BVar4;
  longlong *plVar5;
  uint uVar6;
  LPCRITICAL_SECTION local_res8;
  
  bVar2 = true;
  local_res8 = (LPCRITICAL_SECTION)operator_new(0x28);
  if (local_res8 == (LPCRITICAL_SECTION)0x0) {
    local_res8 = (LPCRITICAL_SECTION)0x0;
  }
  else {
    InitializeCriticalSection(local_res8);
    SetCriticalSectionSpinCount(local_res8,4000);
  }
  param_1[7] = (longlong)local_res8;
  BVar4 = TryEnterCriticalSection(local_res8);
  if (BVar4 == 0) {
    EnterCriticalSection(local_res8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(uint *)((longlong)param_1 + 0x24) != param_2) {
    TArray<FQueuedThread_*,FDefaultAllocator>::ResizeTo(param_1 + 3,param_2);
  }
  if (param_3 < DAT_1468b5008) {
    param_3 = DAT_1468b5008;
  }
  uVar6 = 0;
  if (param_2 != 0) {
    do {
      if (!bVar2) break;
      plVar5 = (longlong *)operator_new(0x30);
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        *plVar5 = (longlong)&PTR_IsPromotedBuild_144cb0c08;
        plVar5[1] = 0;
        *(undefined1 *)(plVar5 + 2) = 0;
        plVar5[3] = 0;
        plVar5[4] = 0;
        plVar5[5] = 0;
      }
      cVar3 = (**(code **)(*plVar5 + 0x30))(plVar5,param_1,param_3,param_4);
      if (cVar3 == '\x01') {
        iVar1 = (int)param_1[4];
        *(int *)(param_1 + 4) = iVar1 + 1;
        if (*(int *)((longlong)param_1 + 0x24) < iVar1 + 1) {
          TArray<FMallocBinned2::FPerThreadFreeBlockLists_*,FDefaultAllocator>::ResizeGrow
                    (param_1 + 3,iVar1);
        }
        *(longlong **)(param_1[3] + (longlong)iVar1 * 8) = plVar5;
        iVar1 = (int)param_1[6];
        *(int *)(param_1 + 6) = iVar1 + 1;
        if (*(int *)((longlong)param_1 + 0x34) < iVar1 + 1) {
          TArray<FMallocBinned2::FPerThreadFreeBlockLists_*,FDefaultAllocator>::ResizeGrow
                    (param_1 + 5,iVar1);
        }
        *(longlong **)(param_1[5] + (longlong)iVar1 * 8) = plVar5;
      }
      else {
        bVar2 = false;
        (**(code **)(*plVar5 + 0x28))(plVar5,1);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_2);
    if (bVar2 == false) {
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  LeaveCriticalSection(local_res8);
  return bVar2;
}



// FUNCTION 1415d42a0 FUN_1415d42a0 body=608 status=ok
// SIG undefined FUN_1415d42a0(void)

longlong *
FUN_1415d42a0(longlong *param_1,undefined8 param_2,undefined4 param_3,int param_4,undefined8 param_5
             )

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  int local_res20 [2];
  longlong *local_48;
  longlong *local_40;
  int *local_38;
  longlong **local_30;
  
  iVar8 = 5;
  if (param_4 != -1) {
    iVar8 = param_4;
  }
  plVar9 = (longlong *)0x0;
  cVar1 = FUN_1415bac00();
  plVar4 = plVar9;
  if (cVar1 == '\0') {
    lVar5 = (**(code **)(*param_1 + 0x20))(param_1);
    if (lVar5 != 0) {
      plVar6 = (longlong *)operator_new(0x58);
      if (plVar6 != (longlong *)0x0) {
        plVar6[1] = 0;
        plVar6[2] = 0;
        plVar6[3] = 0;
        plVar6[4] = 0;
        plVar6[5] = -1;
        plVar6[6] = 0;
        plVar6[7] = 0;
        plVar6[8] = 0;
        *plVar6 = (longlong)&PTR_StartProfileThreadUsage_144cb0bc8;
        *(undefined1 *)(plVar6 + 9) = 0;
        plVar6[10] = 0;
        *(int *)((longlong)plVar6 + 0x44) = DAT_1464a8df8;
        DAT_1464a8df8 = DAT_1464a8df8 + 1;
        local_res20[0] = *(int *)((longlong)plVar6 + 0x44);
        local_40 = plVar6;
        plVar4 = (longlong *)FUN_1415d8270();
        BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(plVar4 + 10));
        if (BVar2 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(plVar4 + 10));
        }
        if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
          plVar7 = (longlong *)plVar4[8];
          if ((longlong *)plVar4[8] == (longlong *)0x0) {
            plVar7 = plVar4 + 7;
          }
          iVar3 = *(int *)((longlong)plVar7 +
                          ((longlong)(int)plVar4[9] - 1U & (longlong)local_res20[0]) * 4);
          if (iVar3 != -1) {
            do {
              if (*(int *)(*plVar4 + (longlong)iVar3 * 0x18) == local_res20[0]) {
                if (iVar3 != -1) goto LAB_1415d4494;
                break;
              }
              iVar3 = *(int *)(*plVar4 + 0x10 + (longlong)iVar3 * 0x18);
            } while (iVar3 != -1);
          }
        }
        local_38 = local_res20;
        local_30 = &local_40;
        FUN_1415ca4f0(plVar4,&local_48,&local_38,0);
        local_48 = local_40;
        BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(plVar4 + 10));
        if (BVar2 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(plVar4 + 10));
        }
        FUN_1415c9b70(plVar4 + 0xf,&local_48);
        LeaveCriticalSection((LPCRITICAL_SECTION)(plVar4 + 10));
LAB_1415d4494:
        LeaveCriticalSection((LPCRITICAL_SECTION)(plVar4 + 10));
        plVar4 = plVar6;
      }
      cVar1 = (**(code **)(*plVar4 + 0x30))(plVar4,param_1,param_2,param_3,iVar8,0);
      if (cVar1 == '\0') {
        (**(code **)(*plVar4 + 0x28))(plVar4,1);
        plVar4 = plVar9;
      }
    }
  }
  else {
    plVar4 = (longlong *)FWindowsPlatformProcess::CreateRunnableThread();
    if ((plVar4 != (longlong *)0x0) &&
       (cVar1 = (**(code **)(*plVar4 + 0x30))(plVar4,param_1,param_2,param_3,iVar8,param_5),
       cVar1 == '\0')) {
      (**(code **)(*plVar4 + 0x28))(plVar4,1);
      plVar4 = plVar9;
    }
  }
  return plVar4;
}



// FUNCTION 1415d4500 CreateBreakIterator body=302 status=ok
// SIG undefined CreateBreakIterator(void)

longlong *
`anonymous_namespace'::CreateBreakIterator(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  undefined4 local_res18 [4];
  longlong local_18;
  longlong *local_10;
  
  pcVar6 = (code *)0x0;
  local_res18[0] = 0;
  if (param_3 == 0) {
    pcVar6 = FUN_143a9fb70;
  }
  else if (param_3 == 1) {
    pcVar6 = FUN_143a9fdc0;
  }
  else if (param_3 == 2) {
    pcVar6 = FUN_143a9fd30;
  }
  else if (param_3 == 3) {
    pcVar6 = FUN_143a9fd60;
  }
  else if (param_3 == 4) {
    pcVar6 = FUN_143a9fd90;
  }
  lVar5 = (*pcVar6)(param_2,local_res18);
  local_10 = (longlong *)operator_new(0x18);
  if (local_10 != (longlong *)0x0) {
    *(undefined4 *)(local_10 + 1) = 1;
    *local_10 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)local_10 + 0xc) = 1;
    local_10[2] = lVar5;
  }
  local_18 = lVar5;
  SharedPointerInternals::EnableSharedFromThis(&local_18,lVar5,lVar5);
  plVar4 = local_10;
  *param_1 = local_18;
  param_1[1] = (longlong)local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
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
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1415d4630 FUN_1415d4630 body=230 status=ok
// SIG undefined FUN_1415d4630(void)

undefined8 * FUN_1415d4630(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  bVar6 = false;
  puVar4 = (undefined8 *)operator_new(0x18);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)FUN_1415d4720(DAT_1468b5038,local_18);
    *puVar4 = &PTR_FUN_144cb0fc8;
    puVar4[1] = *puVar5;
    lVar3 = puVar5[1];
    puVar4[2] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
      UNLOCK();
    }
    bVar6 = true;
  }
  puVar5 = (undefined8 *)operator_new(0x18);
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar5 + 1) = 1;
    *puVar5 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
    puVar5[2] = puVar4;
  }
  *param_1 = puVar4;
  param_1[1] = puVar5;
  SharedPointerInternals::EnableSharedFromThis(param_1,puVar4,puVar4);
  if ((bVar6) && (local_10 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_10 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_10 != (longlong *)0x0)) {
      (**(code **)(*local_10 + 8))(local_10,1);
    }
  }
  return param_1;
}



// FUNCTION 1415d4720 FUN_1415d4720 body=498 status=ok
// SIG undefined FUN_1415d4720(void)

longlong * FUN_1415d4720(LPCRITICAL_SECTION param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  BOOL BVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  BVar5 = TryEnterCriticalSection(param_1);
  if (BVar5 == 0) {
    EnterCriticalSection(param_1);
  }
  lVar6 = FInternationalization::Get();
  plVar4 = *(longlong **)(lVar6 + 0x60);
  puVar7 = *(undefined8 **)(lVar6 + 0x58);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar7 = (undefined8 *)FUN_1415d8690(*puVar7,local_28,0);
  lVar6 = (**(code **)(*(longlong *)*puVar7 + 0x18))();
  plStack_40 = (longlong *)operator_new(0x18);
  if (plStack_40 != (longlong *)0x0) {
    *(undefined4 *)(plStack_40 + 1) = 1;
    *plStack_40 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)plStack_40 + 0xc) = 1;
    plStack_40[2] = lVar6;
  }
  local_48 = lVar6;
  SharedPointerInternals::EnableSharedFromThis(&local_48,lVar6,lVar6);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  local_38 = local_48;
  plStack_30 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
  }
  FUN_1415caeb0(param_1 + 1,local_res8,&local_38,0);
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  plVar4 = plStack_40;
  *param_2 = local_48;
  param_2[1] = (longlong)plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plStack_40 + 0xc) = *(int *)((longlong)plStack_40 + 0xc) + 1;
    UNLOCK();
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_40)(plStack_40);
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
  LeaveCriticalSection(param_1);
  return param_2;
}



// FUNCTION 1415d4920 FUN_1415d4920 body=54 status=ok
// SIG undefined FUN_1415d4920(void)

void FUN_1415d4920(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144cb1608;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}


