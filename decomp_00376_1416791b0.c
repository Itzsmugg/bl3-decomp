// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1416791b0 FUN_1416791b0 body=10651 status=ok
// SIG undefined FUN_1416791b0(void)

/* WARNING: Removing unreachable block (ram,0x00014167b3b3) */
/* WARNING: Removing unreachable block (ram,0x0001416795f9) */
/* WARNING: Removing unreachable block (ram,0x00014167ba2f) */

undefined8 FUN_1416791b0(wchar_t **param_1,int param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 extraout_EAX;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  wchar_t *pwVar16;
  uint uVar17;
  wchar_t *pwVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  bool bVar21;
  uint local_res10;
  wchar_t *local_res20;
  wchar_t *local_80;
  int local_78;
  undefined4 local_74;
  wchar_t *local_70;
  wchar_t *local_68;
  undefined8 local_60;
  wchar_t *local_58;
  uint local_50;
  undefined4 local_4c;
  undefined8 local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  
  if (param_2 == 6) {
    iVar2 = *(int *)(param_1 + 1);
    uVar8 = iVar2 - 1;
    iVar10 = iVar2 + -1;
    if (iVar2 == 0) {
      uVar8 = 0xffffffff;
      iVar10 = -1;
    }
    pwVar16 = (wchar_t *)0x0;
    if (iVar2 == 0) {
      iVar10 = 0;
    }
    if (iVar10 == 0x2b) {
      uVar13 = 0;
      if (iVar2 == 0) {
        uVar8 = uVar13;
      }
      uVar17 = uVar8;
      if (uVar8 != 0) {
        uVar17 = uVar13;
      }
      uVar9 = uVar17;
      if ((uVar17 < 0xb) && (uVar9 = uVar8, 10 < uVar8)) {
        uVar9 = 10;
      }
      if (iVar2 == 0) {
        local_res20 = L"";
      }
      else {
        local_res20 = *param_1;
      }
      iVar10 = uVar9 - uVar17;
      local_68 = (wchar_t *)0x0;
      local_res10 = iVar10 + 1;
      if (iVar10 == 0) {
        local_res10 = 0;
      }
      local_60 = (ulonglong)local_res10;
      if (0 < (int)local_res10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
        pwVar19 = local_68;
        local_res10 = (uint)local_60;
        if (0 < (int)(uint)local_60) {
          wcsncpy(local_68,local_res20 + (int)uVar17,(longlong)iVar10);
          pwVar19[iVar10] = L'\0';
        }
      }
      iVar10 = *(int *)(param_1 + 1);
      uVar8 = iVar10 - 1;
      if (iVar10 == 0) {
        uVar8 = uVar13;
      }
      uVar17 = iVar10 - 1;
      if (0xb < uVar8) {
        uVar8 = 0xb;
      }
      if (iVar10 == 0) {
        uVar17 = 0xffffffff;
      }
      uVar9 = 0;
      if (iVar10 == 0) {
        uVar17 = uVar9;
      }
      uVar11 = uVar8;
      if ((uVar8 < 0x16) && (uVar11 = uVar17, 0x15 < uVar17)) {
        uVar11 = 0x15;
      }
      if (iVar10 == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = *param_1;
      }
      iVar10 = uVar11 - uVar8;
      local_58 = (wchar_t *)0x0;
      local_4c = 0;
      local_50 = iVar10 + 1;
      if (iVar10 == 0) {
        local_50 = uVar9;
      }
      pwVar18 = pwVar16;
      uVar17 = local_50;
      if ((0 < (int)local_50) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0), uVar17 = local_50,
         pwVar18 = local_58, 0 < (int)local_50)) {
        wcsncpy(local_58,pwVar19 + (int)uVar8,(longlong)iVar10);
        pwVar18[iVar10] = L'\0';
      }
      iVar10 = *(int *)(param_1 + 1);
      uVar8 = iVar10 - 1;
      if (iVar10 == 0) {
        uVar8 = uVar9;
      }
      if (0xc < uVar8) {
        uVar8 = 0xc;
      }
      uVar11 = iVar10 - 1;
      if (iVar10 == 0) {
        uVar11 = uVar9;
      }
      uVar12 = uVar8;
      if ((uVar8 < 0x17) && (uVar12 = uVar11, 0x16 < uVar11)) {
        uVar12 = 0x16;
      }
      if (iVar10 == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = *param_1;
      }
      iVar10 = uVar12 - uVar8;
      local_58 = (wchar_t *)0x0;
      local_4c = 0;
      local_50 = iVar10 + 1;
      if (iVar10 == 0) {
        local_50 = uVar9;
      }
      pwVar20 = pwVar16;
      uVar11 = local_50;
      if ((0 < (int)local_50) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0), uVar11 = local_50,
         pwVar20 = local_58, 0 < (int)local_50)) {
        wcsncpy(local_58,pwVar19 + (int)uVar8,(longlong)iVar10);
        pwVar20[iVar10] = L'\0';
      }
      iVar10 = *(int *)(param_1 + 1);
      uVar8 = iVar10 - 1;
      if (iVar10 == 0) {
        uVar8 = uVar9;
      }
      if (0xd < uVar8) {
        uVar8 = 0xd;
      }
      uVar9 = iVar10 - 1;
      if (iVar10 == 0) {
        uVar9 = uVar13;
      }
      uVar13 = uVar8;
      if ((uVar8 < 0x18) && (uVar13 = uVar9, 0x17 < uVar9)) {
        uVar13 = 0x17;
      }
      if (iVar10 == 0) {
        local_80 = L"";
      }
      else {
        local_80 = *param_1;
      }
      iVar10 = uVar13 - uVar8;
      local_58 = (wchar_t *)0x0;
      local_4c = 0;
      uVar13 = iVar10 + 1;
      if (iVar10 == 0) {
        uVar13 = 0;
      }
      local_50 = uVar13;
      if ((0 < (int)uVar13) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0), uVar13 = local_50,
         pwVar16 = local_58, 0 < (int)local_50)) {
        wcsncpy(local_58,local_80 + (int)uVar8,(longlong)iVar10);
        pwVar16[iVar10] = L'\0';
      }
      pwVar19 = local_68;
      pwVar7 = L"";
      if (local_res10 != 0) {
        pwVar7 = local_68;
      }
      lVar4 = _wtoi64(pwVar7);
      pwVar7 = L"";
      if (uVar17 != 0) {
        pwVar7 = pwVar18;
      }
      lVar5 = _wtoi64(pwVar7);
      pwVar7 = L"";
      if (uVar11 != 0) {
        pwVar7 = pwVar20;
      }
      lVar6 = _wtoi64(pwVar7);
      local_48._0_4_ = (undefined4)lVar4;
      pwVar7 = L"";
      if (uVar13 != 0) {
        pwVar7 = pwVar16;
      }
      uStack_40 = (int)lVar6;
      local_48._4_4_ = (int)lVar5;
      lVar4 = _wtoi64(pwVar7);
      extraout_EAX = (undefined4)lVar4;
      *param_3 = (undefined4)local_48;
      param_3[1] = local_48._4_4_;
      param_3[2] = uStack_40;
      param_3[3] = extraout_EAX;
      uStack_3c = extraout_EAX;
      if (pwVar16 != (wchar_t *)0x0) {
        FMemory::Free(pwVar16);
      }
      if (pwVar20 != (wchar_t *)0x0) {
        FMemory::Free(pwVar20);
      }
      if (pwVar18 != (wchar_t *)0x0) {
        FMemory::Free(pwVar18);
      }
      if (pwVar19 != (wchar_t *)0x0) {
        FMemory::Free(pwVar19);
      }
      return 1;
    }
    return 0;
  }
  pwVar16 = (wchar_t *)0x0;
  uVar8 = 0;
  local_68 = (wchar_t *)0x0;
  local_60 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68,0x20);
  pwVar18 = L"";
  uVar13 = 0;
  uVar17 = 0;
  pwVar19 = pwVar16;
  if (param_2 == 0) {
    if (&local_68 != param_1) {
      iVar2 = *(int *)(param_1 + 1);
      pwVar20 = *param_1;
      local_60 = CONCAT44(local_60._4_4_,iVar2);
      if ((iVar2 == 0) && (pwVar18 = local_68, iVar10 = 0, local_60._4_4_ == 0)) goto LAB_14167b7f0;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar2);
      _guard_xfg_dispatch_icall_nop(local_68,pwVar20,(longlong)iVar2 * 2);
    }
LAB_14167958a:
    pwVar18 = local_68;
    iVar10 = (uint)local_60;
  }
  else {
    pwVar20 = pwVar16;
    if (param_2 == 1) {
      pwVar7 = *param_1;
      if ((((pwVar7[8] != L'-') || (pwVar7[0xd] != L'-')) || (pwVar7[0x12] != L'-')) ||
         (pwVar7[0x17] != L'-')) goto LAB_14167b814;
      iVar10 = *(int *)(param_1 + 1);
      uVar9 = iVar10 - 1;
      if (iVar10 == 0) {
        uVar9 = uVar13;
      }
      if (8 < uVar9) {
        uVar9 = 8;
      }
      local_58 = (wchar_t *)0x0;
      local_4c = 0;
      if (iVar10 != 0) {
        pwVar18 = pwVar7;
      }
      uVar11 = uVar9 + 1;
      if (uVar9 == 0) {
        uVar11 = uVar8;
      }
      bVar21 = uVar11 == 0;
      pwVar7 = pwVar16;
      local_50 = uVar11;
      if (0 < (int)uVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
        uVar11 = local_50;
        pwVar7 = local_58;
        bVar21 = local_50 == 0;
        if (0 < (int)local_50) {
          wcsncpy(local_58,pwVar18,(longlong)(int)uVar9);
          bVar21 = uVar11 == 0;
          pwVar7[(int)uVar9] = L'\0';
        }
      }
      uVar1 = local_60;
      iVar2 = (uint)local_60;
      iVar10 = (uint)local_60;
      if ((!bVar21) && (iVar14 = uVar11 - 1, iVar14 != 0)) {
        lVar4 = (longlong)(int)(uint)local_60;
        iVar10 = (uint)local_60 + ((uint)local_60 == 0) + iVar14;
        local_60 = CONCAT44(local_60._4_4_,iVar10);
        if (local_60._4_4_ < iVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar1 & 0xffffffff);
          iVar10 = (uint)local_60;
        }
        pwVar18 = local_68 + (lVar4 - (ulonglong)(iVar2 != 0));
        _guard_xfg_dispatch_icall_nop(pwVar18,pwVar7,(longlong)iVar14 * 2);
        pwVar18[iVar14] = L'\0';
      }
      if (pwVar7 != (wchar_t *)0x0) {
        FMemory::Free(pwVar7);
      }
      iVar2 = *(int *)(param_1 + 1);
      uVar9 = iVar2 - 1;
      if (iVar2 == 0) {
        uVar9 = uVar13;
      }
      if (9 < uVar9) {
        uVar9 = 9;
      }
      uVar11 = iVar2 - 1;
      if (iVar2 == 0) {
        uVar11 = uVar13;
      }
      uVar12 = uVar9;
      if ((uVar9 < 0xe) && (uVar12 = uVar11, 0xd < uVar11)) {
        uVar12 = 0xd;
      }
      if (iVar2 == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = *param_1;
      }
      iVar2 = uVar12 - uVar9;
      local_58 = (wchar_t *)0x0;
      local_4c = 0;
      uVar11 = iVar2 + 1;
      if (iVar2 == 0) {
        uVar11 = uVar8;
      }
      bVar21 = uVar11 == 0;
      pwVar7 = pwVar16;
      local_50 = uVar11;
      if (0 < (int)uVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
        uVar11 = local_50;
        pwVar7 = local_58;
        bVar21 = local_50 == 0;
        if (0 < (int)local_50) {
          wcsncpy(local_58,pwVar18 + (int)uVar9,(longlong)iVar2);
          bVar21 = uVar11 == 0;
          pwVar7[iVar2] = L'\0';
        }
      }
      iVar2 = iVar10;
      if ((!bVar21) && (iVar14 = uVar11 - 1, iVar14 != 0)) {
        iVar2 = (uint)(iVar10 == 0) + iVar14 + iVar10;
        local_60 = CONCAT44(local_60._4_4_,iVar2);
        if (local_60._4_4_ < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar10);
          iVar2 = (uint)local_60;
        }
        pwVar18 = local_68 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0));
        _guard_xfg_dispatch_icall_nop(pwVar18,pwVar7,(longlong)iVar14 * 2);
        pwVar18[iVar14] = L'\0';
      }
      if (pwVar7 != (wchar_t *)0x0) {
        FMemory::Free(pwVar7);
      }
      iVar10 = *(int *)(param_1 + 1);
      uVar9 = iVar10 - 1;
      if (iVar10 == 0) {
        uVar9 = uVar13;
      }
      if (0xe < uVar9) {
        uVar9 = 0xe;
      }
      uVar11 = iVar10 - 1;
      if (iVar10 == 0) {
        uVar11 = uVar13;
      }
      uVar12 = uVar9;
      if ((uVar9 < 0x13) && (uVar12 = uVar11, 0x12 < uVar11)) {
        uVar12 = 0x12;
      }
      if (iVar10 == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = *param_1;
      }
      iVar10 = uVar12 - uVar9;
      local_58 = (wchar_t *)0x0;
      local_4c = 0;
      uVar11 = iVar10 + 1;
      if (iVar10 == 0) {
        uVar11 = uVar8;
      }
      bVar21 = uVar11 == 0;
      pwVar7 = pwVar16;
      local_50 = uVar11;
      if (0 < (int)uVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
        uVar11 = local_50;
        pwVar7 = local_58;
        bVar21 = local_50 == 0;
        if (0 < (int)local_50) {
          wcsncpy(local_58,pwVar18 + (int)uVar9,(longlong)iVar10);
          bVar21 = uVar11 == 0;
          pwVar7[iVar10] = L'\0';
        }
      }
      iVar14 = iVar2;
      if ((!bVar21) && (iVar10 = uVar11 - 1, iVar10 != 0)) {
        iVar14 = (uint)(iVar2 == 0) + iVar10 + iVar2;
        local_60 = CONCAT44(local_60._4_4_,iVar14);
        if (local_60._4_4_ < iVar14) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar2);
          iVar14 = (uint)local_60;
        }
        pwVar18 = local_68 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0));
        _guard_xfg_dispatch_icall_nop(pwVar18,pwVar7,(longlong)iVar10 * 2);
        pwVar18[iVar10] = L'\0';
      }
      if (pwVar7 != (wchar_t *)0x0) {
        FMemory::Free(pwVar7);
      }
      iVar10 = *(int *)(param_1 + 1);
      uVar9 = iVar10 - 1;
      if (iVar10 == 0) {
        uVar9 = uVar13;
      }
      if (0x13 < uVar9) {
        uVar9 = 0x13;
      }
      uVar11 = iVar10 - 1;
      if (iVar10 == 0) {
        uVar11 = uVar13;
      }
      uVar12 = uVar9;
      if ((uVar9 < 0x18) && (uVar12 = uVar11, 0x17 < uVar11)) {
        uVar12 = 0x17;
      }
      if (iVar10 == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = *param_1;
      }
      iVar10 = uVar12 - uVar9;
      local_58 = (wchar_t *)0x0;
      local_4c = 0;
      uVar11 = iVar10 + 1;
      if (iVar10 == 0) {
        uVar11 = uVar8;
      }
      bVar21 = uVar11 == 0;
      pwVar7 = pwVar16;
      local_50 = uVar11;
      if (0 < (int)uVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
        uVar11 = local_50;
        pwVar7 = local_58;
        bVar21 = local_50 == 0;
        if (0 < (int)local_50) {
          wcsncpy(local_58,pwVar18 + (int)uVar9,(longlong)iVar10);
          bVar21 = uVar11 == 0;
          pwVar7[iVar10] = L'\0';
        }
      }
      iVar10 = iVar14;
      if ((!bVar21) && (iVar2 = uVar11 - 1, iVar2 != 0)) {
        iVar10 = iVar14 + (uint)(iVar14 == 0) + iVar2;
        local_60 = CONCAT44(local_60._4_4_,iVar10);
        if (local_60._4_4_ < iVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar14);
          iVar10 = (uint)local_60;
        }
        pwVar18 = local_68 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0));
        _guard_xfg_dispatch_icall_nop(pwVar18,pwVar7,(longlong)iVar2 * 2);
        pwVar18[iVar2] = L'\0';
      }
      if (pwVar7 != (wchar_t *)0x0) {
        FMemory::Free(pwVar7);
      }
      iVar2 = *(int *)(param_1 + 1);
      uVar9 = iVar2 - 1;
      if (iVar2 == 0) {
        uVar9 = uVar13;
      }
      if (0x18 < uVar9) {
        uVar9 = 0x18;
      }
      uVar11 = iVar2 - 1;
      if (iVar2 == 0) {
        uVar11 = uVar13;
      }
      uVar12 = uVar9;
      if ((uVar9 < 0x25) && (uVar12 = uVar11, 0x24 < uVar11)) {
        uVar12 = 0x24;
      }
      if (iVar2 == 0) {
        local_res20 = L"";
      }
      else {
        local_res20 = *param_1;
      }
      iVar2 = uVar12 - uVar9;
      local_58 = (wchar_t *)0x0;
      local_4c = 0;
      uVar11 = iVar2 + 1;
      if (iVar2 == 0) {
        uVar11 = uVar8;
      }
      bVar21 = uVar11 == 0;
      local_50 = uVar11;
      if (0 < (int)uVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
        pwVar20 = local_58;
        uVar11 = local_50;
        goto joined_r0x00014167b74e;
      }
LAB_14167b771:
      if ((!bVar21) && (iVar2 = uVar11 - 1, iVar2 != 0)) {
        iVar14 = iVar10 + (uint)(iVar10 == 0) + iVar2;
LAB_14167b78e:
        local_60 = CONCAT44(local_60._4_4_,iVar14);
        if (local_60._4_4_ < iVar14) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar10);
          iVar14 = (uint)local_60;
        }
        pwVar18 = local_68 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0));
        _guard_xfg_dispatch_icall_nop(pwVar18,pwVar20,(longlong)iVar2 * 2);
        pwVar18[iVar2] = L'\0';
        iVar10 = iVar14;
      }
    }
    else {
      if (param_2 == 2) {
        pwVar7 = *param_1;
        if ((((*pwVar7 != L'{') || (pwVar7[9] != L'-')) || (pwVar7[0xe] != L'-')) ||
           (((pwVar7[0x13] != L'-' || (pwVar7[0x18] != L'-')) || (pwVar7[0x25] != L'}'))))
        goto LAB_14167b814;
        iVar10 = *(int *)(param_1 + 1);
        uVar9 = iVar10 - 1;
        if (iVar10 == 0) {
          uVar9 = uVar13;
        }
        if (1 < uVar9) {
          uVar9 = 1;
        }
        uVar11 = iVar10 - 1;
        if (iVar10 == 0) {
          uVar11 = uVar13;
        }
        uVar12 = uVar9;
        if ((uVar9 < 10) && (uVar12 = uVar11, 9 < uVar11)) {
          uVar12 = 9;
        }
        local_58 = (wchar_t *)0x0;
        local_4c = 0;
        if (iVar10 != 0) {
          pwVar18 = pwVar7;
        }
        iVar10 = uVar12 - uVar9;
        uVar11 = iVar10 + 1;
        if (iVar10 == 0) {
          uVar11 = uVar8;
        }
        bVar21 = uVar11 == 0;
        pwVar7 = pwVar16;
        local_50 = uVar11;
        if (0 < (int)uVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
          uVar11 = local_50;
          pwVar7 = local_58;
          bVar21 = local_50 == 0;
          if (0 < (int)local_50) {
            wcsncpy(local_58,pwVar18 + (int)uVar9,(longlong)iVar10);
            bVar21 = uVar11 == 0;
            pwVar7[iVar10] = L'\0';
          }
        }
        uVar1 = local_60;
        iVar2 = (uint)local_60;
        iVar10 = (uint)local_60;
        if ((!bVar21) && (iVar14 = uVar11 - 1, iVar14 != 0)) {
          lVar4 = (longlong)(int)(uint)local_60;
          iVar10 = (uint)local_60 + ((uint)local_60 == 0) + iVar14;
          local_60 = CONCAT44(local_60._4_4_,iVar10);
          if (local_60._4_4_ < iVar10) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar1 & 0xffffffff);
            iVar10 = (uint)local_60;
          }
          pwVar18 = local_68 + (lVar4 - (ulonglong)(iVar2 != 0));
          _guard_xfg_dispatch_icall_nop(pwVar18,pwVar7,(longlong)iVar14 * 2);
          pwVar18[iVar14] = L'\0';
        }
        if (pwVar7 != (wchar_t *)0x0) {
          FMemory::Free(pwVar7);
        }
        iVar2 = *(int *)(param_1 + 1);
        uVar9 = iVar2 - 1;
        if (iVar2 == 0) {
          uVar9 = uVar13;
        }
        if (10 < uVar9) {
          uVar9 = 10;
        }
        uVar11 = iVar2 - 1;
        if (iVar2 == 0) {
          uVar11 = uVar13;
        }
        uVar12 = uVar9;
        if ((uVar9 < 0xf) && (uVar12 = uVar11, 0xe < uVar11)) {
          uVar12 = 0xe;
        }
        if (iVar2 == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = *param_1;
        }
        iVar2 = uVar12 - uVar9;
        local_58 = (wchar_t *)0x0;
        local_4c = 0;
        uVar11 = iVar2 + 1;
        if (iVar2 == 0) {
          uVar11 = uVar8;
        }
        bVar21 = uVar11 == 0;
        pwVar7 = pwVar16;
        local_50 = uVar11;
        if (0 < (int)uVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
          uVar11 = local_50;
          pwVar7 = local_58;
          bVar21 = local_50 == 0;
          if (0 < (int)local_50) {
            wcsncpy(local_58,pwVar18 + (int)uVar9,(longlong)iVar2);
            bVar21 = uVar11 == 0;
            pwVar7[iVar2] = L'\0';
          }
        }
        iVar2 = iVar10;
        if ((!bVar21) && (iVar14 = uVar11 - 1, iVar14 != 0)) {
          iVar2 = iVar10 + (uint)(iVar10 == 0) + iVar14;
          local_60 = CONCAT44(local_60._4_4_,iVar2);
          if (local_60._4_4_ < iVar2) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar10);
            iVar2 = (uint)local_60;
          }
          pwVar18 = local_68 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0));
          _guard_xfg_dispatch_icall_nop(pwVar18,pwVar7,(longlong)iVar14 * 2);
          pwVar18[iVar14] = L'\0';
        }
        if (pwVar7 != (wchar_t *)0x0) {
          FMemory::Free(pwVar7);
        }
        iVar10 = *(int *)(param_1 + 1);
        uVar9 = iVar10 - 1;
        if (iVar10 == 0) {
          uVar9 = uVar13;
        }
        if (0xf < uVar9) {
          uVar9 = 0xf;
        }
        uVar11 = iVar10 - 1;
        if (iVar10 == 0) {
          uVar11 = uVar13;
        }
        uVar12 = uVar9;
        if ((uVar9 < 0x14) && (uVar12 = uVar11, 0x13 < uVar11)) {
          uVar12 = 0x13;
        }
        if (iVar10 == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = *param_1;
        }
        iVar10 = uVar12 - uVar9;
        local_58 = (wchar_t *)0x0;
        local_4c = 0;
        uVar11 = iVar10 + 1;
        if (iVar10 == 0) {
          uVar11 = uVar8;
        }
        bVar21 = uVar11 == 0;
        pwVar7 = pwVar16;
        local_50 = uVar11;
        if (0 < (int)uVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
          uVar11 = local_50;
          pwVar7 = local_58;
          bVar21 = local_50 == 0;
          if (0 < (int)local_50) {
            wcsncpy(local_58,pwVar18 + (int)uVar9,(longlong)iVar10);
            bVar21 = uVar11 == 0;
            pwVar7[iVar10] = L'\0';
          }
        }
        iVar14 = iVar2;
        if ((!bVar21) && (iVar10 = uVar11 - 1, iVar10 != 0)) {
          iVar14 = iVar2 + (uint)(iVar2 == 0) + iVar10;
          local_60 = CONCAT44(local_60._4_4_,iVar14);
          if (local_60._4_4_ < iVar14) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar2);
            iVar14 = (uint)local_60;
          }
          pwVar18 = local_68 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0));
          _guard_xfg_dispatch_icall_nop(pwVar18,pwVar7,(longlong)iVar10 * 2);
          pwVar18[iVar10] = L'\0';
        }
        if (pwVar7 != (wchar_t *)0x0) {
          FMemory::Free(pwVar7);
        }
        iVar10 = *(int *)(param_1 + 1);
        uVar9 = iVar10 - 1;
        if (iVar10 == 0) {
          uVar9 = uVar17;
        }
        if (0x14 < uVar9) {
          uVar9 = 0x14;
        }
        uVar11 = iVar10 - 1;
        if (iVar10 == 0) {
          uVar11 = uVar17;
        }
        uVar12 = uVar9;
        if ((uVar9 < 0x19) && (uVar12 = uVar11, 0x18 < uVar11)) {
          uVar12 = 0x18;
        }
        if (iVar10 == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = *param_1;
        }
        iVar10 = uVar12 - uVar9;
        local_58 = (wchar_t *)0x0;
        local_4c = 0;
        uVar11 = iVar10 + 1;
        if (iVar10 == 0) {
          uVar11 = uVar8;
        }
        bVar21 = uVar11 == 0;
        pwVar7 = pwVar16;
        local_50 = uVar11;
        if (0 < (int)uVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
          uVar11 = local_50;
          pwVar7 = local_58;
          bVar21 = local_50 == 0;
          if (0 < (int)local_50) {
            wcsncpy(local_58,pwVar18 + (int)uVar9,(longlong)iVar10);
            bVar21 = uVar11 == 0;
            pwVar7[iVar10] = L'\0';
          }
        }
        iVar10 = iVar14;
        if ((!bVar21) && (iVar2 = uVar11 - 1, iVar2 != 0)) {
          iVar10 = (uint)(iVar14 == 0) + iVar2 + iVar14;
          local_60 = CONCAT44(local_60._4_4_,iVar10);
          if (local_60._4_4_ < iVar10) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar14);
            iVar10 = (uint)local_60;
          }
          pwVar18 = local_68 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0));
          _guard_xfg_dispatch_icall_nop(pwVar18,pwVar7,(longlong)iVar2 * 2);
          pwVar18[iVar2] = L'\0';
        }
        if (pwVar7 != (wchar_t *)0x0) {
          FMemory::Free(pwVar7);
        }
        iVar2 = *(int *)(param_1 + 1);
        uVar9 = iVar2 - 1;
        if (iVar2 == 0) {
          uVar9 = uVar17;
        }
        if (0x19 < uVar9) {
          uVar9 = 0x19;
        }
        uVar11 = iVar2 - 1;
        if (iVar2 == 0) {
          uVar11 = uVar17;
        }
        uVar12 = uVar9;
        if ((uVar9 < 0x26) && (uVar12 = uVar11, 0x25 < uVar11)) {
          uVar12 = 0x25;
        }
        if (iVar2 == 0) {
          local_res20 = L"";
        }
        else {
          local_res20 = *param_1;
        }
        iVar2 = uVar12 - uVar9;
        local_58 = (wchar_t *)0x0;
        local_4c = 0;
        uVar11 = iVar2 + 1;
        if (iVar2 == 0) {
          uVar11 = uVar8;
        }
        bVar21 = uVar11 == 0;
        local_50 = uVar11;
        if (0 < (int)uVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
          uVar11 = local_50;
          pwVar20 = local_58;
          bVar21 = local_50 == 0;
          if (0 < (int)local_50) {
            wcsncpy(local_58,local_res20 + (int)uVar9,(longlong)iVar2);
            bVar21 = uVar11 == 0;
            pwVar20[iVar2] = L'\0';
          }
        }
        if ((bVar21) || (iVar2 = uVar11 - 1, iVar2 == 0)) goto LAB_14167b7d6;
        iVar14 = iVar2 + (uint)(iVar10 == 0) + iVar10;
        goto LAB_14167b78e;
      }
      if (param_2 != 3) {
        if (param_2 == 4) {
          pwVar20 = *param_1;
          if ((((((((*pwVar20 != L'{') || (pwVar20[1] != L'0')) || (pwVar20[2] != L'x')) ||
                 ((pwVar20[0xb] != L',' || (pwVar20[0xc] != L'0')))) ||
                ((pwVar20[0xd] != L'x' || ((pwVar20[0x12] != L',' || (pwVar20[0x13] != L'0')))))) ||
               ((pwVar20[0x14] != L'x' ||
                (((((pwVar20[0x19] != L',' || (pwVar20[0x1a] != L'{')) || (pwVar20[0x1b] != L'0'))
                  || (((pwVar20[0x1c] != L'x' || (pwVar20[0x1f] != L',')) ||
                      ((pwVar20[0x20] != L'0' ||
                       ((pwVar20[0x21] != L'x' || (pwVar20[0x24] != L',')))))))) ||
                 (pwVar20[0x25] != L'0')))))) ||
              ((((pwVar20[0x26] != L'x' || (pwVar20[0x29] != L',')) || (pwVar20[0x2a] != L'0')) ||
               (((pwVar20[0x2b] != L'x' || (pwVar20[0x2e] != L',')) ||
                ((((pwVar20[0x2f] != L'0' || ((pwVar20[0x30] != L'x' || (pwVar20[0x33] != L','))))
                  || (pwVar20[0x34] != L'0')) ||
                 ((((pwVar20[0x35] != L'x' || (pwVar20[0x38] != L',')) || (pwVar20[0x39] != L'0'))
                  || ((pwVar20[0x3a] != L'x' || (pwVar20[0x3d] != L',')))))))))))) ||
             (((pwVar20[0x3e] != L'0' || ((pwVar20[0x3f] != L'x' || (pwVar20[0x42] != L'}')))) ||
              (pwVar20[0x43] != L'}')))) goto LAB_14167b814;
          iVar10 = *(int *)(param_1 + 1);
          uVar9 = iVar10 - 1;
          if (iVar10 == 0) {
            uVar9 = uVar8;
          }
          if (3 < uVar9) {
            uVar9 = 3;
          }
          uVar11 = iVar10 - 1;
          if (iVar10 == 0) {
            uVar11 = uVar8;
          }
          uVar12 = uVar9;
          if ((uVar9 < 0xc) && (uVar12 = uVar11, 0xb < uVar11)) {
            uVar12 = 0xb;
          }
          local_58 = (wchar_t *)0x0;
          local_4c = 0;
          if (iVar10 != 0) {
            pwVar18 = pwVar20;
          }
          iVar10 = uVar12 - uVar9;
          uVar11 = iVar10 + 1;
          if (iVar10 == 0) {
            uVar11 = uVar8;
          }
          bVar21 = uVar11 == 0;
          pwVar20 = pwVar16;
          local_50 = uVar11;
          if (0 < (int)uVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
            uVar11 = local_50;
            pwVar20 = local_58;
            bVar21 = local_50 == 0;
            if (0 < (int)local_50) {
              wcsncpy(local_58,pwVar18 + (int)uVar9,(longlong)iVar10);
              bVar21 = uVar11 == 0;
              pwVar20[iVar10] = L'\0';
            }
          }
          uVar1 = local_60;
          iVar2 = (uint)local_60;
          iVar10 = (uint)local_60;
          if ((!bVar21) && (iVar14 = uVar11 - 1, iVar14 != 0)) {
            lVar4 = (longlong)(int)(uint)local_60;
            iVar10 = (uint)local_60 + ((uint)local_60 == 0) + iVar14;
            local_60 = CONCAT44(local_60._4_4_,iVar10);
            if (local_60._4_4_ < iVar10) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar1 & 0xffffffff);
              iVar10 = (uint)local_60;
            }
            pwVar18 = local_68 + (lVar4 - (ulonglong)(iVar2 != 0));
            _guard_xfg_dispatch_icall_nop(pwVar18,pwVar20,(longlong)iVar14 * 2);
            pwVar18[iVar14] = L'\0';
          }
          if (pwVar20 != (wchar_t *)0x0) {
            FMemory::Free(pwVar20);
          }
          iVar2 = *(int *)(param_1 + 1);
          uVar9 = iVar2 - 1;
          if (iVar2 == 0) {
            uVar9 = uVar8;
          }
          if (0xe < uVar9) {
            uVar9 = 0xe;
          }
          uVar11 = iVar2 - 1;
          if (iVar2 == 0) {
            uVar11 = uVar8;
          }
          uVar12 = uVar9;
          if ((uVar9 < 0x13) && (uVar12 = uVar11, 0x12 < uVar11)) {
            uVar12 = 0x12;
          }
          if (iVar2 == 0) {
            pwVar18 = L"";
          }
          else {
            pwVar18 = *param_1;
          }
          iVar2 = uVar12 - uVar9;
          local_58 = (wchar_t *)0x0;
          local_4c = 0;
          uVar11 = iVar2 + 1;
          if (iVar2 == 0) {
            uVar11 = uVar8;
          }
          bVar21 = uVar11 == 0;
          pwVar20 = pwVar16;
          local_50 = uVar11;
          if (0 < (int)uVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
            uVar11 = local_50;
            pwVar20 = local_58;
            bVar21 = local_50 == 0;
            if (0 < (int)local_50) {
              wcsncpy(local_58,pwVar18 + (int)uVar9,(longlong)iVar2);
              bVar21 = uVar11 == 0;
              pwVar20[iVar2] = L'\0';
            }
          }
          iVar2 = iVar10;
          if ((!bVar21) && (iVar14 = uVar11 - 1, iVar14 != 0)) {
            iVar2 = iVar10 + (uint)(iVar10 == 0) + iVar14;
            local_60 = CONCAT44(local_60._4_4_,iVar2);
            if (local_60._4_4_ < iVar2) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar10);
              iVar2 = (uint)local_60;
            }
            pwVar18 = local_68 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0));
            _guard_xfg_dispatch_icall_nop(pwVar18,pwVar20,(longlong)iVar14 * 2);
            pwVar18[iVar14] = L'\0';
          }
          if (pwVar20 != (wchar_t *)0x0) {
            FMemory::Free(pwVar20);
          }
          iVar10 = *(int *)(param_1 + 1);
          uVar9 = iVar10 - 1;
          if (iVar10 == 0) {
            uVar9 = uVar8;
          }
          if (0x15 < uVar9) {
            uVar9 = 0x15;
          }
          uVar11 = iVar10 - 1;
          if (iVar10 == 0) {
            uVar11 = uVar8;
          }
          uVar12 = uVar9;
          if ((uVar9 < 0x1a) && (uVar12 = uVar11, 0x19 < uVar11)) {
            uVar12 = 0x19;
          }
          if (iVar10 == 0) {
            pwVar18 = L"";
          }
          else {
            pwVar18 = *param_1;
          }
          iVar10 = uVar12 - uVar9;
          local_58 = (wchar_t *)0x0;
          local_4c = 0;
          uVar11 = iVar10 + 1;
          if (iVar10 == 0) {
            uVar11 = uVar8;
          }
          bVar21 = uVar11 == 0;
          pwVar20 = pwVar16;
          local_50 = uVar11;
          if (0 < (int)uVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
            uVar11 = local_50;
            pwVar20 = local_58;
            bVar21 = local_50 == 0;
            if (0 < (int)local_50) {
              wcsncpy(local_58,pwVar18 + (int)uVar9,(longlong)iVar10);
              bVar21 = uVar11 == 0;
              pwVar20[iVar10] = L'\0';
            }
          }
          iVar10 = iVar2;
          if ((!bVar21) && (iVar14 = uVar11 - 1, iVar14 != 0)) {
            iVar10 = (uint)(iVar2 == 0) + iVar14 + iVar2;
            local_60 = CONCAT44(local_60._4_4_,iVar10);
            if (local_60._4_4_ < iVar10) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar2);
              iVar10 = (uint)local_60;
            }
            pwVar18 = local_68 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0));
            _guard_xfg_dispatch_icall_nop(pwVar18,pwVar20,(longlong)iVar14 * 2);
            pwVar18[iVar14] = L'\0';
          }
          if (pwVar20 != (wchar_t *)0x0) {
            FMemory::Free(pwVar20);
          }
          iVar2 = *(int *)(param_1 + 1);
          uVar9 = iVar2 - 1;
          if (iVar2 == 0) {
            uVar9 = uVar8;
          }
          if (0x1d < uVar9) {
            uVar9 = 0x1d;
          }
          uVar11 = iVar2 - 1;
          if (iVar2 == 0) {
            uVar11 = uVar8;
          }
          uVar12 = uVar9;
          if ((uVar9 < 0x20) && (uVar12 = uVar11, 0x1f < uVar11)) {
            uVar12 = 0x1f;
          }
          if (iVar2 == 0) {
            pwVar18 = L"";
          }
          else {
            pwVar18 = *param_1;
          }
          iVar2 = uVar12 - uVar9;
          local_58 = (wchar_t *)0x0;
          local_4c = 0;
          uVar11 = iVar2 + 1;
          if (iVar2 == 0) {
            uVar11 = uVar8;
          }
          bVar21 = uVar11 == 0;
          pwVar20 = pwVar16;
          local_50 = uVar11;
          if (0 < (int)uVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
            uVar11 = local_50;
            pwVar20 = local_58;
            bVar21 = local_50 == 0;
            if (0 < (int)local_50) {
              wcsncpy(local_58,pwVar18 + (int)uVar9,(longlong)iVar2);
              bVar21 = uVar11 == 0;
              pwVar20[iVar2] = L'\0';
            }
          }
          iVar2 = iVar10;
          if ((!bVar21) && (iVar14 = uVar11 - 1, iVar14 != 0)) {
            iVar2 = (uint)(iVar10 == 0) + iVar14 + iVar10;
            local_60 = CONCAT44(local_60._4_4_,iVar2);
            if (local_60._4_4_ < iVar2) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar10);
              iVar2 = (uint)local_60;
            }
            pwVar18 = local_68 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0));
            _guard_xfg_dispatch_icall_nop(pwVar18,pwVar20,(longlong)iVar14 * 2);
            pwVar18[iVar14] = L'\0';
          }
          if (pwVar20 != (wchar_t *)0x0) {
            FMemory::Free(pwVar20);
          }
          iVar10 = *(int *)(param_1 + 1);
          uVar9 = iVar10 - 1;
          if (iVar10 == 0) {
            uVar9 = uVar17;
          }
          if (0x22 < uVar9) {
            uVar9 = 0x22;
          }
          uVar11 = iVar10 - 1;
          if (iVar10 == 0) {
            uVar11 = uVar17;
          }
          uVar12 = uVar9;
          if ((uVar9 < 0x25) && (uVar12 = uVar11, 0x24 < uVar11)) {
            uVar12 = 0x24;
          }
          if (iVar10 == 0) {
            pwVar18 = L"";
          }
          else {
            pwVar18 = *param_1;
          }
          iVar10 = uVar12 - uVar9;
          local_58 = (wchar_t *)0x0;
          local_4c = 0;
          uVar11 = iVar10 + 1;
          if (iVar10 == 0) {
            uVar11 = uVar8;
          }
          bVar21 = uVar11 == 0;
          pwVar20 = pwVar16;
          local_50 = uVar11;
          if (0 < (int)uVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
            uVar11 = local_50;
            pwVar20 = local_58;
            bVar21 = local_50 == 0;
            if (0 < (int)local_50) {
              wcsncpy(local_58,pwVar18 + (int)uVar9,(longlong)iVar10);
              bVar21 = uVar11 == 0;
              pwVar20[iVar10] = L'\0';
            }
          }
          iVar10 = iVar2;
          if ((!bVar21) && (iVar14 = uVar11 - 1, iVar14 != 0)) {
            iVar10 = (uint)(iVar2 == 0) + iVar14 + iVar2;
            local_60 = CONCAT44(local_60._4_4_,iVar10);
            if (local_60._4_4_ < iVar10) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar2);
              iVar10 = (uint)local_60;
            }
            pwVar18 = local_68 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0));
            _guard_xfg_dispatch_icall_nop(pwVar18,pwVar20,(longlong)iVar14 * 2);
            pwVar18[iVar14] = L'\0';
          }
          if (pwVar20 != (wchar_t *)0x0) {
            FMemory::Free(pwVar20);
          }
          iVar2 = *(int *)(param_1 + 1);
          uVar9 = iVar2 - 1;
          if (iVar2 == 0) {
            uVar9 = uVar17;
          }
          if (0x27 < uVar9) {
            uVar9 = 0x27;
          }
          uVar11 = iVar2 - 1;
          if (iVar2 == 0) {
            uVar11 = uVar17;
          }
          uVar12 = uVar9;
          if ((uVar9 < 0x2a) && (uVar12 = uVar11, 0x29 < uVar11)) {
            uVar12 = 0x29;
          }
          if (iVar2 == 0) {
            pwVar18 = L"";
          }
          else {
            pwVar18 = *param_1;
          }
          iVar2 = uVar12 - uVar9;
          local_58 = (wchar_t *)0x0;
          local_4c = 0;
          uVar11 = iVar2 + 1;
          if (iVar2 == 0) {
            uVar11 = uVar8;
          }
          bVar21 = uVar11 == 0;
          pwVar20 = pwVar16;
          local_50 = uVar11;
          if (0 < (int)uVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
            uVar11 = local_50;
            pwVar20 = local_58;
            bVar21 = local_50 == 0;
            if (0 < (int)local_50) {
              wcsncpy(local_58,pwVar18 + (int)uVar9,(longlong)iVar2);
              bVar21 = uVar11 == 0;
              pwVar20[iVar2] = L'\0';
            }
          }
          iVar2 = iVar10;
          if ((!bVar21) && (iVar14 = uVar11 - 1, iVar14 != 0)) {
            iVar2 = (uint)(iVar10 == 0) + iVar14 + iVar10;
            local_60 = CONCAT44(local_60._4_4_,iVar2);
            if (local_60._4_4_ < iVar2) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar10);
              iVar2 = (uint)local_60;
            }
            pwVar18 = local_68 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0));
            _guard_xfg_dispatch_icall_nop(pwVar18,pwVar20,(longlong)iVar14 * 2);
            pwVar18[iVar14] = L'\0';
          }
          if (pwVar20 != (wchar_t *)0x0) {
            FMemory::Free(pwVar20);
          }
          iVar10 = *(int *)(param_1 + 1);
          uVar9 = iVar10 - 1;
          if (iVar10 == 0) {
            uVar9 = uVar17;
          }
          if (0x2c < uVar9) {
            uVar9 = 0x2c;
          }
          uVar11 = iVar10 - 1;
          if (iVar10 == 0) {
            uVar11 = uVar17;
          }
          uVar12 = uVar9;
          if ((uVar9 < 0x2f) && (uVar12 = uVar11, 0x2e < uVar11)) {
            uVar12 = 0x2e;
          }
          if (iVar10 == 0) {
            pwVar18 = L"";
          }
          else {
            pwVar18 = *param_1;
          }
          iVar10 = uVar12 - uVar9;
          local_58 = (wchar_t *)0x0;
          local_4c = 0;
          uVar11 = iVar10 + 1;
          if (iVar10 == 0) {
            uVar11 = uVar8;
          }
          bVar21 = uVar11 == 0;
          pwVar20 = pwVar16;
          local_50 = uVar11;
          if (0 < (int)uVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
            uVar11 = local_50;
            pwVar20 = local_58;
            bVar21 = local_50 == 0;
            if (0 < (int)local_50) {
              wcsncpy(local_58,pwVar18 + (int)uVar9,(longlong)iVar10);
              bVar21 = uVar11 == 0;
              pwVar20[iVar10] = L'\0';
            }
          }
          iVar10 = iVar2;
          if ((!bVar21) && (iVar14 = uVar11 - 1, iVar14 != 0)) {
            iVar10 = (uint)(iVar2 == 0) + iVar14 + iVar2;
            local_60 = CONCAT44(local_60._4_4_,iVar10);
            if (local_60._4_4_ < iVar10) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar2);
              iVar10 = (uint)local_60;
            }
            pwVar18 = local_68 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0));
            _guard_xfg_dispatch_icall_nop(pwVar18,pwVar20,(longlong)iVar14 * 2);
            pwVar18[iVar14] = L'\0';
          }
          if (pwVar20 != (wchar_t *)0x0) {
            FMemory::Free(pwVar20);
          }
          iVar2 = *(int *)(param_1 + 1);
          uVar9 = iVar2 - 1;
          if (iVar2 == 0) {
            uVar9 = uVar17;
          }
          if (0x31 < uVar9) {
            uVar9 = 0x31;
          }
          uVar11 = iVar2 - 1;
          if (iVar2 == 0) {
            uVar11 = uVar17;
          }
          uVar12 = uVar9;
          if ((uVar9 < 0x34) && (uVar12 = uVar11, 0x33 < uVar11)) {
            uVar12 = 0x33;
          }
          if (iVar2 == 0) {
            pwVar18 = L"";
          }
          else {
            pwVar18 = *param_1;
          }
          iVar2 = uVar12 - uVar9;
          local_58 = (wchar_t *)0x0;
          local_4c = 0;
          uVar11 = iVar2 + 1;
          if (iVar2 == 0) {
            uVar11 = uVar8;
          }
          bVar21 = uVar11 == 0;
          pwVar20 = pwVar16;
          local_50 = uVar11;
          if (0 < (int)uVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
            uVar11 = local_50;
            pwVar20 = local_58;
            bVar21 = local_50 == 0;
            if (0 < (int)local_50) {
              wcsncpy(local_58,pwVar18 + (int)uVar9,(longlong)iVar2);
              bVar21 = uVar11 == 0;
              pwVar20[iVar2] = L'\0';
            }
          }
          iVar2 = iVar10;
          if ((!bVar21) && (iVar14 = uVar11 - 1, iVar14 != 0)) {
            iVar2 = (uint)(iVar10 == 0) + iVar14 + iVar10;
            local_60 = CONCAT44(local_60._4_4_,iVar2);
            if (local_60._4_4_ < iVar2) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar10);
              iVar2 = (uint)local_60;
            }
            pwVar18 = local_68 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0));
            _guard_xfg_dispatch_icall_nop(pwVar18,pwVar20,(longlong)iVar14 * 2);
            pwVar18[iVar14] = L'\0';
          }
          if (pwVar20 != (wchar_t *)0x0) {
            FMemory::Free(pwVar20);
          }
          iVar10 = *(int *)(param_1 + 1);
          uVar9 = iVar10 - 1;
          if (iVar10 == 0) {
            uVar9 = uVar17;
          }
          if (0x36 < uVar9) {
            uVar9 = 0x36;
          }
          uVar11 = iVar10 - 1;
          if (iVar10 == 0) {
            uVar11 = uVar17;
          }
          uVar12 = uVar9;
          if ((uVar9 < 0x39) && (uVar12 = uVar11, 0x38 < uVar11)) {
            uVar12 = 0x38;
          }
          if (iVar10 == 0) {
            pwVar18 = L"";
          }
          else {
            pwVar18 = *param_1;
          }
          iVar10 = uVar12 - uVar9;
          local_58 = (wchar_t *)0x0;
          local_4c = 0;
          uVar11 = iVar10 + 1;
          if (iVar10 == 0) {
            uVar11 = uVar8;
          }
          bVar21 = uVar11 == 0;
          pwVar20 = pwVar16;
          local_50 = uVar11;
          if (0 < (int)uVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
            uVar11 = local_50;
            pwVar20 = local_58;
            bVar21 = local_50 == 0;
            if (0 < (int)local_50) {
              wcsncpy(local_58,pwVar18 + (int)uVar9,(longlong)iVar10);
              bVar21 = uVar11 == 0;
              pwVar20[iVar10] = L'\0';
            }
          }
          iVar14 = iVar2;
          if ((!bVar21) && (iVar10 = uVar11 - 1, iVar10 != 0)) {
            iVar14 = (uint)(iVar2 == 0) + iVar10 + iVar2;
            local_60 = CONCAT44(local_60._4_4_,iVar14);
            if (local_60._4_4_ < iVar14) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar2);
              iVar14 = (uint)local_60;
            }
            pwVar18 = local_68 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0));
            _guard_xfg_dispatch_icall_nop(pwVar18,pwVar20,(longlong)iVar10 * 2);
            pwVar18[iVar10] = L'\0';
          }
          if (pwVar20 != (wchar_t *)0x0) {
            FMemory::Free(pwVar20);
          }
          iVar10 = *(int *)(param_1 + 1);
          uVar9 = iVar10 - 1;
          if (iVar10 == 0) {
            uVar9 = uVar17;
          }
          if (0x3b < uVar9) {
            uVar9 = 0x3b;
          }
          uVar11 = iVar10 - 1;
          if (iVar10 == 0) {
            uVar11 = uVar17;
          }
          uVar12 = uVar9;
          if ((uVar9 < 0x3e) && (uVar12 = uVar11, 0x3d < uVar11)) {
            uVar12 = 0x3d;
          }
          if (iVar10 == 0) {
            pwVar18 = L"";
          }
          else {
            pwVar18 = *param_1;
          }
          iVar10 = uVar12 - uVar9;
          local_58 = (wchar_t *)0x0;
          local_4c = 0;
          uVar11 = iVar10 + 1;
          if (iVar10 == 0) {
            uVar11 = uVar8;
          }
          bVar21 = uVar11 == 0;
          pwVar20 = pwVar16;
          local_50 = uVar11;
          if (0 < (int)uVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
            uVar11 = local_50;
            pwVar20 = local_58;
            bVar21 = local_50 == 0;
            if (0 < (int)local_50) {
              wcsncpy(local_58,pwVar18 + (int)uVar9,(longlong)iVar10);
              bVar21 = uVar11 == 0;
              pwVar20[iVar10] = L'\0';
            }
          }
          iVar10 = iVar14;
          if ((!bVar21) && (iVar2 = uVar11 - 1, iVar2 != 0)) {
            iVar10 = iVar14 + (uint)(iVar14 == 0) + iVar2;
            local_60 = CONCAT44(local_60._4_4_,iVar10);
            if (local_60._4_4_ < iVar10) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar14);
              iVar10 = (uint)local_60;
            }
            pwVar18 = local_68 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0));
            _guard_xfg_dispatch_icall_nop(pwVar18,pwVar20,(longlong)iVar2 * 2);
            pwVar18[iVar2] = L'\0';
          }
          if (pwVar20 != (wchar_t *)0x0) {
            FMemory::Free(pwVar20);
          }
          iVar2 = *(int *)(param_1 + 1);
          uVar9 = iVar2 - 1;
          if (iVar2 == 0) {
            uVar9 = uVar17;
          }
          if (0x40 < uVar9) {
            uVar9 = 0x40;
          }
          uVar11 = iVar2 - 1;
          if (iVar2 == 0) {
            uVar11 = uVar17;
          }
          uVar12 = uVar9;
          if ((uVar9 < 0x43) && (uVar12 = uVar11, 0x42 < uVar11)) {
            uVar12 = 0x42;
          }
          if (iVar2 == 0) {
            local_res20 = L"";
          }
          else {
            local_res20 = *param_1;
          }
          iVar2 = uVar12 - uVar9;
          local_58 = (wchar_t *)0x0;
          pwVar20 = (wchar_t *)0x0;
          local_4c = 0;
          uVar11 = iVar2 + 1;
          if (iVar2 == 0) {
            uVar11 = uVar8;
          }
          bVar21 = uVar11 == 0;
          local_50 = uVar11;
          if (0 < (int)uVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
            pwVar20 = local_58;
            uVar11 = local_50;
joined_r0x00014167b74e:
            bVar21 = uVar11 == 0;
            local_58 = pwVar20;
            local_50 = uVar11;
            if (0 < (int)uVar11) {
              wcsncpy(pwVar20,local_res20 + (int)uVar9,(longlong)iVar2);
              bVar21 = uVar11 == 0;
              pwVar20[iVar2] = L'\0';
            }
          }
        }
        else {
          if (param_2 != 5) goto LAB_14167958a;
          pwVar20 = *param_1;
          if (((pwVar20[8] != L'-') || (pwVar20[0x11] != L'-')) || (pwVar20[0x1a] != L'-'))
          goto LAB_14167b814;
          iVar10 = *(int *)(param_1 + 1);
          uVar9 = iVar10 - 1;
          if (iVar10 == 0) {
            uVar9 = uVar17;
          }
          if (8 < uVar9) {
            uVar9 = 8;
          }
          local_58 = (wchar_t *)0x0;
          local_4c = 0;
          if (iVar10 != 0) {
            pwVar18 = pwVar20;
          }
          uVar11 = uVar9 + 1;
          if (uVar9 == 0) {
            uVar11 = uVar8;
          }
          bVar21 = uVar11 == 0;
          pwVar20 = pwVar16;
          local_50 = uVar11;
          if (0 < (int)uVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
            uVar11 = local_50;
            pwVar20 = local_58;
            bVar21 = local_50 == 0;
            if (0 < (int)local_50) {
              wcsncpy(local_58,pwVar18,(longlong)(int)uVar9);
              bVar21 = uVar11 == 0;
              pwVar20[(int)uVar9] = L'\0';
            }
          }
          uVar1 = local_60;
          iVar2 = (uint)local_60;
          iVar10 = (uint)local_60;
          if ((!bVar21) && (iVar14 = uVar11 - 1, iVar14 != 0)) {
            lVar4 = (longlong)(int)(uint)local_60;
            iVar10 = (uint)((uint)local_60 == 0) + iVar14 + (uint)local_60;
            local_60 = CONCAT44(local_60._4_4_,iVar10);
            if (local_60._4_4_ < iVar10) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar1 & 0xffffffff);
              iVar10 = (uint)local_60;
            }
            pwVar18 = local_68 + (lVar4 - (ulonglong)(iVar2 != 0));
            _guard_xfg_dispatch_icall_nop(pwVar18,pwVar20,(longlong)iVar14 * 2);
            pwVar18[iVar14] = L'\0';
          }
          if (pwVar20 != (wchar_t *)0x0) {
            FMemory::Free(pwVar20);
          }
          iVar2 = *(int *)(param_1 + 1);
          uVar9 = iVar2 - 1;
          if (iVar2 == 0) {
            uVar9 = uVar17;
          }
          if (9 < uVar9) {
            uVar9 = 9;
          }
          uVar11 = iVar2 - 1;
          if (iVar2 == 0) {
            uVar11 = uVar17;
          }
          uVar12 = uVar9;
          if ((uVar9 < 0x12) && (uVar12 = uVar11, 0x11 < uVar11)) {
            uVar12 = 0x11;
          }
          if (iVar2 == 0) {
            pwVar18 = L"";
          }
          else {
            pwVar18 = *param_1;
          }
          iVar2 = uVar12 - uVar9;
          local_58 = (wchar_t *)0x0;
          local_4c = 0;
          uVar11 = iVar2 + 1;
          if (iVar2 == 0) {
            uVar11 = uVar8;
          }
          bVar21 = uVar11 == 0;
          pwVar20 = pwVar16;
          local_50 = uVar11;
          if (0 < (int)uVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
            uVar11 = local_50;
            pwVar20 = local_58;
            bVar21 = local_50 == 0;
            if (0 < (int)local_50) {
              wcsncpy(local_58,pwVar18 + (int)uVar9,(longlong)iVar2);
              bVar21 = uVar11 == 0;
              pwVar20[iVar2] = L'\0';
            }
          }
          iVar2 = iVar10;
          if ((!bVar21) && (iVar14 = uVar11 - 1, iVar14 != 0)) {
            iVar2 = (uint)(iVar10 == 0) + iVar14 + iVar10;
            local_60 = CONCAT44(local_60._4_4_,iVar2);
            if (local_60._4_4_ < iVar2) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar10);
              iVar2 = (uint)local_60;
            }
            pwVar18 = local_68 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0));
            _guard_xfg_dispatch_icall_nop(pwVar18,pwVar20,(longlong)iVar14 * 2);
            pwVar18[iVar14] = L'\0';
          }
          if (pwVar20 != (wchar_t *)0x0) {
            FMemory::Free(pwVar20);
          }
          iVar10 = *(int *)(param_1 + 1);
          uVar9 = iVar10 - 1;
          if (iVar10 == 0) {
            uVar9 = uVar17;
          }
          if (0x12 < uVar9) {
            uVar9 = 0x12;
          }
          uVar11 = iVar10 - 1;
          if (iVar10 == 0) {
            uVar11 = uVar17;
          }
          uVar12 = uVar9;
          if ((uVar9 < 0x1b) && (uVar12 = uVar11, 0x1a < uVar11)) {
            uVar12 = 0x1a;
          }
          if (iVar10 == 0) {
            pwVar18 = L"";
          }
          else {
            pwVar18 = *param_1;
          }
          iVar10 = uVar12 - uVar9;
          local_58 = (wchar_t *)0x0;
          local_4c = 0;
          uVar11 = iVar10 + 1;
          if (iVar10 == 0) {
            uVar11 = uVar8;
          }
          bVar21 = uVar11 == 0;
          pwVar20 = pwVar16;
          local_50 = uVar11;
          if (0 < (int)uVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
            uVar11 = local_50;
            pwVar20 = local_58;
            bVar21 = local_50 == 0;
            if (0 < (int)local_50) {
              wcsncpy(local_58,pwVar18 + (int)uVar9,(longlong)iVar10);
              bVar21 = uVar11 == 0;
              pwVar20[iVar10] = L'\0';
            }
          }
          iVar10 = iVar2;
          if ((!bVar21) && (iVar14 = uVar11 - 1, iVar14 != 0)) {
            iVar10 = (uint)(iVar2 == 0) + iVar14 + iVar2;
            local_60 = CONCAT44(local_60._4_4_,iVar10);
            if (local_60._4_4_ < iVar10) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar2);
              iVar10 = (uint)local_60;
            }
            pwVar18 = local_68 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0));
            _guard_xfg_dispatch_icall_nop(pwVar18,pwVar20,(longlong)iVar14 * 2);
            pwVar18[iVar14] = L'\0';
          }
          if (pwVar20 != (wchar_t *)0x0) {
            FMemory::Free(pwVar20);
          }
          iVar2 = *(int *)(param_1 + 1);
          uVar9 = iVar2 - 1;
          if (iVar2 == 0) {
            uVar9 = uVar17;
          }
          if (0x1b < uVar9) {
            uVar9 = 0x1b;
          }
          uVar11 = iVar2 - 1;
          if (iVar2 == 0) {
            uVar11 = uVar17;
          }
          uVar12 = uVar9;
          if ((uVar9 < 0x24) && (uVar12 = uVar11, 0x23 < uVar11)) {
            uVar12 = 0x23;
          }
          if (iVar2 == 0) {
            local_res20 = L"";
          }
          else {
            local_res20 = *param_1;
          }
          iVar2 = uVar12 - uVar9;
          local_58 = (wchar_t *)0x0;
          pwVar20 = (wchar_t *)0x0;
          local_4c = 0;
          uVar11 = iVar2 + 1;
          if (iVar2 == 0) {
            uVar11 = uVar8;
          }
          bVar21 = uVar11 == 0;
          local_50 = uVar11;
          if (0 < (int)uVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
            pwVar20 = local_58;
            uVar11 = local_50;
            goto joined_r0x00014167b74e;
          }
        }
        goto LAB_14167b771;
      }
      pwVar7 = *param_1;
      if ((((*pwVar7 != L'(') || (pwVar7[9] != L'-')) || (pwVar7[0xe] != L'-')) ||
         (((pwVar7[0x13] != L'-' || (pwVar7[0x18] != L'-')) || (pwVar7[0x25] != L')'))))
      goto LAB_14167b814;
      iVar10 = *(int *)(param_1 + 1);
      uVar9 = iVar10 - 1;
      if (iVar10 == 0) {
        uVar9 = uVar13;
      }
      if (1 < uVar9) {
        uVar9 = 1;
      }
      uVar11 = iVar10 - 1;
      if (iVar10 == 0) {
        uVar11 = uVar13;
      }
      uVar12 = uVar9;
      if ((uVar9 < 10) && (uVar12 = uVar11, 9 < uVar11)) {
        uVar12 = 9;
      }
      local_58 = (wchar_t *)0x0;
      local_4c = 0;
      if (iVar10 != 0) {
        pwVar18 = pwVar7;
      }
      iVar10 = uVar12 - uVar9;
      uVar11 = iVar10 + 1;
      if (iVar10 == 0) {
        uVar11 = uVar8;
      }
      bVar21 = uVar11 == 0;
      pwVar7 = pwVar16;
      local_50 = uVar11;
      if (0 < (int)uVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
        uVar11 = local_50;
        pwVar7 = local_58;
        bVar21 = local_50 == 0;
        if (0 < (int)local_50) {
          wcsncpy(local_58,pwVar18 + (int)uVar9,(longlong)iVar10);
          bVar21 = uVar11 == 0;
          pwVar7[iVar10] = L'\0';
        }
      }
      uVar1 = local_60;
      iVar2 = (uint)local_60;
      iVar10 = (uint)local_60;
      if ((!bVar21) && (iVar14 = uVar11 - 1, iVar14 != 0)) {
        lVar4 = (longlong)(int)(uint)local_60;
        iVar10 = (uint)((uint)local_60 == 0) + iVar14 + (uint)local_60;
        local_60 = CONCAT44(local_60._4_4_,iVar10);
        if (local_60._4_4_ < iVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar1 & 0xffffffff);
          iVar10 = (uint)local_60;
        }
        pwVar18 = local_68 + (lVar4 - (ulonglong)(iVar2 != 0));
        _guard_xfg_dispatch_icall_nop(pwVar18,pwVar7,(longlong)iVar14 * 2);
        pwVar18[iVar14] = L'\0';
      }
      if (pwVar7 != (wchar_t *)0x0) {
        FMemory::Free(pwVar7);
      }
      iVar2 = *(int *)(param_1 + 1);
      uVar9 = iVar2 - 1;
      if (iVar2 == 0) {
        uVar9 = uVar8;
      }
      if (10 < uVar9) {
        uVar9 = 10;
      }
      uVar11 = iVar2 - 1;
      if (iVar2 == 0) {
        uVar11 = uVar8;
      }
      uVar12 = uVar9;
      if ((uVar9 < 0xf) && (uVar12 = uVar11, 0xe < uVar11)) {
        uVar12 = 0xe;
      }
      if (iVar2 == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = *param_1;
      }
      iVar2 = uVar12 - uVar9;
      local_58 = (wchar_t *)0x0;
      local_4c = 0;
      uVar11 = iVar2 + 1;
      if (iVar2 == 0) {
        uVar11 = uVar8;
      }
      bVar21 = uVar11 == 0;
      pwVar7 = pwVar16;
      local_50 = uVar11;
      if (0 < (int)uVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
        uVar11 = local_50;
        pwVar7 = local_58;
        bVar21 = local_50 == 0;
        if (0 < (int)local_50) {
          wcsncpy(local_58,pwVar18 + (int)uVar9,(longlong)iVar2);
          bVar21 = uVar11 == 0;
          pwVar7[iVar2] = L'\0';
        }
      }
      iVar2 = iVar10;
      if ((!bVar21) && (iVar14 = uVar11 - 1, iVar14 != 0)) {
        iVar2 = (uint)(iVar10 == 0) + iVar14 + iVar10;
        local_60 = CONCAT44(local_60._4_4_,iVar2);
        if (local_60._4_4_ < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar10);
          iVar2 = (uint)local_60;
        }
        pwVar18 = local_68 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0));
        _guard_xfg_dispatch_icall_nop(pwVar18,pwVar7,(longlong)iVar14 * 2);
        pwVar18[iVar14] = L'\0';
      }
      if (pwVar7 != (wchar_t *)0x0) {
        FMemory::Free(pwVar7);
      }
      iVar10 = *(int *)(param_1 + 1);
      uVar9 = iVar10 - 1;
      if (iVar10 == 0) {
        uVar9 = uVar8;
      }
      if (0xf < uVar9) {
        uVar9 = 0xf;
      }
      uVar11 = iVar10 - 1;
      if (iVar10 == 0) {
        uVar11 = uVar8;
      }
      uVar12 = uVar9;
      if ((uVar9 < 0x14) && (uVar12 = uVar11, 0x13 < uVar11)) {
        uVar12 = 0x13;
      }
      if (iVar10 == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = *param_1;
      }
      iVar10 = uVar12 - uVar9;
      local_58 = (wchar_t *)0x0;
      local_4c = 0;
      uVar11 = iVar10 + 1;
      if (iVar10 == 0) {
        uVar11 = uVar8;
      }
      bVar21 = uVar11 == 0;
      pwVar7 = pwVar16;
      local_50 = uVar11;
      if (0 < (int)uVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
        uVar11 = local_50;
        pwVar7 = local_58;
        bVar21 = local_50 == 0;
        if (0 < (int)local_50) {
          wcsncpy(local_58,pwVar18 + (int)uVar9,(longlong)iVar10);
          bVar21 = uVar11 == 0;
          pwVar7[iVar10] = L'\0';
        }
      }
      iVar10 = iVar2;
      if ((!bVar21) && (iVar14 = uVar11 - 1, iVar14 != 0)) {
        iVar10 = (uint)(iVar2 == 0) + iVar14 + iVar2;
        local_60 = CONCAT44(local_60._4_4_,iVar10);
        if (local_60._4_4_ < iVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar2);
          iVar10 = (uint)local_60;
        }
        pwVar18 = local_68 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0));
        _guard_xfg_dispatch_icall_nop(pwVar18,pwVar7,(longlong)iVar14 * 2);
        pwVar18[iVar14] = L'\0';
      }
      if (pwVar7 != (wchar_t *)0x0) {
        FMemory::Free(pwVar7);
      }
      iVar2 = *(int *)(param_1 + 1);
      uVar9 = iVar2 - 1;
      if (iVar2 == 0) {
        uVar9 = uVar8;
      }
      if (0x14 < uVar9) {
        uVar9 = 0x14;
      }
      uVar11 = iVar2 - 1;
      if (iVar2 == 0) {
        uVar11 = uVar8;
      }
      uVar12 = uVar9;
      if ((uVar9 < 0x19) && (uVar12 = uVar11, 0x18 < uVar11)) {
        uVar12 = 0x18;
      }
      if (iVar2 == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = *param_1;
      }
      iVar2 = uVar12 - uVar9;
      local_58 = (wchar_t *)0x0;
      local_4c = 0;
      uVar11 = iVar2 + 1;
      if (iVar2 == 0) {
        uVar11 = uVar8;
      }
      bVar21 = uVar11 == 0;
      pwVar7 = pwVar16;
      local_50 = uVar11;
      if (0 < (int)uVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
        uVar11 = local_50;
        pwVar7 = local_58;
        bVar21 = local_50 == 0;
        if (0 < (int)local_50) {
          wcsncpy(local_58,pwVar18 + (int)uVar9,(longlong)iVar2);
          bVar21 = uVar11 == 0;
          pwVar7[iVar2] = L'\0';
        }
      }
      iVar2 = iVar10;
      if ((!bVar21) && (iVar14 = uVar11 - 1, iVar14 != 0)) {
        iVar2 = (uint)(iVar10 == 0) + iVar14 + iVar10;
        local_60 = CONCAT44(local_60._4_4_,iVar2);
        if (local_60._4_4_ < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar10);
          iVar2 = (uint)local_60;
        }
        pwVar18 = local_68 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0));
        _guard_xfg_dispatch_icall_nop(pwVar18,pwVar7,(longlong)iVar14 * 2);
        pwVar18[iVar14] = L'\0';
      }
      if (pwVar7 != (wchar_t *)0x0) {
        FMemory::Free(pwVar7);
      }
      iVar10 = *(int *)(param_1 + 1);
      uVar9 = iVar10 - 1;
      if (iVar10 == 0) {
        uVar9 = uVar8;
      }
      if (0x19 < uVar9) {
        uVar9 = 0x19;
      }
      uVar11 = iVar10 - 1;
      if (iVar10 == 0) {
        uVar11 = uVar8;
      }
      uVar12 = uVar9;
      if ((uVar9 < 0x26) && (uVar12 = uVar11, 0x25 < uVar11)) {
        uVar12 = 0x25;
      }
      if (iVar10 == 0) {
        local_res20 = L"";
      }
      else {
        local_res20 = *param_1;
      }
      iVar10 = uVar12 - uVar9;
      local_58 = (wchar_t *)0x0;
      local_4c = 0;
      uVar11 = iVar10 + 1;
      if (iVar10 == 0) {
        uVar11 = uVar8;
      }
      bVar21 = uVar11 == 0;
      local_50 = uVar11;
      if (0 < (int)uVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
        uVar11 = local_50;
        pwVar20 = local_58;
        bVar21 = local_50 == 0;
        if (0 < (int)local_50) {
          wcsncpy(local_58,local_res20 + (int)uVar9,(longlong)iVar10);
          bVar21 = uVar11 == 0;
          pwVar20[iVar10] = L'\0';
        }
      }
      iVar10 = iVar2;
      if ((!bVar21) && (iVar14 = uVar11 - 1, iVar14 != 0)) {
        iVar10 = iVar2 + (uint)(iVar2 == 0) + iVar14;
        local_60 = CONCAT44(local_60._4_4_,iVar10);
        if (local_60._4_4_ < iVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar2);
          iVar10 = (uint)local_60;
        }
        pwVar18 = local_68 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0));
        _guard_xfg_dispatch_icall_nop(pwVar18,pwVar20,(longlong)iVar14 * 2);
        pwVar18[iVar14] = L'\0';
      }
    }
LAB_14167b7d6:
    pwVar18 = local_68;
    if (pwVar20 != (wchar_t *)0x0) {
      FMemory::Free(pwVar20);
      pwVar18 = local_68;
    }
  }
LAB_14167b7f0:
  while( true ) {
    uVar8 = iVar10 - 1;
    if (iVar10 == 0) {
      uVar8 = uVar13;
    }
    if ((int)uVar8 <= (int)pwVar19) {
      uVar8 = iVar10 - 1;
      if (iVar10 == 0) {
        uVar8 = uVar13;
      }
      if (0x18 < uVar8) {
        uVar8 = 0x18;
      }
      uVar9 = iVar10 - 1;
      if (iVar10 == 0) {
        uVar9 = uVar13;
      }
      uVar11 = uVar8;
      if ((uVar8 < 0x21) && (uVar11 = uVar9, 0x20 < uVar9)) {
        uVar11 = 0x20;
      }
      local_58 = (wchar_t *)0x0;
      local_4c = 0;
      pwVar19 = L"";
      if (iVar10 != 0) {
        pwVar19 = local_68;
      }
      iVar2 = uVar11 - uVar8;
      uVar9 = iVar2 + 1;
      if (iVar2 == 0) {
        uVar9 = 0;
      }
      pwVar18 = pwVar16;
      local_50 = uVar9;
      if ((0 < (int)uVar9) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0), uVar9 = local_50,
         pwVar18 = local_58, 0 < (int)local_50)) {
        wcsncpy(local_58,pwVar19 + (int)uVar8,(longlong)iVar2);
        pwVar18[iVar2] = L'\0';
      }
      local_70 = L"";
      if (uVar9 != 0) {
        local_70 = pwVar18;
      }
      uVar8 = iVar10 - 1;
      if (iVar10 == 0) {
        uVar8 = uVar13;
      }
      if (0x10 < uVar8) {
        uVar8 = 0x10;
      }
      uVar9 = iVar10 - 1;
      if (iVar10 == 0) {
        uVar9 = uVar13;
      }
      uVar11 = uVar8;
      if ((uVar8 < 0x19) && (uVar11 = uVar9, 0x18 < uVar9)) {
        uVar11 = 0x18;
      }
      local_80 = (wchar_t *)0x0;
      local_74 = 0;
      pwVar19 = L"";
      if (iVar10 != 0) {
        pwVar19 = local_68;
      }
      iVar14 = uVar11 - uVar8;
      iVar2 = iVar14 + 1;
      if (iVar14 == 0) {
        iVar2 = 0;
      }
      pwVar18 = pwVar16;
      if ((0 < iVar2) &&
         (local_78 = iVar2, TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,0),
         iVar2 = local_78, pwVar18 = local_80, 0 < local_78)) {
        wcsncpy(local_80,pwVar19 + (int)uVar8,(longlong)iVar14);
        pwVar18[iVar14] = L'\0';
      }
      pwVar19 = L"";
      if (iVar2 != 0) {
        pwVar19 = pwVar18;
      }
      uVar8 = iVar10 - 1;
      if (iVar10 == 0) {
        uVar8 = uVar13;
      }
      if (8 < uVar8) {
        uVar8 = 8;
      }
      uVar9 = iVar10 - 1;
      if (iVar10 == 0) {
        uVar9 = uVar13;
      }
      uVar11 = uVar8;
      if ((uVar8 < 0x11) && (uVar11 = uVar9, 0x10 < uVar9)) {
        uVar11 = 0x10;
      }
      local_80 = (wchar_t *)0x0;
      local_74 = 0;
      pwVar20 = L"";
      if (iVar10 != 0) {
        pwVar20 = local_68;
      }
      iVar14 = uVar11 - uVar8;
      iVar2 = iVar14 + 1;
      if (iVar14 == 0) {
        iVar2 = 0;
      }
      pwVar7 = pwVar16;
      local_78 = iVar2;
      if ((0 < iVar2) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,0), iVar2 = local_78,
         pwVar7 = local_80, 0 < local_78)) {
        wcsncpy(local_80,pwVar20 + (int)uVar8,(longlong)iVar14);
        pwVar7[iVar14] = L'\0';
      }
      local_80 = L"";
      if (iVar2 != 0) {
        local_80 = pwVar7;
      }
      uVar8 = iVar10 - 1;
      if (iVar10 == 0) {
        uVar8 = uVar13;
      }
      if (8 < uVar8) {
        uVar8 = 8;
      }
      local_48 = (wchar_t *)0x0;
      uStack_3c = 0;
      pwVar20 = L"";
      if (iVar10 != 0) {
        pwVar20 = local_68;
      }
      uStack_40 = uVar8 + 1;
      if (uVar8 == 0) {
        uStack_40 = uVar17;
      }
      bVar21 = uStack_40 == 0;
      if (0 < (int)uStack_40) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        uVar13 = uStack_40;
        pwVar16 = local_48;
        bVar21 = uStack_40 == 0;
        if (0 < (int)uStack_40) {
          wcsncpy(local_48,pwVar20,(longlong)(int)uVar8);
          bVar21 = uVar13 == 0;
          pwVar16[(int)uVar8] = L'\0';
        }
      }
      pwVar20 = L"";
      if (!bVar21) {
        pwVar20 = pwVar16;
      }
      uVar3 = FParse::HexNumber(pwVar20);
      local_48 = (wchar_t *)CONCAT44(local_48._4_4_,uVar3);
      uVar3 = FParse::HexNumber(local_80);
      local_48 = (wchar_t *)CONCAT44(uVar3,(undefined4)local_48);
      uStack_40 = FParse::HexNumber(pwVar19);
      uStack_3c = FParse::HexNumber(local_70);
      *param_3 = (undefined4)local_48;
      param_3[1] = local_48._4_4_;
      param_3[2] = uStack_40;
      param_3[3] = uStack_3c;
      if (pwVar16 != (wchar_t *)0x0) {
        FMemory::Free(pwVar16);
      }
      if (pwVar7 != (wchar_t *)0x0) {
        FMemory::Free(pwVar7);
      }
      if (pwVar18 != (wchar_t *)0x0) {
        FMemory::Free(pwVar18);
      }
      if (local_58 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      uVar15 = 1;
      goto LAB_14167bb22;
    }
    iVar2 = iswxdigit(*pwVar18);
    if (iVar2 == 0) break;
    pwVar19 = (wchar_t *)(ulonglong)((int)pwVar19 + 1);
    pwVar18 = pwVar18 + 1;
  }
LAB_14167b814:
  uVar15 = 0;
LAB_14167bb22:
  if (local_68 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return uVar15;
}



// FUNCTION 14167bb50 FUN_14167bb50 body=716 status=ok
// SIG undefined FUN_14167bb50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14167bb50(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined ***pppuVar7;
  longlong *plVar8;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8;
  undefined1 local_1d7 [15];
  code *local_1c8;
  code *pcStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 *local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  code *local_178;
  undefined1 *puStack_170;
  code *local_168;
  undefined4 **ppuStack_160;
  code *local_158;
  code *pcStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined1 *puStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 **ppuStack_130;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined4 local_110;
  char local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined **local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_1c8 = *(code **)(param_2 + 0x20);
  if ((*(code **)(param_2 + 0x10) <= local_1c8) &&
     (local_1c8 <= (code *)(*(longlong *)(param_2 + 0x18) + -2))) {
    local_1b8 = 0;
    uStack_1b4 = (undefined4)((longlong)local_1c8 - (longlong)*(code **)(param_2 + 0x10) >> 1);
    if (*(short *)local_1c8 == 0x7b) {
      local_f8 = 0;
      pcStack_1c0 = local_1c8 + 2;
      puStack_170 = &local_1d8;
      local_f0 = 1;
      local_1d8 = 0;
      local_178 = FUN_141664e10;
      local_148 = 0x41664e10;
      uStack_144 = 1;
      local_108 = local_1c8;
      uStack_100 = pcStack_1c0;
      uStack_f4 = uStack_1b4;
      puStack_140 = puStack_170;
      FTokenStream::ParseToken(param_2 + 0x10,local_a8,&local_148,&local_108);
      local_1a8 = &local_110;
      local_10c = '\0';
      ppuStack_160 = &local_1a8;
      local_168 = FUN_141664d70;
      local_138 = 0x41664d70;
      uStack_134 = 1;
      ppuStack_130 = ppuStack_160;
      FTokenStream::ParseToken(param_2 + 0x10,local_88,&local_138,&local_108);
      if (local_10c == '\0') {
        if (param_3 == '\0') {
LAB_14167bc8f:
          *(undefined1 *)(param_1 + 0x18) = 0;
          return param_1;
        }
        uVar5 = FUN_141670f30(local_128,&local_108);
        FText::FText(param_1,uVar5);
        plVar8 = local_120;
      }
      else {
        pcStack_1c0 = (code *)local_1d7;
        local_1d7[0] = (code)0x0;
        local_158 = FUN_141664e10;
        local_1c8 = FUN_141664e10;
        pcStack_150 = pcStack_1c0;
        FTokenStream::ParseToken(param_2 + 0x10,local_68,&local_1c8,&local_108);
        uStack_b4 = uStack_f4;
        uStack_b8 = local_f8;
        if (((*(code **)(param_2 + 0x10) <= uStack_100) &&
            (uStack_100 <= (code *)(*(longlong *)(param_2 + 0x18) + -2))) &&
           (*(short *)uStack_100 == 0x7d)) {
          if (uStack_100 < uStack_100 + 2) {
            uStack_100 = uStack_100 + 2;
          }
          uStack_198 = (undefined4)local_108;
          uStack_194 = local_108._4_4_;
          uStack_190 = (undefined4)uStack_100;
          uStack_18c = uStack_100._4_4_;
          local_1a0 = local_110;
          puVar6 = (undefined8 *)FUN_141673b40();
          local_e8 = *puVar6;
          uStack_e0 = puVar6[1];
          local_d8 = &PTR_FUN_144ccfb20;
          local_c0 = uStack_190;
          uStack_bc = uStack_18c;
          local_d0 = local_1a0;
          uStack_cc = uStack_19c;
          uStack_c8 = uStack_198;
          uStack_c4 = uStack_194;
          FExpressionTokenConsumer::Add(param_2,&local_108,&local_e8);
          pppuVar7 = &local_d8;
          if ((((int)local_e8 == 0 && local_e8._4_4_ == 0) && (int)uStack_e0 == 0) &&
              uStack_e0._4_4_ == 0) {
            pppuVar7 = (undefined ***)0x0;
          }
          if (pppuVar7 != (undefined ***)0x0) {
            (*(code *)**pppuVar7)(pppuVar7,0);
          }
          goto LAB_14167bd8c;
        }
        if (param_3 == '\0') goto LAB_14167bc8f;
        uVar5 = FUN_141670f30(&local_1a0,&local_108);
        FText::FText(param_1,uVar5);
        plVar8 = (longlong *)CONCAT44(uStack_194,uStack_198);
      }
      *(undefined1 *)(param_1 + 0x18) = 1;
      if (plVar8 == (longlong *)0x0) {
        return param_1;
      }
      LOCK();
      plVar1 = plVar8 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 != 1) {
        return param_1;
      }
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 != 1) {
        return param_1;
      }
      (**(code **)(*plVar8 + 8))(plVar8,1);
      return param_1;
    }
  }
LAB_14167bd8c:
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 14167be20 ParseLiteral body=395 status=ok
// SIG undefined ParseLiteral(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong ParseLiteral(longlong param_1,longlong param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  undefined2 *puVar5;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  undefined2 local_e0 [4];
  undefined1 *local_d8;
  undefined2 *local_d0;
  undefined2 *puStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined **local_88;
  undefined2 *local_80;
  undefined2 *puStack_78;
  undefined1 local_70 [16];
  undefined2 *local_58;
  undefined2 *puStack_50;
  undefined1 *local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  puVar1 = *(undefined2 **)(param_2 + 0x20);
  local_d8 = local_e8;
  local_e8[0] = 1;
  if ((*(undefined2 **)(param_2 + 0x10) <= puVar1) &&
     (puVar1 <= *(undefined2 **)(param_2 + 0x18) + -1)) {
    local_c0 = 0;
    uStack_bc = (undefined4)((longlong)puVar1 - (longlong)*(undefined2 **)(param_2 + 0x10) >> 1);
    puVar5 = puVar1;
    local_d0 = puVar1;
    puStack_c8 = puVar1;
    if (puVar1 != *(undefined2 **)(param_2 + 0x18)) {
      do {
        local_e0[0] = *puVar5;
        uVar2 = UE4Function_Private::
                TFunctionRefCaller<<lambda_738cee10f2341e7e9ab39f63da1b5462>,enum_EParseState___cdecl(wchar_t)>
                ::Call(&local_d8,local_e0);
        if (uVar2 == 3) goto LAB_14167bf8a;
      } while ((((1 < uVar2) || (puVar5 = puVar5 + 1, puStack_c8 = puVar5, uVar2 != 1)) &&
               (uVar2 != 2)) && (puVar5 != *(undefined2 **)(param_2 + 0x18)));
      if (puVar5 != puVar1) {
        local_40 = 1;
        local_58 = local_d0;
        puStack_50 = puStack_c8;
        uStack_a0 = (undefined4)((longlong)puVar5 - (longlong)puVar1 >> 1);
        local_d8 = (undefined1 *)CONCAT44(uStack_bc,local_c0);
        local_48 = local_d8;
        puVar3 = (undefined8 *)FUN_141673ec0();
        local_98 = *puVar3;
        uStack_90 = puVar3[1];
        local_88 = &PTR_FUN_144ccfb80;
        local_80 = local_d0;
        puStack_78 = puStack_c8;
        local_70._8_4_ = uStack_a0;
        local_70._0_8_ = local_d8;
        local_70._12_4_ = uStack_9c;
        FExpressionTokenConsumer::Add(param_2,&local_58,&local_98);
        pppuVar4 = &local_88;
        if ((((int)local_98 == 0 && local_98._4_4_ == 0) && (int)uStack_90 == 0) &&
            uStack_90._4_4_ == 0) {
          pppuVar4 = (undefined ***)0x0;
        }
        if (pppuVar4 != (undefined ***)0x0) {
          (*(code *)**pppuVar4)(pppuVar4,0);
        }
      }
    }
  }
LAB_14167bf8a:
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 14167bfb0 FUN_14167bfb0 body=794 status=ok
// SIG undefined FUN_14167bfb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14167bfb0(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined ***pppuVar6;
  longlong *plVar7;
  undefined1 auStack_218 [32];
  undefined1 local_1f8;
  undefined1 local_1f7;
  undefined1 local_1f6 [14];
  undefined **local_1e8;
  undefined **ppuStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  code *local_1c8;
  undefined1 *puStack_1c0;
  code *local_1b8;
  undefined1 *puStack_1b0;
  code *local_1a8;
  undefined **ppuStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined1 *puStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined1 *puStack_180;
  undefined **local_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined **local_110;
  undefined **ppuStack_108;
  undefined **local_100;
  undefined1 local_f8;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined **local_d8;
  undefined ***local_d0;
  undefined **local_a8;
  undefined **ppuStack_a0;
  undefined **local_98;
  char local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  local_1e8 = *(undefined ***)(param_2 + 0x20);
  if ((*(undefined ***)(param_2 + 0x10) <= local_1e8) &&
     (local_1e8 <= (undefined **)(*(longlong *)(param_2 + 0x18) + -2))) {
    local_1d8 = 0;
    lVar3 = (longlong)local_1e8 - (longlong)*(undefined ***)(param_2 + 0x10) >> 1;
    uStack_1d4 = (undefined4)lVar3;
    if (*(short *)local_1e8 == 0x7b) {
      local_100 = (undefined **)(lVar3 << 0x20);
      ppuStack_1e0 = (undefined **)((longlong)local_1e8 + 2);
      puStack_1c0 = &local_1f8;
      local_f8 = 1;
      local_1f8 = 0;
      local_1c8 = FUN_141664e10;
      local_198 = 0x41664e10;
      uStack_194 = 1;
      local_110 = local_1e8;
      ppuStack_108 = ppuStack_1e0;
      puStack_190 = puStack_1c0;
      FTokenStream::ParseToken(param_2 + 0x10,local_88,&local_198,&local_110);
      puStack_1b0 = &local_1f7;
      local_1f7 = 0;
      local_1b8 = FUN_141664e70;
      local_188 = 0x41664e70;
      uStack_184 = 1;
      puStack_180 = puStack_1b0;
      FTokenStream::ParseToken(param_2 + 0x10,&local_a8,&local_188,&local_110);
      if (local_90 == '\0') {
        if (param_3 == '\0') {
LAB_14167c0f3:
          *(undefined1 *)(param_1 + 0x18) = 0;
          return param_1;
        }
        uVar4 = FUN_141670f30(local_140,&local_110);
        FText::FText(param_1,uVar4);
        plVar7 = local_138;
      }
      else {
        ppuStack_1e0 = (undefined **)local_1f6;
        local_1f6[0] = 0;
        local_1a8 = FUN_141664e10;
        local_1e8 = (undefined **)FUN_141664e10;
        ppuStack_1a0 = ppuStack_1e0;
        FTokenStream::ParseToken(param_2 + 0x10,local_68,&local_1e8,&local_110);
        if (((*(undefined ***)(param_2 + 0x10) <= ppuStack_108) &&
            (ppuStack_108 <= (undefined **)(*(longlong *)(param_2 + 0x18) + -2))) &&
           (*(short *)ppuStack_108 == 0x7d)) {
          if (ppuStack_108 < (undefined **)((longlong)ppuStack_108 + 2U)) {
            ppuStack_108 = (undefined **)((longlong)ppuStack_108 + 2U);
          }
          ppuStack_160 = local_110;
          ppuStack_158 = ppuStack_108;
          local_168 = local_98;
          ppuStack_150 = local_100;
          local_148 = (undefined4)((longlong)ppuStack_a0 - (longlong)local_a8 >> 1);
          piVar5 = (int *)FUN_1416738c0();
          local_e8 = *piVar5;
          iStack_e4 = piVar5[1];
          iStack_e0 = piVar5[2];
          iStack_dc = piVar5[3];
          local_d8 = &PTR__scalar_deleting_destructor__144ccfb40;
          pppuVar6 = (undefined ***)operator_new(0x38);
          local_d0 = (undefined ***)0x0;
          if (pppuVar6 != (undefined ***)0x0) {
            *pppuVar6 = local_a8;
            pppuVar6[1] = ppuStack_a0;
            pppuVar6[2] = local_168;
            pppuVar6[3] = ppuStack_160;
            pppuVar6[4] = ppuStack_158;
            pppuVar6[5] = ppuStack_150;
            pppuVar6[6] = (undefined **)CONCAT44(uStack_144,local_148);
            local_d0 = pppuVar6;
          }
          FExpressionTokenConsumer::Add(param_2,&local_110,&local_e8);
          pppuVar6 = &local_d8;
          if (((local_e8 == 0 && iStack_e4 == 0) && iStack_e0 == 0) && iStack_dc == 0) {
            pppuVar6 = (undefined ***)0x0;
          }
          if (pppuVar6 != (undefined ***)0x0) {
            (*(code *)**pppuVar6)(pppuVar6,0);
          }
          goto LAB_14167c23c;
        }
        if (param_3 == '\0') goto LAB_14167c0f3;
        uVar4 = FUN_141670f30(local_128,&local_110);
        FText::FText(param_1,uVar4);
        plVar7 = local_120;
      }
      *(undefined1 *)(param_1 + 0x18) = 1;
      if (plVar7 == (longlong *)0x0) {
        return param_1;
      }
      LOCK();
      plVar1 = plVar7 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 != 1) {
        return param_1;
      }
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar5 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar2 != 1) {
        return param_1;
      }
      (**(code **)(*plVar7 + 8))(plVar7,1);
      return param_1;
    }
  }
LAB_14167c23c:
  *(undefined1 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 14167c2d0 ParseSymbol body=131 status=ok
// SIG undefined ParseSymbol(void)

ulonglong * FTokenStream::ParseSymbol(ulonglong *param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_3 == 0) {
    uVar2 = param_1[2];
  }
  else {
    uVar2 = *(ulonglong *)(param_3 + 8);
  }
  uVar1 = *param_1;
  if ((uVar1 <= uVar2) && (uVar2 <= param_1[1] - 2)) {
    uVar3 = uVar2 + 2;
    if ((param_3 != 0) && (*(ulonglong *)(param_3 + 8) < uVar3)) {
      *(ulonglong *)(param_3 + 8) = uVar3;
    }
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = ((longlong)(uVar2 - uVar1) >> 1) << 0x20;
    *(undefined1 *)(param_2 + 3) = 1;
    return param_2;
  }
  *(undefined1 *)(param_2 + 3) = 0;
  return param_2;
}



// FUNCTION 14167c360 ParseSymbol body=146 status=ok
// SIG undefined ParseSymbol(void)

undefined8 *
FTokenStream::ParseSymbol(undefined8 *param_1,undefined8 *param_2,short param_3,longlong param_4)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  
  if (param_4 == 0) {
    psVar2 = (short *)param_1[2];
  }
  else {
    psVar2 = *(short **)(param_4 + 8);
  }
  psVar1 = (short *)*param_1;
  if ((psVar1 <= psVar2) && (psVar2 <= (short *)(param_1[1] + -2))) {
    if (*psVar2 == param_3) {
      psVar3 = psVar2 + 1;
      if ((param_4 != 0) && (*(short **)(param_4 + 8) < psVar3)) {
        *(short **)(param_4 + 8) = psVar3;
      }
      *param_2 = psVar2;
      param_2[1] = psVar3;
      param_2[2] = ((longlong)psVar2 - (longlong)psVar1 >> 1) << 0x20;
      *(undefined1 *)(param_2 + 3) = 1;
      return param_2;
    }
  }
  *(undefined1 *)(param_2 + 3) = 0;
  return param_2;
}



// FUNCTION 14167c400 ParseToken body=224 status=ok
// SIG undefined ParseToken(void)

undefined8 *
FTokenStream::ParseToken(ulonglong *param_1,undefined8 *param_2,wchar_t *param_3,longlong param_4)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  int iVar3;
  longlong lVar4;
  size_t _MaxCount;
  wchar_t *_Str1;
  
  if (param_4 == 0) {
    _Str1 = (wchar_t *)param_1[2];
  }
  else {
    _Str1 = *(wchar_t **)(param_4 + 8);
  }
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (param_3[lVar4] != L'\0');
  pwVar2 = (wchar_t *)*param_1;
  if (((pwVar2 <= _Str1) &&
      (_MaxCount = (size_t)(int)lVar4, _Str1 <= (wchar_t *)(_MaxCount * -2 + param_1[1]))) &&
     (*_Str1 == *param_3)) {
    iVar3 = wcsncmp(_Str1,param_3,_MaxCount);
    if (iVar3 == 0) {
      pwVar1 = _Str1 + _MaxCount;
      if ((param_4 != 0) && (*(wchar_t **)(param_4 + 8) < pwVar1)) {
        *(wchar_t **)(param_4 + 8) = pwVar1;
      }
      *param_2 = _Str1;
      param_2[1] = pwVar1;
      param_2[2] = ((longlong)_Str1 - (longlong)pwVar2 >> 1) << 0x20;
      *(undefined1 *)(param_2 + 3) = 1;
      return param_2;
    }
  }
  *(undefined1 *)(param_2 + 3) = 0;
  return param_2;
}



// FUNCTION 14167c4e0 ParseToken body=260 status=ok
// SIG undefined ParseToken(void)

undefined8 *
FTokenStream::ParseToken
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 local_res8 [4];
  undefined2 *puStack_30;
  
  if (param_4 == 0) {
    puVar4 = (undefined2 *)param_1[2];
  }
  else {
    puVar4 = *(undefined2 **)(param_4 + 8);
  }
  puVar1 = (undefined2 *)*param_1;
  if (((puVar1 <= puVar4) && (puVar4 <= (undefined2 *)param_1[1] + -1)) &&
     (puVar3 = puVar4, puStack_30 = puVar4, puVar4 != (undefined2 *)param_1[1])) {
    do {
      local_res8[0] = *puVar3;
      uVar2 = (*(code *)*param_3)(param_3[1],local_res8);
      if (uVar2 == 3) goto LAB_14167c5c4;
    } while (((1 < uVar2) || (puVar3 = puVar3 + 1, puStack_30 = puVar3, uVar2 != 1)) &&
            ((uVar2 != 2 && (puVar3 != (undefined2 *)param_1[1]))));
    if (puVar3 != puVar4) {
      if ((param_4 != 0) && (*(undefined2 **)(param_4 + 8) < puVar3)) {
        *(undefined2 **)(param_4 + 8) = puVar3;
      }
      *param_2 = puVar4;
      param_2[1] = puStack_30;
      param_2[2] = ((longlong)puVar4 - (longlong)puVar1 >> 1) << 0x20;
      *(undefined1 *)(param_2 + 3) = 1;
      return param_2;
    }
  }
LAB_14167c5c4:
  *(undefined1 *)(param_2 + 3) = 0;
  return param_2;
}



// FUNCTION 14167c5f0 ProcessIniContents body=409 status=ok
// SIG undefined ProcessIniContents(void)

void ProcessIniContents(undefined8 param_1,short *param_2,longlong param_3,char param_4,char param_5
                       )

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong local_18;
  ulonglong local_10;
  
  cVar1 = IsUsingLocalIniFile();
  if (cVar1 == '\0') {
    uVar2 = FRemoteConfig::FindConfig(&DAT_1464afbc0,param_1);
    if (param_4 != '\0') {
      TSparseArray<TSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(param_3,0);
      if (0 < (int)*(uint *)(param_3 + 0x48)) {
        uVar4 = 0;
        uVar7 = (ulonglong)*(uint *)(param_3 + 0x48);
        do {
          lVar6 = *(longlong *)(param_3 + 0x40);
          if (*(longlong *)(param_3 + 0x40) == 0) {
            lVar6 = param_3 + 0x38;
          }
          uVar3 = (longlong)*(int *)(param_3 + 0x48) - 1U & uVar4;
          uVar4 = uVar4 + 1;
          *(undefined4 *)(lVar6 + uVar3 * 4) = 0xffffffff;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    if (param_5 == '\0') {
      FConfigFile::ProcessInputFileContents(param_3,uVar2);
    }
    else {
      FConfigFile::CombineFromBuffer();
    }
  }
  else {
    local_18 = 0;
    local_10 = 0;
    if (param_5 == '\0') {
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (param_2[lVar6] != 0);
        uVar5 = (int)lVar6 + 1;
        local_10 = (ulonglong)uVar5;
        if (0 < (int)uVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
        }
        FGenericPlatformString::Memcpy(local_18,param_2,(longlong)(int)uVar5 * 2);
      }
      FConfigFile::Read(param_3,&local_18);
    }
    else {
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (param_2[lVar6] != 0);
        uVar5 = (int)lVar6 + 1;
        local_10 = (ulonglong)uVar5;
        if (0 < (int)uVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
        }
        FGenericPlatformString::Memcpy(local_18,param_2,(longlong)(int)uVar5 * 2);
      }
      FConfigFile::Combine(param_3,&local_18);
    }
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14167c790 ProfilingDir body=235 status=ok
// SIG undefined ProfilingDir(void)

longlong * FPaths::ProfilingDir(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong local_28;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  plVar1 = (longlong *)FUN_14167d0d0(local_18);
  lVar2 = plVar1[1];
  local_28 = *plVar1;
  *plVar1 = 0;
  local_20 = (int)plVar1[1];
  local_1c = *(int *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  iVar3 = local_20;
  if (local_1c < (int)((0xb - (uint)((int)lVar2 != 0)) + local_20)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    iVar3 = local_20;
  }
  local_20 = (0xb - (uint)(iVar3 != 0)) + iVar3;
  if (local_1c < local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar3);
  }
  lVar2 = (longlong)iVar3 - (ulonglong)(iVar3 != 0);
  builtin_wcsncpy((wchar_t *)(local_28 + lVar2 * 2),L"Profilin",8);
  lVar2 = local_28 + lVar2 * 2;
  *(undefined4 *)(lVar2 + 0x10) = 0x2f0067;
  *(undefined2 *)(lVar2 + 0x14) = 0;
  *param_1 = local_28;
  *(int *)(param_1 + 1) = local_20;
  *(int *)((longlong)param_1 + 0xc) = local_1c;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14167c880 ProjectConfigDir body=346 status=ok
// SIG undefined ProjectConfigDir(void)

ulonglong * FPaths::ProjectConfigDir(ulonglong *param_1)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong local_28;
  uint local_20;
  int local_1c;
  
  psVar2 = (short *)FUN_1415b0fe0();
  local_28 = 0;
  iVar7 = 0;
  local_1c = 0;
  uVar6 = 0;
  uVar8 = 0;
  iVar5 = 0;
  if ((psVar2 != (short *)0x0) && (uVar6 = 0, uVar8 = 0, iVar5 = 0, *psVar2 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (psVar2[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_20 = uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    iVar5 = local_1c;
    uVar1 = local_20;
    uVar8 = local_28;
    uVar6 = (ulonglong)local_20;
    FGenericPlatformString::Memcpy(local_28,psVar2,(longlong)(int)uVar3 * 2);
    if (uVar1 != 0) goto LAB_14167c920;
  }
  iVar7 = 1;
LAB_14167c920:
  local_20 = (uint)uVar6;
  local_28 = uVar8;
  local_1c = iVar5;
  if (iVar5 < (int)(local_20 + 7 + iVar7)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    uVar6 = (ulonglong)local_20;
  }
  iVar5 = (int)uVar6;
  local_20 = (8 - (uint)(iVar5 != 0)) + iVar5;
  if (local_1c < (int)local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,uVar6);
  }
  lVar4 = (longlong)iVar5 - (ulonglong)(iVar5 != 0);
  builtin_wcsncpy((wchar_t *)(local_28 + lVar4 * 2),L"Conf",4);
  lVar4 = local_28 + lVar4 * 2;
  *(undefined4 *)(lVar4 + 8) = 0x670069;
  *(undefined2 *)(lVar4 + 0xc) = 0x2f;
  *(undefined2 *)(lVar4 + 0xe) = 0;
  *param_1 = local_28;
  *(int *)((longlong)param_1 + 0xc) = local_1c;
  *(uint *)(param_1 + 1) = local_20;
  return param_1;
}



// FUNCTION 14167c9e0 ProjectContentDir body=321 status=ok
// SIG undefined ProjectContentDir(void)

ulonglong * FPaths::ProjectContentDir(ulonglong *param_1)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong local_28;
  uint local_20;
  int local_1c;
  
  psVar2 = (short *)FUN_1415b0fe0();
  local_28 = 0;
  iVar7 = 0;
  local_1c = 0;
  uVar6 = 0;
  uVar8 = 0;
  iVar5 = 0;
  if ((psVar2 != (short *)0x0) && (uVar6 = 0, uVar8 = 0, iVar5 = 0, *psVar2 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (psVar2[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_20 = uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    iVar5 = local_1c;
    uVar1 = local_20;
    uVar8 = local_28;
    uVar6 = (ulonglong)local_20;
    FGenericPlatformString::Memcpy(local_28,psVar2,(longlong)(int)uVar3 * 2);
    if (uVar1 != 0) goto LAB_14167ca80;
  }
  iVar7 = 1;
LAB_14167ca80:
  local_20 = (uint)uVar6;
  local_28 = uVar8;
  local_1c = iVar5;
  if (iVar5 < (int)(local_20 + 8 + iVar7)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    uVar6 = (ulonglong)local_20;
  }
  iVar5 = (int)uVar6;
  local_20 = (9 - (uint)(iVar5 != 0)) + iVar5;
  if (local_1c < (int)local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,uVar6);
  }
  lVar4 = (longlong)iVar5 - (ulonglong)(iVar5 != 0);
  builtin_wcsncpy((wchar_t *)(local_28 + lVar4 * 2),L"Content/",8);
  *(undefined2 *)(local_28 + 0x10 + lVar4 * 2) = 0;
  *param_1 = local_28;
  *(int *)((longlong)param_1 + 0xc) = local_1c;
  *(uint *)(param_1 + 1) = local_20;
  return param_1;
}



// FUNCTION 14167cb30 ProjectDir body=116 status=ok
// SIG undefined ProjectDir(void)

undefined8 * FPaths::ProjectDir(undefined8 *param_1)

{
  short *psVar1;
  int iVar2;
  longlong lVar3;
  
  psVar1 = (short *)FUN_1415b0fe0();
  *param_1 = 0;
  param_1[1] = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (psVar1[lVar3] != 0);
    iVar2 = (int)lVar3 + 1;
    *(int *)(param_1 + 1) = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,psVar1,(longlong)iVar2 * 2);
  }
  return param_1;
}



// FUNCTION 14167cbb0 ProjectIntermediateDir body=250 status=ok
// SIG undefined ProjectIntermediateDir(void)

longlong * FPaths::ProjectIntermediateDir(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong local_28;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  plVar1 = (longlong *)FUN_14167d250(local_18);
  lVar2 = plVar1[1];
  local_28 = *plVar1;
  *plVar1 = 0;
  local_20 = (int)plVar1[1];
  local_1c = *(int *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  iVar3 = local_20;
  if (local_1c < (int)((0xe - (uint)((int)lVar2 != 0)) + local_20)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    iVar3 = local_20;
  }
  local_20 = (0xe - (uint)(iVar3 != 0)) + iVar3;
  if (local_1c < local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar3);
  }
  lVar2 = (longlong)iVar3 - (ulonglong)(iVar3 != 0);
  builtin_wcsncpy((wchar_t *)(local_28 + lVar2 * 2),L"Intermed",8);
  lVar2 = local_28 + lVar2 * 2;
  builtin_wcsncpy((wchar_t *)(lVar2 + 0x10),L"iate",4);
  *(undefined2 *)(lVar2 + 0x18) = 0x2f;
  *(undefined2 *)(lVar2 + 0x1a) = 0;
  *param_1 = local_28;
  *(int *)(param_1 + 1) = local_20;
  *(int *)((longlong)param_1 + 0xc) = local_1c;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14167ccb0 ProjectLogDir body=239 status=ok
// SIG undefined ProjectLogDir(void)

longlong * FPaths::ProjectLogDir(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong local_28;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  plVar1 = (longlong *)FUN_14167d0d0(local_18);
  lVar2 = plVar1[1];
  local_28 = *plVar1;
  *plVar1 = 0;
  local_20 = (int)plVar1[1];
  local_1c = *(int *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  iVar3 = local_20;
  if (local_1c < (int)((6 - (uint)((int)lVar2 != 0)) + local_20)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    iVar3 = local_20;
  }
  local_20 = (6 - (uint)(iVar3 != 0)) + iVar3;
  if (local_1c < local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar3);
  }
  lVar2 = (longlong)iVar3 - (ulonglong)(iVar3 != 0);
  *(undefined8 *)(local_28 + lVar2 * 2) = 0x730067006f004c;
  lVar2 = local_28 + lVar2 * 2;
  *(undefined2 *)(lVar2 + 8) = 0x2f;
  *(undefined2 *)(lVar2 + 10) = 0;
  *param_1 = local_28;
  *(int *)(param_1 + 1) = local_20;
  *(int *)((longlong)param_1 + 0xc) = local_1c;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14167cda0 ProjectModsDir body=337 status=ok
// SIG undefined ProjectModsDir(void)

ulonglong * FPaths::ProjectModsDir(ulonglong *param_1)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong local_28;
  uint local_20;
  int local_1c;
  
  psVar2 = (short *)FUN_1415b0fe0();
  local_28 = 0;
  iVar7 = 0;
  local_1c = 0;
  uVar6 = 0;
  uVar8 = 0;
  iVar5 = 0;
  if ((psVar2 != (short *)0x0) && (uVar6 = 0, uVar8 = 0, iVar5 = 0, *psVar2 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (psVar2[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_20 = uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    iVar5 = local_1c;
    uVar1 = local_20;
    uVar8 = local_28;
    uVar6 = (ulonglong)local_20;
    FGenericPlatformString::Memcpy(local_28,psVar2,(longlong)(int)uVar3 * 2);
    if (uVar1 != 0) goto LAB_14167ce40;
  }
  iVar7 = 1;
LAB_14167ce40:
  local_20 = (uint)uVar6;
  local_28 = uVar8;
  local_1c = iVar5;
  if (iVar5 < (int)(local_20 + 5 + iVar7)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    uVar6 = (ulonglong)local_20;
  }
  iVar5 = (int)uVar6;
  local_20 = (6 - (uint)(iVar5 != 0)) + iVar5;
  if (local_1c < (int)local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,uVar6);
  }
  lVar4 = (longlong)iVar5 - (ulonglong)(iVar5 != 0);
  *(undefined8 *)(local_28 + lVar4 * 2) = 0x730064006f004d;
  lVar4 = local_28 + lVar4 * 2;
  *(undefined2 *)(lVar4 + 8) = 0x2f;
  *(undefined2 *)(lVar4 + 10) = 0;
  *param_1 = local_28;
  *(int *)((longlong)param_1 + 0xc) = local_1c;
  *(uint *)(param_1 + 1) = local_20;
  return param_1;
}



// FUNCTION 14167cf00 FUN_14167cf00 body=116 status=ok
// SIG undefined FUN_14167cf00(void)

undefined8 * FUN_14167cf00(undefined8 *param_1)

{
  short *psVar1;
  int iVar2;
  longlong lVar3;
  
  psVar1 = (short *)FUN_1415a81a0();
  *param_1 = 0;
  param_1[1] = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (psVar1[lVar3] != 0);
    iVar2 = (int)lVar3 + 1;
    *(int *)(param_1 + 1) = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,psVar1,(longlong)iVar2 * 2);
  }
  return param_1;
}



// FUNCTION 14167cf80 ProjectContentDir body=321 status=ok
// SIG undefined ProjectContentDir(void)

ulonglong * FPaths::ProjectContentDir(ulonglong *param_1)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong local_28;
  uint local_20;
  int local_1c;
  
  psVar2 = (short *)FUN_1415b0fe0();
  local_28 = 0;
  iVar7 = 0;
  local_1c = 0;
  uVar6 = 0;
  uVar8 = 0;
  iVar5 = 0;
  if ((psVar2 != (short *)0x0) && (uVar6 = 0, uVar8 = 0, iVar5 = 0, *psVar2 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (psVar2[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_20 = uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    iVar5 = local_1c;
    uVar1 = local_20;
    uVar8 = local_28;
    uVar6 = (ulonglong)local_20;
    FGenericPlatformString::Memcpy(local_28,psVar2,(longlong)(int)uVar3 * 2);
    if (uVar1 != 0) goto LAB_14167d020;
  }
  iVar7 = 1;
LAB_14167d020:
  local_20 = (uint)uVar6;
  local_28 = uVar8;
  local_1c = iVar5;
  if (iVar5 < (int)(local_20 + 8 + iVar7)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    uVar6 = (ulonglong)local_20;
  }
  iVar5 = (int)uVar6;
  local_20 = (9 - (uint)(iVar5 != 0)) + iVar5;
  if (local_1c < (int)local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,uVar6);
  }
  lVar4 = (longlong)iVar5 - (ulonglong)(iVar5 != 0);
  builtin_wcsncpy((wchar_t *)(local_28 + lVar4 * 2),L"Plugins/",8);
  *(undefined2 *)(local_28 + 0x10 + lVar4 * 2) = 0;
  *param_1 = local_28;
  *(int *)((longlong)param_1 + 0xc) = local_1c;
  *(uint *)(param_1 + 1) = local_20;
  return param_1;
}



// FUNCTION 14167d0d0 FUN_14167d0d0 body=212 status=ok
// SIG undefined FUN_14167d0d0(void)

undefined8 * FUN_14167d0d0(undefined8 *param_1)

{
  void *_Src;
  ulonglong uVar1;
  int iVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e3270) {
    _Init_thread_header(&DAT_1468e3270);
    if (DAT_1468e3270 == -1) {
      UE4Paths_Private::GameSavedDir(&DAT_1468e3260);
      atexit((_func_5014 *)&LAB_143e7a760);
      _Init_thread_footer(&DAT_1468e3270);
    }
  }
  *param_1 = 0;
  uVar1 = DAT_1468e3268;
  _Src = DAT_1468e3260;
  iVar2 = (int)DAT_1468e3268;
  *(int *)(param_1 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,uVar1 & 0xffffffff,0);
  _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar2 * 2);
  return param_1;
}



// FUNCTION 14167d1b0 FUN_14167d1b0 body=116 status=ok
// SIG undefined FUN_14167d1b0(void)

longlong * FUN_14167d1b0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  FUN_14167d4c0();
  iVar1 = (int)param_1[1];
  iVar3 = (7 - (uint)(iVar1 != 0)) + iVar1;
  *(int *)(param_1 + 1) = iVar3;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  lVar4 = (longlong)iVar1 - (ulonglong)(iVar1 != 0);
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + lVar4 * 2) = 0x65007600610053;
  lVar2 = lVar2 + lVar4 * 2;
  *(undefined4 *)(lVar2 + 8) = 0x2f0064;
  *(undefined2 *)(lVar2 + 0xc) = 0;
  return param_1;
}



// FUNCTION 14167d230 GetGameBundleId body=23 status=ok
// SIG undefined GetGameBundleId(void)

undefined8 UKismetSystemLibrary::GetGameBundleId(undefined8 param_1)

{
  UCheatManagerGunfire::GetAllCheats();
  return param_1;
}



// FUNCTION 14167d250 FUN_14167d250 body=617 status=ok
// SIG undefined FUN_14167d250(void)

longlong * FUN_14167d250(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *_Dst;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  undefined2 *local_48;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 local_30;
  
  lVar2 = FUN_141669ec0();
  if (1 < *(int *)(lVar2 + 8)) {
    FString::FString(param_1,lVar2);
    return param_1;
  }
  cVar1 = FUN_141681ae0();
  if (cVar1 == '\0') {
    FPaths::ProjectDir(param_1);
    return param_1;
  }
  psVar3 = (short *)FUN_1416b1380();
  _Dst = (undefined2 *)0x0;
  local_48 = (undefined2 *)0x0;
  local_40 = (undefined2 *)(ulonglong)(uint)local_40;
  lVar2 = -1;
  iVar9 = 0;
  uVar10 = 0;
  if ((psVar3 != (short *)0x0) && (lVar8 = lVar2, iVar9 = 0, uVar10 = 0, *psVar3 != 0)) {
    do {
      lVar8 = lVar8 + 1;
    } while (psVar3[lVar8] != 0);
    uVar7 = (int)lVar8 + 1;
    local_40 = (undefined2 *)(ulonglong)uVar7;
    iVar9 = 0;
    uVar10 = uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      iVar9 = local_40._4_4_;
      uVar10 = (uint)local_40;
    }
    _Dst = local_48;
    FGenericPlatformString::Memcpy(local_48,psVar3,(longlong)(int)uVar7 * 2);
    if (1 < (int)uVar10) goto LAB_14167d393;
  }
  if (_Dst != &DAT_146299580) {
    if (DAT_146299580 == 0) {
      iVar5 = 0;
    }
    else {
      do {
        lVar2 = lVar2 + 1;
      } while ((&DAT_146299580)[lVar2] != 0);
      iVar5 = (int)lVar2 + 1;
    }
    iVar4 = 0;
    local_40 = (undefined2 *)((ulonglong)local_40 & 0xffffffff00000000);
    if (iVar9 != iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,iVar5);
      iVar4 = (int)local_40;
      _Dst = local_48;
      iVar9 = local_40._4_4_;
    }
    uVar10 = iVar5 + iVar4;
    local_40 = (undefined2 *)CONCAT44(local_40._4_4_,uVar10);
    if (iVar9 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
      _Dst = local_48;
      uVar10 = (uint)local_40;
    }
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop(_Dst,&DAT_146299580,(longlong)iVar5 * 2);
    }
  }
LAB_14167d393:
  puVar6 = &DAT_143f3eda8;
  if (uVar10 != 0) {
    puVar6 = _Dst;
  }
  local_48 = (undefined2 *)FUN_1416b1ca0();
  local_38 = (undefined2 *)0x0;
  local_30 = 0;
  local_40 = puVar6;
  FPaths::CombineInternal(&local_38,&local_48,2);
  iVar9 = (int)local_30;
  iVar5 = local_30._4_4_;
  local_48 = local_38;
  local_38 = (undefined2 *)0x0;
  iVar4 = (2 - (uint)((int)local_30 != 0)) + (int)local_30;
  local_40._0_4_ = (int)local_30;
  local_40._4_4_ = local_30._4_4_;
  local_30 = 0;
  if (iVar5 < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
    iVar9 = (uint)local_40;
  }
  local_40._0_4_ = (2 - (uint)(iVar9 != 0)) + iVar9;
  if (local_40._4_4_ < (int)(uint)local_40) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar9);
  }
  local_48[(longlong)iVar9 - (ulonglong)(iVar9 != 0)] = 0x2f;
  (local_48 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)))[1] = 0;
  *param_1 = (longlong)local_48;
  *(uint *)(param_1 + 1) = (uint)local_40;
  *(int *)((longlong)param_1 + 0xc) = local_40._4_4_;
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (_Dst != (undefined2 *)0x0) {
    FMemory::Free(_Dst);
  }
  return param_1;
}



// FUNCTION 14167d4c0 FUN_14167d4c0 body=617 status=ok
// SIG undefined FUN_14167d4c0(void)

longlong * FUN_14167d4c0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *_Dst;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  undefined2 *local_48;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 local_30;
  
  lVar2 = FUN_141669ec0();
  if (1 < *(int *)(lVar2 + 8)) {
    FString::FString(param_1,lVar2);
    return param_1;
  }
  cVar1 = FUN_141681ae0();
  if (cVar1 == '\0') {
    FPaths::ProjectDir(param_1);
    return param_1;
  }
  psVar3 = (short *)FUN_1416b1380();
  _Dst = (undefined2 *)0x0;
  local_48 = (undefined2 *)0x0;
  local_40 = (undefined2 *)(ulonglong)(uint)local_40;
  lVar2 = -1;
  iVar9 = 0;
  uVar10 = 0;
  if ((psVar3 != (short *)0x0) && (lVar8 = lVar2, iVar9 = 0, uVar10 = 0, *psVar3 != 0)) {
    do {
      lVar8 = lVar8 + 1;
    } while (psVar3[lVar8] != 0);
    uVar7 = (int)lVar8 + 1;
    local_40 = (undefined2 *)(ulonglong)uVar7;
    iVar9 = 0;
    uVar10 = uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      iVar9 = local_40._4_4_;
      uVar10 = (uint)local_40;
    }
    _Dst = local_48;
    FGenericPlatformString::Memcpy(local_48,psVar3,(longlong)(int)uVar7 * 2);
    if (1 < (int)uVar10) goto LAB_14167d603;
  }
  if (_Dst != &DAT_146299580) {
    if (DAT_146299580 == 0) {
      iVar5 = 0;
    }
    else {
      do {
        lVar2 = lVar2 + 1;
      } while ((&DAT_146299580)[lVar2] != 0);
      iVar5 = (int)lVar2 + 1;
    }
    iVar4 = 0;
    local_40 = (undefined2 *)((ulonglong)local_40 & 0xffffffff00000000);
    if (iVar9 != iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,iVar5);
      iVar4 = (int)local_40;
      _Dst = local_48;
      iVar9 = local_40._4_4_;
    }
    uVar10 = iVar5 + iVar4;
    local_40 = (undefined2 *)CONCAT44(local_40._4_4_,uVar10);
    if (iVar9 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
      _Dst = local_48;
      uVar10 = (uint)local_40;
    }
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop(_Dst,&DAT_146299580,(longlong)iVar5 * 2);
    }
  }
LAB_14167d603:
  puVar6 = &DAT_143f3eda8;
  if (uVar10 != 0) {
    puVar6 = _Dst;
  }
  local_48 = (undefined2 *)FUN_1416b20b0();
  local_38 = (undefined2 *)0x0;
  local_30 = 0;
  local_40 = puVar6;
  FPaths::CombineInternal(&local_38,&local_48,2);
  iVar9 = (int)local_30;
  iVar5 = local_30._4_4_;
  local_48 = local_38;
  local_38 = (undefined2 *)0x0;
  iVar4 = (2 - (uint)((int)local_30 != 0)) + (int)local_30;
  local_40._0_4_ = (int)local_30;
  local_40._4_4_ = local_30._4_4_;
  local_30 = 0;
  if (iVar5 < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
    iVar9 = (uint)local_40;
  }
  local_40._0_4_ = (2 - (uint)(iVar9 != 0)) + iVar9;
  if (local_40._4_4_ < (int)(uint)local_40) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar9);
  }
  local_48[(longlong)iVar9 - (ulonglong)(iVar9 != 0)] = 0x2f;
  (local_48 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)))[1] = 0;
  *param_1 = (longlong)local_48;
  *(uint *)(param_1 + 1) = (uint)local_40;
  *(int *)((longlong)param_1 + 0xc) = local_40._4_4_;
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (_Dst != (undefined2 *)0x0) {
    FMemory::Free(_Dst);
  }
  return param_1;
}



// FUNCTION 14167d730 QuotedString body=2310 status=ok
// SIG undefined QuotedString(void)

/* WARNING: Removing unreachable block (ram,0x00014167de9a) */
/* WARNING: Removing unreachable block (ram,0x00014167dd46) */
/* WARNING: Removing unreachable block (ram,0x00014167dd59) */
/* WARNING: Removing unreachable block (ram,0x00014167dd73) */
/* WARNING: Removing unreachable block (ram,0x00014167dd7d) */
/* WARNING: Removing unreachable block (ram,0x00014167dea9) */
/* WARNING: Removing unreachable block (ram,0x00014167dec3) */
/* WARNING: Removing unreachable block (ram,0x00014167decd) */
/* WARNING: Removing unreachable block (ram,0x00014167df05) */

ulonglong FParse::QuotedString(ushort *param_1,longlong *param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulonglong uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined2 uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  wchar_t wVar12;
  wchar_t *local_78;
  uint local_70;
  uint local_6c;
  wchar_t *local_68;
  uint local_60;
  uint local_5c;
  wchar_t *local_58;
  uint local_50;
  uint local_4c;
  wchar_t *local_48;
  uint local_40;
  uint local_3c;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  uVar5 = (ulonglong)*param_1;
  pwVar11 = (wchar_t *)(param_1 + 1);
  if (*param_1 != 0x22) {
LAB_14167e026:
    return uVar5 & 0xffffffffffffff00;
  }
  do {
    pwVar7 = (wchar_t *)0x0;
LAB_14167d7b0:
    while( true ) {
      wVar12 = *pwVar11;
      if (((ushort)wVar12 < 0x23) &&
         (uVar5 = (ulonglong)(ushort)wVar12, (0x400002401U >> (uVar5 & 0x3f) & 1) != 0)) {
        if (wVar12 == L'\"') {
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = (int)((longlong)pwVar11 + (2 - (longlong)param_1) >> 1);
          }
          return 1;
        }
        goto LAB_14167e026;
      }
      if (wVar12 == L'\\') break;
      pwVar10 = pwVar11;
      if (wVar12 == L'\0') {
LAB_14167da20:
        pwVar11 = pwVar10 + 1;
      }
      else {
        iVar2 = (int)param_2[1];
        pwVar10 = (wchar_t *)(ulonglong)(iVar2 - 1);
        if (iVar2 < 1) {
          pwVar10 = pwVar7;
        }
        iVar2 = (iVar2 < 1) + 1 + iVar2;
        *(int *)(param_2 + 1) = iVar2;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
        }
        pwVar11 = pwVar11 + 1;
        *(wchar_t *)(*param_2 + (longlong)(int)pwVar10 * 2) = wVar12;
        *(undefined2 *)(*param_2 + 2 + (longlong)(int)pwVar10 * 2) = 0;
      }
    }
    wVar12 = pwVar11[1];
    pwVar10 = pwVar11 + 1;
    if (wVar12 == L'\\') break;
    if (wVar12 == L'\"') {
      iVar2 = (int)param_2[1];
      pwVar10 = (wchar_t *)(ulonglong)(iVar2 - 1);
      if (iVar2 < 1) {
        pwVar10 = pwVar7;
      }
      iVar2 = (iVar2 < 1) + 1 + iVar2;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      pwVar11 = pwVar11 + 2;
      *(undefined2 *)(*param_2 + (longlong)(int)pwVar10 * 2) = 0x22;
      *(undefined2 *)(*param_2 + 2 + (longlong)(int)pwVar10 * 2) = 0;
      goto LAB_14167d7b0;
    }
    if (wVar12 == L'\'') {
      iVar2 = (int)param_2[1];
      pwVar10 = (wchar_t *)(ulonglong)(iVar2 - 1);
      if (iVar2 < 1) {
        pwVar10 = pwVar7;
      }
      iVar2 = (iVar2 < 1) + 1 + iVar2;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      pwVar11 = pwVar11 + 2;
      *(undefined2 *)(*param_2 + (longlong)(int)pwVar10 * 2) = 0x27;
      *(undefined2 *)(*param_2 + 2 + (longlong)(int)pwVar10 * 2) = 0;
      goto LAB_14167d7b0;
    }
    if (wVar12 == L'n') {
      iVar2 = (int)param_2[1];
      pwVar10 = (wchar_t *)(ulonglong)(iVar2 - 1);
      if (iVar2 < 1) {
        pwVar10 = pwVar7;
      }
      iVar2 = (iVar2 < 1) + 1 + iVar2;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      pwVar11 = pwVar11 + 2;
      *(undefined2 *)(*param_2 + (longlong)(int)pwVar10 * 2) = 10;
      *(undefined2 *)(*param_2 + 2 + (longlong)(int)pwVar10 * 2) = 0;
      goto LAB_14167d7b0;
    }
    if (wVar12 == L'r') {
      iVar2 = (int)param_2[1];
      pwVar11 = (wchar_t *)(ulonglong)(iVar2 - 1);
      if (iVar2 < 1) {
        pwVar11 = pwVar7;
      }
      iVar3 = (int)pwVar11;
      iVar2 = (iVar2 < 1) + 1 + iVar2;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      uVar8 = 0xd;
LAB_14167da0d:
      *(undefined2 *)(*param_2 + (longlong)iVar3 * 2) = uVar8;
      *(undefined2 *)(*param_2 + 2 + (longlong)iVar3 * 2) = 0;
      goto LAB_14167da20;
    }
    if (wVar12 == L't') {
      iVar2 = (int)param_2[1];
      pwVar11 = (wchar_t *)(ulonglong)(iVar2 - 1);
      if (iVar2 < 1) {
        pwVar11 = pwVar7;
      }
      iVar3 = (int)pwVar11;
      iVar2 = (iVar2 < 1) + 1 + iVar2;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
      }
      uVar8 = 9;
      goto LAB_14167da0d;
    }
    if ((ushort)(wVar12 + L'￐') < 8) {
      local_78 = (wchar_t *)0x0;
      local_6c = 0;
      pwVar6 = pwVar7;
      pwVar9 = pwVar7;
      pwVar11 = pwVar10;
      pwVar10 = pwVar7;
      while (((iVar2 = (int)pwVar9, 0x22 < (ushort)wVar12 ||
              ((0x400002401U >> ((ulonglong)(ushort)wVar12 & 0x3f) & 1) == 0)) &&
             ((ushort)(wVar12 + L'￐') < 8))) {
        if (iVar2 == 0) {
LAB_14167da71:
          iVar3 = 0;
        }
        else {
          if (2 < iVar2 + -1) break;
          iVar3 = iVar2 + -1;
          if (iVar2 < 1) goto LAB_14167da71;
        }
        local_70 = (iVar2 < 1) + 1 + iVar2;
        if ((int)pwVar6 < (int)local_70) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,pwVar9);
          pwVar6 = (wchar_t *)(ulonglong)local_6c;
          pwVar10 = local_78;
        }
        pwVar9 = (wchar_t *)(ulonglong)local_70;
        pwVar11 = pwVar11 + 1;
        pwVar10[iVar3] = wVar12;
        pwVar10[(longlong)iVar3 + 1] = L'\0';
        wVar12 = *pwVar11;
      }
      pwVar6 = L"";
      if (iVar2 != 0) {
        pwVar6 = pwVar10;
      }
      uVar4 = wcstoul(pwVar6,(wchar_t **)0x0,8);
      if ((short)uVar4 != 0) {
        iVar2 = (int)param_2[1];
        pwVar6 = (wchar_t *)(ulonglong)(iVar2 - 1);
        if (iVar2 < 1) {
          pwVar6 = pwVar7;
        }
        iVar2 = (iVar2 < 1) + 1 + iVar2;
        *(int *)(param_2 + 1) = iVar2;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow();
        }
        *(short *)(*param_2 + (longlong)(int)pwVar6 * 2) = (short)uVar4;
        *(undefined2 *)(*param_2 + 2 + (longlong)(int)pwVar6 * 2) = 0;
      }
      if (pwVar10 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      goto LAB_14167d7b0;
    }
    pwVar6 = pwVar7;
    if (wVar12 == L'x') {
      pwVar11 = pwVar11 + 2;
      local_68 = (wchar_t *)0x0;
      local_5c = 0;
      pwVar10 = pwVar7;
      while( true ) {
        wVar12 = *pwVar11;
        iVar2 = (int)pwVar7;
        if ((((ushort)wVar12 < 0x23) &&
            ((0x400002401U >> ((ulonglong)(ushort)wVar12 & 0x3f) & 1) != 0)) ||
           (iVar3 = iswxdigit(wVar12), iVar3 == 0)) break;
        wVar12 = *pwVar11;
        if (wVar12 != L'\0') {
          iVar3 = iVar2 + -1;
          if (iVar2 < 1) {
            iVar3 = 0;
          }
          local_60 = (iVar2 < 1) + 1 + iVar2;
          if ((int)pwVar10 < (int)local_60) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68);
            pwVar10 = (wchar_t *)(ulonglong)local_5c;
            pwVar6 = local_68;
          }
          pwVar7 = (wchar_t *)(ulonglong)local_60;
          pwVar6[iVar3] = wVar12;
          pwVar6[(longlong)iVar3 + 1] = L'\0';
        }
        pwVar11 = pwVar11 + 1;
      }
      pwVar7 = L"";
      if (iVar2 != 0) {
        pwVar7 = pwVar6;
      }
      uVar4 = wcstoul(pwVar7,(wchar_t **)0x0,0x10);
      if ((short)uVar4 != 0) {
        iVar2 = (int)param_2[1];
        iVar3 = iVar2 + -1;
        if (iVar2 < 1) {
          iVar3 = 0;
        }
        iVar2 = (iVar2 < 1) + 1 + iVar2;
        *(int *)(param_2 + 1) = iVar2;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow();
        }
        *(short *)(*param_2 + (longlong)iVar3 * 2) = (short)uVar4;
        *(undefined2 *)(*param_2 + 2 + (longlong)iVar3 * 2) = 0;
      }
    }
    else {
      if (wVar12 == L'u') {
        pwVar11 = pwVar11 + 2;
        local_58 = (wchar_t *)0x0;
        local_4c = 0;
        pwVar10 = pwVar7;
        while( true ) {
          wVar12 = *pwVar11;
          iVar2 = (int)pwVar7;
          if ((((ushort)wVar12 < 0x23) &&
              ((0x400002401U >> ((ulonglong)(ushort)wVar12 & 0x3f) & 1) != 0)) ||
             ((iVar3 = iswxdigit(wVar12), iVar3 == 0 || ((iVar2 != 0 && (3 < iVar2 + -1)))))) break;
          wVar12 = *pwVar11;
          if (wVar12 != L'\0') {
            iVar3 = iVar2 + -1;
            if (iVar2 < 1) {
              iVar3 = 0;
            }
            local_50 = (iVar2 < 1) + 1 + iVar2;
            if ((int)pwVar10 < (int)local_50) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
              pwVar10 = (wchar_t *)(ulonglong)local_4c;
              pwVar6 = local_58;
            }
            pwVar7 = (wchar_t *)(ulonglong)local_50;
            pwVar6[iVar3] = wVar12;
            pwVar6[(longlong)iVar3 + 1] = L'\0';
          }
          pwVar11 = pwVar11 + 1;
        }
        pwVar7 = L"";
        if (iVar2 != 0) {
          pwVar7 = pwVar6;
        }
        wcstoul(pwVar7,(wchar_t **)0x0,0x10);
        FUnicodeChar::CodepointToString();
        goto LAB_14167df0d;
      }
      if (wVar12 != L'U') {
        iVar2 = (int)param_2[1];
        iVar3 = (2 - (uint)(iVar2 != 0)) + iVar2;
        *(int *)(param_2 + 1) = iVar3;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        puVar1 = (undefined2 *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
        *puVar1 = 0x5c;
        puVar1[1] = 0;
        wVar12 = *pwVar10;
        if (wVar12 != L'\0') {
          iVar2 = (int)param_2[1];
          pwVar10 = (wchar_t *)(ulonglong)(iVar2 - 1);
          if (iVar2 < 1) {
            pwVar10 = pwVar7;
          }
          iVar2 = (iVar2 < 1) + 1 + iVar2;
          *(int *)(param_2 + 1) = iVar2;
          if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
          }
          *(wchar_t *)(*param_2 + (longlong)(int)pwVar10 * 2) = wVar12;
          *(undefined2 *)(*param_2 + 2 + (longlong)(int)pwVar10 * 2) = 0;
        }
        pwVar11 = pwVar11 + 2;
        goto LAB_14167d7b0;
      }
      pwVar11 = pwVar11 + 2;
      local_48 = (wchar_t *)0x0;
      local_3c = 0;
      pwVar10 = pwVar7;
      while( true ) {
        wVar12 = *pwVar11;
        iVar2 = (int)pwVar7;
        if (((((ushort)wVar12 < 0x23) &&
             ((0x400002401U >> ((ulonglong)(ushort)wVar12 & 0x3f) & 1) != 0)) ||
            (iVar3 = iswxdigit(wVar12), iVar3 == 0)) || ((iVar2 != 0 && (7 < iVar2 + -1)))) break;
        wVar12 = *pwVar11;
        if (wVar12 != L'\0') {
          iVar3 = iVar2 + -1;
          if (iVar2 < 1) {
            iVar3 = 0;
          }
          local_40 = (iVar2 < 1) + 1 + iVar2;
          if ((int)pwVar10 < (int)local_40) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
            pwVar10 = (wchar_t *)(ulonglong)local_3c;
            pwVar6 = local_48;
          }
          pwVar7 = (wchar_t *)(ulonglong)local_40;
          pwVar6[iVar3] = wVar12;
          pwVar6[(longlong)iVar3 + 1] = L'\0';
        }
        pwVar11 = pwVar11 + 1;
      }
      pwVar7 = L"";
      if (iVar2 != 0) {
        pwVar7 = pwVar6;
      }
      wcstoul(pwVar7,(wchar_t **)0x0,0x10);
      FUnicodeChar::CodepointToString();
    }
LAB_14167df0d:
    if (pwVar6 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  } while( true );
  iVar2 = (int)param_2[1];
  iVar3 = (2 - (uint)(iVar2 != 0)) + iVar2;
  *(int *)(param_2 + 1) = iVar3;
  if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
  }
  pwVar11 = pwVar11 + 2;
  puVar1 = (undefined2 *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
  *puVar1 = 0x5c;
  puVar1[1] = 0;
  goto LAB_14167d7b0;
}



// FUNCTION 14167e040 Read body=483 status=ok
// SIG undefined Read(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FRemoteConfig::Read(longlong *param_1,short *param_2,short *param_3)

{
  short sVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_8c8 [32];
  undefined8 *local_8a8;
  undefined1 local_8a0;
  LARGE_INTEGER local_898;
  longlong local_890;
  ulonglong local_888;
  undefined2 *local_880;
  int local_878;
  longlong *local_870;
  longlong *local_868;
  longlong local_858 [5];
  undefined2 local_830;
  short local_82e [1027];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_8c8;
  GenerateRemotePath(param_1,&local_880,param_2);
  if (*(float *)(param_1 + 10) <= 0.0 && *(float *)(param_1 + 10) != 0.0) {
    local_8a8 = &DAT_1468e2360;
    FConfigCacheIni::GetFloat(DAT_1468b6148,L"RemoteConfiguration",L"Timeout");
  }
  local_858[0] = 0;
  lVar4 = (longlong)local_82e - (longlong)param_3;
  local_858[1] = 0;
  local_830 = 0;
  do {
    sVar1 = *param_3;
    *(short *)(lVar4 + (longlong)param_3) = sVar1;
    param_3 = param_3 + 1;
  } while (sVar1 != 0);
  local_888 = 0;
  local_890 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_2[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_888 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_890,0);
    }
    FGenericPlatformString::Memcpy(local_890,param_2,(longlong)(int)uVar3 * 2);
  }
  local_870 = &local_890;
  local_868 = local_858;
  FUN_14165f430(param_1,&local_898,&local_870,0);
  lVar4 = *param_1 + (longlong)(int)local_898.s.LowPart * 0x848 + 0x10;
  if (local_890 != 0) {
    FMemory::Free();
  }
  if (local_858[0] != 0) {
    FMemory::Free();
  }
  QueryPerformanceCounter(&local_898);
  local_8a0 = 1;
  local_8a8 = (undefined8 *)0x0;
  *(double *)(lVar4 + 0x18) =
       (double)CONCAT44(local_898.s.HighPart,local_898.s.LowPart) * DAT_1468b02f8 + 16777216.0;
  puVar5 = &DAT_143f3eda8;
  if (local_878 != 0) {
    puVar5 = local_880;
  }
  uVar2 = FRemoteConfigAsyncTaskManager::StartTask(&DAT_1464afc30,param_2,puVar5,lVar4);
  if (local_880 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 14167e230 Rehash body=552 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FString,FRemoteConfigAsyncIOInfo>,TDefaultMapHashableKeyFuncs<FString,FRemoteConfigAsyncIOInfo,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar12 = 0;
      uVar13 = (ulonglong)uVar5;
      do {
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar12 = uVar12 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar10 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_38;
      }
      uVar5 = *puVar14;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_14167e35f;
        uVar5 = puVar14[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_14167e35f:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        puVar11 = (undefined8 *)((longlong)iStack_2c * 0x848 + *param_1);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar11;
        }
        uVar5 = FUN_140438070(puVar9);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)((longlong)puVar11 + 0x844) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar11 + 0x108) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 14167e460 Remove body=165 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*>,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_1;
    lVar6 = (longlong)param_2 * 0x20;
    lVar4 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar6 + 0x1c + lVar2));
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    piVar5 = (int *)((longlong)plVar3 + lVar4 * 4);
    iVar1 = *(int *)((longlong)plVar3 + lVar4 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar5 = *(int *)(lVar6 + 0x18 + lVar2);
        break;
      }
      piVar5 = (int *)(lVar2 + 0x18 + (longlong)iVar1 * 0x20);
      iVar1 = *piVar5;
    }
  }
  if (*(longlong *)((longlong)param_2 * 0x20 + *param_1) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 14167e510 RemoveAtImpl body=217 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FExpressionCompiler::FWrappedOperator,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (param_3 != 0) {
    piVar3 = (int *)(*param_1 + (longlong)param_2 * 0x68);
    iVar4 = param_3;
    do {
      piVar2 = piVar3 + 4;
      if (((piVar3[3] == 0 && piVar3[2] == 0) && piVar3[1] == 0) && *piVar3 == 0) {
        piVar2 = (int *)0x0;
      }
      if (piVar2 != (int *)0x0) {
        (*(code *)**(undefined8 **)piVar2)(piVar2,0);
      }
      piVar3 = piVar3 + 0x1a;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = (int)param_1[1];
    iVar1 = (iVar4 - param_2) - param_3;
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x68),
                 (void *)((longlong)(param_2 + param_3) * 0x68 + *param_1),(longlong)iVar1 * 0x68);
      iVar4 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar4 - param_3;
    if (param_4 != '\0') {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::
      ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 14167e5f0 RemoveDuplicateSlashes body=206 status=ok
// SIG undefined RemoveDuplicateSlashes(void)

void FPaths::RemoveDuplicateSlashes(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong local_18 [2];
  
  iVar1 = FUN_141592950(param_1,&DAT_144ccc8ec,0,0,0xffffffff);
  while (iVar1 != -1) {
    plVar2 = (longlong *)FString::Replace(param_1,local_18,&DAT_144ccc8f4,&DAT_144ccb274,0);
    if (param_1 != plVar2) {
      if (*param_1 != 0) {
        FMemory::Free();
      }
      *param_1 = *plVar2;
      *plVar2 = 0;
      *(int *)(param_1 + 1) = (int)plVar2[1];
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0xc);
      plVar2[1] = 0;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    iVar1 = FUN_141592950(param_1,&DAT_144ccc8ec,0,0,0xffffffff);
  }
  return;
}



// FUNCTION 14167e6c0 RemoveOutputDevice body=277 status=ok
// SIG undefined RemoveOutputDevice(void)

void FOutputDeviceRedirector::RemoveOutputDevice(longlong param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x48);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  lVar2 = (longlong)*(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar7 = 0;
    bVar8 = **(longlong **)(param_1 + 0x30) != param_2;
    lVar6 = 0;
    iVar4 = 0;
    do {
      lVar6 = lVar6 + 1;
      iVar5 = iVar4 + 1;
      if (lVar6 < lVar2) {
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x30) + lVar6 * 8);
        do {
          if (bVar8 != (*plVar3 != param_2)) break;
          iVar5 = iVar5 + 1;
          lVar6 = lVar6 + 1;
          plVar3 = plVar3 + 1;
        } while (lVar6 < lVar2);
      }
      if (bVar8 != false) {
        if (iVar7 != iVar4) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar7 * 8),
                     (void *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar4 * 8),
                     (longlong)(iVar5 - iVar4) << 3);
        }
        iVar7 = iVar7 + (iVar5 - iVar4);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar4 = iVar5;
    } while (lVar6 < lVar2);
    *(int *)(param_1 + 0x38) = iVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00014167e7ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 14167e7e0 ReplaceIniCharWithSpecialChar body=192 status=ok
// SIG undefined ReplaceIniCharWithSpecialChar(void)

longlong * FRemoteConfig::ReplaceIniCharWithSpecialChar(longlong *param_1)

{
  longlong *plVar1;
  undefined **ppuVar2;
  longlong local_18 [2];
  
  FString::FString();
  ppuVar2 = &PTR_DAT_1464afcc0;
  do {
    plVar1 = (longlong *)FString::Replace(param_1,local_18,*ppuVar2,ppuVar2[1],1);
    if (param_1 != plVar1) {
      if (*param_1 != 0) {
        FMemory::Free();
      }
      *param_1 = *plVar1;
      *plVar1 = 0;
      *(int *)(param_1 + 1) = (int)plVar1[1];
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
      plVar1[1] = 0;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    ppuVar2 = ppuVar2 + 2;
  } while ((longlong)ppuVar2 < 0x1464afd20);
  return param_1;
}



// FUNCTION 14167e8a0 ReplaceIniSpecialCharWithChar body=192 status=ok
// SIG undefined ReplaceIniSpecialCharWithChar(void)

longlong * FRemoteConfig::ReplaceIniSpecialCharWithChar(longlong *param_1)

{
  longlong *plVar1;
  undefined **ppuVar2;
  longlong local_18 [2];
  
  FString::FString();
  ppuVar2 = &PTR_u__OpenBracket__1464afcc8;
  do {
    plVar1 = (longlong *)FString::Replace(param_1,local_18,*ppuVar2,ppuVar2[-1],1);
    if (param_1 != plVar1) {
      if (*param_1 != 0) {
        FMemory::Free();
      }
      *param_1 = *plVar1;
      *plVar1 = 0;
      *(int *)(param_1 + 1) = (int)plVar1[1];
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
      plVar1[1] = 0;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    ppuVar2 = ppuVar2 + 2;
  } while ((longlong)ppuVar2 < 0x1464afd28);
  return param_1;
}



// FUNCTION 14167e960 FUN_14167e960 body=226 status=ok
// SIG undefined FUN_14167e960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14167e960(undefined8 param_1,char param_2)

{
  double dVar1;
  LARGE_INTEGER local_res18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e31d8) {
    _Init_thread_header(&DAT_1468e31d8);
    if (DAT_1468e31d8 == -1) {
      QueryPerformanceCounter(local_res18);
      _DAT_1468e31d0 = (double)local_res18[0].QuadPart * DAT_1468b02f8 + 16777216.0;
      _Init_thread_footer(&DAT_1468e31d8);
    }
  }
  QueryPerformanceCounter(local_res18);
  dVar1 = (double)local_res18[0].QuadPart * DAT_1468b02f8 + 16777216.0;
  if ((param_2 != '\0') || (_DAT_1464afd60 < dVar1 - _DAT_1468e31d0)) {
    _DAT_1468e31d0 = dVar1;
    FUN_1416852f0(param_1);
  }
  return;
}



// FUNCTION 14167ebb0 FUN_14167ebb0 body=112 status=ok
// SIG undefined FUN_14167ebb0(void)

void FUN_14167ebb0(longlong param_1,undefined8 *param_2)

{
  longlong local_28 [2];
  undefined1 local_18;
  undefined1 local_17;
  
  FString::FString(local_28,param_1 + 8);
  local_18 = *(undefined1 *)(param_1 + 0x18);
  local_17 = *(undefined1 *)(param_1 + 0x19);
  *param_2 = &PTR_FUN_144ccfba0;
  FString::FString(param_2 + 1,local_28);
  *(undefined1 *)(param_2 + 3) = local_18;
  *(undefined1 *)((longlong)param_2 + 0x19) = local_17;
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14167ec40 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<2120,8>_>,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x848,0);
  iVar4 = (int)(uVar3 / 0x848);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x848,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 14167ecd0 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<2120,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x848,0);
    iVar3 = (int)(uVar1 / 0x848);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x848,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 14167ed50 RootDir body=116 status=ok
// SIG undefined RootDir(void)

undefined8 * FPaths::RootDir(undefined8 *param_1)

{
  short *psVar1;
  int iVar2;
  longlong lVar3;
  
  psVar1 = (short *)FUN_1415b59d0();
  *param_1 = 0;
  param_1[1] = 0;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (psVar1[lVar3] != 0);
    iVar2 = (int)lVar3 + 1;
    *(int *)(param_1 + 1) = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,psVar1,(longlong)iVar2 * 2);
  }
  return param_1;
}



// FUNCTION 14167edd0 SandboxesDir body=357 status=ok
// SIG undefined SandboxesDir(void)

ulonglong * FPaths::SandboxesDir(ulonglong *param_1)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong local_28;
  uint local_20;
  int local_1c;
  
  psVar2 = (short *)FUN_1415b0fe0();
  local_28 = 0;
  iVar7 = 0;
  local_1c = 0;
  uVar6 = 0;
  uVar8 = 0;
  iVar5 = 0;
  if ((psVar2 != (short *)0x0) && (uVar6 = 0, uVar8 = 0, iVar5 = 0, *psVar2 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (psVar2[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_20 = uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    iVar5 = local_1c;
    uVar1 = local_20;
    uVar8 = local_28;
    uVar6 = (ulonglong)local_20;
    FGenericPlatformString::Memcpy(local_28,psVar2,(longlong)(int)uVar3 * 2);
    if (uVar1 != 0) goto LAB_14167ee70;
  }
  iVar7 = 1;
LAB_14167ee70:
  local_20 = (uint)uVar6;
  local_28 = uVar8;
  local_1c = iVar5;
  if (iVar5 < (int)(local_20 + 0xf + iVar7)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    uVar6 = (ulonglong)local_20;
  }
  iVar5 = (int)uVar6;
  local_20 = (0x10 - (uint)(iVar5 != 0)) + iVar5;
  if (local_1c < (int)local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,uVar6);
  }
  lVar4 = (longlong)iVar5 - (ulonglong)(iVar5 != 0);
  builtin_wcsncpy((wchar_t *)(local_28 + lVar4 * 2),L"Saved/Sa",8);
  lVar4 = local_28 + lVar4 * 2;
  builtin_wcsncpy((wchar_t *)(lVar4 + 0x10),L"ndbo",4);
  *(undefined4 *)(lVar4 + 0x18) = 0x650078;
  *(undefined2 *)(lVar4 + 0x1c) = 0x73;
  *(undefined2 *)(lVar4 + 0x1e) = 0;
  *param_1 = local_28;
  *(int *)((longlong)param_1 + 0xc) = local_1c;
  *(uint *)(param_1 + 1) = local_20;
  return param_1;
}



// FUNCTION 14167ef40 FUN_14167ef40 body=89 status=ok
// SIG undefined FUN_14167ef40(void)

undefined8
FUN_14167ef40(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_3 + 0x20))(param_3,param_2,param_4);
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  (**(code **)(*plVar1 + 0x50))(plVar1,*param_1,(longlong)*(int *)(param_1 + 1));
  (**(code **)*plVar1)(plVar1,1);
  return 1;
}



// FUNCTION 14167efa0 FUN_14167efa0 body=510 status=ok
// SIG undefined FUN_14167efa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14167efa0(undefined8 *param_1,undefined8 param_2,int param_3,longlong *param_4,
             undefined4 param_5)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  bool bVar5;
  longlong *plVar6;
  ushort *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined2 local_e8;
  undefined1 local_e6;
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  uint local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  plVar6 = (longlong *)(**(code **)(*param_4 + 0x20))(param_4,param_2,param_5);
  if (plVar6 == (longlong *)0x0) {
    uVar9 = 0;
    goto LAB_14167f168;
  }
  iVar3 = *(int *)(param_1 + 1);
  if (1 < iVar3) {
    puVar4 = (ushort *)*param_1;
    if (param_3 == 2) {
LAB_14167f027:
      bVar5 = true;
    }
    else {
      if (param_3 == 0) {
        uVar2 = *puVar4;
        puVar7 = puVar4;
        while (uVar2 != 0) {
          if (0x7f < uVar2) goto LAB_14167f027;
          puVar1 = puVar7 + 1;
          puVar7 = puVar7 + 1;
          uVar2 = *puVar1;
        }
      }
      bVar5 = false;
    }
    if (param_3 == 3) {
      local_e8 = 0xbbef;
      local_e6 = 0xbf;
      (**(code **)(*plVar6 + 0x50))(plVar6,&local_e8,3);
LAB_14167f04b:
      TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                (local_d8,puVar4);
      (**(code **)(*plVar6 + 0x50))(plVar6,local_50,(longlong)(int)local_48);
    }
    else {
      if (param_3 == 4) goto LAB_14167f04b;
      if (bVar5) {
        local_e8 = 0xfeff;
        (**(code **)(*plVar6 + 0x50))(plVar6,&local_e8,2);
        if (puVar4 == (ushort *)0x0) {
          lVar8 = 0;
        }
        else {
          lVar8 = -1;
          do {
            lVar8 = lVar8 + 1;
          } while (puVar4[lVar8] != 0);
        }
        (**(code **)(*plVar6 + 0x50))(plVar6,puVar4,(longlong)(int)lVar8 * 2);
        goto LAB_14167f165;
      }
      uVar10 = iVar3 - 1;
      if (iVar3 == 0) {
        uVar10 = 0;
      }
      local_58 = (undefined1 *)0x0;
      if (puVar4 == (ushort *)0x0) {
        local_48 = 0;
        local_50 = (undefined1 *)0x0;
      }
      else {
        local_48 = uVar10;
        if ((0x80 < uVar10) && (uVar10 != 0)) {
          local_58 = (undefined1 *)FMemory::Realloc(0,(longlong)(int)uVar10,0);
        }
        local_f8 = 0x3f;
        local_50 = local_d8;
        if (local_58 != (undefined1 *)0x0) {
          local_50 = local_58;
        }
        FGenericPlatformString::Convert<wchar_t,char>(local_50,uVar10,puVar4,uVar10);
      }
      (**(code **)(*plVar6 + 0x50))(plVar6,local_50,(longlong)(int)local_48);
    }
    if (local_58 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
LAB_14167f165:
  uVar9 = 1;
LAB_14167f168:
  if (plVar6 != (longlong *)0x0) {
    (**(code **)*plVar6)(plVar6,1);
  }
  return uVar9;
}



// FUNCTION 14167f1a0 FUN_14167f1a0 body=291 status=ok
// SIG undefined FUN_14167f1a0(void)

undefined8 FUN_14167f1a0(wchar_t *param_1,wchar_t **param_2)

{
  wchar_t wVar1;
  int iVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  int iVar6;
  wchar_t *pwVar7;
  wchar_t *local_28;
  int local_20;
  undefined4 local_1c;
  
  pwVar5 = (wchar_t *)0x0;
  pwVar4 = param_1;
  pwVar7 = pwVar5;
  do {
    iVar2 = iswalpha(*pwVar4);
    iVar6 = (int)pwVar7;
    if (iVar2 == 0) {
      iVar2 = iswdigit(*pwVar4);
      if (iVar2 == 0) {
        wVar1 = *pwVar4;
        if (((wVar1 + L'ￕ' & 0xfffcU) != 0) || (wVar1 == L',')) {
          if ((wVar1 == L':') && (0 < iVar6)) {
            iVar2 = iVar6 + 1;
            local_28 = (wchar_t *)0x0;
            local_1c = 0;
            local_20 = iVar2;
            if (0 < iVar2) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
              iVar2 = local_20;
              pwVar5 = local_28;
              if (0 < local_20) {
                wcsncpy(local_28,param_1,(longlong)iVar6);
                pwVar5[iVar6] = L'\0';
              }
            }
            if (param_2 == &local_28) {
              if (pwVar5 != (wchar_t *)0x0) {
                FMemory::Free(pwVar5);
              }
              uVar3 = 1;
            }
            else {
              if (*param_2 != (wchar_t *)0x0) {
                FMemory::Free();
              }
              *param_2 = pwVar5;
              *(int *)(param_2 + 1) = iVar2;
              *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
              uVar3 = 1;
            }
          }
          else {
            uVar3 = 0;
          }
          return uVar3;
        }
      }
    }
    pwVar7 = (wchar_t *)(ulonglong)(iVar6 + 1);
    pwVar4 = pwVar4 + 1;
  } while( true );
}



// FUNCTION 14167f2d0 ScreenShotDir body=671 status=ok
// SIG undefined ScreenShotDir(void)

longlong * FPaths::ScreenShotDir(longlong *param_1)

{
  void *_Dst;
  undefined2 *puVar1;
  void *_Src;
  longlong *plVar2;
  longlong lVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  void *pvVar10;
  void *local_58;
  int local_50;
  int local_4c;
  void *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  local_40 = 0x10;
  local_48 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  _Src = local_48;
  FGenericPlatformString::Convert<char,wchar_t>(local_48,0x10,"WindowsNoEditor",0x10,0x3f);
  plVar2 = (longlong *)FUN_14167d0d0(local_38);
  lVar3 = plVar2[1];
  local_58 = (void *)*plVar2;
  *plVar2 = 0;
  local_50 = (int)plVar2[1];
  local_4c = *(int *)((longlong)plVar2 + 0xc);
  plVar2[1] = 0;
  iVar5 = local_50;
  if (local_4c < (int)((0xd - (uint)((int)lVar3 != 0)) + local_50)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
    iVar5 = local_50;
  }
  local_50 = (0xd - (uint)(iVar5 != 0)) + iVar5;
  if (local_4c < local_50) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
  }
  lVar3 = (longlong)iVar5 - (ulonglong)(iVar5 != 0);
  builtin_wcsncpy((wchar_t *)((longlong)local_58 + lVar3 * 2),L"Screensh",8);
  builtin_wcsncpy((wchar_t *)((longlong)local_58 + lVar3 * 2 + 0x10),L"ots/",4);
  *(undefined2 *)((longlong)local_58 + lVar3 * 2 + 0x18) = 0;
  if (local_50 < 2) {
    pvVar4 = local_58;
    pvVar8 = (void *)0x0;
    pvVar10 = _Src;
    iVar9 = local_40._4_4_;
    iVar7 = (int)local_40;
  }
  else {
    iVar5 = 0;
    if ((int)local_40 != 0) {
      iVar5 = (int)local_40 + -1;
    }
    if ((local_50 != 0) || (iVar7 = 1, iVar5 == 0)) {
      iVar7 = 0;
    }
    pvVar4 = (void *)0x0;
    iVar6 = local_50;
    if (local_4c < iVar7 + local_50 + iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo();
      iVar6 = local_50;
    }
    pvVar8 = _Src;
    pvVar10 = local_58;
    iVar9 = local_4c;
    iVar7 = iVar6;
    if (iVar5 != 0) {
      local_50 = iVar6 + (uint)(iVar6 == 0) + iVar5;
      if (local_4c < local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar6);
      }
      iVar9 = local_4c;
      iVar7 = local_50;
      pvVar10 = local_58;
      _Dst = (void *)((longlong)local_58 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar5 * 2);
      *(undefined2 *)((longlong)_Dst + (longlong)iVar5 * 2) = 0;
    }
  }
  local_58 = pvVar10;
  local_4c = iVar9;
  if (iVar9 < (int)((2 - (uint)(iVar7 != 0)) + iVar7)) {
    local_50 = iVar7;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
    iVar7 = local_50;
  }
  local_50 = (2 - (uint)(iVar7 != 0)) + iVar7;
  if (local_4c < local_50) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar7);
  }
  puVar1 = (undefined2 *)((longlong)local_58 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
  *puVar1 = 0x2f;
  puVar1[1] = 0;
  *param_1 = (longlong)local_58;
  *(int *)(param_1 + 1) = local_50;
  *(int *)((longlong)param_1 + 0xc) = local_4c;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  return param_1;
}



// FUNCTION 14167f570 FUN_14167f570 body=111 status=ok
// SIG undefined FUN_14167f570(void)

void FUN_14167f570(longlong param_1,undefined2 *param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  
  plVar1 = *(longlong **)(param_1 + 8);
  puVar2 = *(undefined2 **)plVar1[1];
  if (puVar2 + 1 <= (undefined2 *)((undefined8 *)plVar1[1])[1]) {
    *param_2 = *puVar2;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 2;
    return;
  }
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2,2);
  if ((*(byte *)((longlong)plVar1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(plVar1,param_2,2);
  }
  return;
}



// FUNCTION 14167f5e0 FUN_14167f5e0 body=247 status=ok
// SIG undefined FUN_14167f5e0(void)

void FUN_14167f5e0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int local_res8 [2];
  
  plVar1 = *(longlong **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x78))
            (plVar1,(longlong)*(int *)(param_2 + 1),(longlong)*(int *)((longlong)param_2 + 0xc));
  local_res8[0] = 0;
  if ((*(byte *)(plVar1 + 5) & 1) == 0) {
    local_res8[0] = *(int *)(param_2 + 1);
  }
  plVar2 = (longlong *)plVar1[1];
  if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
    (**(code **)(*plVar1 + 0x50))(plVar1,local_res8,4);
    if ((*(byte *)((longlong)plVar1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (-1 < (char)*(byte *)(plVar1 + 5)) {
    if ((-1 < local_res8[0]) &&
       (((*(byte *)((longlong)plVar1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x1000001)))) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (((local_res8[0] != 0) || (iVar3 = 0, *(int *)((longlong)param_2 + 0xc) != 0)) &&
         (iVar3 = local_res8[0], (*(byte *)(plVar1 + 5) & 1) != 0)) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy
                  (param_2,local_res8[0],*(undefined4 *)((longlong)param_2 + 0xc));
        iVar3 = *(int *)(param_2 + 1);
      }
      (**(code **)(*plVar1 + 0x50))(plVar1,*param_2,(longlong)iVar3);
      return;
    }
  }
  *(byte *)(plVar1 + 5) = *(byte *)(plVar1 + 5) | 0x80;
  return;
}



// FUNCTION 14167f6e0 FUN_14167f6e0 body=112 status=ok
// SIG undefined FUN_14167f6e0(void)

undefined8 FUN_14167f6e0(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return 1;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_1,4);
  }
  return 1;
}



// FUNCTION 14167f750 FUN_14167f750 body=29 status=ok
// SIG undefined FUN_14167f750(void)

void FUN_14167f750(longlong *param_1)

{
  (**(code **)(*param_1 + 8))();
  return;
}



// FUNCTION 14167f770 FUN_14167f770 body=733 status=ok
// SIG undefined FUN_14167f770(void)

void FUN_14167f770(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  LARGE_INTEGER param_5)

{
  longlong lVar1;
  LARGE_INTEGER LVar2;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  LVar2 = param_5;
  if ((double)param_5 == -1.0) {
    QueryPerformanceCounter(&param_5);
    LVar2 = (LARGE_INTEGER)
            (((double)CONCAT44(param_5.s.HighPart,param_5.s.LowPart) * DAT_1468b02f8 + 16777216.0) -
            DAT_1468e2430);
  }
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  }
  if ((*(int *)(param_1 + 0x38) == 0) && (DAT_1468c217e != '\0')) {
    wprintf(L"%s\n",param_2);
  }
  else {
    if (*(char *)(param_1 + 0x44) != '\0') {
      iVar8 = *(int *)(param_1 + 0x28);
      *(int *)(param_1 + 0x28) = iVar8 + 1;
      if (*(int *)(param_1 + 0x2c) < iVar8 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x20,iVar8);
      }
      lVar1 = *(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 0x28;
      if (lVar1 != 0) {
        FBufferedLine::FBufferedLine(lVar1,param_2,param_4,param_3,LVar2.QuadPart);
      }
    }
    DVar4 = GetCurrentThreadId();
    if ((DVar4 == *(DWORD *)(param_1 + 0x40)) && (*(int *)(param_1 + 0x38) != 0)) {
      uVar11 = 0;
      if (DAT_1468e3238 == '\0') {
        DAT_1468e3238 = 1;
        param_5.s.LowPart = 0;
        uVar6 = uVar11;
        uVar9 = uVar11;
        if (0 < *(int *)(param_1 + 0x18)) {
          do {
            lVar1 = *(longlong *)(param_1 + 0x10);
            uVar5 = (uint)uVar6;
            if (0 < *(int *)(param_1 + 0x38)) {
              uVar6 = uVar11;
              uVar13 = uVar11;
              do {
                plVar10 = *(longlong **)(uVar13 + *(longlong *)(param_1 + 0x30));
                (**(code **)(*plVar10 + 0x38))(plVar10);
                if (*(int *)(uVar9 + 8 + lVar1) == 0) {
                  puVar7 = &DAT_143f3eda8;
                }
                else {
                  puVar7 = *(undefined2 **)(uVar9 + lVar1);
                }
                (**(code **)(*plVar10 + 8))
                          (plVar10,puVar7,*(undefined1 *)(uVar9 + 0x20 + lVar1),lVar1 + 0x10 + uVar9
                           ,*(undefined8 *)(uVar9 + 0x18 + lVar1));
                uVar12 = (int)uVar6 + 1;
                uVar6 = (ulonglong)uVar12;
                uVar13 = uVar13 + 8;
                uVar5 = param_5.s.LowPart;
              } while ((int)uVar12 < *(int *)(param_1 + 0x38));
            }
            param_5.s.LowPart = uVar5 + 1;
            uVar6 = (ulonglong)param_5.s.LowPart;
            uVar9 = uVar9 + 0x28;
          } while ((int)param_5.s.LowPart < *(int *)(param_1 + 0x18));
        }
        plVar10 = *(longlong **)(param_1 + 0x10);
        for (iVar8 = *(int *)(param_1 + 0x18); iVar8 != 0; iVar8 = iVar8 + -1) {
          if (*plVar10 != 0) {
            FMemory::Free();
          }
          plVar10 = plVar10 + 5;
        }
        *(undefined4 *)(param_1 + 0x18) = 0;
        if (*(int *)(param_1 + 0x1c) != 0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::
          ResizeTo(param_1 + 0x10,0);
        }
        DAT_1468e3238 = '\0';
      }
      uVar6 = uVar11;
      if (0 < *(int *)(param_1 + 0x38)) {
        do {
          plVar10 = *(longlong **)(uVar11 + *(longlong *)(param_1 + 0x30));
          (**(code **)(*plVar10 + 8))(plVar10,param_2,param_3,param_4,LVar2.QuadPart);
          uVar12 = (int)uVar6 + 1;
          uVar11 = uVar11 + 8;
          uVar6 = (ulonglong)uVar12;
        } while ((int)uVar12 < *(int *)(param_1 + 0x38));
      }
    }
    else {
      iVar8 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar8 + 1;
      if (*(int *)(param_1 + 0x1c) < iVar8 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar8);
      }
      lVar1 = *(longlong *)(param_1 + 0x10) + (longlong)iVar8 * 0x28;
      if (lVar1 != 0) {
        FBufferedLine::FBufferedLine(lVar1,param_2,param_4,param_3,LVar2.QuadPart);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014167fa46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  return;
}



// FUNCTION 14167fa50 SerializeBacklog body=171 status=ok
// SIG undefined SerializeBacklog(void)

void FOutputDeviceRedirector::SerializeBacklog(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  BOOL BVar2;
  undefined2 *puVar3;
  int iVar4;
  longlong lVar5;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x20);
      if (*(int *)(lVar5 + 8 + lVar1) == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = *(undefined2 **)(lVar5 + lVar1);
      }
      (**(code **)(*param_2 + 8))
                (param_2,puVar3,*(undefined1 *)(lVar5 + 0x20 + lVar1),lVar1 + 0x10 + lVar5,
                 *(undefined8 *)(lVar5 + 0x18 + lVar1));
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x28;
    } while (iVar4 < *(int *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00014167faf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  return;
}



// FUNCTION 14167fb00 Set body=34 status=ok
// SIG undefined Set(void)

void FEngineVersion::Set(undefined2 *param_1,undefined2 param_2,undefined2 param_3,
                        undefined2 param_4,undefined4 param_5,undefined8 param_6)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 4) = param_5;
  param_1[1] = param_3;
  param_1[2] = param_4;
  FString::operator=(param_1 + 8,param_6);
  return;
}



// FUNCTION 14167fb30 SetCurrentThreadAsMasterThread body=77 status=ok
// SIG undefined SetCurrentThreadAsMasterThread(void)

void FOutputDeviceRedirector::SetCurrentThreadAsMasterThread(longlong param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  }
  FUN_141684f40(param_1,0);
  DVar2 = GetCurrentThreadId();
  *(DWORD *)(param_1 + 0x40) = DVar2;
                    /* WARNING: Could not recover jumptable at 0x00014167fb76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  return;
}



// FUNCTION 14167fb80 FUN_14167fb80 body=4611 status=ok
// SIG undefined FUN_14167fb80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14167fb80(undefined **param_1,undefined8 param_2)

{
  short sVar1;
  short sVar2;
  wchar_t *pwVar3;
  bool bVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  short *psVar13;
  undefined8 uVar14;
  int *piVar15;
  int *piVar16;
  undefined8 uVar17;
  int *piVar18;
  undefined **ppuVar19;
  int *piVar20;
  longlong lVar21;
  longlong *plVar22;
  int *piVar23;
  undefined ***pppuVar24;
  undefined ***pppuVar25;
  ulonglong uVar26;
  undefined ***pppuVar27;
  undefined **ppuVar28;
  int iVar29;
  int iVar30;
  undefined2 *puVar31;
  longlong lVar32;
  longlong lVar33;
  undefined2 *puVar34;
  longlong lVar35;
  ulonglong *puVar36;
  ulonglong uVar37;
  int iVar38;
  longlong lVar39;
  int iVar40;
  undefined1 auStack_688 [32];
  char local_668;
  char local_667;
  longlong local_660;
  undefined8 local_658;
  undefined **local_650;
  wchar_t *local_648;
  int local_640;
  undefined4 local_63c;
  wchar_t *local_638;
  int local_630;
  undefined4 local_62c;
  int local_628;
  int iStack_624;
  undefined8 uStack_620;
  undefined2 local_618;
  longlong local_610;
  undefined4 local_608;
  undefined4 local_604;
  undefined8 local_600;
  int local_5f8;
  int iStack_5f4;
  undefined8 uStack_5f0;
  undefined1 local_5e0 [16];
  undefined2 local_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined **local_5b8 [6];
  undefined8 local_588;
  undefined8 uStack_580;
  undefined **local_578 [6];
  undefined8 local_548;
  undefined8 uStack_540;
  undefined **local_538 [6];
  undefined8 local_508;
  undefined8 uStack_500;
  undefined **local_4f8 [6];
  undefined1 local_4c8 [8];
  longlong *local_4c0;
  undefined1 local_4b0 [16];
  undefined1 local_4a0 [16];
  undefined1 local_490 [24];
  undefined1 local_478 [64];
  undefined1 local_438 [64];
  undefined1 local_3f8 [64];
  undefined *local_3b8;
  longlong *local_3b0;
  char local_3a0;
  int *local_398;
  int local_390;
  char local_388;
  undefined8 local_378;
  undefined8 local_370;
  undefined **local_368 [6];
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_318;
  undefined8 local_310;
  undefined **local_308 [6];
  wchar_t *local_2d8;
  longlong lStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined **local_2a8 [6];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_258;
  undefined8 local_250;
  undefined **local_248 [6];
  int local_218;
  int iStack_214;
  int iStack_210;
  int iStack_20c;
  undefined8 local_208;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined **local_1e8 [6];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_198;
  undefined8 local_190;
  undefined **local_188 [6];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 local_130;
  int local_128 [12];
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined8 local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  char local_c0;
  undefined1 local_b8 [16];
  char local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_1468387a8 ^ (ulonglong)auStack_688;
  local_650 = param_1;
  puVar11 = (undefined8 *)FText::ToString(param_2);
  ppuVar28 = param_1 + 2;
  puVar12 = (undefined8 *)FText::ToString(ppuVar28);
  puVar31 = &DAT_143f3eda8;
  if (*(int *)(puVar11 + 1) == 0) {
    puVar34 = &DAT_143f3eda8;
  }
  else {
    puVar34 = (undefined2 *)*puVar11;
  }
  if (*(int *)(puVar12 + 1) == 0) {
    psVar13 = &DAT_143f3eda8;
  }
  else {
    psVar13 = (short *)*puVar12;
  }
  lVar35 = (longlong)puVar34 - (longlong)psVar13;
  do {
    sVar1 = *psVar13;
    sVar2 = *(short *)((longlong)psVar13 + lVar35);
    if (sVar1 != sVar2) break;
    psVar13 = psVar13 + 1;
  } while (sVar2 != 0);
  if (sVar1 == sVar2) {
    return 0;
  }
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  FText::operator=(ppuVar28,param_2);
  cVar8 = FText::IsEmptyOrWhitespace(ppuVar28);
  if (cVar8 != '\0') {
    *(undefined1 *)((longlong)param_1 + 9) = 1;
    uVar14 = FUN_1404b03b0();
    FText::operator=(param_1 + 5,uVar14);
    if (*(char *)(param_1 + 0xf) == '\0') {
      return 1;
    }
    *(undefined1 *)(param_1 + 0xf) = 0;
    TValueOrError<TArray<FCompiledToken,FDefaultAllocator>,FExpressionError>::
    ~TValueOrError<TArray<FCompiledToken,FDefaultAllocator>,FExpressionError>();
    return 1;
  }
  puVar11 = (undefined8 *)FText::ToString(ppuVar28);
  if (*(int *)(puVar11 + 1) != 0) {
    puVar31 = (undefined2 *)*puVar11;
  }
  ExpressionParser::Lex(&local_3b8,puVar31,param_1 + 0x1a);
  if ((local_388 != '\0') && (local_3a0 == '\0')) {
    piVar23 = (int *)0x0;
    local_660 = 0;
    local_658 = 0;
    if (0 < local_390) {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(&local_660,local_390);
    }
    cVar8 = '\0';
    local_667 = '\0';
    piVar20 = local_398 + (longlong)local_390 * 0x16;
    if (local_398 != piVar20) {
      piVar18 = local_398 + 2;
      do {
        piVar15 = (int *)FUN_1416740c0();
        piVar16 = piVar18 + 4;
        if (((piVar15[3] != piVar18[1] || piVar15[1] != piVar18[-1]) || piVar18[-2] != *piVar15) ||
            piVar15[2] != *piVar18) {
          piVar16 = piVar23;
        }
        if (piVar16 != (int *)0x0) {
          local_668 = '\0';
          if (local_390 < 1) goto LAB_14167fefd;
          lVar35 = 0;
          goto LAB_1416800c0;
        }
        piVar16 = piVar18 + 0x14;
        piVar18 = piVar18 + 0x16;
      } while (piVar16 != piVar20);
    }
    if (0 < local_390) {
      uVar14 = *(undefined8 *)(local_398 + 0x14);
      iVar9 = local_398[0x10];
      iVar10 = local_398[0x11];
      uVar26 = *(ulonglong *)(local_398 + 0x12);
      iVar40 = (int)*(ulonglong *)(local_398 + 0x12);
      iVar29 = local_398[0x13];
      uStack_620 = uVar26;
      if (1 < local_390) {
        uVar37 = (ulonglong)(local_390 - 1);
        puVar36 = (ulonglong *)(local_398 + 0x28);
        do {
          if (uVar26 < *puVar36) {
            uVar26 = *puVar36;
          }
          puVar36 = puVar36 + 0xb;
          uVar37 = uVar37 - 1;
        } while (uVar37 != 0);
        uStack_620._0_4_ = (int)uVar26;
        uStack_620._4_4_ = (int)(uVar26 >> 0x20);
        iVar40 = (int)uStack_620;
        iVar29 = uStack_620._4_4_;
        uStack_620 = uVar26;
      }
      local_628 = iVar9;
      iStack_624 = iVar10;
      uVar17 = FUN_14161a1b0(local_4c8,ppuVar28);
      uVar17 = FText::ToString(uVar17);
      uVar17 = FString::FString(&local_5f8,uVar17);
      uVar17 = FUN_141669c50(local_490,uVar17);
      piVar18 = (int *)FUN_14165da90(local_3f8,uVar17,0);
      local_138 = 0;
      local_130 = 0;
      FExpressionNode::operator=(&local_138,piVar18);
      piVar20 = piVar18 + 4;
      if (((piVar18[3] == 0 && piVar18[2] == 0) && piVar18[1] == 0) && *piVar18 == 0) {
        piVar20 = piVar23;
      }
      local_f8 = iVar9;
      iStack_f4 = iVar10;
      iStack_f0 = iVar40;
      iStack_ec = iVar29;
      local_e8 = uVar14;
      if (piVar20 != (int *)0x0) {
        (*(code *)**(undefined8 **)piVar20)(piVar20,0);
      }
      uVar26 = local_658;
      lVar35 = (longlong)(int)local_658;
      iVar9 = (int)local_658 + 1;
      local_658 = CONCAT44(local_658._4_4_,iVar9);
      if (local_658._4_4_ < iVar9) {
        TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(&local_660,uVar26 & 0xffffffff);
      }
      puVar11 = (undefined8 *)(lVar35 * 0x58 + local_660);
      *puVar11 = 0;
      puVar11[1] = 0;
      FExpressionNode::operator=(puVar11,&local_138);
      puVar11[8] = CONCAT44(iStack_f4,local_f8);
      puVar11[9] = CONCAT44(iStack_ec,iStack_f0);
      puVar11[10] = local_e8;
      piVar20 = local_128;
      if (((local_130._4_4_ == 0 && (int)local_130 == 0) && local_138._4_4_ == 0) &&
          (int)local_138 == 0) {
        piVar20 = piVar23;
      }
      if (piVar20 != (int *)0x0) {
        (*(code *)**(undefined8 **)piVar20)(piVar20,0);
      }
      if (local_4c0 != (longlong *)0x0) {
        LOCK();
        plVar22 = local_4c0 + 1;
        lVar35 = *plVar22;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)lVar35 == 1) {
          (**(code **)*local_4c0)(local_4c0);
          LOCK();
          piVar23 = (int *)((longlong)local_4c0 + 0xc);
          iVar9 = *piVar23;
          *piVar23 = *piVar23 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_4c0 + 8))(local_4c0,1);
          }
        }
      }
    }
    goto LAB_14167fefd;
  }
  ppuVar28 = &local_3b8;
  goto LAB_141680cec;
LAB_1416800c0:
  do {
    cVar8 = local_668;
    pppuVar27 = (undefined ***)0x0;
    iVar9 = (int)piVar23;
    piVar23 = local_398 + lVar35 * 0x16;
    if (iVar9 + 3 < local_390) {
      piVar20 = (int *)FUN_1416740c0();
      pppuVar25 = (undefined ***)(piVar23 + 6);
      if (((piVar20[3] != piVar23[3] || piVar20[2] != piVar23[2]) || piVar20[1] != piVar23[1]) ||
          *piVar23 != *piVar20) {
        pppuVar25 = pppuVar27;
      }
      if (pppuVar25 == (undefined ***)0x0) goto LAB_1416808ff;
      pwVar3 = *(wchar_t **)(piVar23 + 0x10);
      lVar32 = *(longlong *)(piVar23 + 0x12);
      uVar14 = *(undefined8 *)(piVar23 + 0x14);
      piVar18 = local_398 + (lVar35 + 1) * 0x16;
      piVar20 = (int *)FUN_141673fc0();
      pppuVar25 = (undefined ***)(piVar18 + 6);
      if (((piVar18[3] != piVar20[3] || piVar18[2] != piVar20[2]) || piVar18[1] != piVar20[1]) ||
          *piVar20 != *piVar18) {
        pppuVar25 = pppuVar27;
      }
      if (pppuVar25 == (undefined ***)0x0) goto LAB_1416808ff;
      lVar35 = lVar35 + 2;
      lVar33 = lVar35 * 0x58;
      iVar9 = iVar9 + 2;
      iVar29 = 1;
      piVar23 = local_398 + lVar35 * 0x16 + 0x10;
      local_5f8 = *piVar23;
      iStack_5f4 = piVar23[1];
      uVar26 = *(ulonglong *)(piVar23 + 2);
      uVar17 = *(undefined8 *)(local_398 + lVar35 * 0x16 + 0x14);
      iVar10 = (int)*(ulonglong *)(piVar23 + 2);
      iVar40 = piVar23[3];
      uStack_5f0 = uVar26;
      if (iVar9 < local_390) {
        do {
          piVar23 = local_398;
          uVar26 = uStack_5f0;
          piVar20 = (int *)FUN_141673fc0();
          lVar39 = lVar33 + 0x18 + (longlong)piVar23;
          lVar21 = lVar39;
          if (((piVar20[2] != *(int *)((longlong)piVar23 + lVar33 + 8) ||
               piVar20[3] != *(int *)((longlong)piVar23 + lVar33 + 0xc)) ||
              piVar20[1] != *(int *)((longlong)piVar23 + lVar33 + 4)) ||
              *piVar20 != *(int *)((longlong)piVar23 + lVar33)) {
            lVar21 = 0;
          }
          if (lVar21 == 0) {
            piVar20 = (int *)FUN_141673f40();
            if (((piVar20[2] != *(int *)((longlong)piVar23 + lVar33 + 8) ||
                 piVar20[3] != *(int *)((longlong)piVar23 + lVar33 + 0xc)) ||
                piVar20[1] != *(int *)((longlong)piVar23 + lVar33 + 4)) ||
                *piVar20 != *(int *)((longlong)piVar23 + lVar33)) {
              lVar39 = 0;
            }
            if ((lVar39 != 0) && (iVar29 = iVar29 + -1, iVar29 == 0)) break;
          }
          else {
            iVar29 = iVar29 + 1;
          }
          if (uVar26 < *(ulonglong *)((longlong)piVar23 + lVar33 + 0x48)) {
            uVar26 = *(ulonglong *)((longlong)piVar23 + lVar33 + 0x48);
          }
          iVar9 = iVar9 + 1;
          lVar35 = lVar35 + 1;
          lVar33 = lVar33 + 0x58;
          uStack_5f0 = uVar26;
        } while (iVar9 < local_390);
        iVar10 = (int)uStack_5f0;
        iVar40 = uStack_5f0._4_4_;
      }
      iVar7 = iStack_5f4;
      iVar29 = local_5f8;
      local_600 = 0;
      puVar11 = (undefined8 *)FUN_141673fc0();
      local_5c8 = *puVar11;
      uStack_5c0 = puVar11[1];
      local_378 = 0;
      local_5b8[0] = &PTR_FUN_144ccfbc0;
      local_370 = 0;
      FExpressionNode::operator=(&local_378,&local_5c8);
      uVar6 = local_600;
      pppuVar27 = local_5b8;
      if ((((int)local_5c8 == 0 && local_5c8._4_4_ == 0) && (int)uStack_5c0 == 0) &&
          uStack_5c0._4_4_ == 0) {
        pppuVar27 = (undefined ***)0x0;
      }
      local_338 = 0;
      uStack_330 = 0;
      local_328 = local_600;
      if (pppuVar27 != (undefined ***)0x0) {
        (*(code *)**pppuVar27)(pppuVar27,0);
      }
      uVar37 = local_658;
      lVar33 = (longlong)(int)local_658;
      iVar38 = (int)local_658 + 1;
      local_658 = CONCAT44(local_658._4_4_,iVar38);
      if (local_658._4_4_ < iVar38) {
        TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(&local_660,uVar37 & 0xffffffff);
        iVar38 = (int)local_658;
      }
      puVar11 = (undefined8 *)(lVar33 * 0x58 + local_660);
      *puVar11 = 0;
      puVar11[1] = 0;
      FExpressionNode::operator=(puVar11,&local_378);
      puVar11[8] = local_338;
      puVar11[9] = uStack_330;
      puVar11[10] = local_328;
      pppuVar27 = local_368;
      if (((local_370._4_4_ == 0 && (int)local_370 == 0) && local_378._4_4_ == 0) &&
          (int)local_378 == 0) {
        pppuVar27 = (undefined ***)0x0;
      }
      if (pppuVar27 != (undefined ***)0x0) {
        (*(code *)**pppuVar27)(pppuVar27,0);
      }
      local_648 = (wchar_t *)0x0;
      local_63c = 0;
      iVar30 = (int)(lVar32 - (longlong)pwVar3 >> 1);
      local_640 = iVar30 + 1;
      if (iVar30 == 0) {
        local_640 = 0;
      }
      if ((0 < local_640) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_648,0), pwVar5 = local_648,
         0 < local_640)) {
        wcsncpy(local_648,pwVar3,(longlong)iVar30);
        pwVar5[iVar30] = L'\0';
      }
      pppuVar27 = (undefined ***)0x0;
      plVar22 = (longlong *)FTextFilterString::FTextFilterString(local_4b0,&local_648);
      FString::FString(local_5e0,plVar22);
      local_5d0 = 1;
      if (*plVar22 != 0) {
        FMemory::Free();
      }
      piVar23 = (int *)FUN_14165da90(local_478,local_5e0,0);
      local_318 = 0;
      local_310 = 0;
      FExpressionNode::operator=(&local_318,piVar23);
      pppuVar25 = (undefined ***)(piVar23 + 4);
      if (((piVar23[3] == 0 && piVar23[2] == 0) && piVar23[1] == 0) && *piVar23 == 0) {
        pppuVar25 = pppuVar27;
      }
      local_2d8 = pwVar3;
      lStack_2d0 = lVar32;
      local_2c8 = uVar14;
      if (pppuVar25 != (undefined ***)0x0) {
        (*(code *)**pppuVar25)(pppuVar25,0);
      }
      iVar30 = iVar38 + 1;
      local_658 = CONCAT44(local_658._4_4_,iVar30);
      if (local_658._4_4_ < iVar30) {
        TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(&local_660,iVar38);
        iVar30 = (int)local_658;
      }
      puVar11 = (undefined8 *)((longlong)iVar38 * 0x58 + local_660);
      *puVar11 = 0;
      puVar11[1] = 0;
      FExpressionNode::operator=(puVar11,&local_318);
      puVar11[8] = local_2d8;
      puVar11[9] = lStack_2d0;
      puVar11[10] = local_2c8;
      pppuVar25 = local_308;
      if (((local_310._4_4_ == 0 && (int)local_310 == 0) && local_318._4_4_ == 0) &&
          (int)local_318 == 0) {
        pppuVar25 = pppuVar27;
      }
      if (pppuVar25 != (undefined ***)0x0) {
        (*(code *)**pppuVar25)(pppuVar25,0);
      }
      if (local_648 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      puVar11 = (undefined8 *)FUN_141674040();
      local_588 = *puVar11;
      uStack_580 = puVar11[1];
      local_2b8 = 0;
      local_578[0] = &PTR_FUN_144ccfc00;
      local_2b0 = 0;
      FExpressionNode::operator=(&local_2b8,&local_588);
      local_278 = 0;
      uStack_270 = 0;
      pppuVar25 = local_578;
      if ((((int)local_588 == 0 && local_588._4_4_ == 0) && (int)uStack_580 == 0) &&
          uStack_580._4_4_ == 0) {
        pppuVar25 = pppuVar27;
      }
      local_268 = uVar6;
      if (pppuVar25 != (undefined ***)0x0) {
        (*(code *)**pppuVar25)(pppuVar25,0);
      }
      iVar38 = iVar30 + 1;
      local_658 = CONCAT44(local_658._4_4_,iVar38);
      if (local_658._4_4_ < iVar38) {
        TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(&local_660,iVar30);
        iVar38 = (int)local_658;
      }
      puVar11 = (undefined8 *)((longlong)iVar30 * 0x58 + local_660);
      *puVar11 = 0;
      puVar11[1] = 0;
      FExpressionNode::operator=(puVar11,&local_2b8);
      puVar11[8] = local_278;
      puVar11[9] = uStack_270;
      puVar11[10] = local_268;
      pppuVar25 = local_2a8;
      if (((local_2b0._4_4_ == 0 && (int)local_2b0 == 0) && local_2b8._4_4_ == 0) &&
          (int)local_2b8 == 0) {
        pppuVar25 = pppuVar27;
      }
      if (pppuVar25 != (undefined ***)0x0) {
        (*(code *)**pppuVar25)(pppuVar25,0);
      }
      local_638 = (wchar_t *)0x0;
      iVar30 = (int)((longlong)(uVar26 - (longlong)CONCAT44(iVar7,iVar29)) >> 1);
      local_62c = 0;
      local_630 = iVar30 + 1;
      if (iVar30 == 0) {
        local_630 = 0;
      }
      if ((0 < local_630) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_638,0), pwVar3 = local_638,
         0 < local_630)) {
        wcsncpy(local_638,(wchar_t *)CONCAT44(iVar7,iVar29),(longlong)iVar30);
        pwVar3[iVar30] = L'\0';
      }
      pppuVar27 = (undefined ***)0x0;
      plVar22 = (longlong *)FTextFilterString::FTextFilterString(local_4a0,&local_638);
      FString::FString(&local_628,plVar22);
      local_618 = 1;
      if (*plVar22 != 0) {
        FMemory::Free();
      }
      piVar23 = (int *)FUN_14165da90(local_438,&local_628,0);
      local_258 = 0;
      local_250 = 0;
      FExpressionNode::operator=(&local_258,piVar23);
      pppuVar25 = (undefined ***)(piVar23 + 4);
      if (((piVar23[3] == 0 && piVar23[2] == 0) && piVar23[1] == 0) && *piVar23 == 0) {
        pppuVar25 = pppuVar27;
      }
      local_218 = iVar29;
      iStack_214 = iVar7;
      iStack_210 = iVar10;
      iStack_20c = iVar40;
      local_208 = uVar17;
      if (pppuVar25 != (undefined ***)0x0) {
        (*(code *)**pppuVar25)(pppuVar25,0);
      }
      iVar10 = iVar38 + 1;
      local_658 = CONCAT44(local_658._4_4_,iVar10);
      if (local_658._4_4_ < iVar10) {
        TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(&local_660,iVar38);
        iVar10 = (int)local_658;
      }
      puVar11 = (undefined8 *)((longlong)iVar38 * 0x58 + local_660);
      *puVar11 = 0;
      puVar11[1] = 0;
      FExpressionNode::operator=(puVar11,&local_258);
      puVar11[8] = CONCAT44(iStack_214,local_218);
      puVar11[9] = CONCAT44(iStack_20c,iStack_210);
      puVar11[10] = local_208;
      pppuVar25 = local_248;
      if (((local_250._4_4_ == 0 && (int)local_250 == 0) && local_258._4_4_ == 0) &&
          (int)local_258 == 0) {
        pppuVar25 = pppuVar27;
      }
      if (pppuVar25 != (undefined ***)0x0) {
        (*(code *)**pppuVar25)(pppuVar25,0);
      }
      if (local_638 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      puVar11 = (undefined8 *)FUN_141673f40();
      local_548 = *puVar11;
      uStack_540 = puVar11[1];
      local_1f8 = 0;
      local_538[0] = &PTR_FUN_144ccfbe0;
      local_1f0 = 0;
      FExpressionNode::operator=(&local_1f8,&local_548);
      local_1b8 = 0;
      uStack_1b0 = 0;
      pppuVar25 = local_538;
      if ((((int)local_548 == 0 && local_548._4_4_ == 0) && (int)uStack_540 == 0) &&
          uStack_540._4_4_ == 0) {
        pppuVar25 = pppuVar27;
      }
      local_1a8 = uVar6;
      if (pppuVar25 != (undefined ***)0x0) {
        (*(code *)**pppuVar25)(pppuVar25,0);
      }
      local_658 = CONCAT44(local_658._4_4_,iVar10 + 1);
      if (local_658._4_4_ < iVar10 + 1) {
        TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(&local_660,iVar10);
      }
      puVar11 = (undefined8 *)((longlong)iVar10 * 0x58 + local_660);
      *puVar11 = 0;
      puVar11[1] = 0;
      FExpressionNode::operator=(puVar11,&local_1f8);
      puVar11[8] = local_1b8;
      puVar11[9] = uStack_1b0;
      puVar11[10] = local_1a8;
      pppuVar25 = local_1e8;
      if (((local_1f0._4_4_ == 0 && (int)local_1f0 == 0) && local_1f8._4_4_ == 0) &&
          (int)local_1f8 == 0) {
        pppuVar25 = pppuVar27;
      }
      if (pppuVar25 != (undefined ***)0x0) {
        (*(code *)**pppuVar25)(pppuVar25,0);
      }
    }
    else {
LAB_1416808ff:
      if (local_667 == '\0') {
        piVar20 = (int *)FUN_1416737c0();
        pppuVar25 = (undefined ***)(piVar23 + 6);
        pppuVar24 = pppuVar25;
        if (((piVar20[3] != piVar23[3] || piVar20[2] != piVar23[2]) || piVar20[1] != piVar23[1]) ||
            *piVar23 != *piVar20) {
          pppuVar24 = pppuVar27;
        }
        if (pppuVar24 == (undefined ***)0x0) {
          piVar20 = (int *)FUN_141673d40();
          pppuVar24 = pppuVar25;
          if (((piVar20[3] != piVar23[3] || piVar20[2] != piVar23[2]) || piVar20[1] != piVar23[1])
              || *piVar23 != *piVar20) {
            pppuVar24 = pppuVar27;
          }
          if (pppuVar24 == (undefined ***)0x0) {
            piVar20 = (int *)FUN_141673bc0();
            pppuVar24 = pppuVar25;
            if (((piVar20[3] != piVar23[3] || piVar20[2] != piVar23[2]) || piVar20[1] != piVar23[1])
                || *piVar23 != *piVar20) {
              pppuVar24 = pppuVar27;
            }
            if (pppuVar24 == (undefined ***)0x0) {
              piVar20 = (int *)FUN_141673c40();
              pppuVar24 = pppuVar25;
              if (((piVar20[3] != piVar23[3] || piVar20[2] != piVar23[2]) ||
                  piVar20[1] != piVar23[1]) || *piVar23 != *piVar20) {
                pppuVar24 = pppuVar27;
              }
              if (pppuVar24 == (undefined ***)0x0) {
                piVar20 = (int *)FUN_141673a40();
                pppuVar24 = pppuVar25;
                if (((piVar20[3] != piVar23[3] || piVar20[2] != piVar23[2]) ||
                    piVar20[1] != piVar23[1]) || *piVar23 != *piVar20) {
                  pppuVar24 = pppuVar27;
                }
                if (pppuVar24 == (undefined ***)0x0) {
                  piVar20 = (int *)FUN_141673ac0();
                  if (((piVar20[1] != piVar23[1] || piVar20[3] != piVar23[3]) ||
                      piVar20[2] != piVar23[2]) || *piVar23 != *piVar20) {
                    pppuVar25 = pppuVar27;
                  }
                  if (pppuVar25 == (undefined ***)0x0) goto LAB_141680a56;
                }
              }
            }
          }
        }
        local_667 = '\x01';
      }
LAB_141680a56:
      if (cVar8 != '\0') {
        piVar20 = (int *)FUN_1416740c0();
        pppuVar25 = (undefined ***)(piVar23 + 6);
        pppuVar24 = pppuVar25;
        if (((piVar20[1] != piVar23[1] || piVar20[3] != piVar23[3]) || piVar20[2] != piVar23[2]) ||
            *piVar23 != *piVar20) {
          pppuVar24 = pppuVar27;
        }
        if (pppuVar24 == (undefined ***)0x0) {
          piVar20 = (int *)FUN_141673fc0();
          pppuVar24 = pppuVar25;
          if (((piVar20[1] != piVar23[1] || piVar20[3] != piVar23[3]) || piVar20[2] != piVar23[2])
              || *piVar23 != *piVar20) {
            pppuVar24 = pppuVar27;
          }
          if (pppuVar24 != (undefined ***)0x0) goto LAB_141680aff;
          piVar20 = (int *)FUN_141673cc0();
          if (((piVar20[1] != piVar23[1] || piVar20[3] != piVar23[3]) || piVar20[2] != piVar23[2])
              || *piVar23 != *piVar20) {
            pppuVar25 = pppuVar27;
          }
          if (pppuVar25 != (undefined ***)0x0) goto LAB_141680aff;
          bVar4 = false;
        }
        else {
LAB_141680aff:
          bVar4 = true;
        }
        if (bVar4) {
          puVar11 = (undefined8 *)FUN_141673740();
          local_508 = *puVar11;
          uStack_500 = puVar11[1];
          local_4f8[0] = &PTR_FUN_144ccfd00;
          local_198 = 0;
          local_190 = 0;
          FExpressionNode::operator=(&local_198,&local_508);
          pppuVar25 = local_4f8;
          if ((((int)local_508 == 0 && local_508._4_4_ == 0) && (int)uStack_500 == 0) &&
              uStack_500._4_4_ == 0) {
            pppuVar25 = pppuVar27;
          }
          local_158 = *(undefined8 *)(piVar23 + 0x10);
          uStack_150 = *(undefined8 *)(piVar23 + 0x12);
          local_148 = *(undefined8 *)(piVar23 + 0x14);
          if (pppuVar25 != (undefined ***)0x0) {
            (*(code *)**pppuVar25)(pppuVar25,0);
          }
          uVar26 = local_658;
          lVar32 = (longlong)(int)local_658;
          iVar10 = (int)local_658 + 1;
          local_658 = CONCAT44(local_658._4_4_,iVar10);
          if (local_658._4_4_ < iVar10) {
            TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(&local_660,uVar26 & 0xffffffff);
          }
          puVar11 = (undefined8 *)(lVar32 * 0x58 + local_660);
          *puVar11 = 0;
          puVar11[1] = 0;
          FExpressionNode::operator=(puVar11,&local_198);
          puVar11[8] = local_158;
          puVar11[9] = uStack_150;
          puVar11[10] = local_148;
          pppuVar25 = local_188;
          if (((local_190._4_4_ == 0 && (int)local_190 == 0) && local_198._4_4_ == 0) &&
              (int)local_198 == 0) {
            pppuVar25 = pppuVar27;
          }
          if (pppuVar25 != (undefined ***)0x0) {
            (*(code *)**pppuVar25)(pppuVar25,0);
          }
        }
      }
      piVar20 = (int *)FUN_1416740c0();
      pppuVar25 = (undefined ***)(piVar23 + 6);
      if (((piVar20[1] != piVar23[1] || piVar20[3] != piVar23[3]) || piVar20[2] != piVar23[2]) ||
          *piVar20 != *piVar23) {
        pppuVar25 = pppuVar27;
      }
      if (pppuVar25 == (undefined ***)0x0) {
        piVar20 = (int *)FUN_141673f40();
        local_668 = '\0';
        pppuVar25 = (undefined ***)(piVar23 + 6);
        if (((piVar20[1] != piVar23[1] || piVar20[3] != piVar23[3]) || piVar20[2] != piVar23[2]) ||
            *piVar23 != *piVar20) {
          pppuVar25 = pppuVar27;
        }
        if (pppuVar25 != (undefined ***)0x0) goto LAB_141680c83;
      }
      else {
LAB_141680c83:
        local_668 = '\x01';
      }
      uVar26 = local_658;
      lVar32 = (longlong)(int)local_658;
      iVar10 = (int)local_658 + 1;
      local_658 = CONCAT44(local_658._4_4_,iVar10);
      if (local_658._4_4_ < iVar10) {
        TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(&local_660,uVar26 & 0xffffffff);
      }
      puVar11 = (undefined8 *)(lVar32 * 0x58 + local_660);
      *puVar11 = 0;
      puVar11[1] = 0;
      FExpressionNode::operator=(puVar11,piVar23);
      uVar14 = *(undefined8 *)(piVar23 + 0x12);
      puVar11[8] = *(undefined8 *)(piVar23 + 0x10);
      puVar11[9] = uVar14;
      puVar11[10] = *(undefined8 *)(piVar23 + 0x14);
    }
    piVar23 = (int *)(ulonglong)(iVar9 + 1U);
    lVar35 = lVar35 + 1;
    param_1 = local_650;
    cVar8 = local_667;
  } while ((int)(iVar9 + 1U) < local_390);
LAB_14167fefd:
  local_610 = local_660;
  local_608 = (int)local_658;
  local_604 = local_658._4_4_;
  ppuVar19 = (undefined **)ExpressionParser::Compile(local_d8,&local_610,param_1 + 0x1d);
  ppuVar28 = param_1 + 8;
  if (ppuVar19 != ppuVar28) {
    if (*(char *)(param_1 + 0xf) != '\0') {
      *(undefined1 *)(param_1 + 0xf) = 0;
      TValueOrError<TArray<FCompiledToken,FDefaultAllocator>,FExpressionError>::
      ~TValueOrError<TArray<FCompiledToken,FDefaultAllocator>,FExpressionError>(ppuVar28);
    }
    *(undefined1 *)(param_1 + 0xb) = 0;
    if (*(char *)(ppuVar19 + 3) != '\0') {
      FText::FText(ppuVar28,ppuVar19);
      *(undefined1 *)(param_1 + 0xb) = 1;
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
    if (*(char *)(ppuVar19 + 6) != '\0') {
      param_1[0xc] = (undefined *)0x0;
      param_1[0xc] = ppuVar19[4];
      ppuVar19[4] = (undefined *)0x0;
      *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(ppuVar19 + 5);
      *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)ppuVar19 + 0x2c);
      ppuVar19[5] = (undefined *)0x0;
      *(undefined1 *)(param_1 + 0xe) = 1;
    }
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  if (local_a8 != '\0') {
    local_a8 = '\0';
    TArray<FExpressionToken,TSizedDefaultAllocator<32>_>::
    ~TArray<FExpressionToken,TSizedDefaultAllocator<32>_>(local_b8);
  }
  if ((local_c0 != '\0') && (local_c0 = '\0', local_d0 != (longlong *)0x0)) {
    LOCK();
    plVar22 = local_d0 + 1;
    lVar35 = *plVar22;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)lVar35 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar23 = (int *)((longlong)local_d0 + 0xc);
      iVar9 = *piVar23;
      *piVar23 = *piVar23 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  if ((*(char *)(param_1 + 0xe) != '\0') && (*(char *)(param_1 + 0xb) == '\0')) {
    *(char *)((longlong)param_1 + 9) = (cVar8 != '\0') + '\x02';
    uVar14 = FUN_1404b03b0();
    FText::operator=(param_1 + 5,uVar14);
    local_650 = &PTR_CanBeUsedOnAnyThread_144ccfae8;
    (**(code **)(*param_1 + 0x10))(param_1,ppuVar28,&local_650,param_1 + 5);
    goto LAB_141680cf5;
  }
LAB_141680cec:
  FText::operator=(param_1 + 5,ppuVar28);
LAB_141680cf5:
  if (local_388 != '\0') {
    local_388 = '\0';
    FUN_141661650(&local_398);
  }
  if ((local_3a0 != '\0') && (local_3a0 = 0, local_3b0 != (longlong *)0x0)) {
    LOCK();
    plVar22 = local_3b0 + 1;
    lVar35 = *plVar22;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)lVar35 == 1) {
      (**(code **)*local_3b0)(local_3b0);
      LOCK();
      piVar23 = (int *)((longlong)local_3b0 + 0xc);
      iVar9 = *piVar23;
      *piVar23 = *piVar23 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_3b0 + 8))(local_3b0,1);
      }
    }
  }
  return 1;
}



// FUNCTION 141680d90 FUN_141680d90 body=307 status=ok
// SIG undefined FUN_141680d90(void)

void FUN_141680d90(undefined8 *param_1)

{
  void *_Src;
  BOOL BVar1;
  longlong lVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468e31c8) && (_Init_thread_header(&DAT_1468e31c8), DAT_1468e31c8 == -1))
  {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1468e31a0);
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1468e31a0,4000);
    atexit((_func_5014 *)&LAB_143e7a6c0);
    _Init_thread_footer(&DAT_1468e31c8);
  }
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468e31a0);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468e31a0);
  }
  if ((void **)param_1 != &DAT_1468e30f0) {
    DAT_1468e30f8._0_4_ = *(int *)(param_1 + 1);
    lVar2 = (longlong)(int)DAT_1468e30f8;
    _Src = (void *)*param_1;
    if (((int)DAT_1468e30f8 == 0) && (DAT_1468e30f8._4_4_ == 0)) {
      DAT_1468e30f8._4_4_ = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&DAT_1468e30f0,(int)DAT_1468e30f8);
      _guard_xfg_dispatch_icall_nop(DAT_1468e30f0,_Src,lVar2 * 2);
    }
  }
  FString::ReplaceInline(&DAT_1468e30f0,&DAT_144ccaf54,&DAT_144ccae2c,0);
                    /* WARNING: Could not recover jumptable at 0x000141680e67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468e31a0);
  return;
}



// FUNCTION 141680ed0 SetProjectVersion body=191 status=ok
// SIG undefined SetProjectVersion(void)

void FNetworkVersion::SetProjectVersion(short *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_1 != (short *)0x0) {
    lVar4 = -1;
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (param_1[lVar1] != 0);
    if ((int)lVar1 != 0) {
      if (DAT_1464afba0 != param_1) {
        iVar3 = 0;
        if (*param_1 != 0) {
          do {
            lVar4 = lVar4 + 1;
          } while (param_1[lVar4] != 0);
          iVar3 = (int)lVar4 + 1;
        }
        DAT_1464afba8 = 0;
        iVar2 = 0;
        if (DAT_1464afbac != iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&DAT_1464afba0,iVar3);
          iVar2 = DAT_1464afba8;
        }
        DAT_1464afba8 = iVar2 + iVar3;
        if (DAT_1464afbac < DAT_1464afba8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464afba0);
        }
        if (iVar3 != 0) {
          ::_guard_xfg_dispatch_icall_nop(DAT_1464afba0,param_1,(longlong)iVar3 * 2);
        }
      }
      DAT_1468e28e0 = 0;
    }
  }
  return;
}



// FUNCTION 141680f90 FUN_141680f90 body=2449 status=ok
// SIG undefined FUN_141680f90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141680f90(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1444f8620;
    puVar3[1] = FUN_14165ebc0;
  }
  plVar7 = (longlong *)(param_1 + 0xd8);
  iVar2 = *(int *)(param_1 + 0xe0);
  local_88[0] = FUN_1416226a0;
  *(int *)(param_1 + 0xe0) = iVar2 + 1;
  if (*(int *)(param_1 + 0xe4) < iVar2 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar7,iVar2);
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar2 * 0x50 + *plVar7,local_88);
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
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1444f8620;
    puVar3[1] = FUN_14165ea70;
  }
  iVar2 = *(int *)(param_1 + 0xe0);
  local_88[0] = FUN_1416226a0;
  *(int *)(param_1 + 0xe0) = iVar2 + 1;
  if (*(int *)(param_1 + 0xe4) < iVar2 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar7,iVar2);
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar2 * 0x50 + *plVar7,local_88);
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
  if (*(char *)(param_1 + 8) == '\x01') {
    local_58 = (longlong *)0x0;
    local_48 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_78);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_1444f8620;
      puVar3[1] = FUN_14165e470;
    }
    iVar2 = *(int *)(param_1 + 0xe0);
    local_88[0] = FUN_1416226a0;
    *(int *)(param_1 + 0xe0) = iVar2 + 1;
    if (*(int *)(param_1 + 0xe4) < iVar2 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar7,iVar2);
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
              ((longlong)iVar2 * 0x50 + *plVar7,local_88);
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
    local_58 = (longlong *)0x0;
    local_48 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_78);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_1444f8620;
      puVar3[1] = FUN_14165e320;
    }
    iVar2 = *(int *)(param_1 + 0xe0);
    local_88[0] = FUN_1416226a0;
    *(int *)(param_1 + 0xe0) = iVar2 + 1;
    if (*(int *)(param_1 + 0xe4) < iVar2 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar7,iVar2);
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
              ((longlong)iVar2 * 0x50 + *plVar7,local_88);
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
    local_58 = (longlong *)0x0;
    local_48 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_78);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_1444f8620;
      puVar3[1] = FUN_14165e1a0;
    }
    iVar2 = *(int *)(param_1 + 0xe0);
    local_88[0] = FUN_1416226a0;
    *(int *)(param_1 + 0xe0) = iVar2 + 1;
    if (*(int *)(param_1 + 0xe4) < iVar2 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar7,iVar2);
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
              ((longlong)iVar2 * 0x50 + *plVar7,local_88);
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
    local_58 = (longlong *)0x0;
    local_48 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_78);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_1444f8620;
      puVar3[1] = FUN_14165e050;
    }
    iVar2 = *(int *)(param_1 + 0xe0);
    local_88[0] = FUN_1416226a0;
    *(int *)(param_1 + 0xe0) = iVar2 + 1;
    if (*(int *)(param_1 + 0xe4) < iVar2 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar7,iVar2);
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
              ((longlong)iVar2 * 0x50 + *plVar7,local_88);
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
    local_58 = (longlong *)0x0;
    local_48 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_78);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_1444f8620;
      puVar3[1] = FUN_14165e770;
    }
    iVar2 = *(int *)(param_1 + 0xe0);
    local_88[0] = FUN_1416226a0;
    *(int *)(param_1 + 0xe0) = iVar2 + 1;
    if (*(int *)(param_1 + 0xe4) < iVar2 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar7,iVar2);
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
              ((longlong)iVar2 * 0x50 + *plVar7,local_88);
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
    local_58 = (longlong *)0x0;
    local_48 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_78);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_1444f8620;
      puVar3[1] = FUN_14165ded0;
    }
    iVar2 = *(int *)(param_1 + 0xe0);
    local_88[0] = FUN_1416226a0;
    *(int *)(param_1 + 0xe0) = iVar2 + 1;
    if (*(int *)(param_1 + 0xe4) < iVar2 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar7,iVar2);
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
              ((longlong)iVar2 * 0x50 + *plVar7,local_88);
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
  }
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1444f8620;
    puVar3[1] = FUN_14165e8f0;
  }
  iVar2 = *(int *)(param_1 + 0xe0);
  local_88[0] = FUN_1416226a0;
  *(int *)(param_1 + 0xe0) = iVar2 + 1;
  if (*(int *)(param_1 + 0xe4) < iVar2 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar7,iVar2);
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar2 * 0x50 + *plVar7,local_88);
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
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1444f8620;
    puVar3[1] = FUN_14165dd50;
  }
  iVar2 = *(int *)(param_1 + 0xe0);
  local_88[0] = FUN_1416226a0;
  *(int *)(param_1 + 0xe0) = iVar2 + 1;
  if (*(int *)(param_1 + 0xe4) < iVar2 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar7,iVar2);
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar2 * 0x50 + *plVar7,local_88);
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
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1444f8620;
    puVar3[1] = FUN_14165e5f0;
  }
  iVar2 = *(int *)(param_1 + 0xe0);
  local_88[0] = FUN_1416226a0;
  *(int *)(param_1 + 0xe0) = iVar2 + 1;
  if (*(int *)(param_1 + 0xe4) < iVar2 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar7,iVar2);
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar2 * 0x50 + *plVar7,local_88);
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
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1444f8620;
    puVar3[1] = FUN_141668400;
  }
  iVar2 = *(int *)(param_1 + 0xe0);
  local_88[0] = FUN_1416226a0;
  *(int *)(param_1 + 0xe0) = iVar2 + 1;
  if (*(int *)(param_1 + 0xe4) < iVar2 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar7,iVar2);
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar2 * 0x50 + *plVar7,local_88);
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
  pcVar5 = FUN_141668360;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  if (*(char *)(param_1 + 8) == '\x01') {
    pcVar5 = FUN_1416683b0;
  }
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1444f8620;
    puVar3[1] = pcVar5;
  }
  iVar2 = *(int *)(param_1 + 0xe0);
  local_88[0] = FUN_1416226a0;
  *(int *)(param_1 + 0xe0) = iVar2 + 1;
  if (*(int *)(param_1 + 0xe4) < iVar2 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(plVar7,iVar2);
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar2 * 0x50 + *plVar7,local_88);
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
  uVar4 = FUN_141673f40();
  local_b0 = FUN_141673fc0();
  local_a8 = uVar4;
  FUN_14161d110(param_1 + 0xe8,local_b8,&local_b0,0);
  local_b0 = 1;
  local_a0 = FUN_141673c40();
  lVar1 = param_1 + 0x1d8;
  local_98 = &local_b0;
  FUN_14161ce00(lVar1,local_b8,&local_a0,0);
  local_b0 = 1;
  local_a0 = FUN_141673bc0();
  local_98 = &local_b0;
  FUN_14161ce00(lVar1,local_b8,&local_a0,0);
  local_b0 = 1;
  local_a0 = FUN_141673ac0();
  local_98 = &local_b0;
  FUN_14161ce00(lVar1,local_b8,&local_a0,0);
  local_b0 = 1;
  local_a0 = FUN_141673a40();
  local_98 = &local_b0;
  FUN_14161ce00(lVar1,local_b8,&local_a0,0);
  local_b0 = 1;
  local_a0 = FUN_141673d40();
  local_98 = &local_b0;
  FUN_14161ce00(lVar1,local_b8,&local_a0,0);
  local_b0 = 1;
  local_a0 = FUN_1416737c0();
  local_98 = &local_b0;
  FUN_14161ce00(lVar1,local_b8,&local_a0,0);
  local_b0 = 2;
  local_a0 = FUN_141673dc0();
  local_98 = &local_b0;
  FUN_14161ce00(lVar1,local_b8,&local_a0,0);
  local_b0 = 2;
  local_a0 = FUN_141673740();
  local_98 = &local_b0;
  FUN_14161ce00(lVar1,local_b8,&local_a0,0);
  local_b0 = 1;
  local_a0 = FUN_141674040();
  local_98 = &local_b0;
  FUN_14161ce00(lVar1,local_b8,&local_a0,0);
  uVar4 = FUN_141673cc0();
  FUN_14161cb00(param_1 + 0x138,local_b8,uVar4,0);
  return;
}



// FUNCTION 141681930 ShouldReadRemoteFile body=421 status=ok
// SIG undefined ShouldReadRemoteFile(void)

ulonglong FRemoteConfig::ShouldReadRemoteFile(longlong param_1,short *param_2)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong local_28;
  ulonglong local_20;
  undefined2 *local_18;
  int local_10;
  
  uVar6 = 0;
  local_20 = 0;
  local_28 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (param_2[lVar5] != 0);
    uVar4 = (int)lVar5 + 1;
    local_20 = (ulonglong)uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    FGenericPlatformString::Memcpy(local_28,param_2,(longlong)(int)uVar4 * 2);
  }
  uVar1 = FUN_141671940(&local_18,&local_28,1);
  if (*(char *)(param_1 + 0x55) == '\0') {
    lVar5 = FConfigCacheIni::FindConfigFile(DAT_1468b6148,&DAT_1468e2360);
    uVar1 = 0;
    if (lVar5 != 0) {
      FConfigCacheIni::GetArray
                (DAT_1468b6148,L"RemoteConfiguration",L"IniToLoad",param_1 + 0x58,&DAT_1468e2360);
      *(undefined1 *)(param_1 + 0x55) = 1;
      uVar1 = FConfigCacheIni::GetBool
                        (DAT_1468b6148,L"RemoteConfiguration",L"Enabled",param_1 + 0x54,
                         &DAT_1468e2360);
    }
  }
  if ((*(char *)(param_1 + 0x54) != '\0') && (uVar7 = uVar6, 0 < *(int *)(param_1 + 0x60))) {
    do {
      if (*(int *)(uVar6 + 8 + *(longlong *)(param_1 + 0x58)) == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = *(undefined2 **)(uVar6 + *(longlong *)(param_1 + 0x58));
      }
      puVar2 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar2 = local_18;
      }
      uVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
      if ((int)uVar1 == 0) {
        if (local_18 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_28 != 0) {
          FMemory::Free();
        }
        uVar1 = FindConfig(param_1,param_2);
        if (uVar1 == 0) {
          return 1;
        }
        goto LAB_141681a8c;
      }
      uVar4 = (int)uVar7 + 1;
      uVar6 = uVar6 + 0x10;
      uVar7 = (ulonglong)uVar4;
    } while ((int)uVar4 < *(int *)(param_1 + 0x60));
  }
  if (local_18 != (undefined2 *)0x0) {
    uVar1 = FMemory::Free();
  }
  if (local_28 != 0) {
    uVar1 = FMemory::Free();
  }
LAB_141681a8c:
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141681ae0 FUN_141681ae0 body=451 status=ok
// SIG undefined FUN_141681ae0(void)

undefined1 FUN_141681ae0(void)

{
  wchar_t *pwVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  wchar_t wVar8;
  wchar_t wVar9;
  wchar_t *_Str1;
  
  if (DAT_1468e3258 <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              )) {
    return DAT_1468e3254;
  }
  _Init_thread_header(&DAT_1468e3258);
  if (DAT_1468e3258 != -1) {
    return DAT_1468e3254;
  }
  cVar4 = FApp::IsInstalled();
  if (cVar4 == '\0') {
    pwVar6 = (wchar_t *)FCommandLine::Get();
    _Str1 = pwVar6;
    if (*pwVar6 != L'\0') {
LAB_141681b70:
      if (_Str1 != (wchar_t *)0x0) {
        wVar8 = *_Str1;
        bVar3 = false;
        bVar2 = false;
        pwVar1 = _Str1;
        if (wVar8 != L'\0') {
          do {
            _Str1 = pwVar1 + 1;
            wVar9 = wVar8 + L'￠';
            if (0x19 < (ushort)(wVar8 + L'ﾟ')) {
              wVar9 = wVar8;
            }
            if (((bVar2) || (bVar3)) || (wVar9 != L'S')) {
              if (((ushort)(wVar9 + L'﾿') < 0x1a) || ((ushort)(wVar9 + L'￐') < 10))
              goto LAB_141681bc7;
              bVar3 = false;
            }
            else {
              iVar5 = _wcsnicmp(_Str1,L"aveToUserDir",0xc);
              if (iVar5 == 0) goto LAB_141681c14;
LAB_141681bc7:
              bVar3 = true;
            }
            if (wVar9 == L'\"') {
              bVar2 = !bVar2;
            }
            wVar8 = *_Str1;
            pwVar1 = _Str1;
            if (wVar8 == L'\0') break;
          } while( true );
        }
      }
    }
LAB_141681be2:
    cVar4 = FOutputDevice::CanBeUsedOnAnyThread();
    if ((cVar4 == '\0') && (lVar7 = FUN_141669ec0(), *(int *)(lVar7 + 8) < 2)) {
      DAT_1468e3254 = 0;
      goto LAB_141681c73;
    }
  }
LAB_141681c71:
  DAT_1468e3254 = 1;
LAB_141681c73:
  _Init_thread_footer(&DAT_1468e3258);
  return DAT_1468e3254;
LAB_141681c14:
  if (pwVar1 == (wchar_t *)0x0) goto LAB_141681be2;
  if ((((pwVar6 < pwVar1) && ((pwVar1[-1] + L'ￓ' & 0xfffdU) == 0)) &&
      ((pwVar1 + -2 < pwVar6 || (iVar5 = iswspace(pwVar1[-2]), iVar5 != 0)))) &&
     (((pwVar1 + 0xd == (wchar_t *)0x0 || (wVar8 = pwVar1[0xd], wVar8 == L'\0')) ||
      (iVar5 = iswspace(wVar8), iVar5 != 0)))) goto LAB_141681c71;
  goto LAB_141681b70;
}



// FUNCTION 141681cb0 FUN_141681cb0 body=334 status=ok
// SIG undefined FUN_141681cb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141681cb0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  undefined1 auStack_1058 [32];
  undefined1 local_1038 [8];
  longlong *local_1030;
  undefined1 local_1018 [2048];
  undefined1 local_818 [2048];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x141681cbc;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1058;
  DVar6 = GetLastError();
  _guard_xfg_dispatch_icall_nop(local_1018,0,0x800);
  uVar7 = FWindowsPlatformMisc::GetSystemErrorMessage(local_818,0x400,0);
  TCString<wchar_t>::SprintfImpl(local_1018,L"GetLastError : %d\n\n%s",DVar6,uVar7);
  cVar5 = FUN_140612c50();
  if (cVar5 == '\x01') {
    LowLevelFatalErrorHandler("Unknown",0x3c,local_1018);
    FDebug::AssertFailed(&DAT_144cc894a,"Unknown",0x3c,local_1018);
  }
  else {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_1038,L"System Error",L"MessageDialog",L"DefaultSystemErrorTitle");
    puVar8 = (undefined8 *)FText::ToString(uVar7);
    if (*(int *)(puVar8 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar8;
    }
    FUN_1416a4860(0,local_1018,puVar9);
    if (local_1030 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1030 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_1030)(local_1030);
        LOCK();
        piVar2 = (int *)((longlong)local_1030 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1030 + 8))(local_1030,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141681e00 ProjectConfigDir body=346 status=ok
// SIG undefined ProjectConfigDir(void)

ulonglong * FPaths::ProjectConfigDir(ulonglong *param_1)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong local_28;
  uint local_20;
  int local_1c;
  
  psVar2 = (short *)FUN_1415b0fe0();
  local_28 = 0;
  iVar7 = 0;
  local_1c = 0;
  uVar6 = 0;
  uVar8 = 0;
  iVar5 = 0;
  if ((psVar2 != (short *)0x0) && (uVar6 = 0, uVar8 = 0, iVar5 = 0, *psVar2 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (psVar2[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_20 = uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    iVar5 = local_1c;
    uVar1 = local_20;
    uVar8 = local_28;
    uVar6 = (ulonglong)local_20;
    FGenericPlatformString::Memcpy(local_28,psVar2,(longlong)(int)uVar3 * 2);
    if (uVar1 != 0) goto LAB_141681ea0;
  }
  iVar7 = 1;
LAB_141681ea0:
  local_20 = (uint)uVar6;
  local_28 = uVar8;
  local_1c = iVar5;
  if (iVar5 < (int)(local_20 + 7 + iVar7)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    uVar6 = (ulonglong)local_20;
  }
  iVar5 = (int)uVar6;
  local_20 = (8 - (uint)(iVar5 != 0)) + iVar5;
  if (local_1c < (int)local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,uVar6);
  }
  lVar4 = (longlong)iVar5 - (ulonglong)(iVar5 != 0);
  builtin_wcsncpy((wchar_t *)(local_28 + lVar4 * 2),L"Conf",4);
  lVar4 = local_28 + lVar4 * 2;
  *(undefined4 *)(lVar4 + 8) = 0x670069;
  *(undefined2 *)(lVar4 + 0xc) = 0x2f;
  *(undefined2 *)(lVar4 + 0xe) = 0;
  *param_1 = local_28;
  *(int *)((longlong)param_1 + 0xc) = local_1c;
  *(uint *)(param_1 + 1) = local_20;
  return param_1;
}



// FUNCTION 141681f60 StartTask body=1323 status=ok
// SIG undefined StartTask(void)

undefined8
FRemoteConfigAsyncTaskManager::StartTask
          (longlong *param_1,short *param_2,short *param_3,undefined8 param_4,undefined8 *param_5,
          char param_6)

{
  short sVar1;
  char cVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  short *psVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined2 *local_res8;
  undefined8 *local_res10;
  short *local_res18;
  undefined8 local_res20;
  undefined2 *local_a8;
  ulonglong local_a0;
  longlong local_98;
  ulonglong local_90;
  undefined8 *local_88;
  ulonglong local_80;
  longlong *local_78;
  undefined8 **local_70;
  void *local_68;
  uint local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  
  local_res18 = param_3;
  local_res20 = param_4;
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  }
  puVar10 = (undefined8 *)0x0;
  local_a0 = 0;
  uVar13 = 0;
  local_a8 = (undefined2 *)0x0;
  lVar16 = -1;
  if ((param_2 != (short *)0x0) && (lVar14 = lVar16, *param_2 != 0)) {
    do {
      lVar14 = lVar14 + 1;
    } while (param_2[lVar14] != 0);
    uVar12 = (int)lVar14 + 1;
    local_a0 = (ulonglong)uVar12;
    uVar13 = uVar12;
    if (0 < (int)uVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8);
      uVar13 = (uint)local_a0;
    }
    FGenericPlatformString::Memcpy(local_a8,param_2,(longlong)(int)uVar12 * 2);
  }
  puVar6 = puVar10;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    puVar8 = &DAT_143f3eda8;
    if (uVar13 != 0) {
      puVar8 = local_a8;
    }
    iVar4 = FUN_140438070(puVar8);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar4) * 4);
    if (iVar4 != -1) {
      lVar14 = *param_1;
      do {
        puVar8 = &DAT_143f3eda8;
        lVar17 = (longlong)iVar4 * 0x20;
        puVar11 = &DAT_143f3eda8;
        if ((uint)local_a0 != 0) {
          puVar11 = local_a8;
        }
        if (*(int *)(lVar14 + 8 + lVar17) != 0) {
          puVar8 = *(undefined2 **)(lVar14 + lVar17);
        }
        iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar11);
        if (iVar5 == 0) {
          if ((iVar4 != -1) && (lVar14 = (longlong)iVar4 * 0x20 + *param_1, lVar14 != 0)) {
            puVar6 = *(undefined8 **)(lVar14 + 0x10);
          }
          break;
        }
        lVar14 = *param_1;
        iVar4 = *(int *)(lVar14 + 0x18 + lVar17);
      } while (iVar4 != -1);
    }
  }
  if (local_a8 != (undefined2 *)0x0) {
    FMemory::Free(local_a8);
  }
  if (puVar6 == (undefined8 *)0x0) {
LAB_14168212c:
    puVar6 = (undefined8 *)operator_new(0x1068);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR_Abandon_144ccfab8;
      puVar6[0x101] = 0;
      puVar6[0x102] = 0;
      puVar6[0x207] = 0;
      puVar6[0x208] = 0;
      psVar9 = local_res18;
      do {
        sVar1 = *psVar9;
        *(short *)((longlong)psVar9 + (longlong)puVar6 + (8 - (longlong)local_res18)) = sVar1;
        psVar9 = psVar9 + 1;
      } while (sVar1 != 0);
      *(char *)(puVar6 + 0x209) = param_6;
      FRemoteConfigAsyncIOInfo::operator=(puVar6 + 0x101,local_res20);
      if (param_5 != (undefined8 *)0x0) {
        FString::operator=(puVar6 + 0x207);
      }
      *(undefined4 *)(puVar6 + 0x20a) = 0;
      puVar6[0x20b] = 0;
      puVar6[0x20c] = 0;
      puVar10 = puVar6;
    }
    local_98 = 0;
    local_90 = 0;
    local_res10 = puVar10;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      do {
        lVar16 = lVar16 + 1;
      } while (param_2[lVar16] != 0);
      uVar13 = (int)lVar16 + 1;
      local_90 = (ulonglong)uVar13;
      if (0 < (int)uVar13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
      }
      FGenericPlatformString::Memcpy(local_98,param_2,(longlong)(int)uVar13 * 2);
    }
    local_78 = &local_98;
    local_70 = &local_res10;
    FUN_14165f220(param_1,&local_res8,&local_78,0);
    lVar14 = (longlong)(int)local_res8;
    lVar16 = *param_1;
    if (local_98 != 0) {
      FMemory::Free();
    }
    lVar17 = DAT_1468b5010;
    lVar16 = *(longlong *)(lVar14 * 0x20 + lVar16 + 0x10);
    LOCK();
    *(int *)(lVar16 + 0x1050) = *(int *)(lVar16 + 0x1050) + 1;
    UNLOCK();
    plVar7 = *(longlong **)(lVar16 + 0x1058);
    *(longlong *)(lVar16 + 0x1060) = lVar17;
    if (lVar17 == 0) {
      FUN_1415b5910();
      *(undefined8 *)(lVar16 + 0x1058) = 0;
      FAsyncTask<FRemoteConfigAsyncWorker>::DoWork(lVar16);
    }
    else {
      if (plVar7 == (longlong *)0x0) {
        plVar7 = (longlong *)FUN_1415ab270(1);
        *(longlong **)(lVar16 + 0x1058) = plVar7;
      }
      (**(code **)(*plVar7 + 0x18))();
      (**(code **)(**(longlong **)(lVar16 + 0x1060) + 0x10))(*(longlong **)(lVar16 + 0x1060),lVar16)
      ;
    }
    uVar15 = 1;
  }
  else {
    if (param_6 == '\0') {
      cVar2 = FAsyncTask<FRemoteConfigAsyncWorker>::IsDone(puVar6);
      if (cVar2 != '\0') {
        local_88 = (undefined8 *)0x0;
        local_80 = 0;
        puVar6 = puVar10;
        if ((param_2 != (short *)0x0) && (lVar14 = lVar16, *param_2 != 0)) {
          do {
            lVar14 = lVar14 + 1;
          } while (param_2[lVar14] != 0);
          uVar13 = (int)lVar14 + 1;
          local_80 = (ulonglong)uVar13;
          if (0 < (int)uVar13) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
          }
          puVar6 = local_88;
          FGenericPlatformString::Memcpy(local_88,param_2,(longlong)(int)uVar13 * 2);
        }
        TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
        ::Remove(param_1,&local_88);
        if (puVar6 != (undefined8 *)0x0) {
          FMemory::Free(puVar6);
        }
        goto LAB_14168212c;
      }
      if (*(int *)(param_5 + 1) == 0) {
        local_res8 = &DAT_143f3eda8;
      }
      else {
        local_res8 = (undefined2 *)*param_5;
      }
      puVar6 = puVar10;
      puVar18 = puVar10;
      if (0 < (int)param_1[0xb]) {
        do {
          if (*(int *)((longlong)puVar6 + param_1[10] + 8) == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = *(undefined2 **)((longlong)puVar6 + param_1[10]);
          }
          iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(param_2,puVar8);
          if (iVar4 == 0) {
            if (*(int *)((longlong)puVar6 + param_1[10] + 0x18) == 0) {
              puVar8 = &DAT_143f3eda8;
            }
            else {
              puVar8 = *(undefined2 **)((longlong)puVar6 + param_1[10] + 0x10);
            }
            iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(local_res8,puVar8);
            if (iVar4 == 0) goto LAB_141682369;
          }
          uVar13 = (int)puVar18 + 1;
          puVar6 = puVar6 + 4;
          puVar18 = (undefined8 *)(ulonglong)uVar13;
        } while ((int)uVar13 < (int)param_1[0xb]);
      }
      local_68 = (void *)0x0;
      local_5c = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      if (param_2 != (short *)0x0) {
        puVar6 = puVar10;
        if (*param_2 != 0) {
          do {
            lVar16 = lVar16 + 1;
          } while (param_2[lVar16] != 0);
          puVar6 = (undefined8 *)(ulonglong)((int)lVar16 + 1);
        }
        iVar4 = (int)puVar6;
        if (iVar4 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68,puVar6);
          puVar10 = (undefined8 *)(ulonglong)local_60;
        }
        local_60 = iVar4 + (int)puVar10;
        if (local_5c < (int)local_60) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,puVar10);
        }
        if (iVar4 != 0) {
          ::_guard_xfg_dispatch_icall_nop(local_68,param_2,(longlong)iVar4 * 2);
        }
      }
      FString::operator=(&local_58,param_5);
      iVar4 = (int)param_1[0xb];
      *(int *)(param_1 + 0xb) = iVar4 + 1;
      if (*(int *)((longlong)param_1 + 0x5c) < iVar4 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_1 + 10,iVar4);
      }
      puVar10 = (undefined8 *)((longlong)iVar4 * 0x20 + param_1[10]);
      *puVar10 = local_68;
      *(uint *)(puVar10 + 1) = local_60;
      *(int *)((longlong)puVar10 + 0xc) = local_5c;
      puVar10[2] = local_58;
      *(undefined4 *)(puVar10 + 3) = (undefined4)local_50;
      *(undefined4 *)((longlong)puVar10 + 0x1c) = local_50._4_4_;
    }
LAB_141682369:
    uVar15 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  return uVar15;
}



// FUNCTION 141682490 FUN_141682490 body=144 status=ok
// SIG undefined FUN_141682490(void)

void FUN_141682490(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    if ((0 < param_2) && (0 < param_3)) {
      FUN_141685240(param_1,param_2,param_3);
    }
    FText::operator=(*(longlong *)
                      (*(longlong *)(param_1 + 0x70) + -8 + (longlong)*(int *)(param_1 + 0x78) * 8)
                     + 0x18,param_4);
    FUN_14167e960(param_1,0);
  }
  return;
}



// FUNCTION 141682520 Strifind body=353 status=ok
// SIG undefined Strifind(void)

wchar_t * TCString<wchar_t>::Strifind(wchar_t *param_1,wchar_t *param_2,char param_3)

{
  wchar_t wVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  wchar_t wVar5;
  int iVar6;
  longlong lVar7;
  wchar_t wVar8;
  
  if ((param_2 != (wchar_t *)0x0) && (param_1 != (wchar_t *)0x0)) {
    wVar1 = *param_2;
    bVar3 = false;
    lVar7 = -1;
    wVar8 = wVar1 + L'￠';
    if (0x19 < (ushort)(wVar1 + L'ﾟ')) {
      wVar8 = wVar1;
    }
    do {
      lVar7 = lVar7 + 1;
    } while (param_2[lVar7] != L'\0');
    wVar1 = *param_1;
    iVar6 = (int)lVar7 + -1;
    param_1 = param_1 + 1;
    if (param_3 == '\0') {
      while (wVar1 != L'\0') {
        wVar5 = wVar1 + L'￠';
        if (0x19 < (ushort)(wVar1 + L'ﾟ')) {
          wVar5 = wVar1;
        }
        if (((!bVar3) && (wVar5 == wVar8)) &&
           (iVar4 = _wcsnicmp(param_1,param_2 + 1,(longlong)iVar6), iVar4 == 0)) goto LAB_141682607;
        if (((ushort)(wVar5 + L'﾿') < 0x1a) || ((ushort)(wVar5 + L'￐') < 10)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        wVar1 = *param_1;
        param_1 = param_1 + 1;
      }
    }
    else {
      bVar2 = false;
      while (wVar1 != L'\0') {
        wVar5 = wVar1 + L'￠';
        if (0x19 < (ushort)(wVar1 + L'ﾟ')) {
          wVar5 = wVar1;
        }
        if (((!bVar2) && (!bVar3)) &&
           ((wVar5 == wVar8 && (iVar4 = _wcsnicmp(param_1,param_2 + 1,(longlong)iVar6), iVar4 == 0))
           )) {
LAB_141682607:
          return param_1 + -1;
        }
        if (((ushort)(wVar5 + L'﾿') < 0x1a) || ((ushort)(wVar5 + L'￐') < 10)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (wVar5 == L'\"') {
          bVar2 = !bVar2;
        }
        wVar1 = *param_1;
        param_1 = param_1 + 1;
      }
    }
  }
  return (wchar_t *)0x0;
}



// FUNCTION 141682690 TearDown body=122 status=ok
// SIG undefined TearDown(void)

void FOutputDeviceFile::TearDown(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    if (*(char *)(param_1 + 8) == '\0') {
      uVar2 = FGenericPlatformTime::StrTimestamp();
      FOutputDevice::LogfImpl(param_1,L"Log file closed, %s",uVar2);
      plVar3 = *(longlong **)(param_1 + 0x10);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,1);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x821) = 0;
  return;
}



// FUNCTION 141682710 TearDown body=189 status=ok
// SIG undefined TearDown(void)

void FOutputDeviceRedirector::TearDown(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  char cVar2;
  BOOL BVar3;
  int iVar4;
  longlong lVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x48);
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  FUN_141684f40(param_1,0);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x30));
      cVar2 = (**(code **)(*plVar1 + 0x38))(plVar1);
      if (cVar2 != '\0') {
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
      (**(code **)(*plVar1 + 0x20))(plVar1);
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < *(int *)(param_1 + 0x38));
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x30,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416827c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1416827d0 TestTextFilter body=35 status=ok
// SIG undefined TestTextFilter(void)

undefined8 FTextFilterExpressionEvaluator::TestTextFilter(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    return 1;
  }
  if ((char)param_1[0xf] != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001416827ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_1 + 8,param_2,0);
    return uVar1;
  }
  return 0;
}



// FUNCTION 141682800 ToString body=748 status=ok
// SIG undefined ToString(void)

longlong * FEngineVersion::ToString(undefined2 *param_1,longlong *param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *local_28;
  int local_20;
  
  FString::PrintfImpl(param_2,&DAT_144ccb074,*param_1);
  if (param_3 < 1) {
    return param_2;
  }
  FString::PrintfImpl(&local_28,&DAT_144ccb818,param_1[1]);
  pvVar2 = local_28;
  iVar6 = 0;
  iVar5 = iVar6;
  if (local_20 != 0) {
    iVar5 = local_20 + -1;
  }
  if (iVar5 != 0) {
    iVar4 = (int)param_2[1];
    iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
    *(int *)(param_2 + 1) = iVar3;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (1 < param_3) {
    FString::PrintfImpl(&local_28,&DAT_144ccb8e8,param_1[2]);
    pvVar2 = local_28;
    iVar5 = iVar6;
    if (local_20 != 0) {
      iVar5 = local_20 + -1;
    }
    if (iVar5 != 0) {
      iVar4 = (int)param_2[1];
      iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
      *(int *)(param_2 + 1) = iVar3;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
      }
      pvVar1 = (void *)(*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
      *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
    }
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
    if (2 < param_3) {
      FString::PrintfImpl(&local_28,&DAT_144ccb8f0,*(uint *)(param_1 + 4) & 0x7fffffff);
      pvVar2 = local_28;
      iVar5 = iVar6;
      if (local_20 != 0) {
        iVar5 = local_20 + -1;
      }
      if (iVar5 != 0) {
        iVar4 = (int)param_2[1];
        iVar3 = (uint)(iVar4 == 0) + iVar4 + iVar5;
        *(int *)(param_2 + 1) = iVar3;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar5 * 2);
        *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
      }
      if (local_28 != (void *)0x0) {
        FMemory::Free(local_28);
      }
      if (((3 < param_3) && (*(int *)(param_1 + 0xc) != 0)) && (0 < *(int *)(param_1 + 0xc) + -1)) {
        FString::PrintfImpl(&local_28,&DAT_144ccb9b0,*(undefined8 *)(param_1 + 8));
        pvVar2 = local_28;
        if (local_20 != 0) {
          iVar6 = local_20 + -1;
        }
        if (iVar6 != 0) {
          iVar5 = (int)param_2[1];
          iVar4 = (uint)(iVar5 == 0) + iVar5 + iVar6;
          *(int *)(param_2 + 1) = iVar4;
          if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
          }
          pvVar1 = (void *)(*param_2 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
          ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar6 * 2);
          *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
        }
        if (local_28 != (void *)0x0) {
          FMemory::Free(local_28);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 141682af0 FUN_141682af0 body=562 status=ok
// SIG undefined FUN_141682af0(void)

undefined8 FUN_141682af0(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  wchar_t *pwVar3;
  
  switch(param_3) {
  case 1:
    FString::PrintfImpl(param_2,L"%08X-%04X-%04X-%04X-%04X%08X",*param_1,(uint)param_1[1] >> 0x10,
                        param_1[1] & 0xffff,(uint)param_1[2] >> 0x10,param_1[2] & 0xffff,param_1[3])
    ;
    return param_2;
  case 2:
    FString::PrintfImpl(param_2,L"{%08X-%04X-%04X-%04X-%04X%08X}",*param_1,(uint)param_1[1] >> 0x10,
                        param_1[1] & 0xffff,(uint)param_1[2] >> 0x10,param_1[2] & 0xffff,param_1[3])
    ;
    return param_2;
  case 3:
    FString::PrintfImpl(param_2,L"(%08X-%04X-%04X-%04X-%04X%08X)",*param_1,(uint)param_1[1] >> 0x10,
                        param_1[1] & 0xffff,(uint)param_1[2] >> 0x10,param_1[2] & 0xffff,param_1[3])
    ;
    return param_2;
  case 4:
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    FString::PrintfImpl(param_2,
                        L"{0x%08X,0x%04X,0x%04X,{0x%02X,0x%02X,0x%02X,0x%02X,0x%02X,0x%02X,0x%02X,0x%02X}}"
                        ,*param_1,(uint)param_1[1] >> 0x10,param_1[1] & 0xffff,uVar1 >> 0x18,
                        uVar1 >> 0x10 & 0xff,uVar1 >> 8 & 0xff,uVar1 & 0xff,uVar2 >> 0x18,
                        uVar2 >> 0x10 & 0xff,uVar2 >> 8 & 0xff,uVar2 & 0xff);
    return param_2;
  case 5:
    pwVar3 = L"%08X-%08X-%08X-%08X";
    break;
  case 6:
    pwVar3 = L"%010u-%010u-%010u-%010u";
    break;
  default:
    pwVar3 = L"%08X%08X%08X%08X";
  }
  FString::PrintfImpl(param_2,pwVar3,*param_1,param_1[1],param_1[2],param_1[3]);
  return param_2;
}



// FUNCTION 141682d40 Token body=179 status=ok
// SIG undefined Token(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FParse::Token(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_838 [32];
  short local_818 [1024];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_838;
  cVar1 = Token(param_2,local_818,0x400,param_3);
  *param_1 = 0;
  param_1[1] = 0;
  if ((cVar1 != '\0') && (local_818[0] != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (local_818[lVar3] != 0);
    iVar2 = (int)lVar3 + 1;
    *(int *)(param_1 + 1) = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,local_818,(longlong)iVar2 * 2);
  }
  return param_1;
}



// FUNCTION 141682e00 Token body=565 status=ok
// SIG undefined Token(void)

undefined4 FParse::Token(longlong *param_1,longlong *param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  wint_t *pwVar3;
  wint_t *pwVar4;
  int iVar5;
  wint_t wVar6;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  iVar2 = iswspace(*(wint_t *)*param_1);
  while (iVar2 != 0) {
    *param_1 = *param_1 + 2;
    iVar2 = iswspace(*(wint_t *)*param_1);
  }
  wVar6 = *(wint_t *)*param_1;
  if (wVar6 == 0x22) {
    pwVar3 = (wint_t *)*param_1 + 1;
    *param_1 = (longlong)pwVar3;
    wVar6 = *pwVar3;
    while ((wVar6 != 0 && (wVar6 != 0x22))) {
      pwVar4 = pwVar3 + 1;
      *param_1 = (longlong)pwVar4;
      if ((wVar6 == 0x5c) && (param_3 != '\0')) {
        wVar6 = *pwVar4;
        pwVar3 = pwVar3 + 2;
        *param_1 = (longlong)pwVar3;
        pwVar4 = pwVar3;
        if (wVar6 == 0) break;
      }
      if (wVar6 != 0) {
        iVar2 = (int)param_2[1];
        iVar5 = iVar2 + -1;
        if (iVar2 < 1) {
          iVar5 = 0;
        }
        iVar2 = (iVar2 < 1) + 1 + iVar2;
        *(int *)(param_2 + 1) = iVar2;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
        }
        *(wint_t *)(*param_2 + (longlong)iVar5 * 2) = wVar6;
        *(undefined2 *)(*param_2 + 2 + (longlong)iVar5 * 2) = 0;
        pwVar4 = (wint_t *)*param_1;
      }
      pwVar3 = pwVar4;
      wVar6 = *pwVar4;
    }
    if (*pwVar3 == 0x22) {
      *param_1 = (longlong)(pwVar3 + 1);
    }
  }
  else {
    bVar1 = false;
    while ((wVar6 != 0 && ((iVar2 = iswspace(wVar6), iVar2 == 0 || (bVar1))))) {
      pwVar3 = (wint_t *)(*param_1 + 2);
      *param_1 = (longlong)pwVar3;
      if ((wVar6 == 0x5c) && ((param_3 != '\0' && (bVar1)))) {
        iVar2 = (int)param_2[1];
        iVar5 = iVar2 + -1;
        if (iVar2 < 1) {
          iVar5 = 0;
        }
        iVar2 = (iVar2 < 1) + 1 + iVar2;
        *(int *)(param_2 + 1) = iVar2;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
        }
        *(undefined2 *)(*param_2 + (longlong)iVar5 * 2) = 0x5c;
        *(undefined2 *)(*param_2 + 2 + (longlong)iVar5 * 2) = 0;
        wVar6 = *(wint_t *)*param_1;
        if (wVar6 == 0) break;
        pwVar3 = (wint_t *)*param_1 + 1;
        *param_1 = (longlong)pwVar3;
      }
      else if (wVar6 == 0x22) {
        bVar1 = !bVar1;
      }
      if (wVar6 != 0) {
        iVar2 = (int)param_2[1];
        iVar5 = iVar2 + -1;
        if (iVar2 < 1) {
          iVar5 = 0;
        }
        iVar2 = (iVar2 < 1) + 1 + iVar2;
        *(int *)(param_2 + 1) = iVar2;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
        }
        *(wint_t *)(*param_2 + (longlong)iVar5 * 2) = wVar6;
        *(undefined2 *)(*param_2 + 2 + (longlong)iVar5 * 2) = 0;
        pwVar3 = (wint_t *)*param_1;
      }
      wVar6 = *pwVar3;
    }
  }
  iVar2 = (int)param_2[1];
  iVar5 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar5 = 0;
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),0 < iVar5);
}



// FUNCTION 141683040 Token body=431 status=ok
// SIG undefined Token(void)

undefined8 FParse::Token(longlong *param_1,wint_t *param_2,int param_3,char param_4)

{
  bool bVar1;
  int iVar2;
  wint_t *pwVar3;
  wint_t *pwVar4;
  int iVar5;
  wint_t wVar6;
  
  iVar5 = 0;
  iVar2 = iswspace(*(wint_t *)*param_1);
  while (iVar2 != 0) {
    *param_1 = *param_1 + 2;
    iVar2 = iswspace(*(wint_t *)*param_1);
  }
  wVar6 = *(wint_t *)*param_1;
  if (wVar6 == 0x22) {
    pwVar3 = (wint_t *)*param_1 + 1;
    *param_1 = (longlong)pwVar3;
    wVar6 = *pwVar3;
    if (wVar6 != 0) {
      iVar2 = 1;
      pwVar4 = param_2;
      do {
        if ((wVar6 == 0x22) || (param_3 <= iVar2)) break;
        *param_1 = (longlong)(pwVar3 + 1);
        if ((wVar6 == 0x5c) && (param_4 != '\0')) {
          wVar6 = pwVar3[1];
          pwVar3 = pwVar3 + 2;
          *param_1 = (longlong)pwVar3;
          if (wVar6 == 0) break;
        }
        *pwVar4 = wVar6;
        iVar5 = iVar5 + 1;
        pwVar3 = (wint_t *)*param_1;
        iVar2 = iVar2 + 1;
        pwVar4 = pwVar4 + 1;
        wVar6 = *pwVar3;
      } while (wVar6 != 0);
    }
    if (*pwVar3 == 0x22) {
      *param_1 = (longlong)(pwVar3 + 1);
    }
  }
  else {
    bVar1 = false;
    pwVar3 = param_2;
    while ((wVar6 != 0 && ((iVar2 = iswspace(wVar6), iVar2 == 0 || (bVar1))))) {
      pwVar4 = (wint_t *)(*param_1 + 2);
      *param_1 = (longlong)pwVar4;
      if (wVar6 == 0x5c) {
        if ((param_4 != '\0') && (bVar1)) {
          if (iVar5 + 1 < param_3) {
            *pwVar3 = 0x5c;
            pwVar4 = (wint_t *)*param_1;
            pwVar3 = pwVar3 + 1;
            iVar5 = iVar5 + 1;
          }
          wVar6 = *pwVar4;
          if (wVar6 == 0) break;
          pwVar4 = pwVar4 + 1;
          *param_1 = (longlong)pwVar4;
        }
      }
      else if (wVar6 == 0x22) {
        bVar1 = !bVar1;
      }
      if (iVar5 + 1 < param_3) {
        *pwVar3 = wVar6;
        pwVar4 = (wint_t *)*param_1;
        pwVar3 = pwVar3 + 1;
        iVar5 = iVar5 + 1;
      }
      wVar6 = *pwVar4;
    }
  }
  param_2[iVar5] = 0;
  return CONCAT71((int7)(int3)((uint)iVar5 >> 8),iVar5 != 0);
}



// FUNCTION 1416831f0 Transform body=2247 status=ok
// SIG undefined Transform(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMD5::Transform(undefined8 param_1,int *param_2,longlong param_3)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int local_78 [4];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  iVar1 = *param_2;
  uVar8 = param_2[1];
  uVar6 = param_2[2];
  lVar7 = 0x10;
  uVar4 = param_2[3];
  puVar2 = (undefined2 *)(param_3 + 2);
  piVar5 = local_78;
  do {
    *piVar5 = CONCAT31(CONCAT21(*puVar2,*(undefined1 *)((longlong)puVar2 + -1)),
                       *(undefined1 *)(puVar2 + -1));
    lVar7 = lVar7 + -1;
    puVar2 = puVar2 + 2;
    piVar5 = piVar5 + 1;
  } while (lVar7 != 0);
  uVar3 = iVar1 + -0x28955b88 + (~uVar8 & uVar4 | uVar6 & uVar8) + local_78[0];
  uVar3 = (uVar3 * 0x80 | uVar3 >> 0x19) + uVar8;
  uVar4 = uVar4 + 0xe8c7b756 + (~uVar3 & uVar6 | uVar8 & uVar3) + local_78[1];
  uVar4 = (uVar4 * 0x1000 | uVar4 >> 0x14) + uVar3;
  uVar6 = uVar6 + 0x242070db + (~uVar4 & uVar8 | uVar4 & uVar3) + local_78[2];
  uVar6 = (uVar6 >> 0xf | uVar6 * 0x20000) + uVar4;
  uVar8 = uVar8 + 0xc1bdceee + (~uVar6 & uVar3 | uVar4 & uVar6) + local_78[3];
  uVar9 = (uVar8 >> 10 | uVar8 * 0x400000) + uVar6;
  uVar8 = uVar3 + 0xf57c0faf + (~uVar9 & uVar4 | uVar6 & uVar9) + local_68;
  uVar3 = (uVar8 * 0x80 | uVar8 >> 0x19) + uVar9;
  uVar8 = uVar4 + 0x4787c62a + (~uVar3 & uVar6 | uVar9 & uVar3) + local_64;
  uVar8 = (uVar8 * 0x1000 | uVar8 >> 0x14) + uVar3;
  uVar6 = uVar6 + 0xa8304613 + (~uVar8 & uVar9 | uVar8 & uVar3) + local_60;
  uVar6 = (uVar6 >> 0xf | uVar6 * 0x20000) + uVar8;
  uVar4 = uVar9 + 0xfd469501 + (~uVar6 & uVar3 | uVar8 & uVar6) + local_5c;
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar6;
  uVar3 = (~uVar4 & uVar8 | uVar6 & uVar4) + 0x698098d8 + local_58 + uVar3;
  uVar3 = (uVar3 * 0x80 | uVar3 >> 0x19) + uVar4;
  uVar8 = uVar8 + (~uVar3 & uVar6 | uVar4 & uVar3) + 0x8b44f7af + local_54;
  uVar8 = (uVar8 * 0x1000 | uVar8 >> 0x14) + uVar3;
  uVar6 = ((~uVar8 & uVar4 | uVar8 & uVar3) - 0xa44f) + local_50 + uVar6;
  uVar6 = (uVar6 >> 0xf | uVar6 * 0x20000) + uVar8;
  uVar4 = uVar4 + (~uVar6 & uVar3 | uVar8 & uVar6) + 0x895cd7be + local_4c;
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar6;
  uVar3 = uVar3 + 0x6b901122 + (~uVar4 & uVar8 | uVar6 & uVar4) + local_48;
  uVar9 = (uVar3 * 0x80 | uVar3 >> 0x19) + uVar4;
  uVar8 = uVar8 + 0xfd987193 + (~uVar9 & uVar6 | uVar4 & uVar9) + local_44;
  uVar8 = (uVar8 * 0x1000 | uVar8 >> 0x14) + uVar9;
  uVar6 = uVar6 + 0xa679438e + (~uVar8 & uVar4 | uVar8 & uVar9) + local_40;
  uVar3 = (uVar6 >> 0xf | uVar6 * 0x20000) + uVar8;
  uVar4 = uVar4 + (~uVar3 & uVar9 | uVar8 & uVar3) + 0x49b40821 + local_3c;
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
  uVar9 = uVar9 + (~uVar8 & uVar3 | uVar8 & uVar4) + local_78[1] + -0x9e1da9e;
  uVar9 = (uVar9 * 0x20 | uVar9 >> 0x1b) + uVar4;
  uVar8 = (uVar3 & uVar9 | ~uVar3 & uVar4) + 0xc040b340 + local_60 + uVar8;
  uVar6 = (uVar8 * 0x200 | uVar8 >> 0x17) + uVar9;
  uVar8 = uVar3 + 0x265e5a51 + (~uVar4 & uVar9 | uVar6 & uVar4) + local_4c;
  uVar8 = (uVar8 * 0x4000 | uVar8 >> 0x12) + uVar6;
  uVar4 = uVar4 + 0xe9b6c7aa + (~uVar9 & uVar6 | uVar8 & uVar9) + local_78[0];
  uVar3 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar8;
  uVar4 = uVar9 + 0xd62f105d + (~uVar6 & uVar8 | uVar6 & uVar3) + local_64;
  uVar4 = (uVar4 * 0x20 | uVar4 >> 0x1b) + uVar3;
  uVar6 = uVar6 + 0x2441453 + (~uVar8 & uVar3 | uVar8 & uVar4) + local_50;
  uVar9 = (uVar6 * 0x200 | uVar6 >> 0x17) + uVar4;
  uVar8 = uVar8 + 0xd8a1e681 + (~uVar3 & uVar4 | uVar9 & uVar3) + local_3c;
  uVar6 = (uVar8 * 0x4000 | uVar8 >> 0x12) + uVar9;
  uVar8 = uVar3 + 0xe7d3fbc8 + (~uVar4 & uVar9 | uVar6 & uVar4) + local_68;
  uVar8 = (uVar8 >> 0xc | uVar8 * 0x100000) + uVar6;
  uVar4 = uVar4 + 0x21e1cde6 + (~uVar9 & uVar6 | uVar9 & uVar8) + local_54;
  uVar3 = (uVar4 * 0x20 | uVar4 >> 0x1b) + uVar8;
  uVar4 = uVar9 + 0xc33707d6 + (~uVar6 & uVar8 | uVar6 & uVar3) + local_40;
  uVar4 = (uVar4 * 0x200 | uVar4 >> 0x17) + uVar3;
  uVar6 = (~uVar8 & uVar3 | uVar4 & uVar8) + 0xf4d50d87 + local_78[3] + uVar6;
  uVar9 = (uVar6 * 0x4000 | uVar6 >> 0x12) + uVar4;
  uVar8 = uVar8 + 0x455a14ed + (~uVar3 & uVar4 | uVar9 & uVar3) + local_58;
  uVar6 = (uVar8 >> 0xc | uVar8 * 0x100000) + uVar9;
  uVar8 = uVar3 + 0xa9e3e905 + (~uVar4 & uVar9 | uVar4 & uVar6) + local_44;
  uVar8 = (uVar8 * 0x20 | uVar8 >> 0x1b) + uVar6;
  uVar4 = uVar4 + 0xfcefa3f8 + (~uVar9 & uVar6 | uVar9 & uVar8) + local_78[2];
  uVar4 = (uVar4 * 0x200 | uVar4 >> 0x17) + uVar8;
  uVar3 = uVar9 + 0x676f02d9 + (~uVar6 & uVar8 | uVar4 & uVar6) + local_5c;
  uVar3 = (uVar3 * 0x4000 | uVar3 >> 0x12) + uVar4;
  uVar6 = (~uVar8 & uVar4 | uVar3 & uVar8) + 0x8d2a4c8a + local_48 + uVar6;
  uVar9 = (uVar6 >> 0xc | uVar6 * 0x100000) + uVar3;
  uVar8 = uVar8 + ((uVar4 ^ uVar3 ^ uVar9) - 0x5c6be) + local_64;
  uVar8 = (uVar8 * 0x10 | uVar8 >> 0x1c) + uVar9;
  uVar4 = uVar4 + (uVar3 ^ uVar9 ^ uVar8) + 0x8771f681 + local_58;
  uVar6 = (uVar4 * 0x800 | uVar4 >> 0x15) + uVar8;
  uVar3 = uVar3 + (uVar6 ^ uVar9 ^ uVar8) + 0x6d9d6122 + local_4c;
  uVar4 = (uVar3 * 0x10000 | uVar3 >> 0x10) + uVar6;
  uVar9 = uVar9 + (uVar6 ^ uVar4 ^ uVar8) + 0xfde5380c + local_40;
  uVar3 = (uVar9 >> 9 | uVar9 * 0x800000) + uVar4;
  uVar8 = uVar8 + 0xa4beea44 + (uVar6 ^ uVar4 ^ uVar3) + local_78[1];
  uVar9 = (uVar8 * 0x10 | uVar8 >> 0x1c) + uVar3;
  uVar8 = uVar6 + 0x4bdecfa9 + (uVar4 ^ uVar3 ^ uVar9) + local_68;
  uVar8 = (uVar8 * 0x800 | uVar8 >> 0x15) + uVar9;
  uVar6 = uVar4 + 0xf6bb4b60 + (uVar8 ^ uVar3 ^ uVar9) + local_5c;
  uVar6 = (uVar6 * 0x10000 | uVar6 >> 0x10) + uVar8;
  uVar4 = uVar3 + 0xbebfbc70 + (uVar8 ^ uVar6 ^ uVar9) + local_50;
  uVar3 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar6;
  uVar4 = uVar9 + 0x289b7ec6 + (uVar8 ^ uVar6 ^ uVar3) + local_44;
  uVar9 = (uVar4 * 0x10 | uVar4 >> 0x1c) + uVar3;
  uVar8 = uVar8 + 0xeaa127fa + (uVar6 ^ uVar3 ^ uVar9) + local_78[0];
  uVar8 = (uVar8 * 0x800 | uVar8 >> 0x15) + uVar9;
  uVar6 = uVar6 + (uVar8 ^ uVar3 ^ uVar9) + 0xd4ef3085 + local_78[3];
  uVar4 = (uVar6 * 0x10000 | uVar6 >> 0x10) + uVar8;
  uVar6 = uVar3 + 0x4881d05 + (uVar8 ^ uVar4 ^ uVar9) + local_60;
  uVar6 = (uVar6 >> 9 | uVar6 * 0x800000) + uVar4;
  uVar3 = uVar9 + 0xd9d4d039 + (uVar8 ^ uVar4 ^ uVar6) + local_54;
  uVar3 = (uVar3 * 0x10 | uVar3 >> 0x1c) + uVar6;
  uVar8 = (uVar4 ^ uVar6 ^ uVar3) + 0xe6db99e5 + local_48 + uVar8;
  uVar8 = (uVar8 * 0x800 | uVar8 >> 0x15) + uVar3;
  uVar4 = uVar4 + 0x1fa27cf8 + (uVar8 ^ uVar6 ^ uVar3) + local_3c;
  uVar9 = (uVar4 * 0x10000 | uVar4 >> 0x10) + uVar8;
  uVar6 = uVar6 + 0xc4ac5665 + (uVar8 ^ uVar9 ^ uVar3) + local_78[2];
  uVar4 = (uVar6 >> 9 | uVar6 * 0x800000) + uVar9;
  uVar6 = uVar3 + 0xf4292244 + ((~uVar8 | uVar4) ^ uVar9) + local_78[0];
  uVar6 = (uVar6 * 0x40 | uVar6 >> 0x1a) + uVar4;
  uVar8 = uVar8 + 0x432aff97 + ((~uVar9 | uVar6) ^ uVar4) + local_5c;
  uVar3 = (uVar8 * 0x400 | uVar8 >> 0x16) + uVar6;
  uVar8 = uVar9 + 0xab9423a7 + ((~uVar4 | uVar3) ^ uVar6) + local_40;
  uVar8 = (uVar8 * 0x8000 | uVar8 >> 0x11) + uVar3;
  uVar4 = uVar4 + 0xfc93a039 + ((~uVar6 | uVar8) ^ uVar3) + local_64;
  uVar9 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar8;
  uVar6 = uVar6 + 0x655b59c3 + ((~uVar3 | uVar9) ^ uVar8) + local_48;
  uVar4 = (uVar6 * 0x40 | uVar6 >> 0x1a) + uVar9;
  uVar6 = uVar3 + 0x8f0ccc92 + ((~uVar8 | uVar4) ^ uVar9) + local_78[3];
  uVar6 = (uVar6 * 0x400 | uVar6 >> 0x16) + uVar4;
  uVar8 = (uVar8 - 0x100b83) + ((~uVar9 | uVar6) ^ uVar4) + local_50;
  uVar3 = (uVar8 * 0x8000 | uVar8 >> 0x11) + uVar6;
  uVar8 = uVar9 + 0x85845dd1 + ((~uVar4 | uVar3) ^ uVar6) + local_78[1];
  uVar8 = (uVar8 >> 0xb | uVar8 * 0x200000) + uVar3;
  uVar4 = uVar4 + 0x6fa87e4f + ((~uVar6 | uVar8) ^ uVar3) + local_58;
  uVar4 = (uVar4 * 0x40 | uVar4 >> 0x1a) + uVar8;
  uVar6 = ((~uVar3 | uVar4) ^ uVar8) + 0xfe2ce6e0 + local_3c + uVar6;
  uVar10 = (uVar6 * 0x400 | uVar6 >> 0x16) + uVar4;
  uVar3 = uVar3 + ((~uVar8 | uVar10) ^ uVar4) + 0xa3014314 + local_60;
  uVar6 = (uVar3 * 0x8000 | uVar3 >> 0x11) + uVar10;
  uVar8 = uVar8 + 0x4e0811a1 + ((~uVar4 | uVar6) ^ uVar10) + local_44;
  uVar3 = (uVar8 >> 0xb | uVar8 * 0x200000) + uVar6;
  uVar4 = ((~uVar10 | uVar3) ^ uVar6) + 0xf7537e82 + local_68 + uVar4;
  uVar9 = (uVar4 * 0x40 | uVar4 >> 0x1a) + uVar3;
  uVar8 = uVar10 + 0xbd3af235 + ((~uVar6 | uVar9) ^ uVar3) + local_4c;
  uVar4 = (uVar8 * 0x400 | uVar8 >> 0x16) + uVar9;
  uVar8 = uVar6 + 0x2ad7d2bb + ((~uVar3 | uVar4) ^ uVar9) + local_78[2];
  *param_2 = iVar1 + uVar9;
  uVar6 = (uVar8 * 0x8000 | uVar8 >> 0x11) + uVar4;
  param_2[2] = param_2[2] + uVar6;
  uVar8 = uVar3 + 0xeb86d391 + ((~uVar9 | uVar6) ^ uVar4) + local_54;
  param_2[3] = param_2[3] + uVar4;
  param_2[1] = (uVar8 >> 0xb | uVar8 * 0x200000) + param_2[1] + uVar6;
  return;
}



// FUNCTION 141683ac0 Transform body=5028 status=ok
// SIG undefined Transform(void)

void FSHA1::Transform(longlong param_1,uint *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar9 = param_2[2];
  uVar8 = *param_2;
  uVar7 = param_2[3];
  uVar12 = param_2[1];
  uVar6 = param_2[4];
  uVar4 = param_3[1];
  puVar1 = *(undefined8 **)(param_1 + 0xc0);
  *puVar1 = *param_3;
  puVar1[1] = uVar4;
  uVar4 = param_3[3];
  puVar1[2] = param_3[2];
  puVar1[3] = uVar4;
  uVar4 = param_3[5];
  puVar1[4] = param_3[4];
  puVar1[5] = uVar4;
  uVar4 = param_3[7];
  puVar1[6] = param_3[6];
  puVar1[7] = uVar4;
  uVar10 = uVar12 << 0x1e | uVar12 >> 2;
  uVar11 = **(uint **)(param_1 + 0xc0);
  uVar5 = uVar11 << 0x18 | uVar11 >> 8 & 0xff00ff00 | (uVar11 & 0xff00) << 8 | uVar11 >> 0x18;
  **(uint **)(param_1 + 0xc0) = uVar5;
  uVar11 = *(uint *)(*(longlong *)(param_1 + 0xc0) + 4);
  uVar5 = ((uVar7 ^ uVar9) & uVar12 ^ uVar7) + (uVar8 << 5 | uVar8 >> 0x1b) + uVar5 +
          uVar6 + 0x5a827999;
  uVar6 = uVar11 << 0x18 | uVar11 >> 8 & 0xff00ff00 | (uVar11 & 0xff00) << 8 | uVar11 >> 0x18;
  uVar11 = uVar8 << 0x1e | uVar8 >> 2;
  *(uint *)(*(longlong *)(param_1 + 0xc0) + 4) = uVar6;
  uVar12 = *(uint *)(*(longlong *)(param_1 + 0xc0) + 8);
  uVar6 = ((uVar9 ^ uVar10) & uVar8 ^ uVar9) + (uVar5 * 0x20 | uVar5 >> 0x1b) + uVar6 +
          uVar7 + 0x5a827999;
  uVar7 = uVar12 << 0x18 | uVar12 >> 8 & 0xff00ff00 | (uVar12 & 0xff00) << 8 | uVar12 >> 0x18;
  uVar12 = uVar5 * 0x40000000 | uVar5 >> 2;
  *(uint *)(*(longlong *)(param_1 + 0xc0) + 8) = uVar7;
  uVar8 = *(uint *)(*(longlong *)(param_1 + 0xc0) + 0xc);
  uVar7 = ((uVar10 ^ uVar11) & uVar5 ^ uVar10) + (uVar6 * 0x20 | uVar6 >> 0x1b) + uVar7 +
          uVar9 + 0x5a827999;
  uVar8 = uVar8 << 0x18 | uVar8 >> 8 & 0xff00ff00 | (uVar8 & 0xff00) << 8 | uVar8 >> 0x18;
  *(uint *)(*(longlong *)(param_1 + 0xc0) + 0xc) = uVar8;
  uVar13 = uVar6 * 0x40000000 | uVar6 >> 2;
  uVar9 = *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x10);
  uVar10 = ((uVar12 ^ uVar11) & uVar6 ^ uVar11) + (uVar7 * 0x20 | uVar7 >> 0x1b) + uVar8 +
           uVar10 + 0x5a827999;
  uVar8 = uVar9 << 0x18 | uVar9 >> 8 & 0xff00ff00 | (uVar9 & 0xff00) << 8 | uVar9 >> 0x18;
  *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x10) = uVar8;
  uVar5 = uVar7 * 0x40000000 | uVar7 >> 2;
  uVar9 = *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x14);
  uVar11 = ((uVar12 ^ uVar13) & uVar7 ^ uVar12) +
           (uVar10 * 0x20 | uVar10 >> 0x1b) + uVar8 + 0x5a827999 + uVar11;
  uVar9 = uVar9 << 0x18 | uVar9 >> 8 & 0xff00ff00 | (uVar9 & 0xff00) << 8 | uVar9 >> 0x18;
  *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x14) = uVar9;
  uVar6 = uVar10 * 0x40000000 | uVar10 >> 2;
  uVar12 = uVar12 + ((uVar13 ^ uVar5) & uVar10 ^ uVar13) +
                    (uVar11 * 0x20 | uVar11 >> 0x1b) + uVar9 + 0x5a827999;
  uVar9 = *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x18);
  uVar9 = uVar9 << 0x18 | uVar9 >> 8 & 0xff00ff00 | (uVar9 & 0xff00) << 8 | uVar9 >> 0x18;
  *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x18) = uVar9;
  uVar7 = uVar11 * 0x40000000 | uVar11 >> 2;
  uVar13 = uVar13 + ((uVar5 ^ uVar6) & uVar11 ^ uVar5) +
                    (uVar12 * 0x20 | uVar12 >> 0x1b) + uVar9 + 0x5a827999;
  uVar9 = *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x1c);
  uVar8 = uVar9 << 0x18 | uVar9 >> 8 & 0xff00ff00 | (uVar9 & 0xff00) << 8 | uVar9 >> 0x18;
  *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x1c) = uVar8;
  uVar10 = uVar12 * 0x40000000 | uVar12 >> 2;
  uVar14 = uVar13 * 0x40000000 | uVar13 >> 2;
  uVar9 = *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x20);
  uVar5 = ((uVar6 ^ uVar7) & uVar12 ^ uVar6) + (uVar13 * 0x20 | uVar13 >> 0x1b) + uVar8 + 0x5a827999
          + uVar5;
  uVar8 = uVar9 << 0x18 | uVar9 >> 8 & 0xff00ff00 | (uVar9 & 0xff00) << 8 | uVar9 >> 0x18;
  *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x20) = uVar8;
  uVar11 = uVar5 * 0x40000000 | uVar5 >> 2;
  uVar9 = *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x24);
  uVar6 = ((uVar10 ^ uVar7) & uVar13 ^ uVar7) + (uVar5 * 0x20 | uVar5 >> 0x1b) + uVar8 + 0x5a827999
          + uVar6;
  uVar8 = uVar9 << 0x18 | uVar9 >> 8 & 0xff00ff00 | (uVar9 & 0xff00) << 8 | uVar9 >> 0x18;
  *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x24) = uVar8;
  uVar12 = uVar6 * 0x40000000 | uVar6 >> 2;
  uVar9 = *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x28);
  uVar7 = ((uVar10 ^ uVar14) & uVar5 ^ uVar10) + (uVar6 * 0x20 | uVar6 >> 0x1b) + uVar8 + 0x5a827999
          + uVar7;
  uVar8 = uVar9 << 0x18 | uVar9 >> 8 & 0xff00ff00 | (uVar9 & 0xff00) << 8 | uVar9 >> 0x18;
  *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x28) = uVar8;
  uVar9 = *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x2c);
  uVar10 = ((uVar14 ^ uVar11) & uVar6 ^ uVar14) +
           (uVar7 * 0x20 | uVar7 >> 0x1b) + uVar8 + 0x5a827999 + uVar10;
  uVar8 = uVar9 << 0x18 | uVar9 >> 8 & 0xff00ff00 | (uVar9 & 0xff00) << 8 | uVar9 >> 0x18;
  *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x2c) = uVar8;
  uVar6 = uVar7 * 0x40000000 | uVar7 >> 2;
  uVar9 = *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x30);
  uVar14 = ((uVar11 ^ uVar12) & uVar7 ^ uVar11) +
           (uVar10 * 0x20 | uVar10 >> 0x1b) + uVar8 + 0x5a827999 + uVar14;
  uVar7 = uVar10 * 0x40000000 | uVar10 >> 2;
  uVar8 = uVar9 << 0x18 | uVar9 >> 8 & 0xff00ff00 | (uVar9 & 0xff00) << 8 | uVar9 >> 0x18;
  *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x30) = uVar8;
  uVar9 = *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x34);
  uVar11 = ((uVar12 ^ uVar6) & uVar10 ^ uVar12) +
           (uVar14 * 0x20 | uVar14 >> 0x1b) + uVar8 + 0x5a827999 + uVar11;
  uVar5 = uVar14 * 0x40000000 | uVar14 >> 2;
  uVar8 = uVar9 << 0x18 | uVar9 >> 8 & 0xff00ff00 | (uVar9 & 0xff00) << 8 | uVar9 >> 0x18;
  *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x34) = uVar8;
  uVar13 = uVar11 * 0x40000000 | uVar11 >> 2;
  uVar9 = *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x38);
  uVar12 = ((uVar7 ^ uVar6) & uVar14 ^ uVar6) +
           (uVar11 * 0x20 | uVar11 >> 0x1b) + uVar8 + 0x5a827999 + uVar12;
  uVar8 = uVar9 << 0x18 | uVar9 >> 8 & 0xff00ff00 | (uVar9 & 0xff00) << 8 | uVar9 >> 0x18;
  *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x38) = uVar8;
  uVar9 = *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x3c);
  uVar6 = ((uVar7 ^ uVar5) & uVar11 ^ uVar7) + (uVar12 * 0x20 | uVar12 >> 0x1b) + uVar8 + 0x5a827999
          + uVar6;
  uVar9 = uVar9 << 0x18 | uVar9 >> 8 & 0xff00ff00 | (uVar9 & 0xff00) << 8 | uVar9 >> 0x18;
  *(uint *)(*(longlong *)(param_1 + 0xc0) + 0x3c) = uVar9;
  uVar8 = uVar12 * 0x40000000 | uVar12 >> 2;
  puVar2 = *(uint **)(param_1 + 0xc0);
  uVar7 = ((uVar5 ^ uVar13) & uVar12 ^ uVar5) + (uVar6 * 0x20 | uVar6 >> 0x1b) + uVar9 + 0x5a827999
          + uVar7;
  uVar12 = uVar6 * 0x40000000 | uVar6 >> 2;
  uVar9 = puVar2[0xd] ^ puVar2[8] ^ puVar2[2] ^ *puVar2;
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *puVar2 = uVar9;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar5 = uVar5 + ((uVar13 ^ uVar8) & uVar6 ^ uVar13) +
                  (uVar7 * 0x20 | uVar7 >> 0x1b) + uVar9 + 0x5a827999;
  uVar11 = uVar7 * 0x40000000 | uVar7 >> 2;
  uVar9 = *(uint *)(lVar3 + 0x38) ^ *(uint *)(lVar3 + 0x24) ^ *(uint *)(lVar3 + 0xc) ^
          *(uint *)(lVar3 + 4);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 4) = uVar9;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar13 = uVar13 + ((uVar8 ^ uVar12) & uVar7 ^ uVar8) +
                    (uVar5 * 0x20 | uVar5 >> 0x1b) + uVar9 + 0x5a827999;
  uVar10 = uVar5 * 0x40000000 | uVar5 >> 2;
  uVar9 = *(uint *)(lVar3 + 0x3c) ^ *(uint *)(lVar3 + 0x28) ^ *(uint *)(lVar3 + 0x10) ^
          *(uint *)(lVar3 + 8);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 8) = uVar9;
  puVar2 = *(uint **)(param_1 + 0xc0);
  uVar8 = uVar8 + ((uVar11 ^ uVar12) & uVar5 ^ uVar12) +
                  (uVar13 * 0x20 | uVar13 >> 0x1b) + uVar9 + 0x5a827999;
  uVar9 = puVar2[0xb] ^ puVar2[5] ^ puVar2[3] ^ *puVar2;
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  puVar2[3] = uVar9;
  uVar14 = uVar13 * 0x40000000 | uVar13 >> 2;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar12 = uVar12 + ((uVar11 ^ uVar10) & uVar13 ^ uVar11) +
                    (uVar8 * 0x20 | uVar8 >> 0x1b) + uVar9 + 0x5a827999;
  uVar7 = uVar8 * 0x40000000 | uVar8 >> 2;
  uVar9 = *(uint *)(lVar3 + 0x30) ^ *(uint *)(lVar3 + 0x18) ^ *(uint *)(lVar3 + 4) ^
          *(uint *)(lVar3 + 0x10);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x10) = uVar9;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar11 = uVar11 + (uVar10 ^ uVar14 ^ uVar8) +
                    (uVar12 * 0x20 | uVar12 >> 0x1b) + uVar9 + 0x6ed9eba1;
  uVar5 = uVar12 * 0x40000000 | uVar12 >> 2;
  uVar9 = *(uint *)(lVar3 + 0x34) ^ *(uint *)(lVar3 + 0x1c) ^ *(uint *)(lVar3 + 8) ^
          *(uint *)(lVar3 + 0x14);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x14) = uVar9;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar10 = uVar10 + (uVar14 ^ uVar7 ^ uVar12) +
                    (uVar11 * 0x20 | uVar11 >> 0x1b) + uVar9 + 0x6ed9eba1;
  uVar6 = uVar11 * 0x40000000 | uVar11 >> 2;
  uVar9 = *(uint *)(lVar3 + 0x38) ^ *(uint *)(lVar3 + 0x20) ^ *(uint *)(lVar3 + 0xc) ^
          *(uint *)(lVar3 + 0x18);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x18) = uVar9;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar14 = uVar14 + (uVar11 ^ uVar7 ^ uVar5) + (uVar10 * 0x20 | uVar10 >> 0x1b) + uVar9 + 0x6ed9eba1
  ;
  uVar12 = uVar10 * 0x40000000 | uVar10 >> 2;
  uVar9 = *(uint *)(lVar3 + 0x3c) ^ *(uint *)(lVar3 + 0x24) ^ *(uint *)(lVar3 + 0x10) ^
          *(uint *)(lVar3 + 0x1c);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x1c) = uVar9;
  puVar2 = *(uint **)(param_1 + 0xc0);
  uVar8 = uVar7 + 0x6ed9eba1 + (uVar6 ^ uVar10 ^ uVar5) + (uVar14 * 0x20 | uVar14 >> 0x1b) + uVar9;
  uVar9 = puVar2[10] ^ puVar2[5] ^ *puVar2 ^ puVar2[8];
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  puVar2[8] = uVar9;
  uVar13 = uVar14 * 0x40000000 | uVar14 >> 2;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar5 = (uVar6 ^ uVar12 ^ uVar14) + (uVar8 * 0x20 | uVar8 >> 0x1b) + uVar9 + 0x6ed9eba1 + uVar5;
  uVar7 = uVar8 * 0x40000000 | uVar8 >> 2;
  uVar9 = *(uint *)(lVar3 + 0x2c) ^ *(uint *)(lVar3 + 0x18) ^ *(uint *)(lVar3 + 4) ^
          *(uint *)(lVar3 + 0x24);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x24) = uVar9;
  uVar10 = uVar5 * 0x40000000 | uVar5 >> 2;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar6 = (uVar12 ^ uVar13 ^ uVar8) + (uVar5 * 0x20 | uVar5 >> 0x1b) + uVar9 + 0x6ed9eba1 + uVar6;
  uVar9 = *(uint *)(lVar3 + 0x30) ^ *(uint *)(lVar3 + 0x1c) ^ *(uint *)(lVar3 + 8) ^
          *(uint *)(lVar3 + 0x28);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x28) = uVar9;
  uVar11 = uVar6 * 0x40000000 | uVar6 >> 2;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar12 = (uVar13 ^ uVar7 ^ uVar5) + (uVar6 * 0x20 | uVar6 >> 0x1b) + uVar9 + 0x6ed9eba1 + uVar12;
  uVar9 = *(uint *)(lVar3 + 0x34) ^ *(uint *)(lVar3 + 0x20) ^ *(uint *)(lVar3 + 0xc) ^
          *(uint *)(lVar3 + 0x2c);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x2c) = uVar9;
  uVar8 = uVar12 * 0x40000000 | uVar12 >> 2;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar13 = (uVar6 ^ uVar7 ^ uVar10) + (uVar12 * 0x20 | uVar12 >> 0x1b) + uVar9 + 0x6ed9eba1 + uVar13
  ;
  uVar9 = *(uint *)(lVar3 + 0x38) ^ *(uint *)(lVar3 + 0x24) ^ *(uint *)(lVar3 + 0x10) ^
          *(uint *)(lVar3 + 0x30);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x30) = uVar9;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar7 = (uVar11 ^ uVar12 ^ uVar10) + (uVar13 * 0x20 | uVar13 >> 0x1b) + uVar9 + 0x6ed9eba1 + uVar7
  ;
  uVar9 = *(uint *)(lVar3 + 0x3c) ^ *(uint *)(lVar3 + 0x28) ^ *(uint *)(lVar3 + 0x14) ^
          *(uint *)(lVar3 + 0x34);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x34) = uVar9;
  uVar12 = uVar13 * 0x40000000 | uVar13 >> 2;
  puVar2 = *(uint **)(param_1 + 0xc0);
  uVar10 = (uVar11 ^ uVar8 ^ uVar13) + (uVar7 * 0x20 | uVar7 >> 0x1b) + uVar9 + 0x6ed9eba1 + uVar10;
  uVar6 = uVar7 * 0x40000000 | uVar7 >> 2;
  uVar9 = puVar2[0xb] ^ puVar2[6] ^ puVar2[0xe] ^ *puVar2;
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  puVar2[0xe] = uVar9;
  uVar5 = uVar10 * 0x40000000 | uVar10 >> 2;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar11 = (uVar8 ^ uVar12 ^ uVar7) + (uVar10 * 0x20 | uVar10 >> 0x1b) + uVar9 + 0x6ed9eba1 + uVar11
  ;
  uVar9 = *(uint *)(lVar3 + 0x30) ^ *(uint *)(lVar3 + 0x1c) ^ *(uint *)(lVar3 + 4) ^
          *(uint *)(lVar3 + 0x3c);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x3c) = uVar9;
  uVar13 = uVar11 * 0x40000000 | uVar11 >> 2;
  puVar2 = *(uint **)(param_1 + 0xc0);
  uVar8 = (uVar12 ^ uVar6 ^ uVar10) + (uVar11 * 0x20 | uVar11 >> 0x1b) + uVar9 + 0x6ed9eba1 + uVar8;
  uVar9 = puVar2[0xd] ^ puVar2[8] ^ puVar2[2] ^ *puVar2;
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *puVar2 = uVar9;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar12 = uVar12 + (uVar11 ^ uVar6 ^ uVar5) + (uVar8 * 0x20 | uVar8 >> 0x1b) + uVar9 + 0x6ed9eba1;
  uVar9 = *(uint *)(lVar3 + 0x38) ^ *(uint *)(lVar3 + 0x24) ^ *(uint *)(lVar3 + 0xc) ^
          *(uint *)(lVar3 + 4);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 4) = uVar9;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar6 = uVar6 + (uVar13 ^ uVar8 ^ uVar5) + (uVar12 * 0x20 | uVar12 >> 0x1b) + uVar9 + 0x6ed9eba1;
  uVar8 = uVar8 * 0x40000000 | uVar8 >> 2;
  uVar9 = *(uint *)(lVar3 + 0x3c) ^ *(uint *)(lVar3 + 0x28) ^ *(uint *)(lVar3 + 0x10) ^
          *(uint *)(lVar3 + 8);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 8) = uVar9;
  uVar7 = uVar12 * 0x40000000 | uVar12 >> 2;
  puVar2 = *(uint **)(param_1 + 0xc0);
  uVar5 = uVar5 + (uVar13 ^ uVar8 ^ uVar12) + (uVar6 * 0x20 | uVar6 >> 0x1b) + uVar9 + 0x6ed9eba1;
  uVar11 = uVar6 * 0x40000000 | uVar6 >> 2;
  uVar9 = puVar2[0xb] ^ puVar2[5] ^ puVar2[3] ^ *puVar2;
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  puVar2[3] = uVar9;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar13 = uVar13 + (uVar8 ^ uVar7 ^ uVar6) + (uVar5 * 0x20 | uVar5 >> 0x1b) + uVar9 + 0x6ed9eba1;
  uVar9 = *(uint *)(lVar3 + 0x30) ^ *(uint *)(lVar3 + 0x18) ^ *(uint *)(lVar3 + 4) ^
          *(uint *)(lVar3 + 0x10);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x10) = uVar9;
  uVar10 = uVar5 * 0x40000000 | uVar5 >> 2;
  uVar14 = uVar13 * 0x40000000 | uVar13 >> 2;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar8 = uVar8 + (uVar7 ^ uVar11 ^ uVar5) + (uVar13 * 0x20 | uVar13 >> 0x1b) + uVar9 + 0x6ed9eba1;
  uVar9 = *(uint *)(lVar3 + 0x34) ^ *(uint *)(lVar3 + 0x1c) ^ *(uint *)(lVar3 + 8) ^
          *(uint *)(lVar3 + 0x14);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x14) = uVar9;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar7 = (uVar13 ^ uVar11 ^ uVar10) + (uVar8 * 0x20 | uVar8 >> 0x1b) + uVar9 + 0x6ed9eba1 + uVar7;
  uVar9 = *(uint *)(lVar3 + 0x38) ^ *(uint *)(lVar3 + 0x20) ^ *(uint *)(lVar3 + 0xc) ^
          *(uint *)(lVar3 + 0x18);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x18) = uVar9;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar11 = uVar11 + (uVar14 ^ uVar8 ^ uVar10) + (uVar7 * 0x20 | uVar7 >> 0x1b) + uVar9 + 0x6ed9eba1;
  uVar8 = uVar8 * 0x40000000 | uVar8 >> 2;
  uVar12 = uVar7 * 0x40000000 | uVar7 >> 2;
  uVar9 = *(uint *)(lVar3 + 0x3c) ^ *(uint *)(lVar3 + 0x24) ^ *(uint *)(lVar3 + 0x10) ^
          *(uint *)(lVar3 + 0x1c);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x1c) = uVar9;
  puVar2 = *(uint **)(param_1 + 0xc0);
  uVar10 = uVar10 + (uVar14 ^ uVar8 ^ uVar7) + (uVar11 * 0x20 | uVar11 >> 0x1b) + uVar9 + 0x6ed9eba1
  ;
  uVar9 = puVar2[10] ^ puVar2[5] ^ puVar2[8] ^ *puVar2;
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  puVar2[8] = uVar9;
  uVar6 = uVar11 * 0x40000000 | uVar11 >> 2;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar5 = (uVar10 * 0x20 | uVar10 >> 0x1b) + 0x8f1bbcdc +
          ((uVar12 | uVar11) & uVar8 | uVar12 & uVar11) + uVar9 + uVar14;
  uVar9 = *(uint *)(lVar3 + 0x2c) ^ *(uint *)(lVar3 + 0x18) ^ *(uint *)(lVar3 + 4) ^
          *(uint *)(lVar3 + 0x24);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x24) = uVar9;
  uVar11 = uVar10 * 0x40000000 | uVar10 >> 2;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar9 = (uVar5 * 0x20 | uVar5 >> 0x1b) + 0x8f1bbcdc +
          ((uVar6 | uVar10) & uVar12 | uVar6 & uVar10) + uVar9 + uVar8;
  uVar8 = *(uint *)(lVar3 + 0x30) ^ *(uint *)(lVar3 + 0x1c) ^ *(uint *)(lVar3 + 8) ^
          *(uint *)(lVar3 + 0x28);
  uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
  *(uint *)(lVar3 + 0x28) = uVar8;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar7 = (uVar9 * 0x20 | uVar9 >> 0x1b) + 0x8f1bbcdc +
          ((uVar5 | uVar11) & uVar6 | uVar5 & uVar11) + uVar8 + uVar12;
  uVar5 = uVar5 * 0x40000000 | uVar5 >> 2;
  uVar8 = *(uint *)(lVar3 + 0x34) ^ *(uint *)(lVar3 + 0x20) ^ *(uint *)(lVar3 + 0xc) ^
          *(uint *)(lVar3 + 0x2c);
  uVar12 = uVar8 << 1 | (uint)((int)uVar8 < 0);
  *(uint *)(lVar3 + 0x2c) = uVar12;
  uVar8 = uVar9 * 0x40000000 | uVar9 >> 2;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar6 = (uVar7 * 0x20 | uVar7 >> 0x1b) + 0x8f1bbcdc +
          ((uVar5 | uVar9) & uVar11 | uVar5 & uVar9) + uVar12 + uVar6;
  uVar9 = *(uint *)(lVar3 + 0x38) ^ *(uint *)(lVar3 + 0x24) ^ *(uint *)(lVar3 + 0x10) ^
          *(uint *)(lVar3 + 0x30);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x30) = uVar9;
  uVar12 = uVar7 * 0x40000000 | uVar7 >> 2;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar7 = (uVar6 * 0x20 | uVar6 >> 0x1b) + 0x8f1bbcdc +
          ((uVar8 | uVar7) & uVar5 | uVar8 & uVar7) + uVar9 + uVar11;
  uVar9 = *(uint *)(lVar3 + 0x3c) ^ *(uint *)(lVar3 + 0x28) ^ *(uint *)(lVar3 + 0x14) ^
          *(uint *)(lVar3 + 0x34);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x34) = uVar9;
  uVar11 = uVar6 * 0x40000000 | uVar6 >> 2;
  puVar2 = *(uint **)(param_1 + 0xc0);
  uVar6 = (uVar7 * 0x20 | uVar7 >> 0x1b) + 0x8f1bbcdc +
          ((uVar12 | uVar6) & uVar8 | uVar12 & uVar6) + uVar9 + uVar5;
  uVar9 = puVar2[0xb] ^ puVar2[6] ^ *puVar2 ^ puVar2[0xe];
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  puVar2[0xe] = uVar9;
  uVar5 = uVar7 * 0x40000000 | uVar7 >> 2;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar9 = (uVar6 * 0x20 | uVar6 >> 0x1b) + 0x8f1bbcdc +
          ((uVar11 | uVar7) & uVar12 | uVar11 & uVar7) + uVar9 + uVar8;
  uVar8 = *(uint *)(lVar3 + 0x30) ^ *(uint *)(lVar3 + 0x1c) ^ *(uint *)(lVar3 + 4) ^
          *(uint *)(lVar3 + 0x3c);
  uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
  *(uint *)(lVar3 + 0x3c) = uVar8;
  uVar10 = uVar6 * 0x40000000 | uVar6 >> 2;
  puVar2 = *(uint **)(param_1 + 0xc0);
  uVar7 = (uVar9 * 0x20 | uVar9 >> 0x1b) + 0x8f1bbcdc +
          ((uVar6 | uVar5) & uVar11 | uVar6 & uVar5) + uVar8 + uVar12;
  uVar8 = puVar2[0xd] ^ puVar2[8] ^ puVar2[2] ^ *puVar2;
  uVar12 = uVar8 << 1 | (uint)((int)uVar8 < 0);
  *puVar2 = uVar12;
  uVar8 = uVar9 * 0x40000000 | uVar9 >> 2;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar6 = (uVar7 * 0x20 | uVar7 >> 0x1b) + 0x8f1bbcdc +
          ((uVar10 | uVar9) & uVar5 | uVar10 & uVar9) + uVar12 + uVar11;
  uVar9 = *(uint *)(lVar3 + 0x38) ^ *(uint *)(lVar3 + 0x24) ^ *(uint *)(lVar3 + 0xc) ^
          *(uint *)(lVar3 + 4);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 4) = uVar9;
  uVar12 = uVar7 * 0x40000000 | uVar7 >> 2;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar7 = (uVar6 * 0x20 | uVar6 >> 0x1b) + 0x8f1bbcdc +
          ((uVar8 | uVar7) & uVar10 | uVar8 & uVar7) + uVar9 + uVar5;
  uVar9 = *(uint *)(lVar3 + 0x3c) ^ *(uint *)(lVar3 + 0x28) ^ *(uint *)(lVar3 + 0x10) ^
          *(uint *)(lVar3 + 8);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 8) = uVar9;
  uVar11 = uVar6 * 0x40000000 | uVar6 >> 2;
  puVar2 = *(uint **)(param_1 + 0xc0);
  uVar6 = (uVar7 * 0x20 | uVar7 >> 0x1b) + 0x8f1bbcdc +
          ((uVar12 | uVar6) & uVar8 | uVar12 & uVar6) + uVar9 + uVar10;
  uVar9 = puVar2[0xb] ^ puVar2[5] ^ puVar2[3] ^ *puVar2;
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  puVar2[3] = uVar9;
  uVar5 = uVar7 * 0x40000000 | uVar7 >> 2;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar9 = (uVar6 * 0x20 | uVar6 >> 0x1b) + 0x8f1bbcdc +
          ((uVar11 | uVar7) & uVar12 | uVar11 & uVar7) + uVar9 + uVar8;
  uVar8 = *(uint *)(lVar3 + 0x30) ^ *(uint *)(lVar3 + 0x18) ^ *(uint *)(lVar3 + 4) ^
          *(uint *)(lVar3 + 0x10);
  uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
  *(uint *)(lVar3 + 0x10) = uVar8;
  uVar10 = uVar6 * 0x40000000 | uVar6 >> 2;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar12 = uVar12 + ((uVar6 | uVar5) & uVar11 | uVar6 & uVar5) + uVar8 + 0x8f1bbcdc +
           (uVar9 * 0x20 | uVar9 >> 0x1b);
  uVar8 = *(uint *)(lVar3 + 0x34) ^ *(uint *)(lVar3 + 0x1c) ^ *(uint *)(lVar3 + 8) ^
          *(uint *)(lVar3 + 0x14);
  uVar7 = uVar8 << 1 | (uint)((int)uVar8 < 0);
  *(uint *)(lVar3 + 0x14) = uVar7;
  uVar8 = uVar9 * 0x40000000 | uVar9 >> 2;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar7 = (uVar12 * 0x20 | uVar12 >> 0x1b) +
          ((uVar10 | uVar9) & uVar5 | uVar10 & uVar9) + uVar7 + uVar11 + 0x8f1bbcdc;
  uVar9 = *(uint *)(lVar3 + 0x38) ^ *(uint *)(lVar3 + 0x20) ^ *(uint *)(lVar3 + 0xc) ^
          *(uint *)(lVar3 + 0x18);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x18) = uVar9;
  uVar6 = uVar12 * 0x40000000 | uVar12 >> 2;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar9 = (uVar7 * 0x20 | uVar7 >> 0x1b) +
          ((uVar8 | uVar12) & uVar10 | uVar8 & uVar12) + uVar9 + uVar5 + 0x8f1bbcdc;
  uVar12 = *(uint *)(lVar3 + 0x3c) ^ *(uint *)(lVar3 + 0x24) ^ *(uint *)(lVar3 + 0x10) ^
           *(uint *)(lVar3 + 0x1c);
  uVar11 = uVar12 << 1 | (uint)((int)uVar12 < 0);
  *(uint *)(lVar3 + 0x1c) = uVar11;
  uVar12 = uVar7 * 0x40000000 | uVar7 >> 2;
  puVar2 = *(uint **)(param_1 + 0xc0);
  uVar5 = (uVar9 * 0x20 | uVar9 >> 0x1b) +
          ((uVar6 | uVar7) & uVar8 | uVar6 & uVar7) + uVar11 + uVar10 + 0x8f1bbcdc;
  uVar7 = puVar2[10] ^ puVar2[5] ^ puVar2[8] ^ *puVar2;
  uVar11 = uVar7 << 1 | (uint)((int)uVar7 < 0);
  puVar2[8] = uVar11;
  uVar7 = uVar9 * 0x40000000 | uVar9 >> 2;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar8 = (uVar5 * 0x20 | uVar5 >> 0x1b) +
          ((uVar12 | uVar9) & uVar6 | uVar12 & uVar9) + uVar11 + uVar8 + 0x8f1bbcdc;
  uVar9 = *(uint *)(lVar3 + 0x2c) ^ *(uint *)(lVar3 + 0x18) ^ *(uint *)(lVar3 + 4) ^
          *(uint *)(lVar3 + 0x24);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x24) = uVar9;
  uVar11 = uVar5 * 0x40000000 | uVar5 >> 2;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar6 = (uVar8 * 0x20 | uVar8 >> 0x1b) +
          ((uVar5 | uVar7) & uVar12 | uVar5 & uVar7) + uVar9 + 0x8f1bbcdc + uVar6;
  uVar9 = *(uint *)(lVar3 + 0x30) ^ *(uint *)(lVar3 + 0x1c) ^ *(uint *)(lVar3 + 8) ^
          *(uint *)(lVar3 + 0x28);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x28) = uVar9;
  uVar5 = uVar8 * 0x40000000 | uVar8 >> 2;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar8 = (uVar6 * 0x20 | uVar6 >> 0x1b) +
          ((uVar11 | uVar8) & uVar7 | uVar11 & uVar8) + uVar9 + 0x8f1bbcdc + uVar12;
  uVar9 = *(uint *)(lVar3 + 0x34) ^ *(uint *)(lVar3 + 0x20) ^ *(uint *)(lVar3 + 0xc) ^
          *(uint *)(lVar3 + 0x2c);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x2c) = uVar9;
  uVar10 = uVar6 * 0x40000000 | uVar6 >> 2;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar12 = (uVar8 * 0x20 | uVar8 >> 0x1b) + 0x8f1bbcdc +
           ((uVar5 | uVar6) & uVar11 | uVar5 & uVar6) + uVar9 + uVar7;
  uVar9 = *(uint *)(lVar3 + 0x38) ^ *(uint *)(lVar3 + 0x24) ^ *(uint *)(lVar3 + 0x10) ^
          *(uint *)(lVar3 + 0x30);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x30) = uVar9;
  uVar7 = uVar8 * 0x40000000 | uVar8 >> 2;
  uVar8 = (uVar12 * 0x20 | uVar12 >> 0x1b) + 0xca62c1d6 + (uVar5 ^ uVar10 ^ uVar8) + uVar9 + uVar11;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar9 = *(uint *)(lVar3 + 0x3c) ^ *(uint *)(lVar3 + 0x28) ^ *(uint *)(lVar3 + 0x14) ^
          *(uint *)(lVar3 + 0x34);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x34) = uVar9;
  uVar6 = uVar12 * 0x40000000 | uVar12 >> 2;
  uVar12 = (uVar8 * 0x20 | uVar8 >> 0x1b) + 0xca62c1d6 + (uVar10 ^ uVar7 ^ uVar12) + uVar9 + uVar5;
  puVar2 = *(uint **)(param_1 + 0xc0);
  uVar9 = puVar2[0xb] ^ puVar2[6] ^ *puVar2 ^ puVar2[0xe];
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  puVar2[0xe] = uVar9;
  uVar11 = uVar8 * 0x40000000 | uVar8 >> 2;
  uVar10 = (uVar12 * 0x20 | uVar12 >> 0x1b) + 0xca62c1d6 + (uVar8 ^ uVar7 ^ uVar6) + uVar9 + uVar10;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar9 = *(uint *)(lVar3 + 0x30) ^ *(uint *)(lVar3 + 0x1c) ^ *(uint *)(lVar3 + 4) ^
          *(uint *)(lVar3 + 0x3c);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x3c) = uVar9;
  uVar8 = (uVar10 * 0x20 | uVar10 >> 0x1b) + 0xca62c1d6 + (uVar11 ^ uVar12 ^ uVar6) + uVar9 + uVar7;
  puVar2 = *(uint **)(param_1 + 0xc0);
  uVar5 = uVar12 * 0x40000000 | uVar12 >> 2;
  uVar9 = puVar2[0xd] ^ puVar2[8] ^ puVar2[2] ^ *puVar2;
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *puVar2 = uVar9;
  uVar13 = uVar10 * 0x40000000 | uVar10 >> 2;
  uVar12 = (uVar8 * 0x20 | uVar8 >> 0x1b) + 0xca62c1d6 + (uVar11 ^ uVar5 ^ uVar10) + uVar9 + uVar6;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar9 = *(uint *)(lVar3 + 0x38) ^ *(uint *)(lVar3 + 0x24) ^ *(uint *)(lVar3 + 0xc) ^
          *(uint *)(lVar3 + 4);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 4) = uVar9;
  uVar7 = uVar8 * 0x40000000 | uVar8 >> 2;
  uVar8 = (uVar12 * 0x20 | uVar12 >> 0x1b) + 0xca62c1d6 + (uVar5 ^ uVar13 ^ uVar8) + uVar9 + uVar11;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar9 = *(uint *)(lVar3 + 0x3c) ^ *(uint *)(lVar3 + 0x28) ^ *(uint *)(lVar3 + 0x10) ^
          *(uint *)(lVar3 + 8);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 8) = uVar9;
  uVar6 = uVar12 * 0x40000000 | uVar12 >> 2;
  uVar12 = (uVar8 * 0x20 | uVar8 >> 0x1b) + 0xca62c1d6 + (uVar13 ^ uVar7 ^ uVar12) + uVar9 + uVar5;
  puVar2 = *(uint **)(param_1 + 0xc0);
  uVar9 = puVar2[0xb] ^ puVar2[5] ^ puVar2[3] ^ *puVar2;
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  puVar2[3] = uVar9;
  uVar11 = uVar8 * 0x40000000 | uVar8 >> 2;
  uVar10 = (uVar12 * 0x20 | uVar12 >> 0x1b) + 0xca62c1d6 + (uVar8 ^ uVar7 ^ uVar6) + uVar9 + uVar13;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar9 = *(uint *)(lVar3 + 0x30) ^ *(uint *)(lVar3 + 0x18) ^ *(uint *)(lVar3 + 4) ^
          *(uint *)(lVar3 + 0x10);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x10) = uVar9;
  uVar5 = uVar12 * 0x40000000 | uVar12 >> 2;
  uVar8 = (uVar10 * 0x20 | uVar10 >> 0x1b) + 0xca62c1d6 + (uVar11 ^ uVar12 ^ uVar6) + uVar9 + uVar7;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar9 = *(uint *)(lVar3 + 0x34) ^ *(uint *)(lVar3 + 0x1c) ^ *(uint *)(lVar3 + 8) ^
          *(uint *)(lVar3 + 0x14);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x14) = uVar9;
  uVar13 = uVar10 * 0x40000000 | uVar10 >> 2;
  uVar12 = (uVar8 * 0x20 | uVar8 >> 0x1b) + 0xca62c1d6 + (uVar11 ^ uVar5 ^ uVar10) + uVar9 + uVar6;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar9 = *(uint *)(lVar3 + 0x38) ^ *(uint *)(lVar3 + 0x20) ^ *(uint *)(lVar3 + 0xc) ^
          *(uint *)(lVar3 + 0x18);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x18) = uVar9;
  uVar7 = uVar8 * 0x40000000 | uVar8 >> 2;
  uVar8 = (uVar12 * 0x20 | uVar12 >> 0x1b) + 0xca62c1d6 + (uVar5 ^ uVar13 ^ uVar8) + uVar9 + uVar11;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar9 = *(uint *)(lVar3 + 0x3c) ^ *(uint *)(lVar3 + 0x24) ^ *(uint *)(lVar3 + 0x10) ^
          *(uint *)(lVar3 + 0x1c);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x1c) = uVar9;
  uVar11 = uVar12 * 0x40000000 | uVar12 >> 2;
  uVar6 = (uVar8 * 0x20 | uVar8 >> 0x1b) + 0xca62c1d6 + (uVar13 ^ uVar7 ^ uVar12) + uVar9 + uVar5;
  puVar2 = *(uint **)(param_1 + 0xc0);
  uVar9 = puVar2[10] ^ puVar2[5] ^ puVar2[8] ^ *puVar2;
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  puVar2[8] = uVar9;
  uVar5 = uVar8 * 0x40000000 | uVar8 >> 2;
  uVar12 = (uVar6 * 0x20 | uVar6 >> 0x1b) + (uVar8 ^ uVar7 ^ uVar11) + uVar9 + 0xca62c1d6 + uVar13;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar9 = *(uint *)(lVar3 + 0x2c) ^ *(uint *)(lVar3 + 0x18) ^ *(uint *)(lVar3 + 4) ^
          *(uint *)(lVar3 + 0x24);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x24) = uVar9;
  uVar10 = uVar6 * 0x40000000 | uVar6 >> 2;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar8 = uVar7 + (uVar5 ^ uVar6 ^ uVar11) + uVar9 + 0xca62c1d6 + (uVar12 * 0x20 | uVar12 >> 0x1b);
  uVar9 = *(uint *)(lVar3 + 0x30) ^ *(uint *)(lVar3 + 0x1c) ^ *(uint *)(lVar3 + 8) ^
          *(uint *)(lVar3 + 0x28);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x28) = uVar9;
  uVar6 = uVar12 * 0x40000000 | uVar12 >> 2;
  uVar12 = (uVar8 * 0x20 | uVar8 >> 0x1b) + (uVar5 ^ uVar10 ^ uVar12) + uVar9 + 0xca62c1d6 + uVar11;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar9 = *(uint *)(lVar3 + 0x34) ^ *(uint *)(lVar3 + 0x20) ^ *(uint *)(lVar3 + 0xc) ^
          *(uint *)(lVar3 + 0x2c);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x2c) = uVar9;
  uVar7 = uVar8 * 0x40000000 | uVar8 >> 2;
  uVar5 = (uVar12 * 0x20 | uVar12 >> 0x1b) + (uVar10 ^ uVar6 ^ uVar8) + uVar9 + uVar5 + 0xca62c1d6;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar9 = *(uint *)(lVar3 + 0x38) ^ *(uint *)(lVar3 + 0x24) ^ *(uint *)(lVar3 + 0x10) ^
          *(uint *)(lVar3 + 0x30);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x30) = uVar9;
  uVar8 = uVar12 * 0x40000000 | uVar12 >> 2;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar11 = uVar10 + (uVar6 ^ uVar7 ^ uVar12) + uVar9 + 0xca62c1d6 + (uVar5 * 0x20 | uVar5 >> 0x1b);
  uVar9 = *(uint *)(lVar3 + 0x3c) ^ *(uint *)(lVar3 + 0x28) ^ *(uint *)(lVar3 + 0x14) ^
          *(uint *)(lVar3 + 0x34);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x34) = uVar9;
  uVar10 = uVar5 * 0x40000000 | uVar5 >> 2;
  uVar12 = (uVar11 * 0x20 | uVar11 >> 0x1b) + (uVar5 ^ uVar7 ^ uVar8) + uVar9 + 0xca62c1d6 + uVar6;
  puVar2 = *(uint **)(param_1 + 0xc0);
  uVar9 = puVar2[0xb] ^ puVar2[6] ^ *puVar2 ^ puVar2[0xe];
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  puVar2[0xe] = uVar9;
  uVar6 = uVar11 * 0x40000000 | uVar11 >> 2;
  uVar7 = (uVar12 * 0x20 | uVar12 >> 0x1b) + (uVar10 ^ uVar11 ^ uVar8) + uVar9 + uVar7 + 0xca62c1d6;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar9 = *(uint *)(lVar3 + 0x30) ^ *(uint *)(lVar3 + 0x1c) ^ *(uint *)(lVar3 + 4) ^
          *(uint *)(lVar3 + 0x3c);
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  *(uint *)(lVar3 + 0x3c) = uVar9;
  param_2[1] = param_2[1] + uVar7;
  param_2[3] = param_2[3] + uVar6;
  param_2[2] = param_2[2] + (uVar12 * 0x40000000 | uVar12 >> 2);
  *param_2 = *param_2 +
             (uVar10 ^ uVar6 ^ uVar12) + 0xca62c1d6 + uVar9 + (uVar7 * 0x20 | uVar7 >> 0x1b) + uVar8
  ;
  param_2[4] = param_2[4] + uVar10;
  return;
}



// FUNCTION 141684e70 TryParseString body=204 status=ok
// SIG undefined TryParseString(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 TryParseString(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  longlong *local_40;
  char local_30;
  undefined8 local_28;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  FFrameRateParser::Evaluate(&DAT_1468e2bb0,local_48,param_2);
  if ((local_20 == '\0') || (local_30 != '\0')) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
    *param_1 = local_28;
  }
  local_20 = 0;
  if ((local_30 != '\0') && (local_30 = 0, local_40 != (longlong *)0x0)) {
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
  return uVar5;
}



// FUNCTION 141684f40 FUN_141684f40 body=302 status=ok
// SIG undefined FUN_141684f40(void)

void FUN_141684f40(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  undefined2 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  if (DAT_1468e3238 == '\0') {
    iVar7 = 0;
    DAT_1468e3238 = 1;
    if (0 < *(int *)(param_1 + 0x18)) {
      lVar4 = 0;
      do {
        lVar1 = *(longlong *)(param_1 + 0x10);
        iVar6 = 0;
        if (0 < *(int *)(param_1 + 0x38)) {
          lVar8 = 0;
          do {
            plVar5 = *(longlong **)(lVar8 + *(longlong *)(param_1 + 0x30));
            cVar2 = (**(code **)(*plVar5 + 0x38))(plVar5);
            if ((cVar2 != '\0') || (param_2 != '\0')) {
              if (*(int *)(lVar4 + 8 + lVar1) == 0) {
                puVar3 = &DAT_143f3eda8;
              }
              else {
                puVar3 = *(undefined2 **)(lVar4 + lVar1);
              }
              (**(code **)(*plVar5 + 8))
                        (plVar5,puVar3,*(undefined1 *)(lVar4 + 0x20 + lVar1),lVar1 + 0x10 + lVar4,
                         *(undefined8 *)(lVar4 + 0x18 + lVar1));
            }
            iVar6 = iVar6 + 1;
            lVar8 = lVar8 + 8;
          } while (iVar6 < *(int *)(param_1 + 0x38));
        }
        iVar7 = iVar7 + 1;
        lVar4 = lVar4 + 0x28;
      } while (iVar7 < *(int *)(param_1 + 0x18));
    }
    plVar5 = *(longlong **)(param_1 + 0x10);
    for (iVar7 = *(int *)(param_1 + 0x18); iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 5;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x1c) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x10,0);
    }
    DAT_1468e3238 = '\0';
  }
  return;
}



// FUNCTION 141685070 Update body=222 status=ok
// SIG undefined Update(void)

void FMD5::Update(longlong param_1,void *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = *(uint *)(param_1 + 0x10) >> 3 & 0x3f;
  iVar4 = *(int *)(param_1 + 0x14);
  uVar1 = *(uint *)(param_1 + 0x10) + param_3 * 8;
  *(uint *)(param_1 + 0x10) = uVar1;
  if (uVar1 < param_3 * 8) {
    iVar4 = iVar4 + 1;
  }
  iVar5 = -uVar3 + 0x40;
  *(uint *)(param_1 + 0x14) = (param_3 >> 0x1d) + iVar4;
  if ((int)param_3 < iVar5) {
    iVar4 = 0;
  }
  else {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(param_1 + 0x18 + (ulonglong)uVar3),param_2,0x40 - (ulonglong)uVar3);
    Transform(param_1,param_1,param_1 + 0x18);
    iVar2 = -uVar3;
    while (iVar4 = iVar5, iVar2 + 0x7f < (int)param_3) {
      Transform(param_1,param_1,(longlong)iVar4 + (longlong)param_2);
      iVar5 = iVar4 + 0x40;
      iVar2 = iVar4;
    }
    uVar3 = 0;
  }
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(param_1 + 0x18 + (ulonglong)uVar3),
             (void *)((longlong)iVar4 + (longlong)param_2),(longlong)(int)(param_3 - iVar4));
  return;
}



// FUNCTION 141685150 Update body=227 status=ok
// SIG undefined Update(void)

void FSHA1::Update(longlong param_1,void *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x14) >> 3 & 0x3f;
  iVar2 = *(int *)(param_1 + 0x18);
  uVar3 = *(uint *)(param_1 + 0x14) + param_3 * 8;
  *(uint *)(param_1 + 0x14) = uVar3;
  if (uVar3 < param_3 * 8) {
    iVar2 = iVar2 + 1;
  }
  *(uint *)(param_1 + 0x18) = (param_3 >> 0x1d) + iVar2;
  if (uVar1 + param_3 < 0x40) {
    uVar3 = 0;
  }
  else {
    uVar3 = -uVar1 + 0x40;
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(param_1 + 0x20 + (ulonglong)uVar1),param_2,(ulonglong)uVar3);
    Transform(param_1,param_1,param_1 + 0x20);
    for (uVar1 = -uVar1 + 0x7f; uVar1 < param_3; uVar1 = uVar1 + 0x40) {
      Transform(param_1,param_1,(ulonglong)uVar3 + (longlong)param_2);
      uVar3 = uVar3 + 0x40;
    }
    uVar1 = 0;
  }
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(param_1 + 0x20 + (ulonglong)uVar1),
             (void *)((ulonglong)uVar3 + (longlong)param_2),(ulonglong)(param_3 - uVar3));
  return;
}



// FUNCTION 141685240 FUN_141685240 body=162 status=ok
// SIG undefined FUN_141685240(void)

void FUN_141685240(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    *(float *)(*(longlong *)
                (*(longlong *)(param_1 + 0x70) + -8 + (longlong)*(int *)(param_1 + 0x78) * 8) + 0x30
              ) = (float)param_3;
    *(float *)(*(longlong *)
                (*(longlong *)(param_1 + 0x70) + -8 + (longlong)*(int *)(param_1 + 0x78) * 8) + 0x34
              ) = (float)param_2;
    *(float *)(*(longlong *)
                (*(longlong *)(param_1 + 0x70) + -8 + (longlong)*(int *)(param_1 + 0x78) * 8) + 0x38
              ) = (float)(param_3 - param_2);
    FUN_14167e960(param_1,0);
  }
  return;
}



// FUNCTION 1416852f0 FUN_1416852f0 body=417 status=ok
// SIG undefined FUN_1416852f0(void)

void FUN_1416852f0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 local_28 [32];
  
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  if (*(int *)((undefined8 *)param_1[0xc] + 1) != 0) {
    lVar1 = **(longlong **)param_1[0xc];
    lVar7 = lVar1 + 0x18;
    cVar5 = FText::IsEmpty(lVar7);
    if (cVar5 != '\0') {
      lVar7 = lVar1;
    }
    FText::FText(local_28,lVar7);
    plVar9 = (longlong *)param_1[0xc];
    fVar15 = 0.0;
    iVar6 = (int)plVar9[1] + -1;
    lVar7 = (longlong)iVar6;
    if (-1 < iVar6) {
      if (2 < lVar7) {
        uVar8 = lVar7 + 1U >> 2;
        plVar10 = (longlong *)(*plVar9 + -0x10 + lVar7 * 8);
        lVar7 = lVar7 + uVar8 * -4;
        do {
          lVar1 = plVar10[2];
          fVar11 = 1.0 / *(float *)(lVar1 + 0x30);
          lVar2 = plVar10[1];
          fVar12 = 1.0 / *(float *)(lVar2 + 0x30);
          lVar3 = *plVar10;
          fVar13 = 1.0 / *(float *)(lVar3 + 0x30);
          lVar4 = plVar10[-1];
          plVar10 = plVar10 + -4;
          fVar14 = 1.0 / *(float *)(lVar4 + 0x30);
          fVar15 = fVar14 * *(float *)(lVar4 + 0x38) *
                   (fVar13 * *(float *)(lVar3 + 0x38) *
                    (fVar12 * *(float *)(lVar2 + 0x38) *
                     (fVar11 * *(float *)(lVar1 + 0x38) * fVar15 + fVar11 * *(float *)(lVar1 + 0x34)
                     ) + fVar12 * *(float *)(lVar2 + 0x34)) + fVar13 * *(float *)(lVar3 + 0x34)) +
                   fVar14 * *(float *)(lVar4 + 0x34);
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (-1 < lVar7) {
        plVar9 = (longlong *)(*plVar9 + lVar7 * 8);
        do {
          lVar1 = *plVar9;
          plVar9 = plVar9 + -1;
          lVar7 = lVar7 + -1;
          fVar11 = 1.0 / *(float *)(lVar1 + 0x30);
          fVar15 = fVar11 * *(float *)(lVar1 + 0x38) * fVar15 + fVar11 * *(float *)(lVar1 + 0x34);
        } while (-1 < lVar7);
      }
    }
    (**(code **)(*param_1 + 0x60))(param_1,fVar15,local_28);
  }
  return;
}



// FUNCTION 1416854a0 UpdateWithString body=8 status=ok
// SIG undefined UpdateWithString(void)

void FSHA1::UpdateWithString(undefined8 param_1,undefined8 param_2,int param_3)

{
  Update(param_1,param_2,param_3 * 2);
  return;
}



// FUNCTION 1416854b0 FUN_1416854b0 body=3871 status=ok
// SIG undefined FUN_1416854b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1416854b0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  longlong lVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int iVar11;
  wchar_t *pwVar12;
  uint uVar13;
  undefined *puVar14;
  undefined2 *puVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  short *psVar19;
  undefined **ppuVar20;
  uint uVar21;
  wchar_t *pwVar22;
  uint uVar23;
  wchar_t *_Source;
  undefined1 auStack_2c8 [32];
  uint local_2a8;
  wchar_t *local_298;
  int local_290;
  int local_28c;
  undefined4 local_288;
  int local_284;
  wchar_t *local_280;
  int local_278;
  undefined4 local_274;
  longlong local_270;
  undefined8 local_268;
  longlong local_260;
  wchar_t *local_258;
  int local_250;
  int local_24c;
  longlong local_248 [4];
  short *local_228;
  int local_220;
  longlong *local_218;
  undefined4 *local_210;
  longlong *local_208;
  undefined4 *local_200;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined1 local_1e0 [8];
  longlong *local_1d8;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined1 local_198 [8];
  longlong *local_190;
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [8];
  longlong *local_90;
  char local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  local_260 = param_2;
  puVar9 = (undefined8 *)FUN_141672740();
  pwVar12 = (wchar_t *)0x0;
  local_228 = (short *)0x0;
  local_284 = *(int *)(puVar9 + 1);
  lVar18 = (longlong)local_284;
  pvVar3 = (void *)*puVar9;
  local_220 = local_284;
  if (local_284 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_228,local_284,0);
    _guard_xfg_dispatch_icall_nop(local_228,pvVar3,lVar18 * 2);
  }
  local_284 = local_220;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468e32f4) && (_Init_thread_header(&DAT_1468e32f4), DAT_1468e32f4 == -1))
  {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464afdf0,0);
    local_2a8._0_2_ = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(DAT_1464afdf0,4,&DAT_144ccbd84);
    DAT_1464afe00 = 0;
    _DAT_1464afe08 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464afe00,0);
    local_2a8._0_2_ = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(DAT_1464afe00,4,&DAT_144ccbf0c);
    DAT_1464afe10 = 0;
    _DAT_1464afe18 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464afe10,0);
    local_2a8._0_2_ = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(DAT_1464afe10,4,&DAT_144ccc09c);
    DAT_1464afe20 = 0;
    _DAT_1464afe28 = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464afe20,0);
    local_2a8._0_2_ = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(DAT_1464afe20,7,"CLOCK$");
    DAT_1464afe30 = 0;
    _DAT_1464afe38 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464afe30,0);
    local_2a8._0_2_ = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(DAT_1464afe30,4,&DAT_144ccc234);
    DAT_1464afe40 = 0;
    _DAT_1464afe48 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464afe40,0);
    local_2a8._0_2_ = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(DAT_1464afe40,5,&DAT_144ccca40);
    DAT_1464afe50 = 0;
    _DAT_1464afe58 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464afe50,0);
    local_2a8._0_2_ = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(DAT_1464afe50,5,&DAT_144ccca48);
    DAT_1464afe60 = 0;
    _DAT_1464afe68 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464afe60,0);
    local_2a8._0_2_ = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(DAT_1464afe60,5,&DAT_144ccca50);
    DAT_1464afe70 = 0;
    _DAT_1464afe78 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464afe70,0);
    local_2a8._0_2_ = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(DAT_1464afe70,5,&DAT_144ccca58);
    DAT_1464afe80 = 0;
    _DAT_1464afe88 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464afe80,0);
    local_2a8._0_2_ = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(DAT_1464afe80,5,&DAT_144ccca60);
    DAT_1464afe90 = 0;
    _DAT_1464afe98 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464afe90,0);
    local_2a8._0_2_ = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(DAT_1464afe90,5,&DAT_144ccca68);
    DAT_1464afea0 = 0;
    _DAT_1464afea8 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464afea0,0);
    local_2a8._0_2_ = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(DAT_1464afea0,5,&DAT_144ccca70);
    DAT_1464afeb0 = 0;
    _DAT_1464afeb8 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464afeb0,0);
    local_2a8._0_2_ = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(DAT_1464afeb0,5,&DAT_144ccca78);
    DAT_1464afec0 = 0;
    _DAT_1464afec8 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464afec0,0);
    local_2a8._0_2_ = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(DAT_1464afec0,5,&DAT_144ccca80);
    DAT_1464afed0 = 0;
    _DAT_1464afed8 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464afed0,0);
    local_2a8._0_2_ = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(DAT_1464afed0,5,&DAT_144ccca88);
    DAT_1464afee0 = 0;
    _DAT_1464afee8 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464afee0,0);
    local_2a8._0_2_ = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(DAT_1464afee0,5,&DAT_144ccca90);
    DAT_1464afef0 = 0;
    _DAT_1464afef8 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464afef0,0);
    local_2a8._0_2_ = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(DAT_1464afef0,5,&DAT_144ccca98);
    DAT_1464aff00 = 0;
    _DAT_1464aff08 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464aff00,0);
    local_2a8._0_2_ = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(DAT_1464aff00,5,&DAT_144cccaa0);
    DAT_1464aff10 = 0;
    _DAT_1464aff18 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464aff10,0);
    local_2a8._0_2_ = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(DAT_1464aff10,5,&DAT_144cccaa8);
    DAT_1464aff20 = 0;
    _DAT_1464aff28 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464aff20,0);
    local_2a8._0_2_ = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(DAT_1464aff20,5,&DAT_144cccab0);
    DAT_1464aff30 = 0;
    _DAT_1464aff38 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464aff30,0);
    local_2a8._0_2_ = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(DAT_1464aff30,5,&DAT_144cccab8);
    DAT_1464aff40 = 0;
    _DAT_1464aff48 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464aff40,0);
    local_2a8._0_2_ = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(DAT_1464aff40,5,&DAT_144cccac0);
    DAT_1464aff50 = 0;
    _DAT_1464aff58 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464aff50,0);
    local_2a8 = CONCAT22(local_2a8._2_2_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(DAT_1464aff50,5,&DAT_144cccac8);
    atexit(`FPaths::ValidatePath'::`2'::_dynamic_atexit_destructor_for__RestrictedNames__);
    _Init_thread_footer(&DAT_1468e32f4);
  }
  local_290 = *(int *)(param_1 + 1);
  lVar18 = (longlong)local_290;
  pvVar3 = (void *)*param_1;
  local_298 = (wchar_t *)0x0;
  iVar7 = 0;
  if (local_290 == 0) {
    local_28c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_298,local_290,0);
    _guard_xfg_dispatch_icall_nop(local_298,pvVar3,lVar18 * 2);
  }
  FString::ReplaceInline(&local_298,&DAT_144ccaf54,&DAT_144ccae2c,0);
  FPaths::CollapseRelativeDirectories(&local_298);
  FPaths::RemoveDuplicateSlashes(&local_298);
  cVar5 = FString::EndsWith(&local_298,&DAT_144ccc314,0);
  pwVar22 = local_298;
  iVar11 = local_290;
  iVar8 = local_28c;
  if (cVar5 != '\0') {
    if (local_290 == 0) {
      _Source = L"";
      iVar11 = iVar7;
    }
    else {
      _Source = local_298;
      iVar11 = local_290 + -1;
    }
    local_258 = (wchar_t *)0x0;
    local_24c = 0;
    iVar8 = iVar7;
    if (-1 < iVar11 + -1) {
      iVar8 = iVar11 + -1;
    }
    iVar11 = iVar8 + 1;
    if (iVar8 == 0) {
      iVar11 = 0;
    }
    pwVar22 = pwVar12;
    local_250 = iVar11;
    if ((0 < iVar11) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_258,0), iVar7 = local_24c,
       iVar11 = local_250, pwVar22 = local_258, 0 < local_250)) {
      wcsncpy(local_258,_Source,(longlong)iVar8);
      pwVar22[iVar8] = L'\0';
    }
    iVar8 = iVar7;
    if (local_298 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  local_28c = iVar8;
  local_290 = iVar11;
  local_298 = pwVar22;
  puVar14 = &DAT_144ccc354;
  local_2a8 = 0xffffffff;
  do {
    iVar7 = FUN_141592950(&local_298,puVar14,0);
    uVar23 = (uint)pwVar12;
    iVar11 = iVar7 - uVar23;
    if (iVar7 == -1) {
      iVar11 = 0x7fffffff;
    }
    uVar13 = iVar11 + uVar23;
    uVar21 = local_290 - 1;
    if (local_290 == 0) {
      uVar21 = 0;
    }
    if (uVar23 < uVar21) {
      uVar21 = uVar23;
    }
    uVar16 = local_290 - 1;
    if (local_290 == 0) {
      uVar16 = 0;
    }
    uVar17 = uVar21;
    if ((uVar21 <= uVar13) && (uVar17 = uVar16, uVar13 < uVar16)) {
      uVar17 = uVar13;
    }
    pwVar12 = L"";
    if (local_290 != 0) {
      pwVar12 = local_298;
    }
    iVar11 = uVar17 - uVar21;
    local_280 = (wchar_t *)0x0;
    local_274 = 0;
    local_278 = iVar11 + 1;
    if (iVar11 == 0) {
      local_278 = 0;
    }
    if (0 < local_278) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_280,0);
    }
    pwVar22 = local_280;
    if (0 < local_278) {
      wcsncpy(local_280,pwVar12 + (int)uVar21,(longlong)iVar11);
      pwVar22[iVar11] = L'\0';
    }
    if ((uVar23 == 0) && (cVar5 = FUN_141674b80(&local_280), cVar5 != '\0')) {
      if (iVar7 == -1) goto LAB_141685b0e;
    }
    else {
      local_288 = 0;
      local_270 = 0;
      local_268 = 0;
      if ((local_284 != 0) && (sVar6 = *local_228, psVar19 = local_228, sVar6 != 0)) {
        do {
          local_288 = CONCAT22(local_288._2_2_,sVar6);
          local_2a8 = 0xffffffff;
          iVar11 = FUN_141592950(&local_280,&local_288,1);
          if ((iVar11 != -1) && (sVar6 = *psVar19, sVar6 != 0)) {
            iVar11 = (int)local_268 + -1;
            if ((int)local_268 < 1) {
              iVar11 = 0;
            }
            iVar8 = ((int)local_268 < 1) + 1 + (int)local_268;
            local_268 = CONCAT44(local_268._4_4_,iVar8);
            if (local_268._4_4_ < iVar8) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_270);
            }
            *(short *)(local_270 + (longlong)iVar11 * 2) = sVar6;
            *(undefined2 *)(local_270 + 2 + (longlong)iVar11 * 2) = 0;
          }
          lVar18 = local_260;
          sVar6 = psVar19[1];
          psVar19 = psVar19 + 1;
        } while (sVar6 != 0);
        if (((int)local_268 != 0) && ((int)local_268 != 1)) {
          if (local_260 != 0) {
            local_148 = 0;
            local_140 = 0;
            local_128 = 0;
            local_120 = 0;
            local_118 = 0xffffffff;
            local_114 = 0;
            local_108 = 0;
            local_100 = 0;
            uVar10 = FText::FromString(local_1f8,&local_270);
            local_a8[0] = 4;
            FText::FText(local_98,uVar10);
            local_80 = '\x01';
            local_248[0] = 0;
            local_248[1] = 0x16;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_248,0);
            FGenericPlatformString::Memcpy(local_248[0],L"IllegalPathCharacters",0x2c);
            local_218 = local_248;
            local_210 = local_a8;
            FUN_1407484b0(&local_148,&local_284,&local_218,0);
            if (local_248[0] != 0) {
              FMemory::Free();
            }
            if ((local_80 != '\0') && (local_80 = '\0', local_90 != (longlong *)0x0)) {
              LOCK();
              plVar1 = local_90 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*local_90)(local_90);
                LOCK();
                piVar2 = (int *)((longlong)local_90 + 0xc);
                iVar7 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*local_90 + 8))(local_90,1);
                }
              }
            }
            if (local_1f0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_1f0 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*local_1f0)(local_1f0);
                LOCK();
                piVar2 = (int *)((longlong)local_1f0 + 0xc);
                iVar7 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*local_1f0 + 8))(local_1f0,1);
                }
              }
            }
            uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                               (local_1c8,
                                L"Path may not contain the following characters: {IllegalPathCharacters}"
                                ,L"Core",L"PathContainsInvalidCharacters");
            uVar10 = FTextFormat::FTextFormat(local_168,uVar10);
            uVar10 = FText::Format(local_1e0,uVar10,&local_148);
            FText::operator=(lVar18,uVar10);
            if (local_1d8 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_1d8 + 1;
              lVar18 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar18 == 1) {
                (**(code **)*local_1d8)(local_1d8);
                LOCK();
                piVar2 = (int *)((longlong)local_1d8 + 0xc);
                iVar7 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*local_1d8 + 8))(local_1d8,1);
                }
              }
            }
            if (local_1c0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_1c0 + 1;
              lVar18 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar18 == 1) {
                (**(code **)*local_1c0)(local_1c0);
                LOCK();
                piVar2 = (int *)((longlong)local_1c0 + 0xc);
                iVar7 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*local_1c0 + 8))(local_1c0,1);
                }
              }
            }
            local_100 = 0;
            if (local_108 != 0) {
              FMemory::Free();
            }
            puVar9 = &local_148;
LAB_141685d5b:
            TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                      (puVar9);
          }
LAB_141685d60:
          if (local_270 != 0) {
            FMemory::Free();
          }
          if (local_280 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          uVar10 = 0;
          goto LAB_141685d81;
        }
      }
      ppuVar20 = (undefined **)&DAT_1464afdf0;
      do {
        if (*(int *)(ppuVar20 + 1) == 0) {
          puVar15 = &DAT_143f3eda8;
        }
        else {
          puVar15 = (undefined2 *)*ppuVar20;
        }
        pwVar12 = L"";
        if (local_278 != 0) {
          pwVar12 = local_280;
        }
        iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(pwVar12,puVar15);
        lVar18 = local_260;
        if (iVar11 == 0) {
          if (local_260 == 0) goto LAB_141685d60;
          local_f8 = 0;
          local_f0 = 0;
          local_d8 = 0;
          local_d0 = 0;
          local_c8 = 0xffffffff;
          local_c4 = 0;
          local_b8 = 0;
          local_b0 = 0;
          uVar10 = FText::FromString(local_1b0,ppuVar20);
          local_78[0] = 4;
          FText::FText(local_68,uVar10);
          local_50 = '\x01';
          local_248[2] = 0;
          local_248[3] = 0xf;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_248 + 2,0);
          FGenericPlatformString::Memcpy(local_248[2],L"RestrictedName",0x1e);
          local_208 = local_248 + 2;
          local_200 = local_78;
          FUN_1407484b0(&local_f8,&local_260,&local_208,0);
          if (local_248[2] != 0) {
            FMemory::Free();
          }
          if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
            LOCK();
            plVar1 = local_60 + 1;
            lVar4 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar2 = (int *)((longlong)local_60 + 0xc);
              iVar7 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*local_60 + 8))(local_60,1);
              }
            }
          }
          if (local_1a8 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_1a8 + 1;
            lVar4 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_1a8)(local_1a8);
              LOCK();
              piVar2 = (int *)((longlong)local_1a8 + 0xc);
              iVar7 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*local_1a8 + 8))(local_1a8,1);
              }
            }
          }
          uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_180,L"Path may not contain a restricted name: {RestrictedName}",
                              L"Core",L"PathContainsRestrictedName");
          uVar10 = FTextFormat::FTextFormat(local_158,uVar10);
          uVar10 = FText::Format(local_198,uVar10,&local_f8);
          FText::operator=(lVar18,uVar10);
          if (local_190 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_190 + 1;
            lVar18 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*local_190)(local_190);
              LOCK();
              piVar2 = (int *)((longlong)local_190 + 0xc);
              iVar7 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*local_190 + 8))(local_190,1);
              }
            }
          }
          if (local_178 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_178 + 1;
            lVar18 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*local_178)(local_178);
              LOCK();
              piVar2 = (int *)((longlong)local_178 + 0xc);
              iVar7 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*local_178 + 8))(local_178,1);
              }
            }
          }
          local_b0 = 0;
          if (local_b8 != 0) {
            FMemory::Free();
          }
          puVar9 = &local_f8;
          goto LAB_141685d5b;
        }
        ppuVar20 = ppuVar20 + 2;
      } while (ppuVar20 != &PTR_DAT_1464aff60);
      if (iVar7 == -1) {
        if (local_270 != 0) {
          FMemory::Free();
        }
LAB_141685b0e:
        if (local_280 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        uVar10 = 1;
LAB_141685d81:
        if (local_298 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        if (local_228 != (short *)0x0) {
          FMemory::Free(local_228);
        }
        return uVar10;
      }
      if (local_270 != 0) {
        FMemory::Free();
      }
    }
    if (local_280 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_2a8 = iVar7 + 1;
    pwVar12 = (wchar_t *)(ulonglong)local_2a8;
    puVar14 = &DAT_144ccc3a4;
  } while( true );
}



// FUNCTION 1416863d0 Value body=118 status=ok
// SIG undefined Value(void)

ulonglong FParse::Value(undefined8 param_1,longlong param_2,char *param_3)

{
  wchar_t *_Str;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar4;
  
  lVar2 = TCString<wchar_t>::Strifind(param_1,param_2,0);
  uVar4 = 0;
  if (lVar2 != 0) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(param_2 + lVar3 * 2) != 0);
    _Str = (wchar_t *)(lVar2 + (longlong)(int)lVar3 * 2);
    iVar1 = _wtoi(_Str);
    uVar4 = CONCAT44(extraout_var,iVar1);
    *param_3 = (char)iVar1;
    if ((char)iVar1 == '\0') {
      iVar1 = iswdigit(*_Str);
      uVar4 = CONCAT44(extraout_var_00,iVar1);
      if (iVar1 == 0) goto LAB_14168642c;
    }
    return CONCAT71((int7)(uVar4 >> 8),1);
  }
LAB_14168642c:
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 141686450 Value body=88 status=ok
// SIG undefined Value(void)

undefined8 FParse::Value(undefined8 param_1,longlong param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 extraout_var;
  
  lVar2 = TCString<wchar_t>::Strifind(param_1,param_2,0);
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(short *)(param_2 + lVar3 * 2) != 0);
  iVar1 = _wtoi((wchar_t *)(lVar2 + (longlong)(int)lVar3 * 2));
  *param_3 = iVar1;
  return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),1);
}



// FUNCTION 1416864b0 Value body=99 status=ok
// SIG undefined Value(void)

undefined8 FParse::Value(undefined8 param_1,longlong param_2,ulong *param_3)

{
  ulong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 extraout_var;
  wchar_t *local_res20;
  
  lVar2 = TCString<wchar_t>::Strifind(param_1,param_2,0);
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(short *)(param_2 + lVar3 * 2) != 0);
  uVar1 = wcstoul((wchar_t *)(lVar2 + (longlong)(int)lVar3 * 2),&local_res20,10);
  *param_3 = uVar1;
  return CONCAT71((int7)(CONCAT44(extraout_var,uVar1) >> 8),1);
}



// FUNCTION 141686520 Value body=96 status=ok
// SIG undefined Value(void)

undefined8 FParse::Value(undefined8 param_1,longlong param_2,float *param_3)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  
  lVar1 = TCString<wchar_t>::Strifind(param_1,param_2,0);
  if (lVar1 == 0) {
    return 0;
  }
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(short *)(param_2 + lVar2 * 2) != 0);
  dVar3 = _wtof((wchar_t *)(lVar1 + (longlong)(int)lVar2 * 2));
  *param_3 = (float)dVar3;
  return 1;
}



// FUNCTION 141686580 Value body=109 status=ok
// SIG undefined Value(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FParse::Value(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 auStack_858 [32];
  undefined1 local_838;
  undefined1 local_828 [16];
  undefined1 local_818 [2048];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_858;
  local_838 = 1;
  cVar1 = Value(param_1,param_2,local_818,0x400);
  if (cVar1 != '\0') {
    puVar2 = (undefined8 *)FName::FName(local_828,local_818,1);
    *param_3 = *puVar2;
  }
  return cVar1 != '\0';
}



// FUNCTION 1416865f0 Value body=500 status=ok
// SIG undefined Value(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FParse::Value(longlong param_1,undefined8 param_2,longlong *param_3,undefined1 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_2088 [32];
  undefined1 local_2068;
  longlong local_2058;
  int local_2050;
  int local_204c;
  short local_2048 [4096];
  ulonglong local_48;
  undefined8 uStack_40;
  longlong lVar3;
  
  uStack_40 = 0x141686605;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2088;
  if (param_1 == 0) {
LAB_1416867c0:
    uVar4 = 0;
  }
  else {
    lVar6 = -1;
    lVar2 = -1;
    do {
      lVar3 = lVar2;
      lVar2 = lVar3 + 1;
    } while (*(short *)(param_1 + lVar2 * 2) != 0);
    local_2068 = param_4;
    if ((int)lVar2 < 0x1000) {
      ::_guard_xfg_dispatch_icall_nop(local_2048,0,0x2000);
      cVar1 = Value(param_1,param_2,local_2048,0x1000);
      if (cVar1 == '\0') goto LAB_1416867c0;
      if ((short *)*param_3 != local_2048) {
        iVar8 = 0;
        if (local_2048[0] == 0) {
          iVar5 = 0;
        }
        else {
          do {
            lVar6 = lVar6 + 1;
          } while (local_2048[lVar6] != 0);
          iVar5 = (int)lVar6 + 1;
        }
        *(undefined4 *)(param_3 + 1) = 0;
        if (*(int *)((longlong)param_3 + 0xc) != iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3,iVar5);
          iVar8 = (int)param_3[1];
        }
        *(int *)(param_3 + 1) = iVar8 + iVar5;
        if (*(int *)((longlong)param_3 + 0xc) < iVar8 + iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar8);
        }
        if (iVar5 != 0) {
          ::_guard_xfg_dispatch_icall_nop((void *)*param_3,local_2048,(longlong)iVar5 * 2);
          return 1;
        }
      }
    }
    else {
      iVar8 = (int)lVar3 + 2;
      local_2058 = 0;
      local_204c = 0;
      local_2050 = iVar8;
      if (0 < iVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2058,0);
      }
      iVar7 = local_204c;
      iVar5 = local_2050;
      lVar2 = local_2058;
      cVar1 = Value(param_1,param_2,local_2058,iVar8);
      if (cVar1 == '\0') {
        if (lVar2 != 0) {
          FMemory::Free(lVar2);
        }
        goto LAB_1416867c0;
      }
      if (iVar7 != iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2058,iVar5);
        lVar2 = local_2058;
        iVar5 = local_2050;
        iVar7 = local_204c;
      }
      if (param_3 != &local_2058) {
        if (*param_3 != 0) {
          FMemory::Free();
        }
        *param_3 = lVar2;
        *(int *)(param_3 + 1) = iVar5;
        *(int *)((longlong)param_3 + 0xc) = iVar7;
        return 1;
      }
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 1416867f0 Value body=130 status=ok
// SIG undefined Value(void)

void FParse::Value(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = TCString<wchar_t>::Strifind(param_1,param_2,0);
  if (lVar1 != 0) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(short *)(param_2 + lVar2 * 2) != 0);
    FTextStringHelper::ReadFromString(lVar1 + (longlong)(int)lVar2 * 2,param_3,param_4,0,0,0,2);
    return;
  }
  return;
}



// FUNCTION 141686880 Value body=223 status=ok
// SIG undefined Value(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FParse::Value(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  ushort uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  undefined1 auStack_2058 [32];
  undefined1 local_2038;
  ushort local_2028 [4096];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14168688e;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_2058;
  ::_guard_xfg_dispatch_icall_nop(local_2028,0,0x2000);
  local_2038 = 1;
  uVar2 = Value(param_1,param_2,local_2028,0x1000);
  if ((char)uVar2 == '\0') {
    uVar2 = uVar2 & 0xffffffffffffff00;
  }
  else {
    lVar3 = 0;
    *param_3 = 0;
    lVar4 = lVar3;
    if (local_2028[0] == 0x2d) {
      lVar4 = 2;
    }
    puVar5 = (ushort *)((longlong)local_2028 + lVar4);
    uVar1 = *puVar5;
    while ((0x2f < uVar1 && (uVar1 < 0x3a))) {
      puVar5 = puVar5 + 1;
      uVar2 = (ulonglong)uVar1;
      uVar1 = *puVar5;
      lVar3 = uVar2 + *param_3 * 10 + -0x30;
      *param_3 = lVar3;
    }
    if (local_2028[0] == 0x2d) {
      lVar3 = -lVar3;
      *param_3 = lVar3;
    }
    uVar2 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  }
  return uVar2;
}



// FUNCTION 141686960 Value body=379 status=ok
// SIG undefined Value(void)

undefined8
FParse::Value(undefined8 param_1,longlong param_2,wchar_t *param_3,int param_4,char param_5)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  longlong lVar4;
  short *psVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_4;
  lVar7 = -1;
  do {
    lVar7 = lVar7 + 1;
  } while (*(short *)(param_2 + lVar7 * 2) != 0);
  lVar4 = TCString<wchar_t>::Strifind(param_1,param_2,1);
  if (lVar4 == 0) {
    return 0;
  }
  psVar1 = (short *)(lVar4 + (longlong)(int)lVar7 * 2);
  sVar2 = *(short *)(lVar4 + (longlong)(int)lVar7 * 2);
  psVar3 = psVar1;
  if (sVar2 == 0x22) {
    wcsncpy(param_3,psVar1 + 1,lVar8 - 1);
    pwVar6 = L"\"";
    param_3[lVar8 + -1] = L'\0';
  }
  else {
    while (sVar2 != 0) {
      psVar5 = &DAT_144cc8d08;
      while( true ) {
        if (*psVar5 == 0) goto LAB_141686a04;
        if (*psVar3 == *psVar5) break;
        psVar5 = psVar5 + 1;
      }
      sVar2 = psVar3[1];
      psVar3 = psVar3 + 1;
    }
LAB_141686a04:
    wcsncpy(param_3,psVar1 + (int)((longlong)psVar3 - (longlong)psVar1 >> 1),lVar8 - 1);
    param_3[lVar8 + -1] = L'\0';
    pwVar6 = ::_guard_xfg_dispatch_icall_nop(param_3,L" ");
    if (pwVar6 != (wchar_t *)0x0) {
      *pwVar6 = L'\0';
    }
    pwVar6 = ::_guard_xfg_dispatch_icall_nop(param_3,L"\r");
    if (pwVar6 != (wchar_t *)0x0) {
      *pwVar6 = L'\0';
    }
    pwVar6 = ::_guard_xfg_dispatch_icall_nop(param_3,L"\n");
    if (pwVar6 != (wchar_t *)0x0) {
      *pwVar6 = L'\0';
    }
    pwVar6 = ::_guard_xfg_dispatch_icall_nop(param_3,L"\t");
    if (pwVar6 != (wchar_t *)0x0) {
      *pwVar6 = L'\0';
    }
    if (param_5 == '\0') {
      return 1;
    }
    pwVar6 = ::_guard_xfg_dispatch_icall_nop(param_3,L",");
    if (pwVar6 != (wchar_t *)0x0) {
      *pwVar6 = L'\0';
    }
    pwVar6 = L")";
  }
  pwVar6 = ::_guard_xfg_dispatch_icall_nop(param_3,pwVar6);
  if (pwVar6 != (wchar_t *)0x0) {
    *pwVar6 = L'\0';
  }
  return 1;
}



// FUNCTION 141686ae0 FUN_141686ae0 body=104 status=ok
// SIG undefined FUN_141686ae0(void)

wchar_t * FUN_141686ae0(uint param_1)

{
  switch(param_1 & 0xf) {
  case 0:
    return L"NoLogging";
  case 1:
    return L"Fatal";
  case 2:
    return L"Error";
  case 3:
    return L"Warning";
  case 4:
    return L"Display";
  case 5:
    return L"Log";
  case 6:
    return L"Verbose";
  case 7:
    return L"VeryVerbose";
  default:
    return L"UknownVerbosity";
  }
}



// FUNCTION 141686b70 VideoCaptureDir body=248 status=ok
// SIG undefined VideoCaptureDir(void)

longlong * FPaths::VideoCaptureDir(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong local_28;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  plVar1 = (longlong *)FUN_14167d0d0(local_18);
  lVar2 = plVar1[1];
  local_28 = *plVar1;
  *plVar1 = 0;
  local_20 = (int)plVar1[1];
  local_1c = *(int *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  iVar3 = local_20;
  if (local_1c < (int)((0xf - (uint)((int)lVar2 != 0)) + local_20)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
    iVar3 = local_20;
  }
  local_20 = (0xf - (uint)(iVar3 != 0)) + iVar3;
  if (local_1c < local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar3);
  }
  lVar2 = (longlong)iVar3 - (ulonglong)(iVar3 != 0);
  builtin_wcsncpy((wchar_t *)(local_28 + lVar2 * 2),L"VideoCap",8);
  lVar2 = local_28 + lVar2 * 2;
  builtin_wcsncpy((wchar_t *)(lVar2 + 0x10),L"ture",4);
  *(undefined4 *)(lVar2 + 0x18) = 0x2f0073;
  *(undefined2 *)(lVar2 + 0x1c) = 0;
  *param_1 = local_28;
  *(int *)(param_1 + 1) = local_20;
  *(int *)((longlong)param_1 + 0xc) = local_1c;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141686c70 Write body=192 status=ok
// SIG undefined Write(void)

undefined1 FRemoteConfig::Write(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  LARGE_INTEGER local_res20;
  undefined2 *local_18;
  int local_10;
  
  lVar2 = FindConfig();
  if (lVar2 == 0) {
    uVar1 = 1;
  }
  else {
    GenerateRemotePath(param_1,&local_18,param_2);
    QueryPerformanceCounter(&local_res20);
    puVar3 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar3 = local_18;
    }
    *(double *)(lVar2 + 0x20) = (double)local_res20.QuadPart * DAT_1468b02f8 + 16777216.0;
    uVar1 = FRemoteConfigAsyncTaskManager::StartTask(&DAT_1464afc30,param_2,puVar3,lVar2,param_3,0);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return uVar1;
}



// FUNCTION 141686d30 FUN_141686d30 body=399 status=ok
// SIG undefined FUN_141686d30(void)

int * FUN_141686d30(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  bool bVar6;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  param_3 = (undefined8 *)*param_3;
  bVar6 = false;
  *param_2 = local_38[0];
  *local_30 = 0;
  *local_30 = *param_3;
  *param_3 = 0;
  *(undefined4 *)(local_30 + 1) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)local_30 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  *(undefined4 *)(local_30 + 4) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_30);
    bVar6 = local_res8[0] != -1;
    if (bVar6) {
      plVar4 = (longlong *)(*param_1 + (longlong)local_res8[0] * 0x28);
      if (*(longlong *)(*param_1 + 0x10 + (longlong)local_res8[0] * 0x28) != 0) {
        FMemory::Free();
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar4,local_30,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_141686e9c;
    }
  }
  cVar2 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar2 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*local_30;
    }
    uVar3 = FUN_140438070(puVar5);
    uVar3 = (int)param_1[9] - 1U & uVar3;
    *(uint *)((longlong)local_30 + 0x24) = uVar3;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 4) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4) = iVar1
    ;
  }
LAB_141686e9c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 141686ec0 FUN_141686ec0 body=728 status=ok
// SIG undefined FUN_141686ec0(void)

uint * FUN_141686ec0(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined8 *_Src;
  int iVar10;
  uint uVar11;
  char cVar12;
  undefined4 uVar13;
  longlong *plVar14;
  bool bVar15;
  uint local_res8 [2];
  
  iVar10 = 1;
  uVar13 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar11 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar11 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,uVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar11 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)((longlong)(int)uVar11 * 0x20 + 4 + *param_1);
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar14 = (longlong *)param_1[4];
  *param_2 = uVar11;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar14 +
                   (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar11 & 0x1f);
  puVar3 = (undefined8 *)*param_3;
  _Src = (undefined8 *)((longlong)(int)uVar11 * 0x20 + *param_1);
  puVar8 = (undefined4 *)param_3[1];
  *_Src = 0;
  *_Src = *puVar3;
  *puVar3 = 0;
  *(undefined4 *)(_Src + 1) = *(undefined4 *)(puVar3 + 1);
  *(undefined4 *)((longlong)_Src + 0xc) = *(undefined4 *)((longlong)puVar3 + 0xc);
  puVar3[1] = 0;
  *(undefined4 *)(_Src + 2) = *puVar8;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar11 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar15 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar15);
    if (bVar15) {
      plVar14 = (longlong *)(lVar9 * 0x20 + *param_1);
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar14,_Src,0x18);
      uVar5 = *param_2;
      bVar4 = (byte)uVar5 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x20 + *param_1) = uVar5;
      }
      puVar8 = (undefined4 *)((longlong)(int)uVar5 * 0x20 + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar13 = (undefined4)param_1[6];
      }
      puVar8[1] = uVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar5;
      plVar14 = (longlong *)param_1[4];
      *param_2 = uVar11;
      if (plVar14 == (longlong *)0x0) {
        plVar14 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar14 +
                       (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_141687173;
    }
  }
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar11) {
    uVar5 = (uVar11 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar12 = '\0';
    if (uVar5 != 0) {
      iVar6 = 0x1f - iVar10;
    }
    uVar5 = (uVar11 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar12 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    uVar11 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*_Src;
    }
    uVar5 = FUN_140438070(puVar7);
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)((longlong)_Src + 0x1c) = uVar5;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(uint *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         uVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    Rehash(param_1);
  }
LAB_141687173:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1416871a0 FUN_1416871a0 body=803 status=ok
// SIG undefined FUN_1416871a0(void)

int * FUN_1416871a0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

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
  longlong *_Src;
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
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar3 = *puVar3 | 1 << ((byte)iVar11 & 0x1f);
  _Src = (longlong *)((longlong)iVar11 * 0x20 + *param_1);
  plVar8 = (longlong *)param_3[1];
  *_Src = *(longlong *)*param_3;
  _Src[1] = *plVar8;
  lVar5 = plVar8[1];
  _Src[2] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar15 != 1) {
    lVar5 = *_Src;
    iVar11 = iVar13;
    if (uVar15 != 0) {
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
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
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
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar3 = (uint *)((longlong)plVar8 +
                       (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar3 = *puVar3 & ~(1 << bVar6 | 1U >> 0x20 - bVar6);
      goto LAB_14168749a;
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
    uVar15 = (int)((ulonglong)*_Src >> 0x20) + (int)*_Src & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar15;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<FName,TBaseDelegate<IModuleInterface_*>_>,TDefaultMapHashableKeyFuncs<FName,TBaseDelegate<IModuleInterface_*>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14168749a:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1416874d0 FUN_1416874d0 body=704 status=ok
// SIG undefined FUN_1416874d0(void)

uint * FUN_1416874d0(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined8 *_Src;
  int iVar9;
  uint uVar10;
  char cVar11;
  undefined4 uVar12;
  longlong *plVar13;
  bool bVar14;
  uint local_res8 [2];
  
  iVar9 = 1;
  uVar12 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar10 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar10 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,uVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar10 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)((longlong)(int)uVar10 * 0x20 + 4 + *param_1);
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = uVar10;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar13 +
                   (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar10 & 0x1f);
  _Src = (undefined8 *)((longlong)(int)uVar10 * 0x20 + *param_1);
  puVar7 = (undefined4 *)param_3[1];
  FString::FString(_Src,*param_3);
  *(undefined4 *)(_Src + 2) = *puVar7;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar10 = local_res8[0];
    lVar8 = (longlong)(int)local_res8[0];
    bVar14 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      plVar13 = (longlong *)(lVar8 * 0x20 + *param_1);
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar13,_Src,0x18);
      uVar4 = *param_2;
      bVar3 = (byte)uVar4 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x20 + *param_1) = uVar4;
      }
      puVar7 = (undefined4 *)((longlong)(int)uVar4 * 0x20 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      puVar7[1] = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar4;
      plVar13 = (longlong *)param_1[4];
      *param_2 = uVar10;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar13 +
                       (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_14168776b;
    }
  }
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar10) {
    uVar4 = (uVar10 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar5 = 0x20;
    cVar11 = '\0';
    if (uVar4 != 0) {
      iVar5 = 0x1f - iVar9;
    }
    uVar4 = (uVar10 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar11 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar5 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar10 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*_Src;
    }
    uVar4 = FUN_140438070(puVar6);
    uVar4 = (int)param_1[9] - 1U & uVar4;
    *(uint *)((longlong)_Src + 0x1c) = uVar4;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(uint *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         uVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    Rehash(param_1);
  }
LAB_14168776b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 141687790 FUN_141687790 body=668 status=ok
// SIG undefined FUN_141687790(void)

int * FUN_141687790(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  longlong *_Src;
  int iVar13;
  bool bVar14;
  
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar12 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x18);
    *(int *)(param_1 + 6) = iVar12;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar12 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar9;
  lVar6 = (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar10 = (uint *)((longlong)plVar7 + lVar6);
  *puVar10 = *puVar10 | 1 << ((byte)iVar9 & 0x1f);
  plVar7 = (longlong *)param_3[1];
  lVar1 = (longlong)iVar9 * 0x18;
  _Src = (longlong *)(*param_1 + lVar1);
  bVar14 = false;
  lVar2 = *(longlong *)*param_3;
  *_Src = lVar2;
  _Src[1] = *plVar7;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar12 != 1) {
    iVar5 = iVar13;
    if (iVar12 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar7 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          iVar5 = iVar8;
          if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x18) == lVar2) break;
          iVar8 = *(int *)(*param_1 + 0x10 + (longlong)iVar8 * 0x18);
          iVar5 = iVar13;
        } while (iVar8 != -1);
      }
    }
    bVar14 = iVar5 != -1;
    if (bVar14) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar5 * 0x18),_Src,0x10);
      bVar3 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar9;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar1 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar2) = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar5;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar10 = (uint *)((longlong)plVar7 + lVar6);
      *puVar10 = *puVar10 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_141687a02;
    }
  }
  cVar4 = TSet<TTuple<unsigned___int64,FCsvStatSeries_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvStatSeries_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar12,0);
  if (cVar4 == '\0') {
    uVar11 = (int)((ulonglong)*_Src >> 0x20) * 0x17 + (int)*_Src & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar11;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_141687a02:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar14;
  }
  return param_2;
}



// FUNCTION 141687a30 FindByKey<FGuid> body=111 status=ok
// SIG undefined FindByKey<FGuid>(void)

int * TArray<FCustomVersion,FDefaultAllocator>::FindByKey<FGuid>(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)*param_1;
  piVar2 = piVar1 + (longlong)*(int *)(param_1 + 1) * 8;
  if (piVar1 != piVar2) {
    do {
      if (((piVar1[1] == param_2[1] && piVar1[3] == param_2[3]) && piVar1[2] == param_2[2]) &&
          *piVar1 == *param_2) {
        return piVar1;
      }
      piVar1 = piVar1 + 8;
    } while (piVar1 != piVar2);
  }
  return (int *)0x0;
}



// FUNCTION 141687aa0 HeapSortInternal<`FModuleManager::UnloadModulesAtShutdown'::`2'::FModulePair,FIdentityFunctor,TDereferenceWrapper<`FModuleManager::UnloadModulesAtShutdown'::`2'::FModulePair,TLess<`FModuleManager::UnloadModulesAtShutdown'::`2'::FModulePair>_>_> body=448 status=ok
// SIG undefined HeapSortInternal<`FModuleManager::UnloadModulesAtShutdown'::`2'::FModulePair,FIdentityFunctor,TDereferenceWrapper<`FModuleManager::UnloadModulesAtShutdown'::`2'::FModulePair,TLess<`FModuleManager::UnloadModulesAtShutdown'::`2'::FModulePair>_>_>(void)

void AlgoImpl::
     HeapSortInternal<_FModuleManager::UnloadModulesAtShutdown_::_2_::FModulePair,FIdentityFunctor,TDereferenceWrapper<_FModuleManager::UnloadModulesAtShutdown_::_2_::FModulePair,TLess<_FModuleManager::UnloadModulesAtShutdown_::_2_::FModulePair>_>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  
  iVar8 = (param_2 + -2) / 2;
  if (-1 < iVar8) {
    iVar9 = iVar8 * 2 + 1;
    iVar4 = iVar9;
    iVar10 = iVar8;
joined_r0x000141687aca:
    do {
      if (iVar9 < param_2) {
        iVar9 = iVar8 * 2;
        iVar12 = iVar9 + 1;
        if (iVar9 + 2 < param_2) {
          if (*(int *)(param_1 + (longlong)iVar12 * 3 + 1) <
              *(int *)(param_1 + (longlong)iVar9 * 3 + 7)) {
            iVar12 = iVar9;
          }
          iVar12 = iVar12 + 1;
        }
        puVar11 = param_1 + (longlong)iVar12 * 3;
        puVar1 = param_1 + (longlong)iVar8 * 3;
        if (*(int *)(puVar11 + 1) < *(int *)(param_1 + (longlong)iVar8 * 3 + 1)) {
          if (puVar1 != puVar11) {
            uVar5 = puVar11[1];
            uVar6 = *puVar1;
            uVar7 = puVar1[1];
            uVar3 = puVar1[2];
            *puVar1 = *puVar11;
            puVar1[1] = uVar5;
            puVar1[2] = puVar11[2];
            *puVar11 = uVar6;
            puVar11[1] = uVar7;
            puVar11[2] = uVar3;
          }
          iVar9 = iVar12 * 2 + 1;
          iVar8 = iVar12;
          goto joined_r0x000141687aca;
        }
      }
      iVar9 = iVar4 + -2;
      iVar8 = iVar10 + -1;
      iVar4 = iVar9;
      iVar10 = iVar8;
    } while (-1 < iVar8);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar11 = param_1 + (longlong)param_2 * 3;
    do {
      if (param_1 != puVar11) {
        uVar5 = puVar11[1];
        uVar6 = *param_1;
        uVar7 = param_1[1];
        uVar3 = param_1[2];
        *param_1 = *puVar11;
        param_1[1] = uVar5;
        param_1[2] = puVar11[2];
        *puVar11 = uVar6;
        puVar11[1] = uVar7;
        puVar11[2] = uVar3;
      }
      iVar8 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar8 * 2;
          iVar9 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            if (*(int *)(param_1 + (longlong)iVar9 * 3 + 1) <
                *(int *)(param_1 + (longlong)iVar4 * 3 + 7)) {
              iVar9 = iVar4;
            }
            iVar9 = iVar9 + 1;
          }
          puVar1 = param_1 + (longlong)iVar9 * 3;
          puVar2 = param_1 + (longlong)iVar8 * 3;
          if (*(int *)(param_1 + (longlong)iVar8 * 3 + 1) <= *(int *)(puVar1 + 1)) break;
          if (puVar2 != puVar1) {
            uVar5 = puVar1[1];
            uVar6 = *puVar2;
            uVar7 = puVar2[1];
            uVar3 = puVar2[2];
            *puVar2 = *puVar1;
            puVar2[1] = uVar5;
            puVar2[2] = puVar1[2];
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            puVar1[2] = uVar3;
          }
          iVar8 = iVar9;
        } while (iVar9 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar11 = puVar11 + -3;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 141687c60 IntroSortInternal<`FModuleManager::UnloadModulesAtShutdown'::`2'::FModulePair,FIdentityFunctor,TDereferenceWrapper<`FModuleManager::UnloadModulesAtShutdown'::`2'::FModulePair,TLess<`FModuleManager::UnloadModulesAtShutdown'::`2'::FModulePair>_>_> body=833 status=ok
// SIG undefined IntroSortInternal<`FModuleManager::UnloadModulesAtShutdown'::`2'::FModulePair,FIdentityFunctor,TDereferenceWrapper<`FModuleManager::UnloadModulesAtShutdown'::`2'::FModulePair,TLess<`FModuleManager::UnloadModulesAtShutdown'::`2'::FModulePair>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<_FModuleManager::UnloadModulesAtShutdown_::_2_::FModulePair,FIdentityFunctor,TDereferenceWrapper<_FModuleManager::UnloadModulesAtShutdown_::_2_::FModulePair,TLess<_FModuleManager::UnloadModulesAtShutdown_::_2_::FModulePair>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  float fVar17;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + param_2 * 0x18 + -0x18;
    fVar17 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar17 = fVar17 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar17 = ::_guard_xfg_dispatch_icall_nop(fVar17);
    local_328 = (undefined4)(longlong)(fVar17 + fVar17);
    ::_guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar16 = &local_338;
    do {
      puVar15 = (undefined8 *)*plVar16;
      puVar10 = (undefined8 *)plVar16[1];
      lVar1 = plVar16[2];
      local_348._0_4_ = (int)lVar1;
      lVar9 = ((longlong)puVar10 - (longlong)puVar15) / 0x18 + 1;
      puVar14 = puVar15;
      if ((int)local_348 != 0) {
LAB_141687d50:
        if (8 < lVar9) {
          if (lVar9 < 0) {
            lVar9 = lVar9 + 1;
          }
          puVar15 = puVar14 + (lVar9 >> 1) * 3;
          if (puVar15 != puVar14) {
            uVar3 = *(undefined4 *)((longlong)puVar14 + 4);
            uVar4 = *(undefined4 *)(puVar14 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar14 + 0xc);
            uVar6 = *puVar15;
            uVar7 = puVar15[1];
            uVar2 = puVar15[2];
            *(undefined4 *)puVar15 = *(undefined4 *)puVar14;
            *(undefined4 *)((longlong)puVar15 + 4) = uVar3;
            *(undefined4 *)(puVar15 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar15 + 0xc) = uVar5;
            puVar15[2] = puVar14[2];
            *puVar14 = uVar6;
            puVar14[1] = uVar7;
            puVar14[2] = uVar2;
          }
          puVar12 = puVar10 + 3;
          puVar15 = puVar14;
LAB_141687da0:
          puVar11 = puVar15;
          puVar15 = puVar11 + 3;
          if (puVar15 <= puVar10) goto code_r0x000141687da9;
          goto LAB_141687db3;
        }
        for (; puVar12 = puVar14, puVar15 = puVar14, puVar14 < puVar10; puVar10 = puVar10 + -3) {
          while (puVar11 = puVar12, puVar15 = puVar15 + 3, puVar15 <= puVar10) {
            puVar12 = puVar15;
            if (*(int *)(puVar11 + 1) <= *(int *)(puVar15 + 1)) {
              puVar12 = puVar11;
            }
          }
          if (puVar11 != puVar10) {
            uVar6 = puVar10[1];
            uVar7 = *puVar11;
            uVar8 = puVar11[1];
            uVar2 = puVar11[2];
            *puVar11 = *puVar10;
            puVar11[1] = uVar6;
            puVar11[2] = puVar10[2];
            *puVar10 = uVar7;
            puVar10[1] = uVar8;
            puVar10[2] = uVar2;
          }
        }
        goto LAB_141687ee1;
      }
LAB_141687ed2:
      local_348 = lVar1;
      HeapSortInternal<_FModuleManager::UnloadModulesAtShutdown_::_2_::FModulePair,FIdentityFunctor,TDereferenceWrapper<_FModuleManager::UnloadModulesAtShutdown_::_2_::FModulePair,TLess<_FModuleManager::UnloadModulesAtShutdown_::_2_::FModulePair>_>_>
                (puVar15,lVar9,param_3,param_4);
LAB_141687ee1:
      plVar16 = plVar16 + -3;
    } while (&local_338 <= plVar16);
  }
  return;
code_r0x000141687da9:
  if (*(int *)(puVar14 + 1) <= *(int *)(puVar11 + 4)) goto LAB_141687da0;
LAB_141687db3:
  do {
    puVar13 = puVar12;
    puVar12 = puVar13 + -3;
    if (puVar12 <= puVar14) break;
  } while (*(int *)(puVar13 + -2) <= *(int *)(puVar14 + 1));
  if (puVar15 <= puVar12) {
    if (puVar15 != puVar12) {
      uVar3 = *(undefined4 *)((longlong)puVar13 + -0x14);
      uVar4 = *(undefined4 *)(puVar13 + -2);
      uVar5 = *(undefined4 *)((longlong)puVar13 + -0xc);
      uVar6 = *puVar15;
      uVar7 = puVar11[4];
      uVar2 = puVar11[5];
      *(undefined4 *)puVar15 = *(undefined4 *)puVar12;
      *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar3;
      *(undefined4 *)(puVar11 + 4) = uVar4;
      *(undefined4 *)((longlong)puVar11 + 0x24) = uVar5;
      puVar11[5] = puVar13[-1];
      *puVar12 = uVar6;
      puVar13[-2] = uVar7;
      puVar13[-1] = uVar2;
    }
    goto LAB_141687da0;
  }
  if (puVar14 != puVar12) {
    uVar3 = *(undefined4 *)((longlong)puVar13 + -0x14);
    uVar4 = *(undefined4 *)(puVar13 + -2);
    uVar5 = *(undefined4 *)((longlong)puVar13 + -0xc);
    uVar6 = *puVar14;
    uVar7 = puVar14[1];
    uVar2 = puVar14[2];
    *(undefined4 *)puVar14 = *(undefined4 *)puVar12;
    *(undefined4 *)((longlong)puVar14 + 4) = uVar3;
    *(undefined4 *)(puVar14 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar14 + 0xc) = uVar5;
    puVar14[2] = puVar13[-1];
    *puVar12 = uVar6;
    puVar13[-2] = uVar7;
    puVar13[-1] = uVar2;
  }
  local_348._0_4_ = (int)local_348 + -1;
  lVar9 = (longlong)puVar12 + (-0x18 - (longlong)puVar14);
  lVar9 = lVar9 / 6 + (lVar9 >> 0x3f);
  if ((lVar9 >> 2) - (lVar9 >> 0x3f) < ((longlong)puVar10 - (longlong)puVar15) / 0x18) {
    if (puVar15 < puVar10) {
      *plVar16 = (longlong)puVar15;
      plVar16[1] = (longlong)puVar10;
      *(int *)(plVar16 + 2) = (int)local_348;
      plVar16 = plVar16 + 3;
    }
    if (puVar12 <= puVar14 + 3) goto LAB_141687ee1;
    puVar10 = puVar13 + -6;
    puVar15 = puVar14;
  }
  else {
    if (puVar14 + 3 < puVar12) {
      *plVar16 = (longlong)puVar14;
      plVar16[1] = (longlong)(puVar13 + -6);
      *(int *)(plVar16 + 2) = (int)local_348;
      plVar16 = plVar16 + 3;
    }
    if (puVar10 <= puVar15) goto LAB_141687ee1;
  }
  lVar9 = ((longlong)puVar10 - (longlong)puVar15) / 0x18 + 1;
  puVar14 = puVar15;
  if ((int)local_348 == 0) goto LAB_141687ed2;
  goto LAB_141687d50;
}



// FUNCTION 141687fb0 FArchive body=182 status=ok
// SIG undefined FArchive(void)

undefined8 * FArchive::FArchive(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *param_1 = &PTR_FUN_144cd47b0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FEngineVersionBase::FEngineVersionBase(param_1 + 9);
  param_1[1] = param_1 + 2;
  FUN_14168c120(param_1,param_2);
  param_1[0x10] = 0;
  SetSerializedPropertyChain
            (param_1,*(undefined8 *)(param_2 + 0x80),*(undefined8 *)(param_2 + 0x78));
  *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) & 0x7f;
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x88);
  if (*(longlong *)(param_2 + 0x60) != 0) {
    lVar1 = operator_new(0x10);
    if (lVar1 != 0) {
      uVar2 = FCustomVersionContainer::FCustomVersionContainer
                        (lVar1,*(undefined8 *)(param_2 + 0x60));
    }
  }
  param_1[0xc] = uVar2;
  return param_1;
}



// FUNCTION 141688070 FArchive body=96 status=ok
// SIG undefined FArchive(void)

undefined8 * FArchive::FArchive(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144cd47b0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FEngineVersionBase::FEngineVersionBase(param_1 + 9);
  param_1[1] = param_1 + 2;
  param_1[0xc] = 0;
  param_1[0x10] = 0;
  FUN_141693350(param_1);
  return param_1;
}



// FUNCTION 1416880d0 FUN_1416880d0 body=468 status=ok
// SIG undefined FUN_1416880d0(void)

undefined8 * FUN_1416880d0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  uVar3 = 0;
  lVar1 = *(longlong *)(*param_2 + 8);
  *param_1 = &PTR_FUN_144cd47b0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FEngineVersionBase::FEngineVersionBase(param_1 + 9);
  param_1[1] = param_1 + 2;
  FUN_14168c120(param_1,lVar1);
  param_1[0x10] = 0;
  FArchive::SetSerializedPropertyChain
            (param_1,*(undefined8 *)(lVar1 + 0x80),*(undefined8 *)(lVar1 + 0x78));
  *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) & 0x7f;
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(lVar1 + 0x88);
  if ((*(longlong *)(lVar1 + 0x60) != 0) && (lVar2 = operator_new(0x10), lVar2 != 0)) {
    uVar3 = FCustomVersionContainer::FCustomVersionContainer(lVar2,*(undefined8 *)(lVar1 + 0x60));
  }
  param_1[0xc] = uVar3;
  *param_1 = &PTR__scalar_deleting_destructor__144cd4ea8;
  param_1[0x12] = lVar1;
  *(undefined1 *)(param_1 + 0x13) = 1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(byte *)((longlong)param_1 + 0x2a) =
       (*(byte *)(param_1[0x12] + 0x2a) ^ *(byte *)((longlong)param_1 + 0x2a)) & 0x7f ^
       *(byte *)(param_1[0x12] + 0x2a);
  if ((*(byte *)(param_1 + 5) & 8) != 0) {
    if (&local_res8 != param_1 + 0x33) {
      param_1[0x33] = param_2;
      *(undefined1 *)(param_1 + 0x34) = 1;
    }
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_141694ce0(param_1);
    }
  }
  return param_1;
}



// FUNCTION 1416882b0 FArchiveProxy body=199 status=ok
// SIG undefined FArchiveProxy(void)

undefined8 * FArchiveProxy::FArchiveProxy(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *param_1 = &PTR_FUN_144cd47b0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FEngineVersionBase::FEngineVersionBase(param_1 + 9);
  param_1[1] = param_1 + 2;
  FUN_14168c120(param_1,param_2);
  param_1[0x10] = 0;
  FArchive::SetSerializedPropertyChain
            (param_1,*(undefined8 *)(param_2 + 0x80),*(undefined8 *)(param_2 + 0x78));
  *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) & 0x7f;
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x88);
  if (*(longlong *)(param_2 + 0x60) != 0) {
    lVar1 = operator_new(0x10);
    if (lVar1 != 0) {
      uVar2 = FCustomVersionContainer::FCustomVersionContainer
                        (lVar1,*(undefined8 *)(param_2 + 0x60));
    }
  }
  param_1[0xc] = uVar2;
  *param_1 = &PTR__scalar_deleting_destructor__144cd4cb8;
  param_1[0x12] = param_2;
  return param_1;
}



// FUNCTION 141688380 FBinaryArchiveFormatter body=18 status=ok
// SIG undefined FBinaryArchiveFormatter(void)

undefined8 *
FBinaryArchiveFormatter::FBinaryArchiveFormatter(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_144cd4ac8;
  return param_1;
}



// FUNCTION 1416883a0 FUN_1416883a0 body=195 status=ok
// SIG undefined FUN_1416883a0(void)

undefined8 * FUN_1416883a0(undefined8 *param_1,void *param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  byte *pbVar4;
  size_t _Size;
  
  FArchive::FArchive();
  plVar1 = param_1 + 0x12;
  *param_1 = &PTR__scalar_deleting_destructor__144cd5098;
  *plVar1 = 0;
  param_1[0x13] = 0;
  param_1[0x14] = param_3;
  param_1[0x15] = 0;
  _Size = param_3 + 7 >> 3;
  iVar3 = *(int *)(param_1 + 0x13) + (int)_Size;
  *(int *)(param_1 + 0x13) = iVar3;
  if (*(int *)((longlong)param_1 + 0x9c) < iVar3) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x41;
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) | 8;
  if (param_2 != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop((void *)*plVar1,param_2,_Size);
    uVar2 = param_1[0x14];
    if ((uVar2 & 7) != 0) {
      pbVar4 = (byte *)((longlong)(int)((longlong)uVar2 >> 3) + *plVar1);
      *pbVar4 = *pbVar4 & (&DAT_144cd0948)[(uint)uVar2 & 7];
    }
  }
  return param_1;
}



// FUNCTION 141688470 FUN_141688470 body=78 status=ok
// SIG undefined FUN_141688470(void)

undefined8 * FUN_141688470(undefined8 *param_1)

{
  FArchive::FArchive();
  *param_1 = &PTR__scalar_deleting_destructor__144cd5290;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x42;
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) | 8;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  return param_1;
}



// FUNCTION 1416884c0 FUN_1416884c0 body=166 status=ok
// SIG undefined FUN_1416884c0(void)

undefined8 * FUN_1416884c0(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  
  FArchive::FArchive();
  puVar1 = param_1 + 0x12;
  *param_1 = &PTR__scalar_deleting_destructor__144cd5290;
  *puVar1 = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = param_2;
  *(undefined1 *)((longlong)param_1 + 0xb1) = 0;
  iVar2 = (int)(param_2 + 7 >> 3) + *(int *)(param_1 + 0x13);
  *(int *)(param_1 + 0x13) = iVar2;
  if (*(int *)((longlong)param_1 + 0x9c) < iVar2) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(puVar1);
  }
  *(undefined1 *)(param_1 + 0x16) = param_3;
  _guard_xfg_dispatch_icall_nop((void *)*puVar1,0,(longlong)*(int *)(param_1 + 0x13));
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x42;
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) | 8;
  return param_1;
}



// FUNCTION 141688570 FBlock body=436 status=ok
// SIG undefined FBlock(void)

undefined8 * TSingleProducerSingleConsumerList<FCsvEvent,32>::FBlock::FBlock(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x80] = 0;
  return param_1;
}



// FUNCTION 141688730 FCsvCategory body=431 status=ok
// SIG undefined FCsvCategory(void)

uint * FCsvCategory::FCsvCategory(uint *param_1,short *param_2,undefined1 param_3,char param_4)

{
  BOOL BVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  WORD *pWVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  undefined8 local_48;
  uint *local_40;
  longlong local_38 [2];
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (*(short **)(param_1 + 2) != param_2) {
    if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
      uVar4 = 0;
    }
    else {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (param_2[lVar5] != 0);
      uVar4 = (int)lVar5 + 1;
    }
    uVar3 = 0;
    if (param_1[5] != uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 2,uVar4);
      uVar3 = param_1[4];
    }
    param_1[4] = uVar3 + uVar4;
    if ((int)param_1[5] < (int)(uVar3 + uVar4)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 2);
    }
    if (uVar4 != 0) {
      ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 2),param_2,(longlong)(int)uVar4 * 2);
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)FCsvCategoryData::Get();
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  local_res8[0] = FCsvCategoryData::GetCategoryIndex(lpCriticalSection,param_1 + 2);
  if (local_res8[0] == 0xffffffff) {
    if (param_4 == '\0') {
      local_res8[0] = lpCriticalSection[3].LockCount;
      lVar5 = (longlong)(int)local_res8[0];
      lpCriticalSection[3].LockCount = local_res8[0] + 1;
      if (lpCriticalSection[3].RecursionCount < (int)(local_res8[0] + 1)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lpCriticalSection + 3,local_res8[0]);
      }
      pWVar2 = &(lpCriticalSection[3].DebugInfo)->Type + lVar5 * 8;
      *(undefined8 *)pWVar2 = 0;
      *(_RTL_CRITICAL_SECTION **)(pWVar2 + 4) = (_RTL_CRITICAL_SECTION *)0x0;
      if (0x7ff < local_res8[0]) goto LAB_1416888bc;
    }
    else {
      local_res8[0] = 0;
    }
    (&DAT_1468e3840)[(int)local_res8[0]] = param_3;
    FString::operator=(&(lpCriticalSection[3].DebugInfo)->Type + (longlong)(int)local_res8[0] * 8,
                       param_1 + 2);
    local_48 = FString::ToLower(param_1 + 2,local_38);
    local_40 = local_res8;
    FUN_141686ec0(lpCriticalSection + 1,local_res10,&local_48,0);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
LAB_1416888bc:
  uVar4 = local_res8[0];
  LeaveCriticalSection(lpCriticalSection);
  *param_1 = uVar4;
  return param_1;
}



// FUNCTION 1416888e0 FUN_1416888e0 body=777 status=ok
// SIG undefined FUN_1416888e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1416888e0(undefined4 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  puVar5 = (undefined8 *)0x0;
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xc),4000);
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar2 = (undefined8 *)operator_new(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 2;
    *(undefined8 *)((longlong)puVar2 + 0xc) = 0xffffffffffffffff;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar5 = puVar2;
  }
  *(undefined8 **)(param_1 + 0x1e) = puVar5;
  *(undefined8 **)(param_1 + 0x1c) = puVar5;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  FUN_14168ec50(param_1);
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar3[1] = (longlong)FUN_14168c380;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3f090;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af1f0,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
    iVar1 = DAT_1464af1f8;
    lVar4 = (longlong)DAT_1464af1f8;
    DAT_1464af1f8 = DAT_1464af1f8 + 1;
    if (DAT_1464af1fc < DAT_1464af1f8) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af1f0,iVar1);
    }
    puVar5 = (undefined8 *)(lVar4 * 0x10 + _DAT_1464af1f0);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 2;
  }
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar3[1] = (longlong)FUN_14168c480;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3f090;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af208,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
    iVar1 = DAT_1464af210;
    lVar4 = (longlong)DAT_1464af210;
    DAT_1464af210 = DAT_1464af210 + 1;
    if (DAT_1464af214 < DAT_1464af210) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af208,iVar1);
    }
    puVar5 = (undefined8 *)(lVar4 * 0x10 + _DAT_1464af208);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 2;
  }
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar3[1] = (longlong)CsvProfilerBeginFrameRT;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3f090;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af220,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res18);
    iVar1 = DAT_1464af228;
    lVar4 = (longlong)DAT_1464af228;
    DAT_1464af228 = DAT_1464af228 + 1;
    if (DAT_1464af22c < DAT_1464af228) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af220,iVar1);
    }
    puVar5 = (undefined8 *)(lVar4 * 0x10 + _DAT_1464af220);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 2;
  }
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar3[1] = (longlong)&LAB_14168c4a0;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3f090;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af238,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res20);
    iVar1 = DAT_1464af240;
    lVar4 = (longlong)DAT_1464af240;
    DAT_1464af240 = DAT_1464af240 + 1;
    if (DAT_1464af244 < DAT_1464af240) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af238,iVar1);
    }
    puVar5 = (undefined8 *)(lVar4 * 0x10 + _DAT_1464af238);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 2;
  }
  return param_1;
}



// FUNCTION 141688bf0 FUN_141688bf0 body=560 status=ok
// SIG undefined FUN_141688bf0(void)

int * FUN_141688bf0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  LARGE_INTEGER local_res8;
  
  *param_1 = param_2;
  param_1[1] = param_3;
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
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  iVar3 = 0;
  param_1[0x34] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = -1;
  param_1[0x93] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  QueryPerformanceCounter(&local_res8);
  iVar1 = *param_1;
  *(LARGE_INTEGER *)(param_1 + 2) = local_res8;
  if (iVar1 == DAT_1468c21c0) {
    if (*(wchar_t **)(param_1 + 4) != L"GameThread") {
      param_1[6] = 0;
      if (param_1[7] != 0xb) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 4,0xb);
        iVar3 = param_1[6];
      }
      param_1[6] = iVar3 + 0xb;
      if (param_1[7] < iVar3 + 0xb) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 4,iVar3);
      }
      builtin_wcsncpy(*(wchar_t **)(param_1 + 4),L"GameThread",0xb);
    }
  }
  else if (iVar1 == DAT_1468c21c4) {
    if (*(wchar_t **)(param_1 + 4) != L"RenderThread") {
      param_1[6] = 0;
      if (param_1[7] != 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 4,0xd);
        iVar3 = param_1[6];
      }
      param_1[6] = iVar3 + 0xd;
      if (param_1[7] < iVar3 + 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 4,iVar3);
      }
      builtin_wcsncpy(*(wchar_t **)(param_1 + 4),L"RenderThread",0xd);
    }
  }
  else {
    uVar2 = FUN_1415d8270();
    uVar2 = FUN_1415de6b0(uVar2,iVar1);
    FString::operator=(param_1 + 4,uVar2);
  }
  FString::operator=(param_1 + 0xa2,param_1 + 4);
  return param_1;
}



// FUNCTION 141688e20 FCustomVersionContainer body=106 status=ok
// SIG undefined FCustomVersionContainer(void)

undefined8 *
FCustomVersionContainer::FCustomVersionContainer(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
  TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(param_1,iVar1,0);
  ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 << 5);
  return param_1;
}



// FUNCTION 141688e90 FCustomVersionRegistration body=212 status=ok
// SIG undefined FCustomVersionRegistration(void)

undefined8 *
FCustomVersionRegistration::FCustomVersionRegistration
          (undefined8 *param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar9 = (longlong *)FUN_14168e7f0();
  lVar10 = TArray<FCustomVersion,FDefaultAllocator>::FindByKey<FGuid>(plVar9,param_2);
  if (lVar10 == 0) {
    uVar4 = *(undefined4 *)param_2;
    uVar5 = *(undefined4 *)((longlong)param_2 + 4);
    uVar6 = *(undefined4 *)(param_2 + 1);
    uVar7 = *(undefined4 *)((longlong)param_2 + 0xc);
    iVar3 = (int)plVar9[1];
    *(int *)(plVar9 + 1) = iVar3 + 1;
    if (*(int *)((longlong)plVar9 + 0xc) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar9,iVar3);
    }
    lVar10 = *plVar9;
    puVar1 = (undefined4 *)((longlong)iVar3 * 0x20 + lVar10);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    puVar2 = (undefined8 *)((longlong)iVar3 * 0x20 + 0x10 + lVar10);
    *puVar2 = CONCAT44(1,param_3);
    puVar2[1] = param_4;
  }
  else {
    if (*(int *)(lVar10 + 0x10) == param_3) {
      FCustomVersion::GetFriendlyName(lVar10,local_res8);
    }
    *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
  }
  uVar8 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar8;
  return param_1;
}



// FUNCTION 141688f70 FLargeMemoryData body=131 status=ok
// SIG undefined FLargeMemoryData(void)

longlong * FLargeMemoryData::FLargeMemoryData(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  if (param_2 < 1) {
    param_2 = 0;
  }
  param_1[1] = param_2;
  lVar1 = FMemory::QuantizeSize
                    (param_2 + 0x10 +
                     ((longlong)(param_2 * 3 + (ulonglong)((uint)(param_2 * 3 >> 0x3f) & 7)) >> 3),0
                    );
  if (lVar1 < 0x10001) {
    lVar1 = 0x10000;
  }
  param_1[2] = lVar1;
  if (*param_1 != 0) {
    lVar1 = FMemory::Realloc(*param_1,lVar1,0);
    *param_1 = lVar1;
    return param_1;
  }
  lVar1 = FMemory::Malloc(lVar1,0);
  *param_1 = lVar1;
  return param_1;
}



// FUNCTION 141689000 FScopedDebugInfo body=62 status=ok
// SIG undefined FScopedDebugInfo(void)

undefined8 * FScopedDebugInfo::FScopedDebugInfo(undefined8 *param_1,undefined4 param_2)

{
  DWORD dwTlsIndex;
  LPVOID pvVar1;
  
  *(undefined4 *)(param_1 + 1) = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__144cd4c98;
  pvVar1 = TlsGetValue(DAT_1468e3628);
  dwTlsIndex = DAT_1468e3628;
  param_1[2] = pvVar1;
  TlsSetValue(dwTlsIndex,param_1);
  return param_1;
}



// FUNCTION 141689040 FTextFilterString body=56 status=ok
// SIG undefined FTextFilterString(void)

undefined8 * FTextFilterString::FTextFilterString(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  UppercaseInternalString(param_1);
  return param_1;
}



// FUNCTION 141689080 FUN_141689080 body=23 status=ok
// SIG undefined FUN_141689080(void)

undefined8 FUN_141689080(undefined8 param_1)

{
  FString::FString();
  return param_1;
}



// FUNCTION 1416890a0 FTextFilterString body=31 status=ok
// SIG undefined FTextFilterString(void)

undefined8 FTextFilterString::FTextFilterString(undefined8 param_1)

{
  FString::FString();
  UppercaseInternalString(param_1);
  return param_1;
}



// FUNCTION 1416890c0 FUN_1416890c0 body=109 status=ok
// SIG undefined FUN_1416890c0(void)

void FUN_1416890c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  while (lVar1 != 0) {
    *(undefined8 *)(param_1 + 8) = **(undefined8 **)(param_1 + 8);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x28) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar1 + 0x18) != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(lVar1,0x40);
    }
    lVar1 = *(longlong *)(param_1 + 8);
  }
  return;
}



// FUNCTION 141689130 ~TScopeGuard<<lambda_c41349cf4bbd42a5374334b7d7b2d68f>_> body=202 status=ok
// SIG undefined ~TScopeGuard<<lambda_c41349cf4bbd42a5374334b7d7b2d68f>_>(void)

void ScopeExitSupport::TScopeGuard<<lambda_c41349cf4bbd42a5374334b7d7b2d68f>_>::
     ~TScopeGuard<<lambda_c41349cf4bbd42a5374334b7d7b2d68f>_>(undefined8 *param_1)

{
  undefined8 uVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_28;
  undefined8 local_20;
  
  if (*(char *)(param_1 + 2) != '\0') {
    uVar1 = param_1[1];
    local_res10 = *(undefined8 *)*param_1;
    lVar3 = FUN_14168dc80();
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x180));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x180));
    }
    local_28 = &local_res10;
    local_20 = uVar1;
    FUN_1416871a0(lVar3 + 8,local_res8,&local_28,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x180));
    lVar3 = FUN_14168dc80();
    TBaseMulticastDelegate<void,FName,enum_EModuleChangeReason>::Broadcast
              (lVar3 + 0x108,local_res10,2);
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
    }
  }
  return;
}



// FUNCTION 141689200 FUN_141689200 body=392 status=ok
// SIG undefined FUN_141689200(void)

void FUN_141689200(longlong *param_1)

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
      if (bVar4) goto LAB_1416892c1;
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
LAB_1416892c1:
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
      TBaseDelegate<FText>::~TBaseDelegate<FText>((longlong)iStack_1c * 0x20 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
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



// FUNCTION 141689390 ~FArchive body=108 status=ok
// SIG undefined ~FArchive(void)

void FArchive::~FArchive(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)param_1[0xc];
  *param_1 = &PTR_FUN_144cd47b0;
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar1,0x10);
  }
  lVar2 = param_1[0x10];
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x40) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar2,0x58);
  }
  return;
}



// FUNCTION 141689400 ~FArchiveFromStructuredArchive body=208 status=ok
// SIG undefined ~FArchiveFromStructuredArchive(void)

void FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cd4ea8;
  FUN_141694ce0();
  if (*(char *)(param_1 + 0x34) != '\0') {
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  *(undefined4 *)(param_1 + 0x32) = 0;
  if (param_1[0x31] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x29);
  if (param_1[0x27] != 0) {
    FMemory::Free();
  }
  if (param_1[0x23] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x19);
  if (param_1[0x17] != 0) {
    FMemory::Free();
  }
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(param_1);
  return;
}



// FUNCTION 1416894d0 ~FBinaryArchiveFormatter body=11 status=ok
// SIG undefined ~FBinaryArchiveFormatter(void)

void FBinaryArchiveFormatter::~FBinaryArchiveFormatter(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144cd49a0;
  return;
}



// FUNCTION 1416894e0 ~FCustomVersionRegistration body=240 status=ok
// SIG undefined ~FCustomVersionRegistration(void)

void FCustomVersionRegistration::~FCustomVersionRegistration(int *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  plVar3 = (longlong *)FUN_14168e7f0();
  piVar1 = (int *)*plVar3;
  if (piVar1 != piVar1 + (longlong)(int)plVar3[1] * 8) {
    piVar4 = piVar1;
    do {
      if (((piVar4[1] == param_1[1] && piVar4[3] == param_1[3]) && piVar4[2] == param_1[2]) &&
          *param_1 == *piVar4) {
        iVar2 = (int)((longlong)piVar4 - (longlong)piVar1 >> 5);
        goto LAB_14168955c;
      }
      piVar4 = piVar4 + 8;
    } while (piVar4 != piVar1 + (longlong)(int)plVar3[1] * 8);
  }
  iVar2 = -1;
LAB_14168955c:
  piVar1 = piVar1 + (longlong)iVar2 * 8 + 5;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    iVar5 = (int)plVar3[1];
    iVar6 = (iVar5 - iVar2) + -1;
    if (0 < iVar6) {
      iVar6 = 1;
    }
    if (iVar6 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar2 * 0x20 + *plVar3),
                 (void *)((longlong)(iVar5 - iVar6) * 0x20 + *plVar3),(longlong)iVar6 << 5);
      iVar5 = (int)plVar3[1];
    }
    *(int *)(plVar3 + 1) = iVar5 + -1;
    TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(plVar3);
    return;
  }
  return;
}



// FUNCTION 1416895d0 FUN_1416895d0 body=404 status=ok
// SIG undefined FUN_1416895d0(void)

void FUN_1416895d0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cd4bf0;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x35);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if (*(char *)(param_1 + 0x2f) != '\0') {
    *(undefined1 *)(param_1 + 0x2f) = 0;
    if (param_1[0x2d] != 0) {
      FMemory::Free();
    }
  }
  iVar2 = *(int *)(param_1 + 0x2c);
  plVar1 = (longlong *)param_1[0x2b];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[0x2b];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 0x2a);
  plVar1 = (longlong *)param_1[0x29];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[0x29];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x27);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x24);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x21);
  if (*(char *)(param_1 + 0x20) != '\0') {
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x1f) = 0;
    if (param_1[0x1e] != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (param_1 + 0x16);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  FUN_141689200(param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 1,0);
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FSelfRegisteringExec::~FSelfRegisteringExec(param_1);
  return;
}



// FUNCTION 141689770 ~FScopedDebugInfo body=53 status=ok
// SIG undefined ~FScopedDebugInfo(void)

void FScopedDebugInfo::~FScopedDebugInfo(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cd4c98;
  TlsGetValue(DAT_1468e3628);
                    /* WARNING: Could not recover jumptable at 0x00014168979e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue(DAT_1468e3628,(LPVOID)param_1[2]);
  return;
}



// FUNCTION 1416897b0 operator= body=205 status=ok
// SIG undefined operator=(void)

longlong FArchive::operator=(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  *(undefined8 **)(param_1 + 8) = (undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_14168c120();
  SetSerializedPropertyChain
            (param_1,*(undefined8 *)(param_2 + 0x80),*(undefined8 *)(param_2 + 0x78));
  *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) & 0x7f;
  plVar1 = *(longlong **)(param_1 + 0x60);
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
  if (*(longlong *)(param_2 + 0x60) == 0) {
    if (plVar1 == (longlong *)0x0) {
      return param_1;
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar1,0x10);
  }
  else {
    if (plVar1 != (longlong *)0x0) {
      FCustomVersionContainer::operator=(plVar1);
      return param_1;
    }
    lVar2 = operator_new(0x10);
    if (lVar2 != 0) {
      uVar3 = FCustomVersionContainer::FCustomVersionContainer
                        (lVar2,*(undefined8 *)(param_2 + 0x60));
    }
  }
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  return param_1;
}



// FUNCTION 141689880 operator= body=191 status=ok
// SIG undefined operator=(void)

undefined1 * FCsvCaptureCommand::operator=(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)(param_2 + 0x10);
  *param_1 = *param_2;
  plVar2 = (longlong *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  plVar1 = (longlong *)(param_2 + 0x20);
  plVar2 = (longlong *)(param_1 + 0x20);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined8 *)(param_2 + 0x28) = 0;
  }
  param_1[0x30] = param_2[0x30];
  return param_1;
}



// FUNCTION 141689940 operator= body=113 status=ok
// SIG undefined operator=(void)

undefined8 * FCustomVersionContainer::operator=(undefined8 *param_1,undefined8 *param_2)

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
    TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 << 5);
  }
  return param_1;
}



// FUNCTION 1416899c0 FUN_1416899c0 body=74 status=ok
// SIG undefined FUN_1416899c0(void)

undefined8 FUN_1416899c0(undefined8 param_1)

{
  LowLevelFatalErrorHandler
            ("Unknown",0x17e,
             L"FArchive does not support FLazyObjectPtr serialization. Use FArchiveUObject instead."
            );
  FDebug::AssertFailed
            (L"","Unknown",0x17e,
             L"FArchive does not support FLazyObjectPtr serialization. Use FArchiveUObject instead."
            );
  return param_1;
}



// FUNCTION 141689a10 FUN_141689a10 body=74 status=ok
// SIG undefined FUN_141689a10(void)

undefined8 FUN_141689a10(undefined8 param_1)

{
  LowLevelFatalErrorHandler
            ("Unknown",0x18c,
             L"FArchive does not support FSoftObjectPath serialization. Use FArchiveUObject instead."
            );
  FDebug::AssertFailed
            (&DAT_144cd071e,"Unknown",0x18c,
             L"FArchive does not support FSoftObjectPath serialization. Use FArchiveUObject instead."
            );
  return param_1;
}



// FUNCTION 141689a60 FUN_141689a60 body=74 status=ok
// SIG undefined FUN_141689a60(void)

undefined8 FUN_141689a60(undefined8 param_1)

{
  LowLevelFatalErrorHandler
            ("Unknown",0x185,
             L"FArchive does not support FSoftObjectPtr serialization. Use FArchiveUObject instead."
            );
  FDebug::AssertFailed
            ((longlong)L"LoadTimeFile" + 0x1b,"Unknown",0x185,
             L"FArchive does not support FSoftObjectPtr serialization. Use FArchiveUObject instead."
            );
  return param_1;
}



// FUNCTION 141689ab0 FUN_141689ab0 body=74 status=ok
// SIG undefined FUN_141689ab0(void)

undefined8 FUN_141689ab0(undefined8 param_1)

{
  LowLevelFatalErrorHandler
            ("Unknown",0x193,
             L"FArchive does not support FWeakObjectPtr serialization. Use FArchiveUObject instead."
            );
  FDebug::AssertFailed
            (&DAT_144cd071f,"Unknown",0x193,
             L"FArchive does not support FWeakObjectPtr serialization. Use FArchiveUObject instead."
            );
  return param_1;
}



// FUNCTION 141689b00 FUN_141689b00 body=23 status=ok
// SIG undefined FUN_141689b00(void)

undefined8 FUN_141689b00(undefined8 param_1)

{
  FUN_141616da0();
  return param_1;
}



// FUNCTION 141689b20 FUN_141689b20 body=619 status=ok
// SIG undefined FUN_141689b20(void)

longlong * FUN_141689b20(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  int *piVar8;
  char local_48 [4];
  uint local_44;
  ulonglong *local_40;
  undefined8 local_38;
  
  if ((*(byte *)(param_1 + 5) & 8) == 0) {
    (**(code **)(*(longlong *)param_1[0x12] + 0x30))();
    return param_1;
  }
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x29,&local_44,*param_2);
    piVar4 = (int *)0x0;
    if (local_44 != 0xffffffff) {
      piVar4 = (int *)(param_1[0x29] + (longlong)(int)local_44 * 0x18);
    }
    piVar8 = piVar4 + 2;
    if (piVar4 == (int *)0x0) {
      piVar8 = (int *)0x0;
    }
    if (piVar8 == (int *)0x0) {
      local_40 = param_2;
      FUN_140608300(param_1 + 0x29,&local_44,&local_40,0);
      iVar2 = (int)param_1[0x24];
      piVar8 = (int *)(param_1[0x29] + ((longlong)(int)local_44 * 3 + 1) * 8);
      *(int *)(param_1 + 0x24) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0x124) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x23,iVar2);
      }
      *(ulonglong *)(param_1[0x23] + (longlong)iVar2 * 8) = *param_2;
      *piVar8 = iVar2;
    }
    (**(code **)(*param_1 + 0x50))(param_1,piVar8,4);
  }
  else {
    uVar5 = 0;
    local_44 = 0;
    (**(code **)(*param_1 + 0x50))(param_1,&local_44,4);
    plVar6 = (longlong *)param_1[0x27];
    if ((longlong *)param_1[0x27] == (longlong *)0x0) {
      plVar6 = param_1 + 0x25;
    }
    if ((*(uint *)((longlong)plVar6 +
                  (longlong)((int)(local_44 + ((int)local_44 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (local_44 & 0x1f) & 1) == 0) {
      local_48[0] = '\0';
      (**(code **)(**(longlong **)(*(longlong *)param_1[0x33] + 8) + 8))
                (*(longlong **)(*(longlong *)param_1[0x33] + 8),local_48);
      if (local_48[0] == '\0') {
        *param_2 = 0;
      }
      else {
        plVar6 = (longlong *)param_1[0x33];
        if (-1 < (int)local_44) {
          do {
            if ((uint)uVar5 == local_44) {
              plVar3 = *(longlong **)(*plVar6 + 8);
              (**(code **)(*plVar3 + 0x30))(plVar3,param_2);
              *(ulonglong *)(param_1[0x23] + (longlong)(int)local_44 * 8) = *param_2;
            }
            else {
              local_40 = (ulonglong *)0x0;
              local_38 = 0;
              FUN_14158ce90(*(undefined8 *)(*plVar6 + 8),&local_40);
              if (local_40 != (ulonglong *)0x0) {
                FMemory::Free();
              }
            }
            uVar7 = (uint)uVar5 + 1;
            uVar5 = (ulonglong)uVar7;
          } while ((int)uVar7 <= (int)local_44);
        }
        uVar5 = *param_2;
      }
      *(ulonglong *)(param_1[0x23] + (longlong)(int)local_44 * 8) = uVar5;
      plVar6 = (longlong *)param_1[0x27];
      if ((longlong *)param_1[0x27] == (longlong *)0x0) {
        plVar6 = param_1 + 0x25;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(local_44 + ((int)local_44 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)local_44 & 0x1f);
    }
    else {
      *param_2 = *(ulonglong *)(param_1[0x23] + (longlong)(int)local_44 * 8);
    }
  }
  return param_1;
}



// FUNCTION 141689d90 FUN_141689d90 body=400 status=ok
// SIG undefined FUN_141689d90(void)

longlong * FUN_141689d90(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  int *piVar6;
  int local_res8 [2];
  longlong *local_res18;
  
  if ((*(byte *)(param_1 + 5) & 8) == 0) {
    (**(code **)(*(longlong *)param_1[0x12] + 0x40))();
    return param_1;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    local_res8[0] = 0;
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    *param_2 = *(longlong *)(param_1[0x17] + (longlong)local_res8[0] * 8);
    return param_1;
  }
  lVar2 = *param_2;
  plVar1 = param_1 + 0x19;
  if ((int)param_1[0x1a] != *(int *)((longlong)param_1 + 0xfc)) {
    plVar4 = (longlong *)param_1[0x21];
    if ((longlong *)param_1[0x21] == (longlong *)0x0) {
      plVar4 = param_1 + 0x20;
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                    (longlong)(int)param_1[0x22] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)(*plVar1 + (longlong)iVar3 * 0x18);
        if (*(longlong *)(*plVar1 + (longlong)iVar3 * 0x18) == lVar2) {
          if (iVar3 != -1) goto LAB_141689e63;
          break;
        }
        iVar3 = piVar5[4];
      } while (iVar3 != -1);
    }
  }
  piVar5 = (int *)0x0;
LAB_141689e63:
  piVar6 = piVar5 + 2;
  if (piVar5 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  if (piVar6 == (int *)0x0) {
    local_res18 = param_2;
    TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
    Emplace<TKeyInitializer<FName_const_&>_>(plVar1,local_res8,&local_res18,0);
    iVar3 = (int)param_1[0x18];
    piVar6 = (int *)(*plVar1 + ((longlong)local_res8[0] * 3 + 1) * 8);
    *(int *)(param_1 + 0x18) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0xc4) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x17,iVar3);
    }
    *(longlong *)(param_1[0x17] + (longlong)iVar3 * 8) = *param_2;
    *piVar6 = iVar3;
  }
  (**(code **)(*param_1 + 0x50))(param_1,piVar6,4);
  return param_1;
}



// FUNCTION 141689f20 FUN_141689f20 body=51 status=ok
// SIG undefined FUN_141689f20(void)

longlong FUN_141689f20(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 8) != 0) {
    FUN_141616da0();
    return param_1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x38))();
  return param_1;
}



// FUNCTION 141689f60 FUN_141689f60 body=31 status=ok
// SIG undefined FUN_141689f60(void)

longlong FUN_141689f60(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x40))();
  return param_1;
}



// FUNCTION 141689f80 operator<< body=147 status=ok
// SIG undefined operator<<(void)

longlong FNameAsStringProxyArchive::operator<<(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined1 local_res8 [8];
  undefined2 *local_18;
  undefined8 local_10;
  
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    FName::ToString(param_2,&local_18);
    FUN_14158ce90(*(undefined8 *)(param_1 + 0x90),&local_18);
  }
  else {
    local_18 = (undefined2 *)0x0;
    local_10 = 0;
    FUN_14158ce90(*(undefined8 *)(param_1 + 0x90));
    puVar2 = &DAT_143f3eda8;
    if ((int)local_10 != 0) {
      puVar2 = local_18;
    }
    puVar1 = (undefined8 *)FName::FName(local_res8,puVar2,1);
    *param_2 = *puVar1;
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14168a020 FUN_14168a020 body=141 status=ok
// SIG undefined FUN_14168a020(void)

void FUN_14168a020(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(param_2 + 0x80);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
      *(undefined8 *)(param_2 + 0x80) = 0;
    }
    if (*(longlong *)(param_2 + 0x88) != 0) {
      FMemory::Free();
    }
    FUN_1416890c0(param_2 + 0x70);
    if (*(longlong *)(param_2 + 0x58) != 0) {
      FMemory::Free();
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x30));
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(param_2,0xa0);
  }
  return;
}



// FUNCTION 14168a0b0 FUN_14168a0b0 body=52 status=ok
// SIG undefined FUN_14168a0b0(void)

undefined8 FUN_14168a0b0(undefined8 param_1,ulonglong param_2)

{
  FArchive::~FArchive();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 14168a0f0 `scalar_deleting_destructor' body=243 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FArchiveFromStructuredArchive::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cd4ea8;
  FUN_141694ce0();
  if (*(char *)(param_1 + 0x34) != '\0') {
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  *(undefined4 *)(param_1 + 0x32) = 0;
  if (param_1[0x31] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x29);
  if (param_1[0x27] != 0) {
    FMemory::Free();
  }
  if (param_1[0x23] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x19);
  if (param_1[0x17] != 0) {
    FMemory::Free();
  }
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a8);
  }
  return param_1;
}



// FUNCTION 14168a1f0 FUN_14168a1f0 body=43 status=ok
// SIG undefined FUN_14168a1f0(void)

undefined8 * FUN_14168a1f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144cd49a0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14168a220 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FBitReader::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14168a270 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FBitWriter::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 14168a2c0 `scalar_deleting_destructor' body=113 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FCsvProfilerProcessingThread::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_IsPromotedBuild_144cd4c38;
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
    plVar1 = (longlong *)param_1[2];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
    param_1[2] = 0;
  }
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14168a340 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessPassThroughPS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1416895d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c0);
  }
  return param_1;
}



// FUNCTION 14168a380 `scalar_deleting_destructor' body=85 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FScopedDebugInfo::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cd4c98;
  TlsGetValue(DAT_1468e3628);
  TlsSetValue(DAT_1468e3628,(LPVOID)param_1[2]);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14168a3e0 FUN_14168a3e0 body=43 status=ok
// SIG undefined FUN_14168a3e0(void)

undefined8 * FUN_14168a3e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144cd49a0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14168a410 FUN_14168a410 body=766 status=ok
// SIG undefined FUN_14168a410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14168a410(undefined2 *param_1,wchar_t *param_2,char param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  wchar_t **ppwVar14;
  longlong *plVar15;
  uint uVar16;
  wchar_t *pwVar17;
  undefined1 auStack_a8 [32];
  char local_88;
  undefined2 *local_80;
  undefined8 local_78;
  wchar_t *local_70;
  undefined8 local_68;
  wchar_t *local_60;
  undefined8 local_58;
  wchar_t *local_50;
  wchar_t *local_48 [2];
  
  local_48[0] = (wchar_t *)(DAT_1468387a8 ^ (ulonglong)auStack_a8);
  pwVar12 = (wchar_t *)0x0;
  uVar16 = 0;
  local_88 = param_3;
  local_80 = param_1;
  if (param_3 == '\0') {
    local_70 = (wchar_t *)0x0;
    local_68 = (wchar_t *)((ulonglong)local_68 & 0xffffffff);
    pwVar13 = pwVar12;
    if ((param_2 != (wchar_t *)0x0) && (*param_2 != L'\0')) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (param_2[lVar10] != L'\0');
      uVar9 = (int)lVar10 + 1;
      local_68 = (wchar_t *)(ulonglong)uVar9;
      uVar16 = uVar9;
      if (0 < (int)uVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
        uVar16 = (uint)local_68;
      }
      pwVar13 = local_70;
      FGenericPlatformString::Memcpy(local_70,param_2,(longlong)(int)uVar9 * 2);
    }
    plVar15 = (longlong *)(param_1 + 0xa4);
    pwVar11 = (wchar_t *)*plVar15;
    pwVar17 = pwVar11 + (longlong)*(int *)(param_1 + 0xa8) * 8;
    local_60 = pwVar11;
    for (; pwVar11 != pwVar17; pwVar11 = pwVar11 + 8) {
      pwVar6 = L"";
      if (uVar16 != 0) {
        pwVar6 = pwVar13;
      }
      if (*(int *)(pwVar11 + 4) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = *(undefined2 **)pwVar11;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,pwVar6);
      if (iVar3 == 0) {
        if ((int)((longlong)pwVar11 - (longlong)local_60 >> 4) != -1) {
          if (pwVar13 != (wchar_t *)0x0) {
            FMemory::Free(pwVar13);
          }
          goto LAB_14168a5cb;
        }
        break;
      }
    }
    iVar3 = *(int *)(param_1 + 0xa8);
    *(int *)(param_1 + 0xa8) = iVar3 + 1;
    if (*(int *)(param_1 + 0xaa) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar3);
    }
    puVar4 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar15);
    *puVar4 = pwVar13;
    *(uint *)(puVar4 + 1) = uVar16;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_68._4_4_;
  }
  else {
    local_60 = (wchar_t *)0x0;
    local_58 = (wchar_t *)((ulonglong)local_58 & 0xffffffff);
    uVar9 = 0;
    pwVar13 = pwVar12;
    if ((param_2 != (wchar_t *)0x0) && (pwVar13 = (wchar_t *)0x0, *param_2 != L'\0')) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (param_2[lVar10] != L'\0');
      uVar8 = (int)lVar10 + 1;
      local_58 = (wchar_t *)(ulonglong)uVar8;
      uVar9 = uVar8;
      uVar16 = 0;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
        uVar9 = (uint)local_58;
        uVar16 = local_58._4_4_;
      }
      pwVar13 = local_60;
      FGenericPlatformString::Memcpy(local_60,param_2,(longlong)(int)uVar8 * 2);
    }
    iVar3 = *(int *)(param_1 + 0xb0);
    *(int *)(param_1 + 0xb0) = iVar3 + 1;
    if (*(int *)(param_1 + 0xb2) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xac,iVar3);
    }
    puVar4 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0xac));
    *puVar4 = pwVar13;
    *(uint *)(puVar4 + 1) = uVar9;
    *(uint *)((longlong)puVar4 + 0xc) = uVar16;
  }
LAB_14168a5cb:
  FWindowsPlatformProcess::AddDllDirectory(param_2);
  puVar5 = local_80;
  cVar1 = local_88;
  local_60 = L"NoRedist";
  ppwVar14 = &local_60;
  local_58 = L"NotForLicensees";
  local_50 = L"CarefullyRedist";
  pwVar13 = (wchar_t *)0x3;
  if (local_48 < &local_60) {
    pwVar13 = pwVar12;
  }
  do {
    local_68 = *ppwVar14;
    local_80 = (undefined2 *)0x0;
    local_78 = 0;
    local_70 = param_2;
    FPaths::CombineInternal(&local_80,&local_70,2);
    cVar2 = FPaths::DirectoryExists(&local_80);
    if (cVar2 != '\0') {
      puVar7 = &DAT_143f3eda8;
      if ((int)local_78 != 0) {
        puVar7 = local_80;
      }
      FUN_14168a410(puVar5,puVar7,cVar1);
    }
    if (local_80 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    ppwVar14 = ppwVar14 + 1;
    pwVar12 = (wchar_t *)((longlong)pwVar12 + 1);
  } while (pwVar12 != pwVar13);
  if (*(char *)(puVar5 + 0x80) != '\0') {
    *(undefined1 *)(puVar5 + 0x80) = 0;
    *(undefined4 *)(puVar5 + 0x7c) = 0;
    if (*(longlong *)(puVar5 + 0x78) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (puVar5 + 0x58);
  }
  return;
}



// FUNCTION 14168a710 AddCustomStatInternal body=132 status=ok
// SIG undefined AddCustomStatInternal(void)

void FCsvProfilerThreadData::AddCustomStatInternal
               (longlong param_1,LARGE_INTEGER param_2,DWORD param_3,DWORD param_4,
               undefined1 param_5,byte param_6)

{
  LARGE_INTEGER *pLVar1;
  LARGE_INTEGER local_res8;
  
  pLVar1 = (LARGE_INTEGER *)
           TSingleProducerSingleConsumerList<FCsvCustomStat,256>::ReserveElement(param_1 + 0xd8);
  QueryPerformanceCounter(&local_res8);
  *(undefined1 *)((longlong)pLVar1 + 0x14) = param_5;
  *pLVar1 = local_res8;
  *(byte *)((longlong)pLVar1 + 0x15) = param_6 | 0xc;
  pLVar1[1] = param_2;
  pLVar1[2].s.LowPart = param_3;
  pLVar1[3].s.LowPart = param_4;
  *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + 1;
  return;
}



// FUNCTION 14168a7a0 AddCustomStatInternal body=148 status=ok
// SIG undefined AddCustomStatInternal(void)

void FCsvProfilerThreadData::AddCustomStatInternal
               (longlong param_1,LARGE_INTEGER param_2,DWORD param_3,DWORD param_4,
               undefined1 param_5,byte param_6)

{
  LARGE_INTEGER *pLVar1;
  LARGE_INTEGER local_res8;
  
  pLVar1 = (LARGE_INTEGER *)
           TSingleProducerSingleConsumerList<FCsvCustomStat,256>::ReserveElement(param_1 + 0xd8);
  QueryPerformanceCounter(&local_res8);
  *(undefined1 *)((longlong)pLVar1 + 0x14) = param_5;
  pLVar1[3].s.LowPart = param_4;
  *(byte *)((longlong)pLVar1 + 0x15) = param_6 | 4;
  *pLVar1 = local_res8;
  pLVar1[1] = param_2;
  pLVar1[2].s.LowPart = param_3;
  *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + 1;
  return;
}



// FUNCTION 14168a840 AddMeasurement body=150 status=ok
// SIG undefined AddMeasurement(void)

void FHistogram::AddMeasurement(undefined8 *param_1,double param_2,double param_3)

{
  int iVar1;
  double *pdVar2;
  double *pdVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  
  iVar1 = *(int *)(param_1 + 1);
  if ((iVar1 != 0) && (pdVar2 = (double *)*param_1, *pdVar2 <= param_2)) {
    if (0 < iVar1 + -1) {
      lVar4 = 0;
      pdVar3 = pdVar2;
      do {
        if (param_2 < pdVar3[1]) {
          *(int *)(pdVar3 + 3) = *(int *)(pdVar3 + 3) + 1;
          param_1[3] = param_1[3] + 1;
          pdVar3[2] = param_3 + pdVar3[2];
          goto LAB_14168a897;
        }
        lVar4 = lVar4 + 1;
        pdVar3 = pdVar3 + 4;
      } while (lVar4 < iVar1 + -1);
    }
    *(int *)(pdVar2 + (longlong)iVar1 * 4 + -1) = *(int *)(pdVar2 + (longlong)iVar1 * 4 + -1) + 1;
    param_1[3] = param_1[3] + 1;
    pdVar2[(longlong)iVar1 * 4 + -2] = param_3 + pdVar2[(longlong)iVar1 * 4 + -2];
LAB_14168a897:
    dVar5 = param_3;
    if ((double)param_1[4] <= param_3) {
      dVar5 = (double)param_1[4];
    }
    param_1[2] = param_3 + (double)param_1[2];
    dVar6 = (double)param_1[5];
    if ((double)param_1[5] <= param_3) {
      dVar6 = param_3;
    }
    param_1[4] = dVar5;
    param_1[5] = dVar6;
  }
  return;
}



// FUNCTION 14168a8e0 AddModule body=415 status=ok
// SIG undefined AddModule(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FModuleManager::AddModule(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong local_res10;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong **pplStack_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  plVar5 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
      lVar3 = *(longlong *)(param_1 + 0x48);
      if (*(longlong *)(param_1 + 0x48) == 0) {
        lVar3 = param_1 + 0x40;
      }
      iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                               (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
      if (iVar2 != -1) {
        do {
          if (*(longlong *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 8)) == param_2) {
            if (iVar2 != -1) {
              return;
            }
            break;
          }
          iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + *(longlong *)(param_1 + 8));
        } while (iVar2 != -1);
      }
    }
    local_res10 = param_2;
    plVar4 = (longlong *)operator_new(0x38);
    plVar6 = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = 0;
      plVar4[3] = 0;
      plVar4[4] = 0;
      plVar4[5] = 0;
      *(undefined1 *)(plVar4 + 6) = 0;
      *(int *)((longlong)plVar4 + 0x34) = DAT_1464aff70;
      DAT_1464aff70 = DAT_1464aff70 + 1;
      plVar6 = plVar4;
    }
    local_38 = plVar6;
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *(undefined4 *)(plVar4 + 1) = 1;
      *plVar4 = (longlong)&PTR_DestroyObject_144cd54a8;
      *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
      plVar4[2] = (longlong)plVar6;
      plVar5 = plVar4;
    }
    local_30 = plVar5;
    SharedPointerInternals::EnableSharedFromThis(&local_38,plVar6,plVar6);
    local_28 = &local_res10;
    local_18 = 1;
    pplStack_20 = &local_38;
    ScopeExitSupport::TScopeGuard<<lambda_c41349cf4bbd42a5374334b7d7b2d68f>_>::
    ~TScopeGuard<<lambda_c41349cf4bbd42a5374334b7d7b2d68f>_>(&local_28);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_30 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_30)(local_30);
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
  return;
}



// FUNCTION 14168aa80 AddTimestamp body=201 status=ok
// SIG undefined AddTimestamp(void)

void FCsvProfilerThreadData::AddTimestamp
               (longlong param_1,LARGE_INTEGER param_2,DWORD param_3,char param_4)

{
  LARGE_INTEGER *pLVar1;
  ulonglong uVar2;
  longlong lVar3;
  LARGE_INTEGER local_res8;
  
  uVar2 = *(ulonglong *)(param_1 + 0xc0);
  if ((char)uVar2 == '\0') {
    lVar3 = operator_new(0x1808);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      *(undefined8 *)(lVar3 + 0x1800) = 0;
    }
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + 1;
    if (*(longlong *)(param_1 + 0x40) == 0) {
      *(longlong *)(param_1 + 0x38) = lVar3;
      *(longlong *)(param_1 + 0x40) = lVar3;
    }
    else {
      *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x1800) = lVar3;
      *(longlong *)(param_1 + 0x40) = lVar3;
    }
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x40);
  }
  pLVar1 = (LARGE_INTEGER *)(lVar3 + (uVar2 & 0xff) * 0x18);
  QueryPerformanceCounter(&local_res8);
  *pLVar1 = local_res8;
  *(char *)((longlong)pLVar1 + 0x15) = param_4 * '\x02';
  pLVar1[1] = param_2;
  pLVar1[2].s.LowPart = param_3;
  *(longlong *)(param_1 + 0xc0) = *(longlong *)(param_1 + 0xc0) + 1;
  return;
}



// FUNCTION 14168ab50 AppendDataFromChecked body=172 status=ok
// SIG undefined AppendDataFromChecked(void)

void FBitReader::AppendDataFromChecked(longlong param_1,void *param_2,uint param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  
  plVar1 = (longlong *)(param_1 + 0x90);
  uVar5 = param_3 + 7 >> 3;
  iVar3 = *(int *)(param_1 + 0x98) + uVar5;
  *(int *)(param_1 + 0x98) = iVar3;
  if (*(int *)(param_1 + 0x9c) < iVar3) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)(int)(*(longlong *)(param_1 + 0xa0) >> 3) + *plVar1),param_2,
             (ulonglong)uVar5);
  *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + (ulonglong)param_3;
  uVar2 = *(ulonglong *)(param_1 + 0xa0);
  if ((uVar2 & 7) != 0) {
    pbVar4 = (byte *)((longlong)(int)((longlong)uVar2 >> 3) + *plVar1);
    *pbVar4 = *pbVar4 & (&DAT_144cd0948)[(uint)uVar2 & 7];
  }
  return;
}



// FUNCTION 14168ac00 Assign body=85 status=ok
// SIG undefined Assign(void)

void FTimespan::Assign(longlong *param_1,int param_2,int param_3,int param_4,int param_5,int param_6
                      )

{
  longlong lVar1;
  
  lVar1 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((longlong)param_6),8) + (longlong)param_6;
  *param_1 = ((lVar1 >> 6) +
             ((((longlong)param_3 + (longlong)param_2 * 0x18) * 0x3c + (longlong)param_4) * 0x3c +
             (longlong)param_5) * 10000000) - (lVar1 >> 0x3f);
  return;
}



// FUNCTION 14168acb0 BeginCapture body=128 status=ok
// SIG undefined BeginCapture(void)

void FCsvProfiler::BeginCapture
               (longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined1 param_5)

{
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  longlong local_38 [2];
  longlong local_28 [2];
  undefined1 local_18;
  
  local_48[0] = 0;
  local_44 = DAT_1468e383c;
  local_40 = param_2;
  FString::FString(local_38,param_3);
  FString::FString(local_28,param_4);
  local_18 = param_5;
  FUN_14168cf90(param_1 + 0x70,local_48);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14168ad30 FUN_14168ad30 body=1754 status=ok
// SIG undefined FUN_14168ad30(void)

void FUN_14168ad30(undefined4 *param_1)

{
  void *_Dst;
  LARGE_INTEGER *pLVar1;
  void *_Src;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  void **ppvVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  void *pvVar16;
  undefined2 *puVar17;
  int iVar18;
  void *pvVar19;
  bool bVar20;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  undefined1 local_res20 [8];
  void *local_128;
  undefined8 local_120;
  void *local_118;
  undefined8 local_110;
  void *local_108;
  undefined8 local_100;
  void *local_f8;
  undefined8 local_f0;
  char local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  ulonglong local_c0;
  undefined1 local_b8;
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  void *local_a0;
  int local_98;
  int local_94;
  void *local_90;
  int local_88;
  int iStack_84;
  void *local_80 [2];
  longlong local_70 [2];
  longlong local_60 [4];
  
  pvVar19 = (void *)0x0;
  if (*(char *)((longlong)param_1 + 10) != '\0') {
    *(undefined1 *)((longlong)param_1 + 10) = 0;
    FUN_14168cc20();
  }
  local_e8 = '\x02';
  local_e4 = 0xffffffff;
  uStack_e0 = 0xffffffff;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  if (**(longlong **)(param_1 + 0x1e) != 0) {
    lVar15 = **(longlong **)(param_1 + 0x1e);
    local_e8 = *(char *)(lVar15 + 8);
    local_e4 = *(undefined4 *)(lVar15 + 0xc);
    uStack_e0 = *(undefined4 *)(lVar15 + 0x10);
    FString::operator=(&local_d8,lVar15 + 0x18);
    FString::operator=(&local_c8,lVar15 + 0x28);
    local_b8 = *(undefined1 *)(lVar15 + 0x38);
    if ((local_e8 == '\0') &&
       (TQueue<FCsvCaptureCommand,1>::Dequeue(param_1 + 0x1c), *(char *)(param_1 + 2) == '\0')) {
      *(undefined1 *)(param_1 + 2) = 1;
      *param_1 = uStack_e0;
      param_1[1] = 0;
      QueryPerformanceCounter(&local_res10);
      lVar15 = (longlong)(int)local_d0;
      *(LARGE_INTEGER *)(param_1 + 4) = local_res10;
      if ((int)local_d0 < 2) {
        plVar6 = (longlong *)FPaths::ProfilingDir(local_70);
        lVar15 = plVar6[1];
        local_128 = (void *)*plVar6;
        *plVar6 = 0;
        local_120._0_4_ = (int)plVar6[1];
        local_120._4_4_ = *(int *)((longlong)plVar6 + 0xc);
        plVar6[1] = 0;
        iVar12 = (int)local_120;
        if (local_120._4_4_ < (int)((5 - (uint)((int)lVar15 != 0)) + (int)local_120)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_128);
          iVar12 = (int)local_120;
        }
        local_120._0_4_ = (5 - (uint)(iVar12 != 0)) + iVar12;
        local_90 = local_128;
        if (local_120._4_4_ < (int)local_120) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,iVar12);
          local_90 = local_128;
        }
        lVar15 = (longlong)iVar12 - (ulonglong)(iVar12 != 0);
        local_128 = (void *)0x0;
        local_88 = (int)local_120;
        bVar3 = true;
        bVar2 = true;
        bVar20 = false;
        iStack_84 = local_120._4_4_;
        local_120 = 0;
        builtin_wcsncpy((wchar_t *)((longlong)local_90 + lVar15 * 2),L"CSV/",4);
        *(undefined2 *)((longlong)local_90 + lVar15 * 2 + 8) = 0;
        ppvVar9 = &local_90;
      }
      else {
        local_108 = (void *)0x0;
        local_100._0_4_ = (int)local_d0;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                  (&local_108,(2 - (uint)((int)local_d0 != 0)) + (int)local_d0,0);
        pvVar16 = local_108;
        _guard_xfg_dispatch_icall_nop(local_108,local_d8,lVar15 * 2);
        iVar12 = (int)local_100;
        lVar15 = (longlong)(int)local_100;
        local_100._0_4_ = (2 - (uint)((int)local_100 != 0)) + (int)local_100;
        if (local_100._4_4_ < (int)local_100) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,iVar12);
          pvVar16 = local_108;
        }
        local_a0 = pvVar16;
        local_108 = (void *)0x0;
        local_98 = (int)local_100;
        local_94 = local_100._4_4_;
        local_100 = 0;
        puVar17 = (undefined2 *)((longlong)pvVar16 + (lVar15 - (ulonglong)(iVar12 != 0)) * 2);
        bVar3 = false;
        bVar2 = false;
        bVar20 = true;
        *puVar17 = 0x2f;
        ppvVar9 = &local_a0;
        puVar17[1] = 0;
      }
      pvVar16 = *ppvVar9;
      *ppvVar9 = (void *)0x0;
      iVar12 = *(int *)(ppvVar9 + 1);
      ppvVar9[1] = (void *)0x0;
      if ((bVar20) && (local_a0 != (void *)0x0)) {
        FMemory::Free();
      }
      if ((bVar2) && (local_90 != (void *)0x0)) {
        FMemory::Free();
      }
      if ((bVar3) && (local_70[0] != 0)) {
        FMemory::Free();
      }
      lVar15 = (longlong)(int)local_c0;
      if ((int)local_c0 < 2) {
        uVar7 = FDateTime::Now(local_res20);
        puVar8 = (undefined8 *)FUN_14165adf0(uVar7,local_60,L"%Y%m%d_%H%M%S");
        if (*(int *)(puVar8 + 1) == 0) {
          puVar17 = &DAT_143f3eda8;
        }
        else {
          puVar17 = (undefined2 *)*puVar8;
        }
        FString::PrintfImpl(local_80,L"Profile(%s).csv",puVar17);
        ppvVar9 = local_80;
        bVar3 = true;
        bVar2 = true;
        bVar20 = false;
      }
      else {
        local_b0 = (void *)0x0;
        local_a8 = (int)local_c0;
        if ((int)local_c0 == 0) {
          local_a4 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b0,local_c0 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_b0,local_c8,lVar15 * 2);
        }
        ppvVar9 = &local_b0;
        bVar3 = false;
        bVar2 = false;
        bVar20 = true;
      }
      _Src = *ppvVar9;
      *ppvVar9 = (void *)0x0;
      iVar5 = *(int *)(ppvVar9 + 1);
      ppvVar9[1] = (void *)0x0;
      if ((bVar20) && (local_b0 != (void *)0x0)) {
        FMemory::Free();
      }
      if ((bVar2) && (local_80[0] != (void *)0x0)) {
        FMemory::Free();
      }
      if ((bVar3) && (local_60[0] != 0)) {
        FMemory::Free();
      }
      if (iVar12 < 2) {
        local_f8 = (void *)0x0;
        local_f0 = CONCAT44(local_f0._4_4_,iVar5);
        if (iVar5 == 0) {
          local_f0 = 0;
          iVar5 = 0;
          iVar18 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f8,iVar5,0);
          pvVar19 = local_f8;
          _guard_xfg_dispatch_icall_nop(local_f8,_Src,(longlong)iVar5 * 2);
          iVar5 = (int)local_f0;
          iVar18 = local_f0._4_4_;
        }
      }
      else {
        iVar13 = iVar5 + -1;
        if (iVar5 == 0) {
          iVar13 = 0;
        }
        if ((iVar12 != 0) || (iVar5 = 1, iVar13 == 0)) {
          iVar5 = 0;
        }
        local_118 = (void *)0x0;
        if ((iVar12 == 0) && (iVar5 + iVar13 == 0)) {
          local_110._4_4_ = 0;
        }
        else {
          local_110._0_4_ = iVar12;
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_118,iVar12 + iVar5 + iVar13,0);
          pvVar19 = local_118;
          _guard_xfg_dispatch_icall_nop(local_118,pvVar16,(longlong)iVar12 * 2);
          iVar12 = (int)local_110;
        }
        iVar18 = local_110._4_4_;
        iVar5 = iVar12;
        if (iVar13 != 0) {
          local_110._0_4_ = iVar13 + (uint)(iVar12 == 0) + iVar12;
          if (local_110._4_4_ < (int)local_110) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,iVar12);
            pvVar19 = local_118;
          }
          iVar18 = local_110._4_4_;
          iVar5 = (int)local_110;
          _Dst = (void *)((longlong)pvVar19 + ((longlong)iVar12 - (ulonglong)(iVar12 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar13 * 2);
          *(undefined2 *)((longlong)iVar13 * 2 + (longlong)_Dst) = 0;
        }
        local_118 = (void *)0x0;
        local_f0 = CONCAT44(iVar18,iVar5);
        local_110 = 0;
        local_f8 = pvVar19;
      }
      ppvVar9 = (void **)(param_1 + 0x16);
      if (ppvVar9 == &local_f8) {
        if (pvVar19 != (void *)0x0) {
          FMemory::Free(pvVar19);
        }
      }
      else {
        if (*ppvVar9 != (void *)0x0) {
          FMemory::Free();
        }
        *ppvVar9 = pvVar19;
        local_f8 = (void *)0x0;
        local_f0 = 0;
        param_1[0x18] = iVar5;
        param_1[0x19] = iVar18;
      }
      puVar8 = (undefined8 *)0x0;
      bVar20 = DAT_1464aff88 != '\0';
      *(undefined1 *)((longlong)param_1 + 0xb) = local_b8;
      if ((bVar20) && (*(longlong *)(param_1 + 0x20) == 0)) {
        puVar10 = (undefined8 *)operator_new(0x20);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = &PTR_IsPromotedBuild_144cd4c38;
          *(undefined4 *)(puVar10 + 1) = 0;
          puVar10[3] = param_1;
          uVar7 = FUN_1415d42a0(puVar10,L"CSVProfiler",0,4,0xffffffffffffffff);
          puVar10[2] = uVar7;
          puVar8 = puVar10;
        }
        *(undefined8 **)(param_1 + 0x20) = puVar8;
      }
      if (_Src != (void *)0x0) {
        FMemory::Free(_Src);
      }
      if (pvVar16 != (void *)0x0) {
        FMemory::Free(pvVar16);
      }
    }
  }
  lVar15 = 0;
  if (*(char *)(param_1 + 2) != '\0') {
    uVar14 = (uint)DAT_1468e36b8;
    lVar11 = DAT_1468e3630;
    lVar4 = DAT_1468e3638;
    if ((DAT_1468e36b8 & 0xf) == 0) {
      lVar11 = operator_new(0x88);
      if (lVar11 != 0) {
        *(undefined8 *)(lVar11 + 0x80) = 0;
        lVar15 = lVar11;
      }
      DAT_1468e36c8 = DAT_1468e36c8 + 1;
      lVar11 = lVar15;
      lVar4 = lVar15;
      if (DAT_1468e3638 != 0) {
        *(longlong *)(DAT_1468e3638 + 0x80) = lVar15;
        lVar11 = DAT_1468e3630;
      }
    }
    DAT_1468e3638 = lVar4;
    DAT_1468e3630 = lVar11;
    pLVar1 = (LARGE_INTEGER *)(DAT_1468e3638 + (ulonglong)(uVar14 & 0xf) * 8);
    QueryPerformanceCounter(&local_res18);
    *pLVar1 = local_res18;
    DAT_1468e36b8 = DAT_1468e36b8 + 1;
  }
  if (DAT_1468e362d != '\0') {
    CSVTest();
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14168b410 BeginStat body=70 status=ok
// SIG undefined BeginStat(void)

void FCsvProfiler::BeginStat(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 8) != '\0') && ((&DAT_1468e3840)[param_3] != '\0')) {
    uVar1 = FUN_14168ec50();
    FCsvProfilerThreadData::AddTimestamp(uVar1,param_2,param_3,1);
  }
  return;
}



// FUNCTION 14168b460 ByteSwap body=67 status=ok
// SIG undefined ByteSwap(void)

void FArchive::ByteSwap(undefined8 param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  if (0 < (longlong)param_3 + -1) {
    puVar4 = param_2 + (longlong)param_3 + -1;
    puVar3 = param_2;
    do {
      puVar1 = puVar3 + 1;
      uVar2 = *puVar4;
      *puVar4 = *puVar3;
      puVar4 = puVar4 + -1;
      *puVar3 = uVar2;
      puVar3 = puVar1;
    } while (-(longlong)param_2 + (longlong)puVar1 < -(longlong)param_2 + (longlong)puVar4);
  }
  return;
}



// FUNCTION 14168b4b0 CSVTest body=2374 status=ok
// SIG undefined CSVTest(void)

void CSVTest(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  LARGE_INTEGER *pLVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  DWORD DVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  LARGE_INTEGER local_80;
  LARGE_INTEGER local_78;
  LARGE_INTEGER local_70;
  LARGE_INTEGER local_68 [5];
  
  lVar6 = FUN_14168db40();
  uVar3 = DAT_1468e35c0;
  uVar10 = (ulonglong)DAT_1468e35c0;
  uVar1 = *(uint *)(lVar6 + 4);
  lVar6 = FUN_14168db40();
  if ((*(char *)(lVar6 + 8) != '\0') && ((&DAT_1468e3840)[uVar10] != '\0')) {
    uVar7 = FUN_14168ec50(lVar6);
    FCsvProfilerThreadData::AddTimestamp(uVar7,"CsvTestStat",uVar3,1);
  }
  uVar4 = DAT_1468e35c0;
  uVar10 = (ulonglong)DAT_1468e35c0;
  lVar6 = FUN_14168db40();
  if ((*(char *)(lVar6 + 8) != '\0') && ((&DAT_1468e3840)[uVar10] != '\0')) {
    lVar6 = FUN_14168ec50(lVar6);
    pLVar8 = (LARGE_INTEGER *)
             TSingleProducerSingleConsumerList<FCsvCustomStat,256>::ReserveElement(lVar6 + 0xd8);
    QueryPerformanceCounter(&local_res20);
    *pLVar8 = local_res20;
    pLVar8[1].QuadPart = (LONGLONG)"CaptureFrameNumber";
    pLVar8[2].s.LowPart = uVar4;
    *(undefined2 *)((longlong)pLVar8 + 0x14) = 0xc00;
    pLVar8[3].s.LowPart = uVar1;
    *(longlong *)(lVar6 + 0x160) = *(longlong *)(lVar6 + 0x160) + 1;
  }
  uVar4 = DAT_1468e35c0;
  uVar10 = (ulonglong)DAT_1468e35c0;
  lVar6 = FUN_14168db40();
  if ((*(char *)(lVar6 + 8) != '\0') && ((&DAT_1468e3840)[uVar10] != '\0')) {
    lVar6 = FUN_14168ec50(lVar6);
    pLVar8 = (LARGE_INTEGER *)
             TSingleProducerSingleConsumerList<FCsvCustomStat,256>::ReserveElement(lVar6 + 0xd8);
    QueryPerformanceCounter(&local_98);
    *pLVar8 = local_98;
    pLVar8[1].QuadPart = (LONGLONG)"SameCustomStat";
    pLVar8[2].s.LowPart = uVar4;
    *(undefined2 *)((longlong)pLVar8 + 0x14) = 0xc00;
    pLVar8[3].s.LowPart = 1;
    *(longlong *)(lVar6 + 0x160) = *(longlong *)(lVar6 + 0x160) + 1;
  }
  uVar4 = DAT_1468e35c0;
  uVar10 = (ulonglong)DAT_1468e35c0;
  lVar6 = FUN_14168db40();
  if ((*(char *)(lVar6 + 8) != '\0') && ((&DAT_1468e3840)[uVar10] != '\0')) {
    lVar6 = FUN_14168ec50(lVar6);
    pLVar8 = (LARGE_INTEGER *)
             TSingleProducerSingleConsumerList<FCsvCustomStat,256>::ReserveElement(lVar6 + 0xd8);
    QueryPerformanceCounter(&local_90);
    *pLVar8 = local_90;
    pLVar8[1].QuadPart = (LONGLONG)"SameCustomStat";
    pLVar8[2].s.LowPart = uVar4;
    *(undefined2 *)((longlong)pLVar8 + 0x14) = 0xc03;
    pLVar8[3].s.LowPart = 1;
    *(longlong *)(lVar6 + 0x160) = *(longlong *)(lVar6 + 0x160) + 1;
  }
  lVar6 = 3;
  do {
    uVar10 = (ulonglong)DAT_1468e35c0;
    lVar9 = FUN_14168db40();
    if ((*(char *)(lVar9 + 8) != '\0') && ((&DAT_1468e3840)[uVar10] != '\0')) {
      uVar7 = FUN_14168ec50(lVar9);
      FCsvProfilerThreadData::AddTimestamp(uVar7,"RepeatStat1MS",uVar10,1);
    }
    FUN_1416b1760(0x3a83126f);
    lVar9 = FUN_14168db40();
    if ((*(char *)(lVar9 + 8) != '\0') && ((&DAT_1468e3840)[uVar10] != '\0')) {
      uVar7 = FUN_14168ec50(lVar9);
      FCsvProfilerThreadData::AddTimestamp(uVar7,"RepeatStat1MS",uVar10,0);
    }
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  uVar10 = (ulonglong)DAT_1468e35c0;
  lVar6 = FUN_14168db40();
  if ((*(char *)(lVar6 + 8) != '\0') && ((&DAT_1468e3840)[uVar10] != '\0')) {
    uVar7 = FUN_14168ec50(lVar6);
    FCsvProfilerThreadData::AddTimestamp(uVar7,"TimerStatTimer",uVar10,1);
  }
  lVar6 = 100;
  do {
    uVar13 = (ulonglong)DAT_1468e35c0;
    lVar9 = FUN_14168db40();
    if ((*(char *)(lVar9 + 8) != '\0') && ((&DAT_1468e3840)[uVar13] != '\0')) {
      uVar7 = FUN_14168ec50(lVar9);
      FCsvProfilerThreadData::AddTimestamp(uVar7,"BeginEndbenchmarkInner0",uVar13,1);
    }
    uVar15 = (ulonglong)DAT_1468e35c0;
    lVar9 = FUN_14168db40();
    if ((*(char *)(lVar9 + 8) != '\0') && ((&DAT_1468e3840)[uVar15] != '\0')) {
      uVar7 = FUN_14168ec50(lVar9);
      FCsvProfilerThreadData::AddTimestamp(uVar7,"BeginEndbenchmarkInner1",uVar15,1);
    }
    uVar16 = (ulonglong)DAT_1468e35c0;
    lVar9 = FUN_14168db40();
    if ((*(char *)(lVar9 + 8) != '\0') && ((&DAT_1468e3840)[uVar16] != '\0')) {
      uVar7 = FUN_14168ec50(lVar9);
      FCsvProfilerThreadData::AddTimestamp(uVar7,"BeginEndbenchmarkInner2",uVar16,1);
    }
    uVar11 = (ulonglong)DAT_1468e35c0;
    lVar9 = FUN_14168db40();
    if ((*(char *)(lVar9 + 8) != '\0') && ((&DAT_1468e3840)[uVar11] != '\0')) {
      uVar7 = FUN_14168ec50(lVar9);
      FCsvProfilerThreadData::AddTimestamp(uVar7,"BeginEndbenchmarkInner3",uVar11,1);
    }
    lVar9 = FUN_14168db40();
    if ((*(char *)(lVar9 + 8) != '\0') && ((&DAT_1468e3840)[uVar11] != '\0')) {
      uVar7 = FUN_14168ec50(lVar9);
      FCsvProfilerThreadData::AddTimestamp(uVar7,"BeginEndbenchmarkInner3",uVar11,0);
    }
    lVar9 = FUN_14168db40();
    if ((*(char *)(lVar9 + 8) != '\0') && ((&DAT_1468e3840)[uVar16] != '\0')) {
      uVar7 = FUN_14168ec50(lVar9);
      FCsvProfilerThreadData::AddTimestamp(uVar7,"BeginEndbenchmarkInner2",uVar16,0);
    }
    lVar9 = FUN_14168db40();
    if ((*(char *)(lVar9 + 8) != '\0') && ((&DAT_1468e3840)[uVar15] != '\0')) {
      uVar7 = FUN_14168ec50(lVar9);
      FCsvProfilerThreadData::AddTimestamp(uVar7,"BeginEndbenchmarkInner1",uVar15,0);
    }
    lVar9 = FUN_14168db40();
    if ((*(char *)(lVar9 + 8) != '\0') && ((&DAT_1468e3840)[uVar13] != '\0')) {
      uVar7 = FUN_14168ec50(lVar9);
      FCsvProfilerThreadData::AddTimestamp(uVar7,"BeginEndbenchmarkInner0",uVar13,0);
    }
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  lVar6 = FUN_14168db40();
  if ((*(char *)(lVar6 + 8) != '\0') && ((&DAT_1468e3840)[uVar10] != '\0')) {
    uVar7 = FUN_14168ec50(lVar6);
    FCsvProfilerThreadData::AddTimestamp(uVar7,"TimerStatTimer",uVar10,0);
  }
  uVar4 = DAT_1468e35c0;
  uVar10 = (ulonglong)DAT_1468e35c0;
  lVar6 = FUN_14168db40();
  if ((*(char *)(lVar6 + 8) != '\0') && ((&DAT_1468e3840)[uVar10] != '\0')) {
    uVar7 = FUN_14168ec50(lVar6);
    FCsvProfilerThreadData::AddTimestamp(uVar7,"CustomStatTimer",uVar4,1);
  }
  DVar14 = 0;
  do {
    uVar5 = DAT_1468e35c0;
    uVar10 = (ulonglong)DAT_1468e35c0;
    lVar6 = FUN_14168db40();
    if ((*(char *)(lVar6 + 8) != '\0') && ((&DAT_1468e3840)[uVar10] != '\0')) {
      lVar6 = FUN_14168ec50(lVar6);
      pLVar8 = (LARGE_INTEGER *)
               TSingleProducerSingleConsumerList<FCsvCustomStat,256>::ReserveElement(lVar6 + 0xd8);
      QueryPerformanceCounter(&local_88);
      *pLVar8 = local_88;
      pLVar8[1].QuadPart = (LONGLONG)"SetStat_99";
      pLVar8[2].s.LowPart = uVar5;
      *(undefined2 *)((longlong)pLVar8 + 0x14) = 0xc00;
      pLVar8[3].s.LowPart = DVar14;
      *(longlong *)(lVar6 + 0x160) = *(longlong *)(lVar6 + 0x160) + 1;
    }
    uVar5 = DAT_1468e35c0;
    uVar10 = (ulonglong)DAT_1468e35c0;
    lVar6 = FUN_14168db40();
    if ((*(char *)(lVar6 + 8) != '\0') && ((&DAT_1468e3840)[uVar10] != '\0')) {
      lVar6 = FUN_14168ec50(lVar6);
      pLVar8 = (LARGE_INTEGER *)
               TSingleProducerSingleConsumerList<FCsvCustomStat,256>::ReserveElement(lVar6 + 0xd8);
      QueryPerformanceCounter(&local_80);
      *pLVar8 = local_80;
      pLVar8[1].QuadPart = (LONGLONG)"MaxStat_99";
      pLVar8[3].s.LowPart = 99 - DVar14;
      pLVar8[2].s.LowPart = uVar5;
      *(undefined2 *)((longlong)pLVar8 + 0x14) = 0xc02;
      *(longlong *)(lVar6 + 0x160) = *(longlong *)(lVar6 + 0x160) + 1;
    }
    uVar5 = DAT_1468e35c0;
    uVar10 = (ulonglong)DAT_1468e35c0;
    lVar6 = FUN_14168db40();
    if ((*(char *)(lVar6 + 8) != '\0') && ((&DAT_1468e3840)[uVar10] != '\0')) {
      lVar6 = FUN_14168ec50(lVar6);
      pLVar8 = (LARGE_INTEGER *)
               TSingleProducerSingleConsumerList<FCsvCustomStat,256>::ReserveElement(lVar6 + 0xd8);
      QueryPerformanceCounter(&local_78);
      *pLVar8 = local_78;
      pLVar8[1].QuadPart = (LONGLONG)"MinStat_0";
      pLVar8[2].s.LowPart = uVar5;
      *(undefined2 *)((longlong)pLVar8 + 0x14) = 0xc01;
      pLVar8[3].s.LowPart = DVar14;
      *(longlong *)(lVar6 + 0x160) = *(longlong *)(lVar6 + 0x160) + 1;
    }
    uVar5 = DAT_1468e35c0;
    uVar10 = (ulonglong)DAT_1468e35c0;
    lVar6 = FUN_14168db40();
    if ((*(char *)(lVar6 + 8) != '\0') && ((&DAT_1468e3840)[uVar10] != '\0')) {
      lVar6 = FUN_14168ec50(lVar6);
      pLVar8 = (LARGE_INTEGER *)
               TSingleProducerSingleConsumerList<FCsvCustomStat,256>::ReserveElement(lVar6 + 0xd8);
      QueryPerformanceCounter(&local_70);
      *pLVar8 = local_70;
      pLVar8[1].QuadPart = (LONGLONG)"AccStat_4950";
      pLVar8[2].s.LowPart = uVar5;
      *(undefined2 *)((longlong)pLVar8 + 0x14) = 0xc03;
      pLVar8[3].s.LowPart = DVar14;
      *(longlong *)(lVar6 + 0x160) = *(longlong *)(lVar6 + 0x160) + 1;
    }
    DVar14 = DVar14 + 1;
  } while ((int)DVar14 < 100);
  iVar12 = 0;
  if (100 < uVar1) {
    uVar10 = (ulonglong)DAT_1468e35c0;
    lVar6 = FUN_14168db40();
    if ((*(char *)(lVar6 + 8) != '\0') && ((&DAT_1468e3840)[uVar10] != '\0')) {
      uVar7 = FUN_14168ec50(lVar6);
      FCsvProfilerThreadData::AddTimestamp(uVar7,"TimerOver100",uVar10,1);
    }
    uVar5 = DAT_1468e35c0;
    uVar13 = (ulonglong)DAT_1468e35c0;
    lVar6 = FUN_14168db40();
    if ((*(char *)(lVar6 + 8) != '\0') && ((&DAT_1468e3840)[uVar13] != '\0')) {
      lVar6 = FUN_14168ec50(lVar6);
      pLVar8 = (LARGE_INTEGER *)
               TSingleProducerSingleConsumerList<FCsvCustomStat,256>::ReserveElement(lVar6 + 0xd8);
      QueryPerformanceCounter(local_68);
      *pLVar8 = local_68[0];
      pLVar8[3].s.LowPart = uVar1 - 100;
      pLVar8[1].QuadPart = (LONGLONG)"CustomStatOver100";
      pLVar8[2].s.LowPart = uVar5;
      *(undefined2 *)((longlong)pLVar8 + 0x14) = 0xc00;
      *(longlong *)(lVar6 + 0x160) = *(longlong *)(lVar6 + 0x160) + 1;
    }
    lVar6 = FUN_14168db40();
    if ((*(char *)(lVar6 + 8) != '\0') && ((&DAT_1468e3840)[uVar10] != '\0')) {
      uVar7 = FUN_14168ec50(lVar6);
      FCsvProfilerThreadData::AddTimestamp(uVar7,"TimerOver100",uVar10,0);
    }
  }
  lVar6 = FUN_14168db40();
  if ((*(char *)(lVar6 + 8) != '\0') && ((&DAT_1468e3840)[uVar4] != '\0')) {
    uVar7 = FUN_14168ec50(lVar6);
    FCsvProfilerThreadData::AddTimestamp(uVar7,"CustomStatTimer",(ulonglong)uVar4,0);
  }
  uVar10 = (ulonglong)DAT_1468e35c0;
  lVar6 = FUN_14168db40();
  if ((*(char *)(lVar6 + 8) != '\0') && ((&DAT_1468e3840)[uVar10] != '\0')) {
    uVar7 = FUN_14168ec50(lVar6);
    FCsvProfilerThreadData::AddTimestamp(uVar7,"EventTimer",uVar10,1);
  }
  uVar4 = DAT_1468e35c0;
  uVar2 = DAT_1464aaa8c;
  if ((uVar1 % 0x14 < 2) && (lVar6 = FUN_14168db40(), *(char *)(lVar6 + 8) != '\0')) {
    FUN_1416924e0(lVar6,uVar4,L"This is frame %d",uVar2);
  }
  if (uVar1 == (uVar1 / 0x32) * 0x32) {
    do {
      uVar1 = DAT_1468e35c0;
      lVar6 = FUN_14168db40();
      if (*(char *)(lVar6 + 8) != '\0') {
        FUN_1416924e0(lVar6,uVar1,L"Multiple Event %d",iVar12);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < 5);
  }
  lVar6 = FUN_14168db40();
  if ((*(char *)(lVar6 + 8) != '\0') && ((&DAT_1468e3840)[uVar10] != '\0')) {
    uVar7 = FUN_14168ec50(lVar6);
    FCsvProfilerThreadData::AddTimestamp(uVar7,"EventTimer",uVar10,0);
  }
  lVar6 = FUN_14168db40();
  if ((*(char *)(lVar6 + 8) != '\0') && ((&DAT_1468e3840)[uVar3] != '\0')) {
    uVar7 = FUN_14168ec50(lVar6);
    FCsvProfilerThreadData::AddTimestamp(uVar7,"CsvTestStat",(ulonglong)uVar3,0);
  }
  return;
}



// FUNCTION 14168be00 FUN_14168be00 body=29 status=ok
// SIG undefined FUN_14168be00(void)

byte FUN_14168be00(longlong param_1)

{
  FUN_141694ce0();
  return (byte)~*(byte *)(param_1 + 0x28) >> 7;
}



// FUNCTION 14168be20 CommitFrameData body=203 status=ok
// SIG undefined CommitFrameData(void)

void FCsvStatSeries::CommitFrameData(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar2 + 1;
  if (*(int *)(param_1 + 0x3c) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x30,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar2 * 4) = *param_2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar3 = (longlong)*(int *)(param_1 + 0x28);
    lVar1 = *(longlong *)(param_1 + 0x20);
    iVar2 = *(int *)(lVar1 + -8 + lVar3 * 0xc);
    if (*(int *)(param_1 + 8) == *(int *)(lVar1 + -0xc + lVar3 * 0xc) + iVar2) {
      *(int *)(lVar1 + lVar3 * 0xc + -8) = iVar2 + 1;
      return;
    }
  }
  iVar2 = *(int *)(param_1 + 0x28) + 1;
  *(int *)(param_1 + 0x28) = iVar2;
  if (*(int *)(param_1 + 0x2c) < iVar2) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x28);
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  *(undefined4 *)(lVar1 + -8 + (longlong)iVar2 * 0xc) = 1;
  lVar1 = lVar1 + (longlong)iVar2 * 0xc;
  *(undefined4 *)(lVar1 + -0xc) = *(undefined4 *)(param_1 + 8);
  *(int *)(lVar1 + -4) = *(int *)(param_1 + 0x38) + -1;
  return;
}



// FUNCTION 14168bef0 CompareText body=382 status=ok
// SIG undefined CompareText(void)

bool FTextFilterString::CompareText(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  wchar_t *pwVar8;
  short *psVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  
  if (param_3 != '\0') {
    if (param_3 == '\x01') {
      pwVar8 = L"";
      if (*(int *)(param_2 + 1) == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)*param_2;
      }
      if (*(int *)(param_1 + 1) != 0) {
        pwVar8 = (wchar_t *)*param_1;
      }
      pwVar8 = ::_guard_xfg_dispatch_icall_nop(pwVar8,pwVar10);
      return pwVar8 != (wchar_t *)0x0;
    }
    if (param_3 == '\x02') {
      iVar3 = *(int *)(param_2 + 1);
      iVar6 = iVar3 + -1;
      iVar5 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar6 = -1;
        iVar5 = 0;
      }
      if (iVar5 < 1) {
        return false;
      }
      if (iVar3 == 0) {
        iVar6 = 0;
      }
      pwVar8 = L"";
      if (iVar3 == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)*param_2;
      }
      if (*(int *)(param_1 + 1) != 0) {
        pwVar8 = (wchar_t *)*param_1;
      }
    }
    else {
      if (param_3 != '\x03') {
        return false;
      }
      iVar3 = *(int *)(param_2 + 1);
      iVar6 = iVar3 + -1;
      iVar5 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar6 = -1;
        iVar5 = 0;
      }
      if (iVar5 < 1) {
        return false;
      }
      iVar4 = *(int *)(param_1 + 1);
      iVar5 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar5 = 0;
      }
      if (iVar3 == 0) {
        iVar6 = 0;
      }
      if (iVar5 < iVar6) {
        return false;
      }
      puVar7 = &DAT_143f3eda8;
      if (iVar3 == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)*param_2;
      }
      if (iVar4 != 0) {
        puVar7 = (undefined2 *)*param_1;
      }
      pwVar8 = puVar7 + (iVar5 - iVar6);
    }
    iVar6 = wcsncmp(pwVar8,pwVar10,(longlong)iVar6);
    if (iVar6 != 0) {
      return false;
    }
    return true;
  }
  psVar9 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  if (*(int *)(param_1 + 1) != 0) {
    psVar9 = (short *)*param_1;
  }
  lVar11 = (longlong)puVar7 - (longlong)psVar9;
  do {
    sVar1 = *psVar9;
    sVar2 = *(short *)((longlong)psVar9 + lVar11);
    if (sVar1 != sVar2) break;
    psVar9 = psVar9 + 1;
  } while (sVar2 != 0);
  return sVar1 == sVar2;
}



// FUNCTION 14168c070 Copy body=164 status=ok
// SIG undefined Copy(void)

void FBitReaderMark::Copy(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)((*(longlong *)(param_2 + 0xa8) - *param_1) + 7 >> 3);
  if (0 < iVar2) {
    iVar1 = (int)param_3[1];
    if (iVar1 < iVar2) {
      *(int *)(param_3 + 1) = iVar2;
      if (*(int *)((longlong)param_3 + 0xc) < iVar2) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
      }
    }
    else if ((iVar2 < iVar1) && (iVar2 != iVar1)) {
      *(int *)(param_3 + 1) = iVar2;
      TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_3);
    }
    *(undefined1 *)((longlong)iVar2 + -1 + *param_3) = 0;
    appBitsCpy(*param_3,0,*(undefined8 *)(param_2 + 0x90),(int)*param_1,
               *(int *)(param_2 + 0xa8) - (int)*param_1);
  }
  return;
}



// FUNCTION 14168c120 FUN_14168c120 body=544 status=ok
// SIG undefined FUN_14168c120(void)

void FUN_14168c120(longlong param_1,longlong param_2)

{
  byte bVar1;
  
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(byte *)(param_1 + 0x28) =
       *(byte *)(param_1 + 0x28) ^ (*(byte *)(param_1 + 0x28) ^ *(byte *)(param_2 + 0x28)) & 1;
  bVar1 = (*(byte *)(param_1 + 0x28) ^ *(byte *)(param_2 + 0x28)) & 2 ^ *(byte *)(param_1 + 0x28);
  *(byte *)(param_1 + 0x28) = bVar1;
  bVar1 = (bVar1 ^ *(byte *)(param_2 + 0x28)) & 4 ^ bVar1;
  *(byte *)(param_1 + 0x28) = bVar1;
  bVar1 = (bVar1 ^ *(byte *)(param_2 + 0x28)) & 8 ^ bVar1;
  *(byte *)(param_1 + 0x28) = bVar1;
  bVar1 = (bVar1 ^ *(byte *)(param_2 + 0x28)) & 0x10 ^ bVar1;
  *(byte *)(param_1 + 0x28) = bVar1;
  bVar1 = (bVar1 ^ *(byte *)(param_2 + 0x28)) & 0x20 ^ bVar1;
  *(byte *)(param_1 + 0x28) = bVar1;
  bVar1 = (bVar1 ^ *(byte *)(param_2 + 0x28)) & 0x40 ^ bVar1;
  *(byte *)(param_1 + 0x28) = bVar1;
  *(byte *)(param_1 + 0x28) = (bVar1 ^ *(byte *)(param_2 + 0x28)) & 0x7f ^ *(byte *)(param_2 + 0x28)
  ;
  *(byte *)(param_1 + 0x29) =
       *(byte *)(param_1 + 0x29) ^ (*(byte *)(param_1 + 0x29) ^ *(byte *)(param_2 + 0x29)) & 1;
  bVar1 = (*(byte *)(param_2 + 0x29) ^ *(byte *)(param_1 + 0x29)) & 2 ^ *(byte *)(param_1 + 0x29);
  *(byte *)(param_1 + 0x29) = bVar1;
  bVar1 = (*(byte *)(param_2 + 0x29) ^ bVar1) & 4 ^ bVar1;
  *(byte *)(param_1 + 0x29) = bVar1;
  bVar1 = (*(byte *)(param_2 + 0x29) ^ bVar1) & 8 ^ bVar1;
  *(byte *)(param_1 + 0x29) = bVar1;
  bVar1 = (*(byte *)(param_2 + 0x29) ^ bVar1) & 0x10 ^ bVar1;
  *(byte *)(param_1 + 0x29) = bVar1;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  bVar1 = (*(byte *)(param_2 + 0x29) ^ bVar1) & 0x20 ^ bVar1;
  *(byte *)(param_1 + 0x29) = bVar1;
  bVar1 = (*(byte *)(param_2 + 0x29) ^ bVar1) & 0x40 ^ bVar1;
  *(byte *)(param_1 + 0x29) = bVar1;
  *(byte *)(param_1 + 0x29) = (*(byte *)(param_2 + 0x29) ^ bVar1) & 0x7f ^ *(byte *)(param_2 + 0x29)
  ;
  *(byte *)(param_1 + 0x2a) =
       *(byte *)(param_1 + 0x2a) ^ (*(byte *)(param_1 + 0x2a) ^ *(byte *)(param_2 + 0x2a)) & 1;
  bVar1 = (*(byte *)(param_2 + 0x2a) ^ *(byte *)(param_1 + 0x2a)) & 2 ^ *(byte *)(param_1 + 0x2a);
  *(byte *)(param_1 + 0x2a) = bVar1;
  bVar1 = (bVar1 ^ *(byte *)(param_2 + 0x2a)) & 4 ^ bVar1;
  *(byte *)(param_1 + 0x2a) = bVar1;
  bVar1 = (bVar1 ^ *(byte *)(param_2 + 0x2a)) & 8 ^ bVar1;
  *(byte *)(param_1 + 0x2a) = bVar1;
  bVar1 = (bVar1 ^ *(byte *)(param_2 + 0x2a)) & 0x10 ^ bVar1;
  *(byte *)(param_1 + 0x2a) = bVar1;
  bVar1 = (bVar1 ^ *(byte *)(param_2 + 0x2a)) & 0x20 ^ bVar1;
  *(byte *)(param_1 + 0x2a) = bVar1;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  bVar1 = (bVar1 ^ *(byte *)(param_2 + 0x2a)) & 0x40 ^ bVar1;
  *(byte *)(param_1 + 0x2a) = bVar1;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(byte *)(param_1 + 0x2a) = (bVar1 ^ *(byte *)(param_2 + 0x2a)) & 0x7f ^ *(byte *)(param_2 + 0x2a)
  ;
  *(byte *)(param_1 + 0x2b) =
       *(byte *)(param_1 + 0x2b) ^ (*(byte *)(param_1 + 0x2b) ^ *(byte *)(param_2 + 0x2b)) & 4;
  bVar1 = (*(byte *)(param_1 + 0x2b) ^ *(byte *)(param_2 + 0x2b)) & 8 ^ *(byte *)(param_1 + 0x2b);
  *(byte *)(param_1 + 0x2b) = bVar1;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  bVar1 = (bVar1 ^ *(byte *)(param_2 + 0x2b)) & 0x10 ^ bVar1;
  *(byte *)(param_1 + 0x2b) = bVar1;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  bVar1 = (bVar1 ^ *(byte *)(param_2 + 0x2b)) & 1 ^ bVar1;
  *(byte *)(param_1 + 0x2b) = bVar1;
  *(byte *)(param_1 + 0x2b) = (bVar1 ^ *(byte *)(param_2 + 0x2b)) & 2 ^ bVar1;
  return;
}



// FUNCTION 14168c340 FUN_14168c340 body=55 status=ok
// SIG undefined FUN_14168c340(void)

void FUN_14168c340(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)*(int *)(param_1 + 0x98),(longlong)*(int *)(param_1 + 0x9c));
                    /* WARNING: Could not recover jumptable at 0x00014168c373. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))(param_2,0xb8,0xb8);
  return;
}



// FUNCTION 14168c380 FUN_14168c380 body=21 status=ok
// SIG undefined FUN_14168c380(void)

void FUN_14168c380(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14168db40();
  FUN_14168ad30(uVar1);
  return;
}



// FUNCTION 14168c3a0 CsvProfilerBeginFrameRT body=219 status=ok
// SIG undefined CsvProfilerBeginFrameRT(void)

void CsvProfilerBeginFrameRT(void)

{
  LARGE_INTEGER *pLVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  LARGE_INTEGER local_res8;
  
  lVar3 = FUN_14168db40();
  if (*(char *)(lVar3 + 8) != '\0') {
    uVar5 = (uint)DAT_1468e3758;
    lVar2 = DAT_1468e36d0;
    lVar4 = DAT_1468e36d8;
    if ((DAT_1468e3758 & 0xf) == 0) {
      lVar4 = operator_new(0x88);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        *(undefined8 *)(lVar4 + 0x80) = 0;
      }
      DAT_1468e3768 = DAT_1468e3768 + 1;
      lVar2 = lVar4;
      if (DAT_1468e36d8 != 0) {
        *(longlong *)(DAT_1468e36d8 + 0x80) = lVar4;
        lVar2 = DAT_1468e36d0;
      }
    }
    DAT_1468e36d8 = lVar4;
    DAT_1468e36d0 = lVar2;
    pLVar1 = (LARGE_INTEGER *)(DAT_1468e36d8 + (ulonglong)(uVar5 & 0xf) * 8);
    QueryPerformanceCounter(&local_res8);
    *pLVar1 = local_res8;
    DAT_1468e3758 = DAT_1468e3758 + 1;
  }
  bVar6 = DAT_1468e362e == '\0';
  *(undefined1 *)(lVar3 + 9) = *(undefined1 *)(lVar3 + 8);
  if (bVar6) {
    return;
  }
  CSVTest();
  return;
}



// FUNCTION 14168c480 FUN_14168c480 body=21 status=ok
// SIG undefined FUN_14168c480(void)

void FUN_14168c480(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14168db40();
  FUN_14168cc20(uVar1);
  return;
}



// FUNCTION 14168c4b0 CustomVer body=242 status=ok
// SIG undefined CustomVer(void)

int FArchive::CustomVer(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int *piVar4;
  int *piVar5;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x120))();
  local_18 = (int)uVar1;
  iStack_14 = (int)((ulonglong)uVar1 >> 0x20);
  iStack_10 = (int)uVar2;
  iStack_c = (int)((ulonglong)uVar2 >> 0x20);
  if (((DAT_1468e3818 == local_18 && DAT_1468e381c == iStack_14) && DAT_1468e3820 == iStack_10) &&
      DAT_1468e3824 == iStack_c) {
    return DAT_1468e3828;
  }
  piVar4 = (int *)*puVar3;
  piVar5 = piVar4 + (longlong)*(int *)(puVar3 + 1) * 8;
  for (; piVar4 != piVar5; piVar4 = piVar4 + 8) {
    if (((piVar4[3] == iStack_c && piVar4[1] == iStack_14) && piVar4[2] == iStack_10) &&
        *piVar4 == local_18) goto LAB_14168c589;
  }
  piVar4 = (int *)0x0;
LAB_14168c589:
  if (piVar4 != (int *)0x0) {
    return piVar4[4];
  }
  return -1;
}



// FUNCTION 14168c5b0 Dequeue body=226 status=ok
// SIG undefined Dequeue(void)

undefined8 TQueue<FCsvCaptureCommand,1>::Dequeue(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_48 [4];
  undefined8 local_44;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 == 0) {
    return 0;
  }
  FCsvCaptureCommand::operator=(param_2,lVar1 + 8);
  lVar2 = *(longlong *)(param_1 + 8);
  *(longlong *)(param_1 + 8) = lVar1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_48[0] = 2;
  local_44 = 0xffffffffffffffff;
  FCsvCaptureCommand::operator=(lVar1 + 8,local_48);
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x28) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar2 + 0x18) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar2,0x40);
  }
  return 1;
}



// FUNCTION 14168c6a0 DestroyObject body=85 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FModuleManager::FModuleInfo,SharedPointerInternals::DefaultDeleter<FModuleManager::FModuleInfo>_>
     ::DestroyObject(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)plVar1[5];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    if (plVar1[2] != 0) {
      FMemory::Free();
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar1,0x38);
    return;
  }
  return;
}



// FUNCTION 14168c700 DumpHighLevelLoadTimesStatic body=355 status=ok
// SIG undefined DumpHighLevelLoadTimesStatic(void)

void FLoadTimeTracker::DumpHighLevelLoadTimesStatic(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  int local_78;
  uint uStack_74;
  uint *puStack_70;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  undefined8 uStack_50;
  uint *local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  longlong *local_30;
  undefined8 uStack_28;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_58 = (longlong *)FUN_14168db90();
  iVar1 = (int)local_58[5];
  local_78 = 0;
  uStack_74 = 1;
  puStack_70 = (uint *)(local_58 + 2);
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar1 != 0) {
    puVar6 = (uint *)local_58[4];
    if ((uint *)local_58[4] == (uint *)0x0) {
      puVar6 = puStack_70;
    }
    uVar2 = *puVar6;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar2 == 0) {
      lVar5 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar4 = local_78 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar4;
      if (bVar3) goto LAB_14168c7bf;
      uVar2 = puVar6[lVar5 + 1];
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
    iStack_64 = (iStack_60 - iVar4) + 0x1f;
    if (iVar1 < iStack_64) {
LAB_14168c7bf:
      iStack_64 = iVar1;
    }
  }
  local_68 = 0xffffffff;
  uStack_50 = CONCAT44(uStack_74,local_78);
  uStack_18 = 0xffffffff;
  iStack_14 = iStack_64;
  iStack_10 = iStack_60;
  uStack_c = uStack_5c;
  uStack_40 = 0xffffffff;
  iStack_3c = iStack_64;
  local_38 = iStack_60;
  uStack_34 = uStack_5c;
  local_48 = puStack_70;
  local_30 = local_58;
  uStack_28 = uStack_50;
  puStack_20 = puStack_70;
  if (iStack_64 < iVar1) {
    do {
      FName::ToString((longlong)iStack_3c * 0x20 + *local_58,&local_78);
      if (CONCAT44(uStack_74,local_78) != 0) {
        FMemory::Free();
      }
      uStack_40 = uStack_40 & ~uStack_50._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  return;
}



// FUNCTION 14168c880 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>,TDefaultMapHashableKeyFuncs<FName,FLoadTimeTracker::FAccumulatorTracker,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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



// FUNCTION 14168c900 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<unsigned___int64,FCsvStatSeries_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FCsvStatSeries_*,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = ConditionalRehash(param_1,param_2,1);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + uVar3 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 14168c9c0 Empty body=451 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FName,FLoadTimeTracker::FAccumulatorTracker>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

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
      if (bVar3) goto LAB_14168ca91;
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
LAB_14168ca91:
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
      lVar5 = (longlong)iStack_2c * 0x60 + *param_1;
      *(undefined4 *)(lVar5 + 0x50) = 0;
      if (*(longlong *)(lVar5 + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar5 + 8);
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
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



// FUNCTION 14168cb90 FUN_14168cb90 body=21 status=ok
// SIG undefined FUN_14168cb90(void)

void FUN_14168cb90(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
    return;
  }
  return;
}



// FUNCTION 14168cbb0 EndCapture body=106 status=ok
// SIG undefined EndCapture(void)

void FCsvProfiler::EndCapture(longlong param_1)

{
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined1 local_18;
  
  local_44 = DAT_1468e383c;
  local_48[0] = 1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_40 = 0xffffffff;
  FUN_14168cf90(param_1 + 0x70,local_48);
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14168cc20 FUN_14168cc20 body=795 status=ok
// SIG undefined FUN_14168cc20(void)

/* WARNING: Removing unreachable block (ram,0x00014168cd3d) */
/* WARNING: Removing unreachable block (ram,0x00014168cd18) */
/* WARNING: Removing unreachable block (ram,0x00014168cd5b) */

void FUN_14168cc20(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  LARGE_INTEGER local_res8;
  char local_108 [4];
  int local_104;
  undefined4 local_100;
  longlong local_f8 [4];
  undefined1 local_d8;
  undefined1 local_c8 [64];
  ulonglong local_88;
  ulonglong local_78;
  ulonglong local_68;
  
  if ((char)param_1[2] != '\0') {
    if ((-1 < *param_1) && (iVar2 = *param_1 + -1, *param_1 = iVar2, iVar2 == 0)) {
      FCsvProfiler::EndCapture();
    }
    QueryPerformanceCounter(&local_res8);
    lVar4 = local_res8.QuadPart - *(longlong *)(param_1 + 4);
    dVar6 = (double)FGenericPlatformTime::GetSecondsPerCycle64();
    uVar1 = DAT_1468e35e0;
    dVar7 = (double)lVar4;
    if (lVar4 < 0) {
      dVar7 = dVar7 + 1.8446744073709552e+19;
    }
    uVar5 = (ulonglong)DAT_1468e35e0;
    lVar4 = FUN_14168db40();
    if ((*(char *)(lVar4 + 8) != '\0') && ((&DAT_1468e3840)[uVar5] != '\0')) {
      uVar3 = FUN_14168ec50(lVar4);
      FCsvProfilerThreadData::AddCustomStatInternal
                (uVar3,(longlong)DAT_1468e35d8,uVar1,(float)(dVar6 * dVar7 * 1000.0),0,1);
    }
    FUN_1416a13c0(local_c8);
    lVar4 = FUN_14168db40();
    if ((*(char *)(lVar4 + 8) != '\0') && (DAT_1468e3840 != '\0')) {
      uVar3 = FUN_14168ec50(lVar4);
      FCsvProfilerThreadData::AddCustomStatInternal
                (uVar3,"MemoryFreeMB",0,(float)(local_88 >> 10) * 0.0009765625,0,0);
    }
    lVar4 = FUN_14168db40();
    if ((*(char *)(lVar4 + 8) != '\0') && (DAT_1468e3840 != '\0')) {
      uVar3 = FUN_14168ec50(lVar4);
      FCsvProfilerThreadData::AddCustomStatInternal
                (uVar3,"PhysicalUsedMB",0,(float)(local_78 >> 10) * 0.0009765625,0,0);
    }
    lVar4 = FUN_14168db40();
    if ((*(char *)(lVar4 + 8) != '\0') && (DAT_1468e3840 != '\0')) {
      uVar3 = FUN_14168ec50(lVar4);
      FCsvProfilerThreadData::AddCustomStatInternal
                (uVar3,"VirtualUsedMB",0,(float)(local_68 >> 10) * 0.0009765625,0,0);
    }
    if (*(longlong *)(param_1 + 0x20) == 0) {
      FUN_141690ec0(param_1);
    }
    param_1[1] = param_1[1] + 1;
    *(LARGE_INTEGER *)(param_1 + 4) = local_res8;
  }
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_f8[2] = 0;
  local_f8[3] = 0;
  if (**(longlong **)(param_1 + 0x1e) == 0) {
    DAT_1468e383c = DAT_1468e383c + 1;
  }
  else {
    lVar4 = **(longlong **)(param_1 + 0x1e);
    local_108[0] = *(char *)(lVar4 + 8);
    local_104 = *(int *)(lVar4 + 0xc);
    local_100 = *(undefined4 *)(lVar4 + 0x10);
    FString::operator=(local_f8,lVar4 + 0x18);
    FString::operator=(local_f8 + 2,lVar4 + 0x28);
    local_d8 = *(undefined1 *)(lVar4 + 0x38);
    if (local_108[0] == '\x01') {
      if (local_104 == DAT_1468e383c) {
        param_1[6] = param_1[1];
      }
      else {
        TQueue<FCsvCaptureCommand,1>::Dequeue(param_1 + 0x1c,local_108);
        if ((char)param_1[2] != '\0') {
          *(undefined1 *)(param_1 + 2) = 0;
          FUN_141696de0(param_1);
        }
      }
    }
    DAT_1468e383c = DAT_1468e383c + 1;
    if (local_f8[2] != 0) {
      FMemory::Free();
    }
    if (local_f8[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14168cf40 EndStat body=70 status=ok
// SIG undefined EndStat(void)

void FCsvProfiler::EndStat(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 8) != '\0') && ((&DAT_1468e3840)[param_3] != '\0')) {
    uVar1 = FUN_14168ec50();
    FCsvProfilerThreadData::AddTimestamp(uVar1,param_2,param_3,0);
  }
  return;
}



// FUNCTION 14168cf90 FUN_14168cf90 body=177 status=ok
// SIG undefined FUN_14168cf90(void)

undefined8 FUN_14168cf90(undefined8 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = *param_2;
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 8);
    puVar2[3] = 0;
    puVar2[3] = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)((longlong)puVar2 + 0x24) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined8 *)(param_2 + 0x18) = 0;
    puVar2[5] = 0;
    puVar2[5] = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)((longlong)puVar2 + 0x34) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined1 *)(puVar2 + 7) = param_2[0x30];
    puVar1 = (undefined8 *)*param_1;
    *param_1 = puVar2;
    *puVar1 = puVar2;
    return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
  }
  return 0;
}



// FUNCTION 14168d050 FUN_14168d050 body=139 status=ok
// SIG undefined FUN_14168d050(void)

void FUN_14168d050(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  
  plVar3 = *(longlong **)(param_1 + 8);
  puVar5 = *(undefined4 **)plVar3[1];
  if (puVar5 + 1 <= (undefined4 *)((undefined8 *)plVar3[1])[1]) {
    *param_2 = *puVar5;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
    return;
  }
  (**(code **)(*plVar3 + 0x50))(plVar3,param_2,4);
  if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
    puVar4 = (undefined1 *)((longlong)param_2 + 3);
    puVar5 = param_2;
    do {
      puVar1 = (undefined4 *)((longlong)puVar5 + 1);
      uVar2 = *puVar4;
      *puVar4 = *(undefined1 *)puVar5;
      puVar4 = puVar4 + -1;
      *(undefined1 *)puVar5 = uVar2;
      puVar5 = puVar1;
    } while (-(longlong)param_2 + (longlong)puVar1 < -(longlong)param_2 + (longlong)puVar4);
  }
  return;
}



// FUNCTION 14168d0e0 FUN_14168d0e0 body=347 status=ok
// SIG undefined FUN_14168d0e0(void)

undefined8
FUN_14168d0e0(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  void *local_18;
  int local_10;
  
  if ((param_5 & 0x10000000) == 0) {
    puVar5 = (undefined8 *)FUN_1416959d0(param_1,&local_18,L"%D.%h:%m:%s.%n");
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
    FString::PrintfImpl(&local_18,L"FTimespan(0x%016X)",*param_1);
    pvVar3 = local_18;
    iVar6 = 0;
    if (local_10 != 0) {
      iVar6 = local_10 + -1;
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
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return 1;
}



// FUNCTION 14168d240 FindModule body=356 status=ok
// SIG undefined FindModule(void)

longlong * FModuleManager::FindModule(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong local_28;
  longlong *local_20;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x180);
  *param_2 = 0;
  param_2[1] = 0;
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar4 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar4 = param_1 + 0x40;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)param_3 >> 0x20) + (int)param_3) &
                             (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 8));
        if (*plVar6 == param_3) {
          if (iVar3 != -1) goto LAB_14168d2f1;
          break;
        }
        iVar3 = (int)plVar6[3];
      } while (iVar3 != -1);
    }
  }
  plVar6 = (longlong *)0x0;
LAB_14168d2f1:
  plVar5 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  if (plVar5 != (longlong *)0x0) {
    local_20 = (longlong *)plVar5[1];
    local_28 = *plVar5;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    if (param_2 != &local_28) {
      *param_2 = local_28;
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_20);
    }
    plVar6 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_20 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return param_2;
}



// FUNCTION 14168d3b0 FindModules body=582 status=ok
// SIG undefined FindModules(void)

void FModuleManager::FindModules(longlong param_1,short *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  longlong local_98;
  ulonglong local_90;
  int local_88;
  uint uStack_84;
  uint *puStack_80;
  undefined4 local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  undefined8 uStack_60;
  uint *local_58;
  uint uStack_50;
  int iStack_4c;
  int local_48;
  undefined4 uStack_44;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  local_98 = 0;
  local_90 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (param_2[lVar9] != 0);
    uVar8 = (int)lVar9 + 1;
    local_90 = (ulonglong)uVar8;
    if (0 < (int)uVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    }
    FGenericPlatformString::Memcpy(local_98,param_2,(longlong)(int)uVar8 * 2);
  }
  local_68 = (longlong *)(param_1 + 0x58);
  local_88 = 0;
  iVar1 = *(int *)(param_1 + 0x80);
  puStack_80 = (uint *)(param_1 + 0x68);
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x78);
    if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
      puVar10 = puStack_80;
    }
    uVar8 = *puVar10;
    while (uVar8 == 0) {
      lVar9 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar3) goto LAB_14168d4db;
      uVar8 = puVar10[lVar9 + 1];
    }
    uStack_84 = -uVar8 & uVar8;
    iVar7 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_74 = (iStack_70 - iVar7) + 0x1f;
    if (iVar1 < iStack_74) {
LAB_14168d4db:
      iStack_74 = iVar1;
    }
  }
  local_78 = 0xffffffff;
  uStack_60 = CONCAT44(uStack_84,local_88);
  uStack_28 = 0xffffffff;
  iStack_24 = iStack_74;
  iStack_20 = iStack_70;
  uStack_1c = uStack_6c;
  uStack_50 = 0xffffffff;
  iStack_4c = iStack_74;
  local_48 = iStack_70;
  uStack_44 = uStack_6c;
  local_58 = puStack_80;
  local_40 = local_68;
  uStack_38 = uStack_60;
  puStack_30 = puStack_80;
  if (iStack_74 < iVar1) {
    do {
      plVar4 = local_68;
      lVar9 = (longlong)iStack_4c;
      uVar6 = FName::ToString(lVar9 * 0x20 + *local_68,&local_88);
      cVar5 = FUN_141593930(uVar6,&local_98,1);
      if (CONCAT44(uStack_84,local_88) != 0) {
        FMemory::Free();
      }
      if (cVar5 != '\0') {
        lVar2 = *plVar4;
        iVar1 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar9 * 0x20 + lVar2);
      }
      uStack_50 = uStack_50 & ~uStack_60._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
    } while (iStack_4c < (int)local_58[6]);
  }
  if (local_98 != 0) {
    FMemory::Free(local_98);
  }
  return;
}



// FUNCTION 14168d600 FUN_14168d600 body=331 status=ok
// SIG undefined FUN_14168d600(void)

longlong * FUN_14168d600(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong *local_res10;
  longlong *local_28;
  longlong **local_20;
  
  plVar5 = (longlong *)0x0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar1 = *param_2;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar4 +
                    ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x18) == lVar1) {
          if (iVar2 != -1) goto LAB_14168d683;
          break;
        }
        iVar2 = (int)plVar4[2];
      } while (iVar2 != -1);
    }
  }
  plVar4 = plVar5;
LAB_14168d683:
  plVar3 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = plVar5;
  }
  if (plVar3 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x40);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = *param_2;
      *(undefined4 *)(plVar4 + 1) = 0xffffffff;
      *(undefined1 *)(plVar4 + 3) = param_3;
      *(undefined4 *)((longlong)plVar4 + 0x1c) = 0;
      plVar4[4] = 0;
      plVar4[5] = 0;
      plVar4[6] = 0;
      plVar4[7] = 0;
      plVar4[2] = 0;
      plVar5 = plVar4;
    }
    *plVar5 = *param_2;
    iVar2 = (int)param_1[0xb];
    *(int *)(param_1 + 0xb) = iVar2 + 1;
    local_res10 = plVar5;
    if (*(int *)((longlong)param_1 + 0x5c) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 10,iVar2);
    }
    *(longlong **)(param_1[10] + (longlong)iVar2 * 8) = local_res10;
    local_20 = &local_res10;
    local_28 = param_2;
    FUN_141687790(param_1,local_res8,&local_28,0);
    return local_res10;
  }
  return (longlong *)*plVar3;
}



// FUNCTION 14168d760 FlushResults body=780 status=ok
// SIG undefined FlushResults(void)

void FCsvProfilerThreadData::FlushResults
               (longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  LARGE_INTEGER local_res10;
  
  QueryPerformanceCounter(&local_res10);
  *(LARGE_INTEGER *)(param_1 + 8) = local_res10;
  uVar5 = *(undefined8 *)(param_1 + 0xc0);
  uVar18 = (int)uVar5 - *(int *)(param_1 + 200);
  iVar10 = (int)param_2[1] + uVar18;
  *(int *)(param_2 + 1) = iVar10;
  if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2);
  }
  uVar14 = (ulonglong)*(byte *)(param_1 + 200);
  if ((*(byte *)(param_1 + 200) == 0) && (*(longlong *)(param_1 + 200) != 0)) {
    uVar14 = 0x100;
  }
  uVar19 = 0;
  if (uVar18 != 0) {
    do {
      uVar15 = uVar14;
      if ((int)uVar14 == 0x100) {
        lVar17 = *(longlong *)(param_1 + 0x38);
        uVar15 = 0;
        uVar6 = *(undefined8 *)(lVar17 + 0x1800);
        *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + -1;
        *(undefined8 *)(param_1 + 0x38) = uVar6;
        FMemory::operator_delete(lVar17,0x1808);
      }
      lVar17 = *(longlong *)(param_1 + 0x38);
      lVar11 = (longlong)(int)uVar19;
      uVar14 = (ulonglong)((int)uVar15 + 1);
      uVar19 = uVar19 + 1;
      puVar2 = (undefined4 *)(lVar17 + uVar15 * 0x18);
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      lVar16 = *param_2;
      puVar3 = (undefined4 *)(lVar16 + lVar11 * 0x18);
      *puVar3 = *puVar2;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      *(undefined8 *)(lVar16 + 0x10 + lVar11 * 0x18) =
           *(undefined8 *)(lVar17 + 0x10 + uVar15 * 0x18);
    } while (uVar19 < uVar18);
  }
  *(undefined8 *)(param_1 + 200) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x160);
  uVar18 = (int)uVar5 - *(int *)(param_1 + 0x168);
  iVar10 = (int)param_3[1] + uVar18;
  *(int *)(param_3 + 1) = iVar10;
  if (*(int *)((longlong)param_3 + 0xc) < iVar10) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_3);
  }
  uVar19 = (uint)*(byte *)(param_1 + 0x168);
  if ((*(byte *)(param_1 + 0x168) == 0) && (*(longlong *)(param_1 + 0x168) != 0)) {
    uVar19 = 0x100;
  }
  uVar21 = 0;
  uVar20 = uVar21;
  if (uVar18 != 0) {
    do {
      uVar13 = uVar19;
      if (uVar19 == 0x100) {
        lVar17 = *(longlong *)(param_1 + 0xd8);
        uVar6 = *(undefined8 *)(lVar17 + 0x2000);
        *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + -1;
        *(undefined8 *)(param_1 + 0xd8) = uVar6;
        FMemory::operator_delete(lVar17,0x2008);
        uVar13 = 0;
      }
      lVar17 = *(longlong *)(param_1 + 0xd8);
      lVar16 = *param_3;
      uVar19 = uVar13 + 1;
      lVar11 = (longlong)(int)uVar20;
      uVar20 = uVar20 + 1;
      puVar2 = (undefined4 *)((ulonglong)uVar13 * 0x20 + lVar17);
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar3 = (undefined4 *)(lVar11 * 0x20 + lVar16);
      *puVar3 = *puVar2;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      puVar12 = (undefined8 *)((ulonglong)uVar13 * 0x20 + 0x10 + lVar17);
      uVar6 = puVar12[1];
      puVar4 = (undefined8 *)(lVar11 * 0x20 + 0x10 + lVar16);
      *puVar4 = *puVar12;
      puVar4[1] = uVar6;
    } while (uVar20 < uVar18);
  }
  *(undefined8 *)(param_1 + 0x168) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x200);
  uVar18 = (int)uVar5 - *(int *)(param_1 + 0x208);
  iVar10 = (int)param_4[1];
  *(uint *)(param_4 + 1) = iVar10 + uVar18;
  if (*(int *)((longlong)param_4 + 0xc) < (int)(iVar10 + uVar18)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_4,iVar10);
  }
  puVar12 = (undefined8 *)((longlong)iVar10 * 0x20 + *param_4);
  for (uVar19 = uVar18; uVar19 != 0; uVar19 = uVar19 - 1) {
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12 = puVar12 + 4;
  }
  uVar19 = *(uint *)(param_1 + 0x208) & 0x1f;
  if ((uVar19 == 0) && (*(longlong *)(param_1 + 0x208) != 0)) {
    uVar19 = 0x20;
  }
  if (uVar18 != 0) {
    do {
      if (uVar19 == 0x20) {
        lVar17 = *(longlong *)(param_1 + 0x178);
        uVar19 = 0;
        puVar12 = (undefined8 *)(lVar17 + 0x400);
        uVar6 = *puVar12;
        *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + -1;
        *(undefined8 *)(param_1 + 0x178) = uVar6;
        if (lVar17 != 0) {
          lVar16 = 0x20;
          do {
            plVar1 = puVar12 + -4;
            puVar12 = puVar12 + -4;
            lVar16 = lVar16 + -1;
            if (*plVar1 != 0) {
              FMemory::Free();
            }
          } while (lVar16 != 0);
          FMemory::operator_delete(lVar17,0x408);
        }
      }
      lVar16 = (ulonglong)uVar19 * 0x20 + *(longlong *)(param_1 + 0x178);
      lVar17 = (longlong)(int)uVar21 * 0x20 + *param_4;
      FString::operator=(lVar17,lVar16);
      uVar19 = uVar19 + 1;
      uVar21 = uVar21 + 1;
      *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(lVar16 + 0x10);
      *(undefined4 *)(lVar17 + 0x18) = *(undefined4 *)(lVar16 + 0x18);
    } while (uVar21 < uVar18);
  }
  *(undefined8 *)(param_1 + 0x208) = uVar5;
  return;
}



// FUNCTION 14168da70 Get body=195 status=ok
// SIG undefined Get(void)

LPCRITICAL_SECTION FCsvCategoryData::Get(void)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = DAT_1468e34d0;
  if (DAT_1468e34d0 == (LPCRITICAL_SECTION)0x0) {
    lpCriticalSection = (LPCRITICAL_SECTION)operator_new(0x88);
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      InitializeCriticalSection(lpCriticalSection);
      SetCriticalSectionSpinCount(lpCriticalSection,4000);
      lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      lpCriticalSection[1].LockCount = 0;
      lpCriticalSection[1].RecursionCount = 0;
      lpCriticalSection[1].SpinCount = 0;
      lpCriticalSection[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      lpCriticalSection[2].LockCount = -1;
      lpCriticalSection[2].RecursionCount = 0;
      lpCriticalSection[2].LockSemaphore = (HANDLE)0x0;
      *(undefined4 *)&lpCriticalSection[2].SpinCount = 0;
      lpCriticalSection[3].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      lpCriticalSection[3].LockCount = 1;
      lpCriticalSection[3].RecursionCount = 0;
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow();
      p_Var1 = lpCriticalSection[3].DebugInfo;
      p_Var1->Type = 0;
      p_Var1->CreatorBackTraceIndex = 0;
      *(undefined4 *)&p_Var1->field_0x4 = 0;
      p_Var1->CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
    }
    DAT_1468e34d0 = lpCriticalSection;
    ::_guard_xfg_dispatch_icall_nop(&DAT_1468e3840,0,0x800);
  }
  return lpCriticalSection;
}



// FUNCTION 14168db40 FUN_14168db40 body=77 status=ok
// SIG undefined FUN_14168db40(void)

longlong FUN_14168db40(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if (DAT_1468e35e8 == 0) {
    lVar1 = operator_new(0xa0);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = FUN_1416888e0(lVar1);
    }
    lVar1 = DAT_1468e35e8;
    DAT_1468e35e8 = lVar2;
    FUN_14168a020(&DAT_1468e35e8,lVar1);
  }
  return DAT_1468e35e8;
}



// FUNCTION 14168db90 FUN_14168db90 body=230 status=ok
// SIG undefined FUN_14168db90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14168db90(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e41a8) {
    _Init_thread_header(&DAT_1468e41a8);
    if (DAT_1468e41a8 == -1) {
      _DAT_1468e4130 = 0xffffffff;
      _DAT_1468e4100 = 0;
      _DAT_1468e4108 = 0;
      _DAT_1468e4120 = 0;
      _DAT_1468e4128 = 0;
      _DAT_1468e4134 = 0;
      DAT_1468e4140 = 0;
      _DAT_1468e4148 = 0;
      DAT_1468e4150 = 0;
      _DAT_1468e4158 = 0;
      DAT_1468e4170 = 0;
      _DAT_1468e4178 = 0;
      _DAT_1468e4184 = 0;
      DAT_1468e4190 = 0;
      _DAT_1468e4198 = 0;
      DAT_1468e41a0 = 0;
      _DAT_1468e4180 = 0xffffffff;
      atexit(`FLoadTimeTracker::Get'::`2'::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&DAT_1468e41a8);
      return &DAT_1468e4100;
    }
  }
  return &DAT_1468e4100;
}



// FUNCTION 14168dc80 FUN_14168dc80 body=1022 status=ok
// SIG undefined FUN_14168dc80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14168dc80(void)

{
  wchar_t *pwVar1;
  void *_Src;
  char cVar2;
  BOOL BVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  wchar_t **ppwVar12;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  int local_70;
  undefined4 local_6c;
  void *local_68;
  int local_60;
  wchar_t *local_58 [4];
  wchar_t *local_38 [2];
  longlong lVar8;
  
  local_38[0] = (wchar_t *)(DAT_1468387a8 ^ (ulonglong)auStack_98);
  if (DAT_1468e40b8 == (undefined8 *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_1468e40e8) {
      _Init_thread_header(&DAT_1468e40e8);
      if (DAT_1468e40e8 == -1) {
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1468e40c0);
        SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1468e40c0,4000);
        atexit((_func_5014 *)&LAB_143e7ac60);
        _Init_thread_footer(&DAT_1468e40e8);
      }
    }
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468e40c0);
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468e40c0);
    }
    if (DAT_1468e40b8 == (undefined8 *)0x0) {
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
        GetCurrentThreadId();
      }
      puVar5 = (undefined8 *)operator_new(0x1c0);
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        FSelfRegisteringExec::FSelfRegisteringExec(puVar5);
        *puVar5 = &PTR__scalar_deleting_destructor__144cd4bf0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
        *(undefined4 *)(puVar5 + 7) = 0xffffffff;
        *(undefined4 *)((longlong)puVar5 + 0x3c) = 0;
        puVar5[9] = 0;
        *(undefined4 *)(puVar5 + 10) = 0;
        puVar5[0xb] = 0;
        puVar5[0xc] = 0;
        puVar5[0xf] = 0;
        puVar5[0x10] = 0;
        *(undefined4 *)(puVar5 + 0x11) = 0xffffffff;
        *(undefined4 *)((longlong)puVar5 + 0x8c) = 0;
        puVar5[0x13] = 0;
        *(undefined4 *)(puVar5 + 0x14) = 0;
        *(undefined1 *)(puVar5 + 0x15) = 0;
        *(undefined1 *)(puVar5 + 0x20) = 0;
        puVar5[0x21] = 0;
        puVar5[0x22] = 0;
        puVar5[0x23] = 2;
        puVar5[0x24] = 0;
        puVar5[0x25] = 0;
        puVar5[0x26] = 2;
        puVar5[0x27] = 0;
        *(undefined4 *)(puVar5 + 0x28) = 0;
        puVar5[0x29] = 0;
        puVar5[0x2a] = 0;
        puVar5[0x2b] = 0;
        puVar5[0x2c] = 0;
        *(undefined1 *)(puVar5 + 0x2f) = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)(puVar5 + 0x30));
        SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar5 + 0x30),4000);
        puVar5[0x35] = 0;
        puVar5[0x36] = 0;
        puVar5[0x37] = 2;
      }
      lVar9 = 0;
      local_58[0] = L"NoRedist";
      local_58[1] = L"NotForLicensees";
      local_58[2] = L"CarefullyRedist";
      local_58[3] = L"Switch";
      DAT_1468e40b8 = puVar5;
      FUN_1416ae2e0(&local_68);
      ppwVar12 = local_58;
      lVar10 = 4;
      if (local_38 < local_58) {
        lVar10 = lVar9;
      }
      do {
        _Src = local_68;
        pwVar1 = *ppwVar12;
        lVar7 = -1;
        do {
          lVar8 = lVar7;
          lVar7 = lVar8 + 1;
        } while (pwVar1[lVar7] != L'\0');
        lVar11 = (longlong)local_60;
        if ((local_60 != 0) || (iVar4 = 2, (int)lVar8 == -2)) {
          iVar4 = 1;
        }
        iVar4 = iVar4 + (int)lVar7;
        local_78 = (undefined2 *)0x0;
        local_70 = local_60;
        if ((local_60 == 0) && (iVar4 == 0)) {
          local_6c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,local_60 + iVar4,0);
          _guard_xfg_dispatch_icall_nop(local_78,_Src,lVar11 * 2);
        }
        FString::PathAppend(&local_78,pwVar1);
        cVar2 = FPaths::DirectoryExists(&local_78);
        if (cVar2 != '\0') {
          puVar6 = &DAT_143f3eda8;
          if (local_70 != 0) {
            puVar6 = local_78;
          }
          FUN_14168a410(DAT_1468e40b8,puVar6);
        }
        if (local_78 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        ppwVar12 = ppwVar12 + 1;
        lVar9 = lVar9 + 1;
      } while (lVar9 != lVar10);
      if (local_68 != (void *)0x0) {
        FMemory::Free();
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468e40c0);
  }
  return DAT_1468e40b8;
}



// FUNCTION 14168e080 GetArchiveName body=62 status=ok
// SIG undefined GetArchiveName(void)

undefined8 * FArchive::GetArchiveName(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"FArchive",0x12);
  return param_2;
}



// FUNCTION 14168e0c0 FUN_14168e0c0 body=34 status=ok
// SIG undefined FUN_14168e0c0(void)

undefined8 FUN_14168e0c0(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x80))();
  return param_2;
}



// FUNCTION 14168e0f0 GetCategoryIndex body=155 status=ok
// SIG undefined GetCategoryIndex(void)

undefined4 FCsvCategoryData::GetCategoryIndex(LPCRITICAL_SECTION param_1,undefined8 param_2)

{
  BOOL BVar1;
  undefined8 uVar2;
  LIST_ENTRY *pLVar3;
  undefined4 uVar4;
  LIST_ENTRY *pLVar5;
  int local_res8 [2];
  longlong local_18 [2];
  
  BVar1 = TryEnterCriticalSection(param_1);
  if (BVar1 == 0) {
    EnterCriticalSection(param_1);
  }
  uVar2 = FString::ToLower(param_2,local_18);
  TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 1,local_res8,uVar2);
  pLVar3 = (LIST_ENTRY *)0x0;
  if (local_res8[0] != -1) {
    pLVar3 = (LIST_ENTRY *)(&(param_1[1].DebugInfo)->Type + (longlong)local_res8[0] * 0x10);
  }
  pLVar5 = pLVar3 + 1;
  if (pLVar3 == (LIST_ENTRY *)0x0) {
    pLVar5 = (LIST_ENTRY *)0x0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (pLVar5 == (LIST_ENTRY *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(undefined4 *)&pLVar5->Flink;
  }
  LeaveCriticalSection(param_1);
  return uVar4;
}



// FUNCTION 14168e190 GetChangeListNumberForPerfTesting body=71 status=ok
// SIG undefined GetChangeListNumberForPerfTesting(void)

int GetChangeListNumberForPerfTesting(void)

{
  int iVar1;
  undefined8 uVar2;
  int local_res8 [8];
  
  uVar2 = FEngineVersion::Current();
  iVar1 = FEngineVersionBase::GetChangelist(uVar2);
  local_res8[0] = 0;
  uVar2 = FCommandLine::Get();
  FParse::Value(uVar2,L"-gABC=",local_res8);
  if (local_res8[0] != 0) {
    iVar1 = local_res8[0];
  }
  return iVar1;
}



// FUNCTION 14168e1e0 GetCustomVersions body=140 status=ok
// SIG undefined GetCustomVersions(void)

undefined8 FArchive::GetCustomVersions(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)0x0;
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  if (*(undefined8 **)(param_1 + 0x60) == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)operator_new(0x10);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar2 = puVar1;
    }
    *(undefined8 **)(param_1 + 0x60) = puVar2;
    puVar1 = puVar2;
  }
  if (*(char *)(param_1 + 0x88) != '\0') {
    *(undefined1 *)(param_1 + 0x88) = 0;
    if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
      uVar3 = FUN_14168e7f0();
      FCustomVersionContainer::operator=(*(undefined8 *)(param_1 + 0x60),uVar3);
      return *(undefined8 *)(param_1 + 0x60);
    }
    *(undefined4 *)(puVar1 + 1) = 0;
    if (*(int *)((longlong)puVar1 + 0xc) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (puVar1,0);
    }
  }
  return *(undefined8 *)(param_1 + 0x60);
}



// FUNCTION 14168e270 FUN_14168e270 body=255 status=ok
// SIG undefined FUN_14168e270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14168e270(void)

{
  undefined8 uVar1;
  longlong local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e40b0) {
    _Init_thread_header(&DAT_1468e40b0);
    if (DAT_1468e40b0 == -1) {
      uVar1 = FPaths::RootDir();
      _DAT_1468e4090 = 0xffffffff;
      DAT_1468e4040 = 0;
      _DAT_1468e4048 = 0;
      DAT_1468e4050 = 0;
      _DAT_1468e4058 = 0;
      _DAT_1468e4060 = 0;
      _DAT_1468e4068 = 0;
      _DAT_1468e4080 = 0;
      _DAT_1468e4088 = 0;
      _DAT_1468e4094 = 0;
      DAT_1468e40a0 = 0;
      _DAT_1468e40a8 = 0;
      FString::operator=(&DAT_1468e4040,uVar1);
      FUProjectDictionary::Refresh(&DAT_1468e4040);
      if (local_18 != 0) {
        FMemory::Free();
      }
      atexit(`FUProjectDictionary::GetDefault'::`2'::
             _dynamic_atexit_destructor_for__DefaultDictionary__);
      _Init_thread_footer(&DAT_1468e40b0);
      return &DAT_1468e4040;
    }
  }
  return &DAT_1468e4040;
}



// FUNCTION 14168e370 GetFriendlyName body=332 status=ok
// SIG undefined GetFriendlyName(void)

longlong * FCustomVersion::GetFriendlyName(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *piVar6;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  if (param_1[3] != 0) {
    *param_2 = param_1[3];
    return param_2;
  }
  uVar2 = *param_1;
  uVar3 = param_1[1];
  puVar4 = (undefined8 *)FUN_14168e7f0();
  lVar1 = DAT_1468e3830;
  local_18 = (int)uVar2;
  iStack_14 = (int)((ulonglong)uVar2 >> 0x20);
  iStack_10 = (int)uVar3;
  iStack_c = (int)((ulonglong)uVar3 >> 0x20);
  if (((iStack_14 == DAT_1468e381c && iStack_c == DAT_1468e3824) && local_18 == DAT_1468e3818) &&
      iStack_10 == DAT_1468e3820) {
    param_1[3] = DAT_1468e3830;
    *param_2 = lVar1;
    return param_2;
  }
  piVar5 = (int *)*puVar4;
  piVar6 = piVar5 + (longlong)*(int *)(puVar4 + 1) * 8;
  for (; piVar5 != piVar6; piVar5 = piVar5 + 8) {
    if (((piVar5[1] == iStack_14 && piVar5[3] == iStack_c) && piVar5[2] == iStack_10) &&
        *piVar5 == local_18) goto LAB_14168e469;
  }
  piVar5 = (int *)0x0;
LAB_14168e469:
  if (piVar5 != (int *)0x0) {
    lVar1 = *(longlong *)(piVar5 + 6);
    param_1[3] = lVar1;
    *param_2 = lVar1;
    return param_2;
  }
  param_1[3] = 0x3a;
  *param_2 = 0x3a;
  return param_2;
}



// FUNCTION 14168e4c0 GetFriendlyName body=238 status=ok
// SIG undefined GetFriendlyName(void)

undefined8 *
FCustomVersionContainer::GetFriendlyName(undefined8 *param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  
  iVar6 = DAT_1468e3824;
  iVar5 = DAT_1468e381c;
  iVar1 = *param_3;
  iVar2 = param_3[1];
  iVar3 = param_3[2];
  iVar4 = param_3[3];
  *param_2 = 0x3a;
  if (((iVar2 == iVar5 && iVar4 == iVar6) && DAT_1468e3818 == iVar1) && DAT_1468e3820 == iVar3) {
    *param_2 = DAT_1468e3830;
    return param_2;
  }
  piVar7 = (int *)*param_1;
  piVar8 = piVar7 + (longlong)*(int *)(param_1 + 1) * 8;
  if (piVar7 != piVar8) {
    do {
      if (((piVar7[1] == param_3[1] && piVar7[3] == param_3[3]) && piVar7[2] == param_3[2]) &&
          *piVar7 == *param_3) goto LAB_14168e598;
      piVar7 = piVar7 + 8;
    } while (piVar7 != piVar8);
  }
  piVar7 = (int *)0x0;
LAB_14168e598:
  if (piVar7 != (int *)0x0) {
    *param_2 = *(undefined8 *)(piVar7 + 6);
  }
  return param_2;
}



// FUNCTION 14168e5b0 GetFullName body=563 status=ok
// SIG undefined GetFullName(void)

undefined8 * FCsvProcessedEvent::GetFullName(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  void *_Dst;
  void *pvVar2;
  BOOL BVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  WORD *pWVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  int iVar10;
  void *local_38;
  int local_30;
  int local_2c;
  
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  if (iVar5 == 0) {
    FString::FString(param_2,param_1);
    return param_2;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)FCsvCategoryData::Get();
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  pvVar9 = (void *)0x0;
  pWVar4 = &(lpCriticalSection[3].DebugInfo)->Type + (longlong)iVar5 * 8;
  local_38 = (void *)0x0;
  local_30 = *(int *)(pWVar4 + 4);
  lVar6 = (longlong)local_30;
  pvVar2 = *(void **)pWVar4;
  if (local_30 == 0) {
    local_2c = 0;
    iVar5 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
    pvVar9 = local_38;
    ::_guard_xfg_dispatch_icall_nop(local_38,pvVar2,lVar6 * 2);
    iVar5 = local_30;
  }
  LeaveCriticalSection(lpCriticalSection);
  local_38 = pvVar9;
  if (local_2c < (int)(iVar5 + 1 + (uint)(iVar5 == 0))) {
    local_30 = iVar5;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38);
    iVar5 = local_30;
  }
  local_30 = (2 - (uint)(iVar5 != 0)) + iVar5;
  if (local_2c < local_30) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar5);
  }
  pvVar2 = local_38;
  puVar1 = (undefined2 *)((longlong)local_38 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
  *puVar1 = 0x2f;
  puVar1[1] = 0;
  if (local_30 < 2) {
    FString::FString(param_2,param_1);
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 1) + -1;
    if (*(int *)(param_1 + 1) == 0) {
      iVar5 = 0;
    }
    if ((local_30 != 0) || (iVar8 = 1, iVar5 == 0)) {
      iVar8 = 0;
    }
    iVar7 = local_30;
    if (local_2c < iVar8 + local_30 + iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38);
      iVar7 = local_30;
    }
    pvVar2 = (void *)*param_1;
    pvVar9 = local_38;
    iVar8 = iVar7;
    iVar10 = local_2c;
    if (iVar5 != 0) {
      local_30 = iVar5 + (uint)(iVar7 == 0) + iVar7;
      if (local_2c < local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar7);
      }
      iVar10 = local_2c;
      iVar8 = local_30;
      pvVar9 = local_38;
      _Dst = (void *)((longlong)local_38 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(_Dst,pvVar2,(longlong)iVar5 * 2);
      *(undefined2 *)((longlong)iVar5 * 2 + (longlong)_Dst) = 0;
    }
    *param_2 = pvVar9;
    *(int *)(param_2 + 1) = iVar8;
    *(int *)((longlong)param_2 + 0xc) = iVar10;
  }
  return param_2;
}



// FUNCTION 14168e7f0 FUN_14168e7f0 body=108 status=ok
// SIG undefined FUN_14168e7f0(void)

undefined8 * FUN_14168e7f0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e41c0) {
    _Init_thread_header(&DAT_1468e41c0);
    if (DAT_1468e41c0 == -1) {
      atexit((_func_5014 *)&LAB_143e7af30);
      _Init_thread_footer(&DAT_1468e41c0);
      return &DAT_1468e41b0;
    }
  }
  return &DAT_1468e41b0;
}



// FUNCTION 14168e860 GetModule body=135 status=ok
// SIG undefined GetModule(void)

undefined8 FModuleManager::GetModule(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong local_18;
  longlong *local_10;
  
  FindModule(param_1,&local_18,param_2);
  plVar5 = local_10;
  uVar6 = 0;
  if (local_18 != 0) {
    uVar6 = *(undefined8 *)(local_18 + 0x28);
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
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 14168e8f0 GetModulePtr_Internal body=157 status=ok
// SIG undefined GetModulePtr_Internal(void)

longlong FModuleManager::GetModulePtr_Internal(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong local_18;
  longlong *local_10;
  
  uVar6 = FUN_14168dc80();
  FindModule(uVar6,&local_18,param_1);
  plVar5 = local_10;
  if ((local_18 == 0) || (lVar7 = *(longlong *)(local_18 + 0x28), lVar7 == 0)) {
    lVar7 = 0;
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
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return lVar7;
  }
  return lVar7;
}



// FUNCTION 14168e990 FUN_14168e990 body=188 status=ok
// SIG undefined FUN_14168e990(void)

void FUN_14168e990(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  BOOL BVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  }
  iVar1 = *(int *)(param_1 + 0x28);
  uVar5 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar1) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
  }
  uVar6 = uVar5;
  if (0 < *(int *)(param_1 + 0x28)) {
    do {
      iVar1 = (int)param_2[1];
      lVar2 = *(longlong *)(param_1 + 0x20);
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(uVar6 + lVar2);
      uVar6 = uVar6 + 8;
    } while ((int)uVar4 < *(int *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00014168ea45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 14168ea50 GetRegistered body=5 status=ok
// SIG undefined GetRegistered(void)

undefined8 * FCustomVersionContainer::GetRegistered(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e41c0) {
    _Init_thread_header(&DAT_1468e41c0);
    if (DAT_1468e41c0 == -1) {
      atexit((_func_5014 *)&LAB_143e7af30);
      _Init_thread_footer(&DAT_1468e41c0);
      return &DAT_1468e41b0;
    }
  }
  return &DAT_1468e41b0;
}



// FUNCTION 14168ea60 GetRelativeProjectPathForGame body=493 status=ok
// SIG undefined GetRelativeProjectPathForGame(void)

undefined8 *
FUProjectDictionary::GetRelativeProjectPathForGame
          (longlong param_1,undefined8 *param_2,short *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  short *psVar5;
  longlong lVar6;
  void *pvVar7;
  undefined2 *puVar8;
  int local_res8 [2];
  void *local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  longlong local_38 [2];
  
  local_48 = 0;
  local_40 = 0;
  lVar6 = -1;
  if ((param_3 != (short *)0x0) && (lVar4 = lVar6, *param_3 != 0)) {
    do {
      lVar4 = lVar4 + 1;
    } while (param_3[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_40 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    FGenericPlatformString::Memcpy(local_48,param_3,(longlong)(int)uVar3 * 2);
  }
  puVar2 = (undefined8 *)FString::ToLower(&local_48,local_38);
  puVar8 = &DAT_143f3eda8;
  if (*(int *)(puVar2 + 1) == 0) {
    psVar5 = &DAT_143f3eda8;
  }
  else {
    psVar5 = (short *)*puVar2;
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  pvVar7 = (void *)0x0;
  if ((psVar5 != (short *)0x0) && (pvVar7 = (void *)0x0, *psVar5 != 0)) {
    do {
      lVar6 = lVar6 + 1;
    } while (psVar5[lVar6] != 0);
    uVar3 = (int)lVar6 + 1;
    local_50 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    }
    pvVar7 = local_58;
    FGenericPlatformString::Memcpy(local_58,psVar5,(longlong)(int)uVar3 * 2);
  }
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x20,local_res8,&local_58);
  if (local_res8[0] == -1) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x20) + (longlong)local_res8[0] * 0x28;
  }
  puVar2 = (undefined8 *)(lVar6 + 0x10);
  if (lVar6 == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (puVar2 == (undefined8 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar1 = *(int *)(puVar2 + 1);
    pvVar7 = (void *)*puVar2;
    local_58 = (void *)0x0;
    local_50 = CONCAT44(local_50._4_4_,iVar1);
    if (iVar1 == 0) {
      local_50 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,iVar1,0);
      ::_guard_xfg_dispatch_icall_nop(local_58,pvVar7,(longlong)iVar1 * 2);
    }
    if (*(int *)(param_4 + 1) != 0) {
      puVar8 = (undefined2 *)*param_4;
    }
    FUN_141677bd0(&local_58,puVar8);
    *param_2 = local_58;
    *(undefined4 *)(param_2 + 1) = (undefined4)local_50;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_50._4_4_;
  }
  return param_2;
}



// FUNCTION 14168ec50 FUN_14168ec50 body=295 status=ok
// SIG undefined FUN_14168ec50(void)

LPVOID FUN_14168ec50(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  int iVar2;
  DWORD DVar3;
  BOOL BVar4;
  LPVOID lpTlsValue;
  longlong lVar5;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468e40f0) {
    _Init_thread_header(&DAT_1468e40f0);
    if (DAT_1468e40f0 == -1) {
      DAT_1468e40ec = TlsAlloc();
      _Init_thread_footer(&DAT_1468e40f0);
    }
  }
  lpTlsValue = TlsGetValue(DAT_1468e40ec);
  if (lpTlsValue == (LPVOID)0x0) {
    lVar5 = operator_new(0x2a0);
    if (lVar5 == 0) {
      lpTlsValue = (LPVOID)0x0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      DVar3 = GetCurrentThreadId();
      lpTlsValue = (LPVOID)FUN_141688bf0(lVar5,DVar3,uVar1);
    }
    TlsSetValue(DAT_1468e40ec,lpTlsValue);
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x30);
    BVar4 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar4 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    iVar2 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = iVar2 + 1;
    if (*(int *)(param_1 + 0x2c) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                ((longlong *)(param_1 + 0x20),iVar2);
    }
    *(LPVOID *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 8) = lpTlsValue;
    LeaveCriticalSection(lpCriticalSection);
  }
  return lpTlsValue;
}



// FUNCTION 14168ed80 FUN_14168ed80 body=16 status=ok
// SIG undefined FUN_14168ed80(void)

int FUN_14168ed80(undefined8 *param_1)

{
  return (int)((ulonglong)*param_1 >> 0x20) * 0x17 + (int)*param_1;
}



// FUNCTION 14168ed90 GetUniqueStringIndex body=766 status=ok
// SIG undefined GetUniqueStringIndex(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FAnsiStringRegister::GetUniqueStringIndex(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int *piVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined1 auStack_198 [32];
  int local_178;
  int local_174;
  undefined2 *local_170;
  ulonglong local_168;
  undefined2 **local_160;
  int *local_158;
  void *local_150;
  undefined1 local_148 [256];
  longlong local_48;
  short *local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_150 = param_1;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_1464aff90,&local_178,param_1);
  piVar11 = (int *)0x0;
  piVar7 = piVar11;
  if (local_178 != -1) {
    piVar7 = (int *)(DAT_1464aff90 + (longlong)local_178 * 0x18);
  }
  piVar3 = piVar7 + 2;
  if (piVar7 == (int *)0x0) {
    piVar3 = piVar11;
  }
  if (piVar3 == (int *)0x0) {
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(local_148,param_1);
    local_170 = (undefined2 *)0x0;
    local_168 = 0;
    if ((local_40 != (short *)0x0) && (*local_40 != 0)) {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (local_40[lVar9] != 0);
      uVar8 = (int)lVar9 + 1;
      local_168 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_170,0);
      }
      FGenericPlatformString::Memcpy(local_170,local_40,(longlong)(int)uVar8 * 2);
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    piVar7 = piVar11;
    if (DAT_1464affe8 != DAT_1464b0014) {
      puVar5 = &DAT_143f3eda8;
      if ((int)local_168 != 0) {
        puVar5 = local_170;
      }
      iVar1 = FUN_140438070(puVar5);
      puVar4 = DAT_1464b0020;
      if (DAT_1464b0020 == (undefined *)0x0) {
        puVar4 = &DAT_1464b0018;
      }
      iVar1 = *(int *)(puVar4 + ((longlong)DAT_1464b0028 - 1U & (longlong)iVar1) * 4);
      while (iVar1 != -1) {
        lVar9 = (longlong)iVar1 * 0x20;
        puVar5 = &DAT_143f3eda8;
        if ((int)local_168 != 0) {
          puVar5 = local_170;
        }
        if (*(int *)(lVar9 + 8 + DAT_1464affe0) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = *(undefined2 **)(lVar9 + DAT_1464affe0);
        }
        iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar5);
        if (iVar2 == 0) {
          if (iVar1 != -1) {
            piVar7 = (int *)(DAT_1464affe0 + lVar9);
          }
          break;
        }
        iVar1 = *(int *)(lVar9 + 0x18 + DAT_1464affe0);
      }
    }
    piVar3 = piVar7 + 4;
    if (piVar7 == (int *)0x0) {
      piVar3 = piVar11;
    }
    if (piVar3 == (int *)0x0) {
      local_174 = DAT_1468e37a0;
      local_160 = &local_170;
      local_158 = &local_174;
      FUN_1416874d0(&DAT_1464affe0,&local_178,&local_160,0);
      iVar1 = DAT_1468e37a0;
      lVar9 = (longlong)DAT_1468e37a0;
      DAT_1468e37a0 = DAT_1468e37a0 + 1;
      if (DAT_1468e37a4 < DAT_1468e37a0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1468e3798,iVar1);
      }
      puVar5 = local_170;
      puVar10 = (undefined8 *)(lVar9 * 0x10 + DAT_1468e3798);
      *puVar10 = 0;
      lVar9 = (longlong)(int)local_168;
      *(int *)(puVar10 + 1) = (int)local_168;
      if ((int)local_168 == 0) {
        *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar10,local_168 & 0xffffffff,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar10,puVar5,lVar9 * 2);
      }
      local_160 = &local_150;
      local_158 = &local_174;
      TSet<TTuple<FFlareResourceDescription_*,int>,TDefaultMapHashableKeyFuncs<FFlareResourceDescription_*,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,int_const_&>_>
                (&DAT_1464aff90,&local_178,&local_160,0);
      iVar1 = local_174;
    }
    else {
      local_160 = &local_150;
      local_158 = piVar3;
      TSet<TTuple<FFlareResourceDescription_*,int>,TDefaultMapHashableKeyFuncs<FFlareResourceDescription_*,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,int_const_&>_>(&DAT_1464aff90);
      iVar1 = *piVar3;
    }
    if (local_170 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  else {
    iVar1 = *piVar3;
  }
  return iVar1;
}



// FUNCTION 14168f090 GetVersion body=74 status=ok
// SIG DWORD GetVersion(void)

DWORD __stdcall FCustomVersionContainer::GetVersion(void)

{
  DWORD DVar1;
  int *in_RDX;
  
  if (((in_RDX[1] == DAT_1468e381c && in_RDX[2] == DAT_1468e3820) && in_RDX[3] == DAT_1468e3824) &&
      *in_RDX == DAT_1468e3818) {
    return 0x468e3818;
  }
  DVar1 = TArray<FCustomVersion,FDefaultAllocator>::FindByKey<FGuid>();
  return DVar1;
}



// FUNCTION 14168f0e0 FUN_14168f0e0 body=522 status=ok
// SIG undefined FUN_14168f0e0(void)

void FUN_14168f0e0(longlong *param_1)

{
  wchar_t _C;
  void *_Src;
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  wint_t wVar4;
  wint_t wVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  wint_t *pwVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined4 local_res8 [2];
  undefined2 *local_78;
  int local_70;
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined4 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  puVar10 = (undefined2 *)0x0;
  local_78 = (undefined2 *)0x0;
  local_70 = *(int *)((undefined8 *)*param_1 + 1);
  lVar11 = (longlong)local_70;
  _Src = *(void **)*param_1;
  if (local_70 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,local_70,0);
    puVar10 = local_78;
    _guard_xfg_dispatch_icall_nop(local_78,_Src,lVar11 * 2);
  }
  iVar2 = local_70;
  pwVar7 = L"START";
  puVar9 = &DAT_143f3eda8;
  if (local_70 != 0) {
    puVar9 = puVar10;
  }
  do {
    _C = *(wchar_t *)((longlong)(puVar9 + -0xa2668f8c) + (longlong)pwVar7);
    if ((_C == L'\0') && (*pwVar7 == L'\0')) goto LAB_14168f1bc;
    if (_C != *pwVar7) {
      wVar4 = towlower(_C);
      wVar5 = towlower(*pwVar7);
      if (wVar4 != wVar5) goto LAB_14168f1b2;
    }
    pwVar7 = pwVar7 + 1;
  } while( true );
LAB_14168f212:
  if (wVar4 == wVar5) {
LAB_14168f21c:
    uVar6 = FUN_14168db40();
    FCsvProfiler::EndCapture(uVar6);
    goto LAB_14168f2a2;
  }
  local_res8[0] = 0;
  puVar9 = &DAT_143f3eda8;
  if (iVar2 != 0) {
    puVar9 = puVar10;
  }
  cVar3 = FParse::Value(puVar9,L"FRAMES=",local_res8);
  uVar1 = local_res8[0];
  if (cVar3 == '\0') goto LAB_14168f2a2;
  lVar11 = FUN_14168db40();
  local_60 = uVar1;
  goto LAB_14168f258;
LAB_14168f1b2:
  if (wVar4 != wVar5) {
    pwVar8 = &DAT_144cd1f28;
    puVar9 = &DAT_143f3eda8;
    if (iVar2 != 0) {
      puVar9 = puVar10;
    }
    do {
      wVar4 = *(wint_t *)((longlong)pwVar8 + (longlong)(puVar9 + -0xa2668f94));
      if ((wVar4 == 0) && (*pwVar8 == 0)) goto LAB_14168f21c;
      if (wVar4 != *pwVar8) {
        wVar4 = towlower(wVar4);
        wVar5 = towlower(*pwVar8);
        if (wVar4 != wVar5) goto LAB_14168f212;
      }
      pwVar8 = pwVar8 + 1;
    } while( true );
  }
LAB_14168f1bc:
  lVar11 = FUN_14168db40();
  local_60 = 0xffffffff;
LAB_14168f258:
  local_64 = DAT_1468e383c;
  local_68[0] = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  FUN_14168cf90(lVar11 + 0x70,local_68);
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
LAB_14168f2a2:
  if (puVar10 != (undefined2 *)0x0) {
    FMemory::Free(puVar10);
  }
  return;
}



// FUNCTION 14168f2f0 FUN_14168f2f0 body=375 status=ok
// SIG undefined FUN_14168f2f0(void)

undefined8 FUN_14168f2f0(undefined8 param_1,longlong *param_2)

{
  short *psVar1;
  wchar_t *pwVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  wchar_t *pwVar8;
  int iVar9;
  wchar_t *_Source;
  wchar_t *local_48;
  int local_40;
  undefined4 local_3c;
  wchar_t *local_38;
  ulonglong local_30;
  
  psVar1 = (short *)*param_2;
  lVar6 = -1;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (psVar1[lVar4] != 0);
  if ((int)lVar4 < 0x1b) {
    return 0;
  }
  iVar9 = 0;
  local_38 = (wchar_t *)0x0;
  local_30 = 0;
  pwVar8 = (wchar_t *)0x0;
  if ((psVar1 != (short *)0x0) && (pwVar8 = (wchar_t *)0x0, *psVar1 != 0)) {
    do {
      lVar6 = lVar6 + 1;
    } while (psVar1[lVar6] != 0);
    uVar5 = (int)lVar6 + 1;
    local_30 = (ulonglong)uVar5;
    uVar7 = uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      uVar7 = (uint)local_30;
    }
    pwVar8 = local_38;
    FGenericPlatformString::Memcpy(local_38,psVar1,(longlong)(int)uVar5 * 2);
    if (uVar7 != 0) {
      iVar9 = uVar7 - 1;
      _Source = pwVar8;
      goto LAB_14168f3a7;
    }
  }
  _Source = L"";
LAB_14168f3a7:
  local_48 = (wchar_t *)0x0;
  local_3c = 0;
  if (0x1b < iVar9) {
    iVar9 = 0x1b;
  }
  local_40 = iVar9 + 1;
  if (iVar9 == 0) {
    local_40 = 0;
  }
  if ((0 < local_40) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0), pwVar2 = local_48, 0 < local_40))
  {
    wcsncpy(local_48,_Source,(longlong)iVar9);
    pwVar2[iVar9] = L'\0';
  }
  cVar3 = FUN_141690730(&local_48,param_1);
  if (local_48 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (pwVar8 != (wchar_t *)0x0) {
    FMemory::Free(pwVar8);
  }
  if (cVar3 == '\0') {
    return 0;
  }
  *param_2 = *param_2 + 0x36;
  return 1;
}



// FUNCTION 14168f470 FUN_14168f470 body=1174 status=ok
// SIG undefined FUN_14168f470(void)

void FUN_14168f470(longlong param_1)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  PRTL_CRITICAL_SECTION_DEBUG *pp_Var3;
  char cVar4;
  BOOL BVar5;
  undefined8 uVar6;
  longlong *plVar7;
  LPCRITICAL_SECTION p_Var8;
  LPCRITICAL_SECTION p_Var9;
  LPCRITICAL_SECTION p_Var10;
  undefined2 *puVar11;
  LPCRITICAL_SECTION p_Var12;
  uint uVar13;
  LPCRITICAL_SECTION p_Var14;
  undefined4 local_res10 [2];
  int local_res18 [2];
  LARGE_INTEGER local_res20;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  int local_b0;
  undefined1 local_a8 [4];
  undefined4 local_a4;
  undefined4 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50 [3];
  
  p_Var10 = (LPCRITICAL_SECTION)0x0;
  local_res10[0] = 0;
  uVar6 = FCommandLine::Get();
  cVar4 = FParse::Param(uVar6,L"csvGpuStats");
  if (cVar4 != '\0') {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar7 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.GPUCsvStatsEnabled")
    ;
    if (plVar7 != (longlong *)0x0) {
      FString::PrintfImpl(&local_b8,&DAT_143f3edc0,1);
      puVar11 = &DAT_143f3eda8;
      if (local_b0 != 0) {
        puVar11 = local_b8;
      }
      (**(code **)(*plVar7 + 0x60))(plVar7,puVar11,0x8000000);
      if (local_b8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  uVar6 = FCommandLine::Get();
  cVar4 = FParse::Param(uVar6,L"csvTest");
  if (cVar4 != '\0') {
    DAT_1468e362d = 1;
  }
  uVar6 = FCommandLine::Get();
  cVar4 = FParse::Param(uVar6,L"csvTestMT");
  if (cVar4 != '\0') {
    DAT_1468e362d = 1;
    DAT_1468e362e = 1;
  }
  local_c8 = 0;
  local_c0 = 0;
  uVar6 = FCommandLine::Get();
  cVar4 = FParse::Value(uVar6,L"csvCategories=",&local_c8,1);
  if (cVar4 != '\0') {
    local_d8 = (longlong *)0x0;
    local_d0 = 0;
    FUN_141594550(&local_c8,&local_d8,&DAT_144cd18fc,1);
    p_Var9 = p_Var10;
    iVar1 = (int)local_d0;
    plVar7 = local_d8;
    if (0 < (int)local_d0) {
      do {
        plVar7 = local_d8;
        p_Var12 = DAT_1468e34d0;
        if (DAT_1468e34d0 == (LPCRITICAL_SECTION)0x0) {
          p_Var8 = (LPCRITICAL_SECTION)operator_new(0x88);
          p_Var12 = p_Var10;
          if (p_Var8 != (LPCRITICAL_SECTION)0x0) {
            InitializeCriticalSection(p_Var8);
            SetCriticalSectionSpinCount(p_Var8,4000);
            p_Var8[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
            p_Var8[1].LockCount = 0;
            p_Var8[1].RecursionCount = 0;
            p_Var8[1].SpinCount = 0;
            p_Var8[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
            p_Var8[2].LockCount = -1;
            p_Var8[2].RecursionCount = 0;
            p_Var8[2].LockSemaphore = (HANDLE)0x0;
            *(undefined4 *)&p_Var8[2].SpinCount = 0;
            p_Var8[3].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
            p_Var8[3].LockCount = 1;
            p_Var8[3].RecursionCount = 0;
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow();
            p_Var2 = p_Var8[3].DebugInfo;
            p_Var2->Type = 0;
            p_Var2->CreatorBackTraceIndex = 0;
            *(undefined4 *)&p_Var2->field_0x4 = 0;
            p_Var2->CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
            p_Var12 = p_Var8;
          }
          DAT_1468e34d0 = p_Var12;
          _guard_xfg_dispatch_icall_nop(&DAT_1468e3840,0,0x800);
        }
        BVar5 = TryEnterCriticalSection(p_Var12);
        if (BVar5 == 0) {
          EnterCriticalSection(p_Var12);
        }
        uVar6 = FString::ToLower(plVar7 + (longlong)(int)p_Var9 * 2,local_50);
        TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
        ::FindId(p_Var12 + 1,local_res18,uVar6);
        p_Var8 = p_Var10;
        if (local_res18[0] != -1) {
          p_Var8 = (LPCRITICAL_SECTION)
                   (&(p_Var12[1].DebugInfo)->Type + (longlong)local_res18[0] * 0x10);
        }
        p_Var14 = (LPCRITICAL_SECTION)&p_Var8->OwningThread;
        if (p_Var8 == (LPCRITICAL_SECTION)0x0) {
          p_Var14 = p_Var10;
        }
        if (local_50[0] != 0) {
          FMemory::Free();
        }
        if (p_Var14 == (LPCRITICAL_SECTION)0x0) {
          LeaveCriticalSection(p_Var12);
        }
        else {
          iVar1 = *(int *)&p_Var14->DebugInfo;
          LeaveCriticalSection(p_Var12);
          if (0 < iVar1) {
            (&DAT_1468e3840)[iVar1] = 1;
          }
        }
        uVar13 = (int)p_Var9 + 1;
        p_Var9 = (LPCRITICAL_SECTION)(ulonglong)uVar13;
        iVar1 = (int)local_d0;
        plVar7 = local_d8;
      } while ((int)uVar13 < (int)local_d0);
    }
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free(local_d8);
    }
  }
  uVar6 = FCommandLine::Get();
  cVar4 = FParse::Param(uVar6,L"csvNoProcessingThread");
  p_Var9 = (LPCRITICAL_SECTION)(ulonglong)DAT_1464aff88;
  if (cVar4 != '\0') {
    p_Var9 = p_Var10;
  }
  DAT_1464aff88 = (byte)p_Var9;
  cVar4 = FUN_141636a40();
  p_Var9 = (LPCRITICAL_SECTION)(ulonglong)DAT_1464aff88;
  if (cVar4 == '\0') {
    p_Var9 = p_Var10;
  }
  DAT_1464aff88 = (byte)p_Var9;
  uVar6 = FCommandLine::Get();
  cVar4 = FParse::Value(uVar6,L"csvCaptureFrames=",local_res10);
  if (cVar4 != '\0') {
    local_a4 = DAT_1468e383c;
    local_a0 = local_res10[0];
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_a8[0] = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    FUN_14168cf90(param_1 + 0x70,local_a8);
    if (local_88 != 0) {
      FMemory::Free();
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
    FUN_14168ad30(param_1);
    uVar13 = (uint)DAT_1468e3758;
    p_Var9 = DAT_1468e36d0;
    p_Var12 = DAT_1468e36d8;
    if ((DAT_1468e3758 & 0xf) == 0) {
      p_Var9 = (LPCRITICAL_SECTION)operator_new(0x88);
      if (p_Var9 != (LPCRITICAL_SECTION)0x0) {
        p_Var9[3].LockCount = 0;
        p_Var9[3].RecursionCount = 0;
        p_Var10 = p_Var9;
      }
      DAT_1468e3768 = DAT_1468e3768 + 1;
      p_Var9 = p_Var10;
      p_Var12 = p_Var10;
      if (DAT_1468e36d8 != (LPCRITICAL_SECTION)0x0) {
        *(LPCRITICAL_SECTION *)&DAT_1468e36d8[3].LockCount = p_Var10;
        p_Var9 = DAT_1468e36d0;
      }
    }
    DAT_1468e36d8 = p_Var12;
    DAT_1468e36d0 = p_Var9;
    pp_Var3 = &DAT_1468e36d8->DebugInfo;
    QueryPerformanceCounter(&local_res20);
    *(LARGE_INTEGER *)(pp_Var3 + (uVar13 & 0xf)) = local_res20;
    DAT_1468e3758 = DAT_1468e3758 + 1;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14168f910 InitFromArray body=274 status=ok
// SIG undefined InitFromArray(void)

void FHistogram::InitFromArray(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  param_1[4] = 0x7fefffffffffffff;
  param_1[2] = 0;
  param_1[5] = -0x10000000000001;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  lVar8 = (longlong)(int)param_2[1];
  if (0 < lVar8) {
    lVar3 = *param_2;
    lVar7 = 0;
    do {
      iVar2 = (int)param_1[1];
      lVar1 = lVar7 + 1;
      iVar4 = iVar2 + 1;
      *(int *)(param_1 + 1) = iVar4;
      if (lVar1 == lVar8) {
        if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(param_1,iVar2);
        }
        uVar5 = *(undefined8 *)(lVar3 + lVar7 * 8);
        puVar6 = (undefined8 *)((longlong)iVar2 * 0x20 + *param_1);
        puVar6[1] = 0x47efffffe0000000;
      }
      else {
        if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(param_1,iVar2);
        }
        uVar5 = *(undefined8 *)(lVar3 + lVar7 * 8);
        puVar6 = (undefined8 *)((longlong)iVar2 * 0x20 + *param_1);
        puVar6[1] = *(undefined8 *)(lVar3 + 8 + lVar7 * 8);
      }
      *(undefined4 *)(puVar6 + 3) = 0;
      puVar6[2] = 0;
      *puVar6 = uVar5;
      lVar7 = lVar1;
    } while (lVar1 < lVar8);
  }
  return;
}



// FUNCTION 14168fa30 InitHitchTracking body=1135 status=ok
// SIG undefined InitHitchTracking(void)

void FHistogram::InitHitchTracking(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  uint uStack_2c;
  
  param_1[2] = 0;
  param_1[4] = 0x7fefffffffffffff;
  param_1[3] = 0;
  param_1[5] = -0x10000000000001;
  iVar4 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,iVar4);
  }
  lVar3 = *param_1;
  puVar1 = (undefined8 *)((longlong)iVar4 * 0x20 + lVar3);
  *puVar1 = 0;
  puVar1[1] = 0x4022000000000000;
  puVar2 = (undefined4 *)((longlong)iVar4 * 0x20 + 0x10 + lVar3);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = uStack_2c;
  iVar4 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,iVar4);
  }
  lVar3 = *param_1;
  puVar1 = (undefined8 *)((longlong)iVar4 * 0x20 + lVar3);
  *puVar1 = 0x4022000000000000;
  puVar1[1] = 0x4031000000000000;
  puVar2 = (undefined4 *)((longlong)iVar4 * 0x20 + 0x10 + lVar3);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = uStack_2c;
  iVar4 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,iVar4);
  }
  lVar3 = *param_1;
  puVar1 = (undefined8 *)((longlong)iVar4 * 0x20 + lVar3);
  *puVar1 = 0x4031000000000000;
  puVar1[1] = 0x4041000000000000;
  puVar2 = (undefined4 *)((longlong)iVar4 * 0x20 + 0x10 + lVar3);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = uStack_2c;
  iVar4 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,iVar4);
  }
  lVar3 = *param_1;
  puVar1 = (undefined8 *)((longlong)iVar4 * 0x20 + lVar3);
  *puVar1 = 0x4041000000000000;
  puVar1[1] = 0x4049000000000000;
  puVar2 = (undefined4 *)((longlong)iVar4 * 0x20 + 0x10 + lVar3);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = uStack_2c;
  iVar4 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,iVar4);
  }
  lVar3 = *param_1;
  puVar1 = (undefined8 *)((longlong)iVar4 * 0x20 + lVar3);
  *puVar1 = 0x4049000000000000;
  puVar1[1] = 0x4050c00000000000;
  puVar2 = (undefined4 *)((longlong)iVar4 * 0x20 + 0x10 + lVar3);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = uStack_2c;
  iVar4 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,iVar4);
  }
  lVar3 = *param_1;
  puVar1 = (undefined8 *)((longlong)iVar4 * 0x20 + lVar3);
  *puVar1 = 0x4050c00000000000;
  puVar1[1] = 0x4059000000000000;
  puVar2 = (undefined4 *)((longlong)iVar4 * 0x20 + 0x10 + lVar3);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = uStack_2c;
  iVar4 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,iVar4);
  }
  lVar3 = *param_1;
  puVar1 = (undefined8 *)((longlong)iVar4 * 0x20 + lVar3);
  *puVar1 = 0x4059000000000000;
  puVar1[1] = 0x4069000000000000;
  puVar2 = (undefined4 *)((longlong)iVar4 * 0x20 + 0x10 + lVar3);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = uStack_2c;
  iVar4 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,iVar4);
  }
  lVar3 = *param_1;
  puVar1 = (undefined8 *)((longlong)iVar4 * 0x20 + lVar3);
  *puVar1 = 0x4069000000000000;
  puVar1[1] = 0x4072c00000000000;
  puVar2 = (undefined4 *)((longlong)iVar4 * 0x20 + 0x10 + lVar3);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = uStack_2c;
  iVar4 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,iVar4);
  }
  lVar3 = *param_1;
  puVar1 = (undefined8 *)((longlong)iVar4 * 0x20 + lVar3);
  *puVar1 = 0x4072c00000000000;
  puVar1[1] = 0x407f400000000000;
  puVar2 = (undefined4 *)((longlong)iVar4 * 0x20 + 0x10 + lVar3);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = uStack_2c;
  iVar4 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,iVar4);
  }
  lVar3 = *param_1;
  puVar1 = (undefined8 *)((longlong)iVar4 * 0x20 + lVar3);
  *puVar1 = 0x407f400000000000;
  puVar1[1] = 0x4087700000000000;
  puVar2 = (undefined4 *)((longlong)iVar4 * 0x20 + 0x10 + lVar3);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = uStack_2c;
  iVar4 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,iVar4);
  }
  lVar3 = *param_1;
  puVar1 = (undefined8 *)((longlong)iVar4 * 0x20 + lVar3);
  *puVar1 = 0x4087700000000000;
  puVar1[1] = 0x408f400000000000;
  puVar2 = (undefined4 *)((longlong)iVar4 * 0x20 + 0x10 + lVar3);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = uStack_2c;
  iVar4 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,iVar4);
  }
  lVar3 = *param_1;
  puVar1 = (undefined8 *)((longlong)iVar4 * 0x20 + lVar3);
  *puVar1 = 0x408f400000000000;
  puVar1[1] = 0x4097700000000000;
  puVar2 = (undefined4 *)((longlong)iVar4 * 0x20 + 0x10 + lVar3);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = uStack_2c;
  iVar4 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,iVar4);
  }
  lVar3 = *param_1;
  puVar1 = (undefined8 *)((longlong)iVar4 * 0x20 + lVar3);
  *puVar1 = 0x4097700000000000;
  puVar1[1] = 0x409f400000000000;
  puVar2 = (undefined4 *)((longlong)iVar4 * 0x20 + 0x10 + lVar3);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = uStack_2c;
  iVar4 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,iVar4);
  }
  lVar3 = *param_1;
  puVar1 = (undefined8 *)((longlong)iVar4 * 0x20 + lVar3);
  *puVar1 = 0x409f400000000000;
  puVar1[1] = 0x40a3880000000000;
  puVar2 = (undefined4 *)((longlong)iVar4 * 0x20 + 0x10 + lVar3);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = uStack_2c;
  iVar4 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,iVar4);
  }
  lVar3 = *param_1;
  puVar1 = (undefined8 *)((longlong)iVar4 * 0x20 + lVar3);
  *puVar1 = 0x40a3880000000000;
  puVar1[1] = 0x40b3880000000000;
  puVar2 = (undefined4 *)((longlong)iVar4 * 0x20 + 0x10 + lVar3);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = uStack_2c;
  iVar4 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,iVar4);
  }
  lVar3 = *param_1;
  puVar1 = (undefined8 *)((longlong)iVar4 * 0x20 + lVar3);
  *puVar1 = 0x40b3880000000000;
  puVar1[1] = 0x47efffffe0000000;
  puVar1 = (undefined8 *)((longlong)iVar4 * 0x20 + 0x10 + lVar3);
  *puVar1 = 0;
  puVar1[1] = (ulonglong)uStack_2c << 0x20;
  return;
}



// FUNCTION 14168fea0 IsMatch body=153 status=ok
// SIG undefined IsMatch(void)

ulonglong FWildcardString::IsMatch(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *in_RAX;
  ushort *puVar4;
  ushort *puVar5;
  
  if ((param_1 != (ushort *)0x0) && (param_2 != (ushort *)0x0)) {
    uVar1 = *param_2;
    puVar3 = (ushort *)0x0;
    puVar5 = param_1;
    while (uVar1 != 0) {
      uVar2 = *param_1;
      if (uVar2 == 0x2a) {
        puVar5 = param_1 + 1;
        in_RAX = puVar3;
        if (*puVar5 == 0) goto LAB_14168ff33;
        puVar4 = param_2 + 1;
        param_1 = puVar5;
      }
      else if ((uVar2 == 0x3f) || (uVar2 == uVar1)) {
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        puVar4 = puVar3;
      }
      else {
        in_RAX = (ushort *)0x0;
        if (puVar3 == (ushort *)0x0) goto LAB_14168ff36;
        puVar4 = puVar3 + 1;
        param_1 = puVar5;
        param_2 = puVar3;
      }
      puVar3 = puVar4;
      uVar1 = *param_2;
    }
    uVar1 = *param_1;
    while (uVar1 == 0x2a) {
      puVar3 = param_1 + 1;
      param_1 = param_1 + 1;
      uVar1 = *puVar3;
    }
    in_RAX = (ushort *)(ulonglong)uVar1;
    if (uVar1 == 0) {
LAB_14168ff33:
      return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    }
  }
LAB_14168ff36:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14168ff40 IsModuleLoaded body=201 status=ok
// SIG undefined IsModuleLoaded(void)

undefined8 FModuleManager::IsModuleLoaded(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar6 = (longlong *)FindModule(param_1,local_18,param_2);
  plVar3 = (longlong *)plVar6[1];
  lVar4 = *plVar6;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_10 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if ((lVar4 == 0) || (*(longlong *)(lVar4 + 0x28) == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return uVar7;
}



// FUNCTION 141690010 FUN_141690010 body=73 status=ok
// SIG undefined FUN_141690010(void)

void FUN_141690010(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 local_res18 [16];
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  FUN_141690060(param_1,param_2,local_res18);
  return;
}



// FUNCTION 141690060 FUN_141690060 body=545 status=ok
// SIG undefined FUN_141690060(void)

longlong * FUN_141690060(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 **ppuVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *local_res8;
  longlong local_res10;
  
  plVar10 = (longlong *)0x0;
  *param_3 = 0;
  local_res10 = param_2;
  FModuleManager::AddModule();
  iVar6 = (int)((ulonglong)local_res10 >> 0x20);
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar7 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar7 = param_1 + 0x40;
    }
    iVar5 = *(int *)(lVar7 + ((longlong)(iVar6 + (int)local_res10) &
                             (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
    if (iVar5 != -1) {
      do {
        plVar11 = (longlong *)((longlong)iVar5 * 0x20 + *(longlong *)(param_1 + 8));
        if (*plVar11 == local_res10) {
          if (iVar5 != -1) goto LAB_1416900f2;
          break;
        }
        iVar5 = (int)plVar11[3];
      } while (iVar5 != -1);
    }
  }
  plVar11 = plVar10;
LAB_1416900f2:
  plVar3 = (longlong *)plVar11[2];
  lVar7 = plVar11[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  plVar11 = *(longlong **)(lVar7 + 0x28);
  ppuVar1 = (undefined8 **)(lVar7 + 0x28);
  if (plVar11 == (longlong *)0x0) {
    if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
      lVar8 = *(longlong *)(param_1 + 0x98);
      if (*(longlong *)(param_1 + 0x98) == 0) {
        lVar8 = param_1 + 0x90;
      }
      iVar6 = *(int *)(lVar8 + ((longlong)(iVar6 + (int)local_res10) &
                               (longlong)*(int *)(param_1 + 0xa0) - 1U) * 4);
      if (iVar6 != -1) {
        do {
          plVar11 = (longlong *)((longlong)iVar6 * 0x20 + *(longlong *)(param_1 + 0x58));
          if (*plVar11 == local_res10) {
            if (iVar6 != -1) goto LAB_141690192;
            break;
          }
          iVar6 = (int)plVar11[3];
        } while (iVar6 != -1);
      }
    }
    plVar11 = plVar10;
LAB_141690192:
    plVar9 = plVar11 + 1;
    if (plVar11 == (longlong *)0x0) {
      plVar9 = plVar10;
    }
    if (plVar9 == (longlong *)0x0) {
      *param_3 = 1;
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = plVar10;
      if ((int)plVar9[1] != 0) {
        plVar11 = (longlong *)*plVar9;
      }
      local_res8 = (undefined8 *)(**(code **)(*plVar11 + 0x38))();
      if (ppuVar1 == &local_res8) {
        if (local_res8 != (undefined8 *)0x0) {
          (**(code **)*local_res8)(local_res8,1);
        }
      }
      else {
        puVar4 = *ppuVar1;
        *ppuVar1 = local_res8;
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      if (*ppuVar1 == (longlong *)0x0) {
        *param_3 = 4;
        plVar11 = plVar10;
      }
      else {
        (**(code **)(**ppuVar1 + 8))();
        *(int *)(lVar7 + 0x34) = DAT_1464aff70;
        DAT_1464aff70 = DAT_1464aff70 + 1;
        TBaseMulticastDelegate<void,FName,enum_EModuleChangeReason>::Broadcast
                  (param_1 + 0x108,local_res10,0);
        plVar11 = *ppuVar1;
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar3 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  return plVar11;
}



// FUNCTION 141690290 LogCounts body=728 status=ok
// SIG undefined LogCounts(void)

void FInstanceCountingObject::LogCounts(undefined8 param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  longlong *plVar5;
  BOOL BVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined2 *puVar11;
  uint uVar12;
  uint *puVar13;
  int local_98;
  uint uStack_94;
  uint *puStack_90;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (DAT_1468e34c8 != (longlong *)0x0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_1468e34c8 + 10);
    BVar6 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar6 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    if ((int)DAT_1468e34c8[1] != *(int *)((longlong)DAT_1468e34c8 + 0x34)) {
      FOutputDevice::LogfImpl(param_1,L"Manually tracked object counts:");
      plVar5 = DAT_1468e34c8;
      uVar2 = *(uint *)(DAT_1468e34c8 + 5);
      puVar1 = (uint *)(DAT_1468e34c8 + 2);
      uStack_94 = 1;
      local_98 = 0;
      uStack_84 = 0;
      iStack_80 = 0;
      if (uVar2 != 0) {
        puVar13 = (uint *)DAT_1468e34c8[4];
        if ((uint *)DAT_1468e34c8[4] == (uint *)0x0) {
          puVar13 = puVar1;
        }
        uVar3 = *puVar13;
        iStack_80 = 0;
        local_98 = 0;
        while (uVar3 == 0) {
          lVar10 = (longlong)local_98;
          iStack_80 = iStack_80 + 0x20;
          iVar8 = local_98 + 1;
          bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
          local_98 = iVar8;
          if (bVar4) goto LAB_1416903cc;
          uVar3 = puVar13[lVar10 + 1];
        }
        uStack_94 = -uVar3 & uVar3;
        iVar8 = 0x1f;
        if (uStack_94 != 0) {
          for (; uStack_94 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        if (uStack_94 == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - iVar8;
        }
        uStack_84 = (iStack_80 - iVar8) + 0x1f;
        if ((int)uVar2 < (int)uStack_84) {
LAB_1416903cc:
          uStack_84 = uVar2;
        }
      }
      uVar3 = *(uint *)(DAT_1468e34c8 + 5);
      uStack_60 = CONCAT44(uStack_84,0xffffffff);
      local_58 = CONCAT44(uStack_7c,iStack_80);
      local_50 = DAT_1468e34c8;
      uStack_48 = CONCAT44(uStack_94,local_98);
      local_88 = -1 << ((byte)uVar3 & 0x1f);
      uVar12 = uVar3 & 0xffffffe0;
      local_50._0_4_ = SUB84(DAT_1468e34c8,0);
      local_50._4_4_ = (undefined4)((ulonglong)DAT_1468e34c8 >> 0x20);
      local_78 = (undefined4)local_50;
      uStack_74 = local_50._4_4_;
      iStack_70 = local_98;
      uStack_6c = uStack_94;
      puStack_90 = puVar1;
      uStack_84 = uVar3;
      local_68 = puVar1;
      local_50 = plVar5;
      puStack_40 = puVar1;
      uStack_38 = uStack_60;
      uStack_30 = local_58;
      if (uVar3 != uVar2) {
        puVar13 = (uint *)DAT_1468e34c8[4];
        if ((uint *)DAT_1468e34c8[4] == (uint *)0x0) {
          puVar13 = puVar1;
        }
        uVar9 = puVar13[(int)uVar3 >> 5] & local_88;
        iVar8 = (int)uVar3 >> 5;
        while (uVar9 == 0) {
          uVar12 = uVar12 + 0x20;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
          goto LAB_141690492;
          uVar9 = puVar13[(longlong)iVar8 + 1];
          local_88 = 0xffffffff;
          iVar8 = iVar8 + 1;
        }
        uVar9 = -uVar9 & uVar9;
        iVar8 = 0x1f;
        if (uVar9 != 0) {
          for (; uVar9 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        if (uVar9 == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - iVar8;
        }
        uStack_84 = (uVar12 - iVar8) + 0x1f;
        uVar3 = uStack_84;
        if ((int)uVar2 < (int)uStack_84) {
LAB_141690492:
          uStack_84 = uVar2;
          uVar3 = uVar2;
        }
      }
      while( true ) {
        if (((uStack_60._4_4_ == uVar3) && (local_68 == puVar1)) &&
           ((longlong *)CONCAT44(uStack_74,local_78) == plVar5)) break;
        lVar10 = *(longlong *)CONCAT44(uStack_74,local_78) + (longlong)(int)uStack_60._4_4_ * 0x18;
        puVar7 = (undefined8 *)FName::ToString(lVar10,&local_98);
        if (*(int *)(puVar7 + 1) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = (undefined2 *)*puVar7;
        }
        FOutputDevice::LogfImpl(param_1,L"\t%s: %d instances",puVar11,*(undefined4 *)(lVar10 + 8));
        if (CONCAT44(uStack_94,local_98) != 0) {
          FMemory::Free();
        }
        uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_6c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
      }
      FOutputDevice::LogfImpl(param_1,&DAT_144cd016c);
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 141690570 FUN_141690570 body=377 status=ok
// SIG undefined FUN_141690570(void)

void FUN_141690570(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  ulonglong *puVar4;
  void *_Memory;
  void *pvVar5;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  short *psVar9;
  undefined1 *puVar10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 local_48 [8];
  short local_40 [8];
  
  pvVar5 = (void *)0x0;
  iVar6 = 0x400;
  local_res18 = param_3;
  local_res20 = param_4;
  puVar4 = (ulonglong *)__local_stdio_printf_options();
  _Memory = pvVar5;
  do {
    free(_Memory);
    _Memory = malloc((longlong)iVar6 * 2);
    iVar3 = __stdio_common_vswprintf
                      (*puVar4 | 1,_Memory,(longlong)(iVar6 + -1),param_2,0,&local_res18);
    if (iVar3 < 0) {
      iVar3 = -1;
    }
    if (iVar6 <= iVar3) {
      iVar3 = -1;
    }
    iVar6 = iVar6 * 2;
  } while (iVar3 == -1);
  *(undefined2 *)((longlong)_Memory + (longlong)iVar3 * 2) = 0;
  pvVar7 = pvVar5;
  pvVar8 = pvVar5;
  if (0 < iVar3) {
    do {
      psVar9 = local_40;
      local_40[0] = *(short *)((longlong)_Memory + (longlong)pvVar7 * 2);
      puVar10 = local_48;
      iVar6 = 1;
      bVar1 = false;
      do {
        if (iVar6 == 0) goto LAB_14169066d;
        sVar2 = *psVar9;
        psVar9 = psVar9 + 1;
        if (((char)sVar2 != sVar2) || ((char)sVar2 < '\0')) {
          bVar1 = true;
          sVar2 = 0x3f;
        }
        *puVar10 = (char)sVar2;
        puVar10 = puVar10 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if (bVar1) {
        FGenericPlatformString::LogBogusChars<char,wchar_t>(local_40,1);
      }
LAB_14169066d:
      local_48[1] = local_48[0];
      (**(code **)(*param_1 + 0x50))(param_1,local_48 + 1,1);
      pvVar7 = (void *)((longlong)pvVar7 + 1);
    } while ((longlong)pvVar7 < (longlong)iVar3);
  }
  do {
    local_48[1] = *(undefined1 *)((longlong)pvVar5 + 0x144cd36c4);
    (**(code **)(*param_1 + 0x50))(param_1,local_48 + 1,1);
    pvVar5 = (void *)(((longlong)pvVar8 + 1) * 2);
    pvVar8 = (void *)((longlong)pvVar8 + 1);
  } while (*(short *)((longlong)pvVar5 + 0x144cd2714) != 0);
  free(_Memory);
  return;
}



// FUNCTION 1416906f0 ModuleExists body=60 status=ok
// SIG undefined ModuleExists(void)

bool FModuleManager::ModuleExists(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  longlong local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FindModules(param_1,param_2,&local_18);
  bVar1 = 0 < (int)local_10;
  if (local_18 != 0) {
    FMemory::Free();
  }
  return bVar1;
}



// FUNCTION 141690730 FUN_141690730 body=1422 status=ok
// SIG undefined FUN_141690730(void)

undefined8 FUN_141690730(undefined8 *param_1,longlong *param_2)

{
  void *pvVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  wchar_t *_Src;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  wchar_t **ppwVar12;
  longlong *plVar13;
  wchar_t *_Str;
  undefined8 uVar14;
  uint uVar15;
  ulonglong uVar16;
  wchar_t *pwVar17;
  undefined4 uVar18;
  wchar_t *pwVar19;
  longlong *local_58;
  undefined8 local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  wchar_t *local_38;
  undefined8 local_30;
  
  iVar5 = FUN_141592950(param_1,&DAT_144cd0db4,1,0,0xffffffff);
  if ((iVar5 == -1) && (iVar5 = FUN_141592950(param_1,&DAT_144cd0ecc,1,0,0xffffffff), iVar5 == -1))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  local_40 = *(int *)(param_1 + 1);
  lVar10 = (longlong)local_40;
  pvVar1 = (void *)*param_1;
  local_48 = (void *)0x0;
  if (local_40 == 0) {
    local_3c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
    _guard_xfg_dispatch_icall_nop(local_48,pvVar1,lVar10 * 2);
  }
  FString::ReplaceInline(&local_48,&DAT_144cd10a4,&DAT_144cd1054,1);
  FString::ReplaceInline(&local_48,&DAT_144cd1224,&DAT_144cd1114,1);
  cVar3 = FString::StartsWith(&local_48,&DAT_144cd1244,1);
  FString::ReplaceInline(&local_48,&DAT_144cd1294,&DAT_144cd125c,1);
  FString::ReplaceInline(&local_48,&DAT_144cd12fc,&DAT_144cd12d4,1);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_141594550(&local_48,&local_58,&DAT_144cd132c,1);
  uVar16 = local_50;
  if (!bVar2) {
    lVar10 = (longlong)(int)local_50;
    iVar5 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,iVar5);
    if (local_50._4_4_ < iVar5) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_58,uVar16 & 0xffffffff);
    }
    local_58[lVar10 * 2] = 0;
    (local_58 + lVar10 * 2)[1] = 0;
  }
  uVar16 = (ulonglong)(int)local_50;
  plVar13 = local_58 + uVar16 * 2;
  plVar11 = local_58;
  if (local_58 != plVar13) {
    do {
      if ((1 < (int)plVar11[1]) && (cVar4 = FString::IsNumeric(plVar11), cVar4 == '\0'))
      goto LAB_141690c59;
      plVar11 = plVar11 + 2;
    } while (plVar11 != plVar13);
    uVar16 = local_50 & 0xffffffff;
  }
  iVar5 = (int)uVar16;
  if (iVar5 < 5) {
    iVar9 = 5 - iVar5;
    local_50 = CONCAT44(local_50._4_4_,iVar5 + iVar9);
    if (local_50._4_4_ < iVar5 + iVar9) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_58,uVar16 & 0xffffffff);
    }
    _guard_xfg_dispatch_icall_nop(local_58 + (longlong)iVar9 * 2,local_58,(longlong)iVar5 << 4);
    _guard_xfg_dispatch_icall_nop(local_58,0,(longlong)iVar9 * 0x10);
LAB_141690946:
    _Str = L"";
    if (bVar2) {
      iVar5 = (int)local_58[9];
      iVar9 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar9 = 0;
      }
      if (iVar9 < 10) {
        if (iVar9 < 9) {
          local_38 = (wchar_t *)0x0;
          local_30 = (wchar_t *)0xa;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
          pwVar17 = local_38;
          FGenericPlatformString::Memcpy(local_38,L"000000000",0x14);
          iVar9 = 9 - iVar9;
          if ((uint)local_30 == 0) {
            pwVar19 = L"";
            iVar5 = 0;
          }
          else {
            iVar5 = (uint)local_30 + -1;
            pwVar19 = pwVar17;
          }
          _Src = (wchar_t *)0x0;
          iVar6 = 0;
          if ((-1 < iVar9) && (iVar6 = iVar5, iVar9 < iVar5)) {
            iVar6 = iVar9;
          }
          local_38 = (wchar_t *)0x0;
          local_30 = (wchar_t *)(ulonglong)(iVar6 + 1);
          if (iVar6 == 0) {
            local_30 = _Src;
          }
          iVar5 = (int)local_30;
          if (0 < iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
            _Src = local_38;
            iVar5 = (uint)local_30;
            if (0 < (int)(uint)local_30) {
              wcsncpy(local_38,pwVar19,(longlong)iVar6);
              _Src[iVar6] = L'\0';
            }
          }
          plVar11 = local_58;
          if ((iVar5 != 0) && (iVar5 = iVar5 + -1, iVar5 != 0)) {
            iVar9 = (int)local_58[9];
            iVar6 = (uint)(iVar9 == 0) + iVar5 + iVar9;
            *(int *)(local_58 + 9) = iVar6;
            if (*(int *)((longlong)local_58 + 0x4c) < iVar6) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58 + 8,iVar9);
            }
            pvVar1 = (void *)(plVar11[8] + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar1,_Src,(longlong)iVar5 * 2);
            *(undefined2 *)((longlong)pvVar1 + (longlong)iVar5 * 2) = 0;
          }
          if (_Src != (wchar_t *)0x0) {
            FMemory::Free(_Src);
          }
          goto joined_r0x000141690b49;
        }
      }
      else {
        if (iVar5 == 0) {
          pwVar19 = L"";
        }
        else {
          pwVar19 = (wchar_t *)local_58[8];
        }
        iVar9 = iVar5 + -1;
        local_38 = (wchar_t *)0x0;
        if (iVar5 == 0) {
          iVar9 = 0;
        }
        pwVar17 = (wchar_t *)0x0;
        uVar18 = 0;
        if (9 < iVar9) {
          iVar9 = 9;
        }
        uVar15 = iVar9 + 1;
        if (iVar9 == 0) {
          uVar15 = 0;
        }
        local_30 = (wchar_t *)(ulonglong)uVar15;
        if (0 < (int)uVar15) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
          pwVar17 = local_38;
          uVar15 = (uint)local_30;
          uVar18 = local_30._4_4_;
          if (0 < (int)(uint)local_30) {
            wcsncpy(local_38,pwVar19,(longlong)iVar9);
            pwVar17[iVar9] = L'\0';
          }
        }
        plVar11 = local_58;
        ppwVar12 = (wchar_t **)(local_58 + 8);
        if (ppwVar12 == &local_38) {
joined_r0x000141690b49:
          if (pwVar17 != (wchar_t *)0x0) {
            FMemory::Free(pwVar17);
          }
        }
        else {
          if (*ppwVar12 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          *ppwVar12 = pwVar17;
          *(uint *)(plVar11 + 9) = uVar15;
          *(undefined4 *)((longlong)plVar11 + 0x4c) = uVar18;
        }
      }
    }
    if ((int)local_58[1] == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)*local_58;
    }
    iVar5 = _wtoi(pwVar17);
    if ((int)local_58[3] == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)local_58[2];
    }
    iVar9 = _wtoi(pwVar17);
    if ((int)local_58[5] == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)local_58[4];
    }
    iVar6 = _wtoi(pwVar17);
    if ((int)local_58[7] == 0) {
      pwVar17 = L"";
    }
    else {
      pwVar17 = (wchar_t *)local_58[6];
    }
    iVar7 = _wtoi(pwVar17);
    if ((int)local_58[9] != 0) {
      _Str = (wchar_t *)local_58[8];
    }
    iVar8 = _wtoi(_Str);
    if ((((iVar5 < 0xa2e3ff) && (iVar9 < 0x18)) && (iVar6 < 0x3c)) &&
       ((iVar7 < 0x3c && (iVar8 < 1000000000)))) {
      lVar10 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((longlong)iVar8),8) + (longlong)iVar8;
      lVar10 = (((((longlong)iVar9 + (longlong)iVar5 * 0x18) * 0x3c + (longlong)iVar6) * 0x3c +
                (longlong)iVar7) * 10000000 + (lVar10 >> 6)) - (lVar10 >> 0x3f);
      *param_2 = lVar10;
      if (cVar3 != '\0') {
        *param_2 = -lVar10;
      }
      uVar16 = local_50 & 0xffffffff;
      uVar14 = 1;
      goto LAB_141690c5f;
    }
LAB_141690c59:
    uVar16 = local_50 & 0xffffffff;
  }
  else if (iVar5 < 6) goto LAB_141690946;
  uVar14 = 0;
LAB_141690c5f:
  uVar15 = (uint)uVar16;
  plVar11 = local_58;
  while (uVar15 != 0) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
    uVar15 = (int)uVar16 - 1;
    uVar16 = (ulonglong)uVar15;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  return uVar14;
}



// FUNCTION 141690cc0 Pop body=148 status=ok
// SIG undefined Pop(void)

void FBitWriterMark::Pop(char *param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  byte *pbVar4;
  
  uVar2 = *(ulonglong *)(param_1 + 8);
  if ((uVar2 & 7) != 0) {
    pbVar4 = (byte *)((longlong)(int)((longlong)uVar2 >> 3) + *(longlong *)(param_2 + 0x90));
    *pbVar4 = *pbVar4 & (&DAT_144cd0948)[(uint)uVar2 & 7];
    uVar2 = *(ulonglong *)(param_1 + 8);
  }
  iVar3 = (int)((longlong)(uVar2 + 7) >> 3);
  iVar1 = (int)(*(longlong *)(param_2 + 0xa0) + 7 >> 3);
  if (iVar1 != iVar3) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar3 + *(longlong *)(param_2 + 0x90)),0,(longlong)(iVar1 - iVar3)
              );
  }
  *(byte *)(param_2 + 0x28) = *(byte *)(param_2 + 0x28) & 0x7f | *param_1 << 7;
  *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(param_1 + 8);
  return;
}



// FUNCTION 141690d60 PopAll body=252 status=ok
// SIG undefined PopAll(void)

void TSingleProducerSingleConsumerList<unsigned___int64,16>::PopAll
               (longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  
  lVar1 = param_1[0x11];
  iVar8 = 0;
  if (param_3 != '\0') {
    iVar8 = (int)param_2[1];
  }
  uVar5 = (int)lVar1 - (int)param_1[0x12];
  lVar3 = param_2[1];
  iVar4 = (int)lVar3 + uVar5;
  *(int *)(param_2 + 1) = iVar4;
  if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2);
  }
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(*param_2 + (longlong)(int)lVar3 * 8),0,(longlong)(int)uVar5 << 3);
  uVar6 = (ulonglong)(*(uint *)(param_1 + 0x12) & 0xf);
  if (((*(uint *)(param_1 + 0x12) & 0xf) == 0) && (uVar6 = 0, param_1[0x12] != 0)) {
    uVar6 = 0x10;
  }
  uVar7 = 0;
  if (uVar5 != 0) {
    do {
      if ((int)uVar6 == 0x10) {
        lVar3 = *param_1;
        uVar6 = 0;
        lVar2 = *(longlong *)(lVar3 + 0x80);
        *(int *)(param_1 + 0x13) = (int)param_1[0x13] + -1;
        *param_1 = lVar2;
        FMemory::operator_delete(lVar3,0x88);
      }
      iVar4 = uVar7 + iVar8;
      uVar7 = uVar7 + 1;
      lVar3 = uVar6 * 8;
      uVar6 = (ulonglong)((int)uVar6 + 1);
      *(undefined8 *)(*param_2 + (longlong)iVar4 * 8) = *(undefined8 *)(*param_1 + lVar3);
    } while (uVar7 < uVar5);
  }
  param_1[0x12] = lVar1;
  return;
}



// FUNCTION 141690eb0 PopWithoutClear body=12 status=ok
// SIG undefined PopWithoutClear(void)

void FBitWriterMark::PopWithoutClear(longlong param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(param_1 + 8);
  return;
}



// FUNCTION 141690ec0 FUN_141690ec0 body=285 status=ok
// SIG undefined FUN_141690ec0(void)

ulonglong FUN_141690ec0(longlong param_1)

{
  uint uVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  double dVar7;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  undefined8 *local_28;
  ulonglong local_20;
  
  uVar6 = 0;
  LOCK();
  uVar1 = *(uint *)(param_1 + 0x98);
  if (uVar1 == 0) {
    *(uint *)(param_1 + 0x98) = 0;
  }
  else {
    uVar6 = (ulonglong)uVar1;
  }
  UNLOCK();
  if (uVar1 == 0) {
    QueryPerformanceCounter(&local_res8);
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    dVar2 = (double)local_res8.QuadPart * DAT_1468b02f8;
    FUN_14168e990(param_1,&local_28);
    if (0 < (int)local_20) {
      uVar6 = local_20 & 0xffffffff;
      puVar4 = local_28;
      do {
        FUN_141690fe0(*puVar4);
        puVar4 = puVar4 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    QueryPerformanceCounter(&local_res10);
    uVar1 = DAT_1468e35a8;
    uVar5 = (ulonglong)DAT_1468e35a8;
    dVar7 = (double)local_res10.QuadPart * DAT_1468b02f8;
    uVar6 = FUN_14168db40();
    if ((*(char *)(uVar6 + 8) != '\0') && ((&DAT_1468e3840)[uVar5] != '\0')) {
      uVar3 = FUN_14168ec50(uVar6);
      uVar6 = FCsvProfilerThreadData::AddCustomStatInternal
                        (uVar3,"ProcessCSVStats",uVar1,(float)(dVar7 - dVar2) * 1000.0,3,0);
    }
    if (local_28 != (undefined8 *)0x0) {
      uVar6 = FMemory::Free();
    }
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 141690fe0 FUN_141690fe0 body=2567 status=ok
// SIG undefined FUN_141690fe0(void)

void FUN_141690fe0(int *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong *puVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  int *piVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  ulonglong *puVar21;
  longlong *plVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  longlong *plVar26;
  ulonglong uVar27;
  ulonglong *puVar28;
  longlong *plVar29;
  bool bVar30;
  double dVar31;
  float fVar32;
  float local_res18 [2];
  undefined4 local_res20 [2];
  ulonglong local_128;
  ulonglong local_120;
  longlong *local_118;
  ulonglong local_110;
  ulonglong *local_108;
  ulonglong local_100;
  void *local_f8;
  ulonglong local_f0;
  int local_e8;
  undefined4 local_e4;
  undefined4 local_e0 [2];
  ulonglong *local_d8;
  ulonglong local_d0;
  longlong *local_c8;
  ulonglong local_c0;
  ulonglong *local_b8;
  ulonglong local_b0;
  undefined1 local_a8 [8];
  longlong local_a0;
  ulonglong *local_98;
  ulonglong **local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  plVar26 = (longlong *)0x0;
  local_108 = (ulonglong *)0x0;
  local_100 = 0;
  local_b8 = (ulonglong *)0x0;
  local_b0 = 0;
  local_c8 = (longlong *)0x0;
  local_c0 = 0;
  FCsvProfilerThreadData::FlushResults(param_1,&local_108,&local_b8,&local_c8);
  if ((*param_1 == DAT_1468c21c4) || (*param_1 == DAT_1468b4fe4)) {
    plVar26 = (longlong *)0x1;
  }
  uVar27 = local_100 & 0xffffffff;
  local_118 = plVar26;
  if (0 < (int)local_100) {
    *(ulonglong *)(param_1 + 8) = local_108[(longlong)((int)local_100 + -1) * 3];
    local_d0 = (longlong)plVar26 * 0xa0;
    plVar29 = &DAT_1468e3770 + (longlong)plVar26 * 2;
    puVar28 = local_108;
    do {
      uVar19 = *puVar28;
      if (*(ulonglong *)((longlong)&DAT_1468e36c0 + local_d0) <
          *(ulonglong *)((longlong)&DAT_1468e36b8 + local_d0)) {
        FFrameBoundaries::Update(&DAT_1468e3630,plVar26);
      }
      iVar23 = (&DAT_1468e3778)[(longlong)plVar26 * 4];
      if ((iVar23 == 0) || (uVar19 < *(ulonglong *)*plVar29)) {
        DAT_1468e3790 = 0;
        iVar23 = -1;
      }
      else {
        if (iVar23 <= (int)DAT_1468e3790) {
          DAT_1468e3790 = iVar23 - 1;
        }
        if ((0 < (int)DAT_1468e3790) &&
           (uVar19 < *(ulonglong *)(*plVar29 + (longlong)(int)(DAT_1468e3790 - 1) * 8))) {
          uVar11 = 0;
          uVar25 = DAT_1468e3790;
          uVar14 = DAT_1468e3790;
          while (DAT_1468e3790 = uVar11, 4 < (int)uVar14) {
            iVar23 = uVar25 + DAT_1468e3790;
            if (iVar23 < 0) {
              iVar23 = iVar23 + 1;
            }
            uVar24 = iVar23 >> 1;
            if (*(ulonglong *)(*plVar29 + (longlong)(int)uVar24 * 8) <= uVar19) {
              DAT_1468e3790 = uVar24;
              uVar24 = uVar25;
            }
            uVar11 = DAT_1468e3790;
            uVar25 = uVar24;
            uVar14 = uVar24 - DAT_1468e3790;
          }
        }
        iVar23 = (&DAT_1468e3778)[(longlong)plVar26 * 4];
        if ((int)DAT_1468e3790 < iVar23) {
          do {
            if (uVar19 < *(ulonglong *)(*plVar29 + (longlong)(int)DAT_1468e3790 * 8)) {
              iVar23 = DAT_1468e3790 - 1;
              goto LAB_1416911d7;
            }
            DAT_1468e3790 = DAT_1468e3790 + 1;
            iVar23 = (&DAT_1468e3778)[(longlong)plVar26 * 4];
          } while ((int)DAT_1468e3790 < iVar23);
        }
        iVar23 = iVar23 + -1;
      }
LAB_1416911d7:
      if ((*(byte *)((longlong)puVar28 + 0x15) & 2) == 0) {
        if (0 < param_1[0xc]) {
          puVar1 = (undefined4 *)
                   (*(longlong *)(param_1 + 10) + -0x18 + (longlong)param_1[0xc] * 0x18);
          local_88 = *puVar1;
          uStack_84 = puVar1[1];
          uStack_80 = puVar1[2];
          uStack_7c = puVar1[3];
          param_1[0xc] = param_1[0xc] + -1;
          TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink();
          if (-1 < iVar23) {
            uVar19 = *puVar28;
            uVar8 = CONCAT44(uStack_84,local_88);
            if (uVar8 < uVar19) {
              uVar9 = puVar28[2];
              if ((*(byte *)((longlong)puVar28 + 0x15) & 1) == 0) {
                local_110 = local_110 & 0xfffffffffffffffe;
                uVar25 = FAnsiStringRegister::GetUniqueStringIndex();
                local_110 = (ulonglong)uVar25 << 0xc | (ulonglong)((uint)local_110 & 0xfff);
              }
              else {
                local_110 = puVar28[1] << 0xc | 1;
              }
              local_110 = ((int)uVar9 * 2 ^ (uint)local_110) & 0xffe ^ local_110;
              lVar16 = FUN_14168d600(param_1 + 0x86,&local_110,0);
              if (*(int *)(lVar16 + 8) != iVar23) {
                if (*(int *)(lVar16 + 8) != -1) {
                  lVar4 = *(longlong *)(lVar16 + 0x10);
                  dVar5 = (double)FGenericPlatformTime::GetSecondsPerCycle64();
                  dVar31 = (double)lVar4;
                  if (lVar4 < 0) {
                    dVar31 = dVar31 + 1.8446744073709552e+19;
                  }
                  local_res18[0] = (float)(dVar5 * dVar31 * 1000.0);
                  FCsvStatSeries::CommitFrameData(lVar16,local_res18);
                }
                *(int *)(lVar16 + 8) = iVar23;
              }
              *(longlong *)(lVar16 + 0x10) = *(longlong *)(lVar16 + 0x10) + (uVar19 - uVar8);
            }
          }
        }
      }
      else {
        iVar23 = param_1[0xc];
        param_1[0xc] = iVar23 + 1;
        if (param_1[0xd] < iVar23 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_1 + 10,iVar23);
        }
        lVar16 = *(longlong *)(param_1 + 10);
        uVar6 = *(undefined4 *)((longlong)puVar28 + 4);
        uVar19 = puVar28[1];
        uVar7 = *(undefined4 *)((longlong)puVar28 + 0xc);
        puVar1 = (undefined4 *)(lVar16 + (longlong)iVar23 * 0x18);
        *puVar1 = (int)*puVar28;
        puVar1[1] = uVar6;
        puVar1[2] = (int)uVar19;
        puVar1[3] = uVar7;
        *(ulonglong *)(lVar16 + 0x10 + (longlong)iVar23 * 0x18) = puVar28[2];
      }
      puVar28 = puVar28 + 3;
      uVar27 = uVar27 - 1;
    } while (uVar27 != 0);
  }
  plVar29 = local_118;
  local_128 = local_b0 & 0xffffffff;
  if (0 < (int)local_b0) {
    local_a0 = (longlong)local_118 * 0xa0;
    plVar22 = &DAT_1468e3770 + (longlong)local_118 * 2;
    puVar28 = local_b8;
    do {
      puVar20 = (ulonglong *)0x0;
      local_d0 = *(ulonglong *)((longlong)&DAT_1468e36b8 + local_a0);
      uVar27 = *puVar28;
      if (*(ulonglong *)((longlong)&DAT_1468e36c0 + local_a0) < local_d0) {
        FFrameBoundaries::Update(&DAT_1468e3630,plVar26);
      }
      iVar23 = (&DAT_1468e3778)[(longlong)plVar29 * 4];
      if ((iVar23 == 0) || (uVar27 < *(ulonglong *)*plVar22)) {
        DAT_1468e3790 = 0;
      }
      else {
        if (iVar23 <= (int)DAT_1468e3790) {
          DAT_1468e3790 = iVar23 - 1;
        }
        puVar18 = (ulonglong *)(ulonglong)DAT_1468e3790;
        if ((0 < (int)DAT_1468e3790) &&
           (puVar21 = puVar18, puVar12 = puVar20,
           uVar27 < *(ulonglong *)(*plVar22 + (longlong)(int)(DAT_1468e3790 - 1) * 8))) {
          while (puVar18 = puVar12, bVar30 = 4 < (int)DAT_1468e3790, DAT_1468e3790 = (uint)puVar18,
                bVar30) {
            iVar23 = (uint)puVar21 + DAT_1468e3790;
            if (iVar23 < 0) {
              iVar23 = iVar23 + 1;
            }
            uVar25 = iVar23 >> 1;
            if (*(ulonglong *)(*plVar22 + (longlong)(int)uVar25 * 8) <= uVar27) {
              puVar18 = (ulonglong *)(ulonglong)uVar25;
              uVar25 = (uint)puVar21;
            }
            puVar21 = (ulonglong *)(ulonglong)uVar25;
            puVar12 = puVar18;
            DAT_1468e3790 = uVar25 - (int)puVar18;
          }
        }
        iVar23 = (&DAT_1468e3778)[(longlong)plVar29 * 4];
        if ((int)puVar18 < iVar23) {
          do {
            iVar23 = (int)puVar18;
            if (uVar27 < *(ulonglong *)(*plVar22 + (longlong)iVar23 * 8)) break;
            DAT_1468e3790 = iVar23 + 1;
            puVar18 = (ulonglong *)(ulonglong)DAT_1468e3790;
            iVar23 = (&DAT_1468e3778)[(longlong)plVar29 * 4];
          } while ((int)DAT_1468e3790 < iVar23);
        }
        iVar23 = iVar23 + -1;
        if (-1 < iVar23) {
          bVar2 = *(byte *)((longlong)puVar28 + 0x15);
          uVar27 = puVar28[2];
          if ((bVar2 & 1) == 0) {
            local_120 = local_120 & 0xfffffffffffffffe;
            uVar25 = FAnsiStringRegister::GetUniqueStringIndex();
            uVar19 = (ulonglong)uVar25 << 0xc | (ulonglong)((uint)local_120 & 0xfff);
          }
          else {
            uVar19 = puVar28[1] << 0xc | 1;
          }
          local_120 = ((int)uVar27 * 2 ^ (uint)uVar19) & 0xffe ^ uVar19;
          if (param_1[0x88] != param_1[0x93]) {
            piVar17 = *(int **)(param_1 + 0x96);
            if (*(int **)(param_1 + 0x96) == (int *)0x0) {
              piVar17 = param_1 + 0x94;
            }
            iVar15 = piVar17[(longlong)((int)(uVar19 >> 0x20) * 0x17 + (int)local_120) &
                             (longlong)param_1[0x98] - 1U];
            if (iVar15 != -1) {
              lVar16 = *(longlong *)(param_1 + 0x86);
              do {
                puVar18 = (ulonglong *)(lVar16 + (longlong)iVar15 * 0x18);
                if (*(ulonglong *)(lVar16 + (longlong)iVar15 * 0x18) == local_120) {
                  if (iVar15 != -1) goto LAB_141691543;
                  break;
                }
                iVar15 = (int)puVar18[2];
              } while (iVar15 != -1);
            }
          }
          puVar18 = puVar20;
LAB_141691543:
          puVar21 = puVar18 + 1;
          if (puVar18 == (ulonglong *)0x0) {
            puVar21 = puVar20;
          }
          if (puVar21 == (ulonglong *)0x0) {
            puVar18 = (ulonglong *)operator_new(0x40);
            if (puVar18 != (ulonglong *)0x0) {
              *puVar18 = local_120;
              *(undefined4 *)(puVar18 + 1) = 0xffffffff;
              *(undefined4 *)((longlong)puVar18 + 0x1c) = 0;
              *(char *)(puVar18 + 3) = ((bVar2 & 8) == 0) + '\x01';
              puVar18[4] = 0;
              puVar18[5] = 0;
              puVar18[6] = 0;
              puVar18[7] = 0;
              puVar18[2] = 0;
              puVar20 = puVar18;
            }
            *puVar20 = local_120;
            iVar15 = param_1[0x9c];
            param_1[0x9c] = iVar15 + 1;
            local_d8 = puVar20;
            if (param_1[0x9d] < iVar15 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0x9a,iVar15);
            }
            *(ulonglong **)(*(longlong *)(param_1 + 0x9a) + (longlong)iVar15 * 8) = local_d8;
            local_98 = &local_120;
            local_90 = &local_d8;
            FUN_141687790(param_1 + 0x86,local_a8,&local_98,0);
            puVar20 = local_d8;
          }
          else {
            puVar20 = (ulonglong *)*puVar21;
          }
          cVar13 = *(char *)((longlong)puVar28 + 0x14);
          iVar15 = (int)puVar20[1];
          if ((bVar2 & 8) == 0) {
            fVar32 = *(float *)(puVar28 + 3);
            if (iVar15 != iVar23) {
              if (iVar15 != -1) {
                local_e0[0] = (undefined4)puVar20[2];
                FCsvStatSeries::CommitFrameData(puVar20,local_e0);
              }
              cVar13 = '\0';
              *(int *)(puVar20 + 1) = iVar23;
            }
            if (cVar13 == '\0') {
LAB_141691850:
              *(float *)(puVar20 + 2) = fVar32;
            }
            else if (cVar13 == '\x01') {
              if (*(float *)(puVar20 + 2) <= fVar32) {
                fVar32 = *(float *)(puVar20 + 2);
              }
              *(float *)(puVar20 + 2) = fVar32;
            }
            else {
              if (cVar13 == '\x02') {
                if (fVar32 <= *(float *)(puVar20 + 2)) {
                  fVar32 = *(float *)(puVar20 + 2);
                }
                goto LAB_141691850;
              }
              if (cVar13 == '\x03') {
                *(float *)(puVar20 + 2) = fVar32 + *(float *)(puVar20 + 2);
              }
            }
          }
          else {
            iVar3 = (int)puVar28[3];
            if (iVar15 != iVar23) {
              if (iVar15 != -1) {
                local_res20[0] = (undefined4)puVar20[2];
                FCsvStatSeries::CommitFrameData(puVar20,local_res20);
              }
              cVar13 = '\0';
              *(int *)(puVar20 + 1) = iVar23;
            }
            if (cVar13 == '\0') {
              *(int *)(puVar20 + 2) = iVar3;
            }
            else {
              if (cVar13 == '\x01') {
                iVar23 = (int)puVar20[2];
                if (iVar3 <= (int)puVar20[2]) {
                  iVar23 = iVar3;
                }
              }
              else {
                if (cVar13 != '\x02') {
                  if (cVar13 == '\x03') {
                    *(int *)(puVar20 + 2) = (int)puVar20[2] + iVar3;
                  }
                  goto LAB_14169167a;
                }
                iVar23 = (int)puVar20[2];
                if ((int)puVar20[2] <= iVar3) {
                  iVar23 = iVar3;
                }
              }
              *(int *)(puVar20 + 2) = iVar23;
            }
          }
        }
      }
LAB_14169167a:
      puVar28 = puVar28 + 4;
      local_128 = local_128 - 1;
    } while (local_128 != 0);
  }
  plVar10 = local_118;
  iVar23 = (int)local_c0;
  puVar28 = local_108;
  plVar29 = local_c8;
  plVar22 = local_c8;
  if (0 < (int)local_c0) {
    uVar27 = local_c0 & 0xffffffff;
    plVar29 = &DAT_1468e3770 + (longlong)local_118 * 2;
    plVar22 = local_c8 + 3;
    local_118 = plVar29;
    do {
      uVar19 = plVar22[-1];
      if ((ulonglong)(&DAT_1468e36c0)[(longlong)plVar10 * 0x14] <
          (ulonglong)(&DAT_1468e36b8)[(longlong)plVar10 * 0x14]) {
        FFrameBoundaries::Update(&DAT_1468e3630,(int)plVar26);
      }
      iVar23 = (int)plVar29[1];
      if ((iVar23 == 0) || (uVar19 < *(ulonglong *)*plVar29)) {
        iVar23 = -1;
        DAT_1468e3790 = 0;
      }
      else {
        if (iVar23 <= (int)DAT_1468e3790) {
          DAT_1468e3790 = iVar23 - 1;
        }
        if ((0 < (int)DAT_1468e3790) &&
           (uVar19 < *(ulonglong *)(*plVar29 + (longlong)(int)(DAT_1468e3790 - 1) * 8))) {
          uVar11 = 0;
          uVar25 = DAT_1468e3790;
          uVar14 = DAT_1468e3790;
          while (DAT_1468e3790 = uVar11, 4 < (int)uVar14) {
            iVar23 = uVar25 + DAT_1468e3790;
            if (iVar23 < 0) {
              iVar23 = iVar23 + 1;
            }
            uVar24 = iVar23 >> 1;
            if (*(ulonglong *)(*plVar29 + (longlong)(int)uVar24 * 8) <= uVar19) {
              DAT_1468e3790 = uVar24;
              uVar24 = uVar25;
            }
            uVar11 = DAT_1468e3790;
            uVar25 = uVar24;
            uVar14 = uVar24 - DAT_1468e3790;
          }
        }
        iVar23 = (int)plVar29[1];
        if ((int)DAT_1468e3790 < iVar23) {
          do {
            if (uVar19 < *(ulonglong *)(*plVar29 + (longlong)(int)DAT_1468e3790 * 8)) {
              iVar23 = DAT_1468e3790 - 1;
              goto LAB_141691888;
            }
            DAT_1468e3790 = DAT_1468e3790 + 1;
            iVar23 = (int)plVar29[1];
          } while ((int)DAT_1468e3790 < iVar23);
        }
        iVar23 = iVar23 + -1;
      }
LAB_141691888:
      if (-1 < iVar23) {
        local_f8 = (void *)0x0;
        local_f0 = 0;
        if (&local_f8 != (void **)(plVar22 + -3)) {
          uVar25 = *(uint *)(plVar22 + -2);
          _Src = (void *)plVar22[-3];
          local_f0 = (ulonglong)uVar25;
          plVar29 = local_118;
          if (uVar25 != 0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f8,uVar25,0);
            _guard_xfg_dispatch_icall_nop(local_f8,_Src,(longlong)(int)uVar25 * 2);
            plVar29 = local_118;
          }
        }
        local_e4 = (undefined4)*plVar22;
        iVar15 = param_1[0xa0];
        param_1[0xa0] = iVar15 + 1;
        local_e8 = iVar23;
        if (param_1[0xa1] < iVar15 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_1 + 0x9e,iVar15);
        }
        lVar16 = *(longlong *)(param_1 + 0x9e) + (longlong)iVar15 * 0x18;
        FString::FString(lVar16,&local_f8);
        *(int *)(lVar16 + 0x10) = local_e8;
        *(undefined4 *)(lVar16 + 0x14) = local_e4;
        if (local_f8 != (void *)0x0) {
          FMemory::Free();
        }
      }
      plVar22 = plVar22 + 4;
      uVar27 = uVar27 - 1;
    } while (uVar27 != 0);
    iVar23 = (int)local_c0;
    puVar28 = local_108;
    plVar29 = local_c8;
    plVar22 = local_c8;
  }
  for (; plVar26 = local_c8, puVar20 = local_108, local_108 = puVar28, iVar23 != 0;
      iVar23 = iVar23 + -1) {
    local_c8 = plVar22;
    if (*plVar29 != 0) {
      FMemory::Free();
    }
    puVar28 = local_108;
    plVar29 = plVar29 + 4;
    plVar22 = local_c8;
    local_c8 = plVar26;
    local_108 = puVar20;
  }
  bVar30 = local_c8 != (longlong *)0x0;
  local_c8 = plVar22;
  if (bVar30) {
    FMemory::Free(plVar26);
  }
  if (local_b8 != (ulonglong *)0x0) {
    FMemory::Free();
  }
  if (puVar20 != (ulonglong *)0x0) {
    FMemory::Free(puVar20);
  }
  return;
}



// FUNCTION 1416919f0 PushSerializedProperty body=179 status=ok
// SIG undefined PushSerializedProperty(void)

void FArchive::PushSerializedProperty(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar3;
  longlong lVar4;
  int iVar2;
  
  if (param_2 != 0) {
    lVar4 = 0;
    lVar3 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar3 = operator_new(0x58);
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x40) = 0;
        *(undefined8 *)(lVar3 + 0x48) = 0;
        *(undefined4 *)(lVar3 + 0x50) = 0;
        lVar4 = lVar3;
      }
      *(longlong *)(param_1 + 0x80) = lVar4;
      lVar3 = lVar4;
    }
    iVar2 = *(int *)(lVar3 + 0x48);
    *(int *)(lVar3 + 0x48) = iVar2 + 1;
    if (*(int *)(lVar3 + 0x4c) < iVar2 + 1) {
      TArray<USkeletalMeshComponent_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
                (lVar3,iVar2);
    }
    lVar4 = *(longlong *)(lVar3 + 0x40);
    if (*(longlong *)(lVar3 + 0x40) == 0) {
      lVar4 = lVar3;
    }
    *(longlong *)(lVar4 + (longlong)iVar2 * 8) = param_2;
    iVar2 = *(int *)(lVar3 + 0x50);
    do {
      iVar1 = iVar2 + 1;
      iVar2 = 0;
    } while (iVar1 == 0);
    *(int *)(lVar3 + 0x50) = iVar1;
    *(longlong *)(param_1 + 0x78) = param_2;
  }
  return;
}



// FUNCTION 141691ab0 QueryModule body=425 status=ok
// SIG undefined QueryModule(void)

undefined8 FModuleManager::QueryModule(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 local_res10;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_48 [2];
  longlong local_38 [2];
  
  local_res10 = param_2;
  plVar7 = (longlong *)FindModule(param_1,local_58,param_2);
  plVar3 = (longlong *)plVar7[1];
  lVar4 = *plVar7;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_50 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  if (lVar4 == 0) {
    uVar9 = 0;
  }
  else {
    plVar7 = (longlong *)FName::ToString(&local_res10,local_48);
    if (param_3 != plVar7) {
      if (*param_3 != 0) {
        FMemory::Free();
      }
      *param_3 = *plVar7;
      *plVar7 = 0;
      *(int *)(param_3 + 1) = (int)plVar7[1];
      *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar7 + 0xc);
      plVar7[1] = 0;
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    plVar8 = (longlong *)FPaths::ConvertRelativePathToFull(local_38,lVar4 + 0x10);
    plVar7 = param_3 + 2;
    if (plVar7 != plVar8) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      *plVar7 = *plVar8;
      *plVar8 = 0;
      *(int *)(param_3 + 3) = (int)plVar8[1];
      *(undefined4 *)((longlong)param_3 + 0x1c) = *(undefined4 *)((longlong)plVar8 + 0xc);
      plVar8[1] = 0;
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    lVar5 = *(longlong *)(lVar4 + 0x28);
    *(bool *)(param_3 + 4) = lVar5 != 0;
    if (lVar5 != 0) {
      uVar6 = (**(code **)(**(longlong **)(lVar4 + 0x28) + 0x38))();
      *(undefined1 *)((longlong)param_3 + 0x21) = uVar6;
    }
    uVar9 = 1;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return uVar9;
}



// FUNCTION 141691c60 Read body=88 status=ok
// SIG undefined Read(void)

undefined8 FLargeMemoryData::Read(longlong *param_1,void *param_2,longlong param_3,size_t param_4)

{
  uint uVar1;
  
  if (-1 < param_3) {
    if (param_2 == (void *)0x0) {
      uVar1 = (uint)(param_4 == 0);
    }
    else {
      uVar1 = (uint)(param_4 >> 0x3f) ^ 1;
    }
    if ((uVar1 != 0) && ((longlong)(param_3 + param_4) <= param_1[1])) {
      if (param_4 != 0) {
        ::_guard_xfg_dispatch_icall_nop(param_2,(void *)(param_3 + *param_1),param_4);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141691cc0 FUN_141691cc0 body=1732 status=ok
// SIG undefined FUN_141691cc0(void)

void FUN_141691cc0(longlong param_1,longlong *param_2,uint param_3)

{
  short *psVar1;
  longlong lVar2;
  BOOL BVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  void *pvVar15;
  WORD *pWVar16;
  undefined2 *puVar17;
  void *pvVar18;
  void *pvVar19;
  void *pvVar20;
  void *pvVar21;
  int local_res20;
  void *local_e8;
  undefined8 local_e0;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  uint local_a0;
  int local_9c;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  ulonglong *local_68;
  longlong local_60;
  longlong local_58 [3];
  
  local_res20 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    local_60 = 0;
    do {
      pvVar18 = (void *)0x0;
      local_68 = *(ulonglong **)(*(longlong *)(param_1 + 0x50) + local_60 * 8);
      uVar14 = *local_68;
      if ((((uint)(uVar14 >> 1) & 0x7ff) == param_3) || (param_3 == 0xffffffff)) {
        uVar11 = (uint)(uVar14 >> 0xc);
        iVar4 = 0;
        pvVar20 = pvVar18;
        if ((uVar14 & 1) == 0) {
          puVar6 = (undefined8 *)((longlong)(int)uVar11 * 0x10 + DAT_1468e3798);
          local_a8 = (void *)0x0;
          local_a0 = *(uint *)(puVar6 + 1);
          lVar5 = (longlong)(int)local_a0;
          pvVar15 = (void *)*puVar6;
          if (local_a0 == 0) {
            local_9c = 0;
            pvVar15 = (void *)0x0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,local_a0,0);
            pvVar20 = local_a8;
            _guard_xfg_dispatch_icall_nop(local_a8,pvVar15,lVar5 * 2);
            pvVar15 = (void *)(ulonglong)local_a0;
          }
        }
        else {
          lVar5 = FName::GetNames();
          uVar7 = uVar11 & 0x3fff;
          if ((int)uVar11 < 0) {
            uVar11 = uVar11 + 0x3fff;
            uVar7 = uVar7 - 0x4000;
          }
          iVar10 = DAT_1464aff80 + -1;
          if (DAT_1464aff80 == 0) {
            iVar10 = iVar4;
          }
          puVar6 = (undefined8 *)
                   FNameEntry::GetPlainNameString
                             (*(undefined8 *)
                               (*(longlong *)(lVar5 + (longlong)((int)uVar11 >> 0xe) * 8) +
                               (longlong)(int)uVar7 * 8),local_58);
          if (*(int *)(puVar6 + 1) == 0) {
            puVar17 = &DAT_143f3eda8;
            iVar8 = iVar4;
          }
          else {
            puVar17 = (undefined2 *)*puVar6;
            iVar8 = *(int *)(puVar6 + 1) + -1;
          }
          iVar10 = iVar8 - iVar10;
          iVar12 = iVar4;
          if ((-1 < iVar10) && (iVar12 = iVar8, iVar10 < iVar8)) {
            iVar12 = iVar10;
          }
          local_a8 = (void *)0x0;
          local_9c = 0;
          psVar1 = puVar17 + ((longlong)iVar8 - (longlong)iVar12);
          pvVar15 = pvVar18;
          if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
            lVar5 = -1;
            do {
              lVar2 = lVar5 + 1;
              lVar5 = lVar5 + 1;
            } while (psVar1[lVar2] != 0);
            local_a0 = (int)lVar5 + 1;
            lVar5 = (longlong)(int)local_a0;
            if (0 < (int)local_a0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
            }
            pvVar20 = local_a8;
            pvVar15 = (void *)(ulonglong)local_a0;
            FGenericPlatformString::Memcpy(local_a8,psVar1,lVar5 * 2);
          }
          if (local_58[0] != 0) {
            FMemory::Free();
          }
        }
        pvVar21 = pvVar20;
        if (1 < (byte)((char)local_68[3] - 1U)) {
          iVar10 = *(int *)(param_1 + 0x78);
          pvVar21 = *(void **)(param_1 + 0x70);
          local_b8 = (void *)0x0;
          local_b0._0_4_ = iVar10;
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                    (&local_b8,(2 - (uint)(iVar10 != 0)) + iVar10,0);
          pvVar19 = local_b8;
          _guard_xfg_dispatch_icall_nop(local_b8,pvVar21,(longlong)iVar10 * 2);
          iVar10 = (uint)local_b0;
          lVar5 = (longlong)(int)(uint)local_b0;
          local_b0._0_4_ = (2 - (uint)((uint)local_b0 != 0)) + (uint)local_b0;
          iVar8 = local_b0._4_4_;
          uVar11 = (uint)local_b0;
          if (local_b0._4_4_ < (int)(uint)local_b0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar10);
            pvVar19 = local_b8;
            iVar8 = local_b0._4_4_;
            uVar11 = (uint)local_b0;
          }
          local_b8 = (void *)0x0;
          local_b0 = 0;
          lVar5 = (lVar5 - (ulonglong)(iVar10 != 0)) * 2;
          *(undefined2 *)(lVar5 + (longlong)pvVar19) = 0x2f;
          *(undefined2 *)(lVar5 + 2 + (longlong)pvVar19) = 0;
          iVar10 = (int)pvVar15;
          if ((int)uVar11 < 2) {
            local_98 = (void *)0x0;
            local_90 = CONCAT44(local_90._4_4_,iVar10);
            pvVar9 = pvVar19;
            if (iVar10 == 0) {
              pvVar21 = pvVar18;
              iVar4 = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,pvVar15,0);
              pvVar21 = local_98;
              _guard_xfg_dispatch_icall_nop(local_98,pvVar20,(longlong)iVar10 * 2);
              pvVar15 = (void *)(local_90 & 0xffffffff);
              iVar4 = local_90._4_4_;
            }
          }
          else {
            iVar12 = iVar10 + -1;
            if (iVar10 == 0) {
              iVar12 = iVar4;
            }
            if ((uVar11 != 0) || (iVar10 = 1, iVar12 == 0)) {
              iVar10 = iVar4;
            }
            pvVar9 = (void *)0x0;
            local_e8 = pvVar19;
            local_e0._4_4_ = iVar8;
            if (iVar8 < (int)(uVar11 + iVar10 + iVar12)) {
              local_e0._0_4_ = uVar11;
              TArray<wchar_t,FDefaultAllocator>::ResizeTo();
              uVar11 = (uint)local_e0;
            }
            pvVar15 = (void *)(ulonglong)uVar11;
            pvVar21 = local_e8;
            iVar4 = local_e0._4_4_;
            if (iVar12 != 0) {
              local_e0._0_4_ = uVar11 + (uVar11 == 0) + iVar12;
              if (local_e0._4_4_ < (int)(uint)local_e0) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,pvVar15);
              }
              iVar4 = local_e0._4_4_;
              pvVar21 = local_e8;
              pvVar15 = (void *)(ulonglong)(uint)local_e0;
              pvVar18 = (void *)((longlong)local_e8 +
                                ((longlong)(int)uVar11 - (ulonglong)(uVar11 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(pvVar18,pvVar20,(longlong)iVar12 * 2);
              *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar18) = 0;
            }
            local_e8 = (void *)0x0;
            local_e0 = 0;
          }
          if (pvVar20 != (void *)0x0) {
            FMemory::Free(pvVar20);
          }
          local_98 = (void *)0x0;
          local_90 = 0;
          local_9c = iVar4;
          if (pvVar9 != (void *)0x0) {
            FMemory::Free(pvVar9);
          }
        }
        pvVar20 = (void *)0x0;
        iVar4 = (int)pvVar15;
        uVar14 = *local_68;
        pvVar18 = pvVar21;
        if ((uVar14 >> 1 & 0x7ff) != 0) {
          lpCriticalSection = (LPCRITICAL_SECTION)FCsvCategoryData::Get();
          BVar3 = TryEnterCriticalSection(lpCriticalSection);
          if (BVar3 == 0) {
            EnterCriticalSection(lpCriticalSection);
          }
          local_88 = (void *)0x0;
          pWVar16 = &(lpCriticalSection[3].DebugInfo)->Type +
                    (ulonglong)((uint)(uVar14 >> 1) & 0x7ff) * 8;
          uVar11 = *(uint *)(pWVar16 + 4);
          uVar14 = (ulonglong)(int)uVar11;
          pvVar18 = *(void **)pWVar16;
          pvVar19 = pvVar20;
          local_80._0_4_ = uVar11;
          if (uVar11 != 0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,uVar11,0);
            pvVar20 = local_88;
            _guard_xfg_dispatch_icall_nop(local_88,pvVar18,uVar14 * 2);
            pvVar19 = (void *)(ulonglong)local_80._4_4_;
            uVar14 = (ulonglong)(uint)local_80;
          }
          LeaveCriticalSection(lpCriticalSection);
          local_d0._0_4_ = (uint)uVar14;
          local_d0._4_4_ = (int)pvVar19;
          local_88 = (void *)0x0;
          local_80 = 0;
          local_d8 = pvVar20;
          if (local_d0._4_4_ < (int)((2 - (uint)((uint)local_d0 != 0)) + (uint)local_d0)) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_d8);
            uVar14 = (ulonglong)(uint)local_d0;
          }
          iVar12 = (int)uVar14;
          local_d0._0_4_ = (2 - (uint)(iVar12 != 0)) + iVar12;
          pvVar20 = local_d8;
          iVar10 = (uint)local_d0;
          iVar8 = local_d0._4_4_;
          if (local_d0._4_4_ < (int)(uint)local_d0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,uVar14 & 0xffffffff);
            pvVar20 = local_d8;
            iVar10 = (uint)local_d0;
            iVar8 = local_d0._4_4_;
          }
          local_d8 = (void *)0x0;
          local_d0 = 0;
          lVar5 = ((longlong)iVar12 - (ulonglong)(iVar12 != 0)) * 2;
          *(undefined2 *)(lVar5 + (longlong)pvVar20) = 0x2f;
          *(undefined2 *)(lVar5 + 2 + (longlong)pvVar20) = 0;
          iVar12 = 0;
          if (iVar10 < 2) {
            local_78 = (void *)0x0;
            local_70 = CONCAT44(local_70._4_4_,iVar4);
            pvVar18 = (void *)0x0;
            if (iVar4 != 0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,pvVar15,0);
              pvVar18 = local_78;
              _guard_xfg_dispatch_icall_nop(local_78,pvVar21,(longlong)iVar4 * 2);
              iVar12 = local_70._4_4_;
              iVar4 = (int)local_70;
            }
          }
          else {
            iVar13 = iVar4 + -1;
            if (iVar4 == 0) {
              iVar13 = iVar12;
            }
            if ((iVar10 != 0) || (iVar4 = 1, iVar13 == 0)) {
              iVar4 = iVar12;
            }
            iVar4 = iVar4 + iVar13 + iVar10;
            local_c8 = pvVar20;
            local_c0._4_4_ = iVar8;
            if (iVar8 < iVar4) {
              local_c0._0_4_ = iVar10;
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8,iVar4);
              iVar10 = (int)local_c0;
            }
            pvVar18 = local_c8;
            iVar12 = local_c0._4_4_;
            iVar4 = iVar10;
            if (iVar13 != 0) {
              local_c0._0_4_ = iVar10 + (uint)(iVar10 == 0) + iVar13;
              if (local_c0._4_4_ < (int)local_c0) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,iVar10);
              }
              iVar12 = local_c0._4_4_;
              iVar4 = (int)local_c0;
              pvVar18 = local_c8;
              pvVar20 = (void *)((longlong)local_c8 +
                                ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(pvVar20,pvVar21,(longlong)iVar13 * 2);
              *(undefined2 *)((longlong)iVar13 * 2 + (longlong)pvVar20) = 0;
            }
            local_c8 = (void *)0x0;
            local_c0 = 0;
            pvVar20 = (void *)0x0;
          }
          if (pvVar21 != (void *)0x0) {
            FMemory::Free(pvVar21);
          }
          local_78 = (void *)0x0;
          local_70 = 0;
          local_9c = iVar12;
          if (pvVar20 != (void *)0x0) {
            FMemory::Free(pvVar20);
          }
        }
        iVar10 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar10 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar10 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar10);
        }
        puVar6 = (undefined8 *)((longlong)iVar10 * 0x10 + *param_2);
        *puVar6 = 0;
        *(int *)(puVar6 + 1) = iVar4;
        if (iVar4 == 0) {
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar6,iVar4,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar6,pvVar18,(longlong)iVar4 * 2);
        }
        if (pvVar18 != (void *)0x0) {
          FMemory::Free(pvVar18);
        }
      }
      local_res20 = local_res20 + 1;
      local_60 = local_60 + 1;
    } while (local_res20 < *(int *)(param_1 + 0x58));
  }
  return;
}



// FUNCTION 141692390 RecordCustomStat body=97 status=ok
// SIG undefined RecordCustomStat(void)

void FCsvProfiler::RecordCustomStat
               (longlong param_1,int *param_2,uint param_3,undefined4 param_4,undefined1 param_5)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 8) != '\0') && ((&DAT_1468e3840)[param_3] != '\0')) {
    uVar1 = FUN_14168ec50();
    FCsvProfilerThreadData::AddCustomStatInternal
              (uVar1,(longlong)*param_2,param_3,param_4,param_5,1);
  }
  return;
}



// FUNCTION 141692400 RecordCustomStat body=97 status=ok
// SIG undefined RecordCustomStat(void)

void FCsvProfiler::RecordCustomStat
               (longlong param_1,undefined8 param_2,uint param_3,undefined4 param_4,
               undefined1 param_5)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 8) != '\0') && ((&DAT_1468e3840)[param_3] != '\0')) {
    uVar1 = FUN_14168ec50();
    FCsvProfilerThreadData::AddCustomStatInternal(uVar1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// FUNCTION 141692470 RecordCustomStat body=97 status=ok
// SIG undefined RecordCustomStat(void)

void FCsvProfiler::RecordCustomStat
               (longlong param_1,undefined8 param_2,uint param_3,undefined4 param_4,
               undefined1 param_5)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 8) != '\0') && ((&DAT_1468e3840)[param_3] != '\0')) {
    uVar1 = FUN_14168ec50();
    FCsvProfilerThreadData::AddCustomStatInternal(uVar1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// FUNCTION 1416924e0 FUN_1416924e0 body=515 status=ok
// SIG undefined FUN_1416924e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416924e0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  void **ppvVar7;
  undefined8 local_res20;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined8 *local_260;
  void *local_258;
  ulonglong local_250;
  LARGE_INTEGER local_248;
  undefined8 *local_240;
  short local_238 [255];
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  if ((&DAT_1468e3840)[param_2] != '\0') {
    local_res20 = param_4;
    local_240 = &local_res20;
    puVar2 = (ulonglong *)__local_stdio_printf_options();
    lVar4 = 0;
    local_268 = 0;
    local_260 = &local_res20;
    __stdio_common_vswprintf(*puVar2 | 1,local_238,0xff,param_3);
    local_3a = 0;
    local_258 = (void *)0x0;
    local_250 = 0;
    if (local_238[0] != 0) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (local_238[lVar6] != 0);
      uVar5 = (int)lVar6 + 1;
      local_250 = (ulonglong)uVar5;
      if (0 < (int)uVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_258,0);
      }
      FGenericPlatformString::Memcpy(local_258,local_238,(longlong)(int)uVar5 * 2);
    }
    if ((*(char *)(param_1 + 8) != '\0') && ((&DAT_1468e3840)[param_2] != '\0')) {
      lVar6 = FUN_14168ec50(param_1);
      uVar1 = *(ulonglong *)(lVar6 + 0x200);
      if ((uVar1 & 0x1f) == 0) {
        lVar3 = operator_new(0x408);
        if (lVar3 != 0) {
          lVar4 = TSingleProducerSingleConsumerList<FCsvEvent,32>::FBlock::FBlock(lVar3);
        }
        *(int *)(lVar6 + 0x210) = *(int *)(lVar6 + 0x210) + 1;
        if (*(longlong *)(lVar6 + 0x180) == 0) {
          *(longlong *)(lVar6 + 0x178) = lVar4;
          *(longlong *)(lVar6 + 0x180) = lVar4;
        }
        else {
          *(longlong *)(*(longlong *)(lVar6 + 0x180) + 0x400) = lVar4;
          *(longlong *)(lVar6 + 0x180) = lVar4;
        }
      }
      else {
        lVar4 = *(longlong *)(lVar6 + 0x180);
      }
      ppvVar7 = (void **)((ulonglong)((uint)uVar1 & 0x1f) * 0x20 + lVar4);
      if (ppvVar7 != &local_258) {
        lVar4 = (longlong)(int)local_250;
        *(int *)(ppvVar7 + 1) = (int)local_250;
        if (((int)local_250 == 0) && (*(int *)((longlong)ppvVar7 + 0xc) == 0)) {
          *(undefined4 *)((longlong)ppvVar7 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar7,local_250 & 0xffffffff);
          _guard_xfg_dispatch_icall_nop(*ppvVar7,local_258,lVar4 * 2);
        }
      }
      QueryPerformanceCounter(&local_248);
      *(LARGE_INTEGER *)(ppvVar7 + 2) = local_248;
      *(int *)(ppvVar7 + 3) = param_2;
      *(longlong *)(lVar6 + 0x200) = *(longlong *)(lVar6 + 0x200) + 1;
    }
    if (local_258 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1416926f0 Refresh body=2584 status=ok
// SIG undefined Refresh(void)

void FUProjectDictionary::Refresh(undefined8 *param_1)

{
  void *pvVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  bool bVar21;
  longlong *plVar22;
  undefined2 in_stack_fffffffffffffed8;
  byte bVar24;
  ushort uVar23;
  undefined1 uVar25;
  undefined2 *local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  int local_f0;
  undefined4 local_ec;
  longlong *local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  ulonglong local_a0;
  longlong *local_98;
  undefined8 local_90;
  void *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  longlong *local_68;
  undefined2 **local_60;
  longlong local_58 [3];
  
  bVar24 = (byte)((ushort)in_stack_fffffffffffffed8 >> 8);
  iVar18 = *(int *)((longlong)param_1 + 0x1c);
  plVar7 = param_1 + 2;
  plVar5 = (longlong *)*plVar7;
  bVar21 = false;
  iVar17 = *(int *)(param_1 + 3);
  if (iVar18 < 0) {
    if (iVar17 != 0) {
      do {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        bVar24 = (byte)((ushort)in_stack_fffffffffffffed8 >> 8);
        plVar5 = plVar5 + 2;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
      iVar18 = *(int *)((longlong)param_1 + 0x1c);
    }
    *(undefined4 *)(param_1 + 3) = 0;
    if (iVar18 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar7,0);
    }
  }
  else {
    for (; iVar17 != 0; iVar17 = iVar17 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      bVar24 = (byte)((ushort)in_stack_fffffffffffffed8 >> 8);
      plVar5 = plVar5 + 2;
    }
    *(undefined4 *)(param_1 + 3) = 0;
  }
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Reset(param_1 + 4);
  local_98 = (longlong *)0x0;
  local_90 = 0;
  plVar5 = (longlong *)FUN_1415c3d50();
  local_d8 = (undefined2 *)0x0;
  local_d0 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  puVar11 = local_d8;
  FGenericPlatformString::Memcpy(local_d8,L"*.uprojectdirs",0x1e);
  if ((int)local_d0 == 0) {
    iVar18 = 0;
  }
  else {
    iVar18 = (int)local_d0 + -1;
  }
  iVar17 = *(int *)(param_1 + 1);
  if ((iVar17 != 0) || (iVar4 = 2, iVar18 == -1)) {
    iVar4 = 1;
  }
  pvVar1 = (void *)*param_1;
  local_118 = (undefined2 *)0x0;
  local_110 = CONCAT44(local_110._4_4_,iVar17);
  if ((iVar17 == 0) && (iVar4 + iVar18 == 0)) {
    local_110 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_118,iVar17 + iVar4 + iVar18,0);
    ::_guard_xfg_dispatch_icall_nop(local_118,pvVar1,(longlong)iVar17 * 2);
  }
  FString::PathAppend(&local_118,puVar11,iVar18);
  puVar9 = &DAT_143f3eda8;
  if ((int)local_110 != 0) {
    puVar9 = local_118;
  }
  uVar23 = (ushort)bVar24 << 8;
  (**(code **)(*plVar5 + 0x78))(plVar5,&local_98,puVar9,1,uVar23);
  if (local_118 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  FPaths::ConvertRelativePathToFull(&local_78,param_1);
  FPaths::NormalizeDirectoryName(&local_78);
  iVar18 = local_70;
  puVar11 = local_78;
  local_80 = local_70;
  local_88 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_88,(2 - (uint)(local_70 != 0)) + local_70,0);
  ::_guard_xfg_dispatch_icall_nop(local_88,puVar11,(longlong)iVar18 * 2);
  FString::PathAppend(&local_88,&DAT_144cd137c,0);
  plVar8 = local_98 + (longlong)(int)local_90 * 2;
  plVar5 = local_98;
  do {
    if (plVar5 == plVar8) {
      puVar13 = (undefined8 *)*plVar7;
      puVar12 = puVar13 + (longlong)*(int *)(param_1 + 3) * 2;
      for (; puVar13 != puVar12; puVar13 = puVar13 + 2) {
        uVar25 = (undefined1)(uVar23 >> 8);
        local_a8 = (longlong *)0x0;
        local_a0 = 0;
        plVar7 = (longlong *)FUN_1415c3d50();
        local_c8 = 0;
        local_c0 = 2;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
        lVar20 = local_c8;
        FGenericPlatformString::Memcpy(local_c8,&DAT_144cd1674,4);
        if ((int)local_c0 == 0) {
          iVar18 = 0;
        }
        else {
          iVar18 = (int)local_c0 + -1;
        }
        local_f0 = *(int *)(puVar13 + 1);
        lVar14 = (longlong)local_f0;
        if ((local_f0 != 0) || (iVar17 = 2, iVar18 == -1)) {
          iVar17 = 1;
        }
        local_f8 = (undefined2 *)0x0;
        pvVar1 = (void *)*puVar13;
        if ((local_f0 == 0) && (iVar18 + iVar17 == 0)) {
          local_ec = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f8,local_f0 + iVar18 + iVar17,0);
          ::_guard_xfg_dispatch_icall_nop(local_f8,pvVar1,lVar14 * 2);
        }
        FString::PathAppend(&local_f8,lVar20,iVar18);
        puVar11 = &DAT_143f3eda8;
        if (local_f0 != 0) {
          puVar11 = local_f8;
        }
        uVar23 = CONCAT11(uVar25,1);
        (**(code **)(*plVar7 + 0x78))(plVar7,&local_a8,puVar11,0,uVar23);
        if (local_f8 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (lVar20 != 0) {
          FMemory::Free(lVar20);
        }
        uVar15 = (ulonglong)(int)local_a0;
        plVar5 = local_a8 + uVar15 * 2;
        plVar7 = local_a8;
        if (local_a8 != plVar5) {
          do {
            local_b8 = (longlong *)0x0;
            local_b0 = 0;
            plVar8 = (longlong *)FUN_1415c3d50();
            iVar17 = *(int *)(puVar13 + 1);
            iVar18 = (int)plVar7[1] + -1;
            if ((int)plVar7[1] == 0) {
              iVar18 = 0;
            }
            if ((iVar17 != 0) || (iVar4 = 2, iVar18 == -1)) {
              iVar4 = 1;
            }
            pvVar1 = (void *)*puVar13;
            local_108 = (longlong *)0x0;
            local_100 = CONCAT44(local_100._4_4_,iVar17);
            if ((iVar17 == 0) && (iVar4 + iVar18 == 0)) {
              local_100 = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_108,iVar17 + iVar4 + iVar18,0)
              ;
              ::_guard_xfg_dispatch_icall_nop(local_108,pvVar1,(longlong)iVar17 * 2);
            }
            FString::PathAppend(&local_108,*plVar7,iVar18);
            local_e8 = local_108;
            iVar18 = local_100._4_4_;
            iVar17 = (int)local_100 + (0xc - (uint)((int)local_100 != 0));
            local_108 = (longlong *)0x0;
            local_e0 = local_100;
            local_100 = 0;
            if (iVar18 < iVar17) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_e8);
            }
            FString::PathAppend(&local_e8,L"*.uproject",10);
            uVar23 = uVar23 & 0xff00;
            (**(code **)(*plVar8 + 0x78))(plVar8);
            if (local_e8 != (longlong *)0x0) {
              FMemory::Free();
            }
            if (local_108 != (longlong *)0x0) {
              FMemory::Free();
            }
            uVar15 = (ulonglong)(int)local_b0;
            plVar8 = local_b8 + uVar15 * 2;
            if (local_b8 != plVar8) {
              local_68 = local_58;
              local_60 = &local_d8;
              plVar16 = local_b8;
              do {
                FUN_141671940(local_58,plVar16,1);
                iVar18 = *(int *)(puVar13 + 1);
                iVar17 = (int)plVar7[1] + -1;
                if ((int)plVar7[1] == 0) {
                  iVar17 = 0;
                }
                if ((iVar18 != 0) || (iVar4 = 2, iVar17 == -1)) {
                  iVar4 = 1;
                }
                local_118 = (undefined2 *)0x0;
                pvVar1 = (void *)*puVar13;
                local_110 = CONCAT44(local_110._4_4_,iVar18);
                if ((iVar18 == 0) && (iVar4 + iVar17 == 0)) {
                  local_110 = 0;
                }
                else {
                  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                            (&local_118,iVar18 + iVar4 + iVar17,0);
                  ::_guard_xfg_dispatch_icall_nop(local_118,pvVar1,(longlong)iVar18 * 2);
                }
                FString::PathAppend(&local_118,*plVar7,iVar17);
                iVar18 = (int)plVar16[1] + -1;
                if ((int)plVar16[1] == 0) {
                  iVar18 = 0;
                }
                if (((int)local_110 != 0) || (iVar17 = 1, iVar18 + 1 == 0)) {
                  iVar17 = 0;
                }
                iVar10 = iVar18 + 1 + (int)local_110;
                local_d8 = local_118;
                iVar4 = local_110._4_4_;
                local_118 = (undefined2 *)0x0;
                local_d0 = local_110;
                local_110 = 0;
                if (iVar4 < iVar10 + iVar17) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_d8);
                }
                FString::PathAppend(&local_d8,*plVar16,iVar18);
                if (local_118 != (undefined2 *)0x0) {
                  FMemory::Free();
                }
                TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>(param_1 + 4);
                if (local_d8 != (undefined2 *)0x0) {
                  FMemory::Free();
                }
                if (local_58[0] != 0) {
                  FMemory::Free();
                }
                plVar16 = plVar16 + 2;
              } while (plVar16 != plVar8);
              uVar15 = local_b0 & 0xffffffff;
            }
            uVar19 = (uint)uVar15;
            plVar8 = local_b8;
            while (uVar19 != 0) {
              if (*plVar8 != 0) {
                FMemory::Free();
              }
              plVar8 = plVar8 + 2;
              uVar19 = (int)uVar15 - 1;
              uVar15 = (ulonglong)uVar19;
            }
            if (local_b8 != (longlong *)0x0) {
              FMemory::Free(local_b8);
            }
            plVar7 = plVar7 + 2;
          } while (plVar7 != plVar5);
          uVar15 = local_a0 & 0xffffffff;
        }
        uVar19 = (uint)uVar15;
        plVar7 = local_a8;
        while (uVar19 != 0) {
          if (*plVar7 != 0) {
            FMemory::Free();
          }
          plVar7 = plVar7 + 2;
          uVar19 = (int)uVar15 - 1;
          uVar15 = (ulonglong)uVar19;
        }
        if (local_a8 != (longlong *)0x0) {
          FMemory::Free(local_a8);
        }
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_78 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      plVar7 = local_98;
      for (iVar18 = (int)local_90; iVar18 != 0; iVar18 = iVar18 + -1) {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 2;
      }
      if (local_98 != (longlong *)0x0) {
        FMemory::Free();
      }
      return;
    }
    local_f0 = *(int *)(param_1 + 1);
    lVar20 = (longlong)local_f0;
    local_108 = (longlong *)0x0;
    local_100 = 0;
    iVar18 = (int)plVar5[1] + -1;
    if ((int)plVar5[1] == 0) {
      iVar18 = 0;
    }
    if ((local_f0 != 0) || (iVar17 = 2, iVar18 == -1)) {
      iVar17 = 1;
    }
    local_f8 = (undefined2 *)0x0;
    pvVar1 = (void *)*param_1;
    if ((local_f0 == 0) && (iVar17 + iVar18 == 0)) {
      local_ec = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f8,local_f0 + iVar17 + iVar18,0);
      ::_guard_xfg_dispatch_icall_nop(local_f8,pvVar1,lVar20 * 2);
    }
    FString::PathAppend(&local_f8,*plVar5,iVar18);
    puVar11 = &DAT_143f3eda8;
    if (local_f0 != 0) {
      puVar11 = local_f8;
    }
    uVar6 = FUN_1415c3d50();
    cVar3 = FUN_1416761b0(puVar11,uVar6);
    if (local_f8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (cVar3 != '\0') {
      plVar22 = local_108 + (longlong)(int)local_100 * 2;
      for (plVar16 = local_108; plVar16 != plVar22; plVar16 = plVar16 + 2) {
        FString::TrimStart(plVar16,&local_c8);
        if ((int)local_c0 < 2) {
LAB_141692a74:
          bVar2 = false;
        }
        else {
          local_e8 = (longlong *)0x0;
          local_e0 = 2;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
          uVar23 = 0;
          FGenericPlatformString::Convert<char,wchar_t>(local_e8,2,&DAT_144cd1504,2,0x3f);
          bVar21 = true;
          cVar3 = FString::StartsWith(&local_c8,&local_e8);
          if (cVar3 != '\0') goto LAB_141692a74;
          bVar2 = true;
        }
        if ((bVar21) && (bVar21 = false, local_e8 != (longlong *)0x0)) {
          FMemory::Free();
        }
        if (bVar2) {
          FPaths::ConvertRelativePathToFull(&local_118,param_1,&local_c8);
          FPaths::NormalizeDirectoryName(&local_118);
          cVar3 = FString::StartsWith(&local_118,&local_88);
          if (cVar3 == '\0') {
            puVar11 = &DAT_143f3eda8;
            if (local_70 != 0) {
              puVar11 = local_78;
            }
            puVar9 = &DAT_143f3eda8;
            if ((int)local_110 != 0) {
              puVar9 = local_118;
            }
            iVar18 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar11);
            if (iVar18 == 0) goto LAB_141692af9;
          }
          else {
LAB_141692af9:
            puVar13 = (undefined8 *)*plVar7;
            iVar18 = *(int *)(param_1 + 3);
            for (puVar12 = puVar13; puVar12 != puVar13 + (longlong)iVar18 * 2; puVar12 = puVar12 + 2
                ) {
              puVar11 = &DAT_143f3eda8;
              if ((int)local_110 != 0) {
                puVar11 = local_118;
              }
              if (*(int *)(puVar12 + 1) == 0) {
                puVar9 = &DAT_143f3eda8;
              }
              else {
                puVar9 = (undefined2 *)*puVar12;
              }
              iVar17 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar11);
              if (iVar17 == 0) {
                if ((int)((longlong)puVar12 - (longlong)puVar13 >> 4) != -1) goto LAB_141692bb8;
                break;
              }
            }
            iVar18 = *(int *)(param_1 + 3);
            *(int *)(param_1 + 3) = iVar18 + 1;
            if (*(int *)((longlong)param_1 + 0x1c) < iVar18 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar18);
            }
            puVar11 = local_118;
            puVar13 = (undefined8 *)((longlong)iVar18 * 0x10 + *plVar7);
            *puVar13 = 0;
            lVar20 = (longlong)(int)local_110;
            *(int *)(puVar13 + 1) = (int)local_110;
            if ((int)local_110 == 0) {
              *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar13,local_110 & 0xffffffff,0);
              ::_guard_xfg_dispatch_icall_nop((void *)*puVar13,puVar11,lVar20 * 2);
            }
          }
LAB_141692bb8:
          if (local_118 != (undefined2 *)0x0) {
            FMemory::Free();
          }
        }
        if (local_c8 != 0) {
          FMemory::Free();
        }
      }
    }
    plVar16 = local_108;
    for (iVar18 = (int)local_100; iVar18 != 0; iVar18 = iVar18 + -1) {
      if (*plVar16 != 0) {
        FMemory::Free();
      }
      plVar16 = plVar16 + 2;
    }
    if (local_108 != (longlong *)0x0) {
      FMemory::Free(local_108);
    }
    plVar5 = plVar5 + 2;
  } while( true );
}



// FUNCTION 141693110 RegisterCategory body=318 status=ok
// SIG undefined RegisterCategory(void)

uint FCsvProfiler::RegisterCategory(undefined8 param_1,undefined1 param_2,char param_3)

{
  uint uVar1;
  BOOL BVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  WORD *pWVar3;
  longlong lVar4;
  uint local_res20 [2];
  undefined1 local_48 [8];
  undefined8 local_40;
  uint *local_38;
  longlong local_30 [3];
  
  lpCriticalSection = (LPCRITICAL_SECTION)FCsvCategoryData::Get();
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  local_res20[0] = FCsvCategoryData::GetCategoryIndex(lpCriticalSection,param_1);
  if (local_res20[0] == 0xffffffff) {
    if (param_3 == '\0') {
      local_res20[0] = lpCriticalSection[3].LockCount;
      lVar4 = (longlong)(int)local_res20[0];
      lpCriticalSection[3].LockCount = local_res20[0] + 1;
      if (lpCriticalSection[3].RecursionCount < (int)(local_res20[0] + 1)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lpCriticalSection + 3,local_res20[0]);
      }
      pWVar3 = &(lpCriticalSection[3].DebugInfo)->Type + lVar4 * 8;
      *(undefined8 *)pWVar3 = 0;
      *(_RTL_CRITICAL_SECTION **)(pWVar3 + 4) = (_RTL_CRITICAL_SECTION *)0x0;
      if (0x7ff < local_res20[0]) goto LAB_141693230;
    }
    else {
      local_res20[0] = 0;
    }
    (&DAT_1468e3840)[(int)local_res20[0]] = param_2;
    FString::operator=(&(lpCriticalSection[3].DebugInfo)->Type + (longlong)(int)local_res20[0] * 8,
                       param_1);
    local_40 = FString::ToLower(param_1,local_30);
    local_38 = local_res20;
    FUN_141686ec0(lpCriticalSection + 1,local_48,&local_40,0);
    if (local_30[0] != 0) {
      FMemory::Free();
    }
  }
LAB_141693230:
  uVar1 = local_res20[0];
  LeaveCriticalSection(lpCriticalSection);
  return uVar1;
}



// FUNCTION 141693250 RemoveAtImpl body=119 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FCustomVersion,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = (int)param_1[1];
    iVar2 = (iVar1 - param_2) - param_3;
    if (iVar2 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 * 0x20 + *param_1),
                 (void *)((longlong)(param_2 + param_3) * 0x20 + *param_1),(longlong)iVar2 << 5);
      iVar1 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar1 - param_3;
    if (param_4 != '\0') {
      TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1416932d0 ReserveElement body=122 status=ok
// SIG undefined ReserveElement(void)

longlong TSingleProducerSingleConsumerList<FCsvCustomStat,256>::ReserveElement(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = param_1[0x11];
  if ((char)uVar1 == '\0') {
    lVar2 = operator_new(0x2008);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      *(undefined8 *)(lVar2 + 0x2000) = 0;
    }
    *(int *)(param_1 + 0x13) = (int)param_1[0x13] + 1;
    if (param_1[1] == 0) {
      *param_1 = lVar2;
      param_1[1] = lVar2;
    }
    else {
      *(longlong *)(param_1[1] + 0x2000) = lVar2;
      param_1[1] = lVar2;
    }
  }
  else {
    lVar2 = param_1[1];
  }
  return (uVar1 & 0xff) * 0x20 + lVar2;
}



// FUNCTION 141693350 FUN_141693350 body=209 status=ok
// SIG undefined FUN_141693350(void)

void FUN_141693350(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  puVar1 = (undefined8 *)param_1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(param_1 + 8) = 0x204;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x1a;
  plVar4 = (longlong *)FEngineVersion::Current();
  param_1[9] = *plVar4;
  *(int *)(param_1 + 10) = (int)plVar4[1];
  uVar3 = FUN_1416722f0();
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar3;
  uVar3 = FUN_141672630();
  lVar2 = param_1[0x10];
  *(undefined4 *)(param_1 + 0xb) = uVar3;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  param_1[0xd] = 0;
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) & 0xe3;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x40) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar2,0x58);
  }
  param_1[0x10] = 0;
  (**(code **)(*param_1 + 0x130))(param_1);
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) & 0xfc;
  return;
}



// FUNCTION 141693430 FUN_141693430 body=84 status=ok
// SIG undefined FUN_141693430(void)

void FUN_141693430(longlong *param_1)

{
  FUN_141693350();
  param_1[0x14] = 0;
  _guard_xfg_dispatch_icall_nop((void *)param_1[0x12],0,(longlong)(int)param_1[0x13]);
  (**(code **)(*param_1 + 0x178))(param_1,1);
  (**(code **)(*param_1 + 0x1a0))(param_1,1);
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) | 8;
  return;
}



// FUNCTION 141693490 FUN_141693490 body=8 status=ok
// SIG undefined FUN_141693490(void)

void FUN_141693490(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x88) = 1;
  return;
}



// FUNCTION 1416934a0 ResizeGrow body=212 status=ok
// SIG undefined ResizeGrow(void)

void TArray<unsigned_char,TInlineAllocator<6,FDefaultAllocator>_>::ResizeGrow
               (void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x10);
  if (uVar1 < 7) {
    uVar2 = 6;
  }
  else {
    lVar5 = 4;
    if ((*(int *)((longlong)param_1 + 0x14) != 0) || (4 < uVar1)) {
      lVar5 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar2 = FMemory::QuantizeSize(lVar5,0);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x14) = uVar2;
  pvVar3 = *(void **)((longlong)param_1 + 8);
  if (uVar2 < 7) {
    if (pvVar3 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar3,(longlong)param_2);
    pvVar3 = *(void **)((longlong)param_1 + 8);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    lVar5 = 0;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar3 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2,0);
        *(void **)((longlong)param_1 + 8) = pvVar3;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar3,param_1,(longlong)param_2);
      return;
    }
    lVar5 = (longlong)(int)uVar2;
  }
  uVar4 = FMemory::Realloc(pvVar3,lVar5,0);
  *(undefined8 *)((longlong)param_1 + 8) = uVar4;
  return;
}



// FUNCTION 141693580 Run body=217 status=ok
// SIG undefined Run(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FCsvProfilerProcessingThread::Run(longlong param_1)

{
  BOOL BVar1;
  bool bVar2;
  float fVar3;
  
  _DAT_1468e3838 = GetCurrentThreadId();
  DAT_1464aff89 = 0;
  LOCK();
  bVar2 = *(int *)(param_1 + 8) == 0;
  if (bVar2) {
    *(int *)(param_1 + 8) = 0;
  }
  UNLOCK();
  while (bVar2) {
    BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468e35f0);
    if (BVar1 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1468e35f0);
    }
    fVar3 = (float)FUN_141690ec0(*(undefined8 *)(param_1 + 0x18));
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1468e35f0);
    fVar3 = 50.0 - fVar3;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    FUN_1416b1760(fVar3 * 0.001);
    LOCK();
    bVar2 = *(int *)(param_1 + 8) == 0;
    if (bVar2) {
      *(int *)(param_1 + 8) = 0;
    }
    UNLOCK();
  }
  return 0;
}



// FUNCTION 141693680 FUN_141693680 body=218 status=ok
// SIG undefined FUN_141693680(void)

void FUN_141693680(longlong param_1,void *param_2,size_t param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0x28) & 8) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141693756. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x50))();
    return;
  }
  iVar2 = *(int *)(param_1 + 0xb0);
  iVar3 = (int)param_3;
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    _guard_xfg_dispatch_icall_nop
              (param_2,(void *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar2),param_3);
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + iVar3;
    return;
  }
  if ((longlong)*(int *)(param_1 + 0xa8) < (longlong)((longlong)iVar2 + param_3)) {
    iVar1 = *(int *)(param_1 + 0xa8);
    iVar2 = (iVar1 - *(int *)(param_1 + 0xa8)) + iVar2 + iVar3;
    *(int *)(param_1 + 0xa8) = iVar2;
    if (*(int *)(param_1 + 0xac) < iVar2) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0xa0,iVar1);
    }
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)*(int *)(param_1 + 0xb0) + *(longlong *)(param_1 + 0xa0)),param_2,
             param_3);
  *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + iVar3;
  return;
}



// FUNCTION 1416937a0 FUN_1416937a0 body=139 status=ok
// SIG undefined FUN_1416937a0(void)

void FUN_1416937a0(longlong param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  
  plVar3 = *(longlong **)(param_1 + 8);
  puVar5 = *(undefined2 **)plVar3[1];
  if (puVar5 + 1 <= (undefined2 *)((undefined8 *)plVar3[1])[1]) {
    *param_2 = *puVar5;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 2;
    return;
  }
  (**(code **)(*plVar3 + 0x50))(plVar3,param_2,2);
  if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
    puVar4 = (undefined1 *)((longlong)param_2 + 1);
    puVar5 = param_2;
    do {
      puVar1 = (undefined2 *)((longlong)puVar5 + 1);
      uVar2 = *puVar4;
      *puVar4 = *(undefined1 *)puVar5;
      puVar4 = puVar4 + -1;
      *(undefined1 *)puVar5 = uVar2;
      puVar5 = puVar1;
    } while (-(longlong)param_2 + (longlong)puVar1 < -(longlong)param_2 + (longlong)puVar4);
  }
  return;
}


