// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141753240 Empty body=266 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar2 = (longlong)local_1c * 0x60 + *local_38;
      *(undefined4 *)(lVar2 + 0x50) = 0;
      if (*(longlong *)(lVar2 + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(lVar2 + 8,0);
      if (*(longlong *)(lVar2 + 0x28) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar2 + 8) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar1 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  return;
}



// FUNCTION 141753350 EnsureNotRetrievingVTablePtr body=78 status=ok
// SIG undefined EnsureNotRetrievingVTablePtr(void)

void UObject::EnsureNotRetrievingVTablePtr(void)

{
  if (DAT_1468c21ac != '\0') {
    LowLevelFatalErrorHandler
              ("Unknown",0x61,
               L"We are currently retrieving VTable ptr. Please use FVTableHelper constructor instead."
              );
    FDebug::AssertFailed
              (&DAT_144d11cf2,"Unknown",0x61,
               L"We are currently retrieving VTable ptr. Please use FVTableHelper constructor instead."
              );
    return;
  }
  return;
}



// FUNCTION 1417533a0 FUN_1417533a0 body=1028 status=ok
// SIG undefined FUN_1417533a0(void)

undefined8 FUN_1417533a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  char cVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  undefined2 *puVar15;
  uint uVar16;
  uint *puVar17;
  undefined2 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 local_res18;
  undefined8 local_res20;
  int local_d0;
  uint uStack_cc;
  uint uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  longlong *local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint uStack_90;
  uint uStack_8c;
  undefined8 uStack_88;
  ulonglong local_80;
  longlong *local_78;
  longlong *local_70;
  int iStack_68;
  uint uStack_64;
  uint *local_60;
  uint uStack_58;
  uint uStack_54;
  undefined8 local_50;
  longlong local_48 [2];
  ulonglong uVar14;
  
  local_res18 = param_3;
  local_res20 = param_4;
  cVar8 = FParse::Command(&local_res18,L"LinkerLoadList",1);
  if (cVar8 == '\0') {
    cVar8 = FParse::Command(&local_res18,L"LINKERS",1);
    if (cVar8 == '\0') {
      return 0;
    }
    FOutputDevice::LogfImpl(param_4,L"Linkers:");
    uStack_cc = 1;
    local_a8 = (longlong *)(param_1 + 8);
    uVar13 = *(uint *)(param_1 + 0x30);
    puVar1 = (uint *)(param_1 + 0x18);
    local_d0 = 0;
    uStack_bc = 0;
    iStack_b8 = 0;
    if (uVar13 != 0) {
      puVar17 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar17 = puVar1;
      }
      uVar2 = *puVar17;
      iStack_b8 = 0;
      local_d0 = 0;
      while (uVar2 == 0) {
        lVar11 = (longlong)local_d0;
        iStack_b8 = iStack_b8 + 0x20;
        iVar10 = local_d0 + 1;
        bVar7 = (int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d0;
        local_d0 = iVar10;
        if (bVar7) goto LAB_1417534dc;
        uVar2 = puVar17[lVar11 + 1];
      }
      uStack_cc = -uVar2 & uVar2;
      iVar10 = 0x1f;
      if (uStack_cc != 0) {
        for (; uStack_cc >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uStack_cc == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      uStack_bc = (iStack_b8 - iVar10) + 0x1f;
      if ((int)uVar13 < (int)uStack_bc) {
LAB_1417534dc:
        uStack_bc = uVar13;
      }
    }
    uVar2 = *(uint *)(param_1 + 0x30);
    uStack_a0 = CONCAT44(uStack_cc,local_d0);
    uStack_58 = 0xffffffff;
    uStack_54 = uStack_bc;
    uStack_88 = CONCAT44(uStack_b4,iStack_b8);
    uVar12 = -1 << ((byte)uVar2 & 0x1f);
    uVar16 = uVar2 & 0xffffffe0;
    uStack_98 = CONCAT44(uVar2,uVar12);
    iStack_68 = local_d0;
    uStack_64 = uStack_cc;
    if (uVar2 != uVar13) {
      puVar17 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar17 = puVar1;
      }
      uVar12 = puVar17[(int)uVar2 >> 5] & uVar12;
      iVar10 = (int)uVar2 >> 5;
      while (uVar12 == 0) {
        uVar16 = uVar16 + 0x20;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
        goto LAB_1417535a2;
        uVar12 = puVar17[(longlong)iVar10 + 1];
        uStack_98 = 0xffffffff;
        iVar10 = iVar10 + 1;
      }
      uVar12 = -uVar12 & uVar12;
      iVar10 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uVar12 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      iVar10 = (uVar16 - iVar10) + 0x1f;
      uStack_98 = CONCAT44(iVar10,(undefined4)uStack_98);
      if ((int)uVar13 < iVar10) {
LAB_1417535a2:
        uStack_98 = CONCAT44(uVar13,(undefined4)uStack_98);
      }
    }
    local_80 = uStack_98 >> 0x20;
    local_78 = local_a8;
    local_60 = puVar1;
    local_50 = uStack_88;
    local_70 = local_a8;
    uStack_90 = uStack_58;
    uStack_8c = uStack_54;
    while( true ) {
      uVar14 = 0;
      if (((uStack_54 == (uint)local_80) && (local_60 == puVar1)) && (local_70 == local_78)) break;
      lVar11 = *(longlong *)(*local_70 + (longlong)(int)uStack_54 * 0x10);
      iVar10 = *(int *)(lVar11 + 0x1c8);
      uVar19 = uVar14;
      uVar20 = uVar14;
      if (0 < iVar10) {
        do {
          if (*(longlong *)(*(longlong *)(lVar11 + 0x1c0) + uVar20) != 0) {
            puVar9 = (undefined8 *)
                     FName::ToString(*(longlong *)(lVar11 + 0x1c0) + (longlong)(int)uVar14 * 8,
                                     local_48);
            if (*(int *)(puVar9 + 1) == 0) {
              puVar18 = &DAT_143f3eda8;
            }
            else {
              puVar18 = (undefined2 *)*puVar9;
            }
            iVar10 = FNameEntry::GetSize(puVar18);
            uVar19 = (ulonglong)(uint)((int)uVar19 + iVar10);
            if (local_48[0] != 0) {
              FMemory::Free();
            }
          }
          iVar10 = *(int *)(lVar11 + 0x1c8);
          uVar13 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
          uVar20 = uVar20 + 8;
        } while ((int)uVar13 < iVar10);
      }
      uVar3 = *(undefined4 *)(lVar11 + 0x140);
      iVar4 = *(int *)(lVar11 + 0x20);
      iVar5 = *(int *)(lVar11 + 0x10);
      iVar6 = *(int *)(lVar11 + 0x1d8);
      puVar9 = (undefined8 *)
               UObjectBaseUtility::GetFullName(*(undefined8 *)(lVar11 + 0xa0),&local_a8,0);
      if (*(int *)(puVar9 + 1) == 0) {
        puVar18 = &DAT_143f3eda8;
      }
      else {
        puVar18 = (undefined2 *)*puVar9;
      }
      if (*(int *)(lVar11 + 0x1e8) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = *(undefined2 **)(lVar11 + 0x1e0);
      }
      FOutputDevice::LogfImpl
                (local_res20,
                 L"%s (%s): Names=%i (%iK/%iK) Text=%i (%iK) Imports=%i (%iK) Exports=%i (%iK) Gen=%i Bulk=%i"
                 ,puVar15,puVar18,iVar10,((longlong)iVar10 & 0x1fffffffffffffffU) >> 7,
                 (int)((int)uVar19 + ((int)uVar19 >> 0x1f & 0x3ffU)) >> 10,iVar6,
                 ((longlong)iVar6 & 0x1ffffffffffffffU) >> 3,iVar5,
                 (ulonglong)((longlong)iVar5 * 0x38) >> 10,iVar4,
                 (ulonglong)((longlong)iVar4 * 0x88) >> 10,uVar3,0);
      if (local_a8 != (longlong *)0x0) {
        FMemory::Free();
      }
      uStack_58 = uStack_58 & ~uStack_64;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_68);
    }
  }
  return 1;
}



// FUNCTION 1417537b0 FUN_1417537b0 body=621 status=ok
// SIG undefined FUN_1417537b0(void)

undefined8
FUN_1417537b0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  bool bVar9;
  void *local_38;
  int local_30;
  longlong local_28 [2];
  longlong local_18 [2];
  
  if ((param_5 >> 0x1c & 1) == 0) {
    if ((param_5 & 2) == 0) {
      puVar6 = (undefined8 *)FPrimaryAssetId::ToString(param_1,local_18);
      pvVar3 = (void *)*puVar6;
      iVar7 = *(int *)(puVar6 + 1) + -1;
      if (*(int *)(puVar6 + 1) == 0) {
        iVar7 = 0;
      }
      if (iVar7 != 0) {
        iVar2 = (int)param_2[1];
        iVar4 = (uint)(iVar2 == 0) + iVar7 + iVar2;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
      }
    }
    else {
      uVar5 = FPrimaryAssetId::ToString(param_1,local_28);
      puVar6 = (undefined8 *)FString::ReplaceCharWithEscapedChar(uVar5,local_18,0);
      if (*(int *)(puVar6 + 1) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)*puVar6;
      }
      FString::PrintfImpl(&local_38,L"\"%s\"",puVar8);
      pvVar3 = local_38;
      iVar7 = 0;
      if (local_30 != 0) {
        iVar7 = local_30 + -1;
      }
      if (iVar7 != 0) {
        iVar2 = (int)param_2[1];
        iVar4 = (uint)(iVar2 == 0) + iVar2 + iVar7;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
      }
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
      bVar9 = local_18[0] != 0;
      local_18[0] = local_28[0];
      if (bVar9) {
        FMemory::Free();
        local_18[0] = local_28[0];
      }
    }
  }
  else {
    uVar5 = FPrimaryAssetId::ToString(param_1,local_18);
    puVar6 = (undefined8 *)FString::ReplaceCharWithEscapedChar(uVar5,local_28,0);
    if (*(int *)(puVar6 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar6;
    }
    FString::PrintfImpl(&local_38,L"FPrimaryAssetId(TEXT(\"%s\"))",puVar8);
    pvVar3 = local_38;
    iVar7 = 0;
    if (local_30 != 0) {
      iVar7 = local_30 + -1;
    }
    if (iVar7 != 0) {
      iVar2 = (int)param_2[1];
      iVar4 = (uint)(iVar2 == 0) + iVar2 + iVar7;
      *(int *)(param_2 + 1) = iVar4;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      pvVar1 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar7 * 2);
      *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
    }
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 141753a20 FUN_141753a20 body=500 status=ok
// SIG undefined FUN_141753a20(void)

undefined8
FUN_141753a20(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined8 *puVar5;
  wchar_t *pwVar6;
  int iVar7;
  undefined2 *puVar8;
  void *local_38;
  int local_30;
  void *local_28 [2];
  longlong local_18 [2];
  
  if ((param_5 >> 0x1c & 1) == 0) {
    if ((param_5 & 2) == 0) {
      FName::ToString(param_1,&local_38);
      pvVar3 = local_38;
      iVar7 = 0;
      if (local_30 != 0) {
        iVar7 = local_30 + -1;
      }
      if (iVar7 != 0) {
        iVar2 = (int)param_2[1];
        iVar4 = (uint)(iVar2 == 0) + iVar2 + iVar7;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
      }
      goto joined_r0x000141753b12;
    }
    FName::ToString(param_1,local_28);
    puVar5 = (undefined8 *)FString::ReplaceCharWithEscapedChar(local_28,local_18,0);
    if (*(int *)(puVar5 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar5;
    }
    pwVar6 = L"\"%s\"";
  }
  else {
    FName::ToString(param_1,local_28);
    puVar5 = (undefined8 *)FString::ReplaceCharWithEscapedChar(local_28,local_18,0);
    if (*(int *)(puVar5 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
      pwVar6 = L"FPrimaryAssetType(TEXT(\"%s\"))";
    }
    else {
      puVar8 = (undefined2 *)*puVar5;
      pwVar6 = L"FPrimaryAssetType(TEXT(\"%s\"))";
    }
  }
  FString::PrintfImpl(&local_38,pwVar6,puVar8);
  pvVar3 = local_38;
  iVar7 = 0;
  if (local_30 != 0) {
    iVar7 = local_30 + -1;
  }
  if (iVar7 != 0) {
    iVar2 = (int)param_2[1];
    iVar4 = (uint)(iVar2 == 0) + iVar2 + iVar7;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar7 * 2);
    *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  local_38 = local_28[0];
  if (local_18[0] != 0) {
    FMemory::Free();
    local_38 = local_28[0];
  }
joined_r0x000141753b12:
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return 1;
}



// FUNCTION 141753c20 FUN_141753c20 body=1224 status=ok
// SIG undefined FUN_141753c20(void)

void FUN_141753c20(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined8 param_5,ulonglong param_6,undefined8 param_7)

{
  void *pvVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  uint uVar14;
  int iVar16;
  longlong *plVar17;
  int local_78;
  int local_74;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *puVar13;
  undefined2 *puVar15;
  
  puVar8 = (undefined2 *)0x0;
  iVar16 = 0;
  if ((param_6 & 0x10000000) != 0) {
    local_58 = (undefined2 *)0x0;
    local_50 = 0;
    (**(code **)(*param_1 + 0x298))(param_1,&local_48,&local_58,0x80);
    puVar8 = &DAT_143f3eda8;
    if ((int)local_50 != 0) {
      puVar8 = local_58;
    }
    puVar9 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar9 = local_48;
    }
    FString::PrintfImpl(&local_68,L"%s%s()",puVar9,puVar8);
    puVar8 = local_68;
    if (local_60 != 0) {
      iVar16 = local_60 + -1;
    }
    if (iVar16 != 0) {
      iVar6 = (int)param_2[1];
      iVar3 = (uint)(iVar6 == 0) + iVar6 + iVar16;
      *(int *)(param_2 + 1) = iVar3;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
      }
      pvVar1 = (void *)(*param_2 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,puVar8,(longlong)iVar16 * 2);
      *(undefined2 *)((longlong)iVar16 * 2 + (longlong)pvVar1) = 0;
    }
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free(local_68);
    }
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    puVar9 = local_58;
    if (local_58 == (undefined2 *)0x0) {
      return;
    }
    goto LAB_1417540d3;
  }
  plVar17 = (longlong *)param_1[0xe];
  puVar9 = (undefined2 *)0x0;
  local_68 = (undefined2 *)0x0;
  iVar6 = *(int *)((longlong)plVar17 + 0x34);
  if (plVar17 == (longlong *)0x0) {
LAB_141753e07:
    plVar17 = (longlong *)0x0;
  }
  else {
    lVar5 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar17[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar17[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_141753e07;
    iVar3 = *(int *)(plVar17[0xe] + 0x44);
    puVar9 = (undefined2 *)
             FMemory::Malloc((longlong)
                             (int)(*(int *)(plVar17[0xe] + 0x40) + -1 + iVar3 & ~(iVar3 - 1U)));
    local_68 = puVar9;
    if ((*(uint *)(plVar17 + 7) >> 9 & 1) == 0) {
      (**(code **)(*plVar17 + 0x330))(plVar17,puVar9);
    }
    else {
      _guard_xfg_dispatch_icall_nop
                (puVar9,0,(longlong)(*(int *)((longlong)plVar17 + 0x34) * (int)plVar17[6]));
    }
  }
  local_58 = (undefined2 *)(param_6 >> 0x19 & 0xffffffffffffff01);
  if (0 < (int)param_3[1]) {
    local_74 = 0;
    local_78 = 0;
    puVar13 = puVar8;
    puVar15 = puVar8;
    do {
      uVar12 = (int)puVar13 + 1;
      puVar13 = (undefined2 *)(ulonglong)uVar12;
      if ((char)local_58 == '\0') {
        iVar3 = (int)param_2[1];
        if (uVar12 == 1) {
          iVar7 = iVar3 + -1;
          if (iVar3 < 1) {
            iVar7 = iVar16;
          }
          iVar3 = (iVar3 < 1) + 1 + iVar3;
          *(int *)(param_2 + 1) = iVar3;
          if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
          }
          *(undefined2 *)(*param_2 + (longlong)iVar7 * 2) = 0x28;
          *(undefined2 *)(*param_2 + 2 + (longlong)iVar7 * 2) = 0;
        }
        else {
          iVar7 = iVar3 + -1;
          if (iVar3 < 1) {
            iVar7 = iVar16;
          }
          iVar3 = (iVar3 < 1) + 1 + iVar3;
          *(int *)(param_2 + 1) = iVar3;
          if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
          }
          *(undefined2 *)(*param_2 + (longlong)iVar7 * 2) = 0x2c;
          *(undefined2 *)(*param_2 + 2 + (longlong)iVar7 * 2) = 0;
        }
      }
      else {
        if (1 < (int)uVar12) {
          iVar3 = (int)param_2[1];
          iVar7 = iVar3 + -1;
          if (iVar3 < 1) {
            iVar7 = iVar16;
          }
          iVar3 = (iVar3 < 1) + 1 + iVar3;
          *(int *)(param_2 + 1) = iVar3;
          if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
          }
          *(undefined2 *)(*param_2 + (longlong)iVar7 * 2) = 10;
          *(undefined2 *)(*param_2 + 2 + (longlong)iVar7 * 2) = 0;
        }
        FString::PrintfImpl(&local_48,L"[%i] ",puVar15);
        puVar9 = local_48;
        iVar3 = iVar16;
        if (local_40 != 0) {
          iVar3 = local_40 + -1;
        }
        if (iVar3 != 0) {
          iVar7 = (int)param_2[1];
          iVar4 = (uint)(iVar7 == 0) + iVar7 + iVar3;
          *(int *)(param_2 + 1) = iVar4;
          if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar7);
          }
          pvVar1 = (void *)(*param_2 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,puVar9,(longlong)iVar3 * 2);
          *(undefined2 *)((longlong)pvVar1 + (longlong)iVar3 * 2) = 0;
        }
        if (local_48 != (undefined2 *)0x0) {
          FMemory::Free(local_48);
        }
      }
      puVar9 = local_68;
      puVar10 = puVar8;
      if ((int)param_3[1] != 0) {
        puVar10 = (undefined2 *)((longlong)local_78 + *param_3);
      }
      puVar11 = local_68;
      if ((((plVar17 == (longlong *)0x0) && (puVar11 = puVar8, param_4 != (longlong *)0x0)) &&
          ((int)puVar15 < (int)param_4[1])) && ((int)param_4[1] != 0)) {
        puVar11 = (undefined2 *)((longlong)local_74 + *param_4);
      }
      (**(code **)(*(longlong *)param_1[0xe] + 0x2d8))
                ((longlong *)param_1[0xe],param_2,puVar10,puVar11,param_5,param_6 | 2,param_7);
      uVar14 = (int)puVar15 + 1;
      puVar15 = (undefined2 *)(ulonglong)uVar14;
      local_78 = local_78 + iVar6;
      local_74 = local_74 + iVar6;
    } while ((int)uVar14 < (int)param_3[1]);
    if ((0 < (int)uVar12) && ((char)local_58 == '\0')) {
      iVar16 = (int)param_2[1];
      iVar6 = (2 - (uint)(iVar16 != 0)) + iVar16;
      *(int *)(param_2 + 1) = iVar6;
      if (*(int *)((longlong)param_2 + 0xc) < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar16);
      }
      puVar8 = (undefined2 *)(*param_2 + ((longlong)iVar16 - (ulonglong)(iVar16 != 0)) * 2);
      *puVar8 = 0x29;
      puVar8[1] = 0;
    }
  }
  if (puVar9 == (undefined2 *)0x0) {
    return;
  }
  if ((~(byte)((ulonglong)plVar17[7] >> 0x24) & 1) != 0) {
    (**(code **)(*plVar17 + 0x328))(plVar17,puVar9);
  }
LAB_1417540d3:
  FMemory::Free(puVar9);
  return;
}



// FUNCTION 1417540f0 FUN_1417540f0 body=259 status=ok
// SIG undefined FUN_1417540f0(void)

void FUN_1417540f0(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6)

{
  void *_Dst;
  int iVar1;
  void *_Src;
  int iVar2;
  wchar_t *pwVar3;
  int iVar4;
  wchar_t *pwVar5;
  void *local_18;
  int local_10;
  
  if ((param_6 & 0x10000000) == 0) {
    pwVar3 = L"True";
    pwVar5 = L"False";
  }
  else {
    pwVar3 = L"true";
    pwVar5 = L"false";
  }
  if ((*(byte *)((ulonglong)*(byte *)(param_1 + 0x71) + param_3) & *(byte *)(param_1 + 0x73)) != 0)
  {
    pwVar5 = pwVar3;
  }
  FString::PrintfImpl(&local_18,&DAT_144d148c4,pwVar5);
  _Src = local_18;
  iVar4 = 0;
  if (local_10 != 0) {
    iVar4 = local_10 + -1;
  }
  if (iVar4 != 0) {
    iVar1 = (int)param_2[1];
    iVar2 = (uint)(iVar1 == 0) + iVar1 + iVar4;
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    _Dst = (void *)(*param_2 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar4 * 2);
    *(undefined2 *)((longlong)iVar4 * 2 + (longlong)_Dst) = 0;
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 141754200 FUN_141754200 body=1418 status=ok
// SIG undefined FUN_141754200(void)

void FUN_141754200(longlong param_1,longlong *param_2,byte *param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6)

{
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  byte bVar4;
  longlong lVar5;
  void *pvVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  undefined2 **ppuVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  void **ppvVar21;
  longlong lVar22;
  int iVar23;
  undefined2 *puVar24;
  undefined2 *puVar25;
  uint uVar26;
  undefined2 *puVar27;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  ulonglong local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined4 local_c0;
  void *local_b8;
  int local_b0;
  void *local_a8;
  int local_a0;
  void *local_98 [2];
  longlong local_88 [2];
  longlong local_78 [2];
  void *local_68 [2];
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  
  local_d8 = local_d8 & 0xffffffff00000000;
  lVar22 = *(longlong *)(param_1 + 0x70);
  if ((param_6 & 0x10000000) == 0) {
    if ((lVar22 != 0) && ((param_6 & 0x4000000) == 0)) {
      cVar12 = UEnum::IsValidEnumValue(lVar22,*param_3);
      bVar4 = *param_3;
      uVar19 = UEnum::GetMaxEnumValue();
      if ((cVar12 == '\0') || ((bVar4 == uVar19 && ((param_6 & 0x800) == 0)))) {
        iVar23 = (int)param_2[1];
        iVar15 = (10 - (uint)(iVar23 != 0)) + iVar23;
        *(int *)(param_2 + 1) = iVar15;
        if (*(int *)((longlong)param_2 + 0xc) < iVar15) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar23);
        }
        lVar22 = (longlong)iVar23 - (ulonglong)(iVar23 != 0);
        builtin_wcsncpy((wchar_t *)(*param_2 + lVar22 * 2),L"(INVALID",8);
        lVar22 = *param_2 + lVar22 * 2;
        *(undefined2 *)(lVar22 + 0x10) = 0x29;
        *(undefined2 *)(lVar22 + 0x12) = 0;
        return;
      }
      if ((param_6 & 0x80000) == 0) {
        puVar18 = (undefined8 *)
                  UEnum::GetNameStringByValue
                            (*(undefined8 *)(param_1 + 0x70),local_58,(ulonglong)bVar4);
        pvVar6 = (void *)*puVar18;
        iVar23 = *(int *)(puVar18 + 1) + -1;
        if (*(int *)(puVar18 + 1) == 0) {
          iVar23 = 0;
        }
        if (iVar23 != 0) {
          iVar15 = (int)param_2[1];
          iVar14 = (uint)(iVar15 == 0) + iVar15 + iVar23;
          *(int *)(param_2 + 1) = iVar14;
          if (*(int *)((longlong)param_2 + 0xc) < iVar14) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar15);
          }
          pvVar3 = (void *)(*param_2 + ((longlong)iVar15 - (ulonglong)(iVar15 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar3,pvVar6,(longlong)iVar23 * 2);
          *(undefined2 *)((longlong)iVar23 * 2 + (longlong)pvVar3) = 0;
        }
        if (local_58[0] == 0) {
          return;
        }
        FMemory::Free();
        return;
      }
      uVar20 = FUN_1417373a0(*(undefined8 *)(param_1 + 0x70),local_48);
      puVar18 = (undefined8 *)FText::ToString(uVar20);
      pvVar6 = (void *)*puVar18;
      iVar23 = *(int *)(puVar18 + 1) + -1;
      if (*(int *)(puVar18 + 1) == 0) {
        iVar23 = 0;
      }
      if (iVar23 != 0) {
        iVar15 = (int)param_2[1];
        iVar14 = (uint)(iVar15 == 0) + iVar15 + iVar23;
        *(int *)(param_2 + 1) = iVar14;
        if (*(int *)((longlong)param_2 + 0xc) < iVar14) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar15);
        }
        pvVar3 = (void *)(*param_2 + ((longlong)iVar15 - (ulonglong)(iVar15 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar3,pvVar6,(longlong)iVar23 * 2);
        *(undefined2 *)((longlong)iVar23 * 2 + (longlong)pvVar3) = 0;
      }
      if (local_40 == (longlong *)0x0) {
        return;
      }
      LOCK();
      plVar1 = local_40 + 1;
      lVar22 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar22 != 1) {
        return;
      }
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar23 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar23 != 1) {
        return;
      }
      (**(code **)(*local_40 + 8))(local_40,1);
      return;
    }
  }
  else if (lVar22 != 0) {
    bVar4 = *param_3;
    uVar13 = UEnum::GetMaxEnumValue();
    cVar12 = UEnum::IsValidEnumValue(*(undefined8 *)(param_1 + 0x70));
    uVar26 = uVar13;
    if (cVar12 != '\0') {
      uVar26 = (uint)bVar4;
    }
    lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x10);
    lVar16 = UEnum::GetPrivateStaticClass();
    lVar5 = *(longlong *)(param_1 + 0x70);
    if (lVar22 == lVar16) {
      if (*(int *)(lVar5 + 0x38) < 2) {
        local_d0 = *(undefined8 *)(lVar5 + 0x18);
        FName::ToString(&local_d0);
        ppvVar21 = local_98;
        bVar9 = true;
        bVar8 = false;
      }
      else {
        iVar23 = *(int *)(lVar5 + 0x38);
        pvVar6 = *(void **)(lVar5 + 0x30);
        local_e8 = (void *)0x0;
        local_e0 = iVar23;
        if (iVar23 == 0) {
          local_dc = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,iVar23,0);
          _guard_xfg_dispatch_icall_nop(local_e8,pvVar6,(longlong)iVar23 * 2);
        }
        ppvVar21 = &local_e8;
        bVar9 = false;
        bVar8 = true;
      }
      bVar11 = false;
      bVar10 = false;
      bVar7 = true;
      puVar27 = *ppvVar21;
      *ppvVar21 = (void *)0x0;
      local_c0 = *(undefined4 *)(ppvVar21 + 1);
      ppuVar17 = &local_c8;
      local_c8 = puVar27;
      ppvVar21[1] = (void *)0x0;
    }
    else {
      local_d8 = *(ulonglong *)(lVar5 + 0x18);
      FName::ToString(&local_d8,local_88);
      ppuVar17 = (undefined2 **)UnicodeToCPPIdentifier(local_78,local_88,0,&DAT_144d16ac8);
      bVar11 = true;
      bVar10 = true;
      bVar9 = false;
      bVar8 = false;
      bVar7 = false;
      puVar27 = *ppuVar17;
    }
    *ppuVar17 = (undefined2 *)0x0;
    iVar23 = *(int *)(ppuVar17 + 1);
    ppuVar17[1] = (undefined2 *)0x0;
    if ((bVar7) && (local_c8 != (undefined2 *)0x0)) {
      FMemory::Free();
    }
    if ((bVar8) && (local_e8 != (void *)0x0)) {
      FMemory::Free();
    }
    if ((bVar9) && (local_98[0] != (void *)0x0)) {
      FMemory::Free();
    }
    if ((bVar10) && (local_78[0] != 0)) {
      FMemory::Free();
    }
    if ((bVar11) && (local_88[0] != 0)) {
      FMemory::Free();
    }
    if (uVar26 == uVar13) {
      puVar25 = &DAT_143f3eda8;
      if (iVar23 != 0) {
        puVar25 = puVar27;
      }
      FString::PrintfImpl(&local_b8,L"(%s)(%d)",puVar25,bVar4);
      pvVar6 = local_b8;
      if (local_b0 == 0) {
        iVar23 = 0;
      }
      else {
        iVar23 = local_b0 + -1;
      }
      local_68[0] = local_b8;
      if (iVar23 != 0) {
        iVar15 = (int)param_2[1];
        iVar14 = (uint)(iVar15 == 0) + iVar15 + iVar23;
        *(int *)(param_2 + 1) = iVar14;
        if (*(int *)((longlong)param_2 + 0xc) < iVar14) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar15);
        }
        pvVar3 = (void *)(*param_2 + ((longlong)iVar15 - (ulonglong)(iVar15 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar3,pvVar6,(longlong)iVar23 * 2);
        *(undefined2 *)((longlong)iVar23 * 2 + (longlong)pvVar3) = 0;
        local_68[0] = local_b8;
      }
    }
    else {
      puVar18 = (undefined8 *)
                UEnum::GetNameStringByValue
                          (*(undefined8 *)(param_1 + 0x70),local_68,(longlong)(int)uVar26);
      if (*(int *)(puVar18 + 1) == 0) {
        puVar25 = &DAT_143f3eda8;
      }
      else {
        puVar25 = (undefined2 *)*puVar18;
      }
      puVar24 = &DAT_143f3eda8;
      if (iVar23 != 0) {
        puVar24 = puVar27;
      }
      FString::PrintfImpl(&local_a8,L"%s::%s",puVar24,puVar25);
      pvVar6 = local_a8;
      if (local_a0 == 0) {
        iVar23 = 0;
      }
      else {
        iVar23 = local_a0 + -1;
      }
      if (iVar23 != 0) {
        iVar15 = (int)param_2[1];
        iVar14 = (uint)(iVar15 == 0) + iVar23 + iVar15;
        *(int *)(param_2 + 1) = iVar14;
        if (*(int *)((longlong)param_2 + 0xc) < iVar14) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar15);
        }
        pvVar3 = (void *)(*param_2 + ((longlong)iVar15 - (ulonglong)(iVar15 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar3,pvVar6,(longlong)iVar23 * 2);
        *(undefined2 *)((longlong)iVar23 * 2 + (longlong)pvVar3) = 0;
      }
      if (local_a8 != (void *)0x0) {
        FMemory::Free(local_a8);
      }
    }
    if (local_68[0] != (void *)0x0) {
      FMemory::Free(local_68[0]);
    }
    if (puVar27 == (undefined2 *)0x0) {
      return;
    }
    FMemory::Free(puVar27);
    return;
  }
  FUN_141770ea0(param_1);
  return;
}



// FUNCTION 141754790 FUN_141754790 body=141 status=ok
// SIG undefined FUN_141754790(void)

void FUN_141754790(undefined8 param_1,longlong *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  ulonglong in_stack_00000030;
  
  FUN_141770ea0();
  if ((in_stack_00000030 >> 0x1c & 1) != 0) {
    iVar2 = (int)param_2[1];
    iVar3 = (2 - (uint)(iVar2 != 0)) + iVar2;
    *(int *)(param_2 + 1) = iVar3;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    puVar1 = (undefined2 *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
    *puVar1 = 0x66;
    puVar1[1] = 0;
  }
  return;
}



// FUNCTION 141754820 FUN_141754820 body=1296 status=ok
// SIG undefined FUN_141754820(void)

void FUN_141754820(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,ulonglong param_6,undefined8 param_7)

{
  void *pvVar1;
  void *_Dst;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined2 **ppuVar14;
  int iVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  undefined2 *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58 [2];
  longlong local_48 [2];
  undefined2 *local_38 [2];
  
  iVar15 = 0;
  lVar11 = (**(code **)(*param_1 + 0x378))(param_1,param_3);
  uVar7 = param_6;
  if ((param_6 >> 0x1c & 1) == 0) {
    if (lVar11 == 0) {
      iVar15 = (int)param_2[1];
      iVar10 = (5 - (uint)(iVar15 != 0)) + iVar15;
      *(int *)(param_2 + 1) = iVar10;
      if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar15);
      }
      lVar11 = (longlong)iVar15 - (ulonglong)(iVar15 != 0);
      builtin_wcsncpy((wchar_t *)(*param_2 + lVar11 * 2),L"None",4);
      *(undefined2 *)(*param_2 + 8 + lVar11 * 2) = 0;
      return;
    }
    if ((param_6 >> 0x15 & 1) == 0) {
      if ((((param_5 != 0) && ((*(uint *)(param_5 + 8) >> 4 & 1) == 0)) &&
          (cVar8 = FUN_141790310(lVar11), cVar8 != '\0')) &&
         (*(longlong *)(lVar11 + 0x20) == param_5)) {
        param_6 = *(ulonglong *)(lVar11 + 0x18);
        if ((uVar7 & 2) == 0) {
          FName::ToString(&param_6,&local_68);
          puVar16 = local_68;
          if (local_60 != 0) {
            iVar15 = local_60 + -1;
          }
          if (iVar15 != 0) {
            iVar10 = (int)param_2[1];
            iVar9 = (uint)(iVar10 == 0) + iVar15 + iVar10;
            *(int *)(param_2 + 1) = iVar9;
            if (*(int *)((longlong)param_2 + 0xc) < iVar9) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
            }
            pvVar1 = (void *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar1,puVar16,(longlong)iVar15 * 2);
            *(undefined2 *)((longlong)pvVar1 + (longlong)iVar15 * 2) = 0;
          }
          if (local_68 == (undefined2 *)0x0) {
            return;
          }
          FMemory::Free(local_68);
          return;
        }
        FName::ToString(&param_6,local_58);
        puVar13 = (undefined8 *)FString::ReplaceQuotesWithEscapedQuotes(local_58,local_38);
        if (*(int *)(puVar13 + 1) == 0) {
          puVar16 = &DAT_143f3eda8;
        }
        else {
          puVar16 = (undefined2 *)*puVar13;
        }
        FString::PrintfImpl(&local_68,L"\"%s\"",puVar16);
        puVar16 = local_68;
        if (local_60 != 0) {
          iVar15 = local_60 + -1;
        }
        if (iVar15 != 0) {
          iVar10 = (int)param_2[1];
          iVar9 = (uint)(iVar10 == 0) + iVar15 + iVar10;
          *(int *)(param_2 + 1) = iVar9;
          if (*(int *)((longlong)param_2 + 0xc) < iVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
          }
          pvVar1 = (void *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,puVar16,(longlong)iVar15 * 2);
          *(undefined2 *)((longlong)iVar15 * 2 + (longlong)pvVar1) = 0;
        }
        if (local_68 != (undefined2 *)0x0) {
          FMemory::Free(local_68);
        }
        if (local_38[0] != (undefined2 *)0x0) {
          FMemory::Free();
        }
        goto LAB_141754cc3;
      }
      puVar13 = (undefined8 *)FUN_141757340(local_38,lVar11,param_5,param_7,uVar7);
    }
    else {
      puVar13 = (undefined8 *)UObjectBaseUtility::GetFullName(lVar11,local_38,0);
    }
    pvVar1 = (void *)*puVar13;
    iVar15 = *(int *)(puVar13 + 1) + -1;
    if (*(int *)(puVar13 + 1) == 0) {
      iVar15 = 0;
    }
    local_58[0] = local_38[0];
    if (iVar15 != 0) {
      iVar10 = (int)param_2[1];
      iVar9 = (uint)(iVar10 == 0) + iVar10 + iVar15;
      *(int *)(param_2 + 1) = iVar9;
      if (*(int *)((longlong)param_2 + 0xc) < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
      }
      _Dst = (void *)(*param_2 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,pvVar1,(longlong)iVar15 * 2);
      *(undefined2 *)((longlong)iVar15 * 2 + (longlong)_Dst) = 0;
      local_58[0] = local_38[0];
    }
  }
  else {
    param_6 = *(ulonglong *)(param_1[0xe] + 0x18);
    FName::ToString(&param_6,&local_78);
    puVar16 = &DAT_143f3eda8;
    if ((int)local_70 != 0) {
      puVar16 = local_78;
    }
    uVar12 = (**(code **)(*(longlong *)param_1[0xe] + 0x2c0))();
    FString::PrintfImpl(local_58,L"%s%s*",uVar12,puVar16);
    if (local_58[0] != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_78 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (lVar11 == 0) {
      local_78 = (undefined2 *)0x0;
      local_70 = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
      puVar16 = local_78;
      bVar6 = false;
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
      bVar2 = true;
      FGenericPlatformString::Memcpy(local_78,L"nullptr",0x10);
      ppuVar14 = &local_78;
    }
    else {
      uVar12 = UObjectBaseUtility::GetPathName(lVar11,local_38,0);
      puVar13 = (undefined8 *)FString::ReplaceCharWithEscapedChar(uVar12,local_48,0);
      if (*(int *)(puVar13 + 1) == 0) {
        puVar16 = &DAT_143f3eda8;
      }
      else {
        puVar16 = (undefined2 *)*puVar13;
      }
      param_6 = *(ulonglong *)(param_1[0xe] + 0x18);
      FName::ToString(&param_6,&local_68);
      puVar17 = &DAT_143f3eda8;
      if (local_60 != 0) {
        puVar17 = local_68;
      }
      uVar12 = (**(code **)(*(longlong *)param_1[0xe] + 0x2c0))();
      FString::PrintfImpl(local_58,L"LoadObject<%s%s>(nullptr, TEXT(\"%s\"))",uVar12,puVar17,puVar16
                         );
      ppuVar14 = local_58;
      bVar6 = true;
      bVar5 = true;
      bVar4 = true;
      bVar3 = true;
      bVar2 = false;
      puVar16 = local_78;
    }
    puVar17 = *ppuVar14;
    iVar10 = *(int *)(ppuVar14 + 1) + -1;
    if (*(int *)(ppuVar14 + 1) == 0) {
      iVar10 = iVar15;
    }
    if (iVar10 != 0) {
      iVar15 = (int)param_2[1];
      iVar9 = (uint)(iVar15 == 0) + iVar10 + iVar15;
      *(int *)(param_2 + 1) = iVar9;
      if (*(int *)((longlong)param_2 + 0xc) < iVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar15);
      }
      pvVar1 = (void *)(*param_2 + ((longlong)iVar15 - (ulonglong)(iVar15 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,puVar17,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)iVar10 * 2 + (longlong)pvVar1) = 0;
    }
    if ((bVar2) && (puVar16 != (undefined2 *)0x0)) {
      FMemory::Free(puVar16);
    }
    if ((bVar3) && (local_58[0] != (undefined2 *)0x0)) {
      FMemory::Free();
    }
    if ((bVar4) && (local_68 != (undefined2 *)0x0)) {
      FMemory::Free();
    }
    if ((bVar5) && (local_48[0] != 0)) {
      FMemory::Free();
    }
    local_58[0] = local_38[0];
    if (!bVar6) {
      return;
    }
  }
LAB_141754cc3:
  if (local_58[0] != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141754d30 FUN_141754d30 body=153 status=ok
// SIG undefined FUN_141754d30(void)

undefined8
FUN_141754d30(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  
  if ((param_3 != param_4) &&
     (cVar1 = (**(code **)(*param_1 + 0x2b8))(param_1,param_3,param_4,param_6), cVar1 != '\0')) {
    return 0;
  }
  (**(code **)(*param_1 + 0x2d8))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return 1;
}



// FUNCTION 141754dd0 FUN_141754dd0 body=1396 status=ok
// SIG undefined FUN_141754dd0(void)

longlong FUN_141754dd0(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                      wchar_t *param_5,ulonglong param_6)

{
  bool bVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  undefined2 *puVar14;
  int iVar15;
  undefined8 in_stack_ffffffffffffff58;
  wchar_t *pwVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  wchar_t *local_80;
  undefined8 local_78;
  longlong local_70;
  int local_68;
  int local_64;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  
  lVar6 = 0;
  local_80 = (wchar_t *)(ulonglong)((uint)param_6 & 0x8000);
  lVar11 = param_2;
  lVar10 = param_2;
  pwVar9 = local_80;
  if ((param_6 & 0x8000) != 0) {
    while (lVar7 = lVar11, pwVar9 = local_80, lVar11 != 0) {
      for (; (lVar6 == 0 && (lVar7 != 0)); lVar7 = FUN_14178ca30(lVar7)) {
        lVar6 = FUN_141799780(param_3,lVar7,param_5,0);
        if ((lVar6 != 0) && (cVar3 = UObjectBaseUtility::IsTemplate(lVar6,0x10), cVar3 == '\0')) {
          lVar6 = 0;
        }
      }
      pwVar9 = local_80;
      if (((*(uint *)(lVar11 + 8) >> 4 & 1) != 0) ||
         (lVar11 = *(longlong *)(lVar11 + 0x20), lVar6 != 0)) break;
    }
  }
  do {
    pwVar16 = local_80;
    local_80 = pwVar9;
    if (lVar6 != 0) {
LAB_1417552a2:
      if (((*(byte *)(lVar6 + 8) & 1) == 0) && (param_2 != 0)) {
        lVar10 = UObjectBaseUtility::GetOutermost(lVar6);
        lVar11 = UObjectBaseUtility::GetOutermost(param_2);
        if (lVar10 != lVar11) {
          if (param_1 != (longlong *)0x0) {
            lVar10 = UObjectPropertyBase::GetPrivateStaticClass();
            if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
                lVar10 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              cVar3 = (**(code **)(*param_1 + 0x388))(param_1);
              if (cVar3 != '\0') {
                return lVar6;
              }
              if ((longlong)param_6 < 0) {
                return lVar6;
              }
              if ((~(byte)(*(uint *)(param_1 + 7) >> 0x13) & 1) == 0) {
                return lVar6;
              }
            }
          }
          lVar6 = 0;
        }
      }
      return lVar6;
    }
    uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
    if (lVar10 == 0) {
      lVar6 = FUN_141799780(param_3,0,param_5,0);
      if (lVar6 == 0) {
        lVar10 = -1;
        if ((param_6 & 0x40) != 0) {
          local_70 = 0;
          local_64 = 0;
          iVar15 = 0;
          lVar11 = 0;
          iVar4 = 0;
          if ((param_5 != (wchar_t *)0x0) &&
             (lVar7 = lVar10, lVar11 = 0, iVar4 = iVar15, *param_5 != L'\0')) {
            do {
              lVar7 = lVar7 + 1;
            } while (param_5[lVar7] != L'\0');
            iVar12 = (int)lVar7 + 1;
            local_68 = iVar12;
            if (0 < iVar12) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
            }
            iVar15 = local_64;
            iVar4 = local_68;
            lVar11 = local_70;
            FGenericPlatformString::Memcpy(local_70,param_5,(longlong)iVar12 * 2);
          }
          local_60 = 0;
          local_58 = 0;
          local_50 = 0;
          local_70 = lVar11;
          local_68 = iVar4;
          local_64 = iVar15;
          FUN_1417978e0(&local_60,&local_70);
          cVar3 = FOutputDevice::CanBeUsedOnAnyThread(&local_60);
          if (cVar3 != '\0') {
            puVar8 = (undefined8 *)FSoftObjectPath::ToString(&local_60,&local_70);
            if (*(int *)(puVar8 + 1) == 0) {
              puVar14 = &DAT_143f3eda8;
            }
            else {
              puVar14 = (undefined2 *)*puVar8;
            }
            lVar6 = FUN_141799780(param_3,0,puVar14,0);
            if (local_70 != 0) {
              FMemory::Free();
            }
          }
          if (local_58 != 0) {
            FMemory::Free();
          }
          if (lVar6 != 0) goto LAB_1417552a2;
        }
        lVar6 = FUN_141799780(param_3,0xffffffffffffffff,param_5,0);
        lVar11 = lVar6;
        if ((lVar6 != 0) &&
           ((local_80 == (wchar_t *)0x0 ||
            (cVar3 = UObjectBaseUtility::IsTemplate(lVar6,0x10), lVar11 = 0, cVar3 == '\0'))))
        goto LAB_1417552a2;
        pwVar9 = _guard_xfg_dispatch_icall_nop(param_5,L'.');
        if ((pwVar9 != (wchar_t *)0x0) && (((byte)param_6 >> 4 & 1) != 0)) {
          pwVar16 = pwVar9 + 1;
          lVar11 = FUN_141754dd0(param_1,param_2,param_3,param_4,pwVar16,0);
          uVar18 = (undefined4)((ulonglong)pwVar16 >> 0x20);
        }
        local_80 = (wchar_t *)0x0;
        local_78 = 0;
        if ((param_5 != (wchar_t *)0x0) && (lVar6 = lVar10, *param_5 != L'\0')) {
          do {
            lVar6 = lVar6 + 1;
          } while (param_5[lVar6] != L'\0');
          uVar13 = (int)lVar6 + 1;
          local_78 = (ulonglong)uVar13;
          if (0 < (int)uVar13) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,0);
          }
          FGenericPlatformString::Memcpy(local_80,param_5);
        }
        if (lVar11 == 0) {
          if (pwVar9 == (wchar_t *)0x0) {
            uVar17 = CONCAT44(uVar18,0xffffffff);
            iVar4 = FUN_141592950(&local_80,&DAT_144d121b4,0,1,uVar17);
            uVar2 = local_78;
            uVar18 = (undefined4)((ulonglong)uVar17 >> 0x20);
            if (-1 < iVar4) {
              iVar15 = (int)local_78;
              lVar6 = (longlong)(int)local_78;
              iVar12 = (2 - (uint)((int)local_78 != 0)) + (int)local_78;
              local_78 = CONCAT44(local_78._4_4_,iVar12);
              if (local_78._4_4_ < iVar12) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,uVar2 & 0xffffffff);
              }
              uVar2 = local_78;
              local_80[lVar6 - (ulonglong)(iVar15 != 0)] = L'.';
              (local_80 + (lVar6 - (ulonglong)(iVar15 != 0)))[1] = L'\0';
              do {
                lVar7 = lVar10 + 1;
                lVar6 = lVar10 + 2;
                lVar10 = lVar7;
              } while (param_5[iVar4 + lVar6] != L'\0');
              iVar15 = (int)lVar7;
              if (iVar15 != 0) {
                iVar12 = (int)local_78;
                lVar6 = (longlong)(int)local_78;
                iVar5 = (uint)((int)local_78 == 0) + (int)local_78 + iVar15;
                local_78 = CONCAT44(local_78._4_4_,iVar5);
                if (local_78._4_4_ < iVar5) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,uVar2 & 0xffffffff);
                }
                pwVar9 = local_80 + (lVar6 - (ulonglong)(iVar12 != 0));
                _guard_xfg_dispatch_icall_nop
                          (pwVar9,param_5 + (longlong)iVar4 + 1,(longlong)iVar15 * 2);
                pwVar9[iVar15] = L'\0';
              }
              pwVar9 = L"";
              if ((int)local_78 != 0) {
                pwVar9 = local_80;
              }
              pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar9,L'.');
              if (pwVar9 != (wchar_t *)0x0) goto LAB_14175520c;
            }
          }
          else {
LAB_14175520c:
            if ((DAT_1469e7e10 == '\0') &&
               ((((param_2 == 0 ||
                  (lVar6 = FUN_1417a53c0(*(undefined8 *)(param_2 + 0x10)), lVar6 == 0)) &&
                 (lVar6 = FUN_1417a53c0(param_1), lVar6 == 0)) ||
                (((*(uint *)(lVar6 + 0x290) & 0x100000) == 0 ||
                 (lVar11 = FUN_141708fc0(lVar6,param_3,param_5), lVar11 == 0)))))) {
              lVar11 = FUN_141799c90(param_3,0,param_5,0,CONCAT44(uVar18,0x4002),0,1);
            }
          }
        }
        if (local_80 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        lVar6 = lVar11;
        if (lVar11 == 0) {
          return 0;
        }
      }
      goto LAB_1417552a2;
    }
    lVar6 = FUN_141799780(param_3,lVar10,param_5);
    if (((lVar6 != 0) && (pwVar16 != (wchar_t *)0x0)) &&
       (cVar3 = UObjectBaseUtility::IsTemplate(lVar6), cVar3 != '\0')) {
      lVar6 = 0;
    }
    lVar10 = *(longlong *)(lVar10 + 0x20);
    pwVar9 = local_80;
    local_80 = pwVar16;
  } while( true );
}



// FUNCTION 141755350 FindPropertyByName body=34 status=ok
// SIG undefined FindPropertyByName(void)

longlong UStruct::FindPropertyByName(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(longlong *)(lVar1 + 0x18) == param_2) break;
    lVar1 = *(longlong *)(lVar1 + 0x50);
  }
  return lVar1;
}



// FUNCTION 141755380 FindRedirectedPropertyName body=220 status=ok
// SIG undefined FindRedirectedPropertyName(void)

longlong *
UProperty::FindRedirectedPropertyName(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined1 local_res18 [8];
  undefined2 *local_48;
  int local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  lVar1 = UObjectBaseUtility::GetOutermost(param_2);
  UObjectBaseUtility::GetPathName(param_2,&local_48,lVar1);
  local_28 = *(longlong *)(lVar1 + 0x18);
  puVar3 = &DAT_143f3eda8;
  if (local_40 != 0) {
    puVar3 = local_48;
  }
  plVar2 = (longlong *)FName::FName(local_res18,puVar3,1);
  local_30 = *plVar2;
  local_38 = param_3;
  FCoreRedirects::GetRedirectedName(&local_20,0x20,&local_38);
  if (((local_20 == local_38) && (local_18 == local_30)) && (local_10 == local_28)) {
    local_20 = 0;
  }
  *param_1 = local_20;
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141755460 FUN_141755460 body=213 status=ok
// SIG undefined FUN_141755460(void)

void FUN_141755460(longlong param_1)

{
  undefined2 *puVar1;
  undefined8 local_res8;
  undefined2 *local_18;
  int local_10;
  
  if ((*(byte *)(param_1 + 10) & 1) == 0) {
    local_res8 = *(undefined8 *)(param_1 + 0x18);
    FName::ToString(&local_res8,&local_18);
    puVar1 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar1 = local_18;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x304,
               L"Trying to call UObject::FinishDestroy from outside of UObject::ConditionalFinishDestroy on object %s. Please fix up the calling code."
               ,puVar1);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_res8 = *(undefined8 *)(param_1 + 0x18);
    FName::ToString(&local_res8,&local_18);
    puVar1 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar1 = local_18;
    }
    FDebug::AssertFailed
              (&DAT_144d11067,"Unknown",0x304,
               L"Trying to call UObject::FinishDestroy from outside of UObject::ConditionalFinishDestroy on object %s. Please fix up the calling code."
               ,puVar1);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  FUN_1416f0680(param_1);
  return;
}



// FUNCTION 141755540 FullyLoad body=94 status=ok
// SIG undefined FullyLoad(void)

void UPackage::FullyLoad(longlong param_1)

{
  char cVar1;
  undefined2 *puVar2;
  undefined8 local_res10 [3];
  undefined2 *local_18;
  int local_10;
  
  cVar1 = IsFullyLoaded();
  if (cVar1 == '\0') {
    local_res10[0] = *(undefined8 *)(param_1 + 0x18);
    FName::ToString(local_res10,&local_18);
    puVar2 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar2 = local_18;
    }
    LoadPackage(0,puVar2,0,0);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1417555a0 FUN_1417555a0 body=169 status=ok
// SIG undefined FUN_1417555a0(void)

undefined8 FUN_1417555a0(void)

{
  void *_Dst;
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e7a90) {
    _Init_thread_header(&DAT_1469e7a90);
    if (DAT_1469e7a90 == -1) {
      _Dst = (void *)operator_new(0x170);
      uVar1 = 0;
      if (_Dst != (void *)0x0) {
        _guard_xfg_dispatch_icall_nop(_Dst,0,0x170);
        uVar1 = FLinkerManager::FLinkerManager(_Dst);
      }
      DAT_1469e7a88 = uVar1;
      atexit((_func_5014 *)&LAB_143e7cb30);
      _Init_thread_footer(&DAT_1469e7a90);
      return DAT_1469e7a88;
    }
  }
  return DAT_1469e7a88;
}



// FUNCTION 141755650 FUN_141755650 body=416 status=ok
// SIG undefined FUN_141755650(void)

void FUN_141755650(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *local_28;
  undefined8 local_20;
  
  uVar4 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  if ((*(byte *)(param_1 + 8) & 0x30) != 0) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_1417a5560(*(undefined8 *)(param_1 + 0x10),&local_28,1,0,0x20000000);
    if ((*(uint *)(param_1 + 8) >> 5 & 1) == 0) {
      if (*(int *)((longlong)param_2 + 0xc) < (int)local_20 + -1) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
      }
      uVar6 = (ulonglong)((longlong)(local_28 + (int)local_20) + (7 - (longlong)local_28)) >> 3;
      if (local_28 + (int)local_20 < local_28) {
        uVar6 = uVar4;
      }
      plVar5 = local_28;
      if (uVar6 != 0) {
        do {
          lVar2 = *plVar5;
          if (lVar2 != param_1) {
            iVar1 = (int)param_2[1];
            *(int *)(param_2 + 1) = iVar1 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
            }
            *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
          }
          plVar5 = plVar5 + 1;
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar6);
      }
    }
    else {
      uVar6 = (ulonglong)((longlong)(local_28 + (int)local_20) + (7 - (longlong)local_28)) >> 3;
      if (local_28 + (int)local_20 < local_28) {
        uVar6 = uVar4;
      }
      plVar5 = local_28;
      if (uVar6 != 0) {
        do {
          lVar2 = *plVar5;
          if ((lVar2 != 0) && (lVar2 != param_1)) {
            for (lVar3 = FUN_14178ca30(lVar2); lVar3 != 0; lVar3 = FUN_14178ca30(lVar3)) {
              if (param_1 == lVar3) {
                iVar1 = (int)param_2[1];
                *(int *)(param_2 + 1) = iVar1 + 1;
                if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
                }
                *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
                break;
              }
            }
          }
          plVar5 = plVar5 + 1;
          uVar4 = uVar4 + 1;
        } while (uVar4 != uVar6);
      }
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  return;
}



// FUNCTION 1417557f0 FUN_1417557f0 body=434 status=ok
// SIG undefined FUN_1417557f0(void)

void FUN_1417557f0(longlong *param_1,longlong *param_2)

{
  void *_Src;
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  longlong local_68;
  longlong local_60;
  void *local_58;
  ulonglong local_50;
  undefined8 local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  
  (**(code **)(*param_1 + 400))(param_1,&local_68);
  pvVar5 = (void *)0x0;
  if ((local_68 != 0) && (local_60 != 0)) {
    FName::ToString(&local_68,&local_58);
    _Src = local_58;
    local_48 = DAT_1469e7758;
    local_40 = (void *)0x0;
    iVar4 = (int)local_50;
    local_38 = iVar4;
    if (iVar4 == 0) {
      uVar6 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_50 & 0xffffffff,0);
      pvVar5 = local_40;
      _guard_xfg_dispatch_icall_nop(local_40,_Src,(longlong)iVar4 * 2);
      uVar6 = local_34;
    }
    iVar1 = local_38;
    uVar3 = local_48;
    iVar4 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_2,iVar4);
    }
    puVar2 = (undefined8 *)((longlong)iVar4 * 0x20 + *param_2);
    *puVar2 = uVar3;
    puVar2[1] = pvVar5;
    *(undefined4 *)((longlong)puVar2 + 0x14) = uVar6;
    *(int *)(puVar2 + 2) = iVar1;
    puVar2[3] = 1;
    if (local_58 != (void *)0x0) {
      FMemory::Free();
    }
    uVar3 = FName::ToString(&local_60,&local_58);
    local_48 = DAT_1469e78c8;
    FString::FString(&local_40,uVar3);
    iVar4 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_2,iVar4);
    }
    puVar2 = (undefined8 *)((longlong)iVar4 * 0x20 + *param_2);
    *puVar2 = local_48;
    puVar2[1] = local_40;
    *(int *)(puVar2 + 2) = local_38;
    *(undefined4 *)((longlong)puVar2 + 0x14) = local_34;
    puVar2[3] = 1;
    if (local_58 != (void *)0x0) {
      FMemory::Free();
    }
  }
  FUN_141755b90(param_1,param_2);
  return;
}



// FUNCTION 1417559b0 GetAssetRegistryTags body=468 status=ok
// SIG undefined GetAssetRegistryTags(void)

void UObjectRedirector::GetAssetRegistryTags(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  void *pvVar8;
  undefined8 local_res8;
  undefined8 *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  longlong local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  
  pvVar8 = (void *)0x0;
  local_68 = (undefined8 *)0x0;
  local_60 = (ulonglong)(uint)local_60;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    local_60 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68,5);
    iVar6 = (uint)local_60 + 5;
    local_60 = CONCAT44(local_60._4_4_,iVar6);
    if (local_60._4_4_ < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68);
      iVar6 = (uint)local_60;
    }
    *local_68 = 0x65006e006f004e;
    *(undefined2 *)(local_68 + 1) = 0;
    puVar3 = local_68;
  }
  else {
    puVar3 = (undefined8 *)
             UObjectBaseUtility::GetPathName(*(longlong *)(param_1 + 0x28),&local_48,0);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*puVar3;
    }
    local_res8 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) + 0x18);
    FName::ToString(&local_res8,&local_58);
    puVar5 = &DAT_143f3eda8;
    if (local_50 != 0) {
      puVar5 = local_58;
    }
    FString::PrintfImpl(&local_68,L"%s\'%s\'",puVar5,puVar7);
    puVar3 = local_68;
    iVar6 = (uint)local_60;
    local_68 = (undefined8 *)0x0;
    local_60 = 0;
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  plVar4 = (longlong *)FName::FName(&local_res8,"DestinationObject",1);
  local_40 = (void *)0x0;
  local_48 = *plVar4;
  local_38 = iVar6;
  if (iVar6 == 0) {
    local_34 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,iVar6,0);
    pvVar8 = local_40;
    ::_guard_xfg_dispatch_icall_nop(local_40,puVar3,(longlong)iVar6 * 2);
  }
  iVar2 = local_38;
  lVar1 = local_48;
  iVar6 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar6 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_2,iVar6);
  }
  plVar4 = (longlong *)((longlong)iVar6 * 0x20 + *param_2);
  *plVar4 = lVar1;
  plVar4[1] = (longlong)pvVar8;
  *(int *)(plVar4 + 2) = iVar2;
  *(undefined4 *)((longlong)plVar4 + 0x14) = local_34;
  plVar4[3] = 1;
  if (puVar3 != (undefined8 *)0x0) {
    FMemory::Free(puVar3);
  }
  return;
}



// FUNCTION 141755b90 FUN_141755b90 body=1347 status=ok
// SIG undefined FUN_141755b90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141755b90(longlong param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  void *_Src;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 uVar10;
  void *pvVar11;
  longlong *plVar12;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_108;
  longlong local_100;
  longlong *local_f8;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined1 local_ea;
  void *local_e8;
  ulonglong local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined1 local_c0 [8];
  longlong local_b8;
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_100 = *(longlong *)(param_1 + 0x10);
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  if (local_100 == 0) {
    local_f8 = (longlong *)0x0;
  }
  else {
    local_f8 = *(longlong **)(local_100 + 0x38);
  }
  local_f0 = 0xffffffff;
  local_ec = 0x101;
  local_ea = 0;
  local_d8 = param_2;
  local_d0 = param_1;
  FUN_140472e10(&local_100);
  if (local_f8 == (longlong *)0x0) {
LAB_14175604b:
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_98);
    return;
  }
  plVar7 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_c8 = plVar7;
LAB_141755c80:
  plVar12 = local_f8;
  pvVar11 = (void *)0x0;
  local_108 = 0;
  iVar9 = 1;
  if (local_f8 == (longlong *)0x0) {
LAB_141755da0:
    if ((plVar12[7] & 0x10000000000U) != 0) {
      local_108 = plVar12[3];
      lVar4 = plVar12[2];
      lVar5 = UIntProperty::GetPrivateStaticClass();
      for (lVar6 = lVar4; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar5) goto LAB_141755ef8;
      }
      lVar5 = UFloatProperty::GetPrivateStaticClass();
      for (lVar6 = lVar4; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar5) goto LAB_141755ef8;
      }
      lVar5 = UDoubleProperty::GetPrivateStaticClass();
      for (lVar6 = lVar4; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar5) goto LAB_141755ef8;
      }
      lVar5 = UByteProperty::GetPrivateStaticClass();
      for (lVar6 = lVar4; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar5) {
          iVar9 = 2 - (uint)(plVar12[0xe] != 0);
          goto LAB_141755f10;
        }
      }
      lVar5 = UEnumProperty::GetPrivateStaticClass();
      for (lVar6 = lVar4; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar5) goto LAB_141755f10;
      }
      lVar5 = UArrayProperty::GetPrivateStaticClass();
      for (lVar6 = lVar4; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar5) goto LAB_141755f0d;
      }
      lVar5 = UMapProperty::GetPrivateStaticClass();
      for (lVar6 = lVar4; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar5) goto LAB_141755f0d;
      }
      lVar5 = USetProperty::GetPrivateStaticClass();
      for (lVar6 = lVar4; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar5) goto LAB_141755f0d;
      }
      lVar5 = UStructProperty::GetPrivateStaticClass();
      for (lVar6 = lVar4; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
        if (lVar6 == lVar5) goto LAB_141755f0d;
      }
      lVar6 = UObjectPropertyBase::GetPrivateStaticClass();
      for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
        if (lVar4 == lVar6) goto LAB_141755f0d;
      }
    }
  }
  else {
    lVar4 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((!bVar2) || (plVar12[0xe] == 0)) goto LAB_141755da0;
    lVar4 = *(longlong *)(plVar12[0xe] + 0x18);
    if ((*(int *)(*plVar7 + 0x38) < DAT_1469e7ae8) &&
       (_Init_thread_header(&DAT_1469e7ae8), DAT_1469e7ae8 == -1)) {
      FName::FName(&DAT_1469e7ae0,"AssetBundleData",1);
      _Init_thread_footer(&DAT_1469e7ae8);
    }
    if (lVar4 != DAT_1469e7ae0) goto LAB_141755da0;
    iVar9 = 0;
    local_108 = *(longlong *)(plVar12[0xe] + 0x18);
    if ((int)local_90 != local_64) {
      puVar8 = local_60;
      if (local_58 != (undefined1 *)0x0) {
        puVar8 = local_58;
      }
      for (iVar1 = *(int *)(puVar8 + (longlong)
                                     (int)((int)((ulonglong)local_108 >> 0x20) + (int)local_108 &
                                          local_50 - 1U) * 4); iVar1 != -1;
          iVar1 = *(int *)(local_98 + 8 + (longlong)iVar1 * 0x10)) {
        if (*(longlong *)(local_98 + (longlong)iVar1 * 0x10) == local_108) {
          if (iVar1 != -1) goto LAB_141755f10;
          break;
        }
      }
    }
    FUN_140800100(&local_98,local_c0,&local_108,0);
  }
  goto LAB_141755f10;
LAB_141755ef8:
  iVar9 = 2;
  goto LAB_141755f10;
LAB_141755f0d:
  iVar9 = 0;
LAB_141755f10:
  if (local_108 != 0) {
    local_e8 = (void *)0x0;
    local_e0 = 0;
    local_118 = 0;
    local_120 = 0;
    local_128 = 0;
    (**(code **)(*plVar12 + 0x2d8))(plVar12,&local_e8);
    _Src = local_e8;
    lVar4 = (longlong)(int)local_e0;
    local_b8 = local_108;
    local_b0 = (void *)0x0;
    local_a8 = (int)local_e0;
    if ((int)local_e0 == 0) {
      uVar10 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b0,local_e0 & 0xffffffff,0);
      pvVar11 = local_b0;
      _guard_xfg_dispatch_icall_nop(local_b0,_Src,lVar4 * 2);
      uVar10 = local_a4;
    }
    iVar3 = local_a8;
    lVar4 = local_b8;
    iVar1 = (int)local_d8[1];
    *(int *)(local_d8 + 1) = iVar1 + 1;
    if (*(int *)((longlong)local_d8 + 0xc) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(local_d8,iVar1);
    }
    plVar7 = (longlong *)((longlong)iVar1 * 0x20 + *local_d8);
    *plVar7 = lVar4;
    plVar7[1] = (longlong)pvVar11;
    *(int *)(plVar7 + 2) = iVar3;
    *(undefined4 *)((longlong)plVar7 + 0x14) = uVar10;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = 0;
    *(int *)(plVar7 + 3) = iVar9;
    plVar7 = local_c8;
    plVar12 = local_f8;
    if (local_e8 != (void *)0x0) {
      FMemory::Free();
      plVar7 = local_c8;
      plVar12 = local_f8;
    }
  }
  local_f8 = (longlong *)plVar12[5];
  FUN_140472e10(&local_100);
  if (local_f8 == (longlong *)0x0) goto LAB_14175604b;
  goto LAB_141755c80;
}



// FUNCTION 1417560e0 FUN_1417560e0 body=179 status=ok
// SIG undefined FUN_1417560e0(void)

undefined8 * FUN_1417560e0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  plVar1 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x70) + 0x298))
                     (*(longlong **)(param_1 + 0x70),local_18,0,0);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  *param_2 = 0;
  param_2[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"TARRAY",0xe);
  return param_2;
}



// FUNCTION 1417561a0 GetCPPMacroType body=510 status=ok
// SIG undefined GetCPPMacroType(void)

undefined8 * UBoolProperty::GetCPPMacroType(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined2 *puVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar5;
  undefined2 *local_18;
  int local_10;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  if (*(char *)(param_1 + 0x73) == -1) {
    *param_2 = 0;
    param_2[1] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    uVar4 = 0xc;
    pwVar2 = L"UBOOL";
  }
  else {
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 == 1) {
      *param_2 = 0;
      param_2[1] = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      uVar4 = 0xe;
      pwVar2 = L"UBOOL8";
    }
    else if (iVar1 == 2) {
      *param_2 = 0;
      param_2[1] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      uVar4 = 0x10;
      pwVar2 = L"UBOOL16";
    }
    else if (iVar1 == 4) {
      *param_2 = 0;
      param_2[1] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      uVar4 = 0x10;
      pwVar2 = L"UBOOL32";
    }
    else if (iVar1 == 8) {
      *param_2 = 0;
      param_2[1] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      uVar4 = 0x10;
      pwVar2 = L"UBOOL64";
    }
    else {
      local_res8 = *(undefined8 *)(param_1 + 0x18);
      FName::ToString(&local_res8,&local_18);
      puVar3 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar3 = local_18;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0xba,L"Unsupported UBoolProperty %s size %d.",puVar3,
                 CONCAT44(uVar5,*(undefined4 *)(param_1 + 0x34)));
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_res8 = *(undefined8 *)(param_1 + 0x18);
      FName::ToString(&local_res8,&local_18);
      puVar3 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar3 = local_18;
      }
      FDebug::AssertFailed
                (&DAT_144d11bf6,"Unknown",0xba,L"Unsupported UBoolProperty %s size %d.",puVar3,
                 *(undefined4 *)(param_1 + 0x34));
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      *param_2 = 0;
      param_2[1] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      uVar4 = 0x10;
      pwVar2 = L"UBOOL32";
    }
  }
  FGenericPlatformString::Memcpy(*param_2,pwVar2,uVar4);
  return param_2;
}



// FUNCTION 1417563a0 GetCPPMacroType body=328 status=ok
// SIG undefined GetCPPMacroType(void)

undefined8 * UProperty::GetCPPMacroType(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  void *_Dst;
  int iVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  undefined8 local_res8;
  void *local_28;
  int local_20;
  
  iVar3 = 0;
  if ((undefined4 *)*param_3 != &DAT_144d110c4) {
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) != 2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3,2);
      iVar3 = (int)param_3[1];
    }
    *(int *)(param_3 + 1) = iVar3 + 2;
    if (*(int *)((longlong)param_3 + 0xc) < iVar3 + 2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3);
    }
    *(undefined4 *)*param_3 = 0x55;
  }
  local_res8 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
  FName::ToString(&local_res8,&local_28);
  _Src = local_28;
  iVar3 = 0;
  if (local_20 != 0) {
    iVar3 = local_20 + -1;
  }
  if (iVar3 != 0) {
    iVar1 = (int)param_3[1];
    iVar2 = (uint)(iVar1 == 0) + iVar1 + iVar3;
    *(int *)(param_3 + 1) = iVar2;
    if (*(int *)((longlong)param_3 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
    }
    _Dst = (void *)(*param_3 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar3 * 2);
    *(undefined2 *)((longlong)iVar3 * 2 + (longlong)_Dst) = 0;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  *param_2 = 0;
  param_2[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"PROPERTY",0x12);
  return param_2;
}



// FUNCTION 1417564f0 FUN_1417564f0 body=255 status=ok
// SIG undefined FUN_1417564f0(void)

undefined8 FUN_1417564f0(longlong param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_48;
  longlong local_40;
  longlong local_38 [4];
  
  lVar2 = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  local_48 = 0;
  local_40 = 0;
  if (param_3 != 0) {
    plVar1 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x70) + 0x298))
                       (*(longlong **)(param_1 + 0x70),local_38 + 2,local_38,param_4 & 0xfffffffd);
    if (&local_48 != plVar1) {
      lVar2 = *plVar1;
      *plVar1 = 0;
      local_40 = plVar1[1];
      plVar1[1] = 0;
      local_48 = lVar2;
    }
    if (local_38[2] != 0) {
      FMemory::Free();
    }
  }
  UArrayProperty::GetCPPTypeCustom(param_1,param_2,param_3,param_4,&local_48,local_38);
  if (lVar2 != 0) {
    FMemory::Free(lVar2);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1417565f0 GetCPPType body=542 status=ok
// SIG undefined GetCPPType(void)

undefined8 *
UBoolProperty::GetCPPType(longlong param_1,undefined8 *param_2,undefined8 param_3,byte param_4)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined2 *puVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar5;
  undefined2 *local_18;
  int local_10;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  if ((*(char *)(param_1 + 0x73) == -1) || ((param_4 & 0x80) != 0 || (param_4 & 6) == 6)) {
    *param_2 = 0;
    param_2[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    uVar4 = 10;
    pwVar2 = L"bool";
  }
  else {
    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 == 1) {
      *param_2 = 0;
      param_2[1] = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      uVar4 = 0xc;
      pwVar2 = L"uint8";
    }
    else if (iVar1 == 2) {
      *param_2 = 0;
      param_2[1] = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      uVar4 = 0xe;
      pwVar2 = L"uint16";
    }
    else if (iVar1 == 4) {
      *param_2 = 0;
      param_2[1] = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      uVar4 = 0xe;
      pwVar2 = L"uint32";
    }
    else if (iVar1 == 8) {
      *param_2 = 0;
      param_2[1] = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      uVar4 = 0xe;
      pwVar2 = L"uint64";
    }
    else {
      local_res8 = *(undefined8 *)(param_1 + 0x18);
      FName::ToString(&local_res8,&local_18);
      puVar3 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar3 = local_18;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x9a,L"Unsupported UBoolProperty %s size %d.",puVar3,
                 CONCAT44(uVar5,*(undefined4 *)(param_1 + 0x34)));
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_res8 = *(undefined8 *)(param_1 + 0x18);
      FName::ToString(&local_res8,&local_18);
      puVar3 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar3 = local_18;
      }
      FDebug::AssertFailed
                (&DAT_144d11bcf,"Unknown",0x9a,L"Unsupported UBoolProperty %s size %d.",puVar3,
                 *(undefined4 *)(param_1 + 0x34));
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      *param_2 = 0;
      param_2[1] = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      uVar4 = 0xe;
      pwVar2 = L"uint32";
    }
  }
  FGenericPlatformString::Memcpy(*param_2,pwVar2,uVar4);
  return param_2;
}



// FUNCTION 141756810 GetCPPType body=589 status=ok
// SIG undefined GetCPPType(void)

undefined8 *
UByteProperty::GetCPPType(longlong param_1,undefined8 *param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  undefined2 **ppuVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined2 *puVar9;
  int iVar10;
  bool bVar11;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  int local_4c;
  longlong local_48 [2];
  longlong local_38 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x70);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x50);
    lVar2 = *(longlong *)(lVar2 + 0x10);
    lVar5 = UEnum::GetPrivateStaticClass();
    bVar11 = lVar2 == lVar5;
    if (((param_4 & 2) == 0) ||
       ((((*(ulonglong *)(param_1 + 0x38) >> 10 & 1) == 0 &&
         ((~(byte)(*(ulonglong *)(param_1 + 0x38) >> 8) & 1) == 0)) && (bVar11)))) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((param_4 & 0x80) == 0) || (bVar11)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    lVar2 = *(longlong *)(param_1 + 0x70);
    puVar7 = (undefined2 *)0x0;
    iVar8 = 0;
    local_58 = (undefined2 *)0x0;
    local_4c = 0;
    if (*(int *)(lVar2 + 0x38) < 2) {
      if (((param_4 & 0x80) == 0) || (bVar11)) {
        local_60 = *(undefined8 *)(lVar2 + 0x18);
        FName::ToString(&local_60,&local_58);
        puVar7 = local_58;
        iVar8 = local_50;
        iVar10 = local_4c;
      }
      else {
        local_60 = *(undefined8 *)(lVar2 + 0x18);
        FName::ToString(&local_60,local_48);
        ppuVar6 = (undefined2 **)UnicodeToCPPIdentifier(local_38,local_48,0,&DAT_144d16aa0);
        iVar10 = iVar8;
        if (&local_58 != ppuVar6) {
          puVar7 = *ppuVar6;
          *ppuVar6 = (undefined2 *)0x0;
          iVar8 = *(int *)(ppuVar6 + 1);
          iVar10 = *(int *)((longlong)ppuVar6 + 0xc);
          ppuVar6[1] = (undefined2 *)0x0;
        }
        if (local_38[0] != 0) {
          FMemory::Free();
        }
        if (local_48[0] != 0) {
          FMemory::Free();
        }
      }
    }
    else {
      iVar8 = 0;
      iVar10 = 0;
      if (&local_58 != (undefined2 **)(lVar2 + 0x30)) {
        local_50 = *(int *)(lVar2 + 0x38);
        lVar5 = (longlong)local_50;
        puVar9 = *(undefined2 **)(lVar2 + 0x30);
        puVar7 = (undefined2 *)0x0;
        iVar8 = local_50;
        if (local_50 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
          puVar7 = local_58;
          ::_guard_xfg_dispatch_icall_nop(local_58,puVar9,lVar5 * 2);
          iVar8 = local_50;
          iVar10 = local_4c;
        }
      }
    }
    if (((iVar1 == 2) || (bVar4)) || (bVar3)) {
      *param_2 = puVar7;
      *(int *)(param_2 + 1) = iVar8;
      *(int *)((longlong)param_2 + 0xc) = iVar10;
    }
    else {
      puVar9 = &DAT_143f3eda8;
      if (iVar8 != 0) {
        puVar9 = puVar7;
      }
      FString::PrintfImpl(param_2,L"TEnumAsByte<%s>",puVar9);
      if (puVar7 != (undefined2 *)0x0) {
        FMemory::Free(puVar7);
      }
    }
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"uint8",0xc);
  return param_2;
}



// FUNCTION 141756a60 GetCPPTypeCustom body=1120 status=ok
// SIG undefined GetCPPTypeCustom(void)

undefined8 *
UArrayProperty::GetCPPTypeCustom
          (undefined8 param_1,undefined8 *param_2,undefined2 **param_3,undefined8 param_4,
          undefined8 *param_5,undefined8 *param_6)

{
  short *psVar1;
  void *_Src;
  bool bVar2;
  bool bVar3;
  wint_t wVar4;
  wint_t wVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  wint_t *pwVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  uint uVar17;
  undefined2 *local_60;
  int local_58;
  int local_54;
  undefined2 *local_50;
  undefined8 local_48;
  
  puVar16 = (undefined2 *)0x0;
  if (param_3 == (undefined2 **)0x0) goto LAB_141756e88;
  local_60 = (undefined2 *)0x0;
  local_58 = *(int *)(param_6 + 1);
  lVar13 = (longlong)local_58;
  _Src = (void *)*param_6;
  if (local_58 == 0) {
    local_54 = 0;
    puVar15 = puVar16;
    iVar12 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_60,local_58,0,param_4,0);
    puVar15 = local_60;
    ::_guard_xfg_dispatch_icall_nop(local_60,_Src,lVar13 * 2);
    iVar12 = local_58;
  }
  lVar13 = -1;
  puVar7 = local_50;
  if ((iVar12 != 0) && (iVar8 = iVar12 + -1, iVar8 != 0)) {
    iVar6 = iVar8;
    if (1 < iVar8) {
      iVar6 = 1;
    }
    local_50 = (undefined2 *)0x0;
    local_48 = 0;
    psVar1 = puVar15 + ((longlong)iVar8 - (longlong)iVar6);
    puVar7 = (undefined2 *)0x0;
    if ((psVar1 != (short *)0x0) && (puVar7 = (undefined2 *)0x0, *psVar1 != 0)) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (psVar1[lVar10] != 0);
      uVar9 = (int)lVar10 + 1;
      local_48 = (ulonglong)uVar9;
      uVar17 = uVar9;
      if (0 < (int)uVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
        uVar17 = (uint)local_48;
      }
      puVar7 = local_50;
      FGenericPlatformString::Memcpy(local_50,psVar1,(longlong)(int)uVar9 * 2);
      puVar16 = puVar7;
      if (uVar17 != 0) goto LAB_141756b89;
    }
    puVar16 = &DAT_143f3eda8;
LAB_141756b89:
    pwVar11 = &DAT_144d11cc4;
    do {
      wVar4 = *(wint_t *)((longlong)(puVar16 + -0xa2688e62) + (longlong)pwVar11);
      if ((wVar4 == 0) && (*pwVar11 == 0)) {
        iVar8 = 0;
        goto LAB_141756bda;
      }
      if (wVar4 != *pwVar11) {
        wVar4 = towlower(wVar4);
        wVar5 = towlower(*pwVar11);
        if (wVar4 != wVar5) goto LAB_141756bce;
      }
      pwVar11 = pwVar11 + 1;
    } while( true );
  }
LAB_141756bf1:
  bVar2 = false;
  goto LAB_141756bf3;
LAB_141756d69:
  if (wVar4 != wVar5) goto LAB_141756d7c;
LAB_141756d74:
  bVar2 = true;
  goto LAB_141756d7e;
LAB_141756bce:
  iVar8 = (uint)wVar4 - (uint)wVar5;
LAB_141756bda:
  puVar16 = (undefined2 *)0x1;
  if (iVar8 != 0) goto LAB_141756bf1;
  bVar2 = true;
LAB_141756bf3:
  if ((puVar16 != (undefined2 *)0x0) && (puVar7 != (undefined2 *)0x0)) {
    FMemory::Free(puVar7);
  }
  bVar3 = false;
  if (bVar2) {
    local_58 = (2 - (uint)(iVar12 != 0)) + iVar12;
    if (local_54 < local_58) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,iVar12);
      puVar15 = local_60;
    }
    lVar13 = (longlong)iVar12 - (ulonglong)(iVar12 != 0);
    puVar15[lVar13] = 0x20;
    puVar15[lVar13 + 1] = 0;
    iVar12 = local_58;
  }
  else {
    puVar16 = local_50;
    if ((iVar12 == 0) || (iVar12 == 1)) {
      iVar6 = *(int *)(param_5 + 1);
      iVar8 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar8 = -1;
      }
      iVar14 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar14 = -1;
        iVar8 = 0;
      }
      if (iVar8 != 0) {
        bVar3 = true;
        if (iVar6 == 0) {
          puVar16 = &DAT_143f3eda8;
        }
        else {
          puVar16 = (undefined2 *)*param_5;
        }
        local_50 = (undefined2 *)0x0;
        local_48 = 0;
        if (iVar6 == 0) {
          iVar14 = 0;
        }
        iVar8 = iVar14;
        if (1 < iVar14) {
          iVar8 = 1;
        }
        psVar1 = puVar16 + ((longlong)iVar14 - (longlong)iVar8);
        puVar16 = (undefined2 *)0x0;
        if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
          do {
            lVar13 = lVar13 + 1;
          } while (psVar1[lVar13] != 0);
          uVar9 = (int)lVar13 + 1;
          local_48 = (ulonglong)uVar9;
          uVar17 = uVar9;
          if (0 < (int)uVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
            uVar17 = (uint)local_48;
          }
          puVar7 = local_50;
          FGenericPlatformString::Memcpy(local_50,psVar1,(longlong)(int)uVar9 * 2);
          puVar16 = puVar7;
          if (uVar17 != 0) goto LAB_141756d2d;
        }
        puVar7 = &DAT_143f3eda8;
LAB_141756d2d:
        pwVar11 = &DAT_144d11e34;
        do {
          wVar4 = *(wint_t *)((longlong)(puVar7 + -0xa2688f1a) + (longlong)pwVar11);
          if ((wVar4 == 0) && (*pwVar11 == 0)) goto LAB_141756d74;
          if (wVar4 != *pwVar11) {
            wVar4 = towlower(wVar4);
            wVar5 = towlower(*pwVar11);
            if (wVar4 != wVar5) goto LAB_141756d69;
          }
          pwVar11 = pwVar11 + 1;
        } while( true );
      }
    }
LAB_141756d7c:
    bVar2 = false;
LAB_141756d7e:
    if ((bVar3) && (puVar16 != (undefined2 *)0x0)) {
      FMemory::Free(puVar16);
    }
    if (bVar2) {
      local_58 = (iVar12 - (uint)(iVar12 != 0)) + 2;
      if (local_54 < local_58) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,iVar12);
        puVar15 = local_60;
      }
      lVar13 = (longlong)iVar12 - (ulonglong)(iVar12 != 0);
      puVar15[lVar13] = 0x20;
      puVar15[lVar13 + 1] = 0;
      iVar12 = local_58;
    }
  }
  puVar16 = &DAT_143f3eda8;
  if (iVar12 != 0) {
    puVar16 = puVar15;
  }
  if (*(int *)(param_5 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_5;
  }
  FString::PrintfImpl(&local_50,L"<%s%s>",puVar7,puVar16);
  if (param_3 == &local_50) {
    if (local_50 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (*param_3 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    *param_3 = local_50;
    *(uint *)(param_3 + 1) = (uint)local_48;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_48._4_4_;
  }
  if (puVar15 != (undefined2 *)0x0) {
    FMemory::Free(puVar15);
  }
LAB_141756e88:
  *param_2 = 0;
  param_2[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"TArray",0xe);
  return param_2;
}



// FUNCTION 141756ec0 FUN_141756ec0 body=107 status=ok
// SIG undefined FUN_141756ec0(void)

undefined8 * FUN_141756ec0(undefined8 param_1,undefined8 *param_2)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",
             0x7b5,L"Pure virtual not implemented (%s)",L"UObjectPropertyBase::GetCPPTypeCustom");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",
             0x7b5,L"Pure virtual not implemented (%s)",L"UObjectPropertyBase::GetCPPTypeCustom");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 141756f30 FUN_141756f30 body=31 status=ok
// SIG undefined FUN_141756f30(void)

undefined8 FUN_141756f30(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2a0))();
  return param_2;
}



// FUNCTION 141756f50 GetDefaultConfigFilename body=362 status=ok
// SIG undefined GetDefaultConfigFilename(void)

undefined8 UObject::GetDefaultConfigFilename(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *local_38;
  int local_30;
  longlong local_28 [2];
  longlong local_18 [2];
  
  GetFinalOverridePlatform(&local_38,param_1);
  if (local_30 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = local_30 + -1;
  }
  lVar3 = *(longlong *)(param_1 + 0x10) + 0xd0;
  if (iVar1 == 0) {
    puVar2 = (undefined8 *)FName::ToString(lVar3,local_28);
    puVar4 = &DAT_143f3eda8;
    if (*(int *)(puVar2 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*puVar2;
    }
    puVar2 = (undefined8 *)FPaths::ProjectConfigDir(local_18);
    if (*(int *)(puVar2 + 1) != 0) {
      puVar4 = (undefined2 *)*puVar2;
    }
    FString::PrintfImpl(param_2,L"%sDefault%s.ini",puVar4,puVar5);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    puVar2 = (undefined8 *)FName::ToString(lVar3,local_18);
    puVar4 = &DAT_143f3eda8;
    if (*(int *)(puVar2 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*puVar2;
    }
    puVar6 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar6 = local_38;
    }
    puVar2 = (undefined8 *)FPaths::ProjectConfigDir(local_28);
    if (*(int *)(puVar2 + 1) != 0) {
      puVar4 = (undefined2 *)*puVar2;
    }
    FString::PrintfImpl(param_2,L"%s%s/%s%s.ini",puVar4,puVar6,puVar6,puVar5);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free(local_38);
  }
  return param_2;
}



// FUNCTION 1417570c0 GetDefaultSubobjectByName body=282 status=ok
// SIG undefined GetDefaultSubobjectByName(void)

longlong UObject::GetDefaultSubobjectByName(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong **local_res18 [2];
  uint in_stack_ffffffffffffffb8;
  longlong *local_28;
  undefined8 local_20;
  code *local_18;
  longlong ***ppplStack_10;
  
  if ((DAT_1469e7e10 == '\0') && (cVar1 = IsGarbageCollecting(), cVar1 == '\0')) {
    uVar2 = GetPrivateStaticClass();
    lVar3 = FUN_141799680(uVar2,param_1,param_2,0,in_stack_ffffffffffffffb8 & 0xffffff00,0,0);
    lVar5 = 0;
    if ((lVar3 != 0) && (cVar1 = FUN_141790310(lVar3), lVar5 = 0, cVar1 != '\0')) {
      return lVar3;
    }
  }
  else {
    local_res18[0] = &local_28;
    local_28 = (longlong *)0x0;
    ppplStack_10 = local_res18;
    local_20 = 0;
    local_18 = FUN_141750620;
    FUN_1417a4830(param_1,&local_18,0,0,0);
    for (plVar4 = local_28;
        (lVar5 = 0, plVar4 != local_28 + (int)local_20 &&
        (lVar5 = *plVar4, *(longlong *)(lVar5 + 0x18) != param_2)); plVar4 = plVar4 + 1) {
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  return lVar5;
}



// FUNCTION 1417571e0 FUN_1417571e0 body=115 status=ok
// SIG undefined FUN_1417571e0(void)

void FUN_1417571e0(undefined8 param_1,longlong param_2)

{
  longlong local_res10 [3];
  code *local_18;
  longlong *plStack_10;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_2 + 0xc)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  plStack_10 = local_res10;
  local_18 = FUN_141750620;
  local_res10[0] = param_2;
  FUN_1417a4830(param_1,&local_18,0,0,0);
  return;
}



// FUNCTION 141757260 FUN_141757260 body=210 status=ok
// SIG undefined FUN_141757260(void)

longlong * FUN_141757260(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong local_18 [2];
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1 == (longlong *)0x0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,5);
    iVar2 = (int)param_2[1] + 5;
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
    puVar1 = (undefined8 *)*param_2;
    *puVar1 = 0x65006e006f004e;
    *(undefined2 *)(puVar1 + 1) = 0;
  }
  else {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x40))(param_1,local_18);
    if (param_2 != plVar3) {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = *plVar3;
      *plVar3 = 0;
      *(int *)(param_2 + 1) = (int)plVar3[1];
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar3 + 0xc);
      plVar3[1] = 0;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 141757340 FUN_141757340 body=422 status=ok
// SIG undefined FUN_141757340(void)

undefined8
FUN_141757340(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
             ulonglong param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  undefined2 *local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  if ((param_5 & 8) == 0) {
LAB_1417573c7:
    param_4 = 0;
    if (((param_5 & 0x2000) != 0) && (param_3 != 0)) {
      param_4 = UObjectBaseUtility::GetOutermost(param_3);
    }
  }
  else {
    if (param_4 == 0) {
      if (param_3 != 0) {
        param_4 = UObjectBaseUtility::GetOutermost(param_3);
      }
      if (param_4 != 0) goto LAB_141757388;
    }
    else {
LAB_141757388:
      cVar1 = UObjectBaseUtility::IsIn(param_2,param_4);
      if ((cVar1 == '\0') &&
         ((param_4 = *(longlong *)(param_4 + 0x20), param_4 == 0 ||
          (cVar1 = UObjectBaseUtility::IsIn(param_2,param_4), cVar1 == '\0')))) goto LAB_1417573c7;
    }
    if ((param_3 != 0) && (cVar1 = UObjectBaseUtility::IsIn(param_2,param_3), cVar1 != '\0')) {
      param_4 = param_3;
    }
  }
  UObjectBaseUtility::GetPathName(param_2,&local_38,param_4);
  if ((param_5 & 2) != 0) {
    puVar2 = (undefined8 *)FString::ReplaceQuotesWithEscapedQuotes(&local_38,local_18);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar2;
    }
    FString::PrintfImpl(&local_28,L"\"%s\"",puVar4);
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_38 = local_28;
    local_30 = (int)local_20;
    local_2c = local_20._4_4_;
    local_20 = 0;
    local_28 = (undefined2 *)0x0;
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  puVar4 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar4 = local_38;
  }
  param_5 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x18);
  FName::ToString(&param_5,&local_28);
  puVar3 = &DAT_143f3eda8;
  if ((int)local_20 != 0) {
    puVar3 = local_28;
  }
  FString::PrintfImpl(param_1,L"%s\'%s\'",puVar3,puVar4);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1417574f0 GetFinalOverridePlatform body=377 status=ok
// SIG undefined GetFinalOverridePlatform(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * GetFinalOverridePlatform(undefined8 *param_1,longlong *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  short *_Src;
  int iVar6;
  int iVar7;
  undefined1 auStack_188 [32];
  undefined2 local_168;
  undefined4 local_158;
  undefined1 local_148 [256];
  longlong local_48;
  undefined1 *local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  iVar7 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_158 = 0;
  lVar4 = (**(code **)(*param_2 + 0x200))(param_2);
  iVar6 = iVar7;
  if (lVar4 != 0) {
    local_40 = local_148;
    local_48 = 0;
    local_38 = 7;
    local_168 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_148,8,"Windows");
    puVar2 = local_40;
    uVar5 = (**(code **)(*param_2 + 0x200))(param_2);
    iVar6 = 1;
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(uVar5,puVar2);
    if (iVar3 != 0) {
      bVar1 = true;
      goto LAB_1417575af;
    }
  }
  bVar1 = false;
LAB_1417575af:
  if ((iVar6 != 0) && (local_48 != 0)) {
    FMemory::Free();
  }
  if ((bVar1) &&
     (_Src = (short *)(**(code **)(*param_2 + 0x200))(param_2), (short *)*param_1 != _Src)) {
    iVar6 = iVar7;
    if ((_Src != (short *)0x0) && (*_Src != 0)) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (_Src[lVar4] != 0);
      iVar6 = (int)lVar4 + 1;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,iVar6);
      iVar7 = *(int *)(param_1 + 1);
    }
    *(int *)(param_1 + 1) = iVar6 + iVar7;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar7);
    }
    if (iVar6 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar6 * 2);
    }
  }
  return param_1;
}



// FUNCTION 1417576a0 GetLinkerCustomVersion body=187 status=ok
// SIG undefined GetLinkerCustomVersion(void)

undefined4 UObjectBaseUtility::GetLinkerCustomVersion(longlong param_1)

{
  DWORD DVar1;
  longlong lVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  
  lVar2 = FUN_1417a53c0();
  if ((lVar2 == 0) &&
     ((lVar2 = GetOutermost(param_1), lVar2 != param_1 ||
      (lVar2 = FLinkerLoad::FindExistingLinkerForPackage(param_1), lVar2 == 0)))) {
    lVar2 = GetOutermost(param_1);
    if ((lVar2 == 0) || (lVar2 = GetOutermost(param_1), *(int *)(lVar2 + 0x78) == 0)) {
      FCustomVersionContainer::GetRegistered();
      DVar1 = FCustomVersionContainer::GetVersion();
      lVar2 = CONCAT44(extraout_var,DVar1);
      goto LAB_14175771f;
    }
    GetOutermost(param_1);
  }
  DVar1 = FCustomVersionContainer::GetVersion();
  lVar2 = CONCAT44(extraout_var_00,DVar1);
  if (lVar2 == 0) {
    return 0xffffffff;
  }
LAB_14175771f:
  return *(undefined4 *)(lVar2 + 0x10);
}



// FUNCTION 141757760 GetLinkerUE4Version body=99 status=ok
// SIG undefined GetLinkerUE4Version(void)

undefined4 UObjectBaseUtility::GetLinkerUE4Version(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1417a53c0();
  if (lVar1 == 0) {
    lVar1 = GetOutermost(param_1);
    if (lVar1 == param_1) {
      lVar1 = FLinkerLoad::FindExistingLinkerForPackage(param_1);
      if (lVar1 != 0) goto LAB_1417577b7;
    }
    lVar1 = GetOutermost(param_1);
    if (lVar1 != 0) {
      lVar1 = GetOutermost(param_1);
      return *(undefined4 *)(lVar1 + 0x68);
    }
    return 0x204;
  }
LAB_1417577b7:
  return *(undefined4 *)(lVar1 + 0x240);
}



// FUNCTION 1417577d0 GetMinAlignment body=295 status=ok
// SIG undefined GetMinAlignment(void)

undefined8 UBoolProperty::GetMinAlignment(longlong param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar3;
  undefined2 *local_18;
  int local_10;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 == 1) {
    return 1;
  }
  if (iVar1 == 2) {
    return 2;
  }
  if (iVar1 == 4) {
    return 4;
  }
  if (iVar1 != 8) {
    local_res8 = *(undefined8 *)(param_1 + 0x18);
    FName::ToString(&local_res8,&local_18);
    puVar2 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar2 = local_18;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x59,L"Unsupported UBoolProperty %s size %d.",puVar2,
               CONCAT44(uVar3,*(undefined4 *)(param_1 + 0x34)));
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_res8 = *(undefined8 *)(param_1 + 0x18);
    FName::ToString(&local_res8,&local_18);
    puVar2 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar2 = local_18;
    }
    FDebug::AssertFailed
              (&DAT_144d11bce,"Unknown",0x59,L"Unsupported UBoolProperty %s size %d.",puVar2,
               *(undefined4 *)(param_1 + 0x34));
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    return 0;
  }
  return 8;
}



// FUNCTION 141757900 FUN_141757900 body=192 status=ok
// SIG undefined FUN_141757900(void)

undefined8 FUN_141757900(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  longlong local_38 [2];
  longlong *local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  uVar1 = 0;
  if ((param_3 >> 0xd & 1) != 0) {
    uVar1 = UObjectBaseUtility::GetOutermost();
  }
  local_38[0] = 0;
  local_38[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"DestinationObject",0x24);
  local_28 = local_38;
  local_20 = UObjectBaseUtility::GetFullName(*(undefined8 *)(param_1 + 0x28),local_18,uVar1);
  FUN_140497620(param_2,local_res8,&local_28,0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 1417579c0 GetNumericPropertyValueToString body=37 status=ok
// SIG undefined GetNumericPropertyValueToString(void)

undefined8
TProperty_Numeric<unsigned_char>::GetNumericPropertyValueToString
          (undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  FString::PrintfImpl(param_2,&DAT_144732490,*param_3);
  return param_2;
}



// FUNCTION 1417579f0 GetPlaceholderAsUObject body=85 status=ok
// SIG undefined GetPlaceholderAsUObject(void)

undefined8 FLinkerPlaceholderBase::GetPlaceholderAsUObject(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime/CoreUObject/Private/UObject/LinkerPlaceholderBase.h"
             ,0x79,L"Pure virtual not implemented (%s)",
             L"FLinkerPlaceholderBase::GetPlaceholderAsUObject");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime/CoreUObject/Private/UObject/LinkerPlaceholderBase.h"
             ,0x79,L"Pure virtual not implemented (%s)",
             L"FLinkerPlaceholderBase::GetPlaceholderAsUObject");
  return 0;
}



// FUNCTION 141757a60 GetPreloadDependencies body=78 status=ok
// SIG undefined GetPreloadDependencies(void)

void UArrayProperty::GetPreloadDependencies(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  UObject::GetPreloadDependencies();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 141757ab0 GetPreloadDependencies body=156 status=ok
// SIG undefined GetPreloadDependencies(void)

void UObject::GetPreloadDependencies(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if ((*(uint *)(lVar2 + 0xb4) >> 0x1c & 1) == 0) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
    if ((((*(uint *)(param_1 + 8) >> 4 & 1) == 0) &&
        (lVar3 = *(longlong *)(lVar2 + 0xf8), lVar3 != 0)) && (0 < *(int *)(lVar2 + 0x40))) {
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
    }
  }
  return;
}



// FUNCTION 141757b50 GetPrimaryAssetId body=156 status=ok
// SIG undefined GetPrimaryAssetId(void)

undefined8 * UObject::GetPrimaryAssetId(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if ((DAT_1469e9040 != 0) && (DAT_1469e9038 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*DAT_1469e9038 + 0x18))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0x180))();
      if ((cVar1 != '\0') ||
         (((*(uint *)(param_1 + 1) >> 4 & 1) != 0 && ((*(uint *)(param_1[2] + 0xb4) >> 7 & 1) == 0))
         )) {
        plVar2 = (longlong *)0x0;
        if (DAT_1469e9040 != 0) {
          plVar2 = DAT_1469e9038;
        }
        (**(code **)(*plVar2 + 0x38))(plVar2,param_2,param_1);
        return param_2;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 141757bf0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UArrayProperty::GetPrivateStaticClass(void)

{
  if (DAT_1469e7b30 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"ArrayProperty",&DAT_1469e7b30,
                  AK::MemoryMgr::StartProfileThreadUsage,0x78,0x10000000,0x200000,L"Engine",
                  FUN_14174ba30,InternalVTableHelperCtorCaller<UArrayProperty>,AddReferencedObjects,
                  UProperty::StaticClass,FUN_14171c410,0);
  }
  return DAT_1469e7b30;
}



// FUNCTION 141757ca0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBoolProperty::GetPrivateStaticClass(void)

{
  if (DAT_1469e7b50 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"BoolProperty",&DAT_1469e7b50,
                  AK::MemoryMgr::StartProfileThreadUsage,0x78,0x10000000,0x20000,L"Engine",
                  InternalConstructor<UBoolProperty>,InternalVTableHelperCtorCaller<UBoolProperty>,
                  AK::MemoryMgr::StartProfileThreadUsage,UProperty::StaticClass,FUN_14171c410,0);
  }
  return DAT_1469e7b50;
}



// FUNCTION 141757d50 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UByteProperty::GetPrivateStaticClass(void)

{
  if (DAT_1469e7b60 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"ByteProperty",&DAT_1469e7b60,
                  AK::MemoryMgr::StartProfileThreadUsage,0x78,0x10000000,0x40,L"Engine",
                  FUN_14174bb10,InternalVTableHelperCtorCaller<UByteProperty>,
                  UArrayProperty::AddReferencedObjects,UNumericProperty::StaticClass,FUN_14171c410,0
                 );
  }
  return DAT_1469e7b60;
}



// FUNCTION 141757e00 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ULinkerPlaceholderClass::GetPrivateStaticClass(void)

{
  if (DAT_1469e7a98 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"LinkerPlaceholderClass",&DAT_1469e7a98,
                  AK::MemoryMgr::StartProfileThreadUsage,0x3b8,0x10000000,0,L"Engine",
                  InternalConstructor<ULinkerPlaceholderClass>,&LAB_14174c030,FUN_1417169e0,
                  FUN_14171bfe0,UPackage::StaticClass,0);
  }
  return DAT_1469e7a98;
}



// FUNCTION 141757eb0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ULinkerPlaceholderExportObject::GetPrivateStaticClass(void)

{
  if (DAT_1469e7aa8 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"LinkerPlaceholderExportObject",&DAT_1469e7aa8,
                  AK::MemoryMgr::StartProfileThreadUsage,0xf0,0x10000000,0,L"Engine",
                  InternalConstructor<ULinkerPlaceholderExportObject>,
                  InternalVTableHelperCtorCaller<ULinkerPlaceholderExportObject>,
                  AK::MemoryMgr::StartProfileThreadUsage,&LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1469e7aa8;
}



// FUNCTION 141757f50 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ULinkerPlaceholderFunction::GetPrivateStaticClass(void)

{
  if (DAT_1469e7ab8 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"LinkerPlaceholderFunction",&DAT_1469e7ab8,
                  AK::MemoryMgr::StartProfileThreadUsage,0x270,0x10000000,0,L"Engine",
                  __DefaultConstructor,InternalVTableHelperCtorCaller<ULinkerPlaceholderFunction>,
                  AK::MemoryMgr::StartProfileThreadUsage,FUN_14171c5d0,FUN_14171bfe0,0);
  }
  return DAT_1469e7ab8;
}



// FUNCTION 141758000 FUN_141758000 body=151 status=ok
// SIG undefined FUN_141758000(void)

longlong FUN_141758000(void)

{
  if (DAT_1469e7ac8 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"MetaData",&DAT_1469e7ac8,
                  AK::MemoryMgr::StartProfileThreadUsage,0x118,0x10000000,0,L"Engine",FUN_14174bcc0,
                  FUN_14174c220,AK::MemoryMgr::StartProfileThreadUsage,&LAB_140447700,&LAB_140447700
                  ,0);
  }
  return DAT_1469e7ac8;
}



// FUNCTION 1417580a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UObjectPropertyBase::GetPrivateStaticClass(void)

{
  if (DAT_1469e7b40 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"ObjectPropertyBase",&DAT_1469e7b40,
                  AK::MemoryMgr::StartProfileThreadUsage,0x78,0x10000001,0x4000000,L"Engine",
                  FUN_14174bd80,InternalVTableHelperCtorCaller<UObjectPropertyBase>,
                  UArrayProperty::AddReferencedObjects,UProperty::StaticClass,FUN_14171c410,0);
  }
  return DAT_1469e7b40;
}



// FUNCTION 141758150 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UObjectRedirector::GetPrivateStaticClass(void)

{
  if (DAT_1469e7b00 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"ObjectRedirector",&DAT_1469e7b00,
                  AK::MemoryMgr::StartProfileThreadUsage,0x30,0x10000000,0,L"Engine",FUN_14174bdc0,
                  InternalVTableHelperCtorCaller<UObjectRedirector>,
                  AK::MemoryMgr::StartProfileThreadUsage,&LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1469e7b00;
}



// FUNCTION 1417581f0 GetPrivateStaticClass body=161 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UPackage::GetPrivateStaticClass(void)

{
  if (DAT_1469e7b10 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"Package",&DAT_1469e7b10,
                  AK::MemoryMgr::StartProfileThreadUsage,0x90,0x10000000,0x400000000,L"Engine",
                  InternalConstructor<UPackage>,InternalVTableHelperCtorCaller<UPackage>,
                  AK::MemoryMgr::StartProfileThreadUsage,&LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1469e7b10;
}



// FUNCTION 1417582a0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UProperty::GetPrivateStaticClass(void)

{
  if (DAT_1469e7b20 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"Property",&DAT_1469e7b20,
                  AK::MemoryMgr::StartProfileThreadUsage,0x70,0x10000001,0x8000,L"Engine",
                  InternalConstructor<UProperty>,InternalVTableHelperCtorCaller<UProperty>,
                  AK::MemoryMgr::StartProfileThreadUsage,FUN_14171c410,FUN_14171c410,0);
  }
  return DAT_1469e7b20;
}



// FUNCTION 141758340 FUN_141758340 body=280 status=ok
// SIG undefined FUN_141758340(void)

void FUN_141758340(longlong *param_1,int *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined **local_a8 [5];
  byte local_7e;
  undefined8 local_18;
  longlong local_10;
  
  if (*param_2 == 1) {
    FArchive::FArchive(local_a8);
    local_7e = local_7e | 0x20;
    uVar3 = 0;
    local_a8[0] = &PTR_FUN_1440265a0;
    local_18 = 0;
    local_10 = 0;
    if (param_1 != (longlong *)0x0) {
      (**(code **)(*param_1 + 0xa8))(param_1,local_a8);
    }
    *(longlong *)(param_2 + 2) = *(longlong *)(param_2 + 2) + local_10;
    local_b8 = (undefined8 *)0x0;
    local_b0 = 0;
    FUN_1417a5b30(param_1,&local_b8,0,0,0);
    uVar2 = (ulonglong)((longlong)(local_b8 + (int)local_b0) + (7 - (longlong)local_b8)) >> 3;
    if (local_b8 + (int)local_b0 < local_b8) {
      uVar2 = uVar3;
    }
    puVar1 = local_b8;
    if (uVar2 != 0) {
      do {
        (**(code **)(*(longlong *)*puVar1 + 0x158))((longlong *)*puVar1,param_2);
        uVar3 = uVar3 + 1;
        puVar1 = puVar1 + 1;
      } while (uVar3 != uVar2);
    }
    if (local_b8 != (undefined8 *)0x0) {
      FMemory::Free(local_b8);
    }
    FArchive::~FArchive(local_a8);
  }
  return;
}



// FUNCTION 141758460 GetSignedIntPropertyValue body=4 status=ok
// SIG undefined GetSignedIntPropertyValue(void)

undefined1
TProperty_Numeric<unsigned_char>::GetSignedIntPropertyValue(undefined8 param_1,undefined1 *param_2)

{
  return *param_2;
}



// FUNCTION 141758470 GetTransientPackage body=8 status=ok
// SIG undefined GetTransientPackage(void)

undefined8 GetTransientPackage(void)

{
  return DAT_1469e7a80;
}



// FUNCTION 141758480 GetTypeHash body=315 status=ok
// SIG undefined GetTypeHash(void)

ulonglong GetTypeHash(ulonglong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  
  puVar8 = (ulonglong *)*param_1;
  uVar1 = 0;
  uVar7 = (longlong)(int)param_1[1] & 0x1fffffffffffffff;
  if (puVar8 + (int)param_1[1] < puVar8) {
    uVar7 = uVar1;
  }
  uVar4 = uVar1;
  if (uVar7 != 0) {
    do {
      iVar2 = (int)(*puVar8 >> 4);
      uVar5 = 0x9e3779b9U - iVar2 ^ iVar2 << 8;
      uVar6 = -(uVar5 + iVar2) ^ uVar5 >> 0xd;
      uVar3 = (iVar2 - uVar5) - uVar6 ^ uVar6 >> 0xc;
      uVar5 = (uVar5 - uVar3) - uVar6 ^ uVar3 << 0x10;
      uVar6 = (uVar6 - uVar5) - uVar3 ^ uVar5 >> 5;
      uVar3 = (uVar3 - uVar5) - uVar6 ^ uVar6 >> 3;
      uVar5 = (uVar5 - uVar3) - uVar6 ^ uVar3 << 10;
      uVar6 = (uVar6 - uVar5) - uVar3 ^ uVar5 >> 0xf;
      uVar3 = (int)uVar1 - uVar6 ^ uVar6 >> 0xd;
      uVar5 = (-0x61c88647 - uVar3) - uVar6 ^ uVar3 << 8;
      uVar6 = (uVar6 - uVar5) - uVar3 ^ uVar5 >> 0xd;
      uVar3 = (uVar3 - uVar5) - uVar6 ^ uVar6 >> 0xc;
      uVar5 = (uVar5 - uVar3) - uVar6 ^ uVar3 << 0x10;
      uVar6 = (uVar6 - uVar5) - uVar3 ^ uVar5 >> 5;
      uVar3 = (uVar3 - uVar5) - uVar6 ^ uVar6 >> 3;
      uVar5 = (uVar5 - uVar3) - uVar6 ^ uVar3 << 10;
      puVar8 = puVar8 + 1;
      uVar4 = uVar4 + 1;
      uVar1 = (ulonglong)((uVar6 - uVar5) - uVar3 ^ uVar5 >> 0xf);
    } while (uVar4 != uVar7);
  }
  return uVar1;
}



// FUNCTION 1417585c0 GetTypeHash body=293 status=ok
// SIG undefined GetTypeHash(void)

uint GetTypeHash(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (int)((ulonglong)*param_1 >> 0x20) + (int)*param_1;
  uVar2 = uVar3 >> 0xd ^ -uVar3;
  uVar1 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar3 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar4 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar3 = (uVar2 - uVar1) - uVar4 ^ uVar4 >> 3;
  uVar1 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 10;
  uVar2 = (int)((ulonglong)param_1[1] >> 0x20) + (int)param_1[1];
  uVar4 = ((uVar4 - uVar1) - uVar3 ^ uVar1 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
  uVar3 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar1 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar1 >> 0xc;
  uVar2 = (uVar3 - uVar4) - uVar1 ^ uVar4 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar3 = (uVar4 - uVar2) - uVar1 ^ uVar1 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 << 10;
  return (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xf;
}



// FUNCTION 1417586f0 FUN_1417586f0 body=10 status=ok
// SIG undefined FUN_1417586f0(void)

void FUN_1417586f0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001417586f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2f8))();
  return;
}



// FUNCTION 141758700 FUN_141758700 body=22 status=ok
// SIG undefined FUN_141758700(void)

undefined8 FUN_141758700(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014175870c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x148))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 141758720 GetWorldChecked body=32 status=ok
// SIG undefined GetWorldChecked(void)

void UObject::GetWorldChecked(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  *(bool *)param_2 = lVar1 != 0;
  return;
}



// FUNCTION 141758740 HandleObjectReference body=201 status=ok
// SIG undefined HandleObjectReference(void)

void FSubobjectReferenceFinder::HandleObjectReference
               (longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  
  if ((*param_2 != 0) && (cVar5 = FUN_141790310(), cVar5 != '\0')) {
    plVar6 = (longlong *)**(longlong **)(param_1 + 0x18);
    plVar4 = plVar6 + (int)(*(longlong **)(param_1 + 0x18))[1];
    if (plVar6 != plVar4) {
      do {
        if (*plVar6 == *param_2) {
          return;
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar4);
    }
    cVar5 = UObjectBaseUtility::IsIn(*param_2,*(undefined8 *)(param_1 + 0x20));
    if (cVar5 == '\0') {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
      lVar3 = *(longlong *)(*param_2 + 0x20);
      if (((lVar2 != lVar3) && (*param_2 != lVar2)) &&
         ((param_3 == 0 ||
          ((lVar2 = *(longlong *)(lVar3 + 0x10), param_3 != lVar2 &&
           (*(longlong *)(param_1 + 0x20) != lVar2)))))) {
        plVar4 = *(longlong **)(param_1 + 0x18);
        iVar1 = (int)plVar4[1];
        *(int *)(plVar4 + 1) = iVar1 + 1;
        if (*(int *)((longlong)plVar4 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar1);
        }
        *(longlong *)(*plVar4 + (longlong)iVar1 * 8) = *param_2;
      }
    }
  }
  return;
}



// FUNCTION 1417588a0 FUN_1417588a0 body=201 status=ok
// SIG undefined FUN_1417588a0(void)

bool FUN_1417588a0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  iVar1 = (int)param_2[1];
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x34);
  if (param_3 == (longlong *)0x0) {
    return iVar1 == 0;
  }
  if (iVar1 == (int)param_3[1]) {
    iVar6 = 0;
    if (0 < iVar1) {
      iVar7 = 0;
      iVar8 = 0;
      do {
        if ((int)param_3[1] == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = (longlong)iVar8 + *param_3;
        }
        if ((int)param_2[1] == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = (longlong)iVar7 + *param_2;
        }
        cVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2b8))
                          (*(longlong **)(param_1 + 0x70),lVar5,lVar9,param_4);
        if (cVar3 == '\0') goto LAB_14175894a;
        iVar6 = iVar6 + 1;
        iVar8 = iVar8 + iVar2;
        iVar7 = iVar7 + iVar2;
      } while (iVar6 < iVar1);
    }
    bVar4 = true;
  }
  else {
LAB_14175894a:
    bVar4 = false;
  }
  return bVar4;
}



// FUNCTION 1417589b0 FUN_1417589b0 body=367 status=ok
// SIG undefined FUN_1417589b0(void)

undefined1 FUN_1417589b0(longlong *param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = 0;
  lVar5 = lVar6;
  if (param_2 != 0) {
    lVar5 = (**(code **)(*param_1 + 0x378))();
  }
  if (param_3 != 0) {
    lVar6 = (**(code **)(*param_1 + 0x378))(param_1,param_3);
  }
  if (lVar5 == 0) {
    if (lVar6 != 0) {
      return 0;
    }
    return 1;
  }
  if (lVar6 == 0) {
    return 0;
  }
  if (((param_4 >> 0x16 & 1) == 0) && (lVar5 == lVar6)) {
    return 1;
  }
  if (*(longlong *)(lVar5 + 0x10) != *(longlong *)(lVar6 + 0x10)) {
    return 0;
  }
  if ((((param_4 >> 0xc & 1) == 0) && ((*(uint *)(param_1 + 7) >> 0x13 & 1) != 0)) &&
     (((*(uint *)(lVar5 + 8) >> 0x1d & 1) != 0 || ((*(uint *)(lVar6 + 8) >> 0x1d & 1) != 0)))) {
    param_4 = param_4 | 0x4000000000000200;
  }
  bVar1 = (bool)((byte)(param_4 >> 9) & 1);
  if ((param_4 >> 10 & 1) != 0) {
    if ((param_4 >> 9 & 1) != 0) goto LAB_141758ab7;
    cVar2 = UObjectBaseUtility::IsTemplate(lVar6,0x30);
    cVar3 = UObjectBaseUtility::IsTemplate(lVar5,0x30);
    bVar1 = cVar3 != cVar2;
  }
  if (bVar1 == false) {
    return 0;
  }
LAB_141758ab7:
  if ((param_4 >> 0x3e & 1) == 0) {
    if (*(longlong *)(lVar5 + 0x18) != *(longlong *)(lVar6 + 0x18)) {
      return 0;
    }
    if (*(longlong *)(lVar5 + 0x20) == 0) {
      return 0;
    }
    if (*(longlong *)(lVar6 + 0x20) == 0) {
      return 0;
    }
    lVar7 = UClass::GetDefaultSubobjectByName(*(undefined8 *)(*(longlong *)(lVar5 + 0x20) + 0x10));
    if (lVar7 == 0) {
      return 0;
    }
  }
  uVar4 = FUN_141750040(lVar5,lVar6,param_4);
  return uVar4;
}



// FUNCTION 141758b20 FUN_141758b20 body=4569 status=ok
// SIG undefined FUN_141758b20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

wchar_t * FUN_141758b20(wchar_t *param_1,longlong param_2,undefined8 param_3,wchar_t *param_4,
                       undefined8 param_5,undefined ***param_6,longlong *param_7)

{
  undefined4 *puVar1;
  undefined *puVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  undefined **ppuVar15;
  ulonglong *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined8 *puVar20;
  longlong lVar21;
  undefined **ppuVar22;
  longlong lVar23;
  size_t _Count;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  uint uVar27;
  undefined **ppuVar28;
  longlong lVar29;
  longlong *plVar30;
  undefined2 *puVar31;
  ulonglong uVar32;
  wchar_t wVar33;
  longlong *plVar34;
  wchar_t *local_res8;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined ***local_d0;
  char local_c8 [8];
  undefined **local_c0;
  ulonglong local_b8;
  longlong local_b0;
  wchar_t *local_a8;
  undefined **local_a0;
  wchar_t *local_98;
  undefined **local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  int iStack_68;
  undefined4 uStack_64;
  undefined **local_60;
  ulonglong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined **local_40;
  ulonglong local_38;
  
  puVar24 = auStack_f8;
  local_38 = DAT_1468387a8 ^ (ulonglong)local_c8;
  for (; (*param_1 == L' ' || (*param_1 == L'\t')); param_1 = param_1 + 1) {
  }
  wVar33 = *param_1;
  local_res8 = param_1;
  while( true ) {
    puVar26 = auStack_f8;
    if (wVar33 == L'\0') goto LAB_141759cc4;
    if ((((wVar33 == L'=') || (wVar33 == L'(')) || (wVar33 == L'[')) || (wVar33 == L'.')) break;
    local_res8 = local_res8 + 1;
    wVar33 = *local_res8;
  }
  puVar26 = auStack_f8;
  if (*local_res8 == L'\0') goto LAB_141759cc4;
  lVar29 = -1;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = ((longlong)local_res8 - (longlong)param_1 >> 1) + 1;
  uVar12 = SUB168(ZEXT816(2) * auVar6,0);
  if (SUB168(ZEXT816(2) * auVar6,8) != 0) {
    uVar12 = 0xffffffffffffffff;
  }
  local_b0 = param_2;
  local_a8 = param_1;
  local_98 = param_4;
  pwVar13 = (wchar_t *)operator_new(uVar12);
  _Count = (size_t)(int)((longlong)local_res8 - (longlong)param_1 >> 1);
  wcsncpy(pwVar13,param_1,_Count);
  ppuVar28 = (undefined **)0x0;
  pwVar13[_Count] = L'\0';
  do {
    lVar29 = lVar29 + 1;
  } while (pwVar13[lVar29] != L'\0');
  lVar21 = (longlong)(int)lVar29;
  if (0 < (int)lVar29) {
    pwVar14 = pwVar13 + lVar21 + -1;
    do {
      if ((*pwVar14 != L' ') && (*pwVar14 != L'\t')) break;
      *pwVar14 = L'\0';
      lVar21 = lVar21 + -1;
      pwVar14 = pwVar14 + -1;
    } while (0 < lVar21);
  }
  FName::FName(&local_40,pwVar13,1);
  ppuVar15 = (undefined **)FindField<UProperty>(param_3,local_40);
  iVar8 = 0;
  if (ppuVar15 == (undefined **)0x0) {
    lVar29 = UObjectBaseUtility::GetOutermost(param_3);
    UObjectBaseUtility::GetPathName(param_3,&local_70,lVar29);
    local_50 = *(longlong *)(lVar29 + 0x18);
    puVar31 = &DAT_143f3eda8;
    if (iStack_68 != 0) {
      puVar31 = (undefined2 *)local_70;
    }
    puVar16 = (ulonglong *)FName::FName(&local_c0,puVar31,1);
    local_58 = *puVar16;
    local_60 = local_40;
    FCoreRedirects::GetRedirectedName(&local_90,0x20,&local_60);
    ppuVar22 = local_90;
    if (((local_90 == local_60) && (local_88 == (longlong *)local_58)) && (local_80 == local_50)) {
      local_a0 = (undefined **)0x0;
      ppuVar22 = local_a0;
      if (local_70 != (undefined **)0x0) {
        FMemory::Free();
        ppuVar22 = local_a0;
      }
    }
    else if (local_70 != (undefined **)0x0) {
      FMemory::Free();
    }
    local_c0 = (undefined **)0x0;
    if (ppuVar22 != (undefined **)0x0) {
      ppuVar15 = (undefined **)FindField<UProperty>(param_3,ppuVar22);
    }
  }
  FMemory::operator_delete(pwVar13);
  puVar26 = auStack_f8;
  if ((ppuVar15 == (undefined **)0x0) ||
     (cVar7 = FUN_141764b90(ppuVar15), puVar26 = auStack_f8, cVar7 == '\0')) goto LAB_141759cc4;
  iVar9 = iVar8;
  if (*local_res8 == L'.') {
    local_res8 = local_res8 + 1;
    cVar7 = FParse::Command(&local_res8,L"Empty",1);
    if (cVar7 == '\0') {
      cVar7 = FParse::Command(&local_res8,&DAT_144d13588,1);
      if (cVar7 == '\0') {
        cVar7 = FParse::Command(&local_res8,L"Remove",1);
        if (cVar7 == '\0') {
          cVar7 = FParse::Command(&local_res8,L"RemoveIndex",1);
          if (cVar7 != '\0') {
            iVar9 = 3;
          }
        }
        else {
          iVar9 = 2;
        }
      }
      else {
        iVar9 = 1;
      }
    }
    else {
      iVar9 = 4;
    }
  }
  puVar18 = ppuVar15[2];
  puVar17 = (undefined *)UArrayProperty::GetPrivateStaticClass();
  puVar2 = ppuVar15[2];
  ppuVar22 = ppuVar28;
  if (puVar18 == puVar17) {
    ppuVar22 = ppuVar15;
  }
  local_a0 = ppuVar22;
  puVar18 = (undefined *)UMulticastDelegateProperty::GetPrivateStaticClass();
  if (iVar9 != 0) {
    if (puVar2 == puVar18) {
      puVar26 = auStack_f8;
      if (((iVar9 - 1U & 0xfffffffc) != 0) || (puVar26 = auStack_f8, iVar9 == 3))
      goto LAB_141759cc4;
      iVar8 = iswspace(*local_res8);
      while (iVar8 != 0) {
        local_res8 = local_res8 + 1;
        iVar8 = iswspace(*local_res8);
      }
      wVar33 = *local_res8;
      local_res8 = local_res8 + 1;
      puVar26 = auStack_f8;
      if (wVar33 != L'(') goto LAB_141759cc4;
      iVar8 = iswspace(*local_res8);
      while (iVar8 != 0) {
        local_res8 = local_res8 + 1;
        iVar8 = iswspace(*local_res8);
      }
      if (iVar9 == 4) {
        lVar29 = *(int *)((longlong)ppuVar15 + 0x44) + local_b0;
        *(undefined4 *)(lVar29 + 8) = 0;
        if (*(int *)(lVar29 + 0xc) != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar29,0);
        }
      }
      else {
        local_80 = 0;
        local_90 = &PTR__scalar_deleting_destructor__144d1a9a0;
        pwVar13 = (wchar_t *)0x0;
        local_78 = 0;
        local_88 = (longlong *)((ulonglong)local_88 & 0xffffffffffff0000);
        local_d8 = local_98;
        if (iVar9 == 1) {
          local_d0 = &local_90;
          pwVar13 = (wchar_t *)
                    FUN_141777850(ppuVar15,local_res8,*(int *)((longlong)ppuVar15 + 0x44) + local_b0
                                  ,param_5);
LAB_141758fa9:
          if (((int)local_78 == 0) || ((int)local_78 + -1 < 1)) {
            if ((pwVar13 == (wchar_t *)0x0) || (pwVar13 == local_res8)) goto LAB_141759077;
          }
          else {
            local_c0 = (undefined **)0x0;
            local_b8 = 0;
            FUN_141594550(&local_80,&local_c0,&DAT_144d13a88,1);
            ppuVar22 = ppuVar28;
            iVar8 = (uint)local_b8;
            ppuVar15 = local_c0;
            if (0 < (int)(uint)local_b8) {
              do {
                if (*(int *)((longlong)(ppuVar22 + 1) + (longlong)local_c0) == 0) {
                  puVar31 = &DAT_143f3eda8;
                }
                else {
                  puVar31 = *(undefined2 **)((longlong)ppuVar22 + (longlong)local_c0);
                }
                FOutputDevice::LogfImpl(param_6,3,&DAT_144d13a90,puVar31);
                uVar27 = (int)ppuVar28 + 1;
                ppuVar28 = (undefined **)(ulonglong)uVar27;
                ppuVar22 = ppuVar22 + 2;
                iVar8 = (uint)local_b8;
                ppuVar15 = local_c0;
              } while ((int)uVar27 < (int)(uint)local_b8);
            }
            for (; iVar8 != 0; iVar8 = iVar8 + -1) {
              if (*ppuVar15 != (undefined *)0x0) {
                FMemory::Free();
              }
              ppuVar15 = ppuVar15 + 2;
            }
            if (local_c0 != (undefined **)0x0) {
              FMemory::Free(local_c0);
            }
          }
        }
        else {
          if (iVar9 == 2) {
            local_d0 = &local_90;
            pwVar13 = (wchar_t *)
                      FUN_1417793f0(ppuVar15,local_res8,
                                    *(int *)((longlong)ppuVar15 + 0x44) + local_b0,param_5);
            goto LAB_141758fa9;
          }
LAB_141759077:
          local_d8 = local_a8;
          FOutputDevice::LogfImpl
                    (param_6,3,
                     L"Unable to parse parameter value \'%s\' in defaultproperties multi-cast delegate operation: %s"
                     ,local_res8);
        }
        if (pwVar13 != (wchar_t *)0x0) {
          local_res8 = pwVar13;
        }
        if (local_80 != 0) {
          FMemory::Free();
        }
      }
      iVar8 = iswspace(*local_res8);
      while (puVar25 = auStack_f8, iVar8 != 0) {
        local_res8 = local_res8 + 1;
        iVar8 = iswspace(*local_res8);
      }
    }
    else {
      puVar26 = auStack_f8;
      if (ppuVar22 == (undefined **)0x0) goto LAB_141759cc4;
      plVar34 = (longlong *)ppuVar22[0xe];
      plVar30 = (longlong *)(*(int *)((longlong)ppuVar22 + 0x44) + local_b0);
      iVar11 = *(int *)((longlong)plVar34 + 0x34);
      if (iVar9 == 4) {
        uVar27 = *(uint *)(plVar30 + 1);
        if (uVar27 != 0) {
          if ((((plVar34[7] & 0x1040000000U) == 0) && (uVar27 != 0)) &&
             (lVar29 = *plVar30, 0 < (int)uVar27)) {
            uVar32 = (ulonglong)uVar27;
            do {
              if ((~(byte)((ulonglong)plVar34[7] >> 0x24) & 1) != 0) {
                (**(code **)(*plVar34 + 0x328))(plVar34,lVar29);
              }
              lVar29 = lVar29 + iVar11;
              uVar32 = uVar32 - 1;
            } while (uVar32 != 0);
          }
          *(undefined4 *)(plVar30 + 1) = 0;
          if (*(int *)((longlong)plVar30 + 0xc) != 0) {
            FScriptArray::ResizeTo(plVar30,0,iVar11);
          }
        }
        iVar8 = iswspace(*local_res8);
        while (iVar8 != 0) {
          local_res8 = local_res8 + 1;
          iVar8 = iswspace(*local_res8);
        }
        wVar33 = *local_res8;
        local_res8 = local_res8 + 1;
        puVar25 = auStack_f8;
        puVar26 = auStack_f8;
        pwVar13 = local_res8;
        if (wVar33 != L'(') goto LAB_141759cc4;
      }
      else if (iVar9 - 1U < 2) {
        iVar8 = iswspace(*local_res8);
        while (iVar8 != 0) {
          local_res8 = local_res8 + 1;
          iVar8 = iswspace(*local_res8);
        }
        wVar33 = *local_res8;
        local_res8 = local_res8 + 1;
        puVar26 = auStack_f8;
        if (wVar33 != L'(') goto LAB_141759cc4;
        iVar8 = iswspace(*local_res8);
        ppuVar15 = local_a0;
        while (local_a0 = ppuVar15, iVar8 != 0) {
          local_res8 = local_res8 + 1;
          iVar8 = iswspace(*local_res8);
          ppuVar15 = local_a0;
        }
        if (iVar9 == 1) {
          iVar9 = (int)plVar30[1];
          iVar8 = iVar9 + 1;
          *(int *)(plVar30 + 1) = iVar8;
          if (*(int *)((longlong)plVar30 + 0xc) < iVar8) {
            FScriptArray::ResizeGrow(plVar30,iVar9,iVar11);
            iVar8 = (int)plVar30[1];
          }
          ppuVar15 = ppuVar28;
          if (iVar8 != 0) {
            ppuVar15 = (undefined **)((longlong)(iVar9 * iVar11) + *plVar30);
          }
          if ((*(uint *)(plVar34 + 7) >> 9 & 1) == 0) {
            (**(code **)(*plVar34 + 0x330))(plVar34,ppuVar15);
          }
          else {
            _guard_xfg_dispatch_icall_nop(ppuVar15,0,(longlong)iVar11);
          }
          if ((int)plVar30[1] != 0) {
            ppuVar28 = (undefined **)((longlong)(iVar9 * iVar11) + *plVar30);
          }
          local_d0 = param_6;
          local_d8 = local_98;
          pwVar13 = (wchar_t *)FUN_141759d00(local_a0[0xe],local_res8,ppuVar28,param_5);
          if ((pwVar13 == (wchar_t *)0x0) || (puVar25 = auStack_f8, pwVar13 == local_res8)) {
            local_d8 = local_a8;
            FOutputDevice::LogfImpl
                      (param_6,3,
                       L"Unable to parse parameter value \'%s\' in defaultproperties array operation: %s"
                      );
            puVar26 = auStack_f8;
            goto LAB_141759cc4;
          }
          goto LAB_14175979d;
        }
        plVar3 = (longlong *)ppuVar15[0xe];
        iVar8 = *(int *)((longlong)plVar3 + 0x34);
        ppuVar22 = ppuVar28;
        if (iVar8 != 0) {
          uVar32 = (longlong)(iVar8 + 0xf) + 0xf;
          if (uVar32 <= (ulonglong)(longlong)(iVar8 + 0xf)) {
            uVar32 = 0xffffffffffffff0;
          }
          puVar24 = auStack_f8 + -(uVar32 & 0xfffffffffffffff0);
          ppuVar22 = (undefined **)((longlong)&local_c0 + -(uVar32 & 0xfffffffffffffff0));
        }
        local_c0 = ppuVar22;
        if ((*(uint *)(plVar3 + 7) >> 9 & 1) == 0) {
          pcVar4 = *(code **)(*plVar3 + 0x330);
          *(undefined8 *)(puVar24 + -8) = 0x1417595ca;
          (*pcVar4)(plVar3,ppuVar22);
        }
        else {
          lVar29 = plVar3[6];
          *(undefined8 *)(puVar24 + -8) = 0x1417595b9;
          _guard_xfg_dispatch_icall_nop(ppuVar22,0,(longlong)((int)lVar29 * iVar8));
        }
        puVar18 = ppuVar15[0xe];
        *(undefined ****)(puVar24 + 0x28) = param_6;
        *(wchar_t **)(puVar24 + 0x20) = local_98;
        *(undefined8 *)(puVar24 + -8) = 0x1417595f9;
        local_98 = (wchar_t *)FUN_141759d00(puVar18,local_res8,ppuVar22,param_5);
        ppuVar19 = local_c0;
        if ((local_98 == (wchar_t *)0x0) || (local_98 == local_res8)) {
          *(wchar_t **)(puVar24 + 0x20) = local_a8;
          *(undefined8 *)(puVar24 + -8) = 0x14175980a;
          FOutputDevice::LogfImpl
                    (param_6,2,
                     L"Unable to parse parameter value \'%s\' in defaultproperties array operation: %s"
                    );
          plVar34 = (longlong *)ppuVar15[0xe];
          puVar26 = puVar24;
          if ((~(byte)((ulonglong)plVar34[7] >> 0x24) & 1) != 0) {
            pcVar4 = *(code **)(*plVar34 + 0x328);
            *(undefined8 *)(puVar24 + -8) = 0x14175982c;
            (*pcVar4)(plVar34,ppuVar22);
          }
          goto LAB_141759cc4;
        }
        uVar27 = *(uint *)(plVar30 + 1);
        local_c8[0] = '\0';
        if (uVar27 == 0) {
LAB_14175972d:
          pwVar13 = local_98;
          local_a0 = (undefined **)ppuVar15[3];
          *(undefined8 *)(puVar24 + -8) = 0x141759742;
          FName::ToString(&local_a0,&local_70);
          puVar31 = &DAT_143f3eda8;
          if (iStack_68 != 0) {
            puVar31 = (undefined2 *)local_70;
          }
          *(undefined8 *)(puVar24 + -8) = 0x141759769;
          FOutputDevice::LogfImpl(param_6,3,L"%s.Remove(): Value not found in array",puVar31);
          if (local_70 != (undefined **)0x0) {
            *(undefined8 *)(puVar24 + -8) = 0x141759777;
            FMemory::Free();
          }
        }
        else {
          local_a8 = (wchar_t *)((ulonglong)local_a8 & 0xffffffff00000000);
          local_b0 = CONCAT44(local_b0._4_4_,iVar11);
          ppuVar15 = ppuVar28;
          ppuVar22 = ppuVar28;
          do {
            iVar8 = (int)ppuVar22;
            lVar29 = (longlong)(int)ppuVar15;
            ppuVar15 = ppuVar28;
            if (uVar27 != 0) {
              ppuVar15 = (undefined **)(*plVar30 + lVar29);
            }
            plVar3 = (longlong *)local_a0[0xe];
            pcVar4 = *(code **)(*plVar3 + 0x2b8);
            *(undefined8 *)(puVar24 + -8) = 0x141759661;
            cVar7 = (*pcVar4)(plVar3,ppuVar19,ppuVar15,0);
            if (cVar7 == '\0') {
              iVar9 = (int)local_a8;
              iVar10 = (int)local_b0;
            }
            else {
              if ((plVar34[7] & 0x1040000000U) == 0) {
                ppuVar15 = ppuVar28;
                if ((int)plVar30[1] != 0) {
                  ppuVar15 = (undefined **)(*plVar30 + lVar29);
                }
                if ((~(byte)((ulonglong)plVar34[7] >> 0x24) & 1) != 0) {
                  pcVar4 = *(code **)(*plVar34 + 0x328);
                  *(undefined8 *)(puVar24 + -8) = 0x1417596a8;
                  (*pcVar4)(plVar34,ppuVar15);
                }
              }
              iVar9 = (int)plVar30[1];
              iVar10 = (iVar9 - iVar8) + -1;
              if (iVar10 != 0) {
                lVar21 = *plVar30;
                lVar23 = (longlong)(int)local_b0;
                *(undefined8 *)(puVar24 + -8) = 0x1417596cf;
                _guard_xfg_dispatch_icall_nop
                          ((void *)(lVar21 + lVar29),(void *)(lVar23 + lVar21),
                           (longlong)(iVar10 * iVar11));
                iVar9 = (int)plVar30[1];
              }
              *(int *)(plVar30 + 1) = iVar9 + -1;
              *(undefined8 *)(puVar24 + -8) = 0x1417596e2;
              FScriptArray::ResizeShrink(plVar30,iVar11);
              iVar8 = iVar8 + -1;
              local_c8[0] = '\x01';
              iVar9 = (int)local_a8 - iVar11;
              iVar10 = (int)local_b0 - iVar11;
            }
            uVar27 = *(uint *)(plVar30 + 1);
            ppuVar15 = (undefined **)(ulonglong)(uint)(iVar9 + iVar11);
            local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,iVar9 + iVar11);
            ppuVar22 = (undefined **)(ulonglong)(iVar8 + 1U);
            local_b0 = CONCAT44(local_b0._4_4_,iVar10 + iVar11);
          } while (iVar8 + 1U < uVar27);
          pwVar13 = local_98;
          ppuVar15 = local_a0;
          if (local_c8[0] == '\0') goto LAB_14175972d;
        }
        ppuVar28 = local_c0;
        plVar34 = (longlong *)ppuVar15[0xe];
        puVar25 = puVar24;
        if ((~(byte)((ulonglong)plVar34[7] >> 0x24) & 1) != 0) {
          pcVar4 = *(code **)(*plVar34 + 0x328);
          *(undefined8 *)(puVar24 + -8) = 0x141759796;
          (*pcVar4)(plVar34,ppuVar28);
        }
      }
      else {
        puVar25 = auStack_f8;
        pwVar13 = local_res8;
        if (iVar9 == 3) {
          iVar9 = iswspace(*local_res8);
          while (iVar9 != 0) {
            local_res8 = local_res8 + 1;
            iVar9 = iswspace(*local_res8);
          }
          wVar33 = *local_res8;
          local_res8 = local_res8 + 1;
          puVar26 = auStack_f8;
          if (wVar33 != L'(') goto LAB_141759cc4;
          iVar9 = iswspace(*local_res8);
          while (iVar9 != 0) {
            local_res8 = local_res8 + 1;
            iVar9 = iswspace(*local_res8);
          }
          local_c0 = (undefined **)0x0;
          local_b8 = (ulonglong)(uint)local_b8;
          wVar33 = *local_res8;
          ppuVar22 = ppuVar28;
          ppuVar15 = ppuVar28;
          ppuVar19 = ppuVar28;
          if (wVar33 == L')') {
LAB_141759326:
            ppuVar19 = (undefined **)&DAT_143f3eda8;
          }
          else {
            do {
              pwVar13 = local_res8;
              if (wVar33 == L'\0') {
                local_res8 = pwVar13;
                puVar26 = auStack_f8;
                if (ppuVar19 != (undefined **)0x0) {
                  FMemory::Free(ppuVar19);
                  local_res8 = pwVar13;
                  puVar26 = auStack_f8;
                }
                goto LAB_141759cc4;
              }
              iVar9 = (int)ppuVar22;
              iVar10 = iVar9 + -1;
              if (iVar9 < 1) {
                iVar10 = iVar8;
              }
              uVar27 = (iVar9 < 1) + 1 + iVar9;
              local_b8 = CONCAT44(local_b8._4_4_,uVar27);
              if ((int)ppuVar15 < (int)uVar27) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c0);
                ppuVar15 = (undefined **)(local_b8 >> 0x20);
                ppuVar19 = local_c0;
                uVar27 = (uint)local_b8;
              }
              ppuVar22 = (undefined **)(ulonglong)uVar27;
              *(wchar_t *)((longlong)ppuVar19 + (longlong)iVar10 * 2) = wVar33;
              *(wchar_t *)((longlong)ppuVar19 + ((longlong)iVar10 + 1) * 2) = L'\0';
              local_res8 = local_res8 + 1;
              wVar33 = *local_res8;
            } while (wVar33 != L')');
            ppuVar15 = ppuVar19;
            if (uVar27 == 0) goto LAB_141759326;
          }
          iVar8 = _wtoi((wchar_t *)ppuVar19);
          if ((plVar34[7] & 0x1040000000U) == 0) {
            if ((int)plVar30[1] != 0) {
              ppuVar28 = (undefined **)((longlong)(iVar11 * iVar8) + *plVar30);
            }
            if ((~(byte)((ulonglong)plVar34[7] >> 0x24) & 1) != 0) {
              (**(code **)(*plVar34 + 0x328))(plVar34,ppuVar28);
            }
          }
          iVar9 = (int)plVar30[1];
          iVar10 = (iVar9 - iVar8) + -1;
          if (iVar10 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)(iVar11 * iVar8) + *plVar30),
                       (void *)((longlong)((iVar8 + 1) * iVar11) + *plVar30),
                       (longlong)(iVar10 * iVar11));
            iVar9 = (int)plVar30[1];
          }
          *(int *)(plVar30 + 1) = iVar9 + -1;
          FScriptArray::ResizeShrink(plVar30,iVar11);
          puVar25 = auStack_f8;
          pwVar13 = local_res8;
          if (ppuVar15 != (undefined **)0x0) {
            FMemory::Free(ppuVar15);
            puVar25 = auStack_f8;
            pwVar13 = local_res8;
          }
        }
      }
LAB_14175979d:
      local_res8 = pwVar13;
      wVar33 = *local_res8;
      *(undefined8 *)(puVar25 + -8) = 0x1417597a6;
      iVar8 = iswspace(wVar33);
      while (iVar8 != 0) {
        local_res8 = local_res8 + 1;
        wVar33 = *local_res8;
        *(undefined8 *)(puVar25 + -8) = 0x1417597cb;
        iVar8 = iswspace(wVar33);
      }
    }
    puVar26 = puVar25;
    if (*local_res8 == L')') {
      local_res8 = local_res8 + 1;
    }
LAB_141759cc4:
    *(undefined8 *)(puVar26 + -8) = 0x141759cd3;
    return local_res8;
  }
  iVar9 = ReadArrayIndex(param_3,&local_res8,param_6);
  if ((ppuVar22 == (undefined **)0x0) && (*(int *)(ppuVar15 + 6) <= iVar9)) {
    local_d0 = (undefined ***)local_a8;
    local_d8 = (wchar_t *)CONCAT44(local_d8._4_4_,*(int *)(ppuVar15 + 6));
    FOutputDevice::LogfImpl(param_6,3,L"Out of bound array default property (%i/%i): %s",iVar9);
    puVar26 = auStack_f8;
    goto LAB_141759cc4;
  }
  puVar5 = (undefined8 *)*param_7;
  iVar11 = (int)param_7[1];
  puVar20 = puVar5;
  do {
    local_70 = ppuVar15;
    iStack_68 = iVar9;
    if (puVar20 == puVar5 + (longlong)iVar11 * 2) {
LAB_1417598f2:
      *(int *)(param_7 + 1) = iVar11 + 1;
      if (*(int *)((longlong)param_7 + 0xc) < iVar11 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_7,iVar11);
      }
      puVar1 = (undefined4 *)(*param_7 + (longlong)iVar11 * 0x10);
      *puVar1 = (undefined4)local_70;
      puVar1[1] = local_70._4_4_;
      puVar1[2] = iStack_68;
      puVar1[3] = uStack_64;
      iVar11 = iswspace(*local_res8);
      while (iVar11 != 0) {
        local_res8 = local_res8 + 1;
        iVar11 = iswspace(*local_res8);
      }
      wVar33 = *local_res8;
      local_res8 = local_res8 + 1;
      if (wVar33 == L'=') {
        iVar11 = iswspace(*local_res8);
        local_d8 = local_98;
        while (local_98 = local_d8, iVar11 != 0) {
          local_res8 = local_res8 + 1;
          iVar11 = iswspace(*local_res8);
          local_d8 = local_98;
        }
        if ((((local_res8 != (wchar_t *)0x0) &&
             ((0x2c < (ushort)*local_res8 ||
              ((0x120000000001U >> ((ulonglong)(ushort)*local_res8 & 0x3f) & 1) == 0)))) ||
            (puVar26 = auStack_f8, ppuVar22 != (undefined **)0x0)) &&
           ((local_c0 = (undefined **)0x3a, ppuVar15[3] != (undefined *)0x3a ||
            (local_c0 = (undefined **)0x64, puVar26 = auStack_f8,
            *(longlong *)(ppuVar15[4] + 0x18) != 100)))) {
          if ((iVar9 < 0) || (ppuVar22 == (undefined **)0x0)) {
            if (iVar9 == -1) {
              iVar9 = iVar8;
            }
            local_90 = &PTR__scalar_deleting_destructor__144d1a9a0;
            local_80 = 0;
            local_78 = 0;
            local_88 = (longlong *)((ulonglong)local_88 & 0xffffffffffff0000);
            local_d0 = &local_90;
            pwVar13 = (wchar_t *)
                      FUN_141759d00(ppuVar15,local_res8,
                                    (longlong)*(int *)((longlong)ppuVar15 + 0x44) +
                                    local_b0 + *(int *)((longlong)ppuVar15 + 0x34) * iVar9,param_5);
            lVar29 = local_80;
            if (((int)local_78 != 0) && (lVar29 = local_80, 0 < (int)local_78 + -1)) {
              local_c0 = (undefined **)0x0;
              local_b8 = 0;
              FUN_141594550(&local_80,&local_c0,&DAT_144d13e30,1);
              ppuVar22 = ppuVar28;
              iVar8 = (uint)local_b8;
              ppuVar15 = local_c0;
              if (0 < (int)(uint)local_b8) {
                do {
                  if (*(int *)((longlong)(ppuVar28 + 1) + (longlong)local_c0) == 0) {
                    puVar31 = &DAT_143f3eda8;
                  }
                  else {
                    puVar31 = *(undefined2 **)((longlong)ppuVar28 + (longlong)local_c0);
                  }
                  FOutputDevice::LogfImpl(param_6,3,&DAT_144d13e38,puVar31);
                  uVar27 = (int)ppuVar22 + 1;
                  ppuVar28 = ppuVar28 + 2;
                  ppuVar22 = (undefined **)(ulonglong)uVar27;
                  iVar8 = (uint)local_b8;
                  ppuVar15 = local_c0;
                } while ((int)uVar27 < (int)(uint)local_b8);
              }
              for (; iVar8 != 0; iVar8 = iVar8 + -1) {
                if (*ppuVar15 != (undefined *)0x0) {
                  FMemory::Free();
                }
                ppuVar15 = ppuVar15 + 2;
              }
              lVar29 = local_80;
              if (local_c0 != (undefined **)0x0) {
                FMemory::Free(local_c0);
                lVar29 = local_80;
              }
            }
          }
          else {
            ppuVar15 = (undefined **)ppuVar22[0xe];
            plVar34 = (longlong *)(*(int *)((longlong)ppuVar22 + 0x44) + local_b0);
            iVar8 = *(int *)((longlong)ppuVar15 + 0x34);
            local_80 = CONCAT44(local_80._4_4_,iVar8);
            local_90 = ppuVar15;
            local_88 = plVar34;
            if ((int)plVar34[1] <= iVar9) {
              FUN_14174ff60(&local_90,(iVar9 - (int)plVar34[1]) + 1);
              ppuVar15 = (undefined **)ppuVar22[0xe];
            }
            local_50 = 0;
            local_60 = &PTR__scalar_deleting_destructor__144d1a9a0;
            local_48 = 0;
            local_58 = local_58 & 0xffffffffffff0000;
            ppuVar22 = ppuVar28;
            if ((int)plVar34[1] != 0) {
              ppuVar22 = (undefined **)((longlong)(iVar9 * iVar8) + *plVar34);
            }
            local_d0 = &local_60;
            local_d8 = local_98;
            pwVar13 = (wchar_t *)FUN_141759d00(ppuVar15,local_res8,ppuVar22,param_5);
            if (((int)local_48 == 0) || ((int)local_48 + -1 < 1)) {
              lVar29 = local_50;
              if (pwVar13 == local_res8) {
                FOutputDevice::LogfImpl
                          (param_6,3,L"Invalid property value in defaults: %s",local_a8);
                lVar29 = local_50;
              }
            }
            else {
              local_c0 = (undefined **)0x0;
              local_b8 = 0;
              FUN_141594550(&local_50,&local_c0,&DAT_144d13b78,1);
              ppuVar22 = ppuVar28;
              iVar8 = (uint)local_b8;
              ppuVar15 = local_c0;
              if (0 < (int)(uint)local_b8) {
                do {
                  if (*(int *)((longlong)(ppuVar28 + 1) + (longlong)local_c0) == 0) {
                    puVar31 = &DAT_143f3eda8;
                  }
                  else {
                    puVar31 = *(undefined2 **)((longlong)ppuVar28 + (longlong)local_c0);
                  }
                  FOutputDevice::LogfImpl(param_6,3,&DAT_144d13dd4,puVar31);
                  uVar27 = (int)ppuVar22 + 1;
                  ppuVar28 = ppuVar28 + 2;
                  ppuVar22 = (undefined **)(ulonglong)uVar27;
                  iVar8 = (uint)local_b8;
                  ppuVar15 = local_c0;
                } while ((int)uVar27 < (int)(uint)local_b8);
              }
              for (; iVar8 != 0; iVar8 = iVar8 + -1) {
                if (*ppuVar15 != (undefined *)0x0) {
                  FMemory::Free();
                }
                ppuVar15 = ppuVar15 + 2;
              }
              lVar29 = local_50;
              if (local_c0 != (undefined **)0x0) {
                FMemory::Free(local_c0);
                lVar29 = local_50;
              }
            }
          }
          if (pwVar13 != (wchar_t *)0x0) {
            local_res8 = pwVar13;
          }
          puVar26 = auStack_f8;
          if (lVar29 != 0) {
            FMemory::Free();
            puVar26 = auStack_f8;
          }
        }
        goto LAB_141759cc4;
      }
      pwVar13 = L"Missing \'=\' in default properties assignment: %s";
LAB_1417598d5:
      FOutputDevice::LogfImpl(param_6,3,pwVar13,local_a8);
      puVar26 = auStack_f8;
      goto LAB_141759cc4;
    }
    if (((undefined **)*puVar20 == ppuVar15) && (*(int *)(puVar20 + 1) == iVar9)) {
      if ((int)((longlong)puVar20 - (longlong)puVar5 >> 4) == -1) goto LAB_1417598f2;
      pwVar13 = L"redundant data: %s";
      goto LAB_1417598d5;
    }
    puVar20 = puVar20 + 2;
  } while( true );
}



// FUNCTION 141759d00 FUN_141759d00 body=195 status=ok
// SIG undefined FUN_141759d00(void)

undefined8
FUN_141759d00(longlong *param_1,longlong param_2,undefined8 param_3,byte param_4,undefined8 param_5,
             longlong param_6)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  longlong local_res20;
  undefined2 *local_28;
  int local_20;
  undefined2 *local_18;
  int local_10;
  
  if (((param_4 & 0x20) == 0) || ((*(uint *)(param_1 + 7) >> 0xe & 1) == 0)) {
    if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000141759dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*param_1 + 0x2e0))();
      return uVar1;
    }
  }
  else {
    local_res20 = param_1[3];
    FName::ToString(&local_res20,&local_28);
    puVar2 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar2 = local_28;
    }
    FString::PrintfImpl(&local_18,
                        L"Import failed for \'%s\': property is config (Check to see if the property is listed in the DefaultProperties.  It should only be listed in the specific .ini file)"
                        ,puVar2);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (param_6 != 0) {
      puVar2 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar2 = local_18;
      }
      FOutputDevice::LogfImpl(param_6,&DAT_144d112a4,puVar2);
    }
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return 0;
}



// FUNCTION 141759dd0 ImportTextItem body=129 status=ok
// SIG undefined ImportTextItem(void)

bool FPrimaryAssetId::ImportTextItem(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  local_28[0] = 0;
  local_28[1] = 0;
  lVar1 = UPropertyHelpers::ReadToken(*param_2,local_28,1);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FPrimaryAssetId(local_18,local_28);
    *param_1 = *puVar2;
    param_1[1] = puVar2[1];
    *param_2 = lVar1;
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return lVar1 != 0;
}



// FUNCTION 141759e60 ImportTextItem body=142 status=ok
// SIG undefined ImportTextItem(void)

undefined8 FPrimaryAssetType::ImportTextItem(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined2 *local_20;
  undefined8 local_18;
  
  local_20 = (undefined2 *)0x0;
  local_18 = 0;
  lVar1 = UPropertyHelpers::ReadToken(*param_2,&local_20,1);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = &DAT_143f3eda8;
    if ((int)local_18 != 0) {
      puVar2 = local_20;
    }
    FName::FName(&local_28,puVar2,1);
    *param_1 = local_28;
    *param_2 = lVar1;
    uVar3 = 1;
  }
  if (local_20 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar3;
}



// FUNCTION 141759ef0 FUN_141759ef0 body=668 status=ok
// SIG undefined FUN_141759ef0(void)

ushort * FUN_141759ef0(longlong param_1,ushort *param_2,longlong *param_3,ulonglong param_4,
                      undefined8 param_5,undefined8 param_6)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong *local_48;
  longlong *local_40;
  int local_38;
  
  plVar4 = *(longlong **)(param_1 + 0x70);
  uVar5 = *param_2;
  iVar2 = *(int *)((longlong)plVar4 + 0x34);
  local_48 = plVar4;
  local_40 = param_3;
  local_38 = iVar2;
  if ((uVar5 < 0x2d) && ((0x120000000001U >> ((ulonglong)uVar5 & 0x3f) & 1) != 0)) {
    uVar3 = *(uint *)(param_3 + 1);
    uVar9 = (ulonglong)uVar3;
    if (uVar3 != 0) {
      if ((plVar4[7] & 0x1040000000U) == 0) {
        if (uVar3 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = *param_3;
        }
        if (0 < (int)uVar3) {
          do {
            if ((~(byte)((ulonglong)plVar4[7] >> 0x24) & 1) != 0) {
              (**(code **)(*plVar4 + 0x328))(plVar4,lVar11);
            }
            lVar11 = lVar11 + iVar2;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
      *(undefined4 *)(param_3 + 1) = 0;
      if (*(int *)((longlong)param_3 + 0xc) != 0) {
        FScriptArray::ResizeTo(param_3,0,iVar2);
      }
    }
  }
  else {
    param_2 = param_2 + 1;
    if (uVar5 == 0x28) {
      uVar3 = *(uint *)(param_3 + 1);
      uVar9 = (ulonglong)uVar3;
      if (uVar3 != 0) {
        if ((plVar4[7] & 0x1040000000U) == 0) {
          if (uVar3 == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = *param_3;
          }
          if (0 < (int)uVar3) {
            do {
              if ((~(byte)((ulonglong)plVar4[7] >> 0x24) & 1) != 0) {
                (**(code **)(*plVar4 + 0x328))(plVar4,lVar11);
              }
              lVar11 = lVar11 + iVar2;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
        }
        *(undefined4 *)(param_3 + 1) = 0;
        if (*(int *)((longlong)param_3 + 0xc) != 0) {
          FScriptArray::ResizeTo(param_3,0,iVar2);
        }
      }
      iVar6 = iswspace(*param_2);
      while (iVar6 != 0) {
        puVar8 = param_2 + 1;
        param_2 = param_2 + 1;
        iVar6 = iswspace(*puVar8);
      }
      iVar6 = 0;
      if ((int)param_3[1] < 1) {
        FUN_14174ff60(&local_48,1 - (int)param_3[1]);
      }
      uVar5 = *param_2;
      puVar8 = param_2;
      if (uVar5 == 0x29) {
LAB_14175a166:
        param_2 = puVar8 + 1;
      }
      else {
        iVar10 = 0;
        do {
          iVar7 = iswspace(uVar5);
          puVar8 = param_2;
          while (iVar7 != 0) {
            puVar1 = puVar8 + 1;
            puVar8 = puVar8 + 1;
            iVar7 = iswspace(*puVar1);
          }
          if (*puVar8 != 0x2c) {
            if ((int)param_3[1] == 0) {
              lVar11 = 0;
            }
            else {
              lVar11 = (longlong)iVar10 + *param_3;
            }
            puVar8 = (ushort *)
                     FUN_141759d00(*(undefined8 *)(param_1 + 0x70),puVar8,lVar11,param_4 | 2,param_5
                                   ,param_6);
            if (puVar8 == (ushort *)0x0) goto LAB_14175a16c;
            iVar7 = iswspace(*puVar8);
            while (iVar7 != 0) {
              puVar1 = puVar8 + 1;
              puVar8 = puVar8 + 1;
              iVar7 = iswspace(*puVar1);
            }
          }
          if (*puVar8 != 0x2c) {
            if (*puVar8 == 0x29) goto LAB_14175a166;
            goto LAB_14175a16c;
          }
          param_2 = puVar8 + 1;
          iVar6 = iVar6 + 1;
          iVar10 = iVar10 + iVar2;
          if ((int)param_3[1] <= iVar6) {
            FUN_14174ff60(&local_48,(iVar6 - (int)param_3[1]) + 1);
          }
          uVar5 = *param_2;
        } while (uVar5 != 0x29);
        param_2 = puVar8 + 2;
      }
    }
    else {
LAB_14175a16c:
      param_2 = (ushort *)0x0;
    }
  }
  return param_2;
}



// FUNCTION 14175a190 ImportText_Internal body=928 status=ok
// SIG undefined ImportText_Internal(void)

longlong UBoolProperty::ImportText_Internal(longlong param_1,undefined8 param_2,longlong param_3)

{
  wchar_t _C;
  wint_t wVar1;
  wint_t wVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  wint_t *pwVar8;
  wchar_t *pwVar9;
  byte *pbVar10;
  undefined2 *local_38;
  undefined8 local_30;
  
  local_38 = (undefined2 *)0x0;
  local_30 = 0;
  lVar4 = UPropertyHelpers::ReadToken(param_2,&local_38,0);
  if (lVar4 != 0) {
    pbVar10 = (byte *)((ulonglong)*(byte *)(param_1 + 0x71) + param_3);
    pwVar8 = &DAT_144d121fc;
    puVar7 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      puVar7 = local_38;
    }
    do {
      wVar1 = *(wint_t *)((longlong)(puVar7 + -0xa26890fe) + (longlong)pwVar8);
      if ((wVar1 == 0) && (*pwVar8 == 0)) goto LAB_14175a4ec;
      if (wVar1 != *pwVar8) {
        wVar1 = towlower(wVar1);
        wVar2 = towlower(*pwVar8);
        if (wVar1 != wVar2) goto LAB_14175a244;
      }
      pwVar8 = pwVar8 + 1;
    } while( true );
  }
LAB_14175a4f6:
  lVar4 = 0;
  goto LAB_14175a4f9;
LAB_14175a244:
  if (wVar1 != wVar2) {
    pwVar8 = &DAT_144d16980;
    puVar7 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      puVar7 = local_38;
    }
    do {
      wVar1 = *(wint_t *)((longlong)pwVar8 + (longlong)(puVar7 + -0xa268b4c0));
      if ((wVar1 == 0) && (*pwVar8 == 0)) break;
      if (wVar1 != *pwVar8) {
        wVar1 = towlower(wVar1);
        wVar2 = towlower(*pwVar8);
        if (wVar1 != wVar2) goto LAB_14175a2a4;
      }
      pwVar8 = pwVar8 + 1;
    } while( true );
  }
  goto LAB_14175a4ec;
LAB_14175a2a4:
  if (wVar1 != wVar2) {
    puVar5 = (undefined8 *)FText::ToString(&DAT_1468e2308);
    if (*(int *)(puVar5 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*puVar5;
    }
    puVar6 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      puVar6 = local_38;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar7);
    if (iVar3 != 0) {
      pwVar8 = &DAT_144d16990;
      puVar7 = &DAT_143f3eda8;
      if ((int)local_30 != 0) {
        puVar7 = local_38;
      }
      do {
        wVar1 = *(wint_t *)((longlong)pwVar8 + (longlong)(puVar7 + -0xa268b4c8));
        if ((wVar1 == 0) && (*pwVar8 == 0)) break;
        if (wVar1 != *pwVar8) {
          wVar1 = towlower(wVar1);
          wVar2 = towlower(*pwVar8);
          if (wVar1 != wVar2) goto LAB_14175a334;
        }
        pwVar8 = pwVar8 + 1;
      } while( true );
    }
  }
  goto LAB_14175a4ec;
LAB_14175a334:
  if (wVar1 != wVar2) {
    puVar5 = (undefined8 *)FText::ToString(&DAT_1468e22d8);
    if (*(int *)(puVar5 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*puVar5;
    }
    puVar6 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      puVar6 = local_38;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar7);
    if (iVar3 != 0) {
      pwVar8 = &DAT_144d1234c;
      puVar7 = &DAT_143f3eda8;
      if ((int)local_30 != 0) {
        puVar7 = local_38;
      }
      do {
        wVar1 = *(wint_t *)((longlong)pwVar8 + (longlong)(puVar7 + -0xa26891a6));
        if ((wVar1 == 0) && (*pwVar8 == 0)) goto LAB_14175a4e0;
        if (wVar1 != *pwVar8) {
          wVar1 = towlower(wVar1);
          wVar2 = towlower(*pwVar8);
          if (wVar1 != wVar2) goto LAB_14175a3c4;
        }
        pwVar8 = pwVar8 + 1;
      } while( true );
    }
  }
LAB_14175a4ec:
  *pbVar10 = *pbVar10 | *(byte *)(param_1 + 0x72);
  goto LAB_14175a4f9;
LAB_14175a3c4:
  if (wVar1 != wVar2) {
    pwVar9 = L"False";
    puVar7 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      puVar7 = local_38;
    }
    do {
      _C = *(wchar_t *)((longlong)pwVar9 + (longlong)(puVar7 + -0xa268b4cc));
      if ((_C == L'\0') && (*pwVar9 == L'\0')) break;
      if (_C != *pwVar9) {
        wVar1 = towlower(_C);
        wVar2 = towlower(*pwVar9);
        if (wVar1 != wVar2) goto LAB_14175a424;
      }
      pwVar9 = pwVar9 + 1;
    } while( true );
  }
  goto LAB_14175a4e0;
LAB_14175a4a7:
  if (wVar1 != wVar2) {
    puVar5 = (undefined8 *)FText::ToString(&DAT_1468e22f0);
    if (*(int *)(puVar5 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*puVar5;
    }
    puVar6 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      puVar6 = local_38;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar7);
    if (iVar3 != 0) goto LAB_14175a4f6;
  }
  goto LAB_14175a4e0;
LAB_14175a424:
  if (wVar1 != wVar2) {
    puVar5 = (undefined8 *)FText::ToString(&DAT_1468e2320);
    if (*(int *)(puVar5 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*puVar5;
    }
    puVar6 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      puVar6 = local_38;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar7);
    if (iVar3 != 0) {
      pwVar8 = &DAT_144d154a4;
      puVar7 = &DAT_143f3eda8;
      if ((int)local_30 != 0) {
        puVar7 = local_38;
      }
      do {
        wVar1 = *(wint_t *)((longlong)pwVar8 + (longlong)(puVar7 + -0xa268aa52));
        if ((wVar1 == 0) && (*pwVar8 == 0)) break;
        if (wVar1 != *pwVar8) {
          wVar1 = towlower(wVar1);
          wVar2 = towlower(*pwVar8);
          if (wVar1 != wVar2) goto LAB_14175a4a7;
        }
        pwVar8 = pwVar8 + 1;
      } while( true );
    }
  }
LAB_14175a4e0:
  *pbVar10 = *pbVar10 & ~*(byte *)(param_1 + 0x73);
LAB_14175a4f9:
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return lVar4;
}



// FUNCTION 14175a530 FUN_14175a530 body=871 status=ok
// SIG undefined FUN_14175a530(void)

ulonglong FUN_14175a530(longlong *param_1,undefined8 param_2,undefined1 *param_3,ulonglong param_4,
                       undefined8 param_5,undefined8 param_6)

{
  wchar_t _C;
  int iVar1;
  char cVar2;
  wint_t wVar3;
  wint_t wVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  ulonglong uVar13;
  undefined2 *puVar14;
  wint_t *pwVar15;
  wchar_t *pwVar16;
  undefined8 uVar17;
  undefined1 local_res8 [8];
  wchar_t *local_58;
  undefined8 local_50;
  code *local_48;
  undefined1 *puStack_40;
  
  uVar10 = 0;
  if ((param_1[0xe] != 0) && ((param_4 >> 0x1a & 1) == 0)) {
    local_58 = (wchar_t *)0x0;
    local_50 = 0;
    uVar6 = UPropertyHelpers::ReadToken(param_2,&local_58,1);
    if (uVar6 != 0) {
      pwVar12 = L"";
      if ((int)local_50 != 0) {
        pwVar12 = local_58;
      }
      puVar7 = (undefined8 *)FName::FName(local_res8,pwVar12,1);
      iVar5 = UEnum::GetIndexByName(param_1[0xe],*puVar7,0);
      if (iVar5 == -1) {
        cVar2 = FString::IsNumeric(&local_58);
        if (cVar2 != '\0') {
          pwVar12 = local_58;
          pwVar16 = local_58 + (int)local_50 + -1;
          if ((int)local_50 == 0) {
            pwVar16 = local_58 + (int)local_50;
          }
          for (; pwVar12 != pwVar16; pwVar12 = pwVar12 + 1) {
            if (*pwVar12 == L'.') goto LAB_14175a64c;
          }
          pwVar12 = L"";
          if ((int)local_50 != 0) {
            pwVar12 = local_58;
          }
          lVar8 = _wtoi64(pwVar12);
          iVar1 = *(int *)(param_1[0xe] + 0x48);
          if (0 < iVar1) {
            plVar11 = (longlong *)(*(longlong *)(param_1[0xe] + 0x40) + 8);
            uVar9 = uVar10;
            uVar13 = uVar10;
            do {
              iVar5 = (int)uVar9;
              if (*plVar11 == lVar8) {
                if (iVar5 != -1) goto LAB_14175a67d;
                break;
              }
              uVar9 = (ulonglong)(iVar5 + 1);
              uVar13 = uVar13 + 1;
              plVar11 = plVar11 + 2;
            } while ((longlong)uVar13 < (longlong)iVar1);
          }
        }
LAB_14175a64c:
        puStack_40 = local_res8;
        local_res8[0] = 0;
        local_48 = FUN_1406ddef0;
        FUN_1415d8310(&local_48,&DAT_14622e6dc);
        uVar6 = uVar10;
      }
      else {
LAB_14175a67d:
        *param_3 = *(undefined1 *)(*(longlong *)(param_1[0xe] + 0x40) + 8 + (longlong)iVar5 * 0x10);
      }
      if (local_58 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      return uVar6;
    }
    if (local_58 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  if (param_1[0xe] != 0) goto LAB_14175a85d;
  local_58 = (wchar_t *)0x0;
  local_50 = 0;
  uVar10 = UPropertyHelpers::ReadToken(param_2,&local_58,0);
  if (uVar10 != 0) {
    pwVar15 = &DAT_144d16d28;
    pwVar12 = L"";
    if ((int)local_50 != 0) {
      pwVar12 = local_58;
    }
    do {
      wVar3 = *(wint_t *)((longlong)pwVar15 + (longlong)(pwVar12 + -0xa268b694));
      if ((wVar3 == 0) && (*pwVar15 == 0)) goto LAB_14175a81e;
      if (wVar3 != *pwVar15) {
        wVar3 = towlower(wVar3);
        wVar4 = towlower(*pwVar15);
        if (wVar3 != wVar4) goto LAB_14175a754;
      }
      pwVar15 = pwVar15 + 1;
    } while( true );
  }
LAB_14175a84f:
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free();
  }
LAB_14175a85d:
  uVar10 = FUN_1417785e0(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar10;
LAB_14175a754:
  if (wVar3 != wVar4) {
    puVar7 = (undefined8 *)FText::ToString(&DAT_1468e2308);
    if (*(int *)(puVar7 + 1) == 0) {
      puVar14 = &DAT_143f3eda8;
    }
    else {
      puVar14 = (undefined2 *)*puVar7;
    }
    pwVar12 = L"";
    if ((int)local_50 != 0) {
      pwVar12 = local_58;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(pwVar12,puVar14);
    if (iVar5 != 0) {
      pwVar16 = L"False";
      pwVar12 = L"";
      if ((int)local_50 != 0) {
        pwVar12 = local_58;
      }
      do {
        _C = *(wchar_t *)((longlong)pwVar16 + (longlong)(pwVar12 + -0xa268b69c));
        if ((_C == L'\0') && (*pwVar16 == L'\0')) goto LAB_14175a819;
        if (_C != *pwVar16) {
          wVar3 = towlower(_C);
          wVar4 = towlower(*pwVar16);
          if (wVar3 != wVar4) goto LAB_14175a7e0;
        }
        pwVar16 = pwVar16 + 1;
      } while( true );
    }
  }
LAB_14175a81e:
  uVar17 = 1;
  goto LAB_14175a824;
LAB_14175a7e0:
  if (wVar3 != wVar4) {
    puVar7 = (undefined8 *)FText::ToString(&DAT_1468e2320);
    if (*(int *)(puVar7 + 1) == 0) {
      puVar14 = &DAT_143f3eda8;
    }
    else {
      puVar14 = (undefined2 *)*puVar7;
    }
    pwVar12 = L"";
    if ((int)local_50 != 0) {
      pwVar12 = local_58;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(pwVar12,puVar14);
    if (iVar5 != 0) goto LAB_14175a84f;
  }
LAB_14175a819:
  uVar17 = 0;
LAB_14175a824:
  (**(code **)(*param_1 + 0x390))(param_1,param_3,uVar17);
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return uVar10;
}



// FUNCTION 14175a8a0 FUN_14175a8a0 body=96 status=ok
// SIG undefined FUN_14175a8a0(void)

undefined8
FUN_14175a8a0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res8 = 0;
  local_res10 = param_2;
  FUN_14175d640(param_1,param_5,param_1[0xe],param_4,&local_res10,&local_res8);
  (**(code **)(*param_1 + 0x380))(param_1,param_3,local_res8);
  return local_res10;
}



// FUNCTION 14175a900 FUN_14175a900 body=1408 status=ok
// SIG undefined FUN_14175a900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14175a900(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  uint local_a8;
  uint uStack_a4;
  uint *puStack_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  uint uStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  FUN_14172eb90();
  uVar8 = 0;
  plVar13 = (longlong *)(DAT_1468b6148 + 8);
  uVar3 = *(uint *)(DAT_1468b6148 + 0x30);
  puStack_a0 = (uint *)(DAT_1468b6148 + 0x18);
  local_a8 = 0;
  uStack_a4 = 1;
  uStack_94 = 0;
  uStack_90 = 0;
  if (uVar3 != 0) {
    puVar16 = *(uint **)(DAT_1468b6148 + 0x28);
    if (*(uint **)(DAT_1468b6148 + 0x28) == (uint *)0x0) {
      puVar16 = puStack_a0;
    }
    uVar11 = *puVar16;
    uVar9 = uVar8;
    uVar14 = uVar8;
    while (uVar11 == 0) {
      iVar2 = (int)uVar9;
      uStack_90 = (int)uVar14 + 0x20;
      uVar14 = (ulonglong)uStack_90;
      local_a8 = iVar2 + 1;
      uVar9 = (ulonglong)local_a8;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar2) goto LAB_14175a9dc;
      uVar11 = puVar16[(longlong)iVar2 + 1];
    }
    uStack_a4 = -uVar11 & uVar11;
    iVar2 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar2 = 0x20;
    }
    else {
      iVar2 = 0x1f - iVar2;
    }
    uStack_94 = (uStack_90 - iVar2) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_14175a9dc:
      uStack_94 = uVar3;
    }
  }
  uVar11 = *(uint *)(DAT_1468b6148 + 0x30);
  puVar16 = (uint *)(DAT_1468b6148 + 0x18);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_94;
  local_68 = CONCAT44(uStack_8c,uStack_90);
  uStack_58 = CONCAT44(uStack_a4,local_a8);
  local_98 = -1 << ((byte)uVar11 & 0x1f);
  uVar15 = uVar11 & 0xffffffe0;
  uStack_80 = local_a8;
  uStack_7c = uStack_a4;
  uStack_94 = uVar11;
  local_78 = puStack_a0;
  local_60 = plVar13;
  puStack_50 = puStack_a0;
  uStack_40 = local_68;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  local_88 = plVar13;
  if (uVar11 != uVar3) {
    puVar17 = *(uint **)(DAT_1468b6148 + 0x28);
    if (*(uint **)(DAT_1468b6148 + 0x28) == (uint *)0x0) {
      puVar17 = puVar16;
    }
    uVar10 = puVar17[(int)uVar11 >> 5] & local_98;
    iVar2 = (int)uVar11 >> 5;
    while (uVar10 == 0) {
      uVar15 = uVar15 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar2) goto LAB_14175aab1;
      uVar10 = puVar17[(longlong)iVar2 + 1];
      local_98 = 0xffffffff;
      iVar2 = iVar2 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    iVar2 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar2 = 0x20;
    }
    else {
      iVar2 = 0x1f - iVar2;
    }
    uStack_94 = (uVar15 - iVar2) + 0x1f;
    uVar11 = uStack_94;
    if ((int)uVar3 < (int)uStack_94) {
LAB_14175aab1:
      uStack_94 = uVar3;
      uVar11 = uVar3;
    }
  }
  while (((uStack_6c != uVar11 || (local_78 != puVar16)) || (local_88 != plVar13))) {
    lVar12 = (longlong)(int)uStack_6c * 0x130 + *local_88;
    FUN_14171fe40(lVar12);
    FUN_14172ec40(lVar12);
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
  }
  plVar13 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar13 != (longlong *)0x0) {
    *plVar13 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar13[1] = (longlong)StaticShutdownAfterError;
    lVar12 = FDelegateHandle::GenerateNewID();
    plVar13[3] = lVar12;
    *plVar13 = (longlong)&PTR_GetPoolName_143f3f090;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af010,1);
    (**(code **)(*plVar13 + 0x20))(plVar13,&local_res8);
    iVar2 = DAT_1464af018;
    lVar12 = (longlong)DAT_1464af018;
    DAT_1464af018 = DAT_1464af018 + 1;
    if (DAT_1464af01c < DAT_1464af018) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af010,iVar2);
    }
    puVar4 = (undefined8 *)(lVar12 * 0x10 + DAT_1464af010);
    *puVar4 = plVar13;
    *(undefined4 *)(puVar4 + 1) = 2;
  }
  plVar13 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar13 != (longlong *)0x0) {
    *plVar13 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar13[1] = (longlong)FUN_141766700;
    lVar12 = FDelegateHandle::GenerateNewID();
    plVar13[3] = lVar12;
    *plVar13 = (longlong)&PTR_GetPoolName_143f3f090;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af178,1);
    (**(code **)(*plVar13 + 0x20))(plVar13,&local_res8);
    iVar2 = DAT_1464af180;
    lVar12 = (longlong)DAT_1464af180;
    DAT_1464af180 = DAT_1464af180 + 1;
    if (DAT_1464af184 < DAT_1464af180) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af178,iVar2);
    }
    puVar4 = (undefined8 *)(lVar12 * 0x10 + _DAT_1464af178);
    *puVar4 = plVar13;
    *(undefined4 *)(puVar4 + 1) = 2;
  }
  lVar12 = FUN_14168dc80();
  plVar13 = (longlong *)(lVar12 + 0x120);
  plVar5 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar5[1] = (longlong)FUN_1417940e0;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[3] = lVar6;
    *plVar5 = (longlong)&PTR_GetPoolName_143f3f090;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar13,1);
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_res8);
    iVar2 = *(int *)(lVar12 + 0x128);
    *(int *)(lVar12 + 0x128) = iVar2 + 1;
    if (*(int *)(lVar12 + 300) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar13);
    *puVar4 = plVar5;
    *(undefined4 *)(puVar4 + 1) = 2;
  }
  lVar12 = FUN_14168dc80();
  puVar16 = (uint *)(lVar12 + 0x138);
  plVar13 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar13 != (longlong *)0x0) {
    *plVar13 = (longlong)&PTR_GetPoolName_143f3f148;
    plVar13[1] = (longlong)`InitUObject'::`2'::Local::IsPackageLoaded;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar13[3] = lVar6;
  }
  if (&local_a8 != puVar16) {
    if (plVar13 == (longlong *)0x0) {
      if ((*(int *)(lVar12 + 0x140) != 0) &&
         (plVar5 = *(longlong **)puVar16, plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        if (*(longlong *)puVar16 != 0) {
          lVar6 = FMemory::Realloc(*(longlong *)puVar16,0,0);
          *(longlong *)puVar16 = lVar6;
        }
        *(undefined4 *)(lVar12 + 0x140) = 0;
      }
    }
    else {
      (**(code **)(*plVar13 + 0x30))(plVar13,puVar16);
    }
  }
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 0x28))(plVar13,0);
    lVar12 = FMemory::Realloc(plVar13,0,0);
    if (lVar12 != 0) {
      FMemory::Free(lVar12);
    }
  }
  FUN_14179b570();
  plVar13 = (longlong *)FName::FName(local_res10,L"/Engine/Transient",1);
  local_res8 = 0;
  lVar12 = *plVar13;
  if (lVar12 == 0) {
    FUN_1417846f0(0,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar7 = UPackage::StaticClass();
  DAT_1469e7a80 = FUN_1417985e0(uVar7,0,lVar12,0x40,0,0,0,0,0);
  iVar2 = *(int *)(DAT_1469e7a80 + 0xc);
  if (iVar2 < (int)DAT_1469e91c4) {
    uVar11 = iVar2 >> 0x1f & 0xffff;
    uVar3 = iVar2 + uVar11;
    uVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
            (longlong)(int)((uVar3 & 0xffff) - uVar11) * 0x18;
  }
  *(uint *)(uVar8 + 8) = *(uint *)(uVar8 + 8) | 0x40000000;
  uVar7 = FCommandLine::Get();
  cVar1 = FParse::Param(uVar7,L"VERIFYGC");
  if (cVar1 != '\0') {
    DAT_1464b4c70 = 1;
  }
  uVar7 = FCommandLine::Get();
  cVar1 = FParse::Param(uVar7,L"NOVERIFYGC");
  if (cVar1 != '\0') {
    DAT_1464b4c70 = 0;
  }
  return;
}



// FUNCTION 14175ae80 InitializeRedirectMap body=744 status=ok
// SIG undefined InitializeRedirectMap(void)

void UMetaData::InitializeRedirectMap(void)

{
  ulonglong uVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  uint *puVar10;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  uint local_res18 [2];
  longlong local_res20;
  undefined8 local_b8;
  uint *puStack_b0;
  undefined4 local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined8 uStack_90;
  uint *local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  longlong *local_68;
  undefined2 local_60;
  longlong *local_58;
  undefined8 *puStack_50;
  uint *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  if ((DAT_1469e7ad8 == '\0') && (DAT_1468b6148 != 0)) {
    FName::FName(&local_res20,L"MetadataRedirects",1);
    local_98 = (longlong *)
               FConfigCacheIni::GetSectionPrivate
                         (DAT_1468b6148,L"CoreUObject.Metadata",0,1,&DAT_1468e2360);
    if (local_98 != (longlong *)0x0) {
      iVar6 = (int)local_98[5];
      puStack_b0 = (uint *)(local_98 + 2);
      local_b8 = (undefined8 *)0x100000000;
      iStack_a4 = 0;
      iStack_a0 = 0;
      if (iVar6 != 0) {
        puVar10 = (uint *)local_98[4];
        if ((uint *)local_98[4] == (uint *)0x0) {
          puVar10 = puStack_b0;
        }
        uVar3 = *puVar10;
        iVar4 = 0;
        iStack_a0 = 0;
        while (uVar3 == 0) {
          iStack_a0 = iStack_a0 + 0x20;
          uVar1 = (ulonglong)local_b8 >> 0x20;
          local_b8 = (undefined8 *)CONCAT44((int)uVar1,iVar4 + 1);
          if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14175afaf;
          uVar3 = puVar10[(longlong)iVar4 + 1];
          iVar4 = iVar4 + 1;
        }
        uVar3 = -uVar3 & uVar3;
        iVar4 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        local_b8 = (undefined8 *)CONCAT44(uVar3,SUB84(local_b8,0));
        if (uVar3 == 0) {
          iVar4 = 0x20;
        }
        else {
          iVar4 = 0x1f - iVar4;
        }
        iStack_a4 = (iStack_a0 - iVar4) + 0x1f;
        if (iVar6 < iStack_a4) {
LAB_14175afaf:
          iStack_a4 = iVar6;
        }
      }
      local_a8 = 0xffffffff;
      uStack_80 = CONCAT44(iStack_a4,0xffffffff);
      auStack_40._8_4_ = iStack_a0;
      auStack_40._0_8_ = uStack_80;
      auStack_40._12_4_ = uStack_9c;
      puStack_50 = local_b8;
      local_60 = 0;
      local_30._0_4_ = SUB84(local_98,0);
      local_30._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
      uStack_90 = local_b8;
      local_78._8_4_ = (undefined4)local_30;
      local_78._0_8_ = auStack_40._8_8_;
      local_78._12_4_ = local_30._4_4_;
      iVar6 = iStack_a4;
      local_88 = puStack_b0;
      local_68 = local_98;
      local_58 = local_98;
      puStack_48 = puStack_b0;
      local_30 = local_98;
      if (iStack_a4 < (int)local_98[5]) {
        do {
          plVar2 = local_98;
          plVar8 = (longlong *)(*local_98 + (longlong)iVar6 * 0x30);
          if (*plVar8 == local_res20) {
            local_res10 = 0;
            local_res18[0] = 0;
            local_res18[1] = 0;
            lVar5 = 0x18;
            iVar4 = (int)plVar8[4] + -1;
            if ((int)plVar8[4] == 0) {
              iVar4 = 0;
            }
            if (iVar4 < 1) {
              lVar5 = 8;
            }
            if (*(int *)(lVar5 + 8 + (longlong)plVar8) == 0) {
              puVar7 = &DAT_143f3eda8;
            }
            else {
              puVar7 = *(undefined2 **)(lVar5 + (longlong)plVar8);
            }
            FParse::Value(puVar7,L"OldKey=",&local_res10);
            lVar9 = *plVar2 + (longlong)iVar6 * 0x30;
            lVar5 = 0x18;
            iVar6 = *(int *)(lVar9 + 0x20) + -1;
            if (*(int *)(lVar9 + 0x20) == 0) {
              iVar6 = 0;
            }
            if (iVar6 < 1) {
              lVar5 = 8;
            }
            if (*(int *)(lVar5 + 8 + lVar9) == 0) {
              puVar7 = &DAT_143f3eda8;
            }
            else {
              puVar7 = *(undefined2 **)(lVar5 + lVar9);
            }
            FParse::Value(puVar7,L"NewKey=",local_res18);
            local_b8 = &local_res10;
            puStack_b0 = local_res18;
            TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
                      (&DAT_1464b4ef0,local_res8,&local_b8,0);
          }
          uStack_80 = CONCAT44(uStack_80._4_4_,(uint)uStack_80 & ~uStack_90._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
          iVar6 = uStack_80._4_4_;
        } while (uStack_80._4_4_ < (int)local_88[6]);
        if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
          TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
        }
      }
    }
    DAT_1469e7ad8 = '\x01';
  }
  return;
}



// FUNCTION 14175b1d0 FUN_14175b1d0 body=437 status=ok
// SIG undefined FUN_14175b1d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14175b1d0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  void *_Src;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  size_t sVar10;
  int iVar11;
  int iVar12;
  void *_Dst;
  undefined1 auStack_88 [48];
  int local_58 [2];
  longlong local_50;
  undefined8 local_48;
  size_t local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)local_58;
  puVar8 = auStack_88;
  if ((param_2 != (longlong *)0x0) &&
     (puVar8 = auStack_88,
     (*(ulonglong *)(*(longlong *)(param_1 + 0x70) + 0x38) & 0x8000080000) != 0)) {
    local_58[0] = *(int *)(*(longlong *)(param_1 + 0x70) + 0x34);
    if (local_58[0] == 0) {
      _Dst = (void *)0x0;
      puVar8 = auStack_88;
    }
    else {
      uVar5 = (longlong)(local_58[0] + 0xf) + 0xf;
      if (uVar5 <= (ulonglong)(longlong)(local_58[0] + 0xf)) {
        uVar5 = 0xffffffffffffff0;
      }
      puVar8 = auStack_88 + -(uVar5 & 0xfffffffffffffff0);
      _Dst = (void *)((longlong)&local_50 + -(uVar5 & 0xfffffffffffffff0));
    }
    iVar6 = (int)param_2[1];
    iVar9 = 0;
    if (0 < iVar6) {
      sVar10 = (size_t)local_58[0];
      iVar12 = 0;
      iVar11 = 0;
      local_50 = param_1;
      local_48 = param_4;
      local_40 = sVar10;
      local_38 = param_3;
      do {
        if (((local_38 == (longlong *)0x0) || ((int)local_38[1] <= iVar9)) ||
           ((int)local_38[1] == 0)) {
          lVar7 = 0;
        }
        else {
          lVar7 = (longlong)iVar11 + *local_38;
        }
        if (iVar6 == 0) {
          _Src = (void *)0x0;
        }
        else {
          _Src = (void *)(*param_2 + (longlong)iVar12);
        }
        *(undefined8 *)(puVar8 + -8) = 0x14175b2c7;
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,sVar10);
        uVar4 = local_48;
        lVar3 = local_50;
        *(undefined8 *)(puVar8 + 0x20) = param_5;
        plVar1 = *(longlong **)(lVar3 + 0x70);
        pcVar2 = *(code **)(*plVar1 + 0x340);
        *(undefined8 *)(puVar8 + -8) = 0x14175b2ee;
        (*pcVar2)(plVar1,_Dst,lVar7,uVar4);
        sVar10 = local_40;
        if (iVar9 < (int)param_2[1]) {
          if ((int)param_2[1] == 0) {
            *(undefined8 *)(puVar8 + -8) = 0x14175b308;
            _guard_xfg_dispatch_icall_nop((void *)0x0,_Dst,sVar10);
          }
          else {
            lVar7 = *param_2;
            *(undefined8 *)(puVar8 + -8) = 0x14175b31c;
            _guard_xfg_dispatch_icall_nop((void *)(lVar7 + iVar12),_Dst,sVar10);
          }
        }
        else if ((~(byte)((ulonglong)(*(longlong **)(local_50 + 0x70))[7] >> 0x24) & 1) != 0) {
          pcVar2 = *(code **)(**(longlong **)(local_50 + 0x70) + 0x328);
          *(undefined8 *)(puVar8 + -8) = 0x14175b340;
          (*pcVar2)();
        }
        sVar10 = (size_t)local_58[0];
        iVar9 = iVar9 + 1;
        iVar6 = (int)param_2[1];
        iVar11 = iVar11 + local_58[0];
        iVar12 = iVar12 + local_58[0];
      } while (iVar9 < iVar6);
    }
  }
  *(undefined8 *)(puVar8 + -8) = 0x14175b36b;
  return;
}



// FUNCTION 14175b390 FUN_14175b390 body=522 status=ok
// SIG undefined FUN_14175b390(void)

void FUN_14175b390(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong **local_res8;
  uint in_stack_ffffffffffffff88;
  uint in_stack_ffffffffffffff90;
  uint in_stack_ffffffffffffff98;
  longlong *local_58;
  undefined8 local_50;
  code *local_48;
  longlong ***ppplStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  iVar7 = 0;
  if (0 < (int)param_1[6]) {
    do {
      lVar3 = (**(code **)(*param_1 + 0x378))
                        (param_1,*(int *)((longlong)param_1 + 0x34) * iVar7 + param_2);
      if (lVar3 != 0) {
        if (param_3 == 0) {
LAB_14175b429:
          lVar1 = *(longlong *)(lVar3 + 0x18);
          if (DAT_1469e7e10 == '\0') {
            cVar2 = IsGarbageCollecting();
            if (cVar2 == '\0') {
              uVar5 = UObject::GetPrivateStaticClass();
              in_stack_ffffffffffffff98 = 0;
              in_stack_ffffffffffffff90 = 0;
              in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffff00;
              lVar4 = FUN_141799680(uVar5,param_4,lVar1,0,in_stack_ffffffffffffff88,0,0);
              if (lVar4 != 0) {
                cVar2 = FUN_141790310(lVar4);
                if (cVar2 == '\0') {
                  lVar4 = 0;
                }
              }
              goto LAB_14175b517;
            }
          }
          local_res8 = &local_58;
          local_58 = (longlong *)0x0;
          ppplStack_40 = &local_res8;
          in_stack_ffffffffffffff88 = 0;
          local_50 = 0;
          local_48 = FUN_141750620;
          local_38 = 0x41750620;
          uStack_34 = 1;
          uStack_30 = ppplStack_40;
          FUN_1417a4830(param_4,&local_38,0,0,0);
          for (plVar6 = local_58;
              (lVar4 = 0, plVar6 != local_58 + (int)local_50 &&
              (lVar4 = *plVar6, *(longlong *)(lVar4 + 0x18) != lVar1)); plVar6 = plVar6 + 1) {
          }
          if (local_58 != (longlong *)0x0) {
            FMemory::Free(local_58);
          }
        }
        else {
          lVar4 = (**(code **)(*param_1 + 0x378))
                            (param_1,*(int *)((longlong)param_1 + 0x34) * iVar7 + param_3);
          if ((lVar4 == 0) || (*(longlong *)(lVar4 + 0x18) != *(longlong *)(lVar3 + 0x18)))
          goto LAB_14175b429;
        }
LAB_14175b517:
        in_stack_ffffffffffffff98 = in_stack_ffffffffffffff98 & 0xffffff00;
        in_stack_ffffffffffffff90 =
             CONCAT31((int3)(in_stack_ffffffffffffff90 >> 8),(char)((ulonglong)param_1[7] >> 0x13))
             & 0xffffff01;
        in_stack_ffffffffffffff88 =
             CONCAT31((int3)(in_stack_ffffffffffffff88 >> 8),(char)((ulonglong)param_1[7] >> 0xd)) &
             0xffffff01;
        uVar5 = FUN_14171e0d0(param_5,lVar4,lVar3,param_4,in_stack_ffffffffffffff88,
                              in_stack_ffffffffffffff90,in_stack_ffffffffffffff98);
        (**(code **)(*param_1 + 0x380))
                  (param_1,*(int *)((longlong)param_1 + 0x34) * iVar7 + param_2,uVar5);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)param_1[6]);
  }
  return;
}



// FUNCTION 14175b5a0 IsAsset body=191 status=ok
// SIG undefined IsAsset(void)

ulonglong UObject::IsAsset(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar2;
  if (((uVar2 & 0x50) == 0) && ((uVar2 & 1) != 0)) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar6;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    uVar5 = 0;
    if (((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) &&
       (lVar3 = *(longlong *)(param_1 + 0x20), lVar3 != 0)) {
      lVar4 = UPackage::StaticClass();
      iVar1 = *(int *)(lVar4 + 0x90);
      uVar5 = (longlong)iVar1;
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < iVar1) ||
         (uVar5 = *(ulonglong *)(*(longlong *)(lVar3 + 0x10) + 0x88),
         *(longlong *)(uVar5 + (longlong)iVar1 * 8) != lVar4 + 0x88)) {
        uVar5 = uVar5 & 0xffffffffffffff00;
      }
      else {
        uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
      }
      if (((char)uVar5 != '\0') && (lVar3 != DAT_1469e7a80)) {
        uVar2 = *(uint *)(lVar3 + 8) >> 6;
        uVar5 = (ulonglong)uVar2;
        if ((uVar2 & 1) == 0) {
          return CONCAT71((uint7)(uint3)(*(uint *)(lVar3 + 8) >> 0xe),1);
        }
      }
    }
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 14175b660 IsExcluded body=672 status=ok
// SIG undefined IsExcluded(void)

undefined8 FClassExclusionData::IsExcluded(longlong *param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  longlong local_res8;
  longlong local_res10;
  longlong local_28 [2];
  
  local_res10 = *(longlong *)(param_2 + 0x18);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x28);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar4 = (int)((ulonglong)local_res10 >> 0x20);
  if ((int)param_1[0x15] != *(int *)((longlong)param_1 + 0xd4)) {
    plVar7 = (longlong *)param_1[0x1c];
    if ((longlong *)param_1[0x1c] == (longlong *)0x0) {
      plVar7 = param_1 + 0x1b;
    }
    iVar3 = *(int *)((longlong)plVar7 +
                    ((longlong)(iVar4 + (int)local_res10) & (longlong)(int)param_1[0x1d] - 1U) * 4);
    if (iVar3 != -1) {
      lVar1 = param_1[0x14];
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar3 * 0x10) == local_res10) {
          if (iVar3 != -1) goto LAB_14175b8fb;
          break;
        }
        iVar3 = *(int *)(lVar1 + 8 + (longlong)iVar3 * 0x10);
      } while (iVar3 != -1);
    }
  }
  if ((int)param_1[0x1f] != *(int *)((longlong)param_1 + 0x124)) {
    plVar7 = (longlong *)param_1[0x26];
    if ((longlong *)param_1[0x26] == (longlong *)0x0) {
      plVar7 = param_1 + 0x25;
    }
    iVar4 = *(int *)((longlong)plVar7 +
                    ((longlong)(iVar4 + (int)local_res10) & (longlong)(int)param_1[0x27] - 1U) * 4);
    if (iVar4 != -1) {
      lVar1 = param_1[0x1e];
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar4 * 0x10) == local_res10) {
          if (iVar4 != -1) goto LAB_14175b8c3;
          break;
        }
        iVar4 = *(int *)(lVar1 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  do {
    if ((int)param_1[0xb] != *(int *)((longlong)param_1 + 0x84)) {
      uVar5 = UObjectBaseUtility::GetOutermost(param_2);
      puVar6 = (undefined8 *)FPackageName::GetShortName(local_28,uVar5);
      if (*(int *)(puVar6 + 1) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)*puVar6;
      }
      FName::FName(&local_res8,puVar8,1);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      if ((int)param_1[0xb] != *(int *)((longlong)param_1 + 0x84)) {
        plVar7 = (longlong *)param_1[0x12];
        if ((longlong *)param_1[0x12] == (longlong *)0x0) {
          plVar7 = param_1 + 0x11;
        }
        iVar4 = *(int *)((longlong)plVar7 +
                        ((longlong)((int)((ulonglong)local_res8 >> 0x20) + (int)local_res8) &
                        (longlong)(int)param_1[0x13] - 1U) * 4);
        if (iVar4 != -1) {
          do {
            if (*(longlong *)(param_1[10] + (longlong)iVar4 * 0x10) == local_res8) {
              if (iVar4 != -1) goto LAB_14175b8e6;
              break;
            }
            iVar4 = *(int *)(param_1[10] + 8 + (longlong)iVar4 * 0x10);
          } while (iVar4 != -1);
        }
      }
    }
    lVar1 = *(longlong *)(param_2 + 0x18);
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar7 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar4 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x10) == lVar1) {
            if (iVar4 != -1) goto LAB_14175b8e6;
            break;
          }
          iVar4 = *(int *)(*param_1 + 8 + (longlong)iVar4 * 0x10);
        } while (iVar4 != -1);
      }
    }
    param_2 = *(longlong *)(param_2 + 0x30);
  } while (param_2 != 0);
  FUN_140800100(param_1 + 0x1e,&local_res8,&local_res10,0);
LAB_14175b8c3:
  uVar5 = 0;
LAB_14175b8c6:
  LeaveCriticalSection(lpCriticalSection);
  return uVar5;
LAB_14175b8e6:
  FUN_140800100(param_1 + 0x14,&local_res8,&local_res10,0);
LAB_14175b8fb:
  uVar5 = 1;
  goto LAB_14175b8c6;
}



// FUNCTION 14175b900 IsFullNameStableForNetworking body=55 status=ok
// SIG undefined IsFullNameStableForNetworking(void)

void UObject::IsFullNameStableForNetworking(longlong *param_1)

{
  char cVar1;
  
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    cVar1 = (**(code **)(*(longlong *)param_1[4] + 0x1b8))();
    if (cVar1 == '\0') {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014175b930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1b8))(param_1);
  return;
}



// FUNCTION 14175b940 IsFullyLoaded body=624 status=ok
// SIG undefined IsFullyLoaded(void)

byte UPackage::IsFullyLoaded(longlong param_1)

{
  short *psVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  short *psVar11;
  bool bVar12;
  undefined8 local_res8;
  longlong local_58;
  ulonglong local_50;
  longlong local_48 [4];
  
  lVar10 = 0;
  if ((*(byte *)(param_1 + 0x28) & 2) == 0) {
    iVar6 = *(int *)(param_1 + 0xc);
    if (iVar6 < (int)DAT_1469e91c4) {
      uVar9 = iVar6 >> 0x1f & 0xffff;
      uVar5 = iVar6 + uVar9;
      lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
               (longlong)(int)((uVar5 & 0xffff) - uVar9) * 0x18;
    }
    if ((*(uint *)(lVar10 + 8) >> 0x1b & 1) == 0) {
      local_48[0] = 0;
      local_48[1] = 0;
      local_res8 = 0;
      bVar12 = *(longlong *)(param_1 + 0x58) == 0;
      if (bVar12) {
        local_res8 = *(undefined8 *)(param_1 + 0x18);
        FName::ToString(&local_res8,&local_58);
        plVar7 = &local_58;
      }
      else {
        plVar7 = (longlong *)FName::ToString((longlong *)(param_1 + 0x58),local_48 + 2);
      }
      psVar1 = (short *)*plVar7;
      *plVar7 = 0;
      lVar10 = plVar7[1];
      plVar7[1] = 0;
      if ((bVar12) && (local_58 != 0)) {
        FMemory::Free();
      }
      if ((!bVar12) && (local_48[2] != 0)) {
        FMemory::Free();
      }
      bVar12 = false;
      lVar2 = *(longlong *)(param_1 + 0x18);
      plVar7 = (longlong *)FUN_14178d740();
      if ((int)plVar7[1] != *(int *)((longlong)plVar7 + 0x34)) {
        plVar8 = (longlong *)plVar7[8];
        if ((longlong *)plVar7[8] == (longlong *)0x0) {
          plVar8 = plVar7 + 7;
        }
        iVar6 = *(int *)((longlong)plVar8 +
                        ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                        (longlong)(int)plVar7[9] - 1U) * 4);
        if (iVar6 != -1) {
          do {
            if (*(longlong *)(*plVar7 + (longlong)iVar6 * 0x18) == lVar2) {
              if (iVar6 != -1) goto LAB_14175bb49;
              break;
            }
            iVar6 = *(int *)(*plVar7 + 0x10 + (longlong)iVar6 * 0x18);
          } while (iVar6 != -1);
        }
      }
      local_58 = 0;
      psVar11 = &DAT_143f3eda8;
      if ((int)lVar10 != 0) {
        psVar11 = psVar1;
      }
      local_50 = 0;
      if ((psVar11 != (short *)0x0) && (*psVar11 != 0)) {
        lVar10 = -1;
        do {
          lVar10 = lVar10 + 1;
        } while (psVar11[lVar10] != 0);
        uVar5 = (int)lVar10 + 1;
        local_50 = (ulonglong)uVar5;
        if (0 < (int)uVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
        }
        FGenericPlatformString::Memcpy(local_58,psVar11,(longlong)(int)uVar5 * 2);
      }
      bVar12 = true;
      cVar4 = FUN_1416f0740(&local_58,0,local_48,1);
      if (cVar4 == '\0') {
        bVar3 = true;
      }
      else {
LAB_14175bb49:
        bVar3 = false;
      }
      if ((bVar12) && (local_58 != 0)) {
        FMemory::Free();
      }
      if (bVar3) {
        *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 2;
      }
      if (psVar1 != (short *)0x0) {
        FMemory::Free(psVar1);
      }
      if (local_48[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return *(byte *)(param_1 + 0x28) >> 1 & 1;
}



// FUNCTION 14175bbb0 IsLocalizedResource body=103 status=ok
// SIG undefined IsLocalizedResource(void)

undefined8 UObject::IsLocalizedResource(void)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong local_18 [2];
  
  bVar4 = false;
  lVar2 = UObjectBaseUtility::GetOutermost();
  if (lVar2 != 0) {
    bVar4 = true;
    uVar3 = UObjectBaseUtility::GetPathName(lVar2,local_18,0);
    cVar1 = FUN_1416fc210(uVar3);
    if (cVar1 != '\0') {
      uVar3 = 1;
      goto LAB_14175bbf4;
    }
  }
  uVar3 = 0;
LAB_14175bbf4:
  if ((bVar4) && (local_18[0] != 0)) {
    FMemory::Free();
  }
  return uVar3;
}



// FUNCTION 14175bc20 FUN_14175bc20 body=5 status=ok
// SIG undefined FUN_14175bc20(void)

undefined1 FUN_14175bc20(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



// FUNCTION 14175bc30 IsNameStableForNetworking body=105 status=ok
// SIG undefined IsNameStableForNetworking(void)

undefined1 UObject::IsNameStableForNetworking(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  if ((*(uint *)(param_1 + 8) & 0xc0000) == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x19 & 1) == 0) {
      cVar2 = FUN_141790310(param_1);
      if (cVar2 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 14175bca0 IsPackageLoaded body=80 status=ok
// SIG undefined IsPackageLoaded(void)

bool `InitUObject'::`2'::Local::IsPackageLoaded(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined8 local_res8 [4];
  longlong local_18 [2];
  
  local_res8[0] = param_1;
  puVar1 = (undefined8 *)FName::ToString(local_res8,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar1;
  }
  lVar2 = FUN_14178ae20(0,puVar3);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return lVar2 != 0;
}



// FUNCTION 14175bcf0 IsSafeForRootSet body=99 status=ok
// SIG undefined IsSafeForRootSet(void)

ulonglong UObject::IsSafeForRootSet(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar3 = IsInBlueprint();
  if ((char)uVar3 == '\0') {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    uVar3 = 0;
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
      return 1;
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 14175bd60 FUN_14175bd60 body=10 status=ok
// SIG undefined FUN_14175bd60(void)

void FUN_14175bd60(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014175bd63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c0))();
  return;
}



// FUNCTION 14175bd90 FUN_14175bd90 body=157 status=ok
// SIG undefined FUN_14175bd90(void)

void FUN_14175bd90(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = FUN_1417a53c0();
  if (lVar3 != 0) {
    FUN_141740c00(lVar3 + 0x200,param_1);
  }
  (**(code **)(*param_2 + 0x70))(param_2,*(undefined8 *)(param_1 + 0x70));
  plVar1 = *(longlong **)(param_1 + 0x70);
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_2);
  if ((*(byte *)(*(longlong *)(plVar1[4] + 0x10) + 0xb8) & 8) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(plVar1[4] + 0x40);
  }
  iVar2 = (**(code **)(*plVar1 + 0x348))(plVar1);
  *(int *)((longlong)plVar1 + 0x44) = iVar2 + -1 + iVar4 & -iVar2;
  *(undefined4 *)(param_1 + 0x34) = 0x10;
  *(ulonglong *)(param_1 + 0x38) = *(ulonglong *)(param_1 + 0x38) | 0x200;
  return;
}



// FUNCTION 14175be70 FUN_14175be70 body=4522 status=ok
// SIG undefined FUN_14175be70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14175be70(ulonglong *param_1,longlong *param_2,short *param_3,uint param_4,
                  ulonglong *param_5)

{
  void *_Src;
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  short **ppsVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  void **ppvVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  int iVar16;
  short *psVar17;
  undefined2 *puVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  short *psVar24;
  ulonglong *puVar25;
  longlong *plVar26;
  bool bVar27;
  undefined1 auStack_468 [32];
  ulonglong *local_448;
  undefined8 local_440;
  char local_438;
  uint local_434;
  char local_430;
  int local_42c;
  short *local_428;
  undefined8 local_420;
  short *local_418;
  ulonglong *local_410;
  ulonglong local_408;
  short *local_400;
  int local_3f8;
  int local_3f0;
  undefined2 *local_3e8;
  undefined8 local_3e0;
  int local_3d8;
  short *local_3d0;
  undefined8 local_3c8;
  longlong *local_3c0;
  ulonglong *local_3b8;
  int local_3b0 [2];
  undefined2 *local_3a8;
  int local_3a0;
  undefined4 local_39c;
  short *local_398;
  int local_390;
  int local_388;
  int local_384;
  uint local_380;
  ulonglong local_378;
  ulonglong local_370;
  longlong local_368;
  undefined8 local_360;
  ulonglong local_358;
  ulonglong local_350;
  void *local_348;
  int local_340;
  undefined4 local_33c;
  short *local_338;
  ulonglong local_330;
  ulonglong local_328;
  ulonglong local_320;
  longlong *local_318;
  ulonglong local_310;
  short *local_308;
  int local_300;
  undefined4 local_2fc;
  short *local_2f8;
  ulonglong *local_2f0;
  longlong *local_2e8;
  longlong *local_2e0;
  int local_2d8;
  undefined4 uStack_2d4;
  ulonglong local_2c0 [2];
  short *local_2b0;
  longlong local_2a8 [2];
  undefined1 local_298 [256];
  short *local_198;
  undefined1 *local_190;
  undefined4 local_188;
  longlong local_178 [36];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_468;
  lVar9 = 0;
  local_2b0 = param_3;
  local_3c0 = param_2;
  local_3b8 = param_1;
  local_2f0 = param_5;
  local_3b0[0] = 0;
  if (param_2 == (longlong *)0x0) {
    param_2 = (longlong *)param_1[2];
    local_3c0 = param_2;
    _DAT_1469e7af0 = param_2;
  }
  if ((*(uint *)((longlong)param_2 + 0xb4) >> 2 & 1) == 0) {
    return;
  }
  lVar20 = param_2[6];
  local_3c0 = param_2;
  local_380 = param_4;
  if (lVar20 != 0) {
    if ((*(uint *)(lVar20 + 0xb4) >> 2 & 1) == 0) {
      if ((param_4 & 2) != 0) {
        FUN_14174ccf0(&local_400,0x10,1);
        psVar17 = local_400;
        iVar4 = local_3f8;
LAB_14175c118:
        if ((local_3f0 < 0) || (iVar4 <= local_3f0)) {
          bVar27 = false;
        }
        else {
          bVar27 = true;
        }
        if (bVar27) {
          plVar13 = *(longlong **)(psVar17 + (longlong)local_3f0 * 4);
          for (plVar10 = plVar13; plVar10 != (longlong *)0x0; plVar10 = (longlong *)plVar10[6]) {
            if (plVar10 == param_2) {
              lVar9 = plVar13[0x1f];
              if (lVar9 == 0) {
                (**(code **)(*plVar13 + 0x368))(plVar13);
                lVar9 = plVar13[0x1f];
              }
              local_448 = param_5;
              FUN_14175be70(lVar9,plVar13,0,param_4 & 0xc);
              psVar17 = local_400;
              iVar4 = local_3f8;
              break;
            }
          }
          do {
            local_3f0 = local_3f0 + 1;
            if (iVar4 <= local_3f0) break;
          } while (*(longlong *)(psVar17 + (longlong)local_3f0 * 4) == 0);
          goto LAB_14175c118;
        }
        goto joined_r0x00014175cfe6;
      }
      if ((param_4 & 4) != 0) {
        uVar7 = UObject::GetPrivateStaticClass();
        local_448 = (ulonglong *)((ulonglong)local_448 & 0xffffffff00000000);
        FObjectIterator::FObjectIterator(&local_2e8,uVar7,0,0x10);
        plVar13 = (longlong *)CONCAT44(uStack_2d4,local_2d8);
        while (plVar13 != (longlong *)0x0) {
          if (*(longlong **)(*plVar13 + 0x10) == param_2) {
            lVar20 = *plVar13;
            if (plVar13 == (longlong *)0x0) {
              lVar20 = lVar9;
            }
            lVar14 = lVar9;
            if (plVar13 != (longlong *)0x0) {
              lVar14 = *plVar13;
            }
            local_448 = param_5;
            FUN_14175be70(lVar14,*(undefined8 *)(lVar20 + 0x10),0,param_4 & 8);
          }
          TObjectIterator<UObject>::operator++(&local_2e8);
          plVar13 = (longlong *)CONCAT44(uStack_2d4,local_2d8);
        }
      }
    }
    else if ((param_4 & 1) == 0) {
      if ((param_4 & 2) != 0) {
        FUN_14174ccf0(&local_400,0x10,1);
        psVar17 = local_400;
        iVar4 = local_3f8;
LAB_14175bf68:
        if ((local_3f0 < 0) || (iVar4 <= local_3f0)) {
          bVar27 = false;
        }
        else {
          bVar27 = true;
        }
        if (bVar27) {
          plVar13 = *(longlong **)(psVar17 + (longlong)local_3f0 * 4);
          for (plVar10 = plVar13; plVar10 != (longlong *)0x0; plVar10 = (longlong *)plVar10[6]) {
            if (plVar10 == param_2) {
              lVar9 = plVar13[0x1f];
              if (lVar9 == 0) {
                (**(code **)(*plVar13 + 0x368))(plVar13);
                lVar9 = plVar13[0x1f];
              }
              local_448 = param_5;
              FUN_14175be70(lVar9,plVar13,0,param_4 & 0xc);
              psVar17 = local_400;
              iVar4 = local_3f8;
              break;
            }
          }
          do {
            local_3f0 = local_3f0 + 1;
            if (iVar4 <= local_3f0) break;
          } while (*(longlong *)(psVar17 + (longlong)local_3f0 * 4) == 0);
          goto LAB_14175bf68;
        }
        goto joined_r0x00014175cfe6;
      }
      if ((param_4 & 4) != 0) {
        uVar7 = UObject::GetPrivateStaticClass();
        local_448 = (ulonglong *)((ulonglong)local_448 & 0xffffffff00000000);
        FObjectIterator::FObjectIterator(&local_2e8,uVar7,0,0x10);
        plVar13 = (longlong *)CONCAT44(uStack_2d4,local_2d8);
        if (plVar13 != (longlong *)0x0) {
          do {
            if ((*(int *)(*(longlong *)(*plVar13 + 0x10) + 0x90) < (int)param_2[0x12]) ||
               (*(longlong **)
                 (*(longlong *)(*(longlong *)(*plVar13 + 0x10) + 0x88) +
                 (longlong)(int)param_2[0x12] * 8) != param_2 + 0x11)) {
              bVar27 = false;
            }
            else {
              bVar27 = true;
            }
            if (bVar27) {
              lVar14 = lVar9;
              lVar20 = lVar9;
              if (plVar13 != (longlong *)0x0) {
                lVar14 = *plVar13;
                lVar20 = *plVar13;
              }
              local_448 = param_5;
              FUN_14175be70(lVar14,*(undefined8 *)(lVar20 + 0x10),0,param_4 & 8);
            }
            TObjectIterator<UObject>::operator++(&local_2e8);
            plVar13 = (longlong *)CONCAT44(uStack_2d4,local_2d8);
          } while (plVar13 != (longlong *)0x0);
        }
      }
    }
    else {
      local_448 = param_5;
      FUN_14175be70(param_1,lVar20,0);
      if ((param_4 & 6) != 0) {
        return;
      }
    }
  }
  if (param_3 == (short *)0x0) {
    uVar23 = 2;
    local_434 = 2;
    FUN_14171af40(param_1[2],&local_398);
    ppsVar6 = &local_398;
  }
  else {
    uVar23 = 1;
    local_428 = (short *)0x0;
    local_434 = 1;
    local_420 = 0;
    if (*param_3 != 0) {
      lVar20 = -1;
      do {
        lVar20 = lVar20 + 1;
      } while (param_3[lVar20] != 0);
      uVar19 = (int)lVar20 + 1;
      local_420 = (ulonglong)uVar19;
      if (0 < (int)uVar19) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_428,0);
      }
      FGenericPlatformString::Memcpy(local_428,param_3,(longlong)(int)uVar19 * 2);
    }
    ppsVar6 = &local_428;
  }
  local_2f8 = *ppsVar6;
  *ppsVar6 = (short *)0x0;
  local_388 = *(int *)(ppsVar6 + 1);
  ppsVar6[1] = (short *)0x0;
  if (((uVar23 & 2) != 0) &&
     (uVar23 = uVar23 & 0xfffffffd, local_434 = uVar23, local_398 != (short *)0x0)) {
    FMemory::Free();
  }
  if (((uVar23 & 1) != 0) &&
     (uVar23 = uVar23 & 0xfffffffe, local_434 = uVar23, local_428 != (short *)0x0)) {
    FMemory::Free();
  }
  if (((*(uint *)(param_1[2] + 0xb4) >> 10 & 1) == 0) || (((uint)param_1[1] >> 4 & 1) != 0)) {
    local_430 = '\0';
  }
  else {
    lVar9 = 1;
    local_430 = '\x01';
  }
  if ((param_3 == (short *)0x0) && (lVar20 = (**(code **)(*param_1 + 0x200))(param_1), lVar20 != 0))
  {
    local_190 = local_298;
    local_188 = 7;
    uVar23 = uVar23 | 4;
    local_448 = (ulonglong *)CONCAT62(local_448._2_6_,0x3f);
    local_434 = uVar23;
    local_198 = param_3;
    FGenericPlatformString::Convert<char,wchar_t>(local_190,8,"Windows");
    puVar2 = local_190;
    uVar7 = (**(code **)(*param_1 + 0x200))(param_1);
    iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(uVar7,puVar2);
    if (iVar4 == 0) goto LAB_14175c3d2;
    cVar3 = '\x01';
  }
  else {
LAB_14175c3d2:
    cVar3 = '\0';
  }
  local_438 = cVar3;
  if (((uVar23 & 4) != 0) &&
     (uVar23 = uVar23 & 0xfffffffb, local_434 = uVar23, local_198 != (short *)0x0)) {
    FMemory::Free();
  }
  FConfigFile::FConfigFile(local_178);
  if (cVar3 != '\0') {
    puVar8 = (undefined8 *)FName::ToString(param_1[2] + 0xd0,&local_398);
    if (*(int *)(puVar8 + 1) == 0) {
      puVar18 = &DAT_143f3eda8;
    }
    else {
      puVar18 = (undefined2 *)*puVar8;
    }
    uVar7 = (**(code **)(*param_1 + 0x200))(param_1);
    local_448 = (ulonglong *)((ulonglong)local_448 & 0xffffffffffffff00);
    FConfigCacheIni::LoadLocalIniFile(local_178,puVar18,1,uVar7);
    if (local_398 != (short *)0x0) {
      FMemory::Free();
    }
  }
  local_42c = 0;
  local_418 = (short *)0x0;
  if ((char)lVar9 == '\x01') {
    local_3e8 = (undefined2 *)0x0;
    local_3e0 = 0;
    lVar9 = UObjectBaseUtility::GetOutermost(param_1);
    if (lVar9 == DAT_1469e7a80) {
      local_408 = param_1[3];
      FName::ToString(&local_408,&local_3a8);
      if (local_3e8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_3e8 = local_3a8;
      local_3e0 = CONCAT44(local_39c,local_3a0);
    }
    else {
      UObjectBaseUtility::GetPathName(param_1,lVar9,&local_3e8);
    }
    local_408 = *(ulonglong *)(param_1[2] + 0x18);
    FName::ToString(&local_408,&local_3d0);
    puVar18 = local_3e8;
    lVar9 = (longlong)(int)local_3e0;
    local_428 = (short *)0x0;
    local_420._0_4_ = (int)local_3e0;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_428,(2 - (uint)((int)local_3e0 != 0)) + (int)local_3e0,0);
    psVar17 = local_428;
    local_418 = local_428;
    _guard_xfg_dispatch_icall_nop(local_428,puVar18,lVar9 * 2);
    iVar4 = (int)local_420;
    lVar9 = (longlong)(int)local_420;
    local_42c = (2 - (uint)((int)local_420 != 0)) + (int)local_420;
    local_420 = CONCAT44(local_420._4_4_,local_42c);
    iVar16 = local_420._4_4_;
    if (local_420._4_4_ < local_42c) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_428,iVar4);
      local_42c = (int)local_420;
      local_418 = local_428;
      psVar17 = local_428;
      iVar16 = local_420._4_4_;
    }
    psVar17[lVar9 - (ulonglong)(iVar4 != 0)] = 0x20;
    (psVar17 + (lVar9 - (ulonglong)(iVar4 != 0)))[1] = 0;
    if (local_42c < 2) {
      local_418 = local_3d0;
      local_42c = (int)local_3c8;
      local_3c8 = 0;
      local_3d0 = (short *)0x0;
    }
    else {
      iVar4 = 0;
      if ((int)local_3c8 != 0) {
        iVar4 = (int)local_3c8 + -1;
      }
      if ((local_42c != 0) || (iVar5 = 1, iVar4 == 0)) {
        iVar5 = 0;
      }
      iVar5 = iVar4 + iVar5 + local_42c;
      local_420 = CONCAT44(iVar16,local_42c);
      local_428 = psVar17;
      if (iVar16 < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_428,iVar5);
        local_42c = (int)local_420;
        local_418 = local_428;
        iVar16 = local_420._4_4_;
      }
      psVar24 = local_3d0;
      iVar5 = local_42c;
      psVar17 = (short *)0x0;
      if (iVar4 != 0) {
        lVar9 = (longlong)local_42c;
        local_42c = iVar4 + (uint)(local_42c == 0) + local_42c;
        local_420 = CONCAT44(local_420._4_4_,local_42c);
        if (iVar16 < local_42c) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_428,iVar5);
          local_42c = (int)local_420;
          local_418 = local_428;
        }
        psVar17 = local_428 + (lVar9 - (ulonglong)(iVar5 != 0));
        _guard_xfg_dispatch_icall_nop(psVar17,psVar24,(longlong)iVar4 * 2);
        psVar17[iVar4] = 0;
        psVar17 = (short *)0x0;
      }
    }
    if (psVar17 != (short *)0x0) {
      FMemory::Free(psVar17);
    }
    if (local_3d0 != (short *)0x0) {
      FMemory::Free(local_3d0);
    }
    uVar23 = local_434;
    if (local_3e8 != (undefined2 *)0x0) {
      FMemory::Free();
      uVar23 = local_434;
    }
  }
  for (puVar25 = (ulonglong *)param_2[0xb]; local_410 = puVar25, puVar25 != (ulonglong *)0x0;
      puVar25 = (ulonglong *)puVar25[10]) {
    uVar21 = puVar25[7];
    if (((uVar21 >> 0xe & 1) != 0) &&
       (((local_2f0 == (ulonglong *)0x0 || (local_2f0 == puVar25)) && ((uVar21 & 0x800000000) == 0))
       )) {
      plVar10 = (longlong *)UField::GetOwnerClass(puVar25);
      plVar13 = param_2;
      if ((uVar21 >> 0x12 & 1) != 0) {
        plVar13 = plVar10;
      }
      if (local_430 == '\0') {
        puVar11 = (ulonglong *)UObjectBaseUtility::GetPathName(plVar13,local_2a8,0);
        if (local_2c0 != puVar11) {
          if (local_418 != (short *)0x0) {
            FMemory::Free();
          }
          local_418 = (short *)*puVar11;
          *puVar11 = 0;
          local_42c = (int)puVar11[1];
          puVar11[1] = 0;
        }
        if (local_2a8[0] != 0) {
          FMemory::Free();
        }
        UObjectBaseUtility::GetOutermost(plVar13);
      }
      if (((uVar21 >> 0x12 & 1) == 0) || (local_2b0 != (short *)0x0)) {
        lVar9 = (longlong)local_388;
        local_348 = (void *)0x0;
        local_340 = local_388;
        if (local_388 == 0) {
          local_33c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_348,local_388,0);
          _guard_xfg_dispatch_icall_nop(local_348,local_2f8,lVar9 * 2);
        }
        ppvVar12 = &local_348;
        uVar19 = 0x10;
      }
      else {
        ppvVar12 = (void **)FUN_14171af40(plVar10,&local_400);
        uVar19 = 8;
      }
      local_300 = *(int *)(ppvVar12 + 1);
      lVar9 = (longlong)local_300;
      uVar23 = uVar19 | uVar23;
      _Src = *ppvVar12;
      psVar17 = (short *)0x0;
      local_308 = (short *)0x0;
      local_434 = uVar23;
      if (local_300 == 0) {
        local_2fc = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_308,local_300,0);
        psVar17 = local_308;
        _guard_xfg_dispatch_icall_nop(local_308,_Src,lVar9 * 2);
      }
      iVar4 = local_300;
      uVar21 = 0;
      if (((uVar23 & 0x10) != 0) &&
         (uVar23 = uVar23 & 0xffffffef, local_434 = uVar23, local_348 != (void *)0x0)) {
        FMemory::Free(local_348);
      }
      if (((uVar23 & 8) != 0) &&
         (uVar23 = uVar23 & 0xfffffff7, local_434 = uVar23, local_400 != (short *)0x0)) {
        FMemory::Free();
      }
      local_2c0[0] = puVar25[3];
      FName::ToString(local_2c0,&local_428);
      lVar9 = UArrayProperty::GetPrivateStaticClass();
      if ((*(int *)(puVar25[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(puVar25[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar27 = false;
      }
      else {
        bVar27 = true;
      }
      if (bVar27) {
        if (local_438 == '\0') {
          local_358 = 0;
          local_350 = 0;
          psVar24 = &DAT_143f3eda8;
          if (iVar4 != 0) {
            psVar24 = psVar17;
          }
          if ((psVar24 != (short *)0x0) && (*psVar24 != 0)) {
            lVar9 = -1;
            do {
              lVar9 = lVar9 + 1;
            } while (psVar24[lVar9] != 0);
            uVar23 = (int)lVar9 + 1;
            local_350 = (ulonglong)uVar23;
            if (0 < (int)uVar23) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_358,0);
            }
            FGenericPlatformString::Memcpy(local_358,psVar24);
          }
          local_448 = &local_358;
          psVar17 = &DAT_143f3eda8;
          if (local_42c != 0) {
            psVar17 = local_418;
          }
          plVar13 = (longlong *)FConfigCacheIni::GetSectionPrivate(DAT_1468b6148,psVar17,0,1);
          uVar21 = local_358;
        }
        else {
          local_328 = 0;
          psVar17 = &DAT_143f3eda8;
          if (local_42c != 0) {
            psVar17 = local_418;
          }
          local_320 = 0;
          if ((psVar17 != (short *)0x0) && (*psVar17 != 0)) {
            lVar9 = -1;
            do {
              lVar9 = lVar9 + 1;
            } while (psVar17[lVar9] != 0);
            uVar23 = (int)lVar9 + 1;
            local_320 = (ulonglong)uVar23;
            if (0 < (int)uVar23) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_328,0);
            }
            uVar21 = local_328;
            FGenericPlatformString::Memcpy(local_328,psVar17,(longlong)(int)uVar23 * 2);
          }
          TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
          ::FindId(local_178,&local_384);
          if ((local_384 == -1) ||
             (lVar9 = (longlong)local_384 * 0xb8 + local_178[0],
             plVar13 = (longlong *)(lVar9 + 0x10), lVar9 == 0)) {
            plVar13 = (longlong *)0x0;
          }
        }
        if (uVar21 != 0) {
          FMemory::Free(uVar21);
        }
        iVar4 = 0;
        param_2 = local_3c0;
        uVar23 = local_434;
        if (plVar13 != (longlong *)0x0) {
          local_318 = (longlong *)0x0;
          psVar17 = &DAT_143f3eda8;
          if ((int)local_420 != 0) {
            psVar17 = local_428;
          }
          local_310 = 0;
          FName::FName(&local_3d0,psVar17,0);
          TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
          ::MultiFind<FDefaultAllocator>(plVar13,local_3d0,&local_318,0);
          uVar21 = local_310;
          plVar10 = (longlong *)puVar25[0xe];
          plVar26 = (longlong *)((longlong)*(int *)((longlong)puVar25 + 0x44) + (longlong)local_3b8)
          ;
          iVar16 = (int)local_310;
          local_3d8 = *(int *)((longlong)plVar10 + 0x34);
          lVar9 = (longlong)local_3d8;
          local_2c0[0] = CONCAT44(local_2c0[0]._4_4_,(int)local_310);
          local_2e8 = plVar10;
          local_2e0 = plVar26;
          local_2d8 = local_3d8;
          if ((int)local_310 < 1) {
            local_408 = 0;
            do {
              psVar17 = &DAT_143f3eda8;
              if ((int)local_420 != 0) {
                psVar17 = local_428;
              }
              FString::PrintfImpl(&local_3a8,L"%s[%i]",psVar17);
              puVar18 = &DAT_143f3eda8;
              if (local_3a0 != 0) {
                puVar18 = local_3a8;
              }
              FName::FName(&local_3e8,puVar18,0);
              if (local_3e8 == (undefined2 *)0x0) {
                plVar10 = local_318;
                plVar1 = local_318;
                if (local_3a8 != (undefined2 *)0x0) {
                  FMemory::Free();
                  plVar10 = local_318;
                  plVar1 = local_318;
                }
                break;
              }
              TSet<TTuple<FName,TAttributeIndicesArray<bool,FEdgeID>_>,TDefaultMapHashableKeyFuncs<FName,TAttributeIndicesArray<bool,FEdgeID>,0>,FDefaultSetAllocator>
              ::FindId(plVar13,local_3b0);
              if ((local_3b0[0] == -1) ||
                 (lVar9 = (longlong)local_3b0[0] * 0x30 + *plVar13, lVar9 == 0)) {
                puVar8 = (undefined8 *)0x0;
              }
              else {
                puVar8 = (undefined8 *)(lVar9 + 8);
                if (puVar8 != (undefined8 *)0x0) {
                  if ((int)plVar26[1] <= iVar4) {
                    FUN_14174ff60(&local_2e8,(iVar4 - (int)plVar26[1]) + 1);
                  }
                  if ((*(int *)(lVar9 + 0x20) == 0) ||
                     (puVar15 = (undefined8 *)(lVar9 + 0x18), *(int *)(lVar9 + 0x20) + -1 < 1)) {
                    puVar15 = puVar8;
                  }
                  if (*(int *)(puVar15 + 1) == 0) {
                    puVar18 = &DAT_143f3eda8;
                  }
                  else {
                    puVar18 = (undefined2 *)*puVar15;
                  }
                  local_440 = DAT_1468b6160;
                  local_448 = local_3b8;
                  FUN_141759d00(local_410[0xe],puVar18);
                }
              }
              iVar4 = iVar4 + 1;
              if (local_3a8 != (undefined2 *)0x0) {
                FMemory::Free();
              }
            } while ((puVar8 != (undefined8 *)0x0) ||
                    (plVar10 = local_318, plVar1 = local_318, iVar4 < (int)plVar26[1]));
          }
          else {
            uVar23 = *(uint *)(plVar26 + 1);
            if ((uVar23 != 0) &&
               ((((plVar10[7] & 0x1040000000U) == 0 && (uVar23 != 0)) &&
                (lVar20 = *plVar26, 0 < (int)uVar23)))) {
              uVar22 = (ulonglong)uVar23;
              do {
                if ((~(byte)((ulonglong)plVar10[7] >> 0x24) & 1) != 0) {
                  (**(code **)(*plVar10 + 0x328))(plVar10,lVar20);
                }
                lVar20 = lVar20 + lVar9;
                uVar22 = uVar22 - 1;
              } while (uVar22 != 0);
            }
            *(undefined4 *)(plVar26 + 1) = 0;
            if (iVar16 != *(int *)((longlong)plVar26 + 0xc)) {
              FScriptArray::ResizeTo(plVar26,uVar21 & 0xffffffff);
            }
            FUN_14174ff60(&local_2e8,uVar21 & 0xffffffff);
            puVar11 = local_3b8;
            puVar25 = local_410;
            lVar9 = (longlong)(iVar16 + -1);
            plVar10 = local_318;
            plVar1 = local_318;
            if (-1 < iVar16 + -1) {
              plVar13 = local_318 + lVar9 * 4 + 3;
              do {
                if (((int)*plVar13 == 0) || (lVar20 = -8, (int)*plVar13 + -1 < 1)) {
                  lVar20 = -0x18;
                }
                if (*(int *)(lVar20 + 8 + (longlong)plVar13) == 0) {
                  puVar18 = &DAT_143f3eda8;
                }
                else {
                  puVar18 = *(undefined2 **)(lVar20 + (longlong)plVar13);
                }
                local_440 = DAT_1468b6160;
                local_448 = puVar11;
                FUN_141759d00(puVar25[0xe],puVar18);
                plVar13 = plVar13 + -4;
                lVar9 = lVar9 + -1;
              } while (-1 < lVar9);
              iVar16 = (int)local_2c0[0];
              plVar10 = local_318;
              plVar1 = local_318;
            }
          }
          for (; plVar13 = local_318, iVar16 != 0; iVar16 = iVar16 + -1) {
            local_318 = plVar1;
            if (plVar10[2] != 0) {
              FMemory::Free();
            }
            if (*plVar10 != 0) {
              FMemory::Free();
            }
            plVar10 = plVar10 + 4;
            plVar1 = local_318;
            local_318 = plVar13;
          }
          bVar27 = local_318 != (longlong *)0x0;
          param_2 = local_3c0;
          puVar25 = local_410;
          uVar23 = local_434;
          local_318 = plVar1;
          if (bVar27) {
            FMemory::Free(plVar13);
            param_2 = local_3c0;
            puVar25 = local_410;
            uVar23 = local_434;
          }
        }
      }
      else {
        iVar16 = (int)puVar25[6];
        if (0 < iVar16) {
          do {
            if (iVar16 != 1) {
              local_410 = (ulonglong *)puVar25[3];
              FName::ToString(&local_410,&local_398);
              psVar24 = &DAT_143f3eda8;
              if (local_390 != 0) {
                psVar24 = local_398;
              }
              FString::PrintfImpl(&local_338,L"%s[%i]",psVar24,uVar21);
              if (local_428 != (short *)0x0) {
                FMemory::Free();
              }
              local_428 = local_338;
              local_420 = local_330;
              local_330 = 0;
              local_338 = (short *)0x0;
              if (local_398 != (short *)0x0) {
                FMemory::Free();
              }
            }
            local_368 = 0;
            local_360 = 0;
            if (local_438 == '\0') {
              local_378 = 0;
              local_370 = 0;
              psVar24 = &DAT_143f3eda8;
              if (iVar4 != 0) {
                psVar24 = psVar17;
              }
              if ((psVar24 != (short *)0x0) && (*psVar24 != 0)) {
                lVar9 = -1;
                do {
                  lVar9 = lVar9 + 1;
                } while (psVar24[lVar9] != 0);
                uVar23 = (int)lVar9 + 1;
                local_370 = (ulonglong)uVar23;
                if (0 < (int)uVar23) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_378,0);
                }
                FGenericPlatformString::Memcpy(local_378,psVar24,(longlong)(int)uVar23 * 2);
              }
              local_448 = &local_378;
              cVar3 = FConfigCacheIni::GetString(DAT_1468b6148);
              if (local_378 != 0) {
                FMemory::Free();
              }
            }
            else {
              cVar3 = FConfigFile::GetString(local_178);
            }
            if (cVar3 != '\0') {
              local_440 = DAT_1468b6160;
              local_448 = local_3b8;
              FUN_141759d00(puVar25);
            }
            if (local_368 != 0) {
              FMemory::Free();
            }
            iVar16 = (int)puVar25[6];
            uVar19 = (int)uVar21 + 1;
            uVar21 = (ulonglong)uVar19;
            param_2 = local_3c0;
            uVar23 = local_434;
          } while ((int)uVar19 < iVar16);
        }
      }
      if (local_428 != (short *)0x0) {
        FMemory::Free();
      }
      if (local_308 != (short *)0x0) {
        FMemory::Free();
      }
    }
  }
  if ((local_380 & 8) != 0) {
    (**(code **)(*local_3b8 + 0x130))(local_3b8,local_2f0);
  }
  if (local_418 != (short *)0x0) {
    FMemory::Free(local_418);
  }
  FConfigFile::~FConfigFile(local_178);
  psVar17 = local_2f8;
joined_r0x00014175cfe6:
  if (psVar17 != (short *)0x0) {
    FMemory::Free(psVar17);
  }
  return;
}



// FUNCTION 14175d020 FUN_14175d020 body=208 status=ok
// SIG undefined FUN_14175d020(void)

ulonglong FUN_14175d020(longlong param_1,char param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar3 = *(uint *)(param_1 + 8) >> 9;
  uVar4 = (ulonglong)uVar3;
  if ((uVar3 & 1) == 0) {
    uVar4 = IsGarbageCollecting();
    if (((char)uVar4 == '\0') && (DAT_1468c2185 == '\0')) {
      iVar1 = *(int *)(param_1 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar6 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar6;
        lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
      }
      else {
        lVar5 = 0;
      }
      uVar4 = 0;
      if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) {
        uVar4 = UObjectBaseUtility::GetOutermost(param_1);
        if (((*(uint *)(uVar4 + 0x50) & 0x300010) == 0) ||
           ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xb4) & 6) != 0)) {
          bVar2 = SaveToTransactionBuffer(param_1,param_2);
          if ((bVar2 == 0) && (param_2 != '\0')) {
            UObjectBaseUtility::MarkPackageDirty(param_1);
          }
          return (ulonglong)bVar2;
        }
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 14175d0f0 NeedsLoadForClient body=30 status=ok
// SIG undefined NeedsLoadForClient(void)

bool UObject::NeedsLoadForClient(longlong param_1)

{
  char cVar1;
  
  cVar1 = FClassExclusionData::IsExcluded(&DAT_1469e78d0,*(undefined8 *)(param_1 + 0x10));
  return cVar1 == '\0';
}



// FUNCTION 14175d110 NeedsLoadForServer body=30 status=ok
// SIG undefined NeedsLoadForServer(void)

bool UObject::NeedsLoadForServer(longlong param_1)

{
  char cVar1;
  
  cVar1 = FClassExclusionData::IsExcluded(&DAT_1469e7760,*(undefined8 *)(param_1 + 0x10));
  return cVar1 == '\0';
}



// FUNCTION 14175d130 FUN_14175d130 body=815 status=ok
// SIG undefined FUN_14175d130(void)

void FUN_14175d130(float *param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  longlong *plVar1;
  short local_res10 [8];
  short local_res20 [4];
  short local_38 [2];
  short local_34 [14];
  
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_res10[0] = (short)((int)ROUND(*param_1 + *param_1 + 0.5) >> 1);
    local_res20[0] = (short)((int)ROUND(param_1[1] + param_1[1] + 0.5) >> 1);
    plVar1 = (longlong *)param_2[1];
    local_34[0] = (short)((int)ROUND(param_1[2] + param_1[2] + 0.5) >> 1);
    local_38[0] = (short)((int)ROUND(param_1[3] + param_1[3] + 0.5) >> 1);
    if ((short *)plVar1[1] < (short *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res10,2);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res10,2);
      }
    }
    else {
      local_res10[0] = *(short *)*plVar1;
      *plVar1 = *plVar1 + 2;
    }
    plVar1 = (longlong *)param_2[1];
    if ((short *)plVar1[1] < (short *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res20,2);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res20,2);
      }
    }
    else {
      local_res20[0] = *(short *)*plVar1;
      *plVar1 = *plVar1 + 2;
    }
    plVar1 = (longlong *)param_2[1];
    if ((short *)plVar1[1] < (short *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_34,2);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_34,2);
      }
    }
    else {
      local_34[0] = *(short *)*plVar1;
      *plVar1 = *plVar1 + 2;
    }
    plVar1 = (longlong *)param_2[1];
    if ((ulonglong)plVar1[1] < *plVar1 + 2U) {
      (**(code **)(*param_2 + 0x50))(param_2,local_38,2);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_38,2);
      }
    }
    else {
      *plVar1 = *plVar1 + 2;
    }
  }
  else {
    plVar1 = (longlong *)param_2[1];
    if ((short *)plVar1[1] < (short *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res10,2);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res10,2);
      }
    }
    else {
      local_res10[0] = *(short *)*plVar1;
      *plVar1 = *plVar1 + 2;
    }
    plVar1 = (longlong *)param_2[1];
    if ((short *)plVar1[1] < (short *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res20,2);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res20,2);
      }
    }
    else {
      local_res20[0] = *(short *)*plVar1;
      *plVar1 = *plVar1 + 2;
    }
    plVar1 = (longlong *)param_2[1];
    if ((short *)plVar1[1] < (short *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_38,2);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_38,2);
      }
    }
    else {
      local_38[0] = *(short *)*plVar1;
      *plVar1 = *plVar1 + 2;
    }
    plVar1 = (longlong *)param_2[1];
    if ((short *)plVar1[1] < (short *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_34,2);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_34,2);
      }
    }
    else {
      local_34[0] = *(short *)*plVar1;
      *plVar1 = *plVar1 + 2;
    }
    *param_1 = (float)(int)local_res10[0];
    param_1[1] = (float)(int)local_res20[0];
    param_1[2] = (float)(int)local_38[0];
    param_1[3] = (float)(int)local_34[0];
  }
  *param_4 = 1;
  return;
}



// FUNCTION 14175d460 FUN_14175d460 body=67 status=ok
// SIG undefined FUN_14175d460(void)

undefined1 FUN_14175d460(void)

{
  LowLevelFatalErrorHandler("Unknown",0x108,L"Deprecated code path");
  FDebug::AssertFailed(&DAT_144d1149e,"Unknown",0x108,L"Deprecated code path");
  return 1;
}



// FUNCTION 14175d4b0 FUN_14175d4b0 body=94 status=ok
// SIG undefined FUN_14175d4b0(void)

undefined8 FUN_14175d4b0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  byte *pbVar2;
  char local_res8 [8];
  
  pbVar2 = (byte *)((ulonglong)*(byte *)(param_1 + 0x71) + param_4);
  local_res8[0] = (*(byte *)(param_1 + 0x73) & *pbVar2) != 0;
  (**(code **)(*param_2 + 0x58))(param_2,local_res8,1);
  if (local_res8[0] == '\0') {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x72);
  }
  *pbVar2 = ~*(byte *)(param_1 + 0x73) & *pbVar2 | bVar1;
  return 1;
}



// FUNCTION 14175d510 FUN_14175d510 body=125 status=ok
// SIG undefined FUN_14175d510(void)

undefined8 FUN_14175d510(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x70) == 0) {
    uVar2 = 8;
  }
  else {
    uVar2 = UEnum::GetMaxEnumValue();
    iVar1 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar2 != 0) {
      iVar3 = 0x1f - iVar1;
    }
    uVar2 = uVar2 - 1;
    iVar1 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x20U - (0x1f - iVar1) & ~((iVar3 << 0x1a) >> 0x1f);
    }
  }
  (**(code **)(*param_2 + 0x58))(param_2,param_4,uVar2);
  return 1;
}



// FUNCTION 14175d590 FUN_14175d590 body=130 status=ok
// SIG undefined FUN_14175d590(void)

undefined1 FUN_14175d590(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 local_res8;
  
  local_res8 = (**(code **)(*param_1 + 0x378))(param_1,param_4);
  uVar1 = (**(code **)(*param_3 + 0x280))(param_3,param_2,param_1[0xe],&local_res8,0);
  (**(code **)(*param_1 + 0x380))(param_1,param_4,local_res8);
  return uVar1;
}



// FUNCTION 14175d620 FUN_14175d620 body=26 status=ok
// SIG undefined FUN_14175d620(void)

undefined8 FUN_14175d620(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*param_1 + 0x2c0))(param_1,param_2,param_4,0);
  return 1;
}



// FUNCTION 14175d640 FUN_14175d640 body=558 status=ok
// SIG undefined FUN_14175d640(void)

ulonglong FUN_14175d640(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                       longlong *param_5,longlong *param_6)

{
  short sVar1;
  wint_t wVar2;
  wint_t wVar3;
  longlong lVar4;
  short *psVar5;
  ulonglong uVar6;
  wint_t *pwVar7;
  undefined2 *puVar8;
  undefined2 *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined8 local_40;
  
  if (param_3 == 0) {
    *param_6 = 0;
    return (ulonglong)param_6 & 0xffffffffffffff00;
  }
  local_58 = (undefined2 *)0x0;
  local_50 = 0;
  lVar4 = UPropertyHelpers::ReadToken(*param_5,&local_58,1);
  *param_5 = lVar4;
  if (lVar4 != 0) {
    pwVar7 = &DAT_144d15680;
    puVar8 = &DAT_143f3eda8;
    if ((int)local_50 != 0) {
      puVar8 = local_58;
    }
    do {
      wVar2 = *(wint_t *)((longlong)(puVar8 + -0xa268ab40) + (longlong)pwVar7);
      if ((wVar2 == 0) && (*pwVar7 == 0)) goto LAB_14175d71b;
      if (wVar2 != *pwVar7) {
        wVar2 = towlower(wVar2);
        wVar3 = towlower(*pwVar7);
        if (wVar2 != wVar3) goto LAB_14175d711;
      }
      pwVar7 = pwVar7 + 1;
    } while( true );
  }
  uVar6 = 0;
  goto LAB_14175d846;
LAB_14175d711:
  if (wVar2 == wVar3) {
LAB_14175d71b:
    *param_6 = 0;
LAB_14175d726:
    uVar6 = 1;
    goto LAB_14175d846;
  }
  SkipWhitespace(param_5);
  if (*(short *)*param_5 == 0x27) {
    psVar5 = (short *)*param_5 + 1;
    local_48 = (undefined2 *)0x0;
    *param_5 = (longlong)psVar5;
    local_40 = 0;
    psVar5 = (short *)UPropertyHelpers::ReadToken(psVar5,&local_48,1);
    *param_5 = (longlong)psVar5;
    if ((psVar5 != (short *)0x0) &&
       (sVar1 = *psVar5, *param_5 = (longlong)(psVar5 + 1), sVar1 == 0x27)) {
      puVar8 = &DAT_143f3eda8;
      if ((int)local_40 != 0) {
        puVar8 = local_48;
      }
      lVar4 = FUN_141754dd0(param_1,param_2,param_3,param_3,puVar8,param_4);
      *param_6 = lVar4;
      if (local_48 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      goto LAB_14175d80e;
    }
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  else {
    puVar8 = &DAT_143f3eda8;
    if ((int)local_50 != 0) {
      puVar8 = local_58;
    }
    lVar4 = FUN_141754dd0(param_1,param_2,param_3,param_3,puVar8,param_4);
    *param_6 = lVar4;
LAB_14175d80e:
    if (*param_6 != 0) {
      for (lVar4 = *(longlong *)(*param_6 + 0x10); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30))
      {
        if (lVar4 == param_3) goto LAB_14175d726;
      }
      *param_6 = 0;
    }
  }
  uVar6 = 0;
LAB_14175d846:
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar6;
}



// FUNCTION 14175d870 ParseParms body=693 status=ok
// SIG undefined ParseParms(void)

void UObject::ParseParms(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  short *psVar10;
  undefined2 *puVar11;
  undefined8 local_res18 [2];
  undefined2 *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined8 local_70;
  short *local_68;
  int local_60;
  longlong local_58;
  longlong local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  if (param_2 != 0) {
    local_58 = *(longlong *)(param_1 + 0x10);
    if (local_58 == 0) {
      local_50 = 0;
    }
    else {
      local_50 = *(longlong *)(local_58 + 0x38);
    }
    local_48 = 0xffffffff;
    local_44 = 0x101;
    local_42 = 0;
    FUN_140472e10(&local_58);
    lVar1 = local_50;
    while (lVar1 != 0) {
      puVar8 = (undefined2 *)0x0;
      lVar6 = *(longlong *)(lVar1 + 0x20);
      local_50 = lVar1;
      lVar5 = GetPrivateStaticClass();
      if (lVar6 != lVar5) {
        local_78 = (undefined2 *)0x0;
        local_70 = 0;
        local_res18[0] = *(undefined8 *)(lVar1 + 0x18);
        FName::ToString(local_res18,&local_68);
        local_88 = (undefined2 *)0x0;
        psVar10 = &DAT_143f3eda8;
        if (local_60 != 0) {
          psVar10 = local_68;
        }
        puVar7 = puVar8;
        puVar11 = puVar8;
        if ((psVar10 == (short *)0x0) ||
           (puVar7 = (undefined2 *)0x0, puVar11 = (undefined2 *)0x0, *psVar10 == 0)) {
LAB_14175d9bc:
          iVar9 = (int)puVar11;
          iVar4 = 2;
        }
        else {
          lVar6 = -1;
          do {
            lVar5 = lVar6 + 1;
            lVar6 = lVar6 + 1;
          } while (psVar10[lVar5] != 0);
          local_80._0_4_ = (int)lVar6 + 1;
          local_80._4_4_ = 0;
          puVar11 = puVar8;
          if (0 < (int)(uint)local_80) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
            puVar11 = (undefined2 *)(ulonglong)local_80._4_4_;
          }
          uVar2 = (uint)local_80;
          puVar8 = local_88;
          iVar9 = (int)puVar11;
          puVar7 = (undefined2 *)(ulonglong)(uint)local_80;
          FGenericPlatformString::Memcpy(local_88,psVar10);
          iVar4 = 1;
          if (uVar2 == 0) goto LAB_14175d9bc;
        }
        local_90._0_4_ = (uint)puVar7;
        local_88 = (undefined2 *)0x0;
        local_80 = 0;
        local_98 = puVar8;
        local_90._4_4_ = iVar9;
        if (iVar9 < (int)((uint)local_90 + iVar4)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98);
          puVar7 = (undefined2 *)(ulonglong)(uint)local_90;
        }
        iVar9 = (int)puVar7;
        iVar4 = (2 - (uint)(iVar9 != 0)) + iVar9;
        local_90 = CONCAT44(local_90._4_4_,iVar4);
        puVar8 = local_98;
        if (local_90._4_4_ < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,puVar7);
          puVar8 = local_98;
          iVar4 = (uint)local_90;
        }
        local_98 = (undefined2 *)0x0;
        local_90 = 0;
        puVar8[(longlong)iVar9 - (ulonglong)(iVar9 != 0)] = 0x3d;
        puVar7 = &DAT_143f3eda8;
        if (iVar4 != 0) {
          puVar7 = puVar8;
        }
        (puVar8 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)))[1] = 0;
        cVar3 = FParse::Value(param_2,puVar7,&local_78,1);
        if (puVar8 != (undefined2 *)0x0) {
          FMemory::Free(puVar8);
        }
        if (local_68 != (short *)0x0) {
          FMemory::Free();
        }
        if (cVar3 != '\0') {
          puVar8 = &DAT_143f3eda8;
          if ((int)local_70 != 0) {
            puVar8 = local_78;
          }
          FUN_141759d00(lVar1,puVar8,*(int *)(lVar1 + 0x44) + param_1,0,param_1,DAT_1468b6160);
        }
        if (local_78 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
      local_50 = *(longlong *)(lVar1 + 0x28);
      FUN_140472e10(&local_58);
      lVar1 = local_50;
    }
  }
  return;
}



// FUNCTION 14175db30 PerformSetCommand body=416 status=ok
// SIG undefined PerformSetCommand(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void PerformSetCommand(short *param_1,undefined8 param_2,undefined1 param_3)

{
  short sVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_458 [32];
  longlong local_438;
  undefined8 local_430;
  short *local_428;
  undefined8 local_420;
  undefined1 local_418 [512];
  undefined1 local_218 [512];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_458;
  local_428 = param_1;
  cVar2 = FParse::Token(&local_428,local_418,0x100,1);
  if ((cVar2 != '\0') && (cVar2 = FParse::Token(&local_428,local_218,0x100,1), cVar2 != '\0')) {
    uVar3 = FUN_14171bfe0();
    lVar4 = FUN_141799410(uVar3,0xffffffffffffffff,local_418);
    if (lVar4 == 0) {
      uVar3 = UObject::GetPrivateStaticClass();
      local_438 = FUN_141799410(uVar3,0xffffffffffffffff,local_418);
      if (local_438 != 0) {
        uVar3 = *(undefined8 *)(local_438 + 0x10);
        FName::FName(&local_420,local_218,0);
        lVar4 = FindField<UProperty>(uVar3,local_420);
        if (lVar4 != 0) {
          sVar1 = *local_428;
          while (sVar1 == 0x20) {
            local_428 = local_428 + 1;
            sVar1 = *local_428;
          }
          local_430 = DAT_1468b6160;
          FUN_141759d00(lVar4,local_428,*(int *)(lVar4 + 0x44) + local_438,0);
        }
      }
    }
    else {
      FName::FName(&local_420,local_218,0);
      lVar5 = FindField<UProperty>(lVar4,local_420);
      if (lVar5 != 0) {
        sVar1 = *local_428;
        while (sVar1 == 0x20) {
          local_428 = local_428 + 1;
          sVar1 = *local_428;
        }
        FUN_14178eb50(local_428,lVar4,lVar5,param_3);
      }
    }
  }
  return;
}



// FUNCTION 14175dcd0 PostInitProperties body=59 status=ok
// SIG undefined PostInitProperties(void)

void UPackage::PostInitProperties(longlong param_1)

{
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfe;
  }
  *(undefined4 *)(param_1 + 0x68) = 0x204;
  *(undefined4 *)(param_1 + 0x6c) = 0x1a;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  return;
}



// FUNCTION 14175dd10 PostLoad body=49 status=ok
// SIG undefined PostLoad(void)

void UObject::PostLoad(longlong param_1)

{
  if ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0xb4) >> 10 & 1) != 0) {
    FUN_14175be70(param_1,0,0,0,0);
  }
  return;
}



// FUNCTION 14175dd50 PostLoadSubobjects body=609 status=ok
// SIG undefined PostLoadSubobjects(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::PostLoadSubobjects(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  undefined1 *local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8 [18];
  undefined1 local_1a6;
  undefined1 local_1a0 [64];
  longlong local_160;
  undefined4 local_158;
  undefined1 local_150 [64];
  longlong local_110;
  undefined4 local_108;
  undefined1 local_f8 [24];
  undefined1 local_e0 [64];
  longlong local_a0;
  undefined4 local_98;
  undefined1 local_90 [64];
  longlong local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  if ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0xb4) >> 0x17 & 1) == 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffdfff;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x20);
    if ((plVar1 != (longlong *)0x0) && ((*(uint *)(plVar1 + 1) >> 0xd & 1) != 0)) {
      if ((*(uint *)(plVar1 + 1) >> 0xc & 1) == 0) {
        (**(code **)(*plVar1 + 0x80))(plVar1,0);
      }
      else {
        FUN_1417510e0();
      }
      if ((*(uint *)(param_1 + 8) >> 0xd & 1) == 0) {
        return;
      }
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffdfff;
    FObjectInstancingGraph::FObjectInstancingGraph(local_1b8,0);
    if (param_2 == (undefined1 *)0x0) {
      FObjectInstancingGraph::SetDestinationRoot(local_1b8,param_1,0);
      local_1a6 = 1;
      param_2 = local_1b8;
    }
    uVar7 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    CollectDefaultSubobjects(param_1,&local_1c8,0);
    uVar5 = uVar7;
    uVar6 = uVar7;
    if (0 < (int)local_1c0) {
      do {
        FObjectInstancingGraph::AddNewInstance(param_2,*(undefined8 *)(uVar6 + local_1c8),0);
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        uVar6 = uVar6 + 8;
      } while ((int)uVar4 < (int)local_1c0);
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    if ((*(uint *)(lVar2 + 0xb4) >> 0x17 & 1) != 0) {
      lVar3 = FUN_14178ca30(param_1);
      local_1d8 = param_1;
      if (param_2 == (undefined1 *)0x0) {
        FObjectInstancingGraph::FObjectInstancingGraph(local_f8,param_1);
        if (lVar3 != 0) {
          uVar7 = *(ulonglong *)(lVar3 + 0x10);
        }
        local_1d0 = local_f8;
        FUN_14171e2d0(lVar2,param_1,lVar3,uVar7);
        local_48 = 0;
        if (local_50 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (local_90);
        local_98 = 0;
        if (local_a0 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (local_e0);
      }
      else {
        if (lVar3 != 0) {
          uVar7 = *(ulonglong *)(lVar3 + 0x10);
        }
        local_1d0 = param_2;
        FUN_14171e2d0(lVar2,param_1,lVar3,uVar7);
      }
    }
    if (local_1c8 != 0) {
      FMemory::Free();
    }
    local_108 = 0;
    if (local_110 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_150);
    local_158 = 0;
    if (local_160 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_1a0);
  }
  return;
}



// FUNCTION 14175dfc0 PreSave body=90 status=ok
// SIG undefined PreSave(void)

void UObjectRedirector::PreSave(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  
  lVar1 = param_1[5];
  if (((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 6 & 1) == 0)) &&
     (cVar3 = UObjectBaseUtility::IsIn(lVar1,DAT_1469e7a80), cVar3 == '\0')) {
    return;
  }
  (**(code **)(*param_1 + 0x70))(param_1,1);
  plVar2 = (longlong *)param_1[5];
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x40;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x70))(plVar2,1);
    *(uint *)(param_1[5] + 8) = *(uint *)(param_1[5] + 8) | 0x40;
  }
  return;
}



// FUNCTION 14175e020 ReadArrayIndex body=724 status=ok
// SIG undefined ReadArrayIndex(void)

ulonglong ReadArrayIndex(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  short sVar1;
  wchar_t wVar2;
  wint_t *pwVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  wchar_t *pwVar7;
  int iVar8;
  wchar_t *_Str;
  longlong lVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  longlong local_res20;
  wchar_t *local_48;
  uint local_40;
  uint local_3c;
  
  pwVar3 = (wint_t *)*param_2;
  pwVar13 = (wchar_t *)0xffffffff;
  iVar4 = iswspace(*pwVar3);
  while (iVar4 != 0) {
    *param_2 = *param_2 + 2;
    iVar4 = iswspace(*(wint_t *)*param_2);
  }
  sVar1 = *(short *)*param_2;
  if ((sVar1 != 0x28) && (sVar1 != 0x5b)) goto LAB_14175e2d1;
  pwVar12 = (wchar_t *)0x0;
  pwVar10 = (short *)*param_2 + 1;
  *param_2 = (longlong)pwVar10;
  wVar2 = *pwVar10;
  local_48 = (wchar_t *)0x0;
  local_3c = 0;
  iVar4 = 0;
  pwVar7 = pwVar12;
  _Str = pwVar12;
  pwVar11 = pwVar12;
  while (((wVar2 != L'\0' && (iVar4 = (int)pwVar7, wVar2 != L')')) && (wVar2 != L']'))) {
    if (wVar2 == L'=') {
      FOutputDevice::LogfImpl(param_3,3,L"Missing \')\' in default properties subscript: %s",pwVar3)
      ;
      if (_Str != (wchar_t *)0x0) {
        FMemory::Free(_Str);
      }
      return 0;
    }
    *param_2 = (longlong)(pwVar10 + 1);
    if (wVar2 != L'\0') {
      iVar8 = iVar4 + -1;
      if (iVar4 < 1) {
        iVar8 = 0;
      }
      local_40 = (iVar4 < 1) + 1 + iVar4;
      if ((int)pwVar11 < (int)local_40) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48);
        pwVar11 = (wchar_t *)(ulonglong)local_3c;
        _Str = local_48;
      }
      pwVar7 = (wchar_t *)(ulonglong)local_40;
      _Str[iVar8] = wVar2;
      _Str[(longlong)iVar8 + 1] = L'\0';
    }
    iVar4 = (int)pwVar7;
    pwVar10 = (wchar_t *)*param_2;
    wVar2 = *pwVar10;
  }
  *param_2 = (longlong)(pwVar10 + 1);
  if (wVar2 == L'\0') {
    pwVar10 = L"Missing \')\' in default properties subscript: %s";
    pwVar13 = pwVar12;
LAB_14175e2b4:
    FOutputDevice::LogfImpl(param_3,3,pwVar10,pwVar3);
  }
  else {
    if ((iVar4 == 0) || (iVar4 + -1 < 1)) {
      pwVar10 = L"Invalid subscript in default properties: %s";
      pwVar13 = pwVar12;
      goto LAB_14175e2b4;
    }
    iVar4 = iswalpha(*_Str);
    if (iVar4 != 0) {
      FName::FName(&local_res20,_Str,0);
      if (local_res20 == 0) {
        pwVar10 = L"Invalid subscript in default properties: %s";
        pwVar13 = pwVar12;
      }
      else {
        if (DAT_1464b4cb8 != DAT_1464b4ce4) {
          puVar6 = DAT_1464b4cf0;
          if (DAT_1464b4cf0 == (undefined *)0x0) {
            puVar6 = &DAT_1464b4ce8;
          }
          iVar4 = *(int *)(puVar6 + ((longlong)
                                     ((int)((ulonglong)local_res20 >> 0x20) + (int)local_res20) &
                                    (longlong)DAT_1464b4cf8 - 1U) * 4);
          if (iVar4 != -1) {
            do {
              lVar9 = (longlong)iVar4;
              if (*(longlong *)(DAT_1464b4cb0 + lVar9 * 0x18) == local_res20) {
                if (((iVar4 == -1) || (lVar9 = DAT_1464b4cb0 + lVar9 * 0x18, lVar9 == 0)) ||
                   ((lVar9 = *(longlong *)(lVar9 + 8), lVar9 == 0 ||
                    (pwVar13 = (wchar_t *)UEnum::GetValueByName(lVar9,local_res20,0),
                    (int)pwVar13 == -1)))) goto LAB_14175e26b;
                goto LAB_14175e2c4;
              }
              iVar4 = *(int *)(DAT_1464b4cb0 + 0x10 + lVar9 * 0x18);
            } while (iVar4 != -1);
            pwVar10 = L"Invalid subscript in default properties: %s";
            pwVar13 = pwVar12;
            goto LAB_14175e2b4;
          }
        }
LAB_14175e26b:
        pwVar10 = L"Invalid subscript in default properties: %s";
        pwVar13 = pwVar12;
      }
      goto LAB_14175e2b4;
    }
    iVar4 = iswdigit(*_Str);
    if (iVar4 == 0) {
      pwVar10 = L"Invalid subscript in default properties: %s";
      goto LAB_14175e2b4;
    }
    uVar5 = _wtoi(_Str);
    pwVar13 = (wchar_t *)(ulonglong)uVar5;
  }
LAB_14175e2c4:
  if (_Str != (wchar_t *)0x0) {
    FMemory::Free(_Str);
  }
LAB_14175e2d1:
  return (ulonglong)pwVar13 & 0xffffffff;
}



// FUNCTION 14175e300 ReadToken body=390 status=ok
// SIG undefined ReadToken(void)

wint_t * UPropertyHelpers::ReadToken(wint_t *param_1,longlong *param_2,char param_3)

{
  ushort uVar1;
  wint_t wVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int local_res8 [2];
  
  if (*param_1 != 0x22) {
    iVar4 = iswalnum(*param_1);
    if ((iVar4 == 0) &&
       (((param_3 == '\0' || (*param_1 != 0x2f)) && (uVar1 = *param_1, uVar1 < 0x100)))) {
      if (uVar1 != 0) {
        iVar4 = (int)param_2[1];
        iVar5 = iVar4 + -1;
        if (iVar4 < 1) {
          iVar5 = 0;
        }
        iVar4 = (iVar4 < 1) + 1 + iVar4;
        *(int *)(param_2 + 1) = iVar4;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
        }
        *(ushort *)(*param_2 + (longlong)iVar5 * 2) = uVar1;
        *(undefined2 *)(*param_2 + 2 + (longlong)iVar5 * 2) = 0;
      }
    }
    else {
      for (; (((iVar4 = iswalnum(*param_1), iVar4 != 0 || (uVar1 = *param_1, 0xff < uVar1)) ||
              (((ushort)(uVar1 - 0x2b) < 0x35 &&
               ((0x10000000000005U >> ((ulonglong)(uVar1 - 0x2b) & 0x3f) & 1) != 0)))) ||
             ((param_3 != '\0' && (((ushort)(uVar1 - 0x2e) < 2 || (uVar1 == 0x3a))))));
          param_1 = param_1 + 1) {
        wVar2 = *param_1;
        if (wVar2 != 0) {
          iVar4 = (int)param_2[1];
          iVar5 = iVar4 + -1;
          if (iVar4 < 1) {
            iVar5 = 0;
          }
          iVar4 = (iVar4 < 1) + 1 + iVar4;
          *(int *)(param_2 + 1) = iVar4;
          if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
          }
          *(wint_t *)(*param_2 + (longlong)iVar5 * 2) = wVar2;
          *(undefined2 *)(*param_2 + 2 + (longlong)iVar5 * 2) = 0;
        }
      }
    }
    return param_1;
  }
  local_res8[0] = 0;
  cVar3 = FParse::QuotedString(param_1,param_2,local_res8);
  if (cVar3 != '\0') {
    return param_1 + local_res8[0];
  }
  return (wint_t *)0x0;
}



// FUNCTION 14175e490 FUN_14175e490 body=942 status=ok
// SIG undefined FUN_14175e490(void)

void FUN_14175e490(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
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
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar10 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar10 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar10) {
      uVar7 = 0;
      uVar13 = (ulonglong)uVar10;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        uVar11 = (longlong)(int)*plVar2 - 1U & uVar7;
        uVar7 = uVar7 + 1;
        *(undefined4 *)((longlong)plVar8 + uVar11 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar4 != 0) {
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = puStack_28;
      }
      uVar10 = *puVar15;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar9 = local_58 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar9;
        if (bVar5) goto LAB_14175e5cf;
        uVar10 = puVar15[lVar6 + 1];
      }
      uStack_54 = -uVar10 & uVar10;
      iVar9 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_44 = (iStack_40 - iVar9) + 0x1f;
      if (iVar4 < iStack_44) {
LAB_14175e5cf:
        iStack_44 = iVar4;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar4) {
      do {
        puVar3 = (undefined8 *)(*param_1 + (longlong)iStack_1c * 0x28);
        uVar14 = (int)((ulonglong)*puVar3 >> 0x20) + (int)*puVar3;
        uVar12 = uVar14 >> 0xd ^ -uVar14;
        uVar10 = (-0x61c88647 - uVar12) - uVar14 ^ uVar12 << 8;
        uVar14 = (uVar14 - uVar10) - uVar12 ^ uVar10 >> 0xd;
        uVar12 = (uVar12 - uVar10) - uVar14 ^ uVar14 >> 0xc;
        uVar10 = (uVar10 - uVar12) - uVar14 ^ uVar12 << 0x10;
        uVar14 = (uVar14 - uVar10) - uVar12 ^ uVar10 >> 5;
        uVar12 = (uVar12 - uVar10) - uVar14 ^ uVar14 >> 3;
        uVar10 = (uVar10 - uVar12) - uVar14 ^ uVar12 << 10;
        uVar16 = (int)((ulonglong)puVar3[1] >> 0x20) + (int)puVar3[1];
        uVar12 = ((uVar14 - uVar10) - uVar12 ^ uVar10 >> 0xf) - uVar16 ^ uVar16 >> 0xd;
        uVar10 = (-0x61c88647 - uVar12) - uVar16 ^ uVar12 << 8;
        uVar14 = (uVar16 - uVar10) - uVar12 ^ uVar10 >> 0xd;
        uVar12 = (uVar12 - uVar10) - uVar14 ^ uVar14 >> 0xc;
        uVar10 = (uVar10 - uVar12) - uVar14 ^ uVar12 << 0x10;
        uVar16 = (uVar14 - uVar10) - uVar12 ^ uVar10 >> 5;
        uVar14 = (uVar12 - uVar10) - uVar16 ^ uVar16 >> 3;
        uVar10 = (uVar10 - uVar14) - uVar16 ^ uVar14 << 10;
        uVar12 = (int)((ulonglong)puVar3[2] >> 0x20) + (int)puVar3[2];
        uVar14 = ((uVar16 - uVar10) - uVar14 ^ uVar10 >> 0xf) - uVar12 ^ uVar12 >> 0xd;
        uVar10 = (-0x61c88647 - uVar14) - uVar12 ^ uVar14 << 8;
        uVar12 = (uVar12 - uVar10) - uVar14 ^ uVar10 >> 0xd;
        uVar14 = (uVar14 - uVar10) - uVar12 ^ uVar12 >> 0xc;
        uVar10 = (uVar10 - uVar14) - uVar12 ^ uVar14 << 0x10;
        uVar12 = (uVar12 - uVar10) - uVar14 ^ uVar10 >> 5;
        uVar14 = (uVar14 - uVar10) - uVar12 ^ uVar12 >> 3;
        uVar10 = (uVar10 - uVar14) - uVar12 ^ uVar14 << 10;
        uVar10 = ((uVar12 - uVar10) - uVar14 ^ uVar10 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar3 + 0x24) = uVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(puVar3 + 4) =
             *(undefined4 *)
              ((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 14175e840 Rehash body=528 status=ok
// SIG undefined Rehash(void)

void TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>
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
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
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
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
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
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_14175e97f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_44 = (iStack_40 - iVar8) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_14175e97f:
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
        iVar3 = iStack_1c;
        lVar6 = *param_1 + (longlong)iStack_1c * 0x18;
        uVar5 = ::GetTypeHash(lVar6);
        uVar5 = uVar5 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0x14) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x10) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 14175ea50 ReinitializeProperties body=160 status=ok
// SIG undefined ReinitializeProperties(void)

void UObject::ReinitializeProperties(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    param_2 = FUN_14178ca30();
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar3 = iVar1 >> 0x1f & 0xffff;
    uVar2 = iVar1 + uVar3;
    lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
            (longlong)(int)((uVar2 & 0xffff) - uVar3) * 0x18;
  }
  else {
    lVar4 = 0;
  }
  FUN_1417985e0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20),
                *(undefined8 *)(param_1 + 0x18),*(uint *)(param_1 + 8),*(undefined4 *)(lVar4 + 8),
                param_2,~(byte)(*(uint *)(param_1 + 8) >> 4) & 1,param_3,0);
  return;
}



// FUNCTION 14175eaf0 ReloadConfig body=9 status=ok
// SIG undefined ReloadConfig(void)

void UObject::ReloadConfig(void)

{
  FUN_14175be70();
  return;
}



// FUNCTION 14175eb00 Remove body=227 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar5 = *param_1;
    lVar6 = (longlong)param_2 * 0x60;
    lVar3 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar6 + 0x5c + lVar5));
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    piVar4 = (int *)((longlong)plVar2 + lVar3 * 4);
    iVar1 = *(int *)((longlong)plVar2 + lVar3 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar4 = *(int *)(lVar6 + 0x58 + lVar5);
        break;
      }
      piVar4 = (int *)(lVar5 + 0x58 + (longlong)iVar1 * 0x60);
      iVar1 = *piVar4;
    }
  }
  lVar5 = (longlong)param_2 * 0x60 + *param_1;
  *(undefined4 *)(lVar5 + 0x50) = 0;
  if (*(longlong *)(lVar5 + 0x48) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(lVar5 + 8,0);
  if (*(longlong *)(lVar5 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(lVar5 + 8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 14175ebf0 FUN_14175ebf0 body=119 status=ok
// SIG undefined FUN_14175ebf0(void)

void FUN_14175ebf0(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = (int)param_1[1];
    iVar2 = (iVar1 - param_2) - param_3;
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 * 0x10 + *param_1),
                 (void *)((longlong)(param_2 + param_3) * 0x10 + *param_1),(longlong)iVar2 << 4);
      iVar1 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar1 - param_3;
    if (param_4 != '\0') {
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 14175ec70 RemoveLinker body=140 status=ok
// SIG undefined RemoveLinker(void)

void FLinkerManager::RemoveLinker(longlong param_1,longlong param_2)

{
  int *piVar1;
  BOOL BVar2;
  undefined1 local_res8 [8];
  longlong local_res10;
  
  local_res10 = param_2;
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x148));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x148));
  }
  if (param_2 != 0) {
    piVar1 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                              (param_1 + 0xf8,local_res8,param_2);
    if (*piVar1 == -1) {
      FUN_14058c5a0(param_1 + 0xf8,local_res8,&local_res10,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014175ecf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x148));
  return;
}



// FUNCTION 14175ed00 RemoveValues body=128 status=ok
// SIG undefined RemoveValues(void)

void FScriptArrayHelper::RemoveValues(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  FUN_141752980();
  iVar1 = *(int *)(param_1 + 0x10);
  plVar2 = *(longlong **)(param_1 + 8);
  if (param_3 != 0) {
    iVar3 = (int)plVar2[1];
    iVar4 = (iVar3 - param_2) - param_3;
    if (iVar4 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)(iVar1 * param_2) + *plVar2),
                 (void *)((longlong)((param_2 + param_3) * iVar1) + *plVar2),
                 (longlong)(iVar4 * iVar1));
      iVar3 = (int)plVar2[1];
    }
    *(int *)(plVar2 + 1) = iVar3 - param_3;
    FScriptArray::ResizeShrink(plVar2,iVar1);
  }
  return;
}



// FUNCTION 14175ed80 FUN_14175ed80 body=1332 status=ok
// SIG undefined FUN_14175ed80(void)

undefined8 FUN_14175ed80(longlong *param_1,short *param_2,short *param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  short *psVar7;
  ushort *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  short *psVar15;
  int iVar16;
  longlong *local_res10;
  short *local_res18;
  uint local_res20;
  ushort *in_stack_ffffffffffffff68;
  undefined2 *in_stack_ffffffffffffff70;
  undefined2 *in_stack_ffffffffffffff78;
  undefined2 *local_78;
  int local_70;
  undefined4 local_6c;
  ushort *local_68;
  int local_60;
  longlong local_58 [3];
  
  lVar11 = *param_1;
  local_res18 = param_3;
  local_res20 = param_4;
  puVar4 = (undefined8 *)FName::FName(&local_res10,param_2,1);
  (**(code **)(lVar11 + 0x250))(param_1,param_3,*puVar4);
  puVar8 = &DAT_143f3eda8;
  if (param_3 != (short *)0x0) {
    lVar11 = *(longlong *)(param_1[2] + 0xc0);
    if ((*(int *)(*(longlong *)(param_3 + 8) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 8) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
        != lVar11 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((!bVar3) && ((*(uint *)(param_1 + 1) >> 4 & 1) == 0)) {
      local_res10 = *(longlong **)(lVar11 + 0x18);
      FName::ToString(&local_res10,&local_78);
      puVar12 = &DAT_143f3eda8;
      if (local_70 != 0) {
        puVar12 = local_78;
      }
      puVar4 = (undefined8 *)UObjectBaseUtility::GetFullName(param_3,local_58,0);
      if (*(int *)(puVar4 + 1) == 0) {
        puVar14 = &DAT_143f3eda8;
      }
      else {
        puVar14 = (undefined2 *)*puVar4;
      }
      puVar4 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,&local_68,0);
      if (*(int *)(puVar4 + 1) == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = (undefined2 *)*puVar4;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0xb9,L"Cannot rename %s into Outer %s as it is not of type %s",puVar13,
                 puVar14,puVar12);
      if (local_68 != (ushort *)0x0) {
        FMemory::Free();
      }
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      if (local_78 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_res10 = *(longlong **)(*(longlong *)(param_1[2] + 0xc0) + 0x18);
      FName::ToString(&local_res10,&local_78);
      in_stack_ffffffffffffff78 = &DAT_143f3eda8;
      if (local_70 != 0) {
        in_stack_ffffffffffffff78 = local_78;
      }
      puVar4 = (undefined8 *)UObjectBaseUtility::GetFullName(param_3,&local_68,0);
      if (*(int *)(puVar4 + 1) == 0) {
        in_stack_ffffffffffffff70 = &DAT_143f3eda8;
      }
      else {
        in_stack_ffffffffffffff70 = (undefined2 *)*puVar4;
      }
      puVar4 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,local_58,0);
      if (*(int *)(puVar4 + 1) == 0) {
        in_stack_ffffffffffffff68 = &DAT_143f3eda8;
      }
      else {
        in_stack_ffffffffffffff68 = (ushort *)*puVar4;
      }
      FDebug::AssertFailed
                (&DAT_144d11063,"Unknown",0xb9,
                 L"Cannot rename %s into Outer %s as it is not of type %s",in_stack_ffffffffffffff68
                 ,in_stack_ffffffffffffff70,in_stack_ffffffffffffff78);
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      if (local_68 != (ushort *)0x0) {
        FMemory::Free();
      }
      param_4 = local_res20;
      if (local_78 != (undefined2 *)0x0) {
        FMemory::Free();
        param_4 = local_res20;
      }
    }
  }
  lVar11 = -1;
  psVar15 = param_3;
  if ((param_4 & 0x40) != 0) {
    psVar15 = (short *)&DAT_ffffffffffffffff;
  }
  if (param_2 != (short *)0x0) {
    psVar7 = psVar15;
    if (psVar15 == (short *)0x0) {
      psVar7 = (short *)param_1[4];
    }
    plVar5 = (longlong *)FUN_141799410(0,psVar7,param_2,1);
    local_res10 = plVar5;
    if (plVar5 == param_1) {
      puVar12 = (undefined2 *)0x0;
      iVar16 = 0;
      local_78 = (undefined2 *)0x0;
      local_6c = 0;
      if (*param_2 != 0) {
        do {
          lVar11 = lVar11 + 1;
        } while (param_2[lVar11] != 0);
        iVar10 = (int)lVar11 + 1;
        local_70 = iVar10;
        if (0 < iVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
        }
        iVar16 = local_70;
        puVar12 = local_78;
        FGenericPlatformString::Memcpy(local_78,param_2,(longlong)iVar10 * 2);
      }
      local_res10 = (longlong *)local_res10[3];
      FName::ToString(&local_res10,&local_68);
      puVar14 = &DAT_143f3eda8;
      if (iVar16 != 0) {
        puVar14 = puVar12;
      }
      if (local_60 != 0) {
        puVar8 = local_68;
      }
      lVar11 = (longlong)puVar14 - (longlong)puVar8;
      do {
        uVar1 = *puVar8;
        uVar2 = *(ushort *)((longlong)puVar8 + lVar11);
        if (uVar1 != uVar2) break;
        puVar8 = puVar8 + 1;
      } while (uVar2 != 0);
      if (local_68 != (ushort *)0x0) {
        FMemory::Free();
      }
      if (puVar12 != (undefined2 *)0x0) {
        FMemory::Free(puVar12);
      }
      param_3 = local_res18;
      param_4 = local_res20;
      if (uVar1 == uVar2) {
        return 1;
      }
    }
    else {
      param_3 = local_res18;
      if (plVar5 != (longlong *)0x0) {
        if ((param_4 & 2) != 0) {
          return 0;
        }
        puVar4 = (undefined8 *)UObjectBaseUtility::GetFullName(plVar5,&local_68,0);
        if (*(int *)(puVar4 + 1) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = (undefined2 *)*puVar4;
        }
        puVar4 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,local_58,0);
        if (*(int *)(puVar4 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar4;
        }
        LowLevelFatalErrorHandler
                  ("Unknown",0xd8,
                   L"Renaming an object (%s) on top of an existing object (%s) is not allowed",
                   puVar14,puVar12);
        if (local_58[0] != 0) {
          FMemory::Free();
        }
        if (local_68 != (ushort *)0x0) {
          FMemory::Free();
        }
        puVar4 = (undefined8 *)UObjectBaseUtility::GetFullName(plVar5,&local_68,0);
        if (*(int *)(puVar4 + 1) == 0) {
          in_stack_ffffffffffffff70 = &DAT_143f3eda8;
        }
        else {
          in_stack_ffffffffffffff70 = (undefined2 *)*puVar4;
        }
        puVar4 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,local_58,0);
        if (*(int *)(puVar4 + 1) != 0) {
          puVar8 = (ushort *)*puVar4;
        }
        FDebug::AssertFailed
                  (&DAT_144d11064,"Unknown",0xd8,
                   L"Renaming an object (%s) on top of an existing object (%s) is not allowed",
                   puVar8,in_stack_ffffffffffffff70);
        if (local_58[0] != 0) {
          FMemory::Free();
        }
        param_3 = local_res18;
        in_stack_ffffffffffffff68 = puVar8;
        if (local_68 != (ushort *)0x0) {
          FMemory::Free();
          param_3 = local_res18;
          in_stack_ffffffffffffff68 = puVar8;
        }
      }
    }
  }
  if ((param_4 & 2) != 0) {
    return 1;
  }
  if ((param_4 & 1) == 0) {
    ResetLoaders(param_1[4]);
  }
  lVar11 = param_1[3];
  if (param_2 == (short *)0x0) {
    if ((param_3 != (short *)0x0) &&
       (lVar6 = StaticFindObjectFastInternal
                          (0,param_3,lVar11,0,
                           (ulonglong)in_stack_ffffffffffffff68 & 0xffffffffffffff00,
                           (ulonglong)in_stack_ffffffffffffff70 & 0xffffffff00000000,
                           (ulonglong)in_stack_ffffffffffffff78 & 0xffffffff00000000),
       lVar9 = lVar11, lVar6 == 0)) goto LAB_14175f23f;
    if (psVar15 == (short *)0x0) {
      psVar15 = (short *)param_1[4];
    }
    local_res18 = (short *)0x0;
    plVar5 = (longlong *)FUN_141791c20(&local_res18,psVar15,param_1[2],0);
  }
  else {
    plVar5 = (longlong *)FName::FName(&local_res18,param_2,1);
  }
  lVar9 = *plVar5;
LAB_14175f23f:
  if ((param_4 & 0x20) == 0) {
    (**(code **)(*param_1 + 0x70))(param_1,(param_4 & 4) == 0);
  }
  lVar6 = param_1[4];
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    UPackage::StaticClass();
  }
  if ((param_3 != (short *)0x0) && ((param_4 & 4) == 0)) {
    UObjectBaseUtility::MarkPackageDirty(param_3);
  }
  UObjectBase::LowLevelRename(param_1,lVar9,param_3);
  (**(code **)(*param_1 + 0xc0))(param_1,lVar6,lVar11);
  return 1;
}



// FUNCTION 14175f2c0 FUN_14175f2c0 body=1268 status=ok
// SIG undefined FUN_14175f2c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14175f2c0(longlong param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  uint uVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  BOOL BVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  undefined1 auStack_148 [32];
  int local_128;
  uint uStack_124;
  uint *puStack_120;
  undefined4 local_118;
  uint uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  int iStack_100;
  uint uStack_fc;
  uint *local_f8;
  uint uStack_f0;
  uint uStack_ec;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 uStack_d8;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  undefined8 uStack_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_98 [2];
  uint local_88 [4];
  uint *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_a8 = param_1;
  if ((param_2 == 0) || (local_b0 = UObjectBaseUtility::GetOutermost(param_2), local_b0 == 0)) {
    local_68 = 0xffffffff;
    local_98[0] = 0;
    local_98[1] = 0;
    local_78 = (uint *)0x0;
    local_70 = 0;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    if (BVar6 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    }
    TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::operator=
              (local_98,param_1 + 8);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    iVar9 = (int)local_70;
    puStack_120 = local_88;
    local_128 = 0;
    uStack_124 = 1;
    uStack_114 = 0;
    iStack_110 = 0;
    if ((int)local_70 != 0) {
      puVar14 = local_88;
      if (local_78 != (uint *)0x0) {
        puVar14 = local_78;
      }
      uVar2 = *puVar14;
      iStack_110 = 0;
      local_128 = 0;
      while (uVar2 == 0) {
        iStack_110 = iStack_110 + 0x20;
        if ((int)((int)local_70 + -1 + ((int)local_70 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_128) {
          uStack_114 = (int)local_70;
          local_128 = local_128 + 1;
          goto LAB_14175f6ca;
        }
        uVar2 = puVar14[(longlong)local_128 + 1];
        local_128 = local_128 + 1;
      }
      uStack_124 = -uVar2 & uVar2;
      iVar15 = 0x1f;
      if (uStack_124 != 0) {
        for (; uStack_124 >> iVar15 == 0; iVar15 = iVar15 + -1) {
        }
      }
      if (uStack_124 == 0) {
        iVar15 = 0x20;
      }
      else {
        iVar15 = 0x1f - iVar15;
      }
      uStack_114 = (iStack_110 - iVar15) + 0x1f;
      if ((int)local_70 < (int)uStack_114) {
        uStack_114 = (int)local_70;
      }
    }
LAB_14175f6ca:
    local_118 = 0xffffffff;
    uStack_d8 = CONCAT44(uStack_124,local_128);
    local_e0 = local_98;
    uStack_f0 = 0xffffffff;
    uStack_ec = uStack_114;
    local_e8 = CONCAT44(uStack_10c,iStack_110);
    _uStack_d0 = CONCAT44((int)local_70,-1 << ((byte)local_70 & 0x1f));
    iStack_100 = local_128;
    uStack_fc = uStack_124;
    local_f8 = puStack_120;
    uStack_c0 = local_e8;
    uStack_c8 = uStack_f0;
    uStack_c4 = uStack_ec;
    local_108 = local_e0;
    while (((uStack_ec != iVar9 || (local_f8 != local_88)) || (local_108 != local_98))) {
      uVar3 = *(undefined8 *)(*local_108 + (longlong)(int)uStack_ec * 0x10);
      AK::MemoryMgr::StartProfileThreadUsage((long)uVar3);
      FUN_141733120(uVar3);
      FLinkerManager::RemoveLinker(param_1,uVar3);
      uStack_f0 = uStack_f0 & ~uStack_fc;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_100);
    }
    local_50 = 0;
    if (local_58 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_98);
  }
  else {
    lVar7 = FLinkerLoad::FindExistingLinkerForPackage(local_b0);
    if (lVar7 != 0) {
      lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x58);
      BVar6 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar6 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      lVar5 = local_b0;
      uStack_124 = 1;
      plVar1 = (longlong *)(param_1 + 8);
      uStack_114 = 0;
      iStack_110 = 0;
      uVar2 = *(uint *)(param_1 + 0x30);
      puVar14 = (uint *)(param_1 + 0x18);
      local_128 = 0;
      if (uVar2 != 0) {
        puVar13 = *(uint **)(param_1 + 0x28);
        if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
          puVar13 = puVar14;
        }
        uVar12 = *puVar13;
        iStack_110 = 0;
        local_128 = 0;
        while (uVar12 == 0) {
          lVar11 = (longlong)local_128;
          iStack_110 = iStack_110 + 0x20;
          iVar9 = local_128 + 1;
          bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_128;
          local_128 = iVar9;
          if (bVar4) goto LAB_14175f40f;
          uVar12 = puVar13[lVar11 + 1];
        }
        uStack_124 = -uVar12 & uVar12;
        iVar9 = 0x1f;
        if (uStack_124 != 0) {
          for (; uStack_124 >> iVar9 == 0; iVar9 = iVar9 + -1) {
          }
        }
        if (uStack_124 == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - iVar9;
        }
        uStack_114 = (iStack_110 - iVar9) + 0x1f;
        if ((int)uVar2 < (int)uStack_114) {
LAB_14175f40f:
          uStack_114 = uVar2;
        }
      }
      local_118 = 0xffffffff;
      uStack_cc = *(uint *)(param_1 + 0x30);
      uStack_d8 = CONCAT44(uStack_124,local_128);
      uStack_f0 = 0xffffffff;
      uStack_ec = uStack_114;
      local_e8 = CONCAT44(uStack_10c,iStack_110);
      uVar2 = *(uint *)(param_1 + 0x30);
      uStack_d0 = -1 << ((byte)uStack_cc & 0x1f);
      uVar12 = uStack_cc & 0xffffffe0;
      iStack_100 = local_128;
      uStack_fc = uStack_124;
      puStack_120 = puVar14;
      local_f8 = puVar14;
      local_e0 = plVar1;
      uStack_c0 = local_e8;
      local_b8 = plVar1;
      local_108 = plVar1;
      uStack_c8 = uStack_f0;
      uStack_c4 = uStack_ec;
      uVar10 = uStack_cc;
      if (uStack_cc != uVar2) {
        puVar13 = *(uint **)(param_1 + 0x28);
        if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
          puVar13 = puVar14;
        }
        uVar10 = puVar13[(int)uStack_cc >> 5] & uStack_d0;
        iVar9 = (int)uStack_cc >> 5;
        while (uVar10 == 0) {
          uVar12 = uVar12 + 0x20;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
          goto LAB_14175f4f2;
          uVar10 = puVar13[(longlong)iVar9 + 1];
          uStack_d0 = 0xffffffff;
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
        uStack_cc = (uVar12 - iVar9) + 0x1f;
        uVar10 = uStack_cc;
        if ((int)uVar2 < (int)uStack_cc) {
LAB_14175f4f2:
          uStack_cc = uVar2;
          uVar10 = uVar2;
        }
      }
      while (((uStack_ec != uVar10 || (local_f8 != puVar14)) || (local_108 != plVar1))) {
        lVar11 = *(longlong *)(*local_108 + (longlong)(int)uStack_ec * 0x10);
        if (*(longlong *)(lVar11 + 0xa0) != lVar5) {
          lVar8 = *(longlong *)(lVar11 + 8);
          lVar11 = (longlong)*(int *)(lVar11 + 0x10) * 0x38 + lVar8;
          for (; lVar8 != lVar11; lVar8 = lVar8 + 0x38) {
            if (*(longlong *)(lVar8 + 0x28) == lVar7) {
              *(undefined8 *)(lVar8 + 0x28) = 0;
              *(undefined4 *)(lVar8 + 0x30) = 0xffffffff;
            }
          }
        }
        uStack_f0 = uStack_f0 & ~uStack_fc;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_100);
      }
      LeaveCriticalSection(lpCriticalSection);
      AK::MemoryMgr::StartProfileThreadUsage((long)lVar7);
      FUN_141733120(lVar7);
      FLinkerManager::RemoveLinker(local_a8,lVar7);
    }
  }
  return;
}



// FUNCTION 14175f7c0 FUN_14175f7c0 body=163 status=ok
// SIG undefined FUN_14175f7c0(void)

void FUN_14175f7c0(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0xc0);
  if (param_3 < 9) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 * 0x18);
    pvVar1 = *(void **)((longlong)param_1 + 0xc0);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0xc0) = pvVar1;
      }
      _guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 * 0x18);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0xc0) = uVar2;
  return;
}



// FUNCTION 14175f870 ResizeGrow body=157 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FCompactPose,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (uVar1 < 9) {
    iVar4 = 8;
  }
  else {
    lVar2 = 4;
    if ((*(int *)(param_1 + 0xcc) != 0) || (4 < uVar1)) {
      lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar2 * 0x18,0);
    iVar4 = (int)(uVar3 / 0x18);
    if (iVar4 < (int)uVar1) {
      iVar4 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0xcc) = iVar4;
  FUN_14175f7c0(param_1,param_2,iVar4,0x18);
  return;
}



// FUNCTION 14175f910 ResizeShrink body=178 status=ok
// SIG undefined ResizeShrink(void)

void TArray<FMovieSceneEntityAndAnimTypeID,TInlineAllocator<8,FDefaultAllocator>_>::ResizeShrink
               (longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 200);
  uVar3 = *(uint *)(param_1 + 0xcc);
  if (uVar2 < 9) {
    uVar2 = 8;
    goto LAB_14175f995;
  }
  if ((0x3fff < (ulonglong)((longlong)(int)(uVar3 - uVar2) * 0x18)) ||
     ((int)(uVar2 * 3) < (int)(uVar3 * 2))) {
    if (0x40 < uVar3 - uVar2) {
      if (0 < (int)uVar2) {
        uVar1 = FMemory::QuantizeSize((longlong)(int)uVar2 * 0x18,0);
        uVar3 = *(uint *)(param_1 + 0xcc);
        uVar2 = (uint)(uVar1 / 0x18);
      }
      goto LAB_14175f995;
    }
    if (uVar2 == 0) goto LAB_14175f995;
  }
  uVar2 = uVar3;
LAB_14175f995:
  if (uVar2 != uVar3) {
    *(uint *)(param_1 + 0xcc) = uVar2;
    FUN_14175f7c0(param_1,*(undefined4 *)(param_1 + 200),uVar2,0x18);
    return;
  }
  return;
}



// FUNCTION 14175f9d0 ResizeTo body=113 status=ok
// SIG undefined ResizeTo(void)

void FScriptArray::ResizeTo(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_3;
  iVar1 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * uVar4);
    iVar1 = (int)(uVar2 / uVar4);
    if (iVar1 < param_2) {
      iVar1 = 0x7fffffff;
    }
  }
  if (iVar1 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 * uVar4,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 14175fa50 FUN_14175fa50 body=889 status=ok
// SIG undefined FUN_14175fa50(void)

int FUN_14175fa50(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  ulonglong uVar18;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  if (param_2 != 0) {
    lVar11 = UObjectRedirector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      lVar11 = FUN_1417a53c0(param_2);
      if ((lVar11 != 0) && ((*(uint *)(param_2 + 8) >> 0x15 & 1) == 0)) {
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x400;
        FUN_141740c00(lVar11 + 0x200,param_2);
      }
      param_2 = *(longlong *)(param_2 + 0x28);
    }
  }
  iVar9 = FUN_141760e10(param_1,param_2);
  iVar10 = TLinkerImportPlaceholder<UClass>::ResolveScriptReferences(param_1,param_2);
  iVar3 = *(int *)(param_1 + 0x170);
  plVar2 = (longlong *)(param_1 + 0x168);
  iVar4 = *(int *)(param_1 + 0x19c);
  puVar1 = (uint *)(param_1 + 0x178);
  uVar5 = *(uint *)(param_1 + 400);
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar5 != 0) {
    puVar17 = *(uint **)(param_1 + 0x188);
    if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
      puVar17 = puVar1;
    }
    uVar6 = *puVar17;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar6 == 0) {
      lVar11 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar13 = local_98 + 1;
      bVar8 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar13;
      if (bVar8) goto LAB_14175fbcd;
      uVar6 = puVar17[lVar11 + 1];
    }
    uStack_94 = -uVar6 & uVar6;
    iVar13 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_84 = (iStack_80 - iVar13) + 0x1f;
    if ((int)uVar5 < (int)uStack_84) {
LAB_14175fbcd:
      uStack_84 = uVar5;
    }
  }
  uVar6 = *(uint *)(param_1 + 400);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar16 = uVar6 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = plVar2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar6;
  if (uVar6 != uVar5) {
    puVar17 = *(uint **)(param_1 + 0x188);
    if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
      puVar17 = puVar1;
    }
    uVar14 = puVar17[(int)uVar6 >> 5] & -1 << ((byte)uVar6 & 0x1f);
    iVar13 = (int)uVar6 >> 5;
    while (uVar14 == 0) {
      uVar16 = uVar16 + 0x20;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13)
      goto LAB_14175fca6;
      uVar14 = puVar17[(longlong)iVar13 + 1];
      iVar13 = iVar13 + 1;
    }
    uVar14 = -uVar14 & uVar14;
    iVar13 = 0x1f;
    if (uVar14 != 0) {
      for (; uVar14 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar14 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_84 = (uVar16 - iVar13) + 0x1f;
    if ((int)uVar5 < (int)uStack_84) {
LAB_14175fca6:
      uStack_84 = uVar5;
    }
  }
  while( true ) {
    if ((uStack_5c == uStack_84) && (local_68 == puVar1)) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) break;
    plVar7 = *(longlong **)(*plVar2 + (longlong)(int)uStack_5c * 0x10);
    (**(code **)(*plVar7 + 0x2c8))(plVar7,param_2);
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  uVar15 = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  if (*(int *)(param_1 + 0x174) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar2,0);
  }
  *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  if (*(int *)(param_1 + 0x194) != 0) {
    *(undefined4 *)(param_1 + 0x194) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x178,0);
  }
  if (0 < (int)*(uint *)(param_1 + 0x1b0)) {
    uVar18 = (ulonglong)*(uint *)(param_1 + 0x1b0);
    do {
      lVar11 = *(longlong *)(param_1 + 0x1a8);
      if (*(longlong *)(param_1 + 0x1a8) == 0) {
        lVar11 = param_1 + 0x1a0;
      }
      uVar12 = (longlong)*(int *)(param_1 + 0x1b0) - 1U & uVar15;
      uVar15 = uVar15 + 1;
      *(undefined4 *)(lVar11 + uVar12 * 4) = 0xffffffff;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  iVar13 = FLinkerPlaceholderBase::ResolvePlaceholderPropertyValues(param_1,param_2);
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x10,0);
  TSet<TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x60,0);
  *(undefined1 *)(param_1 + 0xc) = 1;
  return iVar9 + iVar10 + (iVar3 - iVar4) + iVar13;
}



// FUNCTION 14175fdd0 FUN_14175fdd0 body=889 status=ok
// SIG undefined FUN_14175fdd0(void)

int FUN_14175fdd0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  ulonglong uVar18;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  if (param_2 != 0) {
    lVar11 = UObjectRedirector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      lVar11 = FUN_1417a53c0(param_2);
      if ((lVar11 != 0) && ((*(uint *)(param_2 + 8) >> 0x15 & 1) == 0)) {
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x400;
        FUN_141740c00(lVar11 + 0x200,param_2);
      }
      param_2 = *(longlong *)(param_2 + 0x28);
    }
  }
  iVar9 = FUN_141761170(param_1,param_2);
  iVar10 = TLinkerImportPlaceholder<UClass>::ResolveScriptReferences(param_1,param_2);
  iVar3 = *(int *)(param_1 + 0x170);
  plVar2 = (longlong *)(param_1 + 0x168);
  iVar4 = *(int *)(param_1 + 0x19c);
  puVar1 = (uint *)(param_1 + 0x178);
  uVar5 = *(uint *)(param_1 + 400);
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar5 != 0) {
    puVar17 = *(uint **)(param_1 + 0x188);
    if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
      puVar17 = puVar1;
    }
    uVar6 = *puVar17;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar6 == 0) {
      lVar11 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar13 = local_98 + 1;
      bVar8 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar13;
      if (bVar8) goto LAB_14175ff4d;
      uVar6 = puVar17[lVar11 + 1];
    }
    uStack_94 = -uVar6 & uVar6;
    iVar13 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_84 = (iStack_80 - iVar13) + 0x1f;
    if ((int)uVar5 < (int)uStack_84) {
LAB_14175ff4d:
      uStack_84 = uVar5;
    }
  }
  uVar6 = *(uint *)(param_1 + 400);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar16 = uVar6 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = plVar2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar6;
  if (uVar6 != uVar5) {
    puVar17 = *(uint **)(param_1 + 0x188);
    if (*(uint **)(param_1 + 0x188) == (uint *)0x0) {
      puVar17 = puVar1;
    }
    uVar14 = puVar17[(int)uVar6 >> 5] & -1 << ((byte)uVar6 & 0x1f);
    iVar13 = (int)uVar6 >> 5;
    while (uVar14 == 0) {
      uVar16 = uVar16 + 0x20;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13)
      goto LAB_141760026;
      uVar14 = puVar17[(longlong)iVar13 + 1];
      iVar13 = iVar13 + 1;
    }
    uVar14 = -uVar14 & uVar14;
    iVar13 = 0x1f;
    if (uVar14 != 0) {
      for (; uVar14 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar14 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_84 = (uVar16 - iVar13) + 0x1f;
    if ((int)uVar5 < (int)uStack_84) {
LAB_141760026:
      uStack_84 = uVar5;
    }
  }
  while( true ) {
    if ((uStack_5c == uStack_84) && (local_68 == puVar1)) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) break;
    plVar7 = *(longlong **)(*plVar2 + (longlong)(int)uStack_5c * 0x10);
    (**(code **)(*plVar7 + 0x2c8))(plVar7,param_2);
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  uVar15 = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  if (*(int *)(param_1 + 0x174) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar2,0);
  }
  *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  if (*(int *)(param_1 + 0x194) != 0) {
    *(undefined4 *)(param_1 + 0x194) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x178,0);
  }
  if (0 < (int)*(uint *)(param_1 + 0x1b0)) {
    uVar18 = (ulonglong)*(uint *)(param_1 + 0x1b0);
    do {
      lVar11 = *(longlong *)(param_1 + 0x1a8);
      if (*(longlong *)(param_1 + 0x1a8) == 0) {
        lVar11 = param_1 + 0x1a0;
      }
      uVar12 = (longlong)*(int *)(param_1 + 0x1b0) - 1U & uVar15;
      uVar15 = uVar15 + 1;
      *(undefined4 *)(lVar11 + uVar12 * 4) = 0xffffffff;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  iVar13 = FLinkerPlaceholderBase::ResolvePlaceholderPropertyValues(param_1,param_2);
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x10,0);
  TSet<TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x60,0);
  *(undefined1 *)(param_1 + 0xc) = 1;
  return iVar9 + iVar10 + (iVar3 - iVar4) + iVar13;
}



// FUNCTION 141760150 ResolveAllPlaceholderReferences body=59 status=ok
// SIG undefined ResolveAllPlaceholderReferences(void)

undefined4 FLinkerPlaceholderBase::ResolveAllPlaceholderReferences(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = ResolvePlaceholderPropertyValues();
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x10,0);
  TSet<TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x60,0);
  *(undefined1 *)(param_1 + 0xc) = 1;
  return uVar1;
}



// FUNCTION 141760190 ResolvePlaceholderPropertyValues body=2209 status=ok
// SIG undefined ResolvePlaceholderPropertyValues(void)

int FLinkerPlaceholderBase::ResolvePlaceholderPropertyValues(longlong *param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong *plVar16;
  uint uVar17;
  uint uVar18;
  ulonglong *puVar19;
  longlong *plVar20;
  int iVar21;
  ulonglong *puVar22;
  uint *puVar23;
  uint *puVar24;
  int local_res18;
  ulonglong local_res20;
  int local_118;
  uint uStack_114;
  uint uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  int local_f8;
  uint uStack_f4;
  uint uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d0;
  ulonglong *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  longlong *local_b0;
  longlong *local_a8;
  int iStack_a0;
  uint uStack_9c;
  ulonglong *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong *local_80;
  undefined8 uStack_78;
  ulonglong *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong *local_58;
  
  uStack_f4 = 1;
  plVar20 = param_1 + 2;
  local_res18 = 0;
  uVar6 = *(uint *)(param_1 + 7);
  puVar1 = (ulonglong *)(param_1 + 4);
  local_f8 = 0;
  uStack_e4 = 0;
  iStack_e0 = 0;
  if (uVar6 != 0) {
    puVar19 = (ulonglong *)param_1[6];
    if ((ulonglong *)param_1[6] == (ulonglong *)0x0) {
      puVar19 = puVar1;
    }
    uVar15 = (uint)*puVar19;
    iStack_e0 = 0;
    local_f8 = 0;
    while (uVar15 == 0) {
      lVar12 = (longlong)local_f8;
      iStack_e0 = iStack_e0 + 0x20;
      iVar21 = local_f8 + 1;
      bVar10 = (int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 <= local_f8;
      local_f8 = iVar21;
      if (bVar10) goto LAB_141760276;
      uVar15 = *(uint *)((longlong)puVar19 + (lVar12 + 1) * 4);
    }
    uStack_f4 = -uVar15 & uVar15;
    iVar21 = 0x1f;
    if (uStack_f4 != 0) {
      for (; uStack_f4 >> iVar21 == 0; iVar21 = iVar21 + -1) {
      }
    }
    if (uStack_f4 == 0) {
      iVar21 = 0x20;
    }
    else {
      iVar21 = 0x1f - iVar21;
    }
    uStack_e4 = (iStack_e0 - iVar21) + 0x1f;
    if ((int)uVar6 < (int)uStack_e4) {
LAB_141760276:
      uStack_e4 = uVar6;
    }
  }
  uStack_104 = *(uint *)(param_1 + 7);
  uStack_d0._0_4_ = local_f8;
  uStack_d0._4_4_ = uStack_f4;
  uStack_c0 = CONCAT44(uStack_e4,0xffffffff);
  uStack_b8 = CONCAT44(uStack_dc,iStack_e0);
  uVar15 = uStack_104 & 0xffffffe0;
  iStack_a0 = local_f8;
  uStack_9c = uStack_f4;
  if (uStack_104 != uVar6) {
    puVar19 = (ulonglong *)param_1[6];
    if ((ulonglong *)param_1[6] == (ulonglong *)0x0) {
      puVar19 = puVar1;
    }
    uVar17 = *(uint *)((longlong)puVar19 + (longlong)((int)uStack_104 >> 5) * 4) &
             -1 << ((byte)uStack_104 & 0x1f);
    iVar21 = (int)uStack_104 >> 5;
    while (uVar17 == 0) {
      uVar15 = uVar15 + 0x20;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 <= iVar21)
      goto LAB_141760347;
      uVar17 = *(uint *)((longlong)puVar19 + ((longlong)iVar21 + 1) * 4);
      iVar21 = iVar21 + 1;
    }
    uVar17 = -uVar17 & uVar17;
    iVar21 = 0x1f;
    if (uVar17 != 0) {
      for (; uVar17 >> iVar21 == 0; iVar21 = iVar21 + -1) {
      }
    }
    if (uVar17 == 0) {
      iVar21 = 0x20;
    }
    else {
      iVar21 = 0x1f - iVar21;
    }
    uStack_104 = (uVar15 - iVar21) + 0x1f;
    if ((int)uVar6 < (int)uStack_104) {
LAB_141760347:
      uStack_104 = uVar6;
    }
  }
  local_b0 = (longlong *)(ulonglong)uStack_104;
  puStack_c8 = puVar1;
  local_98 = puVar1;
  uStack_90 = uStack_c0;
  local_88 = uStack_b8;
  local_58 = plVar20;
  local_a8 = plVar20;
  while( true ) {
    if (((uStack_90._4_4_ == (int)local_b0) && (local_98 == puVar1)) && (local_a8 == plVar20))
    break;
    puVar19 = (ulonglong *)((longlong)(int)uStack_90._4_4_ * 0x60 + *local_a8);
    local_res20 = *puVar19;
    cVar11 = FWeakObjectPtr::IsValid(&local_res20);
    if (cVar11 != '\0') {
      lVar12 = FWeakObjectPtr::Get(&local_res20);
      puVar2 = puVar19 + 1;
      uStack_114 = 1;
      uVar6 = (uint)puVar19[6];
      puVar3 = puVar19 + 3;
      local_118 = 0;
      uStack_104 = 0;
      iStack_100 = 0;
      if (uVar6 != 0) {
        puVar22 = (ulonglong *)puVar19[5];
        if ((ulonglong *)puVar19[5] == (ulonglong *)0x0) {
          puVar22 = puVar3;
        }
        uVar15 = (uint)*puVar22;
        while (uVar15 == 0) {
          lVar13 = (longlong)local_118;
          iStack_100 = iStack_100 + 0x20;
          iVar21 = local_118 + 1;
          bVar10 = (int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 <= local_118;
          local_118 = iVar21;
          if (bVar10) goto LAB_141760475;
          uVar15 = *(uint *)((longlong)puVar22 + (lVar13 + 1) * 4);
        }
        uStack_114 = -uVar15 & uVar15;
        iVar21 = 0x1f;
        if (uStack_114 != 0) {
          for (; uStack_114 >> iVar21 == 0; iVar21 = iVar21 + -1) {
          }
        }
        if (uStack_114 == 0) {
          iVar21 = 0x20;
        }
        else {
          iVar21 = 0x1f - iVar21;
        }
        uStack_104 = (iStack_100 - iVar21) + 0x1f;
        if ((int)uVar6 < (int)uStack_104) {
LAB_141760475:
          uStack_104 = uVar6;
        }
      }
      uVar15 = (uint)puVar19[6];
      uStack_c0 = CONCAT44(uStack_104,0xffffffff);
      uStack_b8 = CONCAT44(uStack_fc,iStack_100);
      uStack_78 = CONCAT44(uStack_114,local_118);
      uVar17 = uVar15 & 0xffffffe0;
      uStack_d0._0_4_ = local_118;
      uStack_d0._4_4_ = uStack_114;
      puStack_c8 = puVar3;
      local_80 = puVar2;
      puStack_70 = puVar3;
      uStack_68 = uStack_c0;
      uStack_60 = uStack_b8;
      uStack_104 = uVar15;
      if (uVar15 != uVar6) {
        puVar22 = (ulonglong *)puVar19[5];
        if ((ulonglong *)puVar19[5] == (ulonglong *)0x0) {
          puVar22 = puVar3;
        }
        uVar18 = *(uint *)((longlong)puVar22 + (longlong)((int)uVar15 >> 5) * 4) &
                 -1 << ((byte)uVar15 & 0x1f);
        iVar21 = (int)uVar15 >> 5;
        while (uVar18 == 0) {
          uVar17 = uVar17 + 0x20;
          if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 <= iVar21)
          goto LAB_141760546;
          uVar18 = *(uint *)((longlong)puVar22 + ((longlong)iVar21 + 1) * 4);
          iVar21 = iVar21 + 1;
        }
        uVar18 = -uVar18 & uVar18;
        iVar21 = 0x1f;
        if (uVar18 != 0) {
          for (; uVar18 >> iVar21 == 0; iVar21 = iVar21 + -1) {
          }
        }
        if (uVar18 == 0) {
          iVar21 = 0x20;
        }
        else {
          iVar21 = 0x1f - iVar21;
        }
        uStack_104 = (uVar17 - iVar21) + 0x1f;
        if ((int)uVar6 < (int)uStack_104) {
LAB_141760546:
          uStack_104 = uVar6;
        }
      }
      while( true ) {
        lVar13 = (longlong)(int)uStack_c0._4_4_;
        if ((uStack_c0._4_4_ == uStack_104) && (plVar20 = local_58, puStack_c8 == puVar3)) break;
        uVar8 = *puVar2;
        iVar21 = *(int *)(uVar8 + 8 + lVar13 * 0x18);
        iVar7 = *(int *)(*(longlong *)
                          (*(longlong *)(uVar8 + lVar13 * 0x18) + -8 + (longlong)iVar21 * 8) + 0x44)
        ;
        uVar14 = (**(code **)(*param_1 + 0x18))();
        iVar21 = FUN_141760a40(uVar8 + lVar13 * 0x18,iVar21 + -1,iVar7 + lVar12,uVar14,param_2);
        local_res18 = local_res18 + iVar21;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,(uint)uStack_c0 & ~uStack_d0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_d0);
      }
    }
    uStack_90 = CONCAT44(uStack_90._4_4_,(uint)uStack_90 & ~uStack_9c);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
  }
  plVar20 = param_1 + 0xc;
  local_f8 = 0;
  uVar6 = *(uint *)(param_1 + 0x11);
  puVar4 = (uint *)(param_1 + 0xe);
  uStack_f4 = 1;
  uStack_e4 = 0;
  iStack_e0 = 0;
  if (uVar6 != 0) {
    puVar23 = (uint *)param_1[0x10];
    if ((uint *)param_1[0x10] == (uint *)0x0) {
      puVar23 = puVar4;
    }
    uVar15 = *puVar23;
    while (uVar15 == 0) {
      lVar12 = (longlong)local_f8;
      iStack_e0 = iStack_e0 + 0x20;
      iVar21 = local_f8 + 1;
      bVar10 = (int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 <= local_f8;
      local_f8 = iVar21;
      if (bVar10) goto LAB_1417606c5;
      uVar15 = puVar23[lVar12 + 1];
    }
    uStack_f4 = -uVar15 & uVar15;
    iVar21 = 0x1f;
    if (uStack_f4 != 0) {
      for (; uStack_f4 >> iVar21 == 0; iVar21 = iVar21 + -1) {
      }
    }
    if (uStack_f4 == 0) {
      iVar21 = 0x20;
    }
    else {
      iVar21 = 0x1f - iVar21;
    }
    uStack_e4 = (iStack_e0 - iVar21) + 0x1f;
    if ((int)uVar6 < (int)uStack_e4) {
LAB_1417606c5:
      uStack_e4 = uVar6;
    }
  }
  uStack_104 = *(uint *)(param_1 + 0x11);
  uStack_d0 = CONCAT44(uStack_f4,local_f8);
  uStack_c0._0_4_ = 0xffffffff;
  uStack_c0._4_4_ = uStack_e4;
  uStack_b8 = CONCAT44(uStack_dc,iStack_e0);
  uVar15 = uStack_104 & 0xffffffe0;
  if (uStack_104 != uVar6) {
    puVar23 = (uint *)param_1[0x10];
    if ((uint *)param_1[0x10] == (uint *)0x0) {
      puVar23 = puVar4;
    }
    uVar17 = puVar23[(int)uStack_104 >> 5] & -1 << ((byte)uStack_104 & 0x1f);
    iVar21 = (int)uStack_104 >> 5;
    while (uVar17 == 0) {
      uVar15 = uVar15 + 0x20;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 <= iVar21)
      goto LAB_141760796;
      uVar17 = puVar23[(longlong)iVar21 + 1];
      iVar21 = iVar21 + 1;
    }
    uVar17 = -uVar17 & uVar17;
    iVar21 = 0x1f;
    if (uVar17 != 0) {
      for (; uVar17 >> iVar21 == 0; iVar21 = iVar21 + -1) {
      }
    }
    if (uVar17 == 0) {
      iVar21 = 0x20;
    }
    else {
      iVar21 = 0x1f - iVar21;
    }
    uStack_104 = (uVar15 - iVar21) + 0x1f;
    if ((int)uVar6 < (int)uStack_104) {
LAB_141760796:
      uStack_104 = uVar6;
    }
  }
  local_res20 = (ulonglong)uStack_104;
  puStack_c8 = (ulonglong *)puVar4;
  local_b0 = plVar20;
  do {
    if (((uStack_c0._4_4_ == (uint)local_res20) && (puStack_c8 == (ulonglong *)puVar4)) &&
       (plVar20 == local_b0)) {
      return local_res18;
    }
    uStack_114 = 1;
    plVar16 = (longlong *)((longlong)(int)uStack_c0._4_4_ * 0x60 + *plVar20);
    uStack_104 = 0;
    iStack_100 = 0;
    lVar12 = *plVar16;
    plVar5 = plVar16 + 1;
    uVar6 = *(uint *)(plVar16 + 6);
    puVar23 = (uint *)(plVar16 + 3);
    local_118 = 0;
    if (uVar6 != 0) {
      puVar24 = (uint *)plVar16[5];
      if ((uint *)plVar16[5] == (uint *)0x0) {
        puVar24 = puVar23;
      }
      uVar15 = *puVar24;
      while (uVar15 == 0) {
        lVar13 = (longlong)local_118;
        iStack_100 = iStack_100 + 0x20;
        iVar21 = local_118 + 1;
        bVar10 = (int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 <= local_118;
        local_118 = iVar21;
        if (bVar10) goto LAB_141760895;
        uVar15 = puVar24[lVar13 + 1];
      }
      uStack_114 = -uVar15 & uVar15;
      iVar21 = 0x1f;
      if (uStack_114 != 0) {
        for (; uStack_114 >> iVar21 == 0; iVar21 = iVar21 + -1) {
        }
      }
      if (uStack_114 == 0) {
        iVar21 = 0x20;
      }
      else {
        iVar21 = 0x1f - iVar21;
      }
      uStack_104 = (iStack_100 - iVar21) + 0x1f;
      if ((int)uVar6 < (int)uStack_104) {
LAB_141760895:
        uStack_104 = uVar6;
      }
    }
    uVar15 = *(uint *)(plVar16 + 6);
    uStack_90._0_4_ = 0xffffffff;
    uStack_90._4_4_ = uStack_104;
    local_88 = CONCAT44(uStack_fc,iStack_100);
    uStack_78 = CONCAT44(uStack_114,local_118);
    uVar17 = uVar15 & 0xffffffe0;
    iStack_a0 = local_118;
    uStack_9c = uStack_114;
    local_98 = (ulonglong *)puVar23;
    local_80 = (ulonglong *)plVar5;
    puStack_70 = (ulonglong *)puVar23;
    uStack_60 = local_88;
    uStack_68._0_4_ = (uint)uStack_90;
    uStack_68._4_4_ = uStack_90._4_4_;
    local_a8 = plVar5;
    uStack_104 = uVar15;
    if (uVar15 != uVar6) {
      puVar24 = (uint *)plVar16[5];
      if ((uint *)plVar16[5] == (uint *)0x0) {
        puVar24 = puVar23;
      }
      uVar18 = puVar24[(int)uVar15 >> 5] & -1 << ((byte)uVar15 & 0x1f);
      iVar21 = (int)uVar15 >> 5;
      while (uVar18 == 0) {
        uVar17 = uVar17 + 0x20;
        if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 <= iVar21)
        goto LAB_141760966;
        uVar18 = puVar24[(longlong)iVar21 + 1];
        iVar21 = iVar21 + 1;
      }
      uVar18 = -uVar18 & uVar18;
      iVar21 = 0x1f;
      if (uVar18 != 0) {
        for (; uVar18 >> iVar21 == 0; iVar21 = iVar21 + -1) {
        }
      }
      if (uVar18 == 0) {
        iVar21 = 0x20;
      }
      else {
        iVar21 = 0x1f - iVar21;
      }
      uStack_104 = (uVar17 - iVar21) + 0x1f;
      if ((int)uVar6 < (int)uStack_104) {
LAB_141760966:
        uStack_104 = uVar6;
      }
    }
    while (((lVar13 = (longlong)(int)uStack_90._4_4_, uStack_90._4_4_ != uStack_104 ||
            (local_98 != (ulonglong *)puVar23)) || (local_a8 != plVar5))) {
      lVar9 = *local_a8;
      iVar21 = *(int *)(lVar9 + 8 + lVar13 * 0x18);
      iVar7 = *(int *)(*(longlong *)
                        (*(longlong *)(lVar9 + lVar13 * 0x18) + -8 + (longlong)iVar21 * 8) + 0x44);
      uVar14 = (**(code **)(*param_1 + 0x18))();
      iVar21 = FUN_141760a40(lVar9 + lVar13 * 0x18,iVar21 + -1,iVar7 + lVar12,uVar14,param_2);
      local_res18 = local_res18 + iVar21;
      uStack_90._0_4_ = (uint)uStack_90 & ~uStack_9c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
    }
    uStack_c0._0_4_ = (uint)uStack_c0 & ~uStack_d0._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_d0);
  } while( true );
}



// FUNCTION 141760a40 FUN_141760a40 body=975 status=ok
// SIG undefined FUN_141760a40(void)

int FUN_141760a40(longlong *param_1,uint param_2,longlong *param_3,longlong param_4,
                 undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint local_res10;
  
  iVar6 = 0;
  uVar14 = (ulonglong)(int)param_2;
  uVar15 = uVar14;
  local_res10 = param_2;
  if ((int)param_2 < 0) {
    return 0;
  }
  do {
    plVar5 = *(longlong **)(*param_1 + uVar14 * 8);
    if (uVar14 == 0) {
      lVar4 = (**(code **)(*plVar5 + 0x378))(plVar5,param_3);
      if (lVar4 == param_4) {
        (**(code **)(*plVar5 + 0x380))(plVar5,param_3,param_5);
        iVar6 = iVar6 + 1;
      }
    }
    else {
      if (plVar5 != (longlong *)0x0) {
        lVar4 = UArrayProperty::GetPrivateStaticClass();
        if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          iVar13 = 0;
          iVar8 = *(int *)(plVar5[0xe] + 0x34);
          iVar11 = (int)param_3[1];
          if (iVar11 < 1) {
            return iVar6;
          }
          iVar12 = 0;
          do {
            if (iVar11 == 0) {
              lVar4 = 0;
            }
            else {
              lVar4 = (longlong)iVar12 + *param_3;
            }
            iVar11 = FUN_141760a40(param_1,local_res10 - 1,lVar4,param_4,param_5);
            iVar6 = iVar6 + iVar11;
            iVar13 = iVar13 + 1;
            iVar11 = (int)param_3[1];
            iVar12 = iVar12 + iVar8;
          } while (iVar13 < iVar11);
          return iVar6;
        }
        lVar4 = USetProperty::GetPrivateStaticClass();
        if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          lVar4 = plVar5[0x12];
          iVar8 = 0;
          iVar11 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
          if (iVar11 == 0) {
            return iVar6;
          }
          uVar7 = 1;
          iVar13 = 0;
          break;
        }
        lVar4 = UMapProperty::GetPrivateStaticClass();
        if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
            lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          lVar4 = plVar5[0x10];
          iVar8 = *(int *)((longlong)plVar5 + 0x84);
          iVar13 = 0;
          lVar10 = plVar5[0x14];
          iVar11 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
          if (iVar11 == 0) {
            return iVar6;
          }
          uVar7 = 1;
          iVar12 = 0;
          goto LAB_141760be6;
        }
      }
      param_3 = (longlong *)
                ((longlong)param_3 +
                (longlong)*(int *)(*(longlong *)(*param_1 + -8 + uVar14 * 8) + 0x44));
    }
    local_res10 = (int)uVar15 - 1;
    bVar1 = (longlong)uVar14 < 1;
    uVar14 = uVar14 - 1;
    uVar15 = (ulonglong)local_res10;
    if (bVar1) {
      return iVar6;
    }
  } while( true );
LAB_141760d00:
  if ((iVar8 < 0) || ((int)param_3[5] <= iVar8)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    plVar5 = (longlong *)param_3[4];
    if ((longlong *)param_3[4] == (longlong *)0x0) {
      plVar5 = param_3 + 2;
    }
    iVar12 = iVar8;
    if (iVar8 < 0) {
      iVar12 = iVar8 + 0x1f;
    }
    if ((*(uint *)((longlong)plVar5 + (longlong)(iVar12 >> 5) * 4) & uVar7) == 0)
    goto LAB_141760d3e;
    bVar1 = true;
  }
  else {
LAB_141760d3e:
    bVar1 = false;
  }
  if (bVar1) {
    iVar11 = iVar11 + -1;
    if ((int)param_3[1] == *(int *)((longlong)param_3 + 0x34)) {
      lVar10 = 0;
    }
    else {
      lVar10 = (longlong)iVar13 + *param_3;
    }
    iVar12 = FUN_141760a40(param_1,local_res10 - 1,lVar10,param_4,param_5);
    iVar6 = iVar6 + iVar12;
  }
  iVar8 = iVar8 + 1;
  uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
  iVar13 = iVar13 + (int)lVar4;
  if (iVar11 == 0) {
    return iVar6;
  }
  goto LAB_141760d00;
LAB_141760be6:
  if ((iVar13 < 0) || ((int)param_3[5] <= iVar13)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    plVar5 = (longlong *)param_3[4];
    if ((longlong *)param_3[4] == (longlong *)0x0) {
      plVar5 = param_3 + 2;
    }
    iVar2 = iVar13;
    if (iVar13 < 0) {
      iVar2 = iVar13 + 0x1f;
    }
    if ((*(uint *)((longlong)plVar5 + (longlong)(iVar2 >> 5) * 4) & uVar7) == 0) goto LAB_141760c29;
    bVar1 = true;
  }
  else {
LAB_141760c29:
    bVar1 = false;
  }
  if (bVar1) {
    iVar11 = iVar11 + -1;
    if ((int)param_3[1] == *(int *)((longlong)param_3 + 0x34)) {
      lVar9 = 0;
    }
    else {
      lVar9 = (longlong)(int)lVar4 + (longlong)iVar12 + *param_3;
    }
    iVar2 = FUN_141760a40(param_1,(int)uVar15 + -1,lVar9,param_4,param_5);
    if ((int)param_3[1] == *(int *)((longlong)param_3 + 0x34)) {
      lVar9 = 0;
    }
    else {
      lVar9 = (longlong)iVar8 + (longlong)iVar12 + *param_3;
    }
    iVar3 = FUN_141760a40(param_1,(int)uVar15 + -1,lVar9,param_4,param_5);
    uVar15 = (ulonglong)local_res10;
    iVar6 = iVar6 + iVar2 + iVar3;
  }
  iVar12 = iVar12 + (int)lVar10;
  iVar13 = iVar13 + 1;
  uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
  if (iVar11 == 0) {
    return iVar6;
  }
  goto LAB_141760be6;
}



// FUNCTION 141760e10 FUN_141760e10 body=860 status=ok
// SIG undefined FUN_141760e10(void)

int FUN_141760e10(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  plVar1 = param_1 + 0x19;
  iVar12 = 0;
  lVar6 = (**(code **)(*param_1 + 0x18))();
  uVar3 = *(uint *)(param_1 + 0x1e);
  puVar2 = (uint *)(param_1 + 0x1b);
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar13 = (uint *)param_1[0x1d];
    if ((uint *)param_1[0x1d] == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar7 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar9 = local_98 + 1;
      bVar5 = (int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= local_98;
      local_98 = iVar9;
      if (bVar5) goto LAB_141760eee;
      uVar4 = puVar13[lVar7 + 1];
    }
    uStack_94 = uVar4 - 1 & uVar4 ^ uVar4;
    iVar9 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_84 = (iStack_80 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_141760eee:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x1e);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar10 = uVar4 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar2;
  local_50 = plVar1;
  puStack_40 = puVar2;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar4;
  if (uVar4 != uVar3) {
    puVar13 = (uint *)param_1[0x1d];
    if ((uint *)param_1[0x1d] == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar11 = puVar13[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar9 = (int)uVar4 >> 5;
    while (uVar11 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= iVar9) goto LAB_141760fc0;
      uVar11 = puVar13[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar11 = uVar11 - 1 & uVar11 ^ uVar11;
    iVar9 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_84 = (uVar10 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_141760fc0:
      uStack_84 = uVar3;
    }
  }
  do {
    if ((uStack_5c == uStack_84) && (local_68 == puVar2)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty(plVar1,0);
      return iVar12;
    }
    lVar7 = *(longlong *)(*plVar1 + (longlong)(int)uStack_5c * 0x10);
    if (lVar7 != 0) {
      lVar8 = UObjectPropertyBase::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        if (*(longlong *)(lVar7 + 0x70) == lVar6) {
          *(undefined8 *)(lVar7 + 0x70) = param_2;
          iVar12 = iVar12 + 1;
        }
        lVar8 = UClassProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          if (*(longlong *)(lVar7 + 0x78) == lVar6) {
            *(undefined8 *)(lVar7 + 0x78) = param_2;
LAB_141761127:
            iVar12 = iVar12 + 1;
          }
        }
        else {
          lVar8 = USoftClassProperty::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if ((bVar5) && (*(longlong *)(lVar7 + 0x78) == lVar6)) {
            *(undefined8 *)(lVar7 + 0x78) = param_2;
            goto LAB_141761127;
          }
        }
      }
      else {
        lVar8 = UInterfaceProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((bVar5) && (*(longlong *)(lVar7 + 0x70) == lVar6)) {
          *(undefined8 *)(lVar7 + 0x70) = param_2;
          goto LAB_141761127;
        }
      }
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  } while( true );
}



// FUNCTION 141761170 FUN_141761170 body=700 status=ok
// SIG undefined FUN_141761170(void)

int FUN_141761170(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  plVar1 = param_1 + 0x19;
  iVar12 = 0;
  lVar6 = (**(code **)(*param_1 + 0x18))();
  uVar3 = *(uint *)(param_1 + 0x1e);
  puVar2 = (uint *)(param_1 + 0x1b);
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar13 = (uint *)param_1[0x1d];
    if ((uint *)param_1[0x1d] == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar7 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar9 = local_98 + 1;
      bVar5 = (int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= local_98;
      local_98 = iVar9;
      if (bVar5) goto LAB_14176124e;
      uVar4 = puVar13[lVar7 + 1];
    }
    uStack_94 = uVar4 - 1 & uVar4 ^ uVar4;
    iVar9 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_84 = (iStack_80 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_14176124e:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x1e);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar10 = uVar4 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar2;
  local_50 = plVar1;
  puStack_40 = puVar2;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar4;
  if (uVar4 != uVar3) {
    puVar13 = (uint *)param_1[0x1d];
    if ((uint *)param_1[0x1d] == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar11 = puVar13[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar9 = (int)uVar4 >> 5;
    while (uVar11 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= iVar9) goto LAB_141761320;
      uVar11 = puVar13[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar11 = uVar11 - 1 & uVar11 ^ uVar11;
    iVar9 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_84 = (uVar10 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_141761320:
      uStack_84 = uVar3;
    }
  }
  do {
    if ((uStack_5c == uStack_84) && (local_68 == puVar2)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty(plVar1,0);
      return iVar12;
    }
    lVar7 = *(longlong *)(*plVar1 + (longlong)(int)uStack_5c * 0x10);
    if (lVar7 != 0) {
      lVar8 = UDelegateProperty::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) {
        lVar8 = UMulticastDelegateProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) goto LAB_1417613e9;
      }
      if (*(longlong *)(lVar7 + 0x70) == lVar6) {
        iVar12 = iVar12 + 1;
        *(undefined8 *)(lVar7 + 0x70) = param_2;
      }
    }
LAB_1417613e9:
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  } while( true );
}



// FUNCTION 141761430 ResolveScriptReferences body=654 status=ok
// SIG undefined ResolveScriptReferences(void)

int TLinkerImportPlaceholder<UClass>::ResolveScriptReferences(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  uint *puVar15;
  ulonglong uVar16;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  iVar13 = 0;
  lVar6 = (**(code **)(*param_1 + 0x18))();
  uStack_94 = 1;
  plVar12 = param_1 + 0x23;
  local_98 = 0;
  uVar2 = *(uint *)(param_1 + 0x28);
  puVar1 = (uint *)(param_1 + 0x25);
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar15 = (uint *)param_1[0x27];
    if ((uint *)param_1[0x27] == (uint *)0x0) {
      puVar15 = puVar1;
    }
    uVar3 = *puVar15;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar8 = local_98 + 1;
      bVar5 = (int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 <= local_98;
      local_98 = iVar8;
      if (bVar5) goto LAB_14176150d;
      uVar3 = puVar15[lVar7 + 1];
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
LAB_14176150d:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x28);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar9 = uVar3 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = plVar12;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar3;
  if (uVar3 != uVar2) {
    puVar15 = (uint *)param_1[0x27];
    if ((uint *)param_1[0x27] == (uint *)0x0) {
      puVar15 = puVar1;
    }
    uVar11 = puVar15[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar8 = (int)uVar3 >> 5;
    while (uVar11 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 <= iVar8) goto LAB_1417615d2;
      uVar11 = puVar15[(longlong)iVar8 + 1];
      iVar8 = iVar8 + 1;
    }
    uVar11 = -uVar11 & uVar11;
    iVar8 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_84 = (uVar9 - iVar8) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1417615d2:
      uStack_84 = uVar2;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    plVar4 = *(longlong **)(*plVar12 + (longlong)(int)uStack_5c * 0x10);
    if (*plVar4 == lVar6) {
      *plVar4 = param_2;
      iVar13 = iVar13 + 1;
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  uVar14 = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(int *)((longlong)param_1 + 0x124) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar12,0);
  }
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)((longlong)param_1 + 0x144) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x144) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x25,0);
  }
  if (0 < (int)*(uint *)(param_1 + 0x2c)) {
    uVar16 = (ulonglong)*(uint *)(param_1 + 0x2c);
    do {
      plVar12 = (longlong *)param_1[0x2b];
      if ((longlong *)param_1[0x2b] == (longlong *)0x0) {
        plVar12 = param_1 + 0x2a;
      }
      uVar10 = (longlong)(int)param_1[0x2c] - 1U & uVar14;
      uVar14 = uVar14 + 1;
      *(undefined4 *)((longlong)plVar12 + uVar10 * 4) = 0xffffffff;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  return iVar13;
}



// FUNCTION 1417616c0 FUN_1417616c0 body=59 status=ok
// SIG undefined FUN_1417616c0(void)

undefined8 FUN_1417616c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0x10) == *(longlong *)(param_2 + 0x10))) &&
     (plVar1 = *(longlong **)(param_1 + 0x70), plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x368))(plVar1,*(undefined8 *)(param_2 + 0x70));
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141761700 FUN_141761700 body=31 status=ok
// SIG undefined FUN_141761700(void)

ulonglong FUN_141761700(longlong param_1,longlong param_2)

{
  ulonglong in_RAX;
  
  if (((param_2 != 0) &&
      (in_RAX = *(ulonglong *)(param_2 + 0x10), *(ulonglong *)(param_1 + 0x10) == in_RAX)) &&
     (in_RAX = *(ulonglong *)(param_2 + 0x70), *(ulonglong *)(param_1 + 0x70) == in_RAX)) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141761720 SameType body=21 status=ok
// SIG undefined SameType(void)

ulonglong UProperty::SameType(longlong param_1,longlong param_2)

{
  ulonglong in_RAX;
  
  if ((param_2 != 0) &&
     (in_RAX = *(ulonglong *)(param_2 + 0x10), *(ulonglong *)(param_1 + 0x10) == in_RAX)) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141761740 FUN_141761740 body=4138 status=ok
// SIG undefined FUN_141761740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141761740(longlong *param_1,ulonglong param_2,short *param_3,longlong param_4)

{
  ulonglong uVar1;
  void *pvVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  short **ppsVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  void **ppvVar12;
  longlong lVar13;
  short *psVar14;
  short *psVar15;
  void *_Dst;
  undefined2 *puVar16;
  short *psVar17;
  uint uVar18;
  longlong lVar19;
  longlong *plVar20;
  short *psVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  bool bVar25;
  undefined1 auStack_a08 [32];
  longlong *local_9e8;
  undefined8 local_9e0;
  undefined8 local_9d8;
  char local_9c8;
  undefined1 local_9c7;
  char local_9c6;
  int local_9c4;
  short *local_9c0;
  undefined8 local_9b8;
  short *local_9b0;
  undefined8 local_9a8;
  short *local_9a0;
  longlong *local_998;
  short *local_990;
  undefined8 local_988;
  longlong local_980;
  longlong *local_978;
  longlong local_970 [2];
  int local_960;
  longlong *local_958;
  short *local_950;
  undefined8 local_948;
  short *local_940;
  int local_938;
  longlong local_930;
  ulonglong local_928;
  longlong local_920;
  undefined8 local_918;
  longlong local_910;
  ulonglong local_908;
  longlong local_900;
  ulonglong local_8f8;
  longlong local_8f0;
  ulonglong local_8e8;
  longlong local_8e0;
  ulonglong local_8d8;
  void *local_8d0;
  int local_8c8;
  undefined4 local_8c4;
  short *local_8c0;
  undefined8 local_8b8;
  short *local_8b0;
  undefined2 *local_8a8;
  int local_8a0;
  ulonglong local_898;
  short *local_890;
  undefined1 local_888 [8];
  undefined1 local_880 [8];
  longlong local_878 [2];
  longlong local_868 [2];
  undefined1 local_858 [16];
  short local_848 [1024];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_a08;
  psVar17 = (short *)0x0;
  local_998 = param_1;
  local_960 = 0;
  local_980 = param_4;
  local_890 = param_3;
  local_898 = param_2;
  if ((*(uint *)(param_1[2] + 0xb4) >> 2 & 1) == 0) {
    return;
  }
  if (param_3 == (short *)0x0) {
    uVar22 = 2;
    FUN_14171af40(param_1[2],&local_940);
    ppsVar8 = &local_940;
  }
  else {
    uVar22 = 1;
    local_9c0 = (short *)0x0;
    local_9b8 = 0;
    if (*param_3 != 0) {
      lVar19 = -1;
      do {
        lVar19 = lVar19 + 1;
      } while (param_3[lVar19] != 0);
      uVar18 = (int)lVar19 + 1;
      local_9b8 = (ulonglong)uVar18;
      if (0 < (int)uVar18) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_9c0,0);
      }
      FGenericPlatformString::Memcpy(local_9c0,param_3,(longlong)(int)uVar18 * 2);
    }
    ppsVar8 = &local_9c0;
  }
  psVar21 = *ppsVar8;
  *ppsVar8 = (short *)0x0;
  iVar7 = *(int *)(ppsVar8 + 1);
  local_960 = iVar7;
  ppsVar8[1] = (short *)0x0;
  local_8b0 = psVar21;
  if (((uVar22 & 2) != 0) && (uVar22 = uVar22 & 0xfffffffd, local_940 != (short *)0x0)) {
    FMemory::Free();
  }
  if (((uVar22 & 1) != 0) && (uVar22 = uVar22 & 0xfffffffe, local_9c0 != (short *)0x0)) {
    FMemory::Free();
  }
  puVar9 = (undefined8 *)UObject::GetDefaultConfigFilename(param_1,&local_8a8);
  if (*(int *)(puVar9 + 1) == 0) {
    puVar16 = &DAT_143f3eda8;
  }
  else {
    puVar16 = (undefined2 *)*puVar9;
  }
  psVar14 = &DAT_143f3eda8;
  if (iVar7 != 0) {
    psVar14 = psVar21;
  }
  iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(psVar14,puVar16);
  if (iVar6 != 0) {
    uVar22 = uVar22 | 8;
    FName::ToString(param_1[2] + 0xd0,&local_940);
    uVar10 = FUN_1416b20b0();
    FString::PrintfImpl(&local_990,L"%sUnreal Engine/Engine/Config/User%s.ini",uVar10);
    if (local_940 != (short *)0x0) {
      FMemory::Free();
    }
    psVar14 = &DAT_143f3eda8;
    if ((int)local_988 != 0) {
      psVar14 = local_990;
    }
    psVar15 = &DAT_143f3eda8;
    if (iVar7 != 0) {
      psVar15 = psVar21;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(psVar15,psVar14);
    local_9c7 = 0;
    if (iVar7 != 0) goto LAB_141761923;
  }
  local_9c7 = 1;
LAB_141761923:
  if (((uVar22 & 8) != 0) && (uVar22 = uVar22 & 0xfffffff7, local_990 != (short *)0x0)) {
    FMemory::Free();
  }
  local_970[0]._0_4_ = uVar22;
  if (local_8a8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (((*(uint *)(param_1[2] + 0xb4) >> 10 & 1) == 0) || ((*(uint *)(param_1 + 1) >> 4 & 1) != 0)) {
    cVar5 = '\0';
    local_9a0 = (short *)0x0;
    local_9c8 = '\0';
    local_9c4 = 0;
  }
  else {
    local_9b0 = (short *)0x0;
    local_9c8 = '\x01';
    local_9a8 = 0;
    lVar19 = UObjectBaseUtility::GetOutermost(param_1);
    if (lVar19 == DAT_1469e7a80) {
      local_978 = (longlong *)param_1[3];
      FName::ToString(&local_978,&local_990);
      if (local_9b0 != (short *)0x0) {
        FMemory::Free();
      }
      local_9b0 = local_990;
      local_9a8 = local_988;
    }
    else {
      UObjectBaseUtility::GetPathName(param_1,lVar19,&local_9b0);
    }
    local_978 = *(longlong **)(param_1[2] + 0x18);
    FName::ToString(&local_978,&local_950);
    psVar17 = local_9b0;
    lVar19 = (longlong)(int)local_9a8;
    local_9c0 = (short *)0x0;
    local_9b8._0_4_ = (int)local_9a8;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_9c0,(2 - (uint)((int)local_9a8 != 0)) + (int)local_9a8,0);
    psVar21 = local_9c0;
    _guard_xfg_dispatch_icall_nop(local_9c0,psVar17,lVar19 * 2);
    iVar7 = (int)local_9b8;
    lVar19 = (longlong)(int)local_9b8;
    local_9c4 = (2 - (uint)((int)local_9b8 != 0)) + (int)local_9b8;
    local_9b8 = CONCAT44(local_9b8._4_4_,local_9c4);
    iVar6 = local_9b8._4_4_;
    if (local_9b8._4_4_ < local_9c4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_9c0,iVar7);
      local_9c4 = (int)local_9b8;
      psVar21 = local_9c0;
      iVar6 = local_9b8._4_4_;
    }
    psVar17 = local_950;
    psVar21[lVar19 - (ulonglong)(iVar7 != 0)] = 0x20;
    (psVar21 + (lVar19 - (ulonglong)(iVar7 != 0)))[1] = 0;
    iVar7 = (int)local_948;
    if (local_9c4 < 2) {
      local_9a0 = local_950;
      local_950 = (short *)0x0;
      local_948 = 0;
      local_9c4 = iVar7;
    }
    else {
      iVar7 = 0;
      if ((int)local_948 != 0) {
        iVar7 = (int)local_948 + -1;
      }
      if ((local_9c4 != 0) || (iVar23 = 1, iVar7 == 0)) {
        iVar23 = 0;
      }
      iVar23 = iVar7 + local_9c4 + iVar23;
      local_9b8 = CONCAT44(iVar6,local_9c4);
      local_9c0 = psVar21;
      if (iVar6 < iVar23) {
        local_9a0 = psVar21;
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_9c0,iVar23);
        local_9c4 = (int)local_9b8;
        iVar6 = local_9b8._4_4_;
      }
      psVar14 = local_950;
      iVar23 = local_9c4;
      psVar17 = local_9c0;
      psVar21 = (short *)0x0;
      local_9a0 = local_9c0;
      if (iVar7 != 0) {
        lVar19 = (longlong)local_9c4;
        local_9c4 = iVar7 + (uint)(local_9c4 == 0) + local_9c4;
        local_9b8 = CONCAT44(local_9b8._4_4_,local_9c4);
        if (iVar6 < local_9c4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_9c0,iVar23,iVar23,0);
          local_9c4 = (int)local_9b8;
          local_9a0 = local_9c0;
        }
        psVar17 = local_9a0;
        psVar21 = local_9a0 + (lVar19 - (ulonglong)(iVar23 != 0));
        local_9c0 = local_9a0;
        _guard_xfg_dispatch_icall_nop(psVar21,psVar14,(longlong)iVar7 * 2);
        psVar21[iVar7] = 0;
        psVar21 = (short *)0x0;
      }
    }
    cVar5 = '\x01';
    if (psVar21 != (short *)0x0) {
      FMemory::Free(psVar21);
    }
    if (local_950 != (short *)0x0) {
      FMemory::Free(local_950);
    }
    param_4 = local_980;
    uVar22 = (uint)local_970[0];
    if (local_9b0 != (short *)0x0) {
      FMemory::Free();
      param_4 = local_980;
      uVar22 = (uint)local_970[0];
    }
  }
  plVar20 = (longlong *)param_1[2];
  local_978 = (longlong *)plVar20[0x1f];
  if (local_978 == (longlong *)0x0) {
    (**(code **)(*plVar20 + 0x368))(plVar20);
    local_978 = (longlong *)plVar20[0x1f];
    plVar20 = (longlong *)param_1[2];
  }
  if ((param_1 == local_978) || (param_4 != DAT_1468b6148)) {
    local_9c6 = '\0';
  }
  else {
    local_9c6 = '\x01';
  }
  plVar20 = (longlong *)plVar20[0xb];
  local_958 = plVar20;
  if (plVar20 != (longlong *)0x0) {
    do {
      uVar1 = plVar20[7];
      if (((uVar1 >> 0xe & 1) != 0) && ((uVar1 & local_898) == local_898)) {
        lVar19 = param_1[2];
        local_958 = plVar20;
        if ((uVar1 >> 0x12 & 1) != 0) {
          lVar19 = UField::GetOwnerClass(plVar20);
        }
        local_970[0] = plVar20[3];
        FName::ToString(local_970,&local_9b0);
        if (cVar5 == '\0') {
          plVar11 = (longlong *)UObjectBaseUtility::GetPathName(lVar19,local_878,0);
          if (local_970 != plVar11) {
            if (psVar17 != (short *)0x0) {
              FMemory::Free(psVar17);
            }
            local_9a0 = (short *)*plVar11;
            *plVar11 = 0;
            local_9c4 = (int)plVar11[1];
            plVar11[1] = 0;
          }
          if (local_878[0] != 0) {
            FMemory::Free();
          }
        }
        if (((*(uint *)(plVar20 + 7) >> 0x12 & 1) == 0) || (local_890 != (short *)0x0)) {
          lVar19 = (longlong)local_960;
          local_8d0 = (void *)0x0;
          local_8c8 = local_960;
          if (local_960 == 0) {
            local_8c4 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_8d0,local_960,0);
            _guard_xfg_dispatch_icall_nop(local_8d0,local_8b0,lVar19 * 2);
          }
          ppvVar12 = &local_8d0;
          uVar18 = 0x20;
        }
        else {
          uVar10 = UField::GetOwnerClass(plVar20);
          ppvVar12 = (void **)FUN_14171af40(uVar10,local_868);
          uVar18 = 0x10;
        }
        iVar7 = *(int *)(ppvVar12 + 1);
        uVar22 = uVar18 | uVar22;
        pvVar2 = *ppvVar12;
        local_9c0 = (short *)0x0;
        local_9b8 = CONCAT44(local_9b8._4_4_,iVar7);
        local_970[0]._0_4_ = uVar22;
        if (iVar7 == 0) {
          local_9b8 = 0;
          iVar7 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_9c0,iVar7,0);
          _guard_xfg_dispatch_icall_nop(local_9c0,pvVar2,(longlong)iVar7 * 2);
          iVar7 = (int)local_9b8;
        }
        if (((uVar22 & 0x20) != 0) &&
           (uVar22 = uVar22 & 0xffffffdf, local_970[0]._0_4_ = uVar22, local_8d0 != (void *)0x0)) {
          FMemory::Free(local_8d0);
        }
        if (((uVar22 & 0x10) != 0) &&
           (uVar22 = uVar22 & 0xffffffef, local_970[0]._0_4_ = uVar22, local_868[0] != 0)) {
          FMemory::Free();
        }
        plVar11 = local_998;
        lVar19 = local_998[2];
        lVar13 = UField::GetOwnerClass(plVar20);
        if ((((*(uint *)(plVar11[2] + 0xb4) >> 0x1e & 1) == 0) && (local_9c8 == '\0')) &&
           (lVar13 != lVar19)) {
          bVar25 = true;
        }
        else {
          bVar25 = false;
        }
        plVar3 = *(longlong **)(plVar11[2] + 0x30);
        lVar19 = plVar3[0x1f];
        if (lVar19 == 0) {
          (**(code **)(*plVar3 + 0x368))(plVar3);
          lVar19 = plVar3[0x1f];
        }
        lVar13 = UArrayProperty::GetPrivateStaticClass();
        if ((*(int *)(plVar20[2] + 0x90) < *(int *)(lVar13 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar20[2] + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8)
            != lVar13 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          if (bVar25) {
            lVar13 = 0;
            if (lVar19 == 0) {
              iVar6 = *(int *)((longlong)plVar20 + 0x44);
            }
            else {
              iVar6 = *(int *)((longlong)plVar20 + 0x44);
              lVar13 = lVar19 + iVar6;
            }
            cVar5 = (**(code **)(*plVar20 + 0x2b8))
                              (plVar20,(longlong)iVar6 + (longlong)plVar11,lVar13);
            if (cVar5 != '\0') {
              cVar5 = (**(code **)(*plVar20 + 0x2b8))
                                (plVar20,(longlong)plVar11 +
                                         (longlong)*(int *)((longlong)plVar20 + 0x44));
              psVar21 = local_9c0;
              psVar17 = local_9a0;
              if (cVar5 != '\0') {
                local_910 = 0;
                psVar17 = &DAT_143f3eda8;
                if (iVar7 != 0) {
                  psVar17 = local_9c0;
                }
                local_908 = 0;
                if ((psVar17 != (short *)0x0) && (*psVar17 != 0)) {
                  lVar19 = -1;
                  do {
                    lVar19 = lVar19 + 1;
                  } while (psVar17[lVar19] != 0);
                  uVar18 = (int)lVar19 + 1;
                  local_908 = (ulonglong)uVar18;
                  if (0 < (int)uVar18) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_910,0);
                  }
                  FGenericPlatformString::Memcpy(local_910,psVar17,(longlong)(int)uVar18 * 2);
                }
                psVar17 = local_9a0;
                local_9e8 = &local_910;
                psVar14 = &DAT_143f3eda8;
                if (local_9c4 != 0) {
                  psVar14 = local_9a0;
                }
                lVar19 = FConfigCacheIni::GetSectionPrivate(local_980,psVar14);
                if (local_910 != 0) {
                  FMemory::Free();
                }
                if (lVar19 != 0) {
                  psVar14 = &DAT_143f3eda8;
                  if ((int)local_9a8 != 0) {
                    psVar14 = local_9b0;
                  }
                  puVar9 = (undefined8 *)FName::FName(local_858,psVar14);
                  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                  ::Remove(lVar19,*puVar9);
                }
              }
              goto LAB_14176265c;
            }
          }
          psVar17 = &DAT_143f3eda8;
          if (iVar7 != 0) {
            psVar17 = local_9c0;
          }
          local_900 = 0;
          local_8f8 = 0;
          if ((psVar17 != (short *)0x0) && (*psVar17 != 0)) {
            lVar19 = -1;
            do {
              lVar19 = lVar19 + 1;
            } while (psVar17[lVar19] != 0);
            uVar22 = (int)lVar19 + 1;
            local_8f8 = (ulonglong)uVar22;
            if (0 < (int)uVar22) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_900,0);
            }
            FGenericPlatformString::Memcpy(local_900,psVar17,(longlong)(int)uVar22 * 2);
          }
          iVar7 = 0;
          local_9e8 = &local_900;
          psVar17 = &DAT_143f3eda8;
          if (local_9c4 != 0) {
            psVar17 = local_9a0;
          }
          uVar10 = FConfigCacheIni::GetSectionPrivate(local_980,psVar17,1,0);
          if (local_900 != 0) {
            FMemory::Free();
          }
          psVar17 = &DAT_143f3eda8;
          if ((int)local_9a8 != 0) {
            psVar17 = local_9b0;
          }
          puVar9 = (undefined8 *)FName::FName(local_880,psVar17,1);
          TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
          ::Remove(uVar10,*puVar9);
          FString::PrintfImpl(&local_8a8,L"%s%s");
          plVar11 = (longlong *)((longlong)*(int *)((longlong)plVar20 + 0x44) + (longlong)local_998)
          ;
          iVar23 = (int)plVar11[1];
          iVar6 = *(int *)(plVar20[0xe] + 0x34);
          iVar24 = iVar7;
          if (0 < iVar23) {
            do {
              lVar19 = 0;
              local_8c0 = (short *)0x0;
              local_8b8 = 0;
              if (iVar23 != 0) {
                lVar19 = *plVar11 + (longlong)iVar7;
              }
              local_9d8 = 0;
              local_9e0 = 0;
              local_9e8 = local_998;
              (**(code **)(*(longlong *)local_958[0xe] + 0x2d8))
                        ((longlong *)local_958[0xe],&local_8c0,lVar19);
              local_930 = 0;
              psVar17 = &DAT_143f3eda8;
              if ((int)local_8b8 != 0) {
                psVar17 = local_8c0;
              }
              local_928 = 0;
              if ((psVar17 != (short *)0x0) && (*psVar17 != 0)) {
                lVar19 = -1;
                do {
                  lVar19 = lVar19 + 1;
                } while (psVar17[lVar19] != 0);
                uVar22 = (int)lVar19 + 1;
                local_928 = (ulonglong)uVar22;
                if (0 < (int)uVar22) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_930,0);
                }
                FGenericPlatformString::Memcpy(local_930,psVar17,(longlong)(int)uVar22 * 2);
              }
              local_920 = 0;
              local_918 = 0;
              cVar5 = FConfigValue::ExpandValue(&local_930,&local_920);
              if (cVar5 == '\0') {
                bVar25 = local_918._4_4_ != 0;
                local_918 = (ulonglong)local_918._4_4_ << 0x20;
                if (bVar25) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_920,0);
                }
              }
              puVar16 = &DAT_143f3eda8;
              if (local_8a0 != 0) {
                puVar16 = local_8a8;
              }
              FName::FName(local_888,puVar16,1);
              TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
              ::Emplace<FName_const_&,FConfigValue>(uVar10,local_888);
              if (local_920 != 0) {
                FMemory::Free();
              }
              if (local_930 != 0) {
                FMemory::Free();
              }
              if (local_8c0 != (short *)0x0) {
                FMemory::Free();
              }
              iVar23 = (int)plVar11[1];
              iVar24 = iVar24 + 1;
              iVar7 = iVar7 + iVar6;
              plVar20 = local_958;
            } while (iVar24 < iVar23);
          }
          psVar21 = local_9c0;
          psVar17 = local_9a0;
          uVar22 = (uint)local_970[0];
          if (local_8a8 != (undefined2 *)0x0) {
            FMemory::Free();
            psVar21 = local_9c0;
            psVar17 = local_9a0;
            uVar22 = (uint)local_970[0];
          }
        }
        else {
          _guard_xfg_dispatch_icall_nop(local_848,0,0x800);
          iVar6 = (int)plVar20[6];
          iVar23 = 0;
          psVar21 = local_9c0;
          psVar17 = local_9a0;
          uVar22 = (uint)local_970[0];
          if (0 < iVar6) {
            do {
              uVar22 = 0;
              if (iVar6 != 1) {
                local_958 = (longlong *)plVar20[3];
                FName::ToString(&local_958,&local_940);
                psVar17 = &DAT_143f3eda8;
                if (local_938 != 0) {
                  psVar17 = local_940;
                }
                TCString<wchar_t>::SprintfImpl(local_848,L"%s[%i]",psVar17,iVar23);
                if (local_940 != (short *)0x0) {
                  FMemory::Free();
                }
                if (local_9b0 != local_848) {
                  if (local_848[0] != 0) {
                    lVar13 = -1;
                    do {
                      lVar13 = lVar13 + 1;
                    } while (local_848[lVar13] != 0);
                    uVar22 = (int)lVar13 + 1;
                  }
                  uVar18 = local_9a8._4_4_;
                  local_9a8 = (ulonglong)local_9a8._4_4_ << 0x20;
                  iVar6 = 0;
                  if (uVar18 != uVar22) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_9b0,uVar22);
                    iVar6 = (int)local_9a8;
                    uVar18 = local_9a8._4_4_;
                  }
                  local_9a8 = CONCAT44(local_9a8._4_4_,uVar22 + iVar6);
                  if ((int)uVar18 < (int)(uVar22 + iVar6)) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_9b0);
                  }
                  if (uVar22 != 0) {
                    _guard_xfg_dispatch_icall_nop(local_9b0,local_848,(longlong)(int)uVar22 * 2);
                  }
                }
              }
              lVar13 = 0;
              if (bVar25) {
                if (lVar19 != 0) {
                  lVar13 = *(int *)((longlong)plVar20 + 0x34) * iVar23 + lVar19 +
                           (longlong)*(int *)((longlong)plVar20 + 0x44);
                }
                cVar5 = (**(code **)(*plVar20 + 0x2b8))
                                  (plVar20,(longlong)plVar11 +
                                           (longlong)*(int *)((longlong)plVar20 + 0x44) +
                                           (longlong)(*(int *)((longlong)plVar20 + 0x34) * iVar23),
                                   lVar13,0);
                if (cVar5 == '\0') goto LAB_141762525;
                cVar5 = (**(code **)(*plVar20 + 0x2b8))
                                  (plVar20,(longlong)plVar11 +
                                           (longlong)*(int *)((longlong)plVar20 + 0x44) +
                                           (longlong)(*(int *)((longlong)plVar20 + 0x34) * iVar23));
                if (cVar5 != '\0') {
                  local_8f0 = 0;
                  local_8e8 = 0;
                  psVar17 = &DAT_143f3eda8;
                  if (iVar7 != 0) {
                    psVar17 = local_9c0;
                  }
                  if ((psVar17 != (short *)0x0) && (*psVar17 != 0)) {
                    lVar13 = -1;
                    do {
                      lVar13 = lVar13 + 1;
                    } while (psVar17[lVar13] != 0);
                    uVar22 = (int)lVar13 + 1;
                    local_8e8 = (ulonglong)uVar22;
                    if (0 < (int)uVar22) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_8f0,0);
                    }
                    FGenericPlatformString::Memcpy(local_8f0,psVar17,(longlong)(int)uVar22 * 2);
                  }
                  local_9e8 = &local_8f0;
                  psVar17 = &DAT_143f3eda8;
                  if (local_9c4 != 0) {
                    psVar17 = local_9a0;
                  }
                  lVar13 = FConfigCacheIni::GetSectionPrivate(local_980,psVar17);
                  if (local_8f0 != 0) {
                    FMemory::Free();
                  }
                  plVar11 = local_998;
                  if (lVar13 != 0) {
                    psVar17 = &DAT_143f3eda8;
                    if ((int)local_9a8 != 0) {
                      psVar17 = local_9b0;
                    }
                    puVar9 = (undefined8 *)FName::FName(&local_950,psVar17);
                    TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
                    ::Remove(lVar13,*puVar9);
                    plVar11 = local_998;
                  }
                }
              }
              else {
LAB_141762525:
                iVar6 = *(int *)((longlong)plVar20 + 0x34) * iVar23;
                local_9d8 = 0;
                local_9e0 = 0;
                local_990 = (short *)0x0;
                local_988 = 0;
                local_9e8 = plVar11;
                (**(code **)(*plVar20 + 0x2d8))
                          (plVar20,&local_990,
                           (longlong)iVar6 + (longlong)*(int *)((longlong)plVar20 + 0x44) +
                           (longlong)plVar11,
                           (longlong)iVar6 + (longlong)*(int *)((longlong)plVar20 + 0x44) +
                           (longlong)plVar11);
                local_8e0 = 0;
                local_8d8 = 0;
                psVar17 = &DAT_143f3eda8;
                if (iVar7 != 0) {
                  psVar17 = local_9c0;
                }
                if ((psVar17 != (short *)0x0) && (*psVar17 != 0)) {
                  lVar13 = -1;
                  do {
                    lVar13 = lVar13 + 1;
                  } while (psVar17[lVar13] != 0);
                  uVar22 = (int)lVar13 + 1;
                  local_8d8 = (ulonglong)uVar22;
                  if (0 < (int)uVar22) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_8e0,0);
                  }
                  FGenericPlatformString::Memcpy(local_8e0,psVar17,(longlong)(int)uVar22 * 2);
                }
                local_9e8 = &local_8e0;
                psVar17 = &DAT_143f3eda8;
                if (local_9c4 != 0) {
                  psVar17 = local_9a0;
                }
                FConfigCacheIni::SetString(local_980,psVar17);
                if (local_8e0 != 0) {
                  FMemory::Free();
                }
                plVar11 = local_998;
                if (local_990 != (short *)0x0) {
                  FMemory::Free();
                  plVar11 = local_998;
                }
              }
              iVar6 = (int)plVar20[6];
              iVar23 = iVar23 + 1;
              psVar21 = local_9c0;
              psVar17 = local_9a0;
              uVar22 = (uint)local_970[0];
            } while (iVar23 < iVar6);
          }
        }
LAB_14176265c:
        param_1 = local_998;
        if (local_9c6 != '\0') {
          _Dst = (void *)((longlong)local_978 + (longlong)*(int *)((longlong)plVar20 + 0x44));
          pvVar2 = (void *)((longlong)*(int *)((longlong)plVar20 + 0x44) + (longlong)local_998);
          if (_Dst != pvVar2) {
            if ((*(uint *)(plVar20 + 7) >> 0x1e & 1) == 0) {
              (**(code **)(*plVar20 + 0x2e8))(plVar20,_Dst);
            }
            else {
              _guard_xfg_dispatch_icall_nop
                        (_Dst,pvVar2,
                         (longlong)(*(int *)((longlong)plVar20 + 0x34) * (int)plVar20[6]));
            }
          }
        }
        if (psVar21 != (short *)0x0) {
          FMemory::Free(psVar21);
        }
        cVar5 = local_9c8;
        if (local_9b0 != (short *)0x0) {
          FMemory::Free();
          cVar5 = local_9c8;
        }
      }
      plVar20 = (longlong *)plVar20[10];
    } while (plVar20 != (longlong *)0x0);
    local_958 = (longlong *)0x0;
  }
  if (local_980 == DAT_1468b6148) {
    local_990 = (short *)0x0;
    local_988 = 0;
    FConfigCacheIni::Flush(local_980,0,&local_990);
    if (local_990 != (short *)0x0) {
      FMemory::Free();
    }
  }
  if (psVar17 != (short *)0x0) {
    FMemory::Free(psVar17);
  }
  if (local_8b0 != (short *)0x0) {
    FMemory::Free(local_8b0);
  }
  return;
}



// FUNCTION 141762770 FUN_141762770 body=119 status=ok
// SIG undefined FUN_141762770(void)

undefined8 FUN_141762770(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar2 = FUN_1406da970(param_2,param_1);
  plVar3 = (longlong *)FUN_1406da970(uVar2,param_1 + 0xc);
  puVar1 = *(undefined1 **)plVar3[1];
  if (puVar1 + 1 <= (undefined1 *)((undefined8 *)plVar3[1])[1]) {
    *(undefined1 *)(param_1 + 0x18) = *puVar1;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 1;
    return 1;
  }
  (**(code **)(*plVar3 + 0x50))(plVar3,(undefined1 *)(param_1 + 0x18),1);
  return 1;
}



// FUNCTION 1417627f0 FUN_1417627f0 body=352 status=ok
// SIG undefined FUN_1417627f0(void)

undefined8 FUN_1417627f0(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1,4);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 1,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 1,4);
    }
  }
  else {
    param_1[1] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 2,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 2,4);
    }
  }
  else {
    param_1[2] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    param_1[3] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return 1;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 3,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_1 + 3,4);
  }
  return 1;
}



// FUNCTION 141762950 FUN_141762950 body=159 status=ok
// SIG undefined FUN_141762950(void)

undefined8 FUN_141762950(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  
  if (*(int *)(param_2 + 0x40) < 0x1d2) {
    return 0;
  }
  puVar1 = (undefined4 *)(param_1 + 0xc);
  plVar3 = (longlong *)FUN_1406da970(param_2,param_1);
  puVar2 = *(undefined4 **)plVar3[1];
  if (puVar2 + 1 <= (undefined4 *)((undefined8 *)plVar3[1])[1]) {
    *puVar1 = *puVar2;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
    return 1;
  }
  (**(code **)(*plVar3 + 0x50))(plVar3,puVar1,4);
  if ((*(byte *)((longlong)plVar3 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(plVar3,puVar1,4);
  }
  return 1;
}



// FUNCTION 1417629f0 Serialize body=254 status=ok
// SIG undefined Serialize(void)

void FStringOutputDevice::Serialize(longlong *param_1,void *param_2)

{
  void *_Dst;
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong local_28 [2];
  
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (*(short *)((longlong)param_2 + lVar4 * 2) != 0);
  iVar3 = (int)lVar4;
  if (iVar3 != 0) {
    iVar1 = (int)param_1[3];
    iVar2 = (uint)(iVar1 == 0) + iVar1 + iVar3;
    *(int *)(param_1 + 3) = iVar2;
    if (*(int *)((longlong)param_1 + 0x1c) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 2,iVar1);
    }
    _Dst = (void *)(param_1[2] + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(_Dst,param_2,(longlong)iVar3 * 2);
    *(undefined2 *)((longlong)iVar3 * 2 + (longlong)_Dst) = 0;
  }
  if (*(char *)((longlong)param_1 + 9) != '\0') {
    local_28[0] = 0;
    local_28[1] = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],&DAT_143f600e4,6);
    (**(code **)(*param_1 + 0x40))(param_1,local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141762af0 FUN_141762af0 body=45 status=ok
// SIG undefined FUN_141762af0(void)

void FUN_141762af0(longlong param_1,longlong *param_2)

{
  FUN_141763bf0();
                    /* WARNING: Could not recover jumptable at 0x000141762b19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x70);
  return;
}



// FUNCTION 141762b20 FUN_141762b20 body=417 status=ok
// SIG undefined FUN_141762b20(void)

void FUN_141762b20(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  char local_res8 [8];
  undefined1 local_res10 [8];
  
  FUN_141763bf0();
  plVar2 = (longlong *)param_2[1];
  local_res10[0] = *(undefined1 *)(param_1 + 0x34);
  if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res10,1);
  }
  else {
    local_res10[0] = *(undefined1 *)*plVar2;
    *plVar2 = *plVar2 + 1;
  }
  local_res8[0] = '\0';
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    plVar2 = (longlong *)param_2[1];
    if ((char *)plVar2[1] < (char *)*plVar2 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
    }
    else {
      local_res8[0] = *(char *)*plVar2;
      *plVar2 = *plVar2 + 1;
    }
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) != 0) {
      return;
    }
    UBoolProperty::SetBoolSize(param_1,local_res10[0],local_res8[0] != '\0',0);
    return;
  }
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if (((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) && ((*(byte *)(param_2 + 5) & 2) != 0)) {
      local_res8[0] = *(char *)(param_1 + 0x73) == -1;
      goto LAB_141762c78;
    }
  }
  local_res8[0] = false;
LAB_141762c78:
  plVar2 = (longlong *)param_2[1];
  if ((ulonglong)plVar2[1] < *plVar2 + 1U) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
    return;
  }
  *plVar2 = *plVar2 + 1;
  return;
}



// FUNCTION 141762cd0 FUN_141762cd0 body=63 status=ok
// SIG undefined FUN_141762cd0(void)

void FUN_141762cd0(longlong param_1,longlong *param_2)

{
  FUN_141763bf0();
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    (**(code **)(*param_2 + 0x70))(param_2);
  }
  return;
}



// FUNCTION 141762d10 FUN_141762d10 body=3141 status=ok
// SIG undefined FUN_141762d10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141762d10(longlong param_1,longlong *param_2)

{
  longlong **pplVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong *plVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  void **ppvVar20;
  uint *puVar21;
  int iVar22;
  longlong *plVar23;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  undefined8 local_1e0;
  void **ppvStack_1d8;
  undefined4 local_1d0;
  int iStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  int local_1c0 [2];
  void *local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  uint *puStack_1a0;
  undefined8 uStack_198;
  int iStack_190;
  int iStack_18c;
  undefined8 uStack_188;
  undefined8 local_180;
  longlong *local_178;
  undefined8 uStack_170;
  uint *local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  longlong *local_148;
  undefined2 local_140;
  undefined1 local_138 [16];
  longlong *local_128;
  undefined8 uStack_120;
  uint *local_118;
  undefined8 uStack_110;
  undefined1 local_108 [12];
  undefined4 uStack_fc;
  longlong *local_f8;
  undefined2 local_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  uint *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong *local_a8;
  undefined8 uStack_a0;
  void **local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0068);
  iVar22 = 0;
  uStack_198 = (uint *)CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
  uStack_c0 = (longlong *)CONCAT44(uStack_c0._4_4_,(undefined4)uStack_c0);
  if ((*(byte *)(param_2 + 5) & 2) != 0) {
    local_1a8 = (longlong *)(param_1 + 0x28);
    iVar16 = *(int *)(param_1 + 0x50);
    ppvStack_1d8 = (void **)(param_1 + 0x38);
    local_1e0 = (longlong *)0x100000000;
    iStack_1cc = 0;
    iStack_1c8 = 0;
    if (iVar16 != 0) {
      puVar21 = *(uint **)(param_1 + 0x48);
      if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
        puVar21 = (uint *)ppvStack_1d8;
      }
      uVar14 = *puVar21;
      iVar15 = iVar22;
      iStack_1c8 = iVar22;
      while (uVar14 == 0) {
        iStack_1c8 = iStack_1c8 + 0x20;
        local_1e0._4_4_ = (undefined4)((ulonglong)local_1e0 >> 0x20);
        local_1e0 = (longlong *)CONCAT44(local_1e0._4_4_,iVar15 + 1);
        if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar15) goto LAB_141762e14;
        uVar14 = puVar21[(longlong)iVar15 + 1];
        iVar15 = iVar15 + 1;
      }
      uVar14 = -uVar14 & uVar14;
      iVar15 = 0x1f;
      if (uVar14 != 0) {
        for (; uVar14 >> iVar15 == 0; iVar15 = iVar15 + -1) {
        }
      }
      local_1e0 = (longlong *)CONCAT44(uVar14,(undefined4)local_1e0);
      if (uVar14 == 0) {
        iVar15 = 0x20;
      }
      else {
        iVar15 = 0x1f - iVar15;
      }
      iStack_1cc = (iStack_1c8 - iVar15) + 0x1f;
      if (iVar16 < iStack_1cc) {
LAB_141762e14:
        iStack_1cc = iVar16;
      }
    }
    local_1d0 = 0xffffffff;
    uStack_110 = CONCAT44(iStack_1cc,0xffffffff);
    auVar8._8_4_ = iStack_1c8;
    auVar8._0_8_ = uStack_110;
    auVar8._12_4_ = uStack_1c4;
    uStack_c0._0_4_ = SUB84(local_1a8,0);
    uStack_c0._4_4_ = (undefined4)((ulonglong)local_1a8 >> 0x20);
    iStack_190 = 0xffffffff;
    iStack_18c = iStack_1cc;
    uStack_188 = auVar8._8_8_;
    puStack_1a0 = (uint *)local_1e0;
    local_f0 = 0;
    uStack_120 = local_1e0;
    uStack_c8 = uStack_188;
    local_108._8_4_ = (undefined4)uStack_c0;
    local_108._0_8_ = uStack_188;
    uStack_fc = uStack_c0._4_4_;
    iVar16 = iStack_1cc;
    local_128 = local_1a8;
    local_118 = (uint *)ppvStack_1d8;
    local_f8 = local_1a8;
    uStack_198 = (uint *)ppvStack_1d8;
    uStack_c0 = local_1a8;
    if (iStack_1cc < *(int *)(param_1 + 0x50)) {
      do {
        cVar13 = FWeakObjectPtr::IsValid((longlong)iVar16 * 0x60 + *local_128);
        if (cVar13 == '\0') {
          TSet<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
          ::Remove(stack0xffffffffffffff00,iVar16);
          local_f0 = CONCAT11(local_f0._1_1_,1);
        }
        uStack_110 = CONCAT44(uStack_110._4_4_,(uint)uStack_110 & ~uStack_120._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_120);
        iVar16 = uStack_110._4_4_;
      } while (uStack_110._4_4_ < (int)local_118[6]);
      if (((char)local_f0 != '\0') && (local_f0._1_1_ != '\0')) {
        TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_f8,(int)local_f8[1] - *(int *)((longlong)local_f8 + 0x34),1);
      }
    }
  }
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    FUN_14174df10(param_2,param_1 + 0x28);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      if (*(longlong *)(param_1 + 0x68) != 0) {
        uVar17 = FMemory::Realloc(*(longlong *)(param_1 + 0x68),0,0);
        *(undefined8 *)(param_1 + 0x68) = uVar17;
      }
      *(undefined4 *)(param_1 + 0x70) = 0;
      TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(param_1 + 0x28,*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x5c),0);
    }
    FUN_1415f7820(param_2,param_1 + 0x78);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      if (*(longlong *)(param_1 + 0xb8) != 0) {
        uVar17 = FMemory::Realloc(*(longlong *)(param_1 + 0xb8),0,0);
        *(undefined8 *)(param_1 + 0xb8) = uVar17;
      }
      *(undefined4 *)(param_1 + 0xc0) = 0;
      TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
      ::ConditionalRehash(param_1 + 0x78,*(int *)(param_1 + 0x80) - *(int *)(param_1 + 0xac),0);
    }
    operator<<(param_2,param_1 + 200);
  }
  else {
    local_a8 = (longlong *)0x0;
    uStack_a0 = (longlong *)0x0;
    local_88 = ZEXT816(0);
    local_78 = (longlong *)0xffffffff;
    local_68 = 0;
    uStack_60 = (ulonglong)uStack_60._4_4_ << 0x20;
    FUN_14174df10(param_2,&local_a8);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      if (local_68 != 0) {
        local_68 = FMemory::Realloc(local_68,0,0);
      }
      uStack_60 = uStack_60 & 0xffffffff00000000;
      TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(&local_a8,(int)uStack_a0 - local_78._4_4_,0);
    }
    lVar18 = (**(code **)(*param_2 + 0x88))(param_2);
    if (((lVar18 == 0) || ((*(uint *)(param_1 + 8) >> 0x15 & 1) == 0)) &&
       (pplVar1 = (longlong **)(param_1 + 0x28), pplVar1 != &local_a8)) {
      plVar23 = *pplVar1;
      uVar17 = *(undefined8 *)(param_1 + 0x30);
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      uVar4 = *(undefined8 *)(param_1 + 0x40);
      auVar8 = *(undefined1 (*) [16])(param_1 + 0x48);
      uVar5 = *(undefined8 *)(param_1 + 0x58);
      uVar6 = *(ulonglong *)(param_1 + 0x60);
      lVar18 = *(longlong *)(param_1 + 0x68);
      uVar7 = *(ulonglong *)(param_1 + 0x70);
      *pplVar1 = local_a8;
      *(longlong **)(param_1 + 0x30) = uStack_a0;
      *(void ***)(param_1 + 0x38) = local_98;
      *(undefined8 *)(param_1 + 0x40) = uStack_90;
      *(undefined8 *)(param_1 + 0x48) = local_88._0_8_;
      *(undefined8 *)(param_1 + 0x50) = local_88._8_8_;
      *(longlong **)(param_1 + 0x58) = local_78;
      *(ulonglong *)(param_1 + 0x60) = uStack_70;
      *(undefined4 *)(param_1 + 0x68) = (undefined4)local_68;
      *(undefined4 *)(param_1 + 0x6c) = local_68._4_4_;
      *(undefined4 *)(param_1 + 0x70) = (undefined4)uStack_60;
      *(uint *)(param_1 + 0x74) = uStack_60._4_4_;
      local_a8 = plVar23;
      uStack_a0 = (longlong *)uVar17;
      local_98 = (void **)uVar3;
      uStack_90 = uVar4;
      local_88 = auVar8;
      local_78 = (longlong *)uVar5;
      uStack_70 = uVar6;
      local_68 = lVar18;
      uStack_60 = uVar7;
    }
    uStack_60 = uStack_60 & 0xffffffff00000000;
    if (local_68 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(&local_a8,0);
    if (local_88._0_8_ != 0) {
      FMemory::Free();
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free();
    }
    iVar16 = FArchive::CustomVer(param_2,&DAT_1464b0068);
    if (2 < iVar16) {
      local_a8 = (longlong *)0x0;
      uStack_a0 = (longlong *)0x0;
      local_88 = ZEXT816(0);
      local_78 = (longlong *)0xffffffff;
      local_68 = 0;
      uStack_60 = uStack_60 & 0xffffffff00000000;
      FUN_1415f7820(param_2,&local_a8);
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        if (local_68 != 0) {
          local_68 = FMemory::Realloc(local_68,0,0);
        }
        uStack_60 = uStack_60 & 0xffffffff00000000;
        TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
        ::ConditionalRehash(&local_a8,(int)uStack_a0 - local_78._4_4_,0);
      }
      lVar18 = (**(code **)(*param_2 + 0x88))(param_2);
      if (((lVar18 == 0) || ((*(uint *)(param_1 + 8) >> 0x15 & 1) == 0)) &&
         (pplVar1 = (longlong **)(param_1 + 0x78), pplVar1 != &local_a8)) {
        plVar23 = *pplVar1;
        uVar17 = *(undefined8 *)(param_1 + 0x80);
        uVar3 = *(undefined8 *)(param_1 + 0x88);
        uVar4 = *(undefined8 *)(param_1 + 0x90);
        auVar8 = *(undefined1 (*) [16])(param_1 + 0x98);
        uVar5 = *(undefined8 *)(param_1 + 0xa8);
        uVar6 = *(ulonglong *)(param_1 + 0xb0);
        lVar18 = *(longlong *)(param_1 + 0xb8);
        uVar7 = *(ulonglong *)(param_1 + 0xc0);
        *pplVar1 = local_a8;
        *(longlong **)(param_1 + 0x80) = uStack_a0;
        *(void ***)(param_1 + 0x88) = local_98;
        *(undefined8 *)(param_1 + 0x90) = uStack_90;
        *(undefined8 *)(param_1 + 0x98) = local_88._0_8_;
        *(undefined8 *)(param_1 + 0xa0) = local_88._8_8_;
        *(longlong **)(param_1 + 0xa8) = local_78;
        *(ulonglong *)(param_1 + 0xb0) = uStack_70;
        *(undefined4 *)(param_1 + 0xb8) = (undefined4)local_68;
        *(undefined4 *)(param_1 + 0xbc) = local_68._4_4_;
        *(undefined4 *)(param_1 + 0xc0) = (undefined4)uStack_60;
        *(uint *)(param_1 + 0xc4) = uStack_60._4_4_;
        local_a8 = plVar23;
        uStack_a0 = (longlong *)uVar17;
        local_98 = (void **)uVar3;
        uStack_90 = uVar4;
        local_88 = auVar8;
        local_78 = (longlong *)uVar5;
        uStack_70 = uVar6;
        local_68 = lVar18;
        uStack_60 = uVar7;
      }
      uStack_60 = uStack_60 & 0xffffffff00000000;
      if (local_68 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(&local_a8,0);
      if (local_88._0_8_ != 0) {
        FMemory::Free();
      }
      if (local_a8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    if (0x13 < *(int *)((longlong)param_2 + 0x44)) {
      iVar16 = FArchive::CustomVer(param_2,&DAT_1464b0068);
      if (0x17 < iVar16) {
        local_a8 = (longlong *)0x0;
        uStack_a0 = (longlong *)0x0;
        local_88 = ZEXT816(0);
        local_78 = (longlong *)0xffffffff;
        local_68 = 0;
        uStack_60 = uStack_60 & 0xffffffff00000000;
        operator<<(param_2,&local_a8);
        lVar18 = (**(code **)(*param_2 + 0x88))(param_2);
        if (((lVar18 == 0) || ((*(uint *)(param_1 + 8) >> 0x15 & 1) == 0)) &&
           (pplVar1 = (longlong **)(param_1 + 200), pplVar1 != &local_a8)) {
          plVar23 = *pplVar1;
          uVar17 = *(undefined8 *)(param_1 + 0xd0);
          uVar3 = *(undefined8 *)(param_1 + 0xd8);
          uVar4 = *(undefined8 *)(param_1 + 0xe0);
          auVar8 = *(undefined1 (*) [16])(param_1 + 0xe8);
          uVar5 = *(undefined8 *)(param_1 + 0xf8);
          uVar6 = *(ulonglong *)(param_1 + 0x100);
          lVar18 = *(longlong *)(param_1 + 0x108);
          uVar7 = *(ulonglong *)(param_1 + 0x110);
          *pplVar1 = local_a8;
          *(longlong **)(param_1 + 0xd0) = uStack_a0;
          *(void ***)(param_1 + 0xd8) = local_98;
          *(undefined8 *)(param_1 + 0xe0) = uStack_90;
          *(undefined8 *)(param_1 + 0xe8) = local_88._0_8_;
          *(undefined8 *)(param_1 + 0xf0) = local_88._8_8_;
          *(longlong **)(param_1 + 0xf8) = local_78;
          *(ulonglong *)(param_1 + 0x100) = uStack_70;
          *(undefined4 *)(param_1 + 0x108) = (undefined4)local_68;
          *(undefined4 *)(param_1 + 0x10c) = local_68._4_4_;
          *(undefined4 *)(param_1 + 0x110) = (undefined4)uStack_60;
          *(uint *)(param_1 + 0x114) = uStack_60._4_4_;
          local_a8 = plVar23;
          uStack_a0 = (longlong *)uVar17;
          local_98 = (void **)uVar3;
          uStack_90 = uVar4;
          local_88 = auVar8;
          local_78 = (longlong *)uVar5;
          uStack_70 = uVar6;
          local_68 = lVar18;
          uStack_60 = uVar7;
        }
        uStack_60 = uStack_60 & 0xffffffff00000000;
        if (local_68 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_a8);
      }
    }
    UMetaData::InitializeRedirectMap();
    local_a8 = (longlong *)(param_1 + 0x28);
    iVar16 = *(int *)(param_1 + 0x50);
    ppvStack_1d8 = (void **)(param_1 + 0x38);
    local_1e0 = (longlong *)0x100000000;
    iStack_1cc = 0;
    iStack_1c8 = 0;
    if (iVar16 != 0) {
      ppvVar20 = *(void ***)(param_1 + 0x48);
      if (*(void ***)(param_1 + 0x48) == (void **)0x0) {
        ppvVar20 = ppvStack_1d8;
      }
      uVar14 = *(uint *)ppvVar20;
      iVar15 = iVar22;
      iStack_1c8 = iVar22;
      while (uVar14 == 0) {
        iStack_1c8 = iStack_1c8 + 0x20;
        local_1e0._4_4_ = (undefined4)((ulonglong)local_1e0 >> 0x20);
        local_1e0 = (longlong *)CONCAT44(local_1e0._4_4_,iVar15 + 1);
        if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar15) goto LAB_141763424;
        uVar14 = *(uint *)((longlong)ppvVar20 + ((longlong)iVar15 + 1) * 4);
        iVar15 = iVar15 + 1;
      }
      uVar14 = -uVar14 & uVar14;
      iVar15 = 0x1f;
      if (uVar14 != 0) {
        for (; uVar14 >> iVar15 == 0; iVar15 = iVar15 + -1) {
        }
      }
      local_1e0 = (longlong *)CONCAT44(uVar14,(undefined4)local_1e0);
      if (uVar14 == 0) {
        iVar15 = 0x20;
      }
      else {
        iVar15 = 0x1f - iVar15;
      }
      iStack_1cc = (iStack_1c8 - iVar15) + 0x1f;
      if (iVar16 < iStack_1cc) {
LAB_141763424:
        iStack_1cc = iVar16;
      }
    }
    local_1d0 = 0xffffffff;
    uStack_90 = CONCAT44(iStack_1cc,0xffffffff);
    auVar9._8_4_ = iStack_1c8;
    auVar9._0_8_ = uStack_90;
    auVar9._12_4_ = uStack_1c4;
    uStack_c0._0_4_ = SUB84(local_a8,0);
    uStack_c0._4_4_ = (undefined4)((ulonglong)local_a8 >> 0x20);
    iStack_18c = iStack_1cc;
    uStack_188 = auVar9._8_8_;
    uStack_70 = uStack_70 & 0xffffffffffff0000;
    uStack_a0 = local_1e0;
    local_88._8_4_ = (undefined4)uStack_c0;
    local_88._0_8_ = uStack_188;
    local_88._12_4_ = uStack_c0._4_4_;
    iVar16 = iStack_1cc;
    local_98 = ppvStack_1d8;
    local_78 = local_a8;
    uStack_c0 = local_a8;
    if (iStack_1cc < *(int *)(param_1 + 0x50)) {
      do {
        local_1a8 = (longlong *)0x100000000;
        uStack_198._4_4_ = 0;
        iStack_190 = 0;
        plVar23 = (longlong *)(*local_a8 + 8 + (longlong)iVar16 * 0x60);
        iVar16 = (int)plVar23[5];
        puStack_1a0 = (uint *)(plVar23 + 2);
        if (iVar16 != 0) {
          puVar21 = (uint *)plVar23[4];
          if ((uint *)plVar23[4] == (uint *)0x0) {
            puVar21 = puStack_1a0;
          }
          uVar14 = *puVar21;
          iVar15 = iVar22;
          iStack_190 = iVar22;
          while (uVar14 == 0) {
            iStack_190 = iStack_190 + 0x20;
            uVar6 = (ulonglong)local_1a8 >> 0x20;
            local_1a8 = (longlong *)CONCAT44((int)uVar6,iVar15 + 1);
            if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar15)
            goto LAB_141763574;
            uVar14 = puVar21[(longlong)iVar15 + 1];
            iVar15 = iVar15 + 1;
          }
          uVar14 = -uVar14 & uVar14;
          iVar15 = 0x1f;
          if (uVar14 != 0) {
            for (; uVar14 >> iVar15 == 0; iVar15 = iVar15 + -1) {
            }
          }
          local_1a8 = (longlong *)CONCAT44(uVar14,SUB84(local_1a8,0));
          if (uVar14 == 0) {
            iVar15 = 0x20;
          }
          else {
            iVar15 = 0x1f - iVar15;
          }
          uStack_198._4_4_ = (iStack_190 - iVar15) + 0x1f;
          if (iVar16 < uStack_198._4_4_) {
LAB_141763574:
            uStack_198._4_4_ = iVar16;
          }
        }
        uStack_198._0_4_ = 0xffffffff;
        uStack_160 = CONCAT44(uStack_198._4_4_,0xffffffff);
        auVar10._8_4_ = iStack_190;
        auVar10._0_8_ = uStack_160;
        auVar10._12_4_ = iStack_18c;
        uStack_e0 = local_1a8;
        local_140 = 0;
        local_108._8_4_ = SUB84(plVar23,0);
        uStack_fc = (undefined4)((ulonglong)plVar23 >> 0x20);
        uStack_c8 = auVar10._8_8_;
        local_158._8_4_ = local_108._8_4_;
        local_158._0_8_ = uStack_c8;
        local_158._12_4_ = uStack_fc;
        uStack_170 = local_1a8;
        local_108._0_8_ = uStack_c8;
        local_178 = plVar23;
        local_168 = puStack_1a0;
        local_148 = plVar23;
        local_e8 = plVar23;
        puStack_d8 = puStack_1a0;
        uStack_d0 = uStack_160;
        if (uStack_198._4_4_ < iVar16) {
          local_180 = 0;
          iVar16 = uStack_198._4_4_;
          do {
            plVar12 = local_178;
            lVar18 = (longlong)iVar16 * 0x20;
            local_b8 = *(undefined8 *)(lVar18 + *local_178);
            TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
            ::FindId(&DAT_1464b4ef0,local_1c0);
            if ((local_1c0[0] == -1) ||
               (lVar19 = DAT_1464b4ef0 + (longlong)local_1c0[0] * 0x18, lVar19 == 0)) {
              local_1e8 = 0;
            }
            else {
              local_1e8 = *(longlong *)(lVar19 + 8);
            }
            if (local_1e8 != 0) {
              local_1b8 = (void *)0x0;
              local_1b0 = *(int *)(lVar18 + 0x10 + *plVar12);
              lVar19 = (longlong)local_1b0;
              pvVar2 = *(void **)(lVar18 + 8 + *plVar12);
              if (local_1b0 == 0) {
                local_1ac = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1b8,local_1b0,0);
                _guard_xfg_dispatch_icall_nop(local_1b8,pvVar2,lVar19 * 2);
              }
              TSet<TTuple<FName,TArray<FName,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,FDefaultAllocator>,0>,FDefaultSetAllocator>
              ::Remove(local_158._8_8_,iVar16);
              local_1e0 = &local_1e8;
              local_140 = CONCAT11(local_140._1_1_,1);
              ppvStack_1d8 = &local_1b8;
              FUN_14090fe80(plVar23,local_138,&local_1e0,0);
              if (local_1b8 != (void *)0x0) {
                FMemory::Free();
              }
            }
            uStack_160 = CONCAT44(uStack_160._4_4_,(uint)uStack_160 & ~uStack_170._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_170);
            iVar16 = uStack_160._4_4_;
          } while (uStack_160._4_4_ < (int)local_168[6]);
          if (((char)local_140 != '\0') && (local_140._1_1_ != '\0')) {
            TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
            ::ConditionalRehash(local_148,(int)local_148[1] - *(int *)((longlong)local_148 + 0x34),1
                               );
          }
        }
        uStack_90 = CONCAT44(uStack_90._4_4_,(uint)uStack_90 & ~uStack_a0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
        iVar16 = uStack_90._4_4_;
      } while (uStack_90._4_4_ < (int)*(uint *)(local_98 + 3));
      if (((char)uStack_70 != '\0') && (uStack_70._1_1_ != '\0')) {
        TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
      }
    }
    plVar23 = (longlong *)(param_1 + 0x78);
    puStack_1a0 = (uint *)(param_1 + 0x88);
    local_1a8 = (longlong *)0x100000000;
    uStack_198._0_4_ = 0xffffffff;
    uStack_198._4_4_ = 0;
    iStack_190 = 0;
    if (*(int *)(param_1 + 0xa0) != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1a8);
    }
    uStack_160 = CONCAT44(uStack_198._4_4_,(undefined4)uStack_198);
    auVar11._8_4_ = iStack_190;
    auVar11._0_8_ = uStack_160;
    auVar11._12_4_ = iStack_18c;
    stack0xffffffffffffff00 = plVar23;
    auVar8 = _local_108;
    uStack_c8 = auVar11._8_8_;
    uStack_e0 = local_1a8;
    puStack_d8 = puStack_1a0;
    local_140 = 0;
    local_108._8_4_ = SUB84(plVar23,0);
    uStack_fc = (undefined4)((ulonglong)plVar23 >> 0x20);
    local_168 = puStack_1a0;
    uStack_170 = local_1a8;
    local_158._8_4_ = local_108._8_4_;
    local_158._0_8_ = uStack_c8;
    local_158._12_4_ = uStack_fc;
    if (uStack_198._4_4_ < *(int *)((longlong)puStack_1a0 + 0x18)) {
      local_180 = 0;
      iVar22 = uStack_198._4_4_;
      local_178 = plVar23;
      local_148 = plVar23;
      _local_108 = auVar8;
      local_e8 = plVar23;
      uStack_d0 = uStack_160;
      do {
        plVar12 = local_178;
        lVar18 = (longlong)iVar22 * 0x20;
        local_b8 = *(undefined8 *)(lVar18 + *local_178);
        TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
        FindId(&DAT_1464b4ef0,local_1c0);
        if ((local_1c0[0] == -1) ||
           (lVar19 = DAT_1464b4ef0 + (longlong)local_1c0[0] * 0x18, lVar19 == 0)) {
          local_1e8 = 0;
        }
        else {
          local_1e8 = *(longlong *)(lVar19 + 8);
        }
        if (local_1e8 != 0) {
          local_1b8 = (void *)0x0;
          local_1b0 = *(int *)(lVar18 + 0x10 + *plVar12);
          lVar19 = (longlong)local_1b0;
          pvVar2 = *(void **)(lVar18 + 8 + *plVar12);
          if (local_1b0 == 0) {
            local_1ac = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1b8,local_1b0,0);
            _guard_xfg_dispatch_icall_nop(local_1b8,pvVar2,lVar19 * 2);
          }
          TSet<TTuple<FName,TArray<FName,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,FDefaultAllocator>,0>,FDefaultSetAllocator>
          ::Remove(local_158._8_8_,iVar22);
          local_1e0 = &local_1e8;
          local_140 = CONCAT11(local_140._1_1_,1);
          ppvStack_1d8 = &local_1b8;
          FUN_14090fe80(plVar23,local_138,&local_1e0,0);
          if (local_1b8 != (void *)0x0) {
            FMemory::Free();
          }
        }
        uStack_160 = CONCAT44(uStack_160._4_4_,(uint)uStack_160 & ~uStack_170._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_170);
        iVar22 = uStack_160._4_4_;
      } while (uStack_160._4_4_ < *(int *)((longlong)local_168 + 0x18));
      if (((char)local_140 != '\0') && (local_140._1_1_ != '\0')) {
        TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_148,(int)local_148[1] - *(int *)((longlong)local_148 + 0x34),1);
      }
    }
  }
  return;
}



// FUNCTION 141763960 FUN_141763960 body=268 status=ok
// SIG undefined FUN_141763960(void)

void FUN_141763960(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res18 = *(undefined8 *)(param_1 + 0x20);
  local_res8 = *(longlong *)(param_1 + 0x10);
  local_res10 = *(undefined8 *)(param_1 + 0x18);
  if ((*(uint *)(local_res8 + 8) >> 10 & 1) != 0) {
    (**(code **)(*param_2 + 0x70))(param_2);
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      if ((*(longlong *)(local_res8 + 0xf8) != 0) && (0 < *(int *)(local_res8 + 0x40))) {
        (**(code **)(*param_2 + 0x70))(param_2);
      }
    }
  }
  if (((*(byte *)(param_2 + 5) & 3) == 0) && ((*(byte *)((longlong)param_2 + 0x2a) & 8) == 0)) {
    (**(code **)(*param_2 + 0x40))(param_2,&local_res10);
    if (-1 < *(char *)((longlong)param_2 + 0x29)) {
      (**(code **)(*param_2 + 0x30))(param_2,&local_res18);
    }
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x30))(param_2,&local_res8);
    }
  }
  lVar2 = FUN_14171bfe0();
  if (local_res8 != lVar2) {
    FUN_1417645f0(param_1,param_2);
  }
  FUN_141740770(param_1,param_2);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    LOCK();
    DAT_1464b56f4 = DAT_1464b56f4 + 1;
    UNLOCK();
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x44);
  lVar2 = (longlong)(*(int *)(*(longlong *)(param_1 + 0x10) + 0x40) + -1 + iVar1 & -iVar1);
  (**(code **)(*param_2 + 0x78))(param_2,lVar2,lVar2);
  return;
}



// FUNCTION 141763a70 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  FUN_141763960(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 141763ae0 FUN_141763ae0 body=160 status=ok
// SIG undefined FUN_141763ae0(void)

void FUN_141763ae0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  longlong local_res10;
  
  FUN_141763bf0();
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x70);
  if ((((*(byte *)(param_2 + 5) & 1) != 0) || ((*(byte *)((longlong)param_2 + 0x2a) & 8) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 0x70), lVar1 != 0)) {
    lVar3 = ULinkerPlaceholderClass::GetPrivateStaticClass();
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
      local_res10 = param_1;
      FUN_14174ab50(lVar1 + 0x2c8,local_res8,&local_res10,0);
    }
  }
  return;
}



// FUNCTION 141763b80 FUN_141763b80 body=45 status=ok
// SIG undefined FUN_141763b80(void)

void FUN_141763b80(longlong param_1,longlong *param_2)

{
  FUN_141763960();
                    /* WARNING: Could not recover jumptable at 0x000141763ba9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x28);
  return;
}



// FUNCTION 141763bb0 Serialize body=55 status=ok
// SIG undefined Serialize(void)

void UPackage::Serialize(longlong param_1,longlong param_2)

{
  FUN_141763960();
  if (((*(byte *)(param_2 + 0x2a) & 0x20) != 0) && (*(longlong *)(param_1 + 0x60) != 0)) {
    FLinker::Serialize(*(longlong *)(param_1 + 0x60),param_2);
  }
  return;
}



// FUNCTION 141763bf0 FUN_141763bf0 body=285 status=ok
// SIG undefined FUN_141763bf0(void)

void FUN_141763bf0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  ulonglong local_res8;
  
  FUN_1417233a0();
  local_res8 = *(ulonglong *)(param_1 + 0x38) & 0xfff7ffefbffffdff;
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x30,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x30,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  plVar2 = (longlong *)param_2[1];
  if ((ulonglong *)plVar2[1] < (ulonglong *)*plVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,&local_res8,8);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,&local_res8,8);
    }
  }
  else {
    local_res8 = *(ulonglong *)*plVar2;
    *plVar2 = *plVar2 + 8;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(ulonglong *)(param_1 + 0x38) = *(ulonglong *)(param_1 + 0x38) & 0x8001040000200;
    *(ulonglong *)(param_1 + 0x38) =
         *(ulonglong *)(param_1 + 0x38) | local_res8 & 0xfff7ffefbffffdff;
  }
  (**(code **)(*param_2 + 0x40))(param_2,param_1 + 0x48);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return;
}



// FUNCTION 141763d10 FUN_141763d10 body=168 status=ok
// SIG undefined FUN_141763d10(void)

undefined8 FUN_141763d10(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 local_res10 [3];
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  if (*param_2 == 6) {
    local_res10[0] = 0;
    (**(code **)(*param_3 + 0x40))(param_3,local_res10);
    plVar1 = (longlong *)FName::ToString(local_res10,local_28);
  }
  else {
    local_res10[0] = 0xd;
    if (*param_2 != 0xd) {
      return 0;
    }
    local_28[0] = 0;
    local_28[1] = 0;
    FUN_14158ce90(param_3,local_28);
    plVar1 = local_28;
  }
  puVar2 = (undefined8 *)FPrimaryAssetId::FPrimaryAssetId(local_18,plVar1);
  *param_1 = *puVar2;
  param_1[1] = puVar2[1];
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 141763dc0 FUN_141763dc0 body=177 status=ok
// SIG undefined FUN_141763dc0(void)

undefined8 FUN_141763dc0(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  undefined2 *puVar1;
  undefined8 local_res10 [3];
  undefined2 *local_18;
  undefined8 local_10;
  
  if (*param_2 == 6) {
    local_res10[0] = 0;
    (**(code **)(*param_3 + 0x40))(param_3,local_res10);
    *param_1 = local_res10[0];
    return 1;
  }
  local_res10[0] = 0xd;
  if (*param_2 == 0xd) {
    local_18 = (undefined2 *)0x0;
    local_10 = 0;
    FUN_14158ce90(param_3,&local_18);
    puVar1 = &DAT_143f3eda8;
    if ((int)local_10 != 0) {
      puVar1 = local_18;
    }
    FName::FName(local_res10,puVar1,1);
    *param_1 = local_res10[0];
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    return 1;
  }
  return 0;
}



// FUNCTION 141763e80 FUN_141763e80 body=1561 status=ok
// SIG undefined FUN_141763e80(void)

void FUN_141763e80(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  int *piVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 local_res10;
  int local_res18 [2];
  undefined8 local_res20;
  longlong *local_100;
  longlong *local_f8;
  uint local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8 [3];
  longlong *local_c0;
  int local_a0 [2];
  undefined8 local_98;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  
  local_res20 = param_4;
  (**(code **)(*param_2 + 0x70))(param_2,*(undefined8 *)(param_1 + 0x70));
  plVar4 = *(longlong **)(param_1 + 0x70);
  plVar5 = (longlong *)param_2[1];
  local_res18[0] = (int)param_3[1];
  uVar2 = *(uint *)((longlong)plVar4 + 0x34);
  uVar15 = (ulonglong)(int)uVar2;
  local_100 = plVar4;
  local_f8 = param_3;
  local_f0 = uVar2;
  if ((int *)plVar5[1] < (int *)*plVar5 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res18,4);
    }
  }
  else {
    local_res18[0] = *(int *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  iVar11 = local_res18[0];
  uVar14 = uVar2;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    if ((*(byte *)((longlong)param_2 + 0x2b) & 0x10) == 0) {
      uVar3 = *(uint *)(param_3 + 1);
      uVar16 = (ulonglong)uVar3;
      if (uVar3 == 0) {
        if (local_res18[0] == 0) goto LAB_141764001;
      }
      else if ((plVar4[7] & 0x1040000000U) == 0) {
        if (uVar3 == 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = *param_3;
        }
        param_4 = local_res20;
        if (0 < (int)uVar3) {
          do {
            if ((~(byte)((ulonglong)plVar4[7] >> 0x24) & 1) != 0) {
              (**(code **)(*plVar4 + 0x328))(plVar4,lVar13);
            }
            lVar13 = lVar13 + uVar15;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
          uVar15 = (ulonglong)uVar2;
          param_4 = local_res20;
        }
      }
      uVar14 = (uint)uVar15;
      *(undefined4 *)(param_3 + 1) = 0;
      if (iVar11 != *(int *)((longlong)param_3 + 0xc)) {
        FScriptArray::ResizeTo(param_3,iVar11,uVar15 & 0xffffffff);
      }
      if (iVar11 != 0) goto LAB_141763ff7;
    }
    else {
      iVar11 = (int)param_3[1];
      if (iVar11 < local_res18[0]) {
        iVar11 = local_res18[0] - iVar11;
LAB_141763ff7:
        FUN_14174ff60(&local_100,iVar11);
      }
      else if (local_res18[0] < iVar11) {
        FScriptArrayHelper::RemoveValues(&local_100,local_res18[0],iVar11 - local_res18[0]);
      }
    }
  }
LAB_141764001:
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)(int)(uVar14 * (int)param_3[1]),
             (longlong)(int)(*(int *)((longlong)param_3 + 0xc) * uVar14));
  FUN_141768c80(local_d8,param_2,*(undefined8 *)(param_1 + 0x70),0,param_3,param_4);
  if ((499 < (int)param_2[8]) && (local_res10 = 10, local_d8[0] == 10)) {
    if ((*(byte *)(param_2 + 5) & 2) == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_1417692e0(param_2,local_d8);
        lVar13 = *(longlong *)(param_1 + 0x70);
        FLinkerLoad::FindNewNameForStruct(&local_e8,local_c0);
        local_res10 = 0;
        if ((local_e8 != (longlong *)0x0) &&
           (local_e8 == *(longlong **)(*(longlong *)(lVar13 + 0x70) + 0x18))) {
          local_c0 = local_e8;
        }
        plVar4 = *(longlong **)(lVar13 + 0x70);
        if ((local_c0 != (longlong *)plVar4[3]) &&
           (((((local_90 == 0 && local_8c == 0) && local_88 == 0) && local_84 == 0 ||
             (plVar4 == (longlong *)0x0)) ||
            (piVar8 = (int *)(**(code **)(*plVar4 + 0x308))(plVar4,&local_100),
            ((piVar8[1] != local_8c || piVar8[2] != local_88) || piVar8[3] != local_84) ||
            *piVar8 != local_90)))) {
          lVar9 = (**(code **)(*param_2 + 0x90))(param_2);
          if ((*(uint *)(*(longlong *)(lVar13 + 0x70) + 0x88) & 0x80000) != 0) {
            plVar4 = *(longlong **)(*(longlong *)(lVar13 + 0x70) + 0x90);
            bVar1 = *(byte *)((longlong)param_2 + 0x2b);
            *(byte *)((longlong)param_2 + 0x2b) = bVar1 & 0xef;
            local_f8 = *(longlong **)(param_1 + 0x70);
            if (param_2[0xf] == param_1) {
              local_100 = param_2;
              FUN_141705270(&local_100);
            }
            else {
              local_f8 = (longlong *)0x0;
              local_100 = param_2;
            }
            iVar11 = 0;
            if (0 < local_res18[0]) {
              iVar12 = 0;
              do {
                if ((int)param_3[1] == 0) {
                  lVar13 = 0;
                }
                else {
                  lVar13 = (longlong)iVar12 + *param_3;
                }
                cVar7 = (**(code **)(*plVar4 + 0xf0))(plVar4,local_d8,param_2,lVar13);
                if (cVar7 == '\0') break;
                iVar12 = iVar12 + uVar2;
                iVar11 = iVar11 + 1;
              } while (iVar11 < local_res18[0]);
            }
            *(byte *)((longlong)param_2 + 0x2b) = *(byte *)((longlong)param_2 + 0x2b) & 0xef;
            *(byte *)((longlong)param_2 + 0x2b) = *(byte *)((longlong)param_2 + 0x2b) | bVar1 & 0x10
            ;
            FSerializedPropertyScope::PopProperty(&local_100);
          }
          lVar13 = (**(code **)(*param_2 + 0x90))(param_2);
          lVar13 = (local_a0[0] + lVar9) - lVar13;
          if (lVar13 < 1) {
            return;
          }
          do {
            plVar4 = (longlong *)param_2[1];
            if ((undefined1 *)plVar4[1] < (undefined1 *)*plVar4 + 1) {
              (**(code **)(*param_2 + 0x50))(param_2,&local_res10,1);
            }
            else {
              local_res10 = CONCAT71(local_res10._1_7_,*(undefined1 *)*plVar4);
              *plVar4 = *plVar4 + 1;
            }
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          return;
        }
      }
    }
    else {
      FUN_1417692e0(param_2,local_d8);
    }
  }
  local_res10 = (**(code **)(*param_2 + 0x90))(param_2);
  bVar1 = *(byte *)((longlong)param_2 + 0x2b);
  iVar11 = 0;
  if (((bVar1 & 0x10) != 0) && (plVar4 = (longlong *)param_2[0xd], plVar4 != (longlong *)0x0)) {
    local_f8 = *(longlong **)(param_1 + 0x70);
    bVar6 = false;
    plVar5 = plVar4;
    if (param_2[0xf] == param_1) {
      local_100 = param_2;
      FUN_141705270(&local_100);
    }
    else {
      local_f8 = (longlong *)0x0;
      local_100 = param_2;
    }
    while (((plVar5 != (longlong *)0x0 && (iVar11 < local_res18[0])) && (!bVar6))) {
      if (*plVar5 == *(longlong *)(param_1 + 0x70)) {
        local_68 = (undefined4)*plVar5;
        uStack_64 = *(undefined4 *)((longlong)plVar5 + 4);
        uStack_5c = *(undefined4 *)((longlong)plVar5 + 0xc);
        local_58 = (undefined4)plVar5[2];
        uStack_54 = *(undefined4 *)((longlong)plVar5 + 0x14);
        uStack_60 = 0;
        param_2[0xd] = (longlong)&local_68;
        uStack_50 = 0;
        iVar11 = (int)plVar5[1];
        if ((int)param_3[1] == 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = (longlong)(int)(uVar2 * iVar11) + *param_3;
        }
        (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2c0))
                  (*(longlong **)(param_1 + 0x70),param_2,lVar13,0);
        plVar5 = (longlong *)plVar5[3];
        param_2[0xd] = (longlong)plVar4;
      }
      else {
        if (*plVar5 == 0) {
          iVar11 = (int)plVar5[1];
        }
        bVar6 = true;
      }
    }
    FSerializedPropertyScope::PopProperty(&local_100);
    if (!bVar6) goto LAB_1417643c5;
  }
  *(byte *)((longlong)param_2 + 0x2b) = *(byte *)((longlong)param_2 + 0x2b) & 0xef;
  local_e0 = *(undefined8 *)(param_1 + 0x70);
  local_e8 = param_2;
  if (param_2[0xf] == param_1) {
    FUN_141705270(&local_e8);
  }
  else {
    local_e0 = 0;
  }
  if (iVar11 < local_res18[0]) {
    iVar12 = uVar2 * iVar11;
    do {
      if ((int)param_3[1] == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = (longlong)iVar12 + *param_3;
      }
      (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2c0))
                (*(longlong **)(param_1 + 0x70),param_2,lVar13,0);
      iVar11 = iVar11 + 1;
      iVar12 = iVar12 + uVar2;
    } while (iVar11 < local_res18[0]);
  }
  *(byte *)((longlong)param_2 + 0x2b) = *(byte *)((longlong)param_2 + 0x2b) & 0xef;
  *(byte *)((longlong)param_2 + 0x2b) = *(byte *)((longlong)param_2 + 0x2b) | bVar1 & 0x10;
  FSerializedPropertyScope::PopProperty(&local_e8);
LAB_1417643c5:
  if (((499 < (int)param_2[8]) && ((*(byte *)(param_2 + 5) & 2) != 0)) && (local_d8[0] == 10)) {
    local_a0[0] = (**(code **)(*param_2 + 0x90))(param_2);
    local_a0[0] = local_a0[0] - (int)local_res10;
    if (0 < local_a0[0]) {
      uVar10 = (**(code **)(*param_2 + 0x90))(param_2);
      (**(code **)(*param_2 + 0xa8))(param_2,local_98);
      plVar4 = (longlong *)param_2[1];
      if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_a0,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_a0,4);
        }
      }
      else {
        local_a0[0] = *(int *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      (**(code **)(*param_2 + 0xa8))(param_2,uVar10);
    }
  }
  return;
}



// FUNCTION 1417644a0 FUN_1417644a0 body=121 status=ok
// SIG undefined FUN_1417644a0(void)

void FUN_1417644a0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  byte bVar2;
  byte *pbVar3;
  char local_res8 [8];
  
  pbVar3 = (byte *)((ulonglong)*(byte *)(param_1 + 0x71) + param_3);
  plVar1 = (longlong *)param_2[1];
  local_res8[0] = (*(byte *)(param_1 + 0x73) & *pbVar3) != 0;
  if ((char *)plVar1[1] < (char *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
  }
  else {
    local_res8[0] = *(char *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  if (local_res8[0] == '\0') {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x72);
  }
  *pbVar3 = ~*(byte *)(param_1 + 0x73) & *pbVar3 | bVar2;
  return;
}



// FUNCTION 141764520 FUN_141764520 body=205 status=ok
// SIG undefined FUN_141764520(void)

void FUN_141764520(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  
  if (*(longlong *)(param_1 + 0x70) != 0) {
    cVar2 = (**(code **)(*param_2 + 0x140))(param_2);
    if (cVar2 != '\0') {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x290))
                        (*(longlong **)(param_1 + 0x70),param_2,*param_3);
      *param_3 = uVar3;
      return;
    }
  }
  if ((*(longlong *)(param_1 + 0x70) != 0) && ((*(byte *)(param_2 + 5) & 3) != 0)) {
    FUN_141764790(param_2,param_3);
    return;
  }
  puVar1 = *(undefined1 **)param_2[1];
  if (puVar1 + 1 <= (undefined1 *)((undefined8 *)param_2[1])[1]) {
    *param_3 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001417645e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x50))(param_2,param_3,1);
  return;
}



// FUNCTION 1417645f0 FUN_1417645f0 body=290 status=ok
// SIG undefined FUN_1417645f0(void)

void FUN_1417645f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  (**(code **)(*param_2 + 0xf8))(param_2,param_1);
  if ((*(uint *)(param_1 + 8) >> 4 & 1) != 0) {
    *(int *)((longlong)param_2 + 0x2c) = *(int *)((longlong)param_2 + 0x2c) + 1;
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (((*(byte *)(param_2 + 5) & 3) == 0) || ((*(byte *)(param_2 + 5) & 0x10) != 0)) {
    if ((param_2[6] == 0) || ((*(byte *)((longlong)param_2 + 0x2b) & 0x10) != 0)) {
      (**(code **)(*plVar1 + 0x298))(plVar1,param_2,param_1);
    }
    else {
      lVar2 = (**(code **)(*param_2 + 0x110))(param_2,param_1);
      if ((lVar2 == 0) && (lVar2 = FUN_14178ca30(), lVar2 == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(lVar2 + 0x10);
      }
      FUN_141723e20(plVar1,param_2,param_1,lVar2,uVar3);
    }
  }
  else {
    lVar2 = (**(code **)(*param_2 + 0x110))(param_2,param_1);
    if (lVar2 == 0) {
      lVar2 = FUN_14178ca30();
    }
    plVar4 = plVar1;
    if ((*(uint *)(param_1 + 8) >> 4 & 1) != 0) {
      plVar4 = (longlong *)plVar1[6];
    }
    (**(code **)(*plVar1 + 0x2a0))(plVar1,param_2,param_1,plVar4,lVar2,0);
  }
  if ((*(uint *)(param_1 + 8) >> 4 & 1) != 0) {
    *(int *)((longlong)param_2 + 0x2c) = *(int *)((longlong)param_2 + 0x2c) + -1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014176470b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x100))(param_2,param_1);
  return;
}



// FUNCTION 141764720 FUN_141764720 body=99 status=ok
// SIG undefined FUN_141764720(void)

void FUN_141764720(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 local_res8 [4];
  
  if ((*(byte *)(param_1 + 5) & 3) != 0) {
    if (param_3 == 0) {
      local_res8[0] = 0;
      (**(code **)(*param_1 + 0x40))(param_1,local_res8);
      return;
    }
    FUN_141764790();
    return;
  }
  puVar1 = *(undefined1 **)param_1[1];
  if (puVar1 + 1 <= (undefined1 *)((undefined8 *)param_1[1])[1]) {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014176475a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))(param_1,param_2,1);
  return;
}



// FUNCTION 141764790 FUN_141764790 body=238 status=ok
// SIG undefined FUN_141764790(void)

void FUN_141764790(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 local_res8;
  undefined1 local_res20 [8];
  
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    uVar1 = *param_2;
    cVar2 = UEnum::IsValidEnumValue(param_3,uVar1);
    if (cVar2 == '\0') {
      local_res8 = 0;
    }
    else {
      puVar4 = (undefined8 *)UEnum::GetNameByValue(param_3,local_res20,uVar1);
      local_res8 = *puVar4;
    }
    (**(code **)(*param_1 + 0x40))(param_1,&local_res8);
    return;
  }
  local_res8 = 0;
  (**(code **)(*param_1 + 0x40))(param_1,&local_res8);
  if ((*(uint *)(param_3 + 8) >> 10 & 1) != 0) {
    (**(code **)(*param_1 + 0x70))(param_1,param_3);
  }
  iVar3 = UEnum::GetIndexByName(param_3,local_res8,1);
  if (iVar3 == -1) {
    uVar1 = UEnum::GetMaxEnumValue(param_3);
    *param_2 = uVar1;
    return;
  }
  *param_2 = *(undefined1 *)(*(longlong *)(param_3 + 0x40) + 8 + (longlong)iVar3 * 0x10);
  return;
}



// FUNCTION 141764880 SetBoolSize body=152 status=ok
// SIG undefined SetBoolSize(void)

void UBoolProperty::SetBoolSize(longlong param_1,uint param_2,char param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  int local_res18 [4];
  
  if (param_3 == '\0') {
    *(ulonglong *)(param_1 + 0x38) =
         *(ulonglong *)(param_1 + 0x38) & 0xffffffffbffffdff | 0x1000000000;
  }
  else {
    *(ulonglong *)(param_1 + 0x38) = *(ulonglong *)(param_1 + 0x38) | 0x1040000200;
  }
  *(uint *)(param_1 + 0x34) = param_2;
  *(char *)(param_1 + 0x70) = (char)param_2;
  local_res18[0] = 1;
  if (param_4 != 0) {
    local_res18[0] = param_4;
  }
  *(undefined1 *)(param_1 + 0x71) = 0;
  if (param_3 != '\0') {
    *(undefined2 *)(param_1 + 0x72) = 0xff01;
    return;
  }
  if (param_2 != 0) {
    uVar3 = 0;
    do {
      cVar1 = *(char *)((longlong)local_res18 + uVar3);
      *(char *)(param_1 + 0x72) = cVar1;
      if (cVar1 != '\0') break;
      bVar2 = (char)uVar3 + 1;
      uVar3 = (ulonglong)bVar2;
      *(byte *)(param_1 + 0x71) = bVar2;
    } while (bVar2 < param_2);
  }
  *(undefined1 *)(param_1 + 0x73) = *(undefined1 *)(param_1 + 0x72);
  return;
}



// FUNCTION 141764920 FUN_141764920 body=109 status=ok
// SIG undefined FUN_141764920(void)

void FUN_141764920(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = DAT_1469e7a80;
  lVar1 = UObjectBaseUtility::GetOutermost();
  if (lVar1 != lVar2) {
    if (DAT_1468b6150 != (longlong *)0x0) {
      lVar2 = UObjectBaseUtility::GetOutermost(param_1);
      if ((*(uint *)(lVar2 + 0x50) & 0x300000) == 0) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
        (**(code **)(*DAT_1468b6150 + 0x18))(DAT_1468b6150,param_1);
      }
    }
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfe;
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | param_2;
  }
  return;
}



// FUNCTION 1417649b0 SetNum body=115 status=ok
// SIG undefined SetNum(void)

void TArray<FCompressedChunk,FDefaultAllocator>::SetNum
               (longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar1 = (int)param_1[1];
  iVar2 = (int)param_2;
  if (iVar1 < iVar2) {
    iVar4 = iVar2 - iVar1;
    *(int *)(param_1 + 1) = iVar2;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    lVar3 = (longlong)iVar1 * 0x10 + *param_1;
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      UCheatManagerGunfire::GetAllCheats(lVar3);
      lVar3 = lVar3 + 0x10;
    }
  }
  else if (iVar2 < iVar1) {
    FUN_14175ebf0(param_1,param_2,iVar1 - iVar2,param_3);
    return;
  }
  return;
}



// FUNCTION 141764a30 FUN_141764a30 body=111 status=ok
// SIG undefined FUN_141764a30(void)

void FUN_141764a30(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_1[1];
  iVar2 = (int)param_2;
  if (iVar1 < iVar2) {
    *(int *)(param_1 + 1) = iVar2;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow();
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(iVar2 - iVar1) << 4);
    return;
  }
  if (iVar2 < iVar1) {
    TArray<FSubdivisionLimitSection,FDefaultAllocator>::RemoveAtImpl
              (param_1,param_2,iVar1 - iVar2,param_3);
  }
  return;
}



// FUNCTION 141764aa0 FUN_141764aa0 body=26 status=ok
// SIG undefined FUN_141764aa0(void)

void FUN_141764aa0(undefined8 param_1,undefined1 *param_2,wchar_t *param_3)

{
  int iVar1;
  
  iVar1 = _wtoi(param_3);
  *param_2 = (char)iVar1;
  return;
}



// FUNCTION 141764ac0 FUN_141764ac0 body=81 status=ok
// SIG undefined FUN_141764ac0(void)

int FUN_141764ac0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(byte *)(*(longlong *)(param_1[4] + 0x10) + 0xb8) & 8) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1[4] + 0x40);
  }
  iVar1 = (**(code **)(*param_1 + 0x348))(param_1);
  uVar2 = iVar1 + -1 + iVar3 & -iVar1;
  *(uint *)((longlong)param_1 + 0x44) = uVar2;
  return *(int *)((longlong)param_1 + 0x34) * (int)param_1[6] + uVar2;
}



// FUNCTION 141764b20 SetupPlaceholderSubobject body=112 status=ok
// SIG undefined SetupPlaceholderSubobject(void)

void FLinkerPlaceholderBase::SetupPlaceholderSubobject(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)param_1[0x17];
  *(int *)(param_1 + 0x17) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xbc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x16,iVar1);
  }
  *(longlong *)(param_1[0x16] + (longlong)iVar1 * 8) = param_2;
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined8 *)(param_2 + 0xe8) = uVar2;
  return;
}



// FUNCTION 141764b90 FUN_141764b90 body=126 status=ok
// SIG undefined FUN_141764b90(void)

ulonglong FUN_141764b90(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = *(int *)(param_1 + 0x34) * *(int *)(param_1 + 0x30);
  uVar3 = (ulonglong)uVar2;
  if (0 < (int)uVar2) {
    uVar3 = *(ulonglong *)(param_1 + 0x38);
    if (((((uVar3 >> 0xd & 1) == 0) || ((param_2 & 0x28000) != 0)) &&
        (((param_2 >> 0xb & 1) == 0 ||
         (((uVar3 & 0x400000200000) == 0 || ((param_2 & 0x28000) != 0)))))) &&
       ((((param_2 >> 0x16 & 1) != 0 || ((uVar3 & 0x800000000000) == 0)) &&
        ((((param_2 >> 8 & 1) == 0 || ((uVar3 & 0x8000080000) != 0)) &&
         (((param_2 >> 0x13 & 1) == 0 ||
          (bVar1 = (byte)uVar3, uVar3 = CONCAT71((int7)(uVar3 >> 8),~bVar1), (~bVar1 & 1) == 0))))))
       )) {
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 141764c10 FUN_141764c10 body=265 status=ok
// SIG undefined FUN_141764c10(void)

ulonglong FUN_141764c10(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  ulonglong uVar3;
  
  uVar3 = (**(code **)(*param_2 + 0x148))(param_2,param_1);
  if ((char)uVar3 == '\0') {
    uVar1 = *(ulonglong *)(param_1 + 0x38);
    bVar2 = ~(byte)(uVar1 >> 0x18);
    uVar3 = (ulonglong)CONCAT41((int)(uVar1 >> 0x20),bVar2);
    if (((bVar2 & 1) == 0) || ((*(byte *)((longlong)param_2 + 0x2b) & 4) == 0)) {
      uVar3 = 0x80800c20202000;
      if ((uVar1 & 0x80800c20202000) == 0) {
LAB_141764c61:
        return CONCAT71((int7)(uVar3 >> 8),1);
      }
      if ((((((uVar1 >> 0xd & 1) == 0) || ((*(byte *)(param_2 + 5) & 0x40) == 0)) ||
           (0 < *(int *)((longlong)param_2 + 0x2c))) &&
          (((uVar1 >> 0x15 & 1) == 0 ||
           (uVar3 = (ulonglong)*(uint *)(param_2 + 6), (*(uint *)(param_2 + 6) >> 0xc & 1) == 0))))
         && (((uVar1 & 0x800000000000) == 0 ||
             ((uVar3 = param_2[6], (uVar3 >> 0x16 & 1) != 0 || ((uVar3 >> 0xc & 1) == 0)))))) {
        if (((uVar1 >> 0x1d & 1) != 0) && ((*(uint *)(param_2 + 6) >> 0x1b & 1) == 0)) {
          uVar3 = 0;
          if (((*(byte *)(param_2 + 5) & 2) != 0) || ((*(byte *)(param_2 + 5) & 0x10) != 0))
          goto LAB_141764d0c;
        }
        uVar3 = 0x80000000000000;
        if ((((uVar1 & 0x80000000000000) == 0) ||
            (((*(byte *)(param_2 + 5) & 0x10) == 0 &&
             (uVar3 = 0, (*(uint *)(param_2 + 6) >> 0x1d & 1) != 0)))) &&
           (((uVar1 >> 0x23 & 1) == 0 || (-1 < *(char *)((longlong)param_2 + 0x2a)))))
        goto LAB_141764c61;
      }
    }
  }
LAB_141764d0c:
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 141764d20 SkipWhitespace body=58 status=ok
// SIG undefined SkipWhitespace(void)

void SkipWhitespace(longlong *param_1)

{
  int iVar1;
  
  iVar1 = iswspace(*(wint_t *)*param_1);
  while (iVar1 != 0) {
    *param_1 = *param_1 + 2;
    iVar1 = iswspace(*(wint_t *)*param_1);
  }
  return;
}



// FUNCTION 141764d60 StaticClass body=5 status=ok
// SIG undefined StaticClass(void)

longlong UNumericProperty::StaticClass(void)

{
  if (DAT_1469e7ce8 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"NumericProperty",&DAT_1469e7ce8,
                  AK::MemoryMgr::StartProfileThreadUsage,0x70,0x10000001,0x1000000,L"Engine",
                  FUN_141767cf0,InternalVTableHelperCtorCaller<UNumericProperty>,
                  AK::MemoryMgr::StartProfileThreadUsage,UProperty::StaticClass,FUN_14171c410,0);
  }
  return DAT_1469e7ce8;
}



// FUNCTION 141764d70 FUN_141764d70 body=6532 status=ok
// SIG undefined FUN_141764d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_141764d70(undefined8 param_1,wchar_t *param_2,undefined8 param_3)

{
  wchar_t wVar1;
  undefined4 uVar2;
  undefined *puVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  wchar_t *pwVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  wchar_t wVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  short *psVar21;
  wchar_t *pwVar22;
  int iVar23;
  uint uVar24;
  undefined2 *puVar25;
  uint uVar26;
  ulonglong uVar27;
  short *psVar28;
  longlong lVar29;
  ulonglong uVar30;
  int iVar31;
  wchar_t *pwVar32;
  wchar_t *pwVar33;
  undefined **ppuVar34;
  longlong lVar35;
  bool bVar36;
  undefined1 auStack_818 [32];
  undefined8 local_7f8;
  longlong *local_7f0;
  wchar_t *local_7e8;
  char local_7d8;
  char local_7d7;
  wchar_t *local_7d0;
  wchar_t *local_7c8;
  undefined8 local_7c0;
  char local_7b8;
  wchar_t *local_7b0;
  wchar_t *local_7a8;
  undefined8 local_7a0;
  longlong *local_798;
  ulonglong local_790;
  wchar_t *local_788;
  ulonglong local_780;
  wchar_t *local_778;
  undefined8 local_770;
  wchar_t *local_768;
  uint local_760;
  uint local_75c;
  undefined8 local_758;
  wchar_t *local_750;
  ulonglong local_748;
  undefined8 local_740;
  wchar_t *local_738;
  ulonglong local_730;
  wchar_t *local_728;
  longlong local_720;
  undefined4 local_718;
  undefined2 local_714;
  undefined1 local_712;
  wchar_t *local_710;
  undefined8 local_708;
  wchar_t *local_700;
  undefined8 local_6f8;
  short *local_6f0;
  int local_6e8;
  short *local_6e0;
  int local_6d8;
  short *local_6d0;
  int local_6c8;
  short *local_6c0;
  int local_6b8;
  undefined2 *local_6b0;
  int local_6a8;
  undefined1 local_6a0 [16];
  ulonglong *local_690;
  short *local_678 [2];
  longlong local_668 [2];
  longlong local_658 [2];
  undefined1 local_648 [512];
  undefined1 local_448 [512];
  undefined1 local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_818;
  uVar30 = 0;
  local_750 = (wchar_t *)((ulonglong)local_750 & 0xffffffff00000000);
  local_7d0 = param_2;
  local_758 = param_3;
  cVar5 = FParse::Command(&local_7d0,&DAT_144d11af8,1);
  if (cVar5 != '\0') {
    cVar5 = FParse::Token(&local_7d0,local_448,0x100,1);
    if (cVar5 == '\0') {
      return 1;
    }
    uVar11 = FUN_14171bfe0();
    pwVar12 = (wchar_t *)FUN_141799410(uVar11,0xffffffffffffffff,local_448,0);
    if (pwVar12 == (wchar_t *)0x0) {
      return 1;
    }
    cVar5 = FParse::Token(&local_7d0,local_648,0x100,1);
    if (cVar5 == '\0') {
      return 1;
    }
    FName::FName(&local_738,local_648,0);
    plVar13 = (longlong *)FindField<UProperty>(pwVar12,local_738);
    if (plVar13 == (longlong *)0x0) {
      return 1;
    }
    lVar29 = *(longlong *)(pwVar12 + 0x7c);
    local_7a8 = (wchar_t *)0x0;
    local_7a0 = 0;
    if ((lVar29 != 0) && (*(int *)(pwVar12 + 0x20) != 0)) {
      local_7e8 = (wchar_t *)0x0;
      local_7f0 = (longlong *)0x20000;
      local_7f8 = pwVar12;
      (**(code **)(*plVar13 + 0x2d8))
                (plVar13,&local_7a8,*(int *)((longlong)plVar13 + 0x44) + lVar29,
                 *(int *)((longlong)plVar13 + 0x44) + lVar29);
      pwVar12 = local_7a8;
      if ((int)local_7a0 != 0) goto LAB_141764ecb;
    }
    pwVar12 = L"";
LAB_141764ecb:
    FOutputDevice::Log(param_3,pwVar12);
    if (local_7a8 == (wchar_t *)0x0) {
      return 1;
    }
    FMemory::Free();
    return 1;
  }
  cVar5 = FParse::Command(&local_7d0,L"LISTPROPS",1);
  if (cVar5 == '\0') {
    cVar5 = FParse::Command(&local_7d0,L"GETALL",1);
    if (cVar5 == '\0') {
      cVar5 = FParse::Command(&local_7d0,L"GETALLSTATE",1);
      if (cVar5 == '\0') {
        cVar5 = FParse::Command(&local_7d0,&DAT_144d12158,1);
        uVar11 = 1;
        if (cVar5 == '\0') {
          cVar5 = FParse::Command(&local_7d0,L"SETNOPEC",1);
          if (cVar5 == '\0') {
            cVar5 = FSelfRegisteringExec::StaticExec(param_1,param_2,param_3);
            if (cVar5 != '\0') {
              return 1;
            }
            return 0;
          }
          uVar11 = 0;
        }
        PerformSetCommand(local_7d0,param_3,uVar11);
        return 1;
      }
      cVar5 = FParse::Token(&local_7d0,local_248,0x100,1);
      if (cVar5 == '\0') {
        return 1;
      }
      uVar11 = FUN_14171bfe0();
      lVar29 = FUN_141799410(uVar11,0xffffffffffffffff,local_248);
      if (lVar29 == 0) {
        return 1;
      }
      cVar5 = FParse::Command(&local_7d0,L"SHOWPENDINGKILLS",1);
      uVar11 = UObject::GetPrivateStaticClass();
      local_7f8 = (wchar_t *)((ulonglong)local_7f8._4_4_ << 0x20);
      FObjectIterator::FObjectIterator(local_6a0,uVar11,0,0x10);
      uVar27 = uVar30;
      if (local_690 == (ulonglong *)0x0) {
        return 1;
      }
      do {
        if (cVar5 == '\0') {
          uVar16 = uVar30;
          if (local_690 != (ulonglong *)0x0) {
            uVar16 = *local_690;
          }
          iVar9 = *(int *)(uVar16 + 0xc);
          uVar16 = uVar30;
          if (iVar9 < (int)DAT_1469e91c4) {
            uVar10 = iVar9 >> 0x1f & 0xffff;
            uVar8 = iVar9 + uVar10;
            uVar16 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                     (longlong)(int)((uVar8 & 0xffff) - uVar10) * 0x18;
          }
          if ((*(uint *)(uVar16 + 8) >> 0x1d & 1) == 0) goto LAB_1417665d8;
        }
        else {
LAB_1417665d8:
          uVar16 = uVar30;
          if (local_690 != (ulonglong *)0x0) {
            uVar16 = *local_690;
          }
          if ((*(int *)(*(longlong *)(uVar16 + 0x10) + 0x90) < *(int *)(lVar29 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar16 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar29 + 0x90) * 8) != lVar29 + 0x88)) {
            bVar36 = false;
          }
          else {
            bVar36 = true;
          }
          if (bVar36) {
            uVar16 = uVar30;
            if (local_690 != (ulonglong *)0x0) {
              uVar16 = *local_690;
            }
            puVar15 = (undefined8 *)UObjectBaseUtility::GetFullName(uVar16,&local_728,0);
            if (*(int *)(puVar15 + 1) == 0) {
              puVar25 = &DAT_143f3eda8;
            }
            else {
              puVar25 = (undefined2 *)*puVar15;
            }
            FOutputDevice::LogfImpl(param_3,L"%i) %s",uVar27,puVar25);
            uVar27 = (ulonglong)((int)uVar27 + 1);
            if (local_728 != (wchar_t *)0x0) {
              FMemory::Free();
            }
          }
        }
        TObjectIterator<UObject>::operator++(local_6a0);
        if (local_690 == (ulonglong *)0x0) {
          return 1;
        }
      } while( true );
    }
    cVar5 = FParse::Token(&local_7d0,local_648,0x100,1);
    if (cVar5 == '\0') {
      return 1;
    }
    uVar11 = FUN_14171bfe0();
    pwVar12 = (wchar_t *)FUN_141799410(uVar11,0xffffffffffffffff,local_648);
    if (pwVar12 == (wchar_t *)0x0) {
      return 1;
    }
    local_768 = pwVar12;
    FParse::Token(&local_7d0,local_448,0x100,1);
    FName::FName(&local_788,local_448);
    pwVar32 = (wchar_t *)FindField<UProperty>(pwVar12,local_788);
    local_740 = 0;
    pwVar12 = (wchar_t *)0x0;
    local_778 = pwVar32;
    if (local_7d0 != (wchar_t *)0x0) {
      bVar36 = false;
      wVar1 = *local_7d0;
      pwVar33 = local_7d0;
      while (pwVar12 = (wchar_t *)0x0, wVar1 != L'\0') {
        pwVar22 = pwVar33 + 1;
        wVar17 = wVar1 + L'￠';
        if (0x19 < (ushort)(wVar1 + L'ﾟ')) {
          wVar17 = wVar1;
        }
        if ((bVar36) || (wVar17 != L'O')) {
          if (((ushort)(wVar17 + L'﾿') < 0x1a) || ((ushort)(wVar17 + L'￐') < 10))
          goto LAB_141765dcf;
          bVar36 = false;
        }
        else {
          iVar9 = _wcsnicmp(pwVar22,L"UTER=",5);
          pwVar12 = pwVar33;
          if (iVar9 == 0) break;
LAB_141765dcf:
          bVar36 = true;
        }
        pwVar33 = pwVar22;
        wVar1 = *pwVar22;
      }
    }
    pwVar33 = local_7d0;
    uVar11 = UObject::GetPrivateStaticClass();
    local_7f0 = (longlong *)0x0;
    local_7f8 = (wchar_t *)0xffffffffffffffff;
    FUN_141792c10(pwVar33,L"OUTER=",uVar11,&local_740);
    local_738 = (wchar_t *)0x0;
    local_7f8 = (wchar_t *)CONCAT71(local_7f8._1_7_,1);
    cVar5 = FParse::Value(local_7d0,L"NAME=",local_248,0x100);
    pwVar33 = local_738;
    if (cVar5 != '\0') {
      plVar13 = (longlong *)FName::FName(&local_7c8,local_248,1);
      pwVar33 = (wchar_t *)*plVar13;
    }
    if ((pwVar12 != (wchar_t *)0x0) && (local_740 == 0)) {
      return 1;
    }
    local_7b0 = pwVar33;
    cVar6 = FParse::Command(&local_7d0,L"SHOWDEFAULTS",1);
    local_7d8 = cVar6;
    local_7b8 = FParse::Command(&local_7d0,L"SHOWPENDINGKILLS",1);
    cVar5 = FParse::Command(&local_7d0,L"DETAILED",1);
    local_7d7 = cVar5;
    uVar11 = UObject::GetPrivateStaticClass();
    local_7f8 = (wchar_t *)((ulonglong)local_7f8 & 0xffffffff00000000);
    FObjectIterator::FObjectIterator(local_6a0,uVar11,0,0);
    if (local_690 == (ulonglong *)0x0) {
      return 1;
    }
    do {
      psVar21 = (short *)*local_690;
      if (((local_740 == 0) || (cVar7 = UObjectBaseUtility::IsIn(psVar21), cVar7 != '\0')) &&
         ((cVar7 = UObjectBaseUtility::IsTemplate(psVar21,0x10), cVar7 == '\0' || (cVar6 != '\0'))))
      {
        lVar29 = 0;
        local_738 = (wchar_t *)0x0;
        if ((pwVar33 == (wchar_t *)0x0) || (*(wchar_t **)(psVar21 + 0xc) == pwVar33)) {
          if (local_7b8 == '\0') {
            iVar9 = *(int *)(psVar21 + 6);
            if (iVar9 < (int)DAT_1469e91c4) {
              uVar10 = iVar9 >> 0x1f & 0xffff;
              uVar8 = iVar9 + uVar10;
              lVar29 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                       (longlong)(int)((uVar8 & 0xffff) - uVar10) * 0x18;
            }
            if ((*(uint *)(lVar29 + 8) >> 0x1d & 1) != 0) goto LAB_1417664a3;
          }
          if ((*(int *)(*(longlong *)(psVar21 + 8) + 0x90) < *(int *)(local_768 + 0x48)) ||
             (*(wchar_t **)
               (*(longlong *)(*(longlong *)(psVar21 + 8) + 0x88) +
               (longlong)*(int *)(local_768 + 0x48) * 8) != local_768 + 0x44)) {
            bVar36 = false;
          }
          else {
            bVar36 = true;
          }
          if (bVar36) {
            iVar9 = (int)uVar30;
            if (pwVar32 == (wchar_t *)0x0) {
              if (cVar5 == '\0') {
                puVar15 = (undefined8 *)UObjectBaseUtility::GetFullName(psVar21,&local_700,0);
                if (*(int *)(puVar15 + 1) == 0) {
                  puVar25 = &DAT_143f3eda8;
                }
                else {
                  puVar25 = (undefined2 *)*puVar15;
                }
                FOutputDevice::LogfImpl(local_758,L"%i) %s",uVar30,puVar25);
                uVar30 = (ulonglong)(iVar9 + 1);
                if (local_700 != (wchar_t *)0x0) {
                  FMemory::Free();
                }
              }
              else {
                puVar15 = (undefined8 *)FUN_141757260(psVar21,&local_6c0);
                if (*(int *)(puVar15 + 1) == 0) {
                  psVar28 = &DAT_143f3eda8;
                }
                else {
                  psVar28 = (short *)*puVar15;
                }
                puVar15 = (undefined8 *)UObjectBaseUtility::GetFullName(psVar21,&local_6b0,0);
                if (*(int *)(puVar15 + 1) == 0) {
                  puVar25 = &DAT_143f3eda8;
                }
                else {
                  puVar25 = (undefined2 *)*puVar15;
                }
                local_7f8 = psVar28;
                FOutputDevice::LogfImpl(local_758,L"%i) %s %s",uVar30,puVar25);
                uVar30 = (ulonglong)(iVar9 + 1);
                if (local_6b0 != (undefined2 *)0x0) {
                  FMemory::Free();
                }
                cVar6 = local_7d8;
                if (local_6c0 != (short *)0x0) {
                  FMemory::Free();
                  cVar6 = local_7d8;
                }
              }
            }
            else {
              if (*(int *)(pwVar32 + 0x18) < 2) {
                lVar29 = UArrayProperty::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(pwVar32 + 8) + 0x90) < *(int *)(lVar29 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(pwVar32 + 8) + 0x88) +
                     (longlong)*(int *)(lVar29 + 0x90) * 8) != lVar29 + 0x88)) {
                  bVar36 = false;
                }
                else {
                  bVar36 = true;
                }
                if (!bVar36) {
                  iVar20 = 0;
                  local_790._0_4_ = 0;
                  local_798 = (longlong *)0x0;
                  local_790 = 0;
                  if (0 < *(int *)(pwVar32 + 0x18)) {
                    do {
                      local_7e8 = (wchar_t *)0x0;
                      local_7f0 = (longlong *)0x20000;
                      local_7f8 = psVar21;
                      FUN_141754d30(pwVar32,&local_798,
                                    (longlong)(iVar20 * *(int *)(pwVar32 + 0x1a)) +
                                    (longlong)*(int *)(pwVar32 + 0x22) + (longlong)psVar21,
                                    (longlong)(iVar20 * *(int *)(pwVar32 + 0x1a)) +
                                    (longlong)*(int *)(pwVar32 + 0x22) + (longlong)psVar21);
                      iVar20 = iVar20 + 1;
                    } while (iVar20 < *(int *)(pwVar32 + 0x18));
                    pwVar33 = local_7b0;
                  }
                  if (cVar5 == '\0') {
                    plVar13 = (longlong *)&DAT_143f3eda8;
                    if ((int)local_790 != 0) {
                      plVar13 = local_798;
                    }
                    local_750 = *(wchar_t **)(pwVar32 + 0xc);
                    FName::ToString(&local_750,&local_6e0);
                    psVar28 = &DAT_143f3eda8;
                    if (local_6d8 != 0) {
                      psVar28 = local_6e0;
                    }
                    puVar15 = (undefined8 *)UObjectBaseUtility::GetFullName(psVar21,local_668,0);
                    if (*(int *)(puVar15 + 1) == 0) {
                      puVar25 = &DAT_143f3eda8;
                    }
                    else {
                      puVar25 = (undefined2 *)*puVar15;
                    }
                    local_7f8 = psVar28;
                    local_7f0 = plVar13;
                    FOutputDevice::LogfImpl(local_758,L"%i) %s.%s = %s",uVar30,puVar25);
                    psVar21 = local_6e0;
                    if (local_668[0] != 0) {
                      FMemory::Free();
                      psVar21 = local_6e0;
                    }
                  }
                  else {
                    puVar15 = (undefined8 *)FUN_141757260(psVar21,local_678);
                    if (*(int *)(puVar15 + 1) == 0) {
                      pwVar12 = L"";
                    }
                    else {
                      pwVar12 = (wchar_t *)*puVar15;
                    }
                    local_750 = *(wchar_t **)(pwVar32 + 0xc);
                    plVar13 = (longlong *)&DAT_143f3eda8;
                    if ((int)local_790 != 0) {
                      plVar13 = local_798;
                    }
                    FName::ToString(&local_750,&local_6d0);
                    psVar28 = &DAT_143f3eda8;
                    if (local_6c8 != 0) {
                      psVar28 = local_6d0;
                    }
                    puVar15 = (undefined8 *)UObjectBaseUtility::GetFullName(psVar21,&local_710,0);
                    if (*(int *)(puVar15 + 1) == 0) {
                      puVar25 = &DAT_143f3eda8;
                    }
                    else {
                      puVar25 = (undefined2 *)*puVar15;
                    }
                    local_7f8 = psVar28;
                    local_7f0 = plVar13;
                    local_7e8 = pwVar12;
                    FOutputDevice::LogfImpl(local_758,L"%i) %s.%s = %s %s",uVar30,puVar25);
                    if (local_710 != (wchar_t *)0x0) {
                      FMemory::Free();
                    }
                    psVar21 = local_678[0];
                    if (local_6d0 != (short *)0x0) {
                      FMemory::Free();
                      psVar21 = local_678[0];
                    }
                  }
                  uVar30 = (ulonglong)(iVar9 + 1);
                  if (psVar21 != (short *)0x0) {
                    FMemory::Free();
                  }
                  cVar5 = local_7d7;
                  cVar6 = local_7d8;
                  if (local_798 != (longlong *)0x0) {
                    FMemory::Free();
                    cVar5 = local_7d7;
                    cVar6 = local_7d8;
                  }
                  goto LAB_1417664a3;
                }
              }
              local_750 = *(wchar_t **)(pwVar32 + 0xc);
              pwVar12 = (wchar_t *)((longlong)*(int *)(pwVar32 + 0x22) + (longlong)psVar21);
              FName::ToString(&local_750,&local_6f0);
              psVar28 = &DAT_143f3eda8;
              if (local_6e8 != 0) {
                psVar28 = local_6f0;
              }
              puVar15 = (undefined8 *)UObjectBaseUtility::GetFullName(psVar21,local_658,0);
              if (*(int *)(puVar15 + 1) == 0) {
                puVar25 = &DAT_143f3eda8;
              }
              else {
                puVar25 = (undefined2 *)*puVar15;
              }
              local_7f8 = psVar28;
              FOutputDevice::LogfImpl(local_758,L"%i) %s.%s =",uVar30,puVar25);
              local_750 = (wchar_t *)CONCAT44(local_750._4_4_,iVar9 + 1);
              if (local_658[0] != 0) {
                FMemory::Free();
              }
              if (local_6f0 != (short *)0x0) {
                FMemory::Free();
              }
              iVar9 = *(int *)(pwVar32 + 0x18);
              pwVar22 = pwVar32;
              if (iVar9 == 1) {
                cVar5 = UObjectBaseUtility::IsA<UArrayProperty>(pwVar32);
                iVar9 = *(int *)(pwVar12 + 4);
                pwVar22 = (wchar_t *)0x0;
                if (cVar5 != '\0') {
                  pwVar22 = pwVar32;
                }
                if (iVar9 == 0) {
                  pwVar12 = (wchar_t *)0x0;
                  pwVar22 = *(wchar_t **)(pwVar22 + 0x38);
                }
                else {
                  pwVar12 = *(wchar_t **)pwVar12;
                  pwVar22 = *(wchar_t **)(pwVar22 + 0x38);
                }
              }
              cVar5 = local_7d7;
              iVar20 = 0;
              if (0 < iVar9) {
                iVar31 = *(int *)(pwVar22 + 0x1a);
                do {
                  local_7e8 = (wchar_t *)0x0;
                  local_7a8 = (wchar_t *)0x0;
                  local_7f0 = (longlong *)0x20000;
                  local_7a0 = 0;
                  local_7f8 = psVar21;
                  (**(code **)(*(longlong *)pwVar22 + 0x2d8))(pwVar22,&local_7a8,pwVar12,0);
                  if (cVar5 == '\0') {
                    FOutputDevice::LogfImpl(local_758,L"\t%i: %s");
                  }
                  else {
                    puVar15 = (undefined8 *)FUN_141757260(psVar21,&local_728);
                    if (*(int *)(puVar15 + 1) == 0) {
                      local_7f8 = &DAT_143f3eda8;
                    }
                    else {
                      local_7f8 = (wchar_t *)*puVar15;
                    }
                    FOutputDevice::LogfImpl(local_758,L"\t%i: %s %s");
                    if (local_728 != (wchar_t *)0x0) {
                      FMemory::Free();
                    }
                  }
                  if (local_7a8 != (wchar_t *)0x0) {
                    FMemory::Free();
                  }
                  iVar20 = iVar20 + 1;
                  pwVar12 = (wchar_t *)((longlong)pwVar12 + (longlong)iVar31);
                  pwVar33 = local_7b0;
                  pwVar32 = local_778;
                } while (iVar20 < iVar9);
              }
              uVar30 = (ulonglong)local_750 & 0xffffffff;
              cVar5 = local_7d7;
              cVar6 = local_7d8;
            }
          }
        }
      }
LAB_1417664a3:
      FObjectIterator::operator++(local_6a0);
      if (local_690 == (ulonglong *)0x0) {
        return 1;
      }
    } while( true );
  }
  local_778 = (wchar_t *)0x0;
  local_770 = 0;
  cVar5 = FParse::Token(&local_7d0,local_648,0x100,1);
  if (cVar5 != '\0') {
    uVar11 = FUN_14171bfe0();
    local_738 = (wchar_t *)FUN_141799410(uVar11,0xffffffffffffffff,local_648);
    if ((local_738 != (wchar_t *)0x0) &&
       (cVar5 = FParse::Token(&local_7d0,&local_778,1), cVar5 != '\0')) {
      local_798 = (longlong *)0x0;
      local_790 = local_790 & 0xffffffff;
      local_7b0 = (wchar_t *)((ulonglong)local_7b0 & 0xffffffff00000000);
      uVar27 = uVar30;
      uVar16 = uVar30;
      pwVar12 = local_768;
LAB_141764f90:
      do {
        local_7f8._0_4_ = 0xffffffff;
        uVar8 = FUN_141592950(&local_778,&DAT_144d1110c,1);
        local_7f8 = (wchar_t *)CONCAT44(local_7f8._4_4_,0xffffffff);
        iVar9 = FUN_141592950(&local_778,&DAT_144d112ac,1);
        iVar31 = (int)uVar27;
        iVar20 = (int)uVar30;
        if (uVar8 == 0xffffffff) {
          if (iVar9 == -1) goto code_r0x000141764fdf;
        }
        else if ((iVar9 == -1) || ((int)uVar8 < iVar9)) {
          iVar9 = iVar20 + 1;
          local_7b0 = (wchar_t *)CONCAT44(local_7b0._4_4_,iVar9);
          local_790 = CONCAT44(local_790._4_4_,iVar9);
          if (iVar31 < iVar9) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_798,uVar30);
            local_7b0 = (wchar_t *)CONCAT44(local_7b0._4_4_,(int)local_790);
          }
          plVar13 = local_798 + (longlong)iVar20 * 3;
          if (plVar13 != (longlong *)0x0) {
            uVar16 = (ulonglong)((uint)uVar16 | 1);
            if ((int)local_770 == 0) {
              pwVar32 = L"";
              uVar10 = 0;
            }
            else {
              uVar10 = (int)local_770 - 1;
              pwVar32 = local_778;
            }
            pwVar12 = (wchar_t *)0x0;
            local_768 = (wchar_t *)0x0;
            local_75c = 0;
            pwVar33 = pwVar12;
            if ((int)uVar8 < 0) {
LAB_14176526d:
              uVar10 = (uint)pwVar33;
              uVar26 = 0;
            }
            else {
              if ((int)uVar8 < (int)uVar10) {
                uVar10 = uVar8;
              }
              uVar26 = uVar10 + 1;
              pwVar33 = (wchar_t *)(ulonglong)uVar10;
              if (uVar10 == 0) goto LAB_14176526d;
            }
            local_760 = uVar26;
            if ((0 < (int)uVar26) &&
               (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_768,0), uVar26 = local_760,
               pwVar12 = local_768, 0 < (int)local_760)) {
              wcsncpy(local_768,pwVar32,(longlong)(int)uVar10);
              pwVar12[(int)uVar10] = L'\0';
            }
            *plVar13 = 0;
            *(uint *)(plVar13 + 1) = uVar26;
            if (uVar26 == 0) {
              *(undefined4 *)((longlong)plVar13 + 0xc) = 0;
              *(undefined1 *)(plVar13 + 2) = 1;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar13,uVar26,0);
              _guard_xfg_dispatch_icall_nop((void *)*plVar13,pwVar12,(longlong)(int)uVar26 * 2);
              *(undefined1 *)(plVar13 + 2) = 1;
            }
          }
          pwVar32 = (wchar_t *)0x0;
          if (((uVar16 & 1) != 0) &&
             (uVar16 = (ulonglong)((uint)uVar16 & 0xfffffffe), pwVar12 != (wchar_t *)0x0)) {
            FMemory::Free(pwVar12);
          }
          uVar26 = 0;
          uVar10 = (int)local_770 - 1;
          if ((int)local_770 == 0) {
            uVar10 = uVar26;
          }
          uVar24 = (uVar10 - uVar8) - 1;
          if ((int)local_770 == 0) {
            pwVar33 = L"";
            uVar18 = uVar26;
          }
          else {
            pwVar33 = local_778;
            uVar18 = (int)local_770 - 1;
          }
          uVar19 = uVar26;
          if ((-1 < (int)uVar24) && (uVar19 = uVar18, (int)(uVar10 - uVar8) <= (int)uVar18)) {
            uVar19 = uVar24;
          }
          local_750 = (wchar_t *)0x0;
          local_748 = local_748 & 0xffffffff;
          pwVar33 = pwVar33 + ((longlong)(int)uVar18 - (longlong)(int)uVar19);
          uVar8 = uVar26;
          if ((pwVar33 != (wchar_t *)0x0) && (*pwVar33 != L'\0')) {
            lVar29 = -1;
            do {
              lVar29 = lVar29 + 1;
            } while (pwVar33[lVar29] != L'\0');
            uVar10 = (int)lVar29 + 1;
            local_748 = (ulonglong)uVar10;
            pwVar22 = pwVar32;
            uVar26 = uVar10;
            if (0 < (int)uVar10) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_750,0);
              pwVar22 = (wchar_t *)(local_748 >> 0x20);
              uVar26 = (uint)local_748;
            }
            pwVar32 = local_750;
            uVar8 = (uint)pwVar22;
            FGenericPlatformString::Memcpy(local_750,pwVar33,(longlong)(int)uVar10 * 2);
          }
          if (local_778 != (wchar_t *)0x0) {
            FMemory::Free(local_778);
          }
          uVar27 = local_790 >> 0x20;
          local_750 = (wchar_t *)0x0;
          uVar30 = (ulonglong)local_7b0 & 0xffffffff;
          local_770 = CONCAT44(uVar8,uVar26);
          local_748 = 0;
          local_778 = pwVar32;
          goto LAB_141764f90;
        }
        iVar23 = iVar20 + 1;
        local_7b0 = (wchar_t *)CONCAT44(local_7b0._4_4_,iVar23);
        local_790 = CONCAT44(local_790._4_4_,iVar23);
        if (iVar31 < iVar23) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_798,uVar30);
          local_7b0 = (wchar_t *)CONCAT44(local_7b0._4_4_,(int)local_790);
        }
        plVar13 = local_798 + (longlong)iVar20 * 3;
        if (plVar13 != (longlong *)0x0) {
          uVar16 = (ulonglong)((uint)uVar16 | 2);
          if ((int)local_770 == 0) {
            pwVar32 = L"";
            iVar20 = 0;
          }
          else {
            iVar20 = (int)local_770 + -1;
            pwVar32 = local_778;
          }
          iVar31 = 0;
          local_7c8 = (wchar_t *)0x0;
          if (iVar9 < 0) {
LAB_14176507f:
            uVar8 = 0;
          }
          else {
            iVar31 = iVar20;
            if (iVar9 < iVar20) {
              iVar31 = iVar9;
            }
            uVar8 = iVar31 + 1;
            if (iVar31 == 0) goto LAB_14176507f;
          }
          local_7c0 = (ulonglong)uVar8;
          pwVar33 = local_7c8;
          if (0 < (int)uVar8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_7c8,0);
            pwVar33 = local_7c8;
            uVar8 = (uint)local_7c0;
            if (0 < (int)(uint)local_7c0) {
              wcsncpy(local_7c8,pwVar32,(longlong)iVar31);
              pwVar33[iVar31] = L'\0';
            }
          }
          *plVar13 = 0;
          *(uint *)(plVar13 + 1) = uVar8;
          if (uVar8 == 0) {
            *(undefined4 *)((longlong)plVar13 + 0xc) = 0;
            *(undefined1 *)(plVar13 + 2) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar13,uVar8,0);
            _guard_xfg_dispatch_icall_nop((void *)*plVar13,pwVar33,(longlong)(int)uVar8 * 2);
            *(undefined1 *)(plVar13 + 2) = 0;
          }
        }
        pwVar32 = (wchar_t *)0x0;
        if (((uVar16 & 2) != 0) &&
           (uVar16 = (ulonglong)((uint)uVar16 & 0xfffffffd), local_7c8 != (wchar_t *)0x0)) {
          FMemory::Free(local_7c8);
        }
        uVar10 = 0;
        uVar8 = (int)local_770 - 1;
        if ((int)local_770 == 0) {
          uVar8 = uVar10;
        }
        uVar26 = (uVar8 - iVar9) - 1;
        if ((int)local_770 == 0) {
          pwVar33 = L"";
          uVar24 = uVar10;
        }
        else {
          pwVar33 = local_778;
          uVar24 = (int)local_770 - 1;
        }
        uVar18 = uVar10;
        if ((-1 < (int)uVar26) && (uVar18 = uVar24, (int)(uVar8 - iVar9) <= (int)uVar24)) {
          uVar18 = uVar26;
        }
        local_788 = (wchar_t *)0x0;
        local_780 = local_780 & 0xffffffff;
        pwVar33 = pwVar33 + ((longlong)(int)uVar24 - (longlong)(int)uVar18);
        uVar8 = uVar10;
        if ((pwVar33 != (wchar_t *)0x0) && (*pwVar33 != L'\0')) {
          lVar29 = -1;
          do {
            lVar29 = lVar29 + 1;
          } while (pwVar33[lVar29] != L'\0');
          uVar26 = (int)lVar29 + 1;
          local_780 = (ulonglong)uVar26;
          pwVar22 = pwVar32;
          uVar10 = uVar26;
          if (0 < (int)uVar26) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_788,0);
            pwVar22 = (wchar_t *)(local_780 >> 0x20);
            uVar10 = (uint)local_780;
          }
          pwVar32 = local_788;
          uVar8 = (uint)pwVar22;
          FGenericPlatformString::Memcpy(local_788,pwVar33,(longlong)(int)uVar26 * 2);
        }
        if (local_778 != (wchar_t *)0x0) {
          FMemory::Free(local_778);
        }
        uVar27 = local_790 >> 0x20;
        local_788 = (wchar_t *)0x0;
        uVar30 = (ulonglong)local_7b0 & 0xffffffff;
        local_770 = CONCAT44(uVar8,uVar10);
        local_780 = 0;
        local_778 = pwVar32;
      } while( true );
    }
  }
  goto LAB_141765cab;
code_r0x000141764fdf:
  if ((int)local_770 == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (int)local_770 + -1;
  }
  local_750 = (wchar_t *)CONCAT44(local_750._4_4_,iVar9);
  if (0 < iVar9) {
    iVar9 = iVar20 + 1;
    local_7b0 = (wchar_t *)CONCAT44(local_7b0._4_4_,iVar9);
    local_790 = CONCAT44(local_790._4_4_,iVar9);
    if (iVar31 < iVar9) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (&local_798,uVar30);
      local_7b0 = (wchar_t *)CONCAT44(local_7b0._4_4_,(int)local_790);
    }
    pwVar12 = local_778;
    plVar13 = local_798 + (longlong)iVar20 * 3;
    if (plVar13 != (longlong *)0x0) {
      *plVar13 = 0;
      lVar29 = (longlong)(int)local_770;
      *(int *)(plVar13 + 1) = (int)local_770;
      if ((int)local_770 == 0) {
        *(undefined4 *)((longlong)plVar13 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar13,local_770 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop((void *)*plVar13,pwVar12,lVar29 * 2);
      }
      *(undefined1 *)(plVar13 + 2) = 0;
    }
  }
  pwVar12 = local_738;
  local_740 = (ulonglong)local_740._4_4_ << 0x20;
  local_728 = local_738;
  local_718 = 0xffffffff;
  local_720 = *(longlong *)(local_738 + 0x1c);
  local_714 = 0x101;
  local_712 = 0;
  FUN_140472e10(&local_728);
  lVar29 = local_720;
  while (lVar29 != 0) {
    pwVar12 = (wchar_t *)0x0;
    local_768 = *(wchar_t **)(*(longlong *)(lVar29 + 0x10) + 0x18);
    local_720 = lVar29;
    FName::ToString(&local_768,&local_7c8);
    local_788 = *(wchar_t **)(lVar29 + 0x18);
    uVar2 = *(undefined4 *)(lVar29 + 0x44);
    pwVar32 = L"";
    if ((uint)local_7c0 != 0) {
      pwVar32 = local_7c8;
    }
    FName::ToString(&local_788,&local_710);
    pwVar33 = L"";
    if ((int)local_708 != 0) {
      pwVar33 = local_710;
    }
    local_7f0 = (longlong *)CONCAT44(local_7f0._4_4_,*(undefined4 *)(lVar29 + 0x34));
    local_7f8 = (wchar_t *)CONCAT44(local_7f8._4_4_,*(undefined4 *)(lVar29 + 0x30));
    local_7e8 = pwVar32;
    FString::PrintfImpl(&local_700,L"%s at offset %d; %dx %d bytes of type %s",pwVar33,uVar2);
    pwVar32 = L"";
    if ((int)local_6f8 != 0) {
      pwVar32 = local_700;
    }
    FOutputDevice::LogfImpl(local_758,L"    Prop %s",pwVar32);
    if (local_700 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_710 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_7c8 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    uVar30 = *(ulonglong *)(lVar29 + 0x38);
    ppuVar34 = &PTR_u_CPF_Edit_1464b5150;
    uVar27 = 0;
    local_7a0 = local_7a0 & 0xffffffff;
    iVar9 = 0;
    lVar35 = 0x38;
    local_7a8 = pwVar12;
    do {
      puVar3 = *ppuVar34;
      if ((uVar30 & 1) != 0) {
        iVar20 = iVar9 + 1;
        local_7a0 = CONCAT44(local_7a0._4_4_,iVar20);
        if ((int)uVar27 < iVar20) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_7a8,iVar9);
          uVar27 = local_7a0 >> 0x20;
          pwVar12 = local_7a8;
          iVar20 = (int)local_7a0;
        }
        *(undefined **)(pwVar12 + (longlong)iVar9 * 4) = puVar3;
        iVar9 = iVar20;
      }
      uVar11 = local_758;
      uVar30 = uVar30 >> 1;
      ppuVar34 = ppuVar34 + 1;
      lVar35 = lVar35 + -1;
    } while (lVar35 != 0);
    uVar30 = (ulonglong)((longlong)(pwVar12 + (longlong)iVar9 * 4) + (7 - (longlong)pwVar12)) >> 3;
    if (pwVar12 + (longlong)iVar9 * 4 < pwVar12) {
      uVar30 = 0;
    }
    if (uVar30 != 0) {
      uVar27 = 0;
      pwVar32 = pwVar12;
      do {
        FOutputDevice::LogfImpl(uVar11,L"      Flag %s",*(undefined8 *)pwVar32);
        uVar27 = uVar27 + 1;
        pwVar32 = pwVar32 + 4;
        lVar29 = local_720;
      } while (uVar27 != uVar30);
    }
    if (pwVar12 != (wchar_t *)0x0) {
      FMemory::Free(pwVar12);
    }
    local_720 = *(longlong *)(lVar29 + 0x28);
    FUN_140472e10(&local_728);
    pwVar12 = local_738;
    lVar29 = local_720;
  }
  local_720 = *(longlong *)(pwVar12 + 0x1c);
  local_718 = 0xffffffff;
  local_714 = 0x101;
  local_712 = 0;
  local_728 = pwVar12;
  FUN_140472e10(&local_728);
  if (local_720 == 0) {
LAB_141765c69:
    FOutputDevice::LogfImpl(local_758,L"- No matches");
  }
  else {
    do {
      lVar29 = local_720;
      local_788 = *(wchar_t **)(local_720 + 0x18);
      FName::ToString(&local_788,&local_768);
      uVar27 = 0;
      plVar13 = local_798;
      uVar30 = uVar27;
      uVar8 = local_760;
      if (0 < (int)local_7b0) {
        do {
          iVar9 = (int)plVar13[uVar30 * 3 + 1];
          if ((iVar9 != 0) && (0 < iVar9 + -1)) {
            if (iVar9 == 0) {
              puVar25 = &DAT_143f3eda8;
            }
            else {
              puVar25 = (undefined2 *)plVar13[uVar30 * 3];
            }
            local_7f8 = (wchar_t *)CONCAT44(local_7f8._4_4_,0xffffffff);
            iVar9 = FUN_141592950(&local_768,puVar25,1);
            lVar29 = local_720;
            if (iVar9 == -1) goto LAB_141765c35;
            if (uVar30 == 0) {
              bVar36 = iVar9 == 0;
LAB_14176570c:
              if (!bVar36) goto LAB_141765c35;
            }
            else if ((0 < (longlong)uVar30) && ((char)plVar13[uVar30 * 3 + -1] == '\0')) {
              bVar36 = iVar9 == 1;
              goto LAB_14176570c;
            }
            if (local_760 == 0) {
              iVar20 = 0;
            }
            else {
              iVar20 = local_760 - 1;
            }
            iVar31 = (int)(plVar13 + uVar30 * 3)[1];
            if (iVar31 == 0) {
              iVar31 = 0;
            }
            else {
              iVar31 = iVar31 + -1;
            }
            pwVar12 = (wchar_t *)0x0;
            uVar10 = (iVar20 - iVar31) - iVar9;
            uVar8 = 0;
            if (local_760 == 0) {
              pwVar32 = L"";
              uVar26 = uVar8;
            }
            else {
              pwVar32 = local_768;
              uVar26 = local_760 - 1;
            }
            uVar18 = 0;
            uVar24 = uVar18;
            if ((-1 < (int)uVar10) && (uVar24 = uVar26, (int)uVar10 < (int)uVar26)) {
              uVar24 = uVar10;
            }
            local_738 = (wchar_t *)0x0;
            local_730 = local_730 & 0xffffffff;
            pwVar32 = pwVar32 + ((longlong)(int)uVar26 - (longlong)(int)uVar24);
            pwVar33 = pwVar12;
            if ((pwVar32 != (wchar_t *)0x0) && (*pwVar32 != L'\0')) {
              lVar29 = -1;
              do {
                lVar29 = lVar29 + 1;
              } while (pwVar32[lVar29] != L'\0');
              uVar10 = (int)lVar29 + 1;
              local_730 = (ulonglong)uVar10;
              uVar8 = uVar10;
              if (0 < (int)uVar10) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_738,0);
                pwVar12 = (wchar_t *)(local_730 >> 0x20);
                uVar8 = (uint)local_730;
              }
              pwVar33 = local_738;
              uVar18 = (uint)pwVar12;
              FGenericPlatformString::Memcpy(local_738,pwVar32,(longlong)(int)uVar10 * 2);
            }
            if (local_768 != (wchar_t *)0x0) {
              FMemory::Free(local_768);
            }
            local_738 = (wchar_t *)0x0;
            local_730 = 0;
            plVar13 = local_798;
            local_768 = pwVar33;
            local_760 = uVar8;
            local_75c = uVar18;
          }
          uVar10 = (int)uVar27 + 1;
          uVar27 = (ulonglong)uVar10;
          lVar29 = local_720;
          uVar30 = uVar30 + 1;
        } while ((int)uVar10 < (int)local_7b0);
      }
      pwVar12 = (wchar_t *)0x0;
      iVar9 = 0;
      if ((int)local_750 < 1) {
        if ((char)local_798[(longlong)((int)local_7b0 + -1) * 3 + 2] == '\0') {
          iVar20 = iVar9;
          if (uVar8 != 0) {
            iVar20 = uVar8 - 1;
          }
          bVar36 = iVar20 == 1;
          goto LAB_14176584c;
        }
LAB_141765857:
        local_7c8 = (wchar_t *)0x0;
        local_7c0 = 0;
        lVar35 = UStructProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar29 + 0x10) + 0x90) < *(int *)(lVar35 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar29 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar35 + 0x90) * 8) != lVar35 + 0x88)) {
          bVar36 = false;
        }
        else {
          bVar36 = true;
        }
        pwVar32 = pwVar12;
        if (bVar36) {
          local_788 = *(wchar_t **)(*(longlong *)(lVar29 + 0x70) + 0x18);
          FName::ToString(&local_788,&local_6c0);
          psVar21 = &DAT_143f3eda8;
          if (local_6b8 != 0) {
            psVar21 = local_6c0;
          }
          if (psVar21 != (short *)0x0) {
            pwVar33 = pwVar12;
            if (*psVar21 != 0) {
              lVar35 = -1;
              do {
                lVar35 = lVar35 + 1;
              } while (psVar21[lVar35] != 0);
              pwVar33 = (wchar_t *)(ulonglong)((int)lVar35 + 1);
            }
            iVar20 = (int)pwVar33;
            if (iVar20 != 0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_7c8,pwVar33);
              pwVar12 = (wchar_t *)(local_7c0 & 0xffffffff);
              pwVar32 = local_7c8;
              iVar9 = local_7c0._4_4_;
            }
            uVar8 = (int)pwVar12 + iVar20;
            local_7c0 = CONCAT44(local_7c0._4_4_,uVar8);
            if (iVar9 < (int)uVar8) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_7c8,pwVar12);
              pwVar32 = local_7c8;
              uVar8 = (uint)local_7c0;
            }
            pwVar12 = (wchar_t *)(ulonglong)uVar8;
            if (iVar20 != 0) {
              _guard_xfg_dispatch_icall_nop(pwVar32,psVar21,(longlong)iVar20 * 2);
            }
          }
          iVar9 = (int)pwVar12;
          if (local_6c0 != (short *)0x0) {
            FMemory::Free();
          }
        }
        else {
          lVar35 = UClassProperty::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar29 + 0x10) + 0x90) < *(int *)(lVar35 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar29 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar35 + 0x90) * 8) != lVar35 + 0x88)) {
            bVar36 = false;
          }
          else {
            bVar36 = true;
          }
          if (bVar36) {
            local_788 = *(wchar_t **)(*(longlong *)(lVar29 + 0x78) + 0x18);
            FName::ToString(&local_788,&local_6b0);
            puVar25 = &DAT_143f3eda8;
            if (local_6a8 != 0) {
              puVar25 = local_6b0;
            }
            FString::PrintfImpl(&local_7a8,L"SubclassOf<%s>",puVar25);
            pwVar32 = local_7a8;
            iVar9 = (int)local_7a0;
            local_7a8 = (wchar_t *)0x0;
            local_7c0 = CONCAT44(local_7a0._4_4_,(uint)local_7c0);
            local_7a0 = 0;
            if (local_6b0 != (undefined2 *)0x0) {
              FMemory::Free();
            }
          }
          else {
            lVar35 = USoftClassProperty::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar29 + 0x10) + 0x90) < *(int *)(lVar35 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar29 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar35 + 0x90) * 8) != lVar35 + 0x88)) {
              bVar36 = false;
            }
            else {
              bVar36 = true;
            }
            if (bVar36) {
              local_788 = *(wchar_t **)(*(longlong *)(lVar29 + 0x78) + 0x18);
              FName::ToString(&local_788,&local_6f0);
              psVar21 = &DAT_143f3eda8;
              if (local_6e8 != 0) {
                psVar21 = local_6f0;
              }
              FString::PrintfImpl(&local_710,L"SoftClassPtr<%s>",psVar21);
              pwVar32 = local_710;
              iVar9 = (int)local_708;
              local_710 = (wchar_t *)0x0;
              local_7c0 = CONCAT44(local_708._4_4_,(uint)local_7c0);
              local_708 = 0;
              if (local_6f0 != (short *)0x0) {
                FMemory::Free();
              }
            }
            else {
              lVar14 = UObjectPropertyBase::GetPrivateStaticClass();
              lVar35 = *(longlong *)(lVar29 + 0x10);
              if ((*(int *)(lVar35 + 0x90) < *(int *)(lVar14 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(lVar35 + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8) !=
                  lVar14 + 0x88)) {
                bVar36 = false;
              }
              else {
                bVar36 = true;
              }
              if (bVar36) {
                local_788 = *(wchar_t **)(*(longlong *)(lVar29 + 0x70) + 0x18);
                FName::ToString(&local_788,&local_6e0);
                psVar21 = &DAT_143f3eda8;
                if (local_6d8 != 0) {
                  psVar21 = local_6e0;
                }
                if (psVar21 != (short *)0x0) {
                  pwVar33 = pwVar12;
                  if (*psVar21 != 0) {
                    lVar35 = -1;
                    do {
                      lVar35 = lVar35 + 1;
                    } while (psVar21[lVar35] != 0);
                    pwVar33 = (wchar_t *)(ulonglong)((int)lVar35 + 1);
                  }
                  iVar20 = (int)pwVar33;
                  if (iVar20 != 0) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_7c8,pwVar33);
                    pwVar12 = (wchar_t *)(local_7c0 & 0xffffffff);
                    pwVar32 = local_7c8;
                    iVar9 = local_7c0._4_4_;
                  }
                  uVar8 = (int)pwVar12 + iVar20;
                  local_7c0 = CONCAT44(local_7c0._4_4_,uVar8);
                  if (iVar9 < (int)uVar8) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_7c8,pwVar12);
                    pwVar32 = local_7c8;
                    uVar8 = (uint)local_7c0;
                  }
                  pwVar12 = (wchar_t *)(ulonglong)uVar8;
                  if (iVar20 != 0) {
                    _guard_xfg_dispatch_icall_nop(pwVar32,psVar21,(longlong)iVar20 * 2);
                  }
                }
                iVar9 = (int)pwVar12;
                if (local_6e0 != (short *)0x0) {
                  FMemory::Free();
                }
              }
              else {
                local_788 = *(wchar_t **)(lVar35 + 0x18);
                FName::ToString(&local_788,&local_700);
                pwVar32 = local_700;
                iVar9 = (int)local_6f8;
                local_7c0 = CONCAT44(local_6f8._4_4_,(uint)local_7c0);
                local_6f8 = 0;
                local_700 = (wchar_t *)0x0;
              }
            }
          }
        }
        local_788 = *(wchar_t **)(lVar29 + 0x18);
        pwVar12 = L"";
        if (iVar9 != 0) {
          pwVar12 = pwVar32;
        }
        FName::ToString(&local_788,&local_6d0);
        iVar9 = (int)local_740;
        local_7f8 = pwVar12;
        FOutputDevice::LogfImpl(local_758,L"%i) %s (%s)",local_740 & 0xffffffff);
        if (local_6d0 != (short *)0x0) {
          FMemory::Free();
        }
        iVar9 = iVar9 + 1;
        local_740 = CONCAT44(local_740._4_4_,iVar9);
        if (pwVar32 != (wchar_t *)0x0) {
          FMemory::Free(pwVar32);
        }
      }
      else {
        if (uVar8 == 0) {
          bVar36 = true;
        }
        else {
          bVar36 = uVar8 == 1;
        }
LAB_14176584c:
        if (bVar36) goto LAB_141765857;
LAB_141765c35:
        iVar9 = (int)local_740;
      }
      if (local_768 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      local_720 = *(longlong *)(lVar29 + 0x28);
      FUN_140472e10(&local_728);
    } while (local_720 != 0);
    if (iVar9 == 0) goto LAB_141765c69;
  }
  plVar4 = local_798;
  plVar13 = local_798;
  for (iVar9 = (int)local_7b0; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 3;
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
LAB_141765cab:
  if (local_778 == (wchar_t *)0x0) {
    return 1;
  }
  FMemory::Free();
  return 1;
}



// FUNCTION 141766700 FUN_141766700 body=1188 status=ok
// SIG undefined FUN_141766700(void)

void FUN_141766700(void)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  
  if (DAT_1469e7e13 == '\0') {
    return;
  }
  FUN_141733100();
  if (DAT_1469e7a80 != 0) {
    iVar9 = *(int *)(DAT_1469e7a80 + 0xc);
    if (iVar9 < (int)DAT_1469e91c4) {
      uVar6 = iVar9 >> 0x1f & 0xffff;
      uVar2 = iVar9 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) & 0xbfffffff;
    DAT_1469e7a80 = 0;
  }
  FUN_14173d060(0,0x3b03126f);
  uVar2 = 0;
  LOCK();
  DAT_1469e72ac = 0;
  UNLOCK();
  if (0 < (int)DAT_1469e91c4) {
    do {
      uVar7 = (int)uVar2 >> 0x1f & 0xffff;
      uVar6 = uVar2 + uVar7;
      lVar3 = (longlong)(int)((uVar6 & 0xffff) - uVar7);
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8);
      plVar8 = (longlong *)(lVar4 + lVar3 * 0x18);
      if (*(longlong *)(lVar4 + lVar3 * 0x18) != 0) {
        do {
          LOCK();
          DAT_1469e72ac = DAT_1469e72ac + 1;
          UNLOCK();
          lVar4 = *plVar8;
          uVar6 = uVar2;
          if (lVar4 != 0) {
            lVar3 = FUN_14171c410();
            lVar4 = *(longlong *)(lVar4 + 0x10);
            if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar3 + 0x90)) ||
               (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
                lVar3 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (!bVar1) {
              *(uint *)(plVar8 + 1) = *(uint *)(plVar8 + 1) | 0x10000000;
            }
          }
          do {
            uVar2 = uVar6 + 1;
            if ((int)DAT_1469e91c4 <= (int)uVar2) goto LAB_14176689c;
            uVar5 = uVar2 & 0xffff;
            uVar7 = uVar2;
            if ((int)uVar2 < 0) {
              uVar7 = uVar6 + 0x10000;
              uVar5 = uVar5 - 0x10000;
            }
            lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8);
            plVar8 = (longlong *)(lVar4 + (longlong)(int)uVar5 * 0x18);
            uVar6 = uVar2;
          } while (*(longlong *)(lVar4 + (longlong)(int)uVar5 * 0x18) == 0);
        } while( true );
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < (int)DAT_1469e91c4);
  }
LAB_14176689c:
  uVar2 = 0;
  DAT_1468c2185 = 1;
  if (0 < (int)DAT_1469e91c4) {
    do {
      uVar7 = uVar2 & 0xffff;
      uVar6 = uVar2;
      if ((int)uVar2 < 0) {
        uVar6 = uVar2 + 0xffff;
        uVar7 = uVar7 - 0x10000;
      }
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8);
      plVar8 = (longlong *)(lVar4 + (longlong)(int)uVar7 * 0x18);
      lVar3 = DAT_1469e91b0;
      iVar9 = (int)DAT_1469e91c4;
      if (*(longlong *)(lVar4 + (longlong)(int)uVar7 * 0x18) != 0) {
        do {
          uVar6 = uVar2;
          if ((*(uint *)(plVar8 + 1) >> 0x1c & 1) != 0) {
            plVar8 = (longlong *)*plVar8;
            if ((*(uint *)(plVar8 + 1) >> 0xf & 1) == 0) {
              *(uint *)(plVar8 + 1) = *(uint *)(plVar8 + 1) | 0x8000;
              (**(code **)(*plVar8 + 0x88))();
              lVar3 = DAT_1469e91b0;
              iVar9 = (int)DAT_1469e91c4;
            }
          }
          do {
            uVar2 = uVar6 + 1;
            if (iVar9 <= (int)uVar2) goto LAB_14176697c;
            uVar5 = uVar2 & 0xffff;
            uVar7 = uVar2;
            if ((int)uVar2 < 0) {
              uVar7 = uVar6 + 0x10000;
              uVar5 = uVar5 - 0x10000;
            }
            lVar4 = *(longlong *)(lVar3 + (longlong)((int)uVar7 >> 0x10) * 8);
            plVar8 = (longlong *)(lVar4 + (longlong)(int)uVar5 * 0x18);
            uVar6 = uVar2;
          } while (*(longlong *)(lVar4 + (longlong)(int)uVar5 * 0x18) == 0);
        } while( true );
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < (int)DAT_1469e91c4);
  }
LAB_14176697c:
  FUN_14173d060(0,0x3b03126f);
  uVar2 = 0;
  if (0 < (int)DAT_1469e91c4) {
    do {
      uVar7 = uVar2 & 0xffff;
      uVar6 = uVar2;
      if ((int)uVar2 < 0) {
        uVar6 = uVar2 + 0xffff;
        uVar7 = uVar7 - 0x10000;
      }
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8);
      lVar4 = lVar3 + (longlong)(int)uVar7 * 0x18;
      if (*(longlong *)(lVar3 + (longlong)(int)uVar7 * 0x18) != 0) {
        do {
          *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 0x10000000;
          uVar6 = uVar2;
          do {
            uVar2 = uVar6 + 1;
            if ((int)DAT_1469e91c4 <= (int)uVar2) goto LAB_141766a5e;
            uVar5 = uVar2 & 0xffff;
            uVar7 = uVar2;
            if ((int)uVar2 < 0) {
              uVar7 = uVar6 + 0x10000;
              uVar5 = uVar5 - 0x10000;
            }
            lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8);
            lVar4 = lVar3 + (longlong)(int)uVar5 * 0x18;
            uVar6 = uVar2;
          } while (*(longlong *)(lVar3 + (longlong)(int)uVar5 * 0x18) == 0);
        } while( true );
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < (int)DAT_1469e91c4);
  }
LAB_141766a5e:
  uVar2 = 0;
  if (0 < (int)DAT_1469e91c4) {
    do {
      uVar7 = uVar2 & 0xffff;
      uVar6 = uVar2;
      if ((int)uVar2 < 0) {
        uVar6 = uVar2 + 0xffff;
        uVar7 = uVar7 - 0x10000;
      }
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8);
      plVar8 = (longlong *)(lVar4 + (longlong)(int)uVar7 * 0x18);
      lVar3 = DAT_1469e91b0;
      iVar9 = (int)DAT_1469e91c4;
      if (*(longlong *)(lVar4 + (longlong)(int)uVar7 * 0x18) != 0) {
        do {
          uVar6 = uVar2;
          if ((*(uint *)(plVar8 + 1) >> 0x1c & 1) != 0) {
            plVar8 = (longlong *)*plVar8;
            if ((*(uint *)(plVar8 + 1) >> 0xf & 1) == 0) {
              *(uint *)(plVar8 + 1) = *(uint *)(plVar8 + 1) | 0x8000;
              (**(code **)(*plVar8 + 0x88))();
              lVar3 = DAT_1469e91b0;
              iVar9 = (int)DAT_1469e91c4;
            }
          }
          do {
            uVar2 = uVar6 + 1;
            if (iVar9 <= (int)uVar2) goto LAB_141766b2c;
            uVar5 = uVar2 & 0xffff;
            uVar7 = uVar2;
            if ((int)uVar2 < 0) {
              uVar7 = uVar6 + 0x10000;
              uVar5 = uVar5 - 0x10000;
            }
            lVar4 = *(longlong *)(lVar3 + (longlong)((int)uVar7 >> 0x10) * 8);
            plVar8 = (longlong *)(lVar4 + (longlong)(int)uVar5 * 0x18);
            uVar6 = uVar2;
          } while (*(longlong *)(lVar4 + (longlong)(int)uVar5 * 0x18) == 0);
        } while( true );
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < (int)DAT_1469e91c4);
  }
LAB_141766b2c:
  FUN_14173d060(0,0x3b03126f);
  FUN_14179b6d0();
  puStack_10 = local_res8;
  local_res8[0] = 0;
  local_18 = 0x406ddef0;
  uStack_14 = 1;
  lVar4 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
  *(undefined4 *)(lVar4 + 0x40) = 0;
  if (*(int *)(lVar4 + 0x44) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(lVar4 + 0x38,0);
  }
  FUN_141717540();
  CleanupGCArrayPools();
  FUN_1417a3cd0();
  CleanupCachedArchetypes();
  return;
}



// FUNCTION 141766bc0 StaticShutdownAfterError body=237 status=ok
// SIG undefined StaticShutdownAfterError(void)

void StaticShutdownAfterError(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  
  if ((DAT_1469e7e13 != '\0') && (DAT_1469e7af8 == '\0')) {
    uVar5 = 0;
    DAT_1469e7af8 = '\x01';
    if (0 < (int)DAT_1469e91c4) {
      while( true ) {
        uVar2 = uVar5 & 0xffff;
        uVar1 = uVar5;
        if ((int)uVar5 < 0) {
          uVar1 = uVar5 + 0xffff;
          uVar2 = uVar2 - 0x10000;
        }
        plVar4 = *(longlong **)
                  (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) +
                  (longlong)(int)uVar2 * 0x18);
        if (plVar4 != (longlong *)0x0) break;
        uVar5 = uVar5 + 1;
        if ((int)DAT_1469e91c4 <= (int)uVar5) {
          return;
        }
      }
      do {
        (**(code **)(*plVar4 + 0xb0))(plVar4);
        uVar1 = uVar5;
        do {
          uVar5 = uVar1 + 1;
          if ((int)DAT_1469e91c4 <= (int)uVar5) {
            return;
          }
          uVar3 = uVar5 & 0xffff;
          uVar2 = uVar5;
          if ((int)uVar5 < 0) {
            uVar2 = uVar1 + 0x10000;
            uVar3 = uVar3 - 0x10000;
          }
          plVar4 = *(longlong **)
                    (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                    (longlong)(int)uVar3 * 0x18);
          uVar1 = uVar5;
        } while (plVar4 == (longlong *)0x0);
      } while( true );
    }
  }
  return;
}



// FUNCTION 141766cc0 TagSubobjects body=331 status=ok
// SIG undefined TagSubobjects(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::TagSubobjects(undefined8 param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [32];
  undefined1 local_88 [64];
  longlong local_48;
  undefined4 local_40;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_c8 = 1;
  local_d0 = 1;
  local_d8 = 1;
  local_b8 = 0;
  local_b0 = 0;
  FReferenceFinder::FReferenceFinder(local_a8,&local_b8,param_1,0);
  FReferenceFinder::FindReferences(local_a8,param_1,0,0);
  uVar3 = 0;
  while ((iVar5 = (int)uVar3, -1 < iVar5 && (iVar5 < (int)local_b0))) {
    plVar1 = *(longlong **)(local_b8 + (longlong)iVar5 * 8);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = *(uint *)((longlong)plVar1 + 0xc);
      uVar3 = 0;
      if ((int)uVar2 < (int)DAT_1469e91c4) {
        uVar4 = uVar2 & 0xffff;
        if ((int)uVar2 < 0) {
          uVar2 = uVar2 + 0xffff;
          uVar4 = uVar4 - 0x10000;
        }
        uVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                (longlong)(int)uVar4 * 0x18;
      }
      if ((*(uint *)(uVar3 + 8) >> 0x1e & 1) == 0) {
        *(uint *)(plVar1 + 1) = *(uint *)(plVar1 + 1) | param_2;
        (**(code **)(*plVar1 + 0x1a8))(plVar1,param_2);
      }
    }
    uVar3 = (ulonglong)(iVar5 + 1);
  }
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_88);
  FReferenceCollector::~FReferenceCollector(local_a8);
  if (local_b8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141766e10 ToString body=213 status=ok
// SIG undefined ToString(void)

undefined8 * FPrimaryAssetId::ToString(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *local_28;
  int local_20;
  longlong local_18 [2];
  
  if ((*param_1 == 0) || (param_1[1] == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  puVar1 = (undefined8 *)FName::ToString(param_1 + 1,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FName::ToString(param_1,&local_28);
  puVar3 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar3 = local_28;
  }
  FString::PrintfImpl(param_2,L"%s:%s",puVar3,puVar2);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_18[0] == 0) {
    return param_2;
  }
  FMemory::Free();
  return param_2;
}



// FUNCTION 141766ef0 UsesPerObjectConfig body=34 status=ok
// SIG undefined UsesPerObjectConfig(void)

ulonglong UsesPerObjectConfig(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  if ((*(uint *)(uVar2 + 0xb4) >> 10 & 1) != 0) {
    uVar1 = *(uint *)(param_1 + 8) >> 4;
    uVar2 = (ulonglong)uVar1;
    if ((uVar1 & 1) == 0) {
      return CONCAT71((uint7)(uint3)(*(uint *)(param_1 + 8) >> 0xc),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 141766f20 FUN_141766f20 body=184 status=ok
// SIG undefined FUN_141766f20(void)

undefined8 FUN_141766f20(longlong param_1,ulonglong param_2,longlong param_3)

{
  undefined2 *puVar1;
  undefined8 local_res10 [3];
  undefined2 *local_28;
  int local_20;
  undefined2 *local_18;
  int local_10;
  
  if (((param_2 & 0x20) != 0) && ((*(uint *)(param_1 + 0x38) >> 0xe & 1) != 0)) {
    local_res10[0] = *(undefined8 *)(param_1 + 0x18);
    FName::ToString(local_res10,&local_28);
    puVar1 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar1 = local_28;
    }
    FString::PrintfImpl(&local_18,
                        L"Import failed for \'%s\': property is config (Check to see if the property is listed in the DefaultProperties.  It should only be listed in the specific .ini file)"
                        ,puVar1);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (param_3 != 0) {
      puVar1 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar1 = local_18;
      }
      FOutputDevice::LogfImpl(param_3,&DAT_144d112a4,puVar1);
    }
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    return 0;
  }
  return 1;
}



// FUNCTION 141766fe0 Z_Construct_UClass_UArrayProperty body=164 status=ok
// SIG undefined Z_Construct_UClass_UArrayProperty(void)

longlong Z_Construct_UClass_UArrayProperty(void)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  
  lVar1 = DAT_1469e7b38;
  if (DAT_1469e7b38 == 0) {
    if (DAT_1469e7b28 == 0) {
      FUN_141727780();
      lVar1 = UProperty::StaticClass();
      UObjectForceRegistration(lVar1);
      FUN_141726e60(lVar1,0);
      DAT_1469e7b28 = lVar1;
    }
    lVar1 = UArrayProperty::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FName::FName(local_res8,L"Inner",1);
    UClass::EmitObjectReference(lVar1,0x70,local_res8);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7b38 = lVar1;
  return lVar1;
}



// FUNCTION 141767090 Z_Construct_UClass_UBoolProperty body=114 status=ok
// SIG undefined Z_Construct_UClass_UBoolProperty(void)

longlong Z_Construct_UClass_UBoolProperty(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e7b58;
  if (DAT_1469e7b58 == 0) {
    if (DAT_1469e7b28 == 0) {
      FUN_141727780();
      lVar1 = UProperty::StaticClass();
      UObjectForceRegistration(lVar1);
      FUN_141726e60(lVar1,0);
      DAT_1469e7b28 = lVar1;
    }
    lVar1 = UBoolProperty::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7b58 = lVar1;
  return lVar1;
}



// FUNCTION 141767110 Z_Construct_UClass_UByteProperty body=118 status=ok
// SIG undefined Z_Construct_UClass_UByteProperty(void)

longlong Z_Construct_UClass_UByteProperty(void)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  
  lVar1 = DAT_1469e7b68;
  if (DAT_1469e7b68 == 0) {
    Z_Construct_UClass_UNumericProperty();
    lVar1 = UByteProperty::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FName::FName(local_res8,L"Enum",1);
    UClass::EmitObjectReference(lVar1,0x70,local_res8);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7b68 = lVar1;
  return lVar1;
}



// FUNCTION 141767190 Z_Construct_UClass_ULinkerPlaceholderClass body=72 status=ok
// SIG undefined Z_Construct_UClass_ULinkerPlaceholderClass(void)

longlong Z_Construct_UClass_ULinkerPlaceholderClass(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e7aa0;
  if (DAT_1469e7aa0 == 0) {
    FUN_141727520();
    lVar1 = ULinkerPlaceholderClass::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7aa0 = lVar1;
  return lVar1;
}



// FUNCTION 1417671e0 Z_Construct_UClass_ULinkerPlaceholderExportObject body=72 status=ok
// SIG undefined Z_Construct_UClass_ULinkerPlaceholderExportObject(void)

longlong Z_Construct_UClass_ULinkerPlaceholderExportObject(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e7ab0;
  if (DAT_1469e7ab0 == 0) {
    Z_Construct_UClass_UObject();
    lVar1 = ULinkerPlaceholderExportObject::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7ab0 = lVar1;
  return lVar1;
}



// FUNCTION 141767230 Z_Construct_UClass_ULinkerPlaceholderFunction body=72 status=ok
// SIG undefined Z_Construct_UClass_ULinkerPlaceholderFunction(void)

longlong Z_Construct_UClass_ULinkerPlaceholderFunction(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e7ac0;
  if (DAT_1469e7ac0 == 0) {
    FUN_141727830();
    lVar1 = ULinkerPlaceholderFunction::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7ac0 = lVar1;
  return lVar1;
}



// FUNCTION 141767280 FUN_141767280 body=72 status=ok
// SIG undefined FUN_141767280(void)

longlong FUN_141767280(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e7ad0;
  if (DAT_1469e7ad0 == 0) {
    Z_Construct_UClass_UObject();
    lVar1 = FUN_141758000();
    UObjectForceRegistration(lVar1);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7ad0 = lVar1;
  return lVar1;
}



// FUNCTION 1417672d0 Z_Construct_UClass_UObjectPropertyBase body=164 status=ok
// SIG undefined Z_Construct_UClass_UObjectPropertyBase(void)

longlong Z_Construct_UClass_UObjectPropertyBase(void)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  
  lVar1 = DAT_1469e7b48;
  if (DAT_1469e7b48 == 0) {
    if (DAT_1469e7b28 == 0) {
      FUN_141727780();
      lVar1 = UProperty::StaticClass();
      UObjectForceRegistration(lVar1);
      FUN_141726e60(lVar1,0);
      DAT_1469e7b28 = lVar1;
    }
    lVar1 = UObjectPropertyBase::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FName::FName(local_res8,L"PropertyClass",1);
    UClass::EmitObjectReference(lVar1,0x70,local_res8);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7b48 = lVar1;
  return lVar1;
}



// FUNCTION 141767380 Z_Construct_UClass_UObjectRedirector body=118 status=ok
// SIG undefined Z_Construct_UClass_UObjectRedirector(void)

longlong Z_Construct_UClass_UObjectRedirector(void)

{
  longlong lVar1;
  undefined1 local_res8 [32];
  
  lVar1 = DAT_1469e7b08;
  if (DAT_1469e7b08 == 0) {
    Z_Construct_UClass_UObject();
    lVar1 = UObjectRedirector::GetPrivateStaticClass();
    UObjectForceRegistration(lVar1);
    FName::FName(local_res8,L"DestinationObject",1);
    UClass::EmitObjectReference(lVar1,0x28,local_res8);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7b08 = lVar1;
  return lVar1;
}



// FUNCTION 141767400 Z_Construct_UClass_UPackage body=86 status=ok
// SIG undefined Z_Construct_UClass_UPackage(void)

longlong Z_Construct_UClass_UPackage(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e7b18;
  if (DAT_1469e7b18 == 0) {
    Z_Construct_UClass_UObject();
    lVar1 = UPackage::StaticClass();
    UObjectForceRegistration(lVar1);
    *(code **)(lVar1 + 0xa8) = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7b18 = lVar1;
  return lVar1;
}



// FUNCTION 141767460 Z_Construct_UClass_UProperty body=72 status=ok
// SIG undefined Z_Construct_UClass_UProperty(void)

longlong Z_Construct_UClass_UProperty(void)

{
  longlong lVar1;
  
  lVar1 = DAT_1469e7b28;
  if (DAT_1469e7b28 == 0) {
    FUN_141727780();
    lVar1 = UProperty::StaticClass();
    UObjectForceRegistration(lVar1);
    FUN_141726e60(lVar1,0);
  }
  DAT_1469e7b28 = lVar1;
  return lVar1;
}



// FUNCTION 1417674b0 FUN_1417674b0 body=449 status=ok
// SIG undefined FUN_1417674b0(void)

undefined8 * FUN_1417674b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_1469e7a80;
  uVar2 = ULinkerPlaceholderClass::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_143f3f648;
    FUN_141647440(L"UObject(FVTableHelper& Helper)");
    *puVar3 = &PTR__scalar_deleting_destructor__144d04908;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    FUN_141713660(puVar3 + 0x11);
    *puVar3 = &PTR__scalar_deleting_destructor__144d05220;
    puVar3[0x1a] = 0;
    puVar3[0x1b] = 0;
    puVar3[0x1c] = 0;
    puVar3[0x1d] = 0;
    puVar3[0x1e] = 0;
    puVar3[0x20] = 0;
    puVar3[0x21] = 0;
    puVar3[0x24] = 0;
    puVar3[0x25] = 0;
    *(undefined4 *)(puVar3 + 0x26) = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0x134) = 0;
    puVar3[0x28] = 0;
    *(undefined4 *)(puVar3 + 0x29) = 0;
    puVar3[0x2a] = 0;
    puVar3[0x2b] = 0;
    puVar3[0x2e] = 0;
    puVar3[0x2f] = 0;
    *(undefined4 *)(puVar3 + 0x30) = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0x184) = 0;
    puVar3[0x32] = 0;
    *(undefined4 *)(puVar3 + 0x33) = 0;
    puVar3[0x34] = 0;
    puVar3[0x35] = 0;
    puVar3[0x36] = 0;
    puVar3[0x37] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar3 + 0x38));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar3 + 0x38),4000);
    puVar3[0x3d] = 0;
    puVar3[0x3e] = 0;
    TLinkerImportPlaceholder<UClass>::TLinkerImportPlaceholder<UClass>(puVar3 + 0x40);
    *puVar3 = &PTR__scalar_deleting_destructor__144d1c3b8;
    puVar3[0x40] = &PTR_LAB_144d1c728;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141767800 FUN_141767800 body=119 status=ok
// SIG undefined FUN_141767800(void)

void FUN_141767800(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  char local_res8 [8];
  
  plVar1 = (longlong *)param_2[1];
  if ((char *)plVar1[1] < (char *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
  }
  else {
    local_res8[0] = *(char *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  *(short *)((longlong)*(int *)(param_1 + 0x44) +
            *(int *)(param_4 + 0x3c) * *(int *)(param_1 + 0x34) + param_3) = (short)local_res8[0];
  return;
}



// FUNCTION 141767880 FUN_141767880 body=118 status=ok
// SIG undefined FUN_141767880(void)

void FUN_141767880(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  char local_res8 [8];
  
  plVar1 = (longlong *)param_2[1];
  if ((char *)plVar1[1] < (char *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
  }
  else {
    local_res8[0] = *(char *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  *(int *)((longlong)*(int *)(param_1 + 0x44) +
          *(int *)(param_4 + 0x3c) * *(int *)(param_1 + 0x34) + param_3) = (int)local_res8[0];
  return;
}



// FUNCTION 141767900 FUN_141767900 body=125 status=ok
// SIG undefined FUN_141767900(void)

void FUN_141767900(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  char local_res8 [8];
  
  plVar1 = (longlong *)param_2[1];
  if ((char *)plVar1[1] < (char *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
  }
  else {
    local_res8[0] = *(char *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  *(float *)((longlong)*(int *)(param_1 + 0x44) +
            *(int *)(param_4 + 0x3c) * *(int *)(param_1 + 0x34) + param_3) =
       (float)(int)local_res8[0];
  return;
}



// FUNCTION 141767980 FUN_141767980 body=126 status=ok
// SIG undefined FUN_141767980(void)

void FUN_141767980(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  char local_res8 [8];
  
  plVar1 = (longlong *)param_2[1];
  if ((char *)plVar1[1] < (char *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
  }
  else {
    local_res8[0] = *(char *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  *(double *)
   ((longlong)*(int *)(param_1 + 0x44) +
   *(int *)(param_4 + 0x3c) * *(int *)(param_1 + 0x34) + param_3) = (double)(int)local_res8[0];
  return;
}



// FUNCTION 141767a00 FUN_141767a00 body=118 status=ok
// SIG undefined FUN_141767a00(void)

void FUN_141767a00(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  char local_res8 [8];
  
  plVar1 = (longlong *)param_2[1];
  if ((char *)plVar1[1] < (char *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
  }
  else {
    local_res8[0] = *(char *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  *(longlong *)
   ((longlong)*(int *)(param_1 + 0x44) +
   *(int *)(param_4 + 0x3c) * *(int *)(param_1 + 0x34) + param_3) = (longlong)local_res8[0];
  return;
}



// FUNCTION 141767a80 FUN_141767a80 body=48 status=ok
// SIG undefined FUN_141767a80(void)

void FUN_141767a80(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UProperty::UProperty(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x34) = 8;
    *puVar1 = &PTR_FUN_144d25e98;
  }
  return;
}



// FUNCTION 141767ab0 FUN_141767ab0 body=48 status=ok
// SIG undefined FUN_141767ab0(void)

void FUN_141767ab0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UProperty::UProperty(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x10;
    *puVar1 = &PTR__scalar_deleting_destructor__144d27a68;
  }
  return;
}



// FUNCTION 141767ae0 FUN_141767ae0 body=48 status=ok
// SIG undefined FUN_141767ae0(void)

void FUN_141767ae0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UProperty::UProperty(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x34) = 8;
    *puVar1 = &PTR_FUN_144d24c58;
  }
  return;
}



// FUNCTION 141767b10 FUN_141767b10 body=48 status=ok
// SIG undefined FUN_141767b10(void)

void FUN_141767b10(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UProperty::UProperty(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x34) = 4;
    *puVar1 = &PTR_FUN_144d24878;
  }
  return;
}



// FUNCTION 141767b40 FUN_141767b40 body=48 status=ok
// SIG undefined FUN_141767b40(void)

void FUN_141767b40(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UProperty::UProperty(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x34) = 2;
    *puVar1 = &PTR_FUN_144d23138;
  }
  return;
}



// FUNCTION 141767b70 FUN_141767b70 body=48 status=ok
// SIG undefined FUN_141767b70(void)

void FUN_141767b70(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UProperty::UProperty(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x34) = 8;
    *puVar1 = &PTR_FUN_144d238f8;
  }
  return;
}



// FUNCTION 141767ba0 InternalConstructor<UInt8Property> body=48 status=ok
// SIG undefined InternalConstructor<UInt8Property>(void)

void InternalConstructor<UInt8Property>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UProperty::UProperty(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x34) = 1;
    *puVar1 = &PTR_FUN_144d22d58;
  }
  return;
}



// FUNCTION 141767bd0 FUN_141767bd0 body=48 status=ok
// SIG undefined FUN_141767bd0(void)

void FUN_141767bd0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UProperty::UProperty(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x34) = 4;
    *puVar1 = &PTR_FUN_144d23518;
  }
  return;
}



// FUNCTION 141767c00 FUN_141767c00 body=48 status=ok
// SIG undefined FUN_141767c00(void)

void FUN_141767c00(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UProperty::UProperty(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x10;
    *puVar1 = &PTR__scalar_deleting_destructor__144d265c8;
  }
  return;
}



// FUNCTION 141767c30 InternalConstructor<ULazyObjectProperty> body=48 status=ok
// SIG undefined InternalConstructor<ULazyObjectProperty>(void)

void InternalConstructor<ULazyObjectProperty>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UProperty::UProperty(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x1c;
    *puVar1 = &PTR__scalar_deleting_destructor__144d25768;
  }
  return;
}



// FUNCTION 141767c60 FUN_141767c60 body=48 status=ok
// SIG undefined FUN_141767c60(void)

void FUN_141767c60(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UProperty::UProperty(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x50;
    *puVar1 = &PTR_FUN_144d27018;
  }
  return;
}



// FUNCTION 141767c90 FUN_141767c90 body=48 status=ok
// SIG undefined FUN_141767c90(void)

void FUN_141767c90(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UProperty::UProperty(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x10;
    *puVar1 = &PTR__scalar_deleting_destructor__144d27dd8;
  }
  return;
}



// FUNCTION 141767cc0 FUN_141767cc0 body=48 status=ok
// SIG undefined FUN_141767cc0(void)

void FUN_141767cc0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UProperty::UProperty(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x34) = 8;
    *puVar1 = &PTR_FUN_144d26938;
  }
  return;
}



// FUNCTION 141767cf0 FUN_141767cf0 body=41 status=ok
// SIG undefined FUN_141767cf0(void)

void FUN_141767cf0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UProperty::UProperty(puVar1,param_1);
    *puVar1 = &PTR_FUN_144d1aa00;
  }
  return;
}



// FUNCTION 141767d20 FUN_141767d20 body=48 status=ok
// SIG undefined FUN_141767d20(void)

void FUN_141767d20(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UProperty::UProperty(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x34) = 8;
    *puVar1 = &PTR__scalar_deleting_destructor__144d25038;
  }
  return;
}



// FUNCTION 141767d50 FUN_141767d50 body=48 status=ok
// SIG undefined FUN_141767d50(void)

void FUN_141767d50(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UProperty::UProperty(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x50;
    *puVar1 = &PTR_FUN_144d27388;
  }
  return;
}



// FUNCTION 141767d80 FUN_141767d80 body=48 status=ok
// SIG undefined FUN_141767d80(void)

void FUN_141767d80(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UProperty::UProperty(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x28;
    *puVar1 = &PTR_FUN_144d26230;
  }
  return;
}



// FUNCTION 141767db0 FUN_141767db0 body=48 status=ok
// SIG undefined FUN_141767db0(void)

void FUN_141767db0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UProperty::UProperty(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x28;
    *puVar1 = &PTR__scalar_deleting_destructor__144d25b00;
  }
  return;
}



// FUNCTION 141767de0 FUN_141767de0 body=48 status=ok
// SIG undefined FUN_141767de0(void)

void FUN_141767de0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UProperty::UProperty(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x10;
    *puVar1 = &PTR_FUN_144d26ca8;
  }
  return;
}



// FUNCTION 141767e10 FUN_141767e10 body=41 status=ok
// SIG undefined FUN_141767e10(void)

void FUN_141767e10(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UProperty::UProperty(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144d276f8;
  }
  return;
}



// FUNCTION 141767e40 FUN_141767e40 body=48 status=ok
// SIG undefined FUN_141767e40(void)

void FUN_141767e40(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UProperty::UProperty(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x34) = 2;
    *puVar1 = &PTR_FUN_144d23cd8;
  }
  return;
}



// FUNCTION 141767e70 FUN_141767e70 body=48 status=ok
// SIG undefined FUN_141767e70(void)

void FUN_141767e70(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UProperty::UProperty(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x34) = 4;
    *puVar1 = &PTR_FUN_144d240b8;
  }
  return;
}



// FUNCTION 141767ea0 FUN_141767ea0 body=48 status=ok
// SIG undefined FUN_141767ea0(void)

void FUN_141767ea0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UProperty::UProperty(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x34) = 8;
    *puVar1 = &PTR_FUN_144d24498;
  }
  return;
}



// FUNCTION 141767ed0 FUN_141767ed0 body=48 status=ok
// SIG undefined FUN_141767ed0(void)

void FUN_141767ed0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UProperty::UProperty(puVar1,param_1);
    *(undefined4 *)((longlong)puVar1 + 0x34) = 8;
    *puVar1 = &PTR__scalar_deleting_destructor__144d253d0;
  }
  return;
}



// FUNCTION 141767f00 InternalVTableHelperCtorCaller<UClassProperty> body=143 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UClassProperty>(void)

undefined8 * InternalVTableHelperCtorCaller<UClassProperty>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = UClassProperty::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    *puVar3 = &PTR_FUN_144d25e98;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141767f90 InternalVTableHelperCtorCaller<UDelegateProperty> body=143 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UDelegateProperty>(void)

undefined8 * InternalVTableHelperCtorCaller<UDelegateProperty>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = UDelegateProperty::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    *puVar3 = &PTR__scalar_deleting_destructor__144d27a68;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141768020 InternalVTableHelperCtorCaller<UDoubleProperty> body=143 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UDoubleProperty>(void)

undefined8 * InternalVTableHelperCtorCaller<UDoubleProperty>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = UDoubleProperty::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    *puVar3 = &PTR_FUN_144d24c58;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1417680b0 InternalVTableHelperCtorCaller<UFloatProperty> body=143 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UFloatProperty>(void)

undefined8 * InternalVTableHelperCtorCaller<UFloatProperty>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = UFloatProperty::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    *puVar3 = &PTR_FUN_144d24878;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141768140 InternalVTableHelperCtorCaller<UInt16Property> body=143 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UInt16Property>(void)

undefined8 * InternalVTableHelperCtorCaller<UInt16Property>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = UInt16Property::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    *puVar3 = &PTR_FUN_144d23138;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1417681d0 InternalVTableHelperCtorCaller<UInt64Property> body=143 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UInt64Property>(void)

undefined8 * InternalVTableHelperCtorCaller<UInt64Property>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = UInt64Property::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    *puVar3 = &PTR_FUN_144d238f8;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141768260 InternalVTableHelperCtorCaller<UInt8Property> body=143 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UInt8Property>(void)

undefined8 * InternalVTableHelperCtorCaller<UInt8Property>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = UInt8Property::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    *puVar3 = &PTR_FUN_144d22d58;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1417682f0 InternalVTableHelperCtorCaller<UIntProperty> body=143 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UIntProperty>(void)

undefined8 * InternalVTableHelperCtorCaller<UIntProperty>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = UIntProperty::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    *puVar3 = &PTR_FUN_144d23518;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141768380 InternalVTableHelperCtorCaller<UInterfaceProperty> body=143 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UInterfaceProperty>(void)

undefined8 * InternalVTableHelperCtorCaller<UInterfaceProperty>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = UInterfaceProperty::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    *puVar3 = &PTR__scalar_deleting_destructor__144d265c8;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141768410 InternalVTableHelperCtorCaller<ULazyObjectProperty> body=143 status=ok
// SIG undefined InternalVTableHelperCtorCaller<ULazyObjectProperty>(void)

undefined8 * InternalVTableHelperCtorCaller<ULazyObjectProperty>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = ULazyObjectProperty::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    *puVar3 = &PTR__scalar_deleting_destructor__144d25768;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1417684a0 InternalVTableHelperCtorCaller<UMapProperty> body=143 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UMapProperty>(void)

undefined8 * InternalVTableHelperCtorCaller<UMapProperty>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = UMapProperty::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    *puVar3 = &PTR_FUN_144d27018;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141768530 InternalVTableHelperCtorCaller<UMulticastDelegateProperty> body=143 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UMulticastDelegateProperty>(void)

undefined8 * InternalVTableHelperCtorCaller<UMulticastDelegateProperty>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = UMulticastDelegateProperty::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    *puVar3 = &PTR__scalar_deleting_destructor__144d27dd8;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1417685c0 InternalVTableHelperCtorCaller<UNameProperty> body=143 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UNameProperty>(void)

undefined8 * InternalVTableHelperCtorCaller<UNameProperty>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = UNameProperty::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    *puVar3 = &PTR_FUN_144d26938;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141768650 InternalVTableHelperCtorCaller<UNumericProperty> body=143 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UNumericProperty>(void)

undefined8 * InternalVTableHelperCtorCaller<UNumericProperty>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = UNumericProperty::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    *puVar3 = &PTR_FUN_144d1aa00;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1417686e0 InternalVTableHelperCtorCaller<UObjectProperty> body=143 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UObjectProperty>(void)

undefined8 * InternalVTableHelperCtorCaller<UObjectProperty>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = UObjectProperty::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    *puVar3 = &PTR__scalar_deleting_destructor__144d25038;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141768770 InternalVTableHelperCtorCaller<USetProperty> body=143 status=ok
// SIG undefined InternalVTableHelperCtorCaller<USetProperty>(void)

undefined8 * InternalVTableHelperCtorCaller<USetProperty>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = USetProperty::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    *puVar3 = &PTR_FUN_144d27388;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141768800 InternalVTableHelperCtorCaller<USoftClassProperty> body=143 status=ok
// SIG undefined InternalVTableHelperCtorCaller<USoftClassProperty>(void)

undefined8 * InternalVTableHelperCtorCaller<USoftClassProperty>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = USoftClassProperty::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    *puVar3 = &PTR_FUN_144d26230;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141768890 InternalVTableHelperCtorCaller<USoftObjectProperty> body=143 status=ok
// SIG undefined InternalVTableHelperCtorCaller<USoftObjectProperty>(void)

undefined8 * InternalVTableHelperCtorCaller<USoftObjectProperty>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = USoftObjectProperty::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    *puVar3 = &PTR__scalar_deleting_destructor__144d25b00;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141768920 InternalVTableHelperCtorCaller<UStrProperty> body=143 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UStrProperty>(void)

undefined8 * InternalVTableHelperCtorCaller<UStrProperty>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = UStrProperty::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    *puVar3 = &PTR_FUN_144d26ca8;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1417689b0 InternalVTableHelperCtorCaller<UStructProperty> body=143 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UStructProperty>(void)

undefined8 * InternalVTableHelperCtorCaller<UStructProperty>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = UStructProperty::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    *puVar3 = &PTR__scalar_deleting_destructor__144d276f8;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141768a40 InternalVTableHelperCtorCaller<UUInt16Property> body=143 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UUInt16Property>(void)

undefined8 * InternalVTableHelperCtorCaller<UUInt16Property>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = UUInt16Property::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    *puVar3 = &PTR_FUN_144d23cd8;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141768ad0 InternalVTableHelperCtorCaller<UUInt32Property> body=143 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UUInt32Property>(void)

undefined8 * InternalVTableHelperCtorCaller<UUInt32Property>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = UUInt32Property::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    *puVar3 = &PTR_FUN_144d240b8;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141768b60 InternalVTableHelperCtorCaller<UUInt64Property> body=143 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UUInt64Property>(void)

undefined8 * InternalVTableHelperCtorCaller<UUInt64Property>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = UUInt64Property::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    *puVar3 = &PTR_FUN_144d24498;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141768bf0 InternalVTableHelperCtorCaller<UWeakObjectProperty> body=143 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UWeakObjectProperty>(void)

undefined8 * InternalVTableHelperCtorCaller<UWeakObjectProperty>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = UWeakObjectProperty::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    puVar3[9] = 0;
    *puVar3 = &PTR__scalar_deleting_destructor__144d253d0;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141768c80 FUN_141768c80 body=736 status=ok
// SIG undefined FUN_141768c80(void)

longlong FUN_141768c80(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                      longlong param_5)

{
  undefined8 uVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  undefined1 local_18 [16];
  
  (**(code **)(*param_3 + 0x338))(param_3,param_1);
  *(undefined1 *)(param_1 + 8) = 0;
  *(longlong *)(param_1 + 0x10) = param_3[3];
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = param_4;
  *(undefined8 *)(param_1 + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  lVar3 = UStructProperty::GetPrivateStaticClass();
  if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_3[0xe] + 0x18);
    puVar4 = (undefined8 *)
             (**(code **)(*(longlong *)param_3[0xe] + 0x308))((longlong *)param_3[0xe],local_18);
    uVar1 = puVar4[1];
    *(undefined8 *)(param_1 + 0x48) = *puVar4;
    *(undefined8 *)(param_1 + 0x50) = uVar1;
    return param_1;
  }
  lVar3 = UEnumProperty::GetPrivateStaticClass();
  if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    lVar3 = param_3[0xf];
  }
  else {
    lVar3 = UByteProperty::GetPrivateStaticClass();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      lVar3 = UArrayProperty::GetPrivateStaticClass();
      if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
          lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        lVar3 = USetProperty::GetPrivateStaticClass();
        if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
            != lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) {
          lVar3 = UMapProperty::GetPrivateStaticClass();
          if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
              != lVar3 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) {
            lVar3 = UBoolProperty::GetPrivateStaticClass();
            if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
                lVar3 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) {
              return param_1;
            }
            *(bool *)(param_1 + 8) =
                 (*(byte *)((longlong)param_3 + 0x73) &
                 *(byte *)((ulonglong)*(byte *)((longlong)param_3 + 0x71) + param_5)) != 0;
            return param_1;
          }
          puVar4 = (undefined8 *)
                   (**(code **)(*(longlong *)param_3[0xe] + 0x338))
                             ((longlong *)param_3[0xe],local_res8);
          *(undefined8 *)(param_1 + 0x28) = *puVar4;
          puVar4 = (undefined8 *)
                   (**(code **)(*(longlong *)param_3[0xf] + 0x338))
                             ((longlong *)param_3[0xf],local_res8);
          *(undefined8 *)(param_1 + 0x30) = *puVar4;
          return param_1;
        }
      }
      puVar4 = (undefined8 *)
               (**(code **)(*(longlong *)param_3[0xe] + 0x338))((longlong *)param_3[0xe],local_res8)
      ;
      *(undefined8 *)(param_1 + 0x28) = *puVar4;
      return param_1;
    }
    lVar3 = param_3[0xe];
  }
  if (lVar3 == 0) {
    return param_1;
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar3 + 0x18);
  return param_1;
}



// FUNCTION 141768f60 FPropertyTag body=69 status=ok
// SIG undefined FPropertyTag(void)

undefined8 * FPropertyTag::FPropertyTag(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xffffffff;
  param_1[8] = 0xffffffffffffffff;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  return param_1;
}



// FUNCTION 141768fb0 UMapProperty body=68 status=ok
// SIG undefined UMapProperty(void)

undefined8 *
UMapProperty::UMapProperty
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          ulonglong param_5)

{
  FUN_14174d7e0(param_1,param_2,0,param_4,param_5 | 0x200);
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x50;
  *param_1 = &PTR_FUN_144d27018;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}



// FUNCTION 141769000 USetProperty body=66 status=ok
// SIG undefined USetProperty(void)

undefined8 *
USetProperty::USetProperty
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          ulonglong param_5)

{
  FUN_14174d7e0(param_1,param_2,0,param_4,param_5 | 0x200);
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x50;
  *param_1 = &PTR_FUN_144d27388;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 141769050 FUN_141769050 body=133 status=ok
// SIG undefined FUN_141769050(void)

undefined8 *
FUN_141769050(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             ulonglong param_5,longlong param_6)

{
  ulonglong uVar1;
  
  if (*(longlong **)(param_6 + 0x90) != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)(param_6 + 0x90) + 0x108))();
    param_5 = uVar1 | param_5;
  }
  FUN_14174d7e0(param_1,param_2,0,param_4,param_5);
  *param_1 = &PTR__scalar_deleting_destructor__144d276f8;
  param_1[0xe] = param_6;
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_6 + 0x40);
  return param_1;
}



// FUNCTION 1417690e0 ~TScopeGuard<<lambda_cc398b2de9d740b7c7d364e9d851487c>_> body=234 status=ok
// SIG undefined ~TScopeGuard<<lambda_cc398b2de9d740b7c7d364e9d851487c>_>(void)

void ScopeExitSupport::TScopeGuard<<lambda_cc398b2de9d740b7c7d364e9d851487c>_>::
     ~TScopeGuard<<lambda_cc398b2de9d740b7c7d364e9d851487c>_>(undefined8 *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  
  if (((*(char *)(param_1 + 3) != '\0') &&
      (FMemory::Free(*(undefined8 *)*param_1), *(char *)param_1[1] == '\0')) &&
     (lVar2 = param_1[2],
     *(int *)(*(longlong *)(lVar2 + 0x10) + 8) != *(int *)(*(longlong *)(lVar2 + 0x10) + 0x34))) {
    FUN_14176f320(lVar2,0);
    lVar3 = *(longlong *)(lVar2 + 0x10);
    uVar1 = *(undefined4 *)(lVar2 + 0x38);
    *(undefined4 *)(lVar3 + 8) = 0;
    if (*(int *)(lVar3 + 0xc) != 0) {
      FScriptArray::ResizeTo(lVar3,0,uVar1);
    }
    *(undefined4 *)(lVar3 + 0x30) = 0xffffffff;
    *(undefined4 *)(lVar3 + 0x34) = 0;
    *(undefined4 *)(lVar3 + 0x28) = 0;
    if (*(int *)(lVar3 + 0x2c) != 0) {
      *(undefined4 *)(lVar3 + 0x2c) = 0;
      FScriptBitArray::Realloc(lVar3 + 0x10,0);
    }
    puVar5 = *(undefined4 **)(lVar3 + 0x40);
    if (*(undefined4 **)(lVar3 + 0x40) == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)(lVar3 + 0x38);
    }
    uVar4 = (longlong)*(int *)(lVar3 + 0x48) & 0x3fffffffffffffff;
    if (puVar5 + *(int *)(lVar3 + 0x48) < puVar5) {
      uVar4 = 0;
    }
    if (uVar4 != 0) {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar5 = 0xffffffff;
        puVar5 = puVar5 + 1;
      }
    }
  }
  if (*(char *)(param_1 + 3) != '\0') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}



// FUNCTION 1417691d0 FUN_1417691d0 body=272 status=ok
// SIG undefined FUN_1417691d0(void)

void FUN_1417691d0(longlong *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if ((char)param_1[4] != '\0') {
    plVar2 = *(longlong **)(*param_1 + 0x70);
    if ((~(byte)((ulonglong)plVar2[7] >> 0x24) & 1) != 0) {
      (**(code **)(*plVar2 + 0x328))(plVar2,*(undefined8 *)param_1[1]);
    }
    FMemory::Free(*(undefined8 *)param_1[1]);
    if ((*(char *)param_1[2] == '\0') &&
       (lVar3 = param_1[3],
       *(int *)(*(longlong *)(lVar3 + 8) + 8) != *(int *)(*(longlong *)(lVar3 + 8) + 0x34))) {
      FUN_14176f510(lVar3,0);
      lVar4 = *(longlong *)(lVar3 + 8);
      uVar1 = *(undefined4 *)(lVar3 + 0x28);
      *(undefined4 *)(lVar4 + 8) = 0;
      if (*(int *)(lVar4 + 0xc) != 0) {
        FScriptArray::ResizeTo(lVar4,0,uVar1);
      }
      *(undefined4 *)(lVar4 + 0x30) = 0xffffffff;
      *(undefined4 *)(lVar4 + 0x34) = 0;
      *(undefined4 *)(lVar4 + 0x28) = 0;
      if (*(int *)(lVar4 + 0x2c) != 0) {
        *(undefined4 *)(lVar4 + 0x2c) = 0;
        FScriptBitArray::Realloc(lVar4 + 0x10,0);
      }
      puVar6 = *(undefined4 **)(lVar4 + 0x40);
      if (*(undefined4 **)(lVar4 + 0x40) == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)(lVar4 + 0x38);
      }
      uVar5 = (longlong)*(int *)(lVar4 + 0x48) & 0x3fffffffffffffff;
      if (puVar6 + *(int *)(lVar4 + 0x48) < puVar6) {
        uVar5 = 0;
      }
      if (uVar5 != 0) {
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar6 = 0xffffffff;
          puVar6 = puVar6 + 1;
        }
      }
    }
  }
  if ((char)param_1[4] != '\0') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 1417692e0 FUN_1417692e0 body=779 status=ok
// SIG undefined FUN_1417692e0(void)

longlong * FUN_1417692e0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  
  (**(code **)(*param_1 + 0x40))(param_1,param_2 + 2);
  if (param_2[2] == 0) {
    return param_1;
  }
  lVar5 = FName::GetNames();
  if ((int)param_2[2] < 0) {
    return param_1;
  }
  if (*(int *)(lVar5 + 0x400) <= (int)param_2[2]) {
    return param_1;
  }
  iVar1 = (int)param_2[2];
  uVar6 = iVar1 >> 0x1f & 0x3fff;
  uVar4 = iVar1 + uVar6;
  if (*(longlong *)
       (*(longlong *)(lVar5 + (longlong)((int)uVar4 >> 0xe) * 8) +
       (longlong)(int)((uVar4 & 0x3fff) - uVar6) * 8) == 0) {
    return param_1;
  }
  if (iVar1 < 0) {
    return param_1;
  }
  if (*(int *)(lVar5 + 0x400) <= iVar1) {
    return param_1;
  }
  uVar6 = (int)param_2[2] >> 0x1f & 0x3fff;
  uVar4 = (int)param_2[2] + uVar6;
  if (*(longlong *)
       (*(longlong *)(lVar5 + (longlong)((int)uVar4 >> 0xe) * 8) +
       (longlong)(int)((uVar4 & 0x3fff) - uVar6) * 8) == 0) {
    return param_1;
  }
  (**(code **)(*param_1 + 0x40))(param_1,param_2);
  if ((*(byte *)(param_1 + 5) & 2) != 0) {
    lVar5 = (**(code **)(*param_1 + 0x90))(param_1);
    param_2[8] = lVar5;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 7,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 7,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 7) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,(longlong)param_2 + 0x3c,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,(longlong)param_2 + 0x3c,4);
    }
  }
  else {
    *(undefined4 *)((longlong)param_2 + 0x3c) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  lVar5 = *param_2;
  if (lVar5 == 10) {
    (**(code **)(*param_1 + 0x40))(param_1,param_2 + 3);
    if (0x1b8 < (int)param_1[8]) {
      operator<<(param_1,param_2 + 9);
    }
  }
  else if (lVar5 == 3) {
    puVar3 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,1);
    }
    else {
      *(undefined1 *)(param_2 + 1) = *puVar3;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
  }
  else {
    if ((lVar5 == 1) || (lVar5 == 0x22)) {
      plVar7 = param_2 + 4;
    }
    else {
      if ((lVar5 != 9) || ((int)param_1[8] < 0x11a)) goto LAB_141769539;
      plVar7 = param_2 + 5;
    }
    (**(code **)(*param_1 + 0x40))(param_1,plVar7);
  }
LAB_141769539:
  if (0x1fc < (int)param_1[8]) {
    if (*param_2 == 0x1d) {
      plVar7 = param_2 + 5;
    }
    else {
      if (*param_2 != 0x1c) goto LAB_141769585;
      (**(code **)(*param_1 + 0x40))(param_1,param_2 + 5);
      plVar7 = param_2 + 6;
    }
    (**(code **)(*param_1 + 0x40))(param_1,plVar7);
  }
LAB_141769585:
  if (0x1f6 < (int)param_1[8]) {
    puVar3 = *(undefined1 **)param_1[1];
    if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0xb,1);
    }
    else {
      *(undefined1 *)(param_2 + 0xb) = *puVar3;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    if ((char)param_2[0xb] != '\0') {
      operator<<(param_1,(longlong)param_2 + 0x5c);
    }
  }
  return param_1;
}



// FUNCTION 1417695f0 FUN_1417695f0 body=428 status=ok
// SIG undefined FUN_1417695f0(void)

longlong * FUN_1417695f0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  uVar7 = 0;
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
          lVar6 = (longlong)(int)uVar7 * 0x10 + *param_2;
          plVar3 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,lVar6);
          (**(code **)(*plVar3 + 0x40))(plVar3,lVar6 + 8);
          uVar8 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar8;
        } while ((int)uVar8 < (int)param_2[1]);
      }
      return param_1;
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,local_res8[0]);
    }
    uVar9 = uVar7;
    if (0 < local_res8[0]) {
      do {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
        }
        uVar4 = (longlong)iVar2 * 0x10 + *param_2;
        uVar5 = uVar7;
        if (uVar4 != 0) {
          FWeakObjectPtr::operator=(uVar4,0);
          *(undefined8 *)(uVar4 + 8) = 0;
          uVar5 = uVar4;
        }
        plVar3 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,uVar5);
        (**(code **)(*plVar3 + 0x40))(plVar3);
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while ((int)uVar8 < local_res8[0]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar1 | 0x80;
  return param_1;
}



// FUNCTION 1417697a0 FUN_1417697a0 body=166 status=ok
// SIG undefined FUN_1417697a0(void)

undefined8 FUN_1417697a0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 local_18 [16];
  
  if (*(int *)(param_2 + 0x40) < 0x1b9) {
    if (param_4 == 0) {
      return 0;
    }
    cVar2 = UScriptStruct::UseBinarySerialization(*(undefined8 *)(param_4 + 0x70));
    uVar4 = *(uint *)(*(longlong *)(param_4 + 0x70) + 0x88) & 0x800;
    if (cVar2 != '\0') {
      return 0;
    }
  }
  else {
    if (((*(int *)(param_3 + 0x54) == 0 && *(int *)(param_3 + 0x50) == 0) &&
        *(int *)(param_3 + 0x4c) == 0) && *(int *)(param_3 + 0x48) == 0) {
      return 0;
    }
    if (param_4 == 0) {
      return 0;
    }
    plVar1 = *(longlong **)(param_4 + 0x70);
    if (plVar1 == (longlong *)0x0) {
      return 0;
    }
    puVar3 = (uint *)(**(code **)(*plVar1 + 0x308))(plVar1,local_18);
    uVar4 = *(uint *)(param_3 + 0x54) ^ puVar3[3] | *(uint *)(param_3 + 0x50) ^ puVar3[2] |
            *(uint *)(param_3 + 0x4c) ^ puVar3[1] | *puVar3 ^ *(uint *)(param_3 + 0x48);
  }
  if (uVar4 != 0) {
    return 0;
  }
  return 1;
}


