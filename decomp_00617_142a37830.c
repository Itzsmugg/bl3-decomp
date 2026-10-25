// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142a37830 FUN_142a37830 body=1751 status=ok
// SIG undefined FUN_142a37830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142a37830(longlong *param_1,longlong param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  undefined8 *puVar8;
  longlong lVar9;
  bool bVar10;
  ulonglong *puVar11;
  int iVar12;
  void *pvVar13;
  uint *puVar14;
  void *pvVar15;
  int iVar16;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint local_c8;
  uint *local_c0;
  undefined8 uStack_b8;
  uint *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  void *local_98;
  uint local_88 [16];
  longlong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  uVar1 = uStack_cc;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  pvVar15 = (void *)0x0;
  *param_1 = param_2;
  iVar16 = 0;
  local_98 = (void *)((ulonglong)local_98 & 0xffffffff00000000);
  iVar6 = *(int *)(param_2 + 0x128);
  local_e8 = (uint *)0x100000000;
  uStack_d4 = 0;
  uStack_d0 = 0;
  bVar10 = false;
  if (iVar6 != 0) {
    puVar14 = *(uint **)(param_2 + 0x120);
    if (*(uint **)(param_2 + 0x120) == (uint *)0x0) {
      puVar14 = (uint *)(param_2 + 0x110);
    }
    uVar3 = *puVar14;
    pvVar7 = pvVar15;
    pvVar13 = pvVar15;
    while (uVar3 == 0) {
      iVar4 = (int)pvVar7;
      uStack_d0 = (int)pvVar13 + 0x20;
      pvVar13 = (void *)(ulonglong)uStack_d0;
      pvVar7 = (void *)(ulonglong)(iVar4 + 1U);
      local_e8._4_4_ = (undefined4)((ulonglong)local_e8 >> 0x20);
      local_e8 = (uint *)CONCAT44(local_e8._4_4_,iVar4 + 1U);
      if ((int)((iVar6 + -1 >> 0x1f & 0x1fU) + iVar6 + -1) >> 5 <= iVar4) goto LAB_142a37932;
      uVar3 = puVar14[(longlong)iVar4 + 1];
    }
    uVar3 = -uVar3 & uVar3;
    iVar4 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    local_e8 = (uint *)CONCAT44(uVar3,(undefined4)local_e8);
    if (uVar3 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_d4 = (uStack_d0 - iVar4) + 0x1f;
    if (iVar6 < (int)uStack_d4) {
LAB_142a37932:
      uStack_d4 = iVar6;
    }
  }
  lVar9 = CONCAT44(uStack_d4,0xffffffff);
  lVar2 = CONCAT44(uStack_cc,uStack_d0);
  uStack_d4 = 0;
  uStack_d0 = 0;
  param_1[1] = param_2 + 0x100;
  param_1[2] = (longlong)local_e8;
  param_1[3] = param_2 + 0x110;
  param_1[4] = lVar9;
  param_1[5] = lVar2;
  if (*(int *)((longlong)param_1 + 0x24) < *(int *)(param_1[3] + 0x18)) {
    local_e8 = (uint *)0x100000000;
    local_c0 = (uint *)(*(longlong *)param_1[1] +
                       (longlong)*(int *)((longlong)param_1 + 0x24) * 0x68 + 0x10);
    uVar3 = local_c0[10];
    uStack_e0 = local_c0 + 4;
    if (uVar3 != 0) {
      puVar14 = *(uint **)(local_c0 + 8);
      if (*(uint **)(local_c0 + 8) == (uint *)0x0) {
        puVar14 = uStack_e0;
      }
      uVar5 = *puVar14;
      pvVar7 = pvVar15;
      pvVar13 = pvVar15;
      while (uVar5 == 0) {
        iVar6 = (int)pvVar7;
        uStack_d0 = (int)pvVar13 + 0x20;
        pvVar13 = (void *)(ulonglong)uStack_d0;
        pvVar7 = (void *)(ulonglong)(iVar6 + 1U);
        local_e8._4_4_ = (undefined4)((ulonglong)local_e8 >> 0x20);
        local_e8 = (uint *)CONCAT44(local_e8._4_4_,iVar6 + 1U);
        if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= iVar6)
        goto LAB_142a37a34;
        uVar5 = puVar14[(longlong)iVar6 + 1];
      }
      uVar5 = -uVar5 & uVar5;
      iVar6 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      local_e8 = (uint *)CONCAT44(uVar5,(undefined4)local_e8);
      if (uVar5 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_d4 = (uStack_d0 - iVar6) + 0x1f;
      if ((int)uVar3 < (int)uStack_d4) {
LAB_142a37a34:
        uStack_d4 = uVar3;
      }
    }
  }
  else {
    uStack_e0 = local_88 + 4;
    local_88[0xe] = 0;
    local_88[0xf] = 0;
    local_c0 = local_88;
    local_88[4] = 0;
    local_88[5] = 0;
    local_88[6] = 0;
    local_88[7] = 0;
    local_40 = 0;
    bVar10 = true;
    local_88[0] = 0;
    local_88[1] = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[8] = 0;
    local_88[9] = 0;
    local_88[10] = 0;
    local_88[0xb] = 0;
    local_88[0xc] = 0xffffffff;
    local_88[0xd] = 0;
    local_48 = 0;
    local_e8 = (uint *)0x100000000;
  }
  uVar5 = uStack_d0;
  uVar3 = uStack_d4;
  puVar14 = local_e8;
  uStack_a8 = CONCAT44(uStack_d4,0xffffffff);
  uStack_a0 = CONCAT44(uStack_cc,uStack_d0);
  local_c8 = uStack_d0;
  uStack_b8 = local_e8;
  puStack_b0 = uStack_e0;
  local_d8 = SUB84(uStack_e0,0);
  uStack_d4 = (uint)((ulonglong)uStack_e0 >> 0x20);
  uStack_d0 = 0xffffffff;
  uStack_cc = uVar3;
  local_e8 = local_c0;
  uStack_e0 = puVar14;
  param_1[6] = (longlong)local_c0;
  param_1[7] = (longlong)puVar14;
  *(undefined4 *)(param_1 + 8) = local_d8;
  *(uint *)((longlong)param_1 + 0x44) = uStack_d4;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(uint *)((longlong)param_1 + 0x4c) = uVar3;
  param_1[10] = CONCAT44(uVar1,uVar5);
  if (bVar10) {
    local_40 = local_40 & 0xffffffff00000000;
    if (local_48 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_88);
  }
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(char *)(param_1 + 0xd) = param_3;
  if ((param_3 == '\0') && (*(int *)((longlong)param_1 + 0x4c) < *(int *)(param_1[8] + 0x18))) {
    do {
      if ((*(byte *)(*(longlong *)(*param_1 + 0xe0) + 0x44 +
                    (longlong)
                    *(int *)((longlong)*(int *)((longlong)param_1 + 0x4c) * 0x20 + 0x10 +
                            *(longlong *)param_1[6]) * 0x48) & 2) == 0) break;
      *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & ~*(uint *)((longlong)param_1 + 0x3c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
    } while (*(int *)((longlong)param_1 + 0x4c) < *(int *)(param_1[8] + 0x18));
  }
  lVar9 = param_1[8];
  iVar6 = *(int *)((longlong)param_1 + 0x4c);
  if (*(int *)(lVar9 + 0x18) <= iVar6) {
    do {
      if (*(int *)(param_1[3] + 0x18) <= *(int *)((longlong)param_1 + 0x24)) break;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & ~*(uint *)((longlong)param_1 + 0x14);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
      if (*(int *)((longlong)param_1 + 0x24) < *(int *)(param_1[3] + 0x18)) {
        local_e8 = (uint *)0x100000000;
        local_c0 = (uint *)(*(longlong *)param_1[1] +
                           (longlong)*(int *)((longlong)param_1 + 0x24) * 0x68 + 0x10);
        uStack_d4 = 0;
        uStack_d0 = 0;
        uVar1 = local_c0[10];
        uStack_e0 = local_c0 + 4;
        if (uVar1 != 0) {
          puVar14 = *(uint **)(local_c0 + 8);
          if (*(uint **)(local_c0 + 8) == (uint *)0x0) {
            puVar14 = uStack_e0;
          }
          uVar3 = *puVar14;
          pvVar7 = pvVar15;
          pvVar13 = pvVar15;
          while (uVar3 == 0) {
            iVar6 = (int)pvVar7;
            uStack_d0 = (int)pvVar13 + 0x20;
            pvVar13 = (void *)(ulonglong)uStack_d0;
            pvVar7 = (void *)(ulonglong)(iVar6 + 1U);
            local_e8._4_4_ = (undefined4)((ulonglong)local_e8 >> 0x20);
            local_e8 = (uint *)CONCAT44(local_e8._4_4_,iVar6 + 1U);
            if ((int)(((int)(uVar1 - 1) >> 0x1f & 0x1fU) + (uVar1 - 1)) >> 5 <= iVar6)
            goto LAB_142a37c72;
            uVar3 = puVar14[(longlong)iVar6 + 1];
          }
          uVar3 = -uVar3 & uVar3;
          iVar6 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
            }
          }
          local_e8 = (uint *)CONCAT44(uVar3,(undefined4)local_e8);
          if (uVar3 == 0) {
            iVar6 = 0x20;
          }
          else {
            iVar6 = 0x1f - iVar6;
          }
          uStack_d4 = (uStack_d0 - iVar6) + 0x1f;
          if ((int)uVar1 < (int)uStack_d4) {
LAB_142a37c72:
            uStack_d4 = uVar1;
          }
        }
        local_d8 = 0xffffffff;
        uStack_a8 = CONCAT44(uStack_d4,0xffffffff);
        uStack_a0 = CONCAT44(uStack_cc,uStack_d0);
        uStack_b8 = local_e8;
        puVar14 = uStack_b8;
        uStack_b8._0_4_ = SUB84(local_e8,0);
        uStack_b8._4_4_ = (undefined4)((ulonglong)local_e8 >> 0x20);
        param_1[6] = (longlong)local_c0;
        *(undefined4 *)(param_1 + 7) = (undefined4)uStack_b8;
        *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_b8._4_4_;
        param_1[8] = (longlong)uStack_e0;
        param_1[9] = uStack_a8;
        param_1[10] = uStack_a0;
        uStack_b8 = puVar14;
        puStack_b0 = uStack_e0;
        if (((char)param_1[0xd] == '\0') &&
           (*(int *)((longlong)param_1 + 0x4c) < *(int *)(param_1[8] + 0x18))) {
          do {
            if ((*(byte *)(*(longlong *)(*param_1 + 0xe0) + 0x44 +
                          (longlong)
                          *(int *)((longlong)*(int *)((longlong)param_1 + 0x4c) * 0x20 + 0x10 +
                                  *(longlong *)param_1[6]) * 0x48) & 2) == 0) break;
            *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & ~*(uint *)((longlong)param_1 + 0x3c);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
          } while (*(int *)((longlong)param_1 + 0x4c) < *(int *)(param_1[8] + 0x18));
        }
      }
      lVar9 = param_1[8];
      iVar6 = *(int *)((longlong)param_1 + 0x4c);
    } while (*(int *)(lVar9 + 0x18) <= iVar6);
  }
  if ((*(int *)((longlong)param_1 + 0x24) < *(int *)(param_1[3] + 0x18)) &&
     (iVar6 < *(int *)(lVar9 + 0x18))) {
    puVar11 = (ulonglong *)
              ((longlong)*(int *)((longlong)param_1 + 0x4c) * 0x20 + *(longlong *)param_1[6]);
    iVar6 = (int)puVar11[1];
    puVar8 = (undefined8 *)
             ((longlong)*(int *)((longlong)param_1 + 0x24) * 0x68 + *(longlong *)param_1[1]);
    iVar4 = *(int *)(puVar8 + 1);
    if (iVar4 < 2) {
      pvVar7 = (void *)*puVar11;
      local_e8 = (void *)0x0;
      uStack_e0._0_4_ = iVar6;
      if (iVar6 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,iVar6,0);
        pvVar15 = local_e8;
        _guard_xfg_dispatch_icall_nop(local_e8,pvVar7,(longlong)iVar6 * 2);
        iVar6 = (int)uStack_e0;
        iVar16 = uStack_e0._4_4_;
      }
    }
    else {
      iVar12 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar12 = iVar16;
      }
      if ((iVar4 != 0) || (iVar6 = 1, iVar12 == 0)) {
        iVar6 = iVar16;
      }
      pvVar7 = (void *)*puVar8;
      local_e8 = (void *)0x0;
      uStack_e0._0_4_ = iVar4;
      if ((iVar4 == 0) && (iVar6 + iVar12 == 0)) {
        uStack_e0._4_4_ = 0;
        iVar4 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,iVar6 + iVar12 + iVar4,0);
        pvVar15 = local_e8;
        _guard_xfg_dispatch_icall_nop(local_e8,pvVar7,(longlong)iVar4 * 2);
        iVar4 = (int)uStack_e0;
      }
      local_98 = (void *)*puVar11;
      iVar6 = iVar4;
      iVar16 = uStack_e0._4_4_;
      if (iVar12 != 0) {
        uStack_e0._0_4_ = iVar12 + (uint)(iVar4 == 0) + iVar4;
        if (uStack_e0._4_4_ < (int)uStack_e0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,iVar4);
          pvVar15 = local_e8;
        }
        iVar16 = uStack_e0._4_4_;
        iVar6 = (int)uStack_e0;
        pvVar7 = (void *)((longlong)pvVar15 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar7,local_98,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar7) = 0;
      }
    }
    puVar11 = (ulonglong *)(param_1 + 0xb);
    if (puVar11 == &local_e8) {
      if (pvVar15 != (void *)0x0) {
        FMemory::Free(pvVar15);
      }
    }
    else {
      if (*puVar11 != 0) {
        FMemory::Free();
      }
      *puVar11 = (ulonglong)pvVar15;
      *(int *)(param_1 + 0xc) = iVar6;
      *(int *)((longlong)param_1 + 100) = iVar16;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0);
    }
  }
  return param_1;
}



// FUNCTION 142a37f10 FUN_142a37f10 body=639 status=ok
// SIG undefined FUN_142a37f10(void)

undefined8 * FUN_142a37f10(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  
  *param_1 = &PTR__scalar_deleting_destructor__145361370;
  param_1[1] = *(undefined8 *)(param_3 + 0x10);
  param_1[2] = *(undefined8 *)(param_3 + 400);
  FPakEntry::FPakEntry(param_1 + 5);
  uVar5 = 0;
  plVar8 = param_1 + 0x18;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *plVar8 = 0;
  param_1[0x19] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1a] = AK::MemoryMgr::StartProfileThreadUsage;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x24),4000);
  *(undefined4 *)(param_1 + 0x29) = 0;
  lVar7 = 0x30;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if ((2 < *(int *)(param_3 + 0xa4)) && (lVar7 = 0x35, *(int *)(param_1 + 8) != 0)) {
    lVar7 = (longlong)*(int *)(param_1 + 0xc) * 0x10 + 0x39;
  }
  lVar4 = lVar7 + 8;
  if (1 < *(int *)(param_3 + 0xa4)) {
    lVar4 = lVar7;
  }
  param_1[3] = lVar4 + param_1[5];
  param_1[4] = param_1[7];
  if ((*(int *)(param_1 + 8) != 0) && (param_1[7] != 0)) {
    iVar1 = *(int *)(param_1 + 0x19);
    iVar2 = *(int *)(param_1 + 0xc);
    iVar3 = iVar1 + iVar2;
    *(int *)(param_1 + 0x19) = iVar3;
    if (*(int *)((longlong)param_1 + 0xcc) < iVar3) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*plVar8 + (longlong)iVar1 * 8),0,(longlong)iVar2 << 3);
    if (4 < *(int *)(param_3 + 0xa4)) {
      uVar5 = param_1[5];
    }
    param_1[0x2a] = uVar5;
  }
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = param_1;
    *puVar6 = &PTR_FUN_1444f8620;
  }
  local_78[0] = &LAB_142a3ceb0;
  FGenericPlatformMemory::MemswapGreaterThan8(local_78,param_1 + 0x1a,0x50);
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
  return param_1;
}



// FUNCTION 142a38190 FPakEntry body=183 status=ok
// SIG undefined FPakEntry(void)

undefined8 * FPakEntry::FPakEntry(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 5) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  _Src = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 6,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[6],_Src,(longlong)iVar1 << 4);
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x44) = *(undefined1 *)((longlong)param_2 + 0x44);
  *(undefined1 *)((longlong)param_1 + 0x45) = *(undefined1 *)((longlong)param_2 + 0x45);
  return param_1;
}



// FUNCTION 142a38250 FUN_142a38250 body=561 status=ok
// SIG undefined FUN_142a38250(void)

undefined8 * FUN_142a38250(undefined8 *param_1,longlong *param_2,short *param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  longlong local_38;
  longlong *local_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar5 = -1;
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    do {
      lVar5 = lVar5 + 1;
    } while (param_3[lVar5] != 0);
    iVar4 = (int)lVar5 + 1;
    *(int *)(param_1 + 1) = iVar4;
    if (0 < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,param_3,(longlong)iVar4 * 2);
  }
  FName::FName(param_1 + 2,param_3,1);
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
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xf),4000);
  *(undefined4 *)(param_1 + 0x14) = 0x5a6f12e1;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 6;
  param_1[0x15] = 0xffffffffffffffff;
  param_1[0x16] = 0;
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x1f));
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = param_4;
  *(undefined2 *)((longlong)param_1 + 0x199) = 0;
  FUN_142a43790(param_1,&local_38,param_2);
  if (local_38 != 0) {
    puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x98))(param_2,local_res8,param_3);
    param_1[0x31] = *puVar3;
    FUN_142a44750(param_1,local_38);
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
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 142a38490 FUN_142a38490 body=163 status=ok
// SIG undefined FUN_142a38490(void)

undefined8 * FUN_142a38490(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145360da8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 5),4000);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 142a38540 FPakPrecacher body=889 status=ok
// SIG undefined FPakPrecacher(void)

undefined8 *
FPakPrecacher::FPakPrecacher
          (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,__uint64 param_4)

{
  AKRESULT AVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  AKRESULT AVar7;
  int *piVar8;
  int iVar9;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar10;
  ErrorLevel EVar11;
  ulong unaff_EDI;
  ulong uVar12;
  longlong lVar13;
  undefined1 unaff_retaddr;
  
  *param_1 = param_2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 1),4000);
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(int *)(param_1 + 0x1a) = DAT_14667ae9c << 0x1e;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0xc0000000;
  DAT_14667ae9c = DAT_14667ae9c + 1;
  TIntervalTreeAllocator<FPakPrecacher::FPakInRequest>::Alloc();
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(int *)(param_1 + 0x1f) = DAT_14667ae9c << 0x1e;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0xc0000000;
  DAT_14667ae9c = DAT_14667ae9c + 1;
  TIntervalTreeAllocator<FPakPrecacher::FCacheBlock>::Alloc();
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  piVar8 = (int *)((longlong)param_3 + 0x34);
  param_1[0x42] = 0;
  iVar9 = 0xf;
  param_1[0x43] = 0;
  iVar10 = 0xf;
  param_1[0x44] = 0;
  lVar13 = 0xf;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  uVar5 = param_3[1];
  param_1[0x51] = *param_3;
  param_1[0x52] = uVar5;
  uVar5 = param_3[3];
  param_1[0x53] = param_3[2];
  param_1[0x54] = uVar5;
  uVar5 = param_3[5];
  param_1[0x55] = param_3[4];
  param_1[0x56] = uVar5;
  uVar5 = param_3[7];
  param_1[0x57] = param_3[6];
  param_1[0x58] = uVar5;
  uVar5 = param_3[9];
  param_1[0x59] = param_3[8];
  param_1[0x5a] = uVar5;
  uVar5 = param_3[0xb];
  param_1[0x5b] = param_3[10];
  param_1[0x5c] = uVar5;
  uVar2 = *(undefined4 *)((longlong)param_3 + 100);
  uVar3 = *(undefined4 *)(param_3 + 0xd);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x6c);
  *(undefined4 *)(param_1 + 0x5d) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x2ec) = uVar2;
  *(undefined4 *)(param_1 + 0x5e) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = uVar4;
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x74);
  uVar3 = *(undefined4 *)(param_3 + 0xf);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x7c);
  *(undefined4 *)(param_1 + 0x5f) = *(undefined4 *)(param_3 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x2fc) = uVar2;
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x304) = uVar4;
  do {
    if (piVar8[2] != 0) break;
    if (piVar8[1] != 0) {
      iVar10 = iVar10 + -1;
      break;
    }
    if (*piVar8 != 0) {
      iVar10 = iVar10 + -2;
      break;
    }
    if (piVar8[-1] != 0) {
      iVar10 = iVar10 + -3;
      break;
    }
    piVar8 = piVar8 + -4;
    iVar10 = iVar10 + -4;
    lVar13 = lVar13 + -4;
  } while (-1 < lVar13);
  uVar12 = (ulong)lVar13;
  uVar6 = 1;
  if (-1 < iVar10) {
    lVar13 = 0xf;
    piVar8 = (int *)(param_3 + 0xf);
    do {
      if (piVar8[1] != 0) break;
      if (*piVar8 != 0) {
        iVar9 = iVar9 + -1;
        break;
      }
      if (piVar8[-1] != 0) {
        iVar9 = iVar9 + -2;
        break;
      }
      if (piVar8[-2] != 0) {
        iVar9 = iVar9 + -3;
        break;
      }
      piVar8 = piVar8 + -4;
      iVar9 = iVar9 + -4;
      lVar13 = lVar13 + -4;
    } while (-1 < lVar13);
    if (-1 < iVar9) goto LAB_142a3885a;
  }
  uVar6 = 0;
LAB_142a3885a:
  *(undefined1 *)(param_1 + 0x61) = uVar6;
  *(undefined1 *)((longlong)param_1 + 0x309) = 1;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x62));
  EVar11 = 4000;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x62);
  SetCriticalSectionSpinCount(lpCriticalSection,4000);
  AVar1 = DAT_14667ae90;
  AVar7 = AK::Monitor::PostCode
                    ((ErrorCode)lpCriticalSection,EVar11,uVar12,param_4,unaff_EDI,
                     (bool)unaff_retaddr);
  if ((int)AVar7 <= (int)AVar1) {
    AVar1 = AVar7;
  }
  DAT_14667ae90 = 1;
  if (0 < (int)AVar1) {
    DAT_14667ae90 = AVar1;
  }
  return param_1;
}



// FUNCTION 142a388c0 FUN_142a388c0 body=224 status=ok
// SIG undefined FUN_142a388c0(void)

undefined8 * FUN_142a388c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 in_stack_00000040;
  undefined1 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_142a389a0();
  *param_1 = &PTR_FUN_145361180;
  param_1[0xf] = &PTR_LAB_1453611a8;
  cVar1 = FUN_142a49460(DAT_146b298e8,param_1 + 0xf,param_2,param_3,param_1[0x13],param_1[0x14],
                        *(undefined4 *)(param_1 + 0x18),in_stack_00000040,in_stack_00000048,
                        in_stack_00000050);
  if (cVar1 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0xc4) = 0;
    IAsyncReadRequest::SetDataComplete(param_1);
    *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  }
  return param_1;
}



// FUNCTION 142a389a0 FUN_142a389a0 body=306 status=ok
// SIG undefined FUN_142a389a0(void)

undefined8 *
FUN_142a389a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,longlong param_8,
             undefined1 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  undefined1 local_58 [80];
  
  *param_1 = &PTR__scalar_deleting_destructor__144ca06d8;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[4] = AK::MemoryMgr::StartProfileThreadUsage;
  *(bool *)((longlong)param_1 + 0x75) = param_8 != 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  cVar3 = '\0';
  if (param_4 != 0) {
    uVar1 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_58,param_4);
    TFunction<void___cdecl(int)>::operator=(param_1 + 4,uVar1);
    cVar3 = *(char *)((longlong)param_1 + 0x74);
  }
  lVar2 = -1;
  if (cVar3 == '\0') {
    lVar2 = param_8;
  }
  param_1[2] = lVar2;
  param_1[0x10] = 0xffffffffffffffff;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *param_1 = &PTR_FUN_145361180;
  param_1[0xf] = &PTR_LAB_145361198;
  param_1[0x13] = param_5;
  param_1[0x14] = param_6;
  param_1[0x16] = param_10;
  *(undefined4 *)(param_1 + 0x18) = param_7;
  *(undefined1 *)((longlong)param_1 + 0xc6) = param_9;
  param_1[0x17] = param_2;
  param_1[0x15] = 0;
  *(undefined2 *)((longlong)param_1 + 0xc4) = 0x101;
  return param_1;
}



// FUNCTION 142a38ae0 FUN_142a38ae0 body=141 status=ok
// SIG undefined FUN_142a38ae0(void)

undefined8 * FUN_142a38ae0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_58 [80];
  
  *param_1 = &PTR__scalar_deleting_destructor__144ca06d8;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[4] = AK::MemoryMgr::StartProfileThreadUsage;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((longlong)param_1 + 0x74) = 1;
  if (param_2 != 0) {
    uVar1 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_58);
    TFunction<void___cdecl(int)>::operator=(param_1 + 4,uVar1);
  }
  param_1[2] = param_3;
  *param_1 = &PTR__scalar_deleting_destructor__144cdb840;
  IAsyncReadRequest::SetDataComplete(param_1);
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  return param_1;
}



// FUNCTION 142a38b70 FUN_142a38b70 body=418 status=ok
// SIG undefined FUN_142a38b70(void)

char * FUN_142a38b70(char *param_1,longlong param_2,char param_3,char param_4)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  param_1[0x2c] = '\0';
  param_1[0x2d] = '\0';
  param_1[0x2e] = '\0';
  param_1[0x2f] = '\0';
  param_1[0x30] = '\0';
  param_1[0x31] = '\0';
  param_1[0x32] = '\0';
  param_1[0x33] = '\0';
  param_1[0x34] = '\0';
  param_1[0x35] = '\0';
  param_1[0x36] = '\0';
  param_1[0x37] = '\0';
  param_1[0x38] = '\0';
  param_1[0x39] = '\0';
  param_1[0x3a] = '\0';
  param_1[0x3b] = '\0';
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  param_1[0x40] = '\0';
  param_1[0x41] = '\0';
  param_1[0x42] = '\0';
  param_1[0x43] = '\0';
  param_1[0x44] = '\0';
  param_1[0x45] = '\0';
  param_1[0x46] = '\0';
  param_1[0x47] = '\0';
  if ((*param_1 != '\0') || (param_4 != '\0')) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x28));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x28));
    }
    iVar1 = *(int *)(param_2 + 0x18);
    if (iVar1 != 0) {
      iVar3 = *(int *)(param_1 + 0x20);
      if (*(int *)(param_1 + 0x24) < iVar3 + iVar1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x18);
        iVar3 = *(int *)(param_1 + 0x20);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x18)),
                 *(void **)(param_2 + 0x10),(longlong)iVar1 << 4);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x28));
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 != 0) {
      if (*param_1 != '\0') {
        iVar3 = *(int *)(param_1 + 0x30);
        if (iVar3 < iVar1) {
          *(int *)(param_1 + 0x30) = iVar1;
          iVar5 = iVar1 - iVar3;
          if (*(int *)(param_1 + 0x34) < iVar1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(param_1 + 0x28,iVar3);
          }
          puVar4 = (undefined8 *)((longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x28));
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
            puVar4[3] = 0;
            puVar4 = puVar4 + 4;
          }
        }
        else if ((iVar1 < iVar3) && (iVar1 != iVar3)) {
          *(int *)(param_1 + 0x30) = iVar1;
          TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(param_1 + 0x28);
        }
      }
      if (param_1[1] != '\0') {
        iVar3 = *(int *)(param_1 + 0x40);
        if (iVar3 < iVar1) {
          *(int *)(param_1 + 0x40) = iVar1;
          iVar5 = iVar1 - iVar3;
          if (*(int *)(param_1 + 0x44) < iVar1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x38,iVar3);
          }
          puVar4 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x38));
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4 = puVar4 + 2;
          }
        }
        else if ((iVar1 < iVar3) && (iVar1 != iVar3)) {
          *(int *)(param_1 + 0x40) = iVar1;
          TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 0x38);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 142a38d20 ~TArray<FPakPrecacher::FPakData,FDefaultAllocator> body=101 status=ok
// SIG undefined ~TArray<FPakPrecacher::FPakData,FDefaultAllocator>(void)

void TArray<FPakPrecacher::FPakData,FDefaultAllocator>::
     ~TArray<FPakPrecacher::FPakData,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x80);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x13;
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



// FUNCTION 142a38d90 FUN_142a38d90 body=640 status=ok
// SIG undefined FUN_142a38d90(void)

void FUN_142a38d90(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  BOOL BVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  
  *param_1 = &PTR__scalar_deleting_destructor__145361370;
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  }
  uVar7 = 0;
  if ((DAT_1468c217e == '\0') ||
     ((*(int *)(param_1 + 0xf) - *(int *)((longlong)param_1 + 0xa4) < 1 &&
      (*(int *)(param_1 + 0x29) < 1)))) {
    if ((0 < *(int *)(param_1 + 0xf) - *(int *)((longlong)param_1 + 0xa4)) ||
       (0 < *(int *)(param_1 + 0x29))) {
      LowLevelFatalErrorHandler
                ("Unknown",0xca1,
                 L"LiveRequests.Num or NumLiveRawReqeusts was > 0 in ~FPakAsyncReadFileHandle!");
      FDebug::AssertFailed
                (&DAT_143f3f584,"Unknown",0xca1,
                 L"LiveRequests.Num or NumLiveRawReqeusts was > 0 in ~FPakAsyncReadFileHandle!");
    }
    puVar8 = (undefined8 *)param_1[0x18];
    uVar9 = (longlong)*(int *)(param_1 + 0x19) & 0x1fffffffffffffff;
    if (puVar8 + *(int *)(param_1 + 0x19) < puVar8) {
      uVar9 = uVar7;
    }
    if (uVar9 != 0) {
      do {
        puVar3 = (undefined8 *)*puVar8;
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = 0;
          lVar4 = puVar3[3];
          puVar3[3] = 0;
          if (lVar4 != 0) {
            LOCK();
            piVar1 = (int *)(lVar4 + 0x48);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              FGraphEvent::Recycle();
            }
          }
          if (puVar3[1] != 0) {
            FMemory::Free();
            puVar3[1] = 0;
          }
          *(undefined4 *)(puVar3 + 4) = 0;
          if (puVar3[2] != 0) {
            FMemory::Free();
            puVar3[2] = 0;
          }
          *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
          *(undefined2 *)(puVar3 + 6) = 0;
          if (puVar3[3] != 0) {
            LOCK();
            piVar1 = (int *)(puVar3[3] + 0x48);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              FGraphEvent::Recycle();
            }
          }
          FMemory::operator_delete(puVar3,0x38);
        }
        puVar8 = puVar8 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar9);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (param_1[0x33] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x2b);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  if (*(int *)(param_1 + 0x22) != 0) {
    plVar6 = (longlong *)param_1[0x20];
    if ((longlong *)param_1[0x20] == (longlong *)0x0) {
      plVar6 = param_1 + 0x1c;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (param_1[0x20] != 0) {
    FMemory::Free();
  }
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xe);
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144ca06f0;
  return;
}



// FUNCTION 142a39010 FUN_142a39010 body=693 status=ok
// SIG undefined FUN_142a39010(void)

void FUN_142a39010(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  BOOL BVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar5 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145360da8;
  if ((DAT_1468e2280 != 0) && (DAT_1468e2278 != (longlong *)0x0)) {
    (**(code **)(*DAT_1468e2278 + 0x28))(DAT_1468e2278,0);
    if (DAT_1468e2278 != (longlong *)0x0) {
      DAT_1468e2278 = (longlong *)FMemory::Realloc(DAT_1468e2278,0,0);
    }
    DAT_1468e2280 = 0;
  }
  if ((DAT_1468e2290 != 0) && (DAT_1468e2288 != (longlong *)0x0)) {
    (**(code **)(*DAT_1468e2288 + 0x28))(DAT_1468e2288,0);
    if (DAT_1468e2288 != (longlong *)0x0) {
      DAT_1468e2288 = (longlong *)FMemory::Realloc(DAT_1468e2288,0,0);
    }
    DAT_1468e2290 = 0;
  }
  FUN_142a4f930();
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  }
  uVar7 = uVar5;
  if (0 < *(int *)(param_1 + 3)) {
    do {
      lVar4 = param_1[2];
      plVar1 = *(longlong **)(lVar4 + 8 + uVar5);
      if (plVar1 != (longlong *)0x0) {
        FMemory::operator_delete(plVar1[0x2f]);
        FMemory::operator_delete(plVar1[0x2e]);
        FMemory::operator_delete(plVar1[0x2d]);
        FMemory::operator_delete(plVar1[0x2c]);
        FMemory::operator_delete(plVar1[0x2b]);
        *(undefined4 *)(plVar1 + 0x29) = 0;
        if (plVar1[0x28] != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty(plVar1 + 0x20,0);
        if (plVar1[0x24] != 0) {
          FMemory::Free();
        }
        if (plVar1[0x20] != 0) {
          FMemory::Free();
        }
        TArray<FSpriteRenderSection,FDefaultAllocator>::
        ~TArray<FSpriteRenderSection,FDefaultAllocator>(plVar1 + 0x1c);
        if (plVar1[0x1a] != 0) {
          FMemory::Free();
        }
        DeleteCriticalSection((LPCRITICAL_SECTION)(plVar1 + 0xf));
        *(undefined4 *)(plVar1 + 0xe) = 0;
        if (plVar1[0xd] != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::Empty(plVar1 + 5,0);
        if (plVar1[9] != 0) {
          FMemory::Free();
        }
        if (plVar1[5] != 0) {
          FMemory::Free();
        }
        plVar2 = (longlong *)plVar1[3];
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x28))(plVar2,1);
        }
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(plVar1);
        lVar4 = param_1[2];
      }
      *(undefined8 *)(lVar4 + 8 + uVar5) = 0;
      uVar6 = (int)uVar7 + 1;
      uVar5 = uVar5 + 0x10;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < *(int *)(param_1 + 3));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 10);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144cb01d8;
  return;
}



// FUNCTION 142a392d0 FUN_142a392d0 body=164 status=ok
// SIG undefined FUN_142a392d0(void)

void FUN_142a392d0(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_145361180;
  param_1[0xf] = &PTR_LAB_145361198;
  if (*(char *)((longlong)param_1 + 0xc5) != '\0') {
    FPakPrecacher::CancelRequest(DAT_146b298e8,param_1 + 0xf);
  }
  if ((param_1[2] != 0) && (*(char *)((longlong)param_1 + 0x75) == '\0')) {
    FMemory::Free();
  }
  param_1[0xf] = &PTR_FUN_145361168;
  param_1[2] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144ca06d8;
  if (*(int *)(param_1 + 0xc) != 0) {
    plVar1 = (longlong *)param_1[10];
    if ((longlong *)param_1[10] == (longlong *)0x0) {
      plVar1 = param_1 + 6;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a39380 operator= body=295 status=ok
// SIG undefined operator=(void)

undefined8 * FPakEntry::operator=(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = param_2 + 6;
  *param_1 = *param_2;
  plVar2 = param_1 + 6;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
  *(undefined1 *)((longlong)param_1 + 0x1d) = *(undefined1 *)((longlong)param_2 + 0x1d);
  *(undefined1 *)((longlong)param_1 + 0x1e) = *(undefined1 *)((longlong)param_2 + 0x1e);
  *(undefined1 *)((longlong)param_1 + 0x1f) = *(undefined1 *)((longlong)param_2 + 0x1f);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x23) = *(undefined1 *)((longlong)param_2 + 0x23);
  *(undefined1 *)((longlong)param_1 + 0x24) = *(undefined1 *)((longlong)param_2 + 0x24);
  *(undefined1 *)((longlong)param_1 + 0x25) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined1 *)((longlong)param_1 + 0x26) = *(undefined1 *)((longlong)param_2 + 0x26);
  *(undefined1 *)((longlong)param_1 + 0x27) = *(undefined1 *)((longlong)param_2 + 0x27);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)((longlong)param_2 + 0x29);
  *(undefined1 *)((longlong)param_1 + 0x2a) = *(undefined1 *)((longlong)param_2 + 0x2a);
  *(undefined1 *)((longlong)param_1 + 0x2b) = *(undefined1 *)((longlong)param_2 + 0x2b);
  *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)((longlong)param_2 + 0x2c);
  *(undefined1 *)((longlong)param_1 + 0x2d) = *(undefined1 *)((longlong)param_2 + 0x2d);
  *(undefined1 *)((longlong)param_1 + 0x2e) = *(undefined1 *)((longlong)param_2 + 0x2e);
  *(undefined1 *)((longlong)param_1 + 0x2f) = *(undefined1 *)((longlong)param_2 + 0x2f);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
    param_2[7] = 0;
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)((longlong)param_1 + 0x44) = *(undefined1 *)((longlong)param_2 + 0x44);
  *(undefined1 *)((longlong)param_1 + 0x45) = *(undefined1 *)((longlong)param_2 + 0x45);
  return param_1;
}



// FUNCTION 142a394b0 FUN_142a394b0 body=133 status=ok
// SIG undefined FUN_142a394b0(void)

longlong * FUN_142a394b0(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  lVar2 = 0x10;
  do {
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2,4);
      }
    }
    else {
      *param_2 = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    param_2 = param_2 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return param_1;
}



// FUNCTION 142a39540 FUN_142a39540 body=387 status=ok
// SIG undefined FUN_142a39540(void)

longlong * FUN_142a39540(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  iVar5 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar1) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0x100001)))) {
    if ((bVar1 & 1) == 0) {
      *(int *)(param_2 + 1) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          lVar4 = (longlong)iVar5 * 0x10 + *param_2;
          FUN_1404c11e0(param_1,lVar4);
          FUN_1404c11e0(param_1,lVar4 + 8);
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)param_2[1]);
      }
    }
    else {
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,local_res8[0]);
      }
      if (0 < local_res8[0]) {
        do {
          iVar2 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
          }
          lVar4 = (longlong)iVar2 * 0x10 + *param_2;
          FUN_1404c11e0(param_1,lVar4);
          FUN_1404c11e0(param_1,lVar4 + 8);
          iVar5 = iVar5 + 1;
        } while (iVar5 < local_res8[0]);
      }
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 142a396d0 FUN_142a396d0 body=1070 status=ok
// SIG undefined FUN_142a396d0(void)

longlong * FUN_142a396d0(longlong *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  void *pvVar10;
  uint *puVar11;
  int iVar12;
  void *pvVar13;
  int iVar14;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  int iStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  uint *puStack_48;
  longlong lStack_40;
  longlong lStack_38;
  
  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & ~*(uint *)((longlong)param_1 + 0x3c);
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(param_1 + 7);
  if (((char)param_1[0xd] == '\0') &&
     (*(int *)((longlong)param_1 + 0x4c) < *(int *)(param_1[8] + 0x18))) {
    do {
      if ((*(byte *)(*(longlong *)(*param_1 + 0xe0) + 0x44 +
                    (longlong)
                    *(int *)((longlong)*(int *)((longlong)param_1 + 0x4c) * 0x20 + 0x10 +
                            *(longlong *)param_1[6]) * 0x48) & 2) == 0) break;
      *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & ~*(uint *)((longlong)param_1 + 0x3c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(param_1 + 7);
    } while (*(int *)((longlong)param_1 + 0x4c) < *(int *)(param_1[8] + 0x18));
  }
  lVar7 = param_1[8];
  pvVar13 = (void *)0x0;
  iVar14 = *(int *)((longlong)param_1 + 0x4c);
  iVar12 = 0;
  if (*(int *)(lVar7 + 0x18) <= iVar14) {
    do {
      if (*(int *)(param_1[3] + 0x18) <= *(int *)((longlong)param_1 + 0x24)) break;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & ~*(uint *)((longlong)param_1 + 0x14);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
      if (*(int *)((longlong)param_1 + 0x24) < *(int *)(param_1[3] + 0x18)) {
        local_78 = (void *)0x100000000;
        local_58 = *(longlong *)param_1[1] +
                   (longlong)*(int *)((longlong)param_1 + 0x24) * 0x68 + 0x10;
        iStack_64 = 0;
        uStack_60 = 0;
        iVar14 = *(int *)(local_58 + 0x28);
        uStack_70 = (uint *)(local_58 + 0x10);
        if (iVar14 != 0) {
          puVar11 = *(uint **)(local_58 + 0x20);
          if (*(uint **)(local_58 + 0x20) == (uint *)0x0) {
            puVar11 = uStack_70;
          }
          uVar3 = *puVar11;
          pvVar5 = pvVar13;
          pvVar10 = pvVar13;
          while (uVar3 == 0) {
            iVar4 = (int)pvVar5;
            uStack_60 = (int)pvVar10 + 0x20;
            pvVar10 = (void *)(ulonglong)uStack_60;
            pvVar5 = (void *)(ulonglong)(iVar4 + 1U);
            uVar2 = (ulonglong)local_78 >> 0x20;
            local_78 = (void *)CONCAT44((int)uVar2,iVar4 + 1U);
            if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4)
            goto LAB_142a3986f;
            uVar3 = puVar11[(longlong)iVar4 + 1];
          }
          uVar3 = -uVar3 & uVar3;
          iVar4 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
            }
          }
          local_78 = (void *)CONCAT44(uVar3,SUB84(local_78,0));
          if (uVar3 == 0) {
            iVar4 = 0x20;
          }
          else {
            iVar4 = 0x1f - iVar4;
          }
          iStack_64 = (uStack_60 - iVar4) + 0x1f;
          if (iVar14 < iStack_64) {
LAB_142a3986f:
            iStack_64 = iVar14;
          }
        }
        local_68 = 0xffffffff;
        lStack_40 = CONCAT44(iStack_64,0xffffffff);
        lStack_38 = CONCAT44(uStack_5c,uStack_60);
        uStack_50 = (ulonglong)local_78;
        uVar2 = uStack_50;
        uStack_50._0_4_ = SUB84(local_78,0);
        uStack_50._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
        param_1[6] = local_58;
        *(undefined4 *)(param_1 + 7) = (undefined4)uStack_50;
        *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_50._4_4_;
        param_1[8] = (longlong)uStack_70;
        param_1[9] = lStack_40;
        param_1[10] = lStack_38;
        uStack_50 = uVar2;
        puStack_48 = uStack_70;
        if (((char)param_1[0xd] == '\0') &&
           (*(int *)((longlong)param_1 + 0x4c) < *(int *)(param_1[8] + 0x18))) {
          do {
            if ((*(byte *)(*(longlong *)(*param_1 + 0xe0) + 0x44 +
                          (longlong)
                          *(int *)((longlong)*(int *)((longlong)param_1 + 0x4c) * 0x20 + 0x10 +
                                  *(longlong *)param_1[6]) * 0x48) & 2) == 0) break;
            *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & ~*(uint *)((longlong)param_1 + 0x3c);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(param_1 + 7);
          } while (*(int *)((longlong)param_1 + 0x4c) < *(int *)(param_1[8] + 0x18));
        }
      }
      lVar7 = param_1[8];
      iVar14 = *(int *)((longlong)param_1 + 0x4c);
    } while (*(int *)(lVar7 + 0x18) <= iVar14);
  }
  if ((*(int *)((longlong)param_1 + 0x24) < *(int *)(param_1[3] + 0x18)) &&
     (iVar14 < *(int *)(lVar7 + 0x18))) {
    puVar8 = (undefined8 *)
             ((longlong)*(int *)((longlong)param_1 + 0x4c) * 0x20 + *(longlong *)param_1[6]);
    iVar14 = *(int *)(puVar8 + 1);
    puVar6 = (undefined8 *)
             ((longlong)*(int *)((longlong)param_1 + 0x24) * 0x68 + *(longlong *)param_1[1]);
    iVar4 = *(int *)(puVar6 + 1);
    if (iVar4 < 2) {
      pvVar5 = (void *)*puVar8;
      local_78 = (void *)0x0;
      uStack_70._0_4_ = iVar14;
      if (iVar14 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,iVar14,0);
        pvVar13 = local_78;
        _guard_xfg_dispatch_icall_nop(local_78,pvVar5,(longlong)iVar14 * 2);
        iVar14 = (int)uStack_70;
        iVar12 = uStack_70._4_4_;
      }
    }
    else {
      iVar9 = iVar14 + -1;
      if (iVar14 == 0) {
        iVar9 = iVar12;
      }
      if ((iVar4 != 0) || (iVar14 = 1, iVar9 == 0)) {
        iVar14 = iVar12;
      }
      pvVar5 = (void *)*puVar6;
      local_78 = (void *)0x0;
      uStack_70._0_4_ = iVar4;
      if ((iVar4 == 0) && (iVar9 + iVar14 == 0)) {
        uStack_70._4_4_ = 0;
        iVar4 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,iVar9 + iVar14 + iVar4,0);
        pvVar13 = local_78;
        _guard_xfg_dispatch_icall_nop(local_78,pvVar5,(longlong)iVar4 * 2);
        iVar4 = (int)uStack_70;
      }
      pvVar5 = (void *)*puVar8;
      iVar14 = iVar4;
      iVar12 = uStack_70._4_4_;
      if (iVar9 != 0) {
        uStack_70._0_4_ = iVar9 + (uint)(iVar4 == 0) + iVar4;
        if (uStack_70._4_4_ < (int)uStack_70) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar4);
          pvVar13 = local_78;
        }
        iVar12 = uStack_70._4_4_;
        iVar14 = (int)uStack_70;
        pvVar10 = (void *)((longlong)pvVar13 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar10,pvVar5,(longlong)iVar9 * 2);
        *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar10) = 0;
      }
    }
    puVar1 = (ulonglong *)(param_1 + 0xb);
    if (puVar1 == &local_78) {
      if (pvVar13 != (void *)0x0) {
        FMemory::Free(pvVar13);
      }
    }
    else {
      if (*puVar1 != 0) {
        FMemory::Free();
      }
      *puVar1 = (ulonglong)pvVar13;
      *(int *)(param_1 + 0xc) = iVar14;
      *(int *)((longlong)param_1 + 100) = iVar12;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)((longlong)param_1 + 100) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xb,0);
    }
  }
  return param_1;
}



// FUNCTION 142a39b00 FUN_142a39b00 body=107 status=ok
// SIG undefined FUN_142a39b00(void)

undefined8 * FUN_142a39b00(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_1440104d0;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(puVar2 + 2) = DVar1;
    *puVar2 = &PTR_FUN_145361558;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142a39b70 FUN_142a39b70 body=634 status=ok
// SIG undefined FUN_142a39b70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142a39b70(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined1 local_f8;
  longlong local_f0 [3];
  undefined1 *local_d8 [2];
  undefined1 local_c8 [32];
  undefined8 local_a8;
  undefined4 local_98;
  longlong local_88 [4];
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  FGenericPlatformMisc::LowLevelOutputDebugStringf(L"BeginUnloadPakEntryFilenames\n");
  uVar8 = 0;
  lVar7 = *(longlong *)(*param_1 + 0x18);
  lVar6 = (longlong)*(int *)(*param_1 + 0x20) * 0x10 + lVar7;
  uVar10 = uVar8;
  for (; lVar7 != lVar6; lVar7 = lVar7 + 0x10) {
    uVar10 = (ulonglong)(uint)((int)uVar10 + *(int *)(*(longlong *)(lVar7 + 8) + 0xe8));
  }
  local_88[0] = 0;
  local_58 = 0xffffffff;
  local_88[1] = 0;
  local_68 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  if (0 < (int)uVar10) {
    FUN_142a4c5d0(local_88,uVar10);
  }
  FUN_142a343a0(*(undefined8 *)(*param_1 + 0x18),(longlong)*(int *)(*param_1 + 0x20),local_f8,0);
  pcVar4 = (char *)*param_1;
  uVar10 = uVar8;
  if (0 < *(int *)(pcVar4 + 0x20)) {
    do {
      iVar9 = (int)uVar10;
      if (*pcVar4 != '\0') {
        FUN_142a3c1e0(*(undefined8 *)(*(longlong *)(pcVar4 + 0x18) + 8 + uVar8),local_88,
                      (longlong)iVar9 * 0x20 + *(longlong *)(pcVar4 + 0x28));
        pcVar4 = (char *)*param_1;
      }
      if (pcVar4[1] != '\0') {
        FUN_142a3be40(*(undefined8 *)(*(longlong *)(pcVar4 + 0x18) + 8 + uVar8),
                      (longlong)iVar9 * 0x10 + *(longlong *)(pcVar4 + 0x38));
        pcVar4 = (char *)*param_1;
      }
      uVar8 = uVar8 + 0x10;
      uVar10 = (ulonglong)(iVar9 + 1U);
    } while ((int)(iVar9 + 1U) < *(int *)(pcVar4 + 0x20));
  }
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  FUN_142a40eb0(local_88,0);
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  plVar3 = (longlong *)param_1[1];
  lVar7 = *param_1;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_a8 = 0;
  local_98 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_c8);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_14461b758;
    puVar5[1] = lVar7;
    puVar5[2] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
  }
  local_d8[0] = &LAB_142a3cec0;
  local_108 = 2;
  FUN_140983350(local_f0,local_d8,local_f8,0);
  if (local_f0[0] != 0) {
    LOCK();
    piVar1 = (int *)(local_f0[0] + 0x48);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      FGraphEvent::Recycle(local_f0[0]);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 142a39df0 FUN_142a39df0 body=286 status=ok
// SIG undefined FUN_142a39df0(void)

void FUN_142a39df0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong local_res18;
  undefined1 local_28 [32];
  
  lVar2 = *param_1;
  lVar7 = *(longlong *)(param_3 + 0x10);
  lVar3 = *(longlong *)(param_3 + 0xb0);
  if ((*(char *)(param_3 + 0x73) == '\0') || (lVar7 == 0)) {
    *(undefined8 *)(param_3 + 0x10) = 0;
  }
  else {
    lVar7 = 0;
  }
  *(longlong *)(lVar3 + 8) = lVar7;
  if (lVar7 != 0) {
    if (*(char *)(lVar3 + 0x32) == '\0') {
      *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(lVar2 + 0x68);
      if ((*(int *)(lVar3 + 0x2c) == *(int *)(lVar2 + 200) + -1) &&
         (iVar8 = (int)(*(longlong *)(lVar2 + 0x38) % (longlong)(ulonglong)*(uint *)(lVar2 + 0x68)),
         *(int *)(lVar3 + 0x24) = iVar8, iVar8 == 0)) {
        *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(lVar2 + 0x68);
      }
    }
    else {
      FMemory::Free();
      *(undefined8 *)(lVar3 + 8) = 0;
      *(undefined4 *)(lVar3 + 0x20) = 0;
    }
  }
  plVar6 = (longlong *)FUN_142a3e510(local_28,0,0xff);
  lVar7 = *plVar6;
  *(longlong *)(lVar7 + 0x10) = lVar2;
  *(longlong *)(lVar7 + 0x18) = lVar3;
  lVar2 = *plVar6;
  lVar5 = plVar6[2];
  lVar7 = plVar6[1];
  lVar4 = *(longlong *)(lVar2 + 0x28);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
    UNLOCK();
  }
  local_res18 = lVar4;
  FUN_142a4ee10(lVar2,lVar7,(int)lVar5,1);
  plVar6 = (longlong *)(lVar3 + 0x18);
  if (plVar6 == &local_res18) {
    if (lVar4 == 0) {
      return;
    }
    LOCK();
    piVar1 = (int *)(lVar4 + 0x48);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    lVar2 = local_res18;
  }
  else {
    lVar2 = *plVar6;
    *plVar6 = lVar4;
    if (lVar2 == 0) {
      return;
    }
    LOCK();
    piVar1 = (int *)(lVar2 + 0x48);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (iVar8 == 1) {
    FGraphEvent::Recycle(lVar2);
  }
  return;
}



// FUNCTION 142a39f10 operator() body=153 status=ok
// SIG undefined operator()(void)

ulonglong <lambda_2eaad8e3382cc94eb0a436282822f09c>::operator()(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *(int *)(param_1[1] + 0x18) = *(int *)(param_1[1] + 0x18) + 1;
  uVar4 = FUN_142a42720(*param_1,param_2,0);
  if (uVar4 == 0xffffffffffffffff) {
    *(undefined4 *)
     (*(longlong *)(*param_1 + 0xb0) + 0x24 +
     (longlong)(int)(~*(uint *)(*param_1 + 0xd4) & param_2) * 0x30) = 0;
    plVar2 = (longlong *)param_1[2];
    iVar1 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar2,iVar1);
    }
    lVar3 = *plVar2;
    *(uint *)(lVar3 + (longlong)iVar1 * 4) = param_2;
    return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 142a39fb0 operator() body=260 status=ok
// SIG undefined operator()(void)

undefined8 <lambda_44759bb8e09acbbe04b98c5d84081b8c>::operator()(longlong *param_1,uint param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  byte bVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar5 = param_1[1];
  lVar1 = param_1[4];
  puVar2 = (ulonglong *)
           ((longlong)(int)(~*(uint *)(*param_1 + 0x24) & param_2) * 0x30 + *(longlong *)*param_1);
  uVar3 = puVar2[1];
  uVar7 = *puVar2 & 0xffffffffffff;
  uVar10 = (uVar7 - 1) + uVar3;
  if (uVar7 <= uVar5) {
    uVar7 = uVar5;
  }
  if ((ulonglong)param_1[2] <= uVar10) {
    uVar10 = param_1[2];
  }
  if (uVar7 <= uVar10) {
    bVar4 = (byte)(int)param_1[3];
    uVar8 = uVar7 - uVar5 >> (bVar4 & 0x3f);
    uVar10 = uVar10 - uVar5 >> (bVar4 & 0x3f);
    uVar3 = uVar10 >> 6 & 0x3ffffff;
    uVar7 = uVar8 >> 6 & 0x3ffffff;
    uVar5 = *(ulonglong *)(lVar1 + uVar7 * 8);
    puVar2 = (ulonglong *)(lVar1 + uVar7 * 8);
    bVar4 = (byte)uVar10 & 0x3f;
    uVar10 = -1L << ((byte)uVar8 & 0x3f);
    uVar11 = (uint)uVar3;
    if ((uint)uVar7 == uVar11) {
      *puVar2 = 0xffffffffffffffffU >> (0x3f - bVar4 & 0x3f) & uVar10 | uVar5;
      return CONCAT71((int7)(uVar5 >> 8),1);
    }
    uVar6 = (uint)uVar7 + 1;
    *puVar2 = uVar5 | uVar10;
    if (uVar6 < uVar11) {
      puVar9 = (undefined8 *)(lVar1 + (ulonglong)uVar6 * 8);
      for (uVar5 = (ulonglong)(uVar11 - uVar6); uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar9 = 0xffffffffffffffff;
        puVar9 = puVar9 + 1;
      }
    }
    puVar2 = (ulonglong *)(lVar1 + uVar3 * 8);
    *puVar2 = *puVar2 | 0xffffffffffffffffU >> (0x3f - bVar4 & 0x3f);
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 142a3a0c0 operator() body=430 status=ok
// SIG undefined operator()(void)

undefined8 <lambda_5341d7238a46d4f4d41624d1b995058e>::operator()(longlong *param_1,uint param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  
  lVar7 = (longlong)(int)(~*(uint *)(*param_1 + 0xfc) & param_2);
  lVar8 = *(longlong *)(*param_1 + 0xd8);
  piVar2 = (int *)(lVar8 + 0x18 + lVar7 * 0x28);
  *piVar2 = *piVar2 + -1;
  puVar1 = (ulonglong *)(lVar8 + lVar7 * 0x28);
  if (*piVar2 == 0) {
    if ((DAT_14667ae98 == 0) || ((longlong)((*puVar1 & 0xffffffffffff) + puVar1[1]) <= param_1[1]))
    {
      FUN_142a3d850(*param_1,puVar1);
      return 1;
    }
    lVar8 = *param_1;
    lVar7 = (longlong)*(int *)(lVar8 + 0x158);
    if (*(int *)(lVar8 + 0x158) != 0) {
      iVar9 = 0;
      bVar10 = **(ulonglong **)(lVar8 + 0x150) != *puVar1;
      lVar4 = 0;
      iVar5 = 0;
      do {
        lVar4 = lVar4 + 1;
        iVar6 = iVar5 + 1;
        if (lVar4 < lVar7) {
          puVar3 = (ulonglong *)(*(longlong *)(lVar8 + 0x150) + lVar4 * 8);
          do {
            if (bVar10 != (*puVar3 != *puVar1)) break;
            iVar6 = iVar6 + 1;
            lVar4 = lVar4 + 1;
            puVar3 = puVar3 + 1;
          } while (lVar4 < lVar7);
        }
        if (bVar10 != false) {
          if (iVar9 != iVar5) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(lVar8 + 0x150) + (longlong)iVar9 * 8),
                       (void *)(*(longlong *)(lVar8 + 0x150) + (longlong)iVar5 * 8),
                       (longlong)(iVar6 - iVar5) << 3);
          }
          iVar9 = iVar9 + (iVar6 - iVar5);
        }
        bVar10 = (bool)(bVar10 ^ 1);
        iVar5 = iVar6;
      } while (lVar4 < lVar7);
      *(int *)(lVar8 + 0x158) = iVar9;
      lVar8 = *param_1;
    }
    iVar5 = *(int *)(lVar8 + 0x158);
    *(int *)(lVar8 + 0x158) = iVar5 + 1;
    if (*(int *)(lVar8 + 0x15c) < iVar5 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                ((longlong *)(lVar8 + 0x150),iVar5);
    }
    *(ulonglong *)(*(longlong *)(lVar8 + 0x150) + (longlong)iVar5 * 8) = *puVar1;
  }
  return 0;
}



// FUNCTION 142a3a270 FUN_142a3a270 body=692 status=ok
// SIG undefined FUN_142a3a270(void)

void FUN_142a3a270(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  char *pcVar9;
  longlong lVar10;
  ulonglong uVar11;
  int local_res10;
  longlong local_res18;
  longlong *local_48;
  ulonglong local_40;
  
  pcVar9 = (char *)*param_1;
  local_res10 = 0;
  if (0 < *(int *)(pcVar9 + 0x20)) {
    lVar10 = 0;
    local_res18 = 0;
    do {
      if (*pcVar9 != '\0') {
        puVar4 = (undefined8 *)(*(longlong *)(pcVar9 + 0x28) + local_res18);
        lVar2 = *(longlong *)(*(longlong *)(pcVar9 + 0x18) + 8 + lVar10);
        if (((puVar4[1] != 0) && (puVar4[2] != 0)) && (puVar4[3] != 0)) {
          lVar1 = lVar2 + 0x100;
          *(undefined8 *)(lVar2 + 0x150) = *puVar4;
          *(undefined8 *)(lVar2 + 0x160) = puVar4[1];
          *(undefined8 *)(lVar2 + 0x168) = puVar4[2];
          *(undefined8 *)(lVar2 + 0x158) = puVar4[3];
          *(undefined1 *)(lVar2 + 0x19a) = 1;
          if (*(int *)(pcVar9 + 0x10) == 0) {
            TSet<TTuple<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>,0>,FDefaultSetAllocator>
            ::Empty(lVar1,0);
          }
          else {
            local_48 = (longlong *)0x0;
            local_40 = 0;
            TMapBase<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>,0>_>
            ::GetKeys<FDefaultAllocator>(lVar1,&local_48);
            plVar6 = local_48;
            iVar7 = (int)local_40;
            if (0 < (int)local_40) {
              uVar11 = local_40 & 0xffffffff;
              plVar8 = local_48;
              do {
                iVar5 = 0;
                if (0 < *(int *)(pcVar9 + 0x10)) {
                  do {
                    cVar3 = FUN_141593930(plVar8,(longlong)iVar5 * 0x10 + *(longlong *)(pcVar9 + 8),
                                          1);
                    if (cVar3 != '\0') goto LAB_142a3a39f;
                    iVar5 = iVar5 + 1;
                  } while (iVar5 < *(int *)(pcVar9 + 0x10));
                }
                TSet<TTuple<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>,0>,FDefaultSetAllocator>
                ::Remove(lVar1,plVar8);
LAB_142a3a39f:
                plVar8 = plVar8 + 2;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            TSparseArray<TSetElement<TTuple<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            ::Shrink(lVar1);
            TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
            ::ConditionalRehash(lVar1,*(int *)(lVar2 + 0x108) - *(int *)(lVar2 + 0x134),1);
            plVar8 = plVar6;
            for (; iVar7 != 0; iVar7 = iVar7 + -1) {
              if (*plVar8 != 0) {
                FMemory::Free();
              }
              plVar8 = plVar8 + 2;
            }
            if (plVar6 != (longlong *)0x0) {
              FMemory::Free(plVar6);
            }
          }
        }
      }
      pcVar9 = (char *)*param_1;
      if (pcVar9[1] != '\0') {
        plVar6 = (longlong *)(*(longlong *)(pcVar9 + 0x38) + lVar10);
        lVar2 = *(longlong *)(*(longlong *)(pcVar9 + 0x18) + 8 + lVar10);
        if ((*plVar6 != 0) && (plVar6[1] != 0)) {
          AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0xf8));
          *(longlong *)(lVar2 + 0x170) = plVar6[1];
          *(longlong *)(lVar2 + 0x178) = *plVar6;
          iVar7 = *(int *)(lVar2 + 0xe8);
          if (iVar7 != 0) {
            plVar6 = (longlong *)(*(longlong *)(lVar2 + 0xe0) + 0x30);
            do {
              if (*plVar6 != 0) {
                FMemory::Free();
              }
              plVar6 = plVar6 + 9;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          *(undefined4 *)(lVar2 + 0xe8) = 0;
          if (*(int *)(lVar2 + 0xec) != 0) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::
            ResizeTo(lVar2 + 0xe0,0);
          }
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0xf8));
          *(undefined1 *)(lVar2 + 0xf0) = 1;
          pcVar9 = (char *)*param_1;
        }
      }
      local_res10 = local_res10 + 1;
      local_res18 = local_res18 + 0x20;
      lVar10 = lVar10 + 0x10;
    } while (local_res10 < *(int *)(pcVar9 + 0x20));
  }
  FGenericPlatformMisc::LowLevelOutputDebugStringf(L"FinalizeUnloadPakEntryFilenames\n");
  return;
}



// FUNCTION 142a3a530 operator() body=146 status=ok
// SIG undefined operator()(void)

ulonglong <lambda_a7426f0c16d8a23361253cb80f4901f7>::operator()(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = FUN_142a42720(*param_1,param_2,0);
  if (uVar4 == 0xffffffffffffffff) {
    *(undefined4 *)
     (*(longlong *)(*param_1 + 0xb0) + 0x24 +
     (longlong)(int)(~*(uint *)(*param_1 + 0xd4) & param_2) * 0x30) = 0;
    plVar2 = (longlong *)param_1[1];
    iVar1 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar2,iVar1);
    }
    lVar3 = *plVar2;
    *(uint *)(lVar3 + (longlong)iVar1 * 4) = param_2;
    return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 142a3a5d0 operator() body=199 status=ok
// SIG undefined operator()(void)

void <lambda_ac05d294e30d11157c0f3afcdcb34268>::operator()
               (longlong *param_1,undefined1 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_28 [32];
  
  if ((*(char *)(*param_1 + 0x308) == '\0') || (*(char *)((longlong)param_1 + 0xc) == '\0')) {
    FPakPrecacher::NewRequestsToLowerComplete(*param_1,param_2,param_3,(int)param_1[1]);
  }
  else {
    lVar5 = param_1[1];
    plVar7 = (longlong *)TGraphTask<FAsyncIOSignatureCheckTask>::CreateTask(local_28,0,0xff);
    lVar3 = *plVar7;
    *(undefined8 *)(lVar3 + 0x18) = param_3;
    *(undefined1 *)(lVar3 + 0x10) = param_2;
    *(int *)(lVar3 + 0x20) = (int)lVar5;
    lVar3 = *plVar7;
    lVar6 = plVar7[2];
    lVar5 = plVar7[1];
    lVar4 = *(longlong *)(lVar3 + 0x30);
    piVar1 = (int *)(lVar4 + 0x48);
    if (lVar4 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_142a4f0d0(lVar3,lVar5,(int)lVar6,1);
    if (lVar4 != 0) {
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle(lVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142a3a6b0 FUN_142a3a6b0 body=84 status=ok
// SIG undefined FUN_142a3a6b0(void)

undefined8 * FUN_142a3a6b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_DoThreadedWork_145361768;
  FUN_1415b5910(param_1[9]);
  param_1[9] = 0;
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 142a3a710 FUN_142a3a710 body=84 status=ok
// SIG undefined FUN_142a3a710(void)

undefined8 * FUN_142a3a710(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_Abandon_145361780;
  FUN_1415b5910(param_1[9]);
  param_1[9] = 0;
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 142a3a770 FUN_142a3a770 body=122 status=ok
// SIG undefined FUN_142a3a770(void)

undefined8 * FUN_142a3a770(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_145361608;
  plVar3 = (longlong *)param_1[0xe];
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
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144cacc30;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 142a3a7f0 FUN_142a3a7f0 body=122 status=ok
// SIG undefined FUN_142a3a7f0(void)

undefined8 * FUN_142a3a7f0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_1453615c0;
  plVar3 = (longlong *)param_1[0xe];
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
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144cacc30;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 142a3a870 FUN_142a3a870 body=122 status=ok
// SIG undefined FUN_142a3a870(void)

undefined8 * FUN_142a3a870(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_145361698;
  plVar3 = (longlong *)param_1[0xe];
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
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144cacc30;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 142a3a8f0 FUN_142a3a8f0 body=122 status=ok
// SIG undefined FUN_142a3a8f0(void)

undefined8 * FUN_142a3a8f0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_145361650;
  plVar3 = (longlong *)param_1[0xe];
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
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144cacc30;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 142a3a970 FUN_142a3a970 body=97 status=ok
// SIG undefined FUN_142a3a970(void)

undefined8 * FUN_142a3a970(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145361438;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142a3a9e0 FUN_142a3a9e0 body=97 status=ok
// SIG undefined FUN_142a3a9e0(void)

undefined8 * FUN_142a3a9e0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145361360;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142a3aa50 FUN_142a3aa50 body=271 status=ok
// SIG undefined FUN_142a3aa50(void)

undefined8 * FUN_142a3aa50(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_IsPromotedBuild_145360f48;
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,1);
  }
  param_1[4] = 0;
  if (param_1[0x26] != 0) {
    FUN_1415b5910();
    param_1[0x26] = 0;
  }
  if (param_1[0x27] != 0) {
    FUN_1415b5910();
    param_1[0x27] = 0;
  }
  if (param_1[0x28] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  plVar3 = param_1 + 0x1e;
  if (*plVar3 != 0) {
    FMemory::Free();
  }
  lVar2 = 8;
  do {
    plVar1 = plVar3 + -3;
    plVar3 = plVar3 + -3;
    FMemory::Free(*plVar1);
    *plVar3 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2e0);
  }
  return param_1;
}



// FUNCTION 142a3ab60 FUN_142a3ab60 body=75 status=ok
// SIG undefined FUN_142a3ab60(void)

undefined8 * FUN_142a3ab60(undefined8 *param_1,ulonglong param_2)

{
  FMemory::operator_delete(param_1[6]);
  FMemory::operator_delete(param_1[4]);
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142a3abb0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FWmfMediaTracks::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_142a38d90();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 142a3abf0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FFillTextureCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_142a392d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 142a3ac30 FUN_142a3ac30 body=325 status=ok
// SIG undefined FUN_142a3ac30(void)

longlong * FUN_142a3ac30(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  FMemory::operator_delete(param_1[0x2f]);
  FMemory::operator_delete(param_1[0x2e]);
  FMemory::operator_delete(param_1[0x2d]);
  FMemory::operator_delete(param_1[0x2c]);
  FMemory::operator_delete(param_1[0x2b]);
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x20,0);
  if (param_1[0x24] != 0) {
    FMemory::Free();
  }
  if (param_1[0x20] != 0) {
    FMemory::Free();
  }
  TArray<FSpriteRenderSection,FDefaultAllocator>::~TArray<FSpriteRenderSection,FDefaultAllocator>
            (param_1 + 0x1c);
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 5,0);
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)param_1[3];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 142a3ad80 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FGlobalShader::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_142a39010();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 142a3adc0 `scalar_deleting_destructor' body=234 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FPakProcessedReadRequest::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__145361348;
  if (*(char *)((longlong)param_1 + 0xa1) == '\0') {
    FPakAsyncReadFileHandle::RemoveRequest(param_1[0xf],param_1,param_1[0x10],param_1[0x11]);
  }
  if ((param_1[2] != 0) && (*(char *)((longlong)param_1 + 0x75) == '\0')) {
    FMemory::Free();
  }
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x15);
  *param_1 = &PTR__scalar_deleting_destructor__144ca06d8;
  if (*(int *)(param_1 + 0xc) != 0) {
    plVar1 = (longlong *)param_1[10];
    if ((longlong *)param_1[10] == (longlong *)0x0) {
      plVar1 = param_1 + 6;
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 142a3aeb0 FUN_142a3aeb0 body=52 status=ok
// SIG undefined FUN_142a3aeb0(void)

undefined8 FUN_142a3aeb0(undefined8 param_1,ulonglong param_2)

{
  FUN_142a392d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 142a3aef0 FUN_142a3aef0 body=72 status=ok
// SIG undefined FUN_142a3aef0(void)

undefined8 * FUN_142a3aef0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142a3af40 `scalar_deleting_destructor' body=122 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FSignedArchiveReader::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__145360f78;
  puVar1 = (undefined8 *)param_1[0x13];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0x13] = 0;
  FMemory::Free(param_1[0x18]);
  param_1[0x18] = 0;
  FArchive::~FArchive(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 142a3afc0 FUN_142a3afc0 body=43 status=ok
// SIG undefined FUN_142a3afc0(void)

undefined8 * FUN_142a3afc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145361168;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142a3aff0 Abandon body=41 status=ok
// SIG undefined Abandon(void)

void FAsyncTask<FPakCompressedReaderPolicy<FPakNoEncryption>::FPakUncompressTask>::Abandon
               (longlong param_1)

{
  DoWork();
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a3b00f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 142a3b020 Abandon body=41 status=ok
// SIG undefined Abandon(void)

void FAsyncTask<FPakCompressedReaderPolicy<FPakSimpleEncryption>::FPakUncompressTask>::Abandon
               (longlong param_1)

{
  DoWork();
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a3b03f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 142a3b050 FUN_142a3b050 body=2177 status=ok
// SIG undefined FUN_142a3b050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142a3b050(int *param_1)

{
  ushort uVar1;
  int *piVar2;
  int **ppiVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  int *piVar13;
  uint *puVar14;
  int iVar15;
  longlong lVar16;
  int **ppiVar17;
  ulonglong uVar18;
  uint uVar19;
  bool bVar20;
  undefined1 auStack_148 [32];
  int **local_128;
  undefined8 local_120;
  uint local_118;
  undefined4 local_110;
  int **local_108;
  longlong local_100;
  int local_f8;
  uint local_f4;
  undefined8 local_e8;
  undefined8 uStack_e0;
  int **local_d8;
  int *local_c8;
  int **ppiStack_c0;
  uint *local_b8;
  undefined8 local_b0;
  int *local_a8;
  int **ppiStack_a0;
  uint **local_98;
  int *local_88;
  ulonglong local_80;
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  uVar5 = FPakPrecacher::GetNextBlock(param_1,&local_f8);
  if (uVar5 == 0xffffffffffffffff) {
    uVar10 = 0;
  }
  else {
    local_e8 = (int *)(uVar5 >> 0x30);
    lVar16 = (longlong)local_e8 * 0x98 + *(longlong *)(param_1 + 0x28);
    uVar5 = uVar5 & 0xffffffff0000;
    uVar12 = (longlong)(DAT_14667ae94 << 10) + 0xffff + uVar5 & 0xffffffffffff0000;
    uVar18 = *(ulonglong *)(lVar16 + 8);
    if ((longlong)(uVar12 - 1) <= (longlong)(*(ulonglong *)(lVar16 + 8) - 1)) {
      uVar18 = uVar12;
    }
    uVar12 = 0;
    ppiVar17 = (int **)(uVar18 - 1);
    lVar6 = ((longlong)ppiVar17 - uVar5) + 0x10000;
    lVar6 = lVar6 + (ulonglong)(ushort)(lVar6 >> 0x3f);
    iVar15 = (int)((ulonglong)lVar6 >> 0x10);
    local_c8 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38);
    uVar19 = iVar15 + 0x3fU >> 6;
    local_f4 = uVar19;
    local_d8 = ppiVar17;
    if ((*local_c8 < DAT_146b29950) && (_Init_thread_header(&DAT_146b29950), DAT_146b29950 == -1)) {
      DAT_146b29940 = 0;
      _DAT_146b29948 = 0;
      atexit((_func_5014 *)&LAB_143ebe5a0);
      _Init_thread_footer(&DAT_146b29950);
    }
    uVar11 = DAT_146b2994c;
    bVar20 = DAT_146b2994c != 0;
    if (((longlong)_DAT_146b29948 < 0) &&
       (_DAT_146b29948 = (ulonglong)DAT_146b2994c << 0x20, bVar20)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b29940,0);
      uVar12 = _DAT_146b29948 & 0xffffffff;
      uVar11 = DAT_146b2994c;
    }
    iVar4 = (int)uVar12 + uVar19;
    _DAT_146b29948 = CONCAT44(DAT_146b2994c,iVar4);
    if ((int)uVar11 < iVar4) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b29940,uVar12);
    }
    local_a8 = (int *)((ulonglong)uVar19 * 8);
    _guard_xfg_dispatch_icall_nop
              ((void *)(DAT_146b29940 + (longlong)(int)uVar12 * 8),0,(size_t)local_a8);
    piVar13 = local_a8;
    if (iVar15 != uVar19 << 6) {
      *(longlong *)((longlong)local_a8 + DAT_146b29940 + -8) =
           -1L << ((char)((ulonglong)lVar6 >> 0x10) + 0x40U & 0x3f);
    }
    if (*(int *)(lVar16 + 0x7c) != 0) {
      local_100 = DAT_146b29940;
      local_108 = (int **)CONCAT44(local_108._4_4_,*(undefined4 *)(lVar16 + 0x20));
      local_110 = *(undefined4 *)(lVar16 + 0x1c);
      local_118 = *(uint *)(lVar16 + 0x18);
      local_120 = *(undefined8 *)(lVar16 + 0x10);
      local_128 = (int **)0x0;
      OverlappingNodesInIntervalTreeMask<FPakPrecacher::FCacheBlock>
                (*(int *)(lVar16 + 0x7c),param_1 + 0x36,uVar5,ppiVar17);
    }
    if (*(int *)(lVar16 + 0x78) != 0) {
      local_100 = DAT_146b29940;
      local_108 = (int **)CONCAT44(local_108._4_4_,*(undefined4 *)(lVar16 + 0x20));
      local_110 = *(undefined4 *)(lVar16 + 0x1c);
      local_118 = *(uint *)(lVar16 + 0x18);
      local_120 = *(undefined8 *)(lVar16 + 0x10);
      local_128 = (int **)0x0;
      OverlappingNodesInIntervalTreeMask<FPakPrecacher::FCacheBlock>
                (*(int *)(lVar16 + 0x78),param_1 + 0x36,uVar5,ppiVar17);
    }
    if ((*local_c8 < DAT_146b29968) && (_Init_thread_header(&DAT_146b29968), DAT_146b29968 == -1)) {
      DAT_146b29958 = 0;
      _DAT_146b29960 = 0;
      atexit((_func_5014 *)&LAB_143ebe600);
      _Init_thread_footer(&DAT_146b29968);
    }
    uVar11 = DAT_146b29964;
    bVar20 = DAT_146b29964 != 0;
    iVar15 = 0;
    if ((_DAT_146b29960 < 0) && (_DAT_146b29960 = (ulonglong)DAT_146b29964 << 0x20, bVar20)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b29958);
      uVar11 = DAT_146b29964;
      iVar15 = DAT_146b29960;
    }
    _DAT_146b29960 = CONCAT44(DAT_146b29964,iVar15 + uVar19);
    if ((int)uVar11 < (int)(iVar15 + uVar19)) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b29958);
    }
    _guard_xfg_dispatch_icall_nop((void *)(DAT_146b29958 + (longlong)iVar15 * 8),0,(size_t)piVar13);
    ppiVar3 = local_d8;
    if (local_f8 < 9) {
      lVar6 = 5;
      iVar4 = 8;
      piVar13 = (int *)(lVar16 + 0x70);
      iVar15 = local_f8;
      do {
        if (*piVar13 != 0) {
          local_70 = *(undefined4 *)(lVar16 + 0x20);
          local_88 = param_1 + 0x2c;
          local_68 = DAT_146b29958;
          ppiStack_c0 = &local_88;
          local_108 = &local_a8;
          local_110 = *(undefined4 *)(lVar16 + 0x1c);
          local_118 = *(uint *)(lVar16 + 0x18);
          local_120 = *(undefined8 *)(lVar16 + 0x10);
          local_c8 = (int *)&LAB_142a3cd30;
          local_128 = (int **)0x0;
          local_78 = (longlong)ppiVar3;
          local_a8 = (int *)&LAB_142a3cd30;
          ppiStack_a0 = ppiStack_c0;
          local_80 = uVar5;
          FUN_142a35700(*piVar13,local_88,uVar5,ppiVar3);
          iVar15 = local_f8;
        }
        ppiVar17 = local_d8;
        uVar19 = local_f4;
        if (lVar6 == 0) break;
        iVar4 = iVar4 + -1;
        lVar6 = lVar6 + -1;
        piVar13 = piVar13 + -3;
      } while (iVar15 <= iVar4);
    }
    iVar15 = 5;
    uVar11 = 0;
    uVar18 = (ulonglong)(uVar19 << 0x16);
    if (uVar19 != 0) {
LAB_142a3b400:
      uVar12 = ~*(ulonglong *)(DAT_146b29940 + (longlong)(int)uVar11 * 8) &
               *(ulonglong *)(DAT_146b29958 + (longlong)(int)uVar11 * 8);
      if (uVar12 == 0xffffffffffffffff) goto code_r0x000142a3b414;
      uVar18 = (ulonglong)(uVar11 << 0x16);
      for (; (uVar12 & 1) != 0; uVar12 = uVar12 >> 1) {
        uVar18 = uVar18 + 0x10000;
      }
    }
LAB_142a3b43f:
    lVar6 = (longlong)ppiVar17 + 1;
    if ((longlong)(uVar18 + uVar5) <= (longlong)ppiVar17 + 1) {
      lVar6 = uVar18 + uVar5;
    }
    uVar19 = TIntervalTreeAllocator<FPakPrecacher::FCacheBlock>::Alloc(param_1 + 0x36);
    ppiVar17 = (int **)(*(longlong *)(param_1 + 0x36) +
                       (longlong)(int)(~param_1[0x3f] & uVar19) * 0x28);
    *ppiVar17 = (int *)((longlong)local_e8 << 0x30 | uVar5);
    *(undefined4 *)(ppiVar17 + 3) = 0;
    ppiVar17[2] = (int *)0x0;
    *(undefined4 *)((longlong)ppiVar17 + 0x24) = 0;
    ppiVar17[1] = (int *)(lVar6 - uVar5);
    *(uint *)((longlong)ppiVar17 + 0x1c) = uVar19;
    local_128 = (int **)CONCAT44(local_128._4_4_,*(undefined4 *)(lVar16 + 0x1c));
    local_d8 = ppiVar17;
    AddToIntervalTree<FPakPrecacher::FCacheBlock>
              (lVar16 + 0x78,param_1 + 0x36,(longlong)(int)uVar19,*(undefined4 *)(lVar16 + 0x18));
    piVar13 = (int *)(lVar16 + 0x70);
    local_b8 = (uint *)0x0;
    local_b0 = 0;
    while( true ) {
      if (*piVar13 != 0) {
        local_e8 = (int *)&LAB_142a3cd20;
        local_98 = &local_b8;
        uStack_e0 = &local_a8;
        local_c8 = (int *)&LAB_142a3cd20;
        local_108 = &local_c8;
        local_110 = *(undefined4 *)(lVar16 + 0x1c);
        local_118 = *(uint *)(lVar16 + 0x18);
        local_120 = *(undefined8 *)(lVar16 + 0x10);
        local_128 = (int **)0x0;
        ppiStack_c0 = uStack_e0;
        local_a8 = param_1;
        ppiStack_a0 = ppiVar17;
        MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FPakInRequest>
                  (lVar16 + ((longlong)iVar15 * 3 + 0xd) * 4,param_1 + 0x2c,uVar5,lVar6 + -1);
      }
      uVar18 = 0;
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      piVar13 = piVar13 + -3;
    }
    uVar5 = (ulonglong)((longlong)(local_b8 + (int)local_b0) + (3 - (longlong)local_b8)) >> 2;
    if (local_b8 + (int)local_b0 < local_b8) {
      uVar5 = uVar18;
    }
    puVar14 = local_b8;
    if (uVar5 != 0) {
      do {
        uVar19 = *puVar14;
        local_e8 = (int *)(longlong)(int)uVar19;
        local_a8 = (int *)CONCAT44(local_a8._4_4_,uVar19);
        lVar6 = (longlong)(int)(~param_1[0x35] & uVar19) * 0x30 + *(longlong *)(param_1 + 0x2c);
        *(undefined4 *)(lVar6 + 0x2c) = 2;
        local_f4 = *(uint *)(lVar16 + 0x1c);
        local_f8 = *(int *)(lVar16 + 0x18);
        iVar15 = (local_f4 - local_f8) + 1;
        local_c8 = (int *)(lVar16 + ((longlong)*(int *)(lVar6 + 0x28) * 3 + 0xe) * 4);
        if (((DAT_14667aeb8._4_4_ - (int)DAT_14667aeb8) + DAT_14667aec8 < iVar15) &&
           (DAT_14667aeb8._4_4_ < (int)DAT_14667aeb8 + iVar15)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
          ResizeTo(&DAT_14667aeb0);
        }
        puVar7 = (ulonglong *)
                 (((longlong)~param_1[0x35] & (ulonglong)local_e8) * 0x30 +
                 *(longlong *)(param_1 + 0x2c));
        local_128 = (int **)(((*puVar7 & 0xffffffffffff) - 1) + puVar7[1]);
        local_118 = local_f4;
        local_120 = CONCAT44(local_120._4_4_,local_f8);
        AddToIntervalTree_Dangerous<FPakPrecacher::FPakInRequest>(local_c8,param_1 + 0x2c);
        uVar18 = uVar18 + 1;
        puVar14 = puVar14 + 1;
        ppiVar17 = local_d8;
      } while (uVar18 != uVar5);
    }
    iVar15 = 0;
    if (0 < DAT_14667ae90) {
      plVar8 = (longlong *)(param_1 + 0x58);
      do {
        if (*plVar8 == 0) {
          if (-1 < iVar15) {
            uVar1 = *(ushort *)((longlong)ppiVar17 + 6);
            lVar16 = *(longlong *)(param_1 + 0x28);
            lVar6 = (longlong)iVar15;
            uStack_e0._0_5_ = CONCAT14(1,iVar15);
            local_58 = (longlong *)0x0;
            param_1[lVar6 * 8 + 0x5a] = *(int *)((longlong)ppiVar17 + 0x1c);
            *(int **)(param_1 + lVar6 * 8 + 0x5c) = ppiVar17[1];
            (param_1 + lVar6 * 8 + 0x5e)[0] = 0;
            (param_1 + lVar6 * 8 + 0x5e)[1] = 0;
            local_48 = 0;
            local_e8 = param_1;
            puVar9 = (undefined8 *)FUN_140438ef0(0x18,&local_78);
            if (puVar9 != (undefined8 *)0x0) {
              *puVar9 = &PTR_FUN_144edb4f8;
              *(undefined4 *)(puVar9 + 1) = (undefined4)local_e8;
              *(undefined4 *)((longlong)puVar9 + 0xc) = local_e8._4_4_;
              *(undefined4 *)(puVar9 + 2) = (undefined4)uStack_e0;
              *(undefined4 *)((longlong)puVar9 + 0x14) = uStack_e0._4_4_;
            }
            local_88 = (int *)&LAB_142a3ced0;
            local_128 = &local_88;
            plVar8 = *(longlong **)((ulonglong)uVar1 * 0x98 + lVar16);
            local_120 = 0;
            uVar10 = (**(code **)(*plVar8 + 0x10))
                               (plVar8,(ulonglong)*ppiVar17 & 0xffffffffffff,ppiVar17[1],3);
            *(undefined8 *)(param_1 + (lVar6 + 0xb) * 8) = uVar10;
            piVar13 = ppiVar17[1];
            piVar2 = *ppiVar17;
            param_1[0x9d] = param_1[0x9d] + 1;
            *(longlong *)(param_1 + 0xc) = (longlong)piVar13 + (longlong)piVar2;
            *(longlong *)(param_1 + 0xa0) = (longlong)ppiVar17[1] + *(longlong *)(param_1 + 0xa0);
            if (local_48 != 0) {
              plVar8 = &local_78;
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
          }
          break;
        }
        iVar15 = iVar15 + 1;
        plVar8 = plVar8 + 4;
      } while (iVar15 < DAT_14667ae90);
    }
    if (local_b8 != (uint *)0x0) {
      FMemory::Free(local_b8);
    }
    uVar10 = 1;
  }
  return uVar10;
code_r0x000142a3b414:
  uVar11 = uVar11 + 1;
  if (uVar19 <= uVar11) goto LAB_142a3b43f;
  goto LAB_142a3b400;
}



// FUNCTION 142a3b8e0 FUN_142a3b8e0 body=1102 status=ok
// SIG undefined FUN_142a3b8e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142a3b8e0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ushort uVar11;
  int iVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong *puVar17;
  bool bVar18;
  code *local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  longlong local_40;
  ulonglong uVar12;
  
  uVar12 = 0;
  puVar17 = (ulonglong *)
            ((longlong)(int)(~*(uint *)(param_1 + 0xd4) & param_2) * 0x30 +
            *(longlong *)(param_1 + 0xb0));
  uVar6 = *puVar17;
  lVar16 = (ulonglong)*(ushort *)((longlong)puVar17 + 6) * 0x98 + *(longlong *)(param_1 + 0xa0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b29938) && (_Init_thread_header(&DAT_146b29938), DAT_146b29938 == -1))
  {
    DAT_146b29928 = 0;
    _DAT_146b29930 = 0;
    atexit((_func_5014 *)&LAB_143ebe5c0);
    _Init_thread_footer(&DAT_146b29938);
  }
  uVar9 = uVar6 & 0xffffffff0000;
  lVar3 = (puVar17[1] + 0xffff + (uVar6 & 0xffffffffffff) & 0xffffffffffff0000) - 1;
  uVar8 = DAT_146b29934;
  lVar4 = (lVar3 - uVar9) + 0x10000;
  lVar4 = lVar4 + (ulonglong)(ushort)(lVar4 >> 0x3f);
  iVar2 = (int)((ulonglong)lVar4 >> 0x10);
  uVar14 = iVar2 + 0x3f;
  uVar15 = uVar14 >> 6;
  bVar18 = DAT_146b29934 != 0;
  iVar13 = 0;
  if ((_DAT_146b29930 < 0) && (_DAT_146b29930 = (ulonglong)DAT_146b29934 << 0x20, bVar18)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b29928);
    uVar8 = DAT_146b29934;
    iVar13 = DAT_146b29930;
  }
  _DAT_146b29930 = CONCAT44(DAT_146b29934,iVar13 + uVar15);
  if ((int)uVar8 < (int)(iVar13 + uVar15)) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b29928);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(DAT_146b29928 + (longlong)iVar13 * 8),0,(ulonglong)uVar15 * 8);
  if (iVar2 != uVar15 * 0x40) {
    *(longlong *)(DAT_146b29928 + -8 + (ulonglong)uVar15 * 8) =
         -1L << ((char)((ulonglong)lVar4 >> 0x10) + 0x40U & 0x3f);
  }
  if (*(int *)(lVar16 + 0x7c) != 0) {
    *(undefined4 *)((longlong)puVar17 + 0x2c) = 0;
    plStack_60 = &local_58;
    local_68 = UE4Function_Private::
               TFunctionRefCaller<<lambda_7188017827b2fe358499d880c9d8f9a5>,bool___cdecl(unsigned_int)>
               ::Call;
    local_58 = param_1;
    local_50 = lVar16;
    local_48 = uVar9;
    local_40 = lVar3;
    FUN_142a353c0(*(undefined4 *)(lVar16 + 0x7c),param_1 + 0xd8,uVar9,lVar3,0,
                  *(undefined8 *)(lVar16 + 0x10),*(undefined4 *)(lVar16 + 0x18),
                  *(undefined4 *)(lVar16 + 0x1c),&local_68);
    uVar6 = uVar12;
    if (uVar14 >> 6 != 0) {
      do {
        if (*(longlong *)(DAT_146b29928 + (longlong)(int)uVar6 * 8) != -1) {
          *(undefined4 *)((longlong)puVar17 + 0x2c) = 1;
          break;
        }
        uVar8 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar8;
      } while (uVar8 < uVar15);
    }
  }
  if ((*(int *)((longlong)puVar17 + 0x2c) == 1) && (*(int *)(lVar16 + 0x78) != 0)) {
    *(undefined4 *)((longlong)puVar17 + 0x2c) = 2;
    plStack_60 = &local_58;
    local_68 = UE4Function_Private::
               TFunctionRefCaller<<lambda_7188017827b2fe358499d880c9d8f9a5>,bool___cdecl(unsigned_int)>
               ::Call;
    local_58 = param_1;
    local_50 = lVar16;
    local_48 = uVar9;
    local_40 = lVar3;
    FUN_142a353c0(*(undefined4 *)(lVar16 + 0x78),param_1 + 0xd8,uVar9,lVar3,0,
                  *(undefined8 *)(lVar16 + 0x10),*(undefined4 *)(lVar16 + 0x18),
                  *(undefined4 *)(lVar16 + 0x1c),&local_68);
    uVar6 = uVar12;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(DAT_146b29928 + (longlong)(int)uVar6 * 8) != -1) {
          *(undefined4 *)((longlong)puVar17 + 0x2c) = 1;
          break;
        }
        uVar8 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar8;
      } while (uVar8 < uVar15);
    }
  }
  AddToIntervalTree<FPakPrecacher::FPakInRequest>
            (lVar16 + (((longlong)(int)puVar17[5] + 4) * 3 +
                      (longlong)*(int *)((longlong)puVar17 + 0x2c)) * 4,param_1 + 0xb0,param_2,
             *(undefined4 *)(lVar16 + 0x18),*(undefined4 *)(lVar16 + 0x1c));
  if (*(int *)((longlong)puVar17 + 0x2c) == 0) {
    plVar10 = (longlong *)
              ((longlong)(int)(~*(uint *)(param_1 + 0xd4) & param_2) * 0x30 +
              *(longlong *)(param_1 + 0xb0));
    if (*(int *)((longlong)plVar10 + 0x2c) == 0) {
      plVar1 = (longlong *)plVar10[2];
      if (((plVar10[3] == plVar1[2]) && (param_2 == *(uint *)(plVar1 + 3))) &&
         (*plVar10 == plVar1[1])) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    uVar5 = 1;
  }
  else {
    if ((*(int *)((longlong)puVar17 + 0x2c) == 1) && (0 < DAT_14667ae90)) {
      plVar10 = (longlong *)(param_1 + 0x160);
      uVar6 = uVar12;
      do {
        if (*plVar10 == 0) {
          if ((-1 < (int)uVar6) && (0 < *(int *)(param_1 + 0xa8))) {
            do {
              lVar16 = 5;
              piVar7 = (int *)(uVar12 * 0x98 + 0x70 + *(longlong *)(param_1 + 0xa0));
              while( true ) {
                if (*piVar7 != 0) {
                  FUN_142a3b050(param_1);
                  goto LAB_142a3bccd;
                }
                if (lVar16 == 0) break;
                lVar16 = lVar16 + -1;
                piVar7 = piVar7 + -3;
              }
              uVar11 = (short)uVar12 + 1;
              uVar12 = (ulonglong)uVar11;
            } while ((int)(uint)uVar11 < *(int *)(param_1 + 0xa8));
          }
          break;
        }
        uVar8 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar8;
        plVar10 = plVar10 + 4;
      } while ((int)uVar8 < DAT_14667ae90);
    }
LAB_142a3bccd:
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 142a3bd30 Alloc body=122 status=ok
// SIG undefined Alloc(void)

uint TIntervalTreeAllocator<FPakPrecacher::FCacheBlock>::Alloc(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  
  if ((int)param_1[3] == 0) {
    uVar3 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar3 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar3 + 1)) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow();
    }
  }
  else {
    uVar3 = *(uint *)(param_1[2] + -4 + (longlong)(int)param_1[3] * 4);
    *(int *)(param_1 + 3) = (int)param_1[3] + -1;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
  }
  lVar2 = (longlong)(int)uVar3;
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + lVar2 * 0x28) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar2 * 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x10 + lVar2 * 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x18 + lVar2 * 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x20 + lVar2 * 0x28) = 0;
  return *(uint *)(param_1 + 4) | uVar3;
}



// FUNCTION 142a3bdb0 Alloc body=131 status=ok
// SIG undefined Alloc(void)

uint TIntervalTreeAllocator<FPakPrecacher::FPakInRequest>::Alloc(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  if ((int)param_1[3] == 0) {
    uVar2 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar2 + 1)) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,uVar2);
    }
  }
  else {
    uVar2 = *(uint *)(param_1[2] + -4 + (longlong)(int)param_1[3] * 4);
    *(int *)(param_1 + 3) = (int)param_1[3] + -1;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
  }
  puVar1 = (undefined8 *)((longlong)(int)uVar2 * 0x30 + *param_1);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = 1;
  return *(uint *)(param_1 + 4) | uVar2;
}



// FUNCTION 142a3be40 FUN_142a3be40 body=925 status=ok
// SIG undefined FUN_142a3be40(void)

void FUN_142a3be40(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint *puVar9;
  byte bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  longlong lVar18;
  longlong *plVar19;
  uint *puVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  bool bVar25;
  bool bVar26;
  longlong lVar10;
  
  if (*(longlong *)(param_1 + 0x178) == 0) {
    iVar22 = 0;
    if (0 < *(int *)(param_1 + 0x180)) {
      plVar19 = *(longlong **)(param_1 + 0xe0);
      lVar18 = 0;
      do {
        lVar7 = 0x30;
        iVar21 = (int)plVar19[3];
        lVar24 = *plVar19;
        if (0x3f < iVar21) {
          return;
        }
        iVar1 = (int)plVar19[7];
        if (0xffff < iVar1) {
          return;
        }
        if (iVar21 != 0) {
          if (((ulonglong)*(uint *)(plVar19 + 8) != plVar19[2]) &&
             (0x1f800 < (*(uint *)(plVar19 + 8) & 0xfffff800))) {
            return;
          }
          if (0 < iVar1) {
            iVar13 = *(int *)(param_1 + 0xa4);
            lVar23 = 0;
            if (iVar13 < 5) {
              lVar23 = lVar24;
            }
            if (2 < iVar13) {
              lVar7 = (longlong)iVar1 * 0x10 + 0x39;
            }
            lVar10 = lVar7 + 8;
            if (1 < iVar13) {
              lVar10 = lVar7;
            }
            if (lVar10 + lVar23 != *(longlong *)plVar19[6]) {
              return;
            }
          }
          bVar26 = SBORROW4(iVar1,1);
          bVar25 = false;
          if (iVar1 == 1) {
            iVar13 = *(int *)(param_1 + 0xa4);
            lVar7 = 0x49;
            if (iVar13 < 3) {
              lVar7 = 0x30;
            }
            lVar23 = lVar7 + 8;
            if (1 < iVar13) {
              lVar23 = lVar7;
            }
            lVar7 = 0;
            if (iVar13 < 5) {
              lVar7 = lVar24;
            }
            if (lVar7 + lVar23 + plVar19[1] != *(longlong *)(plVar19[6] + 8)) {
              return;
            }
            bVar26 = false;
            bVar25 = true;
          }
          if (!bVar25 && bVar26 == iVar1 + -1 < 0) {
            lVar7 = 1;
            plVar5 = (longlong *)plVar19[6];
            do {
              if (plVar5[2] != plVar5[1]) {
                return;
              }
              lVar7 = lVar7 + 1;
              plVar5 = plVar5 + 2;
            } while (lVar7 < iVar1);
          }
        }
        iVar12 = 8;
        iVar13 = iVar12;
        if (plVar19[2] < 0x100000000) {
          iVar13 = 4;
        }
        iVar6 = 0xc;
        if (lVar24 < 0x100000000) {
          iVar6 = iVar12;
        }
        iVar22 = iVar22 + iVar6 + iVar13;
        if (iVar21 != 0) {
          if (plVar19[1] < 0x100000000) {
            iVar12 = 4;
          }
          iVar22 = iVar22 + iVar12;
          if (1 < iVar1) {
            iVar22 = iVar22 + iVar1 * 4;
          }
        }
        lVar18 = lVar18 + 1;
        plVar19 = plVar19 + 9;
      } while (lVar18 < *(int *)(param_1 + 0x180));
    }
    lVar24 = 8;
    lVar18 = 4;
    uVar8 = operator_new((longlong)iVar22);
    *(undefined8 *)param_2 = uVar8;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (longlong)*(int *)(param_1 + 0x180);
    uVar8 = SUB168(ZEXT816(4) * auVar4,0);
    if (SUB168(ZEXT816(4) * auVar4,8) != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    uVar8 = operator_new(uVar8);
    *(undefined8 *)(param_2 + 2) = uVar8;
    iVar22 = 0;
    puVar9 = *(uint **)param_2;
    if (0 < *(int *)(param_1 + 0x180)) {
      lVar23 = 0;
      lVar7 = 0;
      do {
        puVar20 = (uint *)(*(longlong *)(param_1 + 0xe0) + lVar7);
        *(int *)(lVar23 + *(longlong *)(param_2 + 2)) = (int)puVar9 - *param_2;
        bVar11 = (byte)puVar20[0x11];
        if ((bVar11 & 2) != 0) {
          *(undefined4 *)(lVar23 + *(longlong *)(param_2 + 2)) = 0xffffffff;
          bVar11 = (byte)puVar20[0x11];
        }
        lVar10 = *(longlong *)puVar20;
        lVar2 = *(longlong *)(puVar20 + 4);
        lVar3 = *(longlong *)(puVar20 + 2);
        uVar14 = 0;
        if (lVar10 < 0x100000000) {
          uVar14 = 0x80000000;
        }
        uVar15 = 0;
        if (lVar2 < 0x100000000) {
          uVar15 = 0x40000000;
        }
        uVar16 = 0;
        if (lVar3 < 0x100000000) {
          uVar16 = 0x20000000;
        }
        puVar17 = puVar9 + 1;
        *puVar9 = (puVar20[6] << 0x11 | puVar20[0xe]) << 6 | (bVar11 & 1) << 0x16 | uVar14 | uVar15
                  | uVar16 | puVar20[0x10] >> 0xb;
        if (lVar10 < 0x100000000) {
          *puVar17 = *puVar20;
          lVar10 = lVar18;
        }
        else {
          *(longlong *)puVar17 = *(longlong *)puVar20;
          lVar10 = lVar24;
        }
        puVar17 = (uint *)((longlong)puVar17 + lVar10);
        if (lVar2 < 0x100000000) {
          *puVar17 = puVar20[4];
          lVar10 = lVar18;
        }
        else {
          *(longlong *)puVar17 = *(longlong *)(puVar20 + 4);
          lVar10 = lVar24;
        }
        puVar9 = (uint *)(lVar10 + (longlong)puVar17);
        if (puVar20[6] != 0) {
          if (lVar3 < 0x100000000) {
            *puVar9 = puVar20[2];
            lVar10 = lVar18;
          }
          else {
            *(longlong *)puVar9 = *(longlong *)(puVar20 + 2);
            lVar10 = lVar24;
          }
          puVar9 = (uint *)((longlong)puVar9 + lVar10);
          if ((1 < (int)puVar20[0xe]) && (iVar21 = 0, 0 < (int)puVar20[0xe])) {
            lVar10 = 0;
            do {
              iVar21 = iVar21 + 1;
              *puVar9 = *(int *)(lVar10 + 8 + *(longlong *)(puVar20 + 0xc)) -
                        *(int *)(lVar10 + *(longlong *)(puVar20 + 0xc));
              puVar9 = puVar9 + 1;
              lVar10 = lVar10 + 0x10;
            } while (iVar21 < (int)puVar20[0xe]);
          }
        }
        iVar22 = iVar22 + 1;
        lVar7 = lVar7 + 0x48;
        lVar23 = lVar23 + 4;
      } while (iVar22 < *(int *)(param_1 + 0x180));
    }
  }
  return;
}



// FUNCTION 142a3c1e0 FUN_142a3c1e0 body=2614 status=ok
// SIG undefined FUN_142a3c1e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142a3c1e0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  void *_Src;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  undefined1 *puVar13;
  undefined2 *puVar14;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  undefined2 *puVar18;
  char cVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  uint uVar23;
  uint uVar24;
  longlong *plVar25;
  longlong *plVar26;
  uint *puVar27;
  ulonglong uVar28;
  int iVar29;
  ulonglong *puVar30;
  longlong lVar31;
  undefined1 auStack_248 [32];
  char local_228;
  undefined2 *local_220;
  undefined8 local_218;
  int local_210;
  uint local_208;
  uint uStack_204;
  uint *puStack_200;
  undefined4 local_1f8;
  undefined8 uStack_1f4;
  undefined4 uStack_1ec;
  ulonglong local_1e8;
  longlong local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  ulonglong *local_1c0;
  int local_1b8;
  undefined4 local_1b4;
  ulonglong *local_1b0;
  ulonglong *local_1a8;
  uint *local_1a0;
  longlong *local_198;
  undefined8 uStack_190;
  uint *local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  longlong *local_170;
  undefined8 uStack_168;
  uint *local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined1 local_148 [8];
  longlong *local_140;
  longlong local_138;
  longlong *local_130;
  undefined8 uStack_128;
  uint *puStack_120;
  undefined4 uStack_118;
  int iStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  ulonglong *local_108;
  undefined1 *local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  int local_c4;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [28];
  longlong local_8c;
  longlong local_84;
  int local_7c;
  longlong local_78;
  undefined2 *local_60;
  int local_58;
  undefined4 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  if (*(char *)(param_1 + 0x19a) == '\0') {
    puVar22 = (ulonglong *)0x0;
    plVar25 = (longlong *)(param_1 + 0x180);
    *param_3 = 0;
    local_1b8 = *(int *)plVar25;
    local_210 = 0;
    local_1c0 = (ulonglong *)0x0;
    local_1b4 = 0;
    local_1d8 = param_3;
    local_1c8 = plVar25;
    local_140 = param_2;
    local_138 = param_1;
    if (0 < local_1b8) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_1c0,0);
    }
    local_1d0 = (longlong *)(param_1 + 0x100);
    local_1a0 = (uint *)(param_1 + 0x110);
    local_1e8 = 0xffffffffffffffff;
    puVar12 = local_1c0;
    do {
      cVar19 = '\0';
      local_228 = '\0';
      local_f8 = 0;
      local_f0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 0xffffffff;
      local_c4 = 0;
      local_b8 = (undefined1 *)0x0;
      local_b0 = 0;
      if (0 < (int)*plVar25) {
        FUN_142a4c5d0(&local_f8);
      }
      uVar16 = local_1a0[6];
      local_208 = 0;
      local_1b0 = (ulonglong *)0x0;
      uStack_204 = 1;
      uStack_1f4 = 0;
      if (uVar16 != 0) {
        puVar27 = (uint *)local_1d0[4];
        if ((uint *)local_1d0[4] == (uint *)0x0) {
          puVar27 = local_1a0;
        }
        uVar24 = *puVar27;
        puVar30 = puVar22;
        puVar11 = puVar22;
        uVar23 = 0;
        while (uVar24 == 0) {
          iVar6 = (int)puVar30;
          uVar23 = (int)puVar11 + 0x20;
          puVar11 = (ulonglong *)(ulonglong)uVar23;
          local_208 = iVar6 + 1;
          puVar30 = (ulonglong *)(ulonglong)local_208;
          uStack_1f4 = (ulonglong)uVar23 << 0x20;
          if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
          goto LAB_142a3c3b0;
          uVar24 = puVar27[(longlong)iVar6 + 1];
        }
        uStack_204 = -uVar24 & uVar24;
        iVar6 = 0x1f;
        if (uStack_204 != 0) {
          for (; uStack_204 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        if (uStack_204 == 0) {
          iVar6 = 0x20;
        }
        else {
          iVar6 = 0x1f - iVar6;
        }
        iVar6 = (uVar23 - iVar6) + 0x1f;
        uStack_1f4._4_4_ = (undefined4)((ulonglong)uStack_1f4 >> 0x20);
        uStack_1f4 = CONCAT44(uStack_1f4._4_4_,iVar6);
        if ((int)uVar16 < iVar6) {
LAB_142a3c3b0:
          uStack_1f4 = CONCAT44(uStack_1f4._4_4_,uVar16);
        }
      }
      local_1f8 = 0xffffffff;
      uStack_190 = CONCAT44(uStack_204,local_208);
      local_130 = local_1d0;
      uStack_118 = 0xffffffff;
      iStack_114 = (int)uStack_1f4;
      uStack_110 = uStack_1f4._4_4_;
      uStack_10c = uStack_1ec;
      uStack_180 = CONCAT44((int)uStack_1f4,0xffffffff);
      local_198 = local_1d0;
      local_178 = uStack_1f4._4_4_;
      uStack_174 = uStack_1ec;
      puVar30 = puVar22;
      iVar6 = (int)uStack_1f4;
      puStack_200 = local_1a0;
      local_188 = local_1a0;
      uStack_128 = uStack_190;
      puStack_120 = local_1a0;
      if ((int)uStack_1f4 < (int)uVar16) {
        do {
          local_1e0 = (longlong)iVar6 * 0x68;
          local_170 = (longlong *)(*local_198 + 0x10 + local_1e0);
          local_208 = 0;
          iVar6 = (int)local_170[5];
          puStack_200 = (uint *)(local_170 + 2);
          uStack_204 = 1;
          uStack_1f4 = 0;
          if (iVar6 != 0) {
            puVar27 = (uint *)local_170[4];
            if ((uint *)local_170[4] == (uint *)0x0) {
              puVar27 = puStack_200;
            }
            uVar16 = *puVar27;
            puVar11 = puVar22;
            puVar20 = puVar22;
            uVar24 = 0;
            while (uVar16 == 0) {
              iVar7 = (int)puVar11;
              uVar24 = (int)puVar20 + 0x20;
              puVar20 = (ulonglong *)(ulonglong)uVar24;
              local_208 = iVar7 + 1;
              puVar11 = (ulonglong *)(ulonglong)local_208;
              uStack_1f4 = (ulonglong)uVar24 << 0x20;
              if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7)
              goto LAB_142a3c4d0;
              uVar16 = puVar27[(longlong)iVar7 + 1];
            }
            uStack_204 = -uVar16 & uVar16;
            iVar7 = 0x1f;
            if (uStack_204 != 0) {
              for (; uStack_204 >> iVar7 == 0; iVar7 = iVar7 + -1) {
              }
            }
            if (uStack_204 == 0) {
              iVar7 = 0x20;
            }
            else {
              iVar7 = 0x1f - iVar7;
            }
            iVar7 = (uVar24 - iVar7) + 0x1f;
            uStack_1f4._4_4_ = (undefined4)((ulonglong)uStack_1f4 >> 0x20);
            uStack_1f4 = CONCAT44(uStack_1f4._4_4_,iVar7);
            if (iVar6 < iVar7) {
LAB_142a3c4d0:
              uStack_1f4 = CONCAT44(uStack_1f4._4_4_,iVar6);
            }
          }
          local_1f8 = 0xffffffff;
          uStack_168 = CONCAT44(uStack_204,local_208);
          uStack_118 = 0xffffffff;
          iStack_114 = (int)uStack_1f4;
          uStack_110 = uStack_1f4._4_4_;
          uStack_10c = uStack_1ec;
          uStack_158 = CONCAT44((int)uStack_1f4,0xffffffff);
          local_150 = uStack_1f4._4_4_;
          uStack_14c = uStack_1ec;
          local_160 = puStack_200;
          local_130 = local_170;
          uStack_128 = uStack_168;
          puStack_120 = puStack_200;
          if ((int)uStack_1f4 < iVar6) {
            local_1a8 = puVar12 + (longlong)puVar30 * 2;
            iVar6 = (int)uStack_1f4;
            do {
              plVar25 = local_170;
              lVar17 = *local_198;
              lVar31 = (longlong)iVar6 * 0x20;
              lVar1 = *local_170;
              iVar6 = *(int *)(lVar1 + 8 + lVar31);
              puVar12 = (ulonglong *)(ulonglong)(iVar6 - 1);
              if (iVar6 == 0) {
                puVar12 = puVar22;
              }
              if ((*(int *)(lVar17 + 8 + local_1e0) != 0) || (iVar6 = 2, (int)puVar12 == -1)) {
                iVar6 = 1;
              }
              local_220 = (undefined2 *)0x0;
              iVar6 = iVar6 + (int)puVar12;
              iVar7 = *(int *)(lVar17 + 8 + local_1e0);
              _Src = *(void **)(lVar17 + local_1e0);
              local_218 = CONCAT44(local_218._4_4_,iVar7);
              if ((iVar7 == 0) && (iVar6 == 0)) {
                local_218 = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_220,iVar7 + iVar6,0);
                _guard_xfg_dispatch_icall_nop(local_220,_Src,(longlong)iVar7 * 2);
              }
              FString::PathAppend(&local_220,*(undefined8 *)(lVar1 + lVar31),puVar12);
              FString::ToLowerInline(&local_220);
              if ((int)local_218 == 0) {
                puVar14 = &DAT_143f3eda8;
                iVar6 = 0;
              }
              else {
                puVar14 = local_220;
                iVar6 = (int)local_218 + -1;
              }
              local_1e8 = FFnv::MemFnv64(puVar14,iVar6 * 2,*local_1d8);
              param_2 = local_140;
              puVar30 = (ulonglong *)((longlong)local_1b0 + 1);
              *local_1a8 = local_1e8;
              *(undefined4 *)(local_1a8 + 1) = *(undefined4 *)(lVar31 + 0x10 + *plVar25);
              local_1a8 = local_1a8 + 2;
              iVar6 = (int)(local_1e8 >> 0x20);
              if ((int)local_140[1] != *(int *)((longlong)local_140 + 0x34)) {
                plVar9 = (longlong *)local_140[8];
                if ((longlong *)local_140[8] == (longlong *)0x0) {
                  plVar9 = local_140 + 7;
                }
                iVar7 = *(int *)((longlong)plVar9 +
                                ((longlong)(iVar6 * 0x17 + (int)local_1e8) &
                                (longlong)(int)local_140[9] - 1U) * 4);
                if (iVar7 != -1) {
                  do {
                    puVar12 = (ulonglong *)((longlong)iVar7 * 0x68 + *local_140);
                    if (*puVar12 == local_1e8) {
                      if (iVar7 != -1) goto LAB_142a3c6a1;
                      break;
                    }
                    iVar7 = (int)puVar12[0xc];
                  } while (iVar7 != -1);
                }
              }
              puVar12 = puVar22;
LAB_142a3c6a1:
              puVar11 = puVar12 + 1;
              if (puVar12 == (ulonglong *)0x0) {
                puVar11 = puVar22;
              }
              if ((int)local_f0 != local_c4) {
                puVar13 = local_c0;
                if (local_b8 != (undefined1 *)0x0) {
                  puVar13 = local_b8;
                }
                iVar6 = *(int *)(puVar13 +
                                (longlong)(int)(iVar6 * 0x17 + (int)local_1e8 & local_b0 - 1U) * 4);
                while (iVar6 != -1) {
                  lVar17 = (longlong)iVar6 * 0x68;
                  if (*(ulonglong *)(lVar17 + local_f8) == local_1e8) {
                    puVar12 = (ulonglong *)(lVar17 + local_f8);
                    if (iVar6 != -1) goto LAB_142a3c725;
                    break;
                  }
                  iVar6 = *(int *)(lVar17 + 0x60 + local_f8);
                }
              }
              puVar12 = puVar22;
LAB_142a3c725:
              puVar20 = puVar12 + 1;
              if (puVar12 == (ulonglong *)0x0) {
                puVar20 = puVar22;
              }
              local_1b0 = puVar30;
              FPakEntry::FPakEntry
                        (local_a8,*(longlong *)(local_138 + 0xe0) +
                                  (longlong)*(int *)(lVar31 + 0x10 + *plVar25) * 0x48);
              puVar14 = local_220;
              iVar6 = (int)local_218;
              local_60 = local_220;
              local_220 = (undefined2 *)0x0;
              local_58 = (int)local_218;
              local_54 = local_218._4_4_;
              local_218 = 0;
              if ((puVar11 != (ulonglong *)0x0) &&
                 (((*(longlong *)((longlong)puVar11 + 0x1c) != local_8c ||
                   (*(longlong *)((longlong)puVar11 + 0x24) != local_84)) ||
                  (*(int *)((longlong)puVar11 + 0x2c) != local_7c)))) {
                puVar18 = &DAT_143f3eda8;
                if (iVar6 != 0) {
                  puVar18 = puVar14;
                }
                if ((int)puVar11[10] == 0) {
                  puVar14 = &DAT_143f3eda8;
                }
                else {
                  puVar14 = (undefined2 *)puVar11[9];
                }
                iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar18);
                if (iVar6 == 0) goto LAB_142a3c7e3;
LAB_142a3c89d:
                local_228 = '\x01';
                if (local_60 != (undefined2 *)0x0) {
                  FMemory::Free();
                }
                if (local_78 != 0) {
                  FMemory::Free();
                }
                cVar19 = '\x01';
                if (local_220 != (undefined2 *)0x0) {
                  FMemory::Free();
                }
                break;
              }
LAB_142a3c7e3:
              if ((puVar20 != (ulonglong *)0x0) &&
                 (((*(longlong *)((longlong)puVar20 + 0x1c) != local_8c ||
                   (*(longlong *)((longlong)puVar20 + 0x24) != local_84)) ||
                  (*(int *)((longlong)puVar20 + 0x2c) != local_7c)))) goto LAB_142a3c89d;
              local_108 = &local_1e8;
              local_100 = local_a8;
              FUN_142a31a60(&local_f8,local_148,&local_108,0);
              if (local_60 != (undefined2 *)0x0) {
                FMemory::Free();
              }
              if (local_78 != 0) {
                FMemory::Free();
              }
              if (local_220 != (undefined2 *)0x0) {
                FMemory::Free();
              }
              uStack_158 = CONCAT44(uStack_158._4_4_,(uint)uStack_158 & ~uStack_168._4_4_);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_168);
              iVar6 = uStack_158._4_4_;
              cVar19 = local_228;
            } while (uStack_158._4_4_ < (int)local_160[6]);
          }
          uStack_180 = CONCAT44(uStack_180._4_4_,(uint)uStack_180 & ~uStack_190._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_190);
          puVar12 = local_1c0;
          iVar6 = uStack_180._4_4_;
        } while (uStack_180._4_4_ < (int)local_188[6]);
        param_3 = local_1d8;
        if (cVar19 == '\0') goto LAB_142a3c912;
        local_210 = local_210 + 1;
        *local_1d8 = *local_1d8 + 1;
      }
      else {
LAB_142a3c912:
        FUN_142a31370(param_2,&local_f8);
      }
      puVar12 = local_1c0;
      plVar25 = local_1c8;
      iVar6 = local_210;
      qsort(local_1c0,(longlong)(int)*local_1c8,0x10,(_PtFuncCompare *)&LAB_142a3d9f0);
      local_b0 = 0;
      if (local_b8 != (undefined1 *)0x0) {
        FMemory::Free();
      }
      FUN_142a40eb0(&local_f8,0);
      if (local_d8 != 0) {
        FMemory::Free();
      }
      if (local_f8 != 0) {
        FMemory::Free();
      }
      puVar30 = puVar12;
      if (cVar19 == '\0') {
        if (iVar6 < 10) {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (longlong)(int)*plVar25;
          uVar10 = SUB168(ZEXT816(4) * auVar3,0);
          uVar21 = 0xffffffffffffffff;
          if (SUB168(ZEXT816(4) * auVar3,8) != 0) {
            uVar10 = 0xffffffffffffffff;
          }
          lVar17 = operator_new(uVar10);
          param_3[1] = lVar17;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (longlong)(int)*plVar25;
          uVar10 = SUB168(ZEXT816(8) * auVar4,0);
          if (SUB168(ZEXT816(8) * auVar4,8) != 0) {
            uVar10 = 0xffffffffffffffff;
          }
          lVar17 = operator_new(uVar10);
          param_3[2] = lVar17;
          plVar9 = param_3 + 3;
          lVar17 = operator_new(0x404);
          *plVar9 = lVar17;
          iVar6 = (int)*plVar25;
          if (0 < iVar6) {
            uVar21 = 0xffffffffffffffff;
            puVar11 = puVar22;
            puVar20 = puVar22;
            do {
              uVar2 = *puVar12;
              uVar28 = uVar2 >> 0x38;
              bVar5 = (byte)(uVar2 >> 0x38);
              uVar16 = (uint)bVar5;
              iVar7 = (int)puVar11;
              if (uVar16 != (uint)uVar21) {
                iVar29 = (uint)uVar21 + 1;
                uVar24 = (uVar16 - iVar29) + 1;
                iVar6 = iVar29;
                if ((iVar29 <= (int)uVar16) && (3 < uVar24)) {
                  plVar25 = (longlong *)(*plVar9 + (longlong)iVar29 * 4);
                  if ((plVar9 < plVar25) || ((longlong *)(*plVar9 + uVar28 * 4) < plVar9)) {
                    uVar24 = uVar24 & 0x80000003;
                    if ((int)uVar24 < 0) {
                      uVar24 = (uVar24 - 1 | 0xfffffffc) + 1;
                    }
                    iVar8 = bVar5 - uVar24;
                    do {
                      iVar6 = iVar6 + 4;
                    } while (iVar6 <= iVar8);
                    iVar29 = (iVar8 - iVar29) + 4;
                    for (lVar17 = ((longlong)((int)(iVar29 + (iVar29 >> 0x1f & 3U)) >> 2) &
                                  0xfffffffffffffffU) << 2; lVar17 != 0; lVar17 = lVar17 + -1) {
                      *(int *)plVar25 = iVar7;
                      plVar25 = (longlong *)((longlong)plVar25 + 4);
                    }
                  }
                }
                for (lVar17 = (longlong)iVar6; uVar21 = uVar28, lVar17 <= (longlong)uVar28;
                    lVar17 = lVar17 + 1) {
                  *(int *)(*plVar9 + lVar17 * 4) = iVar7;
                }
              }
              puVar11 = (ulonglong *)(ulonglong)(iVar7 + 1U);
              *(ulonglong *)((longlong)puVar20 + param_3[2]) = uVar2;
              puVar20 = puVar20 + 1;
              puVar30 = puVar12 + 1;
              puVar12 = puVar12 + 2;
              *(int *)((longlong)puVar22 + param_3[1]) = (int)*puVar30;
              puVar22 = (ulonglong *)((longlong)puVar22 + 4);
              iVar6 = (int)*local_1c8;
              plVar25 = local_1c8;
              puVar30 = local_1c0;
              local_1e8 = uVar21;
            } while ((int)(iVar7 + 1U) < iVar6);
          }
          iVar29 = (int)uVar21 + 1;
          iVar7 = iVar29;
          if ((iVar29 < 0x101) && (3 < 0x101U - iVar29)) {
            plVar26 = (longlong *)(*plVar9 + (longlong)iVar29 * 4);
            plVar15 = (longlong *)(*plVar9 + 0x400);
            if (((plVar25 < plVar26) || (plVar15 < plVar25)) &&
               ((plVar9 < plVar26 || (plVar15 < plVar9)))) {
              uVar16 = 0x101U - iVar29 & 0x80000003;
              if ((int)uVar16 < 0) {
                uVar16 = (uVar16 - 1 | 0xfffffffc) + 1;
              }
              do {
                iVar7 = iVar7 + 4;
              } while (iVar7 < (int)(0x101 - uVar16));
              iVar29 = ((0x101 - uVar16) - iVar29) + 3;
              for (lVar17 = ((longlong)((int)(iVar29 + (iVar29 >> 0x1f & 3U)) >> 2) &
                            0xfffffffffffffffU) << 2; lVar17 != 0; lVar17 = lVar17 + -1) {
                *(int *)plVar26 = iVar6;
                plVar26 = (longlong *)((longlong)plVar26 + 4);
              }
            }
          }
          if ((longlong)iVar7 < 0x101) {
            lVar17 = (longlong)iVar7 * 4;
            do {
              *(int *)(lVar17 + *plVar9) = (int)*plVar25;
              lVar17 = lVar17 + 4;
            } while (lVar17 < 0x404);
          }
          uVar21 = 0;
        }
        else {
          uVar21 = 1;
        }
        goto LAB_142a3cbc9;
      }
    } while (iVar6 < 10);
    uVar21 = 1;
LAB_142a3cbc9:
    if (puVar30 != (ulonglong *)0x0) {
      FMemory::Free(puVar30);
    }
  }
  else {
    uVar21 = local_48 & 0xffffffffffffff00;
  }
  return uVar21;
}



// FUNCTION 142a3cc30 FUN_142a3cc30 body=84 status=ok
// SIG undefined FUN_142a3cc30(void)

undefined8 FUN_142a3cc30(undefined8 *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_142a42720(*param_1,*param_2,param_1[6]);
  if (uVar1 < *(ulonglong *)param_1[2]) {
    *(ulonglong *)param_1[2] = uVar1;
    *(undefined2 *)param_1[3] = *(undefined2 *)(param_1 + 4);
    *(ulonglong *)param_1[5] = (*(ulonglong *)param_1[2] & 0xffffffffffff) - 1;
  }
  return 1;
}



// FUNCTION 142a3cc90 FUN_142a3cc90 body=142 status=ok
// SIG undefined FUN_142a3cc90(void)

undefined8 FUN_142a3cc90(longlong *param_1,uint *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar1 = param_1[1];
  lVar3 = (longlong)(int)(~*(uint *)(*param_1 + 0xfc) & *param_2);
  lVar2 = *(longlong *)(*param_1 + 0xd8);
  uVar5 = *(ulonglong *)(lVar2 + lVar3 * 0x28) & 0xffffffffffff;
  uVar6 = uVar5;
  if ((longlong)uVar5 <= (longlong)uVar1) {
    uVar6 = uVar1;
  }
  lVar4 = *(longlong *)(lVar2 + 8 + lVar3 * 0x28) + uVar5;
  if ((longlong)(uVar1 + param_1[2]) <= lVar4) {
    lVar4 = uVar1 + param_1[2];
  }
  *(longlong *)param_1[3] = *(longlong *)param_1[3] + (lVar4 - uVar6);
  _guard_xfg_dispatch_icall_nop
            ((void *)((param_1[4] - param_1[1]) + uVar6),
             (void *)((*(longlong *)(lVar2 + lVar3 * 0x28 + 0x10) - uVar5) + uVar6),lVar4 - uVar6);
  return 1;
}



// FUNCTION 142a3cd50 Call body=49 status=ok
// SIG undefined Call(void)

undefined8
UE4Function_Private::
TFunctionRefCaller<<lambda_6469f621753980ca24ee48a17c4bd35a>,bool___cdecl(unsigned_int)>::Call
          (undefined8 *param_1,undefined4 *param_2)

{
  MaskInterval<FPakPrecacher::FCacheBlock>
            (*param_2,*param_1,param_1[1],param_1[2],*(undefined4 *)(param_1 + 3),param_1[4]);
  return 1;
}



// FUNCTION 142a3cda0 Call body=97 status=ok
// SIG undefined Call(void)

undefined8
UE4Function_Private::
TFunctionRefCaller<<lambda_7188017827b2fe358499d880c9d8f9a5>,bool___cdecl(unsigned_int)>::Call
          (longlong *param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  piVar1 = (int *)(*(longlong *)(*param_1 + 0xd8) + 0x18 +
                  (longlong)(int)(~*(uint *)(*param_1 + 0xfc) & uVar2) * 0x28);
  *piVar1 = *piVar1 + 1;
  MaskInterval<FPakPrecacher::FCacheBlock>
            (uVar2,*param_1 + 0xd8,param_1[2],param_1[3],*(undefined4 *)(param_1[1] + 0x20),
             DAT_146b29928);
  return 1;
}



// FUNCTION 142a3ce20 FUN_142a3ce20 body=65 status=ok
// SIG undefined FUN_142a3ce20(void)

undefined8 FUN_142a3ce20(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)(int)(~*(uint *)(lVar1 + 0xfc) & *param_2);
  if (*(int *)(*(longlong *)(lVar1 + 0xd8) + 0x18 + lVar2 * 0x28) == 0) {
    FUN_142a3d850(lVar1,*(longlong *)(lVar1 + 0xd8) + lVar2 * 0x28);
    return 1;
  }
  return 0;
}



// FUNCTION 142a3cee0 CanStartAnotherTask body=55 status=ok
// SIG undefined CanStartAnotherTask(void)

ulonglong FPakPrecacher::CanStartAnotherTask(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  uVar2 = 0;
  if (0 < DAT_14667ae90) {
    plVar3 = (longlong *)(param_1 + 0x160);
    do {
      if (*plVar3 == 0) {
        if (-1 < (int)uVar2) {
          uVar2 = HasRequestsAtStatus(param_1,1);
          return uVar2;
        }
        break;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      plVar3 = plVar3 + 4;
    } while ((int)uVar1 < DAT_14667ae90);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 142a3cf20 CancelImpl body=124 status=ok
// SIG undefined CancelImpl(void)

void FPakProcessedReadRequest::CancelImpl(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x98);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if ((iVar2 == 0) && (*(char *)(param_1 + 0xa0) != '\0')) {
    *(undefined1 *)(param_1 + 0xa1) = 1;
    FPakAsyncReadFileHandle::HandleCanceledRequest
              (*(undefined8 *)(param_1 + 0x78),param_1 + 0xa8,param_1,
               *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88));
    if (*(int *)(param_1 + 0xb0) == *(int *)(param_1 + 0xdc)) {
      *(undefined1 *)(param_1 + 0xa0) = 0;
      IAsyncReadRequest::SetDataComplete(param_1);
      *(undefined1 *)(param_1 + 0x71) = 1;
    }
  }
  return;
}



// FUNCTION 142a3cfa0 FUN_142a3cfa0 body=78 status=ok
// SIG undefined FUN_142a3cfa0(void)

void FUN_142a3cfa0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x78;
  if (param_1 == 0) {
    lVar1 = 0;
  }
  FPakPrecacher::CancelRequest(DAT_146b298e8,lVar1);
  *(undefined1 *)(param_1 + 0xc5) = 0;
  if (*(char *)(param_1 + 0xc4) != '\0') {
    *(undefined1 *)(param_1 + 0xc4) = 0;
    IAsyncReadRequest::SetDataComplete(param_1);
    *(undefined1 *)(param_1 + 0x71) = 1;
  }
  return;
}



// FUNCTION 142a3cff0 CancelRequest body=318 status=ok
// SIG undefined CancelRequest(void)

void FPakPrecacher::CancelRequest(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  BOOL BVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  FUN_142a3d920(param_1);
  iVar8 = 0;
  if (*(int *)(param_1 + 0x108) != *(int *)(param_1 + 0x134)) {
    lVar1 = *(longlong *)(param_2 + 0x10);
    lVar5 = *(longlong *)(param_1 + 0x140);
    if (*(longlong *)(param_1 + 0x140) == 0) {
      lVar5 = param_1 + 0x138;
    }
    iVar4 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                             (longlong)*(int *)(param_1 + 0x148) - 1U) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x100);
      do {
        lVar7 = (longlong)iVar4;
        if (*(longlong *)(lVar5 + lVar7 * 0x18) == lVar1) {
          if (((iVar4 != -1) && (lVar5 = lVar5 + lVar7 * 0x18, lVar5 != 0)) &&
             (*(int *)(lVar5 + 8) != 0)) {
            FUN_142a4bf50(param_1);
          }
          break;
        }
        iVar4 = *(int *)(lVar5 + 0x10 + lVar7 * 0x18);
      } while (iVar4 != -1);
    }
  }
  if (0 < DAT_14667ae90) {
    plVar6 = (longlong *)(param_1 + 0x160);
    do {
      if (*plVar6 == 0) {
        if ((-1 < iVar8) && (cVar2 = HasRequestsAtStatus(param_1,1), cVar2 != '\0')) {
          FUN_142a3b050(param_1);
        }
        break;
      }
      iVar8 = iVar8 + 1;
      plVar6 = plVar6 + 4;
    } while (iVar8 < DAT_14667ae90);
  }
                    /* WARNING: Could not recover jumptable at 0x000142a3d127. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 142a3d130 FUN_142a3d130 body=954 status=ok
// SIG undefined FUN_142a3d130(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_142a3d130(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  longlong *local_118;
  longlong local_108 [3];
  longlong local_f0;
  int local_e4;
  longlong *local_d8;
  int local_bc;
  longlong local_b0;
  undefined8 local_98;
  longlong lStack_90;
  longlong local_88;
  int local_80;
  longlong local_7c;
  longlong local_74;
  int local_6c;
  longlong local_68;
  undefined8 local_60;
  int local_58;
  undefined2 local_54 [6];
  longlong local_48;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar4 = (longlong *)FUN_142a43790(param_1,local_120,0);
  plVar4 = (longlong *)*plVar4;
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_118 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar1 = (int *)((longlong)local_118 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_118 + 8))(local_118,1);
      }
    }
  }
  iVar9 = 0;
  iVar8 = 0;
  FUN_142a37830(local_108,param_1,1);
  if (local_e4 < *(int *)(local_f0 + 0x18)) {
    do {
      lVar5 = (longlong)*(int *)((longlong)local_bc * 0x20 + 0x10 + *local_d8);
      puVar2 = (undefined8 *)(*(longlong *)(local_108[0] + 0xe0) + lVar5 * 0x48);
      iVar8 = iVar9;
      if ((*(byte *)(*(longlong *)(local_108[0] + 0xe0) + 0x44 + lVar5 * 0x48) & 2) == 0) {
        uVar6 = FMemory::Malloc(puVar2[1],0);
        (**(code **)(*plVar4 + 0xa8))(plVar4,*puVar2);
        iVar8 = *(int *)(param_1 + 0xa4);
        local_98 = 0xffffffffffffffff;
        lStack_90 = 0;
        local_7c = 0;
        local_74 = 0;
        local_6c = 0;
        local_88 = 0;
        local_80 = 0;
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        local_54[0] = 0;
        FUN_1404c11e0(plVar4,&local_98);
        FUN_1404c11e0(plVar4,&lStack_90);
        FUN_1404c11e0(plVar4,&local_88);
        plVar7 = (longlong *)plVar4[1];
        if ((int *)plVar7[1] < (int *)*plVar7 + 1) {
          (**(code **)(*plVar4 + 0x50))(plVar4,&local_80,4);
          if ((*(byte *)((longlong)plVar4 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(plVar4,&local_80,4);
          }
        }
        else {
          local_80 = *(int *)*plVar7;
          *plVar7 = *plVar7 + 4;
        }
        if (iVar8 < 2) {
          FUN_1404c11e0(plVar4,local_128);
        }
        (**(code **)(*plVar4 + 0x50))(plVar4,&local_7c,0x14);
        if (2 < iVar8) {
          if (local_80 != 0) {
            FUN_142a39540(plVar4,&local_68);
          }
          plVar7 = (longlong *)plVar4[1];
          if ((undefined1 *)plVar7[1] < (undefined1 *)*plVar7 + 1) {
            (**(code **)(*plVar4 + 0x50))(plVar4,local_54,1);
          }
          else {
            local_54[0] = CONCAT11(local_54[0]._1_1_,*(undefined1 *)*plVar7);
            *plVar7 = *plVar7 + 1;
          }
          plVar7 = (longlong *)plVar4[1];
          if ((int *)plVar7[1] < (int *)*plVar7 + 1) {
            (**(code **)(*plVar4 + 0x50))(plVar4,&local_58,4);
            if ((*(byte *)((longlong)plVar4 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(plVar4,&local_58,4);
            }
          }
          else {
            local_58 = *(int *)*plVar7;
            *plVar7 = *plVar7 + 4;
          }
        }
        if (((((lStack_90 == puVar2[1]) && (local_88 == puVar2[2])) &&
             (local_80 == *(int *)(puVar2 + 3))) &&
            ((((char)local_54[0] == *(char *)((longlong)puVar2 + 0x44) &&
              (local_58 == *(int *)(puVar2 + 8))) &&
             ((local_7c == *(longlong *)((longlong)puVar2 + 0x1c) &&
              ((local_74 == *(longlong *)((longlong)puVar2 + 0x24) &&
               (local_6c == *(int *)((longlong)puVar2 + 0x2c))))))))) &&
           ((int)local_60 == *(int *)(puVar2 + 7))) {
          plVar7 = (longlong *)puVar2[6];
          if ((int)local_60 != 0) {
            lVar5 = local_68 - (longlong)plVar7;
            iVar8 = (int)local_60;
            do {
              if ((*(longlong *)(lVar5 + (longlong)plVar7) != *plVar7) ||
                 (*(longlong *)(lVar5 + 8 + (longlong)plVar7) != plVar7[1])) goto LAB_142a3d411;
              plVar7 = plVar7 + 2;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          bVar3 = false;
        }
        else {
LAB_142a3d411:
          bVar3 = true;
        }
        iVar8 = iVar9 + 1;
        if (!bVar3) {
          iVar8 = iVar9;
        }
        (**(code **)(*plVar4 + 0x50))(plVar4,uVar6,puVar2[1]);
        FSHA1::HashBuffer(uVar6,*(undefined4 *)(puVar2 + 1),&local_48);
        if (((local_48 != *(longlong *)((longlong)puVar2 + 0x1c)) ||
            (local_40 != *(longlong *)((longlong)puVar2 + 0x24))) ||
           (local_38 != *(int *)((longlong)puVar2 + 0x2c))) {
          iVar8 = iVar8 + 1;
        }
        FMemory::Free(uVar6);
        if (local_68 != 0) {
          FMemory::Free();
        }
      }
      FUN_142a396d0(local_108);
      iVar9 = iVar8;
    } while (local_e4 < *(int *)(local_f0 + 0x18));
  }
  if (local_b0 != 0) {
    FMemory::Free();
  }
  return iVar8 == 0;
}



// FUNCTION 142a3d4f0 FUN_142a3d4f0 body=854 status=ok
// SIG undefined FUN_142a3d4f0(void)

void FUN_142a3d4f0(void)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  byte local_res8 [8];
  char local_res10 [16];
  longlong local_res20;
  undefined4 uVar10;
  undefined1 local_a8 [8];
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  uVar4 = FPlatformFileManager::Get();
  lVar5 = FPlatformFileManager::FindPlatformFile(uVar4,L"PakFile");
  if (lVar5 != 0) {
    FUN_142a4b8a0(lVar5,0);
    plVar6 = (longlong *)FUN_14164bd40();
    plVar7 = (longlong *)FMemory::Realloc(0,0x20);
    local_90 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      plVar7[1] = lVar5;
      *plVar7 = (longlong)&PTR_GetPoolName_145361838;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[3] = lVar8;
      *plVar7 = (longlong)&PTR_GetPoolName_145361880;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
      (**(code **)(*plVar7 + 0x20))(plVar7,local_a8);
      iVar2 = (int)plVar6[1];
      *(int *)(plVar6 + 1) = iVar2 + 1;
      if (*(int *)((longlong)plVar6 + 0xc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar2);
      }
      puVar9 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar6);
      *puVar9 = plVar7;
      *(undefined4 *)(puVar9 + 1) = 2;
    }
    FGenericPlatformMisc::LowLevelOutputDebugStringf(L"Checking Pak Config\n");
    uVar4 = FCommandLine::Get();
    local_res8[0] = FParse::Param(uVar4,L"unloadpakentryfilenames");
    FConfigCacheIni::GetBool
              (DAT_1468b6148,&DAT_14535db48,L"UnloadPakEntryFilenamesIfPossible",local_res8,
               &DAT_1468e2360);
    uVar4 = FCommandLine::Get();
    bVar3 = FParse::Param(uVar4,L"unloadpakentries");
    local_res8[0] = local_res8[0] | bVar3;
    uVar4 = FCommandLine::Get();
    local_res10[0] = FParse::Param(uVar4,L"shrinkpakentries");
    uVar10 = 1;
    FConfigCacheIni::GetBool
              (DAT_1468b6148,&DAT_14535dbd8,L"ShrinkPakEntriesMemoryUsage",local_res10,
               &DAT_1468e2360);
    if (((local_res8[0] != 0) || (local_res10[0] != '\0')) && (DAT_146b2996c == '\0')) {
      DAT_146b2996c = '\x01';
      plVar6 = (longlong *)operator_new(0x58);
      local_98 = (longlong *)0x0;
      if (plVar6 != (longlong *)0x0) {
        *(undefined4 *)(plVar6 + 1) = 1;
        *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
        *plVar6 = (longlong)&PTR_FUN_145361798;
        FUN_142a38b70(plVar6 + 2,lVar5,local_res8[0],local_res10[0]);
        local_98 = plVar6;
      }
      local_a0 = local_98 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_a0,local_a0,local_a0);
      if (local_res8[0] != 0) {
        uVar10 = 1;
        FConfigCacheIni::GetArray
                  (DAT_1468b6148,&DAT_14535dc58,
                   L"DirectoryRootsToKeepInMemoryWhenUnloadingPakEntryFilenames",local_a0 + 1,
                   &DAT_1468e2360);
      }
      plVar7 = local_98;
      plVar6 = local_a0;
      if (((char)*local_a0 != '\0') || (*(char *)((longlong)local_a0 + 1) != '\0')) {
        if (local_98 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_98 + 1) = (int)local_98[1] + 1;
          UNLOCK();
        }
        local_48 = 0;
        local_38 = 0;
        puVar9 = (undefined8 *)FUN_140438ef0(0x18,local_68);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &PTR_FUN_14461b758;
          puVar9[1] = plVar6;
          puVar9[2] = plVar7;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
            UNLOCK();
          }
        }
        local_78[0] = &LAB_142a3cea0;
        FUN_140983350(&local_res20,local_78,local_res8[0],0,CONCAT44(uVar10,0xff));
        if (local_res20 != 0) {
          LOCK();
          piVar1 = (int *)(local_res20 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(local_res20);
          }
        }
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar7 + 1;
          lVar5 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
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
      }
      plVar6 = local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_98 + 1;
        lVar5 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_98)(local_98);
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
    }
  }
  return;
}



// FUNCTION 142a3d850 FUN_142a3d850 body=200 status=ok
// SIG undefined FUN_142a3d850(void)

void FUN_142a3d850(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(longlong *)(param_2 + 0x10) != 0) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) - *(longlong *)(param_2 + 8);
    FMemory::Free(*(undefined8 *)(param_2 + 0x10));
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  iVar1 = *(int *)(param_1 + 0xf0);
  uVar2 = *(uint *)(param_1 + 0xfc);
  uVar3 = *(uint *)(param_2 + 0x1c);
  *(int *)(param_1 + 0xf0) = iVar1 + 1;
  if (*(int *)(param_1 + 0xf4) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0xe8,iVar1);
  }
  *(uint *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar1 * 4) = ~uVar2 & uVar3;
  if (*(int *)(param_1 + 0xf0) + 1 == *(int *)(param_1 + 0xe0)) {
    *(undefined4 *)(param_1 + 0xe0) = 0;
    if (*(int *)(param_1 + 0xe4) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0xd8,0);
    }
    *(undefined4 *)(param_1 + 0xf0) = 0;
    if (*(int *)(param_1 + 0xf4) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0xe8,0);
    }
    TIntervalTreeAllocator<FPakPrecacher::FCacheBlock>::Alloc(param_1 + 0xd8);
  }
  return;
}



// FUNCTION 142a3d920 FUN_142a3d920 body=198 status=ok
// SIG undefined FUN_142a3d920(void)

void FUN_142a3d920(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (*(int *)(param_1 + 0x270) == 0) {
    uVar2 = 0;
    plVar3 = *(longlong **)(param_1 + 0x260);
    uVar4 = (longlong)*(int *)(param_1 + 0x268) & 0x1fffffffffffffff;
    if (plVar3 + *(int *)(param_1 + 0x268) < plVar3) {
      uVar4 = uVar2;
    }
    if (uVar4 != 0) {
      do {
        plVar1 = (longlong *)*plVar3;
        if (*(char *)((longlong)plVar1 + 0x71) == '\0') {
          (**(code **)(*plVar1 + 8))(plVar1,0);
        }
        (**(code **)*plVar1)(plVar1,1);
        plVar3 = plVar3 + 1;
        uVar2 = uVar2 + 1;
      } while (uVar2 != uVar4);
    }
    *(undefined4 *)(param_1 + 0x268) = 0;
    if (*(int *)(param_1 + 0x26c) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo((ulonglong *)(param_1 + 0x260),0);
    }
  }
  return;
}



// FUNCTION 142a3da10 FUN_142a3da10 body=859 status=ok
// SIG undefined FUN_142a3da10(void)

void FUN_142a3da10(longlong param_1,char param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  int *piVar13;
  int iVar14;
  uint *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 in_stack_ffffffffffffff60;
  undefined8 uVar19;
  undefined4 uVar20;
  uint *local_78;
  undefined8 local_70;
  longlong local_68;
  uint **local_60;
  undefined1 *local_58;
  longlong *plStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  
  lVar6 = *(longlong *)(param_1 + 0xd8);
  lVar5 = (longlong)(int)(param_4 & ~*(uint *)(param_1 + 0xfc));
  uVar1 = *(uint *)(lVar6 + 0x1c + lVar5 * 0x28);
  lVar7 = lVar6 + lVar5 * 0x28;
  uVar16 = *(ulonglong *)(lVar6 + lVar5 * 0x28);
  uVar18 = uVar16 & 0xffffffffffff;
  lVar11 = (uVar16 >> 0x30) * 0x98 + *(longlong *)(param_1 + 0xa0);
  lVar5 = (longlong)(int)(uVar1 & ~*(uint *)(param_1 + 0xfc));
  uVar16 = *(ulonglong *)(lVar6 + lVar5 * 0x28) & 0xffffffffffff;
  uVar19 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffff60 >> 0x20),
                    *(undefined4 *)(lVar11 + 0x18));
  RemoveFromIntervalTree<FPakPrecacher::FCacheBlock>
            (lVar11 + 0x78,param_1 + 0xd8,(longlong)(int)uVar1,uVar16,
             (uVar16 - 1) + *(longlong *)(lVar6 + 8 + lVar5 * 0x28),uVar19,
             *(undefined4 *)(lVar11 + 0x1c));
  if ((*(int *)(lVar7 + 0x18) == 0) || (param_2 != '\0')) {
    FMemory::Free(param_3);
    FUN_142a3d850(param_1,lVar7);
  }
  else {
    *(undefined8 *)(lVar7 + 0x10) = param_3;
    lVar6 = *(longlong *)(lVar7 + 8) + *(longlong *)(param_1 + 0x40);
    *(longlong *)(param_1 + 0x40) = lVar6;
    if (*(longlong *)(param_1 + 0x48) < lVar6) {
      *(longlong *)(param_1 + 0x48) = lVar6;
    }
    *(undefined4 *)(lVar7 + 0x24) = 1;
    AddToIntervalTree<FPakPrecacher::FCacheBlock>
              (lVar11 + 0x7c,param_1 + 0xd8,*(undefined4 *)(lVar7 + 0x1c),
               *(undefined4 *)(lVar11 + 0x18),*(undefined4 *)(lVar11 + 0x1c));
    piVar13 = (int *)(lVar11 + 0x74);
    local_78 = (uint *)0x0;
    local_70 = 0;
    iVar14 = 5;
    while( true ) {
      if (*piVar13 != 0) {
        local_60 = &local_78;
        plStack_50 = &local_68;
        local_58 = &LAB_142a3ce10;
        local_48 = 0x42a3ce10;
        uStack_44 = 1;
        uVar19 = *(undefined8 *)(lVar11 + 0x10);
        local_68 = param_1;
        uStack_40 = plStack_50;
        MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FPakInRequest>
                  (lVar11 + (longlong)iVar14 * 0xc + 0x38,param_1 + 0xb0,uVar18,
                   *(longlong *)(lVar7 + 8) + -1 + uVar18,0,uVar19,*(undefined4 *)(lVar11 + 0x18),
                   *(undefined4 *)(lVar11 + 0x1c),&local_48);
      }
      uVar16 = 0;
      if (iVar14 == 0) break;
      iVar14 = iVar14 + -1;
      piVar13 = piVar13 + -3;
    }
    uVar18 = (ulonglong)((longlong)(local_78 + (int)local_70) + (3 - (longlong)local_78)) >> 2;
    if (local_78 + (int)local_70 < local_78) {
      uVar18 = uVar16;
    }
    if (uVar18 != 0) {
      plVar12 = (longlong *)(param_1 + 0xb0);
      puVar15 = local_78;
      do {
        uVar20 = (undefined4)((ulonglong)uVar19 >> 0x20);
        uVar1 = *puVar15;
        lVar7 = (longlong)(int)(~*(uint *)(param_1 + 0xd4) & uVar1) * 0x30 + *plVar12;
        *(undefined4 *)(lVar7 + 0x2c) = 0;
        iVar14 = *(int *)(lVar7 + 0x28);
        iVar2 = *(int *)(lVar11 + 0x18);
        iVar3 = *(int *)(lVar11 + 0x1c);
        iVar9 = (iVar3 - iVar2) + 1;
        if (((DAT_14667aeb8._4_4_ - (int)DAT_14667aeb8) + DAT_14667aec8 < iVar9) &&
           (DAT_14667aeb8._4_4_ < (int)DAT_14667aeb8 + iVar9)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
          ResizeTo(&DAT_14667aeb0);
        }
        puVar8 = (ulonglong *)
                 ((longlong)(int)(~*(uint *)(param_1 + 0xd4) & uVar1) * 0x30 + *plVar12);
        uVar17 = *puVar8 & 0xffffffffffff;
        uVar19 = CONCAT44(uVar20,iVar2);
        AddToIntervalTree_Dangerous<FPakPrecacher::FPakInRequest>
                  (lVar11 + ((longlong)iVar14 + 4) * 0xc,plVar12,uVar1,uVar17,
                   (uVar17 - 1) + puVar8[1],uVar19,iVar3);
        plVar10 = (longlong *)
                  ((longlong)(int)(~*(uint *)(param_1 + 0xd4) & uVar1) * 0x30 + *plVar12);
        if ((((*(int *)((longlong)plVar10 + 0x2c) == 0) &&
             (plVar4 = (longlong *)plVar10[2], plVar10[3] == plVar4[2])) &&
            (uVar1 == *(uint *)(plVar4 + 3))) && (*plVar10 == plVar4[1])) {
          (**(code **)(*plVar4 + 8))();
        }
        puVar15 = puVar15 + 1;
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar18);
    }
    if (local_78 != (uint *)0x0) {
      FMemory::Free(local_78);
    }
  }
  return;
}



// FUNCTION 142a3dd70 ConvertToAbsolutePathForExternalAppForWrite body=201 status=ok
// SIG undefined ConvertToAbsolutePathForExternalAppForWrite(void)

undefined8
FPakPlatformFile::ConvertToAbsolutePathForExternalAppForWrite
          (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined8 *local_res20;
  longlong local_18 [2];
  
  local_res20 = (undefined8 *)0x0;
  cVar2 = FUN_142a42000(param_1,param_3,&local_res20,0);
  puVar1 = local_res20;
  if (cVar2 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x168))(*(longlong **)(param_1 + 8),param_2,param_3)
    ;
  }
  else {
    puVar3 = (undefined8 *)FUN_142a3df10(param_1,local_18,param_3,local_res20);
    puVar4 = &DAT_143f3eda8;
    if (*(int *)(puVar3 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*puVar3;
    }
    if (*(int *)(puVar1 + 1) != 0) {
      puVar4 = (undefined2 *)*puVar1;
    }
    FString::PrintfImpl(param_2,L"Pak: %s/%s",puVar4,puVar5);
    if (local_18[0] != 0) {
      FMemory::Free();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 142a3de40 FUN_142a3de40 body=201 status=ok
// SIG undefined FUN_142a3de40(void)

undefined8 FUN_142a3de40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined8 *local_res20;
  longlong local_18 [2];
  
  local_res20 = (undefined8 *)0x0;
  cVar2 = FUN_142a42000(param_1,param_3,&local_res20,0);
  puVar1 = local_res20;
  if (cVar2 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),param_2,param_3)
    ;
  }
  else {
    puVar3 = (undefined8 *)FUN_142a3df10(param_1,local_18,param_3,local_res20);
    puVar4 = &DAT_143f3eda8;
    if (*(int *)(puVar3 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*puVar3;
    }
    if (*(int *)(puVar1 + 1) != 0) {
      puVar4 = (undefined2 *)*puVar1;
    }
    FString::PrintfImpl(param_2,L"Pak: %s/%s",puVar4,puVar5);
    if (local_18[0] != 0) {
      FMemory::Free();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 142a3df10 FUN_142a3df10 body=330 status=ok
// SIG undefined FUN_142a3df10(void)

undefined8 * FUN_142a3df10(undefined8 param_1,undefined8 *param_2,short *param_3,longlong param_4)

{
  wchar_t *_Dest;
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined2 *local_28;
  uint local_20;
  undefined4 local_1c;
  
  local_28 = (undefined2 *)0x0;
  uVar8 = 0;
  local_1c = 0;
  puVar5 = (undefined2 *)0x0;
  uVar7 = uVar8;
  if ((param_3 != (short *)0x0) && (puVar5 = (undefined2 *)0x0, *param_3 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_3[lVar4] != 0);
    uVar2 = (int)lVar4 + 1;
    local_20 = uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    uVar7 = local_20;
    puVar5 = local_28;
    FGenericPlatformString::Memcpy(local_28,param_3,(longlong)(int)uVar2 * 2);
  }
  uVar2 = *(int *)(param_4 + 0xd8) - 1;
  if (*(int *)(param_4 + 0xd8) == 0) {
    uVar2 = 0;
  }
  uVar1 = uVar2 + 0x7fffffff;
  uVar6 = uVar7 - 1;
  if (uVar7 == 0) {
    uVar6 = uVar8;
  }
  if (uVar2 < uVar6) {
    uVar6 = uVar2;
  }
  uVar2 = uVar7 - 1;
  if (uVar7 == 0) {
    uVar2 = uVar8;
  }
  uVar8 = uVar6;
  if ((uVar6 <= uVar1) && (uVar8 = uVar2, uVar1 < uVar2)) {
    uVar8 = uVar1;
  }
  *param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  puVar9 = &DAT_143f3eda8;
  if (uVar7 != 0) {
    puVar9 = puVar5;
  }
  iVar3 = uVar8 - uVar6;
  uVar7 = iVar3 + 1;
  if (iVar3 == 0) {
    uVar7 = 0;
  }
  *(uint *)(param_2 + 1) = uVar7;
  if ((0 < (int)uVar7) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0), 0 < *(int *)(param_2 + 1))) {
    _Dest = (wchar_t *)*param_2;
    wcsncpy(_Dest,puVar9 + (int)uVar6,(longlong)iVar3);
    _Dest[iVar3] = L'\0';
  }
  if (puVar5 != (undefined2 *)0x0) {
    FMemory::Free(puVar5);
  }
  return param_2;
}



// FUNCTION 142a3e060 FUN_142a3e060 body=572 status=ok
// SIG undefined FUN_142a3e060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_142a3e060(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,byte param_5
             )

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  BOOL BVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_108 [32];
  byte local_e8;
  byte local_d8;
  undefined1 local_d7;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined4 local_7c;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_64;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x28);
  lVar8 = 0;
  local_d8 = param_5;
  local_8c = 0;
  local_84 = 0;
  local_7c = 0;
  uVar3 = 0;
  local_a8 = 0xffffffffffffffff;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_d7 = param_4;
  local_b8 = param_2;
  BVar4 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar4 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    iVar10 = 0;
    if (0 < iVar1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_d0,iVar1);
      lVar8 = local_d0;
      iVar10 = (int)local_c8;
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar10 * 0x10 + lVar8),*(void **)(param_1 + 0x10),
               (longlong)iVar1 << 4);
    local_c8 = CONCAT44(local_c8._4_4_,iVar10 + iVar1);
  }
  LeaveCriticalSection(lpCriticalSection);
  cVar2 = FPakPlatformFile::FindFileInPakFiles(&local_d0,param_3,&local_c0,&local_a8);
  if (lVar8 != 0) {
    FMemory::Free(lVar8);
  }
  plVar5 = *(longlong **)(param_1 + 8);
  if (cVar2 == '\0') {
    local_e8 = local_d8;
    uVar3 = (**(code **)(*plVar5 + 0x158))(plVar5,local_b8,param_3,local_d7);
    goto LAB_142a3e26a;
  }
  plVar5 = (longlong *)(**(code **)(*plVar5 + 200))(plVar5,local_b8,0,local_d8 & 1);
  plVar6 = (longlong *)FUN_142a3e340(param_1,param_3,local_c0,&local_a8);
  if (plVar5 == (longlong *)0x0) {
LAB_142a3e224:
    if (plVar6 != (longlong *)0x0) {
      (**(code **)*plVar6)(plVar6,1);
    }
  }
  else if (plVar6 != (longlong *)0x0) {
    uVar7 = FMemory::Malloc(0x10000,0);
    for (lVar8 = (**(code **)(*plVar6 + 0x40))(plVar6); 0 < lVar8; lVar8 = lVar8 - lVar9) {
      lVar9 = lVar8;
      if (0xffff < lVar8) {
        lVar9 = 0x10000;
      }
      cVar2 = (**(code **)(*plVar6 + 0x20))(plVar6,uVar7,lVar9);
      if ((cVar2 == '\0') ||
         (cVar2 = (**(code **)(*plVar5 + 0x28))(plVar5,uVar7,lVar9), cVar2 == '\0')) {
        uVar3 = 0;
        goto LAB_142a3e21c;
      }
    }
    uVar3 = 1;
LAB_142a3e21c:
    FMemory::Free(uVar7);
    goto LAB_142a3e224;
  }
  if (plVar5 != (longlong *)0x0) {
    (**(code **)*plVar5)(plVar5,1);
  }
LAB_142a3e26a:
  if (local_78 != 0) {
    FMemory::Free();
  }
  return uVar3;
}



// FUNCTION 142a3e2a0 FUN_142a3e2a0 body=66 status=ok
// SIG undefined FUN_142a3e2a0(void)

void FUN_142a3e2a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1453617a8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1453617f0;
  }
  return;
}



// FUNCTION 142a3e2f0 FUN_142a3e2f0 body=66 status=ok
// SIG undefined FUN_142a3e2f0(void)

void FUN_142a3e2f0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145361838;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_145361880;
  }
  return;
}



// FUNCTION 142a3e340 FUN_142a3e340 body=460 status=ok
// SIG undefined FUN_142a3e340(void)

undefined8 * FUN_142a3e340(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_18;
  longlong *local_10;
  
  FUN_142a43790(param_3,&local_18,*(undefined8 *)(param_1 + 8));
  if ((*(int *)(param_4 + 0x18) == 0) || (*(int *)(param_3 + 0xa4) < 3)) {
    bVar4 = *(byte *)(param_4 + 0x44);
    puVar5 = (undefined8 *)operator_new(0x80);
    if ((bVar4 & 1) == 0) {
      if (puVar5 != (undefined8 *)0x0) {
        ppuVar6 = &PTR_FUN_145361698;
        goto LAB_142a3e43a;
      }
    }
    else if (puVar5 != (undefined8 *)0x0) {
      ppuVar6 = &PTR_FUN_145361650;
LAB_142a3e43a:
      *puVar5 = ppuVar6;
      *(undefined1 *)(puVar5 + 1) = 1;
      puVar5[2] = 0;
      puVar5[3] = param_3;
      FPakEntry::FPakEntry(puVar5 + 4,param_4);
      puVar5[0xd] = local_18;
      puVar5[0xe] = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_10 + 0xc) = *(int *)((longlong)local_10 + 0xc) + 1;
        UNLOCK();
      }
      lVar8 = 0x30;
      if ((2 < *(int *)(puVar5[3] + 0xa4)) && (lVar8 = 0x35, *(int *)(puVar5 + 7) != 0)) {
        lVar8 = (longlong)*(int *)(puVar5 + 0xb) * 0x10 + 0x39;
      }
      lVar7 = lVar8 + 8;
      if (1 < *(int *)(puVar5[3] + 0xa4)) {
        lVar7 = lVar8;
      }
      puVar5[0xf] = lVar7 + puVar5[4];
      goto LAB_142a3e4bb;
    }
LAB_142a3e4b9:
    puVar5 = (undefined8 *)0x0;
  }
  else {
    bVar4 = *(byte *)(param_4 + 0x44);
    puVar5 = (undefined8 *)operator_new(0x78);
    if ((bVar4 & 1) == 0) {
      if (puVar5 == (undefined8 *)0x0) goto LAB_142a3e4b9;
      ppuVar6 = &PTR_FUN_145361608;
    }
    else {
      if (puVar5 == (undefined8 *)0x0) goto LAB_142a3e4b9;
      ppuVar6 = &PTR_FUN_1453615c0;
    }
    *puVar5 = ppuVar6;
    *(undefined1 *)(puVar5 + 1) = 1;
    puVar5[2] = 0;
    puVar5[3] = param_3;
    FPakEntry::FPakEntry(puVar5 + 4,param_4);
    puVar5[0xd] = local_18;
    puVar5[0xe] = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_10 + 0xc) = *(int *)((longlong)local_10 + 0xc) + 1;
      UNLOCK();
    }
  }
LAB_142a3e4bb:
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return puVar5;
}



// FUNCTION 142a3e510 FUN_142a3e510 body=372 status=ok
// SIG undefined FUN_142a3e510(void)

undefined8 * FUN_142a3e510(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  DWORD *pDVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong local_res8;
  longlong local_res10;
  
  plVar8 = (longlong *)0x0;
  iVar9 = 0;
  if (param_2 != 0) {
    iVar9 = *(int *)(param_2 + 0x28);
  }
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar4 = TlsGetValue(*pDVar3);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      plVar8 = plVar4;
    }
    TlsSetValue(*pDVar3,plVar8);
    plVar4 = plVar8;
  }
  plVar8 = (longlong *)plVar4[1];
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)*plVar4;
    if (plVar8 == (longlong *)0x0) {
      lVar5 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar3 + 2);
      plVar4[1] = lVar5;
      if (lVar5 == 0) {
        puVar6 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar4[1] = (longlong)puVar6;
        lVar5 = 0x1f;
        do {
          puVar2 = puVar6 + 0x20;
          *puVar6 = puVar2;
          lVar5 = lVar5 + -1;
          puVar6 = puVar2;
        } while (lVar5 != 0);
        *puVar2 = 0;
      }
      plVar8 = (longlong *)plVar4[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar4 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar4[1] = (longlong)plVar8;
      *(undefined4 *)(plVar4 + 2) = 0x20;
      *plVar4 = 0;
    }
  }
  else {
    iVar7 = (int)plVar4[2];
  }
  plVar4[1] = *plVar8;
  *(int *)(plVar4 + 2) = iVar7 + -1;
  plVar4 = (longlong *)FUN_1415914c0(&local_res8);
  *param_1 = plVar8;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  local_res10 = *plVar4;
  *plVar4 = 0;
  *plVar8 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar8 + 1) = 0xff;
  *(int *)((longlong)plVar8 + 0xc) = iVar9 + 1;
  *plVar8 = (longlong)&PTR_FUN_145361438;
  *(undefined1 *)(plVar8 + 4) = 0;
  plVar8[5] = local_res10;
  if (local_res8 != 0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 0x48);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      FGraphEvent::Recycle();
    }
  }
  return param_1;
}



// FUNCTION 142a3e690 CreateTask body=372 status=ok
// SIG undefined CreateTask(void)

undefined8 *
TGraphTask<FAsyncIOSignatureCheckTask>::CreateTask
          (undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  DWORD *pDVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong local_res8;
  longlong local_res10;
  
  plVar8 = (longlong *)0x0;
  iVar9 = 0;
  if (param_2 != 0) {
    iVar9 = *(int *)(param_2 + 0x28);
  }
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar4 = TlsGetValue(*pDVar3);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      plVar8 = plVar4;
    }
    TlsSetValue(*pDVar3,plVar8);
    plVar4 = plVar8;
  }
  plVar8 = (longlong *)plVar4[1];
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)*plVar4;
    if (plVar8 == (longlong *)0x0) {
      lVar5 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar3 + 2);
      plVar4[1] = lVar5;
      if (lVar5 == 0) {
        puVar6 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar4[1] = (longlong)puVar6;
        lVar5 = 0x1f;
        do {
          puVar2 = puVar6 + 0x20;
          *puVar6 = puVar2;
          lVar5 = lVar5 + -1;
          puVar6 = puVar2;
        } while (lVar5 != 0);
        *puVar2 = 0;
      }
      plVar8 = (longlong *)plVar4[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar4 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar4[1] = (longlong)plVar8;
      *(undefined4 *)(plVar4 + 2) = 0x20;
      *plVar4 = 0;
    }
  }
  else {
    iVar7 = (int)plVar4[2];
  }
  plVar4[1] = *plVar8;
  *(int *)(plVar4 + 2) = iVar7 + -1;
  plVar4 = (longlong *)FUN_1415914c0(&local_res8);
  *param_1 = plVar8;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  local_res10 = *plVar4;
  *plVar4 = 0;
  *plVar8 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar8 + 1) = 0xff;
  *(int *)((longlong)plVar8 + 0xc) = iVar9 + 1;
  *plVar8 = (longlong)&PTR_FUN_145361360;
  *(undefined1 *)(plVar8 + 5) = 0;
  plVar8[6] = local_res10;
  if (local_res8 != 0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 0x48);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      FGraphEvent::Recycle();
    }
  }
  return param_1;
}



// FUNCTION 142a3e810 FUN_142a3e810 body=558 status=ok
// SIG undefined FUN_142a3e810(void)

undefined8 FUN_142a3e810(longlong param_1,uint *param_2,ulonglong *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  longlong lVar9;
  ulonglong *puVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  uVar12 = *param_2;
  puVar10 = (ulonglong *)(param_2 + 1);
  *(uint *)(param_3 + 3) = uVar12 >> 0x17 & 0x3f;
  if ((int)uVar12 < 0) {
    *param_3 = (ulonglong)(uint)*puVar10;
    lVar5 = 4;
  }
  else {
    lVar5 = 8;
    *param_3 = *puVar10;
  }
  puVar10 = (ulonglong *)(lVar5 + (longlong)puVar10);
  if ((uVar12 >> 0x1e & 1) == 0) {
    lVar5 = 8;
    param_3[2] = *puVar10;
  }
  else {
    param_3[2] = (ulonglong)(uint)*puVar10;
    lVar5 = 4;
  }
  puVar10 = (ulonglong *)(lVar5 + (longlong)puVar10);
  if ((int)param_3[3] == 0) {
    param_3[1] = param_3[2];
  }
  else if ((uVar12 >> 0x1d & 1) == 0) {
    param_3[1] = *puVar10;
    puVar10 = puVar10 + 1;
  }
  else {
    uVar13 = *puVar10;
    puVar10 = (ulonglong *)((longlong)puVar10 + 4);
    param_3[1] = (ulonglong)(uint)uVar13;
  }
  bVar8 = *(byte *)((longlong)param_3 + 0x44) | 1;
  if ((uVar12 >> 0x16 & 1) == 0) {
    bVar8 = *(byte *)((longlong)param_3 + 0x44) & 0xfe;
  }
  uVar13 = 0;
  *(byte *)((longlong)param_3 + 0x44) = bVar8;
  uVar11 = 0;
  if ((int)param_3[3] == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = param_3[2];
    if (0xffff < (longlong)uVar6) {
      uVar6 = (ulonglong)((uVar12 & 0x3f) << 0xb);
    }
  }
  *(int *)(param_3 + 8) = (int)uVar6;
  uVar12 = uVar12 >> 6 & 0xffff;
  *(undefined4 *)(param_3 + 7) = 0;
  if (*(uint *)((longlong)param_3 + 0x3c) != uVar12) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3 + 6,uVar12);
    uVar11 = (uint)param_3[7];
  }
  if ((int)uVar11 < (int)uVar12) {
    *(uint *)(param_3 + 7) = uVar12;
    if (*(int *)((longlong)param_3 + 0x3c) < (int)uVar12) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3 + 6,uVar11);
    }
  }
  else if (((int)uVar12 < (int)uVar11) && (uVar12 != uVar11)) {
    *(uint *)(param_3 + 7) = uVar12;
    TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_3 + 6);
  }
  *(byte *)((longlong)param_3 + 0x44) = *(byte *)((longlong)param_3 + 0x44) & 0xfd;
  *(undefined1 *)((longlong)param_3 + 0x45) = 1;
  iVar1 = *(int *)(param_1 + 0xa4);
  uVar6 = uVar13;
  if (iVar1 < 5) {
    uVar6 = *param_3;
  }
  iVar2 = (int)param_3[7];
  uVar7 = (ulonglong)iVar2;
  if (iVar2 == 1) {
    plVar3 = (longlong *)param_3[6];
    lVar5 = 0x30;
    if ((2 < iVar1) && (lVar5 = 0x35, (int)param_3[3] != 0)) {
      lVar5 = 0x49;
    }
    lVar9 = lVar5 + 8;
    if (1 < iVar1) {
      lVar9 = lVar5;
    }
    *plVar3 = lVar9 + uVar6;
    uVar7 = param_3[1];
    plVar3[1] = lVar9 + uVar6 + uVar7;
  }
  else if (0 < iVar2) {
    lVar5 = 0x30;
    if ((2 < iVar1) && (lVar5 = 0x35, (int)param_3[3] != 0)) {
      lVar5 = uVar7 * 0x10 + 0x39;
    }
    lVar9 = lVar5 + 8;
    if (1 < iVar1) {
      lVar9 = lVar5;
    }
    lVar9 = lVar9 + uVar6;
    uVar6 = uVar13;
    if (0 < iVar2) {
      do {
        uVar4 = param_3[6];
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        uVar6 = uVar6 + 0x10;
        *(longlong *)((uVar4 - 0x10) + uVar6) = lVar9;
        uVar7 = (ulonglong)(uint)*puVar10;
        lVar9 = lVar9 + uVar7;
        *(longlong *)((uVar4 - 8) + uVar6) = lVar9;
        puVar10 = (ulonglong *)((longlong)puVar10 + 4);
      } while ((int)uVar12 < (int)param_3[7]);
    }
  }
  return CONCAT71((int7)(uVar7 >> 8),1);
}



// FUNCTION 142a3ea40 FUN_142a3ea40 body=157 status=ok
// SIG undefined FUN_142a3ea40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142a3ea40(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  plVar2 = (longlong *)FUN_14164bef0();
  if (((int)plVar2[1] != 0) && ((longlong *)*plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*plVar2 + 0x18))();
    if (cVar1 != '\0') {
      if ((int)plVar2[1] == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = (longlong *)*plVar2;
      }
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
    }
  }
  FAES::DecryptData(param_1,param_2,&local_38);
  return;
}



// FUNCTION 142a3eae0 DeleteDirectory body=65 status=ok
// SIG undefined DeleteDirectory(void)

ulonglong FPakPlatformFile::DeleteDirectory(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_142a3ecc0();
  if ((char)uVar1 != '\0') {
    return uVar1 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x000142a3eb1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe0))(*(longlong **)(param_1 + 8),param_2);
  return uVar1;
}



// FUNCTION 142a3eb30 FUN_142a3eb30 body=65 status=ok
// SIG undefined FUN_142a3eb30(void)

ulonglong FUN_142a3eb30(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_142a3ecc0();
  if ((char)uVar1 != '\0') {
    return uVar1 & 0xffffffffffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x000142a3eb6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x148))(*(longlong **)(param_1 + 8),param_2);
  return uVar1;
}



// FUNCTION 142a3eb80 DeleteFile body=212 status=ok
// SIG undefined DeleteFile(void)

ulonglong FPakPlatformFile::DeleteFile(longlong param_1,short *param_2)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong local_18;
  ulonglong local_10;
  
  uVar3 = FUN_142a42000(param_1,param_2,0,0);
  if ((char)uVar3 != '\0') {
    return uVar3 & 0xffffffffffffff00;
  }
  bVar2 = 0;
  local_18 = 0;
  local_10 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (param_2[lVar5] != 0);
    uVar4 = (int)lVar5 + 1;
    local_10 = (ulonglong)uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,param_2,(longlong)(int)uVar4 * 2);
  }
  cVar1 = FUN_142a45470(param_1,&local_18);
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (cVar1 != '\0') {
    bVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),param_2);
  }
  return (ulonglong)bVar2;
}



// FUNCTION 142a3ec60 FUN_142a3ec60 body=9 status=ok
// SIG undefined FUN_142a3ec60(void)

void FUN_142a3ec60(longlong param_1)

{
  FFindPolygonsAlgorithm::~FFindPolygonsAlgorithm(param_1 + 0x10);
  return;
}



// FUNCTION 142a3ec70 DirectoryExists body=65 status=ok
// SIG undefined DirectoryExists(void)

undefined8 FPakPlatformFile::DirectoryExists(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_142a3ecc0();
  if (cVar1 != '\0') {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000142a3ecaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))(*(longlong **)(param_1 + 8),param_2);
  return uVar2;
}



// FUNCTION 142a3ecc0 FUN_142a3ecc0 body=365 status=ok
// SIG undefined FUN_142a3ecc0(void)

undefined8 FUN_142a3ecc0(longlong param_1,short *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  BOOL BVar2;
  undefined2 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined2 *local_38;
  ulonglong local_30;
  ulonglong local_28;
  undefined8 local_20;
  
  uVar10 = 0;
  local_30 = 0;
  local_38 = (undefined2 *)0x0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (param_2[lVar5] != 0);
    uVar4 = (int)lVar5 + 1;
    local_30 = (ulonglong)uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar4 * 2);
  }
  FUN_1416781b0(&local_38);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x28);
  local_28 = 0;
  local_20 = 0;
  iVar9 = 0;
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  uVar8 = uVar10;
  if (iVar1 != 0) {
    if (0 < iVar1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_28,iVar1);
      uVar8 = local_28;
      iVar9 = (int)local_20;
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar9 * 0x10 + uVar8),*(void **)(param_1 + 0x10),
               (longlong)iVar1 << 4);
    iVar9 = iVar9 + iVar1;
  }
  LeaveCriticalSection(lpCriticalSection);
  if (0 < iVar9) {
    puVar6 = (undefined8 *)(uVar8 + 8);
    do {
      puVar3 = &DAT_143f3eda8;
      if ((int)local_30 != 0) {
        puVar3 = local_38;
      }
      lVar5 = FUN_142a41d50(*puVar6,puVar3);
      if (lVar5 != 0) {
        uVar7 = 1;
        goto LAB_142a3edeb;
      }
      uVar4 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar4;
      puVar6 = puVar6 + 2;
    } while ((int)uVar4 < iVar9);
  }
  uVar7 = 0;
LAB_142a3edeb:
  if (uVar8 != 0) {
    FMemory::Free(uVar8);
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 142a3ee30 DivideWithRemainder body=3871 status=ok
// SIG undefined DivideWithRemainder(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TBigInt<512,1>::DivideWithRemainder
               (ulonglong *param_1,undefined1 (*param_2) [16],ulonglong *param_3)

{
  uint *puVar1;
  byte bVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong uVar31;
  uint uVar32;
  ulonglong uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  undefined1 auStack_308 [32];
  ulonglong local_2e8;
  ulonglong local_2e0;
  ulonglong local_2d8;
  ulonglong local_2d0;
  ulonglong local_2c8;
  ulonglong local_2c0;
  ulonglong *local_2b8;
  int local_2b0;
  int local_2ac;
  ulonglong local_2a8;
  ulonglong local_2a0;
  ulonglong local_298;
  ulonglong local_290;
  ulonglong local_288;
  ulonglong local_280;
  ulonglong *local_278;
  uint uStack_26c;
  undefined1 local_268 [16];
  undefined1 local_258 [8];
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  ulonglong local_228;
  ulonglong uStack_220;
  ulonglong local_218;
  ulonglong uStack_210;
  ulonglong local_208;
  undefined8 uStack_200;
  uint local_1f8 [4];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  uint local_168 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  uVar27 = param_1[6];
  uVar43 = *(uint *)((longlong)param_1 + 0x34);
  uVar12 = param_1[7];
  uVar45 = *(uint *)((longlong)param_1 + 0x3c);
  local_2b8 = param_1;
  local_278 = param_3;
  local_268 = *param_2;
  local_238 = *(ulonglong *)param_2[3];
  local_248 = *(ulonglong *)param_2[2];
  uStack_240 = *(ulonglong *)(param_2[2] + 8);
  local_228 = *param_1;
  uStack_220 = param_1[1];
  local_208 = param_1[4];
  uStack_200 = param_1[5];
  _local_258 = param_2[1];
  local_1f8[0] = (uint)uVar27;
  local_1f8[1] = uVar43;
  local_1f8[2] = (uint)uVar12;
  local_218 = param_1[2];
  uStack_210 = param_1[3];
  uStack_230 = *(ulonglong *)(param_2[3] + 8);
  iVar20 = (*(uint *)(param_2[3] + 0xc) >> 0x1f ^ 1) * 2 + -1;
  local_2c0 = (ulonglong)uVar45;
  local_2b0 = iVar20;
  uVar6 = uVar45 >> 0x1f ^ 1;
  local_1f8[3] = uVar45;
  iVar25 = uVar6 * 2 + -1;
  local_2ac = iVar25;
  uVar24 = *(uint *)(param_2[3] + 0xc);
  if (iVar20 < 0) {
    Negate(local_268);
    uVar24 = uStack_230._4_4_;
  }
  uVar42 = (uint)uVar27;
  uVar44 = (uint)uVar12;
  if (uVar6 == 0) {
    Negate(&local_228);
    local_2c0 = (ulonglong)local_1f8[3];
    uVar42 = local_1f8[0];
    uVar43 = local_1f8[1];
    uVar44 = local_1f8[2];
    uVar45 = local_1f8[3];
  }
  if ((int)uVar24 < 0) {
    if (((local_2c0 >> 0x1f & 1) != 0) && (cVar5 = IsGreater(local_268,&local_228), cVar5 != '\0'))
    {
LAB_142a3f054:
      uVar27 = param_1[1];
      *param_3 = *param_1;
      param_3[1] = uVar27;
      uVar27 = param_1[3];
      param_3[2] = param_1[2];
      param_3[3] = uVar27;
      uVar27 = param_1[5];
      param_3[4] = param_1[4];
      param_3[5] = uVar27;
      uVar27 = param_1[7];
      param_3[6] = param_1[6];
      param_3[7] = uVar27;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      return;
    }
  }
  else {
    iVar13 = 0xf;
    lVar10 = 4;
    do {
      if (*(int *)((longlong)local_1f8 + lVar10 + 8) != *(int *)((longlong)&uStack_230 + lVar10))
      break;
      if (*(int *)((longlong)local_1f8 + lVar10 + 4) != *(int *)((longlong)&local_238 + lVar10 + 4))
      {
        iVar13 = iVar13 + -1;
        break;
      }
      if (*(int *)((longlong)local_1f8 + lVar10) != *(int *)((longlong)&local_238 + lVar10)) {
        iVar13 = iVar13 + -2;
        break;
      }
      if (*(int *)((longlong)&uStack_200 + lVar10 + 4) !=
          *(int *)((longlong)&uStack_240 + lVar10 + 4)) {
        iVar13 = iVar13 + -3;
        break;
      }
      lVar10 = lVar10 + -0x10;
      iVar13 = iVar13 + -4;
    } while (-0x39 < lVar10);
    if ((-1 < iVar13) &&
       (*(uint *)((longlong)&local_228 + (longlong)iVar13 * 4) <
        *(uint *)(local_268 + (longlong)iVar13 * 4))) goto LAB_142a3f054;
  }
  puVar3 = local_2b8;
  lVar10 = 0;
  while (*(int *)(local_268 + lVar10) == *(int *)((longlong)&local_228 + lVar10)) {
    lVar10 = lVar10 + 4;
    if (0x3f < lVar10) {
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
      uVar27 = CONCAT44(DAT_1461f611c,DAT_1461f6118);
      *param_1 = CONCAT44(DAT_1461f6114,DAT_1461f6110);
      param_1[1] = uVar27;
      uVar27 = CONCAT44(DAT_1461f612c,DAT_1461f6128);
      param_1[2] = CONCAT44(DAT_1461f6124,DAT_1461f6120);
      param_1[3] = uVar27;
      uVar27 = CONCAT44(DAT_1461f613c,DAT_1461f6138);
      param_1[4] = CONCAT44(DAT_1461f6134,DAT_1461f6130);
      param_1[5] = uVar27;
      uVar27 = CONCAT44(DAT_1461f614c,DAT_1461f6148);
      param_1[6] = CONCAT44(DAT_1461f6144,DAT_1461f6140);
      param_1[7] = uVar27;
      if (-1 < iVar20 * iVar25) {
        return;
      }
      Negate(param_1);
      return;
    }
  }
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  lVar10 = 0xf;
  iVar20 = 0xf;
  local_168[0] = DAT_1461f6110;
  local_168[1] = DAT_1461f6114;
  local_168[2] = DAT_1461f6118;
  local_168[3] = DAT_1461f611c;
  local_168[4] = DAT_1461f6120;
  local_168[5] = DAT_1461f6124;
  local_168[6] = DAT_1461f6128;
  local_168[7] = DAT_1461f612c;
  local_168[8] = DAT_1461f6130;
  local_168[9] = DAT_1461f6134;
  local_168[10] = DAT_1461f6138;
  local_168[0xb] = DAT_1461f613c;
  local_168[0xc] = DAT_1461f6140;
  local_168[0xd] = DAT_1461f6144;
  local_168[0xe] = DAT_1461f6148;
  local_168[0xf] = DAT_1461f614c;
  do {
    if (*(int *)((longlong)&local_228 + lVar10 * 4) != 0) {
      uVar6 = 0x1f;
      goto LAB_142a3f196;
    }
    iVar20 = iVar20 + -1;
    lVar10 = lVar10 + -1;
  } while (-1 < lVar10);
  iVar20 = -1;
  goto LAB_142a3f1a7;
  while (uVar6 = uVar6 - 1, -1 < (int)uVar6) {
LAB_142a3f196:
    if ((*(uint *)((longlong)&local_228 + (longlong)iVar20 * 4) >> (uVar6 & 0x1f) & 1) != 0) break;
  }
  iVar20 = iVar20 * 0x20 + uVar6;
LAB_142a3f1a7:
  iVar25 = 0xf;
  lVar10 = 0xf;
  do {
    if (*(int *)(local_268 + lVar10 * 4) != 0) {
      uVar6 = 0x1f;
      goto LAB_142a3f1d1;
    }
    iVar25 = iVar25 + -1;
    lVar10 = lVar10 + -1;
  } while (-1 < lVar10);
  iVar25 = -1;
LAB_142a3f1e1:
  uVar6 = iVar20 - iVar25;
  if (0 < (int)uVar6) {
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    if ((uVar6 & 0x1f) == 0) {
      lVar10 = (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5);
      if (lVar10 < 0x10) {
        lVar11 = 0xf;
        do {
          *(undefined4 *)((longlong)&local_1e8 + lVar11 * 4) =
               *(undefined4 *)(local_268 + lVar10 * -4 + lVar11 * 4);
          lVar11 = lVar11 + -1;
        } while (lVar10 <= lVar11);
      }
    }
    else {
      iVar20 = (int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5;
      bVar2 = (byte)uVar6;
      iVar25 = iVar20 + 1;
      uStack_1b0 = (ulonglong)
                   (uint)(*(int *)(local_268 + (longlong)(0x10 - iVar25) * 4) << (bVar2 & 0x1f)) <<
                   0x20;
      lVar10 = (longlong)(0xf - iVar25);
      if (-1 < 0xf - iVar25) {
        lVar11 = (longlong)iVar25;
        puVar18 = (uint *)((longlong)&local_1e8 + (lVar11 + lVar10) * 4);
        do {
          uVar24 = puVar18[-0x20 - lVar11];
          puVar1 = puVar18 + -1;
          puVar1[(iVar20 - lVar11) + 1] = puVar1[(iVar20 - lVar11) + 1] | uVar24 << (bVar2 & 0x1f);
          *puVar18 = *puVar18 | uVar24 >> (0x20 - bVar2 & 0x1f);
          lVar10 = lVar10 + -1;
          puVar18 = puVar1;
        } while (-1 < lVar10);
      }
    }
    uStack_250 = uStack_1d0;
    local_258 = (undefined1  [8])local_1d8;
    local_268._8_8_ = uStack_1e0;
    local_268._0_8_ = local_1e8;
    local_238 = local_1b8;
    uStack_230 = uStack_1b0;
    uVar27 = uStack_230;
    uStack_230._4_4_ = (uint)(uStack_1b0 >> 0x20);
    local_248 = local_1c8;
    uStack_240 = uStack_1c0;
    uVar24 = uStack_230._4_4_;
    uStack_230 = uVar27;
  }
  local_2e8 = CONCAT44(local_2e8._4_4_,local_268._12_4_);
  local_2e0 = CONCAT44(local_2e0._4_4_,local_268._8_4_);
  local_2c8 = CONCAT44(local_2c8._4_4_,local_268._4_4_);
  local_2d8 = CONCAT44(local_2d8._4_4_,uStack_250._4_4_);
  local_2d0 = CONCAT44(local_2d0._4_4_,(uint)uStack_250);
  uVar8 = uStack_250._4_4_;
  uVar14 = (uint)uStack_250;
  uVar22 = local_238._4_4_;
  uVar16 = (uint)local_238;
  uVar30 = uStack_240._4_4_;
  uVar32 = (uint)uStack_240;
  uVar26 = local_248._4_4_;
  uVar28 = (uint)local_248;
  uVar15 = local_258._4_4_;
  uVar23 = local_258._0_4_;
  uVar17 = (uint)uStack_230;
  do {
    uVar4 = local_268._0_4_;
    if ((int)uVar24 < 0) {
      if ((int)local_2c0 < 0) goto LAB_142a3f39c;
    }
    else {
      lVar11 = 0xf;
      lVar10 = 0;
      do {
        if (*(int *)((longlong)local_1f8 + lVar10 + 0xc) !=
            *(int *)((longlong)&uStack_230 + lVar10 + 4)) {
LAB_142a3f573:
          if ((-1 < lVar11) &&
             (*(uint *)((longlong)&local_228 + lVar11 * 4) <= *(uint *)(local_268 + lVar11 * 4)))
          goto LAB_142a3f39c;
          break;
        }
        if (*(int *)((longlong)local_1f8 + lVar10 + 8) != *(int *)((longlong)&uStack_230 + lVar10))
        {
          lVar11 = lVar11 + -1;
          goto LAB_142a3f573;
        }
        if (*(int *)((longlong)local_1f8 + lVar10 + 4) !=
            *(int *)((longlong)&local_238 + lVar10 + 4)) {
          lVar11 = lVar11 + -2;
          goto LAB_142a3f573;
        }
        if (*(int *)((longlong)local_1f8 + lVar10) != *(int *)((longlong)&local_238 + lVar10)) {
          lVar11 = lVar11 + -3;
          goto LAB_142a3f573;
        }
        lVar10 = lVar10 + -0x10;
        lVar11 = lVar11 + -4;
      } while (-1 < lVar11);
      uVar8 = (uint)local_2d8;
      uVar14 = (uint)local_2d0;
    }
    uVar24 = uVar24 * 2 | uVar17 >> 0x1f;
    uVar17 = uVar17 * 2 | uVar22 >> 0x1f;
    uStack_230 = CONCAT44(uVar24,uVar17);
    uVar22 = uVar22 * 2 | uVar16 >> 0x1f;
    uVar16 = uVar16 * 2 | uVar30 >> 0x1f;
    local_238 = CONCAT44(uVar22,uVar16);
    uVar30 = uVar30 * 2 | uVar32 >> 0x1f;
    uVar32 = uVar32 * 2 | uVar26 >> 0x1f;
    uStack_240 = CONCAT44(uVar30,uVar32);
    uVar26 = uVar26 * 2 | uVar28 >> 0x1f;
    uVar28 = uVar28 * 2 | uVar8 >> 0x1f;
    local_248 = CONCAT44(uVar26,uVar28);
    uVar8 = uVar8 * 2 | uVar14 >> 0x1f;
    uVar14 = uVar14 * 2 | uVar15 >> 0x1f;
    local_2d8 = CONCAT44(local_2d8._4_4_,uVar8);
    uVar15 = uVar15 * 2 | uVar23 >> 0x1f;
    local_2d0 = CONCAT44(local_2d0._4_4_,uVar14);
    uVar23 = uVar23 * 2 | (uint)local_2e8 >> 0x1f;
    uStack_250._0_4_ = uVar14;
    uStack_250._4_4_ = uVar8;
    local_258._4_4_ = uVar15;
    uVar9 = (uint)local_2e8 * 2 | (uint)local_2e0 >> 0x1f;
    local_2e8 = CONCAT44(local_2e8._4_4_,uVar9);
    local_258._0_4_ = uVar23;
    uVar38 = (uint)local_2e0 * 2 | (uint)local_2c8 >> 0x1f;
    local_2e0 = CONCAT44(local_2e0._4_4_,uVar38);
    local_268._8_4_ = uVar38;
    local_268._12_4_ = uVar9;
    uVar9 = (uint)local_2c8 * 2 | (uint)uVar4 >> 0x1f;
    local_2c8 = CONCAT44(local_2c8._4_4_,uVar9);
    local_268._4_4_ = uVar9;
    local_268._0_4_ = uVar4 * 2;
    uVar6 = uVar6 + 1;
  } while( true );
  while (uVar6 = uVar6 - 1, -1 < (int)uVar6) {
LAB_142a3f1d1:
    if ((*(uint *)(local_268 + (longlong)iVar25 * 4) >> (uVar6 & 0x1f) & 1) != 0) break;
  }
  iVar25 = iVar25 * 0x20 + uVar6;
  goto LAB_142a3f1e1;
LAB_142a3f39c:
  uVar24 = 0x1f;
  lVar10 = 9;
  auVar34._0_4_ = local_268._4_4_ << 0x1f;
  auVar34._4_4_ = local_268._8_4_ << 0x1f;
  auVar34._8_4_ = local_268._12_4_ << 0x1f;
  auVar34._12_4_ = local_258._0_4_ << 0x1f;
  local_268._4_4_ = (uint)local_268._4_4_ >> 1;
  local_268._0_4_ = (uint)local_268._0_4_ >> 1;
  local_268._8_4_ = (uint)local_268._8_4_ >> 1;
  local_268._12_4_ = (uint)local_268._12_4_ >> 1;
  auVar36._0_4_ = local_258._4_4_ << 0x1f;
  auVar36._4_4_ = (uint)uStack_250 << 0x1f;
  auVar36._8_4_ = uStack_250._4_4_ << 0x1f;
  auVar36._12_4_ = (uint)local_248 << 0x1f;
  local_258._4_4_ = (uint)local_258._4_4_ >> 1;
  local_258._0_4_ = (uint)local_258._0_4_ >> 1;
  uStack_250._0_4_ = (uint)uStack_250 >> 1;
  uStack_250._4_4_ = uStack_250._4_4_ >> 1;
  local_248 = CONCAT44(local_248._4_4_,(uint)local_248 >> 1);
  _local_258 = auVar36 | _local_258;
  local_268 = auVar34 | local_268;
  do {
    uVar17 = *(uint *)(local_268 + lVar10 * 4);
    (&uStack_26c)[lVar10] = (&uStack_26c)[lVar10] | uVar17 << 0x1f;
    *(uint *)(local_268 + lVar10 * 4) = uVar17 >> 1;
    lVar10 = lVar10 + 1;
  } while (lVar10 < 0x10);
  uVar21 = uVar6 - 1;
  uVar17 = DAT_1461f6110;
  uVar8 = DAT_1461f6114;
  uVar14 = DAT_1461f6118;
  uVar22 = DAT_1461f611c;
  uVar16 = DAT_1461f6120;
  uVar30 = DAT_1461f6124;
  uVar32 = DAT_1461f6128;
  uVar26 = DAT_1461f612c;
  uVar28 = DAT_1461f6130;
  uVar15 = DAT_1461f6134;
  uVar23 = DAT_1461f6138;
  uVar9 = DAT_1461f613c;
  uVar38 = DAT_1461f6140;
  uVar39 = DAT_1461f6144;
  uVar40 = DAT_1461f6148;
  uVar41 = DAT_1461f614c;
  if (uVar21 != 0) {
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    if ((uVar21 & 0x1f) == 0) {
      lVar10 = (longlong)((int)(uVar21 + ((int)uVar21 >> 0x1f & 0x1fU)) >> 5);
      if (lVar10 < 0x10) {
        lVar11 = 0xf;
        do {
          *(uint *)((longlong)&local_1e8 + lVar11 * 4) = local_168[lVar11 - lVar10];
          lVar11 = lVar11 + -1;
        } while (lVar10 <= lVar11);
      }
    }
    else {
      iVar20 = (int)((uVar6 - 2) + ((int)(uVar6 - 2) >> 0x1f & 0x1fU)) >> 5;
      bVar2 = (byte)uVar21;
      iVar25 = iVar20 + 1;
      uStack_1b0 = (ulonglong)(local_168[0x10 - iVar25] << (bVar2 & 0x1f)) << 0x20;
      lVar10 = (longlong)(0xf - iVar25);
      if (-1 < 0xf - iVar25) {
        lVar11 = (longlong)iVar25;
        puVar18 = (uint *)((longlong)&local_1e8 + (lVar11 + lVar10) * 4);
        do {
          uVar6 = puVar18[0x20 - lVar11];
          puVar1 = puVar18 + -1;
          puVar1[(iVar20 - lVar11) + 1] = puVar1[(iVar20 - lVar11) + 1] | uVar6 << (bVar2 & 0x1f);
          *puVar18 = *puVar18 | uVar6 >> (0x20 - bVar2 & 0x1f);
          lVar10 = lVar10 + -1;
          puVar18 = puVar1;
        } while (-1 < lVar10);
      }
    }
    local_168[0] = (uint)local_1e8;
    local_168[1] = local_1e8._4_4_;
    local_168[2] = (uint)uStack_1e0;
    local_168[3] = uStack_1e0._4_4_;
    local_168[4] = (uint)local_1d8;
    local_168[5] = local_1d8._4_4_;
    local_168[6] = (uint)uStack_1d0;
    local_168[7] = uStack_1d0._4_4_;
    local_168[8] = (uint)local_1c8;
    local_168[9] = local_1c8._4_4_;
    local_168[10] = (uint)uStack_1c0;
    local_168[0xb] = uStack_1c0._4_4_;
    local_168[0xc] = (uint)local_1b8;
    local_168[0xd] = local_1b8._4_4_;
    local_168[0xe] = (uint)uStack_1b0;
    local_168[0xf] = uStack_1b0._4_4_;
    uVar17 = (uint)local_1e8;
    uVar8 = local_1e8._4_4_;
    uVar14 = (uint)uStack_1e0;
    uVar22 = uStack_1e0._4_4_;
    uVar16 = (uint)local_1d8;
    uVar30 = local_1d8._4_4_;
    uVar32 = (uint)uStack_1d0;
    uVar26 = uStack_1d0._4_4_;
    uVar28 = (uint)local_1c8;
    uVar15 = local_1c8._4_4_;
    uVar23 = (uint)uStack_1c0;
    uVar9 = uStack_1c0._4_4_;
    uVar38 = (uint)local_1b8;
    uVar39 = local_1b8._4_4_;
    uVar40 = (uint)uStack_1b0;
    uVar41 = uStack_1b0._4_4_;
  }
  iVar20 = 0xf;
  uVar6 = 0;
  lVar10 = 0xf;
  do {
    if (local_168[lVar10] != 0) {
      goto LAB_142a3f753;
    }
    iVar20 = iVar20 + -1;
    lVar10 = lVar10 + -1;
  } while (-1 < lVar10);
  iVar20 = -1;
  goto LAB_142a3f765;
  while (uVar24 = uVar24 - 1, -1 < (int)uVar24) {
LAB_142a3f753:
    if ((local_168[iVar20] >> (uVar24 & 0x1f) & 1) != 0) break;
  }
  iVar20 = iVar20 * 0x20 + uVar24;
LAB_142a3f765:
  uVar24 = (uint)local_198;
  uVar21 = local_198._4_4_;
  uVar54 = (uint)uStack_190;
  uVar55 = uStack_190._4_4_;
  uVar50 = (uint)local_188;
  uVar51 = local_188._4_4_;
  uVar52 = (uint)uStack_180;
  uVar53 = uStack_180._4_4_;
  uVar46 = (uint)local_178;
  uVar47 = local_178._4_4_;
  uVar48 = (uint)uStack_170;
  uVar49 = uStack_170._4_4_;
  if (0 < (int)(iVar20 + 1U)) {
    uVar29 = uStack_220 & 0xffffffff;
    uVar27 = local_228 >> 0x20;
    uVar33 = local_228 & 0xffffffff;
    local_2b8 = (ulonglong *)(ulonglong)local_1f8[2];
    local_280 = (ulonglong)local_1f8[1];
    local_288 = (ulonglong)local_1f8[0];
    local_290 = uStack_200 >> 0x20;
    local_298 = uStack_200 & 0xffffffff;
    local_2a0 = local_208 >> 0x20;
    local_2a8 = local_208 & 0xffffffff;
    local_2e8 = uStack_210 >> 0x20;
    local_2e0 = uStack_210 & 0xffffffff;
    local_2d8 = local_218 >> 0x20;
    local_2d0 = local_218 & 0xffffffff;
    local_2c8 = uStack_220 >> 0x20;
    uVar31 = (ulonglong)(iVar20 + 1U);
    uVar12 = local_2c0;
    do {
      if ((uVar12 >> 0x1f & 1) == 0) {
        lVar11 = 0xf;
        lVar10 = 0;
        do {
          if (*(int *)((longlong)&uStack_230 + lVar10 + 4) !=
              *(int *)((longlong)local_1f8 + lVar10 + 0xc)) {
LAB_142a3f873:
            if ((-1 < lVar11) &&
               (*(uint *)((longlong)&local_228 + lVar11 * 4) <= *(uint *)(local_268 + lVar11 * 4)))
            goto LAB_142a3fba1;
            break;
          }
          if (*(int *)((longlong)&uStack_230 + lVar10) != *(int *)((longlong)local_1f8 + lVar10 + 8)
             ) {
            lVar11 = lVar11 + -1;
            goto LAB_142a3f873;
          }
          if (*(int *)((longlong)&local_238 + lVar10 + 4) !=
              *(int *)((longlong)local_1f8 + lVar10 + 4)) {
            lVar11 = lVar11 + -2;
            goto LAB_142a3f873;
          }
          if (*(int *)((longlong)&local_238 + lVar10) != *(int *)((longlong)local_1f8 + lVar10)) {
            lVar11 = lVar11 + -3;
            goto LAB_142a3f873;
          }
          lVar10 = lVar10 + -0x10;
          lVar11 = lVar11 + -4;
        } while (-1 < lVar11);
LAB_142a3f886:
        if (uVar6 != 0) {
          local_128 = 0;
          uStack_120 = 0;
          local_118 = 0;
          uStack_110 = 0;
          local_108 = 0;
          uStack_100 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          if ((uVar6 & 0x1f) == 0) {
            lVar10 = 0xf;
            lVar11 = (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5);
            if (lVar11 < 0x10) {
              do {
                puVar18 = local_168 + lVar10;
                lVar19 = lVar10 * 4;
                lVar10 = lVar10 + -1;
                *(uint *)((longlong)&local_128 + lVar11 * -4 + lVar19) = *puVar18;
              } while (lVar11 <= lVar10);
            }
          }
          else {
            iVar20 = (int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5;
            lVar11 = (longlong)iVar20;
            bVar2 = (byte)uVar6;
            lVar10 = (longlong)iVar20 + 1;
            local_128 = (ulonglong)(local_168[lVar11] >> (bVar2 & 0x1f));
            uVar12 = local_2c0;
            if (lVar10 < 0x10) {
              lVar19 = lVar10;
              puVar18 = (uint *)((longlong)&local_128 + (lVar10 - lVar11) * 4);
              do {
                uVar43 = puVar18[lVar11 + -0x10];
                *puVar18 = *puVar18 | uVar43 >> (bVar2 & 0x1f);
                lVar7 = lVar19 - lVar10;
                lVar19 = lVar19 + 1;
                puVar1 = (uint *)((longlong)&local_128 + lVar7 * 4);
                *puVar1 = *puVar1 | uVar43 << (0x20 - bVar2 & 0x1f);
                puVar18 = puVar18 + 1;
              } while (lVar19 < 0x10);
            }
          }
          uVar6 = 0;
          local_168[0] = (uint)local_128;
          local_168[1] = local_128._4_4_;
          local_168[2] = (uint)uStack_120;
          local_168[3] = uStack_120._4_4_;
          local_168[4] = (uint)local_118;
          local_168[5] = local_118._4_4_;
          local_168[6] = (uint)uStack_110;
          local_168[7] = uStack_110._4_4_;
          local_168[8] = (uint)local_108;
          local_168[9] = local_108._4_4_;
          local_168[10] = (uint)uStack_100;
          local_168[0xb] = uStack_100._4_4_;
          local_168[0xc] = (uint)local_f8;
          local_168[0xd] = local_f8._4_4_;
          local_168[0xe] = (uint)uStack_f0;
          local_168[0xf] = uStack_f0._4_4_;
          uVar17 = (uint)local_128;
          uVar8 = local_128._4_4_;
          uVar14 = (uint)uStack_120;
          uVar22 = uStack_120._4_4_;
          uVar16 = (uint)local_118;
          uVar30 = local_118._4_4_;
          uVar32 = (uint)uStack_110;
          uVar26 = uStack_110._4_4_;
          uVar28 = (uint)local_108;
          uVar15 = local_108._4_4_;
          uVar23 = (uint)uStack_100;
          uVar9 = uStack_100._4_4_;
          uVar38 = (uint)local_f8;
          uVar39 = local_f8._4_4_;
          uVar40 = (uint)uStack_f0;
          uVar41 = uStack_f0._4_4_;
        }
        local_1e8 = local_268._0_8_;
        uStack_1e0 = local_268._8_8_;
        local_1d8 = (ulonglong)local_258;
        uStack_1d0 = uStack_250;
        local_1c8 = local_248;
        uStack_1c0 = uStack_240;
        local_1b8 = local_238;
        uStack_1b0 = uStack_230;
        Negate(&local_1e8);
        uVar33 = (uVar33 & 0xffffffff) + (local_1e8 & 0xffffffff);
        uVar27 = (uVar27 & 0xffffffff) + (uVar33 >> 0x20) + (local_1e8 >> 0x20);
        local_228 = CONCAT44((int)uVar27,(int)uVar33);
        uVar29 = (uVar29 & 0xffffffff) + (uVar27 >> 0x20) + (uStack_1e0 & 0xffffffff);
        local_2c8 = (uVar29 >> 0x20) + (uStack_1e0 >> 0x20) + (local_2c8 & 0xffffffff);
        uStack_220 = CONCAT44((int)local_2c8,(int)uVar29);
        local_2d0 = (local_2c8 >> 0x20) + (local_1d8 & 0xffffffff) + (local_2d0 & 0xffffffff);
        local_2d8 = (local_2d0 >> 0x20) + (local_1d8 >> 0x20) + (local_2d8 & 0xffffffff);
        local_218 = CONCAT44((int)local_2d8,(int)local_2d0);
        local_2e0 = (local_2d8 >> 0x20) + (uStack_1d0 & 0xffffffff) + (local_2e0 & 0xffffffff);
        local_2e8 = (local_2e0 >> 0x20) + (uStack_1d0 >> 0x20) + (local_2e8 & 0xffffffff);
        uStack_210 = CONCAT44((int)local_2e8,(int)local_2e0);
        local_2a8 = (local_2e8 >> 0x20) + (local_1c8 & 0xffffffff) + (local_2a8 & 0xffffffff);
        local_2a0 = (local_2a8 >> 0x20) + (local_1c8 >> 0x20) + (local_2a0 & 0xffffffff);
        local_208 = CONCAT44((int)local_2a0,(int)local_2a8);
        local_298 = (local_2a0 >> 0x20) + (uStack_1c0 & 0xffffffff) + (local_298 & 0xffffffff);
        uVar24 = uVar24 | uVar16;
        uVar21 = uVar21 | uVar30;
        uVar54 = uVar54 | uVar32;
        uVar55 = uVar55 | uVar26;
        uVar50 = uVar50 | uVar28;
        uVar51 = uVar51 | uVar15;
        uVar52 = uVar52 | uVar23;
        uVar53 = uVar53 | uVar9;
        uVar46 = uVar46 | uVar38;
        uVar47 = uVar47 | uVar39;
        uVar48 = uVar48 | uVar40;
        uVar49 = uVar49 | uVar41;
        local_1a8 = CONCAT44(uVar8 | local_1a8._4_4_,uVar17 | (uint)local_1a8);
        uStack_1a0 = CONCAT44(uVar22 | uStack_1a0._4_4_,uVar14 | (uint)uStack_1a0);
        local_290 = (local_298 >> 0x20) + (uStack_1c0 >> 0x20) + (local_290 & 0xffffffff);
        local_198 = CONCAT44(uVar21,uVar24);
        uStack_190 = CONCAT44(uVar55,uVar54);
        uStack_200 = CONCAT44((int)local_290,(int)local_298);
        local_188 = CONCAT44(uVar51,uVar50);
        uStack_180 = CONCAT44(uVar53,uVar52);
        local_288 = (local_290 >> 0x20) + (local_1b8 & 0xffffffff) + (local_288 & 0xffffffff);
        local_178 = CONCAT44(uVar47,uVar46);
        uStack_170 = CONCAT44(uVar49,uVar48);
        local_1f8[0] = (uint)local_288;
        local_280 = (local_288 >> 0x20) + (local_1b8 >> 0x20) + (local_280 & 0xffffffff);
        local_1f8[1] = (uint)local_280;
        local_2b8 = (ulonglong *)
                    ((local_280 >> 0x20) + (uStack_1b0 & 0xffffffff) +
                    ((ulonglong)local_2b8 & 0xffffffff));
        local_1f8[2] = (uint)local_2b8;
        uVar12 = ((ulonglong)local_2b8 >> 0x20) + (uStack_1b0 >> 0x20) + (uVar12 & 0xffffffff);
        local_2c0 = uVar12;
        local_1f8[3] = (uint)uVar12;
      }
      else if (-1 < (longlong)uStack_230) goto LAB_142a3f886;
LAB_142a3fba1:
      lVar10 = 9;
      auVar35._0_4_ = local_268._4_4_ << 0x1f;
      auVar35._4_4_ = local_268._8_4_ << 0x1f;
      auVar35._8_4_ = local_268._12_4_ << 0x1f;
      auVar35._12_4_ = local_258._0_4_ << 0x1f;
      local_268._4_4_ = (uint)local_268._4_4_ >> 1;
      local_268._0_4_ = (uint)local_268._0_4_ >> 1;
      local_268._8_4_ = (uint)local_268._8_4_ >> 1;
      local_268._12_4_ = (uint)local_268._12_4_ >> 1;
      auVar37._0_4_ = local_258._4_4_ << 0x1f;
      auVar37._4_4_ = (uint)uStack_250 << 0x1f;
      auVar37._8_4_ = uStack_250._4_4_ << 0x1f;
      auVar37._12_4_ = (uint)local_248 << 0x1f;
      local_258._4_4_ = (uint)local_258._4_4_ >> 1;
      local_258._0_4_ = (uint)local_258._0_4_ >> 1;
      uStack_250._0_4_ = (uint)uStack_250 >> 1;
      uStack_250._4_4_ = uStack_250._4_4_ >> 1;
      local_248 = CONCAT44(local_248._4_4_,(uint)local_248 >> 1);
      _local_258 = auVar37 | _local_258;
      local_268 = auVar35 | local_268;
      do {
        uVar43 = *(uint *)(local_268 + lVar10 * 4);
        (&uStack_26c)[lVar10] = (&uStack_26c)[lVar10] | uVar43 << 0x1f;
        *(uint *)(local_268 + lVar10 * 4) = uVar43 >> 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < 0x10);
      uVar6 = uVar6 + 1;
      uVar31 = uVar31 - 1;
      uVar42 = local_1f8[0];
      uVar43 = local_1f8[1];
      uVar44 = local_1f8[2];
      uVar45 = local_1f8[3];
    } while (uVar31 != 0);
  }
  if (local_2b0 * local_2ac < 0) {
    Negate(&local_1a8);
    uVar24 = (uint)local_198;
    uVar21 = local_198._4_4_;
    uVar54 = (uint)uStack_190;
    uVar55 = uStack_190._4_4_;
    uVar50 = (uint)local_188;
    uVar51 = local_188._4_4_;
    uVar52 = (uint)uStack_180;
    uVar53 = uStack_180._4_4_;
    uVar46 = (uint)local_178;
    uVar47 = local_178._4_4_;
    uVar48 = (uint)uStack_170;
    uVar49 = uStack_170._4_4_;
  }
  *local_278 = local_228;
  local_278[1] = uStack_220;
  local_278[2] = local_218;
  local_278[3] = uStack_210;
  local_278[4] = local_208;
  local_278[5] = uStack_200;
  *(uint *)(local_278 + 6) = uVar42;
  *(uint *)((longlong)local_278 + 0x34) = uVar43;
  *(uint *)(local_278 + 7) = uVar44;
  *(uint *)((longlong)local_278 + 0x3c) = uVar45;
  *puVar3 = local_1a8;
  puVar3[1] = uStack_1a0;
  *(uint *)(puVar3 + 2) = uVar24;
  *(uint *)((longlong)puVar3 + 0x14) = uVar21;
  *(uint *)(puVar3 + 3) = uVar54;
  *(uint *)((longlong)puVar3 + 0x1c) = uVar55;
  *(uint *)(puVar3 + 4) = uVar50;
  *(uint *)((longlong)puVar3 + 0x24) = uVar51;
  *(uint *)(puVar3 + 5) = uVar52;
  *(uint *)((longlong)puVar3 + 0x2c) = uVar53;
  *(uint *)(puVar3 + 6) = uVar46;
  *(uint *)((longlong)puVar3 + 0x34) = uVar47;
  *(uint *)(puVar3 + 7) = uVar48;
  *(uint *)((longlong)puVar3 + 0x3c) = uVar49;
  return;
}



// FUNCTION 142a3fd60 FUN_142a3fd60 body=2071 status=ok
// SIG undefined FUN_142a3fd60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142a3fd60(longlong param_1,longlong *param_2)

{
  void *_Buf2;
  undefined8 uVar1;
  ulonglong uVar2;
  char cVar3;
  BOOL BVar4;
  int iVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  LPCRITICAL_SECTION p_Var8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  uint uVar18;
  uint *puVar19;
  int iVar20;
  undefined1 *puVar21;
  uint uVar22;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined1 local_140;
  undefined4 local_138;
  uint local_128 [2];
  undefined1 *local_120;
  LPCRITICAL_SECTION local_118;
  uint local_110;
  uint uStack_10c;
  uint *puStack_108;
  undefined4 local_100;
  int iStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  longlong local_f0 [2];
  undefined8 local_e0;
  uint uStack_d8;
  uint uStack_d4;
  uint *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  longlong local_b8 [2];
  longlong local_a8 [2];
  longlong *local_98;
  undefined8 uStack_90;
  uint *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70 [32];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  puVar21 = (undefined1 *)0x0;
  uVar22 = 0;
  puVar6 = puVar21;
  if (param_2[1] != 0) {
    if ((*(byte *)(param_1 + 0x6c) & 1) != 0) {
      FUN_142a3ea40(param_2[1],(int)param_2[4] + 0xfU & 0xfffffff0);
    }
    puVar6 = (undefined1 *)FMemory::Malloc((longlong)*(int *)((longlong)param_2 + 0x24),0);
    local_120 = puVar6;
    plVar7 = (longlong *)FUN_1415aac40();
    local_138 = (**(code **)(*plVar7 + 8))(plVar7);
    local_148 = (undefined4)param_2[4];
    local_140 = 0;
    cVar3 = FUN_14165b8a0(*(undefined4 *)(param_1 + 0x40),puVar6,
                          *(undefined4 *)((longlong)param_2 + 0x24),param_2[1]);
    if (cVar3 == '\0') {
      uVar15 = 0x20;
      if ((int)param_2[4] < 0x21) {
        uVar15 = (int)param_2[4];
      }
      BytesToHex(local_f0,param_2[1],uVar15);
      if (local_f0[0] != 0) {
        FMemory::Free();
      }
      p_Var8 = (LPCRITICAL_SECTION)FMemory::Malloc((longlong)(int)param_2[4],0);
      local_118 = p_Var8;
      BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
      if (BVar4 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
      }
      lVar13 = *param_2;
      if (lVar13 == 0) {
        LowLevelFatalErrorHandler("Unknown",0xd60,L"Cannot retry because Block.RawRequest is null.")
        ;
        FDebug::AssertFailed
                  (&DAT_143f3f584,"Unknown",0xd60,L"Cannot retry because Block.RawRequest is null.")
        ;
        lVar13 = *param_2;
      }
      FUN_142a48770(lVar13,p_Var8);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
      if ((*(byte *)(param_1 + 0x6c) & 1) != 0) {
        FUN_142a3ea40(p_Var8,(int)param_2[4] + 0xfU & 0xfffffff0);
      }
      iVar20 = (int)param_2[4];
      _Buf2 = (void *)param_2[1];
      iVar5 = _guard_xfg_dispatch_icall_nop(p_Var8,_Buf2,(longlong)iVar20);
      if (iVar5 != 0) {
        if (0 < iVar20) {
          lVar13 = (longlong)_Buf2 - (longlong)p_Var8;
          puVar6 = puVar21;
          do {
            uVar22 = (uint)puVar6;
            if (*(char *)p_Var8 != *(char *)((longlong)p_Var8 + lVar13)) break;
            uVar22 = uVar22 + 1;
            puVar6 = (undefined1 *)(ulonglong)uVar22;
            p_Var8 = (LPCRITICAL_SECTION)((longlong)p_Var8 + 1);
          } while ((int)uVar22 < iVar20);
        }
        if (iVar20 <= (int)uVar22) {
          LowLevelFatalErrorHandler
                    ("Unknown",0xd75,L"Buffers were different yet all bytes were the same????");
          FDebug::AssertFailed
                    (&DAT_143f3f584,"Unknown",0xd75,
                     L"Buffers were different yet all bytes were the same????");
          iVar20 = (int)param_2[4];
        }
        iVar5 = 0x40;
        if ((int)(iVar20 - uVar22) < 0x41) {
          iVar5 = iVar20 - uVar22;
        }
        BytesToHex(local_a8,param_2[1] + (longlong)(int)uVar22,iVar5);
        iVar5 = (int)param_2[4] - uVar22;
        iVar20 = 0x40;
        if (iVar5 < 0x41) {
          iVar20 = iVar5;
        }
        BytesToHex(local_b8,(char *)((longlong)local_118 + (longlong)(int)uVar22),iVar20);
        if (local_b8[0] != 0) {
          FMemory::Free();
        }
        p_Var8 = local_118;
        if (local_a8[0] != 0) {
          FMemory::Free();
          p_Var8 = local_118;
        }
      }
      plVar7 = (longlong *)FUN_1415aac40();
      local_138 = (**(code **)(*plVar7 + 8))(plVar7);
      local_148 = (undefined4)param_2[4];
      local_140 = 0;
      cVar3 = FUN_14165b8a0(*(undefined4 *)(param_1 + 0x40),local_120,
                            *(undefined4 *)((longlong)param_2 + 0x24),p_Var8);
      if (cVar3 == '\0') {
        LowLevelFatalErrorHandler("Unknown",0xd7f,L"Retry was NOT sucessful.");
        FDebug::AssertFailed(&DAT_143f3f584,"Unknown",0xd7f,L"Retry was NOT sucessful.");
      }
      FMemory::Free(p_Var8);
      puVar6 = local_120;
    }
    FMemory::Free(param_2[1]);
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 4) = 0;
  }
  p_Var8 = (LPCRITICAL_SECTION)(param_1 + 0x120);
  local_118 = p_Var8;
  BVar4 = TryEnterCriticalSection(p_Var8);
  if (BVar4 == 0) {
    EnterCriticalSection(p_Var8);
  }
  plVar7 = (longlong *)*param_2;
  param_2[2] = (longlong)puVar6;
  if (plVar7 != (longlong *)0x0) {
    if (*(char *)((longlong)plVar7 + 0x71) == '\0') {
      (**(code **)(*plVar7 + 8))(plVar7,0);
      plVar7 = (longlong *)*param_2;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)*plVar7)(plVar7,1);
    }
    *param_2 = 0;
    *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + -1;
  }
  if ((int)param_2[5] < 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x158,&local_120,param_2);
    if ((int)local_120 != -1) {
      puVar21 = (undefined1 *)(*(longlong *)(param_1 + 0x158) + (longlong)(int)local_120 * 0x18);
    }
    lVar13 = *(longlong *)(puVar21 + 8);
    TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 0x158,param_2);
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove(lVar13 + 0xa8,param_2)
    ;
    if (*(int *)(lVar13 + 0xb0) == *(int *)(lVar13 + 0xdc)) {
      BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b29880);
      if (BVar4 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b29880);
      }
      *(undefined1 *)(lVar13 + 0xa0) = 0;
      if (*(longlong **)(lVar13 + 0x90) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar13 + 0x90) + 0x10))();
      }
      IAsyncReadRequest::SetDataComplete(lVar13);
      *(undefined1 *)(lVar13 + 0x71) = 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b29880);
      TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
                (param_1 + 0x70,lVar13);
    }
    *param_2 = 0;
    lVar13 = param_2[3];
    param_2[3] = 0;
    if (lVar13 != 0) {
      LOCK();
      piVar10 = (int *)(lVar13 + 0x48);
      iVar20 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar20 == 1) {
        FGraphEvent::Recycle();
      }
    }
    if (param_2[1] != 0) {
      FMemory::Free();
      param_2[1] = 0;
    }
    *(undefined4 *)(param_2 + 4) = 0;
    if (param_2[2] != 0) {
      FMemory::Free();
      param_2[2] = 0;
    }
    *(undefined4 *)((longlong)param_2 + 0x24) = 0;
    *(undefined2 *)(param_2 + 6) = 0;
    if (param_2[3] != 0) {
      LOCK();
      piVar10 = (int *)(param_2[3] + 0x48);
      iVar20 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar20 == 1) {
        FGraphEvent::Recycle();
      }
    }
    FMemory::operator_delete(param_2,0x38);
  }
  else {
    local_f0[0] = param_1 + 0x70;
    local_50 = (undefined1 *)0x0;
    puStack_108 = (uint *)(param_1 + 0x80);
    local_48 = 0;
    iVar20 = *(int *)(param_1 + 0x98);
    local_110 = 0;
    uStack_10c = 1;
    iStack_fc = 0;
    uStack_f8 = 0;
    if (iVar20 != 0) {
      puVar19 = *(uint **)(param_1 + 0x90);
      if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
        puVar19 = puStack_108;
      }
      uVar22 = *puVar19;
      puVar6 = puVar21;
      puVar16 = puVar21;
      while (uVar22 == 0) {
        iVar5 = (int)puVar6;
        uStack_f8 = (int)puVar16 + 0x20;
        puVar16 = (undefined1 *)(ulonglong)uStack_f8;
        local_110 = iVar5 + 1;
        puVar6 = (undefined1 *)(ulonglong)local_110;
        if ((int)(iVar20 + -1 + (iVar20 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_142a4016e;
        uVar22 = puVar19[(longlong)iVar5 + 1];
      }
      uStack_10c = -uVar22 & uVar22;
      iVar5 = 0x1f;
      if (uStack_10c != 0) {
        for (; uStack_10c >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uStack_10c == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      iStack_fc = (uStack_f8 - iVar5) + 0x1f;
      if (iVar20 < iStack_fc) {
LAB_142a4016e:
        iStack_fc = iVar20;
      }
    }
    local_100 = 0xffffffff;
    local_98 = (longlong *)(param_1 + 0x70);
    local_128[0] = *(uint *)(param_1 + 0x98);
    uStack_90 = CONCAT44(uStack_10c,local_110);
    uStack_c8 = CONCAT44(iStack_fc,0xffffffff);
    local_c0 = CONCAT44(uStack_f4,uStack_f8);
    uVar22 = *(uint *)(param_1 + 0x98);
    uVar18 = local_128[0] & 0xffffffe0;
    local_120 = (undefined1 *)CONCAT44(local_120._4_4_,uVar22);
    uStack_d8 = local_110;
    uStack_d4 = uStack_10c;
    if (local_128[0] != uVar22) {
      lVar13 = *(longlong *)(param_1 + 0x90);
      if (*(longlong *)(param_1 + 0x90) == 0) {
        lVar13 = param_1 + 0x80;
      }
      uVar12 = *(uint *)(lVar13 + (longlong)((int)local_128[0] >> 5) * 4) &
               -1 << ((byte)local_128[0] & 0x1f);
      iVar20 = (int)local_128[0] >> 5;
      while (uVar12 == 0) {
        uVar18 = uVar18 + 0x20;
        if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar20)
        goto LAB_142a40248;
        uVar12 = *(uint *)(lVar13 + 4 + (longlong)iVar20 * 4);
        iVar20 = iVar20 + 1;
      }
      uVar12 = -uVar12 & uVar12;
      iVar20 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar20 == 0; iVar20 = iVar20 + -1) {
        }
      }
      if (uVar12 == 0) {
        iVar20 = 0x20;
      }
      else {
        iVar20 = 0x1f - iVar20;
      }
      local_128[0] = (uVar18 - iVar20) + 0x1f;
      if ((int)uVar22 < (int)local_128[0]) {
LAB_142a40248:
        local_128[0] = uVar22;
      }
    }
    local_d0 = puStack_108;
    puStack_88 = puStack_108;
    uStack_80 = uStack_c8;
    uStack_78 = local_c0;
    local_e0 = local_98;
    while( true ) {
      uVar2 = local_48;
      lVar13 = local_f0[0];
      p_Var8 = local_118;
      if (((uStack_c8._4_4_ == local_128[0]) && (local_d0 == (uint *)(param_1 + 0x80))) &&
         (local_e0 == (longlong *)(param_1 + 0x70))) break;
      lVar13 = *(longlong *)(*local_e0 + (longlong)(int)uStack_c8._4_4_ * 0x10);
      if (((*(char *)(lVar13 + 0xa0) != '\0') && (*(char *)(lVar13 + 0xa2) == '\0')) &&
         (*(char *)(lVar13 + 0xa1) == '\0')) {
        uVar17 = (ulonglong)*(uint *)(param_1 + 0x68);
        lVar11 = *(longlong *)(lVar13 + 0x80);
        if ((lVar11 < (longlong)((longlong)(*(int *)((longlong)param_2 + 0x2c) + 1) * uVar17)) &&
           (lVar9 = *(longlong *)(lVar13 + 0x88) + lVar11,
           (longlong)((longlong)*(int *)((longlong)param_2 + 0x2c) * uVar17) < lVar9)) {
          iVar5 = (int)((lVar9 + -1) / (longlong)uVar17);
          iVar20 = (int)(lVar11 / (longlong)uVar17);
          if (iVar20 <= iVar5) {
            lVar11 = (longlong)iVar20;
            plVar7 = (longlong *)(*(longlong *)(param_1 + 0xc0) + lVar11 * 8);
            do {
              if (*(longlong *)(*plVar7 + 0x10) == 0) goto LAB_142a4035e;
              lVar11 = lVar11 + 1;
              plVar7 = plVar7 + 1;
            } while (lVar11 <= iVar5);
          }
          *(undefined1 *)(lVar13 + 0xa2) = 1;
          lVar11 = (longlong)(int)local_48;
          iVar20 = (int)local_48 + 1;
          local_48 = CONCAT44(local_48._4_4_,iVar20);
          if (local_48._4_4_ < iVar20) {
            TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                      (local_70,uVar2 & 0xffffffff);
          }
          puVar6 = local_70;
          if (local_50 != (undefined1 *)0x0) {
            puVar6 = local_50;
          }
          *(longlong *)(puVar6 + lVar11 * 8) = lVar13;
        }
      }
LAB_142a4035e:
      uStack_c8 = CONCAT44(uStack_c8._4_4_,(uint)uStack_c8 & ~uStack_d4);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_d8);
    }
    puVar6 = local_70;
    if (local_50 != (undefined1 *)0x0) {
      puVar6 = puVar21;
    }
    puVar14 = (undefined8 *)((ulonglong)puVar6 | (ulonglong)local_50);
    puVar6 = (undefined1 *)((longlong)(int)local_48 & 0x1fffffffffffffff);
    if (puVar14 + (int)local_48 < puVar14) {
      puVar6 = puVar21;
    }
    if (puVar6 != (undefined1 *)0x0) {
      do {
        uVar1 = *puVar14;
        piVar10 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                                   (lVar13,local_128,uVar1);
        if (*piVar10 != -1) {
          FUN_142a4c310(uVar1);
        }
        puVar14 = puVar14 + 1;
        puVar21 = puVar21 + 1;
      } while (puVar21 != puVar6);
    }
    *(undefined1 *)((longlong)param_2 + 0x31) = 1;
    if (local_50 != (undefined1 *)0x0) {
      FMemory::Free(local_50);
    }
  }
  LeaveCriticalSection(p_Var8);
  return;
}



// FUNCTION 142a40580 FUN_142a40580 body=685 status=ok
// SIG undefined FUN_142a40580(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142a40580(longlong param_1,undefined1 param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  BOOL BVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  int local_a4;
  ulonglong local_a0;
  longlong local_98;
  int local_88 [16];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  local_88[8] = 0;
  local_88[9] = 0;
  local_88[10] = 0;
  local_88[0xb] = 0;
  local_88[0xc] = 0;
  local_88[0xd] = 0;
  local_88[0xe] = 0;
  local_88[0xf] = 0;
  local_a8 = param_2;
  local_a4 = param_4;
  local_98 = param_3;
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  plVar9 = (longlong *)(((longlong)param_4 + 0xb) * 0x20 + param_1);
  *plVar9 = param_3;
  lVar11 = *(longlong *)(param_3 + 0x10);
  if ((*(char *)(param_3 + 0x73) == '\0') || (lVar11 == 0)) {
    *(undefined8 *)(param_3 + 0x10) = 0;
  }
  else {
    lVar11 = 0;
  }
  uVar13 = plVar9[2];
  plVar9[3] = lVar11;
  lVar12 = (longlong)
           ((ulonglong)(ushort)((longlong)(uVar13 + 0xffff) >> 0x3f) +
           (uVar13 + 0xffff & 0xffffffffffff0000)) >> 0x10;
  uVar8 = *(ulonglong *)
           (*(longlong *)(param_1 + 0xd8) +
           (longlong)(int)(~*(uint *)(param_1 + 0xfc) & *(uint *)(plVar9 + 1)) * 0x28);
  local_a0 = uVar8 >> 0x30;
  uVar7 = (longlong)uVar8 >> 0x10 & 0xffffffff;
  lVar4 = 0x10;
  if (lVar12 < 0x11) {
    lVar4 = lVar12;
  }
  iVar5 = 0;
  if (0 < lVar4) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x80 + local_a0 * 0x98);
    piVar10 = local_88;
    do {
      iVar3 = (int)(uVar8 >> 0x10) + iVar5;
      iVar5 = iVar5 + 1;
      *piVar10 = *(int *)(lVar1 + (longlong)iVar3 * 4);
      piVar10 = piVar10 + 1;
    } while (iVar5 < lVar4);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  uVar8 = 0;
  if (0 < lVar12) {
    do {
      uVar6 = 0x10000;
      if ((longlong)uVar13 < 0x10001) {
        uVar6 = uVar13;
      }
      if ((0 < (longlong)uVar8) && ((uVar8 & 0xf) == 0)) {
        BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
        if (BVar2 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
        }
        iVar5 = 0;
        piVar10 = local_88;
        lVar4 = *(longlong *)(param_1 + 0xa0);
        do {
          if (lVar12 <= (longlong)((longlong)iVar5 + uVar8)) break;
          iVar3 = (int)uVar7 + iVar5;
          iVar5 = iVar5 + 1;
          *piVar10 = *(int *)(*(longlong *)(local_a0 * 0x98 + lVar4 + 0x80) + (longlong)iVar3 * 4);
          piVar10 = piVar10 + 1;
        } while (iVar5 < 0x10);
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
      }
      iVar5 = FCrc::MemCrc32(lVar11,uVar6 & 0xffffffff,0);
      if (iVar5 != local_88[(uint)uVar8 & 0xf]) {
        BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
        if (BVar2 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
        }
        lVar4 = local_a0 * 0x98 + *(longlong *)(param_1 + 0xa0);
        FCrc::MemCrc32(*(undefined8 *)(lVar4 + 0x80),*(int *)(lVar4 + 0x88) << 2,0);
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
      }
      lVar11 = lVar11 + uVar6;
      uVar13 = uVar13 - uVar6;
      uVar8 = uVar8 + 1;
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar8 < lVar12);
  }
  FPakPrecacher::NewRequestsToLowerComplete(param_1,local_a8,local_98,local_a4);
  return;
}



// FUNCTION 142a40830 DoThreadedWork body=116 status=ok
// SIG undefined DoThreadedWork(void)

void FAsyncTask<FPakCompressedReaderPolicy<FPakNoEncryption>::FPakUncompressTask>::DoThreadedWork
               (longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_1415aac40();
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  FUN_14165b8a0(*(undefined4 *)(param_1 + 0x24),*(undefined8 *)(param_1 + 8),
                *(undefined4 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined4 *)(param_1 + 0x20),0,uVar1);
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    ::_guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x28),
               (void *)(*(longlong *)(param_1 + 0x30) + *(longlong *)(param_1 + 8)),
               *(size_t *)(param_1 + 0x38));
  }
  LOCK();
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
  UNLOCK();
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a4089a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 142a408b0 DoWork body=95 status=ok
// SIG undefined DoWork(void)

void FAsyncTask<FPakCompressedReaderPolicy<FPakNoEncryption>::FPakUncompressTask>::DoWork
               (longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_1415aac40();
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  FUN_14165b8a0(*(undefined4 *)(param_1 + 0x24),*(undefined8 *)(param_1 + 8),
                *(undefined4 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined4 *)(param_1 + 0x20),0,uVar1);
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    ::_guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x28),
               (void *)(*(longlong *)(param_1 + 0x30) + *(longlong *)(param_1 + 8)),
               *(size_t *)(param_1 + 0x38));
  }
  LOCK();
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
  UNLOCK();
  return;
}



// FUNCTION 142a40910 DoWork body=113 status=ok
// SIG undefined DoWork(void)

void FAsyncTask<FPakCompressedReaderPolicy<FPakSimpleEncryption>::FPakUncompressTask>::DoWork
               (longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  FUN_142a3ea40(*(undefined8 *)(param_1 + 0x18),*(int *)(param_1 + 0x20) + 0xfU & 0xfffffff0);
  plVar2 = (longlong *)FUN_1415aac40();
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  FUN_14165b8a0(*(undefined4 *)(param_1 + 0x24),*(undefined8 *)(param_1 + 8),
                *(undefined4 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined4 *)(param_1 + 0x20),0,uVar1);
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    ::_guard_xfg_dispatch_icall_nop
              (*(void **)(param_1 + 0x28),
               (void *)(*(longlong *)(param_1 + 0x30) + *(longlong *)(param_1 + 8)),
               *(size_t *)(param_1 + 0x38));
  }
  LOCK();
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
  UNLOCK();
  return;
}



// FUNCTION 142a409a0 FUN_142a409a0 body=568 status=ok
// SIG undefined FUN_142a409a0(void)

void FUN_142a409a0(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  bool bVar2;
  BOOL BVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  ushort uVar7;
  ulonglong uVar9;
  ulonglong uVar8;
  
  uVar9 = 0;
LAB_142a409d0:
  lVar5 = DAT_146b298e8;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b298e8 + 8);
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar1 = *(int *)(lVar5 + 0xa8);
  uVar8 = 0;
  if (0 < iVar1) {
    do {
      lVar4 = 5;
      piVar6 = (int *)(uVar8 * 0x98 + 0x70 + *(longlong *)(lVar5 + 0xa0));
      while( true ) {
        if (*piVar6 != 0) goto LAB_142a40ab1;
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        piVar6 = piVar6 + -3;
      }
      uVar7 = (short)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)(uint)uVar7 < iVar1);
  }
  uVar8 = 0;
  if (0 < iVar1) {
    do {
      lVar4 = 5;
      piVar6 = (int *)(uVar8 * 0x98 + 0x74 + *(longlong *)(lVar5 + 0xa0));
      while( true ) {
        if (*piVar6 != 0) goto LAB_142a40ab1;
        if (lVar4 == 0) break;
        lVar4 = lVar4 + -1;
        piVar6 = piVar6 + -3;
      }
      uVar7 = (short)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)(uint)uVar7 < iVar1);
  }
  bVar2 = true;
  goto LAB_142a40a96;
LAB_142a40ab1:
  bVar2 = false;
LAB_142a40a96:
  LeaveCriticalSection(lpCriticalSection);
  if (bVar2) {
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    }
    iVar1 = *(int *)(param_1 + 0xa8);
    uVar8 = 0;
    if (0 < iVar1) {
      do {
        lVar5 = 5;
        piVar6 = (int *)(uVar8 * 0x98 + 0x70 + *(longlong *)(param_1 + 0xa0));
        while( true ) {
          if (*piVar6 != 0) goto LAB_142a40bb4;
          if (lVar5 == 0) break;
          lVar5 = lVar5 + -1;
          piVar6 = piVar6 + -3;
        }
        uVar7 = (short)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while ((int)(uint)uVar7 < iVar1);
    }
    uVar8 = 0;
    if (0 < iVar1) {
      do {
        lVar5 = 5;
        piVar6 = (int *)(uVar8 * 0x98 + 0x74 + *(longlong *)(param_1 + 0xa0));
        while( true ) {
          if (*piVar6 != 0) goto LAB_142a40bb4;
          if (lVar5 == 0) break;
          lVar5 = lVar5 + -1;
          piVar6 = piVar6 + -3;
        }
        uVar7 = (short)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while ((int)(uint)uVar7 < iVar1);
      if (0 < iVar1) {
        do {
          lVar5 = 5;
          piVar6 = (int *)(uVar9 * 0x98 + 0x6c + *(longlong *)(param_1 + 0xa0));
          while( true ) {
            if (*piVar6 != 0) goto LAB_142a40bb4;
            if (lVar5 == 0) break;
            lVar5 = lVar5 + -1;
            piVar6 = piVar6 + -3;
          }
          uVar7 = (short)uVar9 + 1;
          uVar9 = (ulonglong)uVar7;
        } while ((int)(uint)uVar7 < iVar1);
      }
    }
LAB_142a40bb4:
                    /* WARNING: Could not recover jumptable at 0x000142a40bd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    return;
  }
  FUN_1416b1810(0x3a83126f);
  goto LAB_142a409d0;
}



// FUNCTION 142a40be0 FUN_142a40be0 body=104 status=ok
// SIG undefined FUN_142a40be0(void)

void FUN_142a40be0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar1 = (longlong *)(*param_1 + 0x30);
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 9;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 142a40c50 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
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



// FUNCTION 142a40cd0 Empty body=471 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
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
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar7 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar7;
      if (bVar3) goto LAB_142a40da1;
      uVar4 = puVar8[lVar5 + 1];
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
LAB_142a40da1:
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
      plVar6 = (longlong *)((longlong)iStack_2c * 0x68 + *param_1);
      *(undefined4 *)(plVar6 + 0xb) = 0;
      if (plVar6[10] != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (plVar6 + 2);
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
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



// FUNCTION 142a40eb0 FUN_142a40eb0 body=448 status=ok
// SIG undefined FUN_142a40eb0(void)

void FUN_142a40eb0(longlong *param_1,int param_2)

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
      if (bVar3) goto LAB_142a40f81;
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
LAB_142a40f81:
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
      lVar5 = (longlong)iStack_2c * 0x68 + *param_1;
      if (*(longlong *)(lVar5 + 0x50) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 0x38) != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
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



// FUNCTION 142a41070 FUN_142a41070 body=206 status=ok
// SIG undefined FUN_142a41070(void)

void FUN_142a41070(longlong param_1,size_t param_2,size_t param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 local_res8;
  
  if (*(longlong *)(param_1 + 0x18) < (longlong)param_2) {
    *(size_t *)(param_1 + 0x18) = param_2;
    pvVar2 = (void *)operator_new(param_2);
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      _guard_xfg_dispatch_icall_nop(pvVar2,0,param_2);
    }
    puVar3 = (undefined8 *)(param_1 + 0x20);
    if (puVar3 != &local_res8) {
      uVar1 = *puVar3;
      *puVar3 = pvVar2;
      pvVar2 = (void *)0x0;
      FMemory::operator_delete(uVar1);
    }
    FMemory::operator_delete(pvVar2);
  }
  if (*(longlong *)(param_1 + 0x28) < (longlong)param_3) {
    *(size_t *)(param_1 + 0x28) = param_3;
    pvVar2 = (void *)operator_new(param_3);
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      _guard_xfg_dispatch_icall_nop(pvVar2,0,param_3);
    }
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (puVar3 != &local_res8) {
      uVar1 = *puVar3;
      *puVar3 = pvVar2;
      pvVar2 = (void *)0x0;
      FMemory::operator_delete(uVar1);
    }
    FMemory::operator_delete(pvVar2);
  }
  return;
}



// FUNCTION 142a41140 FUN_142a41140 body=92 status=ok
// SIG undefined FUN_142a41140(void)

void FUN_142a41140(void)

{
  undefined8 uVar1;
  char local_res10 [24];
  
  uVar1 = FCommandLine::Get();
  local_res10[0] = FParse::Param(uVar1,L"NoDeferUnloadPakEntries");
  if ((local_res10[0] == '\0') &&
     (FConfigCacheIni::GetBool
                (DAT_1468b6148,&DAT_1453615b8,L"NoDeferUnloadPakEntries",local_res10,&DAT_1468e2360)
     , local_res10[0] == '\0')) {
    return;
  }
  FUN_142a3d4f0();
  return;
}



// FUNCTION 142a411b0 FUN_142a411b0 body=94 status=ok
// SIG undefined FUN_142a411b0(void)

undefined8 FUN_142a411b0(void)

{
  undefined8 uVar1;
  char local_res10 [24];
  
  uVar1 = FCommandLine::Get();
  local_res10[0] = FParse::Param(uVar1,L"NoDeferUnloadPakEntries");
  if ((local_res10[0] == '\0') &&
     (FConfigCacheIni::GetBool
                (DAT_1468b6148,&DAT_1453615b8,L"NoDeferUnloadPakEntries",local_res10,&DAT_1468e2360)
     , local_res10[0] == '\0')) {
    return 1;
  }
  FUN_142a3d4f0();
  return 1;
}



// FUNCTION 142a41210 FUN_142a41210 body=22 status=ok
// SIG undefined FUN_142a41210(void)

undefined1 FUN_142a41210(longlong param_1)

{
  FUN_142a4b8a0(*(undefined8 *)(param_1 + 8),1);
  return 1;
}



// FUNCTION 142a41230 ExecuteTask body=258 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FAsyncIOCPUWorkTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_142a3fd60(param_1[2],param_1[3]);
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_141591a60(param_1[5],param_2,param_3);
  *param_1 = &PTR_FUN_145361438;
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



// FUNCTION 142a41340 ExecuteTask body=269 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FAsyncIOSignatureCheckTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_142a40580(DAT_146b298e8,*(undefined1 *)(param_1 + 2),param_1[3],*(undefined4 *)(param_1 + 4));
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_141591a60(param_1[6],param_2,param_3);
  *param_1 = &PTR_FUN_145361360;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
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



// FUNCTION 142a41450 FileExists body=212 status=ok
// SIG undefined FileExists(void)

undefined1 FPakPlatformFile::FileExists(longlong param_1,short *param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong local_18;
  ulonglong local_10;
  
  cVar1 = FUN_142a42000(param_1,param_2,0,0);
  if (cVar1 != '\0') {
    return 1;
  }
  uVar2 = 0;
  local_18 = 0;
  local_10 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_2[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_10 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,param_2,(longlong)(int)uVar3 * 2);
  }
  cVar1 = FUN_142a45470(param_1,&local_18);
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),param_2);
  }
  return uVar2;
}



// FUNCTION 142a41530 FileSize body=347 status=ok
// SIG undefined FileSize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FPakPlatformFile::FileSize(longlong param_1,short *param_2)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  longlong local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined2 local_44;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0;
  local_88 = 0xffffffffffffffff;
  uStack_80 = 0;
  local_6c = 0;
  local_64 = 0;
  local_5c = 0;
  cVar1 = FUN_142a42000(0xffffffffffffffff,param_2,0,&local_88);
  if (cVar1 == '\0') {
    local_98 = 0;
    local_90 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (param_2[lVar4] != 0);
      uVar3 = (int)lVar4 + 1;
      local_90 = (ulonglong)uVar3;
      if (0 < (int)uVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
      }
      FGenericPlatformString::Memcpy(local_98,param_2,(longlong)(int)uVar3 * 2);
    }
    cVar1 = FUN_142a45470(param_1,&local_98);
    if (local_98 != 0) {
      FMemory::Free();
    }
    uVar2 = 0xffffffffffffffff;
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x70))
                        (*(longlong **)(param_1 + 8),param_2);
    }
  }
  else {
    uVar2 = uStack_80;
    if (local_70 != 0) {
      uVar2 = local_78;
    }
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 142a41690 FUN_142a41690 body=1495 status=ok
// SIG undefined FUN_142a41690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142a41690(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 *puVar10;
  int iVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  undefined2 *puVar14;
  wchar_t *pwVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  wchar_t *pwVar20;
  bool bVar21;
  undefined1 auStackY_108 [32];
  int local_d8;
  wchar_t *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined8 *local_c0;
  uint local_b8;
  undefined2 *local_b0;
  int local_a8;
  undefined2 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStackY_108;
  puVar8 = (undefined8 *)FString::StartsWith(param_2,param_1 + 0xd0,1);
  if ((char)puVar8 == '\0') goto LAB_142a41c3e;
  FUN_141672d20(&local_b0,param_2);
  if (*(char *)(param_1 + 0x19a) == '\0') {
    puVar14 = &DAT_143f3eda8;
    if (local_a8 != 0) {
      puVar14 = local_b0;
    }
    puVar10 = (undefined8 *)FUN_142a41d50(param_1,puVar14);
    puVar8 = (undefined8 *)0x0;
    local_c0 = puVar10;
    if (puVar10 != (undefined8 *)0x0) {
      pwVar20 = (wchar_t *)0x0;
      uVar6 = 0;
      uVar7 = uVar6;
      if (local_a8 != 0) {
        uVar7 = local_a8 - 1;
      }
      iVar18 = *(int *)(param_2 + 1);
      local_b8 = iVar18 - 1;
      if (iVar18 == 0) {
        local_b8 = uVar6;
      }
      uVar1 = uVar7 + 0x80000000;
      if (uVar7 + 1 < local_b8) {
        local_b8 = uVar7 + 1;
      }
      uVar7 = iVar18 - 1;
      if (iVar18 == 0) {
        uVar7 = uVar6;
      }
      uVar6 = local_b8;
      if ((local_b8 <= uVar1) && (uVar6 = uVar7, uVar1 < uVar7)) {
        uVar6 = uVar1;
      }
      if (iVar18 == 0) {
        local_a0 = &DAT_143f3eda8;
      }
      else {
        local_a0 = (undefined2 *)*param_2;
      }
      iVar18 = uVar6 - local_b8;
      local_d0 = (wchar_t *)0x0;
      local_c4 = 0;
      pwVar12 = (wchar_t *)(ulonglong)(iVar18 + 1);
      if (iVar18 == 0) {
        pwVar12 = pwVar20;
      }
      local_d8 = (int)pwVar12;
      pwVar12 = pwVar20;
      local_c8 = local_d8;
      if (0 < local_d8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d0,0);
        pwVar12 = local_d0;
        local_d8 = local_c8;
        if (0 < local_c8) {
          wcsncpy(local_d0,local_a0 + (int)local_b8,(longlong)iVar18);
          pwVar12[iVar18] = L'\0';
        }
      }
      uVar7 = *(int *)(puVar10 + 1) - *(int *)((longlong)puVar10 + 0x34);
      puVar8 = (undefined8 *)(ulonglong)uVar7;
      pwVar15 = pwVar20;
      if (uVar7 != 0) {
        pwVar13 = L"";
        if (local_d8 != 0) {
          pwVar13 = pwVar12;
        }
        iVar18 = FUN_140438070(pwVar13);
        puVar8 = (undefined8 *)puVar10[8];
        if ((undefined8 *)puVar10[8] == (undefined8 *)0x0) {
          puVar8 = puVar10 + 7;
        }
        iVar18 = *(int *)((longlong)puVar8 +
                         ((longlong)*(int *)(puVar10 + 9) - 1U & (longlong)iVar18) * 4);
        if (iVar18 != -1) {
          puVar8 = (undefined8 *)*puVar10;
          do {
            lVar19 = (longlong)iVar18;
            pwVar13 = L"";
            if (local_d8 != 0) {
              pwVar13 = pwVar12;
            }
            if (*(int *)(puVar8 + lVar19 * 4 + 1) == 0) {
              puVar14 = &DAT_143f3eda8;
            }
            else {
              puVar14 = (undefined2 *)puVar8[lVar19 * 4];
            }
            puVar8 = (undefined8 *)
                     FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,pwVar13);
            if ((int)puVar8 == 0) {
              if (iVar18 != -1) {
                puVar8 = (undefined8 *)*local_c0;
                pwVar15 = (wchar_t *)(puVar8 + lVar19 * 4);
              }
              break;
            }
            puVar8 = (undefined8 *)*local_c0;
            iVar18 = *(int *)(puVar8 + lVar19 * 4 + 3);
          } while (iVar18 != -1);
        }
      }
      pwVar13 = pwVar15 + 8;
      if (pwVar15 == (wchar_t *)0x0) {
        pwVar13 = pwVar20;
      }
      if (pwVar13 != (wchar_t *)0x0) {
        cVar2 = *(char *)(param_1 + 0xf0);
        if (cVar2 == '\0') {
          AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xf8));
        }
        lVar19 = (longlong)*(int *)pwVar13;
        if (*(longlong *)(param_1 + 0x178) == 0) {
          puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0xe0) + lVar19 * 0x48);
          bVar21 = (bool)(*(byte *)(*(longlong *)(param_1 + 0xe0) + 0x44 + lVar19 * 0x48) >> 1 & 1);
          if (param_3 != (undefined8 *)0x0) {
            *param_3 = *puVar8;
            param_3[1] = puVar8[1];
            param_3[2] = puVar8[2];
            *(undefined4 *)(param_3 + 3) = *(undefined4 *)(puVar8 + 3);
            uVar4 = *(undefined8 *)((longlong)puVar8 + 0x24);
            *(undefined8 *)((longlong)param_3 + 0x1c) = *(undefined8 *)((longlong)puVar8 + 0x1c);
            *(undefined8 *)((longlong)param_3 + 0x24) = uVar4;
            *(undefined4 *)((longlong)param_3 + 0x2c) = *(undefined4 *)((longlong)puVar8 + 0x2c);
            FUN_1408e22e0(param_3 + 6,puVar8 + 6);
            *(undefined4 *)(param_3 + 8) = *(undefined4 *)(puVar8 + 8);
            *(undefined1 *)((longlong)param_3 + 0x44) = *(undefined1 *)((longlong)puVar8 + 0x44);
LAB_142a41beb:
            *(undefined1 *)((longlong)param_3 + 0x45) = 1;
          }
        }
        else {
          uVar7 = *(uint *)(*(longlong *)(param_1 + 0x170) + lVar19 * 4);
          bVar21 = uVar7 == 0xffffffff;
          if (param_3 != (undefined8 *)0x0) {
            if (uVar7 == 0xffffffff) {
              local_98 = 0xffffffffffffffff;
              uStack_90 = 0;
              local_7c = 0;
              local_74 = 0;
              local_6c = 0;
              local_88 = 0;
              local_80 = 0;
              local_68 = 0;
              local_60 = 0;
              local_58 = 0;
              local_54 = 0;
              FPakEntry::operator=(param_3,&local_98);
              if (local_68 != 0) {
                FMemory::Free();
              }
              *(byte *)((longlong)param_3 + 0x44) = *(byte *)((longlong)param_3 + 0x44) | 2;
              goto LAB_142a41beb;
            }
            FUN_142a3e810(param_1,(ulonglong)uVar7 + *(longlong *)(param_1 + 0x178),param_3);
          }
        }
        if (cVar2 == '\0') {
          ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xf8));
        }
        goto joined_r0x000142a41c06;
      }
      goto joined_r0x000142a41c26;
    }
  }
  else {
    iVar11 = 0;
    iVar18 = local_a8 + -1;
    if (local_a8 == 0) {
      iVar18 = 0;
    }
    iVar3 = *(int *)(param_1 + 0xd8);
    iVar16 = iVar3 + -1;
    iVar5 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar16 = -1;
      iVar5 = iVar11;
    }
    iVar17 = iVar11;
    if (iVar18 < iVar5) {
      if (local_a8 != 0) {
        iVar17 = local_a8 + -1;
      }
    }
    else if (iVar3 != 0) {
      iVar17 = iVar16;
    }
    FString::ToLower(param_2,&local_d0);
    pwVar20 = L"";
    if (local_c8 != 0) {
      pwVar20 = local_d0;
    }
    pwVar20 = pwVar20 + iVar17;
    if (local_c8 != 0) {
      iVar11 = local_c8 + -1;
    }
    iVar18 = (iVar11 - iVar17) + -1;
    if (*pwVar20 != L'/') {
      iVar18 = iVar11 - iVar17;
    }
    pwVar12 = pwVar20 + 1;
    if (*pwVar20 != L'/') {
      pwVar12 = pwVar20;
    }
    local_c0 = (undefined8 *)FFnv::MemFnv64(pwVar12,iVar18 * 2,*(undefined8 *)(param_1 + 0x150));
    uVar6 = (uint)(byte)((ulonglong)local_c0 >> 0x38);
    uVar7 = *(uint *)(*(longlong *)(param_1 + 0x158) + (ulonglong)uVar6 * 4);
    pvVar9 = bsearch(&local_c0,(void *)(*(longlong *)(param_1 + 0x168) + (ulonglong)uVar7 * 8),
                     (ulonglong)
                     (*(int *)(*(longlong *)(param_1 + 0x158) + (ulonglong)(uVar6 + 1) * 4) - uVar7)
                     ,8,(_PtFuncCompare *)&LAB_142a3d9f0);
    if (pvVar9 != (void *)0x0) {
      cVar2 = *(char *)(param_1 + 0xf0);
      lVar19 = (longlong)
               *(int *)(*(longlong *)(param_1 + 0x160) +
                       ((longlong)pvVar9 - *(longlong *)(param_1 + 0x168) >> 3) * 4);
      if (cVar2 == '\0') {
        AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xf8));
      }
      if (*(longlong *)(param_1 + 0x178) == 0) {
        puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0xe0) + lVar19 * 0x48);
        bVar21 = (bool)(*(byte *)(*(longlong *)(param_1 + 0xe0) + 0x44 + lVar19 * 0x48) >> 1 & 1);
        if (param_3 != (undefined8 *)0x0) {
          *param_3 = *puVar8;
          param_3[1] = puVar8[1];
          param_3[2] = puVar8[2];
          *(undefined4 *)(param_3 + 3) = *(undefined4 *)(puVar8 + 3);
          FUN_1408e22e0(param_3 + 6,puVar8 + 6);
          *(undefined4 *)(param_3 + 8) = *(undefined4 *)(puVar8 + 8);
          *(undefined1 *)((longlong)param_3 + 0x44) = *(undefined1 *)((longlong)puVar8 + 0x44);
LAB_142a418f9:
          *(undefined1 *)((longlong)param_3 + 0x45) = 1;
        }
      }
      else {
        uVar7 = *(uint *)(*(longlong *)(param_1 + 0x170) + lVar19 * 4);
        bVar21 = uVar7 == 0xffffffff;
        if (param_3 != (undefined8 *)0x0) {
          if (uVar7 == 0xffffffff) {
            local_98 = 0xffffffffffffffff;
            uStack_90 = 0;
            local_7c = 0;
            local_74 = 0;
            local_6c = 0;
            local_88 = 0;
            local_80 = 0;
            local_68 = 0;
            local_60 = 0;
            local_58 = 0;
            local_54 = 0;
            FPakEntry::operator=(param_3,&local_98);
            if (local_68 != 0) {
              FMemory::Free();
            }
            *(byte *)((longlong)param_3 + 0x44) = *(byte *)((longlong)param_3 + 0x44) | 2;
            goto LAB_142a418f9;
          }
          FUN_142a3e810(param_1,(ulonglong)uVar7 + *(longlong *)(param_1 + 0x178),param_3);
        }
      }
      pwVar12 = local_d0;
      if (cVar2 == '\0') {
        ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xf8));
        pwVar12 = local_d0;
      }
joined_r0x000142a41c06:
      if (pwVar12 != (wchar_t *)0x0) {
        FMemory::Free(pwVar12);
      }
      if (local_b0 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      return (ulonglong)(byte)(bVar21 + 1);
    }
    puVar8 = (undefined8 *)0x0;
    pwVar12 = local_d0;
joined_r0x000142a41c26:
    if (pwVar12 != (wchar_t *)0x0) {
      puVar8 = (undefined8 *)FMemory::Free(pwVar12);
    }
  }
  if (local_b0 != (undefined2 *)0x0) {
    puVar8 = (undefined8 *)FMemory::Free();
  }
LAB_142a41c3e:
  return (ulonglong)puVar8 & 0xffffffffffffff00;
}



// FUNCTION 142a41c70 FUN_142a41c70 body=217 status=ok
// SIG undefined FUN_142a41c70(void)

void FUN_142a41c70(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined **local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40 [2];
  undefined4 local_30;
  
  iVar1 = 0;
  if (0 < (int)param_2[1]) {
    lVar3 = 0;
    do {
      if (*(int *)(lVar3 + 8 + *param_2) == 0) {
        puVar2 = &DAT_143f3eda8;
      }
      else {
        puVar2 = *(undefined2 **)(lVar3 + *param_2);
      }
      local_48 = FWindowsPlatformMisc::GetPlatformChunkInstall();
      local_50 = param_5;
      local_58 = &PTR_FUN_145361560;
      FString::FString(local_40,param_3);
      local_30 = param_4;
      (**(code **)(*param_1 + 0x128))(param_1,puVar2,&local_58);
      if (local_40[0] != 0) {
        FMemory::Free();
      }
      iVar1 = iVar1 + 1;
      lVar3 = lVar3 + 0x10;
    } while (iVar1 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 142a41d50 FUN_142a41d50 body=674 status=ok
// SIG undefined FUN_142a41d50(void)

wchar_t * FUN_142a41d50(longlong param_1,short *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  wchar_t *pwVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  undefined2 *local_38;
  int local_30;
  int iStack_2c;
  wchar_t *local_28;
  int local_20;
  undefined4 local_1c;
  
  pwVar14 = (wchar_t *)0x0;
  local_38 = (undefined2 *)0x0;
  local_30 = 0;
  iStack_2c = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (param_2[lVar11] != 0);
    iVar8 = (int)lVar11 + 1;
    iStack_2c = 0;
    local_30 = iVar8;
    if (0 < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Memcpy(local_38,param_2,(longlong)iVar8 * 2);
    iVar8 = local_30;
    lVar11 = (longlong)local_30;
    if (((local_30 != 0) && (0 < local_30 + -1)) &&
       (local_38[(longlong)(local_30 + -1) + -1] != 0x2f)) {
      local_30 = local_30 + 1;
      if (iStack_2c < local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar8);
      }
      local_38[lVar11 - (ulonglong)(iVar8 != 0)] = 0x2f;
      (local_38 + (lVar11 - (ulonglong)(iVar8 != 0)))[1] = 0;
    }
  }
  cVar1 = FString::StartsWith(&local_38,param_1 + 0xd0,1);
  pwVar4 = pwVar14;
  if (cVar1 != '\0') {
    uVar3 = *(int *)(param_1 + 0xd8) - 1;
    if (*(int *)(param_1 + 0xd8) == 0) {
      uVar3 = 0;
    }
    uVar7 = uVar3 + 0x7fffffff;
    uVar12 = local_30 - 1;
    if (local_30 == 0) {
      uVar12 = 0;
    }
    if (uVar3 < uVar12) {
      uVar12 = uVar3;
    }
    uVar3 = local_30 - 1;
    if (local_30 == 0) {
      uVar3 = 0;
    }
    uVar9 = uVar12;
    if ((uVar12 <= uVar7) && (uVar9 = uVar3, uVar7 < uVar3)) {
      uVar9 = uVar7;
    }
    local_28 = (wchar_t *)0x0;
    local_1c = 0;
    puVar5 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar5 = local_38;
    }
    iVar10 = uVar9 - uVar12;
    iVar8 = iVar10 + 1;
    if (iVar10 == 0) {
      iVar8 = 0;
    }
    pwVar15 = pwVar14;
    local_20 = iVar8;
    if ((0 < iVar8) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0), iVar8 = local_20,
       pwVar15 = local_28, 0 < local_20)) {
      wcsncpy(local_28,puVar5 + (int)uVar12,(longlong)iVar10);
      pwVar15[iVar10] = L'\0';
    }
    pwVar6 = pwVar14;
    if (*(int *)(param_1 + 0x108) != *(int *)(param_1 + 0x134)) {
      pwVar4 = L"";
      if (iVar8 != 0) {
        pwVar4 = pwVar15;
      }
      iVar10 = FUN_140438070(pwVar4);
      lVar11 = *(longlong *)(param_1 + 0x140);
      if (*(longlong *)(param_1 + 0x140) == 0) {
        lVar11 = param_1 + 0x138;
      }
      iVar10 = *(int *)(lVar11 + ((longlong)*(int *)(param_1 + 0x148) - 1U & (longlong)iVar10) * 4);
      if (iVar10 != -1) {
        lVar11 = *(longlong *)(param_1 + 0x100);
        do {
          lVar13 = (longlong)iVar10 * 0x68;
          pwVar4 = L"";
          if (iVar8 != 0) {
            pwVar4 = pwVar15;
          }
          if (*(int *)(lVar11 + 8 + lVar13) == 0) {
            puVar5 = &DAT_143f3eda8;
          }
          else {
            puVar5 = *(undefined2 **)(lVar11 + lVar13);
          }
          iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,pwVar4);
          if (iVar2 == 0) {
            if (iVar10 != -1) {
              pwVar6 = (wchar_t *)(*(longlong *)(param_1 + 0x100) + lVar13);
            }
            break;
          }
          lVar11 = *(longlong *)(param_1 + 0x100);
          iVar10 = *(int *)(lVar11 + 0x60 + lVar13);
        } while (iVar10 != -1);
      }
    }
    pwVar4 = pwVar6 + 8;
    if (pwVar6 == (wchar_t *)0x0) {
      pwVar4 = pwVar14;
    }
    if (pwVar15 != (wchar_t *)0x0) {
      FMemory::Free(pwVar15);
    }
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return pwVar4;
}



// FUNCTION 142a42000 FUN_142a42000 body=219 status=ok
// SIG undefined FUN_142a42000(void)

undefined1 FUN_142a42000(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined1 uVar2;
  BOOL BVar3;
  int iVar4;
  longlong lVar5;
  longlong local_38;
  undefined8 local_30;
  
  lVar5 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x28);
  local_38 = 0;
  local_30 = 0;
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    iVar4 = 0;
    if (0 < iVar1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_38,iVar1);
      lVar5 = local_38;
      iVar4 = (int)local_30;
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar4 * 0x10 + lVar5),*(void **)(param_1 + 0x10),
               (longlong)iVar1 << 4);
    local_30 = CONCAT44(local_30._4_4_,iVar4 + iVar1);
  }
  LeaveCriticalSection(lpCriticalSection);
  uVar2 = FPakPlatformFile::FindFileInPakFiles(&local_38,param_2,param_3,param_4);
  if (lVar5 != 0) {
    FMemory::Free(lVar5);
  }
  return uVar2;
}



// FUNCTION 142a420e0 FindFileInPakFiles body=459 status=ok
// SIG undefined FindFileInPakFiles(void)

undefined8
FPakPlatformFile::FindFileInPakFiles
          (longlong *param_1,short *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  short *psVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  short *local_48;
  ulonglong local_40;
  longlong local_38;
  ulonglong local_30;
  
  uVar8 = 0;
  local_40 = 0;
  local_48 = (short *)0x0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (param_2[lVar5] != 0);
    uVar4 = (int)lVar5 + 1;
    local_40 = (ulonglong)uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    FGenericPlatformString::Memcpy(local_48,param_2,(longlong)(int)uVar4 * 2);
  }
  FUN_1416781b0(&local_48);
  iVar9 = -1;
  uVar10 = uVar8;
  if (0 < (int)param_1[1]) {
    do {
      iVar1 = *(int *)(uVar10 + *param_1);
      if ((iVar9 != -1) && (iVar1 < iVar9)) break;
      local_30 = 0;
      psVar6 = &DAT_143f3eda8;
      if ((int)local_40 != 0) {
        psVar6 = local_48;
      }
      local_38 = 0;
      if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
        lVar5 = -1;
        do {
          lVar2 = lVar5 + 1;
          lVar5 = lVar5 + 1;
        } while (psVar6[lVar2] != 0);
        uVar4 = (int)lVar5 + 1;
        local_30 = (ulonglong)uVar4;
        if (0 < (int)uVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        }
        FGenericPlatformString::Memcpy(local_38,psVar6,(longlong)(int)uVar4 * 2);
      }
      cVar3 = FUN_142a41690(*(undefined8 *)(uVar10 + 8 + *param_1),&local_38,param_4);
      if (local_38 != 0) {
        FMemory::Free();
      }
      if (cVar3 == '\x01') {
        if (param_3 != (undefined8 *)0x0) {
          *param_3 = *(undefined8 *)(*param_1 + 8 + (longlong)(int)uVar8 * 0x10);
        }
        uVar7 = 1;
        goto LAB_142a42252;
      }
      if (cVar3 == '\x02') {
        iVar9 = iVar1;
      }
      uVar4 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar4;
      uVar10 = uVar10 + 0x10;
    } while ((int)uVar4 < (int)param_1[1]);
  }
  uVar7 = 0;
LAB_142a42252:
  if (local_48 != (short *)0x0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 142a422b0 FUN_142a422b0 body=117 status=ok
// SIG undefined FUN_142a422b0(void)

void FUN_142a422b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))(*(longlong **)(param_1 + 8),param_3);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x138))
              (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
  }
  FUN_142a42330(param_1,param_2,param_3,param_4,0);
  return;
}



// FUNCTION 142a42330 FUN_142a42330 body=866 status=ok
// SIG undefined FUN_142a42330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142a42330(longlong *param_1,longlong *param_2,short *param_3,short *param_4,
                  undefined1 param_5)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  BOOL BVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined1 local_100;
  char local_f8 [8];
  longlong *local_f0;
  undefined8 local_e8;
  undefined2 *local_e0;
  ulonglong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 5);
  local_c0 = 0;
  local_b8 = 0;
  uVar13 = 0;
  local_f0 = param_1;
  BVar4 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar4 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar5 = (int)param_1[3];
  if (iVar5 != 0) {
    if (0 < iVar5) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_c0,iVar5);
      uVar13 = (uint)local_b8;
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)(int)uVar13 * 0x10 + local_c0),(void *)local_f0[2],
               (longlong)iVar5 << 4);
    uVar13 = uVar13 + iVar5;
  }
  LeaveCriticalSection(lpCriticalSection);
  if (uVar13 != 0) {
    lVar6 = -1;
    local_a8 = 0;
    local_a0 = 0;
    local_88 = 0;
    local_80 = 0;
    local_74 = 0;
    local_68 = 0;
    local_60 = 0;
    iVar5 = (int)param_2[1];
    local_78 = 0xffffffff;
    if (0 < iVar5) {
      FUN_1415e4440(&local_a8,iVar5);
      iVar5 = (int)param_2[1];
    }
    lVar10 = *param_2;
    lVar14 = (longlong)iVar5 * 0x10 + lVar10;
    for (; lVar10 != lVar14; lVar10 = lVar10 + 0x10) {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (&local_a8,&local_f0,lVar10,0);
    }
    local_d8 = 0;
    local_e0 = (undefined2 *)0x0;
    if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (param_3[lVar10] != 0);
      uVar9 = (int)lVar10 + 1;
      local_d8 = (ulonglong)uVar9;
      if (0 < (int)uVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e0,0);
      }
      FGenericPlatformString::Memcpy(local_e0,param_3,(longlong)(int)uVar9 * 2);
    }
    local_c8 = 0;
    local_d0 = 0;
    if ((param_4 != (short *)0x0) && (*param_4 != 0)) {
      do {
        lVar6 = lVar6 + 1;
      } while (param_4[lVar6] != 0);
      uVar9 = (int)lVar6 + 1;
      local_c8 = (ulonglong)uVar9;
      if (0 < (int)uVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d0,0);
      }
      FGenericPlatformString::Memcpy(local_d0,param_4,(longlong)(int)uVar9 * 2);
    }
    FUN_1416781b0(&local_e0);
    local_f0 = (longlong *)0x0;
    local_e8 = 0;
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_f0,0x40);
    if (0 < (int)uVar13) {
      puVar7 = (undefined8 *)(local_c0 + 8);
      uVar11 = (ulonglong)uVar13;
      do {
        puVar12 = &DAT_143f3eda8;
        if ((int)local_d8 != 0) {
          puVar12 = local_e0;
        }
        local_100 = param_5;
        local_108 = 0;
        FUN_142a31d70(*puVar7,&local_f0,puVar12,1);
        puVar7 = puVar7 + 2;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    plVar2 = local_f0;
    uVar13 = (uint)local_e8;
    uVar11 = (ulonglong)(int)(uint)local_e8;
    plVar15 = local_f0 + uVar11 * 2;
    for (plVar8 = local_f0; plVar1 = plVar2, plVar8 != plVar15; plVar8 = plVar8 + 2) {
      if ((((int)local_c8 == 0) || ((int)local_c8 == 1)) ||
         (cVar3 = FString::EndsWith(plVar8,&local_d0,1), cVar3 != '\0')) {
        local_f8[0] = '\0';
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  (&local_a8,&local_f0,plVar8,local_f8);
        if (local_f8[0] == '\0') {
          iVar5 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar5 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar5);
          }
          FString::FString((longlong)iVar5 * 0x10 + *param_2,plVar8);
        }
      }
    }
    while (uVar13 != 0) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      uVar13 = (int)uVar11 - 1;
      uVar11 = (ulonglong)uVar13;
      plVar1 = plVar1 + 2;
    }
    if (plVar2 != (longlong *)0x0) {
      FMemory::Free(plVar2);
    }
    if (local_d0 != 0) {
      FMemory::Free();
    }
    if (local_e0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_60 = 0;
    if (local_68 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_a8);
  }
  if (local_c0 != 0) {
    FMemory::Free(local_c0);
  }
  return;
}



// FUNCTION 142a426a0 FUN_142a426a0 body=117 status=ok
// SIG undefined FUN_142a426a0(void)

void FUN_142a426a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))(*(longlong **)(param_1 + 8),param_3);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x140))
              (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
  }
  FUN_142a42330(param_1,param_2,param_3,param_4,1);
  return;
}



// FUNCTION 142a42720 FUN_142a42720 body=815 status=ok
// SIG undefined FUN_142a42720(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142a42720(longlong param_1,uint param_2,ulonglong param_3)

{
  ushort uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  bool bVar16;
  code *local_78;
  longlong *plStack_70;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  undefined4 local_50;
  longlong local_48;
  
  uVar7 = 0;
  puVar2 = (ulonglong *)
           ((longlong)(int)(~*(uint *)(param_1 + 0xd4) & param_2) * 0x30 +
           *(longlong *)(param_1 + 0xb0));
  uVar1 = *(ushort *)((longlong)puVar2 + 6);
  uVar8 = puVar2[1];
  uVar12 = *puVar2 & 0xffffffffffff;
  lVar9 = (ulonglong)uVar1 * 0x98 + *(longlong *)(param_1 + 0xa0);
  uVar14 = uVar7;
  if (uVar1 == (ushort)(param_3 >> 0x30)) {
    uVar14 = param_3;
  }
  uVar5 = uVar12;
  if (uVar14 != 0) {
    if ((uVar14 & 0xffffffffffff) <= uVar12) {
      uVar14 = *puVar2;
    }
    uVar5 = uVar14 & 0xffffffffffff;
    uVar8 = uVar8 - (uVar5 - uVar12);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b29920) && (_Init_thread_header(&DAT_146b29920), DAT_146b29920 == -1))
  {
    DAT_146b29910 = 0;
    _DAT_146b29918 = 0;
    atexit((_func_5014 *)&LAB_143ebe5e0);
    _Init_thread_footer(&DAT_146b29920);
  }
  uVar4 = DAT_146b2991c;
  uVar14 = uVar5 & 0xffffffffffff0000;
  lVar13 = (uVar8 + 0xffff + uVar5 & 0xffffffffffff0000) - 1;
  lVar3 = (lVar13 - uVar14) + 0x10000;
  lVar3 = lVar3 + (ulonglong)(ushort)(lVar3 >> 0x3f);
  iVar6 = (int)((ulonglong)lVar3 >> 0x10);
  uVar10 = iVar6 + 0x3f;
  uVar11 = uVar10 >> 6;
  bVar16 = DAT_146b2991c != 0;
  iVar15 = 0;
  if ((_DAT_146b29918 < 0) &&
     (_DAT_146b29918 = (ulonglong)DAT_146b2991c << 0x20, iVar15 = 0, bVar16)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b29910);
    uVar4 = DAT_146b2991c;
    iVar15 = DAT_146b29918;
  }
  _DAT_146b29918 = CONCAT44(DAT_146b2991c,iVar15 + uVar11);
  if ((int)uVar4 < (int)(iVar15 + uVar11)) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146b29910);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)(DAT_146b29910 + (longlong)iVar15 * 8),0,(ulonglong)uVar11 * 8);
  if (iVar6 != uVar11 * 0x40) {
    *(longlong *)(DAT_146b29910 + -8 + (ulonglong)uVar11 * 8) =
         -1L << ((char)((ulonglong)lVar3 >> 0x10) + 0x40U & 0x3f);
  }
  param_1 = param_1 + 0xd8;
  if (*(int *)(lVar9 + 0x7c) != 0) {
    local_50 = *(undefined4 *)(lVar9 + 0x20);
    local_48 = DAT_146b29910;
    plStack_70 = &local_68;
    local_78 = UE4Function_Private::
               TFunctionRefCaller<<lambda_6469f621753980ca24ee48a17c4bd35a>,bool___cdecl(unsigned_int)>
               ::Call;
    local_68 = param_1;
    local_60 = uVar14;
    local_58 = lVar13;
    FUN_142a353c0(*(int *)(lVar9 + 0x7c),param_1,uVar14,lVar13,0,*(undefined8 *)(lVar9 + 0x10),
                  *(undefined4 *)(lVar9 + 0x18),*(undefined4 *)(lVar9 + 0x1c),&local_78);
  }
  if ((*(int *)((longlong)puVar2 + 0x2c) == 1) && (*(int *)(lVar9 + 0x78) != 0)) {
    OverlappingNodesInIntervalTreeMask<FPakPrecacher::FCacheBlock>
              (*(int *)(lVar9 + 0x78),param_1,uVar14,lVar13,0,*(undefined8 *)(lVar9 + 0x10),
               *(undefined4 *)(lVar9 + 0x18),*(undefined4 *)(lVar9 + 0x1c),
               *(undefined4 *)(lVar9 + 0x20),DAT_146b29910);
  }
  if (uVar10 >> 6 != 0) {
    do {
      iVar6 = (int)uVar7;
      if (*(longlong *)(DAT_146b29910 + (longlong)iVar6 * 8) != -1) {
        uVar14 = (uint)(iVar6 << 0x16) + uVar14;
        for (uVar8 = *(ulonglong *)(DAT_146b29910 + (longlong)iVar6 * 8); (uVar8 & 1) != 0;
            uVar8 = uVar8 >> 1) {
          uVar14 = uVar14 + 0x10000;
        }
        return (ulonglong)uVar1 << 0x30 | uVar14;
      }
      uVar7 = (ulonglong)(iVar6 + 1U);
    } while (iVar6 + 1U < uVar11);
  }
  return 0xffffffffffffffff;
}



// FUNCTION 142a42a50 FUN_142a42a50 body=251 status=ok
// SIG undefined FUN_142a42a50(void)

undefined8 * FUN_142a42a50(longlong param_1,undefined8 *param_2,short *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong local_res20;
  longlong local_28;
  ulonglong local_20;
  
  uVar3 = 0;
  local_res20 = 0;
  cVar1 = FUN_142a42000(param_1,param_3,&local_res20,0);
  if (cVar1 != '\0') {
    *param_2 = *(undefined8 *)(local_res20 + 0x188);
    return param_2;
  }
  local_28 = 0;
  local_20 = 0;
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (param_3[lVar5] != 0);
    uVar4 = (int)lVar5 + 1;
    local_20 = (ulonglong)uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    FGenericPlatformString::Memcpy(local_28,param_3,(longlong)(int)uVar4 * 2);
  }
  cVar1 = FUN_142a45470(param_1,&local_28);
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (cVar1 != '\0') {
    puVar2 = (undefined8 *)
             (**(code **)(**(longlong **)(param_1 + 8) + 0xa8))
                       (*(longlong **)(param_1 + 8),&local_res20,param_3);
    uVar3 = *puVar2;
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 142a42b50 GetBlock body=153 status=ok
// SIG undefined GetBlock(void)

undefined8 FPakAsyncReadFileHandle::GetBlock(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xc0);
  lVar1 = (longlong)param_2 * 8;
  if (*(longlong *)(lVar1 + lVar4) == 0) {
    puVar2 = (undefined8 *)operator_new();
    puVar3 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      *(undefined4 *)(puVar2 + 5) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x2c) = 0xffffffff;
      *(undefined2 *)(puVar2 + 6) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x32) = 0;
      puVar3 = puVar2;
    }
    *(undefined8 **)(lVar1 + *(longlong *)(param_1 + 0xc0)) = puVar3;
    *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + lVar1) + 0x2c) = param_2;
    lVar4 = *(longlong *)(param_1 + 0xc0);
  }
  return *(undefined8 *)(lVar1 + lVar4);
}



// FUNCTION 142a42bf0 FUN_142a42bf0 body=472 status=ok
// SIG undefined FUN_142a42bf0(void)

undefined8 FUN_142a42bf0(longlong param_1,longlong param_2,undefined8 param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  BOOL BVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  undefined8 uVar9;
  undefined8 local_res8;
  code *local_48;
  longlong *plStack_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  undefined8 *local_20;
  undefined8 local_18;
  longlong local_10;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  BVar4 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar4 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  FUN_142a3d920(param_1);
  if (*(int *)(param_1 + 0x108) != *(int *)(param_1 + 0x134)) {
    lVar2 = *(longlong *)(param_2 + 0x10);
    lVar6 = *(longlong *)(param_1 + 0x140);
    if (*(longlong *)(param_1 + 0x140) == 0) {
      lVar6 = param_1 + 0x138;
    }
    iVar5 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                             (longlong)*(int *)(param_1 + 0x148) - 1U) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x100);
      do {
        lVar7 = (longlong)iVar5;
        if (*(longlong *)(lVar6 + lVar7 * 0x18) == lVar2) {
          if (((iVar5 != -1) && (lVar6 = lVar6 + lVar7 * 0x18, lVar6 != 0)) &&
             (uVar1 = *(uint *)(lVar6 + 8), uVar1 != 0)) {
            local_res8 = 0;
            puVar8 = (ulonglong *)
                     ((longlong)(int)(~*(uint *)(param_1 + 0xd4) & uVar1) * 0x30 +
                     *(longlong *)(param_1 + 0xb0));
            uVar3 = *puVar8;
            local_28 = puVar8[1];
            local_30 = uVar3 & 0xffffffffffff;
            local_20 = &local_res8;
            local_10 = (uVar3 >> 0x30) * 0x98 + *(longlong *)(param_1 + 0xa0);
            plStack_40 = &local_38;
            local_48 = FUN_142a3cc90;
            local_38 = param_1;
            local_18 = param_3;
            FUN_142a353c0(*(undefined4 *)(local_10 + 0x7c),param_1 + 0xd8,local_30,
                          (local_28 - 1) + local_30,0,*(undefined8 *)(local_10 + 0x10),
                          *(undefined4 *)(local_10 + 0x18),*(undefined4 *)(local_10 + 0x1c),
                          &local_48);
            uVar9 = 1;
            goto LAB_142a42caa;
          }
          break;
        }
        iVar5 = *(int *)(lVar6 + 0x10 + lVar7 * 0x18);
      } while (iVar5 != -1);
    }
  }
  uVar9 = 0;
LAB_142a42caa:
  LeaveCriticalSection(lpCriticalSection);
  return uVar9;
}



// FUNCTION 142a42dd0 FUN_142a42dd0 body=1213 status=ok
// SIG undefined FUN_142a42dd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142a42dd0(longlong param_1,undefined8 *param_2,short *param_3)

{
  bool bVar1;
  undefined1 auVar2 [12];
  longlong lVar3;
  char cVar4;
  BOOL BVar5;
  int iVar6;
  tagPOINT tVar7;
  undefined2 *puVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lVar13;
  longlong *aj;
  uint *puVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_128 [32];
  tagPOINT local_108;
  tagPOINT tStack_100;
  undefined8 local_f8;
  uint uStack_f0;
  int iStack_ec;
  undefined8 local_e8;
  undefined2 *local_e0;
  int local_d8;
  longlong local_d0;
  tagPOINT local_c8;
  tagPOINT tStack_c0;
  uint *puStack_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  longlong local_98 [3];
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_98[0] = -1;
  local_98[1] = 0;
  tVar7.x = 0;
  tVar7.y = 0;
  local_7c = 0;
  local_98[2] = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_54 = 0;
  local_d0 = 0;
  local_108.x = 0;
  local_108.y = 0;
  tStack_100.x = 0;
  tStack_100.y = 0;
  local_74 = 0;
  local_6c = 0;
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  }
  iVar9 = *(int *)(param_1 + 0x18);
  if (iVar9 != 0) {
    iVar15 = 0;
    if (0 < iVar9) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_108,iVar9);
      tVar7 = local_108;
      iVar15 = tStack_100.x;
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar15 * 0x10 + (longlong)tVar7),*(void **)(param_1 + 0x10),
               (longlong)iVar9 << 4);
    tStack_100.x = iVar15 + iVar9;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  iVar9 = (int)local_98;
  aj = &local_d0;
  cVar4 = FPakPlatformFile::FindFileInPakFiles(&local_108,param_3);
  if (tVar7 != (tagPOINT)0x0) {
    FMemory::Free(tVar7);
  }
  lVar10 = -1;
  if (cVar4 != '\0') {
    tStack_100.x = 0;
    tStack_100.y = 0;
    local_108.x = 0;
    local_108.y = 0;
    if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
      lVar13 = -1;
      do {
        lVar13 = lVar13 + 1;
      } while (param_3[lVar13] != 0);
      uVar12 = (int)lVar13 + 1;
      tStack_100.y = 0;
      tStack_100.x = uVar12;
      if (0 < (int)uVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
      }
      aj = (longlong *)((longlong)(int)uVar12 * 2);
      FGenericPlatformString::Memcpy(local_108,param_3);
    }
    FPaths::GetPath((HDC)&local_e0,&local_108,(LPBYTE)aj,iVar9);
    if (local_108 != (tagPOINT)0x0) {
      FMemory::Free();
    }
    lVar13 = local_d0;
    puVar8 = &DAT_143f3eda8;
    if (local_d8 != 0) {
      puVar8 = local_e0;
    }
    tVar7 = (tagPOINT)FUN_142a41d50(local_d0,puVar8);
    lVar3 = local_98[0];
    local_f8 = (uint *)CONCAT44(local_f8._4_4_,(undefined4)local_f8);
    if (tVar7 != (tagPOINT)0x0) {
      iVar9 = *(int *)((longlong)tVar7 + 0x28);
      puStack_b8 = (uint *)((longlong)tVar7 + 0x10);
      iVar15 = 1;
      local_108.x = 0;
      local_108.y = 1;
      local_f8._4_4_ = 0;
      uStack_f0 = 0;
      if (iVar9 != 0) {
        puVar14 = *(uint **)((longlong)tVar7 + 0x20);
        if (*(uint **)((longlong)tVar7 + 0x20) == (uint *)0x0) {
          puVar14 = puStack_b8;
        }
        uVar12 = *puVar14;
        uStack_f0 = 0;
        iVar6 = 0;
        while (uVar12 == 0) {
          uStack_f0 = uStack_f0 + 0x20;
          local_108.x = iVar6 + 1;
          if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_142a43034;
          uVar12 = puVar14[(longlong)iVar6 + 1];
          iVar6 = iVar6 + 1;
        }
        uVar12 = -uVar12 & uVar12;
        iVar6 = 0x1f;
        if (uVar12 != 0) {
          for (; uVar12 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        local_108.y = uVar12;
        if (uVar12 == 0) {
          iVar6 = 0x20;
        }
        else {
          iVar6 = 0x1f - iVar6;
        }
        local_f8._4_4_ = (uStack_f0 - iVar6) + 0x1f;
        if (iVar9 < local_f8._4_4_) {
LAB_142a43034:
          local_f8._4_4_ = iVar9;
        }
      }
      uStack_b0 = 0xffffffff;
      iStack_ac = local_f8._4_4_;
      iStack_a8 = uStack_f0;
      iStack_a4 = iStack_ec;
      tStack_c0 = local_108;
      tStack_100 = local_108;
      auVar2._4_4_ = local_108.x;
      auVar2._8_4_ = local_108.y;
      auVar2._0_4_ = local_f8._4_4_;
      auVar16._0_8_ = auVar2._0_8_ << 0x20;
      auVar16._8_4_ = uStack_f0;
      auVar16._12_4_ = iStack_ec;
      local_e8 = auVar16._8_8_;
      uStack_f0 = 0xffffffff;
      iStack_ec = local_f8._4_4_;
      bVar1 = local_f8._4_4_ < iVar9;
      local_108 = tVar7;
      local_c8 = tVar7;
      local_f8 = puStack_b8;
      if (bVar1) {
        do {
          puVar8 = local_e0;
          if (*(longlong *)
               (*(longlong *)(lVar13 + 0xe0) +
               (longlong)*(int *)((longlong)iStack_ec * 0x20 + 0x10 + *(longlong *)local_108) * 0x48
               ) == lVar3) {
            puVar11 = (undefined8 *)((longlong)iStack_ec * 0x20 + *(longlong *)local_108);
            iVar6 = *(int *)(puVar11 + 1);
            iVar9 = iVar6 + -1;
            if (iVar6 == 0) {
              iVar9 = 0;
            }
            if ((local_d8 == 0) && (iVar9 != -1)) {
              iVar15 = 2;
            }
            *param_2 = 0;
            *(int *)(param_2 + 1) = local_d8;
            if ((local_d8 == 0) && (iVar9 + iVar15 == 0)) {
              *(undefined4 *)((longlong)param_2 + 0xc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,iVar9 + iVar15 + local_d8,0);
              _guard_xfg_dispatch_icall_nop((void *)*param_2,puVar8,(longlong)local_d8 * 2);
            }
            FString::PathAppend(param_2,*puVar11,iVar9);
            if (local_e0 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            goto LAB_142a43255;
          }
          uStack_f0 = uStack_f0 & ~tStack_100.y;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&tStack_100);
        } while (iStack_ec < (int)local_f8[6]);
      }
    }
    if (local_e0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  tStack_100.x = 0;
  tStack_100.y = 0;
  local_108.x = 0;
  local_108.y = 0;
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    lVar13 = -1;
    do {
      lVar13 = lVar13 + 1;
    } while (param_3[lVar13] != 0);
    uVar12 = (int)lVar13 + 1;
    tStack_100.y = 0;
    tStack_100.x = uVar12;
    if (0 < (int)uVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
    }
    FGenericPlatformString::Memcpy(local_108,param_3,(longlong)(int)uVar12 * 2);
  }
  cVar4 = FUN_142a45470(param_1,&local_108);
  if (local_108 != (tagPOINT)0x0) {
    FMemory::Free();
  }
  if (cVar4 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
      do {
        lVar10 = lVar10 + 1;
      } while (param_3[lVar10] != 0);
      iVar9 = (int)lVar10 + 1;
      *(int *)(param_2 + 1) = iVar9;
      if (0 < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      }
      FGenericPlatformString::Memcpy(*param_2,param_3,(longlong)iVar9 * 2);
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))(*(longlong **)(param_1 + 8),param_2,param_3);
  }
LAB_142a43255:
  if (local_68 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142a432a0 GetNextBlock body=577 status=ok
// SIG undefined GetNextBlock(void)

ulonglong FPakPrecacher::GetNextBlock(longlong param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  short sVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined2 local_res18 [4];
  int local_res20;
  longlong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  code *local_a8;
  longlong *plStack_a0;
  longlong local_98;
  longlong local_90;
  ulonglong *local_88;
  undefined2 *local_80;
  short local_78;
  longlong *local_70;
  ulonglong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  longlong *plStack_50;
  
  cVar1 = *(char *)(param_1 + 0x309);
  uVar7 = 0xffffffffffffffff;
  local_b8 = 5;
  *param_2 = 0;
  local_res18[0] = 0;
  local_c0 = 0xffffffffffffffff;
  bVar3 = false;
  lVar8 = 5;
LAB_142a432fe:
  if (((lVar8 == 0) && (cVar1 == '\0')) && (bVar3)) {
    return uVar7;
  }
  uVar6 = 0;
  do {
    local_res20 = (int)uVar6;
    uVar6 = 0;
    if (local_res20 == 0) {
      uVar6 = *(ulonglong *)(param_1 + 0x30);
    }
    uVar5 = uVar6 >> 0x30;
    if (uVar7 == 0xffffffffffffffff) {
      do {
        sVar4 = (short)uVar5;
        if (*(int *)(param_1 + 0xa8) <= (int)uVar5) break;
        local_90 = uVar5 * 0x98 + *(longlong *)(param_1 + 0xa0);
        iVar2 = *(int *)(local_90 + 0x34 + lVar8 * 0xc);
        if (*(int *)(local_90 + 0x30 + lVar8 * 0xc) != 0) {
          bVar3 = true;
        }
        if (iVar2 != 0) {
          local_c8 = *(longlong *)(local_90 + 8) + -1;
          if ((uVar7 != 0xffffffffffffffff) && ((short)(uVar7 >> 0x30) == sVar4)) {
            local_c8 = (uVar7 & 0xffffffffffff) - 1;
          }
          local_88 = &local_c0;
          local_a8 = FUN_142a3cc30;
          local_80 = local_res18;
          local_70 = &local_c8;
          plStack_a0 = &local_98;
          local_58 = 0x42a3cc30;
          uStack_54 = 1;
          local_98 = param_1;
          local_78 = sVar4;
          local_68 = uVar6;
          plStack_50 = plStack_a0;
          FUN_142a35ac0(iVar2,param_1 + 0xb0,uVar6 & 0xffffffffffff,&local_c8,0,
                        *(undefined8 *)(local_90 + 0x10),*(undefined4 *)(local_90 + 0x18),
                        *(undefined4 *)(local_90 + 0x1c),&local_58);
          uVar7 = local_c0;
        }
        uVar5 = (ulonglong)(ushort)(sVar4 + 1);
      } while (uVar7 == 0xffffffffffffffff);
    }
    if (uVar6 == 0) break;
    uVar6 = (ulonglong)(local_res20 + 1);
  } while( true );
  if ((lVar8 == 0) || (uVar7 != 0xffffffffffffffff)) {
    *param_2 = (int)local_b8;
    return uVar7;
  }
  local_b8 = (ulonglong)((int)local_b8 - 1);
  lVar8 = lVar8 + -1;
  goto LAB_142a432fe;
}



// FUNCTION 142a434f0 GetPakFolders body=461 status=ok
// SIG undefined GetPakFolders(void)

/* WARNING: Removing unreachable block (ram,0x000142a4360e) */
/* WARNING: Removing unreachable block (ram,0x000142a4358a) */
/* WARNING: Removing unreachable block (ram,0x000142a43690) */

void FPakPlatformFile::GetPakFolders(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  puVar2 = (undefined8 *)FPaths::ProjectContentDir(local_18);
  puVar3 = &DAT_143f3eda8;
  if (*(int *)(puVar2 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar2;
  }
  FString::PrintfImpl(&local_28,L"%sPaks/",puVar4);
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
  *puVar2 = 0;
  *puVar2 = local_28;
  *(undefined4 *)(puVar2 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar2 + 0xc) = local_20._4_4_;
  local_20 = 0;
  local_28 = 0;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  puVar2 = (undefined8 *)FUN_14167d0d0(local_18);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar2;
  }
  FString::PrintfImpl(&local_28,L"%sPaks/",puVar4);
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
  *puVar2 = 0;
  *puVar2 = local_28;
  *(undefined4 *)(puVar2 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar2 + 0xc) = local_20._4_4_;
  local_20 = 0;
  local_28 = 0;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  puVar2 = (undefined8 *)FPaths::EngineContentDir(local_18);
  if (*(int *)(puVar2 + 1) != 0) {
    puVar3 = (undefined2 *)*puVar2;
  }
  FString::PrintfImpl(&local_28,L"%sPaks/",puVar3);
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
  *puVar2 = 0;
  *puVar2 = local_28;
  *(undefined4 *)(puVar2 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar2 + 0xc) = local_20._4_4_;
  local_20 = 0;
  local_28 = 0;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a436c0 FUN_142a436c0 body=205 status=ok
// SIG undefined FUN_142a436c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142a436c0(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  plVar2 = (longlong *)FUN_14164bf60();
  if (((int)plVar2[1] != 0) && ((longlong *)*plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*plVar2 + 0x18))();
    if (cVar1 != '\0') {
      if ((int)plVar2[1] == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = (longlong *)*plVar2;
      }
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_98,&local_58);
      *param_1 = local_98;
      param_1[1] = uStack_90;
      param_1[2] = local_88;
      param_1[3] = uStack_80;
      param_1[8] = local_58;
      param_1[9] = uStack_50;
      param_1[4] = local_78;
      param_1[5] = uStack_70;
      param_1[10] = local_48;
      param_1[0xb] = uStack_40;
      param_1[6] = local_68;
      param_1[7] = uStack_60;
      param_1[0xc] = local_38;
      param_1[0xd] = uStack_30;
      param_1[0xe] = local_28;
      param_1[0xf] = uStack_20;
    }
  }
  return;
}



// FUNCTION 142a43790 FUN_142a43790 body=949 status=ok
// SIG undefined FUN_142a43790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142a43790(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  BOOL BVar4;
  DWORD DVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  DWORD *pDVar10;
  DWORD *pDVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  DWORD local_a8 [2];
  longlong *local_a0;
  longlong local_98;
  longlong *plStack_90;
  longlong local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  LARGE_INTEGER local_70;
  DWORD *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_a0 = param_3;
  local_a8[0] = GetCurrentThreadId();
  *param_2 = 0;
  param_2[1] = 0;
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  }
  if (*(int *)(param_1 + 6) != *(int *)((longlong)param_1 + 0x5c)) {
    puVar6 = (undefined8 *)param_1[0xd];
    if ((undefined8 *)param_1[0xd] == (undefined8 *)0x0) {
      puVar6 = param_1 + 0xc;
    }
    DVar5 = *(DWORD *)((longlong)puVar6 +
                      ((longlong)*(int *)(param_1 + 0xe) - 1U & (longlong)(int)local_a8[0]) * 4);
    if (DVar5 != 0xffffffff) {
      do {
        pDVar11 = (DWORD *)((longlong)(int)DVar5 * 0x20 + param_1[5]);
        if (*pDVar11 == local_a8[0]) {
          if (DVar5 != 0xffffffff) goto LAB_142a43851;
          break;
        }
        DVar5 = pDVar11[6];
      } while (DVar5 != 0xffffffff);
    }
  }
  pDVar11 = (DWORD *)0x0;
LAB_142a43851:
  pDVar10 = pDVar11 + 2;
  if (pDVar11 == (DWORD *)0x0) {
    pDVar10 = (DWORD *)0x0;
  }
  if (pDVar10 != (DWORD *)0x0) {
    lVar7 = *(longlong *)pDVar10;
    plVar9 = *(longlong **)(pDVar10 + 2);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    local_98 = lVar7;
    plStack_90 = plVar9;
    if (&local_98 != param_2) {
      local_98 = *param_2;
      plStack_90 = (longlong *)param_2[1];
      *param_2 = lVar7;
      param_2[1] = (longlong)plVar9;
      local_58 = lVar7;
      plStack_50 = plVar9;
    }
    plVar9 = plStack_90;
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_90 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_90)(plStack_90);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_90 + 8))(plStack_90,1);
        }
      }
    }
  }
  lVar7 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if (*param_2 != 0) goto LAB_142a43af4;
  puVar12 = &DAT_143f3eda8;
  if (local_a0 == (longlong *)0x0) {
    if (*(int *)(param_1 + 1) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*param_1;
    }
    plVar9 = (longlong *)FUN_1415c3d50();
    uVar8 = (**(code **)(*plVar9 + 0x18))(plVar9,puVar13,0);
LAB_142a4399f:
    lVar7 = FUN_142a4f390(param_1,uVar8,puVar13);
    if (lVar7 == 0) goto LAB_142a439b5;
  }
  else {
    if (*(int *)(param_1 + 1) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*param_1;
    }
    local_a0 = (longlong *)(**(code **)(*local_a0 + 0xb8))(local_a0,puVar13,0);
    if (local_a0 != (longlong *)0x0) {
      if (*(int *)(param_1 + 1) == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = (undefined2 *)*param_1;
      }
      lVar7 = operator_new(0x4c8);
      if (lVar7 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (**(code **)(*local_a0 + 0x40))();
        uVar8 = FUN_1415bcde0(lVar7,local_a0,puVar13,uVar8);
      }
      goto LAB_142a4399f;
    }
LAB_142a439b5:
    if (*(int *)(param_1 + 1) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*param_1;
    }
    LowLevelFatalErrorHandler("Unknown",0x13d6,L"Unable to create pak \"%s\" handle",puVar13);
    if (*(int *)(param_1 + 1) != 0) {
      puVar12 = (undefined2 *)*param_1;
    }
    local_b8 = puVar12;
    FDebug::AssertFailed(&DAT_14535dedb,"Unknown",0x13d6,L"Unable to create pak \"%s\" handle");
  }
  plVar9 = (longlong *)operator_new(0x18);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_143f3f2e0;
    plVar9[2] = lVar7;
  }
  local_88 = lVar7;
  local_80 = plVar9;
  SharedPointerInternals::EnableSharedFromThis(&local_88,lVar7,lVar7);
  if (param_2 != &local_88) {
    *param_2 = lVar7;
    local_88 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_80);
    plVar9 = local_80;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  }
  local_68 = local_a8;
  local_60 = param_2;
  FUN_142466ab0(param_1 + 5,local_78,&local_68,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
LAB_142a43af4:
  QueryPerformanceCounter(&local_70);
  DAT_146b298f0 = (double)local_70.QuadPart * DAT_1468b02f8 + 16777216.0;
  param_1[4] = DAT_146b298f0;
  return param_2;
}



// FUNCTION 142a43b50 FUN_142a43b50 body=682 status=ok
// SIG undefined FUN_142a43b50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142a43b50(longlong param_1,undefined8 *param_2,short *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  BOOL BVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined1 auStack_128 [32];
  longlong local_108;
  ulonglong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined1 local_e8 [32];
  byte local_c8;
  undefined7 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  int local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined4 local_8c;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_74;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x28);
  lVar10 = 0;
  local_b8 = 0xffffffffffffffff;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_74 = 0;
  local_9c = 0;
  local_94 = 0;
  local_8c = 0;
  local_f8 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f0 = param_1;
  BVar5 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar5 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 != 0) {
    iVar11 = 0;
    if (0 < iVar2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_108,iVar2);
      lVar10 = local_108;
      iVar11 = (int)local_100;
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar11 * 0x10 + lVar10),*(void **)(local_f0 + 0x10),
               (longlong)iVar2 << 4);
    local_100 = CONCAT44(local_100._4_4_,iVar11 + iVar2);
  }
  LeaveCriticalSection(lpCriticalSection);
  cVar4 = FPakPlatformFile::FindFileInPakFiles(&local_108,param_3,&local_f8,&local_b8);
  if (lVar10 != 0) {
    FMemory::Free(lVar10);
  }
  lVar10 = local_f0;
  if (cVar4 == '\0') {
    cVar4 = FUN_142a3ecc0(local_f0,param_3);
    if (cVar4 == '\0') {
      local_c8 = local_c8 & 0xf8;
      uVar12 = 0;
      uVar13 = 0;
      uVar14 = 0;
      uVar15 = 0;
      uVar6 = 0;
      uVar16 = 0xffffffffffffffff;
      local_108 = 0;
      local_100 = 0;
      if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (param_3[lVar9] != 0);
        uVar8 = (int)lVar9 + 1;
        local_100 = (ulonglong)uVar8;
        if (0 < (int)uVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
        }
        FGenericPlatformString::Memcpy(local_108,param_3,(longlong)(int)uVar8 * 2);
      }
      cVar4 = FUN_142a45470(lVar10,&local_108);
      if (local_108 != 0) {
        FMemory::Free();
      }
      if (cVar4 == '\0') {
        uVar1 = CONCAT71(uStack_c7,local_c8);
      }
      else {
        plVar3 = *(longlong **)(lVar10 + 8);
        puVar7 = (undefined4 *)(**(code **)(*plVar3 + 0xe8))(plVar3,local_e8,param_3);
        uVar12 = *puVar7;
        uVar13 = puVar7[1];
        uVar14 = puVar7[2];
        uVar15 = puVar7[3];
        uVar6 = *(undefined8 *)(puVar7 + 4);
        uVar16 = *(undefined8 *)(puVar7 + 6);
        uVar1 = *(undefined8 *)(puVar7 + 8);
      }
      *(undefined4 *)param_2 = uVar12;
      *(undefined4 *)((longlong)param_2 + 4) = uVar13;
      *(undefined4 *)(param_2 + 1) = uVar14;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar15;
      param_2[2] = uVar6;
      param_2[3] = uVar16;
      param_2[4] = uVar1;
    }
    else {
      uVar6 = *(undefined8 *)(local_f8 + 0x188);
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 7;
      *param_2 = uVar6;
      param_2[1] = uVar6;
      param_2[2] = uVar6;
      param_2[3] = 0xffffffffffffffff;
    }
  }
  else {
    uVar6 = *(undefined8 *)(local_f8 + 0x188);
    *param_2 = uVar6;
    param_2[1] = uVar6;
    param_2[2] = uVar6;
    uVar6 = uStack_b0;
    if (local_a0 != 0) {
      uVar6 = local_a8;
    }
    param_2[3] = uVar6;
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfe | 6;
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142a43e00 FUN_142a43e00 body=251 status=ok
// SIG undefined FUN_142a43e00(void)

undefined8 * FUN_142a43e00(longlong param_1,undefined8 *param_2,short *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong local_res20;
  longlong local_28;
  ulonglong local_20;
  
  uVar3 = 0;
  local_res20 = 0;
  cVar1 = FUN_142a42000(param_1,param_3,&local_res20,0);
  if (cVar1 != '\0') {
    *param_2 = *(undefined8 *)(local_res20 + 0x188);
    return param_2;
  }
  local_28 = 0;
  local_20 = 0;
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (param_3[lVar5] != 0);
    uVar4 = (int)lVar5 + 1;
    local_20 = (ulonglong)uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    }
    FGenericPlatformString::Memcpy(local_28,param_3,(longlong)(int)uVar4 * 2);
  }
  cVar1 = FUN_142a45470(param_1,&local_28);
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (cVar1 != '\0') {
    puVar2 = (undefined8 *)
             (**(code **)(**(longlong **)(param_1 + 8) + 0x98))
                       (*(longlong **)(param_1 + 8),&local_res20,param_3);
    uVar3 = *puVar2;
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 142a43f00 FUN_142a43f00 body=481 status=ok
// SIG undefined FUN_142a43f00(void)

void FUN_142a43f00(longlong param_1,short *param_2,short *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_38;
  ulonglong local_30;
  longlong local_28;
  ulonglong local_20;
  
  uVar5 = 0;
  local_28 = 0;
  local_38 = 0;
  FUN_142a42000(param_1,param_2,&local_28,0);
  FUN_142a42000(param_1,param_3,&local_38,0);
  if (local_28 == 0) {
    uVar4 = uVar5;
    if (local_38 == 0) {
      lVar8 = -1;
      local_38 = 0;
      local_30 = 0;
      if ((param_2 != (short *)0x0) && (lVar7 = lVar8, *param_2 != 0)) {
        do {
          lVar7 = lVar7 + 1;
        } while (param_2[lVar7] != 0);
        uVar6 = (int)lVar7 + 1;
        local_30 = (ulonglong)uVar6;
        if (0 < (int)uVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        }
        FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar6 * 2);
      }
      bVar1 = false;
      cVar3 = FUN_142a45470(param_1,&local_38);
      if (cVar3 == '\0') {
LAB_142a44043:
        bVar2 = false;
      }
      else {
        local_28 = 0;
        local_20 = 0;
        if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
          do {
            lVar8 = lVar8 + 1;
          } while (param_3[lVar8] != 0);
          uVar6 = (int)lVar8 + 1;
          local_20 = (ulonglong)uVar6;
          if (0 < (int)uVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
          }
          FGenericPlatformString::Memcpy(local_28,param_3,(longlong)(int)uVar6 * 2);
        }
        bVar1 = true;
        cVar3 = FUN_142a45470(param_1,&local_28);
        if (cVar3 == '\0') goto LAB_142a44043;
        bVar2 = true;
      }
      if ((bVar1) && (local_28 != 0)) {
        FMemory::Free();
      }
      if (local_38 != 0) {
        FMemory::Free();
      }
      if (bVar2) {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x118))
                  (*(longlong **)(param_1 + 8),param_2,param_3,param_4,param_5);
        return;
      }
      *param_4 = 0;
      goto LAB_142a440c7;
    }
  }
  else {
    uVar4 = *(undefined8 *)(local_28 + 0x188);
  }
  *param_4 = uVar4;
  if (local_38 != 0) {
    uVar5 = *(undefined8 *)(local_38 + 0x188);
  }
LAB_142a440c7:
  *param_5 = uVar5;
  return;
}



// FUNCTION 142a440f0 HandleCanceledRequest body=606 status=ok
// SIG undefined HandleCanceledRequest(void)

void FPakAsyncReadFileHandle::HandleCanceledRequest
               (longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
               longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  BOOL BVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 local_res8 [16];
  undefined8 local_res18;
  longlong *local_res20;
  longlong *local_68;
  longlong **local_60;
  undefined8 *local_58;
  
  local_res18 = param_3;
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  }
  uVar6 = param_4 / (longlong)(ulonglong)*(uint *)(param_1 + 0x68);
  lVar9 = (longlong)(int)uVar6;
  lVar11 = (longlong)
           (int)((param_5 + -1 + param_4) / (longlong)(ulonglong)*(uint *)(param_1 + 0x68));
  if (lVar9 <= lVar11) {
    do {
      lVar10 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(lVar10 + lVar9 * 8) == 0) {
        puVar7 = (undefined8 *)operator_new(0x38);
        puVar8 = (undefined8 *)0x0;
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          puVar7[4] = 0;
          *(undefined4 *)(puVar7 + 5) = 0;
          *(undefined4 *)((longlong)puVar7 + 0x2c) = 0xffffffff;
          *(undefined2 *)(puVar7 + 6) = 0;
          *(undefined1 *)((longlong)puVar7 + 0x32) = 0;
          puVar8 = puVar7;
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0xc0) + lVar9 * 8) = puVar8;
        *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + lVar9 * 8) + 0x2c) = (int)uVar6;
        lVar10 = *(longlong *)(param_1 + 0xc0);
      }
      plVar4 = *(longlong **)(lVar10 + lVar9 * 8);
      plVar1 = plVar4 + 5;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        if (((char)plVar4[6] == '\0') || (*(char *)((longlong)plVar4 + 0x31) != '\0')) {
          *plVar4 = 0;
          lVar10 = plVar4[3];
          plVar4[3] = 0;
          if (lVar10 != 0) {
            LOCK();
            piVar2 = (int *)(lVar10 + 0x48);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              FGraphEvent::Recycle();
            }
          }
          if (plVar4[1] != 0) {
            FMemory::Free();
            plVar4[1] = 0;
          }
          *(undefined4 *)(plVar4 + 4) = 0;
          if (plVar4[2] != 0) {
            FMemory::Free();
            plVar4[2] = 0;
          }
          *(undefined4 *)((longlong)plVar4 + 0x24) = 0;
          *(undefined2 *)(plVar4 + 6) = 0;
        }
        else {
          local_res20 = plVar4;
          FUN_14058c5a0(param_2,&param_5,&local_res20,0);
          *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + lVar9 * 8) = 0;
          local_60 = &local_68;
          local_58 = &local_res18;
          local_68 = plVar4;
          FUN_1405c0510(param_1 + 0x158,local_res8,&local_60);
          *(undefined1 *)((longlong)plVar4 + 0x32) = 1;
          plVar4 = (longlong *)*plVar4;
          if (*(char *)((longlong)plVar4 + 0x73) == '\0') {
            *(undefined1 *)((longlong)plVar4 + 0x73) = 1;
            *(undefined1 *)(plVar4 + 0xe) = 1;
            if (*(char *)((longlong)plVar4 + 0x71) == '\0') {
              (**(code **)(*plVar4 + 0x10))();
            }
          }
        }
      }
      uVar6 = (ulonglong)((int)uVar6 + 1);
      lVar9 = lVar9 + 1;
    } while (lVar9 <= lVar11);
  }
  if (*(int *)(param_2 + 8) == *(int *)(param_2 + 0x34)) {
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
              (param_1 + 0x70,local_res18);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  return;
}



// FUNCTION 142a44350 FUN_142a44350 body=530 status=ok
// SIG undefined FUN_142a44350(void)

char FUN_142a44350(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  BOOL BVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98 [24];
  longlong local_80;
  int local_74;
  undefined2 *local_40;
  int local_38;
  
  if (*(int *)(param_2 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  cVar2 = FUN_142a47650(param_1,puVar6,param_3,0);
  if ((cVar2 != '\0') && (param_4 != (longlong *)0x0)) {
    lVar8 = 0;
    local_a8 = 0;
    iVar9 = 0;
    local_a0 = 0;
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (iVar4 != 0) {
      if (0 < iVar4) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_a8,iVar4);
        lVar8 = local_a8;
        iVar9 = (int)local_a0;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar9 * 0x10 + lVar8),*(void **)(param_1 + 0x10),
                 (longlong)iVar4 << 4);
      iVar9 = iVar9 + iVar4;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    for (lVar7 = lVar8; lVar7 != (longlong)iVar9 * 0x10 + lVar8; lVar7 = lVar7 + 0x10) {
      puVar1 = *(undefined8 **)(lVar7 + 8);
      if (*(int *)(puVar1 + 1) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = (undefined2 *)*puVar1;
      }
      if (*(int *)(param_2 + 1) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = (undefined2 *)*param_2;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
      if (iVar4 == 0) {
        FUN_142a37830(local_98,puVar1,0);
        if (local_74 < *(int *)(local_80 + 0x18)) {
          do {
            puVar6 = &DAT_143f3eda8;
            if (local_38 != 0) {
              puVar6 = local_40;
            }
            (**(code **)(*param_4 + 8))(param_4,puVar6,0);
            FUN_142a396d0(local_98);
          } while (local_74 < *(int *)(local_80 + 0x18));
        }
        if (local_40 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (lVar8 != 0) {
          FMemory::Free(lVar8);
        }
        return '\x01';
      }
    }
    if (lVar8 != 0) {
      FMemory::Free(lVar8);
    }
  }
  return cVar2;
}



// FUNCTION 142a44570 FUN_142a44570 body=324 status=ok
// SIG undefined FUN_142a44570(void)

undefined8 FUN_142a44570(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined1 local_res8 [8];
  
  uVar1 = DAT_146b298e8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*param_2;
  }
  if (DAT_14667ae8c != 0) {
    puVar5 = (undefined8 *)FName::FName(local_res8,puVar9,1);
    FUN_142a4fec0(uVar1,*puVar5);
  }
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  }
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar7 = 0;
    do {
      puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 8 + lVar7);
      if (*(int *)(puVar5 + 1) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = (undefined2 *)*puVar5;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar9);
      if (iVar3 == 0) {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8 + (longlong)iVar8 * 0x10);
        if (lVar7 != 0) {
          FUN_142a3ac30(lVar7,1);
        }
        iVar3 = *(int *)(param_1 + 0x18);
        iVar4 = (iVar3 - iVar8) + -1;
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar8 * 0x10),
                     (void *)((longlong)(iVar8 + 1) * 0x10 + *(longlong *)(param_1 + 0x10)),
                     (longlong)iVar4 << 4);
          iVar3 = *(int *)(param_1 + 0x18);
        }
        *(int *)(param_1 + 0x18) = iVar3 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 0x10);
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
        return 1;
      }
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while (iVar8 < *(int *)(param_1 + 0x18));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return 0;
}



// FUNCTION 142a446e0 HasRequestsAtStatus body=108 status=ok
// SIG undefined HasRequestsAtStatus(void)

ulonglong FPakPrecacher::HasRequestsAtStatus(longlong param_1,int param_2)

{
  ulonglong in_RAX;
  int *piVar1;
  longlong lVar2;
  ushort uVar3;
  
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    do {
      lVar2 = 5;
      piVar1 = (int *)((ulonglong)uVar3 * 0x98 + *(longlong *)(param_1 + 0xa0) +
                      (longlong)param_2 * 4 + 0x6c);
      while( true ) {
        if (*piVar1 != 0) {
          return CONCAT71((int7)((ulonglong)piVar1 >> 8),1);
        }
        if (lVar2 == 0) break;
        lVar2 = lVar2 + -1;
        piVar1 = piVar1 + -3;
      }
      uVar3 = uVar3 + 1;
      in_RAX = (ulonglong)uVar3;
    } while ((int)(uint)uVar3 < *(int *)(param_1 + 0xa8));
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142a44750 FUN_142a44750 body=1229 status=ok
// SIG undefined FUN_142a44750(void)

void FUN_142a44750(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined2 *puVar11;
  int iVar12;
  undefined2 *puVar13;
  
  lVar7 = (**(code **)(*param_2 + 0x98))(param_2);
  param_1[0x32] = lVar7;
  iVar12 = 6;
  if (0 < lVar7) {
    do {
      if (0x2c < lVar7) break;
      iVar12 = iVar12 + -1;
    } while (0 < iVar12);
    if (iVar12 < 1) {
      puVar11 = &DAT_143f3eda8;
      if (*(int *)(param_1 + 1) == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = (undefined2 *)*param_1;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x1085,
                 L"Corrupted pak file \'%s\' (too short). Verify your installation.",puVar13);
      if (*(int *)(param_1 + 1) != 0) {
        puVar11 = (undefined2 *)*param_1;
      }
      FDebug::AssertFailed
                (&DAT_14535db72,"Unknown",0x1085,
                 L"Corrupted pak file \'%s\' (too short). Verify your installation.",puVar11);
      return;
    }
  }
  (**(code **)(*param_2 + 0xa8))(param_2,lVar7 + -0x2d);
  piVar1 = (int *)(param_1 + 0x14);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    lVar7 = (**(code **)(*param_2 + 0x90))(param_2);
    lVar8 = (**(code **)(*param_2 + 0x98))(param_2);
    if (lVar8 < lVar7 + 0x2d) {
      *piVar1 = 0;
      goto LAB_142a44960;
    }
  }
  puVar3 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,(longlong)param_1 + 0xcc,1);
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0xcc) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  piVar4 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar4 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,piVar1,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,piVar1,4);
    }
  }
  else {
    *piVar1 = *piVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar5 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,(longlong)param_1 + 0xa4,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,(longlong)param_1 + 0xa4,4);
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0xa4) = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_1404c11e0(param_2,param_1 + 0x15);
  FUN_1404c11e0(param_2,param_1 + 0x16);
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x17,0x14);
  if (((*(byte *)(param_2 + 5) & 1) != 0) && (*(int *)((longlong)param_1 + 0xa4) < 4)) {
    *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  }
LAB_142a44960:
  puVar11 = &DAT_143f3eda8;
  if (*piVar1 != 0x5a6f12e1) {
    if (*(int *)(param_1 + 1) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*param_1;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x1090,
               L"Trailing magic number (%ud) in \'%s\' is different than the expected one. Verify your installation."
               ,*piVar1,puVar13);
    if (*(int *)(param_1 + 1) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*param_1;
    }
    FDebug::AssertFailed
              (&DAT_14535db73,"Unknown",0x1090,
               L"Trailing magic number (%ud) in \'%s\' is different than the expected one. Verify your installation."
               ,*piVar1,puVar13);
  }
  iVar2 = *(int *)((longlong)param_1 + 0xa4);
  if ((iVar2 < 1) || (iVar12 < iVar2)) {
    if (*(int *)(param_1 + 1) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*param_1;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x1091,
               L"Invalid pak file version (%d) in \'%s\'. Verify your installation.",iVar2,puVar13);
    if (*(int *)(param_1 + 1) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*param_1;
    }
    FDebug::AssertFailed
              (&DAT_14535db74,"Unknown",0x1091,
               L"Invalid pak file version (%d) in \'%s\'. Verify your installation.",
               *(undefined4 *)((longlong)param_1 + 0xa4),puVar13);
  }
  if ((*(char *)((longlong)param_1 + 0xcc) == '\x01') &&
     (((plVar9 = (longlong *)FUN_14164bef0(), (int)plVar9[1] == 0 ||
       ((longlong *)*plVar9 == (longlong *)0x0)) ||
      (cVar6 = (**(code **)(*(longlong *)*plVar9 + 0x18))(), cVar6 == '\0')))) {
    if (*(int *)(param_1 + 1) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*param_1;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x1092,
               L"Index of pak file \'%s\' is encrypted, but this executable doesn\'t have any valid decryption keys"
               ,puVar13);
    if (*(int *)(param_1 + 1) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*param_1;
    }
    FDebug::AssertFailed
              (&DAT_14535db75,"Unknown",0x1092,
               L"Index of pak file \'%s\' is encrypted, but this executable doesn\'t have any valid decryption keys"
               ,puVar13);
  }
  lVar7 = param_1[0x15];
  if ((lVar7 < 0) || ((longlong)param_1[0x32] <= lVar7)) {
    if (*(int *)(param_1 + 1) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*param_1;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x1093,L"Index offset for pak file \'%s\' is invalid (%lld)",puVar13,lVar7)
    ;
    if (*(int *)(param_1 + 1) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*param_1;
    }
    FDebug::AssertFailed
              (&DAT_14535db76,"Unknown",0x1093,L"Index offset for pak file \'%s\' is invalid (%lld)"
               ,puVar13,param_1[0x15]);
    lVar7 = param_1[0x15];
  }
  lVar7 = param_1[0x16] + lVar7;
  if ((lVar7 < 0) || ((longlong)param_1[0x32] < lVar7)) {
    if (*(int *)(param_1 + 1) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*param_1;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x1094,L"Index end offset for pak file \'%s\' is invalid (%lld)",puVar13,
               lVar7);
    if (*(int *)(param_1 + 1) != 0) {
      puVar11 = (undefined2 *)*param_1;
    }
    FDebug::AssertFailed
              (&DAT_14535db77,"Unknown",0x1094,
               L"Index end offset for pak file \'%s\' is invalid (%lld)",puVar11,
               param_1[0x16] + param_1[0x15]);
  }
  FUN_142a467e0(param_1,param_2);
  *(undefined1 *)((longlong)param_1 + 0x199) = 1;
  uVar10 = FCommandLine::Get();
  cVar6 = FParse::Param(uVar10,L"checkpak");
  if (cVar6 != '\0') {
    FUN_142a3d130(param_1);
  }
  return;
}



// FUNCTION 142a44c20 FUN_142a44c20 body=1708 status=ok
// SIG undefined FUN_142a44c20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_142a44c20(longlong param_1,undefined8 param_2)

{
  void *_Src;
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_118 [32];
  longlong local_f8;
  ulonglong local_f0;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [24];
  undefined1 local_b8 [48];
  int local_88 [20];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  *(undefined8 *)(param_1 + 8) = param_2;
  FName::FName(&local_f8,L"uasset",1);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
            (param_1 + 0x50,local_e8,&local_f8,0);
  FName::FName(&local_f8,L"umap",1);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
            (param_1 + 0x50,local_e8,&local_f8,0);
  FName::FName(&local_f8,L"ubulk",1);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
            (param_1 + 0x50,local_e8,&local_f8,0);
  FName::FName(&local_f8,L"uexp",1);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
            (param_1 + 0x50,local_e8,&local_f8,0);
  plVar12 = (longlong *)0x0;
  puVar7 = (undefined8 *)(param_1 + 0xa0);
  if ((undefined *)*puVar7 != &DAT_145360678) {
    *(undefined4 *)(param_1 + 0xa8) = 0;
    plVar6 = plVar12;
    if (*(int *)(param_1 + 0xac) != 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar7,5);
      plVar6 = (longlong *)(ulonglong)*(uint *)(param_1 + 0xa8);
    }
    iVar3 = (int)plVar6 + 5;
    *(int *)(param_1 + 0xa8) = iVar3;
    if (*(int *)(param_1 + 0xac) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar7);
    }
    puVar7 = (undefined8 *)*puVar7;
    *puVar7 = 0x69006e0069002e;
    *(undefined2 *)(puVar7 + 1) = 0;
  }
  plVar6 = (longlong *)(param_1 + 0xb0);
  if ((wchar_t *)*plVar6 != L"GameUserSettings.ini") {
    *(undefined4 *)(param_1 + 0xb8) = 0;
    plVar9 = plVar12;
    if (*(int *)(param_1 + 0xbc) != 0x15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar6,0x15);
      plVar9 = (longlong *)(ulonglong)*(uint *)(param_1 + 0xb8);
    }
    iVar3 = (int)plVar9 + 0x15;
    *(int *)(param_1 + 0xb8) = iVar3;
    if (*(int *)(param_1 + 0xbc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar6);
    }
    builtin_wcsncpy((wchar_t *)*plVar6,L"GameUserSettings.ini",0x15);
  }
  _guard_xfg_dispatch_icall_nop(local_b8,0,0x80);
  FUN_142a436c0(local_b8);
  iVar3 = 0xf;
  piVar4 = local_88 + 1;
  iVar8 = 0xf;
  lVar11 = 0xf;
  do {
    if (piVar4[2] != 0) break;
    if (piVar4[1] != 0) {
      iVar8 = iVar8 + -1;
      break;
    }
    if (*piVar4 != 0) {
      iVar8 = iVar8 + -2;
      break;
    }
    if (piVar4[-1] != 0) {
      iVar8 = iVar8 + -3;
      break;
    }
    piVar4 = piVar4 + -4;
    iVar8 = iVar8 + -4;
    lVar11 = lVar11 + -4;
  } while (-1 < lVar11);
  if (-1 < iVar8) {
    lVar11 = 0xf;
    do {
      if (local_88[lVar11 + 4] != 0) break;
      if (local_88[lVar11 + 3] != 0) {
        iVar3 = iVar3 + -1;
        break;
      }
      if (local_88[lVar11 + 2] != 0) {
        iVar3 = iVar3 + -2;
        break;
      }
      if (local_88[lVar11 + 1] != 0) {
        iVar3 = iVar3 + -3;
        break;
      }
      iVar3 = iVar3 + -4;
      lVar11 = lVar11 + -4;
    } while (-1 < lVar11);
    if (-1 < iVar3) {
      uVar5 = FCommandLine::Get();
      cVar1 = FParse::Param(uVar5,L"fileopenlog");
      if (cVar1 == '\0') {
        uVar2 = 1;
        goto LAB_142a44e95;
      }
    }
  }
  uVar2 = 0;
LAB_142a44e95:
  *(undefined1 *)(param_1 + 0x20) = uVar2;
  _Src = DAT_14667aea0;
  local_e0 = (longlong *)0x0;
  iVar3 = (int)DAT_14667aea8;
  local_d8 = CONCAT44(local_d8._4_4_,iVar3);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e0,DAT_14667aea8 & 0xffffffff,0);
    plVar12 = local_e0;
    _guard_xfg_dispatch_icall_nop(local_e0,_Src,(longlong)iVar3 * 2);
    iVar3 = (int)local_d8;
  }
  local_e0 = (longlong *)0x0;
  local_d8 = 0;
  uVar5 = FCommandLine::Get();
  FPakPlatformFile::GetPakFolders(uVar5,&local_e0);
  UCheatManagerGunfire::GetAllCheats(local_d0,"MountAllPakFiles");
  local_f0 = 0;
  plVar6 = (longlong *)&DAT_143f3eda8;
  if (iVar3 != 0) {
    plVar6 = plVar12;
  }
  local_f8 = 0;
  if ((plVar6 != (longlong *)0x0) && ((short)*plVar6 != 0)) {
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (*(short *)((longlong)plVar6 + lVar11 * 2) != 0);
    uVar10 = (int)lVar11 + 1;
    local_f0 = (ulonglong)uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    }
    FGenericPlatformString::Memcpy(local_f8,plVar6,(longlong)(int)uVar10 * 2);
  }
  FUN_142a47be0(param_1,&local_e0,&local_f8,0);
  if (local_f8 != 0) {
    FMemory::Free();
  }
  FUN_140591050(local_d0);
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar6 == (longlong *)0x0) {
    if ((DAT_1468e2270 != 0) && (DAT_1468e2268 != (longlong *)0x0)) {
      (**(code **)(*DAT_1468e2268 + 0x28))(DAT_1468e2268,0);
      if (DAT_1468e2268 != (longlong *)0x0) {
        DAT_1468e2268 = (longlong *)FMemory::Realloc(DAT_1468e2268,0,0);
      }
      DAT_1468e2270 = 0;
    }
  }
  else {
    plVar6[1] = param_1;
    *plVar6 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar6[2] = (longlong)FUN_142a47b60;
    lVar11 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar11;
    (**(code **)(*plVar6 + 0x30))(plVar6,&DAT_1468e2268);
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    lVar11 = FMemory::Realloc(plVar6,0,0);
    if (lVar11 != 0) {
      FMemory::Free(lVar11);
    }
  }
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar6 == (longlong *)0x0) {
    if ((DAT_1468e2280 != 0) && (DAT_1468e2278 != (longlong *)0x0)) {
      (**(code **)(*DAT_1468e2278 + 0x28))(DAT_1468e2278,0);
      if (DAT_1468e2278 != (longlong *)0x0) {
        DAT_1468e2278 = (longlong *)FMemory::Realloc(DAT_1468e2278,0,0);
      }
      DAT_1468e2280 = 0;
    }
  }
  else {
    plVar6[1] = param_1;
    *plVar6 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar6[2] = (longlong)FUN_142a44350;
    lVar11 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar11;
    (**(code **)(*plVar6 + 0x30))(plVar6,&DAT_1468e2278);
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    lVar11 = FMemory::Realloc(plVar6,0,0);
    if (lVar11 != 0) {
      FMemory::Free(lVar11);
    }
  }
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar6 == (longlong *)0x0) {
    if ((DAT_1468e2290 != 0) && (DAT_1468e2288 != (longlong *)0x0)) {
      (**(code **)(*DAT_1468e2288 + 0x28))(DAT_1468e2288,0);
      if (DAT_1468e2288 != (longlong *)0x0) {
        DAT_1468e2288 = (longlong *)FMemory::Realloc(DAT_1468e2288,0,0);
      }
      DAT_1468e2290 = 0;
    }
  }
  else {
    plVar6[1] = param_1;
    *plVar6 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar6[2] = (longlong)FUN_142a44570;
    lVar11 = FDelegateHandle::GenerateNewID();
    plVar6[4] = lVar11;
    (**(code **)(*plVar6 + 0x30))(plVar6,&DAT_1468e2288);
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    lVar11 = FMemory::Realloc(plVar6,0,0);
    if (lVar11 != 0) {
      FMemory::Free(lVar11);
    }
  }
  plVar6 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar6 != (longlong *)0x0) {
    plVar6[1] = param_1;
    *plVar6 = (longlong)&PTR_GetPoolName_1453617a8;
    lVar11 = FDelegateHandle::GenerateNewID();
    plVar6[3] = lVar11;
    *plVar6 = (longlong)&PTR_GetPoolName_1453617f0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af058,1);
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_f8);
    iVar3 = DAT_1464af060;
    lVar11 = (longlong)DAT_1464af060;
    DAT_1464af060 = DAT_1464af060 + 1;
    if (DAT_1464af064 < DAT_1464af060) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af058,iVar3);
    }
    puVar7 = (undefined8 *)(lVar11 * 0x10 + _DAT_1464af058);
    *puVar7 = plVar6;
    *(undefined4 *)(puVar7 + 1) = 2;
  }
  plVar9 = local_e0;
  lVar11 = *(longlong *)(param_1 + 8);
  plVar6 = local_e0;
  for (iVar3 = (int)local_d8; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (plVar9 != (longlong *)0x0) {
    FMemory::Free(plVar9);
  }
  if (plVar12 != (longlong *)0x0) {
    FMemory::Free(plVar12);
  }
  return lVar11 != 0;
}



// FUNCTION 142a452d0 FUN_142a452d0 body=39 status=ok
// SIG undefined FUN_142a452d0(void)

void FUN_142a452d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_145360c70;
    return;
  }
  return;
}



// FUNCTION 142a45300 FUN_142a45300 body=204 status=ok
// SIG undefined FUN_142a45300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_142a45300(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar2 = FUN_1415bac00();
  if ((char)lVar2 != '\0') {
    FCommandLine::Get();
    lVar2 = FParse::Param();
    if ((char)lVar2 == '\0') {
      _guard_xfg_dispatch_icall_nop(local_98,0,0x80);
      lVar2 = FUN_142a436c0(local_98);
      uVar1 = *(undefined8 *)(param_1 + 8);
      if (DAT_146b298e8 != 0) {
        return lVar2;
      }
      lVar2 = operator_new();
      if (lVar2 != 0) {
        lVar3 = FPakPrecacher::FPakPrecacher(lVar2,uVar1,local_98);
        lVar2 = 0;
        LOCK();
        if (DAT_146b298e8 != 0) {
          lVar2 = DAT_146b298e8;
          lVar3 = DAT_146b298e8;
        }
        DAT_146b298e8 = lVar3;
        UNLOCK();
        return lVar2;
      }
      LOCK();
      if (DAT_146b298e8 == 0) {
        DAT_146b298e8 = 0;
      }
      UNLOCK();
      return DAT_146b298e8;
    }
  }
  DAT_14667ae8c = 0;
  return lVar2;
}



// FUNCTION 142a453d0 IsGreater body=145 status=ok
// SIG undefined IsGreater(void)

ulonglong TBigInt<512,1>::IsGreater(longlong param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  do {
    if (-1 < *(int *)(param_1 + 0x3c)) {
      iVar3 = 0xf;
      piVar2 = (int *)(param_1 + 0x38);
      lVar4 = 0xf;
      lVar5 = param_2 - param_1;
      goto LAB_142a45401;
    }
    piVar2 = (int *)0x0;
  } while (*(int *)(param_2 + 0x3c) < 0);
  goto LAB_142a4545e;
  while( true ) {
    if (*(int *)(lVar5 + (longlong)piVar2) != *piVar2) {
      iVar3 = iVar3 + -1;
      break;
    }
    if (*(int *)(lVar5 + -4 + (longlong)piVar2) != piVar2[-1]) {
      iVar3 = iVar3 + -2;
      break;
    }
    if (*(int *)(lVar5 + -8 + (longlong)piVar2) != piVar2[-2]) {
      iVar3 = iVar3 + -3;
      break;
    }
    piVar2 = piVar2 + -4;
    iVar3 = iVar3 + -4;
    lVar4 = lVar4 + -4;
    if (lVar4 < 0) break;
LAB_142a45401:
    if (*(int *)(lVar5 + 4 + (longlong)piVar2) != piVar2[1]) break;
  }
  if (-1 < iVar3) {
    uVar1 = *(uint *)((longlong)iVar3 * 4 + param_2);
    piVar2 = (int *)(ulonglong)uVar1;
    if (uVar1 < *(uint *)((longlong)iVar3 * 4 + param_1)) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
LAB_142a4545e:
  return (ulonglong)piVar2 & 0xffffffffffffff00;
}



// FUNCTION 142a45470 FUN_142a45470 body=454 status=ok
// SIG undefined FUN_142a45470(void)

ulonglong FUN_142a45470(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  bool bVar9;
  longlong local_res8;
  longlong local_28 [2];
  
  puVar3 = (undefined8 *)FUN_141672300(local_28,param_2,0);
  puVar7 = &DAT_143f3eda8;
  if (*(int *)(puVar3 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar3;
  }
  FName::FName(&local_res8,puVar6,1);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar4 = *(longlong *)(param_1 + 0x90);
    if (*(longlong *)(param_1 + 0x90) == 0) {
      lVar4 = param_1 + 0x88;
    }
    iVar2 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)local_res8 >> 0x20) + (int)local_res8) &
                             (longlong)*(int *)(param_1 + 0x98) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar2 * 0x10) == local_res8)
        goto LAB_142a4553b;
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x50) + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_142a4553b:
  bVar9 = iVar2 == -1;
  cVar1 = FString::EndsWith(param_2,param_1 + 0xa0,1);
  if ((cVar1 != '\0') && (cVar1 = FString::EndsWith(param_2,param_1 + 0xb0,1), cVar1 == '\0')) {
    bVar9 = false;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b29908) && (_Init_thread_header(&DAT_146b29908), DAT_146b29908 == -1))
  {
    DAT_146b298f8 = (longlong *)0x0;
    DAT_146b29900 = 0;
    atexit(FUN_143ebe480);
    _Init_thread_footer(&DAT_146b29908);
  }
  if ((((bVar9 != false) && (DAT_146b29900 != 0)) && (DAT_146b298f8 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*DAT_146b298f8 + 0x18))(), cVar1 != '\0')) {
    if (*(int *)(param_2 + 1) != 0) {
      puVar7 = (undefined2 *)*param_2;
    }
    plVar8 = (longlong *)0x0;
    if (DAT_146b29900 != 0) {
      plVar8 = DAT_146b298f8;
    }
    uVar5 = (**(code **)(*plVar8 + 0x38))(plVar8,puVar7);
    return uVar5;
  }
  return (ulonglong)bVar9;
}



// FUNCTION 142a45640 IsReadOnly body=215 status=ok
// SIG undefined IsReadOnly(void)

undefined1 FPakPlatformFile::IsReadOnly(longlong param_1,short *param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong local_18;
  ulonglong local_10;
  
  cVar1 = FUN_142a42000(param_1,param_2,0,0);
  if (cVar1 != '\0') {
    return 1;
  }
  uVar2 = 0;
  local_18 = 0;
  local_10 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_2[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_10 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,param_2,(longlong)(int)uVar3 * 2);
  }
  cVar1 = FUN_142a45470(param_1,&local_18);
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))(*(longlong **)(param_1 + 8),param_2);
  }
  return uVar2;
}



// FUNCTION 142a45720 FUN_142a45720 body=1545 status=ok
// SIG undefined FUN_142a45720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_142a45720(longlong param_1,short *param_2,uint *param_3)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  ulonglong uVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  BOOL BVar8;
  int iVar9;
  undefined8 uVar10;
  int *piVar11;
  int iVar12;
  wchar_t *pwVar13;
  undefined2 *puVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  wchar_t *pwVar18;
  uint *puVar19;
  undefined1 auStack_1e8 [32];
  undefined1 local_1c8;
  undefined1 local_1c0;
  int local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined2 *local_1a0;
  ulonglong local_198;
  undefined8 local_190;
  uint *puStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  wchar_t *local_170;
  int local_168;
  undefined4 local_164;
  longlong local_160 [2];
  longlong *local_150;
  undefined8 uStack_148;
  uint *local_140;
  undefined8 uStack_138;
  int local_130;
  undefined4 uStack_12c;
  undefined1 local_128 [4];
  undefined1 local_124 [4];
  short *local_120;
  longlong local_118;
  longlong *local_110;
  undefined **ppuStack_108;
  uint *puStack_100;
  undefined4 uStack_f8;
  int iStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  longlong local_e8 [2];
  uint local_d8 [4];
  uint *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  cVar7 = true;
  local_68 = 0xffffffff;
  local_1b8 = 0;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = (undefined2 *)0x0;
  local_198 = 0;
  local_120 = param_2;
  local_118 = param_1;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar17 = -1;
    do {
      lVar17 = lVar17 + 1;
    } while (param_2[lVar17] != 0);
    uVar15 = (int)lVar17 + 1;
    local_198 = (ulonglong)uVar15;
    if (0 < (int)uVar15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a0,0);
    }
    FGenericPlatformString::Memcpy(local_1a0,param_2,(longlong)(int)uVar15 * 2);
  }
  FUN_1416781b0(&local_1a0);
  cVar6 = BuildSettings::IsPromotedBuild();
  bVar2 = false;
  if (cVar6 == '\0') {
LAB_142a45839:
    bVar3 = bVar2;
    bVar2 = true;
    uVar10 = FPaths::CloudDir(&local_170);
    cVar6 = FString::StartsWith(&local_1a0,uVar10,1);
    bVar5 = true;
    if (cVar6 != '\0') goto LAB_142a45862;
    bVar5 = false;
  }
  else {
    bVar3 = true;
    uVar10 = FUN_14167cf00(local_160);
    cVar6 = FString::StartsWith(&local_1a0,uVar10,1);
    bVar5 = false;
    bVar2 = true;
    if (cVar6 == '\0') goto LAB_142a45839;
LAB_142a45862:
    bVar2 = bVar5;
    bVar5 = true;
  }
  if ((bVar2) && (local_170 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  if ((bVar3) && (local_160[0] != 0)) {
    FMemory::Free();
  }
  if (!bVar5) {
    BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    if (BVar8 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    }
    iVar16 = *(int *)(param_1 + 0x18);
    if (iVar16 != 0) {
      if (local_1a8._4_4_ < (int)local_1a8 + iVar16) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_1b0);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)(int)local_1a8 * 0x10 + local_1b0),*(void **)(param_1 + 0x10),
                 (longlong)iVar16 << 4);
      local_1a8 = CONCAT44(local_1a8._4_4_,(int)local_1a8 + iVar16);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  }
  local_1b8 = 0;
  if (0 < (int)local_1a8) {
    local_160[0] = 0;
    do {
      lVar17 = local_160[0];
      iVar16 = local_1b8;
      local_1c0 = 0;
      puVar14 = &DAT_143f3eda8;
      if ((int)local_198 != 0) {
        puVar14 = local_1a0;
      }
      local_b8 = 0xffffffff;
      local_e8[0] = 0;
      local_e8[1] = 0;
      local_c8 = (uint *)0x0;
      local_c0 = 0;
      local_b4 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_1c8 = 1;
      FUN_142a32e20(*(undefined8 *)(local_160[0] + 8 + local_1b0),local_e8,puVar14,1);
      puStack_188 = local_d8;
      local_190 = (undefined **)0x100000000;
      local_180._4_4_ = 0;
      uStack_178._0_4_ = 0;
      if ((int)local_c0 != 0) {
        puVar19 = local_d8;
        if (local_c8 != (uint *)0x0) {
          puVar19 = local_c8;
        }
        uVar15 = *puVar19;
        iVar9 = 0;
        while (uVar15 == 0) {
          uStack_178._0_4_ = (int)uStack_178 + 0x20;
          uVar4 = (ulonglong)local_190 >> 0x20;
          local_190 = (undefined **)CONCAT44((int)uVar4,iVar9 + 1);
          if ((int)((int)local_c0 + -1 + ((int)local_c0 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9) {
            local_180._4_4_ = (int)local_c0;
            goto LAB_142a45a3d;
          }
          uVar15 = puVar19[(longlong)iVar9 + 1];
          iVar9 = iVar9 + 1;
        }
        uVar15 = -uVar15 & uVar15;
        iVar9 = 0x1f;
        if (uVar15 != 0) {
          for (; uVar15 >> iVar9 == 0; iVar9 = iVar9 + -1) {
          }
        }
        local_190 = (undefined **)CONCAT44(uVar15,(uint)local_190);
        if (uVar15 == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - iVar9;
        }
        local_180._4_4_ = ((int)uStack_178 - iVar9) + 0x1f;
        if ((int)local_c0 < local_180._4_4_) {
          local_180._4_4_ = (int)local_c0;
        }
      }
LAB_142a45a3d:
      local_180._0_4_ = 0xffffffff;
      ppuStack_108 = local_190;
      uStack_f8 = 0xffffffff;
      iStack_f4 = local_180._4_4_;
      iStack_f0 = (int)uStack_178;
      uStack_ec = uStack_178._4_4_;
      uStack_138 = CONCAT44(local_180._4_4_,0xffffffff);
      uStack_148 = local_190;
      local_130 = (int)uStack_178;
      uStack_12c = uStack_178._4_4_;
      iVar9 = local_180._4_4_;
      local_150 = local_e8;
      local_140 = puStack_188;
      local_110 = local_e8;
      puStack_100 = puStack_188;
      if (local_180._4_4_ < (int)local_c0) {
        do {
          lVar17 = local_160[0];
          iVar16 = local_1b8;
          if ((bool)cVar7 == false) break;
          plVar1 = (longlong *)(*local_150 + (longlong)iVar9 * 0x18);
          piVar11 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                                     (&local_98,local_128,plVar1);
          if (*piVar11 == -1) {
            iVar9 = (int)plVar1[1];
            iVar16 = iVar9 + -1;
            if (iVar9 == 0) {
              iVar16 = -1;
            }
            iVar12 = iVar9 + -1;
            if (iVar9 == 0) {
              iVar12 = 0;
            }
            if (iVar12 == 0) {
LAB_142a45b9b:
              if (iVar9 == 0) {
                puVar14 = &DAT_143f3eda8;
              }
              else {
                puVar14 = (undefined2 *)*plVar1;
              }
              cVar7 = (**(code **)(*(longlong *)param_3 + 8))(param_3,puVar14,0);
              cVar7 = cVar7 != '\0';
            }
            else {
              if (iVar9 == 0) {
                iVar16 = 0;
              }
              if (((wchar_t *)*plVar1)[(longlong)iVar16 + -1] != L'/') goto LAB_142a45b9b;
              pwVar13 = L"";
              if (iVar9 != 0) {
                pwVar13 = (wchar_t *)*plVar1;
              }
              local_170 = (wchar_t *)0x0;
              local_164 = 0;
              iVar9 = 0;
              if (-1 < iVar16 + -1) {
                iVar9 = iVar16 + -1;
              }
              iVar16 = iVar9 + 1;
              if (iVar9 == 0) {
                iVar16 = 0;
              }
              pwVar18 = local_170;
              local_168 = iVar16;
              if ((0 < iVar16) &&
                 (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_170,0), iVar16 = local_168,
                 pwVar18 = local_170, 0 < local_168)) {
                wcsncpy(local_170,pwVar13,(longlong)iVar9);
                pwVar18[iVar9] = L'\0';
              }
              pwVar13 = L"";
              if (iVar16 != 0) {
                pwVar13 = pwVar18;
              }
              cVar7 = (**(code **)(*(longlong *)param_3 + 8))(param_3,pwVar13,1);
              cVar7 = cVar7 != '\0';
              if (pwVar18 != (wchar_t *)0x0) {
                FMemory::Free(pwVar18);
              }
            }
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                      (&local_98,local_124,plVar1,0);
          }
          uStack_138 = CONCAT44(uStack_138._4_4_,(uint)uStack_138 & ~uStack_148._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_148);
          lVar17 = local_160[0];
          iVar16 = local_1b8;
          iVar9 = uStack_138._4_4_;
        } while (uStack_138._4_4_ < (int)local_140[6]);
      }
      local_a0 = 0;
      if (local_a8 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (local_e8);
      local_1b8 = iVar16 + 1;
      local_160[0] = lVar17 + 0x10;
    } while (local_1b8 < (int)local_1a8);
    param_2 = local_120;
    param_1 = local_118;
    if ((bool)cVar7 == false) goto LAB_142a45c9d;
  }
  cVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))(*(longlong **)(param_1 + 8),param_2);
  if (cVar6 != '\0') {
    puVar19 = param_3;
    if ((int)local_90 != local_64) {
      local_190 = &PTR_FUN_145360d88;
      local_180 = &local_98;
      uStack_178 = &local_1b0;
      puVar19 = (uint *)&local_190;
      puStack_188 = param_3;
    }
    cVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0xf0))
                      (*(longlong **)(param_1 + 8),param_2,puVar19);
  }
LAB_142a45c9d:
  if (local_1a0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_1b0 != 0) {
    FMemory::Free();
  }
  local_50 = 0;
  if (local_58 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_98);
  return cVar7;
}



// FUNCTION 142a45d30 FUN_142a45d30 body=339 status=ok
// SIG undefined FUN_142a45d30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_142a45d30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined1 uVar2;
  BOOL BVar3;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 local_b0;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_58 = 0xffffffff;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x28);
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_b8 = 0;
  local_b0 = 0;
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    if (local_b0._4_4_ < (int)local_b0 + iVar1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_b8);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)(int)local_b0 * 0x10 + local_b8),*(void **)(param_1 + 0x10),
               (longlong)iVar1 << 4);
    local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0 + iVar1);
  }
  LeaveCriticalSection(lpCriticalSection);
  local_a8 = &PTR_FUN_145360d88;
  local_98 = &local_88;
  local_90 = &local_b8;
  local_a0 = param_3;
  uVar2 = FUN_1415ad750(param_1,param_2,&local_a8);
  local_a8 = &PTR_FUN_143f47c98;
  if (local_b8 != 0) {
    FMemory::Free();
  }
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_88);
  return uVar2;
}



// FUNCTION 142a45e90 FUN_142a45e90 body=2024 status=ok
// SIG undefined FUN_142a45e90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_142a45e90(longlong param_1,short *param_2,undefined **param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  undefined1 auVar2 [12];
  bool bVar3;
  ulonglong uVar4;
  char cVar5;
  char cVar6;
  BOOL BVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  int *piVar11;
  int iVar12;
  undefined2 *puVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  wchar_t *pwVar18;
  wchar_t *pwVar19;
  undefined **ppuVar20;
  byte bVar21;
  wchar_t *pwVar22;
  undefined1 auVar23 [16];
  undefined1 auStack_248 [32];
  undefined1 local_228;
  undefined1 local_220;
  uint local_218;
  longlong local_210;
  undefined8 local_208;
  int local_200;
  undefined2 *local_1f8;
  ulonglong local_1f0;
  undefined8 local_1e8;
  undefined **ppuStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  byte local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  wchar_t *local_1b0;
  int local_1a8;
  undefined4 local_1a4;
  longlong local_1a0;
  undefined2 *local_198;
  undefined **local_190;
  longlong local_188;
  longlong *local_180;
  undefined8 uStack_178;
  undefined **local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 local_158 [4];
  undefined1 local_154 [4];
  longlong local_150;
  short *local_148;
  longlong *local_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  undefined8 uStack_114;
  undefined4 local_10c;
  longlong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined2 local_f4;
  longlong local_e8 [2];
  undefined *local_d8 [2];
  undefined **local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  cVar6 = true;
  uVar8 = 0;
  local_68 = 0xffffffff;
  local_218 = 0;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_210 = 0;
  local_208 = 0;
  local_1f8 = (undefined2 *)0x0;
  local_1f0 = 0;
  local_1a0 = param_1;
  local_190 = param_3;
  local_148 = param_2;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar16 = -1;
    do {
      lVar16 = lVar16 + 1;
    } while (param_2[lVar16] != 0);
    uVar14 = (int)lVar16 + 1;
    local_1f0 = (ulonglong)uVar14;
    if (0 < (int)uVar14) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f8,0);
    }
    FGenericPlatformString::Memcpy(local_1f8,param_2,(longlong)(int)uVar14 * 2);
  }
  FUN_1416781b0(&local_1f8);
  cVar5 = BuildSettings::IsPromotedBuild();
  if (cVar5 == '\0') {
LAB_142a45fbf:
    uVar14 = uVar8 | 2;
    local_218 = uVar14;
    uVar10 = FPaths::CloudDir(&local_1b0);
    cVar5 = FString::StartsWith(&local_1f8,uVar10,1);
    if (cVar5 != '\0') goto LAB_142a45fec;
    bVar3 = false;
  }
  else {
    uVar14 = 1;
    uVar8 = 1;
    local_218 = 1;
    uVar10 = FUN_14167cf00(&local_1c0);
    cVar5 = FString::StartsWith(&local_1f8,uVar10,1);
    if (cVar5 == '\0') goto LAB_142a45fbf;
LAB_142a45fec:
    bVar3 = true;
  }
  if (((uVar14 & 2) != 0) &&
     (uVar14 = uVar14 & 0xfffffffd, local_218 = uVar14, local_1b0 != (wchar_t *)0x0)) {
    FMemory::Free();
  }
  if (((uVar14 & 1) != 0) && (uVar14 = uVar14 & 0xfffffffe, local_218 = uVar14, local_1c0 != 0)) {
    FMemory::Free();
  }
  if (!bVar3) {
    BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    if (BVar7 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    }
    iVar15 = *(int *)(param_1 + 0x18);
    if (iVar15 != 0) {
      if (local_208._4_4_ < (int)local_208 + iVar15) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_210);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)(int)local_208 * 0x10 + local_210),*(void **)(param_1 + 0x10),
                 (longlong)iVar15 << 4);
      local_208 = CONCAT44(local_208._4_4_,(int)local_208 + iVar15);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  }
  local_200 = 0;
  if (0 < (int)local_208) {
    local_188 = 0;
    do {
      lVar16 = local_188;
      iVar15 = local_200;
      local_220 = 0;
      puVar13 = &DAT_143f3eda8;
      if ((int)local_1f0 != 0) {
        puVar13 = local_1f8;
      }
      local_150 = *(longlong *)(local_210 + 8 + local_188);
      local_b8 = 0xffffffff;
      local_e8[0] = 0;
      local_e8[1] = 0;
      local_c8 = (undefined **)0x0;
      local_c0 = 0;
      local_b4 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_228 = 1;
      FUN_142a32e20(local_150,local_e8,puVar13,1);
      ppuStack_1e0 = local_d8;
      local_1e8 = (undefined **)0x100000000;
      local_1d8._4_4_ = 0;
      uStack_1d0._0_4_ = 0;
      if ((int)local_c0 != 0) {
        ppuVar20 = local_d8;
        if (local_c8 != (undefined **)0x0) {
          ppuVar20 = local_c8;
        }
        uVar8 = *(uint *)ppuVar20;
        iVar9 = 0;
        while (uVar8 == 0) {
          uStack_1d0._0_4_ = (int)uStack_1d0 + 0x20;
          uVar4 = (ulonglong)local_1e8 >> 0x20;
          local_1e8 = (undefined **)CONCAT44((int)uVar4,iVar9 + 1);
          if ((int)((int)local_c0 + -1 + ((int)local_c0 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar9) {
            local_1d8._4_4_ = (int)local_c0;
            goto LAB_142a461fd;
          }
          uVar8 = *(uint *)((longlong)ppuVar20 + ((longlong)iVar9 + 1) * 4);
          iVar9 = iVar9 + 1;
        }
        uVar8 = -uVar8 & uVar8;
        iVar9 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar9 == 0; iVar9 = iVar9 + -1) {
          }
        }
        local_1e8 = (undefined **)CONCAT44(uVar8,SUB84(local_1e8,0));
        if (uVar8 == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - iVar9;
        }
        local_1d8._4_4_ = ((int)uStack_1d0 - iVar9) + 0x1f;
        if ((int)local_c0 < local_1d8._4_4_) {
          local_1d8._4_4_ = (int)local_c0;
        }
      }
LAB_142a461fd:
      local_1d8._0_4_ = 0xffffffff;
      local_180 = local_e8;
      ppuStack_130 = local_1e8;
      iStack_120 = -1;
      iStack_11c = local_1d8._4_4_;
      iStack_118 = (int)uStack_1d0;
      uStack_114 = CONCAT44(uStack_114._4_4_,uStack_1d0._4_4_);
      uStack_168 = CONCAT44(local_1d8._4_4_,0xffffffff);
      uStack_178 = local_1e8;
      auVar2._4_8_ = local_1e8;
      auVar2._0_4_ = local_1d8._4_4_;
      auVar23._0_8_ = auVar2._0_8_ << 0x20;
      auVar23._8_4_ = (int)uStack_1d0;
      auVar23._12_4_ = uStack_1d0._4_4_;
      local_160 = auVar23._8_8_;
      iVar9 = local_1d8._4_4_;
      local_170 = ppuStack_1e0;
      local_138 = local_180;
      ppuStack_128 = ppuStack_1e0;
      if (local_1d8._4_4_ < (int)local_c0) {
        do {
          lVar16 = local_188;
          iVar15 = local_200;
          if ((bool)cVar6 == false) break;
          plVar1 = (longlong *)(*local_180 + (longlong)iVar9 * 0x18);
          piVar11 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                                     (&local_98,local_158,plVar1);
          lVar16 = local_1a0;
          if (*piVar11 == -1) {
            iVar15 = (int)plVar1[1];
            iVar9 = iVar15 + -1;
            iVar12 = iVar15 + -1;
            if (iVar15 == 0) {
              iVar9 = 0;
              iVar12 = -1;
            }
            if (iVar9 == 0) {
LAB_142a462c5:
              bVar21 = 0;
            }
            else {
              if (iVar15 == 0) {
                iVar12 = 0;
              }
              if (*(short *)(*plVar1 + -2 + (longlong)iVar12 * 2) != 0x2f) goto LAB_142a462c5;
              bVar21 = 1;
            }
            ppuVar20 = (undefined **)&DAT_ffffffffffffffff;
            if (bVar21 == 0) {
              local_138 = (longlong *)&DAT_ffffffffffffffff;
              ppuStack_130 = (undefined **)0x0;
              ppuStack_128 = (undefined **)0x0;
              iStack_120 = 0;
              local_108 = 0;
              local_100 = 0;
              local_f8 = 0;
              local_f4 = 0;
              iStack_11c = 0;
              iStack_118 = 0;
              uStack_114 = 0;
              local_10c = 0;
              if (iVar15 == 0) {
                local_198 = &DAT_143f3eda8;
              }
              else {
                local_198 = (undefined2 *)*plVar1;
              }
              lVar17 = 0;
              local_1c0 = 0;
              local_1b8 = 0;
              lpCriticalSection = (LPCRITICAL_SECTION)(local_1a0 + 0x28);
              BVar7 = TryEnterCriticalSection(lpCriticalSection);
              if (BVar7 == 0) {
                EnterCriticalSection(lpCriticalSection);
              }
              iVar15 = *(int *)(lVar16 + 0x18);
              if (iVar15 != 0) {
                iVar9 = 0;
                if (0 < iVar15) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_1c0,iVar15);
                  lVar17 = local_1c0;
                  iVar9 = (int)local_1b8;
                }
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)iVar9 * 0x10 + lVar17),*(void **)(local_1a0 + 0x10),
                           (longlong)iVar15 << 4);
                local_1b8 = CONCAT44(local_1b8._4_4_,iVar9 + iVar15);
              }
              LeaveCriticalSection(lpCriticalSection);
              cVar6 = FPakPlatformFile::FindFileInPakFiles(&local_1c0,local_198,0,&local_138);
              if (lVar17 != 0) {
                FMemory::Free(lVar17);
              }
              if ((cVar6 != '\0') && (ppuVar20 = ppuStack_130, iStack_120 != 0)) {
                ppuVar20 = ppuStack_128;
              }
              uVar14 = local_218;
              if (local_108 != 0) {
                FMemory::Free();
                uVar14 = local_218;
              }
            }
            param_3 = local_190;
            pwVar19 = (wchar_t *)0x0;
            iVar15 = (int)plVar1[1];
            uStack_1d0._0_4_ = (int)ppuVar20;
            uStack_1d0._4_4_ = (undefined4)((ulonglong)ppuVar20 >> 0x20);
            local_1e8 = *(undefined ***)(local_150 + 0x188);
            local_1d8._0_4_ = SUB84(local_1e8,0);
            local_1d8._4_4_ = (int)((ulonglong)local_1e8 >> 0x20);
            local_1c8 = local_1c8 & 0xfe | bVar21 | 6;
            ppuStack_1e0 = local_1e8;
            if (bVar21 == 0) {
              if (iVar15 == 0) {
                puVar13 = &DAT_143f3eda8;
              }
              else {
                puVar13 = (undefined2 *)*plVar1;
              }
              cVar6 = (**(code **)(*local_190 + 8))(local_190,puVar13,&local_1e8);
              cVar6 = cVar6 != '\0';
            }
            else {
              if (iVar15 == 0) {
                pwVar22 = L"";
              }
              else {
                pwVar22 = (wchar_t *)*plVar1;
              }
              local_1b0 = (wchar_t *)0x0;
              iVar9 = iVar15 + -2;
              local_1a4 = 0;
              if (iVar15 == 0) {
                iVar9 = -1;
              }
              iVar15 = 0;
              if (-1 < iVar9) {
                iVar15 = iVar9;
              }
              pwVar18 = (wchar_t *)(ulonglong)(iVar15 + 1);
              if (iVar15 == 0) {
                pwVar18 = pwVar19;
              }
              iVar9 = (int)pwVar18;
              local_218 = uVar14;
              local_1a8 = iVar9;
              if ((0 < iVar9) &&
                 (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b0,0), iVar9 = local_1a8,
                 pwVar19 = local_1b0, 0 < local_1a8)) {
                wcsncpy(local_1b0,pwVar22,(longlong)iVar15);
                pwVar19[iVar15] = L'\0';
              }
              param_3 = local_190;
              pwVar22 = L"";
              if (iVar9 != 0) {
                pwVar22 = pwVar19;
              }
              cVar6 = (**(code **)(*local_190 + 8))(local_190,pwVar22,&local_1e8);
              cVar6 = cVar6 != '\0';
              uVar14 = local_218 & 0xfffffffb;
              local_218 = uVar14;
              if (pwVar19 != (wchar_t *)0x0) {
                FMemory::Free(pwVar19);
              }
            }
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                      (&local_98,local_154,plVar1,0);
          }
          uStack_168 = CONCAT44(uStack_168._4_4_,(uint)uStack_168 & ~uStack_178._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_178);
          lVar16 = local_188;
          iVar15 = local_200;
          iVar9 = uStack_168._4_4_;
        } while (uStack_168._4_4_ < *(int *)(local_170 + 3));
      }
      local_a0 = 0;
      if (local_a8 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (local_e8);
      local_200 = iVar15 + 1;
      local_188 = lVar16 + 0x10;
    } while (local_200 < (int)local_208);
    param_2 = local_148;
    param_1 = local_1a0;
    if ((bool)cVar6 == false) goto LAB_142a465e9;
  }
  cVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0xd0))(*(longlong **)(param_1 + 8),param_2);
  if (cVar5 != '\0') {
    ppuVar20 = param_3;
    if ((int)local_90 != local_64) {
      local_1e8 = &PTR_FUN_145360d98;
      local_1d8 = &local_98;
      uStack_1d0 = &local_210;
      ppuVar20 = (undefined **)&local_1e8;
      ppuStack_1e0 = param_3;
    }
    cVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0xf8))
                      (*(longlong **)(param_1 + 8),param_2,ppuVar20);
  }
LAB_142a465e9:
  if (local_1f8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_210 != 0) {
    FMemory::Free();
  }
  local_50 = 0;
  if (local_58 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_98);
  return cVar6;
}



// FUNCTION 142a46680 FUN_142a46680 body=339 status=ok
// SIG undefined FUN_142a46680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_142a46680(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined1 uVar2;
  BOOL BVar3;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 local_b0;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_58 = 0xffffffff;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x28);
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_b8 = 0;
  local_b0 = 0;
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    if (local_b0._4_4_ < (int)local_b0 + iVar1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_b8);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)(int)local_b0 * 0x10 + local_b8),*(void **)(param_1 + 0x10),
               (longlong)iVar1 << 4);
    local_b0 = CONCAT44(local_b0._4_4_,(int)local_b0 + iVar1);
  }
  LeaveCriticalSection(lpCriticalSection);
  local_a8 = &PTR_FUN_145360d98;
  local_98 = &local_88;
  local_90 = &local_b8;
  local_a0 = param_3;
  uVar2 = FUN_1415ad780(param_1,param_2,&local_a8);
  local_a8 = &PTR_FUN_143f47c98;
  if (local_b8 != 0) {
    FMemory::Free();
  }
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_88);
  return uVar2;
}



// FUNCTION 142a467e0 FUN_142a467e0 body=3527 status=ok
// SIG undefined FUN_142a467e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142a467e0(longlong param_1,longlong *param_2)

{
  wchar_t **ppwVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong lVar10;
  void *pvVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  int *piVar17;
  wchar_t *pwVar18;
  undefined1 auStack_268 [32];
  wchar_t *local_248;
  undefined8 local_240;
  int local_238 [2];
  longlong *local_230;
  undefined8 local_228;
  wchar_t *local_220;
  undefined8 local_218;
  void *local_210;
  undefined8 local_208;
  wchar_t *local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  int local_1e0;
  undefined4 local_1dc;
  int local_1d8 [2];
  longlong local_1d0;
  wchar_t **local_1c8 [2];
  undefined **local_1b8;
  longlong *local_1b0;
  byte local_18f;
  undefined8 local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  undefined1 local_100 [8];
  int *local_f8;
  undefined8 local_f0;
  int *local_e8;
  undefined8 local_e0;
  int *local_d8;
  longlong local_d0 [2];
  longlong local_c0 [3];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined4 local_7c;
  longlong local_78 [2];
  undefined4 local_68;
  undefined2 local_64 [6];
  longlong local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_1d0 = param_1;
  if (*(longlong *)(param_1 + 400) < *(longlong *)(param_1 + 0xb0) + *(longlong *)(param_1 + 0xa8))
  {
    LowLevelFatalErrorHandler("Unknown",0x10a7,L"Corrupted index offset in pak file.");
    FDebug::AssertFailed(&DAT_14535db9a,"Unknown",0x10a7,L"Corrupted index offset in pak file.");
  }
  else {
    (**(code **)(*param_2 + 0xa8))(param_2,*(longlong *)(param_1 + 0xa8));
    local_1e0 = *(int *)(param_1 + 0xb0);
    lVar15 = 0;
    local_1dc = 0;
    local_1e8 = 0;
    if (0 < local_1e0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_1e8);
    }
    (**(code **)(*param_2 + 0x50))(param_2,local_1e8,*(undefined8 *)(param_1 + 0xb0));
    FArchive::FArchive(&local_1b8);
    local_128 = 0;
    local_1b8 = &PTR_FUN_143f4a3a0;
    local_120 = &local_1e8;
    local_118 = 0x7fffffffffffffff;
    FArchive::SetIsLoading(&local_1b8,1);
    FArchive::SetIsPersistent(&local_1b8,0);
    if (*(char *)(param_1 + 0xcc) != '\0') {
      FUN_142a3ea40(local_1e8,*(undefined4 *)(param_1 + 0xb0));
    }
    FSHA1::HashBuffer(local_1e8,local_1e0,&local_58);
    if (((local_58 != *(longlong *)(param_1 + 0xb8)) || (local_50 != *(longlong *)(param_1 + 0xc0)))
       || (local_48 != *(int *)(param_1 + 200))) {
      local_248 = (wchar_t *)0x0;
      local_240 = 0;
      local_230 = (longlong *)0x0;
      local_228 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_248,3);
      iVar4 = (int)local_240 + 3;
      local_240 = CONCAT44(local_240._4_4_,iVar4);
      if (local_240._4_4_ < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248);
      }
      pwVar7 = local_248;
      local_248[0] = L'0';
      local_248[1] = L'x';
      local_248[2] = L'\0';
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_230,3);
      iVar4 = (int)local_228 + 3;
      local_228 = CONCAT44(local_228._4_4_,iVar4);
      if (local_228._4_4_ < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_230);
      }
      *(undefined4 *)local_230 = 0x780030;
      *(undefined2 *)((longlong)local_230 + 4) = 0;
      local_1f0 = (param_1 - (longlong)&local_58) + 0xb8;
      plVar12 = local_230;
      do {
        FString::PrintfImpl(&local_210,L"%02X",
                            ((undefined1 *)((longlong)&local_58 + lVar15))[local_1f0]);
        pvVar11 = local_210;
        uVar3 = local_240;
        if ((int)local_208 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (int)local_208 + -1;
        }
        if (iVar4 != 0) {
          iVar6 = (int)local_240;
          lVar10 = (longlong)(int)local_240;
          iVar5 = (uint)((int)local_240 == 0) + (int)local_240 + iVar4;
          local_240 = CONCAT44(local_240._4_4_,iVar5);
          if (local_240._4_4_ < iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,uVar3 & 0xffffffff);
            pwVar7 = local_248;
          }
          _guard_xfg_dispatch_icall_nop
                    (pwVar7 + (lVar10 - (ulonglong)(iVar6 != 0)),pvVar11,(longlong)iVar4 * 2);
          (pwVar7 + (lVar10 - (ulonglong)(iVar6 != 0)))[iVar4] = L'\0';
        }
        if (local_210 != (void *)0x0) {
          FMemory::Free(local_210);
        }
        FString::PrintfImpl(&local_220,L"%02X",*(undefined1 *)((longlong)&local_58 + lVar15));
        pwVar18 = local_220;
        uVar3 = local_228;
        if ((int)local_218 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (int)local_218 + -1;
        }
        if (iVar4 != 0) {
          iVar6 = (int)local_228;
          lVar10 = (longlong)(int)local_228;
          iVar5 = (uint)((int)local_228 == 0) + iVar4 + (int)local_228;
          local_228 = CONCAT44(local_228._4_4_,iVar5);
          if (local_228._4_4_ < iVar5) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_230,uVar3 & 0xffffffff);
            plVar12 = local_230;
          }
          pvVar11 = (void *)((lVar10 - (ulonglong)(iVar6 != 0)) * 2 + (longlong)plVar12);
          _guard_xfg_dispatch_icall_nop(pvVar11,pwVar18,(longlong)iVar4 * 2);
          *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar11) = 0;
        }
        if (local_220 != (wchar_t *)0x0) {
          FMemory::Free(local_220);
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 < 0x14);
      LowLevelFatalErrorHandler("Unknown",0x10cf,L"Corrupted index in pak file (CRC mismatch).");
      FDebug::AssertFailed
                (&DAT_14535dd13,"Unknown",0x10cf,L"Corrupted index in pak file (CRC mismatch).");
      if (plVar12 != (longlong *)0x0) {
        FMemory::Free(plVar12);
      }
      param_1 = local_1d0;
      if (pwVar7 != (wchar_t *)0x0) {
        FMemory::Free(pwVar7);
        param_1 = local_1d0;
      }
    }
    piVar17 = (int *)(param_1 + 0x180);
    ppwVar1 = (wchar_t **)(param_1 + 0xd0);
    *piVar17 = 0;
    local_f8 = piVar17;
    FUN_14158ce90(&local_1b8,ppwVar1);
    if ((int *)local_1b0[1] < (int *)*local_1b0 + 1) {
      (*(code *)local_1b8[10])(&local_1b8,piVar17,4);
      if ((local_18f & 0x10) != 0) {
        FArchive::ByteSwap(&local_1b8,piVar17,4);
      }
    }
    else {
      *piVar17 = *(int *)*local_1b0;
      *local_1b0 = *local_1b0 + 4;
    }
    FPakFile::MakeDirectoryFromPath(ppwVar1);
    plVar12 = (longlong *)(param_1 + 0xe0);
    local_230 = plVar12;
    FUN_142a40be0(plVar12,*piVar17);
    local_238[0] = 0;
    if (0 < *piVar17) {
      plVar2 = (longlong *)(param_1 + 0x100);
      lVar15 = param_1;
      do {
        lVar10 = 0;
        local_a8 = 0xffffffffffffffff;
        uStack_a0 = 0;
        local_8c = 0;
        local_84 = 0;
        local_7c = 0;
        local_208 = 0;
        local_98 = 0;
        local_90 = 0;
        local_78[0] = 0;
        local_78[1] = 0;
        local_68 = 0;
        local_64[0] = 0;
        local_210 = (void *)0x0;
        FUN_14158ce90(&local_1b8,&local_210);
        iVar4 = *(int *)(lVar15 + 0xa4);
        if ((undefined8 *)local_1b0[1] < (undefined8 *)*local_1b0 + 1) {
          (*(code *)local_1b8[10])(&local_1b8,&local_a8,8);
          if ((local_18f & 0x10) != 0) {
            FArchive::ByteSwap(&local_1b8,&local_a8,8);
          }
        }
        else {
          local_a8 = *(undefined8 *)*local_1b0;
          *local_1b0 = *local_1b0 + 8;
        }
        if ((undefined8 *)local_1b0[1] < (undefined8 *)*local_1b0 + 1) {
          (*(code *)local_1b8[10])(&local_1b8,&uStack_a0,8);
          if ((local_18f & 0x10) != 0) {
            FArchive::ByteSwap(&local_1b8,&uStack_a0,8);
          }
        }
        else {
          uStack_a0 = *(undefined8 *)*local_1b0;
          *local_1b0 = *local_1b0 + 8;
        }
        if ((undefined8 *)local_1b0[1] < (undefined8 *)*local_1b0 + 1) {
          (*(code *)local_1b8[10])(&local_1b8,&local_98,8);
          if ((local_18f & 0x10) != 0) {
            FArchive::ByteSwap(&local_1b8,&local_98,8);
          }
        }
        else {
          local_98 = *(undefined8 *)*local_1b0;
          *local_1b0 = *local_1b0 + 8;
        }
        if ((int *)local_1b0[1] < (int *)*local_1b0 + 1) {
          (*(code *)local_1b8[10])(&local_1b8,&local_90,4);
          if ((local_18f & 0x10) != 0) {
            FArchive::ByteSwap(&local_1b8,&local_90,4);
          }
        }
        else {
          local_90 = *(int *)*local_1b0;
          *local_1b0 = *local_1b0 + 4;
        }
        if (iVar4 < 2) {
          if ((longlong *)local_1b0[1] < (longlong *)*local_1b0 + 1) {
            (*(code *)local_1b8[10])(&local_1b8,&local_1f0,8);
            if ((local_18f & 0x10) != 0) {
              FArchive::ByteSwap(&local_1b8,&local_1f0,8);
            }
          }
          else {
            local_1f0 = *(longlong *)*local_1b0;
            *local_1b0 = *local_1b0 + 8;
          }
        }
        (*(code *)local_1b8[10])(&local_1b8,&local_8c,0x14);
        if (2 < iVar4) {
          if (local_90 != 0) {
            FUN_142a39540(&local_1b8,local_78);
          }
          if ((undefined1 *)local_1b0[1] < (undefined1 *)*local_1b0 + 1) {
            (*(code *)local_1b8[10])(&local_1b8,local_64,1);
          }
          else {
            local_64[0] = CONCAT11(local_64[0]._1_1_,*(undefined1 *)*local_1b0);
            *local_1b0 = *local_1b0 + 1;
          }
          if ((undefined4 *)local_1b0[1] < (undefined4 *)*local_1b0 + 1) {
            (*(code *)local_1b8[10])(&local_1b8,&local_68,4);
            if ((local_18f & 0x10) != 0) {
              FArchive::ByteSwap(&local_1b8,&local_68,4);
            }
          }
          else {
            local_68 = *(undefined4 *)*local_1b0;
            *local_1b0 = *local_1b0 + 4;
          }
        }
        iVar4 = (int)plVar12[1];
        *(int *)(plVar12 + 1) = iVar4 + 1;
        if (*(int *)((longlong)plVar12 + 0xc) < iVar4 + 1) {
          TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(plVar12,iVar4);
        }
        FPakEntry::FPakEntry(*plVar12 + (longlong)iVar4 * 0x48,&local_a8);
        FUN_141672d20(&local_248,&local_210);
        uVar3 = local_240;
        iVar4 = (int)local_240;
        lVar9 = (longlong)(int)local_240;
        if ((((int)local_240 != 0) && (0 < (int)local_240 + -1)) &&
           (local_248[(longlong)((int)local_240 + -1) + -1] != L'/')) {
          iVar6 = (int)local_240 + 1;
          local_240 = CONCAT44(local_240._4_4_,iVar6);
          if (local_240._4_4_ < iVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,uVar3 & 0xffffffff);
          }
          local_248[lVar9 - (ulonglong)(iVar4 != 0)] = L'/';
          (local_248 + (lVar9 - (ulonglong)(iVar4 != 0)))[1] = L'\0';
        }
        lVar9 = lVar10;
        if (*(int *)(param_1 + 0x108) != *(int *)(param_1 + 0x134)) {
          pwVar7 = L"";
          if ((int)local_240 != 0) {
            pwVar7 = local_248;
          }
          iVar4 = FUN_140438070(pwVar7);
          lVar14 = *(longlong *)(param_1 + 0x140);
          if (*(longlong *)(param_1 + 0x140) == 0) {
            lVar14 = param_1 + 0x138;
          }
          iVar4 = *(int *)(lVar14 + ((longlong)*(int *)(param_1 + 0x148) - 1U & (longlong)iVar4) * 4
                          );
          if (iVar4 != -1) {
            lVar14 = *plVar2;
            do {
              lVar13 = (longlong)iVar4 * 0x68;
              pwVar7 = L"";
              if ((int)local_240 != 0) {
                pwVar7 = local_248;
              }
              if (*(int *)(lVar14 + 8 + lVar13) == 0) {
                puVar8 = &DAT_143f3eda8;
              }
              else {
                puVar8 = *(undefined2 **)(lVar14 + lVar13);
              }
              iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,pwVar7);
              if (iVar6 == 0) {
                if (iVar4 != -1) {
                  lVar9 = *plVar2 + lVar13;
                }
                break;
              }
              lVar14 = *plVar2;
              iVar4 = *(int *)(lVar14 + 0x60 + lVar13);
            } while (iVar4 != -1);
          }
        }
        lVar14 = lVar9 + 0x10;
        if (lVar9 == 0) {
          lVar14 = lVar10;
        }
        if (lVar14 == 0) {
          local_1c8[0] = &local_248;
          FUN_142a315a0(plVar2,local_1d8,local_1c8,0);
          lVar15 = *plVar2;
          local_e0 = FUN_141671d50(local_c0,&local_210);
          local_d8 = local_238;
          FUN_141686ec0((longlong)local_1d8[0] * 0x68 + 0x10 + lVar15,local_104,&local_e0);
          if (local_c0[0] != 0) {
            FMemory::Free();
          }
LAB_142a47189:
          do {
            pwVar7 = (wchar_t *)(local_240 & 0xffffffff);
            do {
              while( true ) {
                pwVar18 = (wchar_t *)0x0;
                pwVar16 = L"";
                if ((int)pwVar7 != 0) {
                  pwVar16 = local_248;
                }
                if (*(int *)(param_1 + 0xd8) == 0) {
                  pwVar7 = L"";
                }
                else {
                  pwVar7 = *ppwVar1;
                }
                iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(pwVar7,pwVar16);
                lVar15 = local_1d0;
                piVar17 = local_f8;
                if (iVar4 == 0) goto LAB_142a47507;
                iVar6 = 0;
                iVar4 = (int)local_240 + -1;
                if ((int)local_240 == 0) {
                  iVar4 = iVar6;
                }
                if ((int)local_240 == 0) {
                  pwVar16 = L"";
                  iVar5 = iVar6;
                }
                else {
                  pwVar16 = local_248;
                  iVar5 = (int)local_240 + -1;
                }
                if ((-1 < iVar4 + -1) && (iVar6 = iVar5, iVar4 <= iVar5)) {
                  iVar6 = iVar4 + -1;
                }
                local_200 = (wchar_t *)0x0;
                pwVar7 = (wchar_t *)(ulonglong)(iVar6 + 1);
                if (iVar6 == 0) {
                  pwVar7 = pwVar18;
                }
                local_1f8 = pwVar7;
                if (0 < (int)pwVar7) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_200,0);
                  pwVar18 = local_200;
                  pwVar7 = (wchar_t *)((ulonglong)local_1f8 & 0xffffffff);
                  if (0 < (int)local_1f8) {
                    wcsncpy(local_200,pwVar16,(longlong)iVar6);
                    pwVar18[iVar6] = L'\0';
                  }
                }
                if (local_248 != (wchar_t *)0x0) {
                  FMemory::Free();
                }
                iVar4 = local_1f8._4_4_;
                iVar6 = (int)pwVar7;
                local_200 = (wchar_t *)0x0;
                pwVar16 = pwVar18 + iVar6;
                local_240 = CONCAT44(local_1f8._4_4_,iVar6);
                local_1f8 = (wchar_t *)0x0;
                do {
                  local_248 = pwVar18;
                  if (pwVar16 == pwVar18) goto LAB_142a47292;
                  pwVar16 = pwVar16 + -1;
                } while (*pwVar16 != L'/');
                iVar5 = (int)((longlong)pwVar16 - (longlong)pwVar18 >> 1);
                if (iVar5 != -1) break;
LAB_142a47292:
                if (&local_248 != ppwVar1) {
                  iVar6 = *(int *)(param_1 + 0xd8);
                  pwVar7 = *ppwVar1;
                  local_240 = CONCAT44(iVar4,iVar6);
                  if ((iVar6 != 0) || (iVar4 != 0)) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_248,iVar6);
                    _guard_xfg_dispatch_icall_nop(local_248,pwVar7,(longlong)iVar6 * 2);
                    goto LAB_142a47189;
                  }
                  local_240 = 0;
                  pwVar7 = (wchar_t *)0x0;
                }
              }
              iVar4 = 0;
              if (iVar6 == 0) {
                pwVar18 = L"";
                iVar6 = iVar4;
              }
              else {
                iVar6 = iVar6 + -1;
              }
              if ((-1 < iVar5) && (iVar4 = iVar6, iVar5 < iVar6)) {
                iVar4 = iVar5;
              }
              local_220 = (wchar_t *)0x0;
              pwVar7 = (wchar_t *)(ulonglong)(iVar4 + 1);
              if (iVar4 == 0) {
                pwVar7 = (wchar_t *)0x0;
              }
              pwVar16 = local_220;
              local_218 = pwVar7;
              if (0 < (int)pwVar7) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_220,0);
                pwVar16 = local_220;
                pwVar7 = (wchar_t *)((ulonglong)local_218 & 0xffffffff);
                if (0 < (int)local_218) {
                  wcsncpy(local_220,pwVar18,(longlong)iVar4);
                  pwVar16[iVar4] = L'\0';
                }
              }
              lVar15 = 0;
              if (local_248 != (wchar_t *)0x0) {
                FMemory::Free(local_248);
              }
              iVar4 = local_218._4_4_;
              local_218 = (wchar_t *)0x0;
              local_220 = (wchar_t *)0x0;
              iVar6 = (int)pwVar7;
              local_240 = CONCAT44(iVar4,iVar6);
              local_248 = pwVar16;
              if (((iVar6 != 0) && (0 < iVar6 + -1)) && (pwVar16[(longlong)iVar6 + -2] != L'/')) {
                local_240 = CONCAT44(iVar4,iVar6 + 1);
                if (iVar4 < iVar6 + 1) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,pwVar7);
                }
                local_248[(longlong)iVar6 - (ulonglong)(iVar6 != 0)] = L'/';
                (local_248 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)))[1] = L'\0';
                pwVar7 = (wchar_t *)(local_240 & 0xffffffff);
              }
              lVar10 = lVar15;
              if (*(int *)(param_1 + 0x108) != *(int *)(param_1 + 0x134)) {
                pwVar18 = L"";
                if ((int)pwVar7 != 0) {
                  pwVar18 = local_248;
                }
                iVar4 = FUN_140438070(pwVar18);
                lVar9 = *(longlong *)(param_1 + 0x140);
                if (*(longlong *)(param_1 + 0x140) == 0) {
                  lVar9 = param_1 + 0x138;
                }
                iVar4 = *(int *)(lVar9 + ((longlong)*(int *)(param_1 + 0x148) - 1U & (longlong)iVar4
                                         ) * 4);
                if (iVar4 != -1) {
                  lVar9 = *plVar2;
                  do {
                    lVar14 = (longlong)iVar4 * 0x68;
                    pwVar7 = L"";
                    if ((int)local_240 != 0) {
                      pwVar7 = local_248;
                    }
                    if (*(int *)(lVar14 + 8 + lVar9) == 0) {
                      puVar8 = &DAT_143f3eda8;
                    }
                    else {
                      puVar8 = *(undefined2 **)(lVar14 + lVar9);
                    }
                    iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,pwVar7);
                    if (iVar6 == 0) {
                      if (iVar4 != -1) {
                        pwVar7 = (wchar_t *)(local_240 & 0xffffffff);
                        lVar10 = *plVar2 + lVar14;
                        goto LAB_142a4748f;
                      }
                      break;
                    }
                    lVar9 = *plVar2;
                    iVar4 = *(int *)(lVar14 + 0x60 + lVar9);
                  } while (iVar4 != -1);
                }
                pwVar7 = (wchar_t *)(local_240 & 0xffffffff);
              }
LAB_142a4748f:
              lVar9 = lVar10 + 0x10;
              if (lVar10 == 0) {
                lVar9 = lVar15;
              }
            } while (lVar9 != 0);
            local_1c8[0] = &local_248;
            FUN_142a315a0(plVar2,local_100,local_1c8,0);
          } while( true );
        }
        local_f0 = FUN_141671d50(local_d0,&local_210);
        local_e8 = local_238;
        FUN_141686ec0(lVar14,local_108,&local_f0);
        if (local_d0[0] != 0) {
          FMemory::Free();
        }
LAB_142a47507:
        if (local_248 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        if (local_210 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_78[0] != 0) {
          FMemory::Free();
        }
        local_238[0] = local_238[0] + 1;
        plVar12 = local_230;
      } while (local_238[0] < *piVar17);
    }
    FArchive::~FArchive(&local_1b8);
    if (local_1e8 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142a475b0 MakeDirectoryFromPath body=151 status=ok
// SIG undefined MakeDirectoryFromPath(void)

void FPakFile::MakeDirectoryFromPath(longlong *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (int)param_1[1];
  iVar4 = iVar2 + -1;
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = -1;
    iVar3 = -1;
  }
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  if (0 < iVar3) {
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    if (*(short *)(*param_1 + -2 + (longlong)iVar4 * 2) != 0x2f) {
      iVar3 = (2 - (uint)(iVar2 != 0)) + iVar2;
      *(int *)(param_1 + 1) = iVar3;
      if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
      }
      puVar1 = (undefined2 *)(*param_1 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
      *puVar1 = 0x2f;
      puVar1[1] = 0;
    }
  }
  return;
}



// FUNCTION 142a47650 FUN_142a47650 body=1282 status=ok
// SIG undefined FUN_142a47650(void)

undefined8 FUN_142a47650(longlong param_1,short *param_2,int param_3,short *param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  char cVar4;
  BOOL BVar5;
  longlong lVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  undefined2 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  wchar_t *pwVar15;
  uint uVar16;
  undefined8 uVar17;
  wchar_t *pwVar18;
  int iVar19;
  longlong local_res8;
  undefined4 in_stack_ffffffffffffff38;
  undefined2 uVar20;
  wchar_t *local_b8;
  ulonglong local_b0;
  int local_a8;
  wchar_t *local_a0;
  int local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  wchar_t *local_80;
  int local_78;
  undefined4 local_74;
  undefined2 *local_70;
  undefined8 local_68;
  undefined2 *local_60;
  undefined8 local_58;
  longlong local_50;
  longlong *local_48;
  
  uVar20 = (undefined2)((uint)in_stack_ffffffffffffff38 >> 0x10);
  uVar17 = 0;
  local_res8 = param_1;
  lVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))(*(longlong **)(param_1 + 8),param_2,0);
  plVar7 = (longlong *)operator_new(0x18);
  local_48 = (longlong *)0x0;
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *plVar7 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    plVar7[2] = lVar6;
    local_48 = plVar7;
  }
  local_50 = lVar6;
  SharedPointerInternals::EnableSharedFromThis(&local_50,lVar6,lVar6);
  if (local_50 != 0) {
    lVar6 = operator_new(0x1a0);
    if (lVar6 == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)
               FUN_142a38250(lVar6,*(undefined8 *)(param_1 + 8),param_2,
                             *(undefined1 *)(param_1 + 0x20));
    }
    local_90 = plVar7;
    if (*(char *)((longlong)plVar7 + 0x199) != '\0') {
      if (param_4 != (short *)0x0) {
        plVar2 = plVar7 + 0x1a;
        if ((short *)*plVar2 != param_4) {
          iVar12 = 0;
          if (*param_4 == 0) {
            iVar10 = 0;
          }
          else {
            lVar6 = -1;
            do {
              lVar6 = lVar6 + 1;
            } while (param_4[lVar6] != 0);
            iVar10 = (int)lVar6 + 1;
          }
          *(undefined4 *)(plVar7 + 0x1b) = 0;
          if (*(int *)((longlong)plVar7 + 0xdc) != iVar10) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar2,iVar10);
            iVar12 = (int)plVar7[0x1b];
          }
          *(int *)(plVar7 + 0x1b) = iVar10 + iVar12;
          if (*(int *)((longlong)plVar7 + 0xdc) < iVar10 + iVar12) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar2);
          }
          if (iVar10 != 0) {
            _guard_xfg_dispatch_icall_nop((void *)*plVar2,param_4,(longlong)iVar10 * 2);
          }
        }
        FPakFile::MakeDirectoryFromPath(plVar2);
      }
      local_b8 = (wchar_t *)0x0;
      local_b0 = 0;
      if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (param_2[lVar6] != 0);
        uVar11 = (int)lVar6 + 1;
        local_b0 = (ulonglong)uVar11;
        if (0 < (int)uVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8);
        }
        FGenericPlatformString::Memcpy(local_b8,param_2,(longlong)(int)uVar11 * 2);
      }
      cVar4 = FString::EndsWith(&local_b8,L"_P.pak",1);
      if (cVar4 != '\0') {
        local_a8 = 1;
        if ((int)local_b0 == 0) {
          pwVar18 = L"";
          iVar12 = 0;
        }
        else {
          iVar12 = (int)local_b0 + -1;
          pwVar18 = local_b8;
        }
        pwVar15 = (wchar_t *)0x0;
        iVar10 = iVar12 + -6;
        iVar19 = 0;
        if ((-1 < iVar10) && (iVar19 = iVar12, iVar10 < iVar12)) {
          iVar19 = iVar10;
        }
        local_80 = (wchar_t *)0x0;
        local_74 = 0;
        pwVar8 = (wchar_t *)(ulonglong)(iVar19 + 1);
        if (iVar19 == 0) {
          pwVar8 = pwVar15;
        }
        local_78 = (int)pwVar8;
        if ((0 < local_78) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,0), pwVar15 = local_80,
           0 < local_78)) {
          wcsncpy(local_80,pwVar18,(longlong)iVar19);
          pwVar15[iVar19] = L'\0';
        }
        local_70 = (undefined2 *)0x0;
        local_68 = 2;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
        puVar3 = local_70;
        FGenericPlatformString::Convert<char,wchar_t>
                  (local_70,2,&DAT_14535df24,2,CONCAT22(uVar20,0x3f));
        uVar20 = 0xffff;
        puVar9 = &DAT_143f3eda8;
        if ((int)local_68 != 0) {
          puVar9 = puVar3;
        }
        uVar11 = FUN_141592950(&local_b8,puVar9,0,1,0xffffffff);
        if (puVar3 != (undefined2 *)0x0) {
          FMemory::Free(puVar3);
        }
        if (0 < (int)uVar11) {
          local_58 = 2;
          local_60 = (undefined2 *)0x0;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60);
          puVar3 = local_60;
          FGenericPlatformString::Convert<char,wchar_t>
                    (local_60,2,&DAT_14535e2bc,2,CONCAT22(uVar20,0x3f));
          puVar9 = &DAT_143f3eda8;
          if ((int)local_58 != 0) {
            puVar9 = puVar3;
          }
          iVar12 = FUN_141592950(&local_b8,puVar9,0,1,uVar11 - 1);
          if (puVar3 != (undefined2 *)0x0) {
            FMemory::Free(puVar3);
          }
          if (iVar12 != -1) {
            uVar16 = (int)local_b0 - 1;
            if ((int)local_b0 == 0) {
              uVar16 = 0;
            }
            if (iVar12 + 1U < uVar16) {
              uVar16 = iVar12 + 1U;
            }
            uVar13 = (int)local_b0 - 1;
            if ((int)local_b0 == 0) {
              uVar13 = 0;
            }
            uVar14 = uVar16;
            if ((uVar16 <= uVar11) && (uVar14 = uVar13, uVar11 < uVar13)) {
              uVar14 = uVar11;
            }
            local_a0 = (wchar_t *)0x0;
            local_94 = 0;
            pwVar18 = L"";
            if ((int)local_b0 != 0) {
              pwVar18 = local_b8;
            }
            iVar12 = uVar14 - uVar16;
            local_98 = iVar12 + 1;
            if (iVar12 == 0) {
              local_98 = 0;
            }
            if ((0 < local_98) &&
               (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,0), pwVar8 = local_a0,
               0 < local_98)) {
              wcsncpy(local_a0,pwVar18 + (int)uVar16,(longlong)iVar12);
              pwVar8[iVar12] = L'\0';
            }
            cVar4 = FString::IsNumeric(&local_a0);
            if (cVar4 != '\0') {
              pwVar18 = L"";
              if (local_98 != 0) {
                pwVar18 = local_a0;
              }
              iVar12 = _wtoi(pwVar18);
              if (0 < iVar12) {
                local_a8 = iVar12 + 1;
              }
            }
            param_1 = local_res8;
            if (local_a0 != (wchar_t *)0x0) {
              FMemory::Free();
              param_1 = local_res8;
            }
          }
        }
        param_3 = param_3 + local_a8 * 100;
        plVar7 = local_90;
        if (pwVar15 != (wchar_t *)0x0) {
          FMemory::Free(pwVar15);
          plVar7 = local_90;
        }
      }
      BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
      if (BVar5 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
      }
      iVar12 = *(int *)(param_1 + 0x18);
      plVar2 = (longlong *)(param_1 + 0x10);
      *(int *)(param_1 + 0x18) = iVar12 + 1;
      uStack_88 = plVar7;
      local_90._0_4_ = param_3;
      if (*(int *)(param_1 + 0x1c) < iVar12 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar12);
      }
      piVar1 = (int *)(*plVar2 + (longlong)iVar12 * 0x10);
      *piVar1 = (int)local_90;
      piVar1[1] = local_90._4_4_;
      piVar1[2] = (int)uStack_88;
      piVar1[3] = uStack_88._4_4_;
      local_90 = &local_res8;
      TMergeSort<TRotationInPlaceMerge<TJugglingRotation<FEuclidDivisionGCD>_>,2>::
      Sort<FPakPlatformFile::FPakListEntry,TDereferenceWrapper<FPakPlatformFile::FPakListEntry,TLess<FPakPlatformFile::FPakListEntry>_>_>
                (*plVar2,*(undefined4 *)(param_1 + 0x18),&local_90);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
      uVar17 = 1;
      if (local_b8 != (wchar_t *)0x0) {
        FMemory::Free();
      }
    }
  }
  plVar7 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_48)(local_48);
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
  return uVar17;
}



// FUNCTION 142a47b60 FUN_142a47b60 body=116 status=ok
// SIG undefined FUN_142a47b60(void)

ulonglong FUN_142a47b60(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong local_18 [2];
  
  local_18[1] = 6;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"*.pak",0xc);
  uVar1 = FUN_142a47be0(param_1,param_2,local_18,0);
  if (local_18[0] != 0) {
    FMemory::Free();
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 142a47be0 FUN_142a47be0 body=1051 status=ok
// SIG undefined FUN_142a47be0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142a47dde) */
/* WARNING: Removing unreachable block (ram,0x000142a47de7) */

ulonglong FUN_142a47be0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  BOOL BVar2;
  ulonglong uVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStack_178 [32];
  longlong **local_158;
  undefined1 local_148 [4];
  undefined4 local_144;
  longlong *local_140;
  undefined8 local_138;
  ulonglong local_130;
  undefined8 local_128;
  undefined1 local_120 [8];
  longlong local_118;
  longlong local_110 [4];
  longlong local_f0 [2];
  longlong local_e0 [2];
  longlong local_d0 [2];
  longlong local_c0 [3];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  uVar12 = 0;
  local_144 = 0;
  local_158 = &local_140;
  local_140 = (longlong *)0x0;
  local_138 = 0;
  local_118 = param_1;
  FUN_142a41c70(*(undefined8 *)(param_1 + 8));
  if ((int)local_138 == 0) {
    local_130 = 0;
    local_128 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_130,0);
    local_158 = (longlong **)CONCAT62(local_158._2_6_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_130,6,"*.pak");
    local_158 = &local_140;
    FUN_142a41c70(*(undefined8 *)(param_1 + 8),param_2,&local_130,param_4);
    if (local_130 != 0) {
      FMemory::Free();
    }
  }
  AlgoImpl::
  IntroSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TGreater<FString>_>_>
            (local_140,(longlong)(int)local_138,local_148[0],local_148);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x28);
  local_130 = 0;
  local_128 = 0;
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar13 = *(int *)(param_1 + 0x18);
  iVar15 = 0;
  uVar14 = uVar12;
  if (iVar13 != 0) {
    iVar15 = 0;
    if (0 < iVar13) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_130,iVar13);
      uVar14 = local_130;
      iVar15 = (int)local_128;
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar15 * 0x10 + uVar14),*(void **)(local_118 + 0x10),
               (longlong)iVar13 << 4);
    iVar15 = iVar15 + iVar13;
  }
  LeaveCriticalSection(lpCriticalSection);
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  for (uVar8 = uVar14; uVar8 != (longlong)iVar15 * 0x10 + uVar14; uVar8 = uVar8 + 0x10) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (&local_a8,local_120,*(undefined8 *)(uVar8 + 8),0);
  }
  uVar3 = 0;
  uVar8 = uVar3;
  if (0 < (int)local_138) {
    do {
      puVar9 = (undefined8 *)((longlong)local_140 + uVar8);
      piVar4 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                                (&local_a8,local_120,puVar9);
      if (*piVar4 == -1) {
        puVar5 = (undefined8 *)FPaths::ProjectContentDir(local_f0);
        if (*(int *)(puVar5 + 1) == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = (undefined2 *)*puVar5;
        }
        FString::PrintfImpl(local_110,L"%sPaks/%s-",puVar7,&DAT_146299580);
        cVar1 = FString::StartsWith(puVar9,local_110,1);
        if (local_110[0] != 0) {
          FMemory::Free();
        }
        if (local_f0[0] != 0) {
          FMemory::Free();
        }
        if (cVar1 == '\0') {
          uVar6 = FPaths::ProjectContentDir(local_e0);
          cVar1 = FString::StartsWith(puVar9,uVar6,1);
          if (local_e0[0] != 0) {
            FMemory::Free();
          }
          if (cVar1 == '\0') {
            uVar6 = FPaths::EngineContentDir(local_d0);
            cVar1 = FString::StartsWith(puVar9,uVar6,1);
            if (local_d0[0] != 0) {
              FMemory::Free();
            }
            if (cVar1 == '\0') {
              uVar6 = FUN_14167d0d0(local_c0);
              cVar1 = FString::StartsWith(puVar9,uVar6,1);
              if (local_c0[0] != 0) {
                FMemory::Free();
              }
              uVar6 = 0;
              if (cVar1 != '\0') {
                uVar6 = 1;
              }
            }
            else {
              uVar6 = 2;
            }
          }
          else {
            uVar6 = 3;
          }
        }
        else {
          uVar6 = 4;
        }
        if (*(int *)(puVar9 + 1) == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = (undefined2 *)*puVar9;
        }
        FUN_142a47650(local_118,puVar7,uVar6,0);
        uVar12 = (ulonglong)((int)uVar12 + 1);
      }
      uVar11 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar11;
      uVar8 = uVar8 + 0x10;
    } while ((int)uVar11 < (int)local_138);
    local_144 = (undefined4)uVar12;
    uVar14 = local_130;
  }
  local_60 = 0;
  if (local_68 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_a8);
  if (uVar14 != 0) {
    FMemory::Free(uVar14);
  }
  plVar10 = local_140;
  for (iVar13 = (int)local_138; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_140 != (longlong *)0x0) {
    FMemory::Free(local_140);
  }
  return uVar12;
}



// FUNCTION 142a48000 MoveFile body=250 status=ok
// SIG undefined MoveFile(void)

ulonglong FPakPlatformFile::MoveFile(longlong param_1,undefined8 param_2,short *param_3)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong local_18;
  ulonglong local_10;
  
  uVar3 = FUN_142a42000(param_1,param_3,0,0);
  if ((char)uVar3 != '\0') {
    return uVar3 & 0xffffffffffffff00;
  }
  bVar2 = 0;
  local_18 = 0;
  local_10 = 0;
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (param_3[lVar5] != 0);
    uVar4 = (int)lVar5 + 1;
    local_10 = (ulonglong)uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,param_3,(longlong)(int)uVar4 * 2);
  }
  cVar1 = FUN_142a45470(param_1,&local_18);
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (cVar1 != '\0') {
    bVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x88))
                      (*(longlong **)(param_1 + 8),param_2,param_3);
  }
  return (ulonglong)bVar2;
}



// FUNCTION 142a48100 Negate body=438 status=ok
// SIG undefined Negate(void)

void TBigInt<512,1>::Negate(ulonglong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  *param_1 = ~*param_1;
  param_1[1] = ~param_1[1];
  param_1[2] = ~param_1[2];
  param_1[3] = ~param_1[3];
  param_1[4] = ~param_1[4];
  param_1[5] = ~param_1[5];
  param_1[6] = ~param_1[6];
  param_1[7] = ~param_1[7];
  uVar1 = (ulonglong)(uint)*param_1 + (ulonglong)DAT_1461f6110;
  *(uint *)param_1 = (uint)uVar1;
  uVar1 = (ulonglong)*(uint *)((longlong)param_1 + 4) + (uVar1 >> 0x20) + (ulonglong)DAT_1461f6114;
  *(uint *)((longlong)param_1 + 4) = (uint)uVar1;
  uVar1 = (ulonglong)(uint)param_1[1] + (uVar1 >> 0x20) + (ulonglong)DAT_1461f6118;
  *(uint *)(param_1 + 1) = (uint)uVar1;
  uVar1 = (ulonglong)*(uint *)((longlong)param_1 + 0xc) + (uVar1 >> 0x20) + (ulonglong)DAT_1461f611c
  ;
  *(uint *)((longlong)param_1 + 0xc) = (uint)uVar1;
  uVar1 = (ulonglong)(uint)param_1[2] + (uVar1 >> 0x20) + (ulonglong)DAT_1461f6120;
  *(uint *)(param_1 + 2) = (uint)uVar1;
  uVar1 = (ulonglong)*(uint *)((longlong)param_1 + 0x14) + (uVar1 >> 0x20) +
          (ulonglong)DAT_1461f6124;
  *(uint *)((longlong)param_1 + 0x14) = (uint)uVar1;
  uVar1 = (ulonglong)DAT_1461f6128 + (uVar1 >> 0x20) + (ulonglong)(uint)param_1[3];
  *(uint *)(param_1 + 3) = (uint)uVar1;
  uVar1 = (ulonglong)*(uint *)((longlong)param_1 + 0x1c) + (uVar1 >> 0x20) +
          (ulonglong)DAT_1461f612c;
  *(uint *)((longlong)param_1 + 0x1c) = (uint)uVar1;
  uVar1 = (ulonglong)DAT_1461f6130 + (uVar1 >> 0x20) + (ulonglong)(uint)param_1[4];
  *(uint *)(param_1 + 4) = (uint)uVar1;
  uVar1 = (ulonglong)*(uint *)((longlong)param_1 + 0x24) + (uVar1 >> 0x20) +
          (ulonglong)DAT_1461f6134;
  *(uint *)((longlong)param_1 + 0x24) = (uint)uVar1;
  uVar1 = (ulonglong)(uint)param_1[5] + (uVar1 >> 0x20) + (ulonglong)DAT_1461f6138;
  *(uint *)(param_1 + 5) = (uint)uVar1;
  uVar1 = (ulonglong)DAT_1461f613c + (uVar1 >> 0x20) +
          (ulonglong)*(uint *)((longlong)param_1 + 0x2c);
  *(uint *)((longlong)param_1 + 0x2c) = (uint)uVar1;
  uVar1 = (ulonglong)(uint)param_1[6] + (uVar1 >> 0x20) + (ulonglong)DAT_1461f6140;
  *(uint *)(param_1 + 6) = (uint)uVar1;
  uVar1 = (ulonglong)*(uint *)((longlong)param_1 + 0x34) + (uVar1 >> 0x20) +
          (ulonglong)DAT_1461f6144;
  *(uint *)((longlong)param_1 + 0x34) = (uint)uVar1;
  lVar2 = (ulonglong)DAT_1461f6148 + (uVar1 >> 0x20) + (ulonglong)(uint)param_1[7];
  *(uint *)(param_1 + 7) = (uint)lVar2;
  *(uint *)((longlong)param_1 + 0x3c) =
       (int)((ulonglong)lVar2 >> 0x20) + *(uint *)((longlong)param_1 + 0x3c) + DAT_1461f614c;
  return;
}



// FUNCTION 142a482c0 NewRequestsToLowerComplete body=304 status=ok
// SIG undefined NewRequestsToLowerComplete(void)

void FPakPrecacher::NewRequestsToLowerComplete
               (longlong param_1,undefined1 param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  BOOL BVar4;
  longlong lVar5;
  longlong lVar6;
  
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  lVar6 = ((longlong)param_4 + 0xb) * 0x20;
  *(longlong *)(lVar6 + param_1) = param_3;
  FUN_142a3d920(param_1);
  *(int *)(param_1 + 0x270) = *(int *)(param_1 + 0x270) + 1;
  lVar1 = (longlong)param_4 * 0x20 + param_1;
  lVar5 = *(longlong *)(lVar1 + 0x178);
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(param_3 + 0x10);
    if ((*(char *)(param_3 + 0x73) == '\0') || (lVar5 == 0)) {
      *(undefined8 *)(param_3 + 0x10) = 0;
    }
    else {
      lVar5 = 0;
    }
    *(longlong *)(lVar1 + 0x178) = lVar5;
  }
  FUN_142a3da10(param_1,param_2,lVar5,*(undefined4 *)(lVar1 + 0x168));
  *(undefined8 *)(lVar6 + param_1) = 0;
  iVar2 = *(int *)(param_1 + 0x268);
  *(int *)(param_1 + 0x268) = iVar2 + 1;
  if (*(int *)(param_1 + 0x26c) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x260,iVar2);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x260) + (longlong)iVar2 * 8) = param_3;
  *(undefined4 *)(lVar1 + 0x168) = 0;
  cVar3 = CanStartAnotherTask(param_1);
  if (cVar3 != '\0') {
    FUN_142a3b050(param_1);
  }
  *(int *)(param_1 + 0x270) = *(int *)(param_1 + 0x270) + -1;
                    /* WARNING: Could not recover jumptable at 0x000142a483e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 142a483f0 OpenAsyncRead body=296 status=ok
// SIG undefined OpenAsyncRead(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FPakPlatformFile::OpenAsyncRead(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined4 local_4c;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_34;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  cVar2 = FUN_1415bac00();
  if ((cVar2 != '\0') && (0 < DAT_14667ae8c)) {
    uVar4 = 0;
    local_78 = 0xffffffffffffffff;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_34 = 0;
    local_5c = 0;
    local_54 = 0;
    local_4c = 0;
    local_88[0] = 0;
    cVar2 = FUN_142a42000(param_1,param_2,local_88,&local_78);
    lVar1 = local_88[0];
    if ((cVar2 != '\0') &&
       ((local_88[0] != 0 && (local_88[0] = 0, *(longlong *)(lVar1 + 0x10) != 0)))) {
      lVar3 = operator_new(0x1b0);
      if (lVar3 != 0) {
        uVar4 = FUN_142a37f10(lVar3,&local_78,lVar1,param_2);
      }
      if (local_48 == 0) {
        return uVar4;
      }
      FMemory::Free();
      return uVar4;
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  uVar4 = IPlatformFile::OpenAsyncRead(param_1,param_2);
  return uVar4;
}



// FUNCTION 142a48520 FUN_142a48520 body=471 status=ok
// SIG undefined FUN_142a48520(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_142a48520(longlong param_1,short *param_2,undefined1 param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  char cVar2;
  BOOL BVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  longlong local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x28);
  lVar4 = 0;
  local_a0 = 0;
  local_98 = 0xffffffffffffffff;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_54 = 0;
  local_7c = 0;
  local_74 = 0;
  local_6c = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = param_3;
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  lVar6 = lVar4;
  if (iVar1 != 0) {
    iVar7 = 0;
    if (0 < iVar1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_b0,iVar1);
      lVar6 = local_b0;
      iVar7 = (int)local_a8;
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar7 * 0x10 + lVar6),*(void **)(param_1 + 0x10),
               (longlong)iVar1 << 4);
    local_a8 = CONCAT44(local_a8._4_4_,iVar7 + iVar1);
  }
  LeaveCriticalSection(lpCriticalSection);
  cVar2 = FPakPlatformFile::FindFileInPakFiles(&local_b0,param_2,&local_a0,&local_98);
  if (lVar6 != 0) {
    FMemory::Free(lVar6);
  }
  if (cVar2 == '\0') {
    local_a8 = 0;
    local_b0 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (param_2[lVar6] != 0);
      uVar5 = (int)lVar6 + 1;
      local_a8 = (ulonglong)uVar5;
      if (0 < (int)uVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b0,0);
      }
      FGenericPlatformString::Memcpy(local_b0,param_2,(longlong)(int)uVar5 * 2);
    }
    cVar2 = FUN_142a45470(param_1,&local_b0);
    if (local_b0 != 0) {
      FMemory::Free();
    }
    if (cVar2 != '\0') {
      lVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb8))
                        (*(longlong **)(param_1 + 8),param_2,local_b8);
    }
  }
  else {
    lVar4 = FUN_142a3e340(param_1,param_2,local_a0,&local_98);
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  return lVar4;
}



// FUNCTION 142a48700 OpenWrite body=98 status=ok
// SIG undefined OpenWrite(void)

undefined8
FPakPlatformFile::OpenWrite
          (longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_142a42000(param_1,param_2,0,0);
  if (cVar1 == '\0') {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 200))
                      (*(longlong **)(param_1 + 8),param_2,param_3,param_4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 142a48770 FUN_142a48770 body=739 status=ok
// SIG undefined FUN_142a48770(void)

void FUN_142a48770(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong local_28 [2];
  longlong local_18 [2];
  
  plVar3 = (longlong *)FUN_1416a0eb0();
  lVar1 = param_1 + 0xb8;
  puVar4 = (undefined8 *)FName::ToString(lVar1,local_28);
  puVar5 = &DAT_143f3eda8;
  if (*(int *)(puVar4 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*puVar4;
  }
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0xb8))(plVar3,puVar6,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (plVar3 == (longlong *)0x0) {
    puVar4 = (undefined8 *)FName::ToString(lVar1,local_18);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar4;
    }
    LowLevelFatalErrorHandler("Unknown",0xaa2,L"PanicSyncRead failed to open pak file %s",puVar6);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    puVar4 = (undefined8 *)FName::ToString(lVar1,local_18);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar4;
    }
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0xaa2,L"PanicSyncRead failed to open pak file %s",puVar6);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  cVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(param_1 + 0x98));
  if (cVar2 == '\0') {
    puVar4 = (undefined8 *)FName::ToString(lVar1,local_18);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar4;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0xaa5,L"PanicSyncRead failed to seek pak file %s   %d bytes at %lld ",
               puVar6,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x98));
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    puVar4 = (undefined8 *)FName::ToString(lVar1,local_18);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar4;
    }
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0xaa5,
               L"PanicSyncRead failed to seek pak file %s   %d bytes at %lld ",puVar6,
               *(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x98));
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  cVar2 = (**(code **)(*plVar3 + 0x20))(plVar3,param_2,*(undefined8 *)(param_1 + 0xa0));
  if (cVar2 == '\0') {
    puVar4 = (undefined8 *)FName::ToString(lVar1,local_18);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar4;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0xaaa,L"PanicSyncRead failed to read pak file %s   %d bytes at %lld ",
               puVar6,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x98));
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    puVar4 = (undefined8 *)FName::ToString(lVar1,local_18);
    if (*(int *)(puVar4 + 1) != 0) {
      puVar5 = (undefined2 *)*puVar4;
    }
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0xaaa,
               L"PanicSyncRead failed to read pak file %s   %d bytes at %lld ",puVar5,
               *(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x98));
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  (**(code **)*plVar3)(plVar3,1);
  return;
}



// FUNCTION 142a48a60 FUN_142a48a60 body=541 status=ok
// SIG undefined FUN_142a48a60(void)

longlong * FUN_142a48a60(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  LARGE_INTEGER local_res10;
  longlong local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_30 = (longlong *)param_1[0xb];
  lVar7 = 0;
  local_38 = 0;
  if (local_30 == (longlong *)0x0) {
LAB_142a48abc:
    if ((local_30 != (longlong *)0x0) && (local_38 = param_1[10], local_38 != 0))
    goto LAB_142a48bb3;
  }
  else {
    LOCK();
    iVar4 = (int)local_30[1];
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(local_30 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (!bVar8) {
      LOCK();
      bVar8 = iVar4 == (int)local_30[1];
      if (bVar8) {
        *(int *)(local_30 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar8) goto LAB_142a48abc;
      LOCK();
      iVar4 = (int)local_30[1];
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(local_30 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
    local_30 = (longlong *)0x0;
  }
  uVar5 = FPlatformFileManager::Get();
  plVar6 = (longlong *)FPlatformFileManager::FindPlatformFile(uVar5,L"PakFile");
  if (plVar6 != (longlong *)0x0) {
    uVar5 = (**(code **)(*plVar6 + 0x50))(plVar6);
    plVar6 = (longlong *)FUN_142a43790(*param_1,local_28,uVar5);
    if (&local_38 != plVar6) {
      local_38 = *plVar6;
      *plVar6 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_30,plVar6 + 1);
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_20 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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
    param_1[10] = local_38;
    plVar6 = (longlong *)param_1[0xb];
    if (local_30 != plVar6) {
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)param_1[0xb];
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
      param_1[0xb] = (longlong)local_30;
    }
  }
LAB_142a48bb3:
  lVar3 = *param_1;
  QueryPerformanceCounter(&local_res10);
  plVar6 = local_30;
  DAT_146b298f0 = (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0;
  *(double *)(lVar3 + 0x20) = DAT_146b298f0;
  *param_2 = 0;
  lVar3 = param_1[0xb];
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    iVar4 = *(int *)(lVar3 + 8);
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(lVar3 + 8) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (!bVar8) {
      LOCK();
      bVar8 = iVar4 == *(int *)(lVar3 + 8);
      if (bVar8) {
        *(int *)(lVar3 + 8) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar8) {
        lVar7 = param_2[1];
        goto LAB_142a48c1b;
      }
      LOCK();
      iVar4 = *(int *)(lVar3 + 8);
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(lVar3 + 8) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
    param_2[1] = 0;
LAB_142a48c1b:
    if (lVar7 != 0) {
      *param_2 = param_1[10];
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142a48c80 PrecacheChunks body=868 status=ok
// SIG undefined PrecacheChunks(void)

ulonglong FSignedArchiveReader::PrecacheChunks(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  BOOL BVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  ushort uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong local_res20;
  int *local_70;
  longlong lStack_68;
  
  lVar18 = *(longlong *)(param_1 + 0xb0);
  local_res20 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  lVar9 = lVar18 + (ulonglong)(ushort)(lVar18 >> 0x3f);
  iVar5 = (int)((ulonglong)lVar9 >> 0x10);
  lVar10 = lVar18 + (longlong)iVar5 * -0x10000 + param_3;
  uVar17 = ((longlong)((ulonglong)(ushort)(lVar10 >> 0x3f) + lVar10) >> 0x10) + 1;
  if (*(int *)((longlong)param_2 + 0xc) != (int)uVar17) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,uVar17 & 0xffffffff);
  }
  if (0 < (longlong)uVar17) {
    uVar16 = lVar9 >> 0x10 & 0xffffffff;
    lVar9 = lVar18;
    do {
      iVar15 = (int)uVar16;
      iVar6 = iVar15;
      if (0 < param_3) {
        iVar6 = (int)(lVar18 + (ulonglong)(ushort)(lVar18 >> 0x3f) >> 0x10);
      }
      lVar10 = lVar18;
      if (param_3 < 1) {
        lVar10 = lVar9;
      }
      lVar9 = (longlong)iVar6 * 0x10000;
      lVar14 = param_3;
      if (lVar9 + 0x10000 < lVar10 + param_3) {
        lVar14 = (lVar9 - lVar10) + 0x10000;
      }
      if (*(int *)(param_1 + 0xcc) == iVar15) {
        lStack_68 = param_1 + 0xc0;
        local_70 = (int *)0x0;
      }
      else {
        if (iVar15 == *(int *)(param_1 + 0x90) + -1) {
          uVar12 = (ushort)((longlong)*(undefined8 *)(param_1 + 0xa0) >> 0x3f);
          lVar13 = (ulonglong)(ushort)((short)*(undefined8 *)(param_1 + 0xa0) + uVar12) -
                   (ulonglong)uVar12;
          if (lVar13 == 0) {
            lVar13 = 0x10000;
          }
        }
        else {
          lVar13 = 0x10000;
        }
        lVar4 = *(longlong *)(param_1 + 0xb8);
        uVar7 = FUN_141594c40(lVar4 + 0x158);
        local_70 = (int *)0x0;
        if (uVar7 != 0) {
          local_70 = *(int **)((&DAT_1468a81f8)[uVar7 >> 0xe] + 8 +
                              (ulonglong)(uVar7 & 0x3fff) * 0x18);
          FLockFreeLinkPolicy::FreeLockFreeLink(uVar7);
        }
        if ((local_70 == (int *)0x0) &&
           (piVar11 = (int *)operator_new(0x28), local_70 = (int *)0x0, piVar11 != (int *)0x0)) {
          *piVar11 = -1;
          piVar11[2] = 0;
          piVar11[3] = 0;
          piVar11[4] = 0;
          piVar11[5] = 0;
          piVar11[6] = 0;
          piVar11[7] = 0;
          piVar11[8] = 0;
          piVar11[9] = 0;
          local_70 = piVar11;
        }
        *local_70 = iVar15;
        *(longlong *)(local_70 + 2) = lVar9;
        *(longlong *)(local_70 + 4) = lVar13;
        local_70[6] = 0;
        local_70[7] = 0;
        LOCK();
        local_70[8] = 0;
        UNLOCK();
        LOCK();
        local_70[9] = 2;
        UNLOCK();
        BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x100));
        if (BVar8 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x100));
        }
        iVar3 = *(int *)(lVar4 + 0xf8);
        *(int *)(lVar4 + 0xf8) = iVar3 + 1;
        if (*(int *)(lVar4 + 0xfc) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar4 + 0xf0,iVar3);
        }
        *(int **)(*(longlong *)(lVar4 + 0xf0) + (longlong)iVar3 * 8) = local_70;
        LOCK();
        *(int *)(lVar4 + 0x128) = *(int *)(lVar4 + 0x128) + 1;
        UNLOCK();
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x100));
        if (*(longlong **)(lVar4 + 0x130) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar4 + 0x130) + 0x10))();
        }
        lStack_68 = 0;
      }
      iVar3 = (int)param_2[1];
      lVar9 = (longlong)iVar3;
      *(int *)(param_2 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
      }
      lVar13 = *param_2;
      uVar16 = (ulonglong)(iVar15 + 1U);
      lVar18 = lVar18 + lVar14;
      puVar1 = (undefined8 *)(lVar13 + lVar9 * 0x28);
      *puVar1 = local_70;
      puVar1[1] = lStack_68;
      param_3 = param_3 - lVar14;
      plVar2 = (longlong *)(lVar13 + 0x10 + lVar9 * 0x28);
      *plVar2 = lVar10 + (longlong)iVar6 * -0x10000;
      plVar2[1] = local_res20;
      *(longlong *)(lVar13 + 0x20 + lVar9 * 0x28) = lVar14;
      lVar9 = lVar10;
      local_res20 = local_res20 + lVar14;
    } while ((longlong)(int)((iVar15 + 1U) - iVar5) < (longlong)uVar17);
  }
  return uVar17;
}



// FUNCTION 142a48ff0 FUN_142a48ff0 body=1134 status=ok
// SIG undefined FUN_142a48ff0(void)

int FUN_142a48ff0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  BOOL BVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  bool bVar15;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  
  uVar10 = 0;
  LOCK();
  iVar3 = *(int *)(param_1 + 0x128);
  if (iVar3 == 0) {
    *(int *)(param_1 + 0x128) = 0;
    iVar3 = 0;
  }
  UNLOCK();
  if (0 < iVar3) {
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
    }
    iVar3 = *(int *)(param_1 + 0xf8);
    if (iVar3 != 0) {
      iVar14 = *(int *)(param_1 + 0x148);
      if (*(int *)(param_1 + 0x14c) < iVar14 + iVar3) {
        TArray<void_*,FDefaultAllocator>::ResizeTo((longlong *)(param_1 + 0x140));
        iVar14 = *(int *)(param_1 + 0x148);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar14 * 8),
                 *(void **)(param_1 + 0xf0),(longlong)iVar3 << 3);
      *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + iVar3;
    }
    LOCK();
    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) - *(int *)(param_1 + 0xf8);
    UNLOCK();
    *(undefined4 *)(param_1 + 0xf8) = 0;
    if (*(int *)(param_1 + 0xfc) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xf0,0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x100));
  }
  iVar3 = *(int *)(param_1 + 0x148);
  if (0 < iVar3) {
    iVar14 = 1;
    plVar1 = (longlong *)(param_1 + 0x140);
    uVar13 = uVar10;
    do {
      uVar8 = 0;
      iVar12 = (int)uVar10;
      piVar2 = *(int **)(uVar13 + *plVar1);
      LOCK();
      bVar15 = piVar2[9] == 0;
      if (bVar15) {
        piVar2[9] = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar7 = *piVar2;
        if (*(int *)(param_1 + 0x3c) == iVar7) {
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
        }
        if (*(int *)(param_1 + 0x54) == iVar7) {
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
        }
        if (*(int *)(param_1 + 0x6c) == iVar7) {
          *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
        }
        if (*(int *)(param_1 + 0x84) == iVar7) {
          *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
        }
        if (*(int *)(param_1 + 0x9c) == iVar7) {
          *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
        }
        if (*(int *)(param_1 + 0xb4) == iVar7) {
          *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
        }
        if (*(int *)(param_1 + 0xcc) == iVar7) {
          *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + -1;
        }
        if (*(int *)(param_1 + 0xe4) == iVar7) {
          *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + -1;
        }
        iVar7 = *(int *)(param_1 + 0x148);
        iVar5 = (iVar7 - iVar12) + -1;
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + (longlong)iVar12 * 8),
                     (void *)(*plVar1 + (longlong)iVar14 * 8),(longlong)iVar5 << 3);
          iVar7 = *(int *)(param_1 + 0x148);
        }
        *(int *)(param_1 + 0x148) = iVar7 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
        iVar12 = iVar12 + -1;
        iVar14 = iVar14 + -1;
        uVar13 = uVar13 - 8;
        uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
        if (uVar6 != 0) {
          uVar8 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
        }
        *(int **)(uVar8 + 8) = piVar2;
        FLockFreePointerListLIFORoot<128,1>::Push(param_1 + 0x158);
      }
      else if (*(longlong *)(piVar2 + 6) == 0) {
        piVar9 = (int *)(param_1 + 0x3c);
        uVar10 = uVar8;
        do {
          if (*piVar9 == *piVar2) {
            piVar9 = (int *)(param_1 + 0x38 + uVar8 * 0x18);
            *piVar9 = *piVar9 + 1;
            QueryPerformanceCounter(&local_res10);
            lVar11 = param_1 + ((longlong)(int)uVar10 + 2) * 0x18;
            *(double *)(param_1 + 0x40 + uVar8 * 0x18) =
                 (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0;
            if (lVar11 != 0) {
              *(longlong *)(piVar2 + 6) = lVar11;
              goto LAB_142a493fe;
            }
            break;
          }
          uVar10 = (ulonglong)((int)uVar10 + 1);
          uVar8 = uVar8 + 1;
          piVar9 = piVar9 + 6;
        } while ((longlong)uVar8 < 8);
        lVar11 = 0;
        if (*(int *)(param_1 + 0x38) == 0) {
          lVar11 = param_1 + 0x30;
        }
        if ((*(int *)(param_1 + 0x50) == 0) &&
           ((lVar11 == 0 || (*(double *)(param_1 + 0x58) < *(double *)(lVar11 + 0x10))))) {
          lVar11 = param_1 + 0x48;
        }
        if ((*(int *)(param_1 + 0x68) == 0) &&
           ((lVar11 == 0 || (*(double *)(param_1 + 0x70) < *(double *)(lVar11 + 0x10))))) {
          lVar11 = param_1 + 0x60;
        }
        if ((*(int *)(param_1 + 0x80) == 0) &&
           ((lVar11 == 0 || (*(double *)(param_1 + 0x88) < *(double *)(lVar11 + 0x10))))) {
          lVar11 = param_1 + 0x78;
        }
        if ((*(int *)(param_1 + 0x98) == 0) &&
           ((lVar11 == 0 || (*(double *)(param_1 + 0xa0) < *(double *)(lVar11 + 0x10))))) {
          lVar11 = param_1 + 0x90;
        }
        if ((*(int *)(param_1 + 0xb0) == 0) &&
           ((lVar11 == 0 || (*(double *)(param_1 + 0xb8) < *(double *)(lVar11 + 0x10))))) {
          lVar11 = param_1 + 0xa8;
        }
        if ((*(int *)(param_1 + 200) == 0) &&
           ((lVar11 == 0 || (*(double *)(param_1 + 0xd0) < *(double *)(lVar11 + 0x10))))) {
          lVar11 = param_1 + 0xc0;
        }
        if ((*(int *)(param_1 + 0xe0) == 0) &&
           ((lVar11 == 0 || (*(double *)(param_1 + 0xe8) < *(double *)(lVar11 + 0x10))))) {
          lVar11 = param_1 + 0xd8;
        }
        if (lVar11 != 0) {
          *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
          QueryPerformanceCounter(&local_res18);
          *(double *)(lVar11 + 0x10) = (double)local_res18.QuadPart * DAT_1468b02f8 + 16777216.0;
          *(int *)(lVar11 + 0xc) = *piVar2;
          *(longlong *)(piVar2 + 6) = lVar11;
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0xa8))
                    (*(longlong **)(param_1 + 0x28),*(undefined8 *)(piVar2 + 2));
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x50))
                    (*(longlong **)(param_1 + 0x28),**(undefined8 **)(piVar2 + 6),
                     *(undefined8 *)(piVar2 + 4));
          iVar7 = FCrc::MemCrc32(**(undefined8 **)(piVar2 + 6),piVar2[4],0);
          if (iVar7 != *(int *)(*(longlong *)(param_1 + 8) + (longlong)*piVar2 * 4)) {
            FCrc::MemCrc32(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10) << 2,0);
          }
LAB_142a493fe:
          LOCK();
          piVar2[9] = piVar2[9] + -1;
          UNLOCK();
          LOCK();
          piVar2[8] = piVar2[8] + 1;
          UNLOCK();
          if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x138) + 0x10))();
          }
        }
      }
      uVar10 = (ulonglong)(iVar12 + 1U);
      iVar14 = iVar14 + 1;
      uVar13 = uVar13 + 8;
    } while ((int)(iVar12 + 1U) < *(int *)(param_1 + 0x148));
  }
  return iVar3;
}



// FUNCTION 142a49460 FUN_142a49460 body=330 status=ok
// SIG undefined FUN_142a49460(void)

undefined8
FUN_142a49460(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5,ulonglong param_6,undefined4 param_7)

{
  ushort uVar1;
  char cVar2;
  BOOL BVar3;
  ushort *puVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  uint local_res8 [2];
  undefined1 local_38 [8];
  ulonglong *local_30;
  uint *local_28;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  puVar4 = (ushort *)FUN_142a4a2f0(param_1,param_3,param_4);
  if (puVar4 == (ushort *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *puVar4;
    local_res8[0] =
         TIntervalTreeAllocator<FPakPrecacher::FPakInRequest>::Alloc((longlong *)(param_1 + 0xb0));
    puVar6 = (ulonglong *)
             ((longlong)(int)(~*(uint *)(param_1 + 0xd4) & local_res8[0]) * 0x30 +
             *(longlong *)(param_1 + 0xb0));
    local_30 = puVar6 + 3;
    *puVar6 = (ulonglong)uVar1 << 0x30 | param_5;
    puVar6[1] = param_6;
    *(undefined4 *)(puVar6 + 5) = param_7;
    *(undefined4 *)((longlong)puVar6 + 0x2c) = 1;
    puVar6[2] = param_2;
    *local_30 = *(ulonglong *)(param_1 + 0x38);
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
    *(uint *)(puVar6 + 4) = local_res8[0];
    *(ulonglong *)(param_2 + 8) = *puVar6;
    *(ulonglong *)(param_2 + 0x10) = *local_30;
    *(uint *)(param_2 + 0x18) = local_res8[0];
    local_28 = local_res8;
    FUN_141f0b300(param_1 + 0x100,local_38,&local_30,0);
    cVar2 = FUN_142a3b8e0(param_1,local_res8[0]);
    if (cVar2 == '\0') {
      DAT_146b29814 = DAT_146b29814 + 1;
    }
    else {
      DAT_146b29810 = DAT_146b29810 + 1;
    }
    uVar5 = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return uVar5;
}



// FUNCTION 142a495b0 FUN_142a495b0 body=480 status=ok
// SIG undefined FUN_142a495b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142a495b0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong lStack_90;
  longlong local_88;
  int local_80;
  longlong local_7c;
  longlong local_74;
  int local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x65) == '\0') {
    FUN_142a48a60(param_1 + 0x18,&local_a8);
    local_98 = 0xffffffffffffffff;
    lStack_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_54 = 0;
    local_7c = 0;
    local_74 = 0;
    local_6c = 0;
    (**(code **)(*local_a8 + 0xa8))(local_a8,*(undefined8 *)(param_1 + 0x20));
    FUN_142a4d650(&local_98,local_a8,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0xa4));
    if ((((*(longlong *)(param_1 + 0x3c) != local_7c) || (*(longlong *)(param_1 + 0x44) != local_74)
         ) || (*(int *)(param_1 + 0x4c) != local_6c)) ||
       (*(int *)(param_1 + 0x38) != local_80 ||
        (*(longlong *)(param_1 + 0x30) != local_88 || *(longlong *)(param_1 + 0x28) != lStack_90)))
    {
      if (local_68 != 0) {
        FMemory::Free();
      }
      plVar5 = local_a0;
      if (local_a0 == (longlong *)0x0) {
        return 0;
      }
      LOCK();
      plVar1 = local_a0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 != 1) {
        return 0;
      }
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 != 1) {
        return 0;
      }
      (**(code **)(*local_a0 + 8))(local_a0,1);
      return 0;
    }
    *(undefined1 *)(param_1 + 0x65) = 1;
    if (local_68 != 0) {
      FMemory::Free();
    }
    plVar5 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x30) < *(longlong *)(param_1 + 0x10) + param_3) {
    return 0;
  }
  FUN_142a4c830(param_1 + 0x18,*(longlong *)(param_1 + 0x10),param_2,param_3);
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + param_3;
  return 1;
}



// FUNCTION 142a49790 FUN_142a49790 body=480 status=ok
// SIG undefined FUN_142a49790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142a49790(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong lStack_90;
  longlong local_88;
  int local_80;
  longlong local_7c;
  longlong local_74;
  int local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x65) == '\0') {
    FUN_142a48a60(param_1 + 0x18,&local_a8);
    local_98 = 0xffffffffffffffff;
    lStack_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_54 = 0;
    local_7c = 0;
    local_74 = 0;
    local_6c = 0;
    (**(code **)(*local_a8 + 0xa8))(local_a8,*(undefined8 *)(param_1 + 0x20));
    FUN_142a4d650(&local_98,local_a8,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0xa4));
    if ((((*(longlong *)(param_1 + 0x3c) != local_7c) || (*(longlong *)(param_1 + 0x44) != local_74)
         ) || (*(int *)(param_1 + 0x4c) != local_6c)) ||
       (*(int *)(param_1 + 0x38) != local_80 ||
        (*(longlong *)(param_1 + 0x30) != local_88 || *(longlong *)(param_1 + 0x28) != lStack_90)))
    {
      if (local_68 != 0) {
        FMemory::Free();
      }
      plVar5 = local_a0;
      if (local_a0 == (longlong *)0x0) {
        return 0;
      }
      LOCK();
      plVar1 = local_a0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 != 1) {
        return 0;
      }
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 != 1) {
        return 0;
      }
      (**(code **)(*local_a0 + 8))(local_a0,1);
      return 0;
    }
    *(undefined1 *)(param_1 + 0x65) = 1;
    if (local_68 != 0) {
      FMemory::Free();
    }
    plVar5 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x30) < *(longlong *)(param_1 + 0x10) + param_3) {
    return 0;
  }
  FUN_142a4cde0(param_1 + 0x18,*(longlong *)(param_1 + 0x10),param_2,param_3);
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + param_3;
  return 1;
}



// FUNCTION 142a49970 FUN_142a49970 body=593 status=ok
// SIG undefined FUN_142a49970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142a49970(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong lStack_90;
  longlong local_88;
  int local_80;
  longlong local_7c;
  longlong local_74;
  int local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0x65) == '\0') {
    FUN_142a48a60(param_1 + 0x18,&local_b8);
    local_98 = 0xffffffffffffffff;
    lStack_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_54 = 0;
    local_7c = 0;
    local_74 = 0;
    local_6c = 0;
    (**(code **)(*local_b8 + 0xa8))(local_b8,*(undefined8 *)(param_1 + 0x20));
    FUN_142a4d650(&local_98,local_b8,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0xa4));
    if ((((*(longlong *)(param_1 + 0x3c) != local_7c) || (*(longlong *)(param_1 + 0x44) != local_74)
         ) || (*(int *)(param_1 + 0x4c) != local_6c)) ||
       (*(int *)(param_1 + 0x38) != local_80 ||
        (*(longlong *)(param_1 + 0x30) != local_88 || *(longlong *)(param_1 + 0x28) != lStack_90)))
    {
      if (local_68 != 0) {
        FMemory::Free();
      }
      plVar5 = local_b0;
      if (local_b0 == (longlong *)0x0) {
        return 0;
      }
      LOCK();
      plVar1 = local_b0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 != 1) {
        return 0;
      }
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 != 1) {
        return 0;
      }
      (**(code **)(*local_b0 + 8))(local_b0,1);
      return 0;
    }
    *(undefined1 *)(param_1 + 0x65) = 1;
    if (local_68 != 0) {
      FMemory::Free();
    }
    plVar5 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x28) < lVar4 + param_3) {
    return 0;
  }
  FUN_142a48a60(param_1 + 0x18,&local_a8);
  (**(code **)(*local_a8 + 0xa8))(local_a8,*(longlong *)(param_1 + 0x78) + lVar4);
  (**(code **)(*local_a8 + 0x50))(local_a8,param_2,param_3);
  plVar5 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + param_3;
  return 1;
}



// FUNCTION 142a49bd0 FUN_142a49bd0 body=480 status=ok
// SIG undefined FUN_142a49bd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142a49bd0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong lStack_90;
  longlong local_88;
  int local_80;
  longlong local_7c;
  longlong local_74;
  int local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x65) == '\0') {
    FUN_142a48a60(param_1 + 0x18,&local_a8);
    local_98 = 0xffffffffffffffff;
    lStack_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_54 = 0;
    local_7c = 0;
    local_74 = 0;
    local_6c = 0;
    (**(code **)(*local_a8 + 0xa8))(local_a8,*(undefined8 *)(param_1 + 0x20));
    FUN_142a4d650(&local_98,local_a8,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0xa4));
    if ((((*(longlong *)(param_1 + 0x3c) != local_7c) || (*(longlong *)(param_1 + 0x44) != local_74)
         ) || (*(int *)(param_1 + 0x4c) != local_6c)) ||
       (*(int *)(param_1 + 0x38) != local_80 ||
        (*(longlong *)(param_1 + 0x30) != local_88 || *(longlong *)(param_1 + 0x28) != lStack_90)))
    {
      if (local_68 != 0) {
        FMemory::Free();
      }
      plVar5 = local_a0;
      if (local_a0 == (longlong *)0x0) {
        return 0;
      }
      LOCK();
      plVar1 = local_a0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 != 1) {
        return 0;
      }
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 != 1) {
        return 0;
      }
      (**(code **)(*local_a0 + 8))(local_a0,1);
      return 0;
    }
    *(undefined1 *)(param_1 + 0x65) = 1;
    if (local_68 != 0) {
      FMemory::Free();
    }
    plVar5 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x28) < *(longlong *)(param_1 + 0x10) + param_3) {
    return 0;
  }
  FUN_142a4d400(param_1 + 0x18,*(longlong *)(param_1 + 0x10),param_2,param_3);
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + param_3;
  return 1;
}



// FUNCTION 142a49db0 FUN_142a49db0 body=1341 status=ok
// SIG undefined FUN_142a49db0(void)

undefined8 *
FUN_142a49db0(longlong param_1,ulonglong param_2,longlong param_3,undefined4 param_4,
             longlong param_5,longlong param_6)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  BOOL BVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  int local_res18;
  undefined8 *local_a8;
  undefined8 *local_98 [2];
  undefined1 local_88 [80];
  
  if (param_3 == 0x7fffffffffffffff) {
    param_3 = *(longlong *)(param_1 + 0x20) - param_2;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    if ((*(byte *)(param_1 + 0x6c) & 1) == 0) {
      lVar10 = operator_new(0xd0);
      local_a8 = (undefined8 *)0x0;
      if (lVar10 != 0) {
        local_a8 = (undefined8 *)
                   FUN_142a388c0(lVar10,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10)
                                 ,param_5,*(longlong *)(param_1 + 0x18) + param_2,param_3,param_4,
                                 param_6,0,0);
      }
    }
    else {
      puVar5 = (undefined8 *)operator_new(0xe0);
      local_a8 = (undefined8 *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        uVar7 = *(undefined8 *)(param_1 + 0x10);
        uVar1 = *(undefined8 *)(param_1 + 8);
        lVar13 = *(longlong *)(param_1 + 0x18);
        lVar10 = lVar13 + param_2;
        FUN_142a389a0(puVar5,uVar1,uVar7,param_5,lVar10,param_3,param_4,param_6,0,0);
        puVar5[0x19] = lVar10;
        *puVar5 = &PTR__scalar_deleting_destructor__145361320;
        puVar5[0x1a] = param_3;
        puVar5[0xf] = &PTR_LAB_145361338;
        lVar10 = (param_2 + 0xf + param_3 & 0xfffffffffffffff0) - (param_2 & 0xfffffffffffffff0);
        puVar5[0x14] = lVar10;
        lVar13 = (param_2 & 0xfffffffffffffff0) + lVar13;
        puVar5[0x13] = lVar13;
        cVar3 = FUN_142a49460(DAT_146b298e8,puVar5 + 0xf,uVar1,uVar7,lVar13,lVar10,
                              *(undefined4 *)(puVar5 + 0x18));
        local_a8 = puVar5;
        if (cVar3 == '\0') {
          *(undefined1 *)((longlong)puVar5 + 0xc4) = 0;
          IAsyncReadRequest::SetDataComplete(puVar5);
          *(undefined1 *)((longlong)puVar5 + 0x71) = 1;
        }
      }
    }
  }
  else {
    bVar2 = false;
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
    }
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x68);
    uVar6 = (longlong)param_2 / (longlong)uVar11;
    lVar10 = (param_2 - 1) + param_3;
    local_a8 = (undefined8 *)operator_new(0x100,lVar10 % (longlong)uVar11);
    if (local_a8 == (undefined8 *)0x0) {
      local_a8 = (undefined8 *)0x0;
    }
    else {
      *local_a8 = &PTR__scalar_deleting_destructor__144ca06d8;
      local_a8[10] = 0;
      *(undefined4 *)(local_a8 + 0xc) = 0;
      local_a8[4] = AK::MemoryMgr::StartProfileThreadUsage;
      cVar3 = '\0';
      *(undefined4 *)(local_a8 + 0xe) = 0;
      *(undefined1 *)((longlong)local_a8 + 0x74) = 0;
      *(bool *)((longlong)local_a8 + 0x75) = param_6 != 0;
      if (param_5 != 0) {
        uVar7 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_88);
        TFunction<void___cdecl(int)>::operator=(local_a8 + 4,uVar7);
        cVar3 = *(char *)((longlong)local_a8 + 0x74);
      }
      lVar13 = -1;
      if (cVar3 == '\0') {
        lVar13 = param_6;
      }
      local_a8[2] = lVar13;
      *local_a8 = &PTR__scalar_deleting_destructor__145361348;
      local_a8[0xf] = param_1;
      local_a8[0x10] = param_2;
      local_a8[0x11] = param_3;
      local_a8[0x12] = 0;
      *(undefined4 *)(local_a8 + 0x13) = 0;
      *(undefined4 *)((longlong)local_a8 + 0x9c) = param_4;
      *(undefined2 *)(local_a8 + 0x14) = 1;
      *(undefined1 *)((longlong)local_a8 + 0xa2) = 0;
      local_a8[0x15] = 0;
      local_a8[0x16] = 0;
      local_a8[0x19] = 0;
      local_a8[0x1a] = 0;
      *(undefined4 *)(local_a8 + 0x1b) = 0xffffffff;
      *(undefined4 *)((longlong)local_a8 + 0xdc) = 0;
      local_a8[0x1d] = 0;
      *(undefined4 *)(local_a8 + 0x1e) = 0;
    }
    local_res18 = (int)(lVar10 / (longlong)uVar11);
    lVar10 = (longlong)(int)uVar6;
    local_98[0] = local_a8;
    if (lVar10 <= local_res18) {
      lVar13 = lVar10 << 4;
      bVar2 = false;
      do {
        lVar14 = *(longlong *)(param_1 + 0xc0);
        if (*(longlong *)(lVar14 + lVar10 * 8) == 0) {
          puVar8 = (undefined8 *)operator_new(0x38);
          puVar5 = (undefined8 *)0x0;
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
            puVar8[3] = 0;
            puVar8[4] = 0;
            *(undefined4 *)(puVar8 + 5) = 0;
            *(undefined4 *)((longlong)puVar8 + 0x2c) = 0xffffffff;
            *(undefined2 *)(puVar8 + 6) = 0;
            *(undefined1 *)((longlong)puVar8 + 0x32) = 0;
            puVar5 = puVar8;
          }
          *(undefined8 **)(*(longlong *)(param_1 + 0xc0) + lVar10 * 8) = puVar5;
          *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + lVar10 * 8) + 0x2c) = (int)uVar6;
          lVar14 = *(longlong *)(param_1 + 0xc0);
        }
        lVar14 = *(longlong *)(lVar14 + lVar10 * 8);
        *(int *)(lVar14 + 0x28) = *(int *)(lVar14 + 0x28) + 1;
        if (*(char *)(lVar14 + 0x30) == '\0') {
          puVar5 = (undefined8 *)FPakAsyncReadFileHandle::GetBlock(param_1,uVar6 & 0xffffffff);
          *(undefined1 *)(puVar5 + 6) = 1;
          iVar12 = *(int *)(lVar13 + 8 + *(longlong *)(param_1 + 0x58)) -
                   *(int *)(lVar13 + *(longlong *)(param_1 + 0x58));
          *(int *)(puVar5 + 4) = iVar12;
          if ((*(byte *)(param_1 + 0x6c) & 1) != 0) {
            *(uint *)(puVar5 + 4) = iVar12 + 0xfU & 0xfffffff0;
          }
          *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
          lVar9 = operator_new(0xd0);
          puVar8 = (undefined8 *)0x0;
          if (lVar9 != 0) {
            puVar8 = (undefined8 *)
                     FUN_142a388c0(lVar9,*(undefined8 *)(param_1 + 8),
                                   *(undefined8 *)(param_1 + 0x10),param_1 + 0xd0,
                                   *(longlong *)(lVar13 + *(longlong *)(param_1 + 0x58)) +
                                   *(longlong *)(param_1 + 0x150),(longlong)*(int *)(puVar5 + 4),
                                   param_4,0,1,puVar5);
          }
          *puVar5 = puVar8;
          bVar2 = true;
        }
        if (*(longlong *)(lVar14 + 0x10) == 0) {
          bVar2 = true;
        }
        uVar6 = (ulonglong)((int)uVar6 + 1);
        lVar10 = lVar10 + 1;
        lVar13 = lVar13 + 0x10;
      } while (lVar10 <= local_res18);
    }
    FUN_1417a2a90(param_1 + 0x70,local_res8,local_98,0);
    if (!bVar2) {
      FUN_142a4c310(local_a8);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  }
  return local_a8;
}



// FUNCTION 142a4a2f0 FUN_142a4a2f0 body=5007 status=ok
// SIG undefined FUN_142a4a2f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ushort * FUN_142a4a2f0(undefined8 *param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  longlong *plVar19;
  longlong lVar20;
  uint *puVar21;
  uint *puVar22;
  int *piVar23;
  ushort *puVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong *puVar27;
  ulonglong uVar28;
  int iVar29;
  uint uVar30;
  undefined4 uVar31;
  undefined2 *puVar32;
  int iVar33;
  int iVar34;
  longlong lVar35;
  longlong lVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  ulonglong local_res10;
  undefined1 auStack_678 [32];
  ushort *local_658;
  longlong local_650;
  uint local_648;
  uint uStack_644;
  uint uStack_640;
  uint uStack_63c;
  uint local_638;
  uint uStack_634;
  uint uStack_630;
  uint uStack_62c;
  uint local_628;
  uint uStack_624;
  uint uStack_620;
  uint uStack_61c;
  uint local_618 [4];
  ulonglong *local_608;
  longlong *local_600;
  longlong local_5f8;
  undefined8 local_5f0;
  uint uStack_5ec;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  longlong local_568 [2];
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  ulonglong local_4d8;
  ulonglong uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  ulonglong uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  ulonglong local_498;
  ulonglong local_490;
  undefined4 local_488;
  undefined4 local_484;
  int local_480;
  undefined4 local_47c;
  int local_478;
  undefined4 local_474;
  ulonglong local_470;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  ulonglong local_458;
  ulonglong uStack_450;
  ulonglong local_448;
  ulonglong uStack_440;
  ulonglong local_438;
  ulonglong uStack_430;
  ulonglong local_428;
  ulonglong local_420;
  ulonglong local_418;
  undefined8 local_410;
  undefined4 local_408;
  uint local_3f8 [4];
  uint local_3e8;
  uint local_3e4;
  uint local_3e0;
  uint local_3dc;
  uint local_3d8;
  uint local_3d4;
  uint local_3d0;
  uint local_3cc;
  uint local_3c8;
  uint local_3c4;
  uint local_3c0;
  int local_3bc;
  uint local_378 [4];
  uint local_368;
  uint local_364;
  uint local_360;
  uint local_35c;
  uint local_358;
  uint local_354;
  uint local_350;
  uint local_34c;
  uint local_348;
  uint local_344;
  uint local_340;
  int local_33c;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  int local_2b8 [4];
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
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
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint local_108 [4];
  ulonglong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_678;
  if (*(int *)(param_1 + 0xb) != *(int *)((longlong)param_1 + 0x84)) {
    puVar15 = (undefined8 *)param_1[0x12];
    if ((undefined8 *)param_1[0x12] == (undefined8 *)0x0) {
      puVar15 = param_1 + 0x11;
    }
    iVar33 = *(int *)((longlong)puVar15 +
                     ((longlong)((int)(param_2 >> 0x20) + (int)param_2) &
                     (longlong)*(int *)(param_1 + 0x13) - 1U) * 4);
    if (iVar33 != -1) {
      do {
        puVar24 = (ushort *)(param_1[10] + (longlong)iVar33 * 0x18);
        if (*(ulonglong *)(param_1[10] + (longlong)iVar33 * 0x18) == param_2) {
          if (iVar33 != -1) goto LAB_142a4a393;
          break;
        }
        iVar33 = *(int *)(puVar24 + 8);
      } while (iVar33 != -1);
    }
  }
  puVar24 = (ushort *)0x0;
LAB_142a4a393:
  local_658 = puVar24 + 4;
  if (puVar24 == (ushort *)0x0) {
    local_658 = (ushort *)0x0;
  }
  if (local_658 == (ushort *)0x0) {
    local_res10 = param_2;
    puVar15 = (undefined8 *)FName::ToString(&local_res10,&local_608);
    if (*(int *)(puVar15 + 1) == 0) {
      puVar32 = &DAT_143f3eda8;
    }
    else {
      puVar32 = (undefined2 *)*puVar15;
    }
    local_498 = (**(code **)(*(longlong *)*param_1 + 0x100))((longlong *)*param_1,puVar32);
    if (local_608 != (ulonglong *)0x0) {
      FMemory::Free();
    }
    if (local_498 == 0) {
      local_658 = (ushort *)0x0;
    }
    else {
      lVar25 = 6;
      local_470 = local_res10;
      puVar16 = &uStack_464;
      local_480 = 0;
      local_478 = 0;
      local_418 = 0;
      local_410 = 0;
      local_408 = 0;
      do {
        *(undefined8 *)(puVar16 + -1) = 0;
        puVar16[1] = 0;
        puVar16 = puVar16 + 3;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      local_420 = 0;
      uVar17 = 0x10001;
      if (0x10000 < param_3) {
        uVar17 = param_3;
      }
      uVar17 = uVar17 - 1;
      iVar33 = local_480;
      for (uVar26 = uVar17; -1 < (longlong)uVar26; uVar26 = uVar26 * 2) {
        iVar33 = iVar33 + 1;
      }
      uVar26 = 0x10000;
      iVar34 = local_478;
      do {
        iVar29 = iVar34;
        uVar17 = uVar17 >> 1;
        uVar26 = uVar26 >> 1;
        iVar34 = iVar29 + 1;
      } while (uVar26 != 0);
      local_650 = CONCAT44(local_650._4_4_,iVar29);
      iVar34 = iVar33;
      for (; uVar17 != 0; uVar17 = uVar17 >> 1) {
        iVar34 = iVar34 + 1;
      }
      plVar19 = param_1 + 0x14;
      iVar29 = *(int *)(param_1 + 0x15);
      local_658 = (ushort *)(0xffffffffffffffff >> ((byte)iVar33 & 0x3f));
      *(int *)(param_1 + 0x15) = iVar29 + 1;
      local_490 = param_3;
      if (*(int *)((longlong)param_1 + 0xac) < iVar29 + 1) {
        FUN_1404a2c10(plVar19,iVar29);
      }
      puVar27 = (ulonglong *)((longlong)iVar29 * 0x98 + *plVar19);
      *puVar27 = local_498;
      puVar27[1] = local_490;
      puVar27[2] = (ulonglong)local_658;
      *(undefined4 *)(puVar27 + 4) = (undefined4)local_650;
      puVar27[5] = local_470;
      puVar27[0xf] = local_420;
      puVar27[6] = CONCAT44(uStack_464,local_468);
      puVar27[7] = CONCAT44(uStack_45c,uStack_460);
      *(int *)(puVar27 + 3) = iVar33;
      puVar27[8] = local_458;
      puVar27[9] = uStack_450;
      *(int *)((longlong)puVar27 + 0x1c) = iVar34;
      puVar27[10] = local_448;
      puVar27[0xb] = uStack_440;
      puVar27[0xc] = local_438;
      puVar27[0xd] = uStack_430;
      puVar27[0xe] = local_428;
      puVar27[0x10] = local_418;
      *(undefined4 *)(puVar27 + 0x11) = (undefined4)local_410;
      *(undefined4 *)((longlong)puVar27 + 0x8c) = local_410._4_4_;
      *(undefined4 *)(puVar27 + 0x12) = local_408;
      local_650 = CONCAT62(local_650._2_6_,*(short *)(param_1 + 0x15) + -1);
      local_608 = &local_res10;
      local_600 = &local_650;
      FUN_142a317d0(param_1 + 10,&local_658,&local_608,0);
      local_658 = (ushort *)(param_1[10] + ((longlong)(int)local_658 * 3 + 1) * 8);
      lVar25 = (ulonglong)*local_658 * 0x98 + *plVar19;
      if (*(char *)(param_1 + 0x61) != '\0') {
        puVar15 = (undefined8 *)0x0;
        local_5f8 = 0;
        local_5f0 = 4;
        local_650 = lVar25;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_5f8,0);
        FGenericPlatformString::Memcpy(local_5f8,&DAT_145361178,8);
        uVar18 = FName::ToString(&local_res10,local_568);
        FUN_141665540(&local_608,uVar18,&local_5f8);
        if (local_568[0] != 0) {
          FMemory::Free();
        }
        if (local_5f8 != 0) {
          FMemory::Free();
        }
        puVar27 = (ulonglong *)&DAT_143f3eda8;
        if ((int)local_600 != 0) {
          puVar27 = local_608;
        }
        plVar19 = (longlong *)
                  (**(code **)(*(longlong *)*param_1 + 0xb8))((longlong *)*param_1,puVar27,0);
        lVar20 = operator_new(0x4c8);
        if (lVar20 != 0) {
          puVar27 = (ulonglong *)&DAT_143f3eda8;
          if ((int)local_600 != 0) {
            puVar27 = local_608;
          }
          uVar18 = (**(code **)(*plVar19 + 0x40))(plVar19);
          puVar15 = (undefined8 *)FUN_1415bcde0(lVar20,plVar19,puVar27,uVar18);
        }
        uStack_2f0 = 0;
        local_2e8 = 0;
        uStack_2e0 = 0;
        local_2d8 = 0;
        uStack_2d0 = 0;
        local_2c8 = 0;
        uStack_2c0 = 0;
        local_2f8 = 0;
        FUN_142a394b0(puVar15,&local_2f8);
        FUN_1408bda20(puVar15,lVar25 + 0x80);
        if (puVar15 != (undefined8 *)0x0) {
          (**(code **)*puVar15)(puVar15,1);
        }
        uStack_550 = 0;
        local_598 = param_1[0x5b];
        uStack_590 = param_1[0x5c];
        local_558 = 1;
        uVar18 = 0;
        uVar37 = 0;
        uVar38 = 0;
        uVar39 = 0;
        uVar40 = 0;
        uVar41 = 0;
        local_5a8 = param_1[0x59];
        uStack_5a0 = param_1[0x5a];
        local_588 = param_1[0x5d];
        uStack_580 = param_1[0x5e];
        local_5e8 = param_1[0x51];
        uStack_5e0 = param_1[0x52];
        local_578 = param_1[0x5f];
        uStack_570 = param_1[0x60];
        local_5d8 = param_1[0x53];
        uStack_5d0 = param_1[0x54];
        local_5c8 = param_1[0x55];
        uStack_5c0 = param_1[0x56];
        local_5b8 = param_1[0x57];
        uStack_5b0 = param_1[0x58];
        local_648 = (undefined4)local_2f8;
        uStack_644 = local_2f8._4_4_;
        uStack_640 = (undefined4)uStack_2f0;
        uStack_63c = uStack_2f0._4_4_;
        local_638 = (undefined4)local_2e8;
        uStack_634 = local_2e8._4_4_;
        uStack_630 = (undefined4)uStack_2e0;
        uStack_62c = uStack_2e0._4_4_;
        local_628 = (undefined4)local_2d8;
        uStack_624 = local_2d8._4_4_;
        uStack_620 = (undefined4)uStack_2d0;
        uStack_61c = uStack_2d0._4_4_;
        local_618[0] = (uint)local_2c8;
        local_618[1] = local_2c8._4_4_;
        local_618[2] = (undefined4)uStack_2c0;
        local_618[3] = uStack_2c0._4_4_;
        local_548 = 0;
        uStack_540 = 0;
        local_538 = 0;
        uStack_530 = 0;
        local_528 = 0;
        uStack_520 = 0;
        uVar30 = (uint)local_2c8;
        uVar14 = local_2c8._4_4_;
        uVar31 = (undefined4)uStack_2c0;
        iVar33 = uStack_2c0._4_4_;
        while (uVar13 = uStack_61c, uVar12 = uStack_620, uVar11 = uStack_624, uVar10 = local_628,
              uVar9 = uStack_62c, uVar8 = uStack_630, uVar7 = uStack_634, uVar6 = local_638,
              uVar5 = uStack_63c, uVar4 = uStack_640, uVar3 = uStack_644, uVar2 = local_648,
              lVar25 = local_650, local_618[0] = uVar30, local_618[1] = uVar14,
              local_618[2] = uVar31, local_618[3] = iVar33, -1 < uStack_5b0) {
          iVar34 = 0xf;
          piVar23 = (int *)((longlong)&local_5b8 + 4);
          lVar20 = 0xf;
          do {
            if (piVar23[2] != 0) break;
            if (piVar23[1] != 0) {
              iVar34 = iVar34 + -1;
              break;
            }
            if (*piVar23 != 0) {
              iVar34 = iVar34 + -2;
              break;
            }
            if (piVar23[-1] != 0) {
              iVar34 = iVar34 + -3;
              break;
            }
            piVar23 = piVar23 + -4;
            iVar34 = iVar34 + -4;
            lVar20 = lVar20 + -4;
          } while (-1 < lVar20);
          if (iVar34 < 0) break;
          if ((local_5e8 & 1) != 0) {
            _guard_xfg_dispatch_icall_nop(local_3f8,0,0x80);
            piVar23 = (int *)((longlong)&local_188 + 4);
            iVar34 = 0xf;
            local_1b8 = local_558;
            uStack_1b0 = uStack_550;
            lVar25 = 0xf;
            local_1a8 = uVar18;
            uStack_1a0 = uVar37;
            local_198 = uVar38;
            uStack_190 = uVar39;
            local_188 = uVar40;
            uStack_180 = uVar41;
            do {
              if (piVar23[2] != 0) break;
              if (piVar23[1] != 0) {
                iVar34 = iVar34 + -1;
                break;
              }
              if (*piVar23 != 0) {
                iVar34 = iVar34 + -2;
                break;
              }
              if (piVar23[-1] != 0) {
                iVar34 = iVar34 + -3;
                break;
              }
              piVar23 = piVar23 + -4;
              iVar34 = iVar34 + -4;
              lVar25 = lVar25 + -4;
            } while (-1 < lVar25);
            lVar25 = 0xf;
            puVar21 = local_618 + 1;
            do {
              if (puVar21[2] != 0) break;
              if (puVar21[1] != 0) {
                lVar25 = lVar25 + -1;
                break;
              }
              if (*puVar21 != 0) {
                lVar25 = lVar25 + -2;
                break;
              }
              if (puVar21[-1] != 0) {
                lVar25 = lVar25 + -3;
                break;
              }
              puVar21 = puVar21 + -4;
              lVar25 = lVar25 + -4;
            } while (-1 < lVar25);
            lVar20 = (longlong)(iVar34 + 1);
            lVar25 = lVar25 + 1;
            if (0 < iVar34 + 1) {
              puVar21 = local_3f8 + lVar25;
              lVar36 = -0x250;
              do {
                uVar1 = puVar21[0x90 - lVar25];
                uVar17 = 0;
                if (0 < lVar25) {
                  puVar22 = puVar21 + -lVar25;
                  lVar35 = lVar25;
                  do {
                    uVar17 = (ulonglong)*puVar22 +
                             (ulonglong)*(uint *)((longlong)puVar22 + lVar36) * (ulonglong)uVar1 +
                             uVar17;
                    *puVar22 = (uint)uVar17;
                    uVar17 = uVar17 >> 0x20;
                    lVar35 = lVar35 + -1;
                    puVar22 = puVar22 + 1;
                  } while (lVar35 != 0);
                }
                *puVar21 = *puVar21 + (int)uVar17;
                lVar36 = lVar36 + -4;
                puVar21 = puVar21 + 1;
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
            }
            uVar17 = (ulonglong)local_3f8[0];
            uVar26 = (ulonglong)local_3f8[1];
            uStack_550 = CONCAT44(local_3f8[3],local_3f8[2]);
            local_548 = CONCAT44(local_3e4,local_3e8);
            uStack_540 = CONCAT44(local_3dc,local_3e0);
            local_538 = CONCAT44(local_3d4,local_3d8);
            uStack_530 = CONCAT44(local_3cc,local_3d0);
            local_528 = CONCAT44(local_3c4,local_3c8);
            uStack_520 = CONCAT44(local_3bc,local_3c0);
            local_508 = local_548;
            uStack_500 = uStack_540;
            local_558 = CONCAT44(local_3f8[1],local_3f8[0]);
            local_518 = local_558;
            uStack_510 = uStack_550;
            local_4e8 = local_528;
            uStack_4e0 = uStack_520;
            local_238 = 0;
            local_230 = 0;
            local_228 = 0;
            local_220 = 0;
            local_218 = 0;
            local_210 = 0;
            local_208 = 0;
            local_200 = 0;
            local_4f8 = local_538;
            uStack_4f0 = uStack_530;
            TBigInt<512,1>::DivideWithRemainder(&local_518,&local_5a8,&local_238);
            _guard_xfg_dispatch_icall_nop(local_2b8,0,0x80);
            piVar23 = (int *)((longlong)&local_148 + 4);
            iVar34 = 0xf;
            local_178 = local_518;
            uStack_170 = uStack_510;
            lVar25 = 0xf;
            local_168 = local_508;
            uStack_160 = uStack_500;
            local_158 = local_4f8;
            uStack_150 = uStack_4f0;
            local_148 = local_4e8;
            uStack_140 = uStack_4e0;
            do {
              if (piVar23[2] != 0) break;
              if (piVar23[1] != 0) {
                iVar34 = iVar34 + -1;
                break;
              }
              if (*piVar23 != 0) {
                iVar34 = iVar34 + -2;
                break;
              }
              if (piVar23[-1] != 0) {
                iVar34 = iVar34 + -3;
                break;
              }
              piVar23 = piVar23 + -4;
              iVar34 = iVar34 + -4;
              lVar25 = lVar25 + -4;
            } while (-1 < lVar25);
            lVar25 = 0xf;
            piVar23 = (int *)((longlong)&local_578 + 4);
            do {
              if (piVar23[2] != 0) break;
              if (piVar23[1] != 0) {
                lVar25 = lVar25 + -1;
                break;
              }
              if (*piVar23 != 0) {
                lVar25 = lVar25 + -2;
                break;
              }
              if (piVar23[-1] != 0) {
                lVar25 = lVar25 + -3;
                break;
              }
              piVar23 = piVar23 + -4;
              lVar25 = lVar25 + -4;
            } while (-1 < lVar25);
            lVar20 = (longlong)(iVar34 + 1);
            lVar25 = lVar25 + 1;
            if (0 < iVar34 + 1) {
              piVar23 = local_2b8 + lVar25;
              lVar36 = -0x2f0;
              do {
                uVar1 = piVar23[0x50 - lVar25];
                uVar28 = 0;
                if (0 < lVar25) {
                  puVar21 = (uint *)(piVar23 + -lVar25);
                  lVar35 = lVar25;
                  do {
                    uVar28 = (ulonglong)*puVar21 +
                             (ulonglong)*(uint *)(lVar36 + (longlong)puVar21) * (ulonglong)uVar1 +
                             uVar28;
                    *puVar21 = (uint)uVar28;
                    uVar28 = uVar28 >> 0x20;
                    lVar35 = lVar35 + -1;
                    puVar21 = puVar21 + 1;
                  } while (lVar35 != 0);
                }
                *piVar23 = *piVar23 + (int)uVar28;
                lVar36 = lVar36 + -4;
                piVar23 = piVar23 + 1;
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
            }
            local_518 = CONCAT44(local_2b8[1],local_2b8[0]);
            uStack_510 = CONCAT44(local_2b8[3],local_2b8[2]);
            local_508 = CONCAT44(local_2a4,local_2a8);
            uStack_500 = CONCAT44(local_29c,local_2a0);
            local_4f8 = CONCAT44(local_294,local_298);
            uStack_4f0 = CONCAT44(local_28c,local_290);
            local_4e8 = CONCAT44(local_284,local_288);
            uStack_4e0 = CONCAT44(local_27c,local_280);
            TBigInt<512,1>::Negate(&local_518);
            uVar17 = (local_518 & 0xffffffff) + uVar17;
            uVar26 = (uVar17 >> 0x20) + uVar26 + (local_518 >> 0x20);
            local_558 = CONCAT44((int)uVar26,(int)uVar17);
            uVar26 = (ulonglong)local_3f8[2] + (uVar26 >> 0x20) + (uStack_510 & 0xffffffff);
            uVar17 = (uStack_510 >> 0x20) + (uVar26 >> 0x20) + (ulonglong)local_3f8[3];
            uStack_550 = CONCAT44((int)uVar17,(int)uVar26);
            uVar26 = (local_508 & 0xffffffff) + (uVar17 >> 0x20) + (ulonglong)local_3e8;
            uVar17 = (local_508 >> 0x20) + (uVar26 >> 0x20) + (ulonglong)local_3e4;
            uVar18 = CONCAT44((int)uVar17,(int)uVar26);
            uVar26 = (uStack_500 & 0xffffffff) + (uVar17 >> 0x20) + (ulonglong)local_3e0;
            uVar17 = (uStack_500 >> 0x20) + (uVar26 >> 0x20) + (ulonglong)local_3dc;
            uVar37 = CONCAT44((int)uVar17,(int)uVar26);
            uVar26 = (local_4f8 & 0xffffffff) + (uVar17 >> 0x20) + (ulonglong)local_3d8;
            uVar17 = (local_4f8 >> 0x20) + (uVar26 >> 0x20) + (ulonglong)local_3d4;
            uVar38 = CONCAT44((int)uVar17,(int)uVar26);
            uVar26 = (uStack_4f0 & 0xffffffff) + (uVar17 >> 0x20) + (ulonglong)local_3d0;
            uVar17 = (uStack_4f0 >> 0x20) + (uVar26 >> 0x20) + (ulonglong)local_3cc;
            uVar39 = CONCAT44((int)uVar17,(int)uVar26);
            uVar26 = (local_4e8 & 0xffffffff) + (uVar17 >> 0x20) + (ulonglong)local_3c8;
            uVar17 = (local_4e8 >> 0x20) + (uVar26 >> 0x20) + (ulonglong)local_3c4;
            uVar40 = CONCAT44((int)uVar17,(int)uVar26);
            lVar25 = (uStack_4e0 & 0xffffffff) + (uVar17 >> 0x20) + (ulonglong)local_3c0;
            uVar41 = CONCAT44((int)((ulonglong)lVar25 >> 0x20) + uStack_4e0._4_4_ + local_3bc,
                              (int)lVar25);
            local_548 = uVar18;
            uStack_540 = uVar37;
            local_538 = uVar38;
            uStack_530 = uVar39;
            local_528 = uVar40;
            uStack_520 = uVar41;
          }
          uVar1 = (uint)local_5c8;
          lVar25 = 9;
          local_5c8 = CONCAT44(local_5c8._4_4_,(uint)local_5c8 >> 1);
          local_5e8 = CONCAT44((uint)uStack_5e0 << 0x1f | local_5e8._4_4_ >> 1,
                               local_5e8._4_4_ << 0x1f | (uint)local_5e8 >> 1);
          uStack_5e0 = CONCAT44((uint)local_5d8 << 0x1f | uStack_5e0._4_4_ >> 1,
                                uStack_5e0._4_4_ << 0x1f | (uint)uStack_5e0 >> 1);
          local_5d8 = CONCAT44((uint)uStack_5d0 << 0x1f | local_5d8._4_4_ >> 1,
                               local_5d8._4_4_ << 0x1f | (uint)local_5d8 >> 1);
          uStack_5d0 = CONCAT44(uVar1 << 0x1f | uStack_5d0._4_4_ >> 1,
                                uStack_5d0._4_4_ << 0x1f | (uint)uStack_5d0 >> 1);
          do {
            uVar1 = *(uint *)((longlong)&local_5e8 + lVar25 * 4);
            (&uStack_5ec)[lVar25] = (&uStack_5ec)[lVar25] | uVar1 << 0x1f;
            *(uint *)((longlong)&local_5e8 + lVar25 * 4) = uVar1 >> 1;
            lVar25 = lVar25 + 1;
          } while (lVar25 < 0x10);
          _guard_xfg_dispatch_icall_nop(local_378,0,0x80);
          iVar34 = 0xf;
          local_138 = uVar2;
          uStack_134 = uVar3;
          uStack_130 = uVar4;
          uStack_12c = uVar5;
          lVar25 = 0xf;
          local_128 = uVar6;
          uStack_124 = uVar7;
          uStack_120 = uVar8;
          uStack_11c = uVar9;
          local_118 = uVar10;
          uStack_114 = uVar11;
          uStack_110 = uVar12;
          uStack_10c = uVar13;
          puVar21 = local_108 + 1;
          local_108[0] = uVar30;
          local_108[1] = uVar14;
          local_108[2] = uVar31;
          local_108[3] = iVar33;
          do {
            if (puVar21[2] != 0) break;
            if (puVar21[1] != 0) {
              iVar34 = iVar34 + -1;
              break;
            }
            if (*puVar21 != 0) {
              iVar34 = iVar34 + -2;
              break;
            }
            if (puVar21[-1] != 0) {
              iVar34 = iVar34 + -3;
              break;
            }
            puVar21 = puVar21 + -4;
            iVar34 = iVar34 + -4;
            lVar25 = lVar25 + -4;
          } while (-1 < lVar25);
          lVar25 = 0xf;
          puVar21 = local_618 + 1;
          do {
            if (puVar21[2] != 0) break;
            if (puVar21[1] != 0) {
              lVar25 = lVar25 + -1;
              break;
            }
            if (*puVar21 != 0) {
              lVar25 = lVar25 + -2;
              break;
            }
            if (puVar21[-1] != 0) {
              lVar25 = lVar25 + -3;
              break;
            }
            puVar21 = puVar21 + -4;
            lVar25 = lVar25 + -4;
          } while (-1 < lVar25);
          lVar20 = (longlong)(iVar34 + 1);
          lVar25 = lVar25 + 1;
          if (0 < iVar34 + 1) {
            puVar21 = local_378 + lVar25;
            lVar36 = -0x2d0;
            do {
              uVar30 = puVar21[0x90 - lVar25];
              uVar17 = 0;
              if (0 < lVar25) {
                puVar22 = puVar21 + -lVar25;
                lVar35 = lVar25;
                do {
                  uVar17 = (ulonglong)*puVar22 +
                           (ulonglong)*(uint *)(lVar36 + (longlong)puVar22) * (ulonglong)uVar30 +
                           uVar17;
                  *puVar22 = (uint)uVar17;
                  uVar17 = uVar17 >> 0x20;
                  lVar35 = lVar35 + -1;
                  puVar22 = puVar22 + 1;
                } while (lVar35 != 0);
              }
              *puVar21 = *puVar21 + (int)uVar17;
              lVar36 = lVar36 + -4;
              puVar21 = puVar21 + 1;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
          }
          uVar17 = (ulonglong)local_378[0];
          uVar26 = (ulonglong)local_378[1];
          uStack_640 = local_378[2];
          uStack_63c = local_378[3];
          local_638 = local_368;
          uStack_634 = local_364;
          uStack_630 = local_360;
          uStack_62c = local_35c;
          local_4c8 = CONCAT44(local_364,local_368);
          uStack_4c0 = CONCAT44(local_35c,local_360);
          local_628 = local_358;
          uStack_624 = local_354;
          uStack_620 = local_350;
          uStack_61c = local_34c;
          local_618[0] = local_348;
          local_618[1] = local_344;
          local_618[2] = local_340;
          local_618[3] = local_33c;
          local_4a8 = CONCAT44(local_344,local_348);
          uStack_4a0 = CONCAT44(local_33c,local_340);
          local_648 = local_378[0];
          uStack_644 = local_378[1];
          local_4d8 = CONCAT44(local_378[1],local_378[0]);
          uStack_4d0 = CONCAT44(local_378[3],local_378[2]);
          local_4b8 = CONCAT44(local_354,local_358);
          uStack_4b0 = CONCAT44(local_34c,local_350);
          local_1f8 = 0;
          local_1f0 = 0;
          local_1e8 = 0;
          local_1e0 = 0;
          local_1d8 = 0;
          local_1d0 = 0;
          local_1c8 = 0;
          local_1c0 = 0;
          TBigInt<512,1>::DivideWithRemainder(&local_4d8,&local_5a8,&local_1f8);
          _guard_xfg_dispatch_icall_nop(&local_498,0,0x80);
          piVar23 = (int *)((longlong)&local_c8 + 4);
          iVar33 = 0xf;
          local_f8 = local_4d8;
          uStack_f0 = uStack_4d0;
          lVar25 = 0xf;
          local_e8 = local_4c8;
          uStack_e0 = uStack_4c0;
          local_d8 = local_4b8;
          uStack_d0 = uStack_4b0;
          local_c8 = local_4a8;
          uStack_c0 = uStack_4a0;
          do {
            if (piVar23[2] != 0) break;
            if (piVar23[1] != 0) {
              iVar33 = iVar33 + -1;
              break;
            }
            if (*piVar23 != 0) {
              iVar33 = iVar33 + -2;
              break;
            }
            if (piVar23[-1] != 0) {
              iVar33 = iVar33 + -3;
              break;
            }
            piVar23 = piVar23 + -4;
            iVar33 = iVar33 + -4;
            lVar25 = lVar25 + -4;
          } while (-1 < lVar25);
          lVar25 = 0xf;
          piVar23 = (int *)((longlong)&local_578 + 4);
          do {
            if (piVar23[2] != 0) break;
            if (piVar23[1] != 0) {
              lVar25 = lVar25 + -1;
              break;
            }
            if (*piVar23 != 0) {
              lVar25 = lVar25 + -2;
              break;
            }
            if (piVar23[-1] != 0) {
              lVar25 = lVar25 + -3;
              break;
            }
            piVar23 = piVar23 + -4;
            lVar25 = lVar25 + -4;
          } while (-1 < lVar25);
          lVar20 = (longlong)(iVar33 + 1);
          lVar25 = lVar25 + 1;
          if (0 < iVar33 + 1) {
            piVar23 = (int *)((longlong)&local_498 + lVar25 * 4);
            lVar36 = -0x110;
            do {
              uVar30 = piVar23[0xe8 - lVar25];
              uVar28 = 0;
              if (0 < lVar25) {
                puVar21 = (uint *)(piVar23 + -lVar25);
                lVar35 = lVar25;
                do {
                  uVar28 = (ulonglong)*puVar21 +
                           (ulonglong)*(uint *)(lVar36 + (longlong)puVar21) * (ulonglong)uVar30 +
                           uVar28;
                  *puVar21 = (uint)uVar28;
                  uVar28 = uVar28 >> 0x20;
                  lVar35 = lVar35 + -1;
                  puVar21 = puVar21 + 1;
                } while (lVar35 != 0);
              }
              *piVar23 = *piVar23 + (int)uVar28;
              lVar36 = lVar36 + -4;
              piVar23 = piVar23 + 1;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
          }
          local_4d8 = local_498;
          uStack_4d0 = local_490;
          local_4c8 = CONCAT44(local_484,local_488);
          uStack_4c0 = CONCAT44(local_47c,local_480);
          local_4b8 = CONCAT44(local_474,local_478);
          uStack_4b0 = local_470;
          local_4a8 = CONCAT44(uStack_464,local_468);
          uStack_4a0 = CONCAT44(uStack_45c,uStack_460);
          TBigInt<512,1>::Negate(&local_4d8);
          uVar17 = (local_4d8 & 0xffffffff) + uVar17;
          local_648 = (uint)uVar17;
          uVar17 = (uVar17 >> 0x20) + uVar26 + (local_4d8 >> 0x20);
          uStack_644 = (uint)uVar17;
          uVar17 = (ulonglong)local_378[2] + (uVar17 >> 0x20) + (uStack_4d0 & 0xffffffff);
          uStack_640 = (uint)uVar17;
          uVar17 = (ulonglong)local_378[3] + (uVar17 >> 0x20) + (uStack_4d0 >> 0x20);
          uStack_63c = (uint)uVar17;
          uVar17 = (ulonglong)local_368 + (uVar17 >> 0x20) + (local_4c8 & 0xffffffff);
          local_638 = (uint)uVar17;
          uVar17 = (ulonglong)local_364 + (uVar17 >> 0x20) + (local_4c8 >> 0x20);
          uStack_634 = (uint)uVar17;
          uVar17 = (ulonglong)local_360 + (uVar17 >> 0x20) + (uStack_4c0 & 0xffffffff);
          uStack_630 = (uint)uVar17;
          uVar17 = (ulonglong)local_35c + (uVar17 >> 0x20) + (uStack_4c0 >> 0x20);
          uStack_62c = (uint)uVar17;
          uVar17 = (ulonglong)local_358 + (uVar17 >> 0x20) + (local_4b8 & 0xffffffff);
          local_628 = (uint)uVar17;
          uVar17 = (local_4b8 >> 0x20) + (uVar17 >> 0x20) + (ulonglong)local_354;
          uStack_624 = (uint)uVar17;
          uVar17 = (uStack_4b0 & 0xffffffff) + (uVar17 >> 0x20) + (ulonglong)local_350;
          uStack_620 = (uint)uVar17;
          uVar17 = (uStack_4b0 >> 0x20) + (uVar17 >> 0x20) + (ulonglong)local_34c;
          uStack_61c = (uint)uVar17;
          uVar17 = (local_4a8 & 0xffffffff) + (uVar17 >> 0x20) + (ulonglong)local_348;
          uVar30 = (uint)uVar17;
          local_618[0] = uVar30;
          uVar17 = (local_4a8 >> 0x20) + (uVar17 >> 0x20) + (ulonglong)local_344;
          uVar14 = (undefined4)uVar17;
          local_618[1] = uVar14;
          lVar25 = (uStack_4a0 & 0xffffffff) + (uVar17 >> 0x20) + (ulonglong)local_340;
          uVar31 = (undefined4)lVar25;
          local_618[2] = uVar31;
          iVar33 = (int)((ulonglong)lVar25 >> 0x20) + uStack_4a0._4_4_ + local_33c;
          local_618[3] = iVar33;
        }
        uVar14 = FCrc::MemCrc32(*(undefined8 *)(local_650 + 0x80),*(int *)(local_650 + 0x88) * 4,0);
        *(undefined4 *)(lVar25 + 0x90) = uVar14;
        if (local_608 != (ulonglong *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  return local_658;
}



// FUNCTION 142a4b680 FUN_142a4b680 body=533 status=ok
// SIG undefined FUN_142a4b680(void)

void FUN_142a4b680(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  undefined8 *puVar13;
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar5 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar5;
  }
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar8) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_28;
      }
      uVar8 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_142a4b7bf;
        uVar8 = puVar12[lVar5 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
      iVar7 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_44 = (iStack_40 - iVar7) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_142a4b7bf:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        puVar13 = (undefined8 *)((longlong)iStack_1c * 0x68 + *param_1);
        uVar8 = (int)((ulonglong)*puVar13 >> 0x20) * 0x17 + (int)*puVar13 & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar13 + 100) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar13 + 0xc) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 142a4b8a0 FUN_142a4b8a0 body=581 status=ok
// SIG undefined FUN_142a4b8a0(void)

void FUN_142a4b8a0(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  BOOL BVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  LARGE_INTEGER local_res18;
  undefined8 *local_68;
  longlong lStack_60;
  
  if ((0.0 < DAT_14667ae88) &&
     ((param_2 == '\0' ||
      ((DAT_146b298f0 != 0.0 &&
       (QueryPerformanceCounter(&local_res18),
       (double)DAT_14667ae88 <
       ((double)local_res18.QuadPart * DAT_1468b02f8 + 16777216.0) - DAT_146b298f0)))))) {
    puVar6 = (undefined8 *)0x0;
    iVar5 = 0;
    local_68 = (undefined8 *)0x0;
    lStack_60 = 0;
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    }
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 != 0) {
      if (0 < iVar1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_68,iVar1);
        puVar6 = local_68;
        iVar5 = (int)lStack_60;
      }
      _guard_xfg_dispatch_icall_nop
                (puVar6 + (longlong)iVar5 * 2,*(void **)(param_1 + 0x10),(longlong)iVar1 << 4);
      iVar5 = iVar5 + iVar1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    for (puVar4 = puVar6; puVar4 != puVar6 + (longlong)iVar5 * 2; puVar4 = puVar4 + 2) {
      local_68 = (undefined8 *)*puVar4;
      lVar2 = puVar4[1];
      lStack_60 = lVar2;
      if ((0.0 < DAT_14667ae88) &&
         ((param_2 == '\0' ||
          ((*(double *)(lVar2 + 0x20) != 0.0 &&
           (QueryPerformanceCounter(&local_res18),
           (double)DAT_14667ae88 <
           ((double)local_res18.QuadPart * DAT_1468b02f8 + 16777216.0) - *(double *)(lVar2 + 0x20)))
          )))) {
        BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x78));
        if (BVar3 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x78));
        }
        TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
        ::Empty(lVar2 + 0x28,0);
        *(undefined8 *)(lVar2 + 0x20) = 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x78));
      }
    }
    DAT_146b298f0 = 0.0;
    if (puVar6 != (undefined8 *)0x0) {
      FMemory::Free(puVar6);
    }
  }
  return;
}



// FUNCTION 142a4baf0 Remove body=417 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>_>,TDefaultMapHashableKeyFuncs<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  uVar2 = FUN_140438070(puVar7);
  lVar6 = (longlong)(int)((int)param_1[9] - 1U & uVar2);
  plVar10 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar10 = param_1 + 7;
  }
  piVar8 = (int *)((longlong)plVar10 + lVar6 * 4);
  iVar3 = *(int *)((longlong)plVar10 + lVar6 * 4);
  while( true ) {
    if (iVar3 == -1) {
      return 0;
    }
    puVar9 = (undefined8 *)((longlong)iVar3 * 0x68 + *param_1);
    if (*(int *)(param_2 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*param_2;
    }
    if (*(int *)(puVar9 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar9;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar7);
    if (iVar3 == 0) break;
    iVar3 = *(int *)(puVar9 + 0xc);
    piVar8 = (int *)(puVar9 + 0xc);
  }
  iVar3 = *piVar8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar6 = *param_1;
    lVar11 = (longlong)iVar3 * 0x68;
    lVar5 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar11 + 100 + lVar6));
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    piVar8 = (int *)((longlong)plVar10 + lVar5 * 4);
    iVar1 = *(int *)((longlong)plVar10 + lVar5 * 4);
    while (iVar1 != -1) {
      if (iVar1 == iVar3) {
        *piVar8 = *(int *)(lVar11 + 0x60 + lVar6);
        break;
      }
      piVar8 = (int *)(lVar6 + 0x60 + (longlong)iVar1 * 0x68);
      iVar1 = *piVar8;
    }
  }
  plVar10 = (longlong *)((longlong)iVar3 * 0x68 + *param_1);
  *(undefined4 *)(plVar10 + 0xb) = 0;
  if (plVar10[10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (plVar10 + 2);
  if (*plVar10 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar3,1);
  return 1;
}



// FUNCTION 142a4bca0 RemoveAtImpl body=198 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FPakPrecacher::FPakData,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + 0x80 + (longlong)param_2 * 0x98);
    iVar3 = param_3;
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x13;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x98),
                 (void *)((longlong)(param_2 + param_3) * 0x98 + *param_1),(longlong)iVar1 * 0x98);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 142a4bd70 RemoveRequest body=467 status=ok
// SIG undefined RemoveRequest(void)

void FPakAsyncReadFileHandle::RemoveRequest
               (longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  BOOL BVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  }
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove(param_1 + 0x70,param_2);
  uVar5 = param_3 / (longlong)(ulonglong)*(uint *)(param_1 + 0x68);
  lVar9 = (longlong)(int)uVar5;
  lVar11 = (longlong)
           (int)((param_4 + -1 + param_3) / (longlong)(ulonglong)*(uint *)(param_1 + 0x68));
  if (lVar9 <= lVar11) {
    do {
      lVar10 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(lVar10 + lVar9 * 8) == 0) {
        puVar6 = (undefined8 *)operator_new(0x38);
        puVar7 = (undefined8 *)0x0;
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
          puVar6[3] = 0;
          puVar6[4] = 0;
          *(undefined4 *)(puVar6 + 5) = 0;
          *(undefined4 *)((longlong)puVar6 + 0x2c) = 0xffffffff;
          *(undefined2 *)(puVar6 + 6) = 0;
          *(undefined1 *)((longlong)puVar6 + 0x32) = 0;
          puVar7 = puVar6;
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0xc0) + lVar9 * 8) = puVar7;
        *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + lVar9 * 8) + 0x2c) = (int)uVar5;
        lVar10 = *(longlong *)(param_1 + 0xc0);
      }
      plVar3 = *(longlong **)(lVar10 + lVar9 * 8);
      plVar8 = plVar3 + 5;
      *(int *)plVar8 = (int)*plVar8 + -1;
      if ((int)*plVar8 == 0) {
        plVar8 = (longlong *)*plVar3;
        if (plVar8 != (longlong *)0x0) {
          if (*(char *)((longlong)plVar8 + 0x73) == '\0') {
            *(undefined1 *)((longlong)plVar8 + 0x73) = 1;
            *(undefined1 *)(plVar8 + 0xe) = 1;
            if (*(char *)((longlong)plVar8 + 0x71) == '\0') {
              (**(code **)(*plVar8 + 0x10))();
            }
          }
          plVar8 = (longlong *)*plVar3;
          if (*(char *)((longlong)plVar8 + 0x71) == '\0') {
            (**(code **)(*plVar8 + 8))(plVar8,0);
            plVar8 = (longlong *)*plVar3;
          }
          if (plVar8 != (longlong *)0x0) {
            (**(code **)*plVar8)(plVar8,1);
          }
          *plVar3 = 0;
          *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + -1;
        }
        *plVar3 = 0;
        lVar10 = plVar3[3];
        plVar3[3] = 0;
        if (lVar10 != 0) {
          LOCK();
          piVar1 = (int *)(lVar10 + 0x48);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle();
          }
        }
        if (plVar3[1] != 0) {
          FMemory::Free();
          plVar3[1] = 0;
        }
        *(undefined4 *)(plVar3 + 4) = 0;
        if (plVar3[2] != 0) {
          FMemory::Free();
          plVar3[2] = 0;
        }
        *(undefined4 *)((longlong)plVar3 + 0x24) = 0;
        *(undefined2 *)(plVar3 + 6) = 0;
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
      lVar9 = lVar9 + 1;
    } while (lVar9 <= lVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x000142a4bf3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  return;
}



// FUNCTION 142a4bf50 FUN_142a4bf50 body=591 status=ok
// SIG undefined FUN_142a4bf50(void)

void FUN_142a4bf50(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  longlong local_res8;
  longlong local_48;
  longlong local_40;
  undefined1 *local_38;
  longlong *plStack_30;
  
  plVar1 = (longlong *)(param_1 + 0xb0);
  puVar8 = (ulonglong *)((longlong)(int)(~*(uint *)(param_1 + 0xd4) & param_2) * 0x30 + *plVar1);
  uVar4 = puVar8[1];
  uVar7 = *puVar8 & 0xffffffffffff;
  lVar9 = (*puVar8 >> 0x30) * 0x98 + *(longlong *)(param_1 + 0xa0);
  cVar5 = RemoveFromIntervalTree<FPakPrecacher::FPakInRequest>
                    (lVar9 + (((longlong)(int)puVar8[5] + 4) * 3 +
                             (longlong)*(int *)((longlong)puVar8 + 0x2c)) * 4,plVar1,param_2,uVar7,
                     (uVar7 - 1) + uVar4,*(undefined4 *)(lVar9 + 0x18),*(undefined4 *)(lVar9 + 0x1c)
                    );
  if (cVar5 != '\0') {
    plStack_30 = &local_48;
    lVar6 = (uVar7 - 1) + uVar4;
    local_38 = &LAB_142a3cd40;
    local_48 = param_1;
    local_40 = lVar6;
    MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock>
              (lVar9 + 0x7c,param_1 + 0xd8,uVar7,lVar6,0,*(undefined8 *)(lVar9 + 0x10),
               *(undefined4 *)(lVar9 + 0x18),*(undefined4 *)(lVar9 + 0x1c),&local_38);
    FUN_142a4fd70(param_1,0);
    plStack_30 = &local_res8;
    local_38 = &LAB_142a3ce70;
    local_res8 = param_1;
    FUN_142a353c0(*(undefined4 *)(lVar9 + 0x78),param_1 + 0xd8,uVar7,lVar6,0,
                  *(undefined8 *)(lVar9 + 0x10),*(undefined4 *)(lVar9 + 0x18),
                  *(undefined4 *)(lVar9 + 0x1c),&local_38);
  }
  uVar4 = puVar8[3];
  uVar7 = puVar8[4];
  puVar8[3] = 0;
  puVar8[4] = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *(undefined4 *)(puVar8 + 5) = 0;
  *(undefined4 *)((longlong)puVar8 + 0x2c) = 3;
  TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x100,uVar4);
  iVar2 = *(int *)(param_1 + 200);
  uVar3 = *(uint *)(param_1 + 0xd4);
  *(int *)(param_1 + 200) = iVar2 + 1;
  if (*(int *)(param_1 + 0xcc) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0xc0,iVar2);
  }
  *(uint *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar2 * 4) = ~uVar3 & (uint)uVar7;
  if (*(int *)(param_1 + 200) + 1 == *(int *)(param_1 + 0xb8)) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (*(int *)(param_1 + 0xbc) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(plVar1,0);
    }
    *(undefined4 *)(param_1 + 200) = 0;
    if (*(int *)(param_1 + 0xcc) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0xc0,0);
    }
    TIntervalTreeAllocator<FPakPrecacher::FPakInRequest>::Alloc(plVar1);
  }
  return;
}



// FUNCTION 142a4c1a0 FUN_142a4c1a0 body=362 status=ok
// SIG undefined FUN_142a4c1a0(void)

void FUN_142a4c1a0(longlong param_1)

{
  char cVar1;
  BOOL BVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((*(char *)(param_1 + -5) == '\0') &&
     ((*(char *)(param_1 + 0x4e) != '\0' || (0 < *(int *)(param_1 + 0x48))))) {
    if ((*(longlong *)(param_1 + 0x50) != *(longlong *)(param_1 + 0x20)) ||
       (lVar3 = 0, *(longlong *)(param_1 + 0x58) != *(longlong *)(param_1 + 0x28))) {
      lVar3 = FMemory::Malloc(*(undefined8 *)(param_1 + 0x28),0);
    }
    lVar4 = *(longlong *)(param_1 + -0x68);
    if (*(char *)(param_1 + -3) == '\0') {
      lVar4 = FMemory::Malloc(*(undefined8 *)(param_1 + 0x58),0);
    }
    lVar6 = lVar4;
    if (lVar3 != 0) {
      lVar6 = lVar3;
    }
    lVar5 = param_1;
    if (param_1 == 0x78) {
      lVar5 = 0;
    }
    cVar1 = FUN_142a42bf0(DAT_146b298e8,lVar5,lVar6);
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + -3) == '\0') {
        FMemory::Free(lVar4);
      }
      if (lVar3 != 0) {
        FMemory::Free(lVar3);
      }
    }
    else {
      *(longlong *)(param_1 + -0x68) = lVar4;
      if (lVar3 == 0) {
        FUN_142a3ea40(lVar4,*(int *)(param_1 + 0x58) + 0xfU & 0xfffffff0);
      }
      else {
        FUN_142a3ea40(lVar3,*(undefined4 *)(param_1 + 0x28));
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(param_1 + -0x68),
                   (void *)((lVar3 - *(longlong *)(param_1 + 0x20)) + *(longlong *)(param_1 + 0x50))
                   ,*(size_t *)(param_1 + 0x58));
        FMemory::Free(lVar3);
      }
    }
  }
  IAsyncReadRequest::SetDataComplete(param_1 + -0x78);
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b29880);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b29880);
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
  }
  *(undefined1 *)(param_1 + -7) = 1;
                    /* WARNING: Could not recover jumptable at 0x000142a4c303. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b29880);
  return;
}



// FUNCTION 142a4c310 FUN_142a4c310 body=521 status=ok
// SIG undefined FUN_142a4c310(void)

void FUN_142a4c310(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  BOOL BVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  size_t sVar14;
  size_t sVar15;
  longlong lVar16;
  int iVar17;
  size_t _Size;
  longlong lVar18;
  longlong lVar19;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x98);
  iVar17 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (iVar17 == 0) {
    if ((*(char *)(param_1 + 0x73) == '\0') && (0 < *(int *)(param_1 + 0x9c))) {
      if (*(char *)(param_1 + 0x75) == '\0') {
        uVar8 = FMemory::Malloc(*(undefined8 *)(param_1 + 0x88),0);
        *(undefined8 *)(param_1 + 0x10) = uVar8;
      }
      lVar3 = *(longlong *)(param_1 + 0x80);
      lVar4 = *(longlong *)(param_1 + 0x78);
      lVar5 = *(longlong *)(param_1 + 0x88);
      lVar6 = *(longlong *)(param_1 + 0x10);
      uVar2 = *(uint *)(lVar4 + 0x68);
      uVar9 = lVar3 / (longlong)(ulonglong)uVar2;
      for (lVar16 = (longlong)(int)uVar9;
          lVar16 <= (int)((lVar5 + -1 + lVar3) / (longlong)(ulonglong)uVar2); lVar16 = lVar16 + 1) {
        lVar12 = *(longlong *)(lVar4 + 0xc0);
        iVar17 = (int)uVar9;
        if (*(longlong *)(lVar12 + lVar16 * 8) == 0) {
          puVar10 = (undefined8 *)operator_new(0x38);
          puVar11 = (undefined8 *)0x0;
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = 0;
            puVar10[1] = 0;
            puVar10[2] = 0;
            puVar10[3] = 0;
            puVar10[4] = 0;
            *(undefined4 *)(puVar10 + 5) = 0;
            *(undefined4 *)((longlong)puVar10 + 0x2c) = 0xffffffff;
            *(undefined2 *)(puVar10 + 6) = 0;
            *(undefined1 *)((longlong)puVar10 + 0x32) = 0;
            puVar11 = puVar10;
          }
          *(undefined8 **)(*(longlong *)(lVar4 + 0xc0) + lVar16 * 8) = puVar11;
          *(int *)(*(longlong *)(*(longlong *)(lVar4 + 0xc0) + lVar16 * 8) + 0x2c) = iVar17;
          lVar12 = *(longlong *)(lVar4 + 0xc0);
        }
        lVar12 = *(longlong *)(lVar12 + lVar16 * 8);
        lVar13 = (ulonglong)*(uint *)(lVar4 + 0x68) * (longlong)iVar17 - lVar3;
        lVar19 = 0;
        if (lVar13 < 0) {
          lVar19 = -lVar13;
        }
        sVar15 = (size_t)*(int *)(lVar12 + 0x24);
        lVar18 = 0;
        if (-1 < lVar13) {
          lVar18 = lVar13;
        }
        sVar14 = lVar5 - lVar18;
        if ((longlong)(lVar18 + sVar15) <= lVar5) {
          sVar14 = sVar15;
        }
        _Size = sVar15 - lVar19;
        if ((longlong)(sVar14 + lVar19) <= (longlong)sVar15) {
          _Size = sVar14;
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(lVar18 + lVar6),(void *)(*(longlong *)(lVar12 + 0x10) + lVar19),_Size);
        uVar9 = (ulonglong)(iVar17 + 1);
      }
    }
    IAsyncReadRequest::SetDataComplete(param_1);
    BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b29880);
    if (BVar7 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b29880);
    }
    *(undefined1 *)(param_1 + 0xa0) = 0;
    if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))();
    }
    *(undefined1 *)(param_1 + 0x71) = 1;
                    /* WARNING: Could not recover jumptable at 0x000142a4c50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b29880);
    return;
  }
  return;
}



// FUNCTION 142a4c520 FUN_142a4c520 body=164 status=ok
// SIG undefined FUN_142a4c520(void)

void FUN_142a4c520(longlong param_1)

{
  BOOL BVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + -5) == '\0') &&
     ((*(char *)(param_1 + 0x4e) != '\0' || (0 < *(int *)(param_1 + 0x48))))) {
    if (*(char *)(param_1 + -3) == '\0') {
      uVar2 = FMemory::Malloc(*(undefined8 *)(param_1 + 0x28),0);
      *(undefined8 *)(param_1 + -0x68) = uVar2;
    }
    lVar3 = param_1;
    if (param_1 == 0x78) {
      lVar3 = 0;
    }
    FUN_142a42bf0(DAT_146b298e8,lVar3,*(undefined8 *)(param_1 + -0x68));
  }
  IAsyncReadRequest::SetDataComplete(param_1 + -0x78);
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b29880);
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b29880);
  }
  *(undefined1 *)(param_1 + 0x4c) = 0;
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
  }
  *(undefined1 *)(param_1 + -7) = 1;
                    /* WARNING: Could not recover jumptable at 0x000142a4c5bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b29880);
  return;
}



// FUNCTION 142a4c5d0 FUN_142a4c5d0 body=361 status=ok
// SIG undefined FUN_142a4c5d0(void)

void FUN_142a4c5d0(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar6 = (int)param_1[1];
  if (iVar6 < param_2) {
    uVar9 = (ulonglong)(uint)(param_2 - iVar6);
    *(int *)(param_1 + 1) = param_2;
    if (*(int *)((longlong)param_1 + 0xc) < param_2) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar6);
    }
    iVar8 = param_2 + -1;
    lVar11 = (longlong)iVar8;
    if (iVar6 <= lVar11) {
      iVar3 = *(int *)((longlong)param_1 + 0x34);
      lVar10 = lVar11 * 0x68;
      lVar11 = (lVar11 - iVar6) + 1;
      do {
        if (iVar3 != 0) {
          *(int *)((longlong)(int)param_1[6] * 0x68 + *param_1) = iVar8;
        }
        *(undefined4 *)(lVar10 + *param_1) = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (undefined4)param_1[6];
        }
        *(undefined4 *)(lVar10 + 4 + *param_1) = uVar5;
        lVar10 = lVar10 + -0x68;
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        iVar3 = *(int *)((longlong)param_1 + 0x34);
        *(int *)(param_1 + 6) = iVar8;
        iVar8 = iVar8 + -1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (0 < param_2 - iVar6) {
      do {
        iVar8 = (int)param_1[5];
        iVar6 = iVar8 + 1;
        *(int *)(param_1 + 5) = iVar6;
        if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
          uVar2 = (int)(iVar8 + 0x20 + (iVar8 + 0x20 >> 0x1f & 0x1fU)) >> 5;
          if (uVar2 < 5) {
            iVar3 = 4;
          }
          else {
            uVar4 = FMemory::QuantizeSize
                              ((((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2)
                               * 4 + 0x40,0);
            iVar6 = (int)param_1[5];
            iVar3 = (int)(uVar4 >> 2);
            if (iVar3 < (int)uVar2) {
              iVar3 = 0x7fffffff;
            }
          }
          *(int *)((longlong)param_1 + 0x2c) = iVar3 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,iVar6 + -1);
        }
        plVar7 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar7 = param_1 + 2;
        }
        iVar6 = iVar8;
        if (iVar8 < 0) {
          iVar6 = iVar8 + 0x1f;
        }
        puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar6 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)iVar8 & 0x1f));
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}



// FUNCTION 142a4c740 Run body=90 status=ok
// SIG undefined Run(void)

undefined8 FChunkCacheWorker::Run(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  LOCK();
  bVar2 = *(int *)(param_1 + 0x150) == 0;
  if (bVar2) {
    *(int *)(param_1 + 0x150) = 0;
  }
  UNLOCK();
  while (bVar2) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x20))
                      (*(longlong **)(param_1 + 0x130),0xffffffff,0);
    if (cVar1 != '\0') {
      FUN_142a48ff0(param_1);
    }
    LOCK();
    bVar2 = *(int *)(param_1 + 0x150) == 0;
    if (bVar2) {
      *(int *)(param_1 + 0x150) = 0;
    }
    UNLOCK();
  }
  return 0;
}



// FUNCTION 142a4c7e0 FUN_142a4c7e0 body=8 status=ok
// SIG undefined FUN_142a4c7e0(void)

void FUN_142a4c7e0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xb0) = param_2;
  return;
}



// FUNCTION 142a4c830 FUN_142a4c830 body=1455 status=ok
// SIG undefined FUN_142a4c830(void)

void FUN_142a4c830(longlong *param_1,longlong param_2,void *param_3,size_t param_4)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  size_t sVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 local_res10 [8];
  void *local_res18;
  ulonglong local_res20;
  undefined **local_108;
  void *local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  void *local_e0;
  longlong local_d8;
  size_t local_d0;
  int local_c8;
  longlong *local_c0;
  longlong *local_b8;
  ulonglong local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  undefined1 *local_78;
  undefined1 *puStack_70;
  longlong local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  
  local_res18 = param_3;
  FUN_142a48a60(param_1,&local_98);
  uVar2 = *(uint *)(param_1 + 9);
  local_res20 = (ulonglong)uVar2;
  uVar7 = param_2 / (longlong)(int)uVar2;
  param_2 = param_2 % (longlong)local_res20;
  local_108 = &PTR_DoThreadedWork_145361768;
  local_100 = (void *)0x0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  uStack_e4 = 0;
  local_e0 = (void *)0x0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = (longlong *)0x0;
  local_b8 = (longlong *)0x0;
  local_res10[0] = 0;
  puStack_70 = local_res10;
  local_78 = &LAB_142a3cc20;
  local_58 = 0x42a3cc20;
  uStack_54 = 1;
  local_a8 = uVar7;
  puStack_50 = puStack_70;
  lVar8 = FUN_1415d8310(&local_58,&DAT_14667b060);
  bVar15 = false;
  local_88 = lVar8;
  plVar9 = (longlong *)FUN_1415aac40();
  uVar5 = (**(code **)(*plVar9 + 8))(plVar9);
  iVar6 = FUN_1416452d0((int)param_1[4],local_res20 & 0xffffffff,uVar5);
  FUN_142a41070(lVar8,(longlong)(int)uVar2,(longlong)iVar6 * 2);
  local_68[0] = *(longlong *)(lVar8 + 0x30);
  local_68[1] = local_68[0] + iVar6;
  if (0 < (longlong)param_4) {
    do {
      plVar9 = local_98;
      plVar10 = (longlong *)((longlong)(int)uVar7 * 0x10 + param_1[7]);
      lVar8 = *plVar10;
      lVar14 = plVar10[1] - lVar8;
      uVar11 = param_1[3] - (ulonglong)(uint)((int)uVar7 * (int)local_res20);
      uVar7 = (ulonglong)*(uint *)(param_1 + 9);
      if ((longlong)uVar11 <= (longlong)(ulonglong)*(uint *)(param_1 + 9)) {
        uVar7 = uVar11;
      }
      sVar13 = param_4;
      if ((longlong)(uVar7 - param_2) <= (longlong)param_4) {
        sVar13 = uVar7 - param_2;
      }
      if (*(int *)(*param_1 + 0xa4) < 5) {
        lVar12 = 0;
      }
      else {
        lVar12 = param_1[1];
      }
      (**(code **)(*local_98 + 0xa8))(local_98,lVar8 + lVar12);
      local_a0 = local_68[(uint)local_a8 & 1];
      (**(code **)(*plVar9 + 0x50))(plVar9,local_a0,lVar14);
      if (bVar15) {
        if (local_b8 == (longlong *)0x0) {
          LOCK();
          bVar15 = local_c8 == 0;
          if (bVar15) {
            local_c8 = 0;
          }
          UNLOCK();
          if (!bVar15) {
            plVar9 = (longlong *)FUN_1415aac40();
            uVar5 = (**(code **)(*plVar9 + 8))(plVar9);
            FUN_14165b8a0(uStack_e4,local_100,local_f8 & 0xffffffff,local_f0,local_e8,0,uVar5);
            if (local_e0 != (void *)0x0) {
              _guard_xfg_dispatch_icall_nop
                        (local_e0,(void *)((longlong)local_100 + local_d8),local_d0);
            }
            LOCK();
            local_c8 = local_c8 + -1;
            UNLOCK();
          }
        }
        else {
          cVar4 = (**(code **)(*local_b8 + 0x18))(local_b8,&local_108);
          if (cVar4 != '\0') {
            plVar9 = (longlong *)FUN_1415aac40();
            uVar5 = (**(code **)(*plVar9 + 8))(plVar9);
            FUN_14165b8a0(uStack_e4,local_100,local_f8 & 0xffffffff,local_f0,local_e8,0,uVar5);
            if (local_e0 != (void *)0x0) {
              _guard_xfg_dispatch_icall_nop
                        (local_e0,(void *)((longlong)local_100 + local_d8),local_d0);
            }
            LOCK();
            local_c8 = local_c8 + -1;
            UNLOCK();
            if (local_c0 != (longlong *)0x0) {
              (**(code **)(*local_c0 + 0x10))();
            }
            goto LAB_142a4caf8;
          }
        }
        if (local_b8 != (longlong *)0x0) {
          (**(code **)(*local_c0 + 0x20))(local_c0,0xffffffff,0);
        }
      }
LAB_142a4caf8:
      pvVar3 = local_res18;
      if ((param_2 == 0) && ((longlong)(int)local_res20 <= (longlong)param_4)) {
        uStack_e4 = (undefined4)param_1[4];
        local_e0 = (void *)0x0;
        local_100 = local_res18;
      }
      else {
        uStack_e4 = (undefined4)param_1[4];
        local_100 = *(void **)(local_88 + 0x20);
        local_e0 = local_res18;
        local_d8 = param_2;
        local_d0 = sVar13;
      }
      local_f8 = CONCAT44(local_f8._4_4_,(int)uVar7);
      param_2 = 0;
      local_f0 = local_a0;
      local_e8 = (undefined4)lVar14;
      if (param_4 == sVar13) {
        LOCK();
        UNLOCK();
        local_b8 = (longlong *)0x0;
LAB_142a4cb7a:
        local_c8 = local_c8 + 1;
        FUN_1415b5910(local_c0);
        local_c0 = (longlong *)0x0;
        plVar9 = (longlong *)FUN_1415aac40();
        uVar5 = (**(code **)(*plVar9 + 8))(plVar9);
        FUN_14165b8a0(uStack_e4,local_100,local_f8 & 0xffffffff,local_f0,local_e8,0,uVar5);
        if (local_e0 != (void *)0x0) {
          _guard_xfg_dispatch_icall_nop(local_e0,(void *)((longlong)local_100 + local_d8),local_d0);
        }
        LOCK();
        local_c8 = local_c8 + -1;
        UNLOCK();
      }
      else {
        local_b8 = DAT_1468b5010;
        LOCK();
        iVar6 = local_c8 + 1;
        UNLOCK();
        if (DAT_1468b5010 == (longlong *)0x0) goto LAB_142a4cb7a;
        local_c8 = iVar6;
        if (local_c0 == (longlong *)0x0) {
          local_c0 = (longlong *)FUN_1415ab270(1);
        }
        (**(code **)(*local_c0 + 0x18))(local_c0);
        (**(code **)(*local_b8 + 0x10))(local_b8,&local_108);
      }
      local_res18 = (void *)((longlong)pvVar3 + sVar13);
      bVar15 = true;
      param_4 = param_4 - sVar13;
      uVar7 = (ulonglong)((int)local_a8 + 1);
      local_a8 = uVar7;
    } while (0 < (longlong)param_4);
    if (local_b8 == (longlong *)0x0) {
      LOCK();
      bVar15 = local_c8 == 0;
      if (bVar15) {
        local_c8 = 0;
      }
      UNLOCK();
      if (!bVar15) {
        plVar9 = (longlong *)FUN_1415aac40();
        uVar5 = (**(code **)(*plVar9 + 8))(plVar9);
        FUN_14165b8a0(uStack_e4,local_100,local_f8 & 0xffffffff,local_f0,local_e8,0,uVar5);
        if (local_e0 != (void *)0x0) {
          _guard_xfg_dispatch_icall_nop(local_e0,(void *)((longlong)local_100 + local_d8),local_d0);
        }
        LOCK();
        local_c8 = local_c8 + -1;
        UNLOCK();
      }
    }
    else {
      cVar4 = (**(code **)(*local_b8 + 0x18))(local_b8,&local_108);
      if (cVar4 != '\0') {
        plVar9 = (longlong *)FUN_1415aac40();
        uVar5 = (**(code **)(*plVar9 + 8))(plVar9);
        FUN_14165b8a0(uStack_e4,local_100,local_f8 & 0xffffffff,local_f0,local_e8,0,uVar5);
        if (local_e0 != (void *)0x0) {
          _guard_xfg_dispatch_icall_nop(local_e0,(void *)((longlong)local_100 + local_d8),local_d0);
        }
        LOCK();
        local_c8 = local_c8 + -1;
        UNLOCK();
        if (local_c0 != (longlong *)0x0) {
          (**(code **)(*local_c0 + 0x10))();
        }
        local_b8 = (longlong *)0x0;
        goto LAB_142a4cd6e;
      }
    }
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_c0 + 0x20))(local_c0,0xffffffff,0);
      local_b8 = (longlong *)0x0;
    }
  }
LAB_142a4cd6e:
  local_108 = &PTR_DoThreadedWork_145361768;
  FUN_1415b5910(local_c0);
  plVar9 = local_90;
  local_c0 = (longlong *)0x0;
  local_108 = &PTR__purecall_143f9a338;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_90 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  return;
}



// FUNCTION 142a4cde0 FUN_142a4cde0 body=1568 status=ok
// SIG undefined FUN_142a4cde0(void)

void FUN_142a4cde0(longlong *param_1,longlong param_2,void *param_3,size_t param_4)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  size_t sVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 local_res10 [8];
  void *local_res18;
  ulonglong local_res20;
  undefined **local_108;
  void *local_100;
  ulonglong local_f8;
  longlong local_f0;
  int local_e8;
  undefined4 uStack_e4;
  void *local_e0;
  longlong local_d8;
  size_t local_d0;
  int local_c8;
  longlong *local_c0;
  longlong *local_b8;
  ulonglong local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong *local_90;
  ulonglong local_88;
  longlong local_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  longlong local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  
  local_res18 = param_3;
  FUN_142a48a60(param_1,&local_98);
  uVar2 = *(uint *)(param_1 + 9);
  local_res20 = (ulonglong)uVar2;
  uVar7 = param_2 / (longlong)(int)uVar2;
  param_2 = param_2 % (longlong)local_res20;
  local_108 = &PTR_Abandon_145361780;
  local_100 = (void *)0x0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  uStack_e4 = 0;
  local_e0 = (void *)0x0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = (longlong *)0x0;
  local_b8 = (longlong *)0x0;
  local_res10[0] = 0;
  puStack_70 = local_res10;
  local_78 = &LAB_142a3cc20;
  local_58 = 0x42a3cc20;
  uStack_54 = 1;
  local_a8 = uVar7;
  puStack_50 = puStack_70;
  lVar8 = FUN_1415d8310(&local_58,&DAT_14667b060);
  bVar15 = false;
  local_80 = lVar8;
  plVar9 = (longlong *)FUN_1415aac40();
  uVar5 = (**(code **)(*plVar9 + 8))(plVar9);
  iVar6 = FUN_1416452d0((int)param_1[4],local_res20 & 0xffffffff,uVar5);
  uVar12 = (longlong)iVar6 + 0xfU & 0xfffffffffffffff0;
  FUN_142a41070(lVar8,(longlong)(int)uVar2,uVar12 * 2);
  local_68[0] = *(longlong *)(lVar8 + 0x30);
  local_68[1] = local_68[0] + uVar12;
  if (0 < (longlong)param_4) {
    do {
      plVar9 = local_98;
      plVar10 = (longlong *)((longlong)(int)uVar7 * 0x10 + param_1[7]);
      lVar8 = *plVar10;
      lVar14 = plVar10[1] - lVar8;
      uVar12 = param_1[3] - (ulonglong)(uint)((int)uVar7 * (int)local_res20);
      uVar7 = (ulonglong)*(uint *)(param_1 + 9);
      if ((longlong)uVar12 <= (longlong)(ulonglong)*(uint *)(param_1 + 9)) {
        uVar7 = uVar12;
      }
      local_88 = lVar14 + 0xfU & 0xfffffffffffffff0;
      sVar13 = param_4;
      if ((longlong)(uVar7 - param_2) <= (longlong)param_4) {
        sVar13 = uVar7 - param_2;
      }
      if (*(int *)(*param_1 + 0xa4) < 5) {
        lVar11 = 0;
      }
      else {
        lVar11 = param_1[1];
      }
      (**(code **)(*local_98 + 0xa8))(local_98,lVar8 + lVar11);
      local_a0 = local_68[(uint)local_a8 & 1];
      (**(code **)(*plVar9 + 0x50))(plVar9,local_a0,local_88);
      if (bVar15) {
        if (local_b8 == (longlong *)0x0) {
          LOCK();
          bVar15 = local_c8 == 0;
          if (bVar15) {
            local_c8 = 0;
          }
          UNLOCK();
          if (!bVar15) {
            FUN_142a3ea40(local_f0,local_e8 + 0xfU & 0xfffffff0);
            plVar9 = (longlong *)FUN_1415aac40();
            uVar5 = (**(code **)(*plVar9 + 8))(plVar9);
            FUN_14165b8a0(uStack_e4,local_100,local_f8 & 0xffffffff,local_f0,local_e8,0,uVar5);
            if (local_e0 != (void *)0x0) {
              _guard_xfg_dispatch_icall_nop
                        (local_e0,(void *)((longlong)local_100 + local_d8),local_d0);
            }
            LOCK();
            local_c8 = local_c8 + -1;
            UNLOCK();
          }
        }
        else {
          cVar4 = (**(code **)(*local_b8 + 0x18))(local_b8,&local_108);
          if (cVar4 != '\0') {
            FUN_142a3ea40(local_f0,local_e8 + 0xfU & 0xfffffff0);
            plVar9 = (longlong *)FUN_1415aac40();
            uVar5 = (**(code **)(*plVar9 + 8))(plVar9);
            FUN_14165b8a0(uStack_e4,local_100,local_f8 & 0xffffffff,local_f0,local_e8,0,uVar5);
            if (local_e0 != (void *)0x0) {
              _guard_xfg_dispatch_icall_nop
                        (local_e0,(void *)((longlong)local_100 + local_d8),local_d0);
            }
            LOCK();
            local_c8 = local_c8 + -1;
            UNLOCK();
            if (local_c0 != (longlong *)0x0) {
              (**(code **)(*local_c0 + 0x10))();
            }
            goto LAB_142a4d0dd;
          }
        }
        if (local_b8 != (longlong *)0x0) {
          (**(code **)(*local_c0 + 0x20))(local_c0,0xffffffff,0);
        }
      }
LAB_142a4d0dd:
      pvVar3 = local_res18;
      if ((param_2 == 0) && ((longlong)(int)local_res20 <= (longlong)param_4)) {
        uStack_e4 = (undefined4)param_1[4];
        local_e0 = (void *)0x0;
        local_100 = local_res18;
      }
      else {
        uStack_e4 = (undefined4)param_1[4];
        local_100 = *(void **)(local_80 + 0x20);
        local_e0 = local_res18;
        local_d8 = param_2;
        local_d0 = sVar13;
      }
      local_f8 = CONCAT44(local_f8._4_4_,(int)uVar7);
      param_2 = 0;
      local_f0 = local_a0;
      local_e8 = (int)lVar14;
      if (param_4 == sVar13) {
        LOCK();
        UNLOCK();
        local_b8 = (longlong *)0x0;
LAB_142a4d15f:
        local_c8 = local_c8 + 1;
        FUN_1415b5910(local_c0);
        local_c0 = (longlong *)0x0;
        FUN_142a3ea40(local_f0,local_e8 + 0xfU & 0xfffffff0);
        plVar9 = (longlong *)FUN_1415aac40();
        uVar5 = (**(code **)(*plVar9 + 8))(plVar9);
        FUN_14165b8a0(uStack_e4,local_100,local_f8 & 0xffffffff,local_f0,local_e8,0,uVar5);
        if (local_e0 != (void *)0x0) {
          _guard_xfg_dispatch_icall_nop(local_e0,(void *)((longlong)local_100 + local_d8),local_d0);
        }
        LOCK();
        local_c8 = local_c8 + -1;
        UNLOCK();
      }
      else {
        local_b8 = DAT_1468b5010;
        LOCK();
        iVar6 = local_c8 + 1;
        UNLOCK();
        if (DAT_1468b5010 == (longlong *)0x0) goto LAB_142a4d15f;
        local_c8 = iVar6;
        if (local_c0 == (longlong *)0x0) {
          local_c0 = (longlong *)FUN_1415ab270(1);
        }
        (**(code **)(*local_c0 + 0x18))(local_c0);
        (**(code **)(*local_b8 + 0x10))(local_b8,&local_108);
      }
      local_res18 = (void *)((longlong)pvVar3 + sVar13);
      bVar15 = true;
      param_4 = param_4 - sVar13;
      uVar7 = (ulonglong)((int)local_a8 + 1);
      local_a8 = uVar7;
    } while (0 < (longlong)param_4);
    if (local_b8 == (longlong *)0x0) {
      LOCK();
      bVar15 = local_c8 == 0;
      if (bVar15) {
        local_c8 = 0;
      }
      UNLOCK();
      if (!bVar15) {
        FUN_142a3ea40(local_f0,local_e8 + 0xfU & 0xfffffff0);
        plVar9 = (longlong *)FUN_1415aac40();
        uVar5 = (**(code **)(*plVar9 + 8))(plVar9);
        FUN_14165b8a0(uStack_e4,local_100,local_f8 & 0xffffffff,local_f0,local_e8,0,uVar5);
        if (local_e0 != (void *)0x0) {
          _guard_xfg_dispatch_icall_nop(local_e0,(void *)((longlong)local_100 + local_d8),local_d0);
        }
        LOCK();
        local_c8 = local_c8 + -1;
        UNLOCK();
      }
    }
    else {
      cVar4 = (**(code **)(*local_b8 + 0x18))(local_b8,&local_108);
      if (cVar4 != '\0') {
        FUN_142a3ea40(local_f0,local_e8 + 0xfU & 0xfffffff0);
        plVar9 = (longlong *)FUN_1415aac40();
        uVar5 = (**(code **)(*plVar9 + 8))(plVar9);
        FUN_14165b8a0(uStack_e4,local_100,local_f8 & 0xffffffff,local_f0,local_e8,0,uVar5);
        if (local_e0 != (void *)0x0) {
          _guard_xfg_dispatch_icall_nop(local_e0,(void *)((longlong)local_100 + local_d8),local_d0);
        }
        LOCK();
        local_c8 = local_c8 + -1;
        UNLOCK();
        if (local_c0 != (longlong *)0x0) {
          (**(code **)(*local_c0 + 0x10))();
        }
        local_b8 = (longlong *)0x0;
        goto LAB_142a4d38f;
      }
    }
    if (local_b8 != (longlong *)0x0) {
      (**(code **)(*local_c0 + 0x20))(local_c0,0xffffffff,0);
      local_b8 = (longlong *)0x0;
    }
  }
LAB_142a4d38f:
  local_108 = &PTR_Abandon_145361780;
  FUN_1415b5910(local_c0);
  plVar9 = local_90;
  local_c0 = (longlong *)0x0;
  local_108 = &PTR__purecall_143f9a338;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_90 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  return;
}



// FUNCTION 142a4d400 FUN_142a4d400 body=589 status=ok
// SIG undefined FUN_142a4d400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142a4d400(longlong param_1,ulonglong param_2,void *param_3,ulonglong param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  size_t _Size;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FUN_142a48a60(param_1,&local_b8);
  plVar8 = (longlong *)0x0;
  if ((param_2 + 0xf & 0xfffffffffffffff0) == param_2) {
    (**(code **)(*local_b8 + 0xa8))(local_b8,*(longlong *)(param_1 + 0x60) + param_2);
  }
  else {
    local_a8 = param_2 - (param_2 & 0xfffffffffffffff0);
    (**(code **)(*local_b8 + 0xa8))
              (local_b8,*(longlong *)(param_1 + 0x60) + (param_2 & 0xfffffffffffffff0));
    (**(code **)(*local_b8 + 0x50))(local_b8,local_60,0x10);
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    plVar5 = (longlong *)FUN_14164bef0();
    if ((((int)plVar5[1] != 0) && ((longlong *)*plVar5 != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(*(longlong *)*plVar5 + 0x18))(), cVar4 != '\0')) {
      plVar6 = plVar8;
      if ((int)plVar5[1] != 0) {
        plVar6 = (longlong *)*plVar5;
      }
      (**(code **)(*plVar6 + 0x38))(plVar6,&local_a0);
    }
    FAES::DecryptData(local_60,0x10,&local_a0);
    _Size = (size_t)(int)((((uint)param_2 & 0xfffffff0) - (uint)param_2) + 0x10);
    _guard_xfg_dispatch_icall_nop(param_3,local_60 + local_a8,_Size);
    param_3 = (void *)((longlong)param_3 + _Size);
    param_4 = param_4 - _Size;
  }
  uVar7 = param_4 & 0xfffffffffffffff0;
  (**(code **)(*local_b8 + 0x50))(local_b8,param_3,uVar7);
  FUN_142a3ea40(param_3,param_4 & 0xfffffff0);
  if (0 < (longlong)(param_4 - uVar7)) {
    (**(code **)(*local_b8 + 0x50))(local_b8,local_60,0x10);
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    plVar5 = (longlong *)FUN_14164bef0();
    if ((((int)plVar5[1] != 0) && ((longlong *)*plVar5 != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(*(longlong *)*plVar5 + 0x18))(), cVar4 != '\0')) {
      if ((int)plVar5[1] != 0) {
        plVar8 = (longlong *)*plVar5;
      }
      (**(code **)(*plVar8 + 0x38))(plVar8,&local_80);
    }
    FAES::DecryptData(local_60,0x10,&local_80);
    _guard_xfg_dispatch_icall_nop((void *)((longlong)param_3 + uVar7),local_60,param_4 - uVar7);
  }
  plVar8 = local_b0;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_b0 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  return;
}



// FUNCTION 142a4d650 FUN_142a4d650 body=350 status=ok
// SIG undefined FUN_142a4d650(void)

void FUN_142a4d650(longlong param_1,longlong *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [8];
  
  FUN_1404c11e0(param_2,param_1);
  FUN_1404c11e0(param_2,param_1 + 8);
  FUN_1404c11e0(param_2,param_1 + 0x10);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x18,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x18,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if (param_3 < 2) {
    FUN_1404c11e0(param_2,local_res8);
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x1c,0x14);
  if (2 < param_3) {
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_142a39540(param_2,param_1 + 0x30);
    }
    puVar2 = *(undefined1 **)param_2[1];
    if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x44,1);
    }
    else {
      *(undefined1 *)(param_1 + 0x44) = *puVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
    puVar1 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x40,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,param_1 + 0x40,4);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x40) = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  return;
}



// FUNCTION 142a4d7b0 Serialize body=586 status=ok
// SIG undefined Serialize(void)

/* WARNING: Removing unreachable block (ram,0x000142a4d9d8) */

void FSignedArchiveReader::Serialize(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  
  lVar6 = PrecacheChunks(param_1);
  if (*(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x20) == 0) {
    FUN_142a48ff0();
  }
  iVar3 = (int)lVar6;
  uVar10 = (ulonglong)(iVar3 + -1);
  do {
    uVar7 = 0;
    if ((longlong)uVar10 < 0) {
LAB_142a4d915:
      if (*(longlong *)(*(longlong *)(param_1 + 0xb8) + 0x20) == 0) {
        FUN_142a48ff0();
      }
      else {
        plVar8 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + 0x138);
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x20))(plVar8,0xffffffff,0);
        }
      }
    }
    else {
      plVar8 = (longlong *)&DAT_00000010;
      uVar9 = uVar7;
      do {
        if (plVar8[-2] == 0) {
LAB_142a4d8d7:
          if ((longlong *)plVar8[-1] != (longlong *)0x0) {
            ::_guard_xfg_dispatch_icall_nop
                      ((void *)(plVar8[1] + param_2),(void *)(*(longlong *)plVar8[-1] + *plVar8),
                       plVar8[2]);
            lVar6 = lVar6 + -1;
            plVar8[-1] = 0;
            uVar7 = (ulonglong)((int)uVar7 + 1);
          }
        }
        else {
          piVar1 = (int *)(plVar8[-2] + 0x20);
          LOCK();
          bVar11 = *piVar1 == 0;
          if (bVar11) {
            *piVar1 = 0;
          }
          UNLOCK();
          if (bVar11) goto LAB_142a4d8d7;
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(plVar8[1] + param_2),
                     (void *)(**(longlong **)(plVar8[-2] + 0x18) + *plVar8),plVar8[2]);
          if ((uVar10 == uVar9) && (*(int *)plVar8[-2] != *(int *)(param_1 + 0xcc))) {
            *(int *)(param_1 + 0xcc) = *(int *)plVar8[-2];
            ::_guard_xfg_dispatch_icall_nop
                      (*(void **)(param_1 + 0xc0),(void *)**(undefined8 **)(plVar8[-2] + 0x18),
                       0x10000);
          }
          lVar4 = *(longlong *)(param_1 + 0xb8);
          LOCK();
          piVar1 = (int *)(plVar8[-2] + 0x24);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar2 == 1) && (plVar5 = *(longlong **)(lVar4 + 0x130), plVar5 != (longlong *)0x0)) {
            (**(code **)(*plVar5 + 0x10))();
          }
          lVar6 = lVar6 + -1;
          plVar8[-2] = 0;
          uVar7 = (ulonglong)((int)uVar7 + 1);
        }
        uVar9 = uVar9 + 1;
        plVar8 = plVar8 + 5;
      } while ((longlong)uVar9 <= (longlong)uVar10);
      if ((int)uVar7 == 0) goto LAB_142a4d915;
    }
    if (lVar6 < 1) {
      plVar8 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + 0x138);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x18))();
      }
      *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xb0) + param_3;
      if (iVar3 < 0) {
        uVar10 = (ulonglong)(uint)-iVar3;
        plVar8 = (longlong *)((longlong)iVar3 * 0x28);
        do {
          if (*plVar8 != 0) {
            lVar6 = *(longlong *)(param_1 + 0xb8);
            LOCK();
            piVar1 = (int *)(*plVar8 + 0x24);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar3 == 1) && (plVar5 = *(longlong **)(lVar6 + 0x130), plVar5 != (longlong *)0x0))
            {
              (**(code **)(*plVar5 + 0x10))();
            }
          }
          plVar8 = plVar8 + 5;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      return;
    }
  } while( true );
}



// FUNCTION 142a4da00 SetDataComplete body=124 status=ok
// SIG undefined SetDataComplete(void)

void IAsyncReadRequest::SetDataComplete(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  longlong local_res10 [3];
  
  *(undefined1 *)(param_1 + 0x70) = 1;
  if (*(int *)(param_1 + 0x60) != 0) {
    lVar2 = 0;
    lVar1 = lVar2;
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar1 = param_1 + 0x30;
    }
    if (lVar1 != 0 || *(longlong *)(param_1 + 0x50) != 0) {
      local_res8[0] = *(undefined1 *)(param_1 + 0x73);
      local_res10[0] = param_1;
      if (*(int *)(param_1 + 0x60) != 0) {
        plVar3 = *(longlong **)(param_1 + 0x50);
        if (*(longlong **)(param_1 + 0x50) == (longlong *)0x0) {
          plVar3 = (longlong *)(param_1 + 0x30);
        }
        if (plVar3 != (longlong *)0x0) {
          lVar2 = (**(code **)(*plVar3 + 8))();
        }
      }
      (**(code **)(param_1 + 0x20))(lVar2,local_res8,local_res10);
    }
  }
  return;
}



// FUNCTION 142a4da80 SetReadOnly body=213 status=ok
// SIG undefined SetReadOnly(void)

undefined1 FPakPlatformFile::SetReadOnly(longlong param_1,short *param_2,undefined1 param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_18;
  ulonglong local_10;
  
  cVar1 = FUN_142a42000(param_1,param_2,0,0);
  if (cVar1 == '\0') {
    local_18 = 0;
    local_10 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (param_2[lVar3] != 0);
      uVar2 = (int)lVar3 + 1;
      local_10 = (ulonglong)uVar2;
      if (0 < (int)uVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      }
      FGenericPlatformString::Memcpy(local_18,param_2,(longlong)(int)uVar2 * 2);
    }
    cVar1 = FUN_142a45470(param_1,&local_18);
    if (local_18 != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      param_3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))
                          (*(longlong **)(param_1 + 8),param_2,param_3);
    }
  }
  return param_3;
}



// FUNCTION 142a4db60 SetTimeStamp body=206 status=ok
// SIG undefined SetTimeStamp(void)

void FPakPlatformFile::SetTimeStamp(longlong param_1,short *param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_18;
  ulonglong local_10;
  
  cVar1 = FUN_142a42000(param_1,param_2,0,0);
  if (cVar1 == '\0') {
    local_18 = 0;
    local_10 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (param_2[lVar3] != 0);
      uVar2 = (int)lVar3 + 1;
      local_10 = (ulonglong)uVar2;
      if (0 < (int)uVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      }
      FGenericPlatformString::Memcpy(local_18,param_2,(longlong)(int)uVar2 * 2);
    }
    cVar1 = FUN_142a45470(param_1,&local_18);
    if (local_18 != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 8) + 0xa0))
                (*(longlong **)(param_1 + 8),param_2,param_3);
    }
  }
  return;
}



// FUNCTION 142a4dc30 FUN_142a4dc30 body=4563 status=ok
// SIG undefined FUN_142a4dc30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a4dc30(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
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
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  int *piVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int iVar25;
  longlong lVar26;
  ulonglong *puVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined1 auStack_5f8 [32];
  uint local_5d8;
  uint local_5c8;
  uint uStack_5c4;
  uint uStack_5c0;
  uint uStack_5bc;
  uint local_5b8;
  uint uStack_5b4;
  uint uStack_5b0;
  uint uStack_5ac;
  uint local_5a8;
  uint uStack_5a4;
  uint uStack_5a0;
  uint uStack_59c;
  uint local_598 [4];
  longlong local_588;
  uint uStack_57c;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  ulonglong uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  longlong local_538;
  longlong local_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  uint local_428 [4];
  uint local_418;
  uint local_414;
  uint local_410;
  uint local_40c;
  uint local_408;
  uint local_404;
  uint local_400;
  uint local_3fc;
  uint local_3f8;
  uint local_3f4;
  uint local_3f0;
  int local_3ec;
  uint local_3a8 [4];
  uint local_398;
  uint local_394;
  uint local_390;
  uint local_38c;
  uint local_388;
  uint local_384;
  uint local_380;
  uint local_37c;
  uint local_378;
  uint local_374;
  uint local_370;
  int local_36c;
  int local_328 [4];
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  int local_2a8 [4];
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
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
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint local_f8 [4];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_5f8;
  puVar27 = (ulonglong *)(param_1 + 0x260);
  local_530 = param_1;
  FUN_142a436c0(puVar27);
  iVar25 = 0xf;
  piVar21 = (int *)(param_1 + 0x298);
  lVar28 = 0xf;
  do {
    if (piVar21[1] != 0) break;
    if (*piVar21 != 0) {
      iVar25 = iVar25 + -1;
      break;
    }
    if (piVar21[-1] != 0) {
      iVar25 = iVar25 + -2;
      break;
    }
    if (piVar21[-2] != 0) {
      iVar25 = iVar25 + -3;
      break;
    }
    piVar21 = piVar21 + -4;
    iVar25 = iVar25 + -4;
    lVar28 = lVar28 + -4;
  } while (-1 < lVar28);
  if (-1 < iVar25) {
    iVar25 = 0xf;
    piVar21 = (int *)(param_1 + 0x2d8);
    lVar28 = 0xf;
    do {
      if (piVar21[1] != 0) break;
      if (*piVar21 != 0) {
        iVar25 = iVar25 + -1;
        break;
      }
      if (piVar21[-1] != 0) {
        iVar25 = iVar25 + -2;
        break;
      }
      if (piVar21[-2] != 0) {
        iVar25 = iVar25 + -3;
        break;
      }
      piVar21 = piVar21 + -4;
      iVar25 = iVar25 + -4;
      lVar28 = lVar28 + -4;
    } while (-1 < lVar28);
    if (-1 < iVar25) goto LAB_142a4dd65;
  }
  LowLevelFatalErrorHandler("Unknown",99,L"Invalid decryption key detected");
  FDebug::AssertFailed(&DAT_14535dacb,"Unknown");
LAB_142a4dd65:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b29970) && (_Init_thread_header(), DAT_146b29970 == -1)) {
    _DAT_14667af20 = 0x17;
    _DAT_14667af28 = 0;
    _DAT_14667af30 = 0;
    _DAT_14667af38 = 0;
    _DAT_14667af40 = 0;
    _DAT_14667af48 = 0;
    _DAT_14667af50 = 0;
    _DAT_14667af58 = 0;
    _DAT_14667af68 = 0;
    _DAT_14667af70 = 0;
    _DAT_14667af78 = 0;
    _DAT_14667af80 = 0;
    _DAT_14667af88 = 0;
    _DAT_14667af90 = 0;
    _DAT_14667af98 = 0;
    _DAT_14667afa8 = 0;
    _DAT_14667afb0 = 0;
    _DAT_14667afb8 = 0;
    _DAT_14667afc0 = 0;
    _DAT_14667afc8 = 0;
    _DAT_14667afd0 = 0;
    _DAT_14667afd8 = 0;
    _DAT_14667afe8 = 0;
    _DAT_14667aff0 = 0;
    _DAT_14667aff8 = 0;
    _DAT_14667b000 = 0;
    _DAT_14667b008 = 0;
    _DAT_14667b010 = 0;
    _DAT_14667b018 = 0;
    _DAT_14667b028 = 0;
    _DAT_14667b030 = 0;
    _DAT_14667b038 = 0;
    _DAT_14667b040 = 0;
    _DAT_14667b048 = 0;
    _DAT_14667b050 = 0;
    _DAT_14667b058 = 0;
    _DAT_14667af60 = 0x43;
    _DAT_14667afa0 = 0x79;
    _DAT_14667afe0 = 0xb4;
    _DAT_14667b020 = 0xd3;
    _Init_thread_footer();
  }
  local_5d8 = 0;
  local_588 = 0;
  do {
    if (5 < local_5d8) {
      LowLevelFatalErrorHandler
                ("Unknown",0x74,L"Decryption key produces identical results to source data.");
      FDebug::AssertFailed
                (&DAT_14535dacc,"Unknown",0x74,
                 L"Decryption key produces identical results to source data.");
      return;
    }
    local_528 = *(undefined8 *)(param_1 + 0x2a0);
    uStack_520 = *(undefined8 *)(param_1 + 0x2a8);
    uStack_4e0 = 0;
    local_518 = *(undefined8 *)(param_1 + 0x2b0);
    uStack_510 = *(undefined8 *)(param_1 + 0x2b8);
    local_538 = local_588 * 0x40;
    uVar31 = 0;
    uVar32 = 0;
    local_508 = *(undefined8 *)(param_1 + 0x2c0);
    uStack_500 = *(undefined8 *)(param_1 + 0x2c8);
    uVar33 = 0;
    uVar34 = 0;
    local_4e8 = 1;
    local_5c8 = *(uint *)(&DAT_14667aee0 + local_538);
    uStack_5c4 = *(uint *)(&DAT_14667aee4 + local_538);
    uStack_5c0 = *(undefined4 *)(local_538 + 0x14667aee8);
    uStack_5bc = *(undefined4 *)(local_538 + 0x14667aeec);
    local_5b8 = *(uint *)(&DAT_14667aef0 + local_538);
    uStack_5b4 = *(undefined4 *)(local_538 + 0x14667aef4);
    uStack_5b0 = *(undefined4 *)(local_538 + 0x14667aef8);
    uStack_5ac = *(undefined4 *)(local_538 + 0x14667aefc);
    local_5a8 = *(uint *)(&DAT_14667af00 + local_538);
    uStack_5a4 = *(undefined4 *)(local_538 + 0x14667af04);
    uStack_5a0 = *(undefined4 *)(local_538 + 0x14667af08);
    uStack_59c = *(undefined4 *)(local_538 + 0x14667af0c);
    uVar35 = 0;
    uVar36 = 0;
    local_578 = *puVar27;
    uStack_570 = puVar27[1];
    local_4f8 = *(undefined8 *)(param_1 + 0x2d0);
    uStack_4f0 = *(undefined8 *)(param_1 + 0x2d8);
    local_568 = puVar27[2];
    uStack_560 = puVar27[3];
    local_558 = puVar27[4];
    uStack_550 = puVar27[5];
    local_548 = puVar27[6];
    uStack_540 = puVar27[7];
    local_598[0] = *(uint *)(&DAT_14667af10 + local_538);
    local_598[1] = *(undefined4 *)(local_538 + 0x14667af14);
    local_598[2] = *(undefined4 *)(local_538 + 0x14667af18);
    local_598[3] = *(int *)(local_538 + 0x14667af1c);
    local_4d8 = 0;
    uStack_4d0 = 0;
    local_4c8 = 0;
    uStack_4c0 = 0;
    local_4b8 = 0;
    uStack_4b0 = 0;
    while (uVar18 = local_598[3], uVar17 = local_598[2], uVar16 = local_598[1],
          uVar15 = local_598[0], uVar14 = uStack_59c, uVar13 = uStack_5a0, uVar12 = uStack_5a4,
          uVar11 = local_5a8, uVar10 = uStack_5ac, uVar9 = uStack_5b0, uVar8 = uStack_5b4,
          uVar7 = local_5b8, uVar6 = uStack_5bc, uVar5 = uStack_5c0, uVar4 = uStack_5c4,
          uVar2 = local_5c8, -1 < (longlong)uStack_540) {
      iVar25 = 0xf;
      piVar21 = (int *)((longlong)&local_548 + 4);
      lVar28 = 0xf;
      do {
        if (piVar21[2] != 0) break;
        if (piVar21[1] != 0) {
          iVar25 = iVar25 + -1;
          break;
        }
        if (*piVar21 != 0) {
          iVar25 = iVar25 + -2;
          break;
        }
        if (piVar21[-1] != 0) {
          iVar25 = iVar25 + -3;
          break;
        }
        piVar21 = piVar21 + -4;
        iVar25 = iVar25 + -4;
        lVar28 = lVar28 + -4;
      } while (-1 < lVar28);
      if (iVar25 < 0) break;
      if ((local_578 & 1) != 0) {
        _guard_xfg_dispatch_icall_nop(local_428,0,0x80);
        piVar21 = (int *)((longlong)&local_178 + 4);
        iVar25 = 0xf;
        local_1a8 = local_4e8;
        uStack_1a0 = uStack_4e0;
        lVar28 = 0xf;
        local_198 = uVar31;
        uStack_190 = uVar32;
        local_188 = uVar33;
        uStack_180 = uVar34;
        local_178 = uVar35;
        uStack_170 = uVar36;
        do {
          if (piVar21[2] != 0) break;
          if (piVar21[1] != 0) {
            iVar25 = iVar25 + -1;
            break;
          }
          if (*piVar21 != 0) {
            iVar25 = iVar25 + -2;
            break;
          }
          if (piVar21[-1] != 0) {
            iVar25 = iVar25 + -3;
            break;
          }
          piVar21 = piVar21 + -4;
          iVar25 = iVar25 + -4;
          lVar28 = lVar28 + -4;
        } while (-1 < lVar28);
        lVar28 = 0xf;
        puVar19 = local_598 + 1;
        do {
          if (puVar19[2] != 0) break;
          if (puVar19[1] != 0) {
            lVar28 = lVar28 + -1;
            break;
          }
          if (*puVar19 != 0) {
            lVar28 = lVar28 + -2;
            break;
          }
          if (puVar19[-1] != 0) {
            lVar28 = lVar28 + -3;
            break;
          }
          puVar19 = puVar19 + -4;
          lVar28 = lVar28 + -4;
        } while (-1 < lVar28);
        lVar26 = (longlong)(iVar25 + 1);
        lVar28 = lVar28 + 1;
        if (0 < iVar25 + 1) {
          puVar19 = local_428 + lVar28;
          lVar30 = -0x1a0;
          do {
            uVar1 = puVar19[0xa0 - lVar28];
            uVar22 = 0;
            if (0 < lVar28) {
              puVar20 = puVar19 + -lVar28;
              lVar29 = lVar28;
              do {
                uVar22 = (ulonglong)*puVar20 +
                         (ulonglong)*(uint *)(lVar30 + (longlong)puVar20) * (ulonglong)uVar1 +
                         uVar22;
                *puVar20 = (uint)uVar22;
                uVar22 = uVar22 >> 0x20;
                lVar29 = lVar29 + -1;
                puVar20 = puVar20 + 1;
              } while (lVar29 != 0);
            }
            *puVar19 = *puVar19 + (int)uVar22;
            lVar30 = lVar30 + -4;
            puVar19 = puVar19 + 1;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
        }
        uVar22 = (ulonglong)local_428[0];
        uVar24 = (ulonglong)local_428[1];
        uStack_4e0 = CONCAT44(local_428[3],local_428[2]);
        local_4d8 = CONCAT44(local_414,local_418);
        uStack_4d0 = CONCAT44(local_40c,local_410);
        local_4c8 = CONCAT44(local_404,local_408);
        uStack_4c0 = CONCAT44(local_3fc,local_400);
        local_4b8 = CONCAT44(local_3f4,local_3f8);
        uStack_4b0 = CONCAT44(local_3ec,local_3f0);
        local_498 = local_4d8;
        uStack_490 = uStack_4d0;
        local_4e8 = CONCAT44(local_428[1],local_428[0]);
        local_4a8 = local_4e8;
        uStack_4a0 = uStack_4e0;
        local_478 = local_4b8;
        uStack_470 = uStack_4b0;
        local_228 = 0;
        local_220 = 0;
        local_218 = 0;
        local_210 = 0;
        local_208 = 0;
        local_200 = 0;
        local_1f8 = 0;
        local_1f0 = 0;
        local_488 = local_4c8;
        uStack_480 = uStack_4c0;
        TBigInt<512,1>::DivideWithRemainder(&local_4a8,&local_528,&local_228);
        _guard_xfg_dispatch_icall_nop(local_328,0,0x80);
        piVar21 = (int *)((longlong)&local_138 + 4);
        iVar25 = 0xf;
        local_168 = local_4a8;
        uStack_160 = uStack_4a0;
        lVar28 = 0xf;
        local_158 = local_498;
        uStack_150 = uStack_490;
        local_148 = local_488;
        uStack_140 = uStack_480;
        local_138 = local_478;
        uStack_130 = uStack_470;
        do {
          if (piVar21[2] != 0) break;
          if (piVar21[1] != 0) {
            iVar25 = iVar25 + -1;
            break;
          }
          if (*piVar21 != 0) {
            iVar25 = iVar25 + -2;
            break;
          }
          if (piVar21[-1] != 0) {
            iVar25 = iVar25 + -3;
            break;
          }
          piVar21 = piVar21 + -4;
          iVar25 = iVar25 + -4;
          lVar28 = lVar28 + -4;
        } while (-1 < lVar28);
        lVar28 = 0xf;
        piVar21 = (int *)((longlong)&local_4f8 + 4);
        do {
          if (piVar21[2] != 0) break;
          if (piVar21[1] != 0) {
            lVar28 = lVar28 + -1;
            break;
          }
          if (*piVar21 != 0) {
            lVar28 = lVar28 + -2;
            break;
          }
          if (piVar21[-1] != 0) {
            lVar28 = lVar28 + -3;
            break;
          }
          piVar21 = piVar21 + -4;
          lVar28 = lVar28 + -4;
        } while (-1 < lVar28);
        lVar26 = (longlong)(iVar25 + 1);
        lVar28 = lVar28 + 1;
        if (0 < iVar25 + 1) {
          piVar21 = local_328 + lVar28;
          lVar30 = -0x200;
          do {
            uVar1 = piVar21[0x70 - lVar28];
            uVar23 = 0;
            if (0 < lVar28) {
              puVar19 = (uint *)(piVar21 + -lVar28);
              lVar29 = lVar28;
              do {
                uVar23 = (ulonglong)*puVar19 +
                         (ulonglong)*(uint *)(lVar30 + (longlong)puVar19) * (ulonglong)uVar1 +
                         uVar23;
                *puVar19 = (uint)uVar23;
                uVar23 = uVar23 >> 0x20;
                lVar29 = lVar29 + -1;
                puVar19 = puVar19 + 1;
              } while (lVar29 != 0);
            }
            *piVar21 = *piVar21 + (int)uVar23;
            lVar30 = lVar30 + -4;
            piVar21 = piVar21 + 1;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
        }
        local_4a8 = CONCAT44(local_328[1],local_328[0]);
        uStack_4a0 = CONCAT44(local_328[3],local_328[2]);
        local_498 = CONCAT44(local_314,local_318);
        uStack_490 = CONCAT44(local_30c,local_310);
        local_488 = CONCAT44(local_304,local_308);
        uStack_480 = CONCAT44(local_2fc,local_300);
        local_478 = CONCAT44(local_2f4,local_2f8);
        uStack_470 = CONCAT44(local_2ec,local_2f0);
        TBigInt<512,1>::Negate(&local_4a8);
        uVar22 = (local_4a8 & 0xffffffff) + uVar22;
        uVar24 = (uVar22 >> 0x20) + uVar24 + (local_4a8 >> 0x20);
        local_4e8 = CONCAT44((int)uVar24,(int)uVar22);
        uVar24 = (ulonglong)local_428[2] + (uVar24 >> 0x20) + (uStack_4a0 & 0xffffffff);
        uVar22 = (ulonglong)local_428[3] + (uVar24 >> 0x20) + (uStack_4a0 >> 0x20);
        uStack_4e0 = CONCAT44((int)uVar22,(int)uVar24);
        uVar24 = (ulonglong)local_418 + (uVar22 >> 0x20) + (local_498 & 0xffffffff);
        uVar22 = (ulonglong)local_414 + (uVar24 >> 0x20) + (local_498 >> 0x20);
        local_4d8 = CONCAT44((int)uVar22,(int)uVar24);
        uVar24 = (ulonglong)local_410 + (uVar22 >> 0x20) + (uStack_490 & 0xffffffff);
        uVar22 = (ulonglong)local_40c + (uVar24 >> 0x20) + (uStack_490 >> 0x20);
        uStack_4d0 = CONCAT44((int)uVar22,(int)uVar24);
        uVar24 = (local_488 & 0xffffffff) + (uVar22 >> 0x20) + (ulonglong)local_408;
        uVar22 = (local_488 >> 0x20) + (uVar24 >> 0x20) + (ulonglong)local_404;
        local_4c8 = CONCAT44((int)uVar22,(int)uVar24);
        uVar24 = (uStack_480 & 0xffffffff) + (uVar22 >> 0x20) + (ulonglong)local_400;
        uVar22 = (uStack_480 >> 0x20) + (uVar24 >> 0x20) + (ulonglong)local_3fc;
        uStack_4c0 = CONCAT44((int)uVar22,(int)uVar24);
        uVar24 = (local_478 & 0xffffffff) + (uVar22 >> 0x20) + (ulonglong)local_3f8;
        uVar22 = (local_478 >> 0x20) + (uVar24 >> 0x20) + (ulonglong)local_3f4;
        local_4b8 = CONCAT44((int)uVar22,(int)uVar24);
        lVar28 = (uStack_470 & 0xffffffff) + (uVar22 >> 0x20) + (ulonglong)local_3f0;
        uStack_4b0 = CONCAT44((int)((ulonglong)lVar28 >> 0x20) + uStack_470._4_4_ + local_3ec,
                              (int)lVar28);
        uVar31 = local_4d8;
        uVar32 = uStack_4d0;
        uVar33 = local_4c8;
        uVar34 = uStack_4c0;
        uVar35 = local_4b8;
        uVar36 = uStack_4b0;
      }
      uVar1 = (uint)local_558;
      lVar28 = 9;
      local_558 = CONCAT44(local_558._4_4_,(uint)local_558 >> 1);
      local_578 = CONCAT44((uint)uStack_570 << 0x1f | local_578._4_4_ >> 1,
                           local_578._4_4_ << 0x1f | (uint)local_578 >> 1);
      uStack_570 = CONCAT44((uint)local_568 << 0x1f | uStack_570._4_4_ >> 1,
                            uStack_570._4_4_ << 0x1f | (uint)uStack_570 >> 1);
      local_568 = CONCAT44((uint)uStack_560 << 0x1f | local_568._4_4_ >> 1,
                           local_568._4_4_ << 0x1f | (uint)local_568 >> 1);
      uStack_560 = CONCAT44(uVar1 << 0x1f | uStack_560._4_4_ >> 1,
                            uStack_560._4_4_ << 0x1f | (uint)uStack_560 >> 1);
      do {
        uVar1 = *(uint *)((longlong)&local_578 + lVar28 * 4);
        (&uStack_57c)[lVar28] = (&uStack_57c)[lVar28] | uVar1 << 0x1f;
        *(uint *)((longlong)&local_578 + lVar28 * 4) = uVar1 >> 1;
        lVar28 = lVar28 + 1;
      } while (lVar28 < 0x10);
      _guard_xfg_dispatch_icall_nop(local_3a8,0,0x80);
      iVar25 = 0xf;
      local_128 = uVar2;
      uStack_124 = uVar4;
      uStack_120 = uVar5;
      uStack_11c = uVar6;
      lVar28 = 0xf;
      local_118 = uVar7;
      uStack_114 = uVar8;
      uStack_110 = uVar9;
      uStack_10c = uVar10;
      local_108 = uVar11;
      uStack_104 = uVar12;
      uStack_100 = uVar13;
      uStack_fc = uVar14;
      puVar19 = local_f8 + 1;
      local_f8[0] = uVar15;
      local_f8[1] = uVar16;
      local_f8[2] = uVar17;
      local_f8[3] = uVar18;
      do {
        if (puVar19[2] != 0) break;
        if (puVar19[1] != 0) {
          iVar25 = iVar25 + -1;
          break;
        }
        if (*puVar19 != 0) {
          iVar25 = iVar25 + -2;
          break;
        }
        if (puVar19[-1] != 0) {
          iVar25 = iVar25 + -3;
          break;
        }
        puVar19 = puVar19 + -4;
        iVar25 = iVar25 + -4;
        lVar28 = lVar28 + -4;
      } while (-1 < lVar28);
      lVar28 = 0xf;
      puVar19 = local_598 + 1;
      do {
        if (puVar19[2] != 0) break;
        if (puVar19[1] != 0) {
          lVar28 = lVar28 + -1;
          break;
        }
        if (*puVar19 != 0) {
          lVar28 = lVar28 + -2;
          break;
        }
        if (puVar19[-1] != 0) {
          lVar28 = lVar28 + -3;
          break;
        }
        puVar19 = puVar19 + -4;
        lVar28 = lVar28 + -4;
      } while (-1 < lVar28);
      lVar26 = (longlong)(iVar25 + 1);
      lVar28 = lVar28 + 1;
      if (0 < iVar25 + 1) {
        puVar19 = local_3a8 + lVar28;
        lVar30 = -0x220;
        do {
          uVar2 = puVar19[0xa0 - lVar28];
          uVar22 = 0;
          if (0 < lVar28) {
            puVar20 = puVar19 + -lVar28;
            lVar29 = lVar28;
            do {
              uVar22 = (ulonglong)*puVar20 +
                       (ulonglong)*(uint *)(lVar30 + (longlong)puVar20) * (ulonglong)uVar2 + uVar22;
              *puVar20 = (uint)uVar22;
              uVar22 = uVar22 >> 0x20;
              lVar29 = lVar29 + -1;
              puVar20 = puVar20 + 1;
            } while (lVar29 != 0);
          }
          *puVar19 = *puVar19 + (int)uVar22;
          lVar30 = lVar30 + -4;
          puVar19 = puVar19 + 1;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
      }
      uVar24 = (ulonglong)local_3a8[0];
      uVar22 = (ulonglong)local_3a8[1];
      uStack_5c0 = local_3a8[2];
      uStack_5bc = local_3a8[3];
      local_5b8 = local_398;
      uStack_5b4 = local_394;
      uStack_5b0 = local_390;
      uStack_5ac = local_38c;
      local_458 = CONCAT44(local_394,local_398);
      uStack_450 = CONCAT44(local_38c,local_390);
      local_5a8 = local_388;
      uStack_5a4 = local_384;
      uStack_5a0 = local_380;
      uStack_59c = local_37c;
      local_598[0] = local_378;
      local_598[1] = local_374;
      local_598[2] = local_370;
      local_598[3] = local_36c;
      local_438 = CONCAT44(local_374,local_378);
      uStack_430 = CONCAT44(local_36c,local_370);
      local_5c8 = local_3a8[0];
      uStack_5c4 = local_3a8[1];
      local_468 = CONCAT44(local_3a8[1],local_3a8[0]);
      uStack_460 = CONCAT44(local_3a8[3],local_3a8[2]);
      local_448 = CONCAT44(local_384,local_388);
      uStack_440 = CONCAT44(local_37c,local_380);
      local_1e8 = 0;
      local_1e0 = 0;
      local_1d8 = 0;
      local_1d0 = 0;
      local_1c8 = 0;
      local_1c0 = 0;
      local_1b8 = 0;
      local_1b0 = 0;
      TBigInt<512,1>::DivideWithRemainder(&local_468,&local_528,&local_1e8);
      _guard_xfg_dispatch_icall_nop(local_2a8,0,0x80);
      piVar21 = (int *)((longlong)&local_b8 + 4);
      iVar25 = 0xf;
      local_e8 = local_468;
      uStack_e0 = uStack_460;
      lVar28 = 0xf;
      local_d8 = local_458;
      uStack_d0 = uStack_450;
      local_c8 = local_448;
      uStack_c0 = uStack_440;
      local_b8 = local_438;
      uStack_b0 = uStack_430;
      do {
        if (piVar21[2] != 0) break;
        if (piVar21[1] != 0) {
          iVar25 = iVar25 + -1;
          break;
        }
        if (*piVar21 != 0) {
          iVar25 = iVar25 + -2;
          break;
        }
        if (piVar21[-1] != 0) {
          iVar25 = iVar25 + -3;
          break;
        }
        piVar21 = piVar21 + -4;
        iVar25 = iVar25 + -4;
        lVar28 = lVar28 + -4;
      } while (-1 < lVar28);
      lVar28 = 0xf;
      piVar21 = (int *)((longlong)&local_4f8 + 4);
      do {
        if (piVar21[2] != 0) break;
        if (piVar21[1] != 0) {
          lVar28 = lVar28 + -1;
          break;
        }
        if (*piVar21 != 0) {
          lVar28 = lVar28 + -2;
          break;
        }
        if (piVar21[-1] != 0) {
          lVar28 = lVar28 + -3;
          break;
        }
        piVar21 = piVar21 + -4;
        lVar28 = lVar28 + -4;
      } while (-1 < lVar28);
      lVar26 = (longlong)(iVar25 + 1);
      lVar28 = lVar28 + 1;
      if (0 < iVar25 + 1) {
        piVar21 = local_2a8 + lVar28;
        lVar30 = -0x280;
        do {
          uVar2 = piVar21[0x70 - lVar28];
          uVar23 = 0;
          if (0 < lVar28) {
            puVar19 = (uint *)(piVar21 + -lVar28);
            lVar29 = lVar28;
            do {
              uVar23 = (ulonglong)*puVar19 +
                       (ulonglong)*(uint *)(lVar30 + (longlong)puVar19) * (ulonglong)uVar2 + uVar23;
              *puVar19 = (uint)uVar23;
              uVar23 = uVar23 >> 0x20;
              lVar29 = lVar29 + -1;
              puVar19 = puVar19 + 1;
            } while (lVar29 != 0);
          }
          *piVar21 = *piVar21 + (int)uVar23;
          lVar30 = lVar30 + -4;
          piVar21 = piVar21 + 1;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
      }
      local_468 = CONCAT44(local_2a8[1],local_2a8[0]);
      uStack_460 = CONCAT44(local_2a8[3],local_2a8[2]);
      local_458 = CONCAT44(local_294,local_298);
      uStack_450 = CONCAT44(local_28c,local_290);
      local_448 = CONCAT44(local_284,local_288);
      uStack_440 = CONCAT44(local_27c,local_280);
      local_438 = CONCAT44(local_274,local_278);
      uStack_430 = CONCAT44(local_26c,local_270);
      TBigInt<512,1>::Negate(&local_468);
      uVar24 = (local_468 & 0xffffffff) + uVar24;
      local_5c8 = (uint)uVar24;
      uVar22 = (local_468 >> 0x20) + (uVar24 >> 0x20) + uVar22;
      uStack_5c4 = (uint)uVar22;
      uVar22 = (uStack_460 & 0xffffffff) + (uVar22 >> 0x20) + (ulonglong)local_3a8[2];
      uStack_5c0 = (uint)uVar22;
      uVar22 = (uStack_460 >> 0x20) + (uVar22 >> 0x20) + (ulonglong)local_3a8[3];
      uStack_5bc = (uint)uVar22;
      uVar22 = (local_458 & 0xffffffff) + (uVar22 >> 0x20) + (ulonglong)local_398;
      local_5b8 = (uint)uVar22;
      uVar22 = (local_458 >> 0x20) + (uVar22 >> 0x20) + (ulonglong)local_394;
      uStack_5b4 = (uint)uVar22;
      uVar22 = (uStack_450 & 0xffffffff) + (uVar22 >> 0x20) + (ulonglong)local_390;
      uStack_5b0 = (uint)uVar22;
      uVar22 = (uStack_450 >> 0x20) + (uVar22 >> 0x20) + (ulonglong)local_38c;
      uStack_5ac = (uint)uVar22;
      uVar22 = (local_448 & 0xffffffff) + (uVar22 >> 0x20) + (ulonglong)local_388;
      local_5a8 = (uint)uVar22;
      uVar22 = (local_448 >> 0x20) + (uVar22 >> 0x20) + (ulonglong)local_384;
      uStack_5a4 = (uint)uVar22;
      uVar22 = (uStack_440 & 0xffffffff) + (uVar22 >> 0x20) + (ulonglong)local_380;
      uStack_5a0 = (uint)uVar22;
      uVar22 = (uStack_440 >> 0x20) + (uVar22 >> 0x20) + (ulonglong)local_37c;
      uStack_59c = (uint)uVar22;
      uVar22 = (ulonglong)local_378 + (uVar22 >> 0x20) + (local_438 & 0xffffffff);
      local_598[0] = (uint)uVar22;
      uVar22 = (ulonglong)local_374 + (uVar22 >> 0x20) + (local_438 >> 0x20);
      local_598[1] = (int)uVar22;
      lVar28 = (ulonglong)local_370 + (uVar22 >> 0x20) + (uStack_430 & 0xffffffff);
      local_598[2] = (int)lVar28;
      local_598[3] = (int)((ulonglong)lVar28 >> 0x20) + local_36c + uStack_430._4_4_;
    }
    lVar28 = 0;
    do {
      if (*(int *)((longlong)&local_4e8 + lVar28 * 4) !=
          *(int *)(&DAT_14667aee0 + local_538 + lVar28 * 4)) {
        bVar3 = false;
        goto LAB_142a4ebed;
      }
      lVar28 = lVar28 + 1;
    } while (lVar28 < 0x10);
    bVar3 = true;
LAB_142a4ebed:
    local_5d8 = local_5d8 + 1;
    local_588 = local_588 + 1;
    puVar27 = (ulonglong *)(local_530 + 0x260);
    param_1 = local_530;
    if (!bVar3) {
      return;
    }
  } while( true );
}



// FUNCTION 142a4ee10 FUN_142a4ee10 body=691 status=ok
// SIG undefined FUN_142a4ee10(void)

void FUN_142a4ee10(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  *(undefined1 *)(param_1 + 0x20) = 1;
  iVar4 = DAT_1464a820c;
  if (((DAT_146b298c8 != 0x800) && (iVar4 = DAT_1464a8208, DAT_146b298c8 != 0x1000)) ||
     (uVar3 = DAT_146b298d0, iVar4 != 0)) {
    uVar3 = DAT_146b298cc | DAT_146b298c8;
  }
  iVar11 = 0;
  *(uint *)(param_1 + 8) = uVar3 | 0xff;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_142a4f017;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_142a4f017:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 142a4f0d0 FUN_142a4f0d0 body=691 status=ok
// SIG undefined FUN_142a4f0d0(void)

void FUN_142a4f0d0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  *(undefined1 *)(param_1 + 0x28) = 1;
  iVar4 = DAT_1464a820c;
  if (((DAT_146b298c8 != 0x800) && (iVar4 = DAT_1464a8208, DAT_146b298c8 != 0x1000)) ||
     (uVar3 = DAT_146b298d0, iVar4 != 0)) {
    uVar3 = DAT_146b298cc | DAT_146b298c8;
  }
  iVar11 = 0;
  *(uint *)(param_1 + 8) = uVar3 | 0xff;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_142a4f2d7;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_142a4f2d7:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 142a4f390 FUN_142a4f390 body=436 status=ok
// SIG undefined FUN_142a4f390(void)

longlong * FUN_142a4f390(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong local_res10;
  
  if (*(char *)(param_1 + 0x198) == '\0') {
    uVar3 = FCommandLine::Get();
    cVar2 = FParse::Param(uVar3,L"signedpak");
    if (cVar2 == '\0') {
      uVar3 = FCommandLine::Get();
      cVar2 = FParse::Param(uVar3,L"signed");
      if (cVar2 == '\0') {
        return param_2;
      }
    }
  }
  plVar9 = (longlong *)(param_1 + 0x18);
  plVar7 = (longlong *)0x0;
  if (*plVar9 == 0) {
    lVar4 = operator_new(0x2e0);
    plVar5 = plVar7;
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_142a36610(lVar4,param_2,param_3);
    }
    if (plVar9 == &local_res10) {
      if (plVar5 == (longlong *)0x0) goto LAB_142a4f456;
      lVar4 = *plVar5;
    }
    else {
      plVar1 = (longlong *)*plVar9;
      *plVar9 = (longlong)plVar5;
      if (plVar1 == (longlong *)0x0) goto LAB_142a4f456;
      lVar4 = *plVar1;
      plVar5 = plVar1;
    }
    (**(code **)(lVar4 + 0x28))(plVar5,1);
  }
LAB_142a4f456:
  plVar5 = (longlong *)operator_new(0xd8);
  if (plVar5 != (longlong *)0x0) {
    lVar4 = *plVar9;
    FArchive::FArchive(plVar5);
    *(undefined4 *)(plVar5 + 0x12) = 0;
    *plVar5 = (longlong)&PTR__scalar_deleting_destructor__145360f78;
    plVar5[0x13] = (longlong)param_2;
    plVar5[0x14] = 0;
    plVar5[0x15] = 0;
    plVar5[0x16] = 0;
    plVar5[0x17] = lVar4;
    plVar5[0x18] = 0;
    *(undefined4 *)(plVar5 + 0x19) = 0;
    *(undefined4 *)((longlong)plVar5 + 0xcc) = 0xffffffff;
    plVar5[0x1a] = 0;
    lVar4 = FMemory::Malloc(0x10000,0);
    plVar5[0x18] = lVar4;
    FArchive::SetIsLoading(plVar5,1);
    lVar4 = (**(code **)(*(longlong *)plVar5[0x13] + 0x98))();
    plVar5[0x14] = lVar4;
    plVar5[0x15] = lVar4;
    uVar8 = (ulonglong)(ushort)(lVar4 >> 0x3f);
    uVar6 = lVar4 + uVar8;
    *(uint *)(plVar5 + 0x12) = (uint)((uVar6 & 0xffff) != uVar8) + (int)(uVar6 >> 0x10);
    plVar7 = plVar5;
  }
  return plVar7;
}



// FUNCTION 142a4f550 FUN_142a4f550 body=543 status=ok
// SIG undefined FUN_142a4f550(void)

ulonglong FUN_142a4f550(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  bool bVar1;
  void *_Src;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *local_88;
  ulonglong local_80;
  longlong *local_78;
  undefined8 local_70;
  void *local_68;
  ulonglong local_60;
  undefined **local_58;
  longlong **local_50;
  undefined8 local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  uVar2 = FParse::Param(param_3,L"NoPak");
  if ((char)uVar2 != '\0') {
    return uVar2 & 0xffffffffffffff00;
  }
  local_88 = (longlong *)0x0;
  local_80 = 0;
  FPakPlatformFile::GetPakFolders(param_3,&local_88);
  local_78 = (longlong *)0x0;
  local_70 = 0;
  local_68 = (void *)0x0;
  local_60 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  _Src = local_68;
  FGenericPlatformString::Memcpy(local_68,L"*.pak",0xc);
  uVar2 = local_60;
  iVar5 = (int)local_80;
  if (0 < (int)local_80) {
    iVar5 = (int)local_60;
    lVar8 = (longlong)(int)local_60;
    uVar9 = local_80 & 0xffffffff;
    plVar3 = local_88;
    do {
      if ((int)plVar3[1] == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*plVar3;
      }
      local_48 = FWindowsPlatformMisc::GetPlatformChunkInstall();
      local_50 = &local_78;
      local_58 = &PTR_FUN_145361560;
      local_40 = (void *)0x0;
      local_38 = iVar5;
      if (iVar5 == 0) {
        local_34 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,uVar2 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_40,_Src,lVar8 * 2);
      }
      local_30 = 0;
      (**(code **)(*param_2 + 0x128))(param_2,puVar7);
      if (local_40 != (void *)0x0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
      local_58 = &PTR_FUN_143f47c98;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    iVar5 = (int)local_80;
  }
  plVar3 = local_88;
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  bVar1 = 0 < (int)local_70;
  plVar4 = local_78;
  for (iVar6 = (int)local_70; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  plVar4 = plVar3;
  if (local_78 != (longlong *)0x0) {
    FMemory::Free(local_78);
  }
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  return (ulonglong)bVar1;
}



// FUNCTION 142a4f770 Shrink body=435 status=ok
// SIG undefined Shrink(void)

void TSparseArray<TSetElement<TTuple<FString,TMap<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Shrink(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  int local_28;
  uint local_24;
  uint *local_20;
  uint local_18;
  undefined8 local_14;
  
  uVar10 = 0;
  local_28 = 0;
  iVar2 = (int)param_1[5];
  local_20 = (uint *)(param_1 + 2);
  local_24 = 1;
  iVar9 = -1;
  local_14 = 0;
  iVar5 = 0;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = local_20;
    }
    uVar1 = *puVar8;
    iVar4 = local_28;
    while (uVar1 == 0) {
      uVar10 = uVar10 + 0x20;
      local_28 = iVar4 + 1;
      local_14 = (ulonglong)uVar10 << 0x20;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) {
        local_14 = CONCAT44(uVar10,iVar2);
        iVar5 = iVar2;
        goto LAB_142a4f84d;
      }
      uVar1 = puVar8[(longlong)iVar4 + 1];
      iVar4 = local_28;
    }
    local_24 = -uVar1 & uVar1;
    iVar5 = 0x1f;
    if (local_24 != 0) {
      for (; local_24 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (local_24 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    iVar5 = (uVar10 - iVar5) + 0x1f;
    if (iVar2 < iVar5) {
      iVar5 = iVar2;
    }
    uVar7 = (ulonglong)local_14 >> 0x20;
    local_14 = CONCAT44((int)uVar7,iVar5);
    local_28 = iVar4;
  }
LAB_142a4f84d:
  uVar10 = 0xffffffff;
  if (iVar5 < iVar2) {
    do {
      if (iVar5 <= iVar9) {
        iVar5 = iVar9;
      }
      iVar9 = iVar5;
      local_18 = uVar10 & ~local_24;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_28);
      uVar10 = local_18;
      iVar5 = (int)local_14;
    } while ((int)local_14 < (int)local_20[6]);
  }
  iVar5 = (int)param_1[1];
  iVar9 = iVar9 + 1;
  if (iVar9 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar7 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      do {
        lVar3 = *param_1;
        lVar6 = (longlong)(int)uVar7 * 0x68;
        if ((int)uVar7 < iVar9) {
          uVar7 = (ulonglong)*(uint *)(lVar6 + 4 + lVar3);
        }
        else {
          iVar5 = *(int *)(lVar6 + 4 + lVar3);
          uVar7 = (ulonglong)iVar5;
          iVar2 = *(int *)(lVar6 + lVar3);
          if (iVar5 != -1) {
            *(int *)(uVar7 * 0x68 + lVar3) = iVar2;
          }
          if (iVar2 == -1) {
            *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
            *(int *)(param_1 + 6) = iVar5;
          }
          else {
            *(int *)((longlong)iVar2 * 0x68 + 4 + *param_1) = iVar5;
            *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
          }
        }
      } while ((int)uVar7 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar9) {
      *(int *)(param_1 + 1) = iVar9;
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::
      ResizeShrink(param_1);
    }
    *(int *)(param_1 + 5) = iVar9;
  }
  if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1);
    return;
  }
  return;
}



// FUNCTION 142a4f930 FUN_142a4f930 body=667 status=ok
// SIG undefined FUN_142a4f930(void)

/* WARNING: Removing unreachable block (ram,0x000142a4f951) */

void FUN_142a4f930(void)

{
  int iVar1;
  double dVar2;
  bool bVar3;
  longlong lVar4;
  BOOL BVar5;
  longlong lVar6;
  int *piVar7;
  ushort uVar8;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  ulonglong uVar9;
  
  lVar4 = DAT_146b298e8;
  if (DAT_146b298e8 == 0) {
    return;
  }
  LOCK();
  DAT_146b298e8 = 0;
  UNLOCK();
  FUN_142a4fd70(lVar4,1);
  QueryPerformanceCounter(&local_res8);
  dVar2 = (double)local_res8.QuadPart * DAT_1468b02f8;
LAB_142a4f9b2:
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 8));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 8));
  }
  iVar1 = *(int *)(lVar4 + 0xa8);
  uVar9 = 0;
  if (0 < iVar1) {
    do {
      lVar6 = 5;
      piVar7 = (int *)(uVar9 * 0x98 + 0x70 + *(longlong *)(lVar4 + 0xa0));
      while( true ) {
        if (*piVar7 != 0) goto LAB_142a4faae;
        if (lVar6 == 0) break;
        lVar6 = lVar6 + -1;
        piVar7 = piVar7 + -3;
      }
      uVar8 = (short)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while ((int)(uint)uVar8 < iVar1);
  }
  uVar9 = 0;
  if (0 < iVar1) {
    do {
      lVar6 = 5;
      piVar7 = (int *)(uVar9 * 0x98 + 0x74 + *(longlong *)(lVar4 + 0xa0));
      while( true ) {
        if (*piVar7 != 0) goto LAB_142a4faae;
        if (lVar6 == 0) break;
        lVar6 = lVar6 + -1;
        piVar7 = piVar7 + -3;
      }
      uVar8 = (short)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while ((int)(uint)uVar8 < iVar1);
  }
  bVar3 = true;
  goto LAB_142a4fa66;
LAB_142a4faae:
  bVar3 = false;
LAB_142a4fa66:
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 8));
  lVar6 = DAT_146b298e8;
  if (bVar3) {
    if (DAT_146b298e8 != 0) {
      DeleteCriticalSection((LPCRITICAL_SECTION)(DAT_146b298e8 + 0x310));
      if (*(longlong *)(lVar6 + 0x260) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar6 + 0x150) != 0) {
        FMemory::Free();
      }
      *(undefined4 *)(lVar6 + 0x148) = 0;
      if (*(longlong *)(lVar6 + 0x140) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar6 + 0x100);
      if (*(longlong *)(lVar6 + 0xe8) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar6 + 0xd8) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar6 + 0xc0) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar6 + 0xb0) != 0) {
        FMemory::Free();
      }
      TArray<FPakPrecacher::FPakData,FDefaultAllocator>::
      ~TArray<FPakPrecacher::FPakData,FDefaultAllocator>(lVar6 + 0xa0);
      *(undefined4 *)(lVar6 + 0x98) = 0;
      if (*(longlong *)(lVar6 + 0x90) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar6 + 0x50);
      DeleteCriticalSection((LPCRITICAL_SECTION)(lVar6 + 8));
      FMemory::operator_delete(lVar6,0x338);
    }
    DAT_146b298e8 = 0;
    return;
  }
  FUN_1416b1810(0x3a83126f);
  QueryPerformanceCounter(&local_res10);
  if (10.0 < (double)local_res10.QuadPart * DAT_1468b02f8 - dVar2) {
    return;
  }
  goto LAB_142a4f9b2;
}



// FUNCTION 142a4fbd0 SizeRequest body=67 status=ok
// SIG undefined SizeRequest(void)

void FPakAsyncReadFileHandle::SizeRequest(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = operator_new(0x80);
  if (lVar1 != 0) {
    FUN_142a38ae0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



// FUNCTION 142a4fc20 StartNextRequest body=88 status=ok
// SIG undefined StartNextRequest(void)

ulonglong FPakPrecacher::StartNextRequest(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  uVar2 = 0;
  if (0 < DAT_14667ae90) {
    plVar3 = (longlong *)(param_1 + 0x160);
    do {
      if (*plVar3 == 0) {
        if (-1 < (int)uVar2) {
          uVar2 = HasRequestsAtStatus(param_1,1);
          if ((char)uVar2 != '\0') {
            uVar2 = FUN_142a3b050(param_1);
            return uVar2;
          }
        }
        break;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      plVar3 = plVar3 + 4;
    } while ((int)uVar1 < DAT_14667ae90);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 142a4fca0 ThrottleAsyncPrecaches body=202 status=ok
// SIG undefined ThrottleAsyncPrecaches(void)

void FPakPlatformFile::ThrottleAsyncPrecaches(undefined8 param_1,char param_2)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  BOOL BVar4;
  
  cVar3 = FUN_1415bac00();
  lVar2 = DAT_146b298e8;
  if ((cVar3 != '\0') && (0 < DAT_14667ae8c)) {
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b298e8 + 0x310));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x310));
    }
    bVar1 = false;
    if (*(char *)(lVar2 + 0x309) != param_2) {
      *(char *)(lVar2 + 0x309) = param_2;
      bVar1 = false;
      if (param_2 != '\0') {
        bVar1 = true;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x310));
    if (bVar1) {
      BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 8));
      if (BVar4 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 8));
      }
      FPakPrecacher::StartNextRequest(lVar2);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 8));
    }
  }
  return;
}



// FUNCTION 142a4fd70 FUN_142a4fd70 body=334 status=ok
// SIG undefined FUN_142a4fd70(void)

void FUN_142a4fd70(longlong param_1,char param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong local_res8;
  code *local_48;
  longlong *plStack_40;
  
  lVar5 = 0;
  iVar4 = DAT_14667ae98;
  if (param_2 != '\0') {
    iVar4 = 0;
  }
  iVar4 = *(int *)(param_1 + 0x158) - iVar4;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  if (iVar4 != 0) {
    if (0 < iVar4) {
      do {
        local_48 = FUN_142a3ce20;
        uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x150) + lVar5 * 8);
        uVar6 = uVar1 & 0xffffffffffff;
        lVar3 = (uVar1 >> 0x30) * 0x98 + *(longlong *)(param_1 + 0xa0);
        local_res8 = param_1;
        plStack_40 = &local_res8;
        MaybeRemoveOverlappingNodesInIntervalTree<FPakPrecacher::FCacheBlock>
                  (lVar3 + 0x7c,param_1 + 0xd8,uVar6,uVar6,0,*(undefined8 *)(lVar3 + 0x10),
                   *(undefined4 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x1c),&local_48);
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar4);
    }
    iVar2 = *(int *)(param_1 + 0x158);
    if (iVar2 - iVar4 != 0) {
      _guard_xfg_dispatch_icall_nop
                (*(void **)(param_1 + 0x150),
                 (void *)((longlong)*(void **)(param_1 + 0x150) + (longlong)iVar4 * 8),
                 (longlong)(iVar2 - iVar4) << 3);
      iVar2 = *(int *)(param_1 + 0x158);
    }
    *(int *)(param_1 + 0x158) = iVar2 - iVar4;
  }
  return;
}



// FUNCTION 142a4fec0 FUN_142a4fec0 body=1213 status=ok
// SIG undefined FUN_142a4fec0(void)

void FUN_142a4fec0(longlong param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  BOOL BVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  char local_res18 [8];
  char *local_res20;
  undefined1 *local_88;
  char **ppcStack_80;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar9 = *(longlong *)(param_1 + 0x90);
    if (*(longlong *)(param_1 + 0x90) == 0) {
      lVar9 = param_1 + 0x88;
    }
    iVar3 = *(int *)(lVar9 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x98) - 1U) * 4);
    if (iVar3 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x50);
      do {
        puVar4 = (ushort *)(lVar9 + (longlong)iVar3 * 0x18);
        if (*(longlong *)(lVar9 + (longlong)iVar3 * 0x18) == param_2) {
          if (iVar3 != -1) goto LAB_142a4ff73;
          break;
        }
        iVar3 = *(int *)(puVar4 + 8);
      } while (iVar3 != -1);
    }
  }
  puVar4 = (ushort *)0x0;
LAB_142a4ff73:
  puVar6 = puVar4 + 4;
  if (puVar4 == (ushort *)0x0) {
    puVar6 = (ushort *)0x0;
  }
  if (puVar6 != (ushort *)0x0) {
    FUN_142a4fd70(param_1,CONCAT71((int7)((ulonglong)puVar4 >> 8),1));
    local_res20 = local_res18;
    local_res18[0] = '\0';
    ppcStack_80 = &local_res20;
    lVar10 = (ulonglong)*puVar6 << 0x30;
    plVar7 = (longlong *)((ulonglong)*puVar6 * 0x98 + *(longlong *)(param_1 + 0xa0));
    local_88 = &LAB_142a3cd90;
    FUN_142a353c0(*(undefined4 *)((longlong)plVar7 + 0x7c),param_1 + 0xd8,0,plVar7[1] + -1 + lVar10,
                  0,plVar7[2],(int)plVar7[3],*(undefined4 *)((longlong)plVar7 + 0x1c),&local_88);
    local_res20 = local_res18;
    ppcStack_80 = &local_res20;
    local_88 = &LAB_142a3cd90;
    FUN_142a353c0((int)plVar7[0xf],param_1 + 0xd8,0,plVar7[1] + -1 + lVar10,0,plVar7[2],
                  (int)plVar7[3],*(undefined4 *)((longlong)plVar7 + 0x1c),&local_88);
    local_res20 = local_res18;
    lVar11 = param_1 + 0xb0;
    local_88 = &LAB_142a3cd90;
    ppcStack_80 = &local_res20;
    FUN_142a35700(*(undefined4 *)((longlong)plVar7 + 0x74),lVar11,0,plVar7[1] + -1 + lVar10,0,
                  plVar7[2],(int)plVar7[3],*(undefined4 *)((longlong)plVar7 + 0x1c),&local_88);
    local_res20 = local_res18;
    local_88 = &LAB_142a3cd90;
    ppcStack_80 = &local_res20;
    FUN_142a35700(*(undefined4 *)((longlong)plVar7 + 0x6c),lVar11,0,plVar7[1] + -1 + lVar10,0,
                  plVar7[2],(int)plVar7[3],*(undefined4 *)((longlong)plVar7 + 0x1c),&local_88);
    local_res20 = local_res18;
    local_88 = &LAB_142a3cd90;
    ppcStack_80 = &local_res20;
    FUN_142a35700((int)plVar7[0xe],lVar11,0,plVar7[1] + -1 + lVar10,0,plVar7[2],(int)plVar7[3],
                  *(undefined4 *)((longlong)plVar7 + 0x1c),&local_88);
    lVar9 = 5;
    puVar5 = (undefined4 *)((longlong)plVar7 + 0x6c);
    do {
      local_res20 = local_res18;
      local_88 = &LAB_142a3cd90;
      ppcStack_80 = &local_res20;
      FUN_142a35700(puVar5[-1],lVar11,0,plVar7[1] + -1 + lVar10,0,plVar7[2],(int)plVar7[3],
                    *(undefined4 *)((longlong)plVar7 + 0x1c),&local_88);
      local_res20 = local_res18;
      local_88 = &LAB_142a3cd90;
      ppcStack_80 = &local_res20;
      FUN_142a35700(puVar5[-3],lVar11,0,plVar7[1] + -1 + lVar10,0,plVar7[2],(int)plVar7[3],
                    *(undefined4 *)((longlong)plVar7 + 0x1c),&local_88);
      local_res20 = local_res18;
      local_88 = &LAB_142a3cd90;
      ppcStack_80 = &local_res20;
      FUN_142a35700(puVar5[-2],lVar11,0,plVar7[1] + -1 + lVar10,0,plVar7[2],(int)plVar7[3],
                    *(undefined4 *)((longlong)plVar7 + 0x1c),&local_88);
      lVar9 = lVar9 + -1;
      puVar5 = puVar5 + -3;
    } while (lVar9 != 0);
    if (local_res18[0] == '\0') {
      TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
      Remove((longlong *)(param_1 + 0x50),param_2);
      puVar1 = (undefined8 *)*plVar7;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      iVar8 = 0;
      *plVar7 = 0;
      iVar3 = *(int *)(param_1 + 0xa8) + -1;
      if (-1 < iVar3) {
        lVar9 = (longlong)iVar3;
        plVar7 = (longlong *)(lVar9 * 0x98 + *(longlong *)(param_1 + 0xa0));
        do {
          if (*plVar7 != 0) break;
          iVar8 = iVar8 + 1;
          plVar7 = plVar7 + -0x13;
          lVar9 = lVar9 + -1;
        } while (-1 < lVar9);
        if (iVar8 != 0) {
          TArray<FPakPrecacher::FPakData,FDefaultAllocator>::RemoveAtImpl
                    ((longlong *)(param_1 + 0xa0),*(int *)(param_1 + 0xa8) - iVar8,iVar8,
                     CONCAT71((int7)((ulonglong)lVar9 >> 8),1));
          *(undefined8 *)(param_1 + 0x30) = 0;
        }
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 142a50380 FUN_142a50380 body=771 status=ok
// SIG undefined FUN_142a50380(void)

undefined8 FUN_142a50380(longlong param_1,short *param_2,char param_3)

{
  longlong *plVar1;
  void *_Src;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  short *psVar13;
  bool bVar14;
  void *local_68;
  ulonglong local_60;
  longlong local_58;
  undefined8 local_50;
  wchar_t *local_48;
  int local_40;
  undefined4 local_3c;
  short *local_38;
  int local_30;
  
  if (param_3 != '\0') {
    return 1;
  }
  pwVar11 = (wchar_t *)0x0;
  local_60 = 0;
  local_68 = (void *)0x0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (param_2[lVar8] != 0);
    uVar4 = (int)lVar8 + 1;
    local_60 = (ulonglong)uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    }
    FGenericPlatformString::Memcpy(local_68,param_2,(longlong)(int)uVar4 * 2);
  }
  cVar3 = FUN_141593930(&local_68,param_1 + 0x18,1);
  if (cVar3 != '\0') {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      local_58 = 0;
      local_50 = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      FGenericPlatformString::Memcpy(local_58,L"pakchunk",0x12);
      FUN_141671940(&local_38,&local_68,1);
      cVar3 = FString::StartsWith(&local_38,&local_58,1);
      if (cVar3 != '\0') {
        pwVar12 = (wchar_t *)(ulonglong)((int)local_50 - 1);
        if ((int)local_50 == 0) {
          pwVar12 = pwVar11;
        }
        for (psVar13 = local_38; psVar13 != local_38 + local_30; psVar13 = psVar13 + 1) {
          if (*psVar13 == 0x2d) {
            uVar4 = (uint)((longlong)psVar13 - (longlong)local_38 >> 1);
            goto LAB_142a504c4;
          }
        }
        uVar4 = 0xffffffff;
LAB_142a504c4:
        uVar10 = local_30 - 1;
        if (local_30 == 0) {
          uVar10 = 0;
        }
        if ((uint)pwVar12 < uVar10) {
          uVar10 = (uint)pwVar12;
        }
        uVar5 = local_30 - 1;
        if (local_30 == 0) {
          uVar5 = 0;
        }
        uVar6 = uVar10;
        if ((uVar10 <= uVar4) && (uVar6 = uVar5, uVar4 < uVar5)) {
          uVar6 = uVar4;
        }
        local_48 = (wchar_t *)0x0;
        local_3c = 0;
        psVar13 = &DAT_143f3eda8;
        if (local_30 != 0) {
          psVar13 = local_38;
        }
        iVar7 = uVar6 - uVar10;
        local_40 = iVar7 + 1;
        if (iVar7 == 0) {
          local_40 = 0;
        }
        bVar14 = local_40 == 0;
        if (0 < local_40) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
          iVar2 = local_40;
          pwVar11 = local_48;
          bVar14 = local_40 == 0;
          if (0 < local_40) {
            wcsncpy(local_48,psVar13 + (int)uVar10,(longlong)iVar7);
            pwVar11[iVar7] = L'\0';
            bVar14 = iVar2 == 0;
          }
        }
        pwVar12 = L"";
        if (!bVar14) {
          pwVar12 = pwVar11;
        }
        iVar7 = _wtoi(pwVar12);
        if (((0 < *(int *)(param_1 + 0x28)) && (*(int *)(param_1 + 0x28) < iVar7)) ||
           (iVar7 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                              (*(longlong **)(param_1 + 0x10),iVar7), iVar7 == 1)) {
          if (pwVar11 != (wchar_t *)0x0) {
            FMemory::Free(pwVar11);
          }
          if (local_38 != (short *)0x0) {
            FMemory::Free();
          }
          if (local_58 != 0) {
            FMemory::Free();
          }
          goto LAB_142a50655;
        }
        if (pwVar11 != (wchar_t *)0x0) {
          FMemory::Free(pwVar11);
        }
      }
      if (local_38 != (short *)0x0) {
        FMemory::Free();
      }
      if (local_58 != 0) {
        FMemory::Free();
      }
    }
    plVar1 = *(longlong **)(param_1 + 8);
    iVar7 = (int)plVar1[1];
    *(int *)(plVar1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)plVar1 + 0xc) < iVar7 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar7);
    }
    _Src = local_68;
    puVar9 = (undefined8 *)((longlong)iVar7 * 0x10 + *plVar1);
    *puVar9 = 0;
    lVar8 = (longlong)(int)local_60;
    *(int *)(puVar9 + 1) = (int)local_60;
    if ((int)local_60 == 0) {
      *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar9,local_60 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop((void *)*puVar9,_Src,lVar8 * 2);
    }
  }
LAB_142a50655:
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142a50690 FUN_142a50690 body=693 status=ok
// SIG undefined FUN_142a50690(void)

undefined8 FUN_142a50690(longlong param_1,short *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined8 uVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 local_res18 [16];
  longlong local_48;
  undefined8 local_40;
  undefined2 *local_38;
  ulonglong local_30;
  
  uVar10 = 0;
  local_40 = 0;
  if ((*(byte *)(param_3 + 0x20) & 1) == 0) {
    local_48 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (param_2[lVar9] != 0);
      uVar8 = (int)lVar9 + 1;
      local_40 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      FGenericPlatformString::Memcpy(local_48,param_2,(longlong)(int)uVar8 * 2);
    }
    FUN_1416781b0(&local_48);
    piVar4 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                              (*(undefined8 *)(param_1 + 0x10),local_res18,&local_48);
    if (*piVar4 != -1) {
LAB_142a50838:
      if (local_48 != 0) {
        FMemory::Free();
      }
      return 1;
    }
    cVar3 = FPakPlatformFile::FindFileInPakFiles(*(undefined8 *)(param_1 + 0x18),param_2,0,0);
    if (cVar3 != '\0') {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (*(undefined8 *)(param_1 + 0x10),local_res18,&local_48,0);
    }
  }
  else {
    lVar9 = -1;
    local_48 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar12 = -1;
      do {
        lVar12 = lVar12 + 1;
      } while (param_2[lVar12] != 0);
      uVar8 = (int)lVar12 + 1;
      local_40 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      FGenericPlatformString::Memcpy(local_48,param_2,(longlong)(int)uVar8 * 2);
    }
    FUN_1416781b0(&local_48);
    cVar3 = FString::EndsWith(&local_48,&DAT_144ccf4a0,1);
    uVar11 = local_40;
    if (cVar3 == '\0') {
      iVar2 = (int)local_40;
      lVar12 = (longlong)(int)local_40;
      iVar6 = (2 - (uint)((int)local_40 != 0)) + (int)local_40;
      local_40 = CONCAT44(local_40._4_4_,iVar6);
      if (local_40._4_4_ < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,uVar11 & 0xffffffff);
      }
      puVar7 = (undefined2 *)(local_48 + (lVar12 - (ulonglong)(iVar2 != 0)) * 2);
      *puVar7 = 0x2f;
      puVar7[1] = 0;
    }
    piVar4 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                              (*(undefined8 *)(param_1 + 0x10),local_res18,&local_48);
    if (*piVar4 != -1) goto LAB_142a50838;
    plVar1 = *(longlong **)(param_1 + 0x18);
    local_38 = (undefined2 *)0x0;
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
    FUN_1416781b0(&local_38);
    uVar11 = uVar10;
    if (0 < (int)plVar1[1]) {
      do {
        puVar7 = &DAT_143f3eda8;
        if ((int)local_30 != 0) {
          puVar7 = local_38;
        }
        lVar9 = FUN_142a41d50(*(undefined8 *)(uVar10 + 8 + *plVar1),puVar7);
        if (lVar9 != 0) {
          if (local_38 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                    (*(undefined8 *)(param_1 + 0x10),local_res18,&local_48,0);
          goto LAB_142a508ec;
        }
        uVar8 = (int)uVar11 + 1;
        uVar10 = uVar10 + 0x10;
        uVar11 = (ulonglong)uVar8;
      } while ((int)uVar8 < (int)plVar1[1]);
    }
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
LAB_142a508ec:
  if (local_48 != 0) {
    FMemory::Free();
  }
  uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 8))
                    (*(longlong **)(param_1 + 8),param_2,param_3);
  return uVar5;
}



// FUNCTION 142a50950 FUN_142a50950 body=694 status=ok
// SIG undefined FUN_142a50950(void)

undefined8 FUN_142a50950(longlong param_1,short *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined8 uVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 local_res18 [16];
  longlong local_48;
  undefined8 local_40;
  undefined2 *local_38;
  ulonglong local_30;
  
  uVar10 = 0;
  local_40 = 0;
  if (param_3 == '\0') {
    local_48 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (param_2[lVar9] != 0);
      uVar8 = (int)lVar9 + 1;
      local_40 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      FGenericPlatformString::Memcpy(local_48,param_2,(longlong)(int)uVar8 * 2);
    }
    FUN_1416781b0(&local_48);
    piVar4 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                              (*(undefined8 *)(param_1 + 0x10),local_res18,&local_48);
    if (*piVar4 != -1) {
LAB_142a50af5:
      if (local_48 != 0) {
        FMemory::Free();
      }
      return 1;
    }
    cVar3 = FPakPlatformFile::FindFileInPakFiles(*(undefined8 *)(param_1 + 0x18),param_2,0,0);
    if (cVar3 != '\0') {
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (*(undefined8 *)(param_1 + 0x10),local_res18,&local_48,0);
    }
  }
  else {
    lVar9 = -1;
    local_48 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar12 = -1;
      do {
        lVar12 = lVar12 + 1;
      } while (param_2[lVar12] != 0);
      uVar8 = (int)lVar12 + 1;
      local_40 = (ulonglong)uVar8;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      FGenericPlatformString::Memcpy(local_48,param_2,(longlong)(int)uVar8 * 2);
    }
    FUN_1416781b0(&local_48);
    cVar3 = FString::EndsWith(&local_48,&DAT_144ccf4a0,1);
    uVar11 = local_40;
    if (cVar3 == '\0') {
      iVar2 = (int)local_40;
      lVar12 = (longlong)(int)local_40;
      iVar6 = (2 - (uint)((int)local_40 != 0)) + (int)local_40;
      local_40 = CONCAT44(local_40._4_4_,iVar6);
      if (local_40._4_4_ < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,uVar11 & 0xffffffff);
      }
      puVar7 = (undefined2 *)(local_48 + (lVar12 - (ulonglong)(iVar2 != 0)) * 2);
      *puVar7 = 0x2f;
      puVar7[1] = 0;
    }
    piVar4 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                              (*(undefined8 *)(param_1 + 0x10),local_res18,&local_48);
    if (*piVar4 != -1) goto LAB_142a50af5;
    plVar1 = *(longlong **)(param_1 + 0x18);
    local_38 = (undefined2 *)0x0;
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
    FUN_1416781b0(&local_38);
    uVar11 = uVar10;
    if (0 < (int)plVar1[1]) {
      do {
        puVar7 = &DAT_143f3eda8;
        if ((int)local_30 != 0) {
          puVar7 = local_38;
        }
        lVar9 = FUN_142a41d50(*(undefined8 *)(uVar10 + 8 + *plVar1),puVar7);
        if (lVar9 != 0) {
          if (local_38 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                    (*(undefined8 *)(param_1 + 0x10),local_res18,&local_48,0);
          goto LAB_142a50bac;
        }
        uVar8 = (int)uVar11 + 1;
        uVar10 = uVar10 + 0x10;
        uVar11 = (ulonglong)uVar8;
      } while ((int)uVar8 < (int)plVar1[1]);
    }
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
LAB_142a50bac:
  if (local_48 != 0) {
    FMemory::Free();
  }
  uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 8))
                    (*(longlong **)(param_1 + 8),param_2,param_3);
  return uVar5;
}



// FUNCTION 142a50c10 WaitCompletionImpl body=209 status=ok
// SIG undefined WaitCompletionImpl(void)

void FPakProcessedReadRequest::WaitCompletionImpl(longlong param_1,float param_2)

{
  longlong *plVar1;
  BOOL BVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b29880);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b29880);
  }
  if (*(char *)(param_1 + 0xa0) != '\0') {
    uVar3 = FUN_1415ab270(1);
    *(undefined8 *)(param_1 + 0x90) = uVar3;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b29880);
  plVar1 = *(longlong **)(param_1 + 0x90);
  if (plVar1 != (longlong *)0x0) {
    if (param_2 == 0.0) {
      lVar4 = 0xffffffff;
    }
    else {
      lVar4 = (longlong)(param_2 * 1000.0);
    }
    (**(code **)(*plVar1 + 0x20))(plVar1,lVar4,0);
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b29880);
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b29880);
    }
    FUN_1415b5910(*(undefined8 *)(param_1 + 0x90));
    *(undefined8 *)(param_1 + 0x90) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b29880);
  }
  return;
}



// FUNCTION 142a50cf0 FUN_142a50cf0 body=209 status=ok
// SIG undefined FUN_142a50cf0(void)

void FUN_142a50cf0(longlong param_1,float param_2)

{
  longlong *plVar1;
  BOOL BVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b29880);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b29880);
  }
  if (*(char *)(param_1 + 0xc4) != '\0') {
    uVar3 = FUN_1415ab270(1);
    *(undefined8 *)(param_1 + 0xa8) = uVar3;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b29880);
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    if (param_2 == 0.0) {
      lVar4 = 0xffffffff;
    }
    else {
      lVar4 = (longlong)(param_2 * 1000.0);
    }
    (**(code **)(*plVar1 + 0x20))(plVar1,lVar4,0);
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b29880);
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b29880);
    }
    FUN_1415b5910(*(undefined8 *)(param_1 + 0xa8));
    *(undefined8 *)(param_1 + 0xa8) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b29880);
  }
  return;
}



// FUNCTION 142a50dd0 FUN_142a50dd0 body=310 status=ok
// SIG undefined FUN_142a50dd0(void)

void FUN_142a50dd0(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  bool bVar2;
  longlong lVar3;
  BOOL BVar4;
  longlong lVar5;
  int *piVar6;
  ushort uVar7;
  LARGE_INTEGER local_res10;
  ulonglong uVar8;
  
  QueryPerformanceCounter(&local_res10);
LAB_142a50e00:
  lVar3 = DAT_146b298e8;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b298e8 + 8);
  BVar4 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar4 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar1 = *(int *)(lVar3 + 0xa8);
  uVar8 = 0;
  if (0 < iVar1) {
    do {
      lVar5 = 5;
      piVar6 = (int *)(uVar8 * 0x98 + 0x70 + *(longlong *)(lVar3 + 0xa0));
      while( true ) {
        if (*piVar6 != 0) goto LAB_142a50ee1;
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        piVar6 = piVar6 + -3;
      }
      uVar7 = (short)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)(uint)uVar7 < iVar1);
  }
  uVar8 = 0;
  if (0 < iVar1) {
    do {
      lVar5 = 5;
      piVar6 = (int *)(uVar8 * 0x98 + 0x74 + *(longlong *)(lVar3 + 0xa0));
      while( true ) {
        if (*piVar6 != 0) goto LAB_142a50ee1;
        if (lVar5 == 0) break;
        lVar5 = lVar5 + -1;
        piVar6 = piVar6 + -3;
      }
      uVar7 = (short)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)(uint)uVar7 < iVar1);
  }
  bVar2 = true;
  goto LAB_142a50ec6;
LAB_142a50ee1:
  bVar2 = false;
LAB_142a50ec6:
  LeaveCriticalSection(lpCriticalSection);
  if (bVar2) {
    QueryPerformanceCounter(&local_res10);
    return;
  }
  FUN_1416b1810(0x3a83126f);
  goto LAB_142a50e00;
}



// FUNCTION 142a50f10 FUN_142a50f10 body=668 status=ok
// SIG undefined FUN_142a50f10(void)

void FUN_142a50f10(longlong *param_1,longlong param_2,float *param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  undefined2 local_res8 [4];
  undefined2 local_res10 [8];
  undefined2 local_res20 [4];
  undefined2 local_88 [4];
  undefined8 local_80;
  longlong local_78 [2];
  undefined2 *local_68;
  int local_60;
  longlong local_58 [4];
  
  lVar4 = *(longlong *)(param_2 + 0x20);
  if (((lVar4 == 0) || (1 < *(int *)(lVar4 + 0x30))) ||
     (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x20) + 0x10),
     lVar7 = UArrayProperty::GetPrivateStaticClass(), lVar4 == lVar7)) {
    lVar4 = *param_1;
    fVar3 = *param_3;
    iVar8 = *(int *)(lVar4 + 0x20);
    if (((iVar8 != 2) && (iVar8 != 4)) && (iVar8 != 0xc)) {
      local_res8[0] = 0x2c;
      (**(code **)(**(longlong **)(lVar4 + 8) + 0x50))(*(longlong **)(lVar4 + 8),local_res8,2);
      iVar8 = *(int *)(lVar4 + 0x20);
    }
    if ((iVar8 == 4) || (iVar8 - 8U < 4)) {
      local_res20[0] = 0x20;
      (**(code **)(**(longlong **)(lVar4 + 8) + 0x50))(*(longlong **)(lVar4 + 8),local_res20,2);
    }
    else {
      FUN_140dd77d0(*(undefined8 *)(lVar4 + 8));
      plVar5 = *(longlong **)(lVar4 + 8);
      if (0 < (int)*(uint *)(lVar4 + 0x24)) {
        uVar9 = (ulonglong)*(uint *)(lVar4 + 0x24);
        do {
          local_res10[0] = 9;
          (**(code **)(*plVar5 + 0x50))(plVar5,local_res10,2);
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    FString::PrintfImpl(&local_68,&DAT_144050d74,(double)fVar3);
    plVar5 = *(longlong **)(lVar4 + 8);
    puVar10 = &DAT_143f3eda8;
    if (local_60 != 0) {
      puVar10 = local_68;
    }
    iVar8 = 0;
    while( true ) {
      if (local_60 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = local_60 + -1;
      }
      if (iVar6 <= iVar8) break;
      local_88[0] = *puVar10;
      (**(code **)(*plVar5 + 0x50))(plVar5,local_88,2);
      iVar8 = iVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    *(undefined4 *)(lVar4 + 0x20) = 8;
  }
  else {
    plVar5 = *(longlong **)(param_2 + 0x10);
    if (plVar5 == (longlong *)0x0) {
      local_80 = *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x18);
      FName::ToString(&local_80,local_58);
      FUN_142a51670(*param_1,local_58,*param_3);
      if (local_58[0] != 0) {
        FMemory::Free();
      }
    }
    else {
      local_78[0] = 0;
      local_78[1] = 0;
      (**(code **)(*plVar5 + 0x2d8))(plVar5,local_78,*(undefined8 *)(param_2 + 8),0,0,0,0);
      FUN_142a51670(*param_1,local_78,*param_3);
      if (local_78[0] != 0) {
        FMemory::Free();
      }
    }
  }
  plVar5 = (longlong *)param_1[1];
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
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 142a511b0 FUN_142a511b0 body=657 status=ok
// SIG undefined FUN_142a511b0(void)

void FUN_142a511b0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  undefined2 local_res8 [4];
  undefined2 local_res10 [8];
  undefined2 local_res20 [4];
  undefined2 local_88 [4];
  undefined8 local_80;
  longlong local_78 [2];
  undefined2 *local_68;
  int local_60;
  longlong local_58 [4];
  
  lVar4 = *(longlong *)(param_2 + 0x20);
  if (((lVar4 == 0) || (1 < *(int *)(lVar4 + 0x30))) ||
     (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x20) + 0x10),
     lVar7 = UArrayProperty::GetPrivateStaticClass(), lVar4 == lVar7)) {
    lVar4 = *param_1;
    uVar3 = *param_3;
    iVar8 = *(int *)(lVar4 + 0x20);
    if (((iVar8 != 2) && (iVar8 != 4)) && (iVar8 != 0xc)) {
      local_res8[0] = 0x2c;
      (**(code **)(**(longlong **)(lVar4 + 8) + 0x50))(*(longlong **)(lVar4 + 8),local_res8,2);
      iVar8 = *(int *)(lVar4 + 0x20);
    }
    if ((iVar8 == 4) || (iVar8 - 8U < 4)) {
      local_res20[0] = 0x20;
      (**(code **)(**(longlong **)(lVar4 + 8) + 0x50))(*(longlong **)(lVar4 + 8),local_res20,2);
    }
    else {
      FUN_140dd77d0(*(undefined8 *)(lVar4 + 8));
      plVar5 = *(longlong **)(lVar4 + 8);
      if (0 < (int)*(uint *)(lVar4 + 0x24)) {
        uVar9 = (ulonglong)*(uint *)(lVar4 + 0x24);
        do {
          local_res10[0] = 9;
          (**(code **)(*plVar5 + 0x50))(plVar5,local_res10,2);
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    FString::PrintfImpl(&local_68,L"%.17g",uVar3);
    plVar5 = *(longlong **)(lVar4 + 8);
    puVar10 = &DAT_143f3eda8;
    if (local_60 != 0) {
      puVar10 = local_68;
    }
    iVar8 = 0;
    while( true ) {
      if (local_60 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = local_60 + -1;
      }
      if (iVar6 <= iVar8) break;
      local_88[0] = *puVar10;
      (**(code **)(*plVar5 + 0x50))(plVar5,local_88,2);
      iVar8 = iVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    *(undefined4 *)(lVar4 + 0x20) = 8;
  }
  else {
    plVar5 = *(longlong **)(param_2 + 0x10);
    if (plVar5 == (longlong *)0x0) {
      local_80 = *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x18);
      FName::ToString(&local_80,local_58);
      FUN_142a517f0(*param_1,local_58,(int)*param_3);
      if (local_58[0] != 0) {
        FMemory::Free();
      }
    }
    else {
      local_78[0] = 0;
      local_78[1] = 0;
      (**(code **)(*plVar5 + 0x2d8))(plVar5,local_78,*(undefined8 *)(param_2 + 8),0,0,0,0);
      FUN_142a517f0(*param_1,local_78,(int)*param_3);
      if (local_78[0] != 0) {
        FMemory::Free();
      }
    }
  }
  plVar5 = (longlong *)param_1[1];
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
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 142a51450 FUN_142a51450 body=538 status=ok
// SIG undefined FUN_142a51450(void)

void FUN_142a51450(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  undefined8 local_res20;
  longlong local_68 [4];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  lVar3 = *(longlong *)(param_2 + 0x20);
  if (((lVar3 == 0) || (1 < *(int *)(lVar3 + 0x30))) ||
     (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0x10),
     lVar6 = UArrayProperty::GetPrivateStaticClass(), lVar3 == lVar6)) {
    plVar4 = (longlong *)*param_1;
    if ((((int)plVar4[4] - 2U & 0xfffffff5) != 0) || ((int)plVar4[4] == 10)) {
      local_res8[0] = 0x2c;
      (**(code **)(*(longlong *)plVar4[1] + 0x50))((longlong *)plVar4[1],local_res8,2);
    }
    FUN_140dd77d0(plVar4[1]);
    plVar5 = (longlong *)plVar4[1];
    if (0 < (int)*(uint *)((longlong)plVar4 + 0x24)) {
      uVar8 = (ulonglong)*(uint *)((longlong)plVar4 + 0x24);
      do {
        local_res10[0] = 9;
        (**(code **)(*plVar5 + 0x50))(plVar5,local_res10,2);
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    (**(code **)(*plVar4 + 0x18))(plVar4,param_3);
    *(undefined4 *)(plVar4 + 4) = 7;
  }
  else {
    plVar4 = *(longlong **)(param_2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      local_res20 = *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x18);
      FName::ToString(&local_res20,local_68 + 2);
      lVar3 = *param_1;
      uVar7 = FString::FString(local_38,param_3);
      FUN_140da7870(lVar3,local_68 + 2,uVar7);
      if (local_68[2] != 0) {
        FMemory::Free();
      }
    }
    else {
      local_68[0] = 0;
      local_68[1] = 0;
      (**(code **)(*plVar4 + 0x2d8))(plVar4,local_68,*(undefined8 *)(param_2 + 8),0,0,0,0);
      lVar3 = *param_1;
      uVar7 = FString::FString(local_48,param_3);
      FUN_140da7870(lVar3,local_68,uVar7);
      if (local_68[0] != 0) {
        FMemory::Free();
      }
    }
  }
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return;
}



// FUNCTION 142a51670 FUN_142a51670 body=372 status=ok
// SIG undefined FUN_142a51670(void)

void FUN_142a51670(longlong *param_1,undefined8 param_2,float param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined2 local_res18 [8];
  undefined2 *local_38;
  int local_30;
  
  if ((((int)param_1[4] - 2U & 0xfffffff5) != 0) || ((int)param_1[4] == 10)) {
    local_res18[0] = 0x2c;
    (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res18,2);
  }
  FUN_140dd77d0(param_1[1]);
  plVar1 = (longlong *)param_1[1];
  if (0 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    uVar4 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
    do {
      local_res18[0] = 9;
      (**(code **)(*plVar1 + 0x50))(plVar1,local_res18,2);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  local_res18[0] = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res18,2);
  local_res18[0] = 0x20;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res18,2);
  FString::PrintfImpl(&local_38,&DAT_144050d74,(double)param_3);
  plVar1 = (longlong *)param_1[1];
  puVar5 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar5 = local_38;
  }
  iVar3 = 0;
  while( true ) {
    if (local_30 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = local_30 + -1;
    }
    if (iVar2 <= iVar3) break;
    local_res18[0] = *puVar5;
    (**(code **)(*plVar1 + 0x50))(plVar1,local_res18,2);
    iVar3 = iVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 4) = 8;
  return;
}



// FUNCTION 142a517f0 FUN_142a517f0 body=372 status=ok
// SIG undefined FUN_142a517f0(void)

void FUN_142a517f0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined2 local_res8 [4];
  undefined2 *local_38;
  int local_30;
  
  if ((((int)param_1[4] - 2U & 0xfffffff5) != 0) || ((int)param_1[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  }
  FUN_140dd77d0(param_1[1]);
  plVar1 = (longlong *)param_1[1];
  if (0 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    uVar4 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
    do {
      local_res8[0] = 9;
      (**(code **)(*plVar1 + 0x50))(plVar1,local_res8,2);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  FString::PrintfImpl(&local_38,L"%.17g",param_3);
  plVar1 = (longlong *)param_1[1];
  puVar5 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar5 = local_38;
  }
  iVar3 = 0;
  while( true ) {
    if (local_30 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = local_30 + -1;
    }
    if (iVar2 <= iVar3) break;
    local_res8[0] = *puVar5;
    (**(code **)(*plVar1 + 0x50))(plVar1,local_res8,2);
    iVar3 = iVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 4) = 8;
  return;
}



// FUNCTION 142a51970 FUN_142a51970 body=442 status=ok
// SIG undefined FUN_142a51970(void)

void FUN_142a51970(longlong *param_1,undefined8 param_2,byte param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  wchar_t *pwVar8;
  int iVar9;
  undefined2 local_res18 [8];
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  
  if ((((int)param_1[4] - 2U & 0xfffffff5) != 0) || ((int)param_1[4] == 10)) {
    local_res18[0] = 0x2c;
    (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res18,2);
  }
  FUN_140dd77d0(param_1[1]);
  plVar1 = (longlong *)param_1[1];
  if (0 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    uVar4 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
    do {
      local_res18[0] = 9;
      (**(code **)(*plVar1 + 0x50))(plVar1,local_res18,2);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  local_res18[0] = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res18,2);
  local_res18[0] = 0x20;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res18,2);
  pwVar8 = L"false";
  if (param_3 != 0) {
    pwVar8 = L"true";
  }
  puVar7 = (undefined2 *)0x0;
  iVar9 = 0;
  local_38 = (undefined2 *)0x0;
  local_2c = 0;
  if (*pwVar8 != L'\0') {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (pwVar8[lVar5] != L'\0');
    iVar3 = (int)lVar5 + 1;
    local_30 = iVar3;
    if (0 < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    iVar9 = local_30;
    puVar7 = local_38;
    FGenericPlatformString::Memcpy(local_38,pwVar8,(longlong)iVar3 * 2);
  }
  plVar1 = (longlong *)param_1[1];
  puVar6 = &DAT_143f3eda8;
  if (iVar9 != 0) {
    puVar6 = puVar7;
  }
  iVar3 = 0;
  while( true ) {
    if (iVar9 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar9 + -1;
    }
    if (iVar2 <= iVar3) break;
    local_res18[0] = *puVar6;
    (**(code **)(*plVar1 + 0x50))(plVar1,local_res18,2);
    iVar3 = iVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  if (puVar7 != (undefined2 *)0x0) {
    FMemory::Free(puVar7);
  }
  *(uint *)(param_1 + 4) = (param_3 ^ 1) + 9;
  return;
}



// FUNCTION 142a51b30 FUN_142a51b30 body=420 status=ok
// SIG undefined FUN_142a51b30(void)

void FUN_142a51b30(longlong param_1,byte param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 local_res10 [4];
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  
  iVar8 = *(int *)(param_1 + 0x20);
  if (((iVar8 != 2) && (iVar8 != 4)) && (iVar8 != 0xc)) {
    local_res10[0] = 0x2c;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),local_res10,2);
    iVar8 = *(int *)(param_1 + 0x20);
  }
  if ((iVar8 == 4) || (iVar8 - 8U < 4)) {
    local_res10[0] = 0x20;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),local_res10,2);
  }
  else {
    FUN_140dd77d0(*(undefined8 *)(param_1 + 8));
    plVar1 = *(longlong **)(param_1 + 8);
    if (0 < (int)*(uint *)(param_1 + 0x24)) {
      uVar4 = (ulonglong)*(uint *)(param_1 + 0x24);
      do {
        local_res10[0] = 9;
        (**(code **)(*plVar1 + 0x50))(plVar1,local_res10,2);
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  pwVar6 = L"false";
  if (param_2 != 0) {
    pwVar6 = L"true";
  }
  puVar9 = (undefined2 *)0x0;
  iVar8 = 0;
  local_38 = (undefined2 *)0x0;
  local_2c = 0;
  if (*pwVar6 != L'\0') {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (pwVar6[lVar5] != L'\0');
    iVar3 = (int)lVar5 + 1;
    local_30 = iVar3;
    if (0 < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    iVar8 = local_30;
    puVar9 = local_38;
    FGenericPlatformString::Memcpy(local_38,pwVar6,(longlong)iVar3 * 2);
  }
  plVar1 = *(longlong **)(param_1 + 8);
  puVar7 = &DAT_143f3eda8;
  if (iVar8 != 0) {
    puVar7 = puVar9;
  }
  iVar3 = 0;
  while( true ) {
    if (iVar8 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar8 + -1;
    }
    if (iVar2 <= iVar3) break;
    local_res10[0] = *puVar7;
    (**(code **)(*plVar1 + 0x50))(plVar1,local_res10,2);
    iVar3 = iVar3 + 1;
    puVar7 = puVar7 + 1;
  }
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  *(uint *)(param_1 + 0x20) = (param_2 ^ 1) + 9;
  return;
}



// FUNCTION 142a51ce0 FUN_142a51ce0 body=80 status=ok
// SIG undefined FUN_142a51ce0(void)

void FUN_142a51ce0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  uVar1 = 0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  if (*(int *)(param_1 + 8) != 0) {
    plVar2 = (longlong *)param_1[6];
    if ((longlong *)param_1[6] == (longlong *)0x0) {
      plVar2 = param_1 + 2;
    }
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 8))();
    }
  }
  (*(code *)*param_1)(uVar1,&local_res10,local_res18);
  return;
}



// FUNCTION 142a51d30 FUN_142a51d30 body=422 status=ok
// SIG undefined FUN_142a51d30(void)

void FUN_142a51d30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 local_res10;
  longlong local_18 [2];
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x20);
  if ((lVar1 != 0) &&
     (lVar1 = *(longlong *)(lVar1 + 0x10), lVar3 = UArrayProperty::GetPrivateStaticClass(),
     lVar1 == lVar3)) {
    lVar1 = *(longlong *)(param_1 + 8);
    iVar4 = *(int *)(lVar1 + 0x20);
    if ((iVar4 != 0) && (((iVar4 != 2 && (iVar4 != 4)) && (iVar4 != 0xc)))) {
      local_res10 = CONCAT62(local_res10._2_6_,0x2c);
      (**(code **)(**(longlong **)(lVar1 + 8) + 0x50))(*(longlong **)(lVar1 + 8),&local_res10,2);
      iVar4 = *(int *)(lVar1 + 0x20);
    }
    if (iVar4 != 0) {
      FUN_140dd77d0(*(undefined8 *)(lVar1 + 8));
      plVar2 = *(longlong **)(lVar1 + 8);
      if (0 < (int)*(uint *)(lVar1 + 0x24)) {
        uVar5 = (ulonglong)*(uint *)(lVar1 + 0x24);
        do {
          local_res10 = CONCAT62(local_res10._2_6_,9);
          (**(code **)(*plVar2 + 0x50))(plVar2,&local_res10,2);
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    local_res10 = CONCAT62(local_res10._2_6_,0x5b);
    (**(code **)(**(longlong **)(lVar1 + 8) + 0x50))(*(longlong **)(lVar1 + 8),&local_res10,2);
    *(int *)(lVar1 + 0x24) = *(int *)(lVar1 + 0x24) + 1;
    iVar4 = *(int *)(lVar1 + 0x18);
    *(int *)(lVar1 + 0x18) = iVar4 + 1;
    if (*(int *)(lVar1 + 0x1c) < iVar4 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar1 + 0x10,iVar4);
    }
    *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar4 * 4) = 5;
    *(undefined4 *)(lVar1 + 0x20) = 4;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 0x10);
  if (plVar2 == (longlong *)0x0) {
    local_res10 = *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x18);
    FName::ToString(&local_res10,local_18);
  }
  else {
    local_18[0] = 0;
    local_18[1] = 0;
    (**(code **)(*plVar2 + 0x2d8))(plVar2,local_18,*(undefined8 *)(param_2 + 8),0,0,0,0);
  }
  FUN_142a54b70(*(undefined8 *)(param_1 + 8),local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a51ee0 FUN_142a51ee0 body=232 status=ok
// SIG undefined FUN_142a51ee0(void)

void FUN_142a51ee0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 local_res10;
  longlong local_18 [2];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    FUN_142a55250(*(undefined8 *)(param_1 + 8));
    return;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x20);
  if (lVar1 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0x10);
    lVar3 = UArrayProperty::GetPrivateStaticClass();
    if (lVar1 == lVar3) {
      FUN_142a55250(*(undefined8 *)(param_1 + 8));
      return;
    }
  }
  plVar2 = *(longlong **)(param_2 + 0x10);
  if (plVar2 == (longlong *)0x0) {
    local_res10 = *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x18);
    FName::ToString(&local_res10,local_18);
  }
  else {
    local_18[0] = 0;
    local_18[1] = 0;
    (**(code **)(*plVar2 + 0x2d8))(plVar2,local_18,*(undefined8 *)(param_2 + 8),0,0,0,0);
  }
  FUN_142a550f0(*(undefined8 *)(param_1 + 8),local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a51fd0 FUN_142a51fd0 body=322 status=ok
// SIG undefined FUN_142a51fd0(void)

undefined8 FUN_142a51fd0(longlong *param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  void *_Dst;
  longlong *plVar6;
  
  if (param_2 != 0) {
    lVar5 = UArrayProperty::GetPrivateStaticClass();
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
      plVar2 = *(longlong **)(param_2 + 0x70);
      if (plVar2 != param_1) {
        return 0;
      }
      plVar6 = (longlong *)(*(int *)(param_2 + 0x44) + param_3);
      iVar1 = *(int *)((longlong)plVar2 + 0x34);
      param_4 = (int)plVar6[1];
      iVar4 = param_4 + 1;
      *(int *)(plVar6 + 1) = iVar4;
      if (*(int *)((longlong)plVar6 + 0xc) < iVar4) {
        FScriptArray::ResizeGrow(plVar6,param_4,iVar1);
        iVar4 = (int)plVar6[1];
      }
      if (iVar4 == 0) {
        _Dst = (void *)0x0;
      }
      else {
        _Dst = (void *)((longlong)(iVar1 * param_4) + *plVar6);
      }
      if ((*(uint *)(plVar2 + 7) >> 9 & 1) == 0) {
        (**(code **)(*plVar2 + 0x330))(plVar2);
      }
      else {
        _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar1);
      }
    }
  }
  if ((param_1[7] & 0x1000000200U) == 0x1000000200) {
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)*(int *)((longlong)param_1 + 0x44) +
                       *(int *)((longlong)param_1 + 0x34) * param_4 + param_3),0,
               (longlong)*(int *)((longlong)param_1 + 0x34));
  }
  else {
    (**(code **)(*param_1 + 800))
              (param_1,(longlong)*(int *)((longlong)param_1 + 0x44) +
                       param_4 * *(int *)((longlong)param_1 + 0x34) + param_3);
  }
  return 1;
}



// FUNCTION 142a52120 FUN_142a52120 body=3567 status=ok
// SIG undefined FUN_142a52120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142a52120(longlong *param_1,ulonglong param_2,longlong *param_3,int *param_4)

{
  ulonglong *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  int *piVar8;
  void *pvVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  longlong *plVar20;
  int iVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 local_190;
  uint local_188;
  undefined2 *local_180;
  int local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  int *local_150;
  longlong local_148;
  uint local_140;
  int local_13c;
  undefined4 local_138 [2];
  longlong *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  ulonglong local_e0;
  longlong *local_d8;
  ulonglong local_d0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_98;
  longlong *local_90;
  longlong *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  undefined8 uStack_78;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  uVar18 = 0;
  local_170 = local_170 & 0xffffffff00000000;
  local_160 = 0;
  local_148 = 0;
  local_188 = 0;
  local_13c = 0;
  uStack_168 = param_1;
  uStack_158 = param_2;
  local_150 = param_4;
  local_130 = param_1;
  local_d8 = param_3;
  cVar3 = (**(code **)(*param_3 + 0x18))(param_3,local_138);
  if (cVar3 != '\0') {
    local_f8 = local_160;
    uStack_f0 = uStack_158;
    local_108 = local_170;
    uStack_100 = uStack_168;
    uVar7 = uVar18;
    do {
      puVar12 = (undefined2 *)0x0;
      puVar5 = (undefined8 *)(**(code **)*param_3)(param_3);
      local_180 = (undefined2 *)0x0;
      local_178 = *(int *)(puVar5 + 1);
      lVar17 = (longlong)local_178;
      pvVar9 = (void *)*puVar5;
      if (local_178 == 0) {
        local_174 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_180,local_178,0);
        puVar12 = local_180;
        _guard_xfg_dispatch_icall_nop(local_180,pvVar9,lVar17 * 2);
      }
      iVar21 = local_178;
      iVar4 = (int)uVar7;
      switch(local_138[0]) {
      case 0:
        if (iVar4 == 0) goto switchD_142a5222d_caseD_3;
LAB_142a5270a:
        uVar16 = iVar4 - 1;
        puVar1 = (ulonglong *)((longlong)(int)uVar16 * 0x20 + 0x10 + local_148);
        uVar26 = (undefined4)*puVar1;
        uVar27 = *(undefined4 *)((longlong)puVar1 + 4);
        local_f8 = *puVar1;
        uVar28 = (undefined4)puVar1[1];
        uVar29 = *(undefined4 *)((longlong)puVar1 + 0xc);
        uStack_f0 = puVar1[1];
        puVar1 = (ulonglong *)((longlong)(int)uVar16 * 0x20 + local_148);
        uVar22 = (undefined4)*puVar1;
        uVar23 = *(undefined4 *)((longlong)puVar1 + 4);
        local_108 = *puVar1;
        uVar24 = (undefined4)puVar1[1];
        uVar25 = *(undefined4 *)((longlong)puVar1 + 0xc);
        uStack_100 = (longlong *)puVar1[1];
        iVar21 = (iVar4 - uVar16) + -1;
        if (iVar21 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)(int)uVar16 * 0x20 + local_148),
                     (void *)((longlong)iVar4 * 0x20 + local_148),(longlong)iVar21 << 5);
          uVar22 = (undefined4)local_108;
          uVar23 = local_108._4_4_;
          uVar24 = (undefined4)uStack_100;
          uVar25 = uStack_100._4_4_;
          uVar26 = (undefined4)local_f8;
          uVar27 = local_f8._4_4_;
          uVar28 = (undefined4)uStack_f0;
          uVar29 = uStack_f0._4_4_;
        }
LAB_142a52763:
        local_188 = uVar16;
        local_170 = CONCAT44(uVar23,uVar22);
        uStack_168 = (longlong *)CONCAT44(uVar25,uVar24);
        local_160 = CONCAT44(uVar27,uVar26);
        uStack_158 = CONCAT44(uVar29,uVar28);
        puVar13 = local_180;
        uVar18 = local_160;
        local_130 = uStack_168;
        break;
      case 1:
        local_118 = FUN_1408e1350(uStack_158);
        if (local_118 != 0) {
          if (local_150[0x14] != 0) {
            piVar8 = (int *)0x0;
            if (*(longlong *)(local_150 + 0x10) == 0) {
              piVar8 = local_150 + 8;
            }
            if ((piVar8 != (int *)0x0 || *(longlong *)(local_150 + 0x10) != 0) &&
               (cVar3 = FUN_142a51ce0(local_150 + 4,local_118), cVar3 != '\0'))
            goto switchD_142a5222d_caseD_2;
          }
          local_128 = 0;
          uStack_120 = param_1;
          uStack_110 = StructDeserializer::FindClass(&local_128);
          local_188 = iVar4 + 1;
          local_140 = local_188;
          if (local_13c < (int)local_188) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(&local_148,uVar7);
          }
          puVar1 = (ulonglong *)((longlong)iVar4 * 0x20 + local_148);
          *puVar1 = local_108;
          puVar1[1] = (ulonglong)uStack_100;
          puVar1 = (ulonglong *)((longlong)iVar4 * 0x20 + 0x10 + local_148);
          *puVar1 = local_f8;
          puVar1[1] = uStack_f0;
          local_108 = CONCAT44(uStack_124,local_128);
          uStack_100 = uStack_120;
          local_f8 = local_118;
          uStack_f0 = uStack_110;
          uVar22 = local_128;
          uVar23 = uStack_124;
          uVar24 = (undefined4)uStack_120;
          uVar25 = uStack_120._4_4_;
          uVar26 = (undefined4)local_118;
          uVar27 = local_118._4_4_;
          uVar28 = (undefined4)uStack_110;
          uVar29 = uStack_110._4_4_;
          uVar16 = local_140;
          goto LAB_142a52763;
        }
        if (*local_150 != 0) {
          (**(code **)(*param_3 + 0x28))(param_3);
          puVar13 = local_180;
          break;
        }
        goto switchD_142a5222d_caseD_3;
      default:
switchD_142a5222d_caseD_2:
        puVar13 = puVar12;
        break;
      case 3:
        goto switchD_142a5222d_caseD_3;
      case 5:
        if (local_178 < 2) {
          uVar7 = uVar18;
          if (uVar18 != 0) {
            lVar17 = UArrayProperty::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(uVar18 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(uVar18 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar17 + 0x90) * 8) != lVar17 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              uVar7 = *(ulonglong *)(uVar18 + 0x70);
            }
          }
          if (uVar7 != 0) {
            iVar21 = (int)local_170;
            local_198 = CONCAT44(local_198._4_4_,(int)local_170);
            (**(code **)(*param_3 + 0x20))(param_3);
            local_170 = CONCAT44(local_170._4_4_,iVar21 + 1);
            puVar13 = local_180;
            local_108 = local_170;
            uStack_100 = uStack_168;
            break;
          }
          goto switchD_142a5222d_caseD_3;
        }
        if (uVar18 == 0) {
LAB_142a5257c:
          puVar13 = &DAT_143f3eda8;
          if (iVar21 != 0) {
            puVar13 = puVar12;
          }
          lVar17 = FUN_1408e1350(uStack_158,puVar13);
          if (lVar17 == 0) {
            puVar13 = local_180;
            if (*local_150 == 0) goto switchD_142a5222d_caseD_3;
          }
          else {
            if (local_150[0x14] != 0) {
              piVar8 = (int *)0x0;
              if (*(longlong *)(local_150 + 0x10) == 0) {
                piVar8 = local_150 + 8;
              }
              if ((piVar8 != (int *)0x0 || *(longlong *)(local_150 + 0x10) != 0) &&
                 (cVar3 = FUN_142a51ce0(local_150 + 4,lVar17), cVar3 != '\0'))
              goto switchD_142a5222d_caseD_2;
            }
            local_198 = CONCAT44(local_198._4_4_,(int)local_170);
            (**(code **)(*param_3 + 0x20))(param_3,lVar17);
            puVar13 = local_180;
          }
        }
        else {
          lVar17 = *(longlong *)(uVar18 + 0x10);
          lVar6 = UMapProperty::GetPrivateStaticClass();
          if (lVar17 == lVar6) {
            lVar17 = UMapProperty::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(uVar18 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(uVar18 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar17 + 0x90) * 8) != lVar17 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            uVar7 = 0;
            if (bVar2) {
              uVar7 = uVar18;
            }
            uStack_80 = *(undefined4 *)(uVar7 + 0x80);
            iStack_7c = *(int *)(uVar7 + 0x84);
            uStack_78 = *(undefined8 *)(uVar7 + 0x88);
            local_98 = *(undefined8 *)(uVar7 + 0x70);
            local_70 = *(int *)(uVar7 + 0x90);
            uStack_6c = *(undefined4 *)(uVar7 + 0x94);
            uStack_68 = *(undefined4 *)(uVar7 + 0x98);
            uStack_64 = *(undefined4 *)(uVar7 + 0x9c);
            plVar20 = *(longlong **)(uVar7 + 0x78);
            iVar4 = *(int *)(uVar7 + 0xa0);
            local_90 = plVar20;
            local_88 = param_1;
            local_60 = iVar4;
            iVar15 = FUN_1417698f0(&local_98);
            puVar13 = local_180;
            if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
              lVar17 = 0;
            }
            else {
              lVar17 = (longlong)(iVar4 * iVar15) + *param_1;
            }
            puVar12 = &DAT_143f3eda8;
            if (iVar21 != 0) {
              puVar12 = local_180;
            }
            local_190 = DAT_1468b6160;
            local_198 = 0;
            FUN_141759d00(*(undefined8 *)(uVar7 + 0x70),puVar12,*(int *)(uVar7 + 0x80) + lVar17,0);
            local_198 = CONCAT44(local_198._4_4_,(int)local_170);
            (**(code **)(*param_3 + 0x20))(param_3,plVar20);
          }
          else {
            lVar17 = *(longlong *)(uVar18 + 0x10);
            lVar6 = USetProperty::GetPrivateStaticClass();
            if (lVar17 != lVar6) goto LAB_142a5257c;
            lVar17 = USetProperty::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(uVar18 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(uVar18 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar17 + 0x90) * 8) != lVar17 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            uVar7 = 0;
            if (bVar2) {
              uVar7 = uVar18;
            }
            local_88 = *(longlong **)(uVar7 + 0x78);
            uStack_80 = *(undefined4 *)(uVar7 + 0x80);
            iStack_7c = *(int *)(uVar7 + 0x84);
            uVar19 = *(undefined8 *)(uVar7 + 0x70);
            local_90 = (longlong *)((longlong)*(int *)(uVar7 + 0x44) + (longlong)param_1);
            uStack_78 = *(undefined8 *)(uVar7 + 0x88);
            local_70 = *(int *)(uVar7 + 0x90);
            local_98 = uVar19;
            FUN_141769a00(&local_98);
            local_198 = CONCAT44(local_198._4_4_,(int)local_170);
            (**(code **)(*param_3 + 0x20))(param_3,uVar19);
            puVar13 = local_180;
          }
        }
        break;
      case 6:
        if (uVar18 == 0) {
LAB_142a52643:
          uVar7 = 0;
        }
        else {
          lVar17 = UMapProperty::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(uVar18 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar18 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar17 + 0x90) * 8) != lVar17 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          uVar7 = uVar18;
          if (!bVar2) goto LAB_142a52643;
        }
        if (uVar7 != 0) {
          local_98 = *(undefined8 *)(uVar7 + 0x70);
          uStack_80 = *(undefined4 *)(uVar7 + 0x80);
          iStack_7c = *(int *)(uVar7 + 0x84);
          uStack_78 = *(undefined8 *)(uVar7 + 0x88);
          local_90 = *(longlong **)(uVar7 + 0x78);
          local_70 = *(int *)(uVar7 + 0x90);
          uStack_6c = *(undefined4 *)(uVar7 + 0x94);
          uStack_68 = *(undefined4 *)(uVar7 + 0x98);
          uStack_64 = *(undefined4 *)(uVar7 + 0x9c);
          local_60 = *(int *)(uVar7 + 0xa0);
          local_88 = param_1;
          FScriptMapHelper::Rehash(&local_98);
        }
        if (uVar18 == 0) {
LAB_142a526c3:
          uVar18 = 0;
        }
        else {
          lVar17 = USetProperty::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(uVar18 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar18 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar17 + 0x90) * 8) != lVar17 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_142a526c3;
        }
        if (uVar18 != 0) {
          local_98 = *(undefined8 *)(uVar18 + 0x70);
          local_88 = *(longlong **)(uVar18 + 0x78);
          uStack_80 = *(undefined4 *)(uVar18 + 0x80);
          iStack_7c = *(int *)(uVar18 + 0x84);
          uStack_78 = *(undefined8 *)(uVar18 + 0x88);
          local_70 = *(int *)(uVar18 + 0x90);
          local_90 = param_1;
          FScriptSetHelper::Rehash(&local_98);
        }
        if (iVar4 != 0) goto LAB_142a5270a;
        uVar19 = 1;
        goto LAB_142a5223b;
      case 7:
        if (local_178 < 2) {
          if (uVar18 == 0) goto switchD_142a5222d_caseD_2;
          lVar17 = UArrayProperty::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(uVar18 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar18 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar17 + 0x90) * 8) != lVar17 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            plVar20 = *(longlong **)(uVar18 + 0x70);
            param_1 = (longlong *)((longlong)*(int *)(uVar18 + 0x44) + (longlong)param_1);
            lVar17 = param_1[1];
            iVar4 = *(int *)((longlong)plVar20 + 0x34);
            iVar21 = (int)lVar17 + 1;
            *(int *)(param_1 + 1) = iVar21;
            if (*(int *)((longlong)param_1 + 0xc) < iVar21) {
              FScriptArray::ResizeGrow();
              iVar21 = (int)param_1[1];
            }
            iVar15 = iVar4 * (int)lVar17;
            if (iVar21 == 0) {
              pvVar9 = (void *)0x0;
            }
            else {
              pvVar9 = (void *)((longlong)iVar15 + *param_1);
            }
            if ((*(uint *)(plVar20 + 7) >> 9 & 1) == 0) {
              (**(code **)(*plVar20 + 0x330))(plVar20,pvVar9);
            }
            else {
              _guard_xfg_dispatch_icall_nop(pvVar9,0,(longlong)iVar4);
            }
            local_118 = *(ulonglong *)(uVar18 + 0x70);
            puVar12 = local_180;
            uVar7 = local_118;
            if ((int)param_1[1] == 0) {
              uStack_120 = (longlong *)0x0;
            }
            else {
              uStack_120 = (longlong *)((longlong)iVar15 + *param_1);
            }
            goto LAB_142a52dd3;
          }
        }
        else {
          if (uVar18 == 0) {
LAB_142a52a30:
            puVar13 = &DAT_143f3eda8;
            if (iVar21 != 0) {
              puVar13 = puVar12;
            }
            uVar7 = FUN_1408e1350(uStack_158,puVar13);
            local_118 = uVar7;
            local_e0 = uVar7;
            if (uVar7 != 0) {
              lVar17 = *(longlong *)(uVar7 + 0x10);
              lVar6 = UMapProperty::GetPrivateStaticClass();
              if (lVar17 == lVar6) {
                lVar17 = UMapProperty::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(uVar7 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar17 + 0x90) * 8) != lVar17 + 0x88)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                uVar11 = 0;
                if (bVar2) {
                  uVar11 = uVar7;
                }
                uStack_80 = *(undefined4 *)(uVar11 + 0x80);
                iStack_7c = *(int *)(uVar11 + 0x84);
                uStack_78 = *(undefined8 *)(uVar11 + 0x88);
                local_70 = *(int *)(uVar11 + 0x90);
                uStack_6c = *(undefined4 *)(uVar11 + 0x94);
                uStack_68 = *(undefined4 *)(uVar11 + 0x98);
                uStack_64 = *(undefined4 *)(uVar11 + 0x9c);
                param_1 = (longlong *)
                          ((longlong)param_1 +
                          (longlong)*(int *)(uVar11 + 0x44) +
                          (longlong)(*(int *)(uVar11 + 0x34) * (int)local_170));
                local_98 = *(undefined8 *)(uVar11 + 0x70);
                local_90 = *(longlong **)(uVar11 + 0x78);
                local_60 = *(int *)(uVar11 + 0xa0);
                uStack_120 = param_1;
                local_88 = param_1;
                if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
                  FUN_14176f320(&local_98,0);
                  *(undefined4 *)(param_1 + 1) = 0;
                  if (*(int *)((longlong)param_1 + 0xc) != 0) {
                    FScriptArray::ResizeTo(param_1,0);
                  }
                  *(undefined4 *)(param_1 + 6) = 0xffffffff;
                  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
                  *(undefined4 *)(param_1 + 5) = 0;
                  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
                    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
                    FScriptBitArray::Realloc(param_1 + 2,0);
                  }
                  plVar20 = (longlong *)param_1[8];
                  if ((longlong *)param_1[8] == (longlong *)0x0) {
                    plVar20 = param_1 + 7;
                  }
                  uVar11 = (longlong)(int)param_1[9] & 0x3fffffffffffffff;
                  if ((longlong *)((longlong)(int)param_1[9] * 4 + (longlong)plVar20) < plVar20) {
                    uVar11 = 0;
                  }
                  if (uVar11 != 0) {
                    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
                      *(undefined4 *)plVar20 = 0xffffffff;
                      plVar20 = (longlong *)((longlong)plVar20 + 4);
                    }
                  }
                }
              }
              else {
                lVar17 = *(longlong *)(uVar7 + 0x10);
                lVar6 = USetProperty::GetPrivateStaticClass();
                if (lVar17 == lVar6) {
                  lVar17 = USetProperty::GetPrivateStaticClass();
                  if ((*(int *)(*(longlong *)(uVar7 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar17 + 0x90) * 8) != lVar17 + 0x88)) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  uVar10 = 0;
                  uVar11 = uVar10;
                  if (bVar2) {
                    uVar11 = uVar7;
                  }
                  local_b8 = *(undefined4 *)(uVar11 + 0x78);
                  uStack_b4 = *(undefined4 *)(uVar11 + 0x7c);
                  uStack_b0 = *(undefined4 *)(uVar11 + 0x80);
                  uStack_ac = *(undefined4 *)(uVar11 + 0x84);
                  plVar20 = *(longlong **)(uVar11 + 0x70);
                  param_1 = (longlong *)
                            ((longlong)param_1 +
                            (longlong)*(int *)(uVar11 + 0x44) +
                            (longlong)(*(int *)(uVar11 + 0x34) * (int)local_170));
                  local_e8 = *(undefined4 *)(uVar11 + 0x90);
                  iVar21 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
                  puVar12 = local_180;
                  param_3 = local_d8;
                  uVar7 = local_e0;
                  uStack_120 = param_1;
                  if (iVar21 != 0) {
                    if ((plVar20[7] & 0x1040000000U) == 0) {
                      uVar16 = 1;
                      lVar17 = *param_1;
                      uVar7 = *(ulonglong *)(uVar11 + 0x80) >> 0x20;
                      local_d0 = uVar7;
                      do {
                        iVar4 = (int)uVar10;
                        if ((iVar4 < 0) || ((int)param_1[5] <= iVar4)) {
                          bVar2 = false;
                        }
                        else {
                          bVar2 = true;
                        }
                        if (bVar2) {
                          plVar14 = (longlong *)param_1[4];
                          if ((longlong *)param_1[4] == (longlong *)0x0) {
                            plVar14 = param_1 + 2;
                          }
                          iVar15 = iVar4;
                          if (iVar4 < 0) {
                            iVar15 = iVar4 + 0x1f;
                          }
                          if ((*(uint *)((longlong)plVar14 + (longlong)(iVar15 >> 5) * 4) & uVar16)
                              == 0) goto LAB_142a52ce5;
                          bVar2 = true;
                        }
                        else {
LAB_142a52ce5:
                          bVar2 = false;
                        }
                        if (bVar2) {
                          if ((~(byte)((ulonglong)plVar20[7] >> 0x24) & 1) != 0) {
                            (**(code **)(*plVar20 + 0x328))
                                      (plVar20,*(int *)((longlong)plVar20 + 0x44) + lVar17);
                            uVar7 = local_d0;
                          }
                          iVar21 = iVar21 + -1;
                        }
                        lVar17 = lVar17 + uVar7;
                        uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
                        uVar10 = (ulonglong)(iVar4 + 1);
                      } while (iVar21 != 0);
                    }
                    *(undefined4 *)(param_1 + 1) = 0;
                    if (*(int *)((longlong)param_1 + 0xc) != 0) {
                      FScriptArray::ResizeTo(param_1,0);
                    }
                    *(undefined4 *)(param_1 + 6) = 0xffffffff;
                    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
                    *(undefined4 *)(param_1 + 5) = 0;
                    if (*(int *)((longlong)param_1 + 0x2c) != 0) {
                      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
                      FScriptBitArray::Realloc(param_1 + 2,0);
                    }
                    plVar20 = (longlong *)param_1[8];
                    if ((longlong *)param_1[8] == (longlong *)0x0) {
                      plVar20 = param_1 + 7;
                    }
                    uVar11 = (longlong)(int)param_1[9] & 0x3fffffffffffffff;
                    if ((longlong *)((longlong)(int)param_1[9] * 4 + (longlong)plVar20) < plVar20) {
                      uVar11 = 0;
                    }
                    puVar12 = local_180;
                    param_3 = local_d8;
                    uVar7 = local_e0;
                    if (uVar11 != 0) {
                      for (; uVar11 != 0; uVar11 = uVar11 - 1) {
                        *(undefined4 *)plVar20 = 0xffffffff;
                        plVar20 = (longlong *)((longlong)plVar20 + 4);
                      }
                    }
                  }
                }
                else {
                  uStack_120 = (longlong *)((longlong)*(int *)(uVar7 + 0x44) + (longlong)param_1);
                }
              }
              goto LAB_142a52dd3;
            }
            if (*local_150 == 0) goto switchD_142a5222d_caseD_3;
          }
          else {
            lVar17 = *(longlong *)(uVar18 + 0x10);
            lVar6 = UMapProperty::GetPrivateStaticClass();
            if (lVar17 == lVar6) {
              lVar17 = UMapProperty::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(uVar18 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(uVar18 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar17 + 0x90) * 8) != lVar17 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              uVar10 = 0;
              uVar11 = uVar10;
              if (bVar2) {
                uVar11 = uVar18;
              }
              local_98 = *(undefined8 *)(uVar11 + 0x70);
              uStack_80 = *(undefined4 *)(uVar11 + 0x80);
              iStack_7c = *(int *)(uVar11 + 0x84);
              uStack_78 = *(undefined8 *)(uVar11 + 0x88);
              iVar4 = *(int *)(uVar11 + 0xa0);
              local_70 = *(int *)(uVar11 + 0x90);
              uStack_6c = *(undefined4 *)(uVar11 + 0x94);
              uStack_68 = *(undefined4 *)(uVar11 + 0x98);
              uStack_64 = *(undefined4 *)(uVar11 + 0x9c);
              local_90 = *(longlong **)(uVar11 + 0x78);
              local_88 = param_1;
              local_60 = iVar4;
              iVar15 = FUN_1417698f0(&local_98);
              puVar12 = local_180;
              if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
                uVar10 = (longlong)(iVar4 * iVar15) + *param_1;
              }
              uVar7 = *(ulonglong *)(uVar11 + 0x78);
              uStack_120 = (longlong *)((longlong)iStack_7c + uVar10);
              puVar13 = &DAT_143f3eda8;
              if (iVar21 != 0) {
                puVar13 = local_180;
              }
              local_190 = DAT_1468b6160;
              local_198 = 0;
              local_118 = uVar7;
              FUN_141759d00(*(undefined8 *)(uVar11 + 0x70),puVar13);
            }
            else {
              lVar17 = *(longlong *)(uVar18 + 0x10);
              lVar6 = USetProperty::GetPrivateStaticClass();
              if (lVar17 != lVar6) goto LAB_142a52a30;
              lVar17 = USetProperty::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(uVar18 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(uVar18 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar17 + 0x90) * 8) != lVar17 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              uVar11 = 0;
              uVar7 = uVar11;
              if (bVar2) {
                uVar7 = uVar18;
              }
              local_88 = *(longlong **)(uVar7 + 0x78);
              uStack_80 = *(undefined4 *)(uVar7 + 0x80);
              iStack_7c = *(int *)(uVar7 + 0x84);
              local_98 = *(undefined8 *)(uVar7 + 0x70);
              uStack_78 = *(undefined8 *)(uVar7 + 0x88);
              iVar21 = *(int *)(uVar7 + 0x90);
              local_90 = param_1;
              local_70 = iVar21;
              iVar4 = FUN_141769a00(&local_98);
              if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
                uVar11 = (longlong)(iVar21 * iVar4) + *param_1;
              }
              local_118 = *(ulonglong *)(uVar7 + 0x70);
              uVar7 = local_118;
              uStack_120 = (longlong *)((longlong)(int)local_88 + uVar11);
            }
LAB_142a52dd3:
            if (uVar7 != 0) {
              if (local_150[0x14] != 0) {
                piVar8 = (int *)0x0;
                if (*(longlong *)(local_150 + 0x10) == 0) {
                  piVar8 = local_150 + 8;
                }
                if ((piVar8 != (int *)0x0 || *(longlong *)(local_150 + 0x10) != 0) &&
                   (cVar3 = FUN_142a51ce0(local_150 + 4,uVar7), cVar3 == '\0')) {
                  (**(code **)(*param_3 + 0x30))(param_3);
                  goto switchD_142a5222d_caseD_2;
                }
              }
              local_128 = 0;
              uStack_110 = StructDeserializer::FindClass(&local_128);
              uVar16 = local_188;
              lVar17 = (longlong)(int)local_188;
              local_188 = local_188 + 1;
              local_140 = local_188;
              if (local_13c < (int)local_188) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
                ::ResizeGrow(&local_148,uVar16);
              }
              puVar1 = (ulonglong *)(lVar17 * 0x20 + local_148);
              *puVar1 = local_108;
              puVar1[1] = (ulonglong)uStack_100;
              local_170 = CONCAT44(uStack_124,local_128);
              uStack_168 = uStack_120;
              puVar1 = (ulonglong *)(lVar17 * 0x20 + 0x10 + local_148);
              *puVar1 = local_f8;
              puVar1[1] = uStack_f0;
              local_130 = uStack_120;
              local_160 = local_118;
              uStack_158 = uStack_110;
              uVar18 = local_118;
              local_188 = local_140;
              local_108 = local_170;
              uStack_100 = uStack_168;
              local_f8 = local_160;
              uStack_f0 = uStack_158;
              goto switchD_142a5222d_caseD_2;
            }
          }
          piVar8 = local_150;
          (**(code **)(*param_3 + 0x30))(param_3);
          if (*piVar8 != 0) goto switchD_142a5222d_caseD_2;
        }
        goto switchD_142a5222d_caseD_3;
      }
      if (puVar13 != (undefined2 *)0x0) {
        FMemory::Free(puVar13);
      }
      cVar3 = (**(code **)(*param_3 + 0x18))(param_3,local_138);
      if (cVar3 == '\0') break;
      uVar7 = (ulonglong)local_188;
      param_1 = local_130;
    } while( true );
  }
  uVar19 = 0;
LAB_142a52eb3:
  if (local_148 != 0) {
    FMemory::Free(local_148);
  }
  return uVar19;
switchD_142a5222d_caseD_3:
  uVar19 = 0;
LAB_142a5223b:
  if (puVar12 != (undefined2 *)0x0) {
    FMemory::Free(puVar12);
  }
  goto LAB_142a52eb3;
}



// FUNCTION 142a52f30 FUN_142a52f30 body=220 status=ok
// SIG undefined FUN_142a52f30(void)

void FUN_142a52f30(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined2 local_res8 [4];
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 0x20);
  *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + -1;
  if (((iVar1 - 3U & 0xfffffff9) == 0) && (iVar1 != 9)) {
    FUN_140dd77d0(*(undefined8 *)(lVar2 + 8));
    plVar3 = *(longlong **)(lVar2 + 8);
    if (0 < (int)*(uint *)(lVar2 + 0x24)) {
      uVar4 = (ulonglong)*(uint *)(lVar2 + 0x24);
      do {
        local_res8[0] = 9;
        (**(code **)(*plVar3 + 0x50))(plVar3,local_res8,2);
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else if (iVar1 != 4) {
    local_res8[0] = 0x20;
    (**(code **)(**(longlong **)(lVar2 + 8) + 0x50))(*(longlong **)(lVar2 + 8),local_res8,2);
  }
  local_res8[0] = 0x5d;
  (**(code **)(**(longlong **)(lVar2 + 8) + 0x50))(*(longlong **)(lVar2 + 8),local_res8,2);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(lVar2 + 0x10);
  *(undefined4 *)(lVar2 + 0x20) = 5;
  return;
}



// FUNCTION 142a53010 FUN_142a53010 body=169 status=ok
// SIG undefined FUN_142a53010(void)

void FUN_142a53010(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined2 local_res8 [4];
  
  lVar1 = *(longlong *)(param_1 + 8);
  FUN_140dd77d0(*(undefined8 *)(lVar1 + 8));
  *(int *)(lVar1 + 0x24) = *(int *)(lVar1 + 0x24) + -1;
  plVar2 = *(longlong **)(lVar1 + 8);
  if (0 < (int)*(uint *)(lVar1 + 0x24)) {
    uVar3 = (ulonglong)*(uint *)(lVar1 + 0x24);
    do {
      local_res8[0] = 9;
      (**(code **)(*plVar2 + 0x50))(plVar2,local_res8,2);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    plVar2 = *(longlong **)(lVar1 + 8);
  }
  local_res8[0] = 0x7d;
  (**(code **)(*plVar2 + 0x50))(plVar2,local_res8,2);
  *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + -1;
  TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x20) = 3;
  return;
}



// FUNCTION 142a530c0 FindClass body=276 status=ok
// SIG undefined FindClass(void)

undefined8 StructDeserializer::FindClass(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 == 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10);
  }
  lVar2 = UArrayProperty::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar4 = *(longlong *)(lVar4 + 0x70);
  }
  if (lVar4 == 0) {
LAB_142a53152:
    lVar2 = 0;
  }
  else {
    lVar2 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar2 = lVar4;
    if (!bVar1) goto LAB_142a53152;
  }
  if (lVar4 != 0) {
    lVar3 = UObjectPropertyBase::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142a53191;
  }
  lVar4 = 0;
LAB_142a53191:
  if (lVar2 != 0) {
    return *(undefined8 *)(lVar2 + 0x70);
  }
  if (lVar4 == 0) {
    return 0;
  }
  return *(undefined8 *)(lVar4 + 0x70);
}



// FUNCTION 142a531f0 GetDebugString body=45 status=ok
// SIG undefined GetDebugString(void)

undefined8 FJsonStructDeserializerBackend::GetDebugString(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"Line: %u, Ch: %u",
                      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x60),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 100));
  return param_2;
}



// FUNCTION 142a53230 FUN_142a53230 body=208 status=ok
// SIG undefined FUN_142a53230(void)

undefined8 FUN_142a53230(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  int3 iVar2;
  undefined8 uVar3;
  int7 iVar4;
  
  uVar3 = FUN_142a53450(*(undefined8 *)(param_1 + 0x20),(uint *)(param_1 + 0x18));
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  iVar2 = (int3)(uVar1 >> 8);
  iVar4 = (int7)iVar2;
  if (uVar1 < 9) {
    switch(uVar1) {
    case 0:
      *param_2 = 7;
      return CONCAT71(iVar4,1);
    case 1:
      *param_2 = 6;
      return CONCAT71((int7)iVar2,1);
    case 2:
      *param_2 = 1;
      return CONCAT71((int7)iVar2,1);
    case 3:
      *param_2 = 0;
      return CONCAT71(iVar4,1);
    default:
      *param_2 = 5;
      return CONCAT71(iVar4,1);
    case 8:
      *param_2 = 3;
      return CONCAT71(iVar4,1);
    }
  }
  *param_2 = 4;
  return CONCAT71(iVar4,1);
}



// FUNCTION 142a53330 FUN_142a53330 body=283 status=ok
// SIG undefined FUN_142a53330(void)

longlong FUN_142a53330(longlong *param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  void *_Dst;
  longlong *plVar7;
  
  if (param_2 != 0) {
    lVar6 = UArrayProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      plVar3 = *(longlong **)(param_2 + 0x70);
      if (plVar3 != param_1) {
        return 0;
      }
      plVar7 = (longlong *)(*(int *)(param_2 + 0x44) + param_3);
      iVar1 = *(int *)((longlong)plVar3 + 0x34);
      iVar2 = (int)plVar7[1];
      iVar5 = iVar2 + 1;
      *(int *)(plVar7 + 1) = iVar5;
      if (*(int *)((longlong)plVar7 + 0xc) < iVar5) {
        FScriptArray::ResizeGrow(plVar7,iVar2,iVar1);
        iVar5 = (int)plVar7[1];
      }
      _Dst = (void *)0x0;
      if (iVar5 != 0) {
        _Dst = (void *)((longlong)(iVar2 * iVar1) + *plVar7);
      }
      if ((*(uint *)(plVar3 + 7) >> 9 & 1) == 0) {
        (**(code **)(*plVar3 + 0x330))(plVar3,_Dst);
      }
      else {
        _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar1);
      }
      if ((int)plVar7[1] != 0) {
        return (longlong)(iVar2 * iVar1) + *plVar7;
      }
      return 0;
    }
  }
  if ((int)param_1[6] <= param_4) {
    return 0;
  }
  return (longlong)*(int *)((longlong)param_1 + 0x44) +
         *(int *)((longlong)param_1 + 0x34) * param_4 + param_3;
}



// FUNCTION 142a53450 FUN_142a53450 body=944 status=ok
// SIG undefined FUN_142a53450(void)

char FUN_142a53450(longlong param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  longlong local_28 [2];
  
  if (1 < *(int *)(param_1 + 0x40)) {
    *param_2 = 8;
    return '\0';
  }
  if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
    *param_2 = 8;
    local_28[1] = 0xc;
    local_28[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    uVar6 = 0x18;
    pwVar5 = L"Null Stream";
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xa0))();
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x69) == '\0') {
        *(undefined4 *)(param_1 + 0x30) = 0;
        if (*(int *)(param_1 + 0x34) != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
        }
        do {
          iVar4 = 0;
          if (0 < *(int *)(param_1 + 0x10)) {
            iVar4 = *(int *)(*(longlong *)(param_1 + 8) + -4 +
                            (longlong)*(int *)(param_1 + 0x10) * 4);
          }
          if (iVar4 == 5) {
            iVar4 = *(int *)(param_1 + 0x18);
            *(undefined4 *)(param_1 + 0x18) = 0;
            cVar1 = FUN_1404b21e0(param_1,param_1 + 0x18);
            if (cVar1 != '\0') {
              if ((*(int *)(param_1 + 0x18) == 5) || (iVar4 == 4)) goto LAB_142a536c2;
              if (*(int *)(param_1 + 0x18) != 1) {
LAB_142a536f6:
                local_28[0] = 0;
                local_28[1] = 0x25;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
                pwVar5 = L"Comma token expected, but not found.";
LAB_142a53714:
                uVar6 = 0x4a;
                goto LAB_142a5371a;
              }
LAB_142a536af:
              *(undefined4 *)(param_1 + 0x18) = 0;
              cVar1 = FUN_1404b21e0(param_1,param_1 + 0x18);
              if (cVar1 != '\0') goto LAB_142a536c2;
            }
LAB_142a5373d:
            cVar1 = '\0';
            break;
          }
          if (iVar4 == 6) {
            iVar4 = *(int *)(param_1 + 0x18);
            *(undefined4 *)(param_1 + 0x18) = 0;
            cVar1 = FUN_1404b21e0(param_1,param_1 + 0x18);
            if (cVar1 != '\0') {
              iVar3 = *(int *)(param_1 + 0x18);
              if (iVar3 == 3) goto LAB_142a536c2;
              if (iVar4 != 2) {
                if (iVar3 != 1) goto LAB_142a536f6;
                *(undefined4 *)(param_1 + 0x18) = 0;
                cVar1 = FUN_1404b21e0(param_1,param_1 + 0x18);
                if (cVar1 == '\0') goto LAB_142a5373d;
                iVar3 = *(int *)(param_1 + 0x18);
              }
              if (iVar3 != 7) {
                local_28[0] = 0;
                local_28[1] = 0x26;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
                uVar6 = 0x4c;
                pwVar5 = L"String token expected, but not found.";
                goto LAB_142a5371a;
              }
              FString::operator=(param_1 + 0x28,param_1 + 0x48);
              *(undefined4 *)(param_1 + 0x18) = 0;
              cVar1 = FUN_1404b21e0(param_1,param_1 + 0x18);
              if (cVar1 != '\0') {
                if (*(int *)(param_1 + 0x18) == 6) goto LAB_142a536af;
                local_28[0] = 0;
                local_28[1] = 0x25;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
                pwVar5 = L"Colon token expected, but not found.";
                goto LAB_142a53714;
              }
            }
            goto LAB_142a5373d;
          }
          FUN_1404b4250();
          *(undefined4 *)(param_1 + 0x18) = 0;
          cVar1 = FUN_1404b21e0(param_1,param_1 + 0x18);
          if (cVar1 == '\0') goto LAB_142a5373d;
          if ((*(int *)(param_1 + 0x18) - 2U & 0xfffffffd) != 0) {
            local_28[0] = 0;
            local_28[1] = 0x3a;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
            uVar6 = 0x74;
            pwVar5 = L"Open Curly or Square Brace token expected, but not found.";
LAB_142a5371a:
            FGenericPlatformString::Memcpy(local_28[0],pwVar5,uVar6);
            TJsonReader<wchar_t>::SetErrorMessage(param_1,local_28);
            if (local_28[0] != 0) {
              FMemory::Free();
            }
            goto LAB_142a5373d;
          }
LAB_142a536c2:
          cVar1 = '\x01';
        } while (*(int *)(param_1 + 0x18) == 0);
        *param_2 = *(int *)(&DAT_14667b068 + (longlong)*(int *)(param_1 + 0x18) * 4);
        *(bool *)(param_1 + 0x69) = *(int *)(param_1 + 0x10) == 0;
        if ((cVar1 != '\0') && (*param_2 != 8)) {
          if (*(int *)(param_1 + 0x10) != 0) {
            return cVar1;
          }
          cVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xa0))();
          if (cVar2 == '\0') {
            FUN_1404b4250(param_1);
            return cVar1;
          }
          return cVar1;
        }
        *param_2 = 8;
        if (1 < *(int *)(param_1 + 0x40)) {
          return '\x01';
        }
        local_28[0] = 0;
        local_28[1] = 0x17;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
        uVar6 = 0x2e;
        pwVar5 = L"Unknown Error Occurred";
        goto LAB_142a537c8;
      }
    }
    else if (*(char *)(param_1 + 0x69) == '\0') {
      *param_2 = 8;
      local_28[0] = 0;
      local_28[1] = 0x16;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
      uVar6 = 0x2c;
      pwVar5 = L"Improperly formatted.";
      goto LAB_142a537c8;
    }
    if (cVar1 != '\0') {
      return '\0';
    }
    *param_2 = 8;
    local_28[0] = 0;
    local_28[1] = 0x23;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    uVar6 = 0x46;
    pwVar5 = L"Unexpected additional input found.";
  }
LAB_142a537c8:
  FGenericPlatformString::Memcpy(local_28[0],pwVar5,uVar6);
  TJsonReader<wchar_t>::SetErrorMessage(param_1,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return '\x01';
}



// FUNCTION 142a53800 FUN_142a53800 body=2113 status=ok
// SIG undefined FUN_142a53800(void)

bool FUN_142a53800(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  double dVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  double *pdVar6;
  float *pfVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 local_res8 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  longlong *local_40;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 4) {
    uVar4 = (uint)*(byte *)(*(longlong *)(param_1 + 0x20) + 0x68);
    if (param_2 == 0) {
      return false;
    }
    lVar5 = UBoolProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    bVar17 = !bVar17;
  }
  else {
    if (iVar2 != 5) {
      if (iVar2 != 6) {
        if (iVar2 != 7) {
          return true;
        }
        uVar3 = FUN_142a51fd0(param_2,param_3,param_4,param_5);
        return (bool)uVar3;
      }
      dVar1 = *(double *)(*(longlong *)(param_1 + 0x20) + 0x58);
      if (param_2 == 0) {
        return false;
      }
      lVar5 = UByteProperty::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
        bVar17 = false;
      }
      else {
        bVar17 = true;
      }
      if (!bVar17) {
        lVar5 = UDoubleProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        if (bVar17) {
          pdVar6 = (double *)FUN_142a53330(param_2,param_3,param_4,param_5);
          if (pdVar6 == (double *)0x0) {
            return false;
          }
          *pdVar6 = dVar1;
          return true;
        }
        lVar5 = UFloatProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        if (bVar17) {
          pfVar7 = (float *)FUN_142a53330(param_2,param_3,param_4,param_5);
          if (pfVar7 == (float *)0x0) {
            return false;
          }
          *pfVar7 = (float)dVar1;
          return true;
        }
        lVar5 = UIntProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        if (bVar17) {
          piVar8 = (int *)FUN_142a53330(param_2,param_3,param_4,param_5);
          if (piVar8 == (int *)0x0) {
            return false;
          }
          *piVar8 = (int)dVar1;
          return true;
        }
        lVar5 = UUInt32Property::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        if (bVar17) {
          puVar9 = (undefined4 *)FUN_142a53330(param_2,param_3,param_4,param_5);
          if (puVar9 == (undefined4 *)0x0) {
            return false;
          }
          *puVar9 = (int)(longlong)dVar1;
          return true;
        }
        lVar5 = UInt16Property::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        if (!bVar17) {
          lVar5 = UUInt16Property::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar17 = false;
          }
          else {
            bVar17 = true;
          }
          if (!bVar17) {
            lVar5 = UInt64Property::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar17 = false;
            }
            else {
              bVar17 = true;
            }
            if (bVar17) {
              plVar11 = (longlong *)FUN_142a53330(param_2,param_3,param_4,param_5);
              if (plVar11 == (longlong *)0x0) {
                return false;
              }
              *plVar11 = (longlong)dVar1;
              return true;
            }
            lVar5 = UUInt64Property::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar17 = false;
            }
            else {
              bVar17 = true;
            }
            if (bVar17) {
              plVar11 = (longlong *)FUN_142a53330(param_2,param_3,param_4,param_5);
              if (plVar11 == (longlong *)0x0) {
                return false;
              }
              lVar5 = 0;
              if ((9.223372036854776e+18 <= dVar1) &&
                 (dVar1 = dVar1 - 9.223372036854776e+18, dVar1 < 9.223372036854776e+18)) {
                lVar5 = -0x8000000000000000;
              }
              *plVar11 = (longlong)dVar1 + lVar5;
              return true;
            }
            lVar5 = UInt8Property::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
              bVar17 = false;
            }
            else {
              bVar17 = true;
            }
            if (!bVar17) {
              return false;
            }
            goto LAB_142a53bfe;
          }
        }
        puVar10 = (undefined2 *)FUN_142a53330(param_2,param_3,param_4,param_5);
        if (puVar10 == (undefined2 *)0x0) {
          return false;
        }
        *puVar10 = (short)(int)dVar1;
        return true;
      }
LAB_142a53bfe:
      puVar12 = (undefined1 *)FUN_142a53330(param_2,param_3,param_4,param_5);
      if (puVar12 == (undefined1 *)0x0) {
        return false;
      }
      *puVar12 = (char)(int)dVar1;
      return true;
    }
    puVar13 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
    if (param_2 == 0) {
      return false;
    }
    lVar5 = UStrProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (bVar17) {
      lVar5 = FUN_142a53330(param_2,param_3,param_4,param_5);
      if (lVar5 == 0) {
        return false;
      }
      FString::operator=(lVar5,puVar13);
      return true;
    }
    lVar5 = UNameProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (bVar17) {
      if (*(int *)(puVar13 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*puVar13;
      }
      puVar13 = (undefined8 *)FName::FName(local_res8,puVar10,1);
      puVar14 = (undefined8 *)FUN_142a53330(param_2,param_3,param_4,param_5);
      if (puVar14 == (undefined8 *)0x0) {
        return false;
      }
      *puVar14 = *puVar13;
      return true;
    }
    lVar5 = UTextProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (bVar17) {
      uVar15 = FText::FromString(local_48,puVar13);
      lVar5 = FUN_142a53330(param_2,param_3,param_4,param_5);
      bVar17 = lVar5 != 0;
      if (bVar17) {
        FText::operator=(lVar5,uVar15);
      }
      if (local_40 == (longlong *)0x0) {
        return bVar17;
      }
      LOCK();
      plVar11 = local_40 + 1;
      lVar5 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar5 != 1) {
        return bVar17;
      }
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar8 = (int *)((longlong)local_40 + 0xc);
      iVar2 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
        return bVar17;
      }
      return bVar17;
    }
    lVar5 = UByteProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (!bVar17) {
      lVar5 = UEnumProperty::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
        bVar17 = false;
      }
      else {
        bVar17 = true;
      }
      if (bVar17) {
        if (*(int *)(puVar13 + 1) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)*puVar13;
        }
        uVar15 = *(undefined8 *)(param_2 + 0x78);
        puVar13 = (undefined8 *)FName::FName(local_50,puVar10,1);
        lVar5 = UEnum::GetValueByName(uVar15,*puVar13,0);
        if (lVar5 == -1) {
          return false;
        }
        lVar16 = FUN_142a53330(param_2,param_3,param_4,param_5);
        if (lVar16 == 0) {
          return false;
        }
        (**(code **)(**(longlong **)(param_2 + 0x70) + 0x388))
                  (*(longlong **)(param_2 + 0x70),lVar16,lVar5);
        return true;
      }
      lVar5 = UClassProperty::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
        bVar17 = false;
      }
      else {
        bVar17 = true;
      }
      if (!bVar17) {
        return false;
      }
      if (*(int *)(puVar13 + 1) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = (undefined2 *)*puVar13;
      }
      uVar15 = FUN_14171bfe0();
      uVar15 = FUN_141799c90(uVar15,0,puVar10,0,2,0,1);
      puVar13 = (undefined8 *)FUN_142a53330(param_2,param_3,param_4,param_5);
      if (puVar13 == (undefined8 *)0x0) {
        return false;
      }
      *puVar13 = uVar15;
      return true;
    }
    if (*(longlong *)(param_2 + 0x70) == 0) {
      return false;
    }
    if (*(int *)(puVar13 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*puVar13;
    }
    puVar13 = (undefined8 *)FName::FName(local_58,puVar10,1);
    uVar4 = UEnum::GetValueByName(*(undefined8 *)(param_2 + 0x70),*puVar13,0);
    bVar17 = uVar4 == 0xffffffff;
  }
  if ((!bVar17) &&
     (puVar12 = (undefined1 *)FUN_142a53330(param_2,param_3,param_4,param_5),
     puVar12 != (undefined1 *)0x0)) {
    *puVar12 = (char)uVar4;
    return true;
  }
  return false;
}



// FUNCTION 142a54050 ReadUntilMatching body=131 status=ok
// SIG undefined ReadUntilMatching(void)

undefined1 TJsonReader<unsigned_short>::ReadUntilMatching(undefined8 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int local_res18 [4];
  
  iVar2 = 0;
  cVar1 = FUN_142a53450(param_1,local_res18);
  do {
    if ((cVar1 == '\0') || ((iVar2 == 0 && (local_res18[0] == param_2)))) {
      return 1;
    }
    if (local_res18[0] == 0) {
LAB_142a540ae:
      iVar2 = iVar2 + 1;
    }
    else if (local_res18[0] == 1) {
LAB_142a540aa:
      iVar2 = iVar2 + -1;
    }
    else {
      if (local_res18[0] == 2) goto LAB_142a540ae;
      if (local_res18[0] == 3) goto LAB_142a540aa;
      if (local_res18[0] == 8) {
        return 0;
      }
    }
    cVar1 = FUN_142a53450(param_1,local_res18);
  } while( true );
}



// FUNCTION 142a540e0 FUN_142a540e0 body=2659 status=ok
// SIG undefined FUN_142a540e0(void)

void FUN_142a540e0(longlong *param_1,ulonglong param_2,longlong *param_3,longlong param_4)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  char cVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong *plVar20;
  longlong lVar21;
  uint uVar22;
  longlong *plVar23;
  longlong lVar24;
  ulonglong *puVar25;
  ulonglong *puVar26;
  longlong *plVar27;
  uint uVar28;
  longlong lVar29;
  longlong *local_res10;
  longlong *local_res18;
  longlong local_res20;
  ulonglong *local_118;
  undefined8 local_110;
  ulonglong local_108;
  ulonglong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  int local_a0;
  int local_9c;
  ulonglong local_98 [2];
  undefined1 local_88;
  undefined7 uStack_87;
  undefined8 uStack_80;
  longlong lStack_78;
  longlong *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  uStack_100 = 0;
  uStack_f8 = 0;
  local_118 = (ulonglong *)0x0;
  local_110 = 1;
  local_108 = local_108 & 0xffffffffffffff00;
  local_e8 = (longlong *)0x0;
  local_res18 = param_3;
  local_res20 = param_4;
  uStack_f0 = param_1;
  uStack_e0 = param_2;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_118,0);
  *local_118 = local_108;
  local_118[1] = uStack_100;
  local_118[2] = uStack_f8;
  local_118[3] = (ulonglong)uStack_f0;
  *(undefined4 *)(local_118 + 4) = (undefined4)local_e8;
  *(undefined4 *)((longlong)local_118 + 0x24) = local_e8._4_4_;
  *(undefined4 *)(local_118 + 5) = (undefined4)uStack_e0;
  *(undefined4 *)((longlong)local_118 + 0x2c) = uStack_e0._4_4_;
  iVar18 = (int)local_110;
  puVar26 = local_118;
joined_r0x000142a54169:
  while( true ) {
    if (iVar18 < 1) {
      if (puVar26 != (ulonglong *)0x0) {
        FMemory::Free(puVar26);
      }
      return;
    }
    iVar19 = iVar18 + -1;
    lVar10 = (longlong)iVar19;
    local_108 = puVar26[lVar10 * 6];
    uStack_100 = (puVar26 + lVar10 * 6)[1];
    uStack_f8 = puVar26[lVar10 * 6 + 2];
    uStack_f0 = (longlong *)(puVar26 + lVar10 * 6 + 2)[1];
    local_e8 = (longlong *)puVar26[lVar10 * 6 + 4];
    uStack_e0 = (puVar26 + lVar10 * 6 + 4)[1];
    iVar16 = (iVar18 - iVar19) + -1;
    if (iVar16 != 0) {
      _guard_xfg_dispatch_icall_nop
                (puVar26 + (longlong)iVar19 * 6,puVar26 + (longlong)iVar18 * 6,
                 (longlong)iVar16 * 0x30);
    }
    if ((local_e8 != (longlong *)0x0) &&
       (uVar11 = UStructProperty::GetPrivateStaticClass(), uStack_e0 != uVar11)) break;
    if ((char)local_108 == '\0') {
      local_res10 = uStack_f0;
      if ((local_e8 != (longlong *)0x0) &&
         ((local_e8[4] == 0 ||
          (lVar10 = *(longlong *)(local_e8[4] + 0x10),
          lVar29 = UArrayProperty::GetPrivateStaticClass(), lVar10 != lVar29)))) {
        local_res10 = (longlong *)
                      ((longlong)*(int *)((longlong)local_e8 + 0x44) + (longlong)uStack_f0);
      }
      (**(code **)(*param_3 + 8))(param_3,&local_108);
      local_108 = CONCAT71(local_108._1_7_,1);
      local_110 = CONCAT44(local_110._4_4_,iVar18);
      if (local_110._4_4_ < iVar18) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_118,iVar19);
        iVar18 = (int)local_110;
      }
      plVar23 = local_e8;
      puVar26 = local_118 + (longlong)iVar19 * 6;
      *puVar26 = local_108;
      puVar26[1] = uStack_100;
      *(undefined4 *)(puVar26 + 2) = (undefined4)uStack_f8;
      *(undefined4 *)((longlong)puVar26 + 0x14) = uStack_f8._4_4_;
      *(undefined4 *)(puVar26 + 3) = (undefined4)uStack_f0;
      *(undefined4 *)((longlong)puVar26 + 0x1c) = uStack_f0._4_4_;
      *(undefined4 *)(puVar26 + 4) = (undefined4)local_e8;
      *(undefined4 *)((longlong)puVar26 + 0x24) = local_e8._4_4_;
      *(undefined4 *)(puVar26 + 5) = (undefined4)uStack_e0;
      *(undefined4 *)((longlong)puVar26 + 0x2c) = uStack_e0._4_4_;
      if (local_e8 != (longlong *)0x0) {
        lVar29 = UStructProperty::GetPrivateStaticClass();
        plVar20 = local_e8;
        lVar10 = plVar23[2];
        if ((*(int *)(lVar10 + 0x90) < *(int *)(lVar29 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar10 + 0x88) + (longlong)*(int *)(lVar29 + 0x90) * 8) !=
            lVar29 + 0x88)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          uStack_e0 = plVar23[0xe];
        }
        else if (local_e8 != (longlong *)0x0) {
          lVar29 = UObjectPropertyBase::GetPrivateStaticClass();
          lVar10 = plVar20[2];
          if ((*(int *)(lVar10 + 0x90) < *(int *)(lVar29 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar10 + 0x88) + (longlong)*(int *)(lVar29 + 0x90) * 8) !=
              lVar29 + 0x88)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) {
            uStack_e0 = plVar20[0xe];
          }
        }
      }
      lVar10 = 0;
      iVar16 = 0;
      local_a8 = 0;
      iVar19 = 0;
      local_9c = 0;
      if (uStack_e0 == 0) {
        uStack_d0 = 0;
      }
      else {
        uStack_d0 = *(ulonglong *)(uStack_e0 + 0x38);
      }
      uStack_c8 = CONCAT17(uStack_c8._7_1_,0x101ffffffff);
      local_d8 = uStack_e0;
      FUN_140472e10(&local_d8);
      lVar29 = local_res20;
      plVar23 = local_res10;
      if (uStack_d0 != 0) {
        lVar24 = local_res20 + 0x20;
        lVar21 = local_res20;
        do {
          uVar11 = uStack_d0;
          if (*(int *)(lVar29 + 0x50) == 0) {
LAB_142a549c0:
            uStack_60 = *(longlong *)(uVar11 + 0x10);
            lVar21 = (longlong)iVar19;
            local_88 = 0;
            uStack_80 = 0;
            lStack_78 = 0;
            plStack_70 = plVar23;
            local_a0 = iVar19 + 1;
            uStack_68 = uVar11;
            if (iVar16 < local_a0) {
              TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_a8,iVar19);
              lVar10 = local_a8;
              iVar16 = local_9c;
            }
            puVar12 = (undefined8 *)(lVar10 + lVar21 * 0x30);
            *puVar12 = CONCAT71(uStack_87,local_88);
            puVar12[1] = uStack_80;
            plVar20 = (longlong *)(lVar10 + 0x10 + lVar21 * 0x30);
            *plVar20 = lStack_78;
            plVar20[1] = (longlong)plStack_70;
            puVar2 = (undefined4 *)(lVar10 + 0x20 + lVar21 * 0x30);
            *puVar2 = (undefined4)uStack_68;
            puVar2[1] = uStack_68._4_4_;
            puVar2[2] = (undefined4)uStack_60;
            puVar2[3] = uStack_60._4_4_;
            lVar21 = local_res20;
            iVar19 = local_a0;
          }
          else {
            lVar4 = *(longlong *)(lVar29 + 0x40);
            lVar13 = 0;
            if (lVar4 == 0) {
              lVar13 = lVar24;
            }
            if (lVar13 == 0 && lVar4 == 0) goto LAB_142a549c0;
            local_res10 = local_e8;
            local_98[0] = uStack_d0;
            if (*(int *)(lVar21 + 0x50) == 0) {
LAB_142a549ac:
              uVar14 = 0;
            }
            else {
              plVar20 = *(longlong **)(lVar21 + 0x40);
              if (*(longlong **)(lVar21 + 0x40) == (longlong *)0x0) {
                plVar20 = (longlong *)(lVar21 + 0x20);
              }
              if (plVar20 == (longlong *)0x0) goto LAB_142a549ac;
              uVar14 = (**(code **)(*plVar20 + 8))();
            }
            cVar9 = (**(code **)(lVar21 + 0x10))(uVar14,local_98,&local_res10);
            if (cVar9 != '\0') goto LAB_142a549c0;
          }
          uStack_d0 = *(ulonglong *)(uVar11 + 0x28);
          FUN_140472e10(&local_d8);
        } while (uStack_d0 != 0);
      }
      lVar29 = (longlong)(iVar19 + -1);
      puVar26 = local_118;
      if (-1 < iVar19 + -1) {
        puVar25 = (ulonglong *)(lVar29 * 0x30 + lVar10);
        iVar19 = iVar18;
        do {
          lVar24 = (longlong)iVar19;
          iVar18 = iVar19 + 1;
          local_110 = CONCAT44(local_110._4_4_,iVar18);
          if (local_110._4_4_ < iVar18) {
            TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_118,iVar19);
            puVar26 = local_118;
            iVar18 = (int)local_110;
          }
          uVar11 = puVar25[1];
          puVar26[lVar24 * 6] = *puVar25;
          (puVar26 + lVar24 * 6)[1] = uVar11;
          uVar11 = puVar25[3];
          puVar26[lVar24 * 6 + 2] = puVar25[2];
          (puVar26 + lVar24 * 6 + 2)[1] = uVar11;
          puVar1 = puVar25 + 4;
          uVar6 = *(undefined4 *)((longlong)puVar25 + 0x24);
          uVar11 = puVar25[5];
          uVar7 = *(undefined4 *)((longlong)puVar25 + 0x2c);
          puVar25 = puVar25 + -6;
          lVar29 = lVar29 + -1;
          puVar3 = puVar26 + lVar24 * 6 + 4;
          *(int *)puVar3 = (int)*puVar1;
          *(undefined4 *)((longlong)puVar3 + 4) = uVar6;
          *(int *)(puVar3 + 1) = (int)uVar11;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uVar7;
          iVar19 = iVar18;
        } while (-1 < lVar29);
      }
      param_3 = local_res18;
      if (lVar10 != 0) {
        FMemory::Free(lVar10);
        param_3 = local_res18;
        puVar26 = local_118;
      }
    }
    else {
      lVar10 = *param_3;
LAB_142a54b39:
      (**(code **)(lVar10 + 0x18))(param_3,&local_108);
      iVar18 = iVar19;
      puVar26 = local_118;
    }
  }
  uVar11 = UArrayProperty::GetPrivateStaticClass();
  if (uStack_e0 == uVar11) {
    puVar12 = (undefined8 *)*param_3;
    if ((char)local_108 == '\0') {
      (*(code *)*puVar12)();
      local_108 = CONCAT71(local_108._1_7_,1);
      local_110 = CONCAT44(local_110._4_4_,iVar18);
      if (local_110._4_4_ < iVar18) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_118,iVar19);
        iVar18 = (int)local_110;
      }
      plVar23 = local_e8;
      puVar26 = local_118 + (longlong)iVar19 * 6;
      *puVar26 = local_108;
      puVar26[1] = uStack_100;
      *(undefined4 *)(puVar26 + 2) = (undefined4)uStack_f8;
      *(undefined4 *)((longlong)puVar26 + 0x14) = uStack_f8._4_4_;
      *(undefined4 *)(puVar26 + 3) = (undefined4)uStack_f0;
      *(undefined4 *)((longlong)puVar26 + 0x1c) = uStack_f0._4_4_;
      *(undefined4 *)(puVar26 + 4) = (undefined4)local_e8;
      *(undefined4 *)((longlong)puVar26 + 0x24) = local_e8._4_4_;
      *(undefined4 *)(puVar26 + 5) = (undefined4)uStack_e0;
      *(undefined4 *)((longlong)puVar26 + 0x2c) = uStack_e0._4_4_;
      if (local_e8 == (longlong *)0x0) {
LAB_142a542d7:
        plVar23 = (longlong *)0x0;
      }
      else {
        lVar10 = UArrayProperty::GetPrivateStaticClass();
        if ((*(int *)(plVar23[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar23[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
            != lVar10 + 0x88)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (!bVar8) goto LAB_142a542d7;
      }
      plVar20 = (longlong *)((longlong)*(int *)((longlong)plVar23 + 0x44) + (longlong)uStack_f0);
      lVar10 = plVar23[0xe];
      iVar16 = (int)plVar20[1] + -1;
      iVar19 = *(int *)(lVar10 + 0x34);
      param_3 = local_res18;
      puVar26 = local_118;
      if (-1 < iVar16) {
        lVar29 = (longlong)(iVar19 * iVar16);
        iVar17 = iVar18;
        do {
          uStack_d0 = 0;
          uStack_c8 = 0;
          local_d8 = local_d8 & 0xffffffffffffff00;
          if ((int)plVar20[1] == 0) {
            uStack_c0 = 0;
          }
          else {
            uStack_c0 = *plVar20 + lVar29;
          }
          lVar24 = (longlong)iVar17;
          uStack_b0 = *(undefined8 *)(lVar10 + 0x10);
          iVar18 = iVar17 + 1;
          local_110 = CONCAT44(local_110._4_4_,iVar18);
          local_b8 = lVar10;
          if (local_110._4_4_ < iVar18) {
            TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_118,iVar17);
            puVar26 = local_118;
            iVar18 = (int)local_110;
          }
          lVar29 = lVar29 + -iVar19;
          iVar16 = iVar16 + -1;
          puVar26[lVar24 * 6] = local_d8;
          (puVar26 + lVar24 * 6)[1] = uStack_d0;
          puVar26[lVar24 * 6 + 2] = uStack_c8;
          (puVar26 + lVar24 * 6 + 2)[1] = uStack_c0;
          puVar25 = puVar26 + lVar24 * 6 + 4;
          *(undefined4 *)puVar25 = (undefined4)local_b8;
          *(undefined4 *)((longlong)puVar25 + 4) = local_b8._4_4_;
          *(undefined4 *)(puVar25 + 1) = (undefined4)uStack_b0;
          *(undefined4 *)((longlong)puVar25 + 0xc) = uStack_b0._4_4_;
          iVar17 = iVar18;
          param_3 = local_res18;
        } while (-1 < iVar16);
      }
      goto joined_r0x000142a54169;
    }
  }
  else {
    uVar11 = UMapProperty::GetPrivateStaticClass();
    if (uStack_e0 == uVar11) {
      lVar10 = *param_3;
      if ((char)local_108 != '\0') goto LAB_142a54b39;
      (**(code **)(lVar10 + 8))();
      local_108 = CONCAT71(local_108._1_7_,1);
      local_110 = CONCAT44(local_110._4_4_,iVar18);
      if (local_110._4_4_ < iVar18) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_118,iVar19);
        iVar18 = (int)local_110;
      }
      plVar23 = local_e8;
      puVar26 = local_118 + (longlong)iVar19 * 6;
      *puVar26 = local_108;
      puVar26[1] = uStack_100;
      *(undefined4 *)(puVar26 + 2) = (undefined4)uStack_f8;
      *(undefined4 *)((longlong)puVar26 + 0x14) = uStack_f8._4_4_;
      *(undefined4 *)(puVar26 + 3) = (undefined4)uStack_f0;
      *(undefined4 *)((longlong)puVar26 + 0x1c) = uStack_f0._4_4_;
      *(undefined4 *)(puVar26 + 4) = (undefined4)local_e8;
      *(undefined4 *)((longlong)puVar26 + 0x24) = local_e8._4_4_;
      *(undefined4 *)(puVar26 + 5) = (undefined4)uStack_e0;
      *(undefined4 *)((longlong)puVar26 + 0x2c) = uStack_e0._4_4_;
      if (local_e8 == (longlong *)0x0) {
LAB_142a54451:
        plVar23 = (longlong *)0x0;
      }
      else {
        lVar10 = UMapProperty::GetPrivateStaticClass();
        if ((*(int *)(plVar23[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar23[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
            != lVar10 + 0x88)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (!bVar8) goto LAB_142a54451;
      }
      plVar20 = (longlong *)((longlong)*(int *)((longlong)plVar23 + 0x44) + (longlong)uStack_f0);
      plStack_70 = (longlong *)plVar23[0x10];
      uStack_68 = plVar23[0x11];
      lVar10 = plVar23[0xf];
      uStack_60 = plVar23[0x12];
      uStack_58 = (undefined4)plVar23[0x13];
      uStack_54 = *(undefined4 *)((longlong)plVar23 + 0x9c);
      uVar22 = (int)plVar20[1] - 1;
      param_3 = local_res18;
      puVar26 = local_118;
      if (-1 < (int)uVar22) {
        bVar5 = (byte)uVar22 & 0x1f;
        uVar28 = 1 << bVar5 | 1U >> 0x20 - bVar5;
        plVar27 = (longlong *)(longlong)-(int)plVar23[0x14];
        lVar29 = (longlong)(int)((int)plVar23[0x14] * uVar22);
        local_res10 = plVar27;
        do {
          if (((int)uVar22 < 0) || ((int)plVar20[5] <= (int)uVar22)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) {
            plVar15 = (longlong *)plVar20[4];
            if ((longlong *)plVar20[4] == (longlong *)0x0) {
              plVar15 = plVar20 + 2;
            }
            if ((*(uint *)((longlong)plVar15 + (ulonglong)(uVar22 >> 5) * 4) & uVar28) == 0)
            goto LAB_142a544e7;
            bVar8 = true;
          }
          else {
LAB_142a544e7:
            bVar8 = false;
          }
          if (bVar8) {
            if ((int)plVar20[1] == *(int *)((longlong)plVar20 + 0x34)) {
              uStack_c0 = 0;
            }
            else {
              uStack_c0 = *plVar20 + lVar29;
            }
            uStack_d0 = (longlong)(int)plVar23[0x10] + uStack_c0;
            lVar24 = (longlong)iVar18;
            uStack_c8 = plVar23[0xe];
            uStack_b0 = *(undefined8 *)(lVar10 + 0x10);
            iVar18 = iVar18 + 1;
            local_d8 = local_d8 & 0xffffffffffffff00;
            local_110 = CONCAT44(local_110._4_4_,iVar18);
            local_b8 = lVar10;
            if (local_110._4_4_ < iVar18) {
              TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_118);
              plVar27 = local_res10;
              iVar18 = (int)local_110;
            }
            local_118[lVar24 * 6] = local_d8;
            (local_118 + lVar24 * 6)[1] = uStack_d0;
            puVar26 = local_118 + lVar24 * 6 + 2;
            *(undefined4 *)puVar26 = (undefined4)uStack_c8;
            *(undefined4 *)((longlong)puVar26 + 4) = uStack_c8._4_4_;
            *(undefined4 *)(puVar26 + 1) = (undefined4)uStack_c0;
            *(undefined4 *)((longlong)puVar26 + 0xc) = uStack_c0._4_4_;
            puVar26 = local_118 + lVar24 * 6 + 4;
            *(undefined4 *)puVar26 = (undefined4)local_b8;
            *(undefined4 *)((longlong)puVar26 + 4) = local_b8._4_4_;
            *(undefined4 *)(puVar26 + 1) = (undefined4)uStack_b0;
            *(undefined4 *)((longlong)puVar26 + 0xc) = uStack_b0._4_4_;
          }
          lVar29 = lVar29 + (longlong)plVar27;
          uVar28 = uVar28 >> 1 | (uint)((uVar28 & 1) != 0) << 0x1f;
          uVar22 = uVar22 - 1;
          param_3 = local_res18;
          puVar26 = local_118;
        } while (-1 < (int)uVar22);
      }
      goto joined_r0x000142a54169;
    }
    uVar11 = USetProperty::GetPrivateStaticClass();
    if (uStack_e0 == uVar11) {
      puVar12 = (undefined8 *)*param_3;
      if ((char)local_108 != '\0') goto LAB_142a54798;
      (*(code *)*puVar12)();
      local_108 = CONCAT71(local_108._1_7_,1);
      local_110 = CONCAT44(local_110._4_4_,iVar18);
      if (local_110._4_4_ < iVar18) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_118,iVar19);
        iVar18 = (int)local_110;
      }
      plVar23 = uStack_f0;
      lVar10 = (longlong)iVar19;
      local_118[lVar10 * 6] = local_108;
      (local_118 + lVar10 * 6)[1] = uStack_100;
      local_118[lVar10 * 6 + 2] = uStack_f8;
      (local_118 + lVar10 * 6 + 2)[1] = (ulonglong)uStack_f0;
      local_118[lVar10 * 6 + 4] = (ulonglong)local_e8;
      (local_118 + lVar10 * 6 + 4)[1] = uStack_e0;
      lStack_78 = local_e8[0xf];
      plStack_70 = (longlong *)local_e8[0x10];
      uVar22 = (int)uStack_f0[1] - 1;
      uStack_68 = local_e8[0x11];
      lVar29 = local_e8[0x12];
      lVar10 = local_e8[0xe];
      puVar26 = local_118;
      if (-1 < (int)uVar22) {
        bVar5 = (byte)uVar22 & 0x1f;
        uVar28 = 1 << bVar5 | 1U >> 0x20 - bVar5;
        lVar24 = (longlong)(int)((int)lVar29 * uVar22);
        do {
          if (((int)uVar22 < 0) || ((int)plVar23[5] <= (int)uVar22)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (bVar8) {
            plVar20 = (longlong *)plVar23[4];
            if ((longlong *)plVar23[4] == (longlong *)0x0) {
              plVar20 = plVar23 + 2;
            }
            if ((*(uint *)((longlong)plVar20 + (ulonglong)(uVar22 >> 5) * 4) & uVar28) == 0)
            goto LAB_142a546a8;
            bVar8 = true;
          }
          else {
LAB_142a546a8:
            bVar8 = false;
          }
          if (bVar8) {
            uStack_d0 = 0;
            uStack_c8 = 0;
            local_d8 = local_d8 & 0xffffffffffffff00;
            if ((int)plVar23[1] == *(int *)((longlong)plVar23 + 0x34)) {
              uStack_c0 = 0;
            }
            else {
              uStack_c0 = *plVar23 + lVar24;
            }
            lVar21 = (longlong)iVar18;
            uStack_b0 = *(undefined8 *)(lVar10 + 0x10);
            iVar18 = iVar18 + 1;
            local_110 = CONCAT44(local_110._4_4_,iVar18);
            local_b8 = lVar10;
            if (local_110._4_4_ < iVar18) {
              TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_118);
              puVar26 = local_118;
              iVar18 = (int)local_110;
            }
            puVar26[lVar21 * 6] = local_d8;
            (puVar26 + lVar21 * 6)[1] = uStack_d0;
            puVar25 = puVar26 + lVar21 * 6 + 2;
            *(undefined4 *)puVar25 = (undefined4)uStack_c8;
            *(undefined4 *)((longlong)puVar25 + 4) = uStack_c8._4_4_;
            *(undefined4 *)(puVar25 + 1) = (undefined4)uStack_c0;
            *(undefined4 *)((longlong)puVar25 + 0xc) = uStack_c0._4_4_;
            puVar25 = puVar26 + lVar21 * 6 + 4;
            *(undefined4 *)puVar25 = (undefined4)local_b8;
            *(undefined4 *)((longlong)puVar25 + 4) = local_b8._4_4_;
            *(undefined4 *)(puVar25 + 1) = (undefined4)uStack_b0;
            *(undefined4 *)((longlong)puVar25 + 0xc) = uStack_b0._4_4_;
          }
          lVar24 = lVar24 + -(int)lVar29;
          uVar28 = uVar28 >> 1 | (uint)((uVar28 & 1) != 0) << 0x1f;
          uVar22 = uVar22 - 1;
          param_3 = local_res18;
        } while (-1 < (int)uVar22);
      }
      goto joined_r0x000142a54169;
    }
    if ((int)local_e8[6] < 2) {
      (*(code *)((undefined8 *)*param_3)[5])(param_3,&local_108,0);
      iVar18 = iVar19;
      puVar26 = local_118;
      goto joined_r0x000142a54169;
    }
    (**(code **)*param_3)();
    iVar18 = 0;
    if (0 < (int)local_e8[6]) {
      do {
        (**(code **)(*param_3 + 0x28))(param_3,&local_108);
        iVar18 = iVar18 + 1;
      } while (iVar18 < (int)local_e8[6]);
    }
    puVar12 = (undefined8 *)*param_3;
  }
LAB_142a54798:
  (*(code *)puVar12[2])(param_3,&local_108);
  iVar18 = iVar19;
  puVar26 = local_118;
  goto joined_r0x000142a54169;
}



// FUNCTION 142a54b70 FUN_142a54b70 body=314 status=ok
// SIG undefined FUN_142a54b70(void)

void FUN_142a54b70(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined2 local_res8 [4];
  
  if ((((int)param_1[4] - 2U & 0xfffffff5) != 0) || ((int)param_1[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  }
  FUN_140dd77d0(param_1[1]);
  plVar2 = (longlong *)param_1[1];
  if (0 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    uVar3 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
    do {
      local_res8[0] = 9;
      (**(code **)(*plVar2 + 0x50))(plVar2,local_res8,2);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  local_res8[0] = 0x5b;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
  iVar1 = (int)param_1[3];
  *(int *)(param_1 + 3) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar1);
  }
  *(undefined4 *)(param_1[2] + (longlong)iVar1 * 4) = 5;
  *(undefined4 *)(param_1 + 4) = 4;
  return;
}



// FUNCTION 142a54cb0 FUN_142a54cb0 body=400 status=ok
// SIG undefined FUN_142a54cb0(void)

void FUN_142a54cb0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  undefined2 local_res8 [4];
  undefined2 *local_28;
  undefined8 local_20;
  
  if ((((int)param_1[4] - 2U & 0xfffffff5) != 0) || ((int)param_1[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  }
  FUN_140dd77d0(param_1[1]);
  plVar1 = (longlong *)param_1[1];
  if (0 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    uVar6 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
    do {
      local_res8[0] = 9;
      (**(code **)(*plVar1 + 0x50))(plVar1,local_res8,2);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  local_28 = (undefined2 *)0x0;
  local_20 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  puVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"null",10);
  iVar3 = (int)local_20;
  plVar1 = (longlong *)param_1[1];
  puVar7 = &DAT_143f3eda8;
  if ((int)local_20 != 0) {
    puVar7 = puVar2;
  }
  iVar5 = 0;
  while( true ) {
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar3 + -1;
    }
    if (iVar4 <= iVar5) break;
    local_res8[0] = *puVar7;
    (**(code **)(*plVar1 + 0x50))(plVar1,local_res8,2);
    iVar5 = iVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  if (puVar2 != (undefined2 *)0x0) {
    FMemory::Free(puVar2);
  }
  *(undefined4 *)(param_1 + 4) = 0xb;
  return;
}



// FUNCTION 142a54e40 FUN_142a54e40 body=678 status=ok
// SIG undefined FUN_142a54e40(void)

void FUN_142a54e40(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  undefined2 *puVar11;
  longlong *local_res8;
  undefined2 local_res10 [4];
  undefined2 local_res18 [4];
  undefined2 local_res20 [4];
  undefined2 local_88 [4];
  longlong local_80 [2];
  undefined2 *local_70;
  undefined8 local_68;
  longlong local_60 [4];
  
  lVar3 = *(longlong *)(param_2 + 0x20);
  local_res8 = param_1;
  if (((lVar3 == 0) || (1 < *(int *)(lVar3 + 0x30))) ||
     (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0x10),
     lVar7 = UArrayProperty::GetPrivateStaticClass(), lVar3 == lVar7)) {
    lVar3 = *param_1;
    iVar8 = *(int *)(lVar3 + 0x20);
    if (((iVar8 != 2) && (iVar8 != 4)) && (iVar8 != 0xc)) {
      local_res10[0] = 0x2c;
      (**(code **)(**(longlong **)(lVar3 + 8) + 0x50))(*(longlong **)(lVar3 + 8),local_res10,2);
      iVar8 = *(int *)(lVar3 + 0x20);
    }
    if ((iVar8 == 4) || (iVar8 - 8U < 4)) {
      local_res20[0] = 0x20;
      (**(code **)(**(longlong **)(lVar3 + 8) + 0x50))(*(longlong **)(lVar3 + 8),local_res20,2);
    }
    else {
      FUN_140dd77d0(*(undefined8 *)(lVar3 + 8));
      plVar4 = *(longlong **)(lVar3 + 8);
      if (0 < (int)*(uint *)(lVar3 + 0x24)) {
        uVar9 = (ulonglong)*(uint *)(lVar3 + 0x24);
        do {
          local_res18[0] = 9;
          (**(code **)(*plVar4 + 0x50))(plVar4,local_res18,2);
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    local_68 = 5;
    local_70 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
    puVar5 = local_70;
    FGenericPlatformString::Memcpy(local_70,L"null",10);
    iVar8 = (int)local_68;
    plVar4 = *(longlong **)(lVar3 + 8);
    puVar11 = &DAT_143f3eda8;
    iVar10 = 0;
    if ((int)local_68 != 0) {
      puVar11 = puVar5;
      iVar10 = 0;
    }
    while( true ) {
      iVar6 = iVar8 + -1;
      if (iVar8 == 0) {
        iVar6 = 0;
      }
      if (iVar6 <= iVar10) break;
      local_88[0] = *puVar11;
      (**(code **)(*plVar4 + 0x50))(plVar4,local_88,2);
      iVar10 = iVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    if (puVar5 != (undefined2 *)0x0) {
      FMemory::Free(puVar5);
    }
    *(undefined4 *)(lVar3 + 0x20) = 0xb;
    param_1 = local_res8;
  }
  else {
    plVar4 = *(longlong **)(param_2 + 0x10);
    if (plVar4 == (longlong *)0x0) {
      local_res8 = *(longlong **)(*(longlong *)(param_2 + 0x20) + 0x18);
      FName::ToString(&local_res8,local_60);
      FUN_142a54cb0(*param_1,local_60);
      if (local_60[0] != 0) {
        FMemory::Free();
      }
    }
    else {
      local_80[0] = 0;
      local_80[1] = 0;
      (**(code **)(*plVar4 + 0x2d8))(plVar4,local_80,*(undefined8 *)(param_2 + 8),0,0,0,0);
      FUN_142a54cb0(*param_1,local_80);
      if (local_80[0] != 0) {
        FMemory::Free();
      }
    }
  }
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 142a550f0 FUN_142a550f0 body=341 status=ok
// SIG undefined FUN_142a550f0(void)

void FUN_142a550f0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined2 local_res8 [4];
  
  if ((((int)param_1[4] - 2U & 0xfffffff5) != 0) || ((int)param_1[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  }
  FUN_140dd77d0(param_1[1]);
  plVar3 = (longlong *)param_1[1];
  if (0 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    uVar2 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
    do {
      local_res8[0] = 9;
      (**(code **)(*plVar3 + 0x50))(plVar3,local_res8,2);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  FUN_140dd77d0(param_1[1]);
  plVar3 = (longlong *)param_1[1];
  if (0 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    uVar2 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
    do {
      local_res8[0] = 9;
      (**(code **)(*plVar3 + 0x50))(plVar3,local_res8,2);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    plVar3 = (longlong *)param_1[1];
  }
  local_res8[0] = 0x7b;
  (**(code **)(*plVar3 + 0x50))(plVar3,local_res8,2);
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
  iVar1 = (int)param_1[3];
  *(int *)(param_1 + 3) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar1);
  }
  *(undefined4 *)(param_1[2] + (longlong)iVar1 * 4) = 6;
  *(undefined4 *)(param_1 + 4) = 2;
  return;
}



// FUNCTION 142a55250 FUN_142a55250 body=242 status=ok
// SIG undefined FUN_142a55250(void)

void FUN_142a55250(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 local_res8 [4];
  
  iVar2 = *(int *)(param_1 + 0x20);
  if ((((iVar2 != 0) && (iVar2 != 2)) && (iVar2 != 4)) && (iVar2 != 0xc)) {
    local_res8[0] = 0x2c;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),local_res8,2);
    iVar2 = *(int *)(param_1 + 0x20);
  }
  if (iVar2 != 0) {
    FUN_140dd77d0(*(undefined8 *)(param_1 + 8));
    plVar1 = *(longlong **)(param_1 + 8);
    if (0 < (int)*(uint *)(param_1 + 0x24)) {
      uVar3 = (ulonglong)*(uint *)(param_1 + 0x24);
      do {
        local_res8[0] = 9;
        (**(code **)(*plVar1 + 0x50))(plVar1,local_res8,2);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  local_res8[0] = 0x7b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),local_res8,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar2 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar2 + 1;
  if (*(int *)(param_1 + 0x1c) < iVar2 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 4) = 6;
  *(undefined4 *)(param_1 + 0x20) = 2;
  return;
}



// FUNCTION 142a55350 FUN_142a55350 body=2244 status=ok
// SIG undefined FUN_142a55350(void)

void FUN_142a55350(longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  bool bVar11;
  undefined8 local_res10 [2];
  double local_res20;
  longlong local_1d8 [2];
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  longlong local_190 [2];
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
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
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70 [2];
  longlong local_60 [2];
  longlong local_50 [2];
  longlong local_40 [3];
  
  lVar6 = UBoolProperty::GetPrivateStaticClass();
  if (*(longlong *)(param_2 + 0x28) == lVar6) {
    lVar6 = *(longlong *)(param_2 + 0x20);
    uVar9 = *(undefined8 *)(param_1 + 8);
    plVar4 = *(longlong **)(param_1 + 0x10);
    bVar11 = (*(byte *)(lVar6 + 0x73) &
             *(byte *)((longlong)(*(int *)(lVar6 + 0x34) * param_3) +
                       (ulonglong)*(byte *)(lVar6 + 0x71) + (longlong)*(int *)(lVar6 + 0x44) +
                      *(longlong *)(param_2 + 0x18))) != 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      lVar6 = *(longlong *)(param_2 + 0x20);
    }
    if (((lVar6 == 0) || (1 < *(int *)(lVar6 + 0x30))) ||
       (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x20) + 0x10),
       lVar7 = UArrayProperty::GetPrivateStaticClass(), lVar6 == lVar7)) {
      FUN_142a51b30(uVar9,bVar11);
    }
    else {
      plVar5 = *(longlong **)(param_2 + 0x10);
      if (plVar5 == (longlong *)0x0) {
        local_res10[0] = *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x18);
        FName::ToString(local_res10,local_190);
        FUN_142a51970(uVar9,local_190,bVar11);
        if (local_190[0] != 0) {
          FMemory::Free();
        }
      }
      else {
        local_1d8[0] = 0;
        local_1d8[1] = 0;
        (**(code **)(*plVar5 + 0x2d8))(plVar5,local_1d8,*(undefined8 *)(param_2 + 8),0,0,0,0);
        FUN_142a51970(uVar9,local_1d8,bVar11);
        if (local_1d8[0] != 0) {
          FMemory::Free();
        }
      }
    }
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
                    /* WARNING: Could not recover jumptable at 0x000142a554e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 8))(plVar4,1);
          return;
        }
      }
    }
    return;
  }
  lVar6 = UEnumProperty::GetPrivateStaticClass();
  if (*(longlong *)(param_2 + 0x28) == lVar6) {
    lVar6 = *(longlong *)(param_2 + 0x20);
    iVar2 = *(int *)(lVar6 + 0x34);
    plVar4 = *(longlong **)(lVar6 + 0x70);
    uVar9 = *(undefined8 *)(lVar6 + 0x78);
    iVar3 = *(int *)(lVar6 + 0x44);
    local_180 = *(undefined8 *)(param_1 + 8);
    lVar6 = *(longlong *)(param_2 + 0x18);
    local_178 = *(longlong *)(param_1 + 0x10);
    if (local_178 != 0) {
      LOCK();
      *(int *)(local_178 + 8) = *(int *)(local_178 + 8) + 1;
      UNLOCK();
    }
    uVar8 = (**(code **)(*plVar4 + 0x3a8))
                      (plVar4,(longlong)(iVar2 * param_3) + (longlong)iVar3 + lVar6);
    uVar9 = UEnum::GetNameStringByValue(uVar9,local_70,uVar8);
    FUN_142a51450(&local_180,param_2,uVar9);
    if (local_70[0] == 0) {
      return;
    }
    FMemory::Free();
    return;
  }
  lVar6 = UByteProperty::GetPrivateStaticClass();
  if (*(longlong *)(param_2 + 0x28) == lVar6) {
    plVar4 = *(longlong **)(param_2 + 0x20);
    lVar6 = (**(code **)(*plVar4 + 0x380))(plVar4);
    pbVar10 = (byte *)((longlong)(*(int *)((longlong)plVar4 + 0x34) * param_3) +
                       (longlong)*(int *)((longlong)plVar4 + 0x44) + *(longlong *)(param_2 + 0x18));
    if (lVar6 == 0) {
      local_160 = *(undefined8 *)(param_1 + 8);
      local_res20 = (double)*pbVar10;
      local_158 = *(longlong *)(param_1 + 0x10);
      if (local_158 != 0) {
        LOCK();
        *(int *)(local_158 + 8) = *(int *)(local_158 + 8) + 1;
        UNLOCK();
      }
      FUN_142a511b0(&local_160,param_2,&local_res20);
      return;
    }
    local_170 = *(undefined8 *)(param_1 + 8);
    local_168 = *(longlong *)(param_1 + 0x10);
    if (local_168 != 0) {
      LOCK();
      *(int *)(local_168 + 8) = *(int *)(local_168 + 8) + 1;
      UNLOCK();
    }
    uVar9 = UEnum::GetNameStringByValue(plVar4[0xe],local_60,*pbVar10);
    FUN_142a51450(&local_170,param_2,uVar9);
    if (local_60[0] == 0) {
      return;
    }
    FMemory::Free();
    return;
  }
  lVar6 = UDoubleProperty::GetPrivateStaticClass();
  if (*(longlong *)(param_2 + 0x28) == lVar6) {
    iVar2 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x34);
    iVar3 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x44);
    local_150 = *(undefined8 *)(param_1 + 8);
    lVar6 = *(longlong *)(param_2 + 0x18);
    local_148 = *(longlong *)(param_1 + 0x10);
    if (local_148 != 0) {
      LOCK();
      *(int *)(local_148 + 8) = *(int *)(local_148 + 8) + 1;
      UNLOCK();
    }
    FUN_142a511b0(&local_150,param_2,(longlong)(iVar2 * param_3) + (longlong)iVar3 + lVar6);
    return;
  }
  lVar6 = UFloatProperty::GetPrivateStaticClass();
  if (*(longlong *)(param_2 + 0x28) == lVar6) {
    iVar2 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x34);
    iVar3 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x44);
    local_140 = *(undefined8 *)(param_1 + 8);
    lVar6 = *(longlong *)(param_2 + 0x18);
    local_138 = *(longlong *)(param_1 + 0x10);
    if (local_138 != 0) {
      LOCK();
      *(int *)(local_138 + 8) = *(int *)(local_138 + 8) + 1;
      UNLOCK();
    }
    FUN_142a50f10(&local_140,param_2,(longlong)(iVar2 * param_3) + (longlong)iVar3 + lVar6);
    return;
  }
  lVar6 = UIntProperty::GetPrivateStaticClass();
  if (*(longlong *)(param_2 + 0x28) == lVar6) {
    local_130 = *(undefined8 *)(param_1 + 8);
    local_1c8 = (double)*(int *)((longlong)
                                 (*(int *)(*(longlong *)(param_2 + 0x20) + 0x34) * param_3) +
                                 (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x44) +
                                *(longlong *)(param_2 + 0x18));
    local_128 = *(longlong *)(param_1 + 0x10);
    if (local_128 != 0) {
      LOCK();
      *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
      UNLOCK();
    }
    FUN_142a511b0(&local_130,param_2,&local_1c8);
    return;
  }
  lVar6 = UInt8Property::GetPrivateStaticClass();
  if (*(longlong *)(param_2 + 0x28) == lVar6) {
    local_120 = *(undefined8 *)(param_1 + 8);
    local_118 = *(longlong *)(param_1 + 0x10);
    local_1c0 = (double)(int)*(char *)((longlong)
                                       (*(int *)(*(longlong *)(param_2 + 0x20) + 0x34) * param_3) +
                                       (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x44) +
                                      *(longlong *)(param_2 + 0x18));
    if (local_118 != 0) {
      LOCK();
      *(int *)(local_118 + 8) = *(int *)(local_118 + 8) + 1;
      UNLOCK();
    }
    FUN_142a511b0(&local_120,param_2,&local_1c0);
    return;
  }
  lVar6 = UInt16Property::GetPrivateStaticClass();
  if (*(longlong *)(param_2 + 0x28) == lVar6) {
    local_110 = *(undefined8 *)(param_1 + 8);
    local_108 = *(longlong *)(param_1 + 0x10);
    local_1b8 = (double)(int)*(short *)((longlong)
                                        (*(int *)(*(longlong *)(param_2 + 0x20) + 0x34) * param_3) +
                                        (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x44) +
                                       *(longlong *)(param_2 + 0x18));
    if (local_108 != 0) {
      LOCK();
      *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
      UNLOCK();
    }
    FUN_142a511b0(&local_110,param_2,&local_1b8);
    return;
  }
  lVar6 = UInt64Property::GetPrivateStaticClass();
  if (*(longlong *)(param_2 + 0x28) == lVar6) {
    local_1b0 = (double)*(longlong *)
                         ((longlong)(*(int *)(*(longlong *)(param_2 + 0x20) + 0x34) * param_3) +
                          (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x44) +
                         *(longlong *)(param_2 + 0x18));
    local_100 = *(undefined8 *)(param_1 + 8);
    local_f8 = *(longlong *)(param_1 + 0x10);
    if (local_f8 != 0) {
      LOCK();
      *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
      UNLOCK();
    }
    FUN_142a511b0(&local_100,param_2,&local_1b0);
    return;
  }
  lVar6 = UUInt16Property::GetPrivateStaticClass();
  if (*(longlong *)(param_2 + 0x28) == lVar6) {
    local_f0 = *(undefined8 *)(param_1 + 8);
    local_e8 = *(longlong *)(param_1 + 0x10);
    local_1a8 = (double)*(ushort *)
                         ((longlong)(*(int *)(*(longlong *)(param_2 + 0x20) + 0x34) * param_3) +
                          (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x44) +
                         *(longlong *)(param_2 + 0x18));
    if (local_e8 != 0) {
      LOCK();
      *(int *)(local_e8 + 8) = *(int *)(local_e8 + 8) + 1;
      UNLOCK();
    }
    FUN_142a511b0(&local_f0,param_2,&local_1a8);
    return;
  }
  lVar6 = UUInt32Property::GetPrivateStaticClass();
  if (*(longlong *)(param_2 + 0x28) == lVar6) {
    local_e0 = *(undefined8 *)(param_1 + 8);
    local_d8 = *(longlong *)(param_1 + 0x10);
    local_1a0 = (double)*(uint *)((longlong)
                                  (*(int *)(*(longlong *)(param_2 + 0x20) + 0x34) * param_3) +
                                  (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x44) +
                                 *(longlong *)(param_2 + 0x18));
    if (local_d8 != 0) {
      LOCK();
      *(int *)(local_d8 + 8) = *(int *)(local_d8 + 8) + 1;
      UNLOCK();
    }
    FUN_142a511b0(&local_e0,param_2,&local_1a0);
    return;
  }
  lVar6 = UUInt64Property::GetPrivateStaticClass();
  if (*(longlong *)(param_2 + 0x28) == lVar6) {
    lVar6 = *(longlong *)
             ((longlong)(*(int *)(*(longlong *)(param_2 + 0x20) + 0x34) * param_3) +
              (longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x44) +
             *(longlong *)(param_2 + 0x18));
    local_198 = (double)lVar6;
    if (lVar6 < 0) {
      local_198 = local_198 + 1.8446744073709552e+19;
    }
    local_d0 = *(undefined8 *)(param_1 + 8);
    local_c8 = *(longlong *)(param_1 + 0x10);
    if (local_c8 != 0) {
      LOCK();
      *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
      UNLOCK();
    }
    FUN_142a511b0(&local_d0,param_2,&local_198);
    return;
  }
  lVar6 = UNameProperty::GetPrivateStaticClass();
  if (*(longlong *)(param_2 + 0x28) == lVar6) {
    iVar2 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x34);
    iVar3 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x44);
    local_c0 = *(undefined8 *)(param_1 + 8);
    lVar6 = *(longlong *)(param_2 + 0x18);
    local_b8 = *(longlong *)(param_1 + 0x10);
    if (local_b8 != 0) {
      LOCK();
      *(int *)(local_b8 + 8) = *(int *)(local_b8 + 8) + 1;
      UNLOCK();
    }
    uVar9 = FName::ToString((longlong)(iVar2 * param_3) + (longlong)iVar3 + lVar6,local_50);
    FUN_142a51450(&local_c0,param_2,uVar9);
    if (local_50[0] == 0) {
      return;
    }
    FMemory::Free();
    return;
  }
  lVar6 = UStrProperty::GetPrivateStaticClass();
  if (*(longlong *)(param_2 + 0x28) == lVar6) {
    iVar2 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x34);
    iVar3 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x44);
    local_b0 = *(undefined8 *)(param_1 + 8);
    lVar6 = *(longlong *)(param_2 + 0x18);
    local_a8 = *(longlong *)(param_1 + 0x10);
    if (local_a8 != 0) {
      LOCK();
      *(int *)(local_a8 + 8) = *(int *)(local_a8 + 8) + 1;
      UNLOCK();
    }
    FUN_142a51450(&local_b0,param_2,(longlong)(iVar2 * param_3) + (longlong)iVar3 + lVar6);
    return;
  }
  lVar6 = UTextProperty::GetPrivateStaticClass();
  if (*(longlong *)(param_2 + 0x28) != lVar6) {
    lVar6 = UClassProperty::GetPrivateStaticClass();
    if (*(longlong *)(param_2 + 0x28) != lVar6) {
      lVar6 = UObjectProperty::GetPrivateStaticClass();
      if (*(longlong *)(param_2 + 0x28) != lVar6) {
        return;
      }
      local_80 = *(undefined8 *)(param_1 + 8);
      local_78 = *(longlong *)(param_1 + 0x10);
      if (local_78 != 0) {
        LOCK();
        *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
        UNLOCK();
      }
      FUN_142a54e40(&local_80,param_2);
      return;
    }
    iVar2 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x34);
    iVar3 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x44);
    local_90 = *(undefined8 *)(param_1 + 8);
    lVar6 = *(longlong *)(param_2 + 0x18);
    local_88 = *(longlong *)(param_1 + 0x10);
    if (local_88 != 0) {
      LOCK();
      *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
      UNLOCK();
    }
    uVar9 = UObjectBaseUtility::GetPathName
                      (*(undefined8 *)((longlong)(iVar2 * param_3) + (longlong)iVar3 + lVar6),
                       local_40,0);
    FUN_142a51450(&local_90,param_2,uVar9);
    if (local_40[0] == 0) {
      return;
    }
    FMemory::Free();
    return;
  }
  iVar2 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x34);
  iVar3 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x44);
  local_a0 = *(undefined8 *)(param_1 + 8);
  lVar6 = *(longlong *)(param_2 + 0x18);
  local_98 = *(longlong *)(param_1 + 0x10);
  if (local_98 != 0) {
    LOCK();
    *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
    UNLOCK();
  }
  uVar9 = FText::ToString((longlong)(iVar2 * param_3) + (longlong)iVar3 + lVar6);
  FUN_142a51450(&local_a0,param_2,uVar9);
  return;
}



// FUNCTION 142a55c20 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1d8;
    *puVar1 = &PTR_FUN_145363330;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a55c60 FUN_142a55c60 body=53 status=ok
// SIG undefined FUN_142a55c60(void)

void FUN_142a55c60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xf0;
    *puVar1 = &PTR_FUN_145363448;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a55ca0 FUN_142a55ca0 body=53 status=ok
// SIG undefined FUN_142a55ca0(void)

void FUN_142a55ca0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_145363560;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a55ce0 FUN_142a55ce0 body=53 status=ok
// SIG undefined FUN_142a55ce0(void)

void FUN_142a55ce0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &PTR_FUN_145363678;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a55d20 FUN_142a55d20 body=53 status=ok
// SIG undefined FUN_142a55d20(void)

void FUN_142a55d20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_145363790;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 142a55d60 FUN_142a55d60 body=53 status=ok
// SIG undefined FUN_142a55d60(void)

void FUN_142a55d60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_1453638a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142a55da0 FUN_142a55da0 body=47 status=ok
// SIG undefined FUN_142a55da0(void)

longlong FUN_142a55da0(void)

{
  if (DAT_146b29978 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146b29978,&PTR_s__Script_Serialization_145363248);
  }
  return DAT_146b29978;
}



// FUNCTION 142a55dd0 Emplace<TTuple<int,FString>_const_&> body=411 status=ok
// SIG undefined Emplace<TTuple<int,FString>_const_&>(void)

int * TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
      Emplace<TTuple<int,FString>_const_&>
                (longlong *param_1,int *param_2,uint *param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  void *_Dst;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int local_28 [2];
  uint *local_20;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  *param_2 = local_28[0];
  *local_20 = *param_3;
  FString::FString(local_20 + 2,param_3 + 2);
  local_20[6] = 0xffffffff;
  bVar6 = false;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    if (iVar5 != 0) {
      plVar2 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar2 = param_1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_20) * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)((longlong)iVar3 * 0x20 + *param_1) == *local_20) goto LAB_142a55e8e;
          iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *param_1);
        } while (iVar3 != -1);
      }
    }
    iVar3 = -1;
LAB_142a55e8e:
    bVar6 = iVar3 != -1;
    if (bVar6) {
      _Dst = (void *)((longlong)iVar3 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_20,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar3;
      goto LAB_142a55f40;
    }
  }
  cVar1 = TSet<TTuple<FPolygonID,FOctreeElementId>,TDefaultMapHashableKeyFuncs<FPolygonID,FOctreeElementId,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar5,0);
  if (cVar1 == '\0') {
    uVar4 = (int)param_1[9] - 1U & *local_20;
    local_20[7] = uVar4;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    local_20[6] = *(uint *)((longlong)plVar2 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         *param_2;
  }
LAB_142a55f40:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 142a55f70 Emplace<TTuple<FString,FVector>_const_&> body=379 status=ok
// SIG undefined Emplace<TTuple<FString,FVector>_const_&>(void)

int * TSet<TTuple<FString,FVector>,TDefaultMapHashableKeyFuncs<FString,FVector,0>,FDefaultSetAllocator>
      ::Emplace<TTuple<FString,FVector>_const_&>
                (longlong *param_1,int *param_2,longlong param_3,undefined1 *param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  bool bVar7;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *param_2 = local_38[0];
  FString::FString(local_30,param_3);
  bVar7 = false;
  local_30[2] = *(undefined8 *)(param_3 + 0x10);
  *(undefined4 *)(local_30 + 3) = *(undefined4 *)(param_3 + 0x18);
  *(undefined4 *)(local_30 + 4) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_30);
    bVar7 = local_res8[0] != -1;
    if (bVar7) {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + (longlong)local_res8[0] * 0x28) != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(lVar2 + (longlong)local_res8[0] * 0x28),local_30,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_142a560c6;
    }
  }
  cVar3 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar3 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*local_30;
    }
    uVar4 = FUN_140438070(puVar6);
    uVar4 = (int)param_1[9] - 1U & uVar4;
    *(uint *)((longlong)local_30 + 0x24) = uVar4;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 4) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) = iVar1
    ;
  }
LAB_142a560c6:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 142a560f0 Emplace<TPairInitializer<unsigned_int_&,FString_&&>_> body=440 status=ok
// SIG undefined Emplace<TPairInitializer<unsigned_int_&,FString_&&>_>(void)

int * TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_&,FString_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_28 [2];
  uint *local_20;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  puVar1 = (undefined8 *)param_3[1];
  bVar7 = false;
  *param_2 = local_28[0];
  *local_20 = *(uint *)*param_3;
  local_20[2] = 0;
  local_20[3] = 0;
  *(undefined8 *)(local_20 + 2) = *puVar1;
  *puVar1 = 0;
  local_20[4] = *(uint *)(puVar1 + 1);
  local_20[5] = *(uint *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_20[6] = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_20) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)((longlong)iVar4 * 0x20 + *param_1) == *local_20) goto LAB_142a561cb;
          iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *param_1);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_142a561cb:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      _Dst = (void *)((longlong)iVar4 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_20,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar4;
      goto LAB_142a5627d;
    }
  }
  cVar2 = TSet<TTuple<FPolygonID,FOctreeElementId>,TDefaultMapHashableKeyFuncs<FPolygonID,FOctreeElementId,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)param_1[9] - 1U & *local_20;
    local_20[7] = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    local_20[6] = *(uint *)((longlong)plVar3 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_142a5627d:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 142a562b0 Emplace<TPairInitializer<FString_&&,FVector_&&>_> body=388 status=ok
// SIG undefined Emplace<TPairInitializer<FString_&&,FVector_&&>_>(void)

int * TSet<TTuple<FString,FVector>,TDefaultMapHashableKeyFuncs<FString,FVector,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FVector_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  bool bVar9;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  bVar9 = false;
  *param_2 = local_38[0];
  *local_30 = 0;
  *local_30 = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(local_30 + 1) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)local_30 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  local_30[2] = *puVar3;
  *(undefined4 *)(local_30 + 3) = *(undefined4 *)(puVar3 + 1);
  *(undefined4 *)(local_30 + 4) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_30);
    bVar9 = local_res8[0] != -1;
    if (bVar9) {
      lVar4 = *param_1;
      if (*(longlong *)(lVar4 + (longlong)local_res8[0] * 0x28) != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(lVar4 + (longlong)local_res8[0] * 0x28),local_30,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_142a56411;
    }
  }
  cVar5 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar5 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*local_30;
    }
    uVar6 = FUN_140438070(puVar8);
    uVar6 = (int)param_1[9] - 1U & uVar6;
    *(uint *)((longlong)local_30 + 0x24) = uVar6;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 4) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) = iVar1
    ;
  }
LAB_142a56411:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 142a56440 FStructSerializerArrayTestStruct body=393 status=ok
// SIG undefined FStructSerializerArrayTestStruct(void)

longlong * FStructSerializerArrayTestStruct::FStructSerializerArrayTestStruct(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = 0xffffffff;
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = 0;
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = 1;
  *(undefined4 *)(param_1 + 2) = 0x2a;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 4) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  iVar1 = (int)param_1[7];
  *(int *)(param_1 + 7) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x3c) < iVar1 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 6,iVar1);
  }
  lVar2 = param_1[6];
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = 0x400000003f800000;
  *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = 0x40400000;
  iVar1 = (int)param_1[7];
  *(int *)(param_1 + 7) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x3c) < iVar1 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 6,iVar1);
  }
  lVar2 = param_1[6];
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = 0xc0000000bf800000;
  *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = 0xc0400000;
  return param_1;
}



// FUNCTION 142a565d0 FStructSerializerBuiltinTestStruct body=244 status=ok
// SIG undefined FStructSerializerBuiltinTestStruct(void)

longlong FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct(longlong param_1)

{
  longlong local_18 [2];
  
  FGuid::NewGuid();
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x18,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (*(undefined8 *)(param_1 + 0x18),0xc,"Test String",0xc,0x3f);
  *(undefined4 *)(param_1 + 0x28) = 0x45800000;
  *(undefined4 *)(param_1 + 0x2c) = 0x46000000;
  *(undefined4 *)(param_1 + 0x30) = 0x46800000;
  local_18[0] = 0;
  local_18[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],10,"Test Text",10,0x3f);
  FText::FromString(param_1 + 0x38,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x54) = 0x40000000;
  *(undefined4 *)(param_1 + 0x58) = 0x40400000;
  return param_1;
}



// FUNCTION 142a566d0 FStructSerializerMapTestStruct body=1286 status=ok
// SIG undefined FStructSerializerMapTestStruct(void)

undefined8 * FStructSerializerMapTestStruct::FStructSerializerMapTestStruct(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  longlong local_48;
  ulonglong local_40;
  undefined4 *local_38;
  longlong *local_30;
  undefined4 **local_28;
  undefined4 **local_20;
  
  local_40 = 4;
  *param_1 = 0;
  puVar1 = param_1 + 0x14;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *puVar1 = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  local_48 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,&DAT_145363290,8);
  local_38 = local_res8;
  local_res8[0] = 1;
  local_30 = &local_48;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&,FString_&&>_>(param_1,local_res10,&local_38,0);
  if (local_48 != 0) {
    FMemory::Free();
  }
  local_48 = 0;
  local_40 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,&DAT_145363298,8);
  local_38 = local_res8;
  local_res8[0] = 2;
  local_30 = &local_48;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&,FString_&&>_>(param_1,local_res10,&local_38,0);
  if (local_48 != 0) {
    FMemory::Free();
  }
  local_48 = 0;
  local_40 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"Three",0xc);
  local_38 = local_res8;
  local_res8[0] = 3;
  local_30 = &local_48;
  TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&,FString_&&>_>(param_1,local_res10,&local_38,0);
  if (local_48 != 0) {
    FMemory::Free();
  }
  local_38 = (undefined4 *)0x0;
  local_30 = (longlong *)0x4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,&DAT_144cc1130,8);
  local_48 = 0;
  local_40 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"StrAll",0xe);
  local_28 = (undefined4 **)&local_48;
  local_20 = &local_38;
  FUN_140497620(param_1 + 10,local_res8,&local_28,0);
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_38 != (undefined4 *)0x0) {
    FMemory::Free();
  }
  local_48 = 0;
  local_40 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"Your",10);
  local_38 = (undefined4 *)0x0;
  local_30 = (longlong *)0x8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"StrYour",0x10);
  local_28 = &local_38;
  local_20 = (undefined4 **)&local_48;
  FUN_140497620(param_1 + 10,local_res8,&local_28,0);
  if (local_38 != (undefined4 *)0x0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  local_48 = 0;
  local_40 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"Base",10);
  local_38 = (undefined4 *)0x0;
  local_30 = (longlong *)0x8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"StrBase",0x10);
  local_28 = &local_38;
  local_20 = (undefined4 **)&local_48;
  FUN_140497620(param_1 + 10,local_res8,&local_28,0);
  if (local_38 != (undefined4 *)0x0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  local_38 = (undefined4 *)0x0;
  local_30 = (longlong *)0x5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"V000",10);
  local_28 = &local_38;
  local_48 = 0;
  local_20 = (undefined4 **)&local_48;
  local_40 = local_40 & 0xffffffff00000000;
  TSet<TTuple<FString,FVector>,TDefaultMapHashableKeyFuncs<FString,FVector,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FVector_&&>_>(puVar1,local_res8,&local_28,0);
  if (local_38 != (undefined4 *)0x0) {
    FMemory::Free();
  }
  local_38 = (undefined4 *)0x0;
  local_30 = (longlong *)0x5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"V123",10);
  local_28 = &local_38;
  local_20 = (undefined4 **)&local_48;
  local_40 = CONCAT44(local_40._4_4_,0x40400000);
  local_48 = 0x400000003f800000;
  TSet<TTuple<FString,FVector>,TDefaultMapHashableKeyFuncs<FString,FVector,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FVector_&&>_>(puVar1,local_res8,&local_28,0);
  if (local_38 != (undefined4 *)0x0) {
    FMemory::Free();
  }
  local_38 = (undefined4 *)0x0;
  local_30 = (longlong *)0x5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"V666",10);
  local_28 = &local_38;
  local_20 = (undefined4 **)&local_48;
  local_48 = 0x40c0000040c00000;
  local_40 = CONCAT44(local_40._4_4_,0x40c00000);
  TSet<TTuple<FString,FVector>,TDefaultMapHashableKeyFuncs<FString,FVector,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FVector_&&>_>(puVar1,local_res8,&local_28,0);
  if (local_38 != (undefined4 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142a56be0 FStructSerializerTestStruct body=162 status=ok
// SIG undefined FStructSerializerTestStruct(void)

undefined1 * FStructSerializerTestStruct::FStructSerializerTestStruct(undefined1 *param_1)

{
  *param_1 = 0x81;
  *(undefined2 *)(param_1 + 2) = 0x8001;
  *(undefined4 *)(param_1 + 4) = 0x80000001;
  *(undefined8 *)(param_1 + 8) = 0xffffac1d29dc725d;
  *(undefined2 *)(param_1 + 0x12) = 0xffff;
  *(undefined8 *)(param_1 + 0x18) = 0x10c6f7a0b5ed;
  *(undefined8 *)(param_1 + 0x28) = 0x3ff0800000000000;
  param_1[0x10] = 0xff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0x40840000;
  *(undefined2 *)(param_1 + 0x30) = 0x100;
  *(undefined4 *)(param_1 + 0x34) = 1;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct(param_1 + 0x48);
  FStructSerializerArrayTestStruct::FStructSerializerArrayTestStruct(param_1 + 0xa8);
  FStructSerializerMapTestStruct::FStructSerializerMapTestStruct(param_1 + 0xe8);
  return param_1;
}



// FUNCTION 142a56c90 ~FStructSerializerBuiltinTestStruct body=115 status=ok
// SIG undefined ~FStructSerializerBuiltinTestStruct(void)

void FStructSerializerBuiltinTestStruct::~FStructSerializerBuiltinTestStruct(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 142a56d10 ~FStructSerializerMapTestStruct body=223 status=ok
// SIG undefined ~FStructSerializerMapTestStruct(void)

void FStructSerializerMapTestStruct::~FStructSerializerMapTestStruct(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FVector>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x14,0);
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1,0);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142a56df0 operator= body=465 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::operator=
          (longlong *param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  uint local_38;
  undefined4 uStack_34;
  longlong *local_30;
  uint uStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = TSet<TTuple<FPolygonID,FOctreeElementId>,TDefaultMapHashableKeyFuncs<FPolygonID,FOctreeElementId,0>,FDefaultSetAllocator>
            ::ConditionalRehash(param_1,iVar9);
    uVar7 = 0;
    if ((cVar3 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
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
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    local_48._4_4_ = 0;
    uStack_40 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_20;
      }
      uVar1 = *puVar11;
      uVar8 = uVar7;
      while (uVar1 == 0) {
        iVar4 = (int)uVar8;
        uStack_40 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_40;
        local_58 = iVar4 + 1;
        uVar8 = (ulonglong)local_58;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_142a56f2d;
        uVar1 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_54 = -uVar1 & uVar1;
      iVar4 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_48._4_4_ = (uStack_40 - iVar4) + 0x1f;
      if (iVar9 < local_48._4_4_) {
LAB_142a56f2d:
        local_48._4_4_ = iVar9;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    uStack_10 = uStack_40;
    uStack_c = iStack_3c;
    uStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar4 = local_48._4_4_;
    uStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar2 = local_48._4_4_ < iVar9;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar4;
    if (bVar2) {
      do {
        Emplace<TTuple<int,FString>_const_&>
                  (param_1,local_res8,(longlong)iStack_3c * 0x20 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 142a56fd0 operator= body=469 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FString,FVector>,TDefaultMapHashableKeyFuncs<FString,FVector,0>,FDefaultSetAllocator>::
operator=(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  uint local_38;
  undefined4 uStack_34;
  longlong *local_30;
  uint uStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    TSparseArray<TSetElement<TTuple<FString,FVector>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
            ::ConditionalRehash(param_1,iVar9);
    uVar7 = 0;
    if ((cVar3 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
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
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    local_48._4_4_ = 0;
    uStack_40 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_20;
      }
      uVar1 = *puVar11;
      uVar8 = uVar7;
      while (uVar1 == 0) {
        iVar4 = (int)uVar8;
        uStack_40 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_40;
        local_58 = iVar4 + 1;
        uVar8 = (ulonglong)local_58;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_142a5710d;
        uVar1 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_54 = -uVar1 & uVar1;
      iVar4 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_48._4_4_ = (uStack_40 - iVar4) + 0x1f;
      if (iVar9 < local_48._4_4_) {
LAB_142a5710d:
        local_48._4_4_ = iVar9;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    uStack_10 = uStack_40;
    uStack_c = iStack_3c;
    uStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar4 = local_48._4_4_;
    uStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar2 = local_48._4_4_ < iVar9;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar4;
    if (bVar2) {
      do {
        Emplace<TTuple<FString,FVector>_const_&>
                  (param_1,local_res8,*param_2 + (longlong)iStack_3c * 0x28,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 142a571b0 operator= body=232 status=ok
// SIG undefined operator=(void)

undefined8 * FStructSerializerArrayTestStruct::operator=(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  
  if (param_1 != param_2) {
    iVar2 = *(int *)(param_2 + 1);
    pvVar3 = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(param_1,iVar2);
      ::_guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar3,(longlong)iVar2 << 2);
    }
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  puVar1 = param_1 + 6;
  if (puVar1 != param_2 + 6) {
    iVar2 = *(int *)(param_2 + 7);
    pvVar3 = (void *)param_2[6];
    *(int *)(param_1 + 7) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0x3c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    }
    else {
      TArray<FVector,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar3,(longlong)iVar2 * 0xc);
    }
  }
  return param_1;
}



// FUNCTION 142a572a0 AddUninitialized body=216 status=ok
// SIG undefined AddUninitialized(void)

int * TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::AddUninitialized(longlong *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar4 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar4 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar4 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 142a57380 AddUninitialized body=214 status=ok
// SIG undefined AddUninitialized(void)

int * TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::AddUninitialized(longlong *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar4 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)(*param_1 + 4 + (longlong)iVar4 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = *param_1 + (longlong)iVar4 * 0x28;
  return param_2;
}



// FUNCTION 142a57460 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
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
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}


