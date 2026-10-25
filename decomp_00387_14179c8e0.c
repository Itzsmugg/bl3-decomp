// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14179c8e0 UnicodeToCPPIdentifier body=2135 status=ok
// SIG undefined UnicodeToCPPIdentifier(void)

undefined8 *
UnicodeToCPPIdentifier(undefined8 *param_1,undefined8 *param_2,char param_3,short *param_4)

{
  bool bVar1;
  bool bVar2;
  wint_t wVar3;
  wint_t wVar4;
  int iVar5;
  wchar_t **ppwVar6;
  short sVar7;
  wchar_t wVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  void *pvVar12;
  wchar_t *pwVar13;
  void *pvVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  undefined2 *puVar20;
  uint local_a8;
  wchar_t *local_a0;
  uint local_98;
  uint local_94;
  wchar_t *local_90;
  uint local_88;
  int iStack_84;
  void *local_80;
  undefined8 local_78;
  wchar_t *local_70;
  uint local_68;
  uint local_64;
  void *local_60;
  uint local_58;
  undefined4 local_54;
  
  pvVar12 = (void *)*param_2;
  local_88 = *(uint *)(param_2 + 1);
  lVar19 = (longlong)(int)local_88;
  local_90 = (wchar_t *)0x0;
  if (local_88 == 0) {
    iStack_84 = 0;
    uVar17 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_90,local_88,0);
    _guard_xfg_dispatch_icall_nop(local_90,pvVar12,lVar19 * 2);
    uVar17 = local_88;
  }
  local_a8 = local_88;
  pwVar10 = local_90;
  local_80 = (void *)0x0;
  local_78 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,0);
  FGenericPlatformString::Memcpy(local_80,L"__pf");
  pwVar9 = pwVar10 + (int)uVar17 + -1;
  if (uVar17 == 0) {
    pwVar9 = pwVar10 + (int)uVar17;
  }
  uVar16 = (uint)local_78;
  uVar15 = (uint)local_78;
  local_a0 = pwVar9;
  if (pwVar10 != pwVar9) {
    do {
      pwVar11 = (wchar_t *)0x0;
      wVar8 = *pwVar10;
      uVar16 = uVar15;
      if (((0x2f < (ushort)((ushort)wVar8 - 0x30)) ||
          ((0x87fffffe03ffU >> ((ulonglong)((ushort)wVar8 - 0x30 & 0xffff) & 0x3f) & 1) == 0)) &&
         (0x19 < (ushort)(wVar8 + L'ﾟ'))) {
        uVar17 = (uint)(ushort)wVar8;
        local_70 = (wchar_t *)0x0;
        local_64 = 0;
        if (wVar8 != L'\0') {
          pwVar13 = pwVar11;
          pwVar9 = pwVar11;
          do {
            iVar18 = (int)uVar17 % 0x3f;
            uVar17 = (((int)uVar17 / 0x3f) * 0x3f) / 0x3f;
            if (iVar18 < 0x1a) {
              sVar7 = 0x7a;
LAB_14179ca7b:
              wVar8 = sVar7 - (short)iVar18;
              if (wVar8 != L'\0') goto LAB_14179ca8a;
            }
            else {
              if (iVar18 < 0x34) {
                sVar7 = 0x74;
                goto LAB_14179ca7b;
              }
              if (iVar18 < 0x3e) {
                sVar7 = 0x6d;
                goto LAB_14179ca7b;
              }
              wVar8 = L'_';
LAB_14179ca8a:
              iVar18 = (int)pwVar13;
              iVar5 = iVar18 + -1;
              if (iVar18 < 1) {
                iVar5 = 0;
              }
              local_68 = (iVar18 < 1) + 1 + iVar18;
              if ((int)pwVar9 < (int)local_68) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70);
                pwVar9 = (wchar_t *)(ulonglong)local_64;
                pwVar11 = local_70;
              }
              pwVar13 = (wchar_t *)(ulonglong)local_68;
              pwVar11[iVar5] = wVar8;
              pwVar11[(longlong)iVar5 + 1] = L'\0';
            }
          } while (uVar17 != 0);
          pwVar9 = local_a0;
          if (((int)pwVar13 != 0) && (iVar18 = (int)pwVar13 + -1, iVar18 != 0)) {
            uVar16 = uVar15 + (uVar15 == 0) + iVar18;
            local_78 = CONCAT44(local_78._4_4_,uVar16);
            if (local_78._4_4_ < (int)uVar16) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,uVar15);
              uVar16 = (uint)local_78;
            }
            pvVar12 = (void *)((longlong)local_80 +
                              ((longlong)(int)uVar15 - (ulonglong)(uVar15 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar12,pwVar11,(longlong)iVar18 * 2);
            *(undefined2 *)((longlong)pvVar12 + (longlong)iVar18 * 2) = 0;
            pwVar9 = local_a0;
          }
        }
        if (pwVar11 != (wchar_t *)0x0) {
          FMemory::Free(pwVar11);
        }
        *pwVar10 = L'x';
      }
      pwVar10 = pwVar10 + 1;
      uVar15 = uVar16;
      uVar17 = local_a8;
    } while (pwVar10 != pwVar9);
  }
  pvVar14 = (void *)0x0;
  local_60 = (void *)0x0;
  local_54 = 0;
  pvVar12 = pvVar14;
  if ((param_4 != (short *)0x0) && (pvVar12 = (void *)0x0, *param_4 != 0)) {
    lVar19 = -1;
    do {
      lVar19 = lVar19 + 1;
    } while (param_4[lVar19] != 0);
    local_58 = (int)lVar19 + 1;
    if (0 < (int)local_58) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
    }
    uVar15 = local_58;
    pvVar12 = local_60;
    pvVar14 = (void *)(ulonglong)local_58;
    FGenericPlatformString::Memcpy(local_60,param_4);
    if ((uVar15 != 0) && (pwVar10 = local_90, uVar15 != 1)) goto LAB_14179cc5d;
  }
  pwVar10 = local_90;
  uVar15 = (uint)pvVar14;
  if ((uVar17 != 0) && ((uVar17 != 1 && (iVar18 = iswdigit(*local_90), iVar18 != 0)))) {
    lVar19 = (longlong)(int)uVar17;
    local_88 = uVar17 + 1;
    if (iStack_84 < (int)local_88) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,uVar17);
    }
    uVar17 = local_88;
    pwVar10 = local_90;
    _guard_xfg_dispatch_icall_nop(local_90 + 1,local_90,lVar19 * 2);
    *pwVar10 = L'_';
    local_a8 = uVar17;
  }
LAB_14179cc5d:
  bVar2 = true;
  bVar1 = false;
  pwVar11 = (wchar_t *)0x0;
  pwVar9 = pwVar11;
  if ((int)uVar15 < 2) {
    local_70 = (wchar_t *)0x0;
    local_68 = local_a8;
    if (local_a8 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_70,local_a8);
      pwVar9 = local_70;
      _guard_xfg_dispatch_icall_nop(local_70,pwVar10,(longlong)(int)local_a8 * 2);
      pwVar11 = (wchar_t *)(ulonglong)local_64;
      local_a8 = local_68;
    }
  }
  else {
    iVar18 = uVar17 - 1;
    if (uVar17 == 0) {
      iVar18 = 0;
    }
    if ((uVar15 != 0) || (iVar5 = 1, iVar18 == 0)) {
      iVar5 = 0;
    }
    local_a0 = (wchar_t *)0x0;
    local_98 = uVar15;
    if ((uVar15 == 0) && (iVar5 + iVar18 == 0)) {
      local_94 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a0,uVar15 + iVar5 + iVar18,0);
      pwVar9 = local_a0;
      _guard_xfg_dispatch_icall_nop(local_a0,pvVar12,(longlong)(int)uVar15 * 2);
      pwVar11 = (wchar_t *)(ulonglong)local_94;
    }
    uVar17 = local_98;
    local_a8 = local_98;
    if (iVar18 != 0) {
      lVar19 = (longlong)(int)local_98;
      local_98 = (local_98 == 0) + local_98 + iVar18;
      if ((int)pwVar11 < (int)local_98) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,uVar17);
        pwVar11 = (wchar_t *)(ulonglong)local_94;
        pwVar9 = local_a0;
      }
      local_a8 = local_98;
      _guard_xfg_dispatch_icall_nop
                (pwVar9 + (lVar19 - (ulonglong)(uVar17 != 0)),local_90,(longlong)iVar18 * 2);
      (pwVar9 + (lVar19 - (ulonglong)(uVar17 != 0)))[iVar18] = L'\0';
    }
  }
  pwVar10 = (wchar_t *)0x0;
  if ((int)local_a8 < 2) {
    local_70 = (wchar_t *)0x0;
    pwVar13 = pwVar10;
    pwVar11 = pwVar10;
    local_68 = uVar16;
    if (uVar16 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_70,uVar16,0);
      pwVar13 = local_70;
      _guard_xfg_dispatch_icall_nop(local_70,local_80,(longlong)(int)uVar16 * 2);
      pwVar11 = (wchar_t *)(ulonglong)local_64;
      uVar16 = local_68;
    }
  }
  else {
    iVar18 = uVar16 - 1;
    if (uVar16 == 0) {
      iVar18 = 0;
    }
    if ((local_a8 != 0) || (iVar5 = 1, iVar18 == 0)) {
      iVar5 = 0;
    }
    local_94 = (uint)pwVar11;
    local_a0 = pwVar9;
    local_98 = local_a8;
    if ((int)local_94 < (int)(iVar5 + local_a8 + iVar18)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a0);
      pwVar11 = (wchar_t *)(ulonglong)local_94;
    }
    uVar17 = local_98;
    pwVar13 = local_a0;
    pwVar9 = pwVar10;
    uVar16 = local_98;
    if (iVar18 != 0) {
      lVar19 = (longlong)(int)local_98;
      local_98 = local_98 + (local_98 == 0) + iVar18;
      if ((int)pwVar11 < (int)local_98) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,uVar17);
        pwVar11 = (wchar_t *)(ulonglong)local_94;
      }
      uVar16 = local_98;
      pwVar13 = local_a0;
      pwVar10 = local_a0 + (lVar19 - (ulonglong)(uVar17 != 0));
      _guard_xfg_dispatch_icall_nop(pwVar10,local_80,(longlong)iVar18 * 2);
      pwVar10[iVar18] = L'\0';
    }
  }
  iVar18 = (int)pwVar11;
  if (local_90 != (wchar_t *)0x0) {
    FMemory::Free(local_90);
  }
  local_90 = pwVar13;
  iStack_84 = iVar18;
  if (pwVar9 != (wchar_t *)0x0) {
    FMemory::Free(pwVar9);
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar20 = &DAT_143f3eda8;
  }
  else {
    puVar20 = (undefined2 *)*param_2;
  }
  pwVar10 = L"Replicate to server";
  do {
    wVar8 = *(wchar_t *)((longlong)pwVar10 + (longlong)(puVar20 + -0xa2695e04));
    if ((wVar8 == L'\0') && (*pwVar10 == L'\0')) goto LAB_14179cf1b;
    if (wVar8 != *pwVar10) {
      wVar3 = towlower(wVar8);
      wVar4 = towlower(*pwVar10);
      if (wVar3 != wVar4) {
        if (wVar3 == wVar4) {
LAB_14179cf1b:
          if (pwVar13 != L"MagicNameWorkaround") {
            local_88 = 0;
            uVar17 = 0;
            if (iVar18 != 0x14) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_90,0x14);
              pwVar13 = local_90;
              iVar18 = iStack_84;
              uVar17 = local_88;
            }
            local_88 = uVar17 + 0x14;
            if (iVar18 < (int)(uVar17 + 0x14)) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90);
              pwVar13 = local_90;
            }
            builtin_wcsncpy(pwVar13,L"MagicNameWorkaround",0x14);
            uVar16 = local_88;
          }
        }
        if (param_3 == '\0') {
          local_70 = (wchar_t *)0x0;
          local_68 = uVar16;
          if (uVar16 == 0) {
            local_64 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_70,uVar16,0);
            _guard_xfg_dispatch_icall_nop(local_70,pwVar13,(longlong)(int)uVar16 * 2);
          }
          ppwVar6 = &local_70;
          bVar2 = false;
          bVar1 = true;
        }
        else {
          local_90 = (wchar_t *)0x0;
          local_88 = uVar16;
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                    (&local_90,(0xc - (uint)(uVar16 != 0)) + uVar16,0);
          pwVar10 = local_90;
          _guard_xfg_dispatch_icall_nop(local_90,pwVar13,(longlong)(int)uVar16 * 2);
          uVar17 = local_88;
          lVar19 = (longlong)(int)local_88;
          local_88 = (0xc - (uint)(local_88 != 0)) + local_88;
          if (iStack_84 < (int)local_88) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,uVar17);
            pwVar10 = local_90;
          }
          local_90 = pwVar10;
          builtin_wcsncpy(pwVar10 + (lVar19 - (ulonglong)(uVar17 != 0)),L"_DEPRECATED",0xc);
          ppwVar6 = &local_90;
        }
        pwVar10 = *ppwVar6;
        *ppwVar6 = (wchar_t *)0x0;
        *param_1 = pwVar10;
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)(ppwVar6 + 1);
        *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)ppwVar6 + 0xc);
        ppwVar6[1] = (wchar_t *)0x0;
        if ((bVar1) && (local_70 != (wchar_t *)0x0)) {
          FMemory::Free();
        }
        if ((bVar2) && (local_90 != (wchar_t *)0x0)) {
          FMemory::Free();
        }
        if (local_60 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_80 != (void *)0x0) {
          FMemory::Free(local_80);
        }
        if (pwVar13 != (wchar_t *)0x0) {
          FMemory::Free(pwVar13);
        }
        return param_1;
      }
    }
    pwVar10 = pwVar10 + 1;
  } while( true );
}



// FUNCTION 14179d140 FUN_14179d140 body=595 status=ok
// SIG undefined FUN_14179d140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14179d140(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  BOOL BVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  int local_98;
  undefined4 local_94;
  undefined *local_90;
  undefined8 *local_88;
  undefined4 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469e9190) && (_Init_thread_header(&DAT_1469e9190), DAT_1469e9190 == -1))
  {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1464b5b88);
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1464b5b88,4000);
    _DAT_1464b5bc0 = 0;
    _DAT_1464b5bb0 = 0;
    _DAT_1464b5bb8 = 0;
    _DAT_1464b5bd8 = 0;
    _DAT_1464b5be0 = 0;
    _DAT_1464b5be8 = 0xffffffff;
    _DAT_1464b5bec = 0;
    _DAT_1464b5bf8 = 0;
    _DAT_1464b5c00 = 0;
    atexit((_func_5014 *)&LAB_143e7d620);
    _Init_thread_footer(&DAT_1469e9190);
  }
  local_80 = &local_94;
  local_78 = param_3;
  local_70 = param_2;
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464b5b88);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464b5b88);
  }
  _DAT_1464b5bb0 = param_1;
  TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
  ::FindId(&DAT_1464b5b38,&local_98,param_1);
  lVar2 = 0;
  if (local_98 != -1) {
    lVar2 = (longlong)local_98 * 0x60 + DAT_1464b5b38;
  }
  lVar3 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  if (lVar3 == 0) {
    local_30 = 0;
    local_90 = &DAT_1464b5bb0;
    local_88 = &local_68;
    local_20 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    local_60 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0xffffffff;
    local_34 = 0;
    local_28 = 0;
    FUN_1417804f0(&DAT_1464b5b38,&local_98,&local_90,0);
    local_20 = local_20 & 0xffffffff00000000;
    lVar3 = DAT_1464b5b38 + 8 + (longlong)local_98 * 0x60;
    if (local_28 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_68);
  }
  thunk_FUN_1417829c0(&local_80,lVar3);
  TSet<TTuple<UTexture2D_const_*,FTextureInstanceView::FTextureDesc>,TDefaultMapHashableKeyFuncs<UTexture2D_const_*,FTextureInstanceView::FTextureDesc,0>,FDefaultSetAllocator>
  ::operator=(&DAT_1464b5bb8,lVar3);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1464b5b88);
  return local_94;
}



// FUNCTION 14179d3a0 Z_Construct_UClass_UTextProperty body=72 status=ok
// SIG undefined Z_Construct_UClass_UTextProperty(void)

longlong Z_Construct_UClass_UTextProperty(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e9098;
  if (DAT_1469e9098 == 0) {
    Z_Construct_UClass_UProperty();
    lVar1 = UTextProperty::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e9098 = lVar1;
  return lVar1;
}



// FUNCTION 14179d3f0 execAddMulticastDelegate body=314 status=ok
// SIG undefined execAddMulticastDelegate(void)

void UObject::execAddMulticastDelegate(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int *piVar6;
  int *piVar7;
  int local_18;
  int local_14;
  longlong local_10;
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  bVar1 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar1])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  plVar3 = *(longlong **)(param_2 + 0x38);
  FWeakObjectPtr::operator=(&local_18,0);
  local_10 = 0;
  bVar1 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar1])(*(undefined8 *)(param_2 + 0x18),param_2,&local_18);
  if (plVar3 != (longlong *)0x0) {
    piVar6 = (int *)*plVar3;
    lVar4 = plVar3[1];
    for (piVar7 = piVar6; piVar7 != piVar6 + (longlong)(int)lVar4 * 4; piVar7 = piVar7 + 4) {
      if ((((*piVar7 == local_18) && (piVar7[1] == local_14)) ||
          ((cVar5 = FWeakObjectPtr::IsValid(piVar7), cVar5 == '\0' &&
           (cVar5 = FWeakObjectPtr::IsValid(&local_18), cVar5 == '\0')))) &&
         (*(longlong *)(piVar7 + 2) == local_10)) {
        if ((int)((longlong)piVar7 - (longlong)piVar6 >> 4) != -1) goto LAB_14179d50d;
        break;
      }
    }
    iVar2 = (int)plVar3[1];
    *(int *)(plVar3 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar2);
    }
    piVar6 = (int *)((longlong)iVar2 * 0x10 + *plVar3);
    *piVar6 = local_18;
    piVar6[1] = local_14;
    *(longlong *)(piVar6 + 2) = local_10;
LAB_14179d50d:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar3);
  }
  return;
}



// FUNCTION 14179d530 FUN_14179d530 body=306 status=ok
// SIG undefined FUN_14179d530(void)

void FUN_14179d530(undefined8 param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  char *pcVar7;
  int iVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  longlong *local_48;
  longlong *local_40;
  int local_38;
  
  plVar5 = *(longlong **)(param_2 + 0x20);
  plVar6 = (longlong *)*plVar5;
  *(longlong **)(param_2 + 0x20) = plVar5 + 1;
  *(longlong *)(param_2 + 0x20) = (longlong)plVar5 + 0xc;
  iVar3 = *(int *)((longlong)plVar6 + 0x34);
  local_48 = plVar6;
  local_40 = param_3;
  local_38 = iVar3;
  FUN_14178a1b0(&local_48);
  pcVar7 = *(char **)(param_2 + 0x20);
  pvVar10 = (void *)0x0;
  cVar1 = *pcVar7;
  pvVar11 = pvVar10;
  while (cVar1 != 'f') {
    iVar4 = (int)param_3[1];
    iVar8 = iVar4 + 1;
    *(int *)(param_3 + 1) = iVar8;
    if (*(int *)((longlong)param_3 + 0xc) < iVar8) {
      FScriptArray::ResizeGrow(param_3,iVar4,iVar3);
      iVar8 = (int)param_3[1];
    }
    pvVar9 = pvVar10;
    if (iVar8 != 0) {
      pvVar9 = (void *)((longlong)(iVar3 * iVar4) + *param_3);
    }
    if ((*(uint *)(plVar6 + 7) >> 9 & 1) == 0) {
      (**(code **)(*plVar6 + 0x330))(plVar6,pvVar9);
    }
    else {
      _guard_xfg_dispatch_icall_nop(pvVar9,0,(longlong)iVar3);
    }
    pvVar9 = pvVar10;
    if ((int)param_3[1] != 0) {
      pvVar9 = (void *)((longlong)(int)pvVar11 + *param_3);
    }
    bVar2 = **(byte **)(param_2 + 0x20);
    *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
    (*(code *)(&DAT_1469e7e20)[bVar2])(*(undefined8 *)(param_2 + 0x18),param_2,pvVar9);
    pcVar7 = *(char **)(param_2 + 0x20);
    pvVar11 = (void *)(ulonglong)(uint)((int)pvVar11 + iVar3);
    cVar1 = *pcVar7;
  }
  *(char **)(param_2 + 0x20) = pcVar7 + (pcVar7 != (char *)0x0);
  return;
}



// FUNCTION 14179d670 FUN_14179d670 body=1772 status=ok
// SIG undefined FUN_14179d670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14179d670(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  char *pcVar14;
  longlong *plVar15;
  short *psVar16;
  undefined1 auStack_278 [32];
  int local_258 [2];
  longlong local_250;
  ulonglong local_248;
  undefined4 *local_238;
  ulonglong *puStack_230;
  undefined8 local_228;
  longlong local_220;
  longlong local_218;
  undefined8 local_210;
  short *local_208;
  int local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  longlong *plStack_1e0;
  undefined8 local_1d8;
  longlong *plStack_1d0;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined4 local_1a0 [2];
  undefined1 local_198 [8];
  longlong *local_190;
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [16];
  undefined1 local_128 [24];
  undefined1 local_110 [24];
  undefined1 local_f8 [32];
  undefined4 local_d8 [4];
  undefined1 local_c8 [24];
  undefined1 local_b0;
  undefined4 local_a8;
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_278;
  lVar13 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  bVar4 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  local_210 = param_1;
  (*(code *)(&DAT_1469e7e20)[bVar4])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  plVar15 = *(longlong **)(param_2 + 0x38);
  lVar12 = -1;
  if (plVar15 == (longlong *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1469e9088) &&
       (_Init_thread_header(&DAT_1469e9088), DAT_1469e9088 == -1)) {
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_180,L"Attempt to assign variable through None",L"ScriptCore",
                         L"ArrayGetRefException");
      _DAT_1469e9068 = 3;
      FText::FText(&DAT_1469e9070,uVar9);
      if (local_178 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_178 + 1;
        lVar8 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_178)(local_178);
          LOCK();
          piVar1 = (int *)((longlong)local_178 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_178 + 8))(local_178,1);
          }
        }
      }
      atexit(FUN_143e7d560);
      _Init_thread_footer(&DAT_1469e9088);
    }
    FUN_14179aee0(param_1,param_2,&DAT_1469e9068);
    plVar15 = *(longlong **)(param_2 + 0x38);
  }
  lVar8 = *(longlong *)(param_2 + 0x30);
  if ((lVar8 == 0) ||
     (lVar6 = *(longlong *)(lVar8 + 0x10), lVar7 = UArrayProperty::GetPrivateStaticClass(),
     lVar6 != lVar7)) {
    lVar8 = lVar13;
  }
  bVar4 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar4])(*(undefined8 *)(param_2 + 0x18),param_2,local_258);
  if (lVar8 == 0) {
    *(undefined1 *)(param_2 + 0x90) = 1;
  }
  else {
    iVar5 = *(int *)(*(longlong *)(lVar8 + 0x70) + 0x34);
    *(longlong *)(param_2 + 0x30) = *(longlong *)(lVar8 + 0x70);
    if ((local_258[0] < 0) || ((int)plVar15[1] <= local_258[0])) {
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      local_228 = *(undefined8 *)(lVar8 + 0x18);
      local_1d8 = 0;
      plStack_1d0 = (longlong *)0x0;
      FName::ToString(&local_228,&local_208);
      local_250 = 0;
      psVar16 = &DAT_143f3eda8;
      if (local_200 != 0) {
        psVar16 = local_208;
      }
      local_248 = 0;
      if ((psVar16 != (short *)0x0) && (*psVar16 != 0)) {
        do {
          lVar12 = lVar12 + 1;
        } while (psVar16[lVar12] != 0);
        uVar11 = (int)lVar12 + 1;
        local_248 = (ulonglong)uVar11;
        if (0 < (int)uVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_250,0);
        }
        FGenericPlatformString::Memcpy(local_250,psVar16,(longlong)(int)uVar11 * 2);
      }
      local_1e8 = 0;
      plStack_1e0 = (longlong *)0x0;
      lVar12 = FText::AsNumber(local_128,(int)plVar15[1],0,&local_1d8);
      local_218 = lVar12;
      lVar13 = FText::FromString(local_110,&local_250);
      local_220 = lVar13;
      lVar8 = FText::AsNumber(local_f8,local_258[0],0,&local_1e8);
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_150,L"Attempted to access index {0} from array {1} of length {2}!",
                         L"ScriptCore",L"ArrayGetOutofBounds");
      puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_138,uVar9);
      local_d8[0] = 4;
      FText::FText(local_c8,lVar8);
      local_b0 = 1;
      local_a8 = 4;
      FText::FText(local_98,lVar13);
      local_80 = 1;
      local_78 = 4;
      FText::FText(local_68,lVar12);
      local_238 = local_d8;
      local_50 = 1;
      puStack_230 = local_48;
      local_1f8 = *puVar10;
      local_1f0 = puVar10[1];
      if (local_1f0 != 0) {
        LOCK();
        *(int *)(local_1f0 + 8) = *(int *)(local_1f0 + 8) + 1;
        UNLOCK();
      }
      uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_1c8,&local_238);
      uVar9 = FText::Format(local_168,&local_1f8,uVar9);
      FText::FText(local_1b8,uVar9);
      if (local_160 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_160 + 1;
        lVar12 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_160)(local_160);
          LOCK();
          piVar1 = (int *)((longlong)local_160 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_160 + 8))(local_160,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_1c8);
      lVar12 = 3;
      pcVar14 = &stack0xffffffffffffffe0;
      do {
        lVar12 = lVar12 + -1;
        pcVar2 = pcVar14 + -0x30;
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
          plVar15 = *(longlong **)(pcVar14 + -0x40);
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar15 + 1;
            lVar13 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15,1);
              }
            }
          }
        }
        pcVar14 = pcVar2;
      } while (lVar12 != 0);
      plVar15 = (longlong *)puVar10[1];
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar15 + 1;
        lVar12 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      plVar15 = *(longlong **)(lVar8 + 8);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar15 + 1;
        lVar12 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      plVar15 = *(longlong **)(local_220 + 8);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar15 + 1;
        lVar12 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      plVar15 = *(longlong **)(local_218 + 8);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar15 + 1;
        lVar12 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      local_1a0[0] = 3;
      FText::FText(local_198,local_1b8);
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_1b0 + 1;
        lVar12 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_1b0)(local_1b0);
          LOCK();
          piVar1 = (int *)((longlong)local_1b0 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_1b0 + 8))(local_1b0,1);
          }
        }
      }
      if (local_148 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_148 + 1;
        lVar12 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_148)(local_148);
          LOCK();
          piVar1 = (int *)((longlong)local_148 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_148 + 8))(local_148,1);
          }
        }
      }
      plVar15 = plStack_1e0;
      if (plStack_1e0 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_1e0 + 1;
        lVar12 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plStack_1e0)(plStack_1e0);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      if (local_250 != 0) {
        FMemory::Free();
      }
      if (local_208 != (short *)0x0) {
        FMemory::Free();
      }
      plVar15 = plStack_1d0;
      if (plStack_1d0 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_1d0 + 1;
        lVar12 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plStack_1d0)(plStack_1d0);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
      FUN_14179aee0(local_210,param_2,local_1a0);
      if (local_190 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_190 + 1;
        lVar12 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_190)(local_190);
          LOCK();
          piVar1 = (int *)((longlong)local_190 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_190 + 8))(local_190,1);
          }
        }
      }
    }
    else {
      lVar12 = lVar13;
      if ((int)plVar15[1] != 0) {
        lVar12 = (longlong)(iVar5 * local_258[0]) + *plVar15;
      }
      *(longlong *)(param_2 + 0x38) = lVar12;
      if (param_3 != 0) {
        if ((int)plVar15[1] != 0) {
          lVar13 = (longlong)(iVar5 * local_258[0]) + *plVar15;
        }
        (**(code **)(**(longlong **)(lVar8 + 0x70) + 0x308))
                  (*(longlong **)(lVar8 + 0x70),param_3,lVar13);
      }
    }
  }
  return;
}



// FUNCTION 14179dd60 execAssert body=195 status=ok
// SIG undefined execAssert(void)

void UObject::execAssert(undefined8 param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  int local_res10 [2];
  longlong local_18 [2];
  
  puVar5 = *(undefined2 **)(param_2 + 0x20);
  uVar3 = *puVar5;
  *(undefined2 **)(param_2 + 0x20) = puVar5 + 1;
  cVar1 = *(char *)(puVar5 + 1);
  *(byte **)(param_2 + 0x20) = (byte *)((longlong)puVar5 + 3);
  local_res10[0] = 0;
  bVar2 = *(byte *)((longlong)puVar5 + 3);
  *(undefined2 **)(param_2 + 0x20) = puVar5 + 2;
  (*(code *)(&DAT_1469e7e20)[bVar2])(*(undefined8 *)(param_2 + 0x18),param_2,local_res10);
  if (local_res10[0] == 0) {
    puVar4 = (undefined8 *)FFrame::GetStackTrace(param_2,local_18);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*puVar4;
    }
    FOutputDevice::LogfImpl(param_2,&DAT_144d2cea4,puVar5);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      FOutputDevice::LogfImpl(param_2,2,L"Assertion failed, line %i",uVar3);
    }
  }
  return;
}



// FUNCTION 14179de30 FUN_14179de30 body=513 status=ok
// SIG undefined FUN_14179de30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14179de30(undefined8 param_1,longlong param_2)

{
  short sVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  short *psVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  
  *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + 2;
  psVar5 = *(short **)(param_2 + 0x20);
  puVar9 = (undefined2 *)0x0;
  iVar10 = 0;
  local_38 = (undefined2 *)0x0;
  local_2c = 0;
  puVar12 = puVar9;
  if ((psVar5 != (short *)0x0) && (puVar12 = (undefined2 *)0x0, *psVar5 != 0)) {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (psVar5[lVar7] != 0);
    iVar6 = (int)lVar7 + 1;
    local_30 = iVar6;
    if (0 < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    iVar10 = local_30;
    puVar12 = local_38;
    FGenericPlatformString::Memcpy(local_38,psVar5,(longlong)iVar6 * 2);
  }
  psVar5 = *(short **)(param_2 + 0x20);
  sVar1 = *psVar5;
  while (sVar1 != 0) {
    psVar5 = psVar5 + 1;
    *(short **)(param_2 + 0x20) = psVar5;
    sVar1 = *psVar5;
  }
  *(short **)(param_2 + 0x20) = psVar5 + 1;
  puVar11 = &DAT_143f3eda8;
  if (iVar10 != 0) {
    puVar11 = puVar12;
  }
  DAT_1464af78c = DAT_1464af78c + 1;
  bVar3 = false;
  lVar7 = (longlong)(DAT_1464af780 + -1);
  if (-1 < DAT_1464af780 + -1) {
    lVar8 = lVar7 << 4;
    bVar3 = false;
    do {
      if (((*(int *)(lVar8 + 8 + DAT_1464af778) == 0) ||
          (plVar2 = *(longlong **)(lVar8 + DAT_1464af778), plVar2 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_1,puVar11), cVar4 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  iVar10 = DAT_1464af780;
  DAT_1464af78c = DAT_1464af78c + -1;
  if ((bVar3) && (DAT_1464af78c < 1)) {
    puVar11 = puVar9;
    if (0 < DAT_1464af780) {
      do {
        if (((*(int *)((longlong)puVar9 + DAT_1464af778 + 8) == 0) ||
            (*(longlong **)((longlong)puVar9 + DAT_1464af778) == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)((longlong)puVar9 + DAT_1464af778) + 0x10))(),
           cVar4 != '\0')) {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464af778,puVar11,1,1);
        }
        else {
          puVar11 = (undefined2 *)(ulonglong)((int)puVar11 + 1);
          puVar9 = puVar9 + 8;
        }
      } while ((int)puVar11 < DAT_1464af780);
    }
    _DAT_1464af788 = DAT_1464af780 * 2;
    if (_DAT_1464af788 < 3) {
      _DAT_1464af788 = 2;
    }
    if ((_DAT_1464af788 < iVar10) && (DAT_1464af784 != DAT_1464af780)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464af778);
    }
  }
  if (puVar12 != (undefined2 *)0x0) {
    FMemory::Free(puVar12);
    return;
  }
  return;
}



// FUNCTION 14179e040 execBindDelegate body=191 status=ok
// SIG undefined execBindDelegate(void)

void UObject::execBindDelegate(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 local_res10;
  undefined4 local_18;
  
  puVar4 = *(undefined8 **)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(puVar4 + 1);
  uVar1 = *puVar4;
  *(byte **)(param_2 + 0x20) = (byte *)((longlong)puVar4 + 0xc);
  local_18 = (undefined4)uVar1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  bVar2 = *(byte *)((longlong)puVar4 + 0xc);
  *(longlong *)(param_2 + 0x20) = (longlong)puVar4 + 0xd;
  (*(code *)(&DAT_1469e7e20)[bVar2])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  lVar5 = *(longlong *)(param_2 + 0x38);
  local_res10 = 0;
  bVar2 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar2])(*(undefined8 *)(param_2 + 0x18),param_2,&local_res10);
  if (lVar5 != 0) {
    FWeakObjectPtr::operator=(lVar5,local_res10);
    *(ulonglong *)(lVar5 + 8) = CONCAT44(uVar3,local_18);
  }
  return;
}



// FUNCTION 14179e160 FUN_14179e160 body=1280 status=ok
// SIG undefined FUN_14179e160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14179e160(undefined8 param_1,longlong param_2,void *param_3)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  bool bVar7;
  uint uVar8;
  byte *pbVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  longlong *plVar14;
  undefined1 auStack_1b8 [32];
  longlong *local_198 [2];
  undefined4 *local_188;
  ulonglong *puStack_180;
  undefined8 local_178;
  undefined8 local_170;
  longlong local_168;
  longlong local_160 [2];
  undefined1 local_150 [16];
  undefined1 local_140 [8];
  longlong *local_138;
  undefined4 local_128 [2];
  undefined1 local_120 [8];
  longlong *local_118;
  undefined4 local_108 [2];
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [8];
  longlong *local_e0;
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
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_198[0] = (longlong *)0x0;
  bVar3 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar3])(param_1,param_2,local_198);
  plVar14 = local_198[0];
  if (local_198[0] == (longlong *)0x0) {
LAB_14179e209:
    bVar7 = false;
  }
  else {
    iVar4 = *(int *)((longlong)local_198[0] + 0xc);
    if (iVar4 < (int)DAT_1469e91c4) {
      uVar13 = iVar4 >> 0x1f & 0xffff;
      uVar8 = iVar4 + uVar13;
      lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
               (longlong)(int)((uVar8 & 0xffff) - uVar13) * 0x18;
    }
    else {
      lVar10 = 0;
    }
    if ((*(uint *)(lVar10 + 8) >> 0x1d & 1) != 0) goto LAB_14179e209;
    bVar7 = true;
  }
  if (bVar7) {
    lVar10 = local_198[0][0x1f];
    if (lVar10 == 0) {
      (**(code **)(*local_198[0] + 0x368))(local_198[0]);
      lVar10 = plVar14[0x1f];
    }
    lVar5 = *(longlong *)(param_2 + 0x20);
    pbVar9 = (byte *)(lVar5 + 0xc);
    *(byte **)(param_2 + 0x20) = pbVar9;
    bVar3 = *pbVar9;
    *(longlong *)(param_2 + 0x20) = lVar5 + 0xd;
    (*(code *)(&DAT_1469e7e20)[bVar3])(lVar10,param_2,param_3);
    return;
  }
  if (*(longlong *)(param_2 + 0x30) == 0) {
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_b8,L"Accessed None reading a Class",L"ScriptCore",
                        L"AccessedNoneClassUnknownProperty");
    local_108[0] = 3;
    FText::FText(local_100,uVar11);
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_b0 + 1;
      lVar10 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
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
    FUN_14179aee0(param_1,param_2,local_108);
  }
  else {
    local_178 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x18);
    FName::ToString(&local_178,local_160);
    lVar10 = FText::FromString(local_90,local_160);
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_d0,L"Accessed None trying to read Class from property {0}",
                        L"ScriptCore",L"AccessedNoneClass");
    puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_a0,uVar11);
    local_78[0] = 4;
    FText::FText(local_68,lVar10);
    local_170 = *puVar12;
    local_188 = local_78;
    puStack_180 = local_48;
    local_168 = puVar12[1];
    local_50 = '\x01';
    if (local_168 != 0) {
      LOCK();
      *(int *)(local_168 + 8) = *(int *)(local_168 + 8) + 1;
      UNLOCK();
    }
    uVar11 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_150,&local_188);
    uVar11 = FText::Format(local_e8,&local_170,uVar11);
    FText::FText(local_140,uVar11);
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_e0 + 1;
      lVar5 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar1 = (int *)((longlong)local_e0 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_150);
    if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
      LOCK();
      plVar14 = local_60 + 1;
      lVar5 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    plVar14 = (longlong *)puVar12[1];
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar14 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    plVar14 = *(longlong **)(lVar10 + 8);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar14 + 1;
      lVar10 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    local_128[0] = 3;
    FText::FText(local_120,local_140);
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_138 + 1;
      lVar10 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar1 = (int *)((longlong)local_138 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_138 + 8))(local_138,1);
        }
      }
    }
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_c8 + 1;
      lVar10 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar1 = (int *)((longlong)local_c8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_c8 + 8))(local_c8,1);
        }
      }
    }
    if (local_160[0] != 0) {
      FMemory::Free();
    }
    FUN_14179aee0(param_1,param_2,local_128);
    local_f8 = local_118;
  }
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_f8 + 1;
    lVar10 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar1 = (int *)((longlong)local_f8 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_f8 + 8))(local_f8);
      }
    }
  }
  puVar6 = *(uint **)(param_2 + 0x20);
  uVar8 = *puVar6;
  *(uint **)(param_2 + 0x20) = puVar6 + 1;
  plVar14 = *(longlong **)(puVar6 + 1);
  *(uint **)(param_2 + 0x20) = puVar6 + 3;
  if (plVar14 != (longlong *)0x0) {
    lVar10 = UProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar14[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar14[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
        lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) goto LAB_14179e5f1;
  }
  plVar14 = (longlong *)0x0;
LAB_14179e5f1:
  *(longlong *)(param_2 + 0x20) = *(longlong *)(param_2 + 0x20) + (ulonglong)uVar8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  if ((param_3 != (void *)0x0) && (plVar14 != (longlong *)0x0)) {
    if ((plVar14[7] & 0x1000000200U) == 0x1000000200) {
      _guard_xfg_dispatch_icall_nop(param_3,0,(longlong)*(int *)((longlong)plVar14 + 0x34));
    }
    else {
      (**(code **)(*plVar14 + 800))(plVar14,param_3);
    }
  }
  return;
}



// FUNCTION 14179e660 execClearMulticastDelegate body=99 status=ok
// SIG undefined execClearMulticastDelegate(void)

void UObject::execClearMulticastDelegate(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  bVar1 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar1])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  lVar2 = *(longlong *)(param_2 + 0x38);
  if ((lVar2 != 0) && (*(undefined4 *)(lVar2 + 8) = 0, *(int *)(lVar2 + 0xc) != 0)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar2,0);
    return;
  }
  return;
}



// FUNCTION 14179e6d0 execComputedJump body=76 status=ok
// SIG undefined execComputedJump(void)

void UObject::execComputedJump(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  int local_res10 [6];
  
  local_res10[0] = 0;
  bVar1 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar1])(*(undefined8 *)(param_2 + 0x18),param_2,local_res10);
  *(longlong *)(param_2 + 0x20) =
       (longlong)local_res10[0] + *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x48);
  return;
}



// FUNCTION 14179e740 FUN_14179e740 body=527 status=ok
// SIG undefined FUN_14179e740(void)

void FUN_14179e740(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined4 local_48 [2];
  undefined1 local_40 [8];
  longlong *local_38;
  undefined4 local_28 [2];
  undefined1 local_20 [8];
  longlong *local_18;
  
  plVar3 = (longlong *)**(longlong **)(param_2 + 0x20);
  *(longlong **)(param_2 + 0x20) = *(longlong **)(param_2 + 0x20) + 1;
  *(longlong **)(param_2 + 0x30) = plVar3;
  *(undefined8 *)(param_2 + 0x38) = 0;
  lVar6 = param_1;
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    lVar6 = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    if (lVar6 == 0) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_78,L"Accessed None attempting to read a default property",
                         L"ScriptCore",L"AccessNoneDefaultObject");
      local_48[0] = 3;
      FText::FText(local_40,uVar5);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_70 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
      FUN_14179aee0(param_1,param_2,local_48);
      local_18 = local_38;
      goto LAB_14179e908;
    }
    iVar2 = *(int *)(plVar3[4] + 0x90);
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < iVar2) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)iVar2 * 8) !=
        plVar3[4] + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar6;
      if (param_3 == 0) {
        return;
      }
      (**(code **)(*plVar3 + 0x308))(plVar3,param_3);
      return;
    }
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_60,
                     L"Attempted to access a missing property on a CDO. If this is a packaged/cooked build, are you attempting to use an editor-only property?"
                     ,L"ScriptCore",L"MissingPropertyDefaultObject");
  local_28[0] = 3;
  FText::FText(local_20,uVar5);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_58 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  FUN_14179aee0(param_1,param_2,local_28);
LAB_14179e908:
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_18 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar1 = (int *)((longlong)local_18 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  return;
}



// FUNCTION 14179e950 execDynamicCast body=265 status=ok
// SIG undefined execDynamicCast(void)

void UObject::execDynamicCast(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong local_res10;
  
  plVar2 = *(longlong **)(param_2 + 0x20);
  lVar6 = *plVar2;
  *(longlong **)(param_2 + 0x20) = plVar2 + 1;
  local_res10 = 0;
  bVar1 = *(byte *)(plVar2 + 1);
  *(longlong *)(param_2 + 0x20) = (longlong)plVar2 + 9;
  (*(code *)(&DAT_1469e7e20)[bVar1])(*(undefined8 *)(param_2 + 0x18),param_2,&local_res10);
  *param_3 = 0;
  if (lVar6 != 0) {
    uVar5 = *(uint *)(lVar6 + 0xb4) >> 0xe;
    if (local_res10 == 0) {
      if ((uVar5 & 1) != 0) {
        param_3[1] = 0;
        return;
      }
    }
    else if ((uVar5 & 1) == 0) {
      if ((*(int *)(*(longlong *)(local_res10 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(local_res10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        *param_3 = local_res10;
      }
    }
    else {
      cVar4 = UClass::ImplementsInterface(*(undefined8 *)(local_res10 + 0x10),lVar6);
      if (cVar4 != '\0') {
        *param_3 = local_res10;
        if (local_res10 == 0) {
          param_3[1] = 0;
        }
        lVar6 = UObjectBaseUtility::GetInterfaceAddress(local_res10,lVar6);
        param_3[1] = lVar6;
        return;
      }
    }
  }
  return;
}



// FUNCTION 14179ea70 FUN_14179ea70 body=291 status=ok
// SIG undefined FUN_14179ea70(void)

void FUN_14179ea70(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  longlong local_28 [2];
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)UObjectBaseUtility::GetFullName(*(undefined8 *)(param_2 + 0x18),local_18,0)
  ;
  puVar2 = &DAT_143f3eda8;
  if (*(int *)(puVar1 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar1;
  }
  puVar1 = (undefined8 *)UObjectBaseUtility::GetFullName(*(undefined8 *)(param_2 + 0x10),local_28,0)
  ;
  if (*(int *)(puVar1 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar1;
  }
  LowLevelFatalErrorHandler
            ("Unknown",0x636,L"Execution beyond end of script in %s on %s",puVar4,puVar3);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  puVar1 = (undefined8 *)UObjectBaseUtility::GetFullName(*(undefined8 *)(param_2 + 0x18),local_28,0)
  ;
  if (*(int *)(puVar1 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar1;
  }
  puVar1 = (undefined8 *)UObjectBaseUtility::GetFullName(*(undefined8 *)(param_2 + 0x10),local_18,0)
  ;
  if (*(int *)(puVar1 + 1) != 0) {
    puVar2 = (undefined2 *)*puVar1;
  }
  FDebug::AssertFailed
            ((longlong)L", /* String Table ID */\n" + 0x33,"Unknown",0x636,
             L"Execution beyond end of script in %s on %s",puVar2,puVar3);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14179ebe0 execInstanceDelegate body=97 status=ok
// SIG undefined execInstanceDelegate(void)

void UObject::execInstanceDelegate(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 local_18;
  
  puVar3 = *(undefined8 **)(param_2 + 0x20);
  uVar1 = *puVar3;
  uVar2 = *(undefined4 *)(puVar3 + 1);
  *(longlong *)(param_2 + 0x20) = (longlong)puVar3 + 0xc;
  local_18 = (undefined4)uVar1;
  if (CONCAT44(uVar2,local_18) == 0) {
    param_1 = 0;
  }
  FWeakObjectPtr::operator=(param_3,param_1);
  *(longlong *)(param_3 + 8) = CONCAT44(uVar2,local_18);
  return;
}



// FUNCTION 14179ec50 FUN_14179ec50 body=972 status=ok
// SIG undefined FUN_14179ec50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14179ec50(longlong param_1,longlong param_2,longlong param_3)

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
  undefined1 auStack_168 [32];
  longlong local_148 [2];
  undefined4 *local_138;
  ulonglong *puStack_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  undefined1 local_110 [16];
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined4 local_e8 [2];
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [16];
  undefined1 local_88 [24];
  undefined4 local_70 [4];
  undefined1 local_60 [8];
  longlong *local_58;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  plVar4 = (longlong *)**(longlong **)(param_2 + 0x20);
  *(longlong **)(param_2 + 0x20) = *(longlong **)(param_2 + 0x20) + 1;
  *(longlong **)(param_2 + 0x30) = plVar4;
  if (plVar4 == (longlong *)0x0) {
    local_148[0] = 0;
    local_148[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_148,0);
    FGenericPlatformString::Memcpy(local_148[0],&DAT_143f3edc8,10);
  }
  else {
    iVar3 = *(int *)(plVar4[4] + 0x90);
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < iVar3) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)iVar3 * 8) !=
        plVar4[4] + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + param_1;
      if (param_3 == 0) {
        return;
      }
      (**(code **)(*plVar4 + 0x308))(plVar4,param_3);
      return;
    }
    local_128 = plVar4[3];
    FName::ToString(&local_128,local_148);
  }
  lVar7 = FText::FromString(local_88,local_148);
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_b0,
                     L"Attempted to access missing property \'{0}\'. If this is a packaged/cooked build, are you attempting to use an editor-only property?"
                     ,L"ScriptCore",L"MissingProperty");
  puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_98,uVar8);
  local_70[0] = 4;
  FText::FText(local_60,lVar7);
  local_120 = *puVar9;
  local_138 = local_70;
  puStack_130 = &local_40;
  local_118 = puVar9[1];
  local_48 = '\x01';
  if (local_118 != 0) {
    LOCK();
    *(int *)(local_118 + 8) = *(int *)(local_118 + 8) + 1;
    UNLOCK();
  }
  uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_110,&local_138);
  uVar8 = FText::Format(local_c8,&local_120,uVar8);
  FText::FText(local_100,uVar8);
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
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_110);
  if ((local_48 != '\0') && (local_48 = '\0', local_58 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_58 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
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
  local_e8[0] = 3;
  FText::FText(local_e0,local_100);
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_f8 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  if (local_148[0] != 0) {
    FMemory::Free();
  }
  FUN_14179aee0(param_1,param_2,local_e8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_d8 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  return;
}



// FUNCTION 14179f0a0 execInterfaceContext body=71 status=ok
// SIG undefined execInterfaceContext(void)

void UObject::execInterfaceContext(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  bVar1 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar1])(0,param_2,&local_18);
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = local_18;
  }
  return;
}



// FUNCTION 14179f0f0 execInterfaceToBool body=71 status=ok
// SIG undefined execInterfaceToBool(void)

void UObject::execInterfaceToBool(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  bVar1 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar1])(*(undefined8 *)(param_2 + 0x18),param_2,local_18);
  *(bool *)param_3 = local_18[0] != 0;
  return;
}



// FUNCTION 14179f140 execInterfaceToInterface body=236 status=ok
// SIG undefined execInterfaceToInterface(void)

void UObject::execInterfaceToInterface(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_18 [2];
  
  lVar5 = **(longlong **)(param_2 + 0x20);
  *(longlong **)(param_2 + 0x20) = *(longlong **)(param_2 + 0x20) + 1;
  if (lVar5 != 0) {
    lVar4 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14179f1a1;
  }
  lVar5 = 0;
LAB_14179f1a1:
  local_18[0] = 0;
  local_18[1] = 0;
  bVar1 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar1])(*(undefined8 *)(param_2 + 0x18),param_2,local_18);
  lVar4 = local_18[0];
  if (local_18[0] != 0) {
    cVar3 = UClass::ImplementsInterface(*(undefined8 *)(local_18[0] + 0x10),lVar5);
    if (cVar3 != '\0') {
      *param_3 = lVar4;
      lVar5 = UObjectBaseUtility::GetInterfaceAddress(lVar4,lVar5);
      param_3[1] = lVar5;
      return;
    }
  }
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



// FUNCTION 14179f230 execInterfaceToObject body=243 status=ok
// SIG undefined execInterfaceToObject(void)

void UObject::execInterfaceToObject(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_18 [2];
  
  lVar4 = **(longlong **)(param_2 + 0x20);
  *(longlong **)(param_2 + 0x20) = *(longlong **)(param_2 + 0x20) + 1;
  if (lVar4 != 0) {
    lVar3 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14179f291;
  }
  lVar4 = 0;
LAB_14179f291:
  local_18[0] = 0;
  local_18[1] = 0;
  bVar1 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar1])(*(undefined8 *)(param_2 + 0x18),param_2,local_18);
  if (local_18[0] != 0) {
    if ((*(int *)(*(longlong *)(local_18[0] + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_18[0] + 0x10) + 0x88) +
         (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *param_3 = local_18[0];
      return;
    }
  }
  *param_3 = 0;
  return;
}



// FUNCTION 14179f350 execJumpIfNot body=98 status=ok
// SIG undefined execJumpIfNot(void)

void UObject::execJumpIfNot(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  char local_res10 [24];
  
  piVar3 = *(int **)(param_2 + 0x20);
  iVar2 = *piVar3;
  *(int **)(param_2 + 0x20) = piVar3 + 1;
  local_res10[0] = '\0';
  bVar1 = *(byte *)(piVar3 + 1);
  *(longlong *)(param_2 + 0x20) = (longlong)piVar3 + 5;
  (*(code *)(&DAT_1469e7e20)[bVar1])(*(undefined8 *)(param_2 + 0x18),param_2,local_res10);
  if (local_res10[0] == '\0') {
    *(longlong *)(param_2 + 0x20) =
         (longlong)iVar2 + *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x48);
  }
  return;
}



// FUNCTION 14179f3c0 FUN_14179f3c0 body=566 status=ok
// SIG undefined FUN_14179f3c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14179f3c0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 *_Dst;
  undefined1 *puVar11;
  undefined1 auStack_498 [40];
  undefined8 local_470;
  undefined8 local_468;
  undefined8 uStack_90;
  undefined1 local_88 [32];
  undefined4 local_68 [2];
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  ulonglong local_30;
  
  puVar11 = local_88;
  local_30 = DAT_1468387a8 ^ (ulonglong)local_68;
  plVar3 = *(longlong **)(param_2 + 0x20);
  _Dst = (undefined1 *)0x0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  plVar4 = (longlong *)*plVar3;
  *(longlong **)(param_2 + 0x20) = plVar3 + 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  bVar2 = *(byte *)(plVar3 + 1);
  *(longlong *)(param_2 + 0x20) = (longlong)plVar3 + 9;
  uStack_90 = 0x14179f430;
  (*(code *)(&DAT_1469e7e20)[bVar2])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  if (*(longlong *)(param_2 + 0x38) == 0) {
    uStack_90 = 0x14179f458;
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_48,L"Attempted to assign to None",L"ScriptCore",L"LetAccessNone");
    local_68[0] = 3;
    uStack_90 = 0x14179f46b;
    FText::FText(local_60,uVar8);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        uStack_90 = 0x14179f48d;
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          uStack_90 = 0x14179f4a6;
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    uStack_90 = 0x14179f4b5;
    FUN_14179aee0(param_1,param_2,local_68);
    if (plVar4 == (longlong *)0x0) {
      puVar11 = auStack_498;
      *(undefined8 **)(param_2 + 0x38) = &local_470;
      local_470 = 0;
      local_468 = 0;
    }
    else {
      iVar10 = *(int *)((longlong)plVar4 + 0x34) * (int)plVar4[6];
      puVar11 = local_88;
      if (iVar10 != 0) {
        uVar9 = (longlong)(iVar10 + 0xf) + 0xf;
        if (uVar9 <= (ulonglong)(longlong)(iVar10 + 0xf)) {
          uVar9 = 0xffffffffffffff0;
        }
        uStack_90 = 0x14179f4e7;
        puVar11 = local_88 + -(uVar9 & 0xfffffffffffffff0);
        _Dst = local_60 + -(uVar9 & 0xfffffffffffffff0);
      }
      if ((*(uint *)(plVar4 + 7) >> 9 & 1) == 0) {
        pcVar5 = *(code **)(*plVar4 + 0x330);
        *(undefined8 *)(puVar11 + -8) = 0x14179f523;
        (*pcVar5)(plVar4,_Dst);
        *(undefined1 **)(param_2 + 0x38) = _Dst;
      }
      else {
        *(undefined8 *)(puVar11 + -8) = 0x14179f50e;
        _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar10);
        *(undefined1 **)(param_2 + 0x38) = _Dst;
      }
    }
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_58 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        pcVar5 = *(code **)*local_58;
        *(undefined8 *)(puVar11 + -8) = 0x14179f56e;
        (*pcVar5)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)local_58 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          pcVar5 = *(code **)(*local_58 + 8);
          *(undefined8 *)(puVar11 + -8) = 0x14179f586;
          (*pcVar5)(local_58,1);
        }
      }
    }
  }
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  bVar2 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  pcVar5 = (code *)(&DAT_1469e7e20)[bVar2];
  *(undefined8 *)(puVar11 + -8) = 0x14179f5a6;
  (*pcVar5)(uVar6,param_2,uVar8);
  if (((_Dst != (undefined1 *)0x0) && (plVar4 != (longlong *)0x0)) &&
     ((~(byte)((ulonglong)plVar4[7] >> 0x24) & 1) != 0)) {
    pcVar5 = *(code **)(*plVar4 + 0x328);
    *(undefined8 *)(puVar11 + -8) = 0x14179f5cd;
    (*pcVar5)(plVar4,_Dst);
  }
  *(undefined8 *)(puVar11 + -8) = 0x14179f5d9;
  return;
}



// FUNCTION 14179f600 execLetBool body=263 status=ok
// SIG undefined execLetBool(void)

void UObject::execLetBool(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  char local_res10 [8];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  bVar5 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar5])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  lVar6 = *(longlong *)(param_2 + 0x30);
  lVar1 = *(longlong *)(param_2 + 0x38);
  if ((lVar6 == 0) ||
     (lVar2 = *(longlong *)(lVar6 + 0x10), lVar3 = UBoolProperty::GetPrivateStaticClass(),
     lVar2 != lVar3)) {
    lVar6 = 0;
    lVar2 = *(longlong *)(param_2 + 0x30);
    if (((lVar2 != 0) &&
        (lVar3 = *(longlong *)(lVar2 + 0x10), lVar4 = UArrayProperty::GetPrivateStaticClass(),
        lVar3 == lVar4)) &&
       ((lVar6 = *(longlong *)(lVar2 + 0x70), lVar6 == 0 ||
        (lVar2 = *(longlong *)(lVar6 + 0x10), lVar3 = UBoolProperty::GetPrivateStaticClass(),
        lVar2 != lVar3)))) {
      lVar6 = 0;
    }
  }
  local_res10[0] = '\0';
  bVar5 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar5])(*(undefined8 *)(param_2 + 0x18),param_2,local_res10);
  if (lVar1 != 0) {
    if (local_res10[0] == '\0') {
      bVar5 = 0;
    }
    else {
      bVar5 = *(byte *)(lVar6 + 0x72);
    }
    *(byte *)((ulonglong)*(byte *)(lVar6 + 0x71) + lVar1) =
         ~*(byte *)(lVar6 + 0x73) & *(byte *)((ulonglong)*(byte *)(lVar6 + 0x71) + lVar1) | bVar5;
  }
  return;
}



// FUNCTION 14179f710 execLetDelegate body=176 status=ok
// SIG undefined execLetDelegate(void)

void UObject::execLetDelegate(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  bVar1 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar1])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  lVar2 = *(longlong *)(param_2 + 0x38);
  FWeakObjectPtr::operator=(local_18,0);
  local_10 = 0;
  bVar1 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar1])(*(undefined8 *)(param_2 + 0x18),param_2,local_18);
  uVar3 = local_10;
  if (lVar2 != 0) {
    uVar4 = FWeakObjectPtr::Get(local_18);
    FWeakObjectPtr::operator=(lVar2,uVar4);
    *(undefined8 *)(lVar2 + 8) = uVar3;
  }
  return;
}



// FUNCTION 14179f7c0 execLetMulticastDelegate body=260 status=ok
// SIG undefined execLetMulticastDelegate(void)

void UObject::execLetMulticastDelegate(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong local_18;
  ulonglong local_10;
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  bVar1 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar1])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  plVar2 = *(longlong **)(param_2 + 0x38);
  local_18 = 0;
  local_10 = 0;
  bVar1 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar1])(*(undefined8 *)(param_2 + 0x18),param_2,&local_18);
  lVar3 = local_18;
  if ((plVar2 != (longlong *)0x0) && (plVar2 != &local_18)) {
    iVar6 = (int)local_10;
    *(int *)(plVar2 + 1) = (int)local_10;
    if (((int)local_10 == 0) && (*(int *)((longlong)plVar2 + 0xc) == 0)) {
      *(undefined4 *)((longlong)plVar2 + 0xc) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar2,local_10 & 0xffffffff);
      if (iVar6 != 0) {
        puVar4 = (undefined8 *)(lVar3 + 8);
        puVar5 = (undefined4 *)*plVar2;
        do {
          *puVar5 = *(undefined4 *)(puVar4 + -1);
          puVar5[1] = *(undefined4 *)((longlong)puVar4 + -4);
          *(undefined8 *)(puVar5 + 2) = *puVar4;
          iVar6 = iVar6 + -1;
          puVar4 = puVar4 + 2;
          puVar5 = puVar5 + 4;
        } while (iVar6 != 0);
      }
    }
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14179f8d0 FUN_14179f8d0 body=536 status=ok
// SIG undefined FUN_14179f8d0(void)

void FUN_14179f8d0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 local_res10;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined4 local_40 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  bVar3 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar3])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  if (*(longlong *)(param_2 + 0x38) == 0) {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"Accessed None attempting to assign variable on an object",
                       L"ScriptCore",L"LetObjAccessNone");
    local_40[0] = 3;
    FText::FText(local_38,uVar7);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_50 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
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
    FUN_14179aee0(param_1,param_2,local_40);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_30 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  }
  plVar10 = *(longlong **)(param_2 + 0x30);
  lVar6 = *(longlong *)(param_2 + 0x38);
  if (plVar10 != (longlong *)0x0) {
    lVar8 = UObjectPropertyBase::GetPrivateStaticClass();
    if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_14179fa76;
  }
  lVar8 = *(longlong *)(param_2 + 0x30);
  plVar10 = (longlong *)0x0;
  if (lVar8 != 0) {
    lVar4 = *(longlong *)(lVar8 + 0x10);
    lVar9 = UArrayProperty::GetPrivateStaticClass();
    if (lVar4 == lVar9) {
      plVar10 = *(longlong **)(lVar8 + 0x70);
      if (plVar10 != (longlong *)0x0) {
        lVar8 = UObjectPropertyBase::GetPrivateStaticClass();
        if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
            != lVar8 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) goto LAB_14179fa76;
      }
      plVar10 = (longlong *)0x0;
    }
  }
LAB_14179fa76:
  local_res10 = 0;
  bVar3 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar3])(*(undefined8 *)(param_2 + 0x18),param_2,&local_res10);
  if (lVar6 != 0) {
    (**(code **)(*plVar10 + 0x380))(plVar10,lVar6,local_res10);
  }
  return;
}



// FUNCTION 14179faf0 FUN_14179faf0 body=122 status=ok
// SIG undefined FUN_14179faf0(void)

void FUN_14179faf0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  lVar3 = **(longlong **)(param_2 + 0x20);
  *(longlong **)(param_2 + 0x20) = *(longlong **)(param_2 + 0x20) + 1;
  *(longlong *)(param_2 + 0x30) = lVar3;
  uVar5 = UField::GetOwnerStruct(lVar3);
  plVar4 = *(longlong **)(*(longlong *)(param_2 + 0x18) + 0x10);
  lVar6 = (**(code **)(*plVar4 + 0x310))(plVar4,*(longlong *)(param_2 + 0x18),uVar5);
  iVar2 = *(int *)(lVar3 + 0x44);
  bVar1 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
                    /* WARNING: Jumptable at 0x00014179fb66 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_1469e7e20)[bVar1])(*(undefined8 *)(param_2 + 0x18),param_2,iVar2 + lVar6);
  return;
}



// FUNCTION 14179fb70 FUN_14179fb70 body=536 status=ok
// SIG undefined FUN_14179fb70(void)

void FUN_14179fb70(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 local_res10;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined4 local_40 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  bVar3 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar3])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  if (*(longlong *)(param_2 + 0x38) == 0) {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,
                       L"Accessed None attempting to assign variable on a weakly referenced object",
                       L"ScriptCore",L"LetWeakObjAccessNone");
    local_40[0] = 3;
    FText::FText(local_38,uVar7);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_50 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
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
    FUN_14179aee0(param_1,param_2,local_40);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_30 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  }
  plVar10 = *(longlong **)(param_2 + 0x30);
  lVar6 = *(longlong *)(param_2 + 0x38);
  if (plVar10 != (longlong *)0x0) {
    lVar8 = UObjectPropertyBase::GetPrivateStaticClass();
    if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_14179fd16;
  }
  lVar8 = *(longlong *)(param_2 + 0x30);
  plVar10 = (longlong *)0x0;
  if (lVar8 != 0) {
    lVar4 = *(longlong *)(lVar8 + 0x10);
    lVar9 = UArrayProperty::GetPrivateStaticClass();
    if (lVar4 == lVar9) {
      plVar10 = *(longlong **)(lVar8 + 0x70);
      if (plVar10 != (longlong *)0x0) {
        lVar8 = UObjectPropertyBase::GetPrivateStaticClass();
        if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
            != lVar8 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) goto LAB_14179fd16;
      }
      plVar10 = (longlong *)0x0;
    }
  }
LAB_14179fd16:
  local_res10 = 0;
  bVar3 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar3])(*(undefined8 *)(param_2 + 0x18),param_2,&local_res10);
  if (lVar6 != 0) {
    (**(code **)(*plVar10 + 0x380))(plVar10,lVar6,local_res10);
  }
  return;
}



// FUNCTION 14179fde0 FUN_14179fde0 body=310 status=ok
// SIG undefined FUN_14179fde0(void)

void FUN_14179fde0(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined4 local_30 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar3 = (longlong *)**(longlong **)(param_2 + 0x20);
  *(longlong **)(param_2 + 0x20) = *(longlong **)(param_2 + 0x20) + 1;
  *(longlong **)(param_2 + 0x30) = plVar3;
  if (plVar3 == (longlong *)0x0) {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_48,
                       L"Attempted to access missing local variable. If this is a packaged/cooked build, are you attempting to use an editor-only property?"
                       ,L"ScriptCore",L"MissingLocalVariable");
    local_30[0] = 3;
    FText::FText(local_28,uVar5);
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
    FUN_14179aee0(param_1,param_2,local_30);
    *(undefined8 *)(param_2 + 0x38) = 0;
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
  else {
    *(longlong *)(param_2 + 0x38) =
         (longlong)*(int *)((longlong)plVar3 + 0x44) + *(longlong *)(param_2 + 0x28);
    if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014179ff0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x308))(plVar3,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 14179ff20 FUN_14179ff20 body=844 status=ok
// SIG undefined FUN_14179ff20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14179ff20(undefined8 param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  void *_Dst;
  longlong lVar14;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  int iStack_d4;
  uint local_c8;
  uint uStack_c4;
  int iStack_c0;
  uint uStack_bc;
  uint local_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  uint local_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_50;
  uint uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  plVar5 = *(longlong **)(param_2 + 0x20);
  plVar6 = (longlong *)*plVar5;
  *(longlong **)(param_2 + 0x20) = plVar5 + 1;
  local_70 = (longlong *)plVar5[1];
  *(longlong **)(param_2 + 0x20) = plVar5 + 2;
  iVar12 = (int)plVar5[2];
  *(longlong *)(param_2 + 0x20) = (longlong)plVar5 + 0x14;
  iVar13 = *(int *)((longlong)local_70 + 0x34);
  iVar3 = *(int *)((longlong)plVar6 + 0x34);
  lVar14 = local_70[6];
  lVar8 = plVar6[6];
  local_78 = plVar6;
  local_68 = param_3;
  iVar9 = (**(code **)(*local_70 + 0x348))();
  iVar10 = (**(code **)(*plVar6 + 0x348))(plVar6);
  local_d8 = 0;
  local_a8 = iVar10 - 1U & -iVar10;
  if (iVar10 < 1) {
    iVar10 = 0;
  }
  uStack_a4 = iVar3 * (int)lVar8 + -1 + local_a8 + iVar9 & -iVar9;
  if (iVar9 <= iVar10) {
    iVar9 = iVar10;
  }
  local_c8 = iVar9 - 1U & -iVar9;
  uVar11 = ((uStack_a4 - 1) + iVar13 * (int)lVar14 + iVar9 & -iVar9) + 3 + local_c8;
  uStack_c4 = uVar11 & 0xfffffffc;
  if (iVar9 < 1) {
    iVar9 = 0;
  }
  iVar13 = 4;
  if (3 < iVar9) {
    iVar13 = iVar9;
  }
  iStack_c0 = uStack_c4 + 4;
  iVar3 = 4;
  if (3 < iVar13) {
    iVar3 = iVar13;
  }
  uStack_bc = uStack_c4 + 7 + iVar3 & -iVar3;
  uVar7 = CONCAT44(uVar11,local_c8) & 0xfffffffcffffffff;
  uStack_98 = CONCAT44(uStack_bc,iStack_c0);
  iStack_d4 = 4;
  if (3 < iVar3) {
    iStack_d4 = iVar3;
  }
  local_40 = 8;
  if (7 < (int)uStack_bc) {
    local_40 = uStack_bc;
  }
  uStack_a0._0_4_ = (undefined4)uVar7;
  uStack_a0._4_4_ = (undefined4)(uVar7 >> 0x20);
  uStack_48 = 0;
  uStack_58 = (undefined4)uStack_a0;
  uStack_54 = uStack_a0._4_4_;
  uStack_a0 = uVar7;
  local_60 = local_a8;
  uStack_5c = uStack_a4;
  local_50 = iStack_c0;
  uStack_4c = uStack_bc;
  iStack_44 = iStack_d4;
  if ((int)local_68[1] == *(int *)((longlong)local_68 + 0x34)) {
    if (iVar12 == 0) goto LAB_1417a00ac;
  }
  else {
    FUN_14176f320(&local_78,0);
  }
  FScriptSet::Empty(local_68,iVar12,&uStack_58);
LAB_1417a00ac:
  cVar1 = **(char **)(param_2 + 0x20);
  while (cVar1 != '@') {
    iVar12 = FScriptSparseArray::AddUninitialized(local_68);
    uVar11 = *(uint *)(local_70 + 7);
    uVar4 = *(uint *)(local_78 + 7);
    _Dst = (void *)((longlong)(int)(local_40 * iVar12) + *local_68);
    if ((((uVar4 >> 9 & 1) == 0) && ((uVar11 >> 9 & 1) == 0)) ||
       (_guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)(int)uStack_4c), (uVar4 >> 9 & 1) == 0)) {
      if ((*(uint *)(local_78 + 7) >> 9 & 1) == 0) {
        (**(code **)(*local_78 + 0x330))(local_78);
      }
      else {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)*(int *)((longlong)local_78 + 0x44) + (longlong)_Dst),0,
                   (longlong)(*(int *)((longlong)local_78 + 0x34) * (int)local_78[6]));
      }
    }
    if ((uVar11 >> 9 & 1) == 0) {
      if ((*(uint *)(local_70 + 7) >> 9 & 1) == 0) {
        (**(code **)(*local_70 + 0x330))
                  (local_70,(longlong)*(int *)((longlong)local_70 + 0x44) + (longlong)_Dst);
      }
      else {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)*(int *)((longlong)local_70 + 0x44) + (longlong)_Dst),0,
                   (longlong)(*(int *)((longlong)local_70 + 0x34) * (int)local_70[6]));
      }
    }
    lVar14 = 0;
    if ((int)local_68[1] != *(int *)((longlong)local_68 + 0x34)) {
      lVar14 = (longlong)(int)(local_40 * iVar12) + (longlong)(int)local_60 + *local_68;
    }
    bVar2 = **(byte **)(param_2 + 0x20);
    *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
    (*(code *)(&DAT_1469e7e20)[bVar2])(*(undefined8 *)(param_2 + 0x18),param_2,lVar14);
    lVar14 = 0;
    if ((int)local_68[1] != *(int *)((longlong)local_68 + 0x34)) {
      lVar14 = (longlong)(int)(local_40 * iVar12) + (longlong)(int)uStack_5c + *local_68;
    }
    bVar2 = **(byte **)(param_2 + 0x20);
    *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
    (*(code *)(&DAT_1469e7e20)[bVar2])(*(undefined8 *)(param_2 + 0x18),param_2,lVar14);
    cVar1 = **(char **)(param_2 + 0x20);
  }
  FScriptMapHelper::Rehash(&local_78);
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  return;
}



// FUNCTION 1417a0270 execMetaCast body=205 status=ok
// SIG undefined execMetaCast(void)

void UObject::execMetaCast(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res10;
  
  plVar2 = *(longlong **)(param_2 + 0x20);
  lVar3 = *plVar2;
  *(longlong **)(param_2 + 0x20) = plVar2 + 1;
  local_res10 = 0;
  bVar1 = *(byte *)(plVar2 + 1);
  *(longlong *)(param_2 + 0x20) = (longlong)plVar2 + 9;
  (*(code *)(&DAT_1469e7e20)[bVar1])(*(undefined8 *)(param_2 + 0x18),param_2,&local_res10);
  lVar6 = local_res10;
  if (local_res10 != 0) {
    lVar5 = FUN_14171bfe0();
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
      do {
        if (lVar6 == lVar3) {
          *param_3 = local_res10;
          return;
        }
        lVar6 = *(longlong *)(lVar6 + 0x30);
      } while (lVar6 != 0);
    }
  }
  *param_3 = 0;
  return;
}



// FUNCTION 1417a0340 execNameConst body=52 status=ok
// SIG undefined execNameConst(void)

void UObject::execNameConst(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 local_18;
  
  puVar3 = *(undefined8 **)(param_2 + 0x20);
  uVar1 = *puVar3;
  uVar2 = *(undefined4 *)(puVar3 + 1);
  *(longlong *)(param_2 + 0x20) = (longlong)puVar3 + 0xc;
  local_18 = (undefined4)uVar1;
  *param_3 = CONCAT44(uVar2,local_18);
  return;
}



// FUNCTION 1417a03a0 execObjectToBool body=71 status=ok
// SIG undefined execObjectToBool(void)

void UObject::execObjectToBool(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  longlong local_res10 [3];
  
  local_res10[0] = 0;
  bVar1 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar1])(*(undefined8 *)(param_2 + 0x18),param_2,local_res10);
  *(bool *)param_3 = local_res10[0] != 0;
  return;
}



// FUNCTION 1417a03f0 execObjectToInterface body=234 status=ok
// SIG undefined execObjectToInterface(void)

void UObject::execObjectToInterface(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res10;
  
  lVar5 = **(longlong **)(param_2 + 0x20);
  *(longlong **)(param_2 + 0x20) = *(longlong **)(param_2 + 0x20) + 1;
  if (lVar5 != 0) {
    lVar4 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1417a0459;
  }
  lVar5 = 0;
LAB_1417a0459:
  local_res10 = 0;
  bVar1 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar1])(*(undefined8 *)(param_2 + 0x18),param_2,&local_res10);
  if ((local_res10 != 0) &&
     (cVar3 = UClass::ImplementsInterface(*(undefined8 *)(local_res10 + 0x10),lVar5), cVar3 != '\0')
     ) {
    *param_3 = local_res10;
    if (local_res10 == 0) {
      param_3[1] = 0;
    }
    lVar5 = UObjectBaseUtility::GetInterfaceAddress(local_res10,lVar5);
    param_3[1] = lVar5;
    return;
  }
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



// FUNCTION 1417a0530 execPopExecutionFlowIfNot body=143 status=ok
// SIG undefined execPopExecutionFlowIfNot(void)

void UObject::execPopExecutionFlowIfNot(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  char local_res10 [24];
  
  local_res10[0] = '\0';
  bVar1 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar1])(*(undefined8 *)(param_2 + 0x18),param_2,local_res10);
  if (local_res10[0] == '\0') {
    if (*(int *)(param_2 + 0x68) != 0) {
      lVar3 = *(longlong *)(param_2 + 0x60);
      if (*(longlong *)(param_2 + 0x60) == 0) {
        lVar3 = param_2 + 0x40;
      }
      iVar2 = *(int *)(lVar3 + -4 + (longlong)*(int *)(param_2 + 0x68) * 4);
      *(int *)(param_2 + 0x68) = *(int *)(param_2 + 0x68) + -1;
      *(longlong *)(param_2 + 0x20) =
           (longlong)iVar2 + *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x48);
      return;
    }
    FOutputDevice::LogfImpl(param_2,2,L"Tried to pop from an empty flow stack");
  }
  return;
}



// FUNCTION 1417a05e0 execPushExecutionFlow body=93 status=ok
// SIG undefined execPushExecutionFlow(void)

void UObject::execPushExecutionFlow(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = **(undefined4 **)(param_2 + 0x20);
  *(undefined4 **)(param_2 + 0x20) = *(undefined4 **)(param_2 + 0x20) + 1;
  iVar2 = *(int *)(param_2 + 0x68);
  *(int *)(param_2 + 0x68) = iVar2 + 1;
  if (*(int *)(param_2 + 0x6c) < iVar2 + 1) {
    TArray<unsigned_int,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(param_2 + 0x40,iVar2);
  }
  lVar3 = *(longlong *)(param_2 + 0x60);
  if (*(longlong *)(param_2 + 0x60) == 0) {
    lVar3 = param_2 + 0x40;
  }
  *(undefined4 *)(lVar3 + (longlong)iVar2 * 4) = uVar1;
  return;
}



// FUNCTION 1417a0640 execRemoveMulticastDelegate body=340 status=ok
// SIG undefined execRemoveMulticastDelegate(void)

void UObject::execRemoveMulticastDelegate(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int local_18;
  int local_14;
  longlong local_10;
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  bVar1 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar1])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  plVar3 = *(longlong **)(param_2 + 0x38);
  FWeakObjectPtr::operator=(&local_18,0);
  local_10 = 0;
  bVar1 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar1])(*(undefined8 *)(param_2 + 0x18),param_2,&local_18);
  if (plVar3 != (longlong *)0x0) {
    piVar4 = (int *)*plVar3;
    lVar5 = plVar3[1];
    for (piVar9 = piVar4; piVar9 != piVar4 + (longlong)(int)lVar5 * 4; piVar9 = piVar9 + 4) {
      if ((((*piVar9 == local_18) && (piVar9[1] == local_14)) ||
          ((cVar6 = FWeakObjectPtr::IsValid(piVar9), cVar6 == '\0' &&
           (cVar6 = FWeakObjectPtr::IsValid(&local_18), cVar6 == '\0')))) &&
         (*(longlong *)(piVar9 + 2) == local_10)) {
        iVar8 = (int)((longlong)piVar9 - (longlong)piVar4 >> 4);
        if (iVar8 != -1) {
          iVar2 = (int)plVar3[1];
          iVar7 = (iVar2 - iVar8) + -1;
          if (0 < iVar7) {
            iVar7 = 1;
          }
          if (iVar7 != 0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar8 * 0x10 + *plVar3),
                       (void *)((longlong)(iVar2 - iVar7) * 0x10 + *plVar3),(longlong)iVar7 << 4);
            iVar2 = (int)plVar3[1];
          }
          *(int *)(plVar3 + 1) = iVar2 + -1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar3);
        }
        break;
      }
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar3);
  }
  return;
}



// FUNCTION 1417a07c0 execSelf body=250 status=ok
// SIG undefined execSelf(void)

void UObject::execSelf(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined4 local_30 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = param_1;
    return;
  }
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_48,L"Attempted to reference \'self\' as an addressable property.",
                     L"ScriptCore",L"AccessSelfAddress");
  local_30[0] = 3;
  FText::FText(local_28,uVar5);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  FUN_14179aee0(param_1,param_2,local_30);
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
  return;
}



// FUNCTION 1417a08c0 FUN_1417a08c0 body=400 status=ok
// SIG undefined FUN_1417a08c0(void)

void FUN_1417a08c0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  char *pcVar8;
  int iVar9;
  void *pvVar10;
  void *pvVar11;
  ulonglong uVar12;
  void *pvVar13;
  
  pvVar11 = (void *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  bVar1 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar1])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  plVar6 = *(longlong **)(param_2 + 0x38);
  plVar7 = *(longlong **)(*(longlong *)(param_2 + 0x30) + 0x70);
  uVar3 = *(uint *)(plVar6 + 1);
  iVar4 = *(int *)((longlong)plVar7 + 0x34);
  if (uVar3 != 0) {
    if ((((plVar7[7] & 0x1040000000U) == 0) && (uVar3 != 0)) && (0 < (int)uVar3)) {
      uVar12 = (ulonglong)uVar3;
      do {
        if ((~(byte)((ulonglong)plVar7[7] >> 0x24) & 1) != 0) {
          (**(code **)(*plVar7 + 0x328))(plVar7);
        }
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    *(undefined4 *)(plVar6 + 1) = 0;
    if (*(int *)((longlong)plVar6 + 0xc) != 0) {
      FScriptArray::ResizeTo(plVar6,0,iVar4);
    }
  }
  pcVar8 = *(char **)(param_2 + 0x20);
  cVar2 = *pcVar8;
  pvVar13 = pvVar11;
  while (cVar2 != '2') {
    iVar5 = (int)plVar6[1];
    iVar9 = iVar5 + 1;
    *(int *)(plVar6 + 1) = iVar9;
    if (*(int *)((longlong)plVar6 + 0xc) < iVar9) {
      FScriptArray::ResizeGrow(plVar6,iVar5,iVar4);
      iVar9 = (int)plVar6[1];
    }
    pvVar10 = pvVar11;
    if (iVar9 != 0) {
      pvVar10 = (void *)((longlong)(iVar4 * iVar5) + *plVar6);
    }
    if ((*(uint *)(plVar7 + 7) >> 9 & 1) == 0) {
      (**(code **)(*plVar7 + 0x330))(plVar7,pvVar10);
    }
    else {
      _guard_xfg_dispatch_icall_nop(pvVar10,0,(longlong)iVar4);
    }
    pvVar10 = pvVar11;
    if ((int)plVar6[1] != 0) {
      pvVar10 = (void *)((longlong)(int)pvVar13 + *plVar6);
    }
    bVar1 = **(byte **)(param_2 + 0x20);
    *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
    (*(code *)(&DAT_1469e7e20)[bVar1])(*(undefined8 *)(param_2 + 0x18),param_2,pvVar10);
    pcVar8 = *(char **)(param_2 + 0x20);
    pvVar13 = (void *)(ulonglong)(uint)((int)pvVar13 + iVar4);
    cVar2 = *pcVar8;
  }
  *(char **)(param_2 + 0x20) = pcVar8 + (pcVar8 != (char *)0x0);
  return;
}



// FUNCTION 1417a0a50 FUN_1417a0a50 body=544 status=ok
// SIG undefined FUN_1417a0a50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1417a0a50(undefined8 param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  void *_Dst;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  uint uStack_94;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  uint uStack_7c;
  longlong *local_68;
  longlong *local_60;
  ulonglong local_58;
  undefined8 uStack_50;
  longlong local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  plVar3 = *(longlong **)(param_2 + 0x20);
  local_98 = 0;
  uStack_94 = 4;
  local_68 = (longlong *)*plVar3;
  local_48 = 0x400000000;
  *(longlong **)(param_2 + 0x20) = plVar3 + 1;
  lVar9 = plVar3[1];
  *(longlong *)(param_2 + 0x20) = (longlong)plVar3 + 0xc;
  local_58 = 0;
  uStack_50 = 0x800000004;
  local_40 = 8;
  iVar7 = *(int *)((longlong)local_68 + 0x34);
  lVar5 = local_68[6];
  local_60 = param_3;
  uVar6 = (**(code **)(*local_68 + 0x348))();
  local_98 = 0;
  local_88 = uVar6 - 1 & -uVar6;
  if ((int)uVar6 < 1) {
    uVar6 = 0;
  }
  uVar8 = iVar7 * (int)lVar5 + 3 + local_88;
  uStack_84 = uVar8 & 0xfffffffc;
  uVar4 = 4;
  if (3 < (int)uVar6) {
    uVar4 = uVar6;
  }
  iStack_80 = uStack_84 + 4;
  uVar6 = 4;
  if (3 < (int)uVar4) {
    uVar6 = uVar4;
  }
  uStack_7c = uStack_84 + 7 + uVar6 & ~(uVar6 - 1);
  uStack_94 = 4;
  if (3 < (int)uVar6) {
    uStack_94 = uVar6;
  }
  local_48 = (ulonglong)uStack_94 << 0x20;
  local_40 = 8;
  if (7 < (int)uStack_7c) {
    local_40 = uStack_7c;
  }
  local_58 = CONCAT44(uVar8,local_88) & 0xfffffffcffffffff;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  FUN_14178a0b0(&local_68,(int)lVar9);
  cVar1 = **(char **)(param_2 + 0x20);
  while (cVar1 != '>') {
    iVar7 = FScriptSparseArray::AddUninitialized(local_60,&local_48);
    _Dst = (void *)((longlong)(int)(local_40 * iVar7) + *local_60);
    if (((ulonglong)local_68[7] >> 9 & 1) == 0) {
      if (((ulonglong)local_68[7] >> 9 & 1) == 0) {
        (**(code **)(*local_68 + 0x330))
                  (local_68,(longlong)*(int *)((longlong)local_68 + 0x44) + (longlong)_Dst);
      }
      else {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)_Dst + (longlong)*(int *)((longlong)local_68 + 0x44)),0,
                   (longlong)(*(int *)((longlong)local_68 + 0x34) * (int)local_68[6]));
      }
    }
    else {
      _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)uStack_50._4_4_);
    }
    lVar9 = 0;
    if ((int)local_60[1] != *(int *)((longlong)local_60 + 0x34)) {
      lVar9 = (longlong)(int)(local_40 * iVar7) + *local_60;
    }
    bVar2 = **(byte **)(param_2 + 0x20);
    *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
    (*(code *)(&DAT_1469e7e20)[bVar2])(*(undefined8 *)(param_2 + 0x18),param_2,lVar9);
    cVar1 = **(char **)(param_2 + 0x20);
  }
  FScriptSetHelper::Rehash(&local_68);
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  return;
}



// FUNCTION 1417a0c70 FUN_1417a0c70 body=1248 status=ok
// SIG undefined FUN_1417a0c70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1417a0c70(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  code *pcVar11;
  code *pcVar12;
  code **_Dst;
  code **_Dst_00;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_2b8 [32];
  code **local_298;
  code **local_290;
  code **local_288;
  undefined4 local_278;
  code *local_268;
  code **ppcStack_260;
  code *local_258;
  code **ppcStack_250;
  code *local_248;
  undefined1 **ppuStack_240;
  code *local_238;
  undefined1 **ppuStack_230;
  code *local_228;
  code **ppcStack_220;
  code *local_218;
  code **ppcStack_210;
  code *local_208;
  code **ppcStack_200;
  code *local_1f8;
  code **ppcStack_1f0;
  code *local_1e8;
  code **ppcStack_1e0;
  code *local_1d8;
  code **ppcStack_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  code *local_1b8;
  code *local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  code *local_178;
  undefined1 **ppuStack_170;
  undefined1 *local_168;
  undefined1 **ppuStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  code *local_128;
  code **ppcStack_120;
  code *local_118;
  code **ppcStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  bVar1 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar1])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  lVar3 = *(longlong *)(param_2 + 0x30);
  lVar4 = *(longlong *)(param_2 + 0x38);
  iVar2 = **(int **)(param_2 + 0x20);
  *(int **)(param_2 + 0x20) = *(int **)(param_2 + 0x20) + 1;
  local_1e8 = *(code **)(lVar3 + 0x70);
  uVar5 = *(undefined8 *)(lVar3 + 0x80);
  uVar6 = *(undefined8 *)(lVar3 + 0x88);
  uVar7 = *(undefined8 *)(lVar3 + 0x90);
  uVar8 = *(undefined8 *)(lVar3 + 0x98);
  local_1d8 = *(code **)(lVar3 + 0x78);
  local_278 = *(undefined4 *)(lVar3 + 0xa0);
  local_1b8 = local_1e8;
  local_1b0 = local_1d8;
  local_1a8 = lVar4;
  local_1a0 = uVar5;
  uStack_198 = uVar6;
  local_190 = uVar7;
  uStack_188 = uVar8;
  local_180 = local_278;
  if (*(int *)(lVar4 + 8) == *(int *)(lVar4 + 0x34)) {
    if (iVar2 == 0) goto LAB_1417a110d;
  }
  else {
    FUN_14176f320(&local_1b8,0);
  }
  FScriptSet::Empty(lVar4,iVar2,&uStack_198);
  if (0 < iVar2) {
    plVar13 = *(longlong **)(lVar3 + 0x70);
    iVar2 = *(int *)((longlong)plVar13 + 0x34);
    lVar9 = plVar13[6];
    local_1c8 = plVar13;
    (**(code **)(*plVar13 + 0x348))(plVar13);
    _Dst = (code **)FMemory::Malloc((longlong)(iVar2 * (int)lVar9));
    if ((*(uint *)(plVar13 + 7) >> 9 & 1) == 0) {
      (**(code **)(*plVar13 + 0x330))(plVar13,_Dst);
    }
    else {
      _guard_xfg_dispatch_icall_nop
                (_Dst,0,(longlong)(*(int *)((longlong)plVar13 + 0x34) * (int)plVar13[6]));
    }
    plVar14 = *(longlong **)(lVar3 + 0x78);
    lVar3 = plVar14[6];
    iVar2 = *(int *)((longlong)plVar14 + 0x34);
    local_1c0 = plVar14;
    (**(code **)(*plVar14 + 0x348))(plVar14);
    _Dst_00 = (code **)FMemory::Malloc((longlong)((int)lVar3 * iVar2));
    if ((*(uint *)(plVar14 + 7) >> 9 & 1) == 0) {
      (**(code **)(*plVar14 + 0x330))(plVar14,_Dst_00);
    }
    else {
      _guard_xfg_dispatch_icall_nop
                (_Dst_00,0,(longlong)((int)plVar14[6] * *(int *)((longlong)plVar14 + 0x34)));
    }
    pcVar12 = local_1d8;
    pcVar11 = local_1e8;
    uVar10 = local_278;
    if (**(char **)(param_2 + 0x20) != '<') {
      local_248 = (code *)&LAB_141784950;
      local_238 = (code *)&LAB_141784950;
      local_208 = FUN_1417849a0;
      local_1f8 = FUN_1417849a0;
      local_228 = FUN_141784a00;
      local_218 = FUN_141784930;
      local_268 = FUN_141784a20;
      local_258 = FUN_141784a70;
      ppcStack_260 = &local_178;
      ppcStack_250 = &local_128;
      ppuStack_240 = &local_248;
      ppuStack_230 = &local_238;
      ppcStack_220 = &local_228;
      ppcStack_210 = &local_218;
      ppcStack_200 = &local_258;
      ppcStack_1f0 = &local_268;
      do {
        bVar1 = **(byte **)(param_2 + 0x20);
        *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
        (*(code *)(&DAT_1469e7e20)[bVar1])(*(undefined8 *)(param_2 + 0x18),param_2,_Dst);
        bVar1 = **(byte **)(param_2 + 0x20);
        *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
        (*(code *)(&DAT_1469e7e20)[bVar1])(*(undefined8 *)(param_2 + 0x18),param_2,_Dst_00);
        local_288 = &local_1f8;
        local_248 = pcVar12;
        local_290 = &local_208;
        local_238 = pcVar11;
        local_298 = &local_1d8;
        local_258 = pcVar12;
        local_268 = pcVar11;
        local_228 = pcVar11;
        local_218 = pcVar11;
        local_178 = (code *)&LAB_141784950;
        local_168 = &LAB_141784950;
        local_138 = uVar10;
        local_1f8 = FUN_141784a20;
        local_128 = FUN_1417849a0;
        local_118 = FUN_1417849a0;
        local_e8 = uVar10;
        local_208 = FUN_141784a70;
        local_1d8 = FUN_141784a00;
        local_1e8 = FUN_141784930;
        ppcStack_260 = _Dst;
        ppcStack_250 = _Dst_00;
        ppcStack_200 = &local_128;
        ppcStack_1f0 = &local_178;
        ppcStack_1e0 = &local_218;
        ppcStack_1d0 = &local_228;
        ppuStack_170 = &local_238;
        ppuStack_160 = &local_248;
        local_158 = uVar5;
        uStack_150 = uVar6;
        local_148 = uVar7;
        uStack_140 = uVar8;
        ppcStack_120 = &local_268;
        ppcStack_110 = &local_258;
        local_108 = uVar5;
        uStack_100 = uVar6;
        local_f8 = uVar7;
        uStack_f0 = uVar8;
        FUN_141782d20(lVar4,_Dst,&uStack_198,&local_1e8);
        plVar13 = local_1c8;
        plVar14 = local_1c0;
      } while (**(char **)(param_2 + 0x20) != '<');
    }
    if ((~(byte)((ulonglong)plVar14[7] >> 0x24) & 1) != 0) {
      (**(code **)(*plVar14 + 0x328))(plVar14,_Dst_00);
    }
    FMemory::Free(_Dst_00);
    if ((~(byte)((ulonglong)plVar13[7] >> 0x24) & 1) != 0) {
      (**(code **)(*plVar13 + 0x328))(plVar13,_Dst);
    }
    FMemory::Free(_Dst);
  }
LAB_1417a110d:
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  return;
}



// FUNCTION 1417a1150 FUN_1417a1150 body=746 status=ok
// SIG undefined FUN_1417a1150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1417a1150(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  void *_Dst;
  undefined1 auStack_1a8 [32];
  code **local_188;
  code **local_180;
  code **local_178;
  code *local_168;
  undefined1 **ppuStack_160;
  code *local_158;
  code **ppcStack_150;
  code *local_148;
  code **ppcStack_140;
  code *local_138;
  undefined1 **ppuStack_130;
  code *local_128;
  undefined1 **ppuStack_120;
  code *local_118;
  code **ppcStack_110;
  code *local_108;
  code **ppcStack_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  code *local_c8;
  void *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  bVar2 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar2])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  lVar5 = *(longlong *)(param_2 + 0x30);
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  iVar3 = **(int **)(param_2 + 0x20);
  *(int **)(param_2 + 0x20) = *(int **)(param_2 + 0x20) + 1;
  uVar9 = *(undefined8 *)(lVar5 + 0x78);
  uVar10 = *(undefined8 *)(lVar5 + 0x80);
  pcVar7 = *(code **)(lVar5 + 0x70);
  uVar1 = *(undefined8 *)(lVar5 + 0x88);
  uVar4 = *(undefined4 *)(lVar5 + 0x90);
  local_f8 = pcVar7;
  local_f0 = uVar6;
  local_e8 = uVar9;
  uStack_e0 = uVar10;
  local_d8 = uVar1;
  local_d0 = uVar4;
  FUN_14178a0b0(&local_f8,iVar3);
  if (0 < iVar3) {
    plVar8 = *(longlong **)(lVar5 + 0x70);
    lVar5 = plVar8[6];
    iVar3 = *(int *)((longlong)plVar8 + 0x34);
    (**(code **)(*plVar8 + 0x348))(plVar8);
    _Dst = (void *)FMemory::Malloc((longlong)((int)lVar5 * iVar3));
    if ((*(uint *)(plVar8 + 7) >> 9 & 1) == 0) {
      (**(code **)(*plVar8 + 0x330))(plVar8,_Dst);
    }
    else {
      _guard_xfg_dispatch_icall_nop
                (_Dst,0,(longlong)((int)plVar8[6] * *(int *)((longlong)plVar8 + 0x34)));
    }
    if (**(char **)(param_2 + 0x20) != ':') {
      local_168 = (code *)&LAB_141784950;
      local_138 = FUN_1417849a0;
      local_158 = FUN_141784a00;
      local_148 = FUN_141784930;
      ppuStack_160 = &local_168;
      ppcStack_150 = &local_158;
      ppcStack_140 = &local_148;
      ppuStack_130 = &local_c8;
      do {
        bVar2 = **(byte **)(param_2 + 0x20);
        *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
        (*(code *)(&DAT_1469e7e20)[bVar2])(*(undefined8 *)(param_2 + 0x18),param_2,_Dst);
        local_178 = &local_138;
        local_180 = &local_128;
        local_138 = (code *)&LAB_141784950;
        local_188 = &local_118;
        local_128 = FUN_1417849a0;
        local_118 = FUN_141784a00;
        local_108 = FUN_141784930;
        local_168 = pcVar7;
        local_158 = pcVar7;
        local_148 = pcVar7;
        ppuStack_130 = &local_168;
        ppuStack_120 = &local_c8;
        ppcStack_110 = &local_158;
        ppcStack_100 = &local_148;
        local_c8 = pcVar7;
        local_c0 = _Dst;
        local_b8 = uVar9;
        uStack_b0 = uVar10;
        local_a8 = uVar1;
        local_a0 = uVar4;
        FUN_141782d20(uVar6,_Dst,&local_e8,&local_108);
      } while (**(char **)(param_2 + 0x20) != ':');
    }
    if ((~(byte)((ulonglong)plVar8[7] >> 0x24) & 1) != 0) {
      (**(code **)(*plVar8 + 0x328))(plVar8,_Dst);
    }
    FMemory::Free(_Dst);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  return;
}



// FUNCTION 1417a1440 execSoftObjectConst body=282 status=ok
// SIG undefined execSoftObjectConst(void)

void UObject::execSoftObjectConst(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte bVar1;
  void *_Src;
  undefined4 uVar2;
  void *pvVar3;
  longlong lVar4;
  void *local_58;
  ulonglong local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong local_30 [3];
  undefined1 local_18 [16];
  
  pvVar3 = (void *)0x0;
  local_58 = (void *)0x0;
  local_50 = 0;
  bVar1 = **(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
  (*(code *)(&DAT_1469e7e20)[bVar1])(*(undefined8 *)(param_2 + 0x18),param_2,&local_58);
  _Src = local_58;
  lVar4 = (longlong)(int)local_50;
  local_48 = (void *)0x0;
  local_40 = (int)local_50;
  uVar2 = 0;
  if ((int)local_50 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_50 & 0xffffffff,0);
    pvVar3 = local_48;
    ::_guard_xfg_dispatch_icall_nop(local_48,_Src,lVar4 * 2);
    uVar2 = local_3c;
  }
  local_38 = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_48 = pvVar3;
  local_3c = uVar2;
  FUN_1417978e0(&local_38,&local_48);
  local_30[2] = local_38;
  *param_3 = 0xffffffff;
  param_3[1] = 0;
  FString::FString(local_18,local_30);
  FSoftObjectPath::operator=(param_3 + 4,local_30 + 2);
  param_3[2] = 0;
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1417a1560 execStringConst body=299 status=ok
// SIG undefined execStringConst(void)

void UObject::execStringConst(undefined8 param_1,longlong param_2,longlong *param_3)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong local_28;
  int local_20;
  int local_1c;
  
  pcVar1 = *(char **)(param_2 + 0x20);
  lVar4 = 0;
  iVar5 = 0;
  local_28 = 0;
  local_1c = 0;
  iVar6 = iVar5;
  if ((pcVar1 != (char *)0x0) && (iVar6 = 0, *pcVar1 != '\0')) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (pcVar1[lVar4] != '\0');
    iVar3 = (int)lVar4 + 1;
    local_20 = iVar3;
    if (0 < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    iVar5 = local_1c;
    iVar6 = local_20;
    lVar4 = local_28;
    FGenericPlatformString::Convert<char,wchar_t>(local_28,iVar3,pcVar1,iVar3,0x3f);
  }
  if (param_3 == &local_28) {
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  else {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = lVar4;
    *(int *)(param_3 + 1) = iVar6;
    *(int *)((longlong)param_3 + 0xc) = iVar5;
  }
  pcVar1 = *(char **)(param_2 + 0x20);
  if (*pcVar1 == '\0') {
    *(char **)(param_2 + 0x20) = pcVar1 + 1;
    return;
  }
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
    *(char **)(param_2 + 0x20) = pcVar1;
  } while (*pcVar1 != '\0');
  *(char **)(param_2 + 0x20) = pcVar2 + 2;
  return;
}



// FUNCTION 1417a1690 FUN_1417a1690 body=254 status=ok
// SIG undefined FUN_1417a1690(void)

void FUN_1417a1690(undefined8 param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  lVar4 = **(longlong **)(param_2 + 0x20);
  *(longlong *)(param_2 + 0x20) = (longlong)*(longlong **)(param_2 + 0x20) + 0xc;
  for (lVar5 = *(longlong *)(lVar4 + 0x58); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x50)) {
    if ((((*(ulonglong *)(lVar5 + 0x38) >> 0xd & 1) == 0) &&
        ((*(ulonglong *)(lVar5 + 0x38) & 0x800000000) == 0)) &&
       (iVar6 = 0, 0 < *(int *)(lVar5 + 0x30))) {
      do {
        iVar2 = *(int *)(lVar5 + 0x34);
        iVar3 = *(int *)(lVar5 + 0x44);
        bVar1 = **(byte **)(param_2 + 0x20);
        *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
        (*(code *)(&DAT_1469e7e20)[bVar1])
                  (*(undefined8 *)(param_2 + 0x18),param_2,(longlong)iVar3 + iVar2 * iVar6 + param_3
                  );
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar5 + 0x30));
    }
  }
  if ((*(uint *)(lVar4 + 0x88) & 0x200000) != 0) {
    (**(code **)(**(longlong **)(lVar4 + 0x90) + 0x80))(*(longlong **)(lVar4 + 0x90),param_3);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  return;
}



// FUNCTION 1417a1790 FUN_1417a1790 body=883 status=ok
// SIG undefined FUN_1417a1790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1417a1790(undefined8 param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auStack_168 [32];
  undefined4 *local_148;
  ulonglong *puStack_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  longlong local_120 [2];
  undefined1 local_110 [16];
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined4 local_e8 [2];
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [16];
  undefined1 local_88 [24];
  undefined4 local_70 [4];
  undefined1 local_60 [8];
  longlong *local_58;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  plVar4 = *(longlong **)(param_2 + 0x20);
  plVar5 = (longlong *)*plVar4;
  *(longlong **)(param_2 + 0x20) = plVar4 + 1;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  bVar3 = *(byte *)(plVar4 + 1);
  *(longlong *)(param_2 + 0x20) = (longlong)plVar4 + 9;
  (*(code *)(&DAT_1469e7e20)[bVar3])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  if (*(longlong *)(param_2 + 0x30) == 0) {
    local_138 = plVar5[3];
    FName::ToString(&local_138,local_120);
    lVar7 = FText::FromString(local_88,local_120);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_b0,L"Accessed None reading structure {0}",L"ScriptCore",
                       L"AccessNoneStructure");
    puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_98,uVar8);
    local_70[0] = 4;
    FText::FText(local_60,lVar7);
    local_130 = *puVar9;
    local_148 = local_70;
    puStack_140 = &local_40;
    local_128 = puVar9[1];
    local_48 = '\x01';
    if (local_128 != 0) {
      LOCK();
      *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
      UNLOCK();
    }
    uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_110,&local_148);
    uVar8 = FText::Format(local_c8,&local_130,uVar8);
    FText::FText(local_100,uVar8);
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
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_110);
    if (local_48 != '\0') {
      local_48 = '\0';
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_58 + 1;
        lVar6 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar1 = (int *)((longlong)local_58 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_58 + 8))(local_58,1);
          }
        }
      }
    }
    plVar4 = (longlong *)puVar9[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar4)(plVar4);
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
    plVar4 = *(longlong **)(lVar7 + 8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar4)(plVar4);
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
    local_e8[0] = 3;
    FText::FText(local_e0,local_100);
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_f8 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
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
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
    }
    if (local_120[0] != 0) {
      FMemory::Free();
    }
    FUN_14179aee0(param_1,param_2,local_e8);
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_d8 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
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
  }
  else {
    *(longlong *)(param_2 + 0x38) =
         (longlong)*(int *)((longlong)plVar5 + 0x44) + *(longlong *)(param_2 + 0x38);
    *(longlong **)(param_2 + 0x30) = plVar5;
    if (param_3 != 0) {
      (**(code **)(*plVar5 + 0x308))(plVar5,param_3);
    }
  }
  return;
}



// FUNCTION 1417a1b10 FUN_1417a1b10 body=2031 status=ok
// SIG undefined FUN_1417a1b10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1417a1b10(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  ushort uVar4;
  ushort *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  byte *pbVar15;
  longlong lVar16;
  undefined8 uVar17;
  int iVar18;
  undefined1 *puVar19;
  void *_Dst;
  uint uVar20;
  void *pvVar21;
  undefined1 auStack_2b8 [32];
  uint local_298;
  int local_294;
  undefined8 local_290;
  undefined8 local_288;
  undefined4 *local_278;
  ulonglong *puStack_270;
  undefined4 *local_268;
  undefined4 *puStack_260;
  longlong local_258;
  undefined8 local_250;
  longlong local_248;
  longlong local_240 [2];
  undefined8 local_230;
  longlong local_228;
  longlong local_220 [3];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  undefined4 *local_1e8;
  ulonglong *puStack_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined4 local_198 [2];
  undefined1 local_190 [8];
  longlong *local_188;
  undefined4 local_178 [2];
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
  ulonglong local_48 [2];
  
  puVar19 = auStack_2b8;
  local_48[0] = DAT_1468387a8 ^ (ulonglong)&local_298;
  puVar5 = *(ushort **)(param_2 + 0x20);
  pvVar21 = (void *)0x0;
  uVar4 = *puVar5;
  *(ushort **)(param_2 + 0x20) = puVar5 + 1;
  local_298 = (uint)uVar4;
  local_294 = *(int *)(puVar5 + 1);
  *(ushort **)(param_2 + 0x20) = puVar5 + 3;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  uVar4 = puVar5[3];
  *(longlong *)(param_2 + 0x20) = (longlong)puVar5 + 7;
  local_290 = param_3;
  local_288 = param_1;
  (*(code *)(&DAT_1469e7e20)[(byte)uVar4])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  lVar16 = *(longlong *)(param_2 + 0x38);
  plVar6 = *(longlong **)(param_2 + 0x30);
  if (lVar16 == 0) {
    local_258 = plVar6[3];
    FName::ToString(&local_258,local_240);
    lVar11 = FText::FromString(local_d8,local_240);
    local_278 = (undefined4 *)lVar11;
    uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_140,
                        L"Switch statement failed to read property for index value for index property {0}"
                        ,L"ScriptCore",L"SwitchValueIndex");
    puVar13 = (undefined8 *)FTextFormat::FTextFormat(local_f8,uVar12);
    local_a8[0] = 4;
    FText::FText(local_98,lVar11);
    local_250 = *puVar13;
    local_268 = local_a8;
    puStack_260 = local_78;
    local_248 = puVar13[1];
    local_80 = '\x01';
    if (local_248 != 0) {
      LOCK();
      *(int *)(local_248 + 8) = *(int *)(local_248 + 8) + 1;
      UNLOCK();
    }
    local_208 = local_268;
    uStack_200 = puStack_260;
    uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_1f8,&local_208);
    uVar12 = FText::Format(local_158,&local_250,uVar12);
    FText::FText(local_1c8,uVar12);
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_150 + 1;
      lVar11 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar1 = (int *)((longlong)local_150 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*local_150 + 8))(local_150,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_1f8);
    if ((local_80 != '\0') && (local_80 = '\0', local_90 != (longlong *)0x0)) {
      LOCK();
      plVar7 = local_90 + 1;
      lVar11 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    plVar7 = (longlong *)puVar13[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    plVar7 = *(longlong **)((longlong)local_278 + 8);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    local_198[0] = 5;
    FText::FText(local_190,local_1c8);
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_1c0 + 1;
      lVar11 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_1c0)(local_1c0);
        LOCK();
        piVar1 = (int *)((longlong)local_1c0 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*local_1c0 + 8))(local_1c0,1);
        }
      }
    }
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_138 + 1;
      lVar11 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar1 = (int *)((longlong)local_138 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*local_138 + 8))(local_138,1);
        }
      }
    }
    if (local_240[0] != 0) {
      FMemory::Free();
    }
    FUN_14179aee0(local_288,param_2,local_198);
    if (local_188 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_188 + 1;
      lVar11 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_188)(local_188);
        LOCK();
        piVar1 = (int *)((longlong)local_188 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          (**(code **)(*local_188 + 8))(local_188,1);
        }
      }
    }
  }
  iVar18 = *(int *)((longlong)plVar6 + 0x34) * (int)plVar6[6];
  _Dst = pvVar21;
  if (iVar18 != 0) {
    uVar14 = (longlong)(iVar18 + 0xf) + 0xf;
    if (uVar14 <= (ulonglong)(longlong)(iVar18 + 0xf)) {
      uVar14 = 0xffffffffffffff0;
    }
    puVar19 = auStack_2b8 + -(uVar14 & 0xfffffffffffffff0);
    _Dst = (void *)((longlong)&local_290 + -(uVar14 & 0xfffffffffffffff0));
  }
  if ((*(uint *)(plVar6 + 7) >> 9 & 1) == 0) {
    pcVar8 = *(code **)(*plVar6 + 0x330);
    *(undefined8 *)(puVar19 + -8) = 0x1417a1ef7;
    (*pcVar8)(plVar6,_Dst);
  }
  else {
    *(undefined8 *)(puVar19 + -8) = 0x1417a1ee6;
    _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar18);
  }
  if (local_298 != 0) {
    pbVar15 = *(byte **)(param_2 + 0x20);
    do {
      bVar3 = *pbVar15;
      *(byte **)(param_2 + 0x20) = pbVar15 + 1;
      uVar12 = *(undefined8 *)(param_2 + 0x18);
      pcVar8 = (code *)(&DAT_1469e7e20)[bVar3];
      *(undefined8 *)(puVar19 + -8) = 0x1417a1f31;
      (*pcVar8)(uVar12,param_2,_Dst);
      iVar18 = **(int **)(param_2 + 0x20);
      *(int **)(param_2 + 0x20) = *(int **)(param_2 + 0x20) + 1;
      if (lVar16 != 0) {
        pcVar8 = *(code **)(*plVar6 + 0x2b8);
        *(undefined8 *)(puVar19 + -8) = 0x1417a1f5a;
        cVar10 = (*pcVar8)(plVar6,lVar16,_Dst,0);
        uVar12 = local_290;
        if (cVar10 != '\0') {
          bVar3 = **(byte **)(param_2 + 0x20);
          *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
          uVar17 = *(undefined8 *)(param_2 + 0x18);
          pcVar8 = (code *)(&DAT_1469e7e20)[bVar3];
          *(undefined8 *)(puVar19 + -8) = 0x1417a1fdd;
          (*pcVar8)(uVar17,param_2,uVar12);
          bVar9 = true;
          goto LAB_1417a1f7d;
        }
      }
      uVar20 = (int)pvVar21 + 1;
      pvVar21 = (void *)(ulonglong)uVar20;
      pbVar15 = (byte *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x48) + (longlong)iVar18);
      *(byte **)(param_2 + 0x20) = pbVar15;
    } while ((int)uVar20 < (int)local_298);
  }
  bVar9 = false;
  uVar12 = local_290;
LAB_1417a1f7d:
  if ((~(byte)((ulonglong)plVar6[7] >> 0x24) & 1) != 0) {
    pcVar8 = *(code **)(*plVar6 + 0x328);
    *(undefined8 *)(puVar19 + -8) = 0x1417a1f9a;
    (*pcVar8)(plVar6,_Dst);
  }
  if (bVar9) {
    *(longlong *)(param_2 + 0x20) =
         (longlong)local_294 + *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x48);
  }
  else {
    local_268 = (undefined4 *)plVar6[3];
    *(undefined8 *)(puVar19 + -8) = 0x1417a1ff7;
    FName::ToString(&local_268,local_220);
    *(undefined8 *)(puVar19 + -8) = 0x1417a2007;
    lVar16 = FText::FromString(local_c0,local_220);
    *(undefined8 *)(puVar19 + -8) = 0x1417a202b;
    uVar17 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_110,L"Switch statement failed to match case for index property {0}",
                        L"ScriptCore",L"SwitchValueOutOfBounds");
    *(undefined8 *)(puVar19 + -8) = 0x1417a203a;
    puVar13 = (undefined8 *)FTextFormat::FTextFormat(local_e8,uVar17);
    local_78[0] = 4;
    *(undefined8 *)(puVar19 + -8) = 0x1417a2056;
    FText::FText(local_68,lVar16);
    local_230 = *puVar13;
    local_278 = local_78;
    puStack_270 = local_48;
    local_228 = puVar13[1];
    local_50 = '\x01';
    if (local_228 != 0) {
      LOCK();
      *(int *)(local_228 + 8) = *(int *)(local_228 + 8) + 1;
      UNLOCK();
    }
    local_1e8 = local_278;
    puStack_1e0 = puStack_270;
    *(undefined8 *)(puVar19 + -8) = 0x1417a20aa;
    uVar17 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_1d8,&local_1e8);
    *(undefined8 *)(puVar19 + -8) = 0x1417a20bd;
    uVar17 = FText::Format(local_128,&local_230,uVar17);
    *(undefined8 *)(puVar19 + -8) = 0x1417a20cc;
    FText::FText(local_1b0,uVar17);
    if (local_120 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_120 + 1;
      lVar11 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        pcVar8 = *(code **)*local_120;
        *(undefined8 *)(puVar19 + -8) = 0x1417a20ec;
        (*pcVar8)(local_120);
        LOCK();
        piVar1 = (int *)((longlong)local_120 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          pcVar8 = *(code **)(*local_120 + 8);
          *(undefined8 *)(puVar19 + -8) = 0x1417a2106;
          (*pcVar8)(local_120,1);
        }
      }
    }
    *(undefined8 *)(puVar19 + -8) = 0x1417a2112;
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_1d8);
    if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
      LOCK();
      plVar6 = local_60 + 1;
      lVar11 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        pcVar8 = *(code **)*local_60;
        *(undefined8 *)(puVar19 + -8) = 0x1417a2142;
        (*pcVar8)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          pcVar8 = *(code **)(*local_60 + 8);
          *(undefined8 *)(puVar19 + -8) = 0x1417a215c;
          (*pcVar8)(local_60,1);
        }
      }
    }
    plVar6 = (longlong *)puVar13[1];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      lVar11 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        pcVar8 = *(code **)*plVar6;
        *(undefined8 *)(puVar19 + -8) = 0x1417a2179;
        (*pcVar8)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          pcVar8 = *(code **)(*plVar6 + 8);
          *(undefined8 *)(puVar19 + -8) = 0x1417a2193;
          (*pcVar8)(plVar6,1);
        }
      }
    }
    plVar6 = *(longlong **)(lVar16 + 8);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      lVar16 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        pcVar8 = *(code **)*plVar6;
        *(undefined8 *)(puVar19 + -8) = 0x1417a21b0;
        (*pcVar8)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          pcVar8 = *(code **)(*plVar6 + 8);
          *(undefined8 *)(puVar19 + -8) = 0x1417a21ca;
          (*pcVar8)(plVar6,1);
        }
      }
    }
    local_178[0] = 5;
    *(undefined8 *)(puVar19 + -8) = 0x1417a21e7;
    FText::FText(local_170,local_1b0);
    if (local_1a8 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_1a8 + 1;
      lVar16 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        pcVar8 = *(code **)*local_1a8;
        *(undefined8 *)(puVar19 + -8) = 0x1417a2207;
        (*pcVar8)(local_1a8);
        LOCK();
        piVar1 = (int *)((longlong)local_1a8 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          pcVar8 = *(code **)(*local_1a8 + 8);
          *(undefined8 *)(puVar19 + -8) = 0x1417a2221;
          (*pcVar8)(local_1a8,1);
        }
      }
    }
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_108 + 1;
      lVar16 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        pcVar8 = *(code **)*local_108;
        *(undefined8 *)(puVar19 + -8) = 0x1417a2241;
        (*pcVar8)(local_108);
        LOCK();
        piVar1 = (int *)((longlong)local_108 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          pcVar8 = *(code **)(*local_108 + 8);
          *(undefined8 *)(puVar19 + -8) = 0x1417a225b;
          (*pcVar8)(local_108,1);
        }
      }
    }
    if (local_220[0] != 0) {
      *(undefined8 *)(puVar19 + -8) = 0x1417a2269;
      FMemory::Free();
    }
    uVar17 = local_288;
    *(undefined8 *)(puVar19 + -8) = 0x1417a227c;
    FUN_14179aee0(uVar17,param_2,local_178);
    bVar3 = **(byte **)(param_2 + 0x20);
    *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
    uVar17 = *(undefined8 *)(param_2 + 0x18);
    pcVar8 = (code *)(&DAT_1469e7e20)[bVar3];
    *(undefined8 *)(puVar19 + -8) = 0x1417a22a1;
    (*pcVar8)(uVar17,param_2,uVar12);
    if (local_168 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_168 + 1;
      lVar16 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        pcVar8 = *(code **)*local_168;
        *(undefined8 *)(puVar19 + -8) = 0x1417a22c1;
        (*pcVar8)(local_168);
        LOCK();
        piVar1 = (int *)((longlong)local_168 + 0xc);
        iVar18 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar18 == 1) {
          pcVar8 = *(code **)(*local_168 + 8);
          *(undefined8 *)(puVar19 + -8) = 0x1417a22d6;
          (*pcVar8)(local_168,1);
        }
      }
    }
  }
  *(undefined8 *)(puVar19 + -8) = 0x1417a22e5;
  return;
}



// FUNCTION 1417a2300 FUN_1417a2300 body=1019 status=ok
// SIG undefined FUN_1417a2300(void)

void FUN_1417a2300(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  char *pcVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined1 local_res10 [8];
  undefined2 *local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined8 local_b0;
  longlong local_a8 [2];
  undefined2 *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  pcVar7 = *(char **)(param_2 + 0x20);
  cVar5 = *pcVar7;
  pbVar1 = (byte *)(pcVar7 + 1);
  *(byte **)(param_2 + 0x20) = pbVar1;
  if (cVar5 == '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146852c50) &&
       (_Init_thread_header(&DAT_146852c50), DAT_146852c50 == -1)) {
      FText::FText(&DAT_146852c38,0);
      atexit(FUN_143e3e8f0);
      _Init_thread_footer(&DAT_146852c50);
    }
    FText::operator=(param_3,&DAT_146852c38);
    return;
  }
  if (cVar5 == '\x01') {
    local_b8 = (undefined2 *)0x0;
    local_b0 = 0;
    bVar6 = *pbVar1;
    *(char **)(param_2 + 0x20) = pcVar7 + 2;
    (*(code *)(&DAT_1469e7e20)[bVar6])(*(undefined8 *)(param_2 + 0x18),param_2,&local_b8);
    local_c8 = (undefined2 *)0x0;
    local_c0 = 0;
    bVar6 = **(byte **)(param_2 + 0x20);
    *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
    (*(code *)(&DAT_1469e7e20)[bVar6])(*(undefined8 *)(param_2 + 0x18),param_2,&local_c8);
    local_d8 = (undefined2 *)0x0;
    local_d0 = 0;
    bVar6 = **(byte **)(param_2 + 0x20);
    *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
    (*(code *)(&DAT_1469e7e20)[bVar6])(*(undefined8 *)(param_2 + 0x18),param_2,&local_d8);
    puVar11 = &DAT_143f3eda8;
    if ((int)local_c0 != 0) {
      puVar11 = local_c8;
    }
    puVar13 = &DAT_143f3eda8;
    if ((int)local_d0 != 0) {
      puVar13 = local_d8;
    }
    puVar12 = &DAT_143f3eda8;
    if ((int)local_b0 != 0) {
      puVar12 = local_b8;
    }
    uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_30,puVar12,puVar13,puVar11);
    FText::operator=(param_3,uVar10);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_28 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar3 = (int *)((longlong)local_28 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
        }
      }
    }
    if (local_d8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    puVar11 = local_b8;
    if (local_c8 != (undefined2 *)0x0) {
      FMemory::Free();
      puVar11 = local_b8;
    }
  }
  else if (cVar5 == '\x02') {
    local_88 = (undefined2 *)0x0;
    local_80 = 0;
    bVar6 = *pbVar1;
    *(char **)(param_2 + 0x20) = pcVar7 + 2;
    (*(code *)(&DAT_1469e7e20)[bVar6])(*(undefined8 *)(param_2 + 0x18),param_2,local_a8 + 4);
    uVar10 = FText::AsCultureInvariant(local_48,local_a8 + 4);
    FText::operator=(param_3,uVar10);
    puVar11 = local_88;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_40 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar3 = (int *)((longlong)local_40 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        puVar11 = local_88;
        if (iVar4 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
          puVar11 = local_88;
        }
      }
    }
  }
  else if (cVar5 == '\x03') {
    local_98 = (undefined2 *)0x0;
    local_90 = 0;
    bVar6 = *pbVar1;
    *(char **)(param_2 + 0x20) = pcVar7 + 2;
    (*(code *)(&DAT_1469e7e20)[bVar6])(*(undefined8 *)(param_2 + 0x18),param_2,local_a8 + 2);
    uVar10 = FText::FromString(local_60,local_a8 + 2);
    FText::operator=(param_3,uVar10);
    puVar11 = local_98;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_58 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar3 = (int *)((longlong)local_58 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        puVar11 = local_98;
        if (iVar4 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
          puVar11 = local_98;
        }
      }
    }
  }
  else {
    if (cVar5 != '\x04') {
      return;
    }
    *(char **)(param_2 + 0x20) = pcVar7 + 9;
    local_e8 = (undefined2 *)0x0;
    local_e0 = 0;
    bVar6 = pcVar7[9];
    *(char **)(param_2 + 0x20) = pcVar7 + 10;
    (*(code *)(&DAT_1469e7e20)[bVar6])(*(undefined8 *)(param_2 + 0x18),param_2,&local_e8);
    local_a8[0] = 0;
    local_a8[1] = 0;
    bVar6 = **(byte **)(param_2 + 0x20);
    *(byte **)(param_2 + 0x20) = *(byte **)(param_2 + 0x20) + 1;
    (*(code *)(&DAT_1469e7e20)[bVar6])(*(undefined8 *)(param_2 + 0x18),param_2,local_a8);
    puVar11 = &DAT_143f3eda8;
    if ((int)local_e0 != 0) {
      puVar11 = local_e8;
    }
    puVar9 = (undefined8 *)FName::FName(local_res10,puVar11,1);
    uVar10 = FText::FromStringTable(local_78,*puVar9,local_a8,2);
    FText::operator=(param_3,uVar10);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_70 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar3 = (int *)((longlong)local_70 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    puVar11 = local_e8;
    if (local_a8[0] != 0) {
      FMemory::Free();
      puVar11 = local_e8;
    }
  }
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1417a2700 execTransformConst body=202 status=ok
// SIG undefined execTransformConst(void)

void UObject::execTransformConst(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [12];
  
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  auVar4 = *(undefined1 (*) [12])(puVar1 + 2);
  auVar7 = *(undefined1 (*) [12])((longlong)puVar1 + 0x1c);
  *(undefined8 **)(param_2 + 0x20) = puVar1 + 5;
  auVar2._12_4_ = 0;
  auVar2._0_12_ = auVar4;
  *(undefined1 (*) [16])(param_3 + 2) = auVar2;
  *param_3 = uVar5;
  param_3[1] = uVar6;
  auVar3._12_4_ = 0;
  auVar3._0_12_ = auVar7;
  *(undefined1 (*) [16])(param_3 + 4) = auVar3;
  return;
}



// FUNCTION 1417a2800 execUnicodeStringConst body=285 status=ok
// SIG undefined execUnicodeStringConst(void)

void UObject::execUnicodeStringConst(undefined8 param_1,longlong param_2,longlong *param_3)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong local_28;
  int local_20;
  int local_1c;
  
  psVar1 = *(short **)(param_2 + 0x20);
  lVar4 = 0;
  iVar5 = 0;
  local_28 = 0;
  local_1c = 0;
  iVar6 = iVar5;
  if ((psVar1 != (short *)0x0) && (iVar6 = 0, *psVar1 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (psVar1[lVar4] != 0);
    iVar3 = (int)lVar4 + 1;
    local_20 = iVar3;
    if (0 < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    iVar5 = local_1c;
    iVar6 = local_20;
    lVar4 = local_28;
    FGenericPlatformString::Memcpy(local_28,psVar1,(longlong)iVar3 * 2);
  }
  if (param_3 == &local_28) {
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  else {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = lVar4;
    *(int *)(param_3 + 1) = iVar6;
    *(int *)((longlong)param_3 + 0xc) = iVar5;
  }
  psVar1 = *(short **)(param_2 + 0x20);
  if (*psVar1 != 0) {
    do {
      psVar2 = psVar1;
      psVar1 = psVar2 + 1;
      *(short **)(param_2 + 0x20) = psVar1;
    } while (*psVar1 != 0);
    *(short **)(param_2 + 0x20) = psVar2 + 2;
    return;
  }
  *(short **)(param_2 + 0x20) = psVar1 + 1;
  return;
}



// FUNCTION 1417a2920 execVirtualFunction body=105 status=ok
// SIG undefined execVirtualFunction(void)

void UObject::execVirtualFunction(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_18;
  
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  uVar3 = *puVar2;
  uVar1 = *(undefined4 *)(puVar2 + 1);
  *(longlong *)(param_2 + 0x20) = (longlong)puVar2 + 0xc;
  local_18 = (undefined4)uVar3;
  uVar3 = FUN_14178ac60(uVar3,CONCAT44(uVar1,local_18));
  FUN_141784ac0(param_1,param_2,param_3,uVar3);
  return;
}



// FUNCTION 1417a29a0 `scalar_deleting_destructor' body=123 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FUObjectAnnotationSparse<FUniqueObjectGuid,1>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d32238;
  FUN_1417a7360();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1417a2a20 Append<UClass_*,FDefaultAllocator> body=99 status=ok
// SIG undefined Append<UClass_*,FDefaultAllocator>(void)

void TArray<UClass_*,FDefaultAllocator>::Append<UClass_*,FDefaultAllocator>
               (longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 != 0) {
    iVar2 = (int)param_1[1];
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + iVar1) {
      TArray<void_*,FDefaultAllocator>::ResizeTo();
      iVar2 = (int)param_1[1];
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*param_1 + (longlong)iVar2 * 8),(void *)*param_2,(longlong)iVar1 << 3);
    *(undefined4 *)(param_2 + 1) = 0;
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
  }
  return;
}



// FUNCTION 1417a2a90 FUN_1417a2a90 body=661 status=ok
// SIG undefined FUN_1417a2a90(void)

uint * FUN_1417a2a90(longlong *param_1,uint *param_2,ulonglong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  uint uVar11;
  ulonglong *_Src;
  uint uVar12;
  bool bVar13;
  uint local_res8 [2];
  
  iVar9 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar8 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar8 + 1)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,uVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar8 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)(*param_1 + 4 + (longlong)(int)uVar8 * 0x10);
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = uVar8;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 +
                   (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar8 & 0x1f);
  _Src = (ulonglong *)((longlong)(int)uVar8 * 0x10 + *param_1);
  uVar3 = *param_3;
  *_Src = uVar3;
  *(undefined4 *)(_Src + 1) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
              (param_1,local_res8,uVar3);
    uVar4 = local_res8[0];
    lVar7 = (longlong)(int)local_res8[0];
    bVar13 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar7 * 0x10 + *param_1),_Src,8);
      TSparseArray<TSetElement<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,uVar8,1);
      *param_2 = uVar4;
      goto LAB_1417a2cf7;
    }
  }
  if (3 < uVar12) {
    uVar4 = (uVar12 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar10 = '\0';
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar9;
    }
    uVar4 = (uVar12 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar10 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    iVar9 = (int)(*_Src >> 4);
    uVar4 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
    uVar11 = -(uVar4 + iVar9) ^ uVar4 >> 0xd;
    uVar12 = (iVar9 - uVar4) - uVar11 ^ uVar11 >> 0xc;
    uVar4 = (uVar4 - uVar12) - uVar11 ^ uVar12 << 0x10;
    uVar11 = (uVar11 - uVar4) - uVar12 ^ uVar4 >> 5;
    uVar12 = (uVar12 - uVar4) - uVar11 ^ uVar11 >> 3;
    uVar4 = (uVar4 - uVar12) - uVar11 ^ uVar12 << 10;
    uVar12 = ((uVar11 - uVar4) - uVar12 ^ uVar4 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0xc) = uVar12;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 1) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(uint *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         uVar8;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::Rehash(param_1);
  }
LAB_1417a2cf7:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1417a2d30 FUN_1417a2d30 body=697 status=ok
// SIG undefined FUN_1417a2d30(void)

uint * FUN_1417a2d30(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  void *_Dst;
  int iVar8;
  char cVar9;
  uint uVar10;
  ulonglong *_Src;
  bool bVar11;
  uint local_res8 [2];
  
  iVar8 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar7 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar7 + 1)) {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1,uVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar7 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar5 = *(int *)((longlong)(int)uVar7 * 0x60 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0x60 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = uVar7;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar4 +
                   (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar7 & 0x1f);
  _Src = (ulonglong *)((longlong)(int)uVar7 * 0x60 + *param_1);
  TKeyInitializer<UClass_*_const_&>::
  operator<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>_TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>
            (param_3,_Src);
  *(undefined4 *)(_Src + 0xb) = 0xffffffff;
  uVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (uVar7 != 1) {
    TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,*_Src);
    uVar3 = local_res8[0];
    lVar6 = (longlong)(int)local_res8[0];
    bVar11 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar11);
    if (bVar11) {
      _Dst = (void *)(lVar6 * 0x60 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x58);
      TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = uVar3;
      goto LAB_1417a2fbb;
    }
  }
  if (3 < uVar7) {
    uVar3 = (uVar7 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar5 = 0x20;
    cVar9 = '\0';
    if (uVar3 != 0) {
      iVar5 = 0x1f - iVar8;
    }
    uVar3 = (uVar7 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar3 != 0) {
      cVar9 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar7 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    iVar8 = (int)(*_Src >> 4);
    uVar3 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
    uVar10 = -(uVar3 + iVar8) ^ uVar3 >> 0xd;
    uVar7 = (iVar8 - uVar3) - uVar10 ^ uVar10 >> 0xc;
    uVar3 = (uVar3 - uVar7) - uVar10 ^ uVar7 << 0x10;
    uVar10 = (uVar10 - uVar3) - uVar7 ^ uVar3 >> 5;
    uVar7 = (uVar7 - uVar3) - uVar10 ^ uVar10 >> 3;
    uVar3 = (uVar3 - uVar7) - uVar10 ^ uVar7 << 10;
    uVar7 = ((uVar10 - uVar3) - uVar7 ^ uVar3 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x5c) = uVar7;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0xb) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(uint *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<UHoudiniAssetComponent_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UHoudiniAssetComponent_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1417a2fbb:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1417a2ff0 FUN_1417a2ff0 body=739 status=ok
// SIG undefined FUN_1417a2ff0(void)

uint * FUN_1417a2ff0(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  void *_Dst;
  int iVar9;
  char cVar10;
  uint uVar11;
  ulonglong *_Src;
  uint uVar12;
  bool bVar13;
  uint local_res8 [2];
  
  iVar9 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar8 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar8 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,uVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar8 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)((longlong)(int)uVar8 * 0x20 + 4 + *param_1);
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = uVar8;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 +
                   (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar8 & 0x1f);
  _Src = (ulonglong *)((longlong)(int)uVar8 * 0x20 + *param_1);
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  _Src[1] = 0;
  _Src[2] = 0;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    uVar4 = local_res8[0];
    lVar7 = (longlong)(int)local_res8[0];
    bVar13 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      _Dst = (void *)(lVar7 * 0x20 + *param_1);
      lVar7 = *(longlong *)((longlong)_Dst + 0x10);
      if ((lVar7 != 0) && (*(longlong *)((longlong)_Dst + 8) == 0)) {
        *(undefined4 *)(lVar7 + 0x48) = 0;
        if (*(longlong *)(lVar7 + 0x40) != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (lVar7);
        FMemory::operator_delete(lVar7,0x50);
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = uVar4;
      goto LAB_1417a32a5;
    }
  }
  if (3 < uVar12) {
    uVar4 = (uVar12 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar5 = 0x20;
    cVar10 = '\0';
    if (uVar4 != 0) {
      iVar5 = 0x1f - iVar9;
    }
    uVar4 = (uVar12 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar10 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    iVar9 = (int)(*_Src >> 4);
    uVar4 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
    uVar11 = -(iVar9 + uVar4) ^ uVar4 >> 0xd;
    uVar12 = (iVar9 - uVar4) - uVar11 ^ uVar11 >> 0xc;
    uVar4 = (uVar4 - uVar12) - uVar11 ^ uVar12 << 0x10;
    uVar11 = (uVar11 - uVar4) - uVar12 ^ uVar4 >> 5;
    uVar12 = (uVar12 - uVar4) - uVar11 ^ uVar11 >> 3;
    uVar4 = (uVar4 - uVar12) - uVar11 ^ uVar12 << 10;
    uVar12 = ((uVar11 - uVar4) - uVar12 ^ uVar4 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(uint *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         uVar8;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1417a32a5:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1417a32e0 FUN_1417a32e0 body=687 status=ok
// SIG undefined FUN_1417a32e0(void)

int * FUN_1417a32e0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *_Dst;
  char cVar8;
  uint uVar9;
  uint *puVar10;
  bool bVar11;
  
  iVar6 = 1;
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
    iVar1 = *(int *)((longlong)iVar7 * 0x20 + 4 + *param_1);
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  bVar11 = false;
  puVar10 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar10 = *puVar10 | 1 << ((byte)iVar7 & 0x1f);
  puVar10 = (uint *)((longlong)iVar7 * 0x20 + *param_1);
  *puVar10 = *(uint *)*param_3;
  puVar10[2] = 0;
  puVar10[3] = 0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[6] = 0xffffffff;
  uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar9 != 1) {
    if (uVar9 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar10) * 4);
      if (iVar5 != -1) {
        do {
          if (*(uint *)((longlong)iVar5 * 0x20 + *param_1) == *puVar10) goto LAB_1417a343b;
          iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *param_1);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_1417a343b:
    bVar11 = iVar5 != -1;
    if (bVar11) {
      _Dst = (void *)((longlong)iVar5 * 0x20 + *param_1);
      lVar2 = *(longlong *)((longlong)_Dst + 0x10);
      if ((lVar2 != 0) && (*(longlong *)((longlong)_Dst + 8) == 0)) {
        *(undefined4 *)(lVar2 + 0x48) = 0;
        if (*(longlong *)(lVar2 + 0x40) != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (lVar2);
        FMemory::operator_delete(lVar2,0x50);
      }
      _guard_xfg_dispatch_icall_nop(_Dst,puVar10,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_1417a3567;
    }
  }
  if (3 < uVar9) {
    uVar3 = (uVar9 >> 1) + 8;
    iVar6 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    iVar5 = 0x20;
    if (uVar3 != 0) {
      iVar5 = 0x1f - iVar6;
    }
    uVar3 = (uVar9 >> 1) + 7;
    iVar6 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar3 == 0) {
      cVar8 = '\0';
    }
    else {
      cVar8 = '\x1f' - (char)iVar6;
    }
    iVar6 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar8 & 0x1f);
  }
  if (((int)uVar9 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    uVar9 = (int)param_1[9] - 1U & *puVar10;
    puVar10[7] = uVar9;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    puVar10[6] = *(uint *)((longlong)plVar4 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) = iVar7
    ;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    TSet<TTuple<FDeviceId,TArray<FKey,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FDeviceId,TArray<FKey,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1417a3567:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 1417a3590 FUN_1417a3590 body=380 status=ok
// SIG undefined FUN_1417a3590(void)

int * FUN_1417a3590(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  
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
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar7 * 0x18);
  puVar3 = (undefined8 *)param_3[1];
  *puVar1 = *(uint *)*param_3;
  *(undefined8 *)(puVar1 + 2) = *puVar3;
  puVar1[4] = 0xffffffff;
  cVar4 = TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar4 == '\0') {
    uVar8 = (int)param_1[9] - 1U & *puVar1;
    puVar1[5] = uVar8;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    puVar1[4] = *(uint *)((longlong)plVar6 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  return param_2;
}



// FUNCTION 1417a3710 FUN_1417a3710 body=157 status=ok
// SIG undefined FUN_1417a3710(void)

undefined8 * FUN_1417a3710(undefined8 *param_1)

{
  DWORD DVar1;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_1440104d0;
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(param_1 + 2) = DVar1;
  *param_1 = &PTR_FUN_144d32248;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 1417a37b0 operator= body=59 status=ok
// SIG undefined operator=(void)

void FWeakObjectPtr::operator=(undefined4 *param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    *param_1 = *(undefined4 *)(param_2 + 0xc);
    uVar1 = FUN_141784380(&DAT_1469e91a0);
    param_1[1] = uVar1;
    return;
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return;
}



// FUNCTION 1417a37f0 FUN_1417a37f0 body=187 status=ok
// SIG undefined FUN_1417a37f0(void)

undefined8 * FUN_1417a37f0(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xa8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_1440104d0;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(puVar2 + 2) = DVar1;
    *puVar2 = &PTR_FUN_144d32260;
    puVar2[3] = &PTR__scalar_deleting_destructor__144d32250;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    *(undefined4 *)(puVar2 + 10) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x54) = 0;
    puVar2[0xc] = 0;
    *(undefined4 *)(puVar2 + 0xd) = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 0xe));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar2 + 0xe),4000);
    puVar2[0x13] = 0;
    *(undefined4 *)(puVar2 + 0x14) = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1417a38b0 `scalar_deleting_destructor' body=123 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FUObjectAnnotationSparse<FObjectMark,1>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d32250;
  FUN_1417a73d0();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1417a3930 FUN_1417a3930 body=149 status=ok
// SIG undefined FUN_1417a3930(void)

undefined8 * FUN_1417a3930(undefined8 *param_1,ulonglong param_2)

{
  param_1[3] = &PTR__scalar_deleting_destructor__144d32250;
  FUN_1417a73d0(param_1 + 3);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 4);
  param_1[3] = &PTR_FUN_143f47c98;
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1417a39d0 FUN_1417a39d0 body=100 status=ok
// SIG undefined FUN_1417a39d0(void)

undefined8 * FUN_1417a39d0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1417a3a40 AddAnnotation body=184 status=ok
// SIG undefined AddAnnotation(void)

void FUObjectAnnotationSparse<FObjectMark,1>::AddAnnotation
               (longlong param_1,undefined8 param_2,int param_3)

{
  BOOL BVar1;
  undefined1 local_res18 [8];
  undefined8 *local_28;
  int *local_20;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x80) = param_2;
  *(int *)(param_1 + 0x88) = param_3;
  if (param_3 == 0) {
    RemoveAnnotation(param_1,param_2);
  }
  else {
    if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x3c)) {
      FUObjectArray::AddUObjectDeleteListener(&DAT_1469e91a0,param_1);
    }
    local_28 = (undefined8 *)(param_1 + 0x80);
    local_20 = (int *)(param_1 + 0x88);
    FUN_140a9d380(param_1 + 8,local_res18,&local_28,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001417a3af1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return;
}



// FUNCTION 1417a3b00 AllocateUObjectIndexForCurrentThread body=18 status=ok
// SIG undefined AllocateUObjectIndexForCurrentThread(void)

void AllocateUObjectIndexForCurrentThread(undefined8 param_1)

{
  FUN_1417844d0(&DAT_1469e91a0,param_1,0);
  return;
}



// FUNCTION 1417a3b20 Array body=415 status=ok
// SIG undefined Array(void)

longlong *
TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array
          (longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
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
  
  *param_2 = 0;
  param_2[1] = 0;
  if (0 < (int)param_1[1] - *(int *)((longlong)param_1 + 0x34)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
  }
  iVar1 = (int)param_1[5];
  puStack_20 = (uint *)(param_1 + 2);
  local_58 = 0;
  uStack_54 = 1;
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar1 != 0) {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = puStack_20;
    }
    uVar2 = *puVar6;
    uStack_40 = 0;
    local_58 = 0;
    while (uVar2 == 0) {
      lVar4 = (longlong)local_58;
      uStack_40 = uStack_40 + 0x20;
      iVar5 = local_58 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar5;
      if (bVar3) goto LAB_1417a3bfb;
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
LAB_1417a3bfb:
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
  local_30 = param_1;
  uStack_40 = 0xffffffff;
  iStack_3c = iVar5;
  if (bVar3) {
    do {
      iVar5 = iStack_3c;
      iVar1 = (int)param_2[1];
      lVar4 = *param_1;
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) =
           *(undefined8 *)(lVar4 + (longlong)iVar5 * 0x10);
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  return param_2;
}



// FUNCTION 1417a3cd0 FUN_1417a3cd0 body=100 status=ok
// SIG undefined FUN_1417a3cd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1417a3cd0(void)

{
  BOOL BVar1;
  undefined4 uStack_c;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464b5cb8);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464b5cb8);
  }
  DAT_1464b5ce0 = 0;
  _DAT_1464b5ce8 = 0;
  uRam00000001464b5cec = 0;
  _DAT_1464b5cf0 = 0xffffffff;
  uRam00000001464b5cf4 = uStack_c;
  TSet<TTuple<UObjectBase_const_*,FUniqueObjectGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>,FDefaultSetAllocator>
  ::Empty(&DAT_1464b5c68,0);
                    /* WARNING: Could not recover jumptable at 0x0001417a3d2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1464b5cb8);
  return;
}



// FUNCTION 1417a3d40 Empty body=474 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<int,FHashBucket>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
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
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar4 = *puVar8;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar6 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar7 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar7;
      if (bVar3) goto LAB_1417a3e11;
      uVar4 = puVar8[lVar6 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_54 = (iStack_50 - iVar7) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_1417a3e11:
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
      lVar5 = (longlong)iStack_2c * 0x20 + *param_1;
      lVar6 = *(longlong *)(lVar5 + 0x10);
      if ((lVar6 != 0) && (*(longlong *)(lVar5 + 8) == 0)) {
        *(undefined4 *)(lVar6 + 0x48) = 0;
        if (*(longlong *)(lVar6 + 0x40) != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (lVar6);
        FMemory::operator_delete(lVar6,0x50);
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 1417a3f20 FUN_1417a3f20 body=1158 status=ok
// SIG undefined FUN_1417a3f20(void)

LPCRITICAL_SECTION FUN_1417a3f20(undefined8 param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  DWORD DVar5;
  BOOL BVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  LPCRITICAL_SECTION p_Var10;
  LPCRITICAL_SECTION p_Var11;
  LPCRITICAL_SECTION p_Var12;
  _LIST_ENTRY **pp_Var13;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION p_Var14;
  uint uVar15;
  uint *puVar16;
  WORD *pWVar17;
  _RTL_CRITICAL_SECTION **pp_Var18;
  uint uVar19;
  bool bVar20;
  undefined8 local_res18 [2];
  HANDLE *ppvStack_c0;
  int iStack_b4;
  LPCRITICAL_SECTION local_58;
  
  p_Var11 = (LPCRITICAL_SECTION)0x0;
  uVar15 = 0;
  cVar4 = (*(code *)PTR_CanBeUsedOnAnyThread_1464a8df0)();
  local_res18[0] = 0;
  uVar19 = 0x10000000;
  if (cVar4 == '\0') {
    uVar19 = 0x8000000;
  }
  p_Var10 = (LPCRITICAL_SECTION)FUN_1417a4e70();
  if (param_3 != 0) {
    p_Var11 = (LPCRITICAL_SECTION)FUN_1417a8150(p_Var10,param_2,param_1,param_3,0,0,0x4000,uVar19);
    return p_Var11;
  }
  cVar4 = IsGarbageCollecting();
  if (cVar4 != '\0') {
    cVar4 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar5 = GetCurrentThreadId();
      bVar20 = false;
      if (DVar5 == DAT_1468c21c0) goto LAB_1417a3fd3;
    }
    else {
LAB_1417a3fd3:
      bVar20 = true;
    }
    lpCriticalSection = p_Var11;
    if (bVar20) goto LAB_1417a3ff7;
  }
  BVar6 = TryEnterCriticalSection(p_Var10);
  lpCriticalSection = p_Var10;
  if (BVar6 == 0) {
    EnterCriticalSection(p_Var10);
  }
LAB_1417a3ff7:
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(p_Var10 + 5,local_res18,param_1);
  p_Var12 = p_Var11;
  if ((((int)local_res18[0] != -1) &&
      (pWVar17 = &(p_Var10[5].DebugInfo)->Type + (longlong)(int)local_res18[0] * 0x10,
      pWVar17 != (WORD *)0x0)) &&
     (pp_Var18 = (_RTL_CRITICAL_SECTION **)(pWVar17 + 4), pp_Var18 != (_RTL_CRITICAL_SECTION **)0x0)
     ) {
    p_Var10 = (LPCRITICAL_SECTION)((LIST_ENTRY *)(pWVar17 + 8))->Flink;
    uVar7 = 0;
    if ((p_Var10 == (LPCRITICAL_SECTION)0x0) || (*pp_Var18 != (_RTL_CRITICAL_SECTION *)0x0)) {
      ppvStack_c0 = (HANDLE *)&DAT_1464b5c20;
      iStack_b4 = 0;
      if (DAT_1464b5c38 != 0) {
        puVar16 = DAT_1464b5c30;
        if (DAT_1464b5c30 == (uint *)0x0) {
          puVar16 = (uint *)&DAT_1464b5c20;
        }
        uVar15 = *puVar16;
        p_Var14 = p_Var11;
        while (uVar15 == 0) {
          iVar9 = (int)p_Var12;
          uVar7 = (int)p_Var14 + 0x20;
          p_Var14 = (LPCRITICAL_SECTION)(ulonglong)uVar7;
          p_Var12 = (LPCRITICAL_SECTION)(ulonglong)(iVar9 + 1);
          if ((int)(DAT_1464b5c38 + -1 + (DAT_1464b5c38 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9)
          goto LAB_1417a41d0;
          uVar15 = puVar16[(longlong)iVar9 + 1];
        }
        uVar15 = uVar15 - 1 & uVar15 ^ uVar15;
        iVar9 = 0x1f;
        if (uVar15 != 0) {
          for (; uVar15 >> iVar9 == 0; iVar9 = iVar9 + -1) {
          }
        }
        if (uVar15 == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - iVar9;
        }
        iStack_b4 = (uVar7 - iVar9) + 0x1f;
        if (DAT_1464b5c38 < iStack_b4) {
LAB_1417a41d0:
          iStack_b4 = DAT_1464b5c38;
        }
      }
      local_58 = (LPCRITICAL_SECTION)&DAT_1464b5c10;
    }
    else {
      iVar9 = *(int *)&p_Var10[1].DebugInfo;
      ppvStack_c0 = &p_Var10->OwningThread;
      iStack_b4 = 0;
      local_58 = p_Var10;
      if (iVar9 != 0) {
        puVar16 = (uint *)((ulonglong)(p_Var10->SpinCount != 0) - 1 & (ulonglong)ppvStack_c0 |
                          p_Var10->SpinCount);
        uVar7 = *puVar16;
        p_Var14 = p_Var11;
        while (uVar7 == 0) {
          iVar8 = (int)p_Var12;
          uVar15 = (int)p_Var14 + 0x20;
          p_Var14 = (LPCRITICAL_SECTION)(ulonglong)uVar15;
          p_Var12 = (LPCRITICAL_SECTION)(ulonglong)(iVar8 + 1);
          if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_1417a4102;
          uVar7 = puVar16[(longlong)iVar8 + 1];
        }
        uVar7 = uVar7 - 1 & uVar7 ^ uVar7;
        iVar8 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        if (uVar7 == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - iVar8;
        }
        iStack_b4 = (uVar15 - iVar8) + 0x1f;
        if (iVar9 < iStack_b4) {
LAB_1417a4102:
          iStack_b4 = iVar9;
        }
      }
    }
    if ((p_Var10 == (LPCRITICAL_SECTION)0x0) ||
       (p_Var12 = p_Var10, *pp_Var18 != (_RTL_CRITICAL_SECTION *)0x0)) {
      p_Var12 = p_Var11;
    }
    bVar20 = p_Var12 == (LPCRITICAL_SECTION)0x0;
    if ((*pp_Var18 == (_RTL_CRITICAL_SECTION *)0x0) && (p_Var10 == (LPCRITICAL_SECTION)0x0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    bVar3 = false;
    while( true ) {
      if (bVar20) {
        bVar1 = !bVar2;
      }
      else {
        bVar1 = iStack_b4 < *(int *)(ppvStack_c0 + 3);
      }
      p_Var12 = (LPCRITICAL_SECTION)0x0;
      if (!bVar1) break;
      if (bVar20) {
        pp_Var13 = (_LIST_ENTRY **)((ulonglong)(-(uint)bVar3 & 8) + (longlong)pp_Var18);
      }
      else {
        pp_Var13 = (_LIST_ENTRY **)
                   ((longlong)&local_58->DebugInfo->Type + (longlong)iStack_b4 * 2 * 8);
      }
      p_Var12 = (LPCRITICAL_SECTION)*pp_Var13;
      iVar9 = p_Var12->RecursionCount;
      p_Var10 = p_Var11;
      if (iVar9 < (int)DAT_1469e91c4) {
        uVar7 = iVar9 >> 0x1f & 0xffff;
        uVar15 = iVar9 + uVar7;
        p_Var10 = (LPCRITICAL_SECTION)
                  (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar15 >> 0x10) * 8) +
                  (longlong)(int)((uVar15 & 0xffff) - uVar7) * 0x18);
      }
      if ((p_Var10->LockCount & uVar19) == 0) {
        if (param_2 == 0) break;
        if ((*(int *)((longlong)p_Var12->OwningThread + 0x90) < *(int *)(param_2 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)((longlong)p_Var12->OwningThread + 0x88) +
             (longlong)*(int *)(param_2 + 0x90) * 8) != param_2 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) break;
      }
      if (bVar20) {
        if ((bVar3) || (((LIST_ENTRY *)(pWVar17 + 8))->Flink == (_LIST_ENTRY *)0x0)) {
          bVar2 = true;
          bVar3 = true;
        }
        else {
          bVar2 = false;
          bVar3 = true;
        }
      }
      else {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
      }
    }
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return p_Var12;
}



// FUNCTION 1417a43b0 FUN_1417a43b0 body=1143 status=ok
// SIG undefined FUN_1417a43b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1417a43b0(PRTL_CRITICAL_SECTION_DEBUG param_1,undefined8 *param_2,char param_3,uint param_4
                  ,uint param_5)

{
  char cVar1;
  DWORD DVar2;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  PRTL_CRITICAL_SECTION_DEBUG p_Var6;
  PRTL_CRITICAL_SECTION_DEBUG p_Var7;
  uint uVar8;
  LPCRITICAL_SECTION lpCriticalSection_00;
  PRTL_CRITICAL_SECTION_DEBUG p_Var9;
  uint *puVar10;
  LIST_ENTRY *pLVar11;
  uint uVar12;
  PRTL_CRITICAL_SECTION_DEBUG p_Var13;
  undefined1 auStack_168 [32];
  uint local_148;
  uint uStack_144;
  LIST_ENTRY *pLStack_140;
  undefined4 local_138;
  DWORD DStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  int local_128 [2];
  PRTL_CRITICAL_SECTION_DEBUG local_120;
  PRTL_CRITICAL_SECTION_DEBUG local_118;
  undefined8 uStack_110;
  LIST_ENTRY *pLStack_108;
  uint uStack_100;
  DWORD DStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  PRTL_CRITICAL_SECTION_DEBUG local_f0;
  undefined8 uStack_e8;
  LIST_ENTRY *local_e0;
  uint uStack_d8;
  DWORD DStack_d4;
  uint local_d0;
  undefined4 uStack_cc;
  PRTL_CRITICAL_SECTION_DEBUG local_c8;
  undefined8 uStack_c0;
  LIST_ENTRY *pLStack_b8;
  undefined4 uStack_b0;
  DWORD DStack_ac;
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_98 [32];
  uint *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  uVar12 = param_5 | 0x10000000;
  local_120 = param_1;
  cVar1 = (*(code *)PTR_CanBeUsedOnAnyThread_1464a8df0)();
  if (cVar1 == '\0') {
    uVar12 = param_5 | 0x18000000;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_1417a4e70();
  cVar1 = IsGarbageCollecting();
  if ((cVar1 == '\0') ||
     (((cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0' && (DAT_1468c21ae != '\0')) &&
      (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)))) {
    BVar3 = TryEnterCriticalSection(lpCriticalSection);
    lpCriticalSection_00 = lpCriticalSection;
    if (BVar3 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
  }
  else {
    lpCriticalSection_00 = (LPCRITICAL_SECTION)0x0;
  }
  local_98._0_2_ = 0;
  local_98._2_2_ = 0;
  local_98._4_4_ = 0;
  local_98._8_8_ = (_RTL_CRITICAL_SECTION *)0x0;
  local_78 = (uint *)0x0;
  local_70._0_4_ = 0;
  local_70._4_2_ = 0;
  local_70._6_2_ = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_1417a2a90(local_98,local_128,&local_120,0);
  if (param_3 != '\0') {
    RecursivelyPopulateDerivedClasses(lpCriticalSection,param_1,local_98);
  }
  pLStack_140 = (LIST_ENTRY *)(local_98 + 0x10);
  p_Var13 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  uStack_144 = 1;
  local_148 = 0;
  DStack_134 = 0;
  uStack_130 = 0;
  if ((DWORD)local_70 != 0) {
    puVar10 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar10 = local_78;
    }
    uVar5 = *puVar10;
    p_Var6 = p_Var13;
    p_Var7 = p_Var13;
    while (uVar5 == 0) {
      iVar4 = (int)p_Var6;
      uStack_130 = (int)p_Var7 + 0x20;
      p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)(ulonglong)uStack_130;
      local_148 = iVar4 + 1;
      p_Var6 = (PRTL_CRITICAL_SECTION_DEBUG)(ulonglong)local_148;
      if ((int)(((DWORD)local_70 - 1) + ((int)((DWORD)local_70 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
      {
        DStack_134 = (DWORD)local_70;
        goto LAB_1417a457d;
      }
      uVar5 = puVar10[(longlong)iVar4 + 1];
    }
    uStack_144 = -uVar5 & uVar5;
    iVar4 = 0x1f;
    if (uStack_144 != 0) {
      for (; uStack_144 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_144 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    DStack_134 = (uStack_130 - iVar4) + 0x1f;
    if ((int)(DWORD)local_70 < (int)DStack_134) {
      DStack_134 = (DWORD)local_70;
    }
  }
LAB_1417a457d:
  local_138 = 0xffffffff;
  local_118 = (PRTL_CRITICAL_SECTION_DEBUG)local_98;
  uStack_110 = CONCAT44(uStack_144,local_148);
  uStack_100 = 0xffffffff;
  uVar5 = uStack_100;
  uStack_100 = 0xffffffff;
  DStack_fc = DStack_134;
  uStack_f8 = uStack_130;
  uStack_f4 = uStack_12c;
  local_d0 = uStack_130;
  uStack_cc = uStack_12c;
  uStack_d8 = 0xffffffff;
  DStack_d4 = DStack_134;
  pLStack_108 = pLStack_140;
  local_f0 = local_118;
  uStack_e8 = uStack_110;
  local_e0 = pLStack_140;
  if ((int)DStack_134 < (int)(DWORD)local_70) {
    do {
      TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
      ::FindId(lpCriticalSection + 7,local_128,
               (&(*(_RTL_CRITICAL_SECTION **)local_f0)->DebugInfo)[(longlong)(int)DStack_d4 * 2]);
      p_Var6 = p_Var13;
      if (local_128[0] != -1) {
        p_Var6 = lpCriticalSection[7].DebugInfo + (longlong)local_128[0] * 2;
      }
      p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var6->CriticalSection;
      if (p_Var6 == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        p_Var7 = p_Var13;
      }
      if (p_Var7 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        DVar2 = p_Var7->Flags;
        pLStack_140 = &p_Var7->ProcessLocksList;
        uStack_144 = 1;
        local_148 = 0;
        DStack_134 = 0;
        uStack_130 = 0;
        if (DVar2 != 0) {
          pLVar11 = *(LIST_ENTRY **)&p_Var7->EntryCount;
          if (*(LIST_ENTRY **)&p_Var7->EntryCount == (LIST_ENTRY *)0x0) {
            pLVar11 = pLStack_140;
          }
          uVar5 = *(uint *)&pLVar11->Flink;
          p_Var6 = p_Var13;
          p_Var9 = p_Var13;
          while (uVar5 == 0) {
            iVar4 = (int)p_Var6;
            uStack_130 = (int)p_Var9 + 0x20;
            p_Var9 = (PRTL_CRITICAL_SECTION_DEBUG)(ulonglong)uStack_130;
            local_148 = iVar4 + 1;
            p_Var6 = (PRTL_CRITICAL_SECTION_DEBUG)(ulonglong)local_148;
            if ((int)((DVar2 - 1) + ((int)(DVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
            goto LAB_1417a46d4;
            uVar5 = *(uint *)((longlong)&pLVar11->Flink + (longlong)iVar4 * 4 + 4);
          }
          uStack_144 = -uVar5 & uVar5;
          iVar4 = 0x1f;
          if (uStack_144 != 0) {
            for (; uStack_144 >> iVar4 == 0; iVar4 = iVar4 + -1) {
            }
          }
          if (uStack_144 == 0) {
            iVar4 = 0x20;
          }
          else {
            iVar4 = 0x1f - iVar4;
          }
          DStack_134 = (uStack_130 - iVar4) + 0x1f;
          if ((int)DVar2 < (int)DStack_134) {
LAB_1417a46d4:
            DStack_134 = DVar2;
          }
        }
        local_138 = 0xffffffff;
        uStack_110 = CONCAT44(uStack_144,local_148);
        uStack_b0 = 0xffffffff;
        DStack_ac = DStack_134;
        uStack_a8 = uStack_130;
        uStack_a4 = uStack_12c;
        uStack_100 = 0xffffffff;
        DStack_fc = DStack_134;
        uStack_f8 = uStack_130;
        uStack_f4 = uStack_12c;
        local_118 = p_Var7;
        pLStack_108 = pLStack_140;
        local_c8 = p_Var7;
        uStack_c0 = uStack_110;
        pLStack_b8 = pLStack_140;
        if ((int)DStack_134 < (int)DVar2) {
          do {
            p_Var6 = (&(*(_RTL_CRITICAL_SECTION **)local_118)->DebugInfo)
                     [(longlong)(int)DStack_fc * 2];
            if ((*(uint *)&p_Var6->CriticalSection & param_4) == 0) {
              uVar5 = *(uint *)((longlong)&p_Var6->CriticalSection + 4);
              p_Var7 = p_Var13;
              if ((int)uVar5 < (int)DAT_1469e91c4) {
                uVar8 = uVar5 & 0xffff;
                if ((int)uVar5 < 0) {
                  uVar5 = uVar5 + 0xffff;
                  uVar8 = uVar8 - 0x10000;
                }
                p_Var7 = (PRTL_CRITICAL_SECTION_DEBUG)
                         (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                         (longlong)(int)uVar8 * 0x18);
              }
              if ((*(uint *)&((LIST_ENTRY *)&p_Var7->CriticalSection)->Flink & uVar12) == 0) {
                local_120 = p_Var6;
                (*(code *)*param_2)(param_2[1],&local_120);
              }
            }
            uStack_100 = uStack_100 & ~uStack_110._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_110);
          } while ((int)DStack_fc < (int)*(DWORD *)((longlong)(pLStack_108 + 1) + 8));
        }
      }
      uStack_d8 = uStack_d8 & ~uStack_e8._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e8);
      uVar5 = uStack_100;
    } while ((int)DStack_d4 < (int)*(DWORD *)((longlong)(local_e0 + 1) + 8));
  }
  uStack_100 = uVar5;
  local_50 = 0;
  if (local_58 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_98);
  if (lpCriticalSection_00 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection_00);
  }
  return;
}



// FUNCTION 1417a4830 FUN_1417a4830 body=1600 status=ok
// SIG undefined FUN_1417a4830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1417a4830(undefined8 param_1,undefined8 *param_2,char param_3,uint param_4,uint param_5)

{
  longlong *plVar1;
  undefined *puVar2;
  char cVar3;
  ulonglong uVar4;
  char cVar5;
  DWORD DVar6;
  BOOL BVar7;
  int iVar8;
  uint uVar9;
  LPCRITICAL_SECTION p_Var10;
  undefined **ppuVar11;
  undefined *puVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  LPCRITICAL_SECTION p_Var16;
  WORD *pWVar17;
  undefined8 *puVar18;
  uint uVar19;
  longlong lVar20;
  LPCRITICAL_SECTION lpCriticalSection;
  _RTL_CRITICAL_SECTION **pp_Var21;
  uint *puVar22;
  LPCRITICAL_SECTION p_Var23;
  bool bVar24;
  undefined1 auStack_188 [32];
  char local_168;
  int local_164;
  int local_160;
  uint uStack_15c;
  uint *puStack_158;
  undefined4 local_150;
  int iStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  uint local_140;
  LPCRITICAL_SECTION local_138;
  LPCRITICAL_SECTION local_130;
  longlong *local_128;
  longlong *local_120;
  undefined8 uStack_118;
  undefined *local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  char local_f0;
  char local_ef;
  char local_ee;
  undefined8 *local_e8;
  undefined *local_e0;
  undefined8 uStack_d8;
  uint *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  uint *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_168 = param_3;
  local_140 = param_4;
  local_e8 = param_2;
  cVar5 = (*(code *)PTR_CanBeUsedOnAnyThread_1464a8df0)();
  uVar9 = param_5 | 0x10000000;
  if (cVar5 == '\0') {
    uVar9 = param_5 | 0x18000000;
  }
  param_5 = uVar9;
  p_Var10 = (LPCRITICAL_SECTION)FUN_1417a4e70();
  cVar5 = IsGarbageCollecting();
  p_Var23 = (LPCRITICAL_SECTION)0x0;
  if ((cVar5 == '\0') ||
     (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 == '\0' && (DAT_1468c21ae != '\0')) &&
      (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)))) {
    local_130 = p_Var10;
    BVar7 = TryEnterCriticalSection(p_Var10);
    lpCriticalSection = p_Var10;
    if (BVar7 == 0) {
      EnterCriticalSection(p_Var10);
    }
  }
  else {
    local_130 = (LPCRITICAL_SECTION)0x0;
    lpCriticalSection = p_Var23;
  }
  p_Var10 = p_Var10 + 5;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  local_138 = p_Var10;
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(p_Var10,&local_164,param_1);
  p_Var16 = p_Var23;
  if (local_164 != -1) {
    p_Var16 = (LPCRITICAL_SECTION)(&p_Var10->DebugInfo->Type + (longlong)local_164 * 0x10);
  }
  p_Var10 = (LPCRITICAL_SECTION)&p_Var16->LockCount;
  if (p_Var16 == (LPCRITICAL_SECTION)0x0) {
    p_Var10 = p_Var23;
  }
  if (p_Var10 != (LPCRITICAL_SECTION)0x0) {
    local_48 = CONCAT44(local_48._4_4_,1);
    FUN_1407eebb0(&local_58,0);
    p_Var23 = local_138;
    puVar18 = &local_58;
    if (local_50 != (undefined8 *)0x0) {
      puVar18 = local_50;
    }
    *puVar18 = p_Var10;
joined_r0x0001417a4978:
    if ((int)local_48 != 0) {
      puVar18 = &local_58;
      if (local_50 != (undefined8 *)0x0) {
        puVar18 = local_50;
      }
      iVar15 = (int)local_48 + -1;
      plVar1 = (longlong *)puVar18[iVar15];
      iVar8 = ((int)local_48 - iVar15) + -1;
      iVar14 = (int)local_48;
      if (iVar8 != 0) {
        _guard_xfg_dispatch_icall_nop(puVar18 + iVar15,puVar18 + (int)local_48,(longlong)iVar8 << 3)
        ;
        iVar14 = (int)local_48;
      }
      local_48 = CONCAT44(local_48._4_4_,iVar14 + -1);
      FUN_1409574f0(&local_58);
      puVar2 = (undefined *)plVar1[1];
      if ((puVar2 == (undefined *)0x0) || (local_e0 = puVar2, *plVar1 != 0)) {
        local_e0 = (undefined *)0x0;
      }
      uStack_15c = 1;
      local_160 = 0;
      iStack_14c = 0;
      iStack_148 = 0;
      if (local_e0 == (undefined *)0x0) {
        if (DAT_1464b5c38 != 0) {
          puVar22 = DAT_1464b5c30;
          if (DAT_1464b5c30 == (uint *)0x0) {
            puVar22 = (uint *)&DAT_1464b5c20;
          }
          uVar9 = *puVar22;
          while (uVar9 == 0) {
            lVar20 = (longlong)local_160;
            iStack_148 = iStack_148 + 0x20;
            iVar15 = local_160 + 1;
            bVar24 = (int)(DAT_1464b5c38 + -1 + (DAT_1464b5c38 + -1 >> 0x1f & 0x1fU)) >> 5 <=
                     local_160;
            local_160 = iVar15;
            if (bVar24) goto LAB_1417a4bc4;
            uVar9 = puVar22[lVar20 + 1];
          }
          uStack_15c = -uVar9 & uVar9;
          iVar15 = 0x1f;
          if (uStack_15c != 0) {
            for (; uStack_15c >> iVar15 == 0; iVar15 = iVar15 + -1) {
            }
          }
          if (uStack_15c == 0) {
            iVar15 = 0x20;
          }
          else {
            iVar15 = 0x1f - iVar15;
          }
          iStack_14c = (iStack_148 - iVar15) + 0x1f;
          if (DAT_1464b5c38 < iStack_14c) {
LAB_1417a4bc4:
            iStack_14c = DAT_1464b5c38;
          }
        }
        uStack_d8 = CONCAT44(uStack_15c,local_160);
        local_e0 = &DAT_1464b5c10;
        uStack_c8 = CONCAT44(iStack_14c,0xffffffff);
        uStack_c0 = CONCAT44(uStack_144,iStack_148);
        local_60 = &DAT_1464b5c10;
        puStack_d0 = (uint *)&DAT_1464b5c20;
        local_88 = &DAT_1464b5c10;
        uStack_80 = uStack_d8;
        local_78 = &DAT_1464b5c20;
        uStack_70 = uStack_c8;
        local_68 = uStack_c0;
        ppuVar11 = &local_88;
      }
      else {
        iVar15 = *(int *)(local_e0 + 0x28);
        puStack_d0 = (uint *)(local_e0 + 0x10);
        if (iVar15 != 0) {
          puVar22 = *(uint **)(local_e0 + 0x20);
          if (*(uint **)(local_e0 + 0x20) == (uint *)0x0) {
            puVar22 = puStack_d0;
          }
          uVar9 = *puVar22;
          while (uVar9 == 0) {
            lVar20 = (longlong)local_160;
            iStack_148 = iStack_148 + 0x20;
            iVar14 = local_160 + 1;
            bVar24 = (int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_160;
            local_160 = iVar14;
            if (bVar24) goto LAB_1417a4ae3;
            uVar9 = puVar22[lVar20 + 1];
          }
          uStack_15c = -uVar9 & uVar9;
          iVar14 = 0x1f;
          if (uStack_15c != 0) {
            for (; uStack_15c >> iVar14 == 0; iVar14 = iVar14 + -1) {
            }
          }
          if (uStack_15c == 0) {
            iVar14 = 0x20;
          }
          else {
            iVar14 = 0x1f - iVar14;
          }
          iStack_14c = (iStack_148 - iVar14) + 0x1f;
          if (iVar15 < iStack_14c) {
LAB_1417a4ae3:
            iStack_14c = iVar15;
          }
        }
        uStack_d8 = CONCAT44(uStack_15c,local_160);
        uStack_c8 = CONCAT44(iStack_14c,0xffffffff);
        uStack_c0 = CONCAT44(uStack_144,iStack_148);
        puStack_90 = local_e0;
        local_b8 = local_e0;
        uStack_b0 = uStack_d8;
        local_a8 = puStack_d0;
        uStack_a0 = uStack_c8;
        local_98 = uStack_c0;
        ppuVar11 = &local_b8;
      }
      local_150 = 0xffffffff;
      local_120 = (longlong *)*ppuVar11;
      uStack_118 = ppuVar11[1];
      local_110 = ppuVar11[2];
      uStack_108 = ppuVar11[3];
      local_100 = *(undefined4 *)(ppuVar11 + 4);
      uStack_fc = *(undefined4 *)((longlong)ppuVar11 + 0x24);
      uStack_f8 = *(undefined4 *)(ppuVar11 + 5);
      uStack_f4 = *(undefined4 *)((longlong)ppuVar11 + 0x2c);
      if ((puVar2 == (undefined *)0x0) || (puVar12 = puVar2, *plVar1 != 0)) {
        puVar12 = (undefined *)0x0;
      }
      local_f0 = puVar12 != (undefined *)0x0;
      if ((*plVar1 == 0) && (puVar2 == (undefined *)0x0)) {
        local_ef = '\x01';
      }
      else {
        local_ef = '\0';
      }
      local_ee = '\0';
      puStack_158 = puStack_d0;
      local_128 = plVar1;
      do {
        cVar5 = local_f0;
        plVar1 = local_128;
        iVar15 = uStack_108._4_4_;
        while( true ) {
          cVar3 = local_ee;
          lVar20 = 0;
          if (cVar5 == '\0') {
            bVar24 = local_ef == '\0';
          }
          else {
            bVar24 = iVar15 < *(int *)(local_110 + 0x18);
          }
          if (!bVar24) {
            lpCriticalSection = local_130;
            goto joined_r0x0001417a4978;
          }
          if (cVar5 == '\0') {
            plVar13 = (longlong *)((ulonglong)(-(uint)(local_ee != '\0') & 8) + (longlong)plVar1);
          }
          else {
            plVar13 = (longlong *)((longlong)iVar15 * 0x10 + *local_120);
          }
          p_Var10 = (LPCRITICAL_SECTION)*plVar13;
          if ((p_Var10->LockCount & local_140) == 0) {
            uVar9 = p_Var10->RecursionCount;
            if ((int)uVar9 < (int)DAT_1469e91c4) {
              uVar19 = uVar9 & 0xffff;
              if ((int)uVar9 < 0) {
                uVar9 = uVar9 + 0xffff;
                uVar19 = uVar19 - 0x10000;
              }
              lVar20 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                       (longlong)(int)uVar19 * 0x18;
            }
            if ((*(uint *)(lVar20 + 8) & param_5) == 0) {
              local_138 = p_Var10;
              (*(code *)*local_e8)(local_e8[1],&local_138);
            }
          }
          if (local_168 != '\0') {
            TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
            ::FindId(p_Var23,&local_164,p_Var10);
            uVar4 = local_48;
            if (local_164 == -1) {
              pWVar17 = (WORD *)0x0;
            }
            else {
              pWVar17 = &p_Var23->DebugInfo->Type + (longlong)local_164 * 0x10;
            }
            pp_Var21 = (_RTL_CRITICAL_SECTION **)(pWVar17 + 4);
            if (pWVar17 == (WORD *)0x0) {
              pp_Var21 = (_RTL_CRITICAL_SECTION **)0x0;
            }
            if (pp_Var21 != (_RTL_CRITICAL_SECTION **)0x0) {
              lVar20 = (longlong)(int)local_48;
              iVar14 = (int)local_48 + 1;
              local_48 = CONCAT44(local_48._4_4_,iVar14);
              if (local_48._4_4_ < iVar14) {
                FUN_1407eebb0(&local_58,uVar4 & 0xffffffff);
              }
              puVar18 = &local_58;
              if (local_50 != (undefined8 *)0x0) {
                puVar18 = local_50;
              }
              puVar18[lVar20] = pp_Var21;
            }
          }
          if (cVar5 != '\0') break;
          if ((cVar3 == '\0') && (plVar1[1] != 0)) {
            local_ef = '\0';
            local_ee = '\x01';
          }
          else {
            local_ef = '\x01';
            local_ee = '\x01';
          }
        }
        uStack_108 = (undefined *)CONCAT44(uStack_108._4_4_,(uint)uStack_108 & ~uStack_118._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_118);
      } while( true );
    }
    if (local_50 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 1417a4e70 FUN_1417a4e70 body=425 status=ok
// SIG undefined FUN_1417a4e70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1417a4e70(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e9508) {
    _Init_thread_header(&DAT_1469e9508);
    if (DAT_1469e9508 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1469e9350);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1469e9350,4000);
      _DAT_1469e93a8 = 0xffffffff;
      DAT_1469e9378 = 0;
      _DAT_1469e9380 = 0;
      DAT_1469e9398 = 0;
      _DAT_1469e93a0 = 0;
      _DAT_1469e93ac = 0;
      DAT_1469e93b8 = 0;
      _DAT_1469e93c0 = 0;
      _DAT_1469e93c8 = 0;
      _DAT_1469e93d0 = 0;
      _DAT_1469e93e8 = 0;
      _DAT_1469e93f0 = 0;
      _DAT_1469e93fc = 0;
      DAT_1469e9408 = 0;
      _DAT_1469e9410 = 0;
      DAT_1469e9418 = 0;
      _DAT_1469e9420 = 0;
      DAT_1469e9438 = 0;
      _DAT_1469e9440 = 0;
      _DAT_1469e944c = 0;
      DAT_1469e9458 = 0;
      _DAT_1469e9460 = 0;
      DAT_1469e9468 = 0;
      _DAT_1469e9470 = 0;
      DAT_1469e9488 = 0;
      _DAT_1469e9490 = 0;
      _DAT_1469e949c = 0;
      DAT_1469e94a8 = 0;
      _DAT_1469e94b0 = 0;
      DAT_1469e94b8 = 0;
      _DAT_1469e94c0 = 0;
      DAT_1469e94d8 = 0;
      _DAT_1469e94e0 = 0;
      _DAT_1469e94ec = 0;
      DAT_1469e94f8 = 0;
      _DAT_1469e9500 = 0;
      _DAT_1469e93f8 = 0xffffffff;
      _DAT_1469e9448 = 0xffffffff;
      _DAT_1469e9498 = 0xffffffff;
      _DAT_1469e94e8 = 0xffffffff;
      atexit(`FUObjectHashTables::Get'::`2'::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&DAT_1469e9508);
      return &DAT_1469e9350;
    }
  }
  return &DAT_1469e9350;
}



// FUNCTION 1417a5020 Get body=90 status=ok
// SIG undefined Get(void)

undefined8 FWeakObjectPtr::Get(int *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if ((((param_1[1] != 0) && (iVar2 = *param_1, -1 < iVar2)) && (iVar2 < (int)DAT_1469e91c4)) &&
     (((uVar4 = iVar2 >> 0x1f & 0xffff, uVar3 = iVar2 + uVar4,
       puVar1 = (undefined8 *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar4) * 0x18), puVar1 != (undefined8 *)0x0 &&
       (*(int *)(puVar1 + 2) == param_1[1])) && ((*(uint *)(puVar1 + 1) & 0x30000000) == 0)))) {
    return *puVar1;
  }
  return 0;
}



// FUNCTION 1417a5080 Get body=115 status=ok
// SIG undefined Get(void)

undefined8 FWeakObjectPtr::Get(int *param_1,char param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  if ((((param_1[1] != 0) && (iVar2 = *param_1, -1 < iVar2)) && (iVar2 < (int)DAT_1469e91c4)) &&
     ((uVar4 = iVar2 >> 0x1f & 0xffff, uVar3 = iVar2 + uVar4,
      puVar1 = (undefined8 *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
               (longlong)(int)((uVar3 & 0xffff) - uVar4) * 0x18), puVar1 != (undefined8 *)0x0 &&
      (*(int *)(puVar1 + 2) == param_1[1])))) {
    if (param_2 == '\0') {
      bVar5 = (*(uint *)(puVar1 + 1) & 0x30000000) == 0;
    }
    else {
      bVar5 = (bool)(~(byte)(*(uint *)(puVar1 + 1) >> 0x1c) & 1);
    }
    if (bVar5 != false) {
      return *puVar1;
    }
  }
  return 0;
}



// FUNCTION 1417a5100 FUN_1417a5100 body=544 status=ok
// SIG undefined FUN_1417a5100(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1417a5100(undefined8 param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  DWORD DVar2;
  BOOL BVar3;
  LPCRITICAL_SECTION p_Var4;
  undefined8 uVar5;
  LPCRITICAL_SECTION p_Var6;
  LPCRITICAL_SECTION p_Var7;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_b8 [32];
  int local_98 [2];
  longlong local_90 [3];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (param_3 == '\0') {
    p_Var6 = (LPCRITICAL_SECTION)FUN_1417a4e70();
    cVar1 = IsGarbageCollecting();
    p_Var4 = (LPCRITICAL_SECTION)0x0;
    if (((cVar1 == '\0') ||
        (((cVar1 = FUN_1415ad720(&DAT_1468e2448), lpCriticalSection = p_Var4, cVar1 == '\0' &&
          (DAT_1468c21ae != '\0')) && (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)))) &&
       (BVar3 = TryEnterCriticalSection(p_Var6), lpCriticalSection = p_Var6, BVar3 == 0)) {
      EnterCriticalSection(p_Var6);
    }
    TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
    ::FindId(p_Var6 + 9,local_98,param_1);
    p_Var7 = p_Var4;
    if (local_98[0] != -1) {
      p_Var7 = (LPCRITICAL_SECTION)((longlong)p_Var6[9].DebugInfo + (longlong)local_98[0] * 0x60);
    }
    p_Var6 = (LPCRITICAL_SECTION)&p_Var7->LockCount;
    if (p_Var7 == (LPCRITICAL_SECTION)0x0) {
      p_Var6 = p_Var4;
    }
    if (p_Var6 != (LPCRITICAL_SECTION)0x0) {
      uVar5 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array(p_Var6,local_90);
      TArray<UClass_*,FDefaultAllocator>::Append<UClass_*,FDefaultAllocator>(param_2,uVar5);
      if (local_90[0] != 0) {
        FMemory::Free();
      }
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  else {
    p_Var6 = (LPCRITICAL_SECTION)0x0;
    local_78 = 0;
    local_70 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0xffffffff;
    local_44 = 0;
    local_38 = 0;
    local_30 = 0;
    p_Var4 = (LPCRITICAL_SECTION)FUN_1417a4e70();
    cVar1 = IsGarbageCollecting();
    if (((cVar1 == '\0') ||
        (((cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0' && (DAT_1468c21ae != '\0')) &&
         (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)))) &&
       (BVar3 = TryEnterCriticalSection(p_Var4), p_Var6 = p_Var4, BVar3 == 0)) {
      EnterCriticalSection(p_Var4);
    }
    RecursivelyPopulateDerivedClasses(p_Var4,param_1,&local_78);
    uVar5 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Array(&local_78,local_90);
    TArray<UClass_*,FDefaultAllocator>::Append<UClass_*,FDefaultAllocator>(param_2,uVar5);
    if (local_90[0] != 0) {
      FMemory::Free();
    }
    if (p_Var6 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(p_Var6);
    }
    local_30 = 0;
    if (local_38 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_78);
  }
  return;
}



// FUNCTION 1417a5320 GetEvenIfUnreachable body=160 status=ok
// SIG undefined GetEvenIfUnreachable(void)

undefined8 FWeakObjectPtr::GetEvenIfUnreachable(int *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)0x0;
  puVar4 = puVar6;
  if ((((param_1[1] != 0) && (iVar2 = *param_1, -1 < iVar2)) && (iVar2 < (int)DAT_1469e91c4)) &&
     ((uVar5 = iVar2 >> 0x1f & 0xffff, uVar3 = iVar2 + uVar5,
      puVar1 = (undefined8 *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
               (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18), puVar1 != (undefined8 *)0x0 &&
      (puVar4 = puVar1, *(int *)(puVar1 + 2) != param_1[1])))) {
    puVar4 = puVar6;
  }
  if (puVar4 == (undefined8 *)0x0) {
    return 0;
  }
  iVar2 = *param_1;
  if (iVar2 < (int)DAT_1469e91c4) {
    uVar5 = iVar2 >> 0x1f & 0xffff;
    uVar3 = iVar2 + uVar5;
    puVar6 = (undefined8 *)
             (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
             (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18);
  }
  return *puVar6;
}



// FUNCTION 1417a53c0 FUN_1417a53c0 body=197 status=ok
// SIG undefined FUN_1417a53c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1417a53c0(longlong param_1)

{
  BOOL BVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_res8 [8];
  undefined8 local_18;
  undefined4 uStack_c;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464b5cb8);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464b5cb8);
  }
  if (param_1 != DAT_1464b5ce0) {
    DAT_1464b5ce0 = param_1;
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(&DAT_1464b5c68,local_res8,param_1);
    puVar3 = (undefined4 *)0x0;
    if (local_res8[0] != -1) {
      puVar3 = (undefined4 *)((longlong)local_res8[0] * 0x20 + _DAT_1464b5c68);
    }
    puVar2 = puVar3 + 2;
    if (puVar3 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    if (puVar2 == (undefined4 *)0x0) {
      _DAT_1464b5ce8 = 0;
      uRam00000001464b5cec = 0;
      _DAT_1464b5cf0 = 0xffffffff;
      uRam00000001464b5cf4 = uStack_c;
    }
    else {
      _DAT_1464b5ce8 = *puVar2;
      uRam00000001464b5cec = puVar2[1];
      _DAT_1464b5cf0 = puVar2[2];
      uRam00000001464b5cf4 = puVar2[3];
    }
  }
  local_18 = CONCAT44(uRam00000001464b5cec,_DAT_1464b5ce8);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1464b5cb8);
  return local_18;
}



// FUNCTION 1417a5490 FUN_1417a5490 body=206 status=ok
// SIG undefined FUN_1417a5490(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1417a5490(longlong param_1)

{
  ulonglong uVar1;
  BOOL BVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int local_res8 [8];
  ulonglong uStack_10;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464b5cb8);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464b5cb8);
  }
  if (param_1 != DAT_1464b5ce0) {
    DAT_1464b5ce0 = param_1;
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(&DAT_1464b5c68,local_res8,param_1);
    puVar4 = (undefined8 *)0x0;
    if (local_res8[0] != -1) {
      puVar4 = (undefined8 *)((longlong)local_res8[0] * 0x20 + _DAT_1464b5c68);
    }
    puVar3 = puVar4 + 1;
    if (puVar4 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    if (puVar3 == (undefined8 *)0x0) {
      uStack_10 = CONCAT44(uStack_10._4_4_,0xffffffff);
      _DAT_1464b5ce8 = 0;
      _DAT_1464b5cf0 = uStack_10;
    }
    else {
      _DAT_1464b5ce8 = *puVar3;
      _DAT_1464b5cf0 = puVar3[1];
    }
  }
  uVar1 = _DAT_1464b5cf0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1464b5cb8);
  return uVar1 & 0xffffffff;
}



// FUNCTION 1417a5560 FUN_1417a5560 body=451 status=ok
// SIG undefined FUN_1417a5560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1417a5560(undefined8 param_1,undefined8 param_2,char param_3,undefined4 param_4,
                  uint param_5)

{
  char cVar1;
  DWORD DVar2;
  BOOL BVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar4;
  LPCRITICAL_SECTION lpCriticalSection_00;
  uint uVar5;
  undefined1 auStack_c8 [32];
  uint local_a8;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  uVar5 = param_5 | 0x10000000;
  local_90 = param_1;
  cVar1 = (*(code *)PTR_CanBeUsedOnAnyThread_1464a8df0)();
  if (cVar1 == '\0') {
    uVar5 = param_5 | 0x18000000;
  }
  lpCriticalSection_00 = (LPCRITICAL_SECTION)0x0;
  local_58 = 0xffffffff;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_1417a2a90(&local_88,local_98,&local_90,0);
  if (param_3 != '\0') {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_1417a4e70();
    cVar1 = IsGarbageCollecting();
    if (((cVar1 == '\0') ||
        (((cVar1 = FUN_1415ad720(&DAT_1468e2448), cVar1 == '\0' && (DAT_1468c21ae != '\0')) &&
         (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)))) &&
       (BVar3 = TryEnterCriticalSection(lpCriticalSection), lpCriticalSection_00 = lpCriticalSection
       , BVar3 == 0)) {
      EnterCriticalSection(lpCriticalSection);
    }
    RecursivelyPopulateDerivedClasses(lpCriticalSection,param_1,&local_88);
    if (lpCriticalSection_00 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection_00);
    }
  }
  uVar4 = FUN_1417a4e70();
  local_a8 = uVar5;
  FUN_1417a5730(uVar4,&local_88,param_2,param_4);
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_88);
  return;
}



// FUNCTION 1417a5730 FUN_1417a5730 body=1009 status=ok
// SIG undefined FUN_1417a5730(void)

void FUN_1417a5730(LPCRITICAL_SECTION param_1,longlong *param_2,longlong *param_3,uint param_4,
                  uint param_5)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  BOOL BVar4;
  uint uVar5;
  PRTL_CRITICAL_SECTION_DEBUG p_Var6;
  int iVar7;
  PRTL_CRITICAL_SECTION_DEBUG p_Var8;
  uint uVar9;
  longlong lVar10;
  LIST_ENTRY *pLVar11;
  PRTL_CRITICAL_SECTION_DEBUG p_Var12;
  uint uVar13;
  LPCRITICAL_SECTION local_res10;
  uint local_c8;
  uint uStack_c4;
  DWORD DStack_b4;
  uint uStack_b0;
  undefined8 uStack_a0;
  LIST_ENTRY *pLStack_98;
  uint uStack_90;
  DWORD DStack_8c;
  uint uStack_88;
  longlong *local_80;
  undefined8 uStack_78;
  LIST_ENTRY *local_70;
  uint uStack_68;
  DWORD DStack_64;
  uint local_60;
  LPCRITICAL_SECTION local_58;
  PRTL_CRITICAL_SECTION_DEBUG local_50;
  undefined8 uStack_48;
  LIST_ENTRY *pLStack_40;
  undefined4 uStack_38;
  DWORD DStack_34;
  uint uStack_30;
  
  uVar13 = param_5 | 0x10000000;
  cVar2 = IsGarbageCollecting();
  if ((cVar2 == '\0') ||
     (((cVar2 = FUN_1415ad720(), cVar2 == '\0' && (DAT_1468c21ae != '\0')) &&
      (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)))) {
    BVar4 = TryEnterCriticalSection(param_1);
    local_res10 = param_1;
    if (BVar4 == 0) {
      EnterCriticalSection(param_1);
    }
  }
  else {
    local_res10 = (LPCRITICAL_SECTION)0x0;
  }
  DVar3 = *(DWORD *)(param_2 + 5);
  pLStack_98 = (LIST_ENTRY *)(param_2 + 2);
  uStack_c4 = 1;
  local_c8 = 0;
  DStack_b4 = 0;
  uStack_b0 = 0;
  if (DVar3 != 0) {
    pLVar11 = (LIST_ENTRY *)param_2[4];
    if ((LIST_ENTRY *)param_2[4] == (LIST_ENTRY *)0x0) {
      pLVar11 = pLStack_98;
    }
    uVar5 = *(uint *)&pLVar11->Flink;
    uStack_b0 = 0;
    local_c8 = 0;
    while (uVar5 == 0) {
      lVar10 = (longlong)(int)local_c8;
      uStack_b0 = uStack_b0 + 0x20;
      iVar7 = local_c8 + 1;
      bVar1 = (int)((DVar3 - 1) + ((int)(DVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_c8;
      local_c8 = iVar7;
      if (bVar1) goto LAB_1417a586f;
      uVar5 = *(uint *)((longlong)&pLVar11->Flink + lVar10 * 4 + 4);
    }
    uStack_c4 = -uVar5 & uVar5;
    iVar7 = 0x1f;
    if (uStack_c4 != 0) {
      for (; uStack_c4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_c4 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    DStack_b4 = (uStack_b0 - iVar7) + 0x1f;
    if ((int)DVar3 < (int)DStack_b4) {
LAB_1417a586f:
      DStack_b4 = DVar3;
    }
  }
  uStack_a0 = CONCAT44(uStack_c4,local_c8);
  uStack_90 = 0xffffffff;
  uVar5 = uStack_90;
  uStack_90 = 0xffffffff;
  DStack_8c = DStack_b4;
  uStack_88 = uStack_b0;
  local_60 = uStack_b0;
  uStack_68 = 0xffffffff;
  DStack_64 = DStack_b4;
  local_80 = param_2;
  uStack_78 = uStack_a0;
  local_70 = pLStack_98;
  if ((int)DStack_b4 < (int)DVar3) {
    param_1 = param_1 + 7;
    local_58 = param_1;
    do {
      p_Var8 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
      ::FindId(param_1,&param_5,*(undefined8 *)(*local_80 + (longlong)(int)DStack_64 * 0x10));
      p_Var6 = p_Var8;
      if (param_5 != 0xffffffff) {
        p_Var6 = param_1->DebugInfo + (longlong)(int)param_5 * 2;
      }
      p_Var12 = (PRTL_CRITICAL_SECTION_DEBUG)&p_Var6->CriticalSection;
      if (p_Var6 == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        p_Var12 = p_Var8;
      }
      if (p_Var12 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        DVar3 = p_Var12->Flags;
        pLStack_98 = &p_Var12->ProcessLocksList;
        local_c8 = 0;
        uStack_c4 = 1;
        DStack_b4 = 0;
        uStack_b0 = 0;
        if (DVar3 != 0) {
          pLVar11 = *(LIST_ENTRY **)&p_Var12->EntryCount;
          if (*(LIST_ENTRY **)&p_Var12->EntryCount == (LIST_ENTRY *)0x0) {
            pLVar11 = pLStack_98;
          }
          uVar5 = *(uint *)&pLVar11->Flink;
          p_Var6 = p_Var8;
          while (uVar5 == 0) {
            iVar7 = (int)p_Var8;
            uStack_b0 = (int)p_Var6 + 0x20;
            p_Var6 = (PRTL_CRITICAL_SECTION_DEBUG)(ulonglong)uStack_b0;
            local_c8 = iVar7 + 1;
            p_Var8 = (PRTL_CRITICAL_SECTION_DEBUG)(ulonglong)local_c8;
            if ((int)((DVar3 - 1) + ((int)(DVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
            goto LAB_1417a59be;
            uVar5 = *(uint *)((longlong)&pLVar11->Flink + (longlong)iVar7 * 4 + 4);
          }
          uStack_c4 = -uVar5 & uVar5;
          iVar7 = 0x1f;
          if (uStack_c4 != 0) {
            for (; uStack_c4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
            }
          }
          if (uStack_c4 == 0) {
            iVar7 = 0x20;
          }
          else {
            iVar7 = 0x1f - iVar7;
          }
          DStack_b4 = (uStack_b0 - iVar7) + 0x1f;
          if ((int)DVar3 < (int)DStack_b4) {
LAB_1417a59be:
            DStack_b4 = DVar3;
          }
        }
        uStack_a0 = CONCAT44(uStack_c4,local_c8);
        uStack_38 = 0xffffffff;
        DStack_34 = DStack_b4;
        uStack_30 = uStack_b0;
        uStack_90 = 0xffffffff;
        DStack_8c = DStack_b4;
        uStack_88 = uStack_b0;
        local_50 = p_Var12;
        uStack_48 = uStack_a0;
        pLStack_40 = pLStack_98;
        if ((int)DStack_b4 < (int)DVar3) {
          do {
            p_Var8 = (&(*(_RTL_CRITICAL_SECTION **)p_Var12)->DebugInfo)
                     [(longlong)(int)DStack_8c * 2];
            if ((*(uint *)&p_Var8->CriticalSection & param_4) == 0) {
              uVar5 = *(uint *)((longlong)&p_Var8->CriticalSection + 4);
              lVar10 = 0;
              if ((int)uVar5 < (int)DAT_1469e91c4) {
                uVar9 = uVar5 & 0xffff;
                if ((int)uVar5 < 0) {
                  uVar5 = uVar5 + 0xffff;
                  uVar9 = uVar9 - 0x10000;
                }
                lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                         (longlong)(int)uVar9 * 0x18;
              }
              if ((*(uint *)(lVar10 + 8) & uVar13) == 0) {
                iVar7 = (int)param_3[1];
                *(int *)(param_3 + 1) = iVar7 + 1;
                if (*(int *)((longlong)param_3 + 0xc) < iVar7 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar7);
                }
                *(PRTL_CRITICAL_SECTION_DEBUG *)(*param_3 + (longlong)iVar7 * 8) = p_Var8;
              }
            }
            uStack_90 = uStack_90 & ~uStack_a0._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
            param_1 = local_58;
          } while ((int)DStack_8c < (int)*(DWORD *)((longlong)(pLStack_98 + 1) + 8));
        }
      }
      uStack_68 = uStack_68 & ~uStack_78._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_78);
      uVar5 = uStack_90;
    } while ((int)DStack_64 < (int)*(DWORD *)((longlong)(local_70 + 1) + 8));
  }
  uStack_90 = uVar5;
  if (local_res10 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(local_res10);
  }
  return;
}



// FUNCTION 1417a5b30 FUN_1417a5b30 body=2337 status=ok
// SIG undefined FUN_1417a5b30(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1417a5b30(undefined8 param_1,longlong *param_2,char param_3,uint param_4,uint param_5)

{
  _LIST_ENTRY *p_Var1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  DWORD DVar6;
  BOOL BVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  LPCRITICAL_SECTION p_Var12;
  _LIST_ENTRY *p_Var13;
  longlong lVar14;
  _LIST_ENTRY **pp_Var15;
  _LIST_ENTRY *p_Var16;
  longlong lVar17;
  int iVar18;
  WORD *pWVar19;
  uint uVar20;
  LPCRITICAL_SECTION lpCriticalSection;
  _LIST_ENTRY *p_Var21;
  _LIST_ENTRY *p_Var22;
  uint *puVar23;
  longlong lVar24;
  bool bVar25;
  longlong *local_res10;
  char local_res18;
  uint local_res20;
  undefined8 local_178;
  _LIST_ENTRY *p_Stack_170;
  int iStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong local_140;
  LPCRITICAL_SECTION local_138;
  _LIST_ENTRY *local_130;
  _LIST_ENTRY *p_Stack_128;
  _LIST_ENTRY *p_Stack_120;
  _LIST_ENTRY *p_Stack_118;
  undefined8 uStack_110;
  _LIST_ENTRY *local_108;
  _LIST_ENTRY *p_Stack_100;
  undefined8 uStack_f8;
  _LIST_ENTRY *p_Stack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  char local_d0;
  char local_cf;
  char local_ce;
  LPCRITICAL_SECTION local_c8;
  _LIST_ENTRY *local_b8;
  _LIST_ENTRY *local_b0;
  undefined8 uStack_a8;
  _LIST_ENTRY *local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  char local_80;
  char local_7f;
  char local_7e;
  longlong local_78;
  _LIST_ENTRY *local_70;
  _LIST_ENTRY *p_Stack_68;
  _LIST_ENTRY *local_60;
  _LIST_ENTRY *p_Stack_58;
  undefined8 local_50;
  _LIST_ENTRY *local_48;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  cVar5 = (*(code *)PTR_CanBeUsedOnAnyThread_1464a8df0)();
  uVar8 = param_5 | 0x10000000;
  if (cVar5 == '\0') {
    uVar8 = param_5 | 0x18000000;
  }
  param_5 = uVar8;
  iVar11 = (int)param_2[1];
  p_Var12 = (LPCRITICAL_SECTION)FUN_1417a4e70();
  cVar5 = IsGarbageCollecting();
  if ((cVar5 == '\0') ||
     (((cVar5 = FUN_1415ad720(&DAT_1468e2448), cVar5 == '\0' && (DAT_1468c21ae != '\0')) &&
      (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)))) {
    local_138 = p_Var12;
    BVar7 = TryEnterCriticalSection(p_Var12);
    lpCriticalSection = p_Var12;
    if (BVar7 == 0) {
      EnterCriticalSection(p_Var12);
    }
  }
  else {
    local_138 = (LPCRITICAL_SECTION)0x0;
    lpCriticalSection = (LPCRITICAL_SECTION)0x0;
  }
  p_Var12 = p_Var12 + 5;
  local_c8 = p_Var12;
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(p_Var12,&local_140,param_1);
  plVar2 = local_res10;
  if ((int)local_140 == -1) {
    pWVar19 = (WORD *)0x0;
  }
  else {
    pWVar19 = &p_Var12->DebugInfo->Type + (longlong)(int)local_140 * 0x10;
  }
  p_Var13 = (_LIST_ENTRY *)0x0;
  p_Var16 = (_LIST_ENTRY *)(pWVar19 + 4);
  if (pWVar19 == (WORD *)0x0) {
    p_Var16 = p_Var13;
  }
  if (p_Var16 != (_LIST_ENTRY *)0x0) {
    p_Var1 = ((LIST_ENTRY *)&p_Var16->Blink)->Flink;
    if ((p_Var1 == (_LIST_ENTRY *)0x0) ||
       ((_RTL_CRITICAL_SECTION *)p_Var16->Flink != (_RTL_CRITICAL_SECTION *)0x0)) {
      p_Stack_170 = (_LIST_ENTRY *)&DAT_1464b5c20;
      local_178 = (_LIST_ENTRY *)0x100000000;
      iStack_164 = 0;
      uStack_160 = 0;
      if (DAT_1464b5c38 != 0) {
        puVar23 = DAT_1464b5c30;
        if (DAT_1464b5c30 == (uint *)0x0) {
          puVar23 = (uint *)&DAT_1464b5c20;
        }
        uVar8 = *puVar23;
        p_Var22 = p_Var13;
        while (uVar8 == 0) {
          iVar10 = (int)p_Var13;
          uStack_160 = (int)p_Var22 + 0x20;
          p_Var22 = (_LIST_ENTRY *)(ulonglong)uStack_160;
          p_Var13 = (_LIST_ENTRY *)(ulonglong)(iVar10 + 1U);
          local_178._4_4_ = (undefined4)((ulonglong)local_178 >> 0x20);
          local_178 = (_LIST_ENTRY *)CONCAT44(local_178._4_4_,iVar10 + 1U);
          if ((int)(DAT_1464b5c38 + -1 + (DAT_1464b5c38 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar10)
          goto LAB_1417a5df3;
          uVar8 = puVar23[(longlong)iVar10 + 1];
        }
        uVar8 = -uVar8 & uVar8;
        iVar10 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar10 == 0; iVar10 = iVar10 + -1) {
          }
        }
        local_178 = (_LIST_ENTRY *)CONCAT44(uVar8,(undefined4)local_178);
        if (uVar8 == 0) {
          iVar10 = 0x20;
        }
        else {
          iVar10 = 0x1f - iVar10;
        }
        iStack_164 = (uStack_160 - iVar10) + 0x1f;
        if (DAT_1464b5c38 < iStack_164) {
LAB_1417a5df3:
          iStack_164 = DAT_1464b5c38;
        }
      }
      local_130 = (_LIST_ENTRY *)&DAT_1464b5c10;
    }
    else {
      iVar10 = *(int *)&p_Var1[2].Blink;
      p_Stack_170 = p_Var1 + 1;
      local_178 = (_LIST_ENTRY *)0x100000000;
      iStack_164 = 0;
      uStack_160 = 0;
      local_130 = p_Var1;
      if (iVar10 != 0) {
        p_Var22 = p_Var1[2].Flink;
        if (p_Var1[2].Flink == (_LIST_ENTRY *)0x0) {
          p_Var22 = p_Stack_170;
        }
        uVar8 = *(uint *)&p_Var22->Flink;
        p_Var21 = p_Var13;
        while (uVar8 == 0) {
          iVar9 = (int)p_Var13;
          uStack_160 = (int)p_Var21 + 0x20;
          p_Var21 = (_LIST_ENTRY *)(ulonglong)uStack_160;
          p_Var13 = (_LIST_ENTRY *)(ulonglong)(iVar9 + 1U);
          local_178._4_4_ = (undefined4)((ulonglong)local_178 >> 0x20);
          local_178 = (_LIST_ENTRY *)CONCAT44(local_178._4_4_,iVar9 + 1U);
          if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_1417a5d23;
          uVar8 = *(uint *)((longlong)&p_Var22->Flink + (longlong)iVar9 * 4 + 4);
        }
        uVar8 = -uVar8 & uVar8;
        iVar9 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar9 == 0; iVar9 = iVar9 + -1) {
          }
        }
        local_178 = (_LIST_ENTRY *)CONCAT44(uVar8,(undefined4)local_178);
        if (uVar8 == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - iVar9;
        }
        iStack_164 = (uStack_160 - iVar9) + 0x1f;
        if (iVar10 < iStack_164) {
LAB_1417a5d23:
          iStack_164 = iVar10;
        }
      }
    }
    iVar10 = iStack_164;
    p_Stack_118 = (_LIST_ENTRY *)CONCAT44(iStack_164,0xffffffff);
    uStack_110 = CONCAT44(uStack_15c,uStack_160);
    p_Stack_128 = local_178;
    p_Stack_120 = p_Stack_170;
    p_Stack_f0 = p_Stack_170;
    uStack_e8 = CONCAT44(iStack_164,0xffffffff);
    p_Stack_100 = local_130;
    uStack_f8 = local_178;
    uStack_150 = SUB84(local_130,0);
    uStack_14c = (undefined4)((ulonglong)local_130 >> 0x20);
    local_e0 = (undefined *)CONCAT44(uStack_15c,uStack_160);
    uStack_d8 = uStack_150;
    uStack_d4 = uStack_14c;
    if ((p_Var1 == (_LIST_ENTRY *)0x0) ||
       (p_Var13 = p_Var1, (_RTL_CRITICAL_SECTION *)p_Var16->Flink != (_RTL_CRITICAL_SECTION *)0x0))
    {
      p_Var13 = (_LIST_ENTRY *)0x0;
    }
    local_d0 = p_Var13 != (_LIST_ENTRY *)0x0;
    if (((_RTL_CRITICAL_SECTION *)p_Var16->Flink == (_RTL_CRITICAL_SECTION *)0x0) &&
       (p_Var1 == (_LIST_ENTRY *)0x0)) {
      local_cf = '\x01';
    }
    else {
      local_cf = '\0';
    }
    local_ce = '\0';
    local_108 = p_Var16;
    do {
      cVar5 = local_d0;
      p_Var13 = local_108;
      iVar9 = uStack_e8._4_4_;
      while( true ) {
        cVar4 = local_ce;
        plVar3 = local_res10;
        lVar14 = 0;
        if (cVar5 == '\0') {
          bVar25 = local_cf == '\0';
        }
        else {
          bVar25 = iVar9 < *(int *)&p_Stack_f0[1].Blink;
        }
        if (!bVar25) {
          lpCriticalSection = local_138;
          iVar9 = (int)plVar2[1];
          if (iVar11 == (int)plVar2[1]) goto LAB_1417a6421;
          goto LAB_1417a5fe0;
        }
        if (cVar5 == '\0') {
          p_Var16 = (_LIST_ENTRY *)
                    ((longlong)&p_Var13->Flink + (ulonglong)(-(uint)(local_ce != '\0') & 8));
        }
        else {
          p_Var16 = p_Stack_100->Flink + iVar9;
        }
        p_Var16 = p_Var16->Flink;
        if ((*(uint *)&p_Var16->Blink & local_res20) == 0) {
          uVar8 = *(uint *)((longlong)&p_Var16->Blink + 4);
          if ((int)uVar8 < (int)DAT_1469e91c4) {
            uVar20 = uVar8 & 0xffff;
            if ((int)uVar8 < 0) {
              uVar8 = uVar8 + 0xffff;
              uVar20 = uVar20 - 0x10000;
            }
            lVar14 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                     (longlong)(int)uVar20 * 0x18;
          }
          if ((*(uint *)(lVar14 + 8) & param_5) == 0) {
            iVar18 = (int)plVar2[1];
            *(int *)(plVar2 + 1) = iVar18 + 1;
            if (*(int *)((longlong)plVar2 + 0xc) < iVar18 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar18);
            }
            *(_LIST_ENTRY **)(*plVar2 + (longlong)iVar18 * 8) = p_Var16;
          }
        }
        if (cVar5 != '\0') break;
        if ((cVar4 == '\0') && (((LIST_ENTRY *)&p_Var13->Blink)->Flink != (_LIST_ENTRY *)0x0)) {
          local_cf = '\0';
          local_ce = '\x01';
        }
        else {
          local_cf = '\x01';
          local_ce = '\x01';
        }
      }
      uStack_e8 = CONCAT44(uStack_e8._4_4_,(uint)uStack_e8 & ~uStack_f8._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
    } while( true );
  }
  goto LAB_1417a6421;
LAB_1417a5fe0:
  do {
    iVar18 = iVar9;
    lpCriticalSection = local_138;
    if (local_res18 == '\0') break;
    lVar14 = (longlong)iVar11;
    lVar24 = (longlong)iVar18;
    p_Var12 = local_c8;
    iVar9 = iVar18;
    local_140 = lVar14;
    local_78 = lVar24;
    if (lVar14 < lVar24) {
      do {
        local_140 = lVar14;
        TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
        ::FindId(p_Var12,&local_res10,*(undefined8 *)(*plVar3 + lVar14 * 8));
        if ((int)local_res10 == -1) {
          pWVar19 = (WORD *)0x0;
        }
        else {
          pWVar19 = &p_Var12->DebugInfo->Type + (longlong)(int)local_res10 * 0x10;
        }
        p_Var13 = (_LIST_ENTRY *)0x0;
        p_Var16 = (_LIST_ENTRY *)(pWVar19 + 4);
        if (pWVar19 == (WORD *)0x0) {
          p_Var16 = p_Var13;
        }
        if (p_Var16 != (_LIST_ENTRY *)0x0) {
          p_Var1 = ((LIST_ENTRY *)&p_Var16->Blink)->Flink;
          local_b8 = p_Var16;
          if ((p_Var1 == (_LIST_ENTRY *)0x0) ||
             (local_130 = p_Var1, p_Var16->Flink != (_LIST_ENTRY *)0x0)) {
            local_130 = p_Var13;
          }
          local_178 = (_LIST_ENTRY *)0x100000000;
          iStack_164 = 0;
          uStack_160 = 0;
          if (local_130 == (_LIST_ENTRY *)0x0) {
            if (DAT_1464b5c38 != 0) {
              puVar23 = DAT_1464b5c30;
              if (DAT_1464b5c30 == (uint *)0x0) {
                puVar23 = (uint *)&DAT_1464b5c20;
              }
              uVar8 = *puVar23;
              p_Var22 = p_Var13;
              while (uVar8 == 0) {
                iVar11 = (int)p_Var13;
                uStack_160 = (int)p_Var22 + 0x20;
                p_Var22 = (_LIST_ENTRY *)(ulonglong)uStack_160;
                p_Var13 = (_LIST_ENTRY *)(ulonglong)(iVar11 + 1U);
                local_178._4_4_ = (undefined4)((ulonglong)local_178 >> 0x20);
                local_178 = (_LIST_ENTRY *)CONCAT44(local_178._4_4_,iVar11 + 1U);
                if ((int)(DAT_1464b5c38 + -1 + (DAT_1464b5c38 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar11)
                goto LAB_1417a6214;
                uVar8 = puVar23[(longlong)iVar11 + 1];
              }
              uVar8 = -uVar8 & uVar8;
              iVar11 = 0x1f;
              if (uVar8 != 0) {
                for (; uVar8 >> iVar11 == 0; iVar11 = iVar11 + -1) {
                }
              }
              local_178 = (_LIST_ENTRY *)CONCAT44(uVar8,(undefined4)local_178);
              if (uVar8 == 0) {
                iVar11 = 0x20;
              }
              else {
                iVar11 = 0x1f - iVar11;
              }
              iStack_164 = (uStack_160 - iVar11) + 0x1f;
              if (DAT_1464b5c38 < iStack_164) {
LAB_1417a6214:
                iStack_164 = DAT_1464b5c38;
              }
            }
            p_Stack_118 = (_LIST_ENTRY *)CONCAT44(iStack_164,0xffffffff);
            uStack_110 = CONCAT44(iVar10,uStack_160);
            local_130 = (_LIST_ENTRY *)&DAT_1464b5c10;
            p_Stack_120 = (_LIST_ENTRY *)&DAT_1464b5c20;
            local_e0 = &DAT_1464b5c10;
            pp_Var15 = &local_108;
            local_108 = (_LIST_ENTRY *)&DAT_1464b5c10;
            p_Stack_100 = local_178;
            uStack_f8 = (_LIST_ENTRY *)&DAT_1464b5c20;
            p_Stack_f0 = p_Stack_118;
            uStack_e8 = uStack_110;
          }
          else {
            iVar11 = *(int *)&local_130[2].Blink;
            p_Stack_120 = local_130 + 1;
            if (iVar11 != 0) {
              p_Var22 = local_130[2].Flink;
              if (local_130[2].Flink == (_LIST_ENTRY *)0x0) {
                p_Var22 = p_Stack_120;
              }
              uVar8 = *(uint *)&p_Var22->Flink;
              p_Var21 = p_Var13;
              while (uVar8 == 0) {
                iVar9 = (int)p_Var13;
                uStack_160 = (int)p_Var21 + 0x20;
                p_Var21 = (_LIST_ENTRY *)(ulonglong)uStack_160;
                p_Var13 = (_LIST_ENTRY *)(ulonglong)(iVar9 + 1U);
                local_178._4_4_ = (undefined4)((ulonglong)local_178 >> 0x20);
                local_178 = (_LIST_ENTRY *)CONCAT44(local_178._4_4_,iVar9 + 1U);
                if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9)
                goto LAB_1417a6133;
                uVar8 = *(uint *)((longlong)&p_Var22->Flink + (longlong)iVar9 * 4 + 4);
              }
              uVar8 = -uVar8 & uVar8;
              iVar9 = 0x1f;
              if (uVar8 != 0) {
                for (; uVar8 >> iVar9 == 0; iVar9 = iVar9 + -1) {
                }
              }
              local_178 = (_LIST_ENTRY *)CONCAT44(uVar8,(undefined4)local_178);
              if (uVar8 == 0) {
                iVar9 = 0x20;
              }
              else {
                iVar9 = 0x1f - iVar9;
              }
              iStack_164 = (uStack_160 - iVar9) + 0x1f;
              if (iVar11 < iStack_164) {
LAB_1417a6133:
                iStack_164 = iVar11;
              }
            }
            pp_Var15 = &local_70;
            p_Stack_118 = (_LIST_ENTRY *)CONCAT44(iStack_164,0xffffffff);
            uStack_110 = CONCAT44(iVar10,uStack_160);
            local_48 = local_130;
            local_70 = local_130;
            p_Stack_68 = local_178;
            local_60 = p_Stack_120;
            p_Stack_58 = p_Stack_118;
            local_50 = uStack_110;
          }
          local_a0 = pp_Var15[2];
          uStack_98 = pp_Var15[3];
          local_b0 = *pp_Var15;
          uStack_a8 = pp_Var15[1];
          local_90 = *(undefined4 *)(pp_Var15 + 4);
          uStack_8c = *(undefined4 *)((longlong)pp_Var15 + 0x24);
          uStack_88 = *(undefined4 *)(pp_Var15 + 5);
          uStack_84 = *(undefined4 *)((longlong)pp_Var15 + 0x2c);
          if ((p_Var1 == (_LIST_ENTRY *)0x0) ||
             (p_Var13 = p_Var1, p_Var16->Flink != (_LIST_ENTRY *)0x0)) {
            p_Var13 = (_LIST_ENTRY *)0x0;
          }
          local_80 = p_Var13 != (_LIST_ENTRY *)0x0;
          if ((p_Var16->Flink == (_LIST_ENTRY *)0x0) && (p_Var1 == (_LIST_ENTRY *)0x0)) {
            local_7f = '\x01';
          }
          else {
            local_7f = '\0';
          }
          local_7e = '\0';
          p_Stack_128 = local_178;
          do {
            cVar5 = local_80;
            p_Var13 = local_b8;
            iVar11 = uStack_98._4_4_;
            while( true ) {
              cVar4 = local_7e;
              lVar17 = 0;
              if (cVar5 == '\0') {
                bVar25 = local_7f == '\0';
              }
              else {
                bVar25 = iVar11 < *(int *)&local_a0[1].Blink;
              }
              p_Var12 = local_c8;
              lVar14 = local_140;
              lVar24 = local_78;
              if (!bVar25) goto LAB_1417a63e4;
              if (cVar5 == '\0') {
                p_Var16 = (_LIST_ENTRY *)
                          ((longlong)&p_Var13->Flink + (ulonglong)(-(uint)(local_7e != '\0') & 8));
              }
              else {
                p_Var16 = local_b0->Flink + iVar11;
              }
              p_Var16 = p_Var16->Flink;
              if ((*(uint *)&p_Var16->Blink & local_res20) == 0) {
                uVar8 = *(uint *)((longlong)&p_Var16->Blink + 4);
                if ((int)uVar8 < (int)DAT_1469e91c4) {
                  uVar20 = uVar8 & 0xffff;
                  if ((int)uVar8 < 0) {
                    uVar8 = uVar8 + 0xffff;
                    uVar20 = uVar20 - 0x10000;
                  }
                  lVar17 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                           (longlong)(int)uVar20 * 0x18;
                }
                if ((*(uint *)(lVar17 + 8) & param_5) == 0) {
                  iVar9 = (int)plVar3[1];
                  *(int *)(plVar3 + 1) = iVar9 + 1;
                  if (*(int *)((longlong)plVar3 + 0xc) < iVar9 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar9);
                  }
                  *(_LIST_ENTRY **)(*plVar3 + (longlong)iVar9 * 8) = p_Var16;
                }
              }
              if (cVar5 != '\0') break;
              if ((cVar4 == '\0') && (((LIST_ENTRY *)&p_Var13->Blink)->Flink != (_LIST_ENTRY *)0x0))
              {
                local_7f = '\0';
                local_7e = '\x01';
              }
              else {
                local_7f = '\x01';
                local_7e = '\x01';
              }
            }
            uStack_98 = (_LIST_ENTRY *)CONCAT44(uStack_98._4_4_,(uint)uStack_98 & ~uStack_a8._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a8);
          } while( true );
        }
LAB_1417a63e4:
        lVar14 = lVar14 + 1;
      } while (lVar14 < lVar24);
      iVar9 = (int)plVar3[1];
      local_140 = lVar14;
    }
    lpCriticalSection = local_138;
    iVar11 = iVar18;
  } while (iVar18 != iVar9);
LAB_1417a6421:
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 1417a6460 FUN_1417a6460 body=1270 status=ok
// SIG undefined FUN_1417a6460(void)

void FUN_1417a6460(_RTL_CRITICAL_SECTION *param_1)

{
  HANDLE pvVar1;
  bool bVar2;
  char cVar3;
  DWORD DVar4;
  BOOL BVar5;
  int iVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  HANDLE *ppvVar7;
  _LIST_ENTRY *p_Var8;
  _RTL_CRITICAL_SECTION *p_Var9;
  longlong lVar10;
  PRTL_CRITICAL_SECTION_DEBUG p_Var11;
  _RTL_CRITICAL_SECTION *p_Var12;
  LPCRITICAL_SECTION lpCriticalSection_00;
  WORD *pWVar13;
  _LIST_ENTRY *p_Var14;
  uint uVar15;
  _RTL_CRITICAL_SECTION *local_res8;
  undefined4 *local_res10;
  uint local_res18;
  _RTL_CRITICAL_SECTION *local_res20;
  _RTL_CRITICAL_SECTION *local_68;
  PRTL_CRITICAL_SECTION_DEBUG local_60;
  _RTL_CRITICAL_SECTION **local_58;
  
  pvVar1 = param_1->LockSemaphore;
  lpCriticalSection_00 = (LPCRITICAL_SECTION)0x0;
  local_res10 = (undefined4 *)0x0;
  if (pvVar1 == (HANDLE)0x0) {
    return;
  }
  local_res8 = param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_1417a4e70();
  cVar3 = IsGarbageCollecting();
  if (cVar3 == '\0') {
LAB_1417a64e3:
    BVar5 = TryEnterCriticalSection(lpCriticalSection);
    lpCriticalSection_00 = lpCriticalSection;
    if (BVar5 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
  }
  else {
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar4 = GetCurrentThreadId();
      bVar2 = false;
      if (DVar4 == DAT_1468c21c0) goto LAB_1417a64d8;
    }
    else {
LAB_1417a64d8:
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1417a64e3;
  }
  p_Var9 = local_res8;
  uVar15 = (uint)((ulonglong)pvVar1 >> 0x20);
  local_res18 = (uint)pvVar1 ^ uVar15;
  local_res10 = (undefined4 *)CONCAT44(local_res10._4_4_,local_res18);
  if (lpCriticalSection[1].LockCount != lpCriticalSection[2].RecursionCount) {
    ppvVar7 = lpCriticalSection[2].LockSemaphore;
    if (lpCriticalSection[2].LockSemaphore == (HANDLE *)0x0) {
      ppvVar7 = &lpCriticalSection[2].OwningThread;
    }
    iVar6 = *(int *)((longlong)ppvVar7 +
                    ((longlong)(int)lpCriticalSection[2].SpinCount - 1U & (longlong)(int)local_res18
                    ) * 4);
    if (iVar6 != -1) {
      do {
        pWVar13 = &(lpCriticalSection[1].DebugInfo)->Type + (longlong)iVar6 * 0x10;
        if (*(uint *)pWVar13 == local_res18) {
          if ((iVar6 != -1) && (pWVar13 != (WORD *)0x0)) goto LAB_1417a659b;
          break;
        }
        iVar6 = *(int *)(pWVar13 + 0xc);
      } while (iVar6 != -1);
    }
  }
  local_68 = (_RTL_CRITICAL_SECTION *)&local_res10;
  FUN_1417a32e0(lpCriticalSection + 1,&local_res20,&local_68,0);
  pWVar13 = &(lpCriticalSection[1].DebugInfo)->Type + (longlong)(int)local_res20 * 0x10;
LAB_1417a659b:
  p_Var14 = ((LIST_ENTRY *)(pWVar13 + 8))->Flink;
  local_68 = p_Var9;
  if (p_Var14 == (_LIST_ENTRY *)0x0) {
    if (*(_RTL_CRITICAL_SECTION **)(pWVar13 + 4) != (_RTL_CRITICAL_SECTION *)0x0)
    goto LAB_1417a65d2;
    *(_RTL_CRITICAL_SECTION **)(pWVar13 + 4) = p_Var9;
  }
  else if (*(_RTL_CRITICAL_SECTION **)(pWVar13 + 4) == (_RTL_CRITICAL_SECTION *)0x0) {
    TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
    Emplace<FObjectReplicator_*_const_&>(p_Var14,&local_res20,&local_68,0);
  }
  else {
LAB_1417a65d2:
    if (p_Var14 == (_LIST_ENTRY *)0x0) {
      ((LIST_ENTRY *)(pWVar13 + 8))->Flink = (_LIST_ENTRY *)p_Var9;
    }
    else {
      p_Var8 = (_LIST_ENTRY *)operator_new(0x50);
      p_Var14 = (_LIST_ENTRY *)0x0;
      if (p_Var8 != (_LIST_ENTRY *)0x0) {
        p_Var8->Flink = (_LIST_ENTRY *)0x0;
        p_Var8->Blink = (_LIST_ENTRY *)0x0;
        p_Var8[2].Flink = (_LIST_ENTRY *)0x0;
        p_Var8[2].Blink = (_LIST_ENTRY *)0x0;
        *(undefined4 *)&p_Var8[3].Flink = 0xffffffff;
        *(undefined4 *)((longlong)&p_Var8[3].Flink + 4) = 0;
        p_Var8[4].Flink = (_LIST_ENTRY *)0x0;
        *(undefined4 *)&p_Var8[4].Blink = 0;
        p_Var14 = p_Var8;
      }
      local_60 = *(PRTL_CRITICAL_SECTION_DEBUG *)(pWVar13 + 4);
      TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
      Emplace<FObjectReplicator_*_const_&>(p_Var14,&local_res20,&local_60,0);
      local_60 = (PRTL_CRITICAL_SECTION_DEBUG)((LIST_ENTRY *)(pWVar13 + 8))->Flink;
      TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
      Emplace<FObjectReplicator_*_const_&>(p_Var14,&local_res20,&local_60,0);
      TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
      Emplace<FObjectReplicator_*_const_&>(p_Var14,&local_res20,&local_68,0);
      *(_RTL_CRITICAL_SECTION **)(pWVar13 + 4) = (_RTL_CRITICAL_SECTION *)0x0;
      ((LIST_ENTRY *)(pWVar13 + 8))->Flink = p_Var14;
    }
  }
  p_Var12 = (_RTL_CRITICAL_SECTION *)0x0;
  local_60 = (PRTL_CRITICAL_SECTION_DEBUG)&local_res18;
  local_res18 = (uint)((longlong)local_res8->SpinCount >> 6) ^ (uint)pvVar1 ^ uVar15;
  local_58 = &local_res8;
  FUN_1417a3590(lpCriticalSection + 3,&local_res10,&local_60,0);
  p_Var9 = local_res8;
  local_60 = (PRTL_CRITICAL_SECTION_DEBUG)local_res8->SpinCount;
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(lpCriticalSection + 5,&local_res10);
  if (((int)local_res10 == -1) ||
     (pWVar13 = &(lpCriticalSection[5].DebugInfo)->Type + (longlong)(int)local_res10 * 0x10,
     pWVar13 == (WORD *)0x0)) {
    local_res20 = (_RTL_CRITICAL_SECTION *)&local_60;
    FUN_1417a2ff0(lpCriticalSection + 5,&local_res10,&local_res20,0);
    pWVar13 = &(lpCriticalSection[5].DebugInfo)->Type + (longlong)(int)local_res10 * 0x10;
  }
  p_Var14 = ((LIST_ENTRY *)(pWVar13 + 8))->Flink;
  local_res20 = p_Var9;
  if (p_Var14 == (_LIST_ENTRY *)0x0) {
    if (*(_RTL_CRITICAL_SECTION **)(pWVar13 + 4) == (_RTL_CRITICAL_SECTION *)0x0) {
      *(_RTL_CRITICAL_SECTION **)(pWVar13 + 4) = p_Var9;
      goto LAB_1417a67f4;
    }
  }
  else if (*(_RTL_CRITICAL_SECTION **)(pWVar13 + 4) == (_RTL_CRITICAL_SECTION *)0x0) {
    TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
    Emplace<FObjectReplicator_*_const_&>(p_Var14,&local_res10,&local_res20,0);
    goto LAB_1417a67f4;
  }
  if (p_Var14 != (_LIST_ENTRY *)0x0) {
    p_Var9 = (_RTL_CRITICAL_SECTION *)operator_new(0x50);
    if (p_Var9 != (_RTL_CRITICAL_SECTION *)0x0) {
      p_Var9->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      *(_LIST_ENTRY **)&p_Var9->LockCount = (_LIST_ENTRY *)0x0;
      p_Var9->SpinCount = 0;
      p_Var9[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      p_Var9[1].LockCount = -1;
      p_Var9[1].RecursionCount = 0;
      p_Var9[1].LockSemaphore = (HANDLE)0x0;
      *(undefined4 *)&p_Var9[1].SpinCount = 0;
      p_Var12 = p_Var9;
    }
    local_68 = *(_RTL_CRITICAL_SECTION **)(pWVar13 + 4);
    TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
    Emplace<FObjectReplicator_*_const_&>(p_Var12,&local_res10,&local_68,0);
    local_68 = (_RTL_CRITICAL_SECTION *)((LIST_ENTRY *)(pWVar13 + 8))->Flink;
    TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
    Emplace<FObjectReplicator_*_const_&>(p_Var12,&local_res10,&local_68,0);
    TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
    Emplace<FObjectReplicator_*_const_&>(p_Var12,&local_res10,&local_res20,0);
    *(_RTL_CRITICAL_SECTION **)(pWVar13 + 4) = (_RTL_CRITICAL_SECTION *)0x0;
    p_Var9 = p_Var12;
  }
  ((LIST_ENTRY *)(pWVar13 + 8))->Flink = (_LIST_ENTRY *)p_Var9;
LAB_1417a67f4:
  p_Var9 = local_res8;
  local_68 = local_res8;
  local_60 = local_res8->OwningThread;
  TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
  ::FindId(lpCriticalSection + 7,&local_res10);
  if (((int)local_res10 == -1) ||
     (p_Var11 = lpCriticalSection[7].DebugInfo + (longlong)(int)local_res10 * 2,
     p_Var11 == (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    local_res20 = (_RTL_CRITICAL_SECTION *)&local_60;
    FUN_1417a2d30(lpCriticalSection + 7,&local_res10,&local_res20,0);
    p_Var11 = lpCriticalSection[7].DebugInfo + (longlong)(int)local_res10 * 2;
  }
  TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
  Emplace<FObjectReplicator_*_const_&>
            (&p_Var11->CriticalSection,&local_res20,&local_68,&local_res10);
  lVar10 = FUN_14171bfe0();
  if ((*(int *)((longlong)p_Var9->OwningThread + 0x90) < *(int *)(lVar10 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)((longlong)p_Var9->OwningThread + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
       ) != lVar10 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    local_60 = *(PRTL_CRITICAL_SECTION_DEBUG *)&p_Var9[1].LockCount;
    local_68 = p_Var9;
    if (local_60 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
      ::FindId(lpCriticalSection + 9,&local_res10);
      if (((int)local_res10 == -1) ||
         (p_Var11 = lpCriticalSection[9].DebugInfo + (longlong)(int)local_res10 * 2,
         p_Var11 == (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
        local_res20 = (_RTL_CRITICAL_SECTION *)&local_60;
        FUN_1417a2d30(lpCriticalSection + 9,&local_res10,&local_res20,0);
        p_Var11 = lpCriticalSection[9].DebugInfo + (longlong)(int)local_res10 * 2;
      }
      FUN_1417a2a90(&p_Var11->CriticalSection,&local_res20,&local_68,&local_res10);
    }
  }
  if (lpCriticalSection_00 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection_00);
  }
  return;
}



// FUNCTION 1417a6960 IsStale body=118 status=ok
// SIG undefined IsStale(void)

ulonglong FWeakObjectPtr::IsStale(uint *param_1,char param_2,char param_3)

{
  uint uVar1;
  ulonglong in_RAX;
  uint uVar2;
  
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    in_RAX = (ulonglong)uVar1;
    if (((((int)uVar1 < 0) || ((int)DAT_1469e91c4 <= (int)uVar1)) ||
        (uVar2 = (int)uVar1 >> 0x1f & 0xffff, uVar1 = uVar1 + uVar2,
        in_RAX = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) +
                 (longlong)(int)((uVar1 & 0xffff) - uVar2) * 0x18, in_RAX == 0)) ||
       (*(uint *)(in_RAX + 0x10) != param_1[1])) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
    if (param_3 == '\0') {
      if (param_2 != '\0') {
        return (ulonglong)((*(uint *)(in_RAX + 8) & 0x30000000) != 0);
      }
      return (ulonglong)(*(uint *)(in_RAX + 8) >> 0x1c & 1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1417a69e0 IsValid body=89 status=ok
// SIG undefined IsValid(void)

ulonglong FWeakObjectPtr::IsValid(uint *param_1)

{
  uint uVar1;
  ulonglong in_RAX;
  uint uVar2;
  
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    in_RAX = (ulonglong)uVar1;
    if ((((-1 < (int)uVar1) && ((int)uVar1 < (int)DAT_1469e91c4)) &&
        (uVar2 = (int)uVar1 >> 0x1f & 0xffff, uVar1 = uVar1 + uVar2,
        in_RAX = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) +
                 (longlong)(int)((uVar1 & 0xffff) - uVar2) * 0x18, in_RAX != 0)) &&
       ((*(uint *)(in_RAX + 0x10) == param_1[1] && ((*(uint *)(in_RAX + 8) & 0x30000000) == 0)))) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1417a6a40 IsValid body=147 status=ok
// SIG undefined IsValid(void)

longlong FWeakObjectPtr::IsValid(int *param_1,char param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint7 uVar4;
  bool bVar5;
  uint uVar6;
  
  if ((((param_1[1] == 0) || (iVar1 = *param_1, iVar1 < 0)) || ((int)DAT_1469e91c4 <= iVar1)) ||
     (uVar6 = iVar1 >> 0x1f & 0xffff, uVar2 = iVar1 + uVar6,
     lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
             (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18, lVar3 == 0)) {
    lVar3 = 0;
  }
  else if (*(int *)(lVar3 + 0x10) != param_1[1]) {
    lVar3 = 0;
  }
  uVar4 = (uint7)((ulonglong)lVar3 >> 8);
  if (param_3 == '\0') {
    if (lVar3 != 0) {
      if (param_2 == '\0') {
        bVar5 = (*(uint *)(lVar3 + 8) & 0x30000000) == 0;
      }
      else {
        bVar5 = (bool)(~(byte)(*(uint *)(lVar3 + 8) >> 0x1c) & 1);
      }
      if (bVar5 != false) {
        return CONCAT71(uVar4,1);
      }
    }
    return (ulonglong)uVar4 << 8;
  }
  return CONCAT71(uVar4,lVar3 != 0);
}



// FUNCTION 1417a6ae0 LockUObjectHashTables body=48 status=ok
// SIG undefined LockUObjectHashTables(void)

void LockUObjectHashTables(void)

{
  BOOL BVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_1417a4e70();
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001417a6b03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EnterCriticalSection(lpCriticalSection);
    return;
  }
  return;
}



// FUNCTION 1417a6b10 FUN_1417a6b10 body=255 status=ok
// SIG undefined FUN_1417a6b10(void)

void FUN_1417a6b10(longlong param_1,uint param_2)

{
  uint uVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 *local_28;
  undefined1 *puStack_20;
  
  puStack_20 = local_res10;
  local_res10[0] = 0;
  local_28 = &LAB_1417a3cc0;
  lVar3 = FUN_1415d8310(&local_28,&DAT_1464b5cf8);
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x70));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x70));
  }
  if (param_1 != *(longlong *)(lVar3 + 0x98)) {
    *(longlong *)(lVar3 + 0x98) = param_1;
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(lVar3 + 0x20,local_res8);
    puVar5 = (undefined4 *)0x0;
    if (local_res8[0] != -1) {
      puVar5 = (undefined4 *)(*(longlong *)(lVar3 + 0x20) + (longlong)local_res8[0] * 0x18);
    }
    puVar4 = puVar5 + 2;
    if (puVar5 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    if (puVar4 == (undefined4 *)0x0) {
      *(undefined4 *)(lVar3 + 0xa0) = 0;
    }
    else {
      *(undefined4 *)(lVar3 + 0xa0) = *puVar4;
    }
  }
  uVar1 = *(uint *)(lVar3 + 0xa0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x70));
  FUObjectAnnotationSparse<FObjectMark,1>::AddAnnotation(lVar3 + 0x18,param_1,uVar1 | param_2);
  return;
}



// FUNCTION 1417a6c20 FUN_1417a6c20 body=240 status=ok
// SIG undefined FUN_1417a6c20(void)

bool FUN_1417a6c20(longlong param_1,uint param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 *local_28;
  undefined1 *puStack_20;
  
  puStack_20 = local_res10;
  local_res10[0] = 0;
  local_28 = &LAB_1417a3cc0;
  lVar3 = FUN_1415d8310(&local_28,&DAT_1464b5cf8);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar3 + 0x70);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (param_1 != *(longlong *)(lVar3 + 0x98)) {
    *(longlong *)(lVar3 + 0x98) = param_1;
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(lVar3 + 0x20,local_res8);
    puVar5 = (undefined4 *)0x0;
    if (local_res8[0] != -1) {
      puVar5 = (undefined4 *)(*(longlong *)(lVar3 + 0x20) + (longlong)local_res8[0] * 0x18);
    }
    puVar4 = puVar5 + 2;
    if (puVar5 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    if (puVar4 == (undefined4 *)0x0) {
      *(undefined4 *)(lVar3 + 0xa0) = 0;
    }
    else {
      *(undefined4 *)(lVar3 + 0xa0) = *puVar4;
    }
  }
  uVar1 = *(uint *)(lVar3 + 0xa0);
  LeaveCriticalSection(lpCriticalSection);
  return (param_2 & uVar1) != 0;
}



// FUNCTION 1417a6d10 RecursivelyPopulateDerivedClasses body=460 status=ok
// SIG undefined RecursivelyPopulateDerivedClasses(void)

void RecursivelyPopulateDerivedClasses(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  int *piVar7;
  longlong *plVar8;
  uint *puVar9;
  int local_res8 [2];
  undefined1 local_res20 [8];
  undefined8 local_78;
  undefined8 local_70;
  uint uStack_68;
  uint uStack_64;
  undefined8 local_60;
  uint uStack_58;
  int iStack_54;
  uint local_50;
  undefined4 uStack_4c;
  longlong *local_48;
  uint uStack_40;
  uint uStack_3c;
  uint *puStack_38;
  undefined4 uStack_30;
  int iStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  
  TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x168,local_res8,param_2);
  plVar8 = (longlong *)0x0;
  plVar6 = plVar8;
  if (local_res8[0] != -1) {
    plVar6 = (longlong *)((longlong)local_res8[0] * 0x60 + *(longlong *)(param_1 + 0x168));
  }
  local_48 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    local_48 = plVar8;
  }
  if (local_48 != (longlong *)0x0) {
    iVar1 = (int)local_48[5];
    puStack_38 = (uint *)(local_48 + 2);
    local_70._0_4_ = 0;
    local_70._4_4_ = 1;
    local_60._4_4_ = 0;
    uStack_58 = 0;
    if (iVar1 != 0) {
      puVar9 = (uint *)local_48[4];
      if ((uint *)local_48[4] == (uint *)0x0) {
        puVar9 = puStack_38;
      }
      uVar2 = *puVar9;
      plVar6 = plVar8;
      while (uVar2 == 0) {
        iVar5 = (int)plVar6;
        uStack_58 = (int)plVar8 + 0x20;
        plVar8 = (longlong *)(ulonglong)uStack_58;
        local_70._0_4_ = iVar5 + 1;
        plVar6 = (longlong *)(ulonglong)(uint)local_70;
        if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1417a6e1d;
        uVar2 = puVar9[(longlong)iVar5 + 1];
      }
      local_70._4_4_ = -uVar2 & uVar2;
      iVar5 = 0x1f;
      if (local_70._4_4_ != 0) {
        for (; local_70._4_4_ >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (local_70._4_4_ == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      local_60._4_4_ = (uStack_58 - iVar5) + 0x1f;
      if (iVar1 < local_60._4_4_) {
LAB_1417a6e1d:
        local_60._4_4_ = iVar1;
      }
    }
    uStack_30 = 0xffffffff;
    iStack_2c = local_60._4_4_;
    uStack_28 = uStack_58;
    uStack_24 = iStack_54;
    uStack_40 = (uint)local_70;
    uStack_3c = local_70._4_4_;
    iVar5 = local_60._4_4_;
    uStack_68 = (uint)local_70;
    uStack_64 = local_70._4_4_;
    local_50 = uStack_58;
    uStack_4c = iStack_54;
    bVar4 = local_60._4_4_ < iVar1;
    local_70 = local_48;
    local_60 = puStack_38;
    uStack_58 = 0xffffffff;
    iStack_54 = iVar5;
    if (bVar4) {
      do {
        uVar3 = *(undefined8 *)(*local_70 + (longlong)iStack_54 * 0x10);
        local_78 = uVar3;
        piVar7 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                                  (param_3,local_res8,uVar3);
        if (*piVar7 == -1) {
          FUN_1417a2a90(param_3,local_res20,&local_78,0);
          RecursivelyPopulateDerivedClasses(param_1,uVar3,param_3);
        }
        uStack_58 = uStack_58 & ~uStack_64;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_68);
      } while (iStack_54 < (int)local_60[6]);
    }
  }
  return;
}



// FUNCTION 1417a6ee0 Remove body=300 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<int,FHashBucket>,TDefaultMapHashableKeyFuncs<int,FHashBucket,0>,FDefaultSetAllocator>::
Remove(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  iVar5 = *(int *)((longlong)plVar6 + ((longlong)param_2 & uVar7) * 4);
  if (iVar5 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar5 * 0x20;
      if (*(int *)(lVar3 + lVar2) == param_2) {
        lVar3 = (longlong)iVar5 * 0x20;
        uVar7 = (longlong)*(int *)(lVar3 + 0x1c + lVar2) & uVar7;
        piVar4 = (int *)((longlong)plVar6 + uVar7 * 4);
        iVar1 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x0001417a6f77;
      }
      iVar5 = *(int *)(lVar3 + 0x18 + lVar2);
    } while (iVar5 != -1);
  }
  return 0;
joined_r0x0001417a6f77:
  if (iVar1 == -1) {
LAB_1417a6fa0:
    lVar2 = *(longlong *)(lVar3 + 0x10 + *param_1);
    if ((lVar2 != 0) && (*(longlong *)(lVar3 + 8 + *param_1) == 0)) {
      *(undefined4 *)(lVar2 + 0x48) = 0;
      if (*(longlong *)(lVar2 + 0x40) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar2);
      FMemory::operator_delete(lVar2,0x50);
    }
    TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar5,1);
    return 1;
  }
  if (iVar1 == iVar5) {
    *piVar4 = *(int *)(lVar3 + lVar2 + 0x18);
    goto LAB_1417a6fa0;
  }
  piVar4 = (int *)(lVar2 + 0x18 + (longlong)iVar1 * 0x20);
  iVar1 = *piVar4;
  goto joined_r0x0001417a6f77;
}



// FUNCTION 1417a7010 Remove body=404 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar8 = (int)(param_2 >> 4);
  uVar7 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
  uVar6 = (longlong)(int)param_1[9] - 1;
  uVar5 = -(uVar7 + iVar8) ^ uVar7 >> 0xd;
  uVar9 = (iVar8 - uVar7) - uVar5 ^ uVar5 >> 0xc;
  uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 << 0x10;
  uVar5 = (uVar5 - uVar7) - uVar9 ^ uVar7 >> 5;
  uVar9 = (uVar9 - uVar7) - uVar5 ^ uVar5 >> 3;
  uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 << 10;
  plVar10 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar10 = param_1 + 7;
  }
  iVar8 = *(int *)((longlong)plVar10 +
                  (((longlong)(int)((uVar5 - uVar7) - uVar9) ^ (ulonglong)(uVar7 >> 0xf)) & uVar6) *
                  4);
  if (iVar8 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar8 * 0x60;
      if (*(ulonglong *)(lVar3 + lVar2) == param_2) {
        lVar3 = (longlong)iVar8 * 0x60;
        uVar6 = (longlong)*(int *)(lVar3 + 0x5c + lVar2) & uVar6;
        piVar4 = (int *)((longlong)plVar10 + uVar6 * 4);
        iVar1 = *(int *)((longlong)plVar10 + uVar6 * 4);
        goto joined_r0x0001417a712c;
      }
      iVar8 = *(int *)(lVar3 + 0x58 + lVar2);
    } while (iVar8 != -1);
  }
  return 0;
joined_r0x0001417a712c:
  if (iVar1 == -1) {
LAB_1417a7153:
    lVar3 = *param_1 + lVar3;
    *(undefined4 *)(lVar3 + 0x50) = 0;
    if (*(longlong *)(lVar3 + 0x48) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar3 + 8);
    TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar8,1);
    return 1;
  }
  if (iVar1 == iVar8) {
    *piVar4 = *(int *)(lVar3 + lVar2 + 0x58);
    goto LAB_1417a7153;
  }
  piVar4 = (int *)((longlong)iVar1 * 0x60 + 0x58 + lVar2);
  iVar1 = *piVar4;
  goto joined_r0x0001417a712c;
}



// FUNCTION 1417a71b0 Remove body=428 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<UClass_*,FHashBucket>,TDefaultMapHashableKeyFuncs<UClass_*,FHashBucket,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar8 = (int)(param_2 >> 4);
  uVar7 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
  uVar6 = (longlong)(int)param_1[9] - 1;
  uVar5 = -(uVar7 + iVar8) ^ uVar7 >> 0xd;
  uVar9 = (iVar8 - uVar7) - uVar5 ^ uVar5 >> 0xc;
  uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 << 0x10;
  uVar5 = (uVar5 - uVar7) - uVar9 ^ uVar7 >> 5;
  uVar9 = (uVar9 - uVar7) - uVar5 ^ uVar5 >> 3;
  uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 << 10;
  plVar10 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar10 = param_1 + 7;
  }
  iVar8 = *(int *)((longlong)plVar10 +
                  (((longlong)(int)((uVar5 - uVar7) - uVar9) ^ (ulonglong)(uVar7 >> 0xf)) & uVar6) *
                  4);
  if (iVar8 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar8 * 0x20;
      if (*(ulonglong *)(lVar3 + lVar2) == param_2) {
        lVar3 = (longlong)iVar8 * 0x20;
        uVar6 = (longlong)*(int *)(lVar3 + 0x1c + lVar2) & uVar6;
        piVar4 = (int *)((longlong)plVar10 + uVar6 * 4);
        iVar1 = *(int *)((longlong)plVar10 + uVar6 * 4);
        goto joined_r0x0001417a72c7;
      }
      iVar8 = *(int *)(lVar3 + 0x18 + lVar2);
    } while (iVar8 != -1);
  }
  return 0;
joined_r0x0001417a72c7:
  if (iVar1 == -1) {
LAB_1417a72f0:
    lVar2 = *(longlong *)(lVar3 + 0x10 + *param_1);
    if ((lVar2 != 0) && (*(longlong *)(lVar3 + 8 + *param_1) == 0)) {
      *(undefined4 *)(lVar2 + 0x48) = 0;
      if (*(longlong *)(lVar2 + 0x40) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar2);
      FMemory::operator_delete(lVar2,0x50);
    }
    TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar8,1);
    return 1;
  }
  if (iVar1 == iVar8) {
    *piVar4 = *(int *)(lVar3 + lVar2 + 0x18);
    goto LAB_1417a72f0;
  }
  piVar4 = (int *)(lVar2 + 0x18 + (longlong)iVar1 * 0x20);
  iVar1 = *piVar4;
  goto joined_r0x0001417a72c7;
}



// FUNCTION 1417a7360 FUN_1417a7360 body=103 status=ok
// SIG undefined FUN_1417a7360(void)

void FUN_1417a7360(longlong param_1)

{
  BOOL BVar1;
  undefined4 uStack_c;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x94) = uStack_c;
  TSet<TTuple<UObjectBase_const_*,FUniqueObjectGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 8,0);
                    /* WARNING: Could not recover jumptable at 0x0001417a73c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return;
}



// FUNCTION 1417a73d0 FUN_1417a73d0 body=131 status=ok
// SIG undefined FUN_1417a73d0(void)

void FUN_1417a73d0(longlong param_1)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 8,0);
  if (0 < iVar1 - iVar2) {
    FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001417a744c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return;
}



// FUNCTION 1417a7460 FUN_1417a7460 body=119 status=ok
// SIG undefined FUN_1417a7460(void)

void FUN_1417a7460(longlong param_1,undefined8 param_2)

{
  BOOL BVar1;
  undefined4 uStack_c;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x80) = param_2;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x94) = uStack_c;
  TSet<TTuple<UObjectBase_const_*,FUniqueObjectGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 8,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001417a74d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return;
}



// FUNCTION 1417a74e0 RemoveAnnotation body=157 status=ok
// SIG undefined RemoveAnnotation(void)

void FUObjectAnnotationSparse<FObjectMark,1>::RemoveAnnotation(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x80) = param_2;
  *(undefined4 *)(param_1 + 0x88) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 8,param_2);
  if ((0 < iVar1 - iVar2) && (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x3c))) {
    FUObjectArray::RemoveUObjectDeleteListener(&DAT_1469e91a0,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001417a7576. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return;
}



// FUNCTION 1417a7580 FUN_1417a7580 body=222 status=ok
// SIG undefined FUN_1417a7580(void)

void FUN_1417a7580(int *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong local_res10 [3];
  
  if (((*(byte *)((longlong)param_2 + 0x2a) & 8) == 0) ||
     ((*(byte *)((longlong)param_2 + 0x2a) & 0x10) != 0)) {
    if ((param_1[1] == 0) ||
       ((((iVar3 = *param_1, iVar3 < 0 || ((int)DAT_1469e91c4 <= iVar3)) ||
         (uVar4 = iVar3 >> 0x1f & 0xffff, uVar2 = iVar3 + uVar4,
         plVar1 = (longlong *)
                  (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                  (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18), plVar1 == (longlong *)0x0)) ||
        (((int)plVar1[2] != param_1[1] || ((~(byte)((uint)(int)plVar1[1] >> 0x1c) & 1) == 0)))))) {
      local_res10[0] = 0;
    }
    else {
      local_res10[0] = *plVar1;
    }
    (**(code **)(*param_2 + 0x30))(param_2,local_res10);
    if (((*(byte *)(param_2 + 5) & 1) != 0) || ((*(byte *)((longlong)param_2 + 0x2a) & 0x10) != 0))
    {
      if (local_res10[0] != 0) {
        *param_1 = *(int *)(local_res10[0] + 0xc);
        iVar3 = FUN_141784380(&DAT_1469e91a0);
        param_1[1] = iVar3;
        return;
      }
      *param_1 = -1;
      param_1[1] = 0;
    }
  }
  return;
}



// FUNCTION 1417a7660 FUN_1417a7660 body=1239 status=ok
// SIG undefined FUN_1417a7660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1417a7660(longlong param_1,longlong param_2,int param_3,char param_4)

{
  longlong lVar1;
  BOOL BVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *local_res8;
  undefined8 local_res10;
  int local_res20 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong local_50 [3];
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464b5cb8);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464b5cb8);
  }
  if (param_1 != DAT_1464b5ce0) {
    DAT_1464b5ce0 = param_1;
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(&DAT_1464b5c68,local_res20,param_1);
    puVar5 = (undefined4 *)0x0;
    if (local_res20[0] != -1) {
      puVar5 = (undefined4 *)((longlong)local_res20[0] * 0x20 + _DAT_1464b5c68);
    }
    puVar3 = puVar5 + 2;
    if (puVar5 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    if (puVar3 == (undefined4 *)0x0) {
      _DAT_1464b5ce8 = 0;
      uRam00000001464b5cec = 0;
      _DAT_1464b5cf0 = 0xffffffff;
      uRam00000001464b5cf4 = uStack_58._4_4_;
    }
    else {
      _DAT_1464b5ce8 = *puVar3;
      uRam00000001464b5cec = puVar3[1];
      _DAT_1464b5cf0 = puVar3[2];
      uRam00000001464b5cf4 = puVar3[3];
    }
  }
  local_60 = (undefined8 *)CONCAT44(uRam00000001464b5cec,_DAT_1464b5ce8);
  local_70 = (undefined2 *)CONCAT44(uRam00000001464b5cec,_DAT_1464b5ce8);
  uStack_68 = CONCAT44(uRam00000001464b5cf4,_DAT_1464b5cf0);
  uStack_58._0_4_ = _DAT_1464b5cf0;
  uStack_58._4_4_ = uRam00000001464b5cf4;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1464b5cb8);
  lVar1 = (longlong)local_60;
  if ((local_60 != (undefined8 *)0x0) && (param_4 != '\0')) {
    *(undefined8 *)
     ((longlong)(int)uStack_68 * 0x88 + 0x48 + *(longlong *)((longlong)local_60 + 0x18)) = 0;
  }
  if ((local_60 != (undefined8 *)param_2) || (param_4 = '\0', (int)uStack_68 != param_3)) {
    uStack_58 = (undefined *)CONCAT44(uStack_58._4_4_,param_3);
    local_60 = (undefined8 *)param_2;
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464b5cb8);
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464b5cb8);
    }
    _DAT_1464b5ce8 = (undefined4)local_60;
    uRam00000001464b5cec = local_60._4_4_;
    _DAT_1464b5cf0 = (int)uStack_58;
    uRam00000001464b5cf4 = uStack_58._4_4_;
    if (param_2 == 0) {
      DAT_1464b5ce0 = param_1;
      BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464b5cb8);
      if (BVar2 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1464b5cb8);
      }
      local_60 = (undefined8 *)0x0;
      uStack_58 = (undefined *)CONCAT44(uStack_58._4_4_,0xffffffff);
      _DAT_1464b5ce8 = 0;
      uRam00000001464b5cec = 0;
      _DAT_1464b5cf0 = 0xffffffff;
      uRam00000001464b5cf4 = uStack_58._4_4_;
      DAT_1464b5ce0 = param_1;
      TSet<TTuple<UObjectBase_const_*,FUniqueObjectGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>,FDefaultSetAllocator>
      ::Remove(&DAT_1464b5c68,param_1);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1464b5cb8);
    }
    else {
      local_60 = &DAT_1464b5ce0;
      uStack_58 = &DAT_1464b5ce8;
      DAT_1464b5ce0 = param_1;
      FUN_141728740(&DAT_1464b5c68,local_res20,&local_60,0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1464b5cb8);
    if (((param_4 != '\0') && (lVar1 != 0)) && (param_2 != 0)) {
      if (*(longlong *)(param_2 + 0xa0) == 0) {
        local_60 = (undefined8 *)0x0;
        uStack_58 = (undefined *)0x5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
        FGenericPlatformString::Memcpy(local_60,&DAT_143f3edc8,10);
      }
      else {
        local_res10 = *(undefined8 *)(*(longlong *)(param_2 + 0xa0) + 0x18);
        FName::ToString(&local_res10,&local_60);
      }
      puVar6 = &DAT_143f3eda8;
      puVar8 = (undefined8 *)&DAT_143f3eda8;
      if ((int)uStack_58 != 0) {
        puVar8 = local_60;
      }
      if (*(int *)(param_2 + 0x1e8) == 0) {
        local_res8 = &DAT_143f3eda8;
      }
      else {
        local_res8 = *(undefined2 **)(param_2 + 0x1e0);
      }
      if (*(longlong *)(lVar1 + 0xa0) == 0) {
        local_70 = (undefined2 *)0x0;
        uStack_68 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
        FGenericPlatformString::Memcpy(local_70,&DAT_143f3edc8,10);
      }
      else {
        local_78 = *(undefined8 *)(*(longlong *)(lVar1 + 0xa0) + 0x18);
        FName::ToString(&local_78,&local_70);
      }
      puVar9 = &DAT_143f3eda8;
      if ((int)uStack_68 != 0) {
        puVar9 = local_70;
      }
      if (*(int *)(lVar1 + 0x1e8) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = *(undefined2 **)(lVar1 + 0x1e0);
      }
      puVar4 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,local_50,0);
      if (*(int *)(puVar4 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*puVar4;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x86,
                 L"It is only legal to change linkers in the editor. Trying to change linker on %s from %s (Existing->LinkerRoot=%s) to %s (LinkerLoad->LinkerRoot=%s)"
                 ,puVar7,puVar10,puVar9,local_res8,puVar8);
      if (local_50[0] != 0) {
        FMemory::Free();
      }
      if (local_70 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_60 != (undefined8 *)0x0) {
        FMemory::Free();
      }
      if (*(longlong *)(param_2 + 0xa0) == 0) {
        uStack_68 = 5;
        local_70 = (undefined2 *)0x0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
        FGenericPlatformString::Memcpy(local_70,&DAT_143f3edc8,10);
      }
      else {
        local_res8 = *(undefined2 **)(*(longlong *)(param_2 + 0xa0) + 0x18);
        FName::ToString(&local_res8,&local_70);
      }
      puVar9 = &DAT_143f3eda8;
      if ((int)uStack_68 != 0) {
        puVar9 = local_70;
      }
      if (*(int *)(param_2 + 0x1e8) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = *(undefined2 **)(param_2 + 0x1e0);
      }
      if (*(longlong *)(lVar1 + 0xa0) == 0) {
        local_60 = (undefined8 *)0x0;
        uStack_58 = (undefined *)0x5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
        FGenericPlatformString::Memcpy(local_60,&DAT_143f3edc8,10);
      }
      else {
        local_res10 = *(undefined8 *)(*(longlong *)(lVar1 + 0xa0) + 0x18);
        FName::ToString(&local_res10,&local_60);
      }
      puVar8 = (undefined8 *)&DAT_143f3eda8;
      if ((int)uStack_58 != 0) {
        puVar8 = local_60;
      }
      if (*(int *)(lVar1 + 0x1e8) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = *(undefined2 **)(lVar1 + 0x1e0);
      }
      puVar4 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,local_50,0);
      if (*(int *)(puVar4 + 1) != 0) {
        puVar6 = (undefined2 *)*puVar4;
      }
      FDebug::AssertFailed
                (&DAT_144d3161d,"Unknown",0x86,
                 L"It is only legal to change linkers in the editor. Trying to change linker on %s from %s (Existing->LinkerRoot=%s) to %s (LinkerLoad->LinkerRoot=%s)"
                 ,puVar6,puVar7,puVar8,puVar10,puVar9);
      if (local_50[0] != 0) {
        FMemory::Free();
      }
      if (local_60 != (undefined8 *)0x0) {
        FMemory::Free();
      }
      if (local_70 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1417a7b40 StaticFindObjectFastExplicit body=89 status=ok
// SIG undefined StaticFindObjectFastExplicit(void)

void StaticFindObjectFastExplicit
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
               undefined4 param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1417a4e70();
  FUN_1417a7ba0(uVar1,param_1,param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 1417a7ba0 FUN_1417a7ba0 body=1322 status=ok
// SIG undefined FUN_1417a7ba0(void)

/* WARNING: Type propagation algorithm not settling */

_LIST_ENTRY *
FUN_1417a7ba0(LPCRITICAL_SECTION param_1,_LIST_ENTRY *param_2,_LIST_ENTRY *param_3,
             undefined8 *param_4,char param_5,uint param_6)

{
  _RTL_CRITICAL_SECTION **pp_Var1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  int iVar3;
  char cVar4;
  char cVar5;
  DWORD DVar6;
  BOOL BVar7;
  int iVar8;
  HANDLE *ppvVar9;
  _LIST_ENTRY *p_Var10;
  _LIST_ENTRY *p_Var11;
  uint uVar12;
  longlong lVar13;
  WORD *pWVar14;
  undefined2 *puVar15;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  bool bVar20;
  undefined8 local_d8;
  _LIST_ENTRY *p_Stack_d0;
  undefined4 local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  _RTL_CRITICAL_SECTION **local_a8;
  _LIST_ENTRY *local_a0;
  undefined8 uStack_98;
  _LIST_ENTRY *local_90;
  undefined8 uStack_88;
  int local_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char local_70;
  char local_6f;
  char local_6e;
  _LIST_ENTRY *local_68;
  undefined8 uStack_60;
  _LIST_ENTRY *p_Stack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar19 = (uint)((ulonglong)param_3 >> 0x20) ^ (uint)param_3;
  cVar5 = IsGarbageCollecting();
  if (cVar5 != '\0') {
    cVar5 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar6 = GetCurrentThreadId();
      bVar20 = false;
      if (DVar6 == DAT_1468c21c0) goto LAB_1417a7c05;
    }
    else {
LAB_1417a7c05:
      bVar20 = true;
    }
    if (bVar20) {
      lpCriticalSection = (LPCRITICAL_SECTION)0x0;
      goto LAB_1417a7c28;
    }
  }
  BVar7 = TryEnterCriticalSection(param_1);
  lpCriticalSection = param_1;
  if (BVar7 == 0) {
    EnterCriticalSection(param_1);
  }
LAB_1417a7c28:
  iVar3 = iStack_bc;
  if (param_1[1].LockCount != param_1[2].RecursionCount) {
    ppvVar9 = param_1[2].LockSemaphore;
    if (param_1[2].LockSemaphore == (HANDLE *)0x0) {
      ppvVar9 = &param_1[2].OwningThread;
    }
    iVar8 = *(int *)((longlong)ppvVar9 +
                    ((longlong)(int)param_1[2].SpinCount - 1U & (longlong)(int)uVar19) * 4);
    if (iVar8 != -1) {
      p_Var2 = param_1[1].DebugInfo;
      do {
        lVar13 = (longlong)iVar8;
        if (*(uint *)(&p_Var2->Type + lVar13 * 0x10) == uVar19) {
          if (((iVar8 != -1) && (pWVar14 = &p_Var2->Type + lVar13 * 0x10, pWVar14 != (WORD *)0x0))
             && (pp_Var1 = (_RTL_CRITICAL_SECTION **)(pWVar14 + 4),
                pp_Var1 != (_RTL_CRITICAL_SECTION **)0x0)) {
            p_Var11 = ((LIST_ENTRY *)(pWVar14 + 8))->Flink;
            if ((p_Var11 != (_LIST_ENTRY *)0x0) && (*pp_Var1 == (_RTL_CRITICAL_SECTION *)0x0)) {
              iVar8 = *(int *)&p_Var11[2].Blink;
              p_Stack_d0 = p_Var11 + 1;
              iVar17 = 0;
              local_d8 = (_LIST_ENTRY *)0x100000000;
              iStack_c4 = 0;
              iStack_c0 = 0;
              local_68 = p_Var11;
              if (iVar8 == 0) goto LAB_1417a7e98;
              puVar18 = (uint *)((ulonglong)(p_Var11[2].Flink != (_LIST_ENTRY *)0x0) - 1 &
                                 (ulonglong)p_Stack_d0 | (ulonglong)p_Var11[2].Flink);
              uVar19 = *puVar18;
              iVar16 = 0;
              if (uVar19 != 0) goto LAB_1417a7d97;
              goto LAB_1417a7d70;
            }
            local_d8 = (_LIST_ENTRY *)0x100000000;
            p_Stack_d0 = (_LIST_ENTRY *)&DAT_1464b5c20;
            iStack_c4 = 0;
            iStack_c0 = 0;
            if (DAT_1464b5c38 == 0) goto LAB_1417a7e89;
            puVar18 = DAT_1464b5c30;
            if (DAT_1464b5c30 == (uint *)0x0) {
              puVar18 = (uint *)&DAT_1464b5c20;
            }
            uVar19 = *puVar18;
            iVar8 = 0;
            iVar17 = 0;
            if (uVar19 != 0) goto LAB_1417a7e58;
            goto LAB_1417a7e33;
          }
          break;
        }
        iVar8 = *(int *)&(&p_Var2->ProcessLocksList)[lVar13 * 2].Blink;
      } while (iVar8 != -1);
    }
  }
LAB_1417a7c9a:
  p_Var11 = (_LIST_ENTRY *)0x0;
LAB_1417a7c9c:
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return p_Var11;
  while (uVar19 = puVar18[(longlong)iVar16 + 1], iVar16 = iVar16 + 1, uVar19 == 0) {
LAB_1417a7d70:
    iVar17 = iVar17 + 0x20;
    local_d8 = (_LIST_ENTRY *)CONCAT44(local_d8._4_4_,iVar16 + 1);
    iStack_c0 = iVar17;
    if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar16) goto LAB_1417a7dc3;
  }
LAB_1417a7d97:
  uVar19 = uVar19 - 1 & uVar19 ^ uVar19;
  iVar17 = 0x1f;
  if (uVar19 != 0) {
    for (; uVar19 >> iVar17 == 0; iVar17 = iVar17 + -1) {
    }
  }
  local_d8 = (_LIST_ENTRY *)CONCAT44(uVar19,(undefined4)local_d8);
  if (uVar19 == 0) {
    iVar17 = 0x20;
  }
  else {
    iVar17 = 0x1f - iVar17;
  }
  iStack_c4 = (iStack_c0 - iVar17) + 0x1f;
  if (iVar8 < iStack_c4) {
LAB_1417a7dc3:
    iStack_c4 = iVar8;
  }
  goto LAB_1417a7e98;
  while (uVar19 = puVar18[(longlong)iVar8 + 1], iVar8 = iVar8 + 1, iVar17 = iStack_c0, uVar19 == 0)
  {
LAB_1417a7e33:
    iStack_c0 = iVar17 + 0x20;
    local_d8 = (_LIST_ENTRY *)CONCAT44(local_d8._4_4_,iVar8 + 1);
    if ((int)(DAT_1464b5c38 + -1 + (DAT_1464b5c38 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar8)
    goto LAB_1417a7e85;
  }
LAB_1417a7e58:
  uVar19 = uVar19 - 1 & uVar19 ^ uVar19;
  iVar8 = 0x1f;
  if (uVar19 != 0) {
    for (; uVar19 >> iVar8 == 0; iVar8 = iVar8 + -1) {
    }
  }
  local_d8 = (_LIST_ENTRY *)CONCAT44(uVar19,(undefined4)local_d8);
  if (uVar19 == 0) {
    iVar8 = 0x20;
  }
  else {
    iVar8 = 0x1f - iVar8;
  }
  iStack_c4 = (iStack_c0 - iVar8) + 0x1f;
  if (DAT_1464b5c38 < iStack_c4) {
LAB_1417a7e85:
    iStack_c4 = DAT_1464b5c38;
  }
LAB_1417a7e89:
  local_68 = (_LIST_ENTRY *)&DAT_1464b5c10;
LAB_1417a7e98:
  local_80 = iStack_c0;
  iVar8 = iStack_c4;
  local_90 = p_Stack_d0;
  uStack_98 = local_d8;
  uStack_50 = CONCAT44(iStack_c4,0xffffffff);
  local_b8 = CONCAT44(iStack_bc,iStack_c0);
  uStack_60 = local_d8;
  p_Stack_58 = p_Stack_d0;
  local_c8 = SUB84(p_Stack_d0,0);
  iStack_c4 = (int)((ulonglong)p_Stack_d0 >> 0x20);
  iStack_c0 = 0xffffffff;
  iStack_bc = iVar8;
  local_d8 = local_68;
  p_Stack_d0 = (_LIST_ENTRY *)uStack_98;
  uStack_88 = CONCAT44(iVar8,0xffffffff);
  local_a0 = local_68;
  uStack_b0._0_4_ = SUB84(local_68,0);
  uStack_b0._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  iStack_7c = iVar3;
  uStack_78 = (undefined4)uStack_b0;
  uStack_74 = uStack_b0._4_4_;
  if ((p_Var11 == (_LIST_ENTRY *)0x0) ||
     (p_Var10 = p_Var11, *pp_Var1 != (_RTL_CRITICAL_SECTION *)0x0)) {
    p_Var10 = (_LIST_ENTRY *)0x0;
  }
  local_70 = p_Var10 != (_LIST_ENTRY *)0x0;
  if ((*pp_Var1 == (_RTL_CRITICAL_SECTION *)0x0) && (p_Var11 == (_LIST_ENTRY *)0x0)) {
    local_6f = '\x01';
  }
  else {
    local_6f = '\0';
  }
  local_6e = '\0';
  uStack_b0 = local_68;
  local_a8 = pp_Var1;
  uStack_48 = local_b8;
  do {
    cVar5 = local_70;
    pp_Var1 = local_a8;
    iVar3 = uStack_88._4_4_;
LAB_1417a7f20:
    cVar4 = local_6e;
    if (cVar5 == '\0') {
      bVar20 = local_6f == '\0';
    }
    else {
      bVar20 = iVar3 < *(int *)&local_90[1].Blink;
    }
    if (!bVar20) goto LAB_1417a7c9a;
    if (cVar5 == '\0') {
      p_Var11 = (_LIST_ENTRY *)((ulonglong)(-(uint)(local_6e != '\0') & 8) + (longlong)pp_Var1);
    }
    else {
      p_Var11 = local_a0->Flink + iVar3;
    }
    p_Var11 = p_Var11->Flink;
    if ((p_Var11[1].Blink == param_3) && ((*(uint *)&p_Var11->Blink & param_6) == 0)) {
      iVar8 = *(int *)((longlong)&p_Var11->Blink + 4);
      if (iVar8 < (int)DAT_1469e91c4) {
        uVar12 = iVar8 >> 0x1f & 0xffff;
        uVar19 = iVar8 + uVar12;
        lVar13 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar19 >> 0x10) * 8) +
                 (longlong)(int)((uVar19 & 0xffff) - uVar12) * 0x18;
      }
      else {
        lVar13 = 0;
      }
      if ((*(uint *)(lVar13 + 8) >> 0x1c & 1) == 0) {
        if (param_2 != (_LIST_ENTRY *)0x0) {
          if (param_5 == '\0') {
            if ((*(int *)&p_Var11[1].Flink[9].Flink < *(int *)&param_2[9].Flink) ||
               ((_LIST_ENTRY **)
                *(undefined1 **)
                 ((longlong)&(*(_LIST_ENTRY **)((longlong)(p_Var11[1].Flink + 8) + 8))->Flink +
                 (longlong)*(int *)&param_2[9].Flink * 8) !=
                (_LIST_ENTRY **)((longlong)(param_2 + 8) + 8U))) {
              bVar20 = false;
            }
            else {
              bVar20 = true;
            }
          }
          else {
            bVar20 = p_Var11[1].Flink == param_2;
          }
          if (!bVar20) goto LAB_1417a805c;
        }
        UObjectBaseUtility::GetPathName(p_Var11,&local_d8,0);
        if (*(int *)(param_4 + 1) == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*param_4;
        }
        p_Var10 = (_LIST_ENTRY *)&DAT_143f3eda8;
        if ((int)p_Stack_d0 != 0) {
          p_Var10 = local_d8;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(p_Var10,puVar15);
        if (iVar8 == 0) {
          if (local_d8 != (_LIST_ENTRY *)0x0) {
            FMemory::Free();
          }
          goto LAB_1417a7c9c;
        }
        if (local_d8 != (_LIST_ENTRY *)0x0) {
          FMemory::Free();
        }
      }
    }
LAB_1417a805c:
    if (cVar5 == '\0') {
      if ((cVar4 == '\0') && (((LIST_ENTRY *)(pp_Var1 + 1))->Flink != (_LIST_ENTRY *)0x0)) {
        local_6f = '\0';
        local_6e = '\x01';
      }
      else {
        local_6f = '\x01';
        local_6e = '\x01';
      }
      goto LAB_1417a7f20;
    }
    uStack_88 = CONCAT44(uStack_88._4_4_,(uint)uStack_88 & ~uStack_98._4_4_);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
  } while( true );
}



// FUNCTION 1417a80d0 StaticFindObjectFastInternal body=120 status=ok
// SIG undefined StaticFindObjectFastInternal(void)

void StaticFindObjectFastInternal
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
               undefined1 param_5,uint param_6,undefined4 param_7)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1417a4e70();
  FUN_1417a8150(uVar1,param_1,param_2,param_3,param_4,param_5,param_6 | 0x4000,param_7);
  return;
}



// FUNCTION 1417a8150 FUN_1417a8150 body=2314 status=ok
// SIG undefined FUN_1417a8150(void)

/* WARNING: Type propagation algorithm not settling */

LPCRITICAL_SECTION
FUN_1417a8150(LPCRITICAL_SECTION param_1,HANDLE param_2,ULONG_PTR param_3,HANDLE param_4,
             char param_5,char param_6,uint param_7,uint param_8)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  char cVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  DWORD DVar6;
  BOOL BVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  HANDLE *ppvVar12;
  LPCRITICAL_SECTION p_Var13;
  undefined8 uVar14;
  _LIST_ENTRY **pp_Var15;
  uint uVar16;
  longlong lVar17;
  WORD *pWVar18;
  uint uVar19;
  uint uVar20;
  LPCRITICAL_SECTION p_Var21;
  uint uVar22;
  LPCRITICAL_SECTION p_Var23;
  _RTL_CRITICAL_SECTION *p_Var24;
  LPCRITICAL_SECTION p_Var25;
  uint *puVar26;
  _RTL_CRITICAL_SECTION *p_Var27;
  undefined1 auVar28 [8];
  LPCRITICAL_SECTION p_Var29;
  bool bVar30;
  HANDLE local_res20;
  _RTL_CRITICAL_SECTION **local_f8;
  undefined1 local_f0 [8];
  HANDLE *ppvStack_e8;
  int local_e0;
  int iStack_dc;
  uint uStack_d8;
  int iStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  LPCRITICAL_SECTION local_c0;
  uint uStack_b8;
  int iStack_b4;
  int iStack_b0;
  _RTL_CRITICAL_SECTION **local_a8;
  LPCRITICAL_SECTION local_a0;
  undefined8 uStack_98;
  longlong local_90;
  undefined8 uStack_88;
  uint local_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char local_70;
  char local_6f;
  char local_6e;
  LPCRITICAL_SECTION local_68;
  undefined8 uStack_60;
  longlong lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  auVar28 = (undefined1  [8])0x0;
  bVar5 = false;
  uVar22 = (uint)param_4;
  local_res20 = param_4;
  if (param_3 != 0) {
    uVar22 = (uint)((ulonglong)param_4 >> 0x20) ^ (uint)((longlong)param_3 >> 6) ^ uVar22;
    cVar3 = IsGarbageCollecting();
    if (cVar3 != '\0') {
      cVar3 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar6 = GetCurrentThreadId();
        bVar5 = false;
        if (DVar6 == DAT_1468c21c0) goto LAB_1417a81dd;
      }
      else {
LAB_1417a81dd:
        bVar5 = true;
      }
      p_Var21 = (LPCRITICAL_SECTION)auVar28;
      if (bVar5) goto LAB_1417a8201;
    }
    BVar7 = TryEnterCriticalSection(param_1);
    p_Var21 = param_1;
    if (BVar7 == 0) {
      EnterCriticalSection(param_1);
    }
LAB_1417a8201:
    p_Var23 = param_1 + 3;
    iStack_b4 = -1;
    iStack_b0 = -1;
    local_c0 = p_Var23;
    uStack_b8 = uVar22;
    TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
    ::ConditionalRehash(p_Var23,param_1[3].LockCount - param_1[4].RecursionCount,0);
    iVar8 = (int)param_1[4].SpinCount;
    if (iVar8 != 0) {
      ppvVar12 = param_1[4].LockSemaphore;
      if (param_1[4].LockSemaphore == (HANDLE *)0x0) {
        ppvVar12 = &param_1[4].OwningThread;
      }
      iStack_b0 = *(int *)((longlong)ppvVar12 + ((longlong)iVar8 - 1U & (longlong)(int)uVar22) * 4);
      iStack_b4 = iStack_b0;
      if (iStack_b0 != -1) {
        do {
          iStack_b0 = *(int *)((longlong)&p_Var23->DebugInfo->ProcessLocksList +
                              (longlong)iStack_b4 * 0x18);
          if (*(uint *)(&p_Var23->DebugInfo->Type + (longlong)iStack_b4 * 0xc) == uVar22) break;
          iStack_b4 = iStack_b0;
        } while (iStack_b0 != -1);
      }
    }
    ppvStack_e8._0_4_ = uStack_b8;
    local_f0 = (undefined1  [8])local_c0;
    unique0x1000061f = iStack_b4;
    local_e0 = iStack_b0;
    p_Var27 = (_RTL_CRITICAL_SECTION *)auVar28;
    if (iStack_b4 == -1) {
LAB_1417a83eb:
      if (p_Var21 == (LPCRITICAL_SECTION)0x0) {
        return p_Var27;
      }
      LeaveCriticalSection(p_Var21);
      return p_Var27;
    }
    p_Var1 = p_Var23->DebugInfo;
    iVar8 = iStack_b0;
    iVar9 = iStack_b4;
    do {
      p_Var27 = (&p_Var1->CriticalSection)[(longlong)iVar9 * 3];
      if (((p_Var27->LockSemaphore == local_res20) && ((p_Var27->LockCount & param_7) == 0)) &&
         (p_Var27->SpinCount == param_3)) {
        if (param_2 != (HANDLE)0x0) {
          if (param_5 == '\0') {
            if ((*(int *)((longlong)p_Var27->OwningThread + 0x90) <
                 *(int *)((longlong)param_2 + 0x90)) ||
               (bVar5 = true,
               *(longlong *)
                (*(longlong *)((longlong)p_Var27->OwningThread + 0x88) +
                (longlong)*(int *)((longlong)param_2 + 0x90) * 8) != (longlong)param_2 + 0x88)) {
              bVar5 = false;
            }
          }
          else {
            bVar5 = p_Var27->OwningThread == param_2;
          }
          if (!bVar5) goto joined_r0x0001417a83b0;
        }
        uVar22 = p_Var27->RecursionCount;
        p_Var24 = (_RTL_CRITICAL_SECTION *)auVar28;
        if ((int)uVar22 < (int)DAT_1469e91c4) {
          uVar16 = uVar22 & 0xffff;
          if ((int)uVar22 < 0) {
            uVar22 = uVar22 + 0xffff;
            uVar16 = uVar16 - 0x10000;
          }
          p_Var24 = (_RTL_CRITICAL_SECTION *)
                    (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar22 >> 0x10) * 8) +
                    (longlong)(int)uVar16 * 0x18);
        }
        if ((p_Var24->LockCount & (param_8 | 0x10000000)) == 0) goto LAB_1417a83eb;
      }
joined_r0x0001417a83b0:
      do {
        iVar9 = iVar8;
        p_Var27 = (_RTL_CRITICAL_SECTION *)auVar28;
        if (iVar9 == -1) goto LAB_1417a83eb;
        iVar8 = *(int *)((longlong)&p_Var1->ProcessLocksList + (longlong)iVar9 * 0x18);
      } while (*(uint *)(&p_Var1->Type + (longlong)iVar9 * 0xc) != uStack_b8);
    } while( true );
  }
  FName::ToString(&local_res20,&local_c0);
  iVar8 = FUN_141592950(&local_c0,&DAT_144d31614,0,1,0xffffffff);
  iVar9 = FUN_141592950(&local_c0,&DAT_144d31618,0,1,0xffffffff);
  if (iVar8 <= iVar9) {
    iVar8 = iVar9;
  }
  if (iVar8 != -1) {
    uVar22 = iVar8 + 0x80000000;
    uVar16 = uStack_b8 - 1;
    if (uStack_b8 == 0) {
      uVar16 = 0;
    }
    if (iVar8 + 1U < uVar16) {
      uVar16 = iVar8 + 1U;
    }
    uVar19 = uStack_b8 - 1;
    if (uStack_b8 == 0) {
      uVar19 = 0;
    }
    uVar20 = uVar16;
    if ((uVar16 <= uVar22) && (uVar20 = uVar19, uVar22 < uVar19)) {
      uVar20 = uVar22;
    }
    p_Var21 = (LPCRITICAL_SECTION)&DAT_143f3eda8;
    if (uStack_b8 != 0) {
      p_Var21 = local_c0;
    }
    iVar8 = uVar20 - uVar16;
    uVar22 = iVar8 + 1;
    if (iVar8 == 0) {
      uVar22 = 0;
    }
    _local_f0 = ZEXT416(uVar22) << 0x40;
    bVar30 = uVar22 == 0;
    if (0 < (int)uVar22) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f0,0);
      iVar9 = (int)ppvStack_e8;
      auVar28 = local_f0;
      bVar30 = (int)ppvStack_e8 == 0;
      if (0 < (int)ppvStack_e8) {
        wcsncpy((wchar_t *)local_f0,
                (wchar_t *)((longlong)&p_Var21->DebugInfo + (longlong)(int)uVar16 * 2),
                (longlong)iVar8);
        *(undefined2 *)((longlong)(PRTL_CRITICAL_SECTION_DEBUG *)auVar28 + (longlong)iVar8 * 2) = 0;
        bVar30 = iVar9 == 0;
      }
    }
    p_Var27 = (_RTL_CRITICAL_SECTION *)&DAT_143f3eda8;
    if (!bVar30) {
      p_Var27 = (_RTL_CRITICAL_SECTION *)auVar28;
    }
    puVar11 = (undefined8 *)FName::FName(&local_f8,p_Var27,1);
    param_4 = (HANDLE)*puVar11;
    uVar22 = (uint)param_4;
    if (auVar28 != (undefined1  [8])0x0) {
      FMemory::Free(auVar28);
    }
  }
  p_Var21 = (LPCRITICAL_SECTION)0x0;
  uVar22 = (uint)((ulonglong)param_4 >> 0x20) ^ uVar22;
  cVar3 = IsGarbageCollecting();
  if (cVar3 == '\0') {
LAB_1417a8588:
    BVar7 = TryEnterCriticalSection(param_1);
    p_Var23 = param_1;
    if (BVar7 == 0) {
      EnterCriticalSection(param_1);
    }
  }
  else {
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar6 = GetCurrentThreadId();
      bVar30 = false;
      if (DVar6 == DAT_1468c21c0) goto LAB_1417a857d;
    }
    else {
LAB_1417a857d:
      bVar30 = true;
    }
    p_Var23 = p_Var21;
    if (!bVar30) goto LAB_1417a8588;
  }
  iVar8 = iStack_d4;
  p_Var29 = p_Var21;
  if (param_1[1].LockCount != param_1[2].RecursionCount) {
    ppvVar12 = param_1[2].LockSemaphore;
    if (param_1[2].LockSemaphore == (HANDLE *)0x0) {
      ppvVar12 = &param_1[2].OwningThread;
    }
    iVar9 = *(int *)((longlong)ppvVar12 +
                    ((longlong)(int)param_1[2].SpinCount - 1U & (longlong)(int)uVar22) * 4);
    if (iVar9 != -1) {
      p_Var1 = param_1[1].DebugInfo;
      do {
        lVar17 = (longlong)iVar9;
        if (*(uint *)(&p_Var1->Type + lVar17 * 0x10) == uVar22) {
          if (((iVar9 != -1) && (pWVar18 = &p_Var1->Type + lVar17 * 0x10, pWVar18 != (WORD *)0x0))
             && (local_f8 = (_RTL_CRITICAL_SECTION **)(pWVar18 + 4),
                local_f8 != (_RTL_CRITICAL_SECTION **)0x0)) {
            p_Var29 = (LPCRITICAL_SECTION)((LIST_ENTRY *)(pWVar18 + 8))->Flink;
            if ((p_Var29 != (LPCRITICAL_SECTION)0x0) && (*local_f8 == (_RTL_CRITICAL_SECTION *)0x0))
            {
              iVar9 = *(int *)&p_Var29[1].DebugInfo;
              ppvStack_e8 = &p_Var29->OwningThread;
              local_f0 = (undefined1  [8])0x100000000;
              iStack_dc = 0;
              uStack_d8 = 0;
              local_68 = p_Var29;
              if (iVar9 == 0) goto LAB_1417a87ee;
              puVar26 = (uint *)((ulonglong)(p_Var29->SpinCount != 0) - 1 &
                                 (ulonglong)&p_Var29->OwningThread | p_Var29->SpinCount);
              uVar22 = *puVar26;
              p_Var13 = p_Var21;
              p_Var25 = p_Var21;
              goto joined_r0x0001417a86a3;
            }
            ppvStack_e8 = (HANDLE *)&DAT_1464b5c20;
            local_f0 = (undefined1  [8])0x100000000;
            iStack_dc = 0;
            uStack_d8 = 0;
            if (DAT_1464b5c38 == 0) goto LAB_1417a87de;
            puVar26 = DAT_1464b5c30;
            if (DAT_1464b5c30 == (uint *)0x0) {
              puVar26 = (uint *)&DAT_1464b5c20;
            }
            uVar22 = *puVar26;
            p_Var13 = p_Var21;
            p_Var25 = p_Var21;
            goto joined_r0x0001417a877f;
          }
          break;
        }
        iVar9 = *(int *)&(&p_Var1->ProcessLocksList)[lVar17 * 2].Blink;
      } while (iVar9 != -1);
    }
  }
  goto LAB_1417a8a1f;
joined_r0x0001417a86a3:
  if (uVar22 != 0) goto LAB_1417a86d9;
  iVar10 = (int)p_Var13;
  uStack_d8 = (int)p_Var25 + 0x20;
  p_Var25 = (LPCRITICAL_SECTION)(ulonglong)uStack_d8;
  p_Var13 = (LPCRITICAL_SECTION)(ulonglong)(iVar10 + 1U);
  local_f0._0_4_ = iVar10 + 1U;
  if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar10) goto LAB_1417a8706;
  uVar22 = puVar26[(longlong)iVar10 + 1];
  goto joined_r0x0001417a86a3;
LAB_1417a86d9:
  uVar22 = uVar22 - 1 & uVar22 ^ uVar22;
  iVar10 = 0x1f;
  if (uVar22 != 0) {
    for (; uVar22 >> iVar10 == 0; iVar10 = iVar10 + -1) {
    }
  }
  local_f0._4_4_ = uVar22;
  if (uVar22 == 0) {
    iVar10 = 0x20;
  }
  else {
    iVar10 = 0x1f - iVar10;
  }
  iStack_dc = (uStack_d8 - iVar10) + 0x1f;
  if (iVar9 < iStack_dc) {
LAB_1417a8706:
    iStack_dc = iVar9;
  }
  goto LAB_1417a87ee;
joined_r0x0001417a877f:
  if (uVar22 != 0) goto LAB_1417a87a8;
  iVar9 = (int)p_Var13;
  uStack_d8 = (int)p_Var25 + 0x20;
  p_Var25 = (LPCRITICAL_SECTION)(ulonglong)uStack_d8;
  p_Var13 = (LPCRITICAL_SECTION)(ulonglong)(iVar9 + 1U);
  local_f0._0_4_ = iVar9 + 1U;
  if ((int)(DAT_1464b5c38 + -1 + (DAT_1464b5c38 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9)
  goto LAB_1417a87d5;
  uVar22 = puVar26[(longlong)iVar9 + 1];
  goto joined_r0x0001417a877f;
LAB_1417a87a8:
  uVar22 = uVar22 - 1 & uVar22 ^ uVar22;
  iVar9 = 0x1f;
  if (uVar22 != 0) {
    for (; uVar22 >> iVar9 == 0; iVar9 = iVar9 + -1) {
    }
  }
  local_f0._4_4_ = uVar22;
  if (uVar22 == 0) {
    iVar9 = 0x20;
  }
  else {
    iVar9 = 0x1f - iVar9;
  }
  iStack_dc = (uStack_d8 - iVar9) + 0x1f;
  if (DAT_1464b5c38 < iStack_dc) {
LAB_1417a87d5:
    iStack_dc = DAT_1464b5c38;
  }
LAB_1417a87de:
  local_68 = (LPCRITICAL_SECTION)&DAT_1464b5c10;
LAB_1417a87ee:
  local_80 = uStack_d8;
  iVar9 = iStack_dc;
  uStack_50 = CONCAT44(iStack_dc,0xffffffff);
  local_d0 = CONCAT44(iStack_d4,uStack_d8);
  uStack_98 = local_f0;
  local_90 = (longlong)ppvStack_e8;
  uStack_60 = local_f0;
  lStack_58 = (longlong)ppvStack_e8;
  local_e0 = local_f0._8_4_;
  iStack_dc = local_f0._12_4_;
  uStack_d8 = 0xffffffff;
  iStack_d4 = iVar9;
  ppvStack_e8 = (HANDLE *)local_f0;
  local_f0 = (undefined1  [8])local_68;
  uStack_88 = CONCAT44(iVar9,0xffffffff);
  local_a0 = local_68;
  uStack_c8._0_4_ = SUB84(local_68,0);
  uStack_c8._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  iStack_7c = iVar8;
  uStack_78 = (undefined4)uStack_c8;
  uStack_74 = uStack_c8._4_4_;
  if ((p_Var29 == (LPCRITICAL_SECTION)0x0) ||
     (p_Var13 = p_Var29, *local_f8 != (_RTL_CRITICAL_SECTION *)0x0)) {
    p_Var13 = p_Var21;
  }
  cVar3 = p_Var13 != (LPCRITICAL_SECTION)0x0;
  if ((*local_f8 == (_RTL_CRITICAL_SECTION *)0x0) && (p_Var29 == (LPCRITICAL_SECTION)0x0)) {
    local_6f = '\x01';
  }
  else {
    local_6f = '\0';
  }
  local_6e = '\0';
  uStack_c8 = local_68;
  local_a8 = local_f8;
  local_70 = cVar3;
  uStack_48 = local_d0;
  while( true ) {
    cVar2 = local_6e;
    if (cVar3 == '\0') {
      bVar30 = local_6f == '\0';
    }
    else {
      bVar30 = uStack_88._4_4_ < *(int *)(local_90 + 0x18);
    }
    p_Var29 = p_Var21;
    if (!bVar30) break;
    if (cVar3 == '\0') {
      pp_Var15 = (_LIST_ENTRY **)((ulonglong)(-(uint)(local_6e != '\0') & 8) + (longlong)local_f8);
    }
    else {
      pp_Var15 = (_LIST_ENTRY **)
                 ((longlong)&local_a0->DebugInfo->Type + (longlong)uStack_88._4_4_ * 2 * 8);
    }
    p_Var29 = (LPCRITICAL_SECTION)*pp_Var15;
    if (((p_Var29->LockSemaphore == param_4) && ((p_Var29->LockCount & param_7) == 0)) &&
       ((param_6 != '\0' || (p_Var29->SpinCount == 0)))) {
      if (param_2 != (HANDLE)0x0) {
        if (param_5 == '\0') {
          if ((*(int *)((longlong)p_Var29->OwningThread + 0x90) < *(int *)((longlong)param_2 + 0x90)
              ) || (bVar30 = true,
                   *(longlong *)
                    (*(longlong *)((longlong)p_Var29->OwningThread + 0x88) +
                    (longlong)*(int *)((longlong)param_2 + 0x90) * 8) != (longlong)param_2 + 0x88))
          {
            bVar30 = false;
          }
        }
        else {
          bVar30 = p_Var29->OwningThread == param_2;
        }
        if (!bVar30) goto LAB_1417a89a0;
      }
      uVar22 = p_Var29->RecursionCount;
      p_Var13 = p_Var21;
      if ((int)uVar22 < (int)DAT_1469e91c4) {
        uVar16 = uVar22 & 0xffff;
        if ((int)uVar22 < 0) {
          uVar22 = uVar22 + 0xffff;
          uVar16 = uVar16 - 0x10000;
        }
        p_Var13 = (LPCRITICAL_SECTION)
                  (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar22 >> 0x10) * 8) +
                  (longlong)(int)uVar16 * 0x18);
      }
      if ((p_Var13->LockCount & (param_8 | 0x10000000)) != 0) goto LAB_1417a89a0;
      bVar5 = true;
      uVar14 = UObjectBaseUtility::GetPathName(p_Var29,local_f0,0);
      cVar4 = FString::EndsWith(uVar14,&local_c0);
      if (cVar4 == '\0') goto LAB_1417a89a0;
      bVar30 = true;
    }
    else {
LAB_1417a89a0:
      bVar30 = false;
    }
    if (bVar5) {
      bVar5 = false;
      if (local_f0 != (undefined1  [8])0x0) {
        FMemory::Free();
      }
    }
    if (bVar30) break;
    if (cVar3 == '\0') {
      if ((cVar2 == '\0') && (((LIST_ENTRY *)(local_f8 + 1))->Flink != (_LIST_ENTRY *)0x0)) {
        local_6f = '\0';
        local_6e = '\x01';
      }
      else {
        local_6f = '\x01';
        local_6e = '\x01';
      }
    }
    else {
      uStack_88 = CONCAT44(uStack_88._4_4_,(uint)uStack_88 & ~uStack_98._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_98);
      local_f8 = local_a8;
      cVar3 = local_70;
    }
  }
LAB_1417a8a1f:
  if (p_Var23 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(p_Var23);
  }
  if (local_c0 != (LPCRITICAL_SECTION)0x0) {
    FMemory::Free();
  }
  return p_Var29;
}



// FUNCTION 1417a8a60 FUN_1417a8a60 body=629 status=ok
// SIG undefined FUN_1417a8a60(void)

void FUN_1417a8a60(uint param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  BOOL BVar7;
  longlong lVar8;
  uint *puVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_a8;
  uint *puStack_a0;
  undefined4 local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined8 uStack_80;
  uint *local_78;
  uint uStack_70;
  int iStack_6c;
  int local_68;
  undefined4 uStack_64;
  longlong *local_60;
  undefined8 *puStack_58;
  uint *puStack_50;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  puStack_a0 = (uint *)local_res8;
  local_res8[0] = 0;
  local_a8 = (undefined8 *)&LAB_1417a3cc0;
  lVar8 = FUN_1415d8310(&local_a8,&DAT_1464b5cf8);
  lVar1 = lVar8 + 0x18;
  if (param_1 == 0xffffffff) {
    FUN_1417a73d0(lVar1);
    return;
  }
  local_88 = (longlong *)(lVar8 + 0x20);
  iVar2 = *(int *)(lVar8 + 0x48);
  puStack_a0 = (uint *)(lVar8 + 0x30);
  local_a8 = (undefined8 *)0x100000000;
  iStack_94 = 0;
  iStack_90 = 0;
  if (iVar2 != 0) {
    puVar9 = *(uint **)(lVar8 + 0x40);
    if (*(uint **)(lVar8 + 0x40) == (uint *)0x0) {
      puVar9 = puStack_a0;
    }
    uVar5 = *puVar9;
    iStack_90 = 0;
    iVar6 = 0;
    while (uVar5 == 0) {
      iStack_90 = iStack_90 + 0x20;
      uVar4 = (ulonglong)local_a8 >> 0x20;
      local_a8 = (undefined8 *)CONCAT44((int)uVar4,iVar6 + 1);
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1417a8b6f;
      uVar5 = puVar9[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar5 = -uVar5 & uVar5;
    iVar6 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    local_a8 = (undefined8 *)CONCAT44(uVar5,SUB84(local_a8,0));
    if (uVar5 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_94 = (iStack_90 - iVar6) + 0x1f;
    if (iVar2 < iStack_94) {
LAB_1417a8b6f:
      iStack_94 = iVar2;
    }
  }
  local_98 = 0xffffffff;
  uStack_48 = 0xffffffff;
  iStack_44 = iStack_94;
  iStack_40 = iStack_90;
  uStack_3c = uStack_8c;
  puStack_58 = local_a8;
  uStack_70 = 0xffffffff;
  iStack_6c = iStack_94;
  uStack_80 = local_a8;
  local_68 = iStack_90;
  uStack_64 = uStack_8c;
  local_78 = puStack_a0;
  local_60 = local_88;
  puStack_50 = puStack_a0;
  if (iStack_94 < iVar2) {
    do {
      uVar5 = *(uint *)(*local_88 + 8 + (longlong)iStack_6c * 0x18);
      if ((param_1 & uVar5) != 0) {
        uVar3 = *(undefined8 *)(*local_88 + (longlong)iStack_6c * 0x18);
        uVar5 = ~param_1 & uVar5;
        BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x70));
        if (BVar7 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x70));
        }
        *(undefined8 *)(lVar8 + 0x98) = uVar3;
        *(uint *)(lVar8 + 0xa0) = uVar5;
        if (uVar5 == 0) {
          FUObjectAnnotationSparse<FObjectMark,1>::RemoveAnnotation(lVar1,uVar3);
        }
        else {
          if (*(int *)(lVar8 + 0x28) == *(int *)(lVar8 + 0x54)) {
            FUObjectArray::AddUObjectDeleteListener(&DAT_1469e91a0,lVar1);
          }
          local_a8 = (undefined8 *)(lVar8 + 0x98);
          puStack_a0 = (uint *)(lVar8 + 0xa0);
          FUN_140a9d380(lVar8 + 0x20,local_res10,&local_a8,0);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x70));
      }
      uStack_70 = uStack_70 & ~uStack_80._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
    } while (iStack_6c < (int)local_78[6]);
  }
  return;
}



// FUNCTION 1417a8ce0 FUN_1417a8ce0 body=259 status=ok
// SIG undefined FUN_1417a8ce0(void)

void FUN_1417a8ce0(longlong param_1,uint param_2)

{
  uint uVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 *local_28;
  undefined1 *puStack_20;
  
  puStack_20 = local_res10;
  local_res10[0] = 0;
  local_28 = &LAB_1417a3cc0;
  lVar3 = FUN_1415d8310(&local_28,&DAT_1464b5cf8);
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x70));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x70));
  }
  if (param_1 != *(longlong *)(lVar3 + 0x98)) {
    *(longlong *)(lVar3 + 0x98) = param_1;
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(lVar3 + 0x20,local_res8);
    puVar5 = (undefined4 *)0x0;
    if (local_res8[0] != -1) {
      puVar5 = (undefined4 *)(*(longlong *)(lVar3 + 0x20) + (longlong)local_res8[0] * 0x18);
    }
    puVar4 = puVar5 + 2;
    if (puVar5 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    if (puVar4 == (undefined4 *)0x0) {
      *(undefined4 *)(lVar3 + 0xa0) = 0;
    }
    else {
      *(undefined4 *)(lVar3 + 0xa0) = *puVar4;
    }
  }
  uVar1 = *(uint *)(lVar3 + 0xa0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x70));
  if ((param_2 & uVar1) != 0) {
    FUObjectAnnotationSparse<FObjectMark,1>::AddAnnotation(lVar3 + 0x18,param_1,~param_2 & uVar1);
  }
  return;
}



// FUNCTION 1417a8df0 FUN_1417a8df0 body=2374 status=ok
// SIG undefined FUN_1417a8df0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1417a8df0(_RTL_CRITICAL_SECTION *param_1)

{
  _RTL_CRITICAL_SECTION **pp_Var1;
  uint uVar2;
  HANDLE pvVar3;
  _LIST_ENTRY *p_Var4;
  bool bVar5;
  char cVar6;
  DWORD DVar7;
  BOOL BVar8;
  uint uVar9;
  int iVar10;
  LPCRITICAL_SECTION p_Var11;
  HANDLE *ppvVar12;
  LPCRITICAL_SECTION p_Var13;
  int iVar14;
  longlong lVar15;
  WORD *pWVar16;
  PRTL_CRITICAL_SECTION_DEBUG p_Var17;
  _RTL_CRITICAL_SECTION *p_Var18;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION p_Var19;
  uint uVar20;
  uint *puVar21;
  PRTL_CRITICAL_SECTION_DEBUG *pp_Var22;
  undefined8 local_res8;
  PRTL_CRITICAL_SECTION_DEBUG local_res10;
  LPCRITICAL_SECTION local_res18;
  PRTL_CRITICAL_SECTION_DEBUG *local_res20;
  undefined4 uVar23;
  LPCRITICAL_SECTION local_b8;
  undefined8 local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  _RTL_CRITICAL_SECTION *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  
  pvVar3 = param_1->LockSemaphore;
  p_Var19 = (LPCRITICAL_SECTION)0x0;
  local_res8 = 0;
  if (pvVar3 == (HANDLE)0x0) {
    return;
  }
  p_Var11 = (LPCRITICAL_SECTION)FUN_1417a4e70();
  local_res18 = p_Var11;
  cVar6 = IsGarbageCollecting();
  if (cVar6 == '\0') {
LAB_1417a8e77:
    BVar8 = TryEnterCriticalSection(p_Var11);
    lpCriticalSection = p_Var11;
    if (BVar8 == 0) {
      EnterCriticalSection(p_Var11);
    }
  }
  else {
    cVar6 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar7 = GetCurrentThreadId();
      bVar5 = false;
      if (DVar7 == DAT_1468c21c0) goto LAB_1417a8e6c;
    }
    else {
LAB_1417a8e6c:
      bVar5 = true;
    }
    lpCriticalSection = p_Var19;
    if (!bVar5) goto LAB_1417a8e77;
  }
  local_b8 = p_Var11 + 1;
  pp_Var22 = (PRTL_CRITICAL_SECTION_DEBUG *)((ulonglong)pvVar3 >> 0x20);
  uVar20 = (uint)((ulonglong)pvVar3 >> 0x20) ^ (uint)pvVar3;
  local_res10 = (PRTL_CRITICAL_SECTION_DEBUG)CONCAT44(local_res10._4_4_,uVar20);
  local_res20 = pp_Var22;
  if (p_Var11[1].LockCount != p_Var11[2].RecursionCount) {
    ppvVar12 = p_Var11[2].LockSemaphore;
    if (p_Var11[2].LockSemaphore == (HANDLE *)0x0) {
      ppvVar12 = &p_Var11[2].OwningThread;
    }
    iVar14 = *(int *)((longlong)ppvVar12 +
                     ((longlong)(int)p_Var11[2].SpinCount - 1U & (longlong)(int)uVar20) * 4);
    if (iVar14 != -1) {
      p_Var17 = local_b8->DebugInfo;
      do {
        lVar15 = (longlong)iVar14;
        if (*(uint *)(&p_Var17->Type + lVar15 * 0x10) == uVar20) {
          if (((iVar14 != -1) && (pWVar16 = &p_Var17->Type + lVar15 * 0x10, pWVar16 != (WORD *)0x0))
             && (pp_Var1 = (_RTL_CRITICAL_SECTION **)(pWVar16 + 4),
                pp_Var1 != (_RTL_CRITICAL_SECTION **)0x0)) {
            p_Var18 = (_RTL_CRITICAL_SECTION *)((LIST_ENTRY *)(pWVar16 + 8))->Flink;
            if ((p_Var18 != (_RTL_CRITICAL_SECTION *)0x0) &&
               (*pp_Var1 == (_RTL_CRITICAL_SECTION *)0x0)) {
              TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
                        (p_Var18,param_1);
              uVar20 = uStack_8c;
              if (2 < p_Var18->LockCount - p_Var18[1].RecursionCount) goto LAB_1417a90dd;
              ppvVar12 = &p_Var18->OwningThread;
              local_a8 = 0;
              uStack_a4 = 1;
              uStack_94 = 0;
              uStack_90 = 0;
              p_Var11 = p_Var19;
              if (*(int *)&p_Var18[1].DebugInfo == 0) goto LAB_1417a9046;
              uStack_94 = *(uint *)&p_Var18[1].DebugInfo;
              local_res8 = CONCAT44(local_res8._4_4_,uStack_94);
              puVar21 = (uint *)((ulonglong)(p_Var18->SpinCount != 0) - 1 &
                                 (ulonglong)&p_Var18->OwningThread | p_Var18->SpinCount);
              uVar9 = *puVar21;
              p_Var13 = p_Var19;
              goto joined_r0x0001417a8fd1;
            }
            if (param_1 != p_Var18) {
              if (param_1 != *pp_Var1) goto LAB_1417a9103;
              *pp_Var1 = p_Var18;
            }
            p_Var18 = (_RTL_CRITICAL_SECTION *)0x0;
            ((LIST_ENTRY *)(pWVar16 + 8))->Flink = (_LIST_ENTRY *)0x0;
            goto LAB_1417a9103;
          }
          break;
        }
        iVar14 = *(int *)&(&p_Var17->ProcessLocksList)[lVar15 * 2].Blink;
      } while (iVar14 != -1);
    }
  }
  goto LAB_1417a913a;
joined_r0x0001417a8fd1:
  if (uVar9 != 0) goto LAB_1417a9009;
  iVar14 = (int)p_Var11;
  uStack_90 = (int)p_Var13 + 0x20;
  p_Var13 = (LPCRITICAL_SECTION)(ulonglong)uStack_90;
  local_a8 = iVar14 + 1;
  p_Var11 = (LPCRITICAL_SECTION)(ulonglong)local_a8;
  if ((int)((uStack_94 - 1) + ((int)(uStack_94 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar14) {
    p_Var11 = (LPCRITICAL_SECTION)(ulonglong)uStack_94;
    goto LAB_1417a9046;
  }
  uVar9 = puVar21[(longlong)iVar14 + 1];
  goto joined_r0x0001417a8fd1;
LAB_1417a9009:
  uStack_a4 = uVar9 - 1 & uVar9 ^ uVar9;
  iVar14 = 0x1f;
  if (uStack_a4 != 0) {
    for (; uStack_a4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
    }
  }
  if (uStack_a4 == 0) {
    iVar14 = 0x20;
  }
  else {
    iVar14 = 0x1f - iVar14;
  }
  uVar9 = (uStack_90 - iVar14) + 0x1f;
  if ((int)uStack_94 < (int)uVar9) {
    uVar9 = uStack_94;
  }
  p_Var11 = (LPCRITICAL_SECTION)(ulonglong)uVar9;
  uStack_94 = uVar9;
LAB_1417a9046:
  local_88 = uStack_90;
  uVar2 = uStack_a4;
  uVar9 = local_a8;
  uStack_70 = CONCAT44(uStack_a4,local_a8);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_94;
  uStack_58 = uStack_90;
  uStack_54 = uStack_8c;
  uStack_68._0_4_ = SUB84(ppvVar12,0);
  uStack_68._4_4_ = (undefined4)((ulonglong)ppvVar12 >> 0x20);
  local_78._0_4_ = SUB84(p_Var18,0);
  local_78._4_4_ = (undefined4)((ulonglong)p_Var18 >> 0x20);
  *pp_Var1 = *(_RTL_CRITICAL_SECTION **)(&p_Var18->DebugInfo->Type + (longlong)(int)p_Var11 * 8);
  local_98 = (undefined4)uStack_68;
  uStack_8c = uStack_94;
  _uStack_94 = CONCAT44(~uStack_a4,uStack_68._4_4_);
  local_a8 = (undefined4)local_78;
  uStack_a4 = local_78._4_4_;
  _uStack_a0 = CONCAT44(uVar2,uVar9);
  uStack_84 = uVar20;
  local_80 = p_Var18;
  local_78 = p_Var18;
  uStack_68 = ppvVar12;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
  ((LIST_ENTRY *)(pWVar16 + 8))->Flink =
       *(_LIST_ENTRY **)
        (*(longlong *)CONCAT44(uStack_a4,local_a8) + (longlong)(int)uStack_8c * 0x10);
  *(undefined4 *)&p_Var18[1].SpinCount = 0;
  if (p_Var18[1].LockSemaphore != (HANDLE)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (p_Var18);
  FMemory::operator_delete(p_Var18,0x50);
  pp_Var22 = local_res20;
LAB_1417a90dd:
  p_Var18 = (_RTL_CRITICAL_SECTION *)((LIST_ENTRY *)(pWVar16 + 8))->Flink;
  uVar20 = (uint)local_res10;
LAB_1417a9103:
  if ((p_Var18 == (_RTL_CRITICAL_SECTION *)0x0) || (*pp_Var1 != (_RTL_CRITICAL_SECTION *)0x0)) {
    iVar14 = (uint)(p_Var18 != (_RTL_CRITICAL_SECTION *)0x0) +
             (uint)(*pp_Var1 != (_RTL_CRITICAL_SECTION *)0x0);
  }
  else {
    iVar14 = p_Var18->LockCount - p_Var18[1].RecursionCount;
  }
  if (iVar14 == 0) {
    TSet<TTuple<int,FHashBucket>,TDefaultMapHashableKeyFuncs<int,FHashBucket,0>,FDefaultSetAllocator>
    ::Remove(local_b8,uVar20);
  }
LAB_1417a913a:
  p_Var11 = local_res18;
  uVar20 = (uint)((longlong)param_1->SpinCount >> 6) ^ (uint)pp_Var22 ^ (uint)pvVar3;
  TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>::
  ConditionalRehash(local_res18 + 3,local_res18[3].LockCount - local_res18[4].RecursionCount,0);
  iVar14 = (int)p_Var11[4].SpinCount;
  if (iVar14 != 0) {
    ppvVar12 = p_Var11[4].LockSemaphore;
    if (p_Var11[4].LockSemaphore == (HANDLE *)0x0) {
      ppvVar12 = &p_Var11[4].OwningThread;
    }
    iVar14 = *(int *)((longlong)ppvVar12 + ((longlong)iVar14 - 1U & (longlong)(int)uVar20) * 4);
    if (iVar14 != -1) {
      p_Var17 = p_Var11[3].DebugInfo;
      do {
        iVar10 = *(int *)((longlong)&p_Var17->ProcessLocksList + (longlong)iVar14 * 0x18);
        if (*(uint *)(&p_Var17->Type + (longlong)iVar14 * 0xc) == uVar20) {
          if (iVar14 != -1) {
            while ((&p_Var17->CriticalSection)[(longlong)iVar14 * 3] != param_1) {
              do {
                iVar14 = iVar10;
                if (iVar14 == -1) goto LAB_1417a9234;
                iVar10 = *(int *)((longlong)&p_Var17->ProcessLocksList + (longlong)iVar14 * 0x18);
              } while (*(uint *)(&p_Var17->Type + (longlong)iVar14 * 0xc) != uVar20);
            }
            TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
            ::Remove(p_Var11 + 3);
          }
          break;
        }
        iVar14 = iVar10;
      } while (iVar10 != -1);
    }
  }
LAB_1417a9234:
  local_res10 = (PRTL_CRITICAL_SECTION_DEBUG)param_1->SpinCount;
  p_Var11 = p_Var11 + 5;
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(p_Var11,&local_res8);
  if (((uint)local_res8 == -1) ||
     (pWVar16 = &p_Var11->DebugInfo->Type + (longlong)(int)(uint)local_res8 * 0x10,
     pWVar16 == (WORD *)0x0)) {
    local_res20 = &local_res10;
    FUN_1417a2ff0(p_Var11,&local_res8,&local_res20,0);
    pWVar16 = &p_Var11->DebugInfo->Type + (longlong)(int)(uint)local_res8 * 0x10;
  }
  p_Var18 = (_RTL_CRITICAL_SECTION *)((LIST_ENTRY *)(pWVar16 + 8))->Flink;
  if ((p_Var18 == (_RTL_CRITICAL_SECTION *)0x0) ||
     (*(_RTL_CRITICAL_SECTION **)(pWVar16 + 4) != (_RTL_CRITICAL_SECTION *)0x0)) {
    if (param_1 == p_Var18) {
      ((LIST_ENTRY *)(pWVar16 + 8))->Flink = (_LIST_ENTRY *)0x0;
      goto LAB_1417a9568;
    }
    if (param_1 == *(_RTL_CRITICAL_SECTION **)(pWVar16 + 4)) {
      *(_RTL_CRITICAL_SECTION **)(pWVar16 + 4) = p_Var18;
      ((LIST_ENTRY *)(pWVar16 + 8))->Flink = (_LIST_ENTRY *)0x0;
      goto LAB_1417a9568;
    }
  }
  else {
    uVar20 = TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
                       (p_Var18,param_1);
    uVar9 = uStack_8c;
    local_res8 = CONCAT44(local_res8._4_4_,uVar20);
    if (p_Var18->LockCount - p_Var18[1].RecursionCount < 3) {
      ppvVar12 = &p_Var18->OwningThread;
      local_a8 = 0;
      uStack_a4 = 1;
      uStack_94 = 0;
      uStack_90 = 0;
      if (*(int *)&p_Var18[1].DebugInfo != 0) {
        uVar20 = *(uint *)&p_Var18[1].DebugInfo;
        puVar21 = (uint *)((ulonglong)(p_Var18->SpinCount != 0) - 1 & (ulonglong)ppvVar12 |
                          p_Var18->SpinCount);
        uVar2 = *puVar21;
        p_Var13 = p_Var19;
        while (uVar2 == 0) {
          iVar14 = (int)p_Var19;
          uStack_90 = (int)p_Var13 + 0x20;
          p_Var13 = (LPCRITICAL_SECTION)(ulonglong)uStack_90;
          local_a8 = iVar14 + 1;
          p_Var19 = (LPCRITICAL_SECTION)(ulonglong)local_a8;
          uStack_94 = uVar20;
          if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar14)
          goto LAB_1417a9381;
          uVar2 = puVar21[(longlong)iVar14 + 1];
        }
        uStack_a4 = uVar2 - 1 & uVar2 ^ uVar2;
        iVar14 = 0x1f;
        if (uStack_a4 != 0) {
          for (; uStack_a4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
          }
        }
        if (uStack_a4 == 0) {
          iVar14 = 0x20;
        }
        else {
          iVar14 = 0x1f - iVar14;
        }
        uStack_94 = (uStack_90 - iVar14) + 0x1f;
        if ((int)uVar20 < (int)uStack_94) {
          uStack_94 = uVar20;
        }
      }
LAB_1417a9381:
      local_88 = uStack_90;
      uVar2 = uStack_a4;
      uVar20 = local_a8;
      uStack_70 = CONCAT44(uStack_a4,local_a8);
      uStack_60 = 0xffffffff;
      uStack_5c = uStack_94;
      uStack_58 = uStack_90;
      uStack_54 = uStack_8c;
      uStack_68._0_4_ = SUB84(ppvVar12,0);
      uStack_68._4_4_ = (undefined4)((ulonglong)ppvVar12 >> 0x20);
      local_78._0_4_ = SUB84(p_Var18,0);
      local_78._4_4_ = (undefined4)((ulonglong)p_Var18 >> 0x20);
      *(_RTL_CRITICAL_SECTION **)(pWVar16 + 4) =
           *(_RTL_CRITICAL_SECTION **)(&p_Var18->DebugInfo->Type + (longlong)(int)uStack_94 * 8);
      local_98 = (undefined4)uStack_68;
      uStack_8c = uStack_94;
      _uStack_94 = CONCAT44(~uStack_a4,uStack_68._4_4_);
      local_a8 = (undefined4)local_78;
      uStack_a4 = local_78._4_4_;
      _uStack_a0 = CONCAT44(uVar2,uVar20);
      uStack_84 = uVar9;
      local_80 = p_Var18;
      local_78 = p_Var18;
      uStack_68 = ppvVar12;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
      ((LIST_ENTRY *)(pWVar16 + 8))->Flink =
           *(_LIST_ENTRY **)
            (*(longlong *)CONCAT44(uStack_a4,local_a8) + (longlong)(int)uStack_8c * 0x10);
      *(undefined4 *)&p_Var18[1].SpinCount = 0;
      if (p_Var18[1].LockSemaphore != (HANDLE)0x0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (p_Var18);
      FMemory::operator_delete(p_Var18,0x50);
      uVar20 = (uint)local_res8;
    }
    p_Var19 = (LPCRITICAL_SECTION)(ulonglong)uVar20;
    if (uVar20 == 1) goto LAB_1417a9568;
  }
  if (param_1->OwningThread == (HANDLE)0x0) {
    local_b8 = (LPCRITICAL_SECTION)0x0;
    local_b0 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    FGenericPlatformString::Memcpy(local_b8,&DAT_143f3edc8,10);
  }
  else {
    UObjectBaseUtility::GetFullName(param_1,&local_b8,0);
  }
  p_Var13 = (LPCRITICAL_SECTION)&DAT_143f3eda8;
  if ((int)local_b0 != 0) {
    p_Var13 = local_b8;
  }
  LowLevelFatalErrorHandler
            ("Unknown",0x298,L"Internal Error: RemoveFromOuterMap NumRemoved = %d  for %s",p_Var19,
             p_Var13);
  uVar23 = (undefined4)((ulonglong)p_Var13 >> 0x20);
  if (local_b8 != (LPCRITICAL_SECTION)0x0) {
    FMemory::Free();
  }
  if (param_1->OwningThread == (HANDLE)0x0) {
    local_b8 = (LPCRITICAL_SECTION)0x0;
    local_b0 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    FGenericPlatformString::Memcpy(local_b8,&DAT_143f3edc8,10);
  }
  else {
    UObjectBaseUtility::GetFullName(param_1,&local_b8,0);
  }
  p_Var13 = (LPCRITICAL_SECTION)&DAT_143f3eda8;
  if ((int)local_b0 != 0) {
    p_Var13 = local_b8;
  }
  FDebug::AssertFailed
            (&DAT_144d31612,"Unknown",0x298,
             L"Internal Error: RemoveFromOuterMap NumRemoved = %d  for %s",
             CONCAT44(uVar23,(int)p_Var19),p_Var13);
  if (local_b8 != (LPCRITICAL_SECTION)0x0) {
    FMemory::Free();
  }
LAB_1417a9568:
  p_Var4 = ((LIST_ENTRY *)(pWVar16 + 8))->Flink;
  if ((p_Var4 == (_LIST_ENTRY *)0x0) ||
     (*(_RTL_CRITICAL_SECTION **)(pWVar16 + 4) != (_RTL_CRITICAL_SECTION *)0x0)) {
    iVar14 = (uint)(p_Var4 != (_LIST_ENTRY *)0x0) +
             (uint)(*(_RTL_CRITICAL_SECTION **)(pWVar16 + 4) != (_RTL_CRITICAL_SECTION *)0x0);
  }
  else {
    iVar14 = *(int *)&p_Var4->Blink - *(int *)((longlong)&p_Var4[3].Flink + 4);
  }
  if (iVar14 == 0) {
    TSet<TTuple<UClass_*,FHashBucket>,TDefaultMapHashableKeyFuncs<UClass_*,FHashBucket,0>,FDefaultSetAllocator>
    ::Remove(p_Var11,param_1->SpinCount);
  }
  p_Var19 = local_res18;
  local_res10 = param_1->OwningThread;
  TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
  ::FindId(local_res18 + 7,&local_res8);
  if (((uint)local_res8 == -1) ||
     (p_Var17 = p_Var19[7].DebugInfo + (longlong)(int)(uint)local_res8 * 2,
     p_Var17 == (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    local_res18 = (LPCRITICAL_SECTION)&local_res10;
    FUN_1417a2d30(p_Var19 + 7,&local_res8,&local_res18,0);
    p_Var17 = p_Var19[7].DebugInfo + (longlong)(int)(uint)local_res8 * 2;
  }
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
            (&p_Var17->CriticalSection,param_1);
  if (*(int *)&(p_Var17->ProcessLocksList).Flink ==
      *(int *)((longlong)&p_Var17[1].CriticalSection + 4)) {
    TSet<TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::Remove(p_Var19 + 7,param_1->OwningThread);
  }
  lVar15 = FUN_14171bfe0();
  if ((*(int *)((longlong)param_1->OwningThread + 0x90) < *(int *)(lVar15 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)((longlong)param_1->OwningThread + 0x88) +
       (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((bVar5) &&
     (local_res10 = *(PRTL_CRITICAL_SECTION_DEBUG *)&param_1[1].LockCount,
     local_res10 != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
    ::FindId(p_Var19 + 9,&local_res8);
    if (((uint)local_res8 == -1) ||
       (p_Var17 = p_Var19[9].DebugInfo + (longlong)(int)(uint)local_res8 * 2,
       p_Var17 == (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      local_res18 = (LPCRITICAL_SECTION)&local_res10;
      FUN_1417a2d30(p_Var19 + 9,&local_res8,&local_res18,0);
      p_Var17 = p_Var19[9].DebugInfo + (longlong)(int)(uint)local_res8 * 2;
    }
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
              (&p_Var17->CriticalSection,param_1);
    if (*(int *)&(p_Var17->ProcessLocksList).Flink ==
        *(int *)((longlong)&p_Var17[1].CriticalSection + 4)) {
      TSet<TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::Remove(p_Var19 + 9,local_res10);
    }
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 1417a9740 FUN_1417a9740 body=23 status=ok
// SIG undefined FUN_1417a9740(void)

void FUN_1417a9740(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_1417a4e70();
                    /* WARNING: Could not recover jumptable at 0x0001417a9750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1417a9760 FUN_1417a9760 body=47 status=ok
// SIG undefined FUN_1417a9760(void)

longlong FUN_1417a9760(void)

{
  if (DAT_1469e9598 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_1469e9598,&PTR_s__Script_CoreUObject_144d34ac0);
  }
  return DAT_1469e9598;
}



// FUNCTION 1417a9790 FUN_1417a9790 body=47 status=ok
// SIG undefined FUN_1417a9790(void)

longlong FUN_1417a9790(void)

{
  if (DAT_1469e97a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e97a8,&PTR_FUN_1464b96c0);
  }
  return DAT_1469e97a8;
}



// FUNCTION 1417a97c0 FUN_1417a97c0 body=47 status=ok
// SIG undefined FUN_1417a97c0(void)

longlong FUN_1417a97c0(void)

{
  if (DAT_1469e9660 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9660,&PTR_FUN_1464b6c80);
  }
  return DAT_1469e9660;
}



// FUNCTION 1417a9810 Z_Construct_UClass_UObject body=47 status=ok
// SIG undefined Z_Construct_UClass_UObject(void)

longlong Z_Construct_UClass_UObject(void)

{
  if (DAT_1469e97c0 == 0) {
    FUN_141786440(&DAT_1469e97c0,&PTR_LAB_144d32e10);
  }
  return DAT_1469e97c0;
}



// FUNCTION 1417a9840 FUN_1417a9840 body=47 status=ok
// SIG undefined FUN_1417a9840(void)

longlong FUN_1417a9840(void)

{
  if (DAT_1469e97b8 == 0) {
    FUN_141786a30(&DAT_1469e97b8,&PTR_Z_Construct_UClass_UObject_1464b9890);
  }
  return DAT_1469e97b8;
}



// FUNCTION 1417a9890 InternalVTableHelperCtorCaller<UObject> body=122 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UObject>(void)

undefined8 InternalVTableHelperCtorCaller<UObject>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = UObject::GetPrivateStaticClass();
  lVar3 = FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (lVar3 != 0) {
    uVar1 = UObject::UObject(lVar3,param_1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1417a9910 EAutomationEventType_StaticEnum body=85 status=ok
// SIG undefined EAutomationEventType_StaticEnum(void)

void EAutomationEventType_StaticEnum(void)

{
  if (DAT_1469e9518 == 0) {
    if (DAT_1469e9598 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1469e9598,&PTR_s__Script_CoreUObject_144d34ac0);
    }
    DAT_1469e9518 = GetStaticEnum(FUN_1417a9e30,DAT_1469e9598,L"EAutomationEventType");
  }
  return;
}



// FUNCTION 1417a9970 EAxis_StaticEnum body=85 status=ok
// SIG undefined EAxis_StaticEnum(void)

void EAxis_StaticEnum(void)

{
  if (DAT_1469e9550 == 0) {
    if (DAT_1469e9598 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1469e9598,&PTR_s__Script_CoreUObject_144d34ac0);
    }
    DAT_1469e9550 = GetStaticEnum(FUN_1417a9e60,DAT_1469e9598,L"EAxis");
  }
  return;
}



// FUNCTION 1417a99d0 EInterpCurveMode_StaticEnum body=85 status=ok
// SIG undefined EInterpCurveMode_StaticEnum(void)

void EInterpCurveMode_StaticEnum(void)

{
  if (DAT_1469e9548 == 0) {
    if (DAT_1469e9598 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1469e9598,&PTR_s__Script_CoreUObject_144d34ac0);
    }
    DAT_1469e9548 = GetStaticEnum(FUN_1417a9e90,DAT_1469e9598,L"EInterpCurveMode");
  }
  return;
}



// FUNCTION 1417a9a30 ELifetimeCondition_StaticEnum body=85 status=ok
// SIG undefined ELifetimeCondition_StaticEnum(void)

void ELifetimeCondition_StaticEnum(void)

{
  if (DAT_1469e9510 == 0) {
    if (DAT_1469e9598 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1469e9598,&PTR_s__Script_CoreUObject_144d34ac0);
    }
    DAT_1469e9510 = GetStaticEnum(FUN_1417a9ec0,DAT_1469e9598,L"ELifetimeCondition");
  }
  return;
}



// FUNCTION 1417a9a90 ELocalizedTextSourceCategory_StaticEnum body=85 status=ok
// SIG undefined ELocalizedTextSourceCategory_StaticEnum(void)

void ELocalizedTextSourceCategory_StaticEnum(void)

{
  if (DAT_1469e9520 == 0) {
    if (DAT_1469e9598 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1469e9598,&PTR_s__Script_CoreUObject_144d34ac0);
    }
    DAT_1469e9520 = GetStaticEnum(FUN_1417a9ef0,DAT_1469e9598,L"ELocalizedTextSourceCategory");
  }
  return;
}



// FUNCTION 1417a9af0 ELogTimes_StaticEnum body=85 status=ok
// SIG undefined ELogTimes_StaticEnum(void)

void ELogTimes_StaticEnum(void)

{
  if (DAT_1469e9558 == 0) {
    if (DAT_1469e9598 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1469e9598,&PTR_s__Script_CoreUObject_144d34ac0);
    }
    DAT_1469e9558 = GetStaticEnum(FUN_1417a9f20,DAT_1469e9598,L"ELogTimes");
  }
  return;
}



// FUNCTION 1417a9b50 EMouseCursor_StaticEnum body=85 status=ok
// SIG undefined EMouseCursor_StaticEnum(void)

void EMouseCursor_StaticEnum(void)

{
  if (DAT_1469e9538 == 0) {
    if (DAT_1469e9598 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1469e9598,&PTR_s__Script_CoreUObject_144d34ac0);
    }
    DAT_1469e9538 = GetStaticEnum(FUN_1417a9f50,DAT_1469e9598,L"EMouseCursor");
  }
  return;
}



// FUNCTION 1417a9bb0 EPixelFormat_StaticEnum body=85 status=ok
// SIG undefined EPixelFormat_StaticEnum(void)

void EPixelFormat_StaticEnum(void)

{
  if (DAT_1469e9540 == 0) {
    if (DAT_1469e9598 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1469e9598,&PTR_s__Script_CoreUObject_144d34ac0);
    }
    DAT_1469e9540 = GetStaticEnum(FUN_1417a9f80,DAT_1469e9598,L"EPixelFormat");
  }
  return;
}



// FUNCTION 1417a9c10 ERangeBoundTypes_StaticEnum body=85 status=ok
// SIG undefined ERangeBoundTypes_StaticEnum(void)

void ERangeBoundTypes_StaticEnum(void)

{
  if (DAT_1469e9528 == 0) {
    if (DAT_1469e9598 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1469e9598,&PTR_s__Script_CoreUObject_144d34ac0);
    }
    DAT_1469e9528 = GetStaticEnum(FUN_1417a9fb0,DAT_1469e9598,L"ERangeBoundTypes");
  }
  return;
}



// FUNCTION 1417a9c70 ESearchCase_StaticEnum body=85 status=ok
// SIG undefined ESearchCase_StaticEnum(void)

void ESearchCase_StaticEnum(void)

{
  if (DAT_1469e9568 == 0) {
    if (DAT_1469e9598 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1469e9598,&PTR_s__Script_CoreUObject_144d34ac0);
    }
    DAT_1469e9568 = GetStaticEnum(FUN_1417a9fe0,DAT_1469e9598,L"ESearchCase");
  }
  return;
}



// FUNCTION 1417a9cd0 ESearchDir_StaticEnum body=85 status=ok
// SIG undefined ESearchDir_StaticEnum(void)

void ESearchDir_StaticEnum(void)

{
  if (DAT_1469e9560 == 0) {
    if (DAT_1469e9598 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1469e9598,&PTR_s__Script_CoreUObject_144d34ac0);
    }
    DAT_1469e9560 = GetStaticEnum(FUN_1417aa010,DAT_1469e9598,L"ESearchDir");
  }
  return;
}



// FUNCTION 1417a9d30 EUnit_StaticEnum body=85 status=ok
// SIG undefined EUnit_StaticEnum(void)

void EUnit_StaticEnum(void)

{
  if (DAT_1469e9530 == 0) {
    if (DAT_1469e9598 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1469e9598,&PTR_s__Script_CoreUObject_144d34ac0);
    }
    DAT_1469e9530 = GetStaticEnum(FUN_1417aa040,DAT_1469e9598,L"EUnit");
  }
  return;
}



// FUNCTION 1417a9d90 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UObject::GetPrivateStaticClass(void)

{
  if (DAT_1469e97c8 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"Object",&DAT_1469e97c8,FUN_140447710,0x28,0x10000121,0,
                  L"Engine",&LAB_1417a9870,InternalVTableHelperCtorCaller<UObject>,
                  AK::MemoryMgr::StartProfileThreadUsage,&LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1469e97c8;
}



// FUNCTION 1417a9e30 FUN_1417a9e30 body=47 status=ok
// SIG undefined FUN_1417a9e30(void)

longlong FUN_1417a9e30(void)

{
  if (DAT_1469e95a0 == 0) {
    FUN_1417866a0(&DAT_1469e95a0,&PTR_FUN_1464b98d0);
  }
  return DAT_1469e95a0;
}



// FUNCTION 1417a9e60 FUN_1417a9e60 body=47 status=ok
// SIG undefined FUN_1417a9e60(void)

longlong FUN_1417a9e60(void)

{
  if (DAT_1469e95d8 == 0) {
    FUN_1417866a0(&DAT_1469e95d8,&PTR_FUN_1464b9b00);
  }
  return DAT_1469e95d8;
}



// FUNCTION 1417a9e90 FUN_1417a9e90 body=47 status=ok
// SIG undefined FUN_1417a9e90(void)

longlong FUN_1417a9e90(void)

{
  if (DAT_1469e95d0 == 0) {
    FUN_1417866a0(&DAT_1469e95d0,&PTR_FUN_1464b9ab0);
  }
  return DAT_1469e95d0;
}



// FUNCTION 1417a9ec0 FUN_1417a9ec0 body=47 status=ok
// SIG undefined FUN_1417a9ec0(void)

longlong FUN_1417a9ec0(void)

{
  if (DAT_1469e9580 == 0) {
    FUN_1417866a0(&DAT_1469e9580,&PTR_FUN_1464b5d00);
  }
  return DAT_1469e9580;
}



// FUNCTION 1417a9ef0 FUN_1417a9ef0 body=47 status=ok
// SIG undefined FUN_1417a9ef0(void)

longlong FUN_1417a9ef0(void)

{
  if (DAT_1469e95a8 == 0) {
    FUN_1417866a0(&DAT_1469e95a8,&PTR_FUN_1464b9920);
  }
  return DAT_1469e95a8;
}



// FUNCTION 1417a9f20 FUN_1417a9f20 body=47 status=ok
// SIG undefined FUN_1417a9f20(void)

longlong FUN_1417a9f20(void)

{
  if (DAT_1469e95e0 == 0) {
    FUN_1417866a0(&DAT_1469e95e0,&PTR_FUN_1464b9b50);
  }
  return DAT_1469e95e0;
}



// FUNCTION 1417a9f50 FUN_1417a9f50 body=47 status=ok
// SIG undefined FUN_1417a9f50(void)

longlong FUN_1417a9f50(void)

{
  if (DAT_1469e95c0 == 0) {
    FUN_1417866a0(&DAT_1469e95c0,&PTR_FUN_1464b9a10);
  }
  return DAT_1469e95c0;
}



// FUNCTION 1417a9f80 FUN_1417a9f80 body=47 status=ok
// SIG undefined FUN_1417a9f80(void)

longlong FUN_1417a9f80(void)

{
  if (DAT_1469e95c8 == 0) {
    FUN_1417866a0(&DAT_1469e95c8,&PTR_FUN_1464b9a60);
  }
  return DAT_1469e95c8;
}



// FUNCTION 1417a9fb0 FUN_1417a9fb0 body=47 status=ok
// SIG undefined FUN_1417a9fb0(void)

longlong FUN_1417a9fb0(void)

{
  if (DAT_1469e95b0 == 0) {
    FUN_1417866a0(&DAT_1469e95b0,&PTR_FUN_1464b9970);
  }
  return DAT_1469e95b0;
}



// FUNCTION 1417a9fe0 FUN_1417a9fe0 body=47 status=ok
// SIG undefined FUN_1417a9fe0(void)

longlong FUN_1417a9fe0(void)

{
  if (DAT_1469e95f0 == 0) {
    FUN_1417866a0(&DAT_1469e95f0,&PTR_FUN_1464b9bf0);
  }
  return DAT_1469e95f0;
}



// FUNCTION 1417aa010 FUN_1417aa010 body=47 status=ok
// SIG undefined FUN_1417aa010(void)

longlong FUN_1417aa010(void)

{
  if (DAT_1469e95e8 == 0) {
    FUN_1417866a0(&DAT_1469e95e8,&PTR_FUN_1464b9ba0);
  }
  return DAT_1469e95e8;
}



// FUNCTION 1417aa040 FUN_1417aa040 body=47 status=ok
// SIG undefined FUN_1417aa040(void)

longlong FUN_1417aa040(void)

{
  if (DAT_1469e95b8 == 0) {
    FUN_1417866a0(&DAT_1469e95b8,&PTR_FUN_1464b99c0);
  }
  return DAT_1469e95b8;
}



// FUNCTION 1417aa070 FUN_1417aa070 body=47 status=ok
// SIG undefined FUN_1417aa070(void)

longlong FUN_1417aa070(void)

{
  if (DAT_1469e9600 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9600,&PTR_FUN_1464b6280);
  }
  return DAT_1469e9600;
}



// FUNCTION 1417aa0a0 FUN_1417aa0a0 body=47 status=ok
// SIG undefined FUN_1417aa0a0(void)

longlong FUN_1417aa0a0(void)

{
  if (DAT_1469e95f8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e95f8,&PTR_FUN_1464b6140);
  }
  return DAT_1469e95f8;
}



// FUNCTION 1417aa0d0 FUN_1417aa0d0 body=47 status=ok
// SIG undefined FUN_1417aa0d0(void)

longlong FUN_1417aa0d0(void)

{
  if (DAT_1469e9728 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9728,&PTR_FUN_1464b8800);
  }
  return DAT_1469e9728;
}



// FUNCTION 1417aa100 FUN_1417aa100 body=47 status=ok
// SIG undefined FUN_1417aa100(void)

longlong FUN_1417aa100(void)

{
  if (DAT_1469e9730 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9730,&PTR_FUN_1464b8940);
  }
  return DAT_1469e9730;
}



// FUNCTION 1417aa130 FUN_1417aa130 body=47 status=ok
// SIG undefined FUN_1417aa130(void)

longlong FUN_1417aa130(void)

{
  if (DAT_1469e9720 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9720,&PTR_FUN_1464b86c0);
  }
  return DAT_1469e9720;
}



// FUNCTION 1417aa160 FUN_1417aa160 body=47 status=ok
// SIG undefined FUN_1417aa160(void)

longlong FUN_1417aa160(void)

{
  if (DAT_1469e9740 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9740,&PTR_FUN_1464b8bb0);
  }
  return DAT_1469e9740;
}



// FUNCTION 1417aa190 FUN_1417aa190 body=47 status=ok
// SIG undefined FUN_1417aa190(void)

longlong FUN_1417aa190(void)

{
  if (DAT_1469e9698 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9698,&PTR_FUN_1464b7140);
  }
  return DAT_1469e9698;
}



// FUNCTION 1417aa1c0 FUN_1417aa1c0 body=47 status=ok
// SIG undefined FUN_1417aa1c0(void)

longlong FUN_1417aa1c0(void)

{
  if (DAT_1469e9640 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9640,&PTR_FUN_1464b6a40);
  }
  return DAT_1469e9640;
}



// FUNCTION 1417aa1f0 FUN_1417aa1f0 body=47 status=ok
// SIG undefined FUN_1417aa1f0(void)

longlong FUN_1417aa1f0(void)

{
  if (DAT_1469e9618 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9618,&PTR_FUN_1464b6640);
  }
  return DAT_1469e9618;
}



// FUNCTION 1417aa220 FUN_1417aa220 body=47 status=ok
// SIG undefined FUN_1417aa220(void)

longlong FUN_1417aa220(void)

{
  if (DAT_1469e9630 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9630,&PTR_FUN_1464b6900);
  }
  return DAT_1469e9630;
}



// FUNCTION 1417aa250 FUN_1417aa250 body=47 status=ok
// SIG undefined FUN_1417aa250(void)

longlong FUN_1417aa250(void)

{
  if (DAT_1469e9638 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9638,&PTR_FUN_1464b69c0);
  }
  return DAT_1469e9638;
}



// FUNCTION 1417aa280 FUN_1417aa280 body=47 status=ok
// SIG undefined FUN_1417aa280(void)

longlong FUN_1417aa280(void)

{
  if (DAT_1469e9690 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9690,&PTR_FUN_1464b70c0);
  }
  return DAT_1469e9690;
}



// FUNCTION 1417aa2b0 FUN_1417aa2b0 body=47 status=ok
// SIG undefined FUN_1417aa2b0(void)

longlong FUN_1417aa2b0(void)

{
  if (DAT_1469e9688 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9688,&PTR_FUN_1464b7040);
  }
  return DAT_1469e9688;
}



// FUNCTION 1417aa2e0 FUN_1417aa2e0 body=47 status=ok
// SIG undefined FUN_1417aa2e0(void)

longlong FUN_1417aa2e0(void)

{
  if (DAT_1469e9680 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9680,&PTR_FUN_1464b6fc0);
  }
  return DAT_1469e9680;
}



// FUNCTION 1417aa310 FUN_1417aa310 body=47 status=ok
// SIG undefined FUN_1417aa310(void)

longlong FUN_1417aa310(void)

{
  if (DAT_1469e97b0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e97b0,&PTR_FUN_1464b9820);
  }
  return DAT_1469e97b0;
}



// FUNCTION 1417aa340 FUN_1417aa340 body=47 status=ok
// SIG undefined FUN_1417aa340(void)

longlong FUN_1417aa340(void)

{
  if (DAT_1469e9610 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9610,&PTR_FUN_1464b6550);
  }
  return DAT_1469e9610;
}



// FUNCTION 1417aa370 FUN_1417aa370 body=47 status=ok
// SIG undefined FUN_1417aa370(void)

longlong FUN_1417aa370(void)

{
  if (DAT_1469e9620 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9620,&PTR_FUN_1464b6740);
  }
  return DAT_1469e9620;
}



// FUNCTION 1417aa3a0 FUN_1417aa3a0 body=47 status=ok
// SIG undefined FUN_1417aa3a0(void)

longlong FUN_1417aa3a0(void)

{
  if (DAT_1469e9628 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9628,&PTR_FUN_1464b6800);
  }
  return DAT_1469e9628;
}



// FUNCTION 1417aa3d0 FUN_1417aa3d0 body=47 status=ok
// SIG undefined FUN_1417aa3d0(void)

longlong FUN_1417aa3d0(void)

{
  if (DAT_1469e9758 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9758,&PTR_FUN_1464b8e10);
  }
  return DAT_1469e9758;
}



// FUNCTION 1417aa400 FUN_1417aa400 body=47 status=ok
// SIG undefined FUN_1417aa400(void)

longlong FUN_1417aa400(void)

{
  if (DAT_1469e9748 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9748,&PTR_FUN_1464b8ca0);
  }
  return DAT_1469e9748;
}



// FUNCTION 1417aa430 FUN_1417aa430 body=47 status=ok
// SIG undefined FUN_1417aa430(void)

longlong FUN_1417aa430(void)

{
  if (DAT_1469e9750 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9750,&PTR_FUN_1464b8d90);
  }
  return DAT_1469e9750;
}



// FUNCTION 1417aa460 FUN_1417aa460 body=47 status=ok
// SIG undefined FUN_1417aa460(void)

longlong FUN_1417aa460(void)

{
  if (DAT_1469e9700 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9700,&PTR_FUN_1464b8200);
  }
  return DAT_1469e9700;
}



// FUNCTION 1417aa490 FUN_1417aa490 body=47 status=ok
// SIG undefined FUN_1417aa490(void)

longlong FUN_1417aa490(void)

{
  if (DAT_1469e96b0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e96b0,&PTR_FUN_1464b7440);
  }
  return DAT_1469e96b0;
}



// FUNCTION 1417aa4c0 FUN_1417aa4c0 body=47 status=ok
// SIG undefined FUN_1417aa4c0(void)

longlong FUN_1417aa4c0(void)

{
  if (DAT_1469e9708 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9708,&PTR_FUN_1464b82c0);
  }
  return DAT_1469e9708;
}



// FUNCTION 1417aa4f0 FUN_1417aa4f0 body=47 status=ok
// SIG undefined FUN_1417aa4f0(void)

longlong FUN_1417aa4f0(void)

{
  if (DAT_1469e96b8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e96b8,&PTR_FUN_1464b75c0);
  }
  return DAT_1469e96b8;
}



// FUNCTION 1417aa520 FUN_1417aa520 body=47 status=ok
// SIG undefined FUN_1417aa520(void)

longlong FUN_1417aa520(void)

{
  if (DAT_1469e96d8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e96d8,&PTR_FUN_1464b7b40);
  }
  return DAT_1469e96d8;
}



// FUNCTION 1417aa550 FUN_1417aa550 body=47 status=ok
// SIG undefined FUN_1417aa550(void)

longlong FUN_1417aa550(void)

{
  if (DAT_1469e96c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e96c8,&PTR_FUN_1464b7880);
  }
  return DAT_1469e96c8;
}



// FUNCTION 1417aa580 FUN_1417aa580 body=47 status=ok
// SIG undefined FUN_1417aa580(void)

longlong FUN_1417aa580(void)

{
  if (DAT_1469e96f8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e96f8,&PTR_FUN_1464b80c0);
  }
  return DAT_1469e96f8;
}



// FUNCTION 1417aa5b0 FUN_1417aa5b0 body=47 status=ok
// SIG undefined FUN_1417aa5b0(void)

longlong FUN_1417aa5b0(void)

{
  if (DAT_1469e96e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e96e8,&PTR_FUN_1464b7e00);
  }
  return DAT_1469e96e8;
}



// FUNCTION 1417aa5e0 FUN_1417aa5e0 body=47 status=ok
// SIG undefined FUN_1417aa5e0(void)

longlong FUN_1417aa5e0(void)

{
  if (DAT_1469e96d0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e96d0,&PTR_FUN_1464b79c0);
  }
  return DAT_1469e96d0;
}



// FUNCTION 1417aa610 FUN_1417aa610 body=47 status=ok
// SIG undefined FUN_1417aa610(void)

longlong FUN_1417aa610(void)

{
  if (DAT_1469e96c0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e96c0,&PTR_FUN_1464b7700);
  }
  return DAT_1469e96c0;
}



// FUNCTION 1417aa640 FUN_1417aa640 body=47 status=ok
// SIG undefined FUN_1417aa640(void)

longlong FUN_1417aa640(void)

{
  if (DAT_1469e96f0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e96f0,&PTR_FUN_1464b7f40);
  }
  return DAT_1469e96f0;
}



// FUNCTION 1417aa670 FUN_1417aa670 body=47 status=ok
// SIG undefined FUN_1417aa670(void)

longlong FUN_1417aa670(void)

{
  if (DAT_1469e96e0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e96e0,&PTR_FUN_1464b7c80);
  }
  return DAT_1469e96e0;
}



// FUNCTION 1417aa6a0 FUN_1417aa6a0 body=47 status=ok
// SIG undefined FUN_1417aa6a0(void)

longlong FUN_1417aa6a0(void)

{
  if (DAT_1469e9590 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9590,&PTR_FUN_1464b6040);
  }
  return DAT_1469e9590;
}



// FUNCTION 1417aa6d0 FUN_1417aa6d0 body=47 status=ok
// SIG undefined FUN_1417aa6d0(void)

longlong FUN_1417aa6d0(void)

{
  if (DAT_1469e9738 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9738,&PTR_FUN_1464b8a30);
  }
  return DAT_1469e9738;
}



// FUNCTION 1417aa700 FUN_1417aa700 body=47 status=ok
// SIG undefined FUN_1417aa700(void)

longlong FUN_1417aa700(void)

{
  if (DAT_1469e9710 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9710,&PTR_FUN_1464b8440);
  }
  return DAT_1469e9710;
}



// FUNCTION 1417aa730 FUN_1417aa730 body=47 status=ok
// SIG undefined FUN_1417aa730(void)

longlong FUN_1417aa730(void)

{
  if (DAT_1469e9718 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9718,&PTR_FUN_1464b85c0);
  }
  return DAT_1469e9718;
}



// FUNCTION 1417aa760 FUN_1417aa760 body=47 status=ok
// SIG undefined FUN_1417aa760(void)

longlong FUN_1417aa760(void)

{
  if (DAT_1469e9770 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9770,&PTR_FUN_1464b9100);
  }
  return DAT_1469e9770;
}



// FUNCTION 1417aa790 FUN_1417aa790 body=47 status=ok
// SIG undefined FUN_1417aa790(void)

longlong FUN_1417aa790(void)

{
  if (DAT_1469e9768 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9768,&PTR_FUN_1464b8f80);
  }
  return DAT_1469e9768;
}



// FUNCTION 1417aa7c0 FUN_1417aa7c0 body=47 status=ok
// SIG undefined FUN_1417aa7c0(void)

longlong FUN_1417aa7c0(void)

{
  if (DAT_1469e9760 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9760,&PTR_FUN_1464b8f00);
  }
  return DAT_1469e9760;
}



// FUNCTION 1417aa7f0 FUN_1417aa7f0 body=47 status=ok
// SIG undefined FUN_1417aa7f0(void)

longlong FUN_1417aa7f0(void)

{
  if (DAT_1469e9788 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9788,&PTR_FUN_1464b9360);
  }
  return DAT_1469e9788;
}



// FUNCTION 1417aa820 FUN_1417aa820 body=47 status=ok
// SIG undefined FUN_1417aa820(void)

longlong FUN_1417aa820(void)

{
  if (DAT_1469e9608 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9608,&PTR_FUN_1464b64d0);
  }
  return DAT_1469e9608;
}



// FUNCTION 1417aa850 FUN_1417aa850 body=47 status=ok
// SIG undefined FUN_1417aa850(void)

longlong FUN_1417aa850(void)

{
  if (DAT_1469e9648 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9648,&PTR_FUN_1464b6b00);
  }
  return DAT_1469e9648;
}



// FUNCTION 1417aa880 FUN_1417aa880 body=47 status=ok
// SIG undefined FUN_1417aa880(void)

longlong FUN_1417aa880(void)

{
  if (DAT_1469e9650 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9650,&PTR_FUN_1464b6b80);
  }
  return DAT_1469e9650;
}



// FUNCTION 1417aa8b0 FUN_1417aa8b0 body=47 status=ok
// SIG undefined FUN_1417aa8b0(void)

longlong FUN_1417aa8b0(void)

{
  if (DAT_1469e9678 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9678,&PTR_FUN_1464b6f00);
  }
  return DAT_1469e9678;
}



// FUNCTION 1417aa8e0 FUN_1417aa8e0 body=47 status=ok
// SIG undefined FUN_1417aa8e0(void)

longlong FUN_1417aa8e0(void)

{
  if (DAT_1469e9778 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9778,&PTR_FUN_1464b91f0);
  }
  return DAT_1469e9778;
}



// FUNCTION 1417aa910 FUN_1417aa910 body=47 status=ok
// SIG undefined FUN_1417aa910(void)

longlong FUN_1417aa910(void)

{
  if (DAT_1469e96a0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e96a0,&PTR_FUN_1464b71c0);
  }
  return DAT_1469e96a0;
}



// FUNCTION 1417aa940 FUN_1417aa940 body=47 status=ok
// SIG undefined FUN_1417aa940(void)

longlong FUN_1417aa940(void)

{
  if (DAT_1469e9780 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9780,&PTR_FUN_1464b92e0);
  }
  return DAT_1469e9780;
}



// FUNCTION 1417aa970 FUN_1417aa970 body=47 status=ok
// SIG undefined FUN_1417aa970(void)

longlong FUN_1417aa970(void)

{
  if (DAT_1469e9658 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9658,&PTR_FUN_1464b6c00);
  }
  return DAT_1469e9658;
}



// FUNCTION 1417aa9a0 FUN_1417aa9a0 body=47 status=ok
// SIG undefined FUN_1417aa9a0(void)

longlong FUN_1417aa9a0(void)

{
  if (DAT_1469e9670 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9670,&PTR_FUN_1464b6e00);
  }
  return DAT_1469e9670;
}



// FUNCTION 1417aa9d0 FUN_1417aa9d0 body=47 status=ok
// SIG undefined FUN_1417aa9d0(void)

longlong FUN_1417aa9d0(void)

{
  if (DAT_1469e9668 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9668,&PTR_FUN_1464b6d00);
  }
  return DAT_1469e9668;
}



// FUNCTION 1417aaa00 FUN_1417aaa00 body=47 status=ok
// SIG undefined FUN_1417aaa00(void)

longlong FUN_1417aaa00(void)

{
  if (DAT_1469e96a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e96a8,&PTR_FUN_1464b7300);
  }
  return DAT_1469e96a8;
}



// FUNCTION 1417aaa30 FUN_1417aaa30 body=47 status=ok
// SIG undefined FUN_1417aaa30(void)

longlong FUN_1417aaa30(void)

{
  if (DAT_1469e9790 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9790,&PTR_FUN_1464b9460);
  }
  return DAT_1469e9790;
}



// FUNCTION 1417aaa60 FUN_1417aaa60 body=47 status=ok
// SIG undefined FUN_1417aaa60(void)

longlong FUN_1417aaa60(void)

{
  if (DAT_1469e9588 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9588,&PTR_FUN_1464b5d50);
  }
  return DAT_1469e9588;
}



// FUNCTION 1417aaa90 FUN_1417aaa90 body=47 status=ok
// SIG undefined FUN_1417aaa90(void)

longlong FUN_1417aaa90(void)

{
  if (DAT_1469e9798 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e9798,&PTR_FUN_1464b94e0);
  }
  return DAT_1469e9798;
}



// FUNCTION 1417aaac0 FUN_1417aaac0 body=47 status=ok
// SIG undefined FUN_1417aaac0(void)

longlong FUN_1417aaac0(void)

{
  if (DAT_1469e97a0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1469e97a0,&PTR_FUN_1464b95d0);
  }
  return DAT_1469e97a0;
}



// FUNCTION 1417aaaf0 TAttribute<FText><FText> body=36 status=ok
// SIG undefined TAttribute<FText><FText>(void)

longlong TAttribute<FText>::TAttribute<FText><FText>(longlong param_1)

{
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return param_1;
}



// FUNCTION 1417aab20 operator<FName,EKeys::FCategoryDisplayInfo>_TTuple<FName,EKeys::FCategoryDisplayInfo> body=181 status=ok
// SIG undefined operator<FName,EKeys::FCategoryDisplayInfo>_TTuple<FName,EKeys::FCategoryDisplayInfo>(void)

undefined8 *
TKeyInitializer<FName_const_&>::
operator<FName,EKeys::FCategoryDisplayInfo>_TTuple<FName,EKeys::FCategoryDisplayInfo>
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_20 = (longlong *)0x0;
  local_18 = 0;
  local_10 = 0;
  FText::FText(&local_28);
  local_10 = 0;
  *param_2 = *(undefined8 *)*param_1;
  FText::FText(param_2 + 1,&local_28);
  plVar5 = local_20;
  param_2[4] = local_10;
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
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 1417aabe0 FUN_1417aabe0 body=263 status=ok
// SIG undefined FUN_1417aabe0(void)

undefined8 * FUN_1417aabe0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  plVar4 = (longlong *)param_3[2];
  uVar5 = *param_3;
  uVar6 = param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = operator_new(0x30,param_1);
  if (lVar7 != 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_38 = uVar5;
    local_30 = uVar6;
    local_28 = plVar4;
    FUN_1417abc10(lVar7,param_2,&local_38);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  plVar4 = (longlong *)param_3[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  return param_1;
}



// FUNCTION 1417aacf0 FUN_1417aacf0 body=790 status=ok
// SIG undefined FUN_1417aacf0(void)

int * FUN_1417aacf0(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  uint uVar15;
  longlong *plVar16;
  void *_Dst;
  bool local_res8;
  
  iVar9 = 1;
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar4 = *(int *)((longlong)iVar11 * 0x20 + 4 + *param_1);
    iVar12 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)((longlong)iVar4 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar16 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar16 == (longlong *)0x0) {
    plVar16 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar16 +
                   (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar11 & 0x1f);
  plVar16 = (longlong *)((longlong)iVar11 * 0x20 + *param_1);
  *plVar16 = *param_3;
  plVar16[1] = param_3[1];
  lVar5 = param_3[2];
  plVar16[2] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(plVar16 + 3) = 0xffffffff;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar15 != 1) {
    iVar11 = iVar13;
    if (uVar15 != 0) {
      lVar5 = *plVar16;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar12 = *(int *)((longlong)plVar8 +
                       ((longlong)((int)((ulonglong)lVar5 >> 0x20) + (int)lVar5) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar12 != -1) {
        do {
          iVar11 = iVar12;
          if (*(longlong *)((longlong)iVar12 * 0x20 + *param_1) == lVar5) break;
          iVar12 = *(int *)((longlong)iVar12 * 0x20 + 0x18 + *param_1);
          iVar11 = iVar13;
        } while (iVar12 != -1);
      }
    }
    local_res8 = iVar11 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar11 * 0x20 + *param_1);
      plVar8 = *(longlong **)((longlong)_Dst + 0x10);
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
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar16,0x18);
      iVar9 = *param_2;
      bVar6 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar9;
      }
      puVar10 = (undefined4 *)((longlong)iVar9 * 0x20 + *param_1);
      *puVar10 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      puVar10[1] = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar16 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar16 == (longlong *)0x0) {
        plVar16 = param_1 + 2;
      }
      puVar3 = (uint *)((longlong)plVar16 +
                       (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar3 = *puVar3 & ~(1 << bVar6 | 1U >> 0x20 - bVar6);
      goto LAB_1417aafdd;
    }
  }
  if (3 < uVar15) {
    uVar7 = (uVar15 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar9 = 0x20;
    if (uVar7 != 0) {
      iVar9 = 0x1f - iVar13;
    }
    uVar7 = (uVar15 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar7 == 0) {
      cVar14 = '\0';
    }
    else {
      cVar14 = '\x1f' - (char)iVar13;
    }
    iVar9 = 1 << (~(byte)((iVar9 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar15 = (int)((ulonglong)*plVar16 >> 0x20) + (int)*plVar16 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar16 + 0x1c) = uVar15;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(plVar16 + 3) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    *(int *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<FKey,DefaultKeyFuncs<FKey,0>,FDefaultSetAllocator>::Rehash(param_1);
  }
LAB_1417aafdd:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1417ab010 FUN_1417ab010 body=795 status=ok
// SIG undefined FUN_1417ab010(void)

int * FUN_1417ab010(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  uint uVar15;
  longlong *plVar16;
  void *_Dst;
  bool local_res8;
  
  iVar10 = 1;
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar12 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar4 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x30);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x30) = 0xffffffff;
    }
  }
  plVar16 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar16 == (longlong *)0x0) {
    plVar16 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar16 +
                   (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar11 & 0x1f);
  plVar16 = (longlong *)((longlong)iVar11 * 0x30 + *param_1);
  TKeyInitializer<FName_const_&>::
  operator<FName,EKeys::FCategoryDisplayInfo>_TTuple<FName,EKeys::FCategoryDisplayInfo>
            (param_3,plVar16);
  *(undefined4 *)(plVar16 + 5) = 0xffffffff;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar15 != 1) {
    lVar5 = *plVar16;
    iVar11 = iVar13;
    if (uVar15 != 0) {
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar12 = *(int *)((longlong)plVar9 +
                       ((longlong)((int)((ulonglong)lVar5 >> 0x20) + (int)lVar5) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar12 != -1) {
        do {
          iVar11 = iVar12;
          if (*(longlong *)(*param_1 + (longlong)iVar12 * 0x30) == lVar5) break;
          iVar12 = *(int *)(*param_1 + 0x28 + (longlong)iVar12 * 0x30);
          iVar11 = iVar13;
        } while (iVar12 != -1);
      }
    }
    local_res8 = iVar11 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar11 * 0x30 + *param_1);
      plVar9 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar16,0x28);
      iVar10 = *param_2;
      bVar6 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x30) = iVar10;
      }
      puVar8 = (undefined4 *)((longlong)iVar10 * 0x30 + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      puVar8[1] = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar16 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar16 == (longlong *)0x0) {
        plVar16 = param_1 + 2;
      }
      puVar3 = (uint *)((longlong)plVar16 +
                       (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar3 = *puVar3 & ~(1 << bVar6 | 1U >> 0x20 - bVar6);
      goto LAB_1417ab302;
    }
  }
  if (3 < uVar15) {
    uVar7 = (uVar15 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar10 = 0x20;
    cVar14 = '\0';
    if (uVar7 != 0) {
      iVar10 = 0x1f - iVar13;
    }
    uVar7 = (uVar15 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar7 != 0) {
      cVar14 = '\x1f' - (char)iVar13;
    }
    iVar10 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    uVar15 = (int)((ulonglong)*plVar16 >> 0x20) + (int)*plVar16 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar16 + 0x2c) = uVar15;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(plVar16 + 5) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    *(int *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1417ab302:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1417ab330 FUN_1417ab330 body=610 status=ok
// SIG undefined FUN_1417ab330(void)

int * FUN_1417ab330(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  uint *_Src;
  bool bVar10;
  
  iVar7 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar6 * 0x10);
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x10) = 0xffffffff;
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
  _Src = (uint *)((longlong)iVar6 * 0x10 + *param_1);
  puVar1 = (uint *)param_3[1];
  *_Src = *(uint *)*param_3;
  _Src[1] = *puVar1;
  _Src[2] = 0xffffffff;
  uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar9 != 1) {
    if (uVar9 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*_Src) * 4);
      if (iVar5 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar5 * 0x10) == *_Src) goto LAB_1417ab47a;
          iVar5 = *(int *)(*param_1 + 8 + (longlong)iVar5 * 0x10);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_1417ab47a:
    bVar10 = iVar5 != -1;
    if (bVar10) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar5 * 0x10 + *param_1),_Src,8);
      TSparseArray<TSetElement<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar6,1);
      *param_2 = iVar5;
      goto LAB_1417ab569;
    }
  }
  if (3 < uVar9) {
    uVar3 = (uVar9 >> 1) + 8;
    iVar7 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar5 = 0x20;
    if (uVar3 != 0) {
      iVar5 = 0x1f - iVar7;
    }
    uVar3 = (uVar9 >> 1) + 7;
    iVar7 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar3 == 0) {
      cVar8 = '\0';
    }
    else {
      cVar8 = '\x1f' - (char)iVar7;
    }
    iVar7 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar8 & 0x1f);
  }
  if (((int)uVar9 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar9 = (int)param_1[9] - 1U & *_Src;
    _Src[3] = uVar9;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    _Src[2] = *(uint *)((longlong)plVar4 +
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
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Rehash
              (param_1);
  }
LAB_1417ab569:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 1417ab5a0 FUN_1417ab5a0 body=783 status=ok
// SIG undefined FUN_1417ab5a0(void)

int * FUN_1417ab5a0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  bool local_res8;
  
  iVar15 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar13 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x28);
    *(int *)(param_1 + 6) = iVar13;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar13 * 0x28) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar10 +
                   (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar12 & 0x1f);
  puVar3 = (uint *)(*param_1 + (longlong)iVar12 * 0x28);
  puVar4 = (undefined8 *)param_3[1];
  *puVar3 = *(uint *)*param_3;
  *(undefined8 *)(puVar3 + 2) = *puVar4;
  *(undefined8 *)(puVar3 + 4) = puVar4[1];
  lVar5 = puVar4[2];
  *(longlong *)(puVar3 + 6) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  puVar3[8] = 0xffffffff;
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar16 != 1) {
    iVar12 = iVar14;
    if (uVar16 != 0) {
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      iVar13 = *(int *)((longlong)plVar10 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar3) * 4);
      if (iVar13 != -1) {
        do {
          iVar12 = iVar13;
          if (*(uint *)(*param_1 + (longlong)iVar13 * 0x28) == *puVar3) break;
          iVar13 = *(int *)(*param_1 + 0x20 + (longlong)iVar13 * 0x28);
          iVar12 = iVar14;
        } while (iVar13 != -1);
      }
    }
    local_res8 = iVar12 != -1;
    if (local_res8) {
      lVar5 = *param_1;
      plVar10 = *(longlong **)(lVar5 + 0x18 + (longlong)iVar12 * 0x28);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar10 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar5 + (longlong)iVar12 * 0x28),puVar3,0x20);
      iVar15 = *param_2;
      bVar6 = (byte)iVar15 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar15;
      }
      lVar5 = *param_1;
      *(undefined4 *)(lVar5 + (longlong)iVar15 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      *(int *)(lVar5 + 4 + (longlong)iVar15 * 0x28) = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar15;
      plVar10 = (longlong *)param_1[4];
      *param_2 = iVar12;
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      puVar3 = (uint *)((longlong)plVar10 +
                       (longlong)((int)(iVar15 + (iVar15 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar3 = *puVar3 & ~(1 << bVar6 | 1U >> 0x20 - bVar6);
      goto LAB_1417ab886;
    }
  }
  if (3 < uVar16) {
    uVar9 = (uVar16 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar15 = 0x20;
    cVar11 = '\0';
    if (uVar9 != 0) {
      iVar15 = 0x1f - iVar14;
    }
    uVar9 = (uVar16 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar9 != 0) {
      cVar11 = '\x1f' - (char)iVar14;
    }
    iVar15 = 1 << (~(byte)((iVar15 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar16 < 1) || (((int)param_1[9] != 0 && (iVar15 <= (int)param_1[9])))) {
    uVar16 = (int)param_1[9] - 1U & *puVar3;
    puVar3[9] = uVar16;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    puVar3[8] = *(uint *)((longlong)plVar10 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar15;
    TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1417ab886:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1417ab8b0 FUN_1417ab8b0 body=803 status=ok
// SIG undefined FUN_1417ab8b0(void)

int * FUN_1417ab8b0(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  void *_Dst;
  char cVar12;
  uint uVar13;
  int iVar14;
  longlong *_Src;
  bool local_res8;
  
  iVar9 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x30);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  plVar8 = (longlong *)*param_3;
  plVar3 = (longlong *)param_3[1];
  _Src = (longlong *)((longlong)iVar10 * 0x30 + *param_1);
  *_Src = *plVar8;
  _Src[1] = plVar8[1];
  lVar4 = plVar8[2];
  _Src[2] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  _Src[3] = *plVar3;
  lVar4 = plVar3[1];
  _Src[4] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(_Src + 5) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar13 != 1) {
    iVar10 = iVar14;
    if (uVar13 != 0) {
      lVar4 = *_Src;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar11 = *(int *)((longlong)plVar8 +
                       ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar11 != -1) {
        do {
          iVar10 = iVar11;
          if (*(longlong *)(*param_1 + (longlong)iVar11 * 0x30) == lVar4) break;
          iVar11 = *(int *)(*param_1 + 0x28 + (longlong)iVar11 * 0x30);
          iVar10 = iVar14;
        } while (iVar11 != -1);
      }
    }
    local_res8 = iVar10 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar10 * 0x30 + *param_1);
      FUN_1417ac1a0(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x28);
      iVar9 = *param_2;
      bVar5 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x30) = iVar9;
      }
      puVar7 = (undefined4 *)((longlong)iVar9 * 0x30 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      puVar7[1] = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar8 +
                       (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_1417abbaa;
    }
  }
  if (3 < uVar13) {
    uVar6 = (uVar13 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar9 = 0x20;
    if (uVar6 != 0) {
      iVar9 = 0x1f - iVar14;
    }
    uVar6 = (uVar13 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar6 == 0) {
      cVar12 = '\0';
    }
    else {
      cVar12 = '\x1f' - (char)iVar14;
    }
    iVar9 = 1 << (~(byte)((iVar9 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar13 = (int)((ulonglong)*_Src >> 0x20) + (int)*_Src & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x2c) = uVar13;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 5) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1417abbaa:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1417abbe0 TAttribute<FText> body=36 status=ok
// SIG undefined TAttribute<FText>(void)

longlong TAttribute<FText>::TAttribute<FText>(longlong param_1)

{
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return param_1;
}



// FUNCTION 1417abc10 FUN_1417abc10 body=164 status=ok
// SIG undefined FUN_1417abc10(void)

undefined8 * FUN_1417abc10(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  param_1[1] = param_2;
  *param_1 = &PTR_GetPoolName_144d3cb58;
  param_1[2] = *param_3;
  param_1[3] = param_3[1];
  lVar4 = param_3[2];
  param_1[4] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  uVar6 = FDelegateHandle::GenerateNewID();
  param_1[5] = uVar6;
  plVar5 = (longlong *)param_3[2];
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
    return param_1;
  }
  return param_1;
}



// FUNCTION 1417abcc0 initializer_list<FFormatArgumentValue> body=11 status=ok
// SIG undefined initializer_list<FFormatArgumentValue>(void)

undefined8 *
std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}



// FUNCTION 1417abcd0 FFormatArgumentValue body=46 status=ok
// SIG undefined FFormatArgumentValue(void)

undefined4 * FFormatArgumentValue::FFormatArgumentValue(undefined4 *param_1)

{
  *param_1 = 4;
  FText::FText(param_1 + 4);
  *(undefined1 *)(param_1 + 10) = 1;
  return param_1;
}



// FUNCTION 1417abd00 FKey body=35 status=ok
// SIG undefined FKey(void)

undefined8 * FKey::FKey(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1417abd30 FUN_1417abd30 body=292 status=ok
// SIG undefined FUN_1417abd30(void)

undefined8 *
FUN_1417abd30(undefined8 *param_1,undefined8 *param_2,longlong param_3,longlong param_4,
             undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar4 = param_2[2];
  param_1[2] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  param_1[3] = param_6;
  FText::FText(param_1 + 5,param_3);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_3 + 0x18);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  if ((((longlong *)(param_3 + 0x20) != param_1 + 9) && (*(int *)(param_3 + 0x28) != 0)) &&
     (plVar5 = *(longlong **)(param_3 + 0x20), plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x30))();
  }
  FText::FText(param_1 + 0xb,param_4);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_4 + 0x18);
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((((longlong *)(param_4 + 0x20) != param_1 + 0xf) && (*(int *)(param_4 + 0x28) != 0)) &&
     (plVar5 = *(longlong **)(param_4 + 0x20), plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x30))();
  }
  FKeyDetails::CommonInit(param_1,param_5);
  plVar5 = (longlong *)param_2[2];
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
  return param_1;
}



// FUNCTION 1417abe60 FUN_1417abe60 body=298 status=ok
// SIG undefined FUN_1417abe60(void)

undefined8 *
FUN_1417abe60(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined1 param_4,
             undefined8 param_5,longlong param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar4 = param_2[2];
  param_1[2] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  param_1[3] = param_5;
  FText::FText(param_1 + 5,param_3);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_3 + 0x18);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  if ((((longlong *)(param_3 + 0x20) != param_1 + 9) && (*(int *)(param_3 + 0x28) != 0)) &&
     (plVar5 = *(longlong **)(param_3 + 0x20), plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x30))();
  }
  FText::FText(param_1 + 0xb,param_6);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_6 + 0x18);
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((((longlong *)(param_6 + 0x20) != param_1 + 0xf) && (*(int *)(param_6 + 0x28) != 0)) &&
     (plVar5 = *(longlong **)(param_6 + 0x20), plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x30))();
  }
  FKeyDetails::CommonInit(param_1,param_4);
  plVar5 = (longlong *)param_2[2];
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
  return param_1;
}



// FUNCTION 1417abf90 FTextFormat body=27 status=ok
// SIG undefined FTextFormat(void)

undefined8 * FTextFormat::FTextFormat(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1417abfb0 ~TAttribute<FText> body=89 status=ok
// SIG undefined ~TAttribute<FText>(void)

void TAttribute<FText>::~TAttribute<FText>(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x20);
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



// FUNCTION 1417ac010 ~TSparseArray<TSetElement<TTuple<FString,FCachedResponse>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=392 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FString,FCachedResponse>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FString,FCachedResponse>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FString,FCachedResponse>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar4) goto LAB_1417ac0d1;
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
LAB_1417ac0d1:
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
      FUN_1417ac1a0((longlong)iStack_1c * 0x30 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1417ac1a0 FUN_1417ac1a0 body=142 status=ok
// SIG undefined FUN_1417ac1a0(void)

void FUN_1417ac1a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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



// FUNCTION 1417ac230 ~FKeyDetails body=61 status=ok
// SIG undefined ~FKeyDetails(void)

void FKeyDetails::~FKeyDetails(longlong param_1)

{
  TAttribute<FText>::~TAttribute<FText>(param_1 + 0x58);
  TAttribute<FText>::~TAttribute<FText>(param_1 + 0x28);
  FKey::~FKey(param_1);
  return;
}



// FUNCTION 1417ac270 operator== body=10 status=ok
// SIG undefined operator==(void)

undefined8 operator==(longlong *param_1,longlong *param_2)

{
  return CONCAT71((int7)((ulonglong)*param_2 >> 8),*param_1 == *param_2);
}



// FUNCTION 1417ac280 `scalar_deleting_destructor' body=134 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_8e16915dd32e6fc00de1fc3d1037c398>_>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

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
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1417ac310 `scalar_deleting_destructor' body=182 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong * FInputKeyManager::_scalar_deleting_destructor_(longlong *param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 10,0);
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1,0);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1417ac3d0 FUN_1417ac3d0 body=637 status=ok
// SIG undefined FUN_1417ac3d0(void)

void FUN_1417ac3d0(longlong *param_1)

{
  longlong **pplVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  byte bVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong **local_20;
  
  plVar9 = (longlong *)0x0;
  if (DAT_1464b9c58 != DAT_1464b9c84) {
    lVar4 = *param_1;
    puVar5 = DAT_1464b9c90;
    if (DAT_1464b9c90 == (undefined *)0x0) {
      puVar5 = &DAT_1464b9c88;
    }
    iVar3 = *(int *)(puVar5 + ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                              (longlong)DAT_1464b9c98 - 1U) * 4);
    while ((iVar3 != -1 && (*(longlong *)(DAT_1464b9c50 + (longlong)iVar3 * 0x30) != lVar4))) {
      iVar3 = *(int *)(DAT_1464b9c50 + 0x28 + (longlong)iVar3 * 0x30);
    }
  }
  plVar6 = (longlong *)operator_new(0x88);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    *plVar6 = *param_1;
    plVar6[1] = param_1[1];
    lVar4 = param_1[2];
    plVar6[2] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar6[3] = param_1[3];
    *(byte *)(plVar6 + 4) =
         *(byte *)(plVar6 + 4) ^ (*(byte *)(plVar6 + 4) ^ *(byte *)(param_1 + 4)) & 1;
    bVar8 = (*(byte *)(plVar6 + 4) ^ *(byte *)(param_1 + 4)) & 2 ^ *(byte *)(plVar6 + 4);
    *(byte *)(plVar6 + 4) = bVar8;
    bVar8 = (*(byte *)(param_1 + 4) ^ bVar8) & 4 ^ bVar8;
    *(byte *)(plVar6 + 4) = bVar8;
    bVar8 = (*(byte *)(param_1 + 4) ^ bVar8) & 8 ^ bVar8;
    *(byte *)(plVar6 + 4) = bVar8;
    *(byte *)(plVar6 + 4) = (*(byte *)(param_1 + 4) ^ bVar8) & 0x10 ^ bVar8;
    *(undefined1 *)((longlong)plVar6 + 0x21) = *(undefined1 *)((longlong)param_1 + 0x21);
    FText::FText(plVar6 + 5,param_1 + 5);
    *(char *)(plVar6 + 8) = (char)param_1[8];
    plVar6[9] = 0;
    *(undefined4 *)(plVar6 + 10) = 0;
    if (((param_1 + 9 != plVar6 + 9) && ((int)param_1[10] != 0)) &&
       (plVar7 = (longlong *)param_1[9], plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 0x30))();
    }
    FText::FText(plVar6 + 0xb,param_1 + 0xb);
    *(char *)(plVar6 + 0xe) = (char)param_1[0xe];
    plVar6[0xf] = 0;
    *(undefined4 *)(plVar6 + 0x10) = 0;
    if (((param_1 + 0xf != plVar6 + 0xf) && ((int)param_1[0x10] != 0)) &&
       (plVar7 = (longlong *)param_1[0xf], plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 0x30))();
    }
  }
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_DestroyObject_144d3cba8;
    plVar7[2] = (longlong)plVar6;
    plVar9 = plVar7;
  }
  pplVar1 = (longlong **)(param_1 + 1);
  local_38 = plVar6;
  local_30 = plVar9;
  SharedPointerInternals::EnableSharedFromThis(&local_38,plVar6,plVar6);
  if (pplVar1 != &local_38) {
    *pplVar1 = plVar6;
    local_38 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 2,&local_30);
    plVar9 = local_30;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar9 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  local_28 = param_1;
  local_20 = pplVar1;
  FUN_1417ab8b0(&DAT_1464b9c50,local_res8,&local_28,0);
  return;
}



// FUNCTION 1417ac650 FUN_1417ac650 body=500 status=ok
// SIG undefined FUN_1417ac650(void)

void FUN_1417ac650(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined *puVar5;
  longlong lVar6;
  longlong local_res8;
  int local_res10 [2];
  longlong *local_res18;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined8 local_20;
  
  if (DAT_1464b9ca8 != DAT_1464b9cd4) {
    puVar5 = DAT_1464b9ce0;
    if (DAT_1464b9ce0 == (undefined *)0x0) {
      puVar5 = &DAT_1464b9cd8;
    }
    iVar3 = *(int *)(puVar5 + ((longlong)((int)((ulonglong)param_1 >> 0x20) + (int)param_1) &
                              (longlong)DAT_1464b9ce8 - 1U) * 4);
    while ((iVar3 != -1 && (*(longlong *)(DAT_1464b9ca0 + (longlong)iVar3 * 0x30) != param_1))) {
      iVar3 = *(int *)(DAT_1464b9ca0 + 0x28 + (longlong)iVar3 * 0x30);
    }
  }
  local_res8 = param_1;
  FText::FText(local_38);
  local_20 = 0;
  FText::operator=(local_38,param_2);
  local_20 = param_3;
  if (DAT_1464b9ca8 != DAT_1464b9cd4) {
    puVar5 = DAT_1464b9ce0;
    if (DAT_1464b9ce0 == (undefined *)0x0) {
      puVar5 = &DAT_1464b9cd8;
    }
    iVar3 = *(int *)(puVar5 + ((longlong)((int)((ulonglong)local_res8 >> 0x20) + (int)local_res8) &
                              (longlong)DAT_1464b9ce8 - 1U) * 4);
    while (iVar3 != -1) {
      lVar6 = (longlong)iVar3;
      if (*(longlong *)(DAT_1464b9ca0 + lVar6 * 0x30) == local_res8) {
        if ((iVar3 != -1) && (lVar6 = DAT_1464b9ca0 + lVar6 * 0x30, lVar6 != 0)) goto LAB_1417ac7b3;
        break;
      }
      iVar3 = *(int *)(DAT_1464b9ca0 + lVar6 * 0x30 + 0x28);
    }
  }
  local_res18 = &local_res8;
  FUN_1417ab010(&DAT_1464b9ca0,local_res10,&local_res18,0);
  lVar6 = (longlong)local_res10[0] * 0x30 + DAT_1464b9ca0;
LAB_1417ac7b3:
  FText::operator=(lVar6 + 8,local_38);
  *(undefined8 *)(lVar6 + 0x20) = local_20;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  plVar4 = *(longlong **)(param_2 + 8);
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
  return;
}



// FUNCTION 1417ac850 CommonInit body=123 status=ok
// SIG undefined CommonInit(void)

void FKeyDetails::CommonInit(longlong param_1,byte param_2)

{
  undefined8 uVar1;
  
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xe0;
  *(byte *)(param_1 + 0x20) =
       *(byte *)(param_1 + 0x20) |
       (((byte)(~(uint)param_2 >> 3) & 1) << 2 | param_2 & 3) * '\x02' | param_2 >> 2 & 0x11;
  if ((param_2 & 0x10) == 0) {
    *(byte *)(param_1 + 0x21) = param_2 >> 4 & 2;
  }
  else {
    *(undefined1 *)(param_1 + 0x21) = 1;
  }
  if ((*(int *)(param_1 + 0x18) == 0) && (*(int *)(param_1 + 0x1c) == 0)) {
    if ((*(byte *)(param_1 + 0x20) & 2) != 0) {
      *(undefined8 *)(param_1 + 0x18) = DAT_1469eae40;
      return;
    }
    uVar1 = DAT_1469eae50;
    if ((*(byte *)(param_1 + 0x20) & 4) != 0) {
      uVar1 = DAT_1469eae48;
    }
    *(undefined8 *)(param_1 + 0x18) = uVar1;
  }
  return;
}



// FUNCTION 1417ac8d0 ConditionalLookupKeyDetails body=176 status=ok
// SIG undefined ConditionalLookupKeyDetails(void)

void FKey::ConditionalLookupKeyDetails(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  if (param_1[1] == 0) {
    local_28 = *param_1;
    local_18 = param_1[2];
    local_20 = 0;
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      UNLOCK();
    }
    puVar5 = (undefined8 *)FUN_1417ae140(local_38,&local_28);
    if (param_1 + 1 != puVar5) {
      param_1[1] = *puVar5;
      *puVar5 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 2,puVar5 + 1);
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



// FUNCTION 1417ac980 Create body=75 status=ok
// SIG undefined Create(void)

longlong TAttribute<FText>::Create(longlong param_1,longlong *param_2)

{
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(longlong *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((param_2 != (longlong *)(param_1 + 0x20)) && ((int)param_2[1] != 0)) &&
     ((longlong *)*param_2 != (longlong *)0x0)) {
    (**(code **)(*(longlong *)*param_2 + 0x30))();
  }
  return param_1;
}



// FUNCTION 1417ac9d0 FUN_1417ac9d0 body=92 status=ok
// SIG undefined FUN_1417ac9d0(void)

void FUN_1417ac9d0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144d3cb58;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    lVar1 = *(longlong *)(param_1 + 0x20);
    puVar2[4] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 1417aca30 FUN_1417aca30 body=20 status=ok
// SIG undefined FUN_1417aca30(void)

void FUN_1417aca30(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FInputKeyManager::_scalar_deleting_destructor_(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 1417aca50 DestroyObject body=47 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FKeyDetails,SharedPointerInternals::DefaultDeleter<FKeyDetails>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FKeyDetails::~FKeyDetails(lVar1);
    FMemory::operator_delete(lVar1,0x88);
    return;
  }
  return;
}



// FUNCTION 1417aca80 Empty body=485 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FName,EKeys::FCategoryDisplayInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

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
      if (bVar6) goto LAB_1417acb54;
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
LAB_1417acb54:
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
      plVar5 = *(longlong **)((longlong)iStack_2c * 0x30 + *param_1 + 0x10);
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



// FUNCTION 1417acc70 FUN_1417acc70 body=171 status=ok
// SIG undefined FUN_1417acc70(void)

undefined8 FUN_1417acc70(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined1 local_20 [8];
  longlong *local_18;
  
  local_38 = *(undefined8 *)(param_1 + 0x10);
  local_30 = *(undefined8 *)(param_1 + 0x18);
  local_28 = *(longlong *)(param_1 + 0x20);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  uVar5 = (**(code **)(param_1 + 8))(local_20,&local_38);
  FText::FText(param_2,uVar5);
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 1417acd20 FUN_1417acd20 body=356 status=ok
// SIG undefined FUN_1417acd20(void)

undefined8
FUN_1417acd20(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  void *local_28;
  int local_20;
  longlong local_18 [2];
  
  puVar5 = (undefined8 *)FName::ToString(param_1,local_18);
  if ((param_5 & 0x10000000) == 0) {
    pvVar3 = (void *)*puVar5;
    iVar6 = *(int *)(puVar5 + 1) + -1;
    if (*(int *)(puVar5 + 1) == 0) {
      iVar6 = 0;
    }
    if (iVar6 != 0) {
      iVar2 = (int)param_2[1];
      iVar4 = (uint)(iVar2 == 0) + iVar6 + iVar2;
      *(int *)(param_2 + 1) = iVar4;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      pvVar1 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
    }
  }
  else {
    if (*(int *)(puVar5 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*puVar5;
    }
    FString::PrintfImpl(&local_28,L"FKey(TEXT(\"%s\"))",puVar7);
    pvVar3 = local_28;
    iVar6 = 0;
    if (local_20 != 0) {
      iVar6 = local_20 + -1;
    }
    if (iVar6 != 0) {
      iVar2 = (int)param_2[1];
      iVar4 = (uint)(iVar2 == 0) + iVar2 + iVar6;
      *(int *)(param_2 + 1) = iVar4;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      pvVar1 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
    }
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 1417ace90 FindKey body=379 status=ok
// SIG undefined FindKey(void)

longlong TMapBase<unsigned_int,FKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FKey,0>_>
         ::FindKey(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  
  iVar1 = (int)param_1[5];
  local_58 = 0;
  uStack_54 = 1;
  puStack_20 = (uint *)(param_1 + 2);
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar1 != 0) {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = puStack_20;
    }
    uVar2 = *puVar6;
    uStack_40 = 0;
    local_58 = 0;
    while (uVar2 == 0) {
      lVar4 = (longlong)local_58;
      uStack_40 = uStack_40 + 0x20;
      iVar5 = local_58 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar5;
      if (bVar3) goto LAB_1417acf51;
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
LAB_1417acf51:
      local_48._4_4_ = iVar1;
    }
  }
  uStack_18 = 0xffffffff;
  iStack_14 = local_48._4_4_;
  iStack_10 = uStack_40;
  iStack_28 = local_58;
  uStack_24 = uStack_54;
  iStack_50 = local_58;
  uStack_4c = uStack_54;
  local_38 = uStack_40;
  uStack_40 = 0xffffffff;
  iStack_3c = local_48._4_4_;
  bVar3 = local_48._4_4_ < iVar1;
  local_30 = param_1;
  local_48 = puStack_20;
  if (bVar3) {
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iStack_3c * 0x28) == *param_2) {
        return *param_1 + (longlong)iStack_3c * 0x28;
      }
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  return 0;
}



// FUNCTION 1417ad010 Get body=192 status=ok
// SIG undefined Get(void)

longlong TAttribute<FText>::Get(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if ((*(int *)(param_1 + 0x28) != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
    if (cVar4 != '\0') {
      if (*(int *)(param_1 + 0x28) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x20);
      }
      (**(code **)(*plVar5 + 0x38))(plVar5,local_28);
      FText::operator=(param_1,local_28);
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_20 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
        return param_1;
      }
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1417ad0d0 FUN_1417ad0d0 body=318 status=ok
// SIG undefined FUN_1417ad0d0(void)

longlong * FUN_1417ad0d0(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 local_18;
  longlong *local_10;
  
  if (DAT_1469eae88 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0xa0);
    plVar5 = (longlong *)0x0;
    plVar6 = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[4] = 0;
      plVar4[5] = 0;
      *(undefined4 *)(plVar4 + 6) = 0xffffffff;
      *(undefined4 *)((longlong)plVar4 + 0x34) = 0;
      plVar4[8] = 0;
      *(undefined4 *)(plVar4 + 9) = 0;
      plVar4[10] = 0;
      plVar4[0xb] = 0;
      plVar4[0xe] = 0;
      plVar4[0xf] = 0;
      *(undefined4 *)(plVar4 + 0x10) = 0xffffffff;
      *(undefined4 *)((longlong)plVar4 + 0x84) = 0;
      plVar4[0x12] = 0;
      *(undefined4 *)(plVar4 + 0x13) = 0;
      FUN_1417b2b70(plVar4);
      plVar6 = plVar4;
    }
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *(undefined4 *)(plVar4 + 1) = 1;
      *plVar4 = (longlong)&PTR_FUN_144d3cb98;
      *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
      plVar4[2] = (longlong)plVar6;
      plVar5 = plVar4;
    }
    local_10 = plVar5;
    SharedPointerInternals::EnableSharedFromThis(&local_18,plVar6,plVar6);
    local_18 = 0;
    DAT_1469eae88 = plVar6;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&DAT_1469eae90,&local_10);
    plVar5 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_10 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_10)(local_10);
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
  }
  return DAT_1469eae88;
}



// FUNCTION 1417ad210 GetCodesFromKey body=134 status=ok
// SIG undefined GetCodesFromKey(void)

void FInputKeyManager::GetCodesFromKey
               (longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  uVar6 = TMapBase<unsigned_int,FKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FKey,0>_>
          ::FindKey(param_1 + 0x50);
  *param_4 = uVar6;
  uVar6 = TMapBase<unsigned_int,FKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FKey,0>_>
          ::FindKey(param_1,param_2);
  *param_3 = uVar6;
  plVar4 = *(longlong **)(param_2 + 0x10);
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



// FUNCTION 1417ad2a0 FUN_1417ad2a0 body=260 status=ok
// SIG undefined FUN_1417ad2a0(void)

undefined8 FUN_1417ad2a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  bool bVar7;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  FKey::ConditionalLookupKeyDetails();
  bVar7 = *(longlong *)(param_1 + 8) == 0;
  if (bVar7) {
    puVar6 = (undefined1 *)FText::FromName(local_20,param_1);
  }
  else {
    uVar5 = TAttribute<FText>::Get(*(longlong *)(param_1 + 8) + 0x28);
    FText::FText(local_38,uVar5);
    puVar6 = local_38;
  }
  FText::FText(param_2,puVar6);
  if (bVar7) {
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
  if ((!bVar7) && (local_30 != (longlong *)0x0)) {
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



// FUNCTION 1417ad3b0 GetFName body=10 status=ok
// SIG undefined GetFName(void)

undefined8 * FKey::GetFName(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  return param_2;
}



// FUNCTION 1417ad3c0 GetGamepadDisplayName body=3259 status=ok
// SIG undefined GetGamepadDisplayName(void)

undefined8 EKeys::GetGamepadDisplayName(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_20 [32];
  
  if (DAT_1469e97d0 == 1) {
    cVar1 = ::operator==(param_2,&DAT_1469ea4f8);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad A",L"InputKeys",L"XBoxOne_Gamepad_FaceButton_Bottom");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea510);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad B",L"InputKeys",L"XBoxOne_Gamepad_FaceButton_Right");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea528);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad X",L"InputKeys",L"XBoxOne_Gamepad_FaceButton_Left");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea540);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Y",L"InputKeys",L"XBoxOne_Gamepad_FaceButton_Top");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea498);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Back",L"InputKeys",L"XBoxOne_Gamepad_Special_Left");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea4e0);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Start",L"InputKeys",L"XBoxOne_Gamepad_Special_Right");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea558);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Left Shoulder",L"InputKeys",L"Gamepad_LeftShoulder");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea570);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Right Shoulder",L"InputKeys",L"Gamepad_RightShoulder");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea588);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Left Trigger",L"InputKeys",L"Gamepad_LeftTrigger");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea5a0);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Right Trigger",L"InputKeys",L"Gamepad_RightTrigger");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea438);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Left Trigger Axis",L"InputKeys",L"Gamepad_LeftTriggerAxis");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea450);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Right Trigger Axis",L"InputKeys",L"Gamepad_RightTriggerAxis");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea468);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Left Thumbstick Button",L"InputKeys",L"Gamepad_LeftThumbstick");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea480);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Right Thumbstick Button",L"InputKeys",L"Gamepad_RightThumbstick")
      ;
      FKey::~FKey(param_2);
      return param_1;
    }
  }
  else if (DAT_1469e97d0 == 2) {
    cVar1 = ::operator==(param_2,&DAT_1469ea4f8);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad X",L"InputKeys",L"PS4_Gamepad_FaceButton_Bottom");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea510);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Circle",L"InputKeys",L"PS4_Gamepad_FaceButton_Right");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea528);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Square",L"InputKeys",L"PS4_Gamepad_FaceButton_Left");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea540);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Triangle",L"InputKeys",L"PS4_Gamepad_FaceButton_Top");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea498);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Touchpad Button",L"InputKeys",L"PS4_Gamepad_Special_Left");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea4e0);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Options",L"InputKeys",L"PS4_Gamepad_Special_Right");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea558);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad L1",L"InputKeys",L"PS4_Gamepad_LeftShoulder");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea570);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad R1",L"InputKeys",L"PS4_Gamepad_RightShoulder");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea588);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad L2",L"InputKeys",L"PS4_Gamepad_LeftTrigger");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea5a0);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad R2",L"InputKeys",L"PS4_Gamepad_RightTrigger");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea438);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad L2 Axis",L"InputKeys",L"PS4_Gamepad_LeftTriggerAxis");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea450);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad R2 Axis",L"InputKeys",L"PS4_Gamepad_RightTriggerAxis");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea468);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad L3",L"InputKeys",L"PS4_Gamepad_LeftThumbstick");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea480);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad R3",L"InputKeys",L"PS4_Gamepad_RightThumbstick");
      FKey::~FKey(param_2);
      return param_1;
    }
  }
  else {
    cVar1 = ::operator==(param_2,&DAT_1469ea4f8);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Face Button Bottom",L"InputKeys",L"Gamepad_FaceButton_Bottom");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea510);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Face Button Right",L"InputKeys",L"Gamepad_FaceButton_Right");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea528);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Face Button Left",L"InputKeys",L"Gamepad_FaceButton_Left");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea540);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Face Button Top",L"InputKeys",L"Gamepad_FaceButton_Top");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea498);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Special Left",L"InputKeys",L"Gamepad_Special_Left");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea4e0);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Special Right",L"InputKeys",L"Gamepad_Special_Right");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea558);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Left Shoulder",L"InputKeys",L"Gamepad_LeftShoulder");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea570);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Right Shoulder",L"InputKeys",L"Gamepad_RightShoulder");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea588);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Left Trigger",L"InputKeys",L"Gamepad_LeftTrigger");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea5a0);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Right Trigger",L"InputKeys",L"Gamepad_RightTrigger");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea438);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Left Trigger Axis",L"InputKeys",L"Gamepad_LeftTriggerAxis");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea450);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Right Trigger Axis",L"InputKeys",L"Gamepad_RightTriggerAxis");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea468);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Left Thumbstick Button",L"InputKeys",L"Gamepad_LeftThumbstick");
      FKey::~FKey(param_2);
      return param_1;
    }
    cVar1 = ::operator==(param_2,&DAT_1469ea480);
    if (cVar1 != '\0') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (param_1,L"Gamepad Right Thumbstick Button",L"InputKeys",L"Gamepad_RightThumbstick")
      ;
      FKey::~FKey(param_2);
      return param_1;
    }
  }
  uVar2 = FKey::ToString(param_2,local_20);
  FText::FromString(param_1,uVar2);
  FUN_140591050(local_20);
  FKey::~FKey(param_2);
  return param_1;
}



// FUNCTION 1417ae140 FUN_1417ae140 body=281 status=ok
// SIG undefined FUN_1417ae140(void)

undefined8 * FUN_1417ae140(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  if (DAT_1464b9c58 != DAT_1464b9c84) {
    lVar4 = *param_2;
    puVar6 = DAT_1464b9c90;
    if (DAT_1464b9c90 == (undefined *)0x0) {
      puVar6 = &DAT_1464b9c88;
    }
    iVar3 = *(int *)(puVar6 + ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                              (longlong)DAT_1464b9c98 - 1U) * 4);
    while (iVar3 != -1) {
      lVar8 = (longlong)iVar3;
      if (*(longlong *)(DAT_1464b9c50 + lVar8 * 0x30) == lVar4) {
        puVar7 = (undefined8 *)(DAT_1464b9c50 + lVar8 * 0x30);
        if (iVar3 != -1) goto LAB_1417ae1da;
        break;
      }
      iVar3 = *(int *)(DAT_1464b9c50 + lVar8 * 0x30 + 0x28);
    }
  }
  puVar7 = (undefined8 *)0x0;
LAB_1417ae1da:
  puVar9 = puVar7 + 3;
  if (puVar7 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  if (puVar9 == (undefined8 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *param_1 = *puVar9;
    lVar4 = puVar9[1];
    param_1[1] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
  }
  plVar5 = (longlong *)param_2[2];
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
  return param_1;
}



// FUNCTION 1417ae260 FUN_1417ae260 body=1029 status=ok
// SIG undefined FUN_1417ae260(void)

undefined8 * FUN_1417ae260(longlong *param_1,undefined8 *param_2,int param_3,uint param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  undefined8 local_158;
  undefined8 local_150;
  longlong *plStack_148;
  undefined2 *local_140;
  int local_138;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118;
  longlong *local_110;
  int local_108;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8;
  longlong *local_e0;
  int local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  byte local_b0;
  undefined1 local_af;
  undefined1 local_a8 [24];
  undefined1 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [24];
  undefined1 local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  
  puVar9 = (undefined8 *)0x0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)param_3) * 4);
    if (iVar4 != -1) {
      do {
        puVar8 = (undefined8 *)(*param_1 + (longlong)iVar4 * 0x28);
        if (*(int *)(*param_1 + (longlong)iVar4 * 0x28) == param_3) {
          if (iVar4 != -1) goto LAB_1417ae2e4;
          break;
        }
        iVar4 = *(int *)(puVar8 + 4);
      } while (iVar4 != -1);
    }
  }
  puVar8 = puVar9;
LAB_1417ae2e4:
  puVar6 = puVar8 + 1;
  if (puVar8 == (undefined8 *)0x0) {
    puVar6 = puVar9;
  }
  if (puVar6 == (undefined8 *)0x0) {
    if ((int)param_1[0xb] != *(int *)((longlong)param_1 + 0x84)) {
      plVar5 = (longlong *)param_1[0x12];
      if ((longlong *)param_1[0x12] == (longlong *)0x0) {
        plVar5 = param_1 + 0x11;
      }
      iVar4 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[0x13] - 1U & (longlong)(int)param_4) * 4);
      if (iVar4 != -1) {
        do {
          puVar8 = (undefined8 *)(param_1[10] + (longlong)iVar4 * 0x28);
          if (*(uint *)(param_1[10] + (longlong)iVar4 * 0x28) == param_4) {
            if (iVar4 != -1) goto LAB_1417ae363;
            break;
          }
          iVar4 = *(int *)(puVar8 + 4);
        } while (iVar4 != -1);
      }
    }
    puVar8 = puVar9;
LAB_1417ae363:
    puVar6 = puVar8 + 1;
    if (puVar8 == (undefined8 *)0x0) {
      puVar6 = puVar9;
    }
    if ((puVar6 == (undefined8 *)0x0) && (0x20 < param_4)) {
      FString::PrintfImpl(&local_140,L"%s%d",PTR_u_UnknownCharCode__1464b9c40,param_4);
      puVar10 = &DAT_143f3eda8;
      if (local_138 != 0) {
        puVar10 = local_140;
      }
      FName::FName(&local_158,puVar10,1);
      local_150 = 0;
      plStack_148 = (longlong *)0x0;
      if (local_140 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      uVar7 = FString::Chr(local_48,(longlong)(int)param_4 & 0xffff);
      uVar7 = FText::AsCultureInvariant(local_38,uVar7);
      FText::FText(local_100,uVar7);
      local_e8 = 1;
      local_e0 = (longlong *)0x0;
      local_d8 = 0;
      FText::FText(local_130);
      plVar5 = plStack_148;
      local_118 = 0;
      local_110 = (longlong *)0x0;
      local_108 = 0;
      if (plStack_148 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_148 + 1) = (int)plStack_148[1] + 1;
        UNLOCK();
      }
      local_d0 = local_158;
      local_c8 = local_150;
      local_c0 = plStack_148;
      if (plStack_148 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_148 + 1) = (int)plStack_148[1] + 1;
        UNLOCK();
      }
      local_b8 = 0;
      FText::FText(local_a8,local_100);
      local_90 = local_e8;
      local_88 = 0;
      local_80 = 0;
      if ((local_d8 != 0) && (local_e0 != (longlong *)0x0)) {
        (**(code **)(*local_e0 + 0x30))(local_e0,&local_88);
      }
      FText::FText(local_78,local_130);
      local_60 = local_118;
      local_58 = 0;
      local_50 = 0;
      if ((local_108 != 0) && (local_110 != (longlong *)0x0)) {
        (**(code **)(*local_110 + 0x30))(local_110,&local_58);
      }
      local_b0 = local_b0 & 0xe0;
      local_af = 0;
      if (((int)local_b8 == 0) && (local_b8._4_4_ == 0)) {
        local_b8 = DAT_1469eae50;
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
      FUN_1417ac3d0(&local_d0);
      FKeyDetails::~FKeyDetails(&local_d0);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_110);
      if (local_128 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_128 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_e0);
      if (local_f8 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_f8 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_30 + 1;
        lVar3 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
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
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      *param_2 = local_158;
      param_2[1] = local_150;
      param_2[2] = plStack_148;
      return param_2;
    }
  }
  puVar9 = &DAT_1469eae28;
  if (puVar6 != (undefined8 *)0x0) {
    puVar9 = puVar6;
  }
  *param_2 = *puVar9;
  param_2[1] = puVar9[1];
  lVar3 = puVar9[2];
  param_2[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1417ae670 GetKeyMap body=8330 status=ok
// SIG undefined GetKeyMap(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FWindowsPlatformInput::GetKeyMap(undefined4 *param_1,longlong *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_1548 [32];
  undefined1 local_1528;
  UINT local_1518;
  UINT local_1514;
  undefined1 local_1510 [8];
  UINT *local_1508;
  UINT *pUStack_1500;
  uint local_14f8;
  undefined8 uStack_14f4;
  undefined4 uStack_14ec;
  longlong *local_14e8;
  undefined8 uStack_14e0;
  undefined1 *local_14d8;
  uint uStack_14d0;
  int iStack_14cc;
  undefined4 local_14c8;
  undefined4 uStack_14c4;
  longlong *local_14c0;
  UINT *pUStack_14b8;
  undefined1 *puStack_14b0;
  uint uStack_14a8;
  int iStack_14a4;
  undefined4 uStack_14a0;
  undefined4 uStack_149c;
  longlong local_1498 [2];
  undefined1 local_1488 [24];
  int local_1470;
  undefined4 local_1468;
  undefined4 local_1464;
  longlong local_1458;
  undefined4 local_1450;
  undefined4 local_1448 [256];
  undefined8 local_1048;
  undefined1 auStack_103c [4068];
  longlong local_58 [4];
  
  local_58[2] = DAT_1468387a8 ^ (ulonglong)auStack_1548;
  uVar9 = 0;
  if (((param_1 != (undefined4 *)0x0) && (param_2 != (longlong *)0x0)) && (param_3 != 0)) {
    *param_1 = 1;
    if ((wchar_t *)*param_2 != L"LeftMouseButton") {
      *(undefined4 *)(param_2 + 1) = 0;
      uVar7 = uVar9;
      if (*(int *)((longlong)param_2 + 0xc) != 0x10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x10);
        uVar7 = (ulonglong)*(uint *)(param_2 + 1);
      }
      iVar3 = (int)uVar7 + 0x10;
      *(int *)(param_2 + 1) = iVar3;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      builtin_wcsncpy((wchar_t *)*param_2,L"LeftMouseButton",0x10);
    }
    uVar8 = 1;
    if (1 < param_3) {
      param_1[1] = 2;
      if ((wchar_t *)param_2[2] != L"RightMouseButton") {
        *(undefined4 *)(param_2 + 3) = 0;
        uVar7 = uVar9;
        if (*(int *)((longlong)param_2 + 0x1c) != 0x11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 2,0x11);
          uVar7 = (ulonglong)*(uint *)(param_2 + 3);
        }
        iVar3 = (int)uVar7 + 0x11;
        *(int *)(param_2 + 3) = iVar3;
        if (*(int *)((longlong)param_2 + 0x1c) < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2 + 2);
        }
        builtin_wcsncpy((wchar_t *)param_2[2],L"RightMouseButton",0x11);
      }
      uVar8 = 2;
      if (2 < param_3) {
        param_1[2] = 4;
        if ((wchar_t *)param_2[4] != L"MiddleMouseButton") {
          *(undefined4 *)(param_2 + 5) = 0;
          uVar7 = uVar9;
          if (*(int *)((longlong)param_2 + 0x2c) != 0x12) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 4,0x12);
            uVar7 = (ulonglong)*(uint *)(param_2 + 5);
          }
          iVar3 = (int)uVar7 + 0x12;
          *(int *)(param_2 + 5) = iVar3;
          if (*(int *)((longlong)param_2 + 0x2c) < iVar3) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2 + 4);
          }
          builtin_wcsncpy((wchar_t *)param_2[4],L"MiddleMouseButton",0x12);
        }
        uVar8 = 3;
        if (3 < param_3) {
          param_1[3] = 5;
          if ((wchar_t *)param_2[6] != L"ThumbMouseButton") {
            *(undefined4 *)(param_2 + 7) = 0;
            uVar7 = uVar9;
            if (*(int *)((longlong)param_2 + 0x3c) != 0x11) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0x11);
              uVar7 = (ulonglong)*(uint *)(param_2 + 7);
            }
            iVar3 = (int)uVar7 + 0x11;
            *(int *)(param_2 + 7) = iVar3;
            if (*(int *)((longlong)param_2 + 0x3c) < iVar3) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2 + 6);
            }
            builtin_wcsncpy((wchar_t *)param_2[6],L"ThumbMouseButton",0x11);
          }
          uVar8 = 4;
          if (4 < param_3) {
            param_1[4] = 6;
            if ((wchar_t *)param_2[8] != L"ThumbMouseButton2") {
              *(undefined4 *)(param_2 + 9) = 0;
              uVar7 = uVar9;
              if (*(int *)((longlong)param_2 + 0x4c) != 0x12) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 8,0x12);
                uVar7 = (ulonglong)*(uint *)(param_2 + 9);
              }
              iVar3 = (int)uVar7 + 0x12;
              *(int *)(param_2 + 9) = iVar3;
              if (*(int *)((longlong)param_2 + 0x4c) < iVar3) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2 + 8);
              }
              builtin_wcsncpy((wchar_t *)param_2[8],L"ThumbMouseButton2",0x12);
            }
            uVar8 = 5;
            if (5 < param_3) {
              param_1[5] = 8;
              if ((wchar_t *)param_2[10] != L"BackSpace") {
                *(undefined4 *)(param_2 + 0xb) = 0;
                uVar7 = uVar9;
                if (*(int *)((longlong)param_2 + 0x5c) != 10) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 10,10);
                  uVar7 = (ulonglong)*(uint *)(param_2 + 0xb);
                }
                iVar3 = (int)uVar7 + 10;
                *(int *)(param_2 + 0xb) = iVar3;
                if (*(int *)((longlong)param_2 + 0x5c) < iVar3) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2 + 10);
                }
                builtin_wcsncpy((wchar_t *)param_2[10],L"BackSpace",10);
              }
              uVar8 = 6;
              if (6 < param_3) {
                param_1[6] = 9;
                if ((undefined8 *)param_2[0xc] != &DAT_144d3bd08) {
                  *(undefined4 *)(param_2 + 0xd) = 0;
                  uVar7 = uVar9;
                  if (*(int *)((longlong)param_2 + 0x6c) != 4) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 0xc,4);
                    uVar7 = (ulonglong)*(uint *)(param_2 + 0xd);
                  }
                  iVar3 = (int)uVar7 + 4;
                  *(int *)(param_2 + 0xd) = iVar3;
                  if (*(int *)((longlong)param_2 + 0x6c) < iVar3) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2 + 0xc);
                  }
                  *(undefined8 *)param_2[0xc] = 0x6200610054;
                }
                uVar8 = 7;
                if (7 < param_3) {
                  param_1[7] = 0xd;
                  if ((wchar_t *)param_2[0xe] != L"Enter") {
                    *(undefined4 *)(param_2 + 0xf) = 0;
                    uVar7 = uVar9;
                    if (*(int *)((longlong)param_2 + 0x7c) != 6) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 0xe,6);
                      uVar7 = (ulonglong)*(uint *)(param_2 + 0xf);
                    }
                    iVar3 = (int)uVar7 + 6;
                    *(int *)(param_2 + 0xf) = iVar3;
                    if (*(int *)((longlong)param_2 + 0x7c) < iVar3) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2 + 0xe);
                    }
                    puVar1 = (undefined8 *)param_2[0xe];
                    *puVar1 = 0x650074006e0045;
                    *(undefined4 *)(puVar1 + 1) = 0x72;
                  }
                  uVar8 = 8;
                  if (8 < param_3) {
                    plVar5 = param_2 + 0x10;
                    param_1[8] = 0x13;
                    if ((wchar_t *)*plVar5 != L"Pause") {
                      *(undefined4 *)(param_2 + 0x11) = 0;
                      uVar7 = uVar9;
                      if (*(int *)((longlong)param_2 + 0x8c) != 6) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar5,6);
                        uVar7 = (ulonglong)*(uint *)(param_2 + 0x11);
                      }
                      iVar3 = (int)uVar7 + 6;
                      *(int *)(param_2 + 0x11) = iVar3;
                      if (*(int *)((longlong)param_2 + 0x8c) < iVar3) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar5);
                      }
                      puVar1 = (undefined8 *)*plVar5;
                      *puVar1 = 0x73007500610050;
                      *(undefined4 *)(puVar1 + 1) = 0x65;
                    }
                    uVar8 = 9;
                    if (9 < param_3) {
                      plVar5 = param_2 + 0x12;
                      param_1[9] = 0x14;
                      if ((wchar_t *)*plVar5 != L"CapsLock") {
                        *(undefined4 *)(param_2 + 0x13) = 0;
                        uVar7 = uVar9;
                        if (*(int *)((longlong)param_2 + 0x9c) != 9) {
                          TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar5,9);
                          uVar7 = (ulonglong)*(uint *)(param_2 + 0x13);
                        }
                        iVar3 = (int)uVar7 + 9;
                        *(int *)(param_2 + 0x13) = iVar3;
                        if (*(int *)((longlong)param_2 + 0x9c) < iVar3) {
                          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar5);
                        }
                        builtin_wcsncpy((wchar_t *)*plVar5,L"CapsLock",9);
                      }
                      uVar8 = 10;
                      if (10 < param_3) {
                        plVar5 = param_2 + 0x14;
                        param_1[10] = 0x1b;
                        if ((wchar_t *)*plVar5 != L"Escape") {
                          *(undefined4 *)(param_2 + 0x15) = 0;
                          uVar7 = uVar9;
                          if (*(int *)((longlong)param_2 + 0xac) != 7) {
                            TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar5,7);
                            uVar7 = (ulonglong)*(uint *)(param_2 + 0x15);
                          }
                          iVar3 = (int)uVar7 + 7;
                          *(int *)(param_2 + 0x15) = iVar3;
                          if (*(int *)((longlong)param_2 + 0xac) < iVar3) {
                            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar5);
                          }
                          puVar1 = (undefined8 *)*plVar5;
                          *puVar1 = 0x61006300730045;
                          *(undefined4 *)(puVar1 + 1) = 0x650070;
                          *(undefined2 *)((longlong)puVar1 + 0xc) = 0;
                        }
                        uVar8 = 0xb;
                        if (0xb < param_3) {
                          plVar5 = param_2 + 0x16;
                          param_1[0xb] = 0x20;
                          if ((wchar_t *)*plVar5 != L"SpaceBar") {
                            *(undefined4 *)(param_2 + 0x17) = 0;
                            uVar7 = uVar9;
                            if (*(int *)((longlong)param_2 + 0xbc) != 9) {
                              TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar5,9);
                              uVar7 = (ulonglong)*(uint *)(param_2 + 0x17);
                            }
                            iVar3 = (int)uVar7 + 9;
                            *(int *)(param_2 + 0x17) = iVar3;
                            if (*(int *)((longlong)param_2 + 0xbc) < iVar3) {
                              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar5);
                            }
                            builtin_wcsncpy((wchar_t *)*plVar5,L"SpaceBar",9);
                          }
                          uVar8 = 0xc;
                          if (0xc < param_3) {
                            plVar5 = param_2 + 0x18;
                            param_1[0xc] = 0x21;
                            if ((wchar_t *)*plVar5 != L"PageUp") {
                              *(undefined4 *)(param_2 + 0x19) = 0;
                              uVar7 = uVar9;
                              if (*(int *)((longlong)param_2 + 0xcc) != 7) {
                                TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar5,7);
                                uVar7 = (ulonglong)*(uint *)(param_2 + 0x19);
                              }
                              iVar3 = (int)uVar7 + 7;
                              *(int *)(param_2 + 0x19) = iVar3;
                              if (*(int *)((longlong)param_2 + 0xcc) < iVar3) {
                                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar5);
                              }
                              puVar1 = (undefined8 *)*plVar5;
                              *puVar1 = 0x65006700610050;
                              *(undefined4 *)(puVar1 + 1) = 0x700055;
                              *(undefined2 *)((longlong)puVar1 + 0xc) = 0;
                            }
                            uVar8 = 0xd;
                            if (0xd < param_3) {
                              plVar5 = param_2 + 0x1a;
                              param_1[0xd] = 0x22;
                              if ((wchar_t *)*plVar5 != L"PageDown") {
                                *(undefined4 *)(param_2 + 0x1b) = 0;
                                uVar7 = uVar9;
                                if (*(int *)((longlong)param_2 + 0xdc) != 9) {
                                  TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar5,9);
                                  uVar7 = (ulonglong)*(uint *)(param_2 + 0x1b);
                                }
                                iVar3 = (int)uVar7 + 9;
                                *(int *)(param_2 + 0x1b) = iVar3;
                                if (*(int *)((longlong)param_2 + 0xdc) < iVar3) {
                                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar5);
                                }
                                builtin_wcsncpy((wchar_t *)*plVar5,L"PageDown",9);
                              }
                              uVar8 = 0xe;
                              if (0xe < param_3) {
                                plVar5 = param_2 + 0x1c;
                                param_1[0xe] = 0x23;
                                if ((undefined8 *)*plVar5 != &DAT_144d3bdc0) {
                                  *(undefined4 *)(param_2 + 0x1d) = 0;
                                  uVar7 = uVar9;
                                  if (*(int *)((longlong)param_2 + 0xec) != 4) {
                                    TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar5,4);
                                    uVar7 = (ulonglong)*(uint *)(param_2 + 0x1d);
                                  }
                                  iVar3 = (int)uVar7 + 4;
                                  *(int *)(param_2 + 0x1d) = iVar3;
                                  if (*(int *)((longlong)param_2 + 0xec) < iVar3) {
                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar5);
                                  }
                                  *(undefined8 *)*plVar5 = 0x64006e0045;
                                }
                                uVar8 = 0xf;
                                if (0xf < param_3) {
                                  plVar5 = param_2 + 0x1e;
                                  param_1[0xf] = 0x24;
                                  if ((undefined *)*plVar5 != &DAT_144d3bdc8) {
                                    *(undefined4 *)(param_2 + 0x1f) = 0;
                                    uVar7 = uVar9;
                                    if (*(int *)((longlong)param_2 + 0xfc) != 5) {
                                      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar5,5);
                                      uVar7 = (ulonglong)*(uint *)(param_2 + 0x1f);
                                    }
                                    iVar3 = (int)uVar7 + 5;
                                    *(int *)(param_2 + 0x1f) = iVar3;
                                    if (*(int *)((longlong)param_2 + 0xfc) < iVar3) {
                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar5);
                                    }
                                    puVar1 = (undefined8 *)*plVar5;
                                    *puVar1 = 0x65006d006f0048;
                                    *(undefined2 *)(puVar1 + 1) = 0;
                                  }
                                  uVar8 = 0x10;
                                  if (0x10 < param_3) {
                                    plVar5 = param_2 + 0x20;
                                    param_1[0x10] = 0x25;
                                    if ((undefined *)*plVar5 != &DAT_144d3bdd8) {
                                      *(undefined4 *)(param_2 + 0x21) = 0;
                                      uVar7 = uVar9;
                                      if (*(int *)((longlong)param_2 + 0x10c) != 5) {
                                        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar5,5);
                                        uVar7 = (ulonglong)*(uint *)(param_2 + 0x21);
                                      }
                                      iVar3 = (int)uVar7 + 5;
                                      *(int *)(param_2 + 0x21) = iVar3;
                                      if (*(int *)((longlong)param_2 + 0x10c) < iVar3) {
                                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar5);
                                      }
                                      puVar1 = (undefined8 *)*plVar5;
                                      *puVar1 = 0x7400660065004c;
                                      *(undefined2 *)(puVar1 + 1) = 0;
                                    }
                                    uVar8 = 0x11;
                                    if (0x11 < param_3) {
                                      plVar5 = param_2 + 0x22;
                                      param_1[0x11] = 0x26;
                                      if ((undefined4 *)*plVar5 != &DAT_144d38354) {
                                        *(undefined4 *)(param_2 + 0x23) = 0;
                                        uVar7 = uVar9;
                                        if (*(int *)((longlong)param_2 + 0x11c) != 3) {
                                          TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar5,3);
                                          uVar7 = (ulonglong)*(uint *)(param_2 + 0x23);
                                        }
                                        iVar3 = (int)uVar7 + 3;
                                        *(int *)(param_2 + 0x23) = iVar3;
                                        if (*(int *)((longlong)param_2 + 0x11c) < iVar3) {
                                          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar5);
                                        }
                                        puVar2 = (undefined4 *)*plVar5;
                                        *puVar2 = 0x700055;
                                        *(undefined2 *)(puVar2 + 1) = 0;
                                      }
                                      uVar8 = 0x12;
                                      if (0x12 < param_3) {
                                        plVar5 = param_2 + 0x24;
                                        param_1[0x12] = 0x27;
                                        if ((wchar_t *)*plVar5 != L"Right") {
                                          *(undefined4 *)(param_2 + 0x25) = 0;
                                          uVar7 = uVar9;
                                          if (*(int *)((longlong)param_2 + 300) != 6) {
                                            TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar5,6);
                                            uVar7 = (ulonglong)*(uint *)(param_2 + 0x25);
                                          }
                                          iVar3 = (int)uVar7 + 6;
                                          *(int *)(param_2 + 0x25) = iVar3;
                                          if (*(int *)((longlong)param_2 + 300) < iVar3) {
                                            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar5);
                                          }
                                          puVar1 = (undefined8 *)*plVar5;
                                          *puVar1 = 0x68006700690052;
                                          *(undefined4 *)(puVar1 + 1) = 0x74;
                                        }
                                        uVar8 = 0x13;
                                        if (0x13 < param_3) {
                                          plVar5 = param_2 + 0x26;
                                          param_1[0x13] = 0x28;
                                          if ((undefined *)*plVar5 != &DAT_144d3bdf8) {
                                            *(undefined4 *)(param_2 + 0x27) = 0;
                                            uVar7 = uVar9;
                                            if (*(int *)((longlong)param_2 + 0x13c) != 5) {
                                              TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar5,5);
                                              uVar7 = (ulonglong)*(uint *)(param_2 + 0x27);
                                            }
                                            iVar3 = (int)uVar7 + 5;
                                            *(int *)(param_2 + 0x27) = iVar3;
                                            if (*(int *)((longlong)param_2 + 0x13c) < iVar3) {
                                              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar5);
                                            }
                                            puVar1 = (undefined8 *)*plVar5;
                                            *puVar1 = 0x6e0077006f0044;
                                            *(undefined2 *)(puVar1 + 1) = 0;
                                          }
                                          uVar8 = 0x14;
                                          if (0x14 < param_3) {
                                            plVar5 = param_2 + 0x28;
                                            param_1[0x14] = 0x2d;
                                            if ((wchar_t *)*plVar5 != L"Insert") {
                                              *(undefined4 *)(param_2 + 0x29) = 0;
                                              uVar7 = uVar9;
                                              if (*(int *)((longlong)param_2 + 0x14c) != 7) {
                                                TArray<wchar_t,FDefaultAllocator>::ResizeTo
                                                          (plVar5,7);
                                                uVar7 = (ulonglong)*(uint *)(param_2 + 0x29);
                                              }
                                              iVar3 = (int)uVar7 + 7;
                                              *(int *)(param_2 + 0x29) = iVar3;
                                              if (*(int *)((longlong)param_2 + 0x14c) < iVar3) {
                                                TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                          (plVar5);
                                              }
                                              puVar1 = (undefined8 *)*plVar5;
                                              *puVar1 = 0x650073006e0049;
                                              *(undefined4 *)(puVar1 + 1) = 0x740072;
                                              *(undefined2 *)((longlong)puVar1 + 0xc) = 0;
                                            }
                                            uVar8 = 0x15;
                                            if (0x15 < param_3) {
                                              plVar5 = param_2 + 0x2a;
                                              param_1[0x15] = 0x2e;
                                              if ((wchar_t *)*plVar5 != L"Delete") {
                                                *(undefined4 *)(param_2 + 0x2b) = 0;
                                                uVar7 = uVar9;
                                                if (*(int *)((longlong)param_2 + 0x15c) != 7) {
                                                  TArray<wchar_t,FDefaultAllocator>::ResizeTo
                                                            (plVar5,7);
                                                  uVar7 = (ulonglong)*(uint *)(param_2 + 0x2b);
                                                }
                                                iVar3 = (int)uVar7 + 7;
                                                *(int *)(param_2 + 0x2b) = iVar3;
                                                if (*(int *)((longlong)param_2 + 0x15c) < iVar3) {
                                                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                            (plVar5);
                                                }
                                                puVar1 = (undefined8 *)*plVar5;
                                                *puVar1 = 0x65006c00650044;
                                                *(undefined4 *)(puVar1 + 1) = 0x650074;
                                                *(undefined2 *)((longlong)puVar1 + 0xc) = 0;
                                              }
                                              uVar8 = 0x16;
                                              if (0x16 < param_3) {
                                                plVar5 = param_2 + 0x2c;
                                                param_1[0x16] = 0x60;
                                                if ((wchar_t *)*plVar5 != L"NumPadZero") {
                                                  *(undefined4 *)(param_2 + 0x2d) = 0;
                                                  uVar7 = uVar9;
                                                  if (*(int *)((longlong)param_2 + 0x16c) != 0xb) {
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeTo
                                                              (plVar5,0xb);
                                                    uVar7 = (ulonglong)*(uint *)(param_2 + 0x2d);
                                                  }
                                                  iVar3 = (int)uVar7 + 0xb;
                                                  *(int *)(param_2 + 0x2d) = iVar3;
                                                  if (*(int *)((longlong)param_2 + 0x16c) < iVar3) {
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (plVar5);
                                                  }
                                                  builtin_wcsncpy((wchar_t *)*plVar5,L"NumPadZero",
                                                                  0xb);
                                                }
                                                uVar8 = 0x17;
                                                if (0x17 < param_3) {
                                                  plVar5 = param_2 + 0x2e;
                                                  param_1[0x17] = 0x61;
                                                  if ((wchar_t *)*plVar5 != L"NumPadOne") {
                                                    *(undefined4 *)(param_2 + 0x2f) = 0;
                                                    uVar7 = uVar9;
                                                    if (*(int *)((longlong)param_2 + 0x17c) != 10) {
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeTo
                                                                (plVar5,10);
                                                      uVar7 = (ulonglong)*(uint *)(param_2 + 0x2f);
                                                    }
                                                    iVar3 = (int)uVar7 + 10;
                                                    *(int *)(param_2 + 0x2f) = iVar3;
                                                    if (*(int *)((longlong)param_2 + 0x17c) < iVar3)
                                                    {
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (plVar5);
                                                    }
                                                    builtin_wcsncpy((wchar_t *)*plVar5,L"NumPadOne",
                                                                    10);
                                                  }
                                                  uVar8 = 0x18;
                                                  if (0x18 < param_3) {
                                                    plVar5 = param_2 + 0x30;
                                                    param_1[0x18] = 0x62;
                                                    if ((wchar_t *)*plVar5 != L"NumPadTwo") {
                                                      *(undefined4 *)(param_2 + 0x31) = 0;
                                                      uVar7 = uVar9;
                                                      if (*(int *)((longlong)param_2 + 0x18c) != 10)
                                                      {
                                                        TArray<wchar_t,FDefaultAllocator>::ResizeTo
                                                                  (plVar5,10);
                                                        uVar7 = (ulonglong)*(uint *)(param_2 + 0x31)
                                                        ;
                                                      }
                                                      iVar3 = (int)uVar7 + 10;
                                                      *(int *)(param_2 + 0x31) = iVar3;
                                                      if (*(int *)((longlong)param_2 + 0x18c) <
                                                          iVar3) {
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(plVar5);
                                                      }
                                                      builtin_wcsncpy((wchar_t *)*plVar5,
                                                                      L"NumPadTwo",10);
                                                    }
                                                    uVar8 = 0x19;
                                                    if (0x19 < param_3) {
                                                      plVar5 = param_2 + 0x32;
                                                      param_1[0x19] = 99;
                                                      if ((wchar_t *)*plVar5 != L"NumPadThree") {
                                                        *(undefined4 *)(param_2 + 0x33) = 0;
                                                        uVar7 = uVar9;
                                                        if (*(int *)((longlong)param_2 + 0x19c) !=
                                                            0xc) {
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeTo(plVar5,0xc);
                                                          uVar7 = (ulonglong)
                                                                  *(uint *)(param_2 + 0x33);
                                                        }
                                                        iVar3 = (int)uVar7 + 0xc;
                                                        *(int *)(param_2 + 0x33) = iVar3;
                                                        if (*(int *)((longlong)param_2 + 0x19c) <
                                                            iVar3) {
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(plVar5);
                                                        }
                                                        builtin_wcsncpy((wchar_t *)*plVar5,
                                                                        L"NumPadThree",0xc);
                                                      }
                                                      uVar8 = 0x1a;
                                                      if (0x1a < param_3) {
                                                        plVar5 = param_2 + 0x34;
                                                        param_1[0x1a] = 100;
                                                        if ((undefined *)*plVar5 != &DAT_144d3bea8)
                                                        {
                                                          *(undefined4 *)(param_2 + 0x35) = 0;
                                                          uVar7 = uVar9;
                                                          if (*(int *)((longlong)param_2 + 0x1ac) !=
                                                              0xb) {
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeTo(plVar5,0xb);
                                                            uVar7 = (ulonglong)
                                                                    *(uint *)(param_2 + 0x35);
                                                          }
                                                          iVar3 = (int)uVar7 + 0xb;
                                                          *(int *)(param_2 + 0x35) = iVar3;
                                                          if (*(int *)((longlong)param_2 + 0x1ac) <
                                                              iVar3) {
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(plVar5);
                                                          }
                                                          puVar2 = (undefined4 *)*plVar5;
                                                          *puVar2 = 0x75004e;
                                                          puVar2[1] = 0x50006d;
                                                          puVar2[2] = 0x640061;
                                                          puVar2[3] = 0x6f0046;
                                                          puVar2[4] = 0x720075;
                                                          *(undefined2 *)(puVar2 + 5) = 0;
                                                        }
                                                        uVar8 = 0x1b;
                                                        if (0x1b < param_3) {
                                                          plVar5 = param_2 + 0x36;
                                                          param_1[0x1b] = 0x65;
                                                          if ((wchar_t *)*plVar5 != L"NumPadFive") {
                                                            *(undefined4 *)(param_2 + 0x37) = 0;
                                                            uVar7 = uVar9;
                                                            if (*(int *)((longlong)param_2 + 0x1bc)
                                                                != 0xb) {
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeTo(plVar5,0xb);
                                                              uVar7 = (ulonglong)
                                                                      *(uint *)(param_2 + 0x37);
                                                            }
                                                            iVar3 = (int)uVar7 + 0xb;
                                                            *(int *)(param_2 + 0x37) = iVar3;
                                                            if (*(int *)((longlong)param_2 + 0x1bc)
                                                                < iVar3) {
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(plVar5);
                                                            }
                                                            builtin_wcsncpy((wchar_t *)*plVar5,
                                                                            L"NumPadFive",0xb);
                                                          }
                                                          uVar8 = 0x1c;
                                                          if (0x1c < param_3) {
                                                            plVar5 = param_2 + 0x38;
                                                            param_1[0x1c] = 0x66;
                                                            if ((wchar_t *)*plVar5 != L"NumPadSix")
                                                            {
                                                              *(undefined4 *)(param_2 + 0x39) = 0;
                                                              uVar7 = uVar9;
                                                              if (*(int *)((longlong)param_2 + 0x1cc
                                                                          ) != 10) {
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeTo(plVar5,10);
                                                                uVar7 = (ulonglong)
                                                                        *(uint *)(param_2 + 0x39);
                                                              }
                                                              iVar3 = (int)uVar7 + 10;
                                                              *(int *)(param_2 + 0x39) = iVar3;
                                                              if (*(int *)((longlong)param_2 + 0x1cc
                                                                          ) < iVar3) {
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(plVar5);
                                                              }
                                                              builtin_wcsncpy((wchar_t *)*plVar5,
                                                                              L"NumPadSix",10);
                                                            }
                                                            uVar8 = 0x1d;
                                                            if (0x1d < param_3) {
                                                              plVar5 = param_2 + 0x3a;
                                                              param_1[0x1d] = 0x67;
                                                              if ((wchar_t *)*plVar5 !=
                                                                  L"NumPadSeven") {
                                                                *(undefined4 *)(param_2 + 0x3b) = 0;
                                                                uVar7 = uVar9;
                                                                if (*(int *)((longlong)param_2 +
                                                                            0x1dc) != 0xc) {
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeTo(plVar5,0xc);
                                                                  uVar7 = (ulonglong)
                                                                          *(uint *)(param_2 + 0x3b);
                                                                }
                                                                iVar3 = (int)uVar7 + 0xc;
                                                                *(int *)(param_2 + 0x3b) = iVar3;
                                                                if (*(int *)((longlong)param_2 +
                                                                            0x1dc) < iVar3) {
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(plVar5);
                                                                }
                                                                builtin_wcsncpy((wchar_t *)*plVar5,
                                                                                L"NumPadSeven",0xc);
                                                              }
                                                              uVar8 = 0x1e;
                                                              if (0x1e < param_3) {
                                                                plVar5 = param_2 + 0x3c;
                                                                param_1[0x1e] = 0x68;
                                                                if ((wchar_t *)*plVar5 !=
                                                                    L"NumPadEight") {
                                                                  *(undefined4 *)(param_2 + 0x3d) =
                                                                       0;
                                                                  uVar7 = uVar9;
                                                                  if (*(int *)((longlong)param_2 +
                                                                              0x1ec) != 0xc) {
                                                                                                                                        
                                                  TArray<wchar_t,FDefaultAllocator>::ResizeTo
                                                            (plVar5,0xc);
                                                  uVar7 = (ulonglong)*(uint *)(param_2 + 0x3d);
                                                  }
                                                  iVar3 = (int)uVar7 + 0xc;
                                                  *(int *)(param_2 + 0x3d) = iVar3;
                                                  if (*(int *)((longlong)param_2 + 0x1ec) < iVar3) {
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (plVar5);
                                                  }
                                                  builtin_wcsncpy((wchar_t *)*plVar5,L"NumPadEight",
                                                                  0xc);
                                                  }
                                                  uVar8 = 0x1f;
                                                  if (0x1f < param_3) {
                                                    plVar5 = param_2 + 0x3e;
                                                    param_1[0x1f] = 0x69;
                                                    if ((wchar_t *)*plVar5 != L"NumPadNine") {
                                                      *(undefined4 *)(param_2 + 0x3f) = 0;
                                                      uVar7 = uVar9;
                                                      if (*(int *)((longlong)param_2 + 0x1fc) != 0xb
                                                         ) {
                                                        TArray<wchar_t,FDefaultAllocator>::ResizeTo
                                                                  (plVar5,0xb);
                                                        uVar7 = (ulonglong)*(uint *)(param_2 + 0x3f)
                                                        ;
                                                      }
                                                      iVar3 = (int)uVar7 + 0xb;
                                                      *(int *)(param_2 + 0x3f) = iVar3;
                                                      if (*(int *)((longlong)param_2 + 0x1fc) <
                                                          iVar3) {
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(plVar5);
                                                      }
                                                      builtin_wcsncpy((wchar_t *)*plVar5,
                                                                      L"NumPadNine",0xb);
                                                    }
                                                    uVar8 = 0x20;
                                                    if (0x20 < param_3) {
                                                      plVar5 = param_2 + 0x40;
                                                      param_1[0x20] = 0x6a;
                                                      if ((undefined *)*plVar5 != &DAT_144d3bf58) {
                                                        *(undefined4 *)(param_2 + 0x41) = 0;
                                                        uVar7 = uVar9;
                                                        if (*(int *)((longlong)param_2 + 0x20c) != 9
                                                           ) {
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeTo(plVar5,9);
                                                          uVar7 = (ulonglong)
                                                                  *(uint *)(param_2 + 0x41);
                                                        }
                                                        iVar3 = (int)uVar7 + 9;
                                                        *(int *)(param_2 + 0x41) = iVar3;
                                                        if (*(int *)((longlong)param_2 + 0x20c) <
                                                            iVar3) {
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(plVar5);
                                                        }
                                                        puVar2 = (undefined4 *)*plVar5;
                                                        *puVar2 = 0x75004d;
                                                        puVar2[1] = 0x74006c;
                                                        puVar2[2] = 0x700069;
                                                        puVar2[3] = 0x79006c;
                                                        *(undefined2 *)(puVar2 + 4) = 0;
                                                      }
                                                      uVar8 = 0x21;
                                                      if (0x21 < param_3) {
                                                        plVar5 = param_2 + 0x42;
                                                        param_1[0x21] = 0x6b;
                                                        if ((undefined8 *)*plVar5 != &DAT_144d3bf70)
                                                        {
                                                          *(undefined4 *)(param_2 + 0x43) = 0;
                                                          uVar7 = uVar9;
                                                          if (*(int *)((longlong)param_2 + 0x21c) !=
                                                              4) {
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeTo(plVar5,4);
                                                            uVar7 = (ulonglong)
                                                                    *(uint *)(param_2 + 0x43);
                                                          }
                                                          iVar3 = (int)uVar7 + 4;
                                                          *(int *)(param_2 + 0x43) = iVar3;
                                                          if (*(int *)((longlong)param_2 + 0x21c) <
                                                              iVar3) {
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(plVar5);
                                                          }
                                                          *(undefined8 *)*plVar5 = 0x6400640041;
                                                        }
                                                        uVar8 = 0x22;
                                                        if (0x22 < param_3) {
                                                          plVar5 = param_2 + 0x44;
                                                          param_1[0x22] = 0x6d;
                                                          if ((wchar_t *)*plVar5 != L"Subtract") {
                                                            *(undefined4 *)(param_2 + 0x45) = 0;
                                                            uVar7 = uVar9;
                                                            if (*(int *)((longlong)param_2 + 0x22c)
                                                                != 9) {
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeTo(plVar5,9);
                                                              uVar7 = (ulonglong)
                                                                      *(uint *)(param_2 + 0x45);
                                                            }
                                                            iVar3 = (int)uVar7 + 9;
                                                            *(int *)(param_2 + 0x45) = iVar3;
                                                            if (*(int *)((longlong)param_2 + 0x22c)
                                                                < iVar3) {
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(plVar5);
                                                            }
                                                            builtin_wcsncpy((wchar_t *)*plVar5,
                                                                            L"Subtract",9);
                                                          }
                                                          uVar8 = 0x23;
                                                          if (0x23 < param_3) {
                                                            plVar5 = param_2 + 0x46;
                                                            param_1[0x23] = 0x6e;
                                                            if ((wchar_t *)*plVar5 != L"Decimal") {
                                                              *(undefined4 *)(param_2 + 0x47) = 0;
                                                              uVar7 = uVar9;
                                                              if (*(int *)((longlong)param_2 + 0x23c
                                                                          ) != 8) {
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeTo(plVar5,8);
                                                                uVar7 = (ulonglong)
                                                                        *(uint *)(param_2 + 0x47);
                                                              }
                                                              iVar3 = (int)uVar7 + 8;
                                                              *(int *)(param_2 + 0x47) = iVar3;
                                                              if (*(int *)((longlong)param_2 + 0x23c
                                                                          ) < iVar3) {
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(plVar5);
                                                              }
                                                              builtin_wcsncpy((wchar_t *)*plVar5,
                                                                              L"Decimal",8);
                                                            }
                                                            uVar8 = 0x24;
                                                            if (0x24 < param_3) {
                                                              plVar5 = param_2 + 0x48;
                                                              param_1[0x24] = 0x6f;
                                                              if ((wchar_t *)*plVar5 != L"Divide") {
                                                                *(undefined4 *)(param_2 + 0x49) = 0;
                                                                uVar7 = uVar9;
                                                                if (*(int *)((longlong)param_2 +
                                                                            0x24c) != 7) {
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeTo(plVar5,7);
                                                                  uVar7 = (ulonglong)
                                                                          *(uint *)(param_2 + 0x49);
                                                                }
                                                                iVar3 = (int)uVar7 + 7;
                                                                *(int *)(param_2 + 0x49) = iVar3;
                                                                if (*(int *)((longlong)param_2 +
                                                                            0x24c) < iVar3) {
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(plVar5);
                                                                }
                                                                puVar1 = (undefined8 *)*plVar5;
                                                                *puVar1 = 0x69007600690044;
                                                                *(undefined4 *)(puVar1 + 1) =
                                                                     0x650064;
                                                                *(undefined2 *)
                                                                 ((longlong)puVar1 + 0xc) = 0;
                                                              }
                                                              uVar8 = 0x25;
                                                              if (0x25 < param_3) {
                                                                plVar5 = param_2 + 0x4a;
                                                                param_1[0x25] = 0x70;
                                                                if ((undefined4 *)*plVar5 !=
                                                                    &DAT_144d38904) {
                                                                  *(undefined4 *)(param_2 + 0x4b) =
                                                                       0;
                                                                  uVar7 = uVar9;
                                                                  if (*(int *)((longlong)param_2 +
                                                                              0x25c) != 3) {
                                                                                                                                        
                                                  TArray<wchar_t,FDefaultAllocator>::ResizeTo
                                                            (plVar5,3);
                                                  uVar7 = (ulonglong)*(uint *)(param_2 + 0x4b);
                                                  }
                                                  iVar3 = (int)uVar7 + 3;
                                                  *(int *)(param_2 + 0x4b) = iVar3;
                                                  if (*(int *)((longlong)param_2 + 0x25c) < iVar3) {
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (plVar5);
                                                  }
                                                  puVar2 = (undefined4 *)*plVar5;
                                                  *puVar2 = 0x310046;
                                                  *(undefined2 *)(puVar2 + 1) = 0;
                                                  }
                                                  uVar8 = 0x26;
                                                  if (0x26 < param_3) {
                                                    plVar5 = param_2 + 0x4c;
                                                    param_1[0x26] = 0x71;
                                                    if ((undefined4 *)*plVar5 != &DAT_144d38d44) {
                                                      *(undefined4 *)(param_2 + 0x4d) = 0;
                                                      uVar7 = uVar9;
                                                      if (*(int *)((longlong)param_2 + 0x26c) != 3)
                                                      {
                                                        TArray<wchar_t,FDefaultAllocator>::ResizeTo
                                                                  (plVar5,3);
                                                        uVar7 = (ulonglong)*(uint *)(param_2 + 0x4d)
                                                        ;
                                                      }
                                                      iVar3 = (int)uVar7 + 3;
                                                      *(int *)(param_2 + 0x4d) = iVar3;
                                                      if (*(int *)((longlong)param_2 + 0x26c) <
                                                          iVar3) {
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(plVar5);
                                                      }
                                                      puVar2 = (undefined4 *)*plVar5;
                                                      *puVar2 = 0x320046;
                                                      *(undefined2 *)(puVar2 + 1) = 0;
                                                    }
                                                    uVar8 = 0x27;
                                                    if (0x27 < param_3) {
                                                      plVar5 = param_2 + 0x4e;
                                                      param_1[0x27] = 0x72;
                                                      if ((undefined4 *)*plVar5 != &DAT_144d39154) {
                                                        *(undefined4 *)(param_2 + 0x4f) = 0;
                                                        uVar7 = uVar9;
                                                        if (*(int *)((longlong)param_2 + 0x27c) != 3
                                                           ) {
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeTo(plVar5,3);
                                                          uVar7 = (ulonglong)
                                                                  *(uint *)(param_2 + 0x4f);
                                                        }
                                                        iVar3 = (int)uVar7 + 3;
                                                        *(int *)(param_2 + 0x4f) = iVar3;
                                                        if (*(int *)((longlong)param_2 + 0x27c) <
                                                            iVar3) {
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(plVar5);
                                                        }
                                                        puVar2 = (undefined4 *)*plVar5;
                                                        *puVar2 = 0x330046;
                                                        *(undefined2 *)(puVar2 + 1) = 0;
                                                      }
                                                      uVar8 = 0x28;
                                                      if (0x28 < param_3) {
                                                        plVar5 = param_2 + 0x50;
                                                        param_1[0x28] = 0x73;
                                                        if ((undefined4 *)*plVar5 != &DAT_144d39204)
                                                        {
                                                          *(undefined4 *)(param_2 + 0x51) = 0;
                                                          uVar7 = uVar9;
                                                          if (*(int *)((longlong)param_2 + 0x28c) !=
                                                              3) {
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeTo(plVar5,3);
                                                            uVar7 = (ulonglong)
                                                                    *(uint *)(param_2 + 0x51);
                                                          }
                                                          iVar3 = (int)uVar7 + 3;
                                                          *(int *)(param_2 + 0x51) = iVar3;
                                                          if (*(int *)((longlong)param_2 + 0x28c) <
                                                              iVar3) {
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(plVar5);
                                                          }
                                                          puVar2 = (undefined4 *)*plVar5;
                                                          *puVar2 = 0x340046;
                                                          *(undefined2 *)(puVar2 + 1) = 0;
                                                        }
                                                        uVar8 = 0x29;
                                                        if (0x29 < param_3) {
                                                          plVar5 = param_2 + 0x52;
                                                          param_1[0x29] = 0x74;
                                                          if ((undefined4 *)*plVar5 !=
                                                              &DAT_144d39374) {
                                                            *(undefined4 *)(param_2 + 0x53) = 0;
                                                            uVar7 = uVar9;
                                                            if (*(int *)((longlong)param_2 + 0x29c)
                                                                != 3) {
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeTo(plVar5,3);
                                                              uVar7 = (ulonglong)
                                                                      *(uint *)(param_2 + 0x53);
                                                            }
                                                            iVar3 = (int)uVar7 + 3;
                                                            *(int *)(param_2 + 0x53) = iVar3;
                                                            if (*(int *)((longlong)param_2 + 0x29c)
                                                                < iVar3) {
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(plVar5);
                                                            }
                                                            puVar2 = (undefined4 *)*plVar5;
                                                            *puVar2 = 0x350046;
                                                            *(undefined2 *)(puVar2 + 1) = 0;
                                                          }
                                                          uVar8 = 0x2a;
                                                          if (0x2a < param_3) {
                                                            plVar5 = param_2 + 0x54;
                                                            param_1[0x2a] = 0x75;
                                                            if ((undefined4 *)*plVar5 !=
                                                                &DAT_144d39434) {
                                                              *(undefined4 *)(param_2 + 0x55) = 0;
                                                              uVar7 = uVar9;
                                                              if (*(int *)((longlong)param_2 + 0x2ac
                                                                          ) != 3) {
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeTo(plVar5,3);
                                                                uVar7 = (ulonglong)
                                                                        *(uint *)(param_2 + 0x55);
                                                              }
                                                              iVar3 = (int)uVar7 + 3;
                                                              *(int *)(param_2 + 0x55) = iVar3;
                                                              if (*(int *)((longlong)param_2 + 0x2ac
                                                                          ) < iVar3) {
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(plVar5);
                                                              }
                                                              puVar2 = (undefined4 *)*plVar5;
                                                              *puVar2 = 0x360046;
                                                              *(undefined2 *)(puVar2 + 1) = 0;
                                                            }
                                                            uVar8 = 0x2b;
                                                            if (0x2b < param_3) {
                                                              plVar5 = param_2 + 0x56;
                                                              param_1[0x2b] = 0x76;
                                                              if ((undefined4 *)*plVar5 !=
                                                                  &DAT_144d39534) {
                                                                *(undefined4 *)(param_2 + 0x57) = 0;
                                                                uVar7 = uVar9;
                                                                if (*(int *)((longlong)param_2 + 700
                                                                            ) != 3) {
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeTo(plVar5,3);
                                                                  uVar7 = (ulonglong)
                                                                          *(uint *)(param_2 + 0x57);
                                                                }
                                                                iVar3 = (int)uVar7 + 3;
                                                                *(int *)(param_2 + 0x57) = iVar3;
                                                                if (*(int *)((longlong)param_2 + 700
                                                                            ) < iVar3) {
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(plVar5);
                                                                }
                                                                puVar2 = (undefined4 *)*plVar5;
                                                                *puVar2 = 0x370046;
                                                                *(undefined2 *)(puVar2 + 1) = 0;
                                                              }
                                                              uVar8 = 0x2c;
                                                              if (0x2c < param_3) {
                                                                plVar5 = param_2 + 0x58;
                                                                param_1[0x2c] = 0x77;
                                                                if ((undefined4 *)*plVar5 !=
                                                                    &DAT_144d395e4) {
                                                                  *(undefined4 *)(param_2 + 0x59) =
                                                                       0;
                                                                  uVar7 = uVar9;
                                                                  if (*(int *)((longlong)param_2 +
                                                                              0x2cc) != 3) {
                                                                                                                                        
                                                  TArray<wchar_t,FDefaultAllocator>::ResizeTo
                                                            (plVar5,3);
                                                  uVar7 = (ulonglong)*(uint *)(param_2 + 0x59);
                                                  }
                                                  iVar3 = (int)uVar7 + 3;
                                                  *(int *)(param_2 + 0x59) = iVar3;
                                                  if (*(int *)((longlong)param_2 + 0x2cc) < iVar3) {
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (plVar5);
                                                  }
                                                  puVar2 = (undefined4 *)*plVar5;
                                                  *puVar2 = 0x380046;
                                                  *(undefined2 *)(puVar2 + 1) = 0;
                                                  }
                                                  uVar8 = 0x2d;
                                                  if (0x2d < param_3) {
                                                    plVar5 = param_2 + 0x5a;
                                                    param_1[0x2d] = 0x78;
                                                    if ((undefined4 *)*plVar5 != &DAT_144d39784) {
                                                      *(undefined4 *)(param_2 + 0x5b) = 0;
                                                      uVar7 = uVar9;
                                                      if (*(int *)((longlong)param_2 + 0x2dc) != 3)
                                                      {
                                                        TArray<wchar_t,FDefaultAllocator>::ResizeTo
                                                                  (plVar5,3);
                                                        uVar7 = (ulonglong)*(uint *)(param_2 + 0x5b)
                                                        ;
                                                      }
                                                      iVar3 = (int)uVar7 + 3;
                                                      *(int *)(param_2 + 0x5b) = iVar3;
                                                      if (*(int *)((longlong)param_2 + 0x2dc) <
                                                          iVar3) {
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(plVar5);
                                                      }
                                                      puVar2 = (undefined4 *)*plVar5;
                                                      *puVar2 = 0x390046;
                                                      *(undefined2 *)(puVar2 + 1) = 0;
                                                    }
                                                    uVar8 = 0x2e;
                                                    if (0x2e < param_3) {
                                                      plVar5 = param_2 + 0x5c;
                                                      param_1[0x2e] = 0x79;
                                                      if ((undefined8 *)*plVar5 != &DAT_144d3c010) {
                                                        *(undefined4 *)(param_2 + 0x5d) = 0;
                                                        uVar7 = uVar9;
                                                        if (*(int *)((longlong)param_2 + 0x2ec) != 4
                                                           ) {
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeTo(plVar5,4);
                                                          uVar7 = (ulonglong)
                                                                  *(uint *)(param_2 + 0x5d);
                                                        }
                                                        iVar3 = (int)uVar7 + 4;
                                                        *(int *)(param_2 + 0x5d) = iVar3;
                                                        if (*(int *)((longlong)param_2 + 0x2ec) <
                                                            iVar3) {
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(plVar5);
                                                        }
                                                        *(undefined8 *)*plVar5 = 0x3000310046;
                                                      }
                                                      uVar8 = 0x2f;
                                                      if (0x2f < param_3) {
                                                        plVar5 = param_2 + 0x5e;
                                                        param_1[0x2f] = 0x7a;
                                                        if ((undefined8 *)*plVar5 != &DAT_144d3c028)
                                                        {
                                                          *(undefined4 *)(param_2 + 0x5f) = 0;
                                                          uVar7 = uVar9;
                                                          if (*(int *)((longlong)param_2 + 0x2fc) !=
                                                              4) {
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeTo(plVar5,4);
                                                            uVar7 = (ulonglong)
                                                                    *(uint *)(param_2 + 0x5f);
                                                          }
                                                          iVar3 = (int)uVar7 + 4;
                                                          *(int *)(param_2 + 0x5f) = iVar3;
                                                          if (*(int *)((longlong)param_2 + 0x2fc) <
                                                              iVar3) {
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(plVar5);
                                                          }
                                                          *(undefined8 *)*plVar5 = 0x3100310046;
                                                        }
                                                        uVar8 = 0x30;
                                                        if (0x30 < param_3) {
                                                          plVar5 = param_2 + 0x60;
                                                          param_1[0x30] = 0x7b;
                                                          if ((undefined8 *)*plVar5 !=
                                                              &DAT_144d3c030) {
                                                            *(undefined4 *)(param_2 + 0x61) = 0;
                                                            uVar7 = uVar9;
                                                            if (*(int *)((longlong)param_2 + 0x30c)
                                                                != 4) {
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeTo(plVar5,4);
                                                              uVar7 = (ulonglong)
                                                                      *(uint *)(param_2 + 0x61);
                                                            }
                                                            iVar3 = (int)uVar7 + 4;
                                                            *(int *)(param_2 + 0x61) = iVar3;
                                                            if (*(int *)((longlong)param_2 + 0x30c)
                                                                < iVar3) {
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(plVar5);
                                                            }
                                                            *(undefined8 *)*plVar5 = 0x3200310046;
                                                          }
                                                          uVar8 = 0x31;
                                                          if (0x31 < param_3) {
                                                            plVar5 = param_2 + 0x62;
                                                            param_1[0x31] = 0x90;
                                                            if ((wchar_t *)*plVar5 != L"NumLock") {
                                                              *(undefined4 *)(param_2 + 99) = 0;
                                                              uVar7 = uVar9;
                                                              if (*(int *)((longlong)param_2 + 0x31c
                                                                          ) != 8) {
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeTo(plVar5,8);
                                                                uVar7 = (ulonglong)
                                                                        *(uint *)(param_2 + 99);
                                                              }
                                                              iVar3 = (int)uVar7 + 8;
                                                              *(int *)(param_2 + 99) = iVar3;
                                                              if (*(int *)((longlong)param_2 + 0x31c
                                                                          ) < iVar3) {
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(plVar5);
                                                              }
                                                              builtin_wcsncpy((wchar_t *)*plVar5,
                                                                              L"NumLock",8);
                                                            }
                                                            uVar8 = 0x32;
                                                            if (0x32 < param_3) {
                                                              plVar5 = param_2 + 100;
                                                              param_1[0x32] = 0x91;
                                                              if ((wchar_t *)*plVar5 !=
                                                                  L"ScrollLock") {
                                                                *(undefined4 *)(param_2 + 0x65) = 0;
                                                                uVar7 = uVar9;
                                                                if (*(int *)((longlong)param_2 +
                                                                            0x32c) != 0xb) {
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeTo(plVar5,0xb);
                                                                  uVar7 = (ulonglong)
                                                                          *(uint *)(param_2 + 0x65);
                                                                }
                                                                iVar3 = (int)uVar7 + 0xb;
                                                                *(int *)(param_2 + 0x65) = iVar3;
                                                                if (*(int *)((longlong)param_2 +
                                                                            0x32c) < iVar3) {
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(plVar5);
                                                                }
                                                                builtin_wcsncpy((wchar_t *)*plVar5,
                                                                                L"ScrollLock",0xb);
                                                              }
                                                              uVar8 = 0x33;
                                                              if (0x33 < param_3) {
                                                                plVar5 = param_2 + 0x66;
                                                                param_1[0x33] = 0xa0;
                                                                if ((wchar_t *)*plVar5 !=
                                                                    L"LeftShift") {
                                                                  *(undefined4 *)(param_2 + 0x67) =
                                                                       0;
                                                                  uVar7 = uVar9;
                                                                  if (*(int *)((longlong)param_2 +
                                                                              0x33c) != 10) {
                                                                                                                                        
                                                  TArray<wchar_t,FDefaultAllocator>::ResizeTo
                                                            (plVar5,10);
                                                  uVar7 = (ulonglong)*(uint *)(param_2 + 0x67);
                                                  }
                                                  iVar3 = (int)uVar7 + 10;
                                                  *(int *)(param_2 + 0x67) = iVar3;
                                                  if (*(int *)((longlong)param_2 + 0x33c) < iVar3) {
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (plVar5);
                                                  }
                                                  builtin_wcsncpy((wchar_t *)*plVar5,L"LeftShift",10
                                                                 );
                                                  }
                                                  uVar8 = 0x34;
                                                  if (0x34 < param_3) {
                                                    plVar5 = param_2 + 0x68;
                                                    param_1[0x34] = 0xa1;
                                                    if ((wchar_t *)*plVar5 != L"RightShift") {
                                                      *(undefined4 *)(param_2 + 0x69) = 0;
                                                      uVar7 = uVar9;
                                                      if (*(int *)((longlong)param_2 + 0x34c) != 0xb
                                                         ) {
                                                        TArray<wchar_t,FDefaultAllocator>::ResizeTo
                                                                  (plVar5,0xb);
                                                        uVar7 = (ulonglong)*(uint *)(param_2 + 0x69)
                                                        ;
                                                      }
                                                      iVar3 = (int)uVar7 + 0xb;
                                                      *(int *)(param_2 + 0x69) = iVar3;
                                                      if (*(int *)((longlong)param_2 + 0x34c) <
                                                          iVar3) {
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(plVar5);
                                                      }
                                                      builtin_wcsncpy((wchar_t *)*plVar5,
                                                                      L"RightShift",0xb);
                                                    }
                                                    uVar8 = 0x35;
                                                    if (0x35 < param_3) {
                                                      plVar5 = param_2 + 0x6a;
                                                      param_1[0x35] = 0xa2;
                                                      if ((wchar_t *)*plVar5 != L"LeftControl") {
                                                        *(undefined4 *)(param_2 + 0x6b) = 0;
                                                        uVar7 = uVar9;
                                                        if (*(int *)((longlong)param_2 + 0x35c) !=
                                                            0xc) {
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeTo(plVar5,0xc);
                                                          uVar7 = (ulonglong)
                                                                  *(uint *)(param_2 + 0x6b);
                                                        }
                                                        iVar3 = (int)uVar7 + 0xc;
                                                        *(int *)(param_2 + 0x6b) = iVar3;
                                                        if (*(int *)((longlong)param_2 + 0x35c) <
                                                            iVar3) {
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(plVar5);
                                                        }
                                                        builtin_wcsncpy((wchar_t *)*plVar5,
                                                                        L"LeftControl",0xc);
                                                      }
                                                      uVar8 = 0x36;
                                                      if (0x36 < param_3) {
                                                        plVar5 = param_2 + 0x6c;
                                                        param_1[0x36] = 0xa3;
                                                        if ((wchar_t *)*plVar5 != L"RightControl") {
                                                          *(undefined4 *)(param_2 + 0x6d) = 0;
                                                          uVar7 = uVar9;
                                                          if (*(int *)((longlong)param_2 + 0x36c) !=
                                                              0xd) {
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeTo(plVar5,0xd);
                                                            uVar7 = (ulonglong)
                                                                    *(uint *)(param_2 + 0x6d);
                                                          }
                                                          iVar3 = (int)uVar7 + 0xd;
                                                          *(int *)(param_2 + 0x6d) = iVar3;
                                                          if (*(int *)((longlong)param_2 + 0x36c) <
                                                              iVar3) {
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(plVar5);
                                                          }
                                                          builtin_wcsncpy((wchar_t *)*plVar5,
                                                                          L"RightControl",0xd);
                                                        }
                                                        uVar8 = 0x37;
                                                        if (0x37 < param_3) {
                                                          plVar5 = param_2 + 0x6e;
                                                          param_1[0x37] = 0xa4;
                                                          if ((wchar_t *)*plVar5 != L"LeftAlt") {
                                                            *(undefined4 *)(param_2 + 0x6f) = 0;
                                                            uVar7 = uVar9;
                                                            if (*(int *)((longlong)param_2 + 0x37c)
                                                                != 8) {
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeTo(plVar5,8);
                                                              uVar7 = (ulonglong)
                                                                      *(uint *)(param_2 + 0x6f);
                                                            }
                                                            iVar3 = (int)uVar7 + 8;
                                                            *(int *)(param_2 + 0x6f) = iVar3;
                                                            if (*(int *)((longlong)param_2 + 0x37c)
                                                                < iVar3) {
                                                              TArray<wchar_t,FDefaultAllocator>::
                                                              ResizeGrow(plVar5);
                                                            }
                                                            builtin_wcsncpy((wchar_t *)*plVar5,
                                                                            L"LeftAlt",8);
                                                          }
                                                          uVar8 = 0x38;
                                                          if (0x38 < param_3) {
                                                            plVar5 = param_2 + 0x70;
                                                            param_1[0x38] = 0xa5;
                                                            if ((wchar_t *)*plVar5 != L"RightAlt") {
                                                              *(undefined4 *)(param_2 + 0x71) = 0;
                                                              uVar7 = uVar9;
                                                              if (*(int *)((longlong)param_2 + 0x38c
                                                                          ) != 9) {
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeTo(plVar5,9);
                                                                uVar7 = (ulonglong)
                                                                        *(uint *)(param_2 + 0x71);
                                                              }
                                                              iVar3 = (int)uVar7 + 9;
                                                              *(int *)(param_2 + 0x71) = iVar3;
                                                              if (*(int *)((longlong)param_2 + 0x38c
                                                                          ) < iVar3) {
                                                                TArray<wchar_t,FDefaultAllocator>::
                                                                ResizeGrow(plVar5);
                                                              }
                                                              builtin_wcsncpy((wchar_t *)*plVar5,
                                                                              L"RightAlt",9);
                                                            }
                                                            uVar8 = 0x39;
                                                            if (0x39 < param_3) {
                                                              plVar5 = param_2 + 0x72;
                                                              param_1[0x39] = 0x5b;
                                                              if ((wchar_t *)*plVar5 !=
                                                                  L"LeftCommand") {
                                                                *(undefined4 *)(param_2 + 0x73) = 0;
                                                                uVar7 = uVar9;
                                                                if (*(int *)((longlong)param_2 +
                                                                            0x39c) != 0xc) {
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeTo(plVar5,0xc);
                                                                  uVar7 = (ulonglong)
                                                                          *(uint *)(param_2 + 0x73);
                                                                }
                                                                iVar3 = (int)uVar7 + 0xc;
                                                                *(int *)(param_2 + 0x73) = iVar3;
                                                                if (*(int *)((longlong)param_2 +
                                                                            0x39c) < iVar3) {
                                                                  TArray<wchar_t,FDefaultAllocator>
                                                                  ::ResizeGrow(plVar5);
                                                                }
                                                                builtin_wcsncpy((wchar_t *)*plVar5,
                                                                                L"LeftCommand",0xc);
                                                              }
                                                              uVar8 = 0x3a;
                                                              if (0x3a < param_3) {
                                                                plVar5 = param_2 + 0x74;
                                                                param_1[0x3a] = 0x5c;
                                                                if ((wchar_t *)*plVar5 !=
                                                                    L"RightCommand") {
                                                                  *(undefined4 *)(param_2 + 0x75) =
                                                                       0;
                                                                  uVar7 = uVar9;
                                                                  if (*(int *)((longlong)param_2 +
                                                                              0x3ac) != 0xd) {
                                                                                                                                        
                                                  TArray<wchar_t,FDefaultAllocator>::ResizeTo
                                                            (plVar5,0xd);
                                                  uVar7 = (ulonglong)*(uint *)(param_2 + 0x75);
                                                  }
                                                  iVar3 = (int)uVar7 + 0xd;
                                                  *(int *)(param_2 + 0x75) = iVar3;
                                                  if (*(int *)((longlong)param_2 + 0x3ac) < iVar3) {
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (plVar5);
                                                  }
                                                  builtin_wcsncpy((wchar_t *)*plVar5,L"RightCommand"
                                                                  ,0xd);
                                                  }
                                                  uVar8 = 0x3b;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    local_1498[0] = 0;
    local_1498[1] = 0;
    TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(local_1488,0,0);
    local_1468 = 0xffffffff;
    local_1464 = 0;
    local_1458 = 0;
    local_1450 = 0;
    local_1518 = MapVirtualKeyW(0xba,2);
    if (local_1518 != 0) {
      local_1508 = &local_1518;
      local_1514 = 0xba;
      pUStack_1500 = &local_1514;
      FUN_1417ab330(local_1498,local_1510,&local_1508,0);
    }
    local_1514 = MapVirtualKeyW(0xbf,2);
    if (local_1514 != 0) {
      local_1508 = &local_1514;
      local_1518 = 0xbf;
      pUStack_1500 = &local_1518;
      FUN_1417ab330(local_1498,local_1510,&local_1508,0);
    }
    local_1514 = MapVirtualKeyW(0xc0,2);
    if (local_1514 != 0) {
      local_1508 = &local_1514;
      local_1518 = 0xc0;
      pUStack_1500 = &local_1518;
      FUN_1417ab330(local_1498,local_1510,&local_1508,0);
    }
    local_1514 = MapVirtualKeyW(0xdb,2);
    if (local_1514 != 0) {
      local_1508 = &local_1514;
      local_1518 = 0xdb;
      pUStack_1500 = &local_1518;
      FUN_1417ab330(local_1498,local_1510,&local_1508,0);
    }
    local_1514 = MapVirtualKeyW(0xdc,2);
    if (local_1514 != 0) {
      local_1508 = &local_1514;
      local_1518 = 0xdc;
      pUStack_1500 = &local_1518;
      FUN_1417ab330(local_1498,local_1510,&local_1508,0);
    }
    local_1514 = MapVirtualKeyW(0xdd,2);
    if (local_1514 != 0) {
      local_1508 = &local_1514;
      local_1518 = 0xdd;
      pUStack_1500 = &local_1518;
      FUN_1417ab330(local_1498,local_1510,&local_1508,0);
    }
    local_1514 = MapVirtualKeyW(0xde,2);
    if (local_1514 != 0) {
      local_1508 = &local_1514;
      local_1518 = 0xde;
      pUStack_1500 = &local_1518;
      FUN_1417ab330(local_1498,local_1510,&local_1508,0);
    }
    local_1514 = MapVirtualKeyW(0xdf,2);
    if (local_1514 != 0) {
      local_1508 = &local_1514;
      local_1518 = 0xdf;
      pUStack_1500 = &local_1518;
      FUN_1417ab330(local_1498,local_1510,&local_1508,0);
    }
    local_1514 = MapVirtualKeyW(0xbb,2);
    if (local_1514 != 0) {
      local_1508 = &local_1514;
      local_1518 = 0xbb;
      pUStack_1500 = &local_1518;
      FUN_1417ab330(local_1498,local_1510,&local_1508,0);
    }
    local_1514 = MapVirtualKeyW(0xbc,2);
    if (local_1514 != 0) {
      local_1508 = &local_1514;
      local_1518 = 0xbc;
      pUStack_1500 = &local_1518;
      FUN_1417ab330(local_1498,local_1510,&local_1508,0);
    }
    local_1514 = MapVirtualKeyW(0xbd,2);
    if (local_1514 != 0) {
      local_1508 = &local_1514;
      local_1518 = 0xbd;
      pUStack_1500 = &local_1518;
      FUN_1417ab330(local_1498,local_1510,&local_1508,0);
    }
    local_1514 = MapVirtualKeyW(0xbe,2);
    if (local_1514 != 0) {
      local_1508 = &local_1514;
      local_1518 = 0xbe;
      pUStack_1500 = &local_1518;
      FUN_1417ab330(local_1498,local_1510,&local_1508,0);
    }
    local_1514 = MapVirtualKeyW(0xe2,2);
    if (local_1514 != 0) {
      local_1508 = &local_1514;
      local_1518 = 0xe2;
      pUStack_1500 = &local_1518;
      FUN_1417ab330(local_1498,local_1510,&local_1508,0);
    }
    lVar11 = 0x100;
    puVar4 = auStack_103c;
    lVar6 = 0x100;
    do {
      *(undefined8 *)(puVar4 + -0xc) = 0;
      *(undefined8 *)(puVar4 + -4) = 0;
      puVar4 = puVar4 + 0x10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    local_1528 = 0;
    iVar3 = FGenericPlatformInput::GetStandardPrintableKeyMap(local_1448,&local_1048,0x100,1);
    if (0 < iVar3) {
      do {
        TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
        ::Remove(local_1498,local_1448[uVar9]);
        uVar9 = uVar9 + 1;
      } while ((longlong)uVar9 < (longlong)iVar3);
    }
    pUStack_1500 = (UINT *)local_1488;
    local_1508 = (UINT *)0x100000000;
    local_14f8 = 0xffffffff;
    uStack_14f4 = 0;
    if (local_1470 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1508);
    }
    local_14e8 = local_1498;
    pUStack_14b8 = local_1508;
    puStack_14b0 = (undefined1 *)pUStack_1500;
    uStack_14a8 = local_14f8;
    iStack_14a4 = (int)uStack_14f4;
    uStack_14a0 = uStack_14f4._4_4_;
    uStack_149c = uStack_14ec;
    uStack_14d0 = local_14f8;
    iStack_14cc = (int)uStack_14f4;
    uStack_14e0 = local_1508;
    local_14c8 = uStack_14f4._4_4_;
    uStack_14c4 = uStack_14ec;
    local_14d8 = (undefined1 *)pUStack_1500;
    local_14c0 = local_14e8;
    if ((int)uStack_14f4 < *(int *)((longlong)pUStack_1500 + 0x18)) {
      do {
        if (uVar8 < param_3) {
          param_1[uVar8] = *(undefined4 *)(*local_14e8 + 4 + (longlong)iStack_14cc * 0x10);
          plVar5 = (longlong *)
                   FString::Chr(&local_1508,
                                *(undefined2 *)(*local_14e8 + (longlong)iStack_14cc * 0x10));
          plVar10 = param_2 + (ulonglong)uVar8 * 2;
          if (plVar10 != plVar5) {
            if (*plVar10 != 0) {
              FMemory::Free();
            }
            *plVar10 = *plVar5;
            *plVar5 = 0;
            *(int *)(plVar10 + 1) = (int)plVar5[1];
            *(undefined4 *)((longlong)plVar10 + 0xc) = *(undefined4 *)((longlong)plVar5 + 0xc);
            plVar5[1] = 0;
          }
          if (local_1508 != (UINT *)0x0) {
            FMemory::Free();
          }
          uVar8 = uVar8 + 1;
        }
        uStack_14d0 = uStack_14d0 & ~uStack_14e0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_14e0);
      } while (iStack_14cc < *(int *)(local_14d8 + 0x18));
    }
    plVar5 = local_58 + 2;
    do {
      plVar10 = plVar5 + -2;
      plVar5 = plVar5 + -2;
      lVar11 = lVar11 + -1;
      if (*plVar10 != 0) {
        FMemory::Free();
      }
    } while (lVar11 != 0);
    local_1450 = 0;
    if (local_1458 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_1498);
    uVar9 = (ulonglong)uVar8;
  }
  return uVar9;
}



// FUNCTION 1417b0700 GetStandardPrintableKeyMap body=9179 status=ok
// SIG undefined GetStandardPrintableKeyMap(void)

ulonglong FGenericPlatformInput::GetStandardPrintableKeyMap
                    (undefined4 *param_1,undefined8 *param_2,uint param_3,char param_4,char param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar4 = 0;
  iVar8 = 0;
  uVar7 = uVar4;
  if (param_3 != 0) {
    *param_1 = 0x30;
    if ((undefined *)*param_2 != &DAT_144d3b938) {
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,5);
        uVar7 = (ulonglong)*(uint *)(param_2 + 1);
      }
      iVar3 = (int)uVar7 + 5;
      *(int *)(param_2 + 1) = iVar3;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      puVar2 = (undefined8 *)*param_2;
      *puVar2 = 0x6f00720065005a;
      *(undefined2 *)(puVar2 + 1) = 0;
    }
    uVar7 = 1;
    if (1 < param_3) {
      param_1[1] = 0x31;
      if ((undefined8 *)param_2[2] != &DAT_144d3b948) {
        *(undefined4 *)(param_2 + 3) = 0;
        uVar7 = uVar4;
        if (*(int *)((longlong)param_2 + 0x1c) != 4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 2,4);
          uVar7 = (ulonglong)*(uint *)(param_2 + 3);
        }
        iVar3 = (int)uVar7 + 4;
        *(int *)(param_2 + 3) = iVar3;
        if (*(int *)((longlong)param_2 + 0x1c) < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2 + 2);
        }
        *(undefined8 *)param_2[2] = 0x65006e004f;
      }
      uVar7 = 2;
      if (2 < param_3) {
        param_1[2] = 0x32;
        if ((undefined8 *)param_2[4] != &DAT_144d3b950) {
          *(undefined4 *)(param_2 + 5) = 0;
          uVar7 = uVar4;
          if (*(int *)((longlong)param_2 + 0x2c) != 4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 4,4);
            uVar7 = (ulonglong)*(uint *)(param_2 + 5);
          }
          iVar3 = (int)uVar7 + 4;
          *(int *)(param_2 + 5) = iVar3;
          if (*(int *)((longlong)param_2 + 0x2c) < iVar3) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2 + 4);
          }
          *(undefined8 *)param_2[4] = 0x6f00770054;
        }
        uVar7 = 3;
        if (3 < param_3) {
          param_1[3] = 0x33;
          if ((wchar_t *)param_2[6] != L"Three") {
            *(undefined4 *)(param_2 + 7) = 0;
            uVar7 = uVar4;
            if (*(int *)((longlong)param_2 + 0x3c) != 6) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,6);
              uVar7 = (ulonglong)*(uint *)(param_2 + 7);
            }
            iVar3 = (int)uVar7 + 6;
            *(int *)(param_2 + 7) = iVar3;
            if (*(int *)((longlong)param_2 + 0x3c) < iVar3) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2 + 6);
            }
            puVar2 = (undefined8 *)param_2[6];
            *puVar2 = 0x65007200680054;
            *(undefined4 *)(puVar2 + 1) = 0x65;
          }
          uVar7 = 4;
          if (4 < param_3) {
            param_1[4] = 0x34;
            if ((undefined *)param_2[8] != &DAT_144d3b968) {
              *(undefined4 *)(param_2 + 9) = 0;
              uVar7 = uVar4;
              if (*(int *)((longlong)param_2 + 0x4c) != 5) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 8,5);
                uVar7 = (ulonglong)*(uint *)(param_2 + 9);
              }
              iVar3 = (int)uVar7 + 5;
              *(int *)(param_2 + 9) = iVar3;
              if (*(int *)((longlong)param_2 + 0x4c) < iVar3) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2 + 8);
              }
              puVar2 = (undefined8 *)param_2[8];
              *puVar2 = 0x720075006f0046;
              *(undefined2 *)(puVar2 + 1) = 0;
            }
            uVar7 = 5;
            if (5 < param_3) {
              param_1[5] = 0x35;
              if ((undefined *)param_2[10] != &DAT_144d3b978) {
                *(undefined4 *)(param_2 + 0xb) = 0;
                uVar7 = uVar4;
                if (*(int *)((longlong)param_2 + 0x5c) != 5) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 10,5);
                  uVar7 = (ulonglong)*(uint *)(param_2 + 0xb);
                }
                iVar3 = (int)uVar7 + 5;
                *(int *)(param_2 + 0xb) = iVar3;
                if (*(int *)((longlong)param_2 + 0x5c) < iVar3) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2 + 10);
                }
                puVar2 = (undefined8 *)param_2[10];
                *puVar2 = 0x65007600690046;
                *(undefined2 *)(puVar2 + 1) = 0;
              }
              uVar7 = 6;
              if (6 < param_3) {
                param_1[6] = 0x36;
                if ((undefined8 *)param_2[0xc] != &DAT_144d3b988) {
                  *(undefined4 *)(param_2 + 0xd) = 0;
                  uVar7 = uVar4;
                  if (*(int *)((longlong)param_2 + 0x6c) != 4) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 0xc,4);
                    uVar7 = (ulonglong)*(uint *)(param_2 + 0xd);
                  }
                  iVar3 = (int)uVar7 + 4;
                  *(int *)(param_2 + 0xd) = iVar3;
                  if (*(int *)((longlong)param_2 + 0x6c) < iVar3) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2 + 0xc);
                  }
                  *(undefined8 *)param_2[0xc] = 0x7800690053;
                }
                uVar7 = 7;
                if (7 < param_3) {
                  param_1[7] = 0x37;
                  if ((wchar_t *)param_2[0xe] != L"Seven") {
                    *(undefined4 *)(param_2 + 0xf) = 0;
                    uVar7 = uVar4;
                    if (*(int *)((longlong)param_2 + 0x7c) != 6) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 0xe,6);
                      uVar7 = (ulonglong)*(uint *)(param_2 + 0xf);
                    }
                    iVar3 = (int)uVar7 + 6;
                    *(int *)(param_2 + 0xf) = iVar3;
                    if (*(int *)((longlong)param_2 + 0x7c) < iVar3) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2 + 0xe);
                    }
                    puVar2 = (undefined8 *)param_2[0xe];
                    *puVar2 = 0x65007600650053;
                    *(undefined4 *)(puVar2 + 1) = 0x6e;
                  }
                  uVar7 = 8;
                  if (8 < param_3) {
                    plVar1 = param_2 + 0x10;
                    param_1[8] = 0x38;
                    if ((wchar_t *)*plVar1 != L"Eight") {
                      *(undefined4 *)(param_2 + 0x11) = 0;
                      uVar7 = uVar4;
                      if (*(int *)((longlong)param_2 + 0x8c) != 6) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,6);
                        uVar7 = (ulonglong)*(uint *)(param_2 + 0x11);
                      }
                      iVar3 = (int)uVar7 + 6;
                      *(int *)(param_2 + 0x11) = iVar3;
                      if (*(int *)((longlong)param_2 + 0x8c) < iVar3) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
                      }
                      puVar2 = (undefined8 *)*plVar1;
                      *puVar2 = 0x68006700690045;
                      *(undefined4 *)(puVar2 + 1) = 0x74;
                    }
                    uVar7 = 9;
                    if (9 < param_3) {
                      puVar2 = param_2 + 0x12;
                      param_1[9] = 0x39;
                      if ((undefined *)*puVar2 != &DAT_144d3b9b0) {
                        *(undefined4 *)(param_2 + 0x13) = 0;
                        uVar7 = uVar4;
                        if (*(int *)((longlong)param_2 + 0x9c) != 5) {
                          TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,5);
                          uVar7 = (ulonglong)*(uint *)(param_2 + 0x13);
                        }
                        iVar3 = (int)uVar7 + 5;
                        *(int *)(param_2 + 0x13) = iVar3;
                        if (*(int *)((longlong)param_2 + 0x9c) < iVar3) {
                          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
                        }
                        puVar2 = (undefined8 *)*puVar2;
                        *puVar2 = 0x65006e0069004e;
                        *(undefined2 *)(puVar2 + 1) = 0;
                      }
                      uVar7 = 10;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ((param_4 != '\0') && (uVar5 = (uint)uVar7, uVar5 < param_3)) {
    param_1[uVar7] = 0x41;
    puVar2 = param_2 + uVar7 * 2;
    if ((undefined4 *)*puVar2 != &DAT_144d35ff4) {
      *(undefined4 *)(puVar2 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      }
      iVar3 = (int)uVar7 + 2;
      *(int *)(puVar2 + 1) = iVar3;
      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
      }
      *(undefined4 *)*puVar2 = 0x41;
    }
    uVar6 = uVar5 + 1;
    uVar7 = (ulonglong)uVar6;
    if (uVar6 < param_3) {
      param_1[uVar7] = 0x42;
      puVar2 = param_2 + (ulonglong)uVar6 * 2;
      if ((undefined4 *)*puVar2 != &DAT_144d36014) {
        *(undefined4 *)(puVar2 + 1) = 0;
        uVar7 = uVar4;
        if (*(int *)((longlong)puVar2 + 0xc) != 2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
          uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
        }
        iVar3 = (int)uVar7 + 2;
        *(int *)(puVar2 + 1) = iVar3;
        if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
        }
        *(undefined4 *)*puVar2 = 0x42;
      }
      uVar6 = uVar5 + 2;
      uVar7 = (ulonglong)uVar6;
      if (uVar6 < param_3) {
        param_1[uVar7] = 0x43;
        puVar2 = param_2 + (ulonglong)uVar6 * 2;
        if ((undefined4 *)*puVar2 != &DAT_144d3602c) {
          *(undefined4 *)(puVar2 + 1) = 0;
          uVar7 = uVar4;
          if (*(int *)((longlong)puVar2 + 0xc) != 2) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
            uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
          }
          iVar3 = (int)uVar7 + 2;
          *(int *)(puVar2 + 1) = iVar3;
          if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
          }
          *(undefined4 *)*puVar2 = 0x43;
        }
        uVar6 = uVar5 + 3;
        uVar7 = (ulonglong)uVar6;
        if (uVar6 < param_3) {
          param_1[uVar7] = 0x44;
          puVar2 = param_2 + (ulonglong)uVar6 * 2;
          if ((undefined4 *)*puVar2 != &DAT_144d36044) {
            *(undefined4 *)(puVar2 + 1) = 0;
            uVar7 = uVar4;
            if (*(int *)((longlong)puVar2 + 0xc) != 2) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
              uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
            }
            iVar3 = (int)uVar7 + 2;
            *(int *)(puVar2 + 1) = iVar3;
            if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
            }
            *(undefined4 *)*puVar2 = 0x44;
          }
          uVar6 = uVar5 + 4;
          uVar7 = (ulonglong)uVar6;
          if (uVar6 < param_3) {
            param_1[uVar7] = 0x45;
            puVar2 = param_2 + (ulonglong)uVar6 * 2;
            if ((undefined4 *)*puVar2 != &DAT_144d36074) {
              *(undefined4 *)(puVar2 + 1) = 0;
              uVar7 = uVar4;
              if (*(int *)((longlong)puVar2 + 0xc) != 2) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
                uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
              }
              iVar3 = (int)uVar7 + 2;
              *(int *)(puVar2 + 1) = iVar3;
              if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
              }
              *(undefined4 *)*puVar2 = 0x45;
            }
            uVar6 = uVar5 + 5;
            uVar7 = (ulonglong)uVar6;
            if (uVar6 < param_3) {
              param_1[uVar7] = 0x46;
              puVar2 = param_2 + (ulonglong)uVar6 * 2;
              if ((undefined4 *)*puVar2 != &DAT_144d3608c) {
                *(undefined4 *)(puVar2 + 1) = 0;
                uVar7 = uVar4;
                if (*(int *)((longlong)puVar2 + 0xc) != 2) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
                  uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
                }
                iVar3 = (int)uVar7 + 2;
                *(int *)(puVar2 + 1) = iVar3;
                if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
                }
                *(undefined4 *)*puVar2 = 0x46;
              }
              uVar6 = uVar5 + 6;
              uVar7 = (ulonglong)uVar6;
              if (uVar6 < param_3) {
                param_1[uVar7] = 0x47;
                puVar2 = param_2 + (ulonglong)uVar6 * 2;
                if ((undefined4 *)*puVar2 != &DAT_144d360b4) {
                  *(undefined4 *)(puVar2 + 1) = 0;
                  uVar7 = uVar4;
                  if (*(int *)((longlong)puVar2 + 0xc) != 2) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
                    uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
                  }
                  iVar3 = (int)uVar7 + 2;
                  *(int *)(puVar2 + 1) = iVar3;
                  if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
                  }
                  *(undefined4 *)*puVar2 = 0x47;
                }
                uVar6 = uVar5 + 7;
                uVar7 = (ulonglong)uVar6;
                if (uVar6 < param_3) {
                  param_1[uVar7] = 0x48;
                  puVar2 = param_2 + (ulonglong)uVar6 * 2;
                  if ((undefined4 *)*puVar2 != &DAT_144d360e4) {
                    *(undefined4 *)(puVar2 + 1) = 0;
                    uVar7 = uVar4;
                    if (*(int *)((longlong)puVar2 + 0xc) != 2) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
                      uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
                    }
                    iVar3 = (int)uVar7 + 2;
                    *(int *)(puVar2 + 1) = iVar3;
                    if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
                    }
                    *(undefined4 *)*puVar2 = 0x48;
                  }
                  uVar6 = uVar5 + 8;
                  uVar7 = (ulonglong)uVar6;
                  if (uVar6 < param_3) {
                    param_1[uVar7] = 0x49;
                    puVar2 = param_2 + (ulonglong)uVar6 * 2;
                    if ((undefined4 *)*puVar2 != &DAT_144d360fc) {
                      *(undefined4 *)(puVar2 + 1) = 0;
                      uVar7 = uVar4;
                      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
                        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
                      }
                      iVar3 = (int)uVar7 + 2;
                      *(int *)(puVar2 + 1) = iVar3;
                      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
                      }
                      *(undefined4 *)*puVar2 = 0x49;
                    }
                    uVar6 = uVar5 + 9;
                    uVar7 = (ulonglong)uVar6;
                    if (uVar6 < param_3) {
                      param_1[uVar7] = 0x4a;
                      puVar2 = param_2 + (ulonglong)uVar6 * 2;
                      if ((undefined4 *)*puVar2 != &DAT_144d36114) {
                        *(undefined4 *)(puVar2 + 1) = 0;
                        uVar7 = uVar4;
                        if (*(int *)((longlong)puVar2 + 0xc) != 2) {
                          TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
                          uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
                        }
                        iVar3 = (int)uVar7 + 2;
                        *(int *)(puVar2 + 1) = iVar3;
                        if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
                          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
                        }
                        *(undefined4 *)*puVar2 = 0x4a;
                      }
                      uVar6 = uVar5 + 10;
                      uVar7 = (ulonglong)uVar6;
                      if (uVar6 < param_3) {
                        param_1[uVar7] = 0x4b;
                        puVar2 = param_2 + (ulonglong)uVar6 * 2;
                        if ((undefined4 *)*puVar2 != &DAT_144d36134) {
                          *(undefined4 *)(puVar2 + 1) = 0;
                          uVar7 = uVar4;
                          if (*(int *)((longlong)puVar2 + 0xc) != 2) {
                            TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
                            uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
                          }
                          iVar3 = (int)uVar7 + 2;
                          *(int *)(puVar2 + 1) = iVar3;
                          if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
                            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
                          }
                          *(undefined4 *)*puVar2 = 0x4b;
                        }
                        uVar6 = uVar5 + 0xb;
                        uVar7 = (ulonglong)uVar6;
                        if (uVar6 < param_3) {
                          param_1[uVar7] = 0x4c;
                          puVar2 = param_2 + (ulonglong)uVar6 * 2;
                          if ((undefined4 *)*puVar2 != &DAT_144d3614c) {
                            *(undefined4 *)(puVar2 + 1) = 0;
                            uVar7 = uVar4;
                            if (*(int *)((longlong)puVar2 + 0xc) != 2) {
                              TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
                              uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
                            }
                            iVar3 = (int)uVar7 + 2;
                            *(int *)(puVar2 + 1) = iVar3;
                            if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
                              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
                            }
                            *(undefined4 *)*puVar2 = 0x4c;
                          }
                          uVar6 = uVar5 + 0xc;
                          uVar7 = (ulonglong)uVar6;
                          if (uVar6 < param_3) {
                            param_1[uVar7] = 0x4d;
                            puVar2 = param_2 + (ulonglong)uVar6 * 2;
                            if ((undefined4 *)*puVar2 != &DAT_144d36164) {
                              *(undefined4 *)(puVar2 + 1) = 0;
                              uVar7 = uVar4;
                              if (*(int *)((longlong)puVar2 + 0xc) != 2) {
                                TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
                                uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
                              }
                              iVar3 = (int)uVar7 + 2;
                              *(int *)(puVar2 + 1) = iVar3;
                              if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
                                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
                              }
                              *(undefined4 *)*puVar2 = 0x4d;
                            }
                            uVar6 = uVar5 + 0xd;
                            uVar7 = (ulonglong)uVar6;
                            if (uVar6 < param_3) {
                              param_1[uVar7] = 0x4e;
                              puVar2 = param_2 + (ulonglong)uVar6 * 2;
                              if ((undefined4 *)*puVar2 != &DAT_144d36184) {
                                *(undefined4 *)(puVar2 + 1) = 0;
                                uVar7 = uVar4;
                                if (*(int *)((longlong)puVar2 + 0xc) != 2) {
                                  TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
                                  uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
                                }
                                iVar3 = (int)uVar7 + 2;
                                *(int *)(puVar2 + 1) = iVar3;
                                if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
                                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
                                }
                                *(undefined4 *)*puVar2 = 0x4e;
                              }
                              uVar6 = uVar5 + 0xe;
                              uVar7 = (ulonglong)uVar6;
                              if (uVar6 < param_3) {
                                param_1[uVar7] = 0x4f;
                                puVar2 = param_2 + (ulonglong)uVar6 * 2;
                                if ((undefined4 *)*puVar2 != &DAT_144d361a4) {
                                  *(undefined4 *)(puVar2 + 1) = 0;
                                  uVar7 = uVar4;
                                  if (*(int *)((longlong)puVar2 + 0xc) != 2) {
                                    TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
                                    uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
                                  }
                                  iVar3 = (int)uVar7 + 2;
                                  *(int *)(puVar2 + 1) = iVar3;
                                  if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
                                  }
                                  *(undefined4 *)*puVar2 = 0x4f;
                                }
                                uVar6 = uVar5 + 0xf;
                                uVar7 = (ulonglong)uVar6;
                                if (uVar6 < param_3) {
                                  param_1[uVar7] = 0x50;
                                  puVar2 = param_2 + (ulonglong)uVar6 * 2;
                                  if ((undefined4 *)*puVar2 != &DAT_144d361bc) {
                                    *(undefined4 *)(puVar2 + 1) = 0;
                                    uVar7 = uVar4;
                                    if (*(int *)((longlong)puVar2 + 0xc) != 2) {
                                      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
                                      uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
                                    }
                                    iVar3 = (int)uVar7 + 2;
                                    *(int *)(puVar2 + 1) = iVar3;
                                    if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
                                    }
                                    *(undefined4 *)*puVar2 = 0x50;
                                  }
                                  uVar6 = uVar5 + 0x10;
                                  uVar7 = (ulonglong)uVar6;
                                  if (uVar6 < param_3) {
                                    param_1[uVar7] = 0x51;
                                    puVar2 = param_2 + (ulonglong)uVar6 * 2;
                                    if ((undefined4 *)*puVar2 != &DAT_144d361cc) {
                                      *(undefined4 *)(puVar2 + 1) = 0;
                                      uVar7 = uVar4;
                                      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
                                        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
                                        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
                                      }
                                      iVar3 = (int)uVar7 + 2;
                                      *(int *)(puVar2 + 1) = iVar3;
                                      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
                                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
                                      }
                                      *(undefined4 *)*puVar2 = 0x51;
                                    }
                                    uVar6 = uVar5 + 0x11;
                                    uVar7 = (ulonglong)uVar6;
                                    if (uVar6 < param_3) {
                                      param_1[uVar7] = 0x52;
                                      puVar2 = param_2 + (ulonglong)uVar6 * 2;
                                      if ((undefined4 *)*puVar2 != &DAT_144d361dc) {
                                        *(undefined4 *)(puVar2 + 1) = 0;
                                        uVar7 = uVar4;
                                        if (*(int *)((longlong)puVar2 + 0xc) != 2) {
                                          TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
                                          uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
                                        }
                                        iVar3 = (int)uVar7 + 2;
                                        *(int *)(puVar2 + 1) = iVar3;
                                        if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
                                          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
                                        }
                                        *(undefined4 *)*puVar2 = 0x52;
                                      }
                                      uVar6 = uVar5 + 0x12;
                                      uVar7 = (ulonglong)uVar6;
                                      if (uVar6 < param_3) {
                                        param_1[uVar7] = 0x53;
                                        puVar2 = param_2 + (ulonglong)uVar6 * 2;
                                        if ((undefined4 *)*puVar2 != &DAT_144d361f4) {
                                          *(undefined4 *)(puVar2 + 1) = 0;
                                          uVar7 = uVar4;
                                          if (*(int *)((longlong)puVar2 + 0xc) != 2) {
                                            TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
                                            uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
                                          }
                                          iVar3 = (int)uVar7 + 2;
                                          *(int *)(puVar2 + 1) = iVar3;
                                          if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
                                            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
                                          }
                                          *(undefined4 *)*puVar2 = 0x53;
                                        }
                                        uVar6 = uVar5 + 0x13;
                                        uVar7 = (ulonglong)uVar6;
                                        if (uVar6 < param_3) {
                                          param_1[uVar7] = 0x54;
                                          puVar2 = param_2 + (ulonglong)uVar6 * 2;
                                          if ((undefined4 *)*puVar2 != &DAT_144d36204) {
                                            *(undefined4 *)(puVar2 + 1) = 0;
                                            uVar7 = uVar4;
                                            if (*(int *)((longlong)puVar2 + 0xc) != 2) {
                                              TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
                                              uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
                                            }
                                            iVar3 = (int)uVar7 + 2;
                                            *(int *)(puVar2 + 1) = iVar3;
                                            if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
                                              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
                                            }
                                            *(undefined4 *)*puVar2 = 0x54;
                                          }
                                          uVar6 = uVar5 + 0x14;
                                          uVar7 = (ulonglong)uVar6;
                                          if (uVar6 < param_3) {
                                            param_1[uVar7] = 0x55;
                                            puVar2 = param_2 + (ulonglong)uVar6 * 2;
                                            if ((undefined4 *)*puVar2 != &DAT_144d3621c) {
                                              *(undefined4 *)(puVar2 + 1) = 0;
                                              uVar7 = uVar4;
                                              if (*(int *)((longlong)puVar2 + 0xc) != 2) {
                                                TArray<wchar_t,FDefaultAllocator>::ResizeTo
                                                          (puVar2,2);
                                                uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
                                              }
                                              iVar3 = (int)uVar7 + 2;
                                              *(int *)(puVar2 + 1) = iVar3;
                                              if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
                                                TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                          (puVar2);
                                              }
                                              *(undefined4 *)*puVar2 = 0x55;
                                            }
                                            uVar6 = uVar5 + 0x15;
                                            uVar7 = (ulonglong)uVar6;
                                            if (uVar6 < param_3) {
                                              param_1[uVar7] = 0x56;
                                              puVar2 = param_2 + (ulonglong)uVar6 * 2;
                                              if ((undefined4 *)*puVar2 != &DAT_144d3622c) {
                                                *(undefined4 *)(puVar2 + 1) = 0;
                                                uVar7 = uVar4;
                                                if (*(int *)((longlong)puVar2 + 0xc) != 2) {
                                                  TArray<wchar_t,FDefaultAllocator>::ResizeTo
                                                            (puVar2,2);
                                                  uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
                                                }
                                                iVar3 = (int)uVar7 + 2;
                                                *(int *)(puVar2 + 1) = iVar3;
                                                if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
                                                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                            (puVar2);
                                                }
                                                *(undefined4 *)*puVar2 = 0x56;
                                              }
                                              uVar6 = uVar5 + 0x16;
                                              uVar7 = (ulonglong)uVar6;
                                              if (uVar6 < param_3) {
                                                param_1[uVar7] = 0x57;
                                                puVar2 = param_2 + (ulonglong)uVar6 * 2;
                                                if ((undefined4 *)*puVar2 != &DAT_144d36244) {
                                                  *(undefined4 *)(puVar2 + 1) = 0;
                                                  uVar7 = uVar4;
                                                  if (*(int *)((longlong)puVar2 + 0xc) != 2) {
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeTo
                                                              (puVar2,2);
                                                    uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
                                                  }
                                                  iVar3 = (int)uVar7 + 2;
                                                  *(int *)(puVar2 + 1) = iVar3;
                                                  if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (puVar2);
                                                  }
                                                  *(undefined4 *)*puVar2 = 0x57;
                                                }
                                                uVar6 = uVar5 + 0x17;
                                                uVar7 = (ulonglong)uVar6;
                                                if (uVar6 < param_3) {
                                                  param_1[uVar7] = 0x58;
                                                  puVar2 = param_2 + (ulonglong)uVar6 * 2;
                                                  if ((undefined4 *)*puVar2 != &DAT_144d36254) {
                                                    *(undefined4 *)(puVar2 + 1) = 0;
                                                    uVar7 = uVar4;
                                                    if (*(int *)((longlong)puVar2 + 0xc) != 2) {
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeTo
                                                                (puVar2,2);
                                                      uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
                                                    }
                                                    iVar3 = (int)uVar7 + 2;
                                                    *(int *)(puVar2 + 1) = iVar3;
                                                    if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (puVar2);
                                                    }
                                                    *(undefined4 *)*puVar2 = 0x58;
                                                  }
                                                  uVar6 = uVar5 + 0x18;
                                                  uVar7 = (ulonglong)uVar6;
                                                  if (uVar6 < param_3) {
                                                    param_1[uVar7] = 0x59;
                                                    puVar2 = param_2 + (ulonglong)uVar6 * 2;
                                                    if ((undefined4 *)*puVar2 != &DAT_144d36264) {
                                                      *(undefined4 *)(puVar2 + 1) = 0;
                                                      uVar7 = uVar4;
                                                      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
                                                        TArray<wchar_t,FDefaultAllocator>::ResizeTo
                                                                  (puVar2,2);
                                                        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
                                                      }
                                                      iVar3 = (int)uVar7 + 2;
                                                      *(int *)(puVar2 + 1) = iVar3;
                                                      if (*(int *)((longlong)puVar2 + 0xc) < iVar3)
                                                      {
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(puVar2);
                                                      }
                                                      *(undefined4 *)*puVar2 = 0x59;
                                                    }
                                                    uVar6 = uVar5 + 0x19;
                                                    uVar7 = (ulonglong)uVar6;
                                                    if (uVar6 < param_3) {
                                                      param_1[uVar7] = 0x5a;
                                                      puVar2 = param_2 + (ulonglong)uVar6 * 2;
                                                      if ((undefined4 *)*puVar2 != &DAT_144d3627c) {
                                                        *(undefined4 *)(puVar2 + 1) = 0;
                                                        uVar7 = uVar4;
                                                        if (*(int *)((longlong)puVar2 + 0xc) != 2) {
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeTo(puVar2,2);
                                                          uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
                                                        }
                                                        iVar3 = (int)uVar7 + 2;
                                                        *(int *)(puVar2 + 1) = iVar3;
                                                        if (*(int *)((longlong)puVar2 + 0xc) < iVar3
                                                           ) {
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(puVar2);
                                                        }
                                                        *(undefined4 *)*puVar2 = 0x5a;
                                                      }
                                                      uVar7 = (ulonglong)(uVar5 + 0x1a);
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (param_5 != '\0') {
    uVar5 = (uint)uVar7;
    if (param_3 <= uVar5) {
      return uVar7;
    }
    param_1[uVar7] = 0x61;
    puVar2 = param_2 + uVar7 * 2;
    if ((undefined4 *)*puVar2 != &DAT_144d3628c) {
      *(undefined4 *)(puVar2 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      }
      iVar3 = (int)uVar7 + 2;
      *(int *)(puVar2 + 1) = iVar3;
      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
      }
      *(undefined4 *)*puVar2 = 0x41;
    }
    uVar6 = uVar5 + 1;
    if (param_3 <= uVar6) {
      return (ulonglong)uVar6;
    }
    param_1[uVar6] = 0x62;
    puVar2 = param_2 + (ulonglong)uVar6 * 2;
    if ((undefined4 *)*puVar2 != &DAT_144d362bc) {
      *(undefined4 *)(puVar2 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      }
      iVar3 = (int)uVar7 + 2;
      *(int *)(puVar2 + 1) = iVar3;
      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
      }
      *(undefined4 *)*puVar2 = 0x42;
    }
    uVar6 = uVar5 + 2;
    if (param_3 <= uVar6) {
      return (ulonglong)uVar6;
    }
    param_1[uVar6] = 99;
    puVar2 = param_2 + (ulonglong)uVar6 * 2;
    if ((undefined4 *)*puVar2 != &DAT_144d362ec) {
      *(undefined4 *)(puVar2 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      }
      iVar3 = (int)uVar7 + 2;
      *(int *)(puVar2 + 1) = iVar3;
      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
      }
      *(undefined4 *)*puVar2 = 0x43;
    }
    uVar6 = uVar5 + 3;
    if (param_3 <= uVar6) {
      return (ulonglong)uVar6;
    }
    param_1[uVar6] = 100;
    puVar2 = param_2 + (ulonglong)uVar6 * 2;
    if ((undefined4 *)*puVar2 != &DAT_144d36314) {
      *(undefined4 *)(puVar2 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      }
      iVar3 = (int)uVar7 + 2;
      *(int *)(puVar2 + 1) = iVar3;
      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
      }
      *(undefined4 *)*puVar2 = 0x44;
    }
    uVar6 = uVar5 + 4;
    if (param_3 <= uVar6) {
      return (ulonglong)uVar6;
    }
    param_1[uVar6] = 0x65;
    puVar2 = param_2 + (ulonglong)uVar6 * 2;
    if ((undefined4 *)*puVar2 != &DAT_144d3632c) {
      *(undefined4 *)(puVar2 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      }
      iVar3 = (int)uVar7 + 2;
      *(int *)(puVar2 + 1) = iVar3;
      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
      }
      *(undefined4 *)*puVar2 = 0x45;
    }
    uVar6 = uVar5 + 5;
    if (param_3 <= uVar6) {
      return (ulonglong)uVar6;
    }
    param_1[uVar6] = 0x66;
    puVar2 = param_2 + (ulonglong)uVar6 * 2;
    if ((undefined4 *)*puVar2 != &DAT_144d36344) {
      *(undefined4 *)(puVar2 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      }
      iVar3 = (int)uVar7 + 2;
      *(int *)(puVar2 + 1) = iVar3;
      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
      }
      *(undefined4 *)*puVar2 = 0x46;
    }
    uVar6 = uVar5 + 6;
    if (param_3 <= uVar6) {
      return (ulonglong)uVar6;
    }
    param_1[uVar6] = 0x67;
    puVar2 = param_2 + (ulonglong)uVar6 * 2;
    if ((undefined4 *)*puVar2 != &DAT_144d36374) {
      *(undefined4 *)(puVar2 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      }
      iVar3 = (int)uVar7 + 2;
      *(int *)(puVar2 + 1) = iVar3;
      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
      }
      *(undefined4 *)*puVar2 = 0x47;
    }
    uVar6 = uVar5 + 7;
    if (param_3 <= uVar6) {
      return (ulonglong)uVar6;
    }
    param_1[uVar6] = 0x68;
    puVar2 = param_2 + (ulonglong)uVar6 * 2;
    if ((undefined4 *)*puVar2 != &DAT_144d363a4) {
      *(undefined4 *)(puVar2 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      }
      iVar3 = (int)uVar7 + 2;
      *(int *)(puVar2 + 1) = iVar3;
      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
      }
      *(undefined4 *)*puVar2 = 0x48;
    }
    uVar6 = uVar5 + 8;
    if (param_3 <= uVar6) {
      return (ulonglong)uVar6;
    }
    param_1[uVar6] = 0x69;
    puVar2 = param_2 + (ulonglong)uVar6 * 2;
    if ((undefined4 *)*puVar2 != &DAT_144d363e4) {
      *(undefined4 *)(puVar2 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      }
      iVar3 = (int)uVar7 + 2;
      *(int *)(puVar2 + 1) = iVar3;
      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
      }
      *(undefined4 *)*puVar2 = 0x49;
    }
    uVar6 = uVar5 + 9;
    if (param_3 <= uVar6) {
      return (ulonglong)uVar6;
    }
    param_1[uVar6] = 0x6a;
    puVar2 = param_2 + (ulonglong)uVar6 * 2;
    if ((undefined4 *)*puVar2 != &DAT_144d363f4) {
      *(undefined4 *)(puVar2 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      }
      iVar3 = (int)uVar7 + 2;
      *(int *)(puVar2 + 1) = iVar3;
      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
      }
      *(undefined4 *)*puVar2 = 0x4a;
    }
    uVar6 = uVar5 + 10;
    if (param_3 <= uVar6) {
      return (ulonglong)uVar6;
    }
    param_1[uVar6] = 0x6b;
    puVar2 = param_2 + (ulonglong)uVar6 * 2;
    if ((undefined4 *)*puVar2 != &DAT_144d3640c) {
      *(undefined4 *)(puVar2 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      }
      iVar3 = (int)uVar7 + 2;
      *(int *)(puVar2 + 1) = iVar3;
      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
      }
      *(undefined4 *)*puVar2 = 0x4b;
    }
    uVar6 = uVar5 + 0xb;
    if (param_3 <= uVar6) {
      return (ulonglong)uVar6;
    }
    param_1[uVar6] = 0x6c;
    puVar2 = param_2 + (ulonglong)uVar6 * 2;
    if ((undefined4 *)*puVar2 != &DAT_144d36424) {
      *(undefined4 *)(puVar2 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      }
      iVar3 = (int)uVar7 + 2;
      *(int *)(puVar2 + 1) = iVar3;
      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
      }
      *(undefined4 *)*puVar2 = 0x4c;
    }
    uVar6 = uVar5 + 0xc;
    if (param_3 <= uVar6) {
      return (ulonglong)uVar6;
    }
    param_1[uVar6] = 0x6d;
    puVar2 = param_2 + (ulonglong)uVar6 * 2;
    if ((undefined4 *)*puVar2 != &DAT_144d36434) {
      *(undefined4 *)(puVar2 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      }
      iVar3 = (int)uVar7 + 2;
      *(int *)(puVar2 + 1) = iVar3;
      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
      }
      *(undefined4 *)*puVar2 = 0x4d;
    }
    uVar6 = uVar5 + 0xd;
    if (param_3 <= uVar6) {
      return (ulonglong)uVar6;
    }
    param_1[uVar6] = 0x6e;
    puVar2 = param_2 + (ulonglong)uVar6 * 2;
    if ((undefined4 *)*puVar2 != &DAT_144d3644c) {
      *(undefined4 *)(puVar2 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      }
      iVar3 = (int)uVar7 + 2;
      *(int *)(puVar2 + 1) = iVar3;
      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
      }
      *(undefined4 *)*puVar2 = 0x4e;
    }
    uVar6 = uVar5 + 0xe;
    if (param_3 <= uVar6) {
      return (ulonglong)uVar6;
    }
    param_1[uVar6] = 0x6f;
    puVar2 = param_2 + (ulonglong)uVar6 * 2;
    if ((undefined4 *)*puVar2 != &DAT_144d36464) {
      *(undefined4 *)(puVar2 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      }
      iVar3 = (int)uVar7 + 2;
      *(int *)(puVar2 + 1) = iVar3;
      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
      }
      *(undefined4 *)*puVar2 = 0x4f;
    }
    uVar6 = uVar5 + 0xf;
    if (param_3 <= uVar6) {
      return (ulonglong)uVar6;
    }
    param_1[uVar6] = 0x70;
    puVar2 = param_2 + (ulonglong)uVar6 * 2;
    if ((undefined4 *)*puVar2 != &DAT_144d36474) {
      *(undefined4 *)(puVar2 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      }
      iVar3 = (int)uVar7 + 2;
      *(int *)(puVar2 + 1) = iVar3;
      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
      }
      *(undefined4 *)*puVar2 = 0x50;
    }
    uVar6 = uVar5 + 0x10;
    if (param_3 <= uVar6) {
      return (ulonglong)uVar6;
    }
    param_1[uVar6] = 0x71;
    puVar2 = param_2 + (ulonglong)uVar6 * 2;
    if ((undefined4 *)*puVar2 != &DAT_144d364a4) {
      *(undefined4 *)(puVar2 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      }
      iVar3 = (int)uVar7 + 2;
      *(int *)(puVar2 + 1) = iVar3;
      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
      }
      *(undefined4 *)*puVar2 = 0x51;
    }
    uVar6 = uVar5 + 0x11;
    if (param_3 <= uVar6) {
      return (ulonglong)uVar6;
    }
    param_1[uVar6] = 0x72;
    puVar2 = param_2 + (ulonglong)uVar6 * 2;
    if ((undefined4 *)*puVar2 != &DAT_144d364b4) {
      *(undefined4 *)(puVar2 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      }
      iVar3 = (int)uVar7 + 2;
      *(int *)(puVar2 + 1) = iVar3;
      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
      }
      *(undefined4 *)*puVar2 = 0x52;
    }
    uVar6 = uVar5 + 0x12;
    if (param_3 <= uVar6) {
      return (ulonglong)uVar6;
    }
    param_1[uVar6] = 0x73;
    puVar2 = param_2 + (ulonglong)uVar6 * 2;
    if ((undefined4 *)*puVar2 != &DAT_144d364e4) {
      *(undefined4 *)(puVar2 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      }
      iVar3 = (int)uVar7 + 2;
      *(int *)(puVar2 + 1) = iVar3;
      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
      }
      *(undefined4 *)*puVar2 = 0x53;
    }
    uVar6 = uVar5 + 0x13;
    if (param_3 <= uVar6) {
      return (ulonglong)uVar6;
    }
    param_1[uVar6] = 0x74;
    puVar2 = param_2 + (ulonglong)uVar6 * 2;
    if ((undefined4 *)*puVar2 != &DAT_144d364f4) {
      *(undefined4 *)(puVar2 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      }
      iVar3 = (int)uVar7 + 2;
      *(int *)(puVar2 + 1) = iVar3;
      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
      }
      *(undefined4 *)*puVar2 = 0x54;
    }
    uVar6 = uVar5 + 0x14;
    if (param_3 <= uVar6) {
      return (ulonglong)uVar6;
    }
    param_1[uVar6] = 0x75;
    puVar2 = param_2 + (ulonglong)uVar6 * 2;
    if ((undefined4 *)*puVar2 != &DAT_144d36524) {
      *(undefined4 *)(puVar2 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      }
      iVar3 = (int)uVar7 + 2;
      *(int *)(puVar2 + 1) = iVar3;
      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
      }
      *(undefined4 *)*puVar2 = 0x55;
    }
    uVar6 = uVar5 + 0x15;
    if (param_3 <= uVar6) {
      return (ulonglong)uVar6;
    }
    param_1[uVar6] = 0x76;
    puVar2 = param_2 + (ulonglong)uVar6 * 2;
    if ((undefined4 *)*puVar2 != &DAT_144d36534) {
      *(undefined4 *)(puVar2 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      }
      iVar3 = (int)uVar7 + 2;
      *(int *)(puVar2 + 1) = iVar3;
      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
      }
      *(undefined4 *)*puVar2 = 0x56;
    }
    uVar6 = uVar5 + 0x16;
    if (param_3 <= uVar6) {
      return (ulonglong)uVar6;
    }
    param_1[uVar6] = 0x77;
    puVar2 = param_2 + (ulonglong)uVar6 * 2;
    if ((undefined4 *)*puVar2 != &DAT_144d3654c) {
      *(undefined4 *)(puVar2 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      }
      iVar3 = (int)uVar7 + 2;
      *(int *)(puVar2 + 1) = iVar3;
      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
      }
      *(undefined4 *)*puVar2 = 0x57;
    }
    uVar6 = uVar5 + 0x17;
    if (param_3 <= uVar6) {
      return (ulonglong)uVar6;
    }
    param_1[uVar6] = 0x78;
    puVar2 = param_2 + (ulonglong)uVar6 * 2;
    if ((undefined4 *)*puVar2 != &DAT_144d36564) {
      *(undefined4 *)(puVar2 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      }
      iVar3 = (int)uVar7 + 2;
      *(int *)(puVar2 + 1) = iVar3;
      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
      }
      *(undefined4 *)*puVar2 = 0x58;
    }
    uVar6 = uVar5 + 0x18;
    if (param_3 <= uVar6) {
      return (ulonglong)uVar6;
    }
    param_1[uVar6] = 0x79;
    puVar2 = param_2 + (ulonglong)uVar6 * 2;
    if ((undefined4 *)*puVar2 != &DAT_144d36574) {
      *(undefined4 *)(puVar2 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      }
      iVar3 = (int)uVar7 + 2;
      *(int *)(puVar2 + 1) = iVar3;
      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
      }
      *(undefined4 *)*puVar2 = 0x59;
    }
    uVar6 = uVar5 + 0x19;
    if (param_3 <= uVar6) {
      return (ulonglong)uVar6;
    }
    param_1[uVar6] = 0x7a;
    puVar2 = param_2 + (ulonglong)uVar6 * 2;
    if ((undefined4 *)*puVar2 != &DAT_144d365a4) {
      *(undefined4 *)(puVar2 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)puVar2 + 0xc) != 2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,2);
        uVar7 = (ulonglong)*(uint *)(puVar2 + 1);
      }
      iVar3 = (int)uVar7 + 2;
      *(int *)(puVar2 + 1) = iVar3;
      if (*(int *)((longlong)puVar2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
      }
      *(undefined4 *)*puVar2 = 0x5a;
    }
    uVar7 = (ulonglong)(uVar5 + 0x1a);
  }
  uVar5 = (uint)uVar7;
  if (uVar5 < param_3) {
    param_1[uVar7] = 0x3b;
    plVar1 = param_2 + uVar7 * 2;
    if ((wchar_t *)*plVar1 != L"Semicolon") {
      *(undefined4 *)(plVar1 + 1) = 0;
      uVar7 = uVar4;
      if (*(int *)((longlong)plVar1 + 0xc) != 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,10);
        uVar7 = (ulonglong)*(uint *)(plVar1 + 1);
      }
      iVar3 = (int)uVar7 + 10;
      *(int *)(plVar1 + 1) = iVar3;
      if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      builtin_wcsncpy((wchar_t *)*plVar1,L"Semicolon",10);
    }
    uVar6 = uVar5 + 1;
    uVar7 = (ulonglong)uVar6;
    if (uVar6 < param_3) {
      param_1[uVar7] = 0x3d;
      plVar1 = param_2 + (ulonglong)uVar6 * 2;
      if ((wchar_t *)*plVar1 != L"Equals") {
        *(undefined4 *)(plVar1 + 1) = 0;
        uVar7 = uVar4;
        if (*(int *)((longlong)plVar1 + 0xc) != 7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,7);
          uVar7 = (ulonglong)*(uint *)(plVar1 + 1);
        }
        iVar3 = (int)uVar7 + 7;
        *(int *)(plVar1 + 1) = iVar3;
        if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
        }
        puVar2 = (undefined8 *)*plVar1;
        *puVar2 = 0x61007500710045;
        *(undefined4 *)(puVar2 + 1) = 0x73006c;
        *(undefined2 *)((longlong)puVar2 + 0xc) = 0;
      }
      uVar6 = uVar5 + 2;
      uVar7 = (ulonglong)uVar6;
      if (uVar6 < param_3) {
        param_1[uVar7] = 0x2c;
        plVar1 = param_2 + (ulonglong)uVar6 * 2;
        if ((wchar_t *)*plVar1 != L"Comma") {
          *(undefined4 *)(plVar1 + 1) = 0;
          uVar7 = uVar4;
          if (*(int *)((longlong)plVar1 + 0xc) != 6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,6);
            uVar7 = (ulonglong)*(uint *)(plVar1 + 1);
          }
          iVar3 = (int)uVar7 + 6;
          *(int *)(plVar1 + 1) = iVar3;
          if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
          }
          puVar2 = (undefined8 *)*plVar1;
          *puVar2 = 0x6d006d006f0043;
          *(undefined4 *)(puVar2 + 1) = 0x61;
        }
        uVar6 = uVar5 + 3;
        uVar7 = (ulonglong)uVar6;
        if (uVar6 < param_3) {
          param_1[uVar7] = 0x2d;
          plVar1 = param_2 + (ulonglong)uVar6 * 2;
          if ((wchar_t *)*plVar1 != L"Hyphen") {
            *(undefined4 *)(plVar1 + 1) = 0;
            uVar7 = uVar4;
            if (*(int *)((longlong)plVar1 + 0xc) != 7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,7);
              uVar7 = (ulonglong)*(uint *)(plVar1 + 1);
            }
            iVar3 = (int)uVar7 + 7;
            *(int *)(plVar1 + 1) = iVar3;
            if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
            }
            puVar2 = (undefined8 *)*plVar1;
            *puVar2 = 0x68007000790048;
            *(undefined4 *)(puVar2 + 1) = 0x6e0065;
            *(undefined2 *)((longlong)puVar2 + 0xc) = 0;
          }
          uVar6 = uVar5 + 4;
          uVar7 = (ulonglong)uVar6;
          if (uVar6 < param_3) {
            param_1[uVar7] = 0x2e;
            plVar1 = param_2 + (ulonglong)uVar6 * 2;
            if ((wchar_t *)*plVar1 != L"Period") {
              *(undefined4 *)(plVar1 + 1) = 0;
              uVar7 = uVar4;
              if (*(int *)((longlong)plVar1 + 0xc) != 7) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,7);
                uVar7 = (ulonglong)*(uint *)(plVar1 + 1);
              }
              iVar3 = (int)uVar7 + 7;
              *(int *)(plVar1 + 1) = iVar3;
              if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
              }
              puVar2 = (undefined8 *)*plVar1;
              *puVar2 = 0x69007200650050;
              *(undefined4 *)(puVar2 + 1) = 0x64006f;
              *(undefined2 *)((longlong)puVar2 + 0xc) = 0;
            }
            uVar6 = uVar5 + 5;
            uVar7 = (ulonglong)uVar6;
            if (uVar6 < param_3) {
              param_1[uVar7] = 0x2f;
              plVar1 = param_2 + (ulonglong)uVar6 * 2;
              if ((wchar_t *)*plVar1 != L"Slash") {
                *(undefined4 *)(plVar1 + 1) = 0;
                uVar7 = uVar4;
                if (*(int *)((longlong)plVar1 + 0xc) != 6) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,6);
                  uVar7 = (ulonglong)*(uint *)(plVar1 + 1);
                }
                iVar3 = (int)uVar7 + 6;
                *(int *)(plVar1 + 1) = iVar3;
                if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
                }
                puVar2 = (undefined8 *)*plVar1;
                *puVar2 = 0x730061006c0053;
                *(undefined4 *)(puVar2 + 1) = 0x68;
              }
              uVar6 = uVar5 + 6;
              uVar7 = (ulonglong)uVar6;
              if (uVar6 < param_3) {
                param_1[uVar7] = 0x60;
                plVar1 = param_2 + (ulonglong)uVar6 * 2;
                if ((wchar_t *)*plVar1 != L"Tilde") {
                  *(undefined4 *)(plVar1 + 1) = 0;
                  uVar7 = uVar4;
                  if (*(int *)((longlong)plVar1 + 0xc) != 6) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,6);
                    uVar7 = (ulonglong)*(uint *)(plVar1 + 1);
                  }
                  iVar3 = (int)uVar7 + 6;
                  *(int *)(plVar1 + 1) = iVar3;
                  if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
                  }
                  puVar2 = (undefined8 *)*plVar1;
                  *puVar2 = 0x64006c00690054;
                  *(undefined4 *)(puVar2 + 1) = 0x65;
                }
                uVar6 = uVar5 + 7;
                uVar7 = (ulonglong)uVar6;
                if (uVar6 < param_3) {
                  param_1[uVar7] = 0x5b;
                  plVar1 = param_2 + (ulonglong)uVar6 * 2;
                  if ((wchar_t *)*plVar1 != L"LeftBracket") {
                    *(undefined4 *)(plVar1 + 1) = 0;
                    uVar7 = uVar4;
                    if (*(int *)((longlong)plVar1 + 0xc) != 0xc) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,0xc);
                      uVar7 = (ulonglong)*(uint *)(plVar1 + 1);
                    }
                    iVar3 = (int)uVar7 + 0xc;
                    *(int *)(plVar1 + 1) = iVar3;
                    if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
                    }
                    builtin_wcsncpy((wchar_t *)*plVar1,L"LeftBracket",0xc);
                  }
                  uVar6 = uVar5 + 8;
                  uVar7 = (ulonglong)uVar6;
                  if (uVar6 < param_3) {
                    param_1[uVar7] = 0x5c;
                    plVar1 = param_2 + (ulonglong)uVar6 * 2;
                    if ((wchar_t *)*plVar1 != L"Backslash") {
                      *(undefined4 *)(plVar1 + 1) = 0;
                      uVar7 = uVar4;
                      if (*(int *)((longlong)plVar1 + 0xc) != 10) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,10);
                        uVar7 = (ulonglong)*(uint *)(plVar1 + 1);
                      }
                      iVar3 = (int)uVar7 + 10;
                      *(int *)(plVar1 + 1) = iVar3;
                      if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
                      }
                      builtin_wcsncpy((wchar_t *)*plVar1,L"Backslash",10);
                    }
                    uVar6 = uVar5 + 9;
                    uVar7 = (ulonglong)uVar6;
                    if (uVar6 < param_3) {
                      param_1[uVar7] = 0x5d;
                      plVar1 = param_2 + (ulonglong)uVar6 * 2;
                      if ((wchar_t *)*plVar1 != L"RightBracket") {
                        *(undefined4 *)(plVar1 + 1) = 0;
                        uVar7 = uVar4;
                        if (*(int *)((longlong)plVar1 + 0xc) != 0xd) {
                          TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,0xd);
                          uVar7 = (ulonglong)*(uint *)(plVar1 + 1);
                        }
                        iVar3 = (int)uVar7 + 0xd;
                        *(int *)(plVar1 + 1) = iVar3;
                        if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
                          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
                        }
                        builtin_wcsncpy((wchar_t *)*plVar1,L"RightBracket",0xd);
                      }
                      uVar6 = uVar5 + 10;
                      uVar7 = (ulonglong)uVar6;
                      if (uVar6 < param_3) {
                        param_1[uVar7] = 0x27;
                        plVar1 = param_2 + (ulonglong)uVar6 * 2;
                        if ((wchar_t *)*plVar1 != L"Apostrophe") {
                          *(undefined4 *)(plVar1 + 1) = 0;
                          uVar7 = uVar4;
                          if (*(int *)((longlong)plVar1 + 0xc) != 0xb) {
                            TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,0xb);
                            uVar7 = (ulonglong)*(uint *)(plVar1 + 1);
                          }
                          iVar3 = (int)uVar7 + 0xb;
                          *(int *)(plVar1 + 1) = iVar3;
                          if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
                            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
                          }
                          builtin_wcsncpy((wchar_t *)*plVar1,L"Apostrophe",0xb);
                        }
                        uVar6 = uVar5 + 0xb;
                        uVar7 = (ulonglong)uVar6;
                        if (uVar6 < param_3) {
                          param_1[uVar7] = 0x20;
                          plVar1 = param_2 + (ulonglong)uVar6 * 2;
                          if ((wchar_t *)*plVar1 != L"SpaceBar") {
                            *(undefined4 *)(plVar1 + 1) = 0;
                            uVar7 = uVar4;
                            if (*(int *)((longlong)plVar1 + 0xc) != 9) {
                              TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,9);
                              uVar7 = (ulonglong)*(uint *)(plVar1 + 1);
                            }
                            iVar3 = (int)uVar7 + 9;
                            *(int *)(plVar1 + 1) = iVar3;
                            if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
                              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
                            }
                            builtin_wcsncpy((wchar_t *)*plVar1,L"SpaceBar",9);
                          }
                          uVar6 = uVar5 + 0xc;
                          uVar7 = (ulonglong)uVar6;
                          if (uVar6 < param_3) {
                            param_1[uVar7] = 0x26;
                            plVar1 = param_2 + (ulonglong)uVar6 * 2;
                            if ((wchar_t *)*plVar1 != L"Ampersand") {
                              *(undefined4 *)(plVar1 + 1) = 0;
                              uVar7 = uVar4;
                              if (*(int *)((longlong)plVar1 + 0xc) != 10) {
                                TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,10);
                                uVar7 = (ulonglong)*(uint *)(plVar1 + 1);
                              }
                              iVar3 = (int)uVar7 + 10;
                              *(int *)(plVar1 + 1) = iVar3;
                              if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
                                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
                              }
                              builtin_wcsncpy((wchar_t *)*plVar1,L"Ampersand",10);
                            }
                            uVar6 = uVar5 + 0xd;
                            uVar7 = (ulonglong)uVar6;
                            if (uVar6 < param_3) {
                              param_1[uVar7] = 0x2a;
                              plVar1 = param_2 + (ulonglong)uVar6 * 2;
                              if ((wchar_t *)*plVar1 != L"Asterix") {
                                *(undefined4 *)(plVar1 + 1) = 0;
                                uVar7 = uVar4;
                                if (*(int *)((longlong)plVar1 + 0xc) != 8) {
                                  TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,8);
                                  uVar7 = (ulonglong)*(uint *)(plVar1 + 1);
                                }
                                iVar3 = (int)uVar7 + 8;
                                *(int *)(plVar1 + 1) = iVar3;
                                if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
                                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
                                }
                                builtin_wcsncpy((wchar_t *)*plVar1,L"Asterix",8);
                              }
                              uVar6 = uVar5 + 0xe;
                              uVar7 = (ulonglong)uVar6;
                              if (uVar6 < param_3) {
                                param_1[uVar7] = 0x5e;
                                plVar1 = param_2 + (ulonglong)uVar6 * 2;
                                if ((wchar_t *)*plVar1 != L"Caret") {
                                  *(undefined4 *)(plVar1 + 1) = 0;
                                  uVar7 = uVar4;
                                  if (*(int *)((longlong)plVar1 + 0xc) != 6) {
                                    TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,6);
                                    uVar7 = (ulonglong)*(uint *)(plVar1 + 1);
                                  }
                                  iVar3 = (int)uVar7 + 6;
                                  *(int *)(plVar1 + 1) = iVar3;
                                  if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
                                  }
                                  puVar2 = (undefined8 *)*plVar1;
                                  *puVar2 = 0x65007200610043;
                                  *(undefined4 *)(puVar2 + 1) = 0x74;
                                }
                                uVar6 = uVar5 + 0xf;
                                uVar7 = (ulonglong)uVar6;
                                if (uVar6 < param_3) {
                                  param_1[uVar7] = 0x3a;
                                  plVar1 = param_2 + (ulonglong)uVar6 * 2;
                                  if ((wchar_t *)*plVar1 != L"Colon") {
                                    *(undefined4 *)(plVar1 + 1) = 0;
                                    uVar7 = uVar4;
                                    if (*(int *)((longlong)plVar1 + 0xc) != 6) {
                                      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,6);
                                      uVar7 = (ulonglong)*(uint *)(plVar1 + 1);
                                    }
                                    iVar3 = (int)uVar7 + 6;
                                    *(int *)(plVar1 + 1) = iVar3;
                                    if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
                                    }
                                    puVar2 = (undefined8 *)*plVar1;
                                    *puVar2 = 0x6f006c006f0043;
                                    *(undefined4 *)(puVar2 + 1) = 0x6e;
                                  }
                                  uVar6 = uVar5 + 0x10;
                                  uVar7 = (ulonglong)uVar6;
                                  if (uVar6 < param_3) {
                                    param_1[uVar7] = 0x24;
                                    plVar1 = param_2 + (ulonglong)uVar6 * 2;
                                    if ((wchar_t *)*plVar1 != L"Dollar") {
                                      *(undefined4 *)(plVar1 + 1) = 0;
                                      uVar7 = uVar4;
                                      if (*(int *)((longlong)plVar1 + 0xc) != 7) {
                                        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,7);
                                        uVar7 = (ulonglong)*(uint *)(plVar1 + 1);
                                      }
                                      iVar3 = (int)uVar7 + 7;
                                      *(int *)(plVar1 + 1) = iVar3;
                                      if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
                                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
                                      }
                                      puVar2 = (undefined8 *)*plVar1;
                                      *puVar2 = 0x6c006c006f0044;
                                      *(undefined4 *)(puVar2 + 1) = 0x720061;
                                      *(undefined2 *)((longlong)puVar2 + 0xc) = 0;
                                    }
                                    uVar6 = uVar5 + 0x11;
                                    uVar7 = (ulonglong)uVar6;
                                    if (uVar6 < param_3) {
                                      param_1[uVar7] = 0x21;
                                      plVar1 = param_2 + (ulonglong)uVar6 * 2;
                                      if ((wchar_t *)*plVar1 != L"Exclamation") {
                                        *(undefined4 *)(plVar1 + 1) = 0;
                                        uVar7 = uVar4;
                                        if (*(int *)((longlong)plVar1 + 0xc) != 0xc) {
                                          TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,0xc);
                                          uVar7 = (ulonglong)*(uint *)(plVar1 + 1);
                                        }
                                        iVar3 = (int)uVar7 + 0xc;
                                        *(int *)(plVar1 + 1) = iVar3;
                                        if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
                                          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
                                        }
                                        builtin_wcsncpy((wchar_t *)*plVar1,L"Exclamation",0xc);
                                      }
                                      uVar6 = uVar5 + 0x12;
                                      uVar7 = (ulonglong)uVar6;
                                      if (uVar6 < param_3) {
                                        param_1[uVar7] = 0x28;
                                        plVar1 = param_2 + (ulonglong)uVar6 * 2;
                                        if ((wchar_t *)*plVar1 != L"LeftParantheses") {
                                          *(undefined4 *)(plVar1 + 1) = 0;
                                          uVar7 = uVar4;
                                          if (*(int *)((longlong)plVar1 + 0xc) != 0x10) {
                                            TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,0x10)
                                            ;
                                            uVar7 = (ulonglong)*(uint *)(plVar1 + 1);
                                          }
                                          iVar3 = (int)uVar7 + 0x10;
                                          *(int *)(plVar1 + 1) = iVar3;
                                          if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
                                            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
                                          }
                                          builtin_wcsncpy((wchar_t *)*plVar1,L"LeftParantheses",0x10
                                                         );
                                        }
                                        uVar6 = uVar5 + 0x13;
                                        uVar7 = (ulonglong)uVar6;
                                        if (uVar6 < param_3) {
                                          param_1[uVar7] = 0x29;
                                          plVar1 = param_2 + (ulonglong)uVar6 * 2;
                                          if ((wchar_t *)*plVar1 != L"RightParantheses") {
                                            *(undefined4 *)(plVar1 + 1) = 0;
                                            uVar7 = uVar4;
                                            if (*(int *)((longlong)plVar1 + 0xc) != 0x11) {
                                              TArray<wchar_t,FDefaultAllocator>::ResizeTo
                                                        (plVar1,0x11);
                                              uVar7 = (ulonglong)*(uint *)(plVar1 + 1);
                                            }
                                            iVar3 = (int)uVar7 + 0x11;
                                            *(int *)(plVar1 + 1) = iVar3;
                                            if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
                                              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
                                            }
                                            builtin_wcsncpy((wchar_t *)*plVar1,L"RightParantheses",
                                                            0x11);
                                          }
                                          uVar6 = uVar5 + 0x14;
                                          uVar7 = (ulonglong)uVar6;
                                          if (uVar6 < param_3) {
                                            param_1[uVar7] = 0x22;
                                            plVar1 = param_2 + (ulonglong)uVar6 * 2;
                                            if ((wchar_t *)*plVar1 != L"Quote") {
                                              *(undefined4 *)(plVar1 + 1) = 0;
                                              uVar7 = uVar4;
                                              if (*(int *)((longlong)plVar1 + 0xc) != 6) {
                                                TArray<wchar_t,FDefaultAllocator>::ResizeTo
                                                          (plVar1,6);
                                                uVar7 = (ulonglong)*(uint *)(plVar1 + 1);
                                              }
                                              iVar3 = (int)uVar7 + 6;
                                              *(int *)(plVar1 + 1) = iVar3;
                                              if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
                                                TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                          (plVar1);
                                              }
                                              puVar2 = (undefined8 *)*plVar1;
                                              *puVar2 = 0x74006f00750051;
                                              *(undefined4 *)(puVar2 + 1) = 0x65;
                                            }
                                            uVar6 = uVar5 + 0x15;
                                            uVar7 = (ulonglong)uVar6;
                                            if (uVar6 < param_3) {
                                              param_1[uVar7] = 0x5f;
                                              plVar1 = param_2 + (ulonglong)uVar6 * 2;
                                              if ((wchar_t *)*plVar1 != L"Underscore") {
                                                *(undefined4 *)(plVar1 + 1) = 0;
                                                uVar7 = uVar4;
                                                if (*(int *)((longlong)plVar1 + 0xc) != 0xb) {
                                                  TArray<wchar_t,FDefaultAllocator>::ResizeTo
                                                            (plVar1,0xb);
                                                  uVar7 = (ulonglong)*(uint *)(plVar1 + 1);
                                                }
                                                iVar3 = (int)uVar7 + 0xb;
                                                *(int *)(plVar1 + 1) = iVar3;
                                                if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
                                                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                            (plVar1);
                                                }
                                                builtin_wcsncpy((wchar_t *)*plVar1,L"Underscore",0xb
                                                               );
                                              }
                                              uVar6 = uVar5 + 0x16;
                                              uVar7 = (ulonglong)uVar6;
                                              if (uVar6 < param_3) {
                                                param_1[uVar7] = 0xe0;
                                                plVar1 = param_2 + (ulonglong)uVar6 * 2;
                                                if ((wchar_t *)*plVar1 != L"A_AccentGrave") {
                                                  *(undefined4 *)(plVar1 + 1) = 0;
                                                  uVar7 = uVar4;
                                                  if (*(int *)((longlong)plVar1 + 0xc) != 0xe) {
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeTo
                                                              (plVar1,0xe);
                                                    uVar7 = (ulonglong)*(uint *)(plVar1 + 1);
                                                  }
                                                  iVar3 = (int)uVar7 + 0xe;
                                                  *(int *)(plVar1 + 1) = iVar3;
                                                  if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
                                                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                              (plVar1);
                                                  }
                                                  builtin_wcsncpy((wchar_t *)*plVar1,
                                                                  L"A_AccentGrave",0xe);
                                                }
                                                uVar6 = uVar5 + 0x17;
                                                uVar7 = (ulonglong)uVar6;
                                                if (uVar6 < param_3) {
                                                  param_1[uVar7] = 0xe7;
                                                  plVar1 = param_2 + (ulonglong)uVar6 * 2;
                                                  if ((wchar_t *)*plVar1 != L"C_Cedille") {
                                                    *(undefined4 *)(plVar1 + 1) = 0;
                                                    uVar7 = uVar4;
                                                    if (*(int *)((longlong)plVar1 + 0xc) != 10) {
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeTo
                                                                (plVar1,10);
                                                      uVar7 = (ulonglong)*(uint *)(plVar1 + 1);
                                                    }
                                                    iVar3 = (int)uVar7 + 10;
                                                    *(int *)(plVar1 + 1) = iVar3;
                                                    if (*(int *)((longlong)plVar1 + 0xc) < iVar3) {
                                                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow
                                                                (plVar1);
                                                    }
                                                    builtin_wcsncpy((wchar_t *)*plVar1,L"C_Cedille",
                                                                    10);
                                                  }
                                                  uVar6 = uVar5 + 0x18;
                                                  uVar7 = (ulonglong)uVar6;
                                                  if (uVar6 < param_3) {
                                                    param_1[uVar7] = 0xe9;
                                                    plVar1 = param_2 + (ulonglong)uVar6 * 2;
                                                    if ((wchar_t *)*plVar1 != L"E_AccentAigu") {
                                                      *(undefined4 *)(plVar1 + 1) = 0;
                                                      uVar7 = uVar4;
                                                      if (*(int *)((longlong)plVar1 + 0xc) != 0xd) {
                                                        TArray<wchar_t,FDefaultAllocator>::ResizeTo
                                                                  (plVar1,0xd);
                                                        uVar7 = (ulonglong)*(uint *)(plVar1 + 1);
                                                      }
                                                      iVar3 = (int)uVar7 + 0xd;
                                                      *(int *)(plVar1 + 1) = iVar3;
                                                      if (*(int *)((longlong)plVar1 + 0xc) < iVar3)
                                                      {
                                                        TArray<wchar_t,FDefaultAllocator>::
                                                        ResizeGrow(plVar1);
                                                      }
                                                      builtin_wcsncpy((wchar_t *)*plVar1,
                                                                      L"E_AccentAigu",0xd);
                                                    }
                                                    uVar6 = uVar5 + 0x19;
                                                    uVar7 = (ulonglong)uVar6;
                                                    if (uVar6 < param_3) {
                                                      param_1[uVar7] = 0xe8;
                                                      plVar1 = param_2 + (ulonglong)uVar6 * 2;
                                                      if ((wchar_t *)*plVar1 != L"E_AccentGrave") {
                                                        *(undefined4 *)(plVar1 + 1) = 0;
                                                        if (*(int *)((longlong)plVar1 + 0xc) != 0xe)
                                                        {
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeTo(plVar1,0xe);
                                                          uVar4 = (ulonglong)*(uint *)(plVar1 + 1);
                                                        }
                                                        iVar3 = (int)uVar4 + 0xe;
                                                        *(int *)(plVar1 + 1) = iVar3;
                                                        if (*(int *)((longlong)plVar1 + 0xc) < iVar3
                                                           ) {
                                                          TArray<wchar_t,FDefaultAllocator>::
                                                          ResizeGrow(plVar1);
                                                        }
                                                        builtin_wcsncpy((wchar_t *)*plVar1,
                                                                        L"E_AccentGrave",0xe);
                                                      }
                                                      uVar6 = uVar5 + 0x1a;
                                                      uVar7 = (ulonglong)uVar6;
                                                      if (uVar6 < param_3) {
                                                        param_1[uVar7] = 0xa7;
                                                        plVar1 = param_2 + (ulonglong)uVar6 * 2;
                                                        if ((wchar_t *)*plVar1 != L"Section") {
                                                          *(undefined4 *)(plVar1 + 1) = 0;
                                                          if (*(int *)((longlong)plVar1 + 0xc) != 8)
                                                          {
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeTo(plVar1,8);
                                                            iVar8 = (int)plVar1[1];
                                                          }
                                                          *(int *)(plVar1 + 1) = iVar8 + 8;
                                                          if (*(int *)((longlong)plVar1 + 0xc) <
                                                              iVar8 + 8) {
                                                            TArray<wchar_t,FDefaultAllocator>::
                                                            ResizeGrow(plVar1,iVar8);
                                                          }
                                                          builtin_wcsncpy((wchar_t *)*plVar1,
                                                                          L"Section",8);
                                                        }
                                                        uVar7 = (ulonglong)(uVar5 + 0x1b);
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar7;
}



// FUNCTION 1417b2ae0 ImportTextItem body=137 status=ok
// SIG undefined ImportTextItem(void)

undefined8 FKey::ImportTextItem(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined2 *local_20;
  undefined8 local_18;
  
  local_20 = (undefined2 *)0x0;
  local_18 = 0;
  lVar1 = UPropertyHelpers::ReadToken(*param_2,&local_20,0);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    *param_2 = lVar1;
    puVar2 = &DAT_143f3eda8;
    if ((int)local_18 != 0) {
      puVar2 = local_20;
    }
    FName::FName(&local_28,puVar2,1);
    *param_1 = local_28;
    FUN_1417c8c70(param_1);
    uVar3 = 1;
  }
  if (local_20 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar3;
}



// FUNCTION 1417b2b70 FUN_1417b2b70 body=2042 status=ok
// SIG undefined FUN_1417b2b70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1417b2b70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined2 *puVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_2a88 [32];
  undefined1 local_2a68;
  longlong local_2a58;
  longlong local_2a50;
  longlong *plStack_2a48;
  uint local_2a40;
  longlong local_2a38;
  undefined8 local_2a30;
  undefined8 local_2a28;
  longlong local_2a20;
  longlong local_2a18;
  longlong *plStack_2a10;
  undefined1 local_2a08 [8];
  undefined1 local_2a00 [8];
  longlong *local_29f8;
  undefined1 local_29e8;
  longlong *local_29e0;
  int local_29d8;
  undefined1 local_29d0 [8];
  longlong *local_29c8;
  undefined1 local_29b8;
  longlong *local_29b0;
  int local_29a8;
  undefined1 *local_29a0;
  longlong *local_2998;
  undefined1 *local_2990;
  longlong *local_2988;
  longlong local_2980;
  longlong local_2978;
  longlong *local_2970;
  undefined8 local_2968;
  byte local_2960;
  undefined1 local_295f;
  undefined1 local_2958 [24];
  undefined1 local_2940;
  undefined8 local_2938;
  undefined4 local_2930;
  undefined1 local_2928 [24];
  undefined1 local_2910;
  undefined8 local_2908;
  undefined4 local_2900;
  longlong local_28f8 [2];
  longlong *local_28e8;
  undefined1 local_28e0 [8];
  longlong *local_28d8;
  undefined1 local_28d0 [8];
  longlong *local_28c8;
  undefined1 local_28c0 [8];
  longlong *local_28b8;
  longlong local_28b0 [3];
  undefined1 local_2898 [8];
  longlong *local_2890;
  undefined1 local_2880 [8];
  longlong *local_2878;
  longlong local_2868 [3];
  undefined1 local_2850 [8];
  longlong *local_2848;
  undefined1 local_2838 [1024];
  undefined1 local_2438 [1024];
  undefined8 local_2038;
  int local_2030;
  undefined1 auStack_202c [4068];
  longlong local_1048 [3];
  undefined8 local_1030;
  longlong local_48 [4];
  
  local_48[3] = 0x1417b2b9a;
  local_48[2] = DAT_1468387a8 ^ (ulonglong)auStack_2a88;
  bVar5 = false;
  bVar4 = false;
  local_2a40 = 0;
  lVar17 = (longlong)&local_1030 + 4;
  lVar12 = 0x100;
  do {
    *(undefined8 *)(lVar17 + -0xc) = 0;
    *(undefined8 *)(lVar17 + -4) = 0;
    lVar17 = lVar17 + 0x10;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  lVar12 = 0x100;
  lVar17 = (longlong)auStack_202c;
  do {
    *(undefined8 *)(lVar17 + 0xfffffffffffffff4) = 0;
    *(undefined8 *)(lVar17 + 0xfffffffffffffffc) = 0;
    lVar17 = lVar17 + 0x10;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  local_2a68 = 0;
  local_2a38 = param_1;
  uVar6 = FGenericPlatformInput::GetStandardPrintableKeyMap(local_2438,&local_2038,0x100,1);
  local_2a40 = uVar6;
  uVar7 = FWindowsPlatformInput::GetKeyMap(local_2838,local_1048 + 2,0x100);
  lVar17 = local_2a38;
  if (uVar7 != 0) {
    local_2998 = &local_2a58;
    plVar11 = local_1048;
    local_2a30 = 0;
    puVar15 = local_2838;
    uVar16 = (ulonglong)uVar7;
    do {
      plVar11 = plVar11 + 2;
      if ((int)plVar11[1] == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = (undefined2 *)*plVar11;
      }
      FName::FName(&local_2a58,puVar13,1);
      local_2a50 = 0;
      plStack_2a48 = (longlong *)0x0;
      if (local_2a58 == 0) {
        bVar18 = false;
      }
      else {
        local_28b0[0] = local_2a58;
        local_28b0[1] = 0;
        local_28b0[2] = 0;
        plVar8 = (longlong *)FUN_1417ae140(local_28e0,local_28b0);
        if (&local_2a50 != plVar8) {
          local_2a50 = *plVar8;
          *plVar8 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_2a48,plVar8 + 1);
        }
        plVar8 = local_28d8;
        if (local_28d8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_28d8 + 1;
          lVar12 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_28d8)(local_28d8);
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
        bVar18 = local_2a50 != 0;
      }
      if (!bVar18) {
        if (local_2a50 == 0) {
          local_28f8[0] = local_2a58;
          local_28f8[1] = 0;
          local_28e8 = plStack_2a48;
          if (plStack_2a48 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_2a48 + 1) = (int)plStack_2a48[1] + 1;
            UNLOCK();
          }
          plVar8 = (longlong *)FUN_1417ae140(local_28d0,local_28f8);
          if (&local_2a50 != plVar8) {
            local_2a50 = *plVar8;
            *plVar8 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_2a48,plVar8 + 1);
          }
          plVar8 = local_28c8;
          if (local_28c8 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_28c8 + 1;
            lVar12 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
              (**(code **)*local_28c8)(local_28c8);
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
          if (local_2a50 != 0) goto LAB_1417b2dfe;
          bVar4 = true;
          puVar10 = (undefined1 *)FText::FromName(local_2850,&local_2a58);
        }
        else {
LAB_1417b2dfe:
          bVar5 = true;
          uVar9 = TAttribute<FText>::Get(local_2a50 + 0x28);
          FText::FText(local_2898,uVar9);
          puVar10 = local_2898;
        }
        FText::FText(local_2880,puVar10);
        plVar8 = local_2848;
        if ((bVar4) && (bVar4 = false, local_2848 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_2848 + 1;
          lVar12 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_2848)(local_2848);
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
        plVar8 = local_2890;
        if ((bVar5) && (bVar5 = false, local_2890 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_2890 + 1;
          lVar12 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_2890)(local_2890);
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
        FText::FText(local_29d0,local_2880);
        local_29b8 = 1;
        local_29b0 = (longlong *)0x0;
        local_29a8 = 0;
        FText::FText(local_2a00);
        plVar8 = plStack_2a48;
        local_29e8 = 0;
        local_29e0 = (longlong *)0x0;
        local_29d8 = 0;
        local_2a28 = 0;
        if (plStack_2a48 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_2a48 + 1) = (int)plStack_2a48[1] + 1;
          UNLOCK();
        }
        local_2980 = local_2a58;
        local_2978 = local_2a50;
        local_2970 = plStack_2a48;
        if (plStack_2a48 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_2a48 + 1) = (int)plStack_2a48[1] + 1;
          UNLOCK();
        }
        local_2968 = 0;
        FText::FText(local_2958,local_29d0);
        local_2940 = local_29b8;
        local_2938 = 0;
        local_2930 = 0;
        if ((local_29a8 != 0) && (local_29b0 != (longlong *)0x0)) {
          (**(code **)(*local_29b0 + 0x30))(local_29b0,&local_2938);
        }
        FText::FText(local_2928,local_2a00);
        local_2910 = local_29e8;
        local_2908 = 0;
        local_2900 = 0;
        if ((local_29d8 != 0) && (local_29e0 != (longlong *)0x0)) {
          (**(code **)(*local_29e0 + 0x30))(local_29e0,&local_2908);
        }
        local_295f = 0;
        local_2960 = local_2960 & 0xe8 | 8;
        if (((int)local_2968 == 0) && (local_2968._4_4_ == 0)) {
          local_2968 = DAT_1469eae50;
        }
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar8 + 1;
          lVar12 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
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
        FUN_1417ac3d0(&local_2980);
        FKeyDetails::~FKeyDetails(&local_2980);
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_29e0);
        plVar8 = local_29f8;
        if (local_29f8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_29f8 + 1;
          lVar12 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_29f8)(local_29f8);
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
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_29b0);
        plVar8 = local_29c8;
        if (local_29c8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_29c8 + 1;
          lVar12 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_29c8)(local_29c8);
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
        plVar8 = local_2878;
        if (local_2878 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_2878 + 1;
          lVar12 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_2878)(local_2878);
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
      }
      local_29a0 = puVar15;
      FUN_1417ab5a0(lVar17,local_2a08,&local_29a0,0);
      plVar8 = plStack_2a48;
      if (plStack_2a48 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_2a48 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*plStack_2a48)(plStack_2a48);
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
      puVar15 = puVar15 + 4;
      uVar16 = uVar16 - 1;
      param_1 = local_2a38;
      uVar6 = local_2a40;
    } while (uVar16 != 0);
  }
  uVar16 = 0;
  lVar17 = 0x100;
  if (uVar6 != 0) {
    local_2a38 = 0;
    puVar14 = &local_2038;
    do {
      if (*(int *)(puVar14 + 1) == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = (undefined2 *)*puVar14;
      }
      FName::FName(&local_2a20,puVar13,1);
      local_2a18 = 0;
      plStack_2a10 = (longlong *)0x0;
      if (local_2a20 != 0) {
        local_2868[0] = local_2a20;
        local_2868[1] = 0;
        local_2868[2] = 0;
        plVar11 = (longlong *)FUN_1417ae140(local_28c0,local_2868);
        if (&local_2a18 != plVar11) {
          local_2a18 = *plVar11;
          *plVar11 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_2a10,plVar11 + 1);
        }
        plVar11 = local_28b8;
        if (local_28b8 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_28b8 + 1;
          lVar12 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_28b8)(local_28b8);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        if (local_2a18 != 0) {
          local_2990 = local_2438 + uVar16 * 4;
          local_2988 = &local_2a20;
          FUN_1417ab5a0(param_1 + 0x50,&local_2a30,&local_2990,0);
        }
        plVar11 = plStack_2a10;
        if (plStack_2a10 != (longlong *)0x0) {
          LOCK();
          plVar8 = plStack_2a10 + 1;
          lVar12 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plStack_2a10)(plStack_2a10);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
      }
      uVar7 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar7;
      puVar14 = puVar14 + 2;
    } while (uVar7 < uVar6);
  }
  lVar12 = 0x100;
  plVar11 = local_1048 + 2;
  do {
    plVar8 = plVar11 + -2;
    plVar11 = plVar11 + -2;
    lVar12 = lVar12 + -1;
    if (*plVar8 != 0) {
      FMemory::Free();
    }
  } while (lVar12 != 0);
  plVar11 = local_48 + 2;
  do {
    plVar8 = plVar11 + -2;
    plVar11 = plVar11 + -2;
    lVar17 = lVar17 + -1;
    if (*plVar8 != 0) {
      FMemory::Free();
    }
  } while (lVar17 != 0);
  return;
}



// FUNCTION 1417b3370 Initialize body=87112 status=FAIL
// SIG undefined Initialize(void)
/* DECOMPILE FAILED */

// FUNCTION 1417c87c0 FUN_1417c87c0 body=44 status=ok
// SIG undefined FUN_1417c87c0(void)

byte FUN_1417c87c0(longlong param_1)

{
  FKey::ConditionalLookupKeyDetails();
  if (*(longlong *)(param_1 + 8) != 0) {
    return *(byte *)(*(longlong *)(param_1 + 8) + 0x20) >> 3 & 1;
  }
  return 0;
}



// FUNCTION 1417c87f0 IsFloatAxis body=42 status=ok
// SIG undefined IsFloatAxis(void)

undefined8 FKey::IsFloatAxis(longlong param_1)

{
  longlong lVar1;
  
  ConditionalLookupKeyDetails();
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(char *)(lVar1 + 0x21) == '\x01');
  }
  return 0;
}



// FUNCTION 1417c8820 IsGamepadKey body=43 status=ok
// SIG undefined IsGamepadKey(void)

byte FKey::IsGamepadKey(longlong param_1)

{
  ConditionalLookupKeyDetails();
  if (*(longlong *)(param_1 + 8) != 0) {
    return *(byte *)(*(longlong *)(param_1 + 8) + 0x20) >> 1 & 1;
  }
  return 0;
}



// FUNCTION 1417c8850 IsModifierKey body=41 status=ok
// SIG undefined IsModifierKey(void)

byte FKey::IsModifierKey(longlong param_1)

{
  ConditionalLookupKeyDetails();
  if (*(longlong *)(param_1 + 8) != 0) {
    return *(byte *)(*(longlong *)(param_1 + 8) + 0x20) & 1;
  }
  return 0;
}



// FUNCTION 1417c8880 IsMouseButton body=44 status=ok
// SIG undefined IsMouseButton(void)

byte FKey::IsMouseButton(longlong param_1)

{
  ConditionalLookupKeyDetails();
  if (*(longlong *)(param_1 + 8) != 0) {
    return *(byte *)(*(longlong *)(param_1 + 8) + 0x20) >> 2 & 1;
  }
  return 0;
}



// FUNCTION 1417c88b0 IsValid body=48 status=ok
// SIG undefined IsValid(void)

bool FKey::IsValid(longlong *param_1)

{
  if (*param_1 != 0) {
    ConditionalLookupKeyDetails();
    return param_1[1] != 0;
  }
  return false;
}



// FUNCTION 1417c88e0 IsVectorAxis body=42 status=ok
// SIG undefined IsVectorAxis(void)

undefined8 FKey::IsVectorAxis(longlong param_1)

{
  longlong lVar1;
  
  ConditionalLookupKeyDetails();
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(char *)(lVar1 + 0x21) == '\x02');
  }
  return 0;
}


