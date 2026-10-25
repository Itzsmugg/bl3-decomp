// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1416d0ce0 FUN_1416d0ce0 body=22 status=ok
// SIG undefined FUN_1416d0ce0(void)

void FUN_1416d0ce0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001416d0cf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x40))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 1416d0d00 FUN_1416d0d00 body=112 status=ok
// SIG undefined FUN_1416d0d00(void)

void FUN_1416d0d00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    plVar5 = *(longlong **)(lVar4 + 0x4f0);
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
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    FMemory::operator_delete(lVar4,0x4f8);
  }
  return;
}



// FUNCTION 1416d0d70 FUN_1416d0d70 body=392 status=ok
// SIG undefined FUN_1416d0d70(void)

undefined4
FUN_1416d0d70(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  DWORD DVar5;
  undefined4 uVar6;
  bool bVar7;
  longlong local_78 [2];
  longlong *local_68;
  int local_60;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  DecipherOLEData(local_78);
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    bVar7 = DVar5 == DAT_1468c21c0;
    if (!bVar7) goto LAB_1416d0dca;
  }
  bVar7 = true;
LAB_1416d0dca:
  if (bVar7) {
    uVar6 = FUN_1416d6c50(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),local_78,
                          param_3,param_4,param_5);
    plVar3 = local_68;
    iVar1 = local_60;
  }
  else {
    uVar6 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    uStack_14 = 0;
    local_10 = 0;
    local_50[0] = 0;
    local_48 = *(undefined8 *)(param_1 + 0x10);
    FDragDropOLEData::operator=(&local_40,local_78);
    uStack_14 = (undefined4)param_4;
    local_10 = (undefined4)((ulonglong)param_4 >> 0x20);
    lVar2 = *(longlong *)(param_1 + 8);
    iVar1 = *(int *)(lVar2 + 0xa0);
    *(int *)(lVar2 + 0xa0) = iVar1 + 1;
    local_18 = param_3;
    if (*(int *)(lVar2 + 0xa4) < iVar1 + 1) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(lVar2 + 0x98,iVar1);
    }
    FDeferredWindowsDragDropOperation::FDeferredWindowsDragDropOperation
              (*(longlong *)(lVar2 + 0x98) + (longlong)iVar1 * 0x48,local_50);
    UE4Tuple_Private::
    TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>::
    ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>
              (&local_40);
    plVar3 = local_68;
    iVar1 = local_60;
  }
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  return uVar6;
}



// FUNCTION 1416d0f00 FUN_1416d0f00 body=224 status=ok
// SIG undefined FUN_1416d0f00(void)

undefined8 FUN_1416d0f00(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    bVar6 = DVar4 == DAT_1468c21c0;
    if (!bVar6) goto LAB_1416d0f36;
  }
  bVar6 = true;
LAB_1416d0f36:
  local_50 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 8);
  if (bVar6) {
    uVar5 = FUN_1416d6e70(lVar2);
    return uVar5;
  }
  iVar1 = *(int *)(lVar2 + 0xa0);
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_58[0] = 2;
  *(int *)(lVar2 + 0xa0) = iVar1 + 1;
  if (*(int *)(lVar2 + 0xa4) < iVar1 + 1) {
    TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(lVar2 + 0x98,iVar1);
  }
  FDeferredWindowsDragDropOperation::FDeferredWindowsDragDropOperation
            (*(longlong *)(lVar2 + 0x98) + (longlong)iVar1 * 0x48,local_58);
  UE4Tuple_Private::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>::
  ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>
            (&local_48);
  return 0;
}



// FUNCTION 1416d0fe0 FUN_1416d0fe0 body=247 status=ok
// SIG undefined FUN_1416d0fe0(void)

undefined8 FUN_1416d0fe0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_20;
  undefined8 local_1c;
  
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    bVar6 = DVar4 == DAT_1468c21c0;
    if (!bVar6) goto LAB_1416d102f;
  }
  bVar6 = true;
LAB_1416d102f:
  local_50 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 8);
  if (bVar6) {
    uVar5 = FUN_1416d6fd0(lVar2,local_50,param_2,param_3,param_4);
  }
  else {
    local_48 = 0;
    iVar1 = *(int *)(lVar2 + 0xa0);
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_58[0] = 1;
    *(int *)(lVar2 + 0xa0) = iVar1 + 1;
    local_20 = param_2;
    local_1c = param_3;
    if (*(int *)(lVar2 + 0xa4) < iVar1 + 1) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow((longlong *)(lVar2 + 0x98),iVar1);
    }
    FDeferredWindowsDragDropOperation::FDeferredWindowsDragDropOperation
              (*(longlong *)(lVar2 + 0x98) + (longlong)iVar1 * 0x48,local_58);
    UE4Tuple_Private::
    TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>::
    ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>
              (&local_48);
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 1416d10e0 FUN_1416d10e0 body=428 status=ok
// SIG undefined FUN_1416d10e0(void)

undefined4
FUN_1416d10e0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  DWORD DVar5;
  undefined4 uVar6;
  bool bVar7;
  longlong local_78 [2];
  longlong *local_68;
  int local_60;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  DecipherOLEData(local_78);
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    bVar7 = DVar5 == DAT_1468c21c0;
    if (!bVar7) goto LAB_1416d1135;
  }
  bVar7 = true;
LAB_1416d1135:
  if (bVar7) {
    uVar6 = FUN_1416d7140(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),local_78,
                          param_3,param_4,param_5);
    plVar3 = local_68;
    iVar1 = local_60;
  }
  else {
    uVar6 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    uStack_14 = 0;
    local_10 = 0;
    local_50[0] = 3;
    local_48 = *(undefined8 *)(param_1 + 0x10);
    FDragDropOLEData::operator=(&local_40,local_78);
    uStack_14 = (undefined4)param_4;
    local_10 = (undefined4)((ulonglong)param_4 >> 0x20);
    lVar2 = *(longlong *)(param_1 + 8);
    iVar1 = *(int *)(lVar2 + 0xa0);
    *(int *)(lVar2 + 0xa0) = iVar1 + 1;
    local_18 = param_3;
    if (*(int *)(lVar2 + 0xa4) < iVar1 + 1) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(lVar2 + 0x98,iVar1);
    }
    FDeferredWindowsDragDropOperation::FDeferredWindowsDragDropOperation
              (*(longlong *)(lVar2 + 0x98) + (longlong)iVar1 * 0x48,local_50);
    UE4Tuple_Private::
    TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>::
    ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>
              (&local_40);
    plVar3 = local_68;
    iVar1 = local_60;
  }
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  return uVar6;
}



// FUNCTION 1416d1290 FUN_1416d1290 body=475 status=ok
// SIG undefined FUN_1416d1290(void)

void FUN_1416d1290(longlong *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
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
  
  iVar3 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar3 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar6 = *puVar9;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar6 == 0) {
      lVar7 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar8 = local_68 + 1;
      bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar8;
      if (bVar5) goto LAB_1416d1364;
      uVar6 = puVar9[lVar7 + 1];
    }
    uStack_64 = -uVar6 & uVar6;
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
LAB_1416d1364:
      iStack_54 = iVar3;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar3) {
    do {
      lVar7 = (longlong)iStack_2c * 0x38 + *param_1;
      plVar4 = *(longlong **)(lVar7 + 0x18);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      plVar4 = *(longlong **)(lVar7 + 8);
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
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
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



// FUNCTION 1416d1470 FUN_1416d1470 body=411 status=ok
// SIG undefined FUN_1416d1470(void)

void FUN_1416d1470(longlong *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
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
  
  iVar3 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_64 = 1;
  local_68 = 0;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar3 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar6 = *puVar9;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar6 == 0) {
      lVar7 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar8 = local_68 + 1;
      bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar8;
      if (bVar5) goto LAB_1416d1534;
      uVar6 = puVar9[lVar7 + 1];
    }
    uStack_64 = -uVar6 & uVar6;
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
LAB_1416d1534:
      iStack_54 = iVar3;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar3) {
    do {
      plVar4 = *(longlong **)(*param_1 + 8 + (longlong)iStack_2c * 0x18);
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
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar6 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar6) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar6;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1416d1620 FUN_1416d1620 body=162 status=ok
// SIG undefined FUN_1416d1620(void)

void FUN_1416d1620(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int local_res8 [2];
  undefined8 local_18;
  longlong *local_10;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  local_18 = *(undefined8 *)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_10 = plVar3;
  FUN_1416d16d0(param_1 + 0x50,local_res8,&local_18);
  if (local_res8[0] == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = (longlong)local_res8[0] * 0x38 + *(longlong *)(param_1 + 0x50);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *(undefined2 *)(lVar4 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001416d16be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x70))();
  return;
}



// FUNCTION 1416d16d0 FUN_1416d16d0 body=550 status=ok
// SIG undefined FUN_1416d16d0(void)

int * FUN_1416d16d0(longlong *param_1,int *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar10 = (int)(*param_3 >> 4);
    uVar9 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar5 = -(uVar9 + iVar10) ^ uVar9 >> 0xd;
    uVar11 = (iVar10 - uVar9) - uVar5 ^ uVar5 >> 0xc;
    uVar9 = (uVar9 - uVar11) - uVar5 ^ uVar11 << 0x10;
    uVar5 = (uVar5 - uVar9) - uVar11 ^ uVar9 >> 5;
    uVar11 = (uVar11 - uVar9) - uVar5 ^ uVar5 >> 3;
    uVar9 = (uVar9 - uVar11) - uVar5 ^ uVar11 << 10;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar10 = *(int *)((longlong)plVar4 +
                     (((longlong)(int)((uVar5 - uVar9) - uVar11) ^ (ulonglong)(uVar9 >> 0xf)) &
                     (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar10 != -1) {
      lVar6 = *param_1;
      do {
        plVar7 = (longlong *)0x0;
        lVar13 = (longlong)iVar10 * 0x38;
        plVar4 = *(longlong **)(lVar13 + 8 + lVar6);
        plVar8 = plVar4;
        plVar12 = plVar7;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          iVar3 = (int)plVar4[1];
          bVar14 = iVar3 == 0;
          if (bVar14) {
            *(int *)(plVar4 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
          while (plVar8 = plVar7, !bVar14) {
            LOCK();
            bVar14 = iVar3 == (int)plVar4[1];
            if (bVar14) {
              *(int *)(plVar4 + 1) = iVar3 + 1;
            }
            UNLOCK();
            if (bVar14) {
              plVar8 = plVar4;
              if (plVar4 != (longlong *)0x0) {
                plVar12 = *(longlong **)(lVar13 + lVar6);
              }
              break;
            }
            LOCK();
            iVar3 = (int)plVar4[1];
            bVar14 = iVar3 == 0;
            if (bVar14) {
              *(int *)(plVar4 + 1) = 0;
              iVar3 = 0;
            }
            UNLOCK();
          }
        }
        plVar4 = (longlong *)param_3[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          iVar3 = (int)plVar4[1];
          bVar14 = iVar3 == 0;
          if (bVar14) {
            *(int *)(plVar4 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
          while (!bVar14) {
            LOCK();
            bVar14 = iVar3 == (int)plVar4[1];
            if (bVar14) {
              *(int *)(plVar4 + 1) = iVar3 + 1;
            }
            UNLOCK();
            if (bVar14) {
              if (plVar4 != (longlong *)0x0) {
                plVar7 = (longlong *)*param_3;
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
              break;
            }
            LOCK();
            iVar3 = (int)plVar4[1];
            bVar14 = iVar3 == 0;
            if (bVar14) {
              *(int *)(plVar4 + 1) = 0;
              iVar3 = 0;
            }
            UNLOCK();
          }
        }
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar8 + 1;
          lVar6 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
        if (plVar12 == plVar7) {
          *param_2 = iVar10;
          return param_2;
        }
        lVar6 = *param_1;
        iVar10 = *(int *)(lVar13 + 0x30 + lVar6);
      } while (iVar10 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1416d1900 FUN_1416d1900 body=550 status=ok
// SIG undefined FUN_1416d1900(void)

int * FUN_1416d1900(longlong *param_1,int *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  bool bVar14;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar11 = (int)(*param_3 >> 4);
    uVar10 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
    uVar6 = -(uVar10 + iVar11) ^ uVar10 >> 0xd;
    uVar12 = (iVar11 - uVar10) - uVar6 ^ uVar6 >> 0xc;
    uVar10 = (uVar10 - uVar12) - uVar6 ^ uVar12 << 0x10;
    uVar6 = (uVar6 - uVar10) - uVar12 ^ uVar10 >> 5;
    uVar12 = (uVar12 - uVar10) - uVar6 ^ uVar6 >> 3;
    uVar10 = (uVar10 - uVar12) - uVar6 ^ uVar12 << 10;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    iVar11 = *(int *)((longlong)plVar5 +
                     (((longlong)(int)((uVar6 - uVar10) - uVar12) ^ (ulonglong)(uVar10 >> 0xf)) &
                     (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar11 != -1) {
      lVar7 = *param_1;
      do {
        plVar8 = (longlong *)0x0;
        lVar3 = (longlong)iVar11 * 0x18;
        plVar5 = *(longlong **)(lVar3 + 8 + lVar7);
        plVar9 = plVar5;
        plVar13 = plVar8;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          iVar4 = (int)plVar5[1];
          bVar14 = iVar4 == 0;
          if (bVar14) {
            *(int *)(plVar5 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
          while (plVar9 = plVar8, !bVar14) {
            LOCK();
            bVar14 = iVar4 == (int)plVar5[1];
            if (bVar14) {
              *(int *)(plVar5 + 1) = iVar4 + 1;
            }
            UNLOCK();
            if (bVar14) {
              plVar9 = plVar5;
              if (plVar5 != (longlong *)0x0) {
                plVar13 = *(longlong **)(lVar3 + lVar7);
              }
              break;
            }
            LOCK();
            iVar4 = (int)plVar5[1];
            bVar14 = iVar4 == 0;
            if (bVar14) {
              *(int *)(plVar5 + 1) = 0;
              iVar4 = 0;
            }
            UNLOCK();
          }
        }
        plVar5 = (longlong *)param_3[1];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          iVar4 = (int)plVar5[1];
          bVar14 = iVar4 == 0;
          if (bVar14) {
            *(int *)(plVar5 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
          while (!bVar14) {
            LOCK();
            bVar14 = iVar4 == (int)plVar5[1];
            if (bVar14) {
              *(int *)(plVar5 + 1) = iVar4 + 1;
            }
            UNLOCK();
            if (bVar14) {
              if (plVar5 != (longlong *)0x0) {
                plVar8 = (longlong *)*param_3;
                LOCK();
                plVar1 = plVar5 + 1;
                lVar7 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
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
              break;
            }
            LOCK();
            iVar4 = (int)plVar5[1];
            bVar14 = iVar4 == 0;
            if (bVar14) {
              *(int *)(plVar5 + 1) = 0;
              iVar4 = 0;
            }
            UNLOCK();
          }
        }
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar9 + 1;
          lVar7 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
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
        if (plVar13 == plVar8) {
          *param_2 = iVar11;
          return param_2;
        }
        lVar7 = *param_1;
        iVar11 = *(int *)(lVar3 + 0x10 + lVar7);
      } while (iVar11 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1416d1b30 FUN_1416d1b30 body=267 status=ok
// SIG undefined FUN_1416d1b30(void)

longlong * FUN_1416d1b30(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = 0;
  if (0 < (int)param_2[1]) {
    lVar7 = 0;
    do {
      plVar4 = *(longlong **)(lVar7 + 8 + *param_2);
      lVar5 = *(longlong *)(lVar7 + *param_2);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (*(longlong *)(lVar5 + 0x28) == param_3) {
        *param_1 = lVar5;
        param_1[1] = (longlong)plVar4;
        if (plVar4 == (longlong *)0x0) {
          return param_1;
        }
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        if (plVar4 == (longlong *)0x0) {
          return param_1;
        }
        LOCK();
        plVar1 = plVar4 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 != 1) {
          return param_1;
        }
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 != 1) {
          return param_1;
        }
        (**(code **)(*plVar4 + 8))(plVar4,1);
        return param_1;
      }
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
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while (iVar6 < (int)param_2[1]);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1416d1c40 GetACPFromPoint body=81 status=ok
// SIG undefined GetACPFromPoint(void)

undefined8
FTextStoreACP::GetACPFromPoint
          (longlong param_1,undefined8 param_2,int *param_3,undefined8 param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  float local_res8;
  float local_resc;
  
  if ((*(uint *)(param_1 + 0x38) >> 1 & 1) == 0) {
    return 0x80040201;
  }
  local_res8 = (float)*param_3;
  local_resc = (float)param_3[1];
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))
                    (*(longlong **)(param_1 + 0x18),&local_res8);
  *param_5 = uVar1;
  return 0;
}



// FUNCTION 1416d1cc0 GetDPIScaleFactorAtPoint body=220 status=ok
// SIG undefined GetDPIScaleFactorAtPoint(void)

float FWindowsPlatformApplicationMisc::GetDPIScaleFactorAtPoint(float param_1,float param_2)

{
  POINT pt;
  int iVar1;
  HMONITOR pHVar2;
  HDC hdc;
  uint local_res18;
  int iStackX_1c;
  undefined4 local_res20 [2];
  
  if (DAT_1464b0268 != 0) {
    if (DAT_1469e5b80 == (code *)0x0) {
      hdc = GetDC((HWND)0x0);
      iVar1 = GetDeviceCaps(hdc,0x58);
      ReleaseDC((HWND)0x0,hdc);
      return (float)iVar1 * 0.010416667;
    }
    local_res18 = (uint)param_1;
    iStackX_1c = (int)param_2;
    pt.y = iStackX_1c;
    pt.x = local_res18;
    pHVar2 = MonitorFromPoint(pt,2);
    if (pHVar2 != (HMONITOR)0x0) {
      local_res18 = 0;
      local_res20[0] = 0;
      iVar1 = (*DAT_1469e5b80)(pHVar2,0,&local_res18,local_res20);
      if (-1 < iVar1) {
        return (float)local_res18 * 0.010416667;
      }
    }
  }
  return 1.0;
}



// FUNCTION 1416d1da0 RebuildDisplayMetrics body=387 status=ok
// SIG undefined RebuildDisplayMetrics(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FDisplayMetrics::RebuildDisplayMetrics(int *param_1)

{
  int iVar1;
  BOOL BVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  iVar1 = GetSystemMetrics(0);
  *param_1 = iVar1;
  iVar1 = GetSystemMetrics(1);
  param_1[1] = iVar1;
  BVar2 = SystemParametersInfoW(0x30,0,&local_28,0);
  uVar3 = CONCAT44(extraout_var,BVar2);
  if (BVar2 == 0) {
    iVar1 = 0;
    iVar5 = 0;
    iVar4 = 0;
    local_28 = uVar3;
    local_20 = uVar3;
  }
  else {
    uVar3 = local_20 & 0xffffffff;
    iVar1 = (int)local_28;
    iVar5 = local_28._4_4_;
    iVar4 = local_20._4_4_;
  }
  param_1[6] = iVar1;
  param_1[7] = iVar5;
  param_1[8] = (int)uVar3;
  param_1[9] = iVar4;
  iVar1 = GetSystemMetrics(0x4c);
  param_1[10] = iVar1;
  iVar1 = GetSystemMetrics(0x4d);
  param_1[0xb] = iVar1;
  iVar1 = GetSystemMetrics(0x4e);
  param_1[0xc] = iVar1 + param_1[10];
  iVar1 = GetSystemMetrics(0x4f);
  param_1[0xd] = iVar1 + param_1[0xb];
  FUN_1416d2550(param_1 + 2);
  if (DAT_1464b0260 < 1.0) {
    fVar6 = (1.0 - DAT_1464b0260) * 0.5;
    fVar7 = (float)*param_1 * fVar6;
    fVar6 = (float)param_1[1] * fVar6;
    param_1[0x10] = (int)fVar7;
    param_1[0x11] = (int)fVar6;
    param_1[0x12] = (int)fVar7;
    param_1[0x13] = (int)fVar6;
  }
  if (DAT_1464b0264 < 1.0) {
    fVar6 = (1.0 - DAT_1464b0264) * 0.5;
    fVar7 = (float)param_1[1] * fVar6;
    fVar6 = (float)*param_1 * fVar6;
    param_1[0x14] = (int)fVar6;
    param_1[0x15] = (int)fVar7;
    param_1[0x16] = (int)fVar6;
    param_1[0x17] = (int)fVar7;
  }
  return;
}



// FUNCTION 1416d1f50 GetEndACP body=49 status=ok
// SIG undefined GetEndACP(void)

undefined8 FTextStoreACP::GetEndACP(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 0x38) >> 1 & 1) == 0) {
    return 0x80040201;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
  *param_2 = uVar1;
  return 0;
}



// FUNCTION 1416d1f90 FUN_1416d1f90 body=108 status=ok
// SIG undefined FUN_1416d1f90(void)

undefined ** FUN_1416d1f90(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e64bc) {
    _Init_thread_header(&DAT_1469e64bc);
    if (DAT_1469e64bc == -1) {
      atexit((_func_5014 *)&DAT_143e7b9c0);
      _Init_thread_footer(&DAT_1469e64bc);
      return &PTR_PTR_1464b43f0;
    }
  }
  return &PTR_PTR_1464b43f0;
}



// FUNCTION 1416d2000 FUN_1416d2000 body=148 status=ok
// SIG undefined FUN_1416d2000(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1416d2000(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e6550) {
    _Init_thread_header(&DAT_1469e6550);
    if (DAT_1469e6550 == -1) {
      FFeedbackContext::FFeedbackContext(&DAT_1469e64c0);
      _DAT_1469e64c0 = &PTR_FUN_144cef258;
      _DAT_1469e6540 = 0;
      uRam00000001469e6548 = 0;
      atexit((_func_5014 *)&LAB_143e7b9d0);
      _Init_thread_footer(&DAT_1469e6550);
      return &DAT_1469e64c0;
    }
  }
  return &DAT_1469e64c0;
}



// FUNCTION 1416d20a0 FUN_1416d20a0 body=67 status=ok
// SIG undefined FUN_1416d20a0(void)

undefined1 FUN_1416d20a0(void)

{
  LowLevelFatalErrorHandler
            ("Unknown",0x23,L"GetFullScreenInfo is not expected to be called on this platform");
  FDebug::AssertFailed
            (&DAT_144ce4f2f,"Unknown",0x23,
             L"GetFullScreenInfo is not expected to be called on this platform");
  return 0;
}



// FUNCTION 1416d20f0 GetFullScreenInfo body=139 status=ok
// SIG undefined GetFullScreenInfo(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FWindowsWindow::GetFullScreenInfo
          (longlong param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  HMONITOR hMonitor;
  undefined1 auStack_78 [32];
  tagMONITORINFO local_58;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  hMonitor = MonitorFromWindow(*(HWND *)(param_1 + 0x28),(*(int *)(param_1 + 0x38) != 0) + 1);
  local_58.cbSize = 0x28;
  GetMonitorInfoW(hMonitor,&local_58);
  *param_2 = local_58.rcMonitor.left;
  *param_3 = local_58.rcMonitor.top;
  *param_4 = local_58.rcMonitor.right - *param_2;
  iVar1 = *param_3;
  *param_5 = local_58.rcMonitor.bottom - iVar1;
  return CONCAT71((uint7)(uint3)((uint)(local_58.rcMonitor.bottom - iVar1) >> 8),1);
}



// FUNCTION 1416d2180 GetIMMStringAsFString body=166 status=ok
// SIG undefined GetIMMStringAsFString(void)

longlong *
`anonymous_namespace'::GetIMMStringAsFString(longlong *param_1,HIMC param_2,DWORD param_3)

{
  int iVar1;
  int iVar2;
  DWORD dwBufLen;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  dwBufLen = ::_guard_xfg_dispatch_icall_nop(param_2,param_3,(LPVOID)0x0,0);
  iVar1 = (int)param_1[1];
  iVar2 = (int)((ulonglong)(longlong)(int)dwBufLen >> 1);
  iVar3 = iVar2 + 1;
  if (iVar1 < iVar3) {
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
    }
  }
  else if ((iVar3 < iVar1) && (iVar3 != iVar1)) {
    *(int *)(param_1 + 1) = iVar3;
    TArray<wchar_t,FDefaultAllocator>::ResizeShrink(param_1);
  }
  ::_guard_xfg_dispatch_icall_nop(param_2,param_3,(LPVOID)*param_1,dwBufLen);
  *(undefined2 *)(*param_1 + (longlong)iVar2 * 2) = 0;
  return param_1;
}



// FUNCTION 1416d2230 FUN_1416d2230 body=389 status=ok
// SIG undefined FUN_1416d2230(void)

void FUN_1416d2230(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  plVar1 = (longlong *)(param_2 + 2);
  *param_2 = *(undefined4 *)(param_1 + 0x110);
  param_2[1] = *(undefined4 *)(param_1 + 0x114);
  if (plVar1 != (longlong *)(param_1 + 0x118)) {
    plVar6 = (longlong *)*plVar1;
    for (iVar8 = param_2[4]; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (plVar6[0xc] != 0) {
        FMemory::Free();
      }
      if (plVar6[4] != 0) {
        FMemory::Free();
      }
      if (plVar6[2] != 0) {
        FMemory::Free();
      }
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 0xe;
    }
    iVar8 = *(int *)(param_1 + 0x120);
    lVar7 = *(longlong *)(param_1 + 0x118);
    param_2[4] = iVar8;
    if ((iVar8 == 0) && (param_2[5] == 0)) {
      param_2[5] = 0;
    }
    else {
      TArray<FSimpleLinkNavModifier,FDefaultAllocator>::ResizeForCopy(plVar1,iVar8);
      lVar9 = *plVar1;
      if (iVar8 != 0) {
        lVar7 = lVar7 + 0x20;
        do {
          FString::FString(lVar9,lVar7 + -0x20);
          FString::FString(lVar9 + 0x10,lVar7 + -0x10);
          FString::FString(lVar9 + 0x20,lVar7);
          *(undefined4 *)(lVar9 + 0x30) = *(undefined4 *)(lVar7 + 0x10);
          *(undefined4 *)(lVar9 + 0x34) = *(undefined4 *)(lVar7 + 0x14);
          uVar5 = *(undefined8 *)(lVar7 + 0x20);
          *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)(lVar7 + 0x18);
          *(undefined8 *)(lVar9 + 0x40) = uVar5;
          uVar2 = *(undefined4 *)(lVar7 + 0x2c);
          uVar3 = *(undefined4 *)(lVar7 + 0x30);
          uVar4 = *(undefined4 *)(lVar7 + 0x34);
          *(undefined4 *)(lVar9 + 0x48) = *(undefined4 *)(lVar7 + 0x28);
          *(undefined4 *)(lVar9 + 0x4c) = uVar2;
          *(undefined4 *)(lVar9 + 0x50) = uVar3;
          *(undefined4 *)(lVar9 + 0x54) = uVar4;
          *(undefined1 *)(lVar9 + 0x58) = *(undefined1 *)(lVar7 + 0x38);
          FString::FString(lVar9 + 0x60,lVar7 + 0x40);
          lVar9 = lVar9 + 0x70;
          lVar7 = lVar7 + 0x70;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_1 + 0x128);
  *(undefined8 *)(param_2 + 8) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_1 + 0x138);
  *(undefined8 *)(param_2 + 0xc) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x158);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x150);
  *(undefined8 *)(param_2 + 0x12) = uVar5;
  uVar5 = *(undefined8 *)(param_1 + 0x168);
  *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_1 + 0x160);
  *(undefined8 *)(param_2 + 0x16) = uVar5;
  return;
}



// FUNCTION 1416d23c0 FUN_1416d23c0 body=8 status=ok
// SIG undefined FUN_1416d23c0(void)

void FUN_1416d23c0(undefined8 param_1,undefined8 param_2)

{
  FDisplayMetrics::RebuildDisplayMetrics(param_2);
  return;
}



// FUNCTION 1416d24d0 FUN_1416d24d0 body=128 status=ok
// SIG undefined FUN_1416d24d0(void)

undefined8 * FUN_1416d24d0(longlong param_1,undefined8 *param_2,float *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 8);
  lVar2 = (longlong)*(int *)(param_1 + 0x10) * 0x70 + lVar3;
  if (lVar3 != lVar2) {
    do {
      if (((((float)*(int *)(lVar3 + 0x38) <= *param_3) &&
           (*param_3 <= (float)*(int *)(lVar3 + 0x40))) &&
          ((float)*(int *)(lVar3 + 0x3c) <= param_3[1])) &&
         (param_3[1] <= (float)*(int *)(lVar3 + 0x44))) {
        uVar1 = *(undefined8 *)(lVar3 + 0x50);
        *param_2 = *(undefined8 *)(lVar3 + 0x48);
        param_2[1] = uVar1;
        return param_2;
      }
      lVar3 = lVar3 + 0x70;
    } while (lVar3 != lVar2);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1416d2550 FUN_1416d2550 body=3509 status=ok
// SIG undefined FUN_1416d2550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416d2550(longlong *param_1)

{
  longlong *plVar1;
  char *pcVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  char cVar6;
  HRESULT HVar7;
  ULONG UVar8;
  LSTATUS LVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  LPBYTE lpData;
  int *piVar15;
  int *piVar16;
  longlong lVar17;
  void **ppvVar18;
  wchar_t *pwVar19;
  void **ppvVar20;
  LPCWSTR lpSubKey;
  wchar_t *pwVar21;
  void **ppvVar22;
  uint uVar23;
  uint uVar24;
  undefined8 *puVar25;
  longlong lVar26;
  wchar_t *pwVar27;
  uint uVar28;
  DWORD iDevNum;
  int iVar29;
  int iVar30;
  DWORD iDevNum_00;
  LPBYTE *ppBVar31;
  wchar_t *pwVar32;
  void *_Src;
  undefined2 *puVar33;
  undefined1 auStackY_8f8 [32];
  wchar_t *local_8a0;
  undefined8 local_898;
  DWORD local_890;
  DWORD local_88c;
  longlong *local_888;
  void *local_880;
  int local_878;
  int local_874;
  LPBYTE *local_870;
  wchar_t *local_868;
  undefined8 local_860;
  wchar_t *local_858;
  undefined8 local_850;
  void *local_848;
  uint local_840;
  uint local_83c;
  wchar_t *local_838;
  undefined8 local_830;
  undefined2 *local_828;
  undefined8 local_820;
  undefined4 local_818;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 local_800;
  undefined4 uStack_7fc;
  undefined4 uStack_7f8;
  undefined4 uStack_7f4;
  char local_7f0;
  void *local_7e8;
  undefined8 local_7e0;
  IUnknown *local_7d8;
  int local_7d0;
  int local_7cc;
  HKEY local_7c8;
  longlong *local_7c0;
  longlong *local_7b8;
  undefined2 *local_7b0;
  undefined8 local_7a8;
  longlong *local_7a0;
  longlong local_798;
  undefined1 local_790 [8];
  void *local_788;
  LPCWSTR local_780;
  int local_778;
  undefined *local_770;
  undefined *local_768;
  longlong local_760;
  longlong local_758;
  void **local_750;
  wchar_t **local_748;
  undefined1 local_740 [8];
  longlong local_738;
  longlong local_728 [2];
  _DISPLAY_DEVICEW local_718;
  _DISPLAY_DEVICEW local_3c8;
  LPBYTE local_78;
  LPBYTE local_70;
  LPBYTE local_68;
  LPBYTE local_60;
  LPBYTE local_58;
  LPBYTE local_50;
  LPBYTE local_48;
  LPBYTE local_40;
  LPBYTE local_38 [2];
  
  local_38[0] = (LPBYTE)(DAT_1468387a8 ^ (ulonglong)auStackY_8f8);
  puVar25 = (undefined8 *)*param_1;
  local_3c8.cb = 0x348;
  local_88c = 0;
  local_798 = 0;
  plVar12 = param_1;
  local_7a0 = param_1;
  for (iVar29 = (int)param_1[1]; iVar29 != 0; iVar29 = iVar29 + -1) {
    if (puVar25[0xc] != 0) {
      FMemory::Free();
    }
    if (puVar25[4] != 0) {
      FMemory::Free();
    }
    if (puVar25[2] != 0) {
      FMemory::Free();
    }
    plVar12 = (longlong *)*puVar25;
    if (plVar12 != (longlong *)0x0) {
      FMemory::Free();
    }
    puVar25 = puVar25 + 0xe;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 2) {
    plVar12 = param_1;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo();
  }
  iDevNum = 0;
  if ((DAT_1464b02a8 == DAT_1464b02d4) &&
     (HVar7 = FWindowsPlatformMisc::CoInitialize(plVar12), iDevNum = 0, (char)HVar7 != '\0')) {
    CoInitializeSecurity
              ((PSECURITY_DESCRIPTOR)0x0,-1,(SOLE_AUTHENTICATION_SERVICE *)0x0,(void *)0x0,0,3,
               (void *)0x0,0,(void *)0x0);
    local_7b8 = (longlong *)0x0;
    UVar8 = CoCreateInstance((IID *)&DAT_145dc7fe8,(LPUNKNOWN)0x0,1,(IID *)&DAT_145dc7ff8,&local_7b8
                            );
    local_7d8 = (IUnknown *)0x0;
    if (-1 < (int)UVar8) {
      plVar12 = (longlong *)operator_new(0x18);
      if (plVar12 == (longlong *)0x0) goto LAB_1416d32fb;
      plVar12[1] = 0;
      *(undefined4 *)(plVar12 + 2) = 1;
      lVar13 = Ordinal_2(L"ROOT\\CIMV2");
      *plVar12 = lVar13;
      if (lVar13 == 0) goto LAB_1416d32fb;
      (**(code **)(*local_7b8 + 0x18))(local_7b8,lVar13,0,0);
      LOCK();
      plVar14 = plVar12 + 2;
      lVar13 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        if (*plVar12 != 0) {
          Ordinal_6();
          *plVar12 = 0;
        }
        if (plVar12[1] != 0) {
          FMemory::operator_delete();
          plVar12[1] = 0;
        }
        FMemory::operator_delete(plVar12,0x18);
      }
      UVar8 = CoSetProxyBlanket(local_7d8,10,0,(OLECHAR *)0x0,3,3,(RPC_AUTH_IDENTITY_HANDLE)0x0,0);
    }
    local_888 = (longlong *)0x0;
    if (-1 < (int)UVar8) {
      plVar12 = (longlong *)operator_new(0x18);
      if (plVar12 == (longlong *)0x0) {
LAB_1416d32fb:
                    /* WARNING: Subroutine does not return */
        _com_issue_error(0x8007000e);
      }
      plVar12[1] = 0;
      *(undefined4 *)(plVar12 + 2) = 1;
      lVar13 = _com_util::ConvertStringToBSTR
                         ("select * from Win32_PnPEntity where service=\"monitor\"");
      *plVar12 = lVar13;
      plVar14 = (longlong *)operator_new(0x18);
      if (plVar14 == (longlong *)0x0) goto LAB_1416d32fb;
      plVar14[1] = 0;
      *(undefined4 *)(plVar14 + 2) = 1;
      lVar13 = _com_util::ConvertStringToBSTR(&DAT_144ce491c);
      *plVar14 = lVar13;
      UVar8 = (*local_7d8->lpVtbl[6].Release)(local_7d8);
      LOCK();
      plVar1 = plVar14 + 2;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        if (*plVar14 != 0) {
          Ordinal_6();
          *plVar14 = 0;
        }
        if (plVar14[1] != 0) {
          FMemory::operator_delete();
          plVar14[1] = 0;
        }
        FMemory::operator_delete(plVar14,0x18);
      }
      LOCK();
      plVar14 = plVar12 + 2;
      lVar13 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        if (*plVar12 != 0) {
          Ordinal_6();
          *plVar12 = 0;
        }
        if (plVar12[1] != 0) {
          FMemory::operator_delete();
          plVar12[1] = 0;
        }
        FMemory::operator_delete(plVar12,0x18);
      }
    }
    local_7c0 = (longlong *)0x0;
    if (-1 < (int)UVar8) {
      while ((local_888 != (longlong *)0x0 &&
             ((**(code **)(*local_888 + 0x20))(local_888,0xffffffff,1,&local_7c0),
             param_1 = local_7a0, local_7d0 != 0))) {
        iVar29 = (**(code **)(*local_7c0 + 0x20))(local_7c0,L"PnPDeviceID",0,local_740);
        if (-1 < iVar29) {
          local_7c8 = (HKEY)0x0;
          FString::PrintfImpl(&local_780,L"SYSTEM\\CurrentControlSet\\Enum\\%s\\Device Parameters",
                              local_738);
          lpSubKey = L"";
          if (local_778 != 0) {
            lpSubKey = local_780;
          }
          LVar9 = RegOpenKeyExW((HKEY)0xffffffff80000002,lpSubKey,0,0x20019,&local_7c8);
          if (LVar9 == 0) {
            local_890 = 0;
            LVar9 = RegQueryValueExW(local_7c8,L"EDID",(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)0x0,
                                     &local_890);
            if ((LVar9 == 0) && (local_890 != 0)) {
              lpData = (LPBYTE)operator_new(local_890);
              LVar9 = RegQueryValueExW(local_7c8,L"EDID",(LPDWORD)0x0,(LPDWORD)0x0,lpData,&local_890
                                      );
              if (LVar9 == 0) {
                local_78 = lpData + 0x36;
                ppBVar31 = &local_78;
                local_70 = lpData + 0x48;
                local_68 = lpData + 0x48;
                local_60 = lpData + 0x5a;
                local_58 = lpData + 0x5a;
                local_50 = lpData + 0x6c;
                local_48 = lpData + 0x6c;
                local_40 = lpData + 0x7e;
                do {
                  lVar13 = 0;
                  piVar3 = (int *)ppBVar31[1];
                  piVar4 = (int *)*ppBVar31;
                  piVar16 = piVar3;
                  if (3 < (longlong)piVar3 - (longlong)piVar4) {
                    iVar29 = *piVar4;
                    piVar15 = piVar4;
                    while ((piVar16 = piVar15, iVar29 != -0x4000000 &&
                           (piVar16 = piVar3, piVar15 != piVar3 + -1))) {
                      piVar15 = (int *)((longlong)piVar15 + 1);
                      iVar29 = *piVar15;
                    }
                  }
                  if (piVar16 != piVar3) {
                    local_870 = ppBVar31;
                    iVar29 = MNP_OverrideOutput_WC(&DAT_144ce4af4);
                    lVar17 = local_738;
                    local_770 = &DAT_144ce4af4;
                    local_768 = &DAT_144ce4af4 + (longlong)iVar29 * 2;
                    if (local_738 != 0) {
                      iVar29 = MNP_OverrideOutput_WC(local_738);
                      lVar13 = lVar17 + (longlong)iVar29 * 2;
                    }
                    local_760 = lVar17;
                    local_758 = lVar13;
                    plVar12 = (longlong *)FUN_1416cb4b0(&local_760,local_728,&local_770,0);
                    _Src = *(void **)(*plVar12 + 0x10);
                    lVar13 = *(longlong *)(*plVar12 + 0x18);
                    local_788 = _Src;
                    if (local_728[0] != 0) {
                      FMemory::Free();
                    }
                    local_8a0 = (wchar_t *)0x0;
                    pcVar2 = (char *)((longlong)piVar4 + 5);
                    local_898 = 0;
                    local_898._0_4_ = 0;
                    if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
                      lVar17 = -1;
                      do {
                        lVar26 = lVar17 + 6;
                        lVar17 = lVar17 + 1;
                      } while (*(char *)((longlong)piVar4 + lVar26) != '\0');
                      uVar28 = (int)lVar17 + 1;
                      local_898 = (ulonglong)uVar28;
                      if (0 < (int)uVar28) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_8a0,0);
                      }
                      FGenericPlatformString::Convert<char,wchar_t>(local_8a0,uVar28,pcVar2);
                    }
                    pwVar19 = local_8a0;
                    pwVar32 = local_8a0 + (int)local_898;
                    pwVar27 = local_8a0;
                    if ((int)local_898 != 0) {
                      pwVar32 = pwVar32 + -1;
                    }
                    for (; pwVar27 != pwVar32; pwVar27 = pwVar27 + 1) {
                      iVar29 = iswprint(*pwVar27);
                      if (iVar29 == 0) {
                        if ((pwVar27 != pwVar32) &&
                           (iVar29 = (int)((longlong)pwVar27 - (longlong)pwVar19 >> 1), iVar29 != -1
                           )) {
                          if ((int)local_898 == 0) {
                            pwVar32 = L"";
                            iVar30 = 0;
                          }
                          else {
                            iVar30 = (int)local_898 + -1;
                            pwVar32 = local_8a0;
                          }
                          iVar10 = 0;
                          if ((-1 < iVar29) && (iVar10 = iVar30, iVar29 < iVar30)) {
                            iVar10 = iVar29;
                          }
                          local_868 = (wchar_t *)0x0;
                          local_860 = (ulonglong)(iVar10 + 1);
                          if (iVar10 == 0) {
                            local_860 = 0;
                          }
                          iVar29 = (int)local_860;
                          pwVar27 = local_868;
                          if (0 < iVar29) {
                            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_868,0);
                            pwVar27 = local_868;
                            iVar29 = (int)local_860;
                            if (0 < (int)local_860) {
                              wcsncpy(local_868,pwVar32,(longlong)iVar10);
                              pwVar27[iVar10] = L'\0';
                            }
                          }
                          if (local_8a0 != (wchar_t *)0x0) {
                            FMemory::Free();
                          }
                          uVar5 = local_860._4_4_;
                          local_860 = 0;
                          local_868 = (wchar_t *)0x0;
                          local_898 = CONCAT44(uVar5,iVar29);
                          ppBVar31 = local_870;
                          _Src = local_788;
                          local_8a0 = pwVar27;
                        }
                        break;
                      }
                    }
                    local_880 = (void *)0x0;
                    lVar13 = lVar13 - (longlong)_Src >> 1;
                    local_878 = 0;
                    local_874 = 0;
                    if (lVar13 != 0) {
                      iVar30 = (int)lVar13 + 1;
                      iVar29 = 0;
                      if (0 < iVar30) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_880,iVar30);
                        iVar29 = local_878;
                      }
                      local_878 = iVar29 + iVar30;
                      if (local_874 < local_878) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_880);
                      }
                      _guard_xfg_dispatch_icall_nop(local_880,_Src,lVar13 * 2);
                      *(undefined2 *)((longlong)local_880 + (longlong)(local_878 + -1) * 2) = 0;
                    }
                    local_750 = &local_880;
                    local_748 = &local_8a0;
                    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                    ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>
                              (&DAT_1464b02a0,local_790,&local_750);
                    if (local_880 != (void *)0x0) {
                      FMemory::Free();
                    }
                    if (local_8a0 != (wchar_t *)0x0) {
                      FMemory::Free();
                    }
                  }
                  ppBVar31 = ppBVar31 + 2;
                  local_870 = ppBVar31;
                } while (ppBVar31 != local_38);
              }
            }
          }
          if (local_780 != (LPCWSTR)0x0) {
            FMemory::Free();
          }
        }
        Ordinal_9(local_740);
        param_1 = local_7a0;
        if (local_7c0 != (longlong *)0x0) {
          (**(code **)(*local_7c0 + 0x10))();
          param_1 = local_7a0;
        }
      }
    }
    if (local_7d8 != (IUnknown *)0x0) {
      (*local_7d8->lpVtbl->Release)(local_7d8);
    }
    if (local_7b8 != (longlong *)0x0) {
      (**(code **)(*local_7b8 + 0x10))(local_7b8);
    }
    if (local_888 != (longlong *)0x0) {
      (**(code **)(*local_888 + 0x10))();
    }
    FWindowsPlatformMisc::CoUninitialize();
    iDevNum = local_88c;
  }
  iVar29 = EnumDisplayDevicesW((LPCWSTR)0x0,0,&local_3c8,0);
  do {
    if (iVar29 == 0) {
      return;
    }
    iDevNum_00 = 0;
    if (((byte)local_3c8.StateFlags & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(local_718.DeviceName,0,0x344);
      local_718.cb = 0x348;
      iVar29 = EnumDisplayDevicesW(local_3c8.DeviceName,0,&local_718,0);
      while (iVar29 != 0) {
        pwVar32 = (wchar_t *)0x0;
        if (((local_718.StateFlags & 1) != 0) && ((local_718.StateFlags & 8) == 0)) {
          local_83c = 0;
          local_848 = (void *)0x0;
          local_838 = (wchar_t *)0x0;
          local_830 = 0;
          local_828 = (undefined2 *)0x0;
          local_820 = 0;
          local_7e8 = (void *)0x0;
          local_7e0 = 0;
          pwVar27 = pwVar32;
          if (local_3c8.DeviceName[0] != L'\0') {
            lVar13 = -1;
            do {
              lVar26 = lVar13 + 1;
              lVar17 = lVar13 + 1;
              lVar13 = lVar26;
            } while (local_3c8.DeviceName[lVar17] != L'\0');
            pwVar27 = (wchar_t *)(ulonglong)((int)lVar26 + 1);
          }
          local_840 = 0;
          iVar29 = (int)pwVar27;
          pwVar19 = pwVar32;
          pwVar21 = pwVar32;
          if (iVar29 != 0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_848,pwVar27);
            pwVar19 = (wchar_t *)(ulonglong)local_83c;
            pwVar21 = (wchar_t *)(ulonglong)local_840;
          }
          local_840 = iVar29 + (int)pwVar21;
          if ((int)pwVar19 < (int)local_840) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_848);
          }
          if (iVar29 != 0) {
            _guard_xfg_dispatch_icall_nop(local_848,local_3c8.DeviceName,(longlong)iVar29 * 2);
          }
          EnumDisplayMonitors((HDC)0x0,(LPCRECT)0x0,FUN_1416d6850,(LPARAM)&local_848);
          FString::PrintfImpl(&local_7b0,&DAT_144ce51a4,local_718.DeviceID);
          if (local_828 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          local_828 = local_7b0;
          local_820 = local_7a8;
          local_7a8 = 0;
          local_7b0 = (undefined2 *)0x0;
          uVar11 = FUN_141592950(&local_828,&DAT_144ce4bd4,0);
          uVar28 = (int)local_820 - 1;
          if ((int)local_820 == 0) {
            uVar28 = 0;
          }
          if (8 < uVar28) {
            uVar28 = 8;
          }
          uVar23 = (int)local_820 - 1;
          if ((int)local_820 == 0) {
            uVar23 = 0;
          }
          uVar24 = uVar28;
          if ((uVar28 <= uVar11) && (uVar24 = uVar23, uVar11 < uVar23)) {
            uVar24 = uVar11;
          }
          local_858 = (wchar_t *)0x0;
          puVar33 = &DAT_143f3eda8;
          if ((int)local_820 != 0) {
            puVar33 = local_828;
          }
          iVar29 = uVar24 - uVar28;
          uVar11 = iVar29 + 1;
          if (iVar29 == 0) {
            uVar11 = 0;
          }
          local_850 = (ulonglong)uVar11;
          if (0 < (int)uVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_858,0);
            pwVar32 = local_858;
            uVar11 = (uint)local_850;
            if (0 < (int)(uint)local_850) {
              wcsncpy(local_858,puVar33 + (int)uVar28,(longlong)iVar29);
              pwVar32[iVar29] = L'\0';
            }
          }
          if (local_838 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          uVar5 = local_850._4_4_;
          ppvVar22 = (void **)0x0;
          local_858 = (wchar_t *)0x0;
          local_850 = 0;
          local_830 = CONCAT44(uVar5,uVar11);
          local_838 = pwVar32;
          TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
          ::FindId(&DAT_1464b02a0,&local_7cc,&local_838);
          ppvVar20 = ppvVar22;
          if (local_7cc != -1) {
            ppvVar20 = (void **)(DAT_1464b02a0 + (longlong)local_7cc * 0x28);
          }
          ppvVar18 = ppvVar20 + 2;
          if (ppvVar20 == (void **)0x0) {
            ppvVar18 = ppvVar22;
          }
          if (ppvVar18 == (void **)0x0) {
            pwVar32 = local_838;
            iVar29 = (int)local_830;
LAB_1416d3088:
            local_7e0 = CONCAT44(local_7e0._4_4_,iVar29);
            if ((iVar29 == 0) && (local_7e0._4_4_ == 0)) {
              local_7e0 = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_7e8,iVar29);
              _guard_xfg_dispatch_icall_nop(local_7e8,pwVar32,(longlong)iVar29 * 2);
            }
          }
          else if (&local_7e8 != ppvVar18) {
            pwVar32 = *ppvVar18;
            iVar29 = *(int *)(ppvVar18 + 1);
            goto LAB_1416d3088;
          }
          cVar6 = FUN_1416d3600(&local_838,&local_818,&local_814);
          if (cVar6 != '\0') {
            if (local_828 != local_718.DeviceID) {
              ppvVar20 = ppvVar22;
              if (local_718.DeviceID[0] != L'\0') {
                lVar13 = -1;
                do {
                  lVar26 = lVar13 + 1;
                  lVar17 = lVar13 + 1;
                  lVar13 = lVar26;
                } while (local_718.DeviceID[lVar17] != L'\0');
                ppvVar20 = (void **)(ulonglong)((int)lVar26 + 1);
              }
              uVar28 = local_820._4_4_;
              local_820 = (ulonglong)local_820._4_4_ << 0x20;
              uVar11 = (uint)ppvVar20;
              if (uVar28 != uVar11) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_828,ppvVar20);
                ppvVar22 = (void **)(local_820 & 0xffffffff);
                uVar28 = local_820._4_4_;
              }
              iVar29 = uVar11 + (int)ppvVar22;
              local_820 = CONCAT44(local_820._4_4_,iVar29);
              if ((int)uVar28 < iVar29) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_828);
              }
              if (uVar11 != 0) {
                _guard_xfg_dispatch_icall_nop
                          (local_828,local_718.DeviceID,(longlong)(int)uVar11 * 2);
              }
            }
            iVar29 = (int)param_1[1];
            local_7f0 = ((byte)local_3c8.StateFlags & 4) != 0;
            *(int *)(param_1 + 1) = iVar29 + 1;
            if (*(int *)((longlong)param_1 + 0xc) < iVar29 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::
              ResizeGrow(param_1,iVar29);
            }
            lVar13 = (longlong)iVar29 * 0x70 + *param_1;
            FString::FString(lVar13,&local_848);
            FString::FString(lVar13 + 0x10,&local_838);
            FString::FString(lVar13 + 0x20,&local_828);
            *(undefined4 *)(lVar13 + 0x30) = local_818;
            *(undefined4 *)(lVar13 + 0x34) = local_814;
            *(undefined4 *)(lVar13 + 0x38) = local_810;
            *(undefined4 *)(lVar13 + 0x3c) = uStack_80c;
            *(undefined4 *)(lVar13 + 0x40) = uStack_808;
            *(undefined4 *)(lVar13 + 0x44) = uStack_804;
            *(undefined4 *)(lVar13 + 0x48) = local_800;
            *(undefined4 *)(lVar13 + 0x4c) = uStack_7fc;
            *(undefined4 *)(lVar13 + 0x50) = uStack_7f8;
            *(undefined4 *)(lVar13 + 0x54) = uStack_7f4;
            *(char *)(lVar13 + 0x58) = local_7f0;
            FString::FString(lVar13 + 0x60);
            if ((local_798 == 0) && (local_7f0 != '\0')) {
              local_798 = (longlong)((int)param_1[1] + -1) * 0x70 + *param_1;
            }
          }
          if (local_7e8 != (void *)0x0) {
            FMemory::Free();
          }
          if (local_828 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (local_838 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          if (local_848 != (void *)0x0) {
            FMemory::Free();
          }
        }
        iDevNum_00 = iDevNum_00 + 1;
        _guard_xfg_dispatch_icall_nop(local_718.DeviceName,0,0x344);
        local_718.cb = 0x348;
        iVar29 = EnumDisplayDevicesW(local_3c8.DeviceName,iDevNum_00,&local_718,0);
        iDevNum = local_88c;
      }
    }
    _guard_xfg_dispatch_icall_nop(local_3c8.DeviceName,0,0x344);
    iDevNum = iDevNum + 1;
    local_3c8.cb = 0x348;
    local_88c = iDevNum;
    iVar29 = EnumDisplayDevicesW((LPCWSTR)0x0,iDevNum,&local_3c8,0);
  } while( true );
}



// FUNCTION 1416d3310 GetPosition body=56 status=ok
// SIG undefined GetPosition(void)

float * FWindowsCursor::GetPosition(undefined8 param_1,float *param_2)

{
  tagPOINT local_res10 [3];
  
  GetCursorPos(local_res10);
  *param_2 = (float)local_res10[0].x;
  param_2[1] = (float)local_res10[0].y;
  return param_2;
}



// FUNCTION 1416d3350 FUN_1416d3350 body=91 status=ok
// SIG undefined FUN_1416d3350(void)

undefined1 FUN_1416d3350(void)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = FCommandLine::Get();
  cVar2 = FParse::Param(uVar1,L"UNATTENDED");
  if (cVar2 == '\0') {
    LowLevelFatalErrorHandler
              ("Unknown",0x80,L"GetRestoredDimensions is not expected to be called on this platform"
              );
    FDebug::AssertFailed
              (&DAT_144ce4fd3,"Unknown",0x80,
               L"GetRestoredDimensions is not expected to be called on this platform");
  }
  return 0;
}



// FUNCTION 1416d33b0 GetRestoredDimensions body=232 status=ok
// SIG undefined GetRestoredDimensions(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FWindowsWindow::GetRestoredDimensions
                    (longlong param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  BOOL BVar1;
  LONG LVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  HMONITOR hMonitor;
  ulonglong uVar3;
  undefined1 auStack_a8 [32];
  tagMONITORINFO local_88;
  WINDOWPLACEMENT local_60;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_60.length = 0x2c;
  BVar1 = GetWindowPlacement(*(HWND *)(param_1 + 0x28),&local_60);
  if (BVar1 == 0) {
    uVar3 = CONCAT44(extraout_var,BVar1) & 0xffffffffffffff00;
  }
  else {
    *param_2 = local_60.rcNormalPosition.left;
    *param_3 = local_60.rcNormalPosition.top;
    *param_4 = local_60.rcNormalPosition.right - local_60.rcNormalPosition.left;
    *param_5 = local_60.rcNormalPosition.bottom - local_60.rcNormalPosition.top;
    LVar2 = GetWindowLongW(*(HWND *)(param_1 + 0x28),-0x14);
    uVar3 = CONCAT44(extraout_var_00,LVar2);
    if (-1 < (char)LVar2) {
      hMonitor = MonitorFromWindow(*(HWND *)(param_1 + 0x28),(*(int *)(param_1 + 0x38) != 0) + 1);
      local_88.cbSize = 0x28;
      GetMonitorInfoW(hMonitor,&local_88);
      *param_2 = *param_2 + (local_88.rcWork.left - local_88.rcMonitor.left);
      uVar3 = (ulonglong)(uint)(local_88.rcWork.top - local_88.rcMonitor.top);
      *param_3 = *param_3 + (local_88.rcWork.top - local_88.rcMonitor.top);
    }
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3;
}



// FUNCTION 1416d34a0 GetScreenExt body=107 status=ok
// SIG undefined GetScreenExt(void)

undefined8 FTextStoreACP::GetScreenExt(longlong param_1,int param_2,int *param_3)

{
  float local_res20;
  float local_res24;
  float local_18;
  float local_14;
  
  if (param_2 != 0) {
    return 0x80070057;
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x50))
            (*(longlong **)(param_1 + 0x18),&local_res20,&local_18);
  *param_3 = (int)local_res20;
  param_3[1] = (int)local_res24;
  param_3[2] = (int)(local_18 + local_res20);
  param_3[3] = (int)(local_14 + local_res24);
  return 0;
}



// FUNCTION 1416d3510 GetSelection body=223 status=ok
// SIG undefined GetSelection(void)

undefined8
FTextStoreACP::GetSelection(longlong param_1,int param_2,int param_3,longlong param_4,int *param_5)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  int local_res8 [2];
  int local_28;
  int local_24 [3];
  
  if ((*(uint *)(param_1 + 0x38) >> 1 & 1) == 0) {
    return 0x80040201;
  }
  if (param_2 != -1) {
    return 0x80040205;
  }
  *param_5 = 0;
  if ((param_3 != 0) != 0) {
    puVar1 = (undefined4 *)(param_4 + 8);
    uVar2 = (ulonglong)(uint)(param_3 != 0);
    do {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                (*(longlong **)(param_1 + 0x18),local_res8,&local_28,local_24);
      puVar1[-2] = local_res8[0];
      puVar1[-1] = local_res8[0] + local_28;
      if (local_24[0] == 0) {
        *puVar1 = 1;
      }
      else if (local_24[0] == 1) {
        *puVar1 = 2;
      }
      puVar1[1] = 0;
      puVar1 = puVar1 + 4;
      *param_5 = *param_5 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}



// FUNCTION 1416d3600 FUN_1416d3600 body=1044 status=ok
// SIG undefined FUN_1416d3600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1416d3600(undefined8 *param_1,uint *param_2,uint *param_3)

{
  longlong lVar1;
  DWORD DVar2;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  LSTATUS LVar6;
  HDEVINFO DeviceInfoSet;
  longlong lVar7;
  HKEY hKey;
  wchar_t *pwVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  wchar_t *pwVar16;
  DWORD MemberIndex;
  undefined1 auStackY_688 [32];
  undefined1 local_648;
  wchar_t *local_640;
  ulonglong local_638;
  wchar_t *local_630;
  ulonglong local_628;
  DWORD local_620 [2];
  HDEVINFO local_618;
  uint *local_610;
  uint *local_608;
  _SP_DEVINFO_DATA local_600;
  short local_5d8 [200];
  BYTE local_448 [56];
  byte local_410;
  byte local_40e;
  byte local_40d;
  byte local_40b;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStackY_688;
  MemberIndex = 0;
  local_610 = param_2;
  local_608 = param_3;
  DeviceInfoSet =
       SetupDiGetClassDevsExW
                 ((GUID *)&DAT_144cef7d8,(PCWSTR)0x0,(HWND)0x0,2,(HDEVINFO)0x0,(PCWSTR)0x0,
                  (PVOID)0x0);
  local_648 = 0;
  if (DeviceInfoSet != (HDEVINFO)0x0) {
    local_648 = 0;
    local_618 = DeviceInfoSet;
    DVar2 = GetLastError();
    if (DVar2 != 0x103) {
LAB_1416d36b0:
      local_600.cbSize = 0x20;
      local_600.ClassGuid.Data1 = 0;
      local_600.ClassGuid.Data2 = 0;
      local_600.ClassGuid.Data3 = 0;
      local_600.ClassGuid.Data4[0] = '\0';
      local_600.ClassGuid.Data4[1] = '\0';
      local_600.ClassGuid.Data4[2] = '\0';
      local_600.ClassGuid.Data4[3] = '\0';
      local_600.ClassGuid.Data4[4] = '\0';
      local_600.ClassGuid.Data4[5] = '\0';
      local_600.ClassGuid.Data4[6] = '\0';
      local_600.ClassGuid.Data4[7] = '\0';
      local_600.DevInst = 0;
      local_600.Reserved = 0;
      BVar3 = SetupDiEnumDeviceInfo(DeviceInfoSet,MemberIndex,&local_600);
      if (BVar3 != 1) goto LAB_1416d38c5;
      iVar4 = CM_Get_Device_IDW(local_600.DevInst,local_5d8,200,0);
      if (iVar4 != 0) goto LAB_1416d38c5;
      local_638 = 0;
      local_640 = (wchar_t *)0x0;
      if (local_5d8[0] != 0) {
        lVar7 = -1;
        do {
          lVar1 = lVar7 + 1;
          lVar7 = lVar7 + 1;
        } while (local_5d8[lVar1] != 0);
        uVar12 = (int)lVar7 + 1;
        local_638 = (ulonglong)uVar12;
        if (0 < (int)uVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_640,0);
        }
        FGenericPlatformString::Memcpy(local_640,local_5d8,(longlong)(int)uVar12 * 2);
      }
      uVar5 = FUN_141592950(&local_640,&DAT_144ccfab0,0);
      uVar12 = (int)local_638 - 1;
      if ((int)local_638 == 0) {
        uVar12 = 0;
      }
      if (8 < uVar12) {
        uVar12 = 8;
      }
      uVar13 = (int)local_638 - 1;
      if ((int)local_638 == 0) {
        uVar13 = 0;
      }
      uVar14 = uVar12;
      if ((uVar12 <= uVar5) && (uVar14 = uVar13, uVar5 < uVar13)) {
        uVar14 = uVar5;
      }
      pwVar8 = L"";
      if ((int)local_638 != 0) {
        pwVar8 = local_640;
      }
      iVar4 = uVar14 - uVar12;
      local_630 = (wchar_t *)0x0;
      uVar5 = iVar4 + 1;
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      local_628 = (ulonglong)uVar5;
      pwVar16 = local_630;
      if (0 < (int)uVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_630,0);
        pwVar16 = local_630;
        uVar5 = (uint)local_628;
        if (0 < (int)(uint)local_628) {
          wcsncpy(local_630,pwVar8 + (int)uVar12,(longlong)iVar4);
          pwVar16[iVar4] = L'\0';
        }
      }
      if (local_640 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      uVar15 = local_628 >> 0x20;
      local_628 = 0;
      local_630 = (wchar_t *)0x0;
      local_638 = CONCAT44((int)uVar15,uVar5);
      if (*(int *)(param_1 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*param_1;
      }
      pwVar8 = L"";
      if (uVar5 != 0) {
        pwVar8 = pwVar16;
      }
      local_640 = pwVar16;
      iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(pwVar8,puVar11);
      DeviceInfoSet = local_618;
      if (((iVar4 != 0) ||
          (hKey = SetupDiOpenDevRegKey(local_618,&local_600,1,0,1,0x20019), hKey == (HKEY)0x0)) ||
         (hKey == (HKEY)&DAT_ffffffffffffffff)) {
        if (local_640 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        goto LAB_1416d38c5;
      }
      local_620[1] = 0x200;
      local_620[0] = 0x400;
      uVar15 = 0;
      do {
        LVar6 = RegEnumValueW(hKey,(DWORD)uVar15,&DAT_1469e5f70,local_620 + 1,(LPDWORD)0x0,
                              (LPDWORD)&local_618,local_448,local_620);
        uVar9 = 0;
        if (LVar6 == 0) {
          while (uVar10 = uVar9 + 1,
                (&DAT_1469e5f70)[uVar9] == *(short *)("Unknown" + uVar10 * 2 + 6)) {
            uVar9 = uVar10;
            if (uVar10 == 5) {
              local_648 = 1;
              *local_610 = (local_40e & 0xfffffff0) << 4 | (uint)local_410;
              *local_608 = (local_40b & 0xfffffff0) << 4 | (uint)local_40d;
              goto LAB_1416d39a8;
            }
          }
        }
        uVar15 = (ulonglong)((DWORD)uVar15 + 1);
      } while (LVar6 != 0x103);
      local_648 = 0;
LAB_1416d39a8:
      RegCloseKey(hKey);
      if (local_640 != (wchar_t *)0x0) {
        FMemory::Free();
      }
    }
LAB_1416d39d8:
    BVar3 = SetupDiDestroyDeviceInfoList(DeviceInfoSet);
    if (BVar3 == 0) {
      local_648 = 0;
    }
  }
  return local_648;
LAB_1416d38c5:
  MemberIndex = MemberIndex + 1;
  DVar2 = GetLastError();
  if (DVar2 == 0x103) goto LAB_1416d39d8;
  goto LAB_1416d36b0;
}



// FUNCTION 1416d3a20 GetSplashFilename body=842 status=ok
// SIG undefined GetSplashFilename(void)

longlong * GetSplashFilename(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  void *pvVar10;
  undefined **ppuVar11;
  short *_Src;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  undefined8 local_30;
  
  local_40 = *(int *)(param_2 + 1);
  lVar9 = (longlong)local_40;
  iVar6 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar6 = 0;
  }
  if ((local_40 != 0) || (iVar3 = 2, iVar6 == -1)) {
    iVar3 = 1;
  }
  pvVar10 = (void *)*param_2;
  local_48 = (void *)0x0;
  if ((local_40 == 0) && (iVar6 + iVar3 == 0)) {
    local_3c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40 + iVar6 + iVar3);
    _guard_xfg_dispatch_icall_nop(local_48,pvVar10,lVar9 * 2);
  }
  FString::PathAppend(&local_48,*param_3,iVar6);
  local_58 = (void *)0x0;
  local_50._0_4_ = 0;
  local_50._4_4_ = 0;
  if (PTR_DAT_1464b0270 != (undefined *)0x0) {
    ppuVar11 = &PTR_DAT_1464b0270;
    _Src = (short *)PTR_DAT_1464b0270;
    do {
      pvVar1 = local_48;
      pvVar10 = (void *)0x0;
      if (*_Src == 0) {
        lVar9 = (longlong)local_40;
        local_38 = (void *)0x0;
        local_30 = CONCAT44(local_30._4_4_,local_40);
        if (local_40 == 0) {
          iVar3 = 0;
          iVar6 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_40,0);
          pvVar10 = local_38;
          _guard_xfg_dispatch_icall_nop(local_38,pvVar1,lVar9 * 2);
          iVar3 = local_30._4_4_;
          iVar6 = (int)local_30;
        }
      }
      else {
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (_Src[lVar9] != 0);
        lVar7 = (longlong)local_40;
        iVar4 = (int)lVar9;
        if ((local_40 != 0) || (iVar6 = 1, iVar4 == 0)) {
          iVar6 = 0;
        }
        local_68 = (void *)0x0;
        local_60 = CONCAT44(local_60._4_4_,local_40);
        if ((local_40 == 0) && (iVar6 + iVar4 == 0)) {
          local_60 = 0;
          uVar8 = 0;
          iVar3 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_40 + iVar6 + iVar4,0);
          pvVar10 = local_68;
          _guard_xfg_dispatch_icall_nop(local_68,pvVar1,lVar7 * 2);
          uVar8 = local_60 & 0xffffffff;
          iVar3 = local_60._4_4_;
        }
        iVar5 = (int)uVar8;
        iVar6 = iVar5;
        if (iVar4 != 0) {
          iVar6 = iVar5 + (uint)(iVar5 == 0) + iVar4;
          local_60._0_4_ = iVar6;
          if (iVar3 < iVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar8);
            pvVar10 = local_68;
            iVar3 = local_60._4_4_;
          }
          iVar6 = (int)local_60;
          pvVar1 = (void *)((longlong)pvVar10 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,_Src,(longlong)iVar4 * 2);
          *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar1) = 0;
        }
        local_68 = (void *)0x0;
        local_60 = 0;
      }
      if (local_58 != (void *)0x0) {
        FMemory::Free();
      }
      local_38 = (void *)0x0;
      ppuVar11 = ppuVar11 + 1;
      local_30 = 0;
      local_58 = pvVar10;
      local_50._0_4_ = iVar6;
      local_50._4_4_ = iVar3;
      cVar2 = FPaths::FileExists(&local_58);
      pvVar10 = local_58;
      if (cVar2 != '\0') {
        local_58 = (void *)0x0;
        *param_1 = (longlong)pvVar10;
        *(int *)(param_1 + 1) = (int)local_50;
        *(int *)((longlong)param_1 + 0xc) = local_50._4_4_;
        local_50 = 0;
        if (local_48 == (void *)0x0) {
          return param_1;
        }
        FMemory::Free();
        return param_1;
      }
      _Src = (short *)*ppuVar11;
    } while (_Src != (short *)0x0);
  }
  pvVar1 = local_48;
  lVar9 = (longlong)local_40;
  local_60._0_4_ = local_40;
  local_68 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_68,(5 - (uint)(local_40 != 0)) + local_40,0);
  pvVar10 = local_68;
  _guard_xfg_dispatch_icall_nop(local_68,pvVar1,lVar9 * 2);
  iVar6 = (int)local_60;
  lVar9 = (longlong)(int)local_60;
  local_60._0_4_ = (5 - (uint)((int)local_60 != 0)) + (int)local_60;
  if (local_60._4_4_ < (int)local_60) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar6);
    pvVar10 = local_68;
  }
  lVar9 = lVar9 - (ulonglong)(iVar6 != 0);
  builtin_wcsncpy((wchar_t *)((longlong)pvVar10 + lVar9 * 2),L".bmp",4);
  *(undefined2 *)((longlong)pvVar10 + lVar9 * 2 + 8) = 0;
  *param_1 = (longlong)pvVar10;
  *(int *)(param_1 + 1) = (int)local_60;
  *(int *)((longlong)param_1 + 0xc) = local_60._4_4_;
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1416d3d70 GetSplashPath body=738 status=ok
// SIG undefined GetSplashPath(void)

undefined8
FGenericPlatformSplash::GetSplashPath(short *param_1,longlong *param_2,undefined1 *param_3)

{
  void *_Dst;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  int iVar10;
  longlong local_68;
  int local_60;
  int local_5c;
  longlong local_58;
  undefined8 local_50;
  longlong local_48 [2];
  longlong local_38 [2];
  
  local_50 = 8;
  local_58 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  lVar9 = local_58;
  FGenericPlatformString::Memcpy(local_58,L"Splash/",0x10);
  if ((param_1 == (short *)0x0) || (*param_1 == 0)) {
    local_60 = (int)local_50;
    local_5c = local_50._4_4_;
  }
  else {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (param_1[lVar7] != 0);
    iVar6 = (int)lVar7;
    if (((int)local_50 != 0) || (iVar2 = 1, iVar6 == 0)) {
      iVar2 = 0;
    }
    local_68 = lVar9;
    local_60 = (int)local_50;
    local_5c = local_50._4_4_;
    iVar10 = (int)local_50;
    if (local_50._4_4_ < (int)local_50 + iVar2 + iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
      iVar10 = local_60;
    }
    lVar9 = local_68;
    local_60 = iVar10;
    if (iVar6 != 0) {
      local_60 = iVar10 + (uint)(iVar10 == 0) + iVar6;
      if (local_5c < local_60) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,iVar10);
      }
      iVar1 = local_5c;
      iVar2 = local_60;
      lVar9 = local_68;
      _Dst = (void *)(local_68 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(_Dst,param_1,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)iVar6 * 2 + (longlong)_Dst) = 0;
      local_60 = iVar2;
      local_5c = iVar1;
    }
  }
  local_68 = lVar9;
  uVar3 = FPaths::ProjectContentDir(local_38);
  uVar3 = GetSplashFilename(local_48,uVar3,&local_68);
  plVar4 = (longlong *)FPaths::ConvertRelativePathToFull(&local_58,uVar3);
  if (param_2 != plVar4) {
    if (*param_2 != 0) {
      FMemory::Free();
    }
    *param_2 = *plVar4;
    *plVar4 = 0;
    *(int *)(param_2 + 1) = (int)plVar4[1];
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar4 + 0xc);
    plVar4[1] = 0;
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  *param_3 = 1;
  plVar4 = (longlong *)FUN_1415c3d50();
  puVar8 = &DAT_143f3eda8;
  if ((int)param_2[1] == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  lVar7 = (**(code **)(*plVar4 + 0xe8))(plVar4,puVar5);
  if (lVar7 == -1) {
    uVar3 = FPaths::EngineContentDir(&local_58);
    uVar3 = GetSplashFilename(local_48,uVar3,&local_68);
    plVar4 = (longlong *)FPaths::ConvertRelativePathToFull(local_38,uVar3);
    if (param_2 != plVar4) {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = *plVar4;
      *plVar4 = 0;
      *(int *)(param_2 + 1) = (int)plVar4[1];
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar4 + 0xc);
      plVar4[1] = 0;
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
    *param_3 = 0;
    plVar4 = (longlong *)FUN_1415c3d50();
    if ((int)param_2[1] != 0) {
      puVar8 = (undefined2 *)*param_2;
    }
    lVar7 = (**(code **)(*plVar4 + 0xe8))(plVar4,puVar8);
    if (lVar7 == -1) {
      uVar3 = 0;
      goto LAB_1416d4024;
    }
  }
  uVar3 = 1;
LAB_1416d4024:
  if (lVar9 != 0) {
    FMemory::Free(lVar9);
  }
  return uVar3;
}



// FUNCTION 1416d4060 GetStatus body=59 status=ok
// SIG undefined GetStatus(void)

undefined8 FTextStoreACP::GetStatus(longlong param_1,uint *param_2)

{
  char cVar1;
  
  if (param_2 == (uint *)0x0) {
    return 0x80070057;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
  param_2[1] = 8;
  *param_2 = (uint)(cVar1 != '\0');
  return 0;
}



// FUNCTION 1416d40a0 GetText body=358 status=ok
// SIG undefined GetText(void)

undefined8
FTextStoreACP::GetText
          (longlong param_1,int param_2,int param_3,undefined2 *param_4,uint param_5,uint *param_6,
          uint *param_7,uint param_8,int *param_9,int *param_10)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong local_38 [2];
  
  if ((*(uint *)(param_1 + 0x38) >> 1 & 1) == 0) {
    return 0x80040201;
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
  if (((param_2 < 0) || (iVar1 < param_2)) ||
     ((param_3 != -1 && ((param_3 < 0 || (iVar1 < param_3)))))) {
    return 0x80040200;
  }
  if (param_3 == -1) {
    param_3 = iVar1;
  }
  uVar4 = 0;
  uVar5 = param_3 - param_2;
  *param_6 = 0;
  if ((param_4 != (undefined2 *)0x0) && (param_5 != 0)) {
    local_38[0] = 0;
    local_38[1] = 0;
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))
              (*(longlong **)(param_1 + 0x18),param_2,uVar5,local_38);
    if (uVar5 != 0) {
      uVar2 = *param_6;
      do {
        if (param_5 <= uVar2) break;
        lVar3 = (longlong)(int)uVar4;
        uVar4 = uVar4 + 1;
        *param_4 = *(undefined2 *)(local_38[0] + lVar3 * 2);
        param_4 = param_4 + 1;
        *param_6 = *param_6 + 1;
        uVar2 = *param_6;
      } while (uVar4 < uVar5);
    }
    if (local_38[0] != 0) {
      FMemory::Free(local_38[0]);
    }
  }
  *param_9 = 0;
  if ((param_7 != (uint *)0x0) && (param_8 != 0)) {
    param_7[1] = 0;
    if (param_8 <= uVar5) {
      uVar5 = param_8;
    }
    *param_7 = uVar5;
    *param_9 = *param_9 + 1;
  }
  *param_10 = param_3;
  return 0;
}



// FUNCTION 1416d4210 GetTextExt body=259 status=ok
// SIG undefined GetTextExt(void)

undefined8
FTextStoreACP::GetTextExt
          (longlong param_1,undefined8 param_2,int param_3,int param_4,int *param_5,uint *param_6)

{
  byte bVar1;
  int iVar2;
  float local_res8;
  float local_resc;
  float local_18;
  float local_14;
  
  if ((*(uint *)(param_1 + 0x38) >> 1 & 1) == 0) {
    return 0x80040201;
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
  if (param_3 == param_4) {
    return 0x80070057;
  }
  if (((-1 < param_3) && (param_3 <= iVar2)) &&
     ((param_4 == -1 || ((-1 < param_4 && (param_4 <= iVar2)))))) {
    bVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))
                      (*(longlong **)(param_1 + 0x18),param_3,param_4 - param_3,&local_res8,
                       &local_18);
    *param_6 = (uint)bVar1;
    *param_5 = (int)local_res8;
    param_5[1] = (int)local_resc;
    param_5[2] = (int)(local_18 + local_res8);
    param_5[3] = (int)(local_14 + local_resc);
    return 0;
  }
  return 0x80040200;
}



// FUNCTION 1416d4330 FUN_1416d4330 body=65 status=ok
// SIG undefined FUN_1416d4330(void)

ulonglong FUN_1416d4330(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (0 < *(int *)(param_1 + 0x1c0)) {
    uVar2 = uVar1;
    do {
      if ((*(char *)(*(longlong *)(param_1 + 0x1b8) + 4 + uVar1 * 8) != '\0') &&
         (*(int *)(*(longlong *)(param_1 + 0x1b8) + uVar1 * 8) == param_2)) {
        return uVar2;
      }
      uVar2 = (ulonglong)((int)uVar2 + 1);
      uVar1 = uVar1 + 1;
    } while ((longlong)uVar1 < (longlong)*(int *)(param_1 + 0x1c0));
  }
  return 0xffffffff;
}



// FUNCTION 1416d4380 GetWindowBorderSize body=156 status=ok
// SIG undefined GetWindowBorderSize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FWindowsWindow::GetWindowBorderSize(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  tagWINDOWINFO local_58;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  piVar1 = (int *)(**(code **)(*param_1 + 0xd8))();
  if (*piVar1 == 5) {
    lVar2 = (**(code **)(*param_1 + 0xd8))(param_1);
    if (*(char *)(lVar2 + 0x18) == '\0') {
      return 0;
    }
  }
  local_58.cyWindowBorders = 0;
  local_58.atomWindowType = 0;
  local_58.wCreatorVersion = 0;
  local_58.cbSize = 0x3c;
  local_58.rcWindow.left = 0;
  local_58.rcWindow.top = 0;
  local_58.rcWindow.right = 0;
  local_58.rcWindow.bottom = 0;
  local_58.rcClient.left = 0;
  local_58.rcClient.top = 0;
  local_58.rcClient.right = 0;
  local_58.rcClient.bottom = 0;
  local_58.dwStyle = 0;
  local_58.dwExStyle = 0;
  local_58.dwWindowStatus = 0;
  local_58.cxWindowBorders = 0;
  GetWindowInfo((HWND)param_1[5],&local_58);
  return local_58.cxWindowBorders;
}



// FUNCTION 1416d4420 GetWindowTitleAlignment body=152 status=ok
// SIG undefined GetWindowTitleAlignment(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FWindowsApplication::GetWindowTitleAlignment(void)

{
  BOOL BVar1;
  undefined8 uVar2;
  DWORDLONG dwlConditionMask;
  undefined1 auStack_158 [32];
  _OSVERSIONINFOEXW local_138;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  ::_guard_xfg_dispatch_icall_nop(&local_138.dwBuildNumber,0,0x110);
  local_138.dwMajorVersion = 6;
  local_138.dwMinorVersion = 2;
  local_138.dwOSVersionInfoSize = 0x11c;
  uVar2 = VerSetConditionMask(0,2,3);
  dwlConditionMask = VerSetConditionMask(uVar2,1,3);
  BVar1 = VerifyVersionInfoW(&local_138,3,dwlConditionMask);
  return BVar1 != 0;
}



// FUNCTION 1416d44d0 GetWnd body=132 status=ok
// SIG undefined GetWnd(void)

undefined8 FTextStoreACP::GetWnd(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *local_18;
  longlong *local_10;
  
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x58))(*(longlong **)(param_1 + 0x18),&local_18);
  if (local_18 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*local_18 + 0xc0))();
  }
  *param_3 = uVar5;
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
    return 0;
  }
  return 0;
}



// FUNCTION 1416d4560 GetWorkArea body=142 status=ok
// SIG undefined GetWorkArea(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

LONG * FWindowsApplication::GetWorkArea(undefined8 param_1,LONG *param_2,LONG *param_3)

{
  HMONITOR hMonitor;
  undefined1 auStack_68 [32];
  RECT local_48;
  tagMONITORINFO local_38;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_48.left = *param_3;
  local_48.top = param_3[1];
  local_48.right = param_3[2];
  local_48.bottom = param_3[3];
  hMonitor = MonitorFromRect(&local_48,2);
  local_38.cbSize = 0x28;
  GetMonitorInfoW(hMonitor,&local_38);
  *param_2 = local_38.rcWork.left;
  param_2[1] = local_38.rcWork.top;
  param_2[2] = local_38.rcWork.right;
  param_2[3] = local_38.rcWork.bottom;
  return param_2;
}



// FUNCTION 1416d4600 FUN_1416d4600 body=172 status=ok
// SIG undefined FUN_1416d4600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1416d4600(void)

{
  int iVar1;
  longlong *plVar2;
  
  iVar1 = DAT_1469e64b8;
  LOCK();
  DAT_1469e64b8 = DAT_1469e64b8 + 1;
  UNLOCK();
  if (iVar1 == 0) {
    DAT_1468c2174 = 1;
    DAT_1468c2175 = 1;
    DAT_1468b6158 = 0;
    _DAT_1468be16e = 0;
    DAT_1468c217d = 0;
    DAT_1468c2176 = 0;
    TBaseMulticastDelegate<void>::Broadcast(&DAT_1464aefe0);
    plVar2 = (longlong *)FUN_141672640();
    (**(code **)(*plVar2 + 0x48))(plVar2);
    do {
      iVar1 = ShowCursor(1);
    } while (iVar1 < 0);
    ReleaseCapture();
    ClipCursor((RECT *)0x0);
    FUN_1416cf5b0(&DAT_1468b6170);
    FUN_1416aa800(&DAT_1468b6170,0);
    TBaseMulticastDelegate<void>::Broadcast(&DAT_1464af010);
    return;
  }
  return;
}



// FUNCTION 1416d46b0 Hide body=144 status=ok
// SIG undefined Hide(void)

void FWindowsPlatformSplash::Hide(void)

{
  if (DAT_1469e5ee8 != (HANDLE)0x0) {
    if (DAT_1469e5ef8 != (HWND)0x0) {
      PostMessageW(DAT_1469e5ef8,2,0,0);
    }
    WaitForSingleObject(DAT_1469e5ee8,0xffffffff);
    CloseHandle(DAT_1469e5ee8);
    DAT_1469e5ee8 = (HANDLE)0x0;
    DAT_1469e5ef8 = (HWND)0x0;
    if (DAT_1469e5f00 != (HWND)0x0) {
      PostMessageW(DAT_1469e5f00,2,0,0);
      DAT_1469e5f00 = (HWND)0x0;
    }
  }
  return;
}



// FUNCTION 1416d4770 FUN_1416d4770 body=29 status=ok
// SIG undefined FUN_1416d4770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1416d4770(void)

{
  _DAT_1468b02b0 = FUN_1416cf5b0;
  _DAT_1468b02b8 = FWindowsPlatformApplicationMisc::ClipboardPaste;
  return;
}



// FUNCTION 1416d4790 FUN_1416d4790 body=1404 status=ok
// SIG undefined FUN_1416d4790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1416d4790(longlong *param_1,longlong param_2,longlong *param_3,HINSTANCE param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  POINT pt;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  BOOL BVar12;
  HMONITOR pHVar13;
  HDC hdc;
  HWND pHVar14;
  longlong lVar15;
  HANDLE hProcess;
  HRGN hRgn;
  HMENU hMenu;
  uint uVar16;
  UINT uFlags;
  LPDROPTARGET pDropTarget;
  DWORD dwStyle;
  LPCWSTR lpWindowName;
  int nWidth;
  int nHeight;
  int iVar17;
  DWORD dwExStyle;
  int iVar18;
  float fVar19;
  undefined1 auStackY_138 [32];
  uint local_d8;
  int local_d4;
  int local_d0;
  int iStack_cc;
  longlong local_c8;
  longlong *local_c0;
  DWORD local_b8 [2];
  longlong *local_b0;
  HINSTANCE local_a8;
  tagRECT local_a0;
  ulonglong local_90;
  
  local_90 = DAT_1468387a8 ^ (ulonglong)auStackY_138;
  local_c0 = (longlong *)param_3[1];
  local_b0 = param_5;
  local_c8 = *param_3;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
    UNLOCK();
  }
  plVar1 = param_1 + 1;
  local_a8 = param_4;
  if (plVar1 != &local_c8) {
    *plVar1 = local_c8;
    local_c8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 2,&local_c0);
  }
  plVar8 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_c0 + 1;
    lVar15 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar3 = (int *)((longlong)plVar8 + 0xc);
      iVar9 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  lVar15 = *plVar1;
  param_1[4] = param_2;
  param_1[6] = -1;
  fVar4 = *(float *)(lVar15 + 4);
  fVar5 = *(float *)(lVar15 + 8);
  fVar6 = *(float *)(lVar15 + 0xc);
  fVar7 = *(float *)(lVar15 + 0x10);
  if (DAT_1464b0268 == 0) {
LAB_1416d4938:
    fVar19 = 1.0;
  }
  else {
    if (DAT_1469e5b80 != (code *)0x0) {
      local_d0 = (int)fVar4;
      iStack_cc = (int)fVar5;
      pt.y = iStack_cc;
      pt.x = local_d0;
      pHVar13 = MonitorFromPoint(pt,2);
      if (pHVar13 != (HMONITOR)0x0) {
        local_d8 = 0;
        local_d4 = 0;
        iVar9 = (*DAT_1469e5b80)(pHVar13,0,&local_d8,&local_d4);
        if (-1 < iVar9) {
          fVar19 = (float)local_d8 * 0.010416667;
          goto LAB_1416d4940;
        }
      }
      goto LAB_1416d4938;
    }
    hdc = GetDC((HWND)0x0);
    iVar9 = GetDeviceCaps(hdc,0x58);
    fVar19 = (float)iVar9 * 0.010416667;
    ReleaseDC((HWND)0x0,hdc);
  }
LAB_1416d4940:
  lVar15 = *plVar1;
  iVar9 = (int)fVar4;
  *(float *)(param_1 + 0x15) = fVar19;
  uVar16 = (uint)fVar5;
  iVar18 = (int)fVar6;
  iVar17 = (int)fVar7;
  local_d8 = uVar16;
  local_d4 = iVar9;
  if (*(char *)(lVar15 + 0x18) == '\0') {
    dwStyle = 0x86000000;
    if (*(char *)(lVar15 + 0x19) == '\0') {
      uVar11 = 0x80180;
      uVar10 = 0x180;
    }
    else {
      uVar11 = 0xc0100;
      uVar10 = 0x40100;
    }
    if (*(int *)(lVar15 + 0x14) != 1) {
      uVar11 = uVar10;
    }
    uVar10 = uVar11 | 8;
    if (*(char *)(lVar15 + 0x1a) == '\0') {
      uVar10 = uVar11;
    }
    nWidth = iVar18;
    nHeight = iVar17;
    dwExStyle = uVar10 | 0x20;
    if (*(char *)(lVar15 + 0x1b) != '\0') {
      dwExStyle = uVar10;
    }
  }
  else {
    if (*(char *)(lVar15 + 0x25) == '\0') {
      dwStyle = 0x80c80000;
    }
    else {
      uVar11 = 0xc90000;
      if (*(char *)(lVar15 + 0x23) == '\0') {
        uVar11 = 0xc80000;
      }
      uVar10 = uVar11 | 0x20000;
      if (*(char *)(lVar15 + 0x22) == '\0') {
        uVar10 = uVar11;
      }
      dwStyle = uVar10 | 0x40000;
      if (*(char *)(lVar15 + 0x26) == '\0') {
        dwStyle = uVar10;
      }
    }
    local_a0.left = 0;
    local_a0.top = 0;
    local_a0.right = 0;
    local_a0.bottom = 0;
    AdjustWindowRectEx(&local_a0,dwStyle,0,0x40000);
    iVar9 = local_d4 + local_a0.left;
    uVar16 = uVar16 + local_a0.top;
    lVar15 = param_1[1];
    nWidth = (local_a0.right - local_a0.left) + iVar18;
    nHeight = (local_a0.bottom - local_a0.top) + iVar17;
    dwExStyle = 0x40000;
  }
  if (*local_b0 == 0) {
    pHVar14 = (HWND)0x0;
  }
  else {
    pHVar14 = *(HWND *)(*local_b0 + 0x28);
  }
  if (*(int *)(lVar15 + 0x40) == 0) {
    lpWindowName = L"";
  }
  else {
    lpWindowName = *(LPCWSTR *)(lVar15 + 0x38);
  }
  pHVar14 = CreateWindowExW(dwExStyle,L"UnrealWindow",lpWindowName,dwStyle,iVar9,uVar16,nWidth,
                            nHeight,pHVar14,(HMENU)0x0,local_a8,(LPVOID)0x0);
  param_1[5] = (longlong)pHVar14;
  if (pHVar14 == (HWND)0x0) {
    lVar15 = FUN_1415dcd20();
    if (lVar15 != 0) {
      FUN_1415e70c0(lVar15);
    }
    MessageBoxW((HWND)0x0,L"Window Creation Failed!",L"Error!",0x30);
    GetLastError();
    local_b8[0] = 0;
    hProcess = GetCurrentProcess();
    GetProcessHandleCount(hProcess,local_b8);
    lVar15 = FUN_1415dcd20();
    if (lVar15 == 0) {
      return;
    }
    FUN_1415e5410(lVar15);
    return;
  }
  BVar12 = RegisterTouchWindow(pHVar14,0);
  if (BVar12 == 0) {
    GetLastError();
  }
  *(int *)(param_1 + 0x13) = iVar18;
  *(int *)((longlong)param_1 + 0x9c) = iVar17;
  (**(code **)(*param_1 + 8))(param_1,local_d4,local_d8,iVar18);
  lVar15 = *plVar1;
  if (*(int *)(lVar15 + 0x14) == 1) {
    (**(code **)(*param_1 + 0x98))(param_1,*(undefined4 *)(lVar15 + 0x48));
    lVar15 = param_1[1];
  }
  if (*(char *)(lVar15 + 0x18) == '\0') {
    local_d0 = 1;
    DwmSetWindowAttribute((HWND)param_1[5],2,&local_d0,4);
    local_b8[1] = 0;
    DwmSetWindowAttribute((HWND)param_1[5],4,local_b8 + 1,4);
    lVar15 = param_1[1];
  }
  if (*(char *)(lVar15 + 0x25) == '\0') {
    if (*(char *)(lVar15 + 0x18) == '\0') goto LAB_1416d4cae;
  }
  else if (*(char *)(lVar15 + 0x18) == '\0') {
    uVar16 = 0xc90000;
    if (*(char *)(lVar15 + 0x23) == '\0') {
      uVar16 = 0xc80000;
    }
    uVar11 = uVar16 | dwStyle | 0x20000;
    if (*(char *)(lVar15 + 0x22) == '\0') {
      uVar11 = uVar16 | dwStyle;
    }
    uVar16 = uVar11 | 0x40000;
    if (*(char *)(lVar15 + 0x26) == '\0') {
      uVar16 = uVar11;
    }
    SetWindowLongW((HWND)param_1[5],-0x10,uVar16);
    uFlags = 0x37;
    if (*(int *)(*plVar1 + 0x1c) != 0) {
      uFlags = 0x27;
    }
    SetWindowPos((HWND)param_1[5],(HWND)0x0,0,0,0,0,uFlags);
    *(int *)(param_1 + 6) = iVar18;
    *(int *)((longlong)param_1 + 0x34) = iVar17;
    hRgn = (HRGN)FWindowsWindow::MakeWindowRegionObject(param_1,1);
    SetWindowRgn((HWND)param_1[5],hRgn,0);
    goto LAB_1416d4cae;
  }
  if (*(char *)(lVar15 + 0x21) == '\0') {
    hMenu = GetSystemMenu((HWND)param_1[5],0);
    EnableMenuItem(hMenu,0xf060,1);
  }
LAB_1416d4cae:
  if (*(char *)(*plVar1 + 0x25) != '\0') {
    pDropTarget = (LPDROPTARGET)(param_1 + 3);
    if (param_1 == (longlong *)0x0) {
      pDropTarget = (LPDROPTARGET)0x0;
    }
    RegisterDragDrop((HWND)param_1[5],pDropTarget);
  }
  return;
}



// FUNCTION 1416d4d10 InitializeTSF body=1188 status=ok
// SIG undefined InitializeTSF(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FWindowsTextInputMethodSystem::InitializeTSF(longlong param_1)

{
  longlong lVar1;
  HRESULT HVar2;
  int iVar3;
  DWORD DVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStackY_858 [32];
  longlong *local_828;
  longlong *local_820;
  undefined1 local_818 [2048];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStackY_858;
  HVar2 = CoCreateInstance((IID *)&DAT_145ac6210,(LPUNKNOWN)0x0,1,(IID *)&DAT_145ac6220,&local_828);
  plVar6 = local_828;
  if (HVar2 < 0) {
    FWindowsPlatformMisc::GetSystemErrorMessage(local_818,0x400,HVar2);
    return 0;
  }
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
  }
  *(longlong **)(param_1 + 0x20) = plVar6;
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  iVar3 = (**(code **)*plVar6)(plVar6,&DAT_145ac6240,param_1 + 0x28);
  if (iVar3 < 0) {
    FWindowsPlatformMisc::GetSystemErrorMessage(local_818,0x400,iVar3);
    if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
      return 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
    *(undefined8 *)(param_1 + 0x20) = 0;
    return 0;
  }
  HVar2 = CoCreateInstance((IID *)&DAT_145ac6200,(LPUNKNOWN)0x0,1,(IID *)&DAT_145ac6230,&local_820);
  if (HVar2 < 0) {
    FWindowsPlatformMisc::GetSystemErrorMessage(local_818,0x400,HVar2);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    if (*(longlong **)(param_1 + 0x28) == (longlong *)0x0) {
      return 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
    *(undefined8 *)(param_1 + 0x28) = 0;
    return 0;
  }
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
  }
  *(longlong **)(param_1 + 0x30) = local_820;
  iVar3 = (**(code **)(*local_820 + 0x18))(local_820,param_1 + 0x38);
  if (iVar3 < 0) {
    FWindowsPlatformMisc::GetSystemErrorMessage(local_818,0x400,iVar3);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
LAB_1416d516a:
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
  }
  else {
    local_828 = (longlong *)0x0;
    iVar3 = (**(code **)**(undefined8 **)(param_1 + 0x30))
                      (*(undefined8 **)(param_1 + 0x30),&DAT_145ac6280,&local_828);
    if (iVar3 < 0) {
      FWindowsPlatformMisc::GetSystemErrorMessage(local_818,0x400,iVar3);
      if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
      if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
    }
    else {
      plVar5 = (longlong *)operator_new(0x28);
      plVar6 = (longlong *)0x0;
      if (plVar5 != (longlong *)0x0) {
        plVar5[2] = -1;
        *plVar5 = (longlong)&PTR_FUN_144cef478;
        plVar5[1] = (longlong)&PTR_LAB_144cef4a0;
        plVar5[3] = param_1;
        *(undefined4 *)(plVar5 + 4) = 1;
        plVar6 = plVar5;
      }
      plVar5 = *(longlong **)(param_1 + 0x48);
      if (plVar5 != plVar6) {
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 8))(plVar6);
          plVar5 = *(longlong **)(param_1 + 0x48);
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))();
        }
        *(longlong **)(param_1 + 0x48) = plVar6;
      }
      DVar4 = GetVersion();
      if ((byte)DVar4 < 6) {
        lVar1 = *(longlong *)(param_1 + 0x48);
        plVar6 = (longlong *)(lVar1 + 8);
        if (lVar1 == 0) {
          plVar6 = (longlong *)0x0;
        }
        iVar3 = (**(code **)(*local_828 + 0x18))(local_828,&DAT_145ac62a0,plVar6,lVar1 + 0x14);
      }
      else {
        iVar3 = (**(code **)(*local_828 + 0x18))
                          (local_828,&DAT_145ac6260,*(longlong *)(param_1 + 0x48),
                           *(longlong *)(param_1 + 0x48) + 0x10);
      }
      if (-1 < iVar3) {
        if (local_828 != (longlong *)0x0) {
          (**(code **)(*local_828 + 0x10))();
        }
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))
                          (*(longlong **)(param_1 + 0x30),param_1 + 0x40);
        if (iVar3 < 0) {
          FWindowsPlatformMisc::GetSystemErrorMessage(local_818,0x400,iVar3);
          if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
            *(undefined8 *)(param_1 + 0x20) = 0;
          }
          if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
            *(undefined8 *)(param_1 + 0x28) = 0;
          }
          if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
            *(undefined8 *)(param_1 + 0x30) = 0;
          }
          if (*(longlong **)(param_1 + 0x48) == (longlong *)0x0) {
            return 0;
          }
          (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
          *(undefined8 *)(param_1 + 0x48) = 0;
          return 0;
        }
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x40))
                          (*(longlong **)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40));
        if (-1 < iVar3) {
          return 1;
        }
        FWindowsPlatformMisc::GetSystemErrorMessage(local_818,0x400,iVar3);
        if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
          *(undefined8 *)(param_1 + 0x20) = 0;
        }
        if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
        if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
          *(undefined8 *)(param_1 + 0x30) = 0;
        }
        if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
          *(undefined8 *)(param_1 + 0x48) = 0;
        }
        goto LAB_1416d516a;
      }
      FWindowsPlatformMisc::GetSystemErrorMessage(local_818,0x400,iVar3);
      if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
      if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
      if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
        *(undefined8 *)(param_1 + 0x48) = 0;
      }
    }
    if (local_828 != (longlong *)0x0) {
      (**(code **)(*local_828 + 0x10))();
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1416d51c0 FUN_1416d51c0 body=329 status=ok
// SIG undefined FUN_1416d51c0(void)

void FUN_1416d51c0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 local_28;
  longlong *local_20;
  
  plVar5 = (longlong *)param_2[1];
  uVar6 = *param_2;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_28 = *param_4;
  local_20 = (longlong *)param_4[1];
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0xc0);
  *(int *)(param_1 + 0xc0) = iVar4 + 1;
  if (*(int *)(param_1 + 0xc4) < iVar4 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xb8,iVar4);
  }
  puVar8 = (undefined8 *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0xb8));
  *puVar8 = uVar6;
  puVar8[1] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  FUN_1416d4790(uVar6,param_1,param_3,*(undefined8 *)(param_1 + 0x78),&local_28,param_5);
  plVar3 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  return;
}



// FUNCTION 1416d5330 InsertTextAtSelection body=545 status=ok
// SIG undefined InsertTextAtSelection(void)

undefined8
FTextStoreACP::InsertTextAtSelection
          (longlong param_1,int param_2,wchar_t *param_3,int param_4,int *param_5,int *param_6,
          int *param_7)

{
  wchar_t *pwVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int local_res10 [2];
  int local_38;
  undefined1 local_34 [4];
  wchar_t *local_30;
  int local_28;
  undefined4 local_24;
  undefined8 uVar6;
  
  if (((param_2 == 2) && ((*(uint *)(param_1 + 0x38) >> 1 & 1) == 0)) ||
     (((byte)*(undefined4 *)(param_1 + 0x38) & 6) != 6)) {
    return 0x80040201;
  }
  if ((param_4 != 0) && (param_3 == (wchar_t *)0x0)) {
    return 0x80070057;
  }
  uVar6 = 0;
  uVar5 = 0;
  local_30 = (wchar_t *)0x0;
  iVar3 = 0;
  local_24 = 0;
  local_28 = param_4 + 1;
  if (param_4 == 0) {
    local_28 = iVar3;
  }
  if ((0 < local_28) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_30,0), pwVar1 = local_30, 0 < local_28))
  {
    wcsncpy(local_30,param_3,(longlong)param_4);
    pwVar1[param_4] = L'\0';
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
            (*(longlong **)(param_1 + 0x18),local_res10,&local_38,local_34);
  if (param_2 == 2) {
    if ((param_5 != (int *)0x0) && (param_6 != (int *)0x0)) {
      *param_5 = local_res10[0];
      *param_6 = local_38 + local_res10[0];
      uVar5 = uVar6;
      if (param_7 != (int *)0x0) {
        *param_7 = local_res10[0];
        param_7[1] = local_38 + local_res10[0];
        if (local_28 == 0) {
          param_7[2] = local_res10[0];
        }
        else {
          param_7[2] = local_28 + -1 + local_res10[0];
        }
      }
      goto LAB_1416d5527;
    }
  }
  else if (((param_2 == 1) || ((param_5 != (int *)0x0 && (param_6 != (int *)0x0)))) &&
          (param_7 != (int *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 8))();
    if (cVar2 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))();
    }
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))
              (*(longlong **)(param_1 + 0x18),local_res10[0],local_38,&local_30);
    iVar4 = iVar3;
    if (local_28 != 0) {
      iVar4 = local_28 + -1;
    }
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))
              (*(longlong **)(param_1 + 0x18),local_res10[0] + iVar4,0,1);
    *param_7 = local_res10[0];
    param_7[1] = local_38 + local_res10[0];
    if (local_28 != 0) {
      iVar3 = local_28 + -1;
    }
    param_7[2] = iVar3 + local_res10[0];
    if (param_2 != 1) {
      *param_5 = local_res10[0];
      *param_6 = param_7[2];
    }
    goto LAB_1416d5527;
  }
  uVar5 = 0x80070057;
LAB_1416d5527:
  if (local_30 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return uVar5;
}



// FUNCTION 1416d5580 FUN_1416d5580 body=67 status=ok
// SIG undefined FUN_1416d5580(void)

ulonglong FUN_1416d5580(longlong param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar3;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    return (ulonglong)*(byte *)(param_1 + 0x29);
  }
  BVar1 = AttachConsole(DAT_1464b0288);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    uVar3 = CONCAT44(extraout_var,DVar2);
    if (DVar2 == 5) {
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  else {
    BVar1 = FreeConsole();
    uVar3 = CONCAT44(extraout_var_00,BVar1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1416d55d0 FUN_1416d55d0 body=171 status=ok
// SIG undefined FUN_1416d55d0(void)

ulonglong FUN_1416d55d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  BOOL BVar6;
  undefined4 extraout_var;
  HWND pHVar7;
  POINT local_res10;
  longlong local_18;
  longlong *local_10;
  
  BVar6 = GetCursorPos(&local_res10);
  if (BVar6 == 0) {
    return CONCAT44(extraout_var,BVar6) & 0xffffffffffffff00;
  }
  pHVar7 = WindowFromPoint(local_res10);
  FUN_1416d1b30(&local_18,param_1 + 0xb8,pHVar7);
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
  }
  return (ulonglong)(local_18 != 0);
}



// FUNCTION 1416d5680 IsValidConstraintInstance body=9 status=ok
// SIG undefined IsValidConstraintInstance(void)

bool FConstraintInstance::IsValidConstraintInstance(longlong param_1)

{
  return *(longlong *)(param_1 + 8) != 0;
}



// FUNCTION 1416d5690 IsForegroundWindow body=28 status=ok
// SIG undefined IsForegroundWindow(void)

bool FWindowsWindow::IsForegroundWindow(longlong param_1)

{
  HWND pHVar1;
  
  pHVar1 = GetForegroundWindow();
  return pHVar1 == *(HWND *)(param_1 + 0x28);
}



// FUNCTION 1416d56b0 FUN_1416d56b0 body=156 status=ok
// SIG undefined FUN_1416d56b0(void)

undefined8 FUN_1416d56b0(longlong param_1,char param_2)

{
  char cVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x83) == '\0') {
    if ((*(char *)(*(longlong *)(param_1 + 200) + 1) != '\0') && ((byte)(param_2 - 5U) < 2)) {
      return 1;
    }
    for (iVar2 = 0; (-1 < iVar2 && (iVar2 < *(int *)(param_1 + 0xe0))); iVar2 = iVar2 + 1) {
      cVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar2 * 0x10) +
                          0x48))();
      if ((cVar1 != '\0') &&
         (cVar1 = (**(code **)(**(longlong **)
                                 (*(longlong *)(param_1 + 0xd8) + (longlong)iVar2 * 0x10) + 0x50))()
         , cVar1 == param_2)) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1416d5750 FUN_1416d5750 body=106 status=ok
// SIG undefined FUN_1416d5750(void)

undefined8 FUN_1416d5750(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x83) == '\0') {
    if (*(char *)(*(longlong *)(param_1 + 200) + 1) != '\0') {
      return 1;
    }
    for (iVar2 = 0; (-1 < iVar2 && (iVar2 < *(int *)(param_1 + 0xe0))); iVar2 = iVar2 + 1) {
      cVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar2 * 0x10) +
                          0x48))();
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1416d57c0 IsInputMessage body=100 status=ok
// SIG undefined IsInputMessage(void)

longlong FWindowsApplication::IsInputMessage(uint param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = param_1 - 0x100;
  uVar2 = (ulonglong)uVar1;
  if ((0x12 < uVar1) || ((0x40077U >> (uVar1 & 0x1f) & 1) == 0)) {
    if (param_1 < 0xae) {
      uVar2 = (ulonglong)(param_1 - 0xa1);
      if ((2 < param_1 - 0xa1) && ((0x9f < param_1 && (param_1 != 0xaa)))) goto LAB_1416d57f8;
    }
    else if ((0x1ff < param_1) &&
            ((param_1 < 0x20f || (uVar2 = (ulonglong)(param_1 - 0x2a0), param_1 - 0x2a0 < 4))))
    goto LAB_1416d57f8;
    param_1 = param_1 - 0xfe;
    uVar2 = (ulonglong)param_1;
    if (1 < param_1) {
      return (ulonglong)(uint3)(param_1 >> 8) << 8;
    }
  }
LAB_1416d57f8:
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 1416d5830 FUN_1416d5830 body=24 status=ok
// SIG undefined FUN_1416d5830(void)

bool FUN_1416d5830(longlong param_1)

{
  BOOL BVar1;
  
  BVar1 = IsZoomed(*(HWND *)(param_1 + 0x28));
  return BVar1 != 0;
}



// FUNCTION 1416d5850 FUN_1416d5850 body=24 status=ok
// SIG undefined FUN_1416d5850(void)

bool FUN_1416d5850(longlong param_1)

{
  BOOL BVar1;
  
  BVar1 = IsIconic(*(HWND *)(param_1 + 0x28));
  return BVar1 != 0;
}



// FUNCTION 1416d5880 IsPointInWindow body=77 status=ok
// SIG undefined IsPointInWindow(void)

bool FWindowsWindow::IsPointInWindow(undefined8 param_1,int param_2,int param_3)

{
  BOOL BVar1;
  HRGN hrgn;
  
  hrgn = (HRGN)MakeWindowRegionObject(param_1,0);
  BVar1 = PtInRegion(hrgn,param_2,param_3);
  DeleteObject(hrgn);
  return BVar1 != 0;
}



// FUNCTION 1416d58e0 FUN_1416d58e0 body=42 status=ok
// SIG undefined FUN_1416d58e0(void)

bool FUN_1416d58e0(void)

{
  DWORD DVar1;
  HWND hWnd;
  DWORD local_res8 [8];
  
  hWnd = GetForegroundWindow();
  GetWindowThreadProcessId(hWnd,local_res8);
  DVar1 = GetCurrentProcessId();
  return local_res8[0] == DVar1;
}



// FUNCTION 1416d5930 FUN_1416d5930 body=795 status=ok
// SIG undefined FUN_1416d5930(void)

void FUN_1416d5930(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  bool bVar8;
  undefined2 *puVar9;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  ulonglong in_stack_ffffffffffffff88;
  undefined2 *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 local_30;
  
  bVar8 = false;
  local_res8[0] = 0;
  local_48 = (undefined2 *)0x0;
  local_40 = 0;
  if ((DAT_1468b6148 != 0) || (FUN_1416508d0(), DAT_1468b6148 != 0)) {
    puVar4 = (undefined8 *)FConfigCacheIni::GetGameUserSettingsDir(&local_38);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar4;
    }
    FConfigCacheIni::LoadGlobalIniFile
              (&DAT_1468e2420,L"GameUserSettings",0,0,in_stack_ffffffffffffff88 & 0xffffffffffffff00
               ,1,puVar6);
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_38 = (undefined2 *)0x0;
    local_30 = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    puVar6 = local_38;
    FGenericPlatformString::Memcpy(local_38,L"/Script/Engine.Engine",0x2c);
    local_58 = (undefined2 *)0x0;
    local_50 = 0x20;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"/Script/Engine.GameUserSettings",0x40);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      puVar7 = puVar6;
    }
    FConfigCacheIni::GetString
              (DAT_1468b6148,puVar7,L"GameUserSettingsClassName",&local_58,&DAT_1468e2360);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_50 != 0) {
      puVar7 = local_58;
    }
    FConfigCacheIni::GetString
              (DAT_1468b6148,puVar7,L"PreferredGraphicsAPI",&local_48,&DAT_1468e2420);
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (puVar6 != (undefined2 *)0x0) {
      FMemory::Free(puVar6);
    }
  }
  cVar2 = FWindowsPlatformMisc::VerifyWindowsVersion(6);
  if (cVar2 == '\0') goto LAB_1416d5bee;
  uVar5 = FCommandLine::Get();
  cVar2 = FParse::Param(uVar5,L"d3d12");
  if (cVar2 == '\0') {
    uVar5 = FCommandLine::Get();
    cVar2 = FParse::Param(uVar5,L"dx12");
    if (cVar2 != '\0') goto LAB_1416d5ae9;
    bVar1 = false;
  }
  else {
LAB_1416d5ae9:
    bVar1 = true;
  }
  local_res8[0] = local_res8[0] & 0xffffff00;
  cVar2 = '\0';
  if (DAT_1468b6148 != 0) {
    FConfigCacheIni::GetBool
              (DAT_1468b6148,L"SystemSettings",L"PreferDirectX12",local_res8,&DAT_1468e2360);
    cVar2 = (char)local_res8[0];
  }
  puVar6 = local_58;
  if ((bVar1) || (cVar2 != '\0')) {
LAB_1416d5b82:
    bVar1 = true;
  }
  else {
    local_58 = (undefined2 *)0x0;
    local_50 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    puVar6 = local_58;
    FGenericPlatformString::Memcpy(local_58,L"DX12",10);
    puVar7 = &DAT_143f3eda8;
    if ((int)local_50 != 0) {
      puVar7 = puVar6;
    }
    bVar8 = true;
    puVar9 = &DAT_143f3eda8;
    if ((int)local_40 != 0) {
      puVar9 = local_48;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar7);
    if (iVar3 == 0) goto LAB_1416d5b82;
    bVar1 = false;
  }
  if ((bVar8) && (puVar6 != (undefined2 *)0x0)) {
    FMemory::Free(puVar6);
  }
  if (bVar1) {
    puVar4 = (undefined8 *)FName::FName(local_res10,L"D3D12RHI",1);
    uVar5 = FUN_14168dc80();
    FUN_141690010(uVar5,*puVar4);
  }
  puVar4 = (undefined8 *)FName::FName(local_res10,L"D3D11RHI",1);
  uVar5 = FUN_14168dc80();
  FUN_141690010(uVar5,*puVar4);
LAB_1416d5bee:
  puVar4 = (undefined8 *)FName::FName(local_res8,L"OpenGLDrv",1);
  uVar5 = FUN_14168dc80();
  FUN_141690010(uVar5,*puVar4);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1416d5c50 LoadSplashBitmap body=797 status=ok
// SIG undefined LoadSplashBitmap(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

HBITMAP LoadSplashBitmap(void)

{
  int iVar1;
  int iVar2;
  HDC hdc;
  HBITMAP ho;
  ulonglong uVar3;
  undefined2 *puVar4;
  HBITMAP pHVar5;
  ulonglong uVar6;
  undefined1 auStackY_d8 [32];
  longlong *local_98;
  uint local_90;
  uint local_8c;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  void *local_68;
  longlong *local_60;
  BITMAPINFO local_58;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStackY_d8;
  CoInitialize((LPVOID)0x0);
  pHVar5 = (HBITMAP)0x0;
  local_78 = (longlong *)0x0;
  iVar2 = 0;
  CoCreateInstance((IID *)&DAT_145ac62b0,(LPUNKNOWN)0x0,1,(IID *)&DAT_144cefdf8,&local_78);
  puVar4 = &DAT_143f3eda8;
  if (DAT_1469e5e40 != 0) {
    puVar4 = DAT_1469e5e38;
  }
  local_70 = (longlong *)0x0;
  iVar1 = (**(code **)(*local_78 + 0x18))(local_78,puVar4,0,0x80000000);
  local_80 = (longlong *)0x0;
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*local_70 + 0x68))(local_70,0,&local_80);
  }
  local_60 = (longlong *)0x0;
  if (-1 < iVar1) {
    iVar1 = (**(code **)*local_80)(local_80,&DAT_145dc8008,&local_60);
  }
  local_98 = (longlong *)0x0;
  if (-1 < iVar1) {
    local_88 = (longlong *)0x0;
    iVar1 = (**(code **)(*local_78 + 0x50))(local_78,&local_88);
    if ((-1 < iVar1) &&
       (iVar1 = (**(code **)(*local_88 + 0x40))(local_88,local_80,&DAT_145ac62c0,0), -1 < iVar1)) {
      iVar1 = (**(code **)*local_88)(local_88,&DAT_144cefe08,&local_98);
    }
    (**(code **)(*local_88 + 0x10))();
  }
  ho = pHVar5;
  if (-1 < iVar1) {
    local_90 = 0;
    local_8c = 0;
    local_68 = (void *)0x0;
    iVar1 = (**(code **)(*local_98 + 0x20))(local_98,local_28);
    if (((-1 < iVar1) &&
        (iVar1 = _guard_xfg_dispatch_icall_nop(local_28,&DAT_145ac62c0,0x10),
        -1 < (int)-(uint)(iVar1 != 0))) &&
       (iVar1 = (**(code **)(*local_98 + 0x18))(local_98,&local_90,&local_8c), -1 < iVar1)) {
      local_58.bmiHeader.biWidth = local_90;
      local_58.bmiHeader.biHeight = -local_8c;
      local_58.bmiHeader.biClrImportant = 0;
      local_58.bmiColors[0].rgbBlue = '\0';
      local_58.bmiColors[0].rgbGreen = '\0';
      local_58.bmiColors[0].rgbRed = '\0';
      local_58.bmiColors[0].rgbReserved = '\0';
      local_58.bmiHeader.biSizeImage = 0;
      local_58.bmiHeader.biXPelsPerMeter = 0;
      local_58.bmiHeader.biYPelsPerMeter = 0;
      local_58.bmiHeader.biClrUsed = 0;
      local_58.bmiHeader.biSize = 0x28;
      local_58.bmiHeader.biPlanes = 1;
      local_58.bmiHeader.biBitCount = 0x20;
      local_58.bmiHeader.biCompression = 0;
      hdc = GetDC((HWND)0x0);
      iVar1 = -0x7fffbffb;
      if (hdc != (HDC)0x0) {
        ho = CreateDIBSection(hdc,&local_58,0,&local_68,(HANDLE)0x0,0);
        ReleaseDC((HWND)0x0,hdc);
        iVar1 = -0x7fffbffb;
        if (ho != (HBITMAP)0x0) {
          iVar1 = 0;
        }
      }
      if ((-1 < iVar1) && ((ulonglong)local_90 << 2 < 0x100000000)) {
        uVar6 = (ulonglong)local_90 << 2 & 0xffffffff;
        uVar3 = uVar6 * local_8c;
        if (uVar3 < 0x100000000) {
          if (local_98 != (longlong *)0x0) {
            iVar2 = (**(code **)(*local_98 + 0x38))(local_98,0,uVar6,uVar3 & 0xffffffff);
          }
          if (-1 < iVar2) goto LAB_1416d5ef3;
        }
      }
      if (ho != (HBITMAP)0x0) {
        DeleteObject(ho);
        ho = pHVar5;
      }
    }
  }
LAB_1416d5ef3:
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x10))(local_60);
  }
  if (local_98 != (longlong *)0x0) {
    (**(code **)(*local_98 + 0x10))();
  }
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x10))();
  }
  if (local_80 != (longlong *)0x0) {
    (**(code **)(*local_80 + 0x10))();
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  return ho;
}



// FUNCTION 1416d5f70 LoadStartupModules body=96 status=ok
// SIG undefined LoadStartupModules(void)

void FWindowsPlatformApplicationMisc::LoadStartupModules(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"XAudio2",1);
  uVar2 = FUN_14168dc80();
  FUN_141690010(uVar2,*puVar1);
  puVar1 = (undefined8 *)FName::FName(local_res8,L"HeadMountedDisplay",1);
  uVar2 = FUN_14168dc80();
  FUN_141690010(uVar2,*puVar1);
  return;
}



// FUNCTION 1416d5fd0 FUN_1416d5fd0 body=92 status=ok
// SIG undefined FUN_1416d5fd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416d5fd0(undefined8 param_1,int *param_2)

{
  RECT *lpRect;
  undefined1 auStack_48 [32];
  RECT local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (param_2 == (int *)0x0) {
    lpRect = (RECT *)0x0;
  }
  else {
    lpRect = &local_28;
    local_28.left = *param_2 + 1;
    local_28.bottom = param_2[3] + -1;
    local_28.top = param_2[1] + 1;
    local_28.right = param_2[2] + -1;
  }
  ClipCursor(lpRect);
  return;
}



// FUNCTION 1416d6030 LogActiveIMEInfo body=1010 status=ok
// SIG undefined LogActiveIMEInfo(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FWindowsTextInputMethodSystem::LogActiveIMEInfo(longlong param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined2 *puVar3;
  int iVar4;
  UINT uBufLen;
  HKL pHVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  LPWSTR pWVar11;
  undefined1 auStack_e8 [32];
  LPWSTR *local_c8;
  undefined8 *local_b8;
  undefined8 local_b0;
  LPWSTR local_a8;
  undefined8 local_a0;
  int local_98;
  undefined2 local_94;
  undefined1 local_90 [16];
  undefined1 local_80 [72];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  if (*(int *)(param_1 + 0x18) == 1) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8,4);
    local_b0._0_4_ = (int)local_b0 + 4;
    if (local_b0._4_4_ < (int)local_b0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8);
    }
    iVar10 = local_b0._4_4_;
    iVar8 = (int)local_b0;
    puVar9 = local_b8;
    *local_b8 = 0x4d004d0049;
    pHVar5 = GetKeyboardLayout(0);
    local_a8 = (LPWSTR)0x0;
    local_a0 = 0;
    uBufLen = ::_guard_xfg_dispatch_icall_nop(pHVar5,(LPWSTR)0x0,0);
    iVar4 = uBufLen + 1;
    if (iVar4 < 1) {
      pWVar11 = (LPWSTR)0x0;
      if ((iVar4 < 0) && (pWVar11 = (LPWSTR)0x0, iVar4 != 0)) {
        local_a0 = CONCAT44(local_a0._4_4_,iVar4);
        TArray<wchar_t,FDefaultAllocator>::ResizeShrink(&local_a8);
        pWVar11 = local_a8;
      }
    }
    else {
      local_a0 = CONCAT44(local_a0._4_4_,iVar4);
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
      pWVar11 = local_a8;
    }
    ::_guard_xfg_dispatch_icall_nop(pHVar5,pWVar11,uBufLen);
    pWVar11[(int)uBufLen] = L'\0';
    if (0 < (int)uBufLen) {
      local_b0._0_4_ = (3 - (uint)(iVar8 != 0)) + iVar8;
      iVar4 = (int)local_b0;
      if (iVar10 < (int)local_b0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar8);
        puVar9 = local_b8;
        iVar10 = local_b0._4_4_;
        iVar4 = (int)local_b0;
      }
      lVar7 = -1;
      puVar1 = (undefined4 *)((longlong)puVar9 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
      *puVar1 = 0x280020;
      *(undefined2 *)(puVar1 + 1) = 0;
      do {
        lVar7 = lVar7 + 1;
      } while (pWVar11[lVar7] != L'\0');
      iVar6 = (int)lVar7;
      iVar8 = iVar4;
      if (iVar6 != 0) {
        local_b0._0_4_ = iVar4 + (uint)(iVar4 == 0) + iVar6;
        if (iVar10 < (int)local_b0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar4);
          puVar9 = local_b8;
          iVar10 = local_b0._4_4_;
        }
        iVar8 = (int)local_b0;
        pvVar2 = (void *)((longlong)puVar9 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(pvVar2,pWVar11,(longlong)iVar6 * 2);
        *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar2) = 0;
      }
      local_b0._0_4_ = (2 - (uint)(iVar8 != 0)) + iVar8;
      if (iVar10 < (int)local_b0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar8);
        puVar9 = local_b8;
      }
      puVar3 = (undefined2 *)((longlong)puVar9 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
      *puVar3 = 0x29;
      puVar3[1] = 0;
    }
    if (pWVar11 != (LPWSTR)0x0) {
      FMemory::Free(pWVar11);
    }
  }
  else {
    if (*(int *)(param_1 + 0x18) != 2) {
      return;
    }
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8,4);
    local_b0._0_4_ = (int)local_b0 + 4;
    if (local_b0._4_4_ < (int)local_b0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8);
    }
    iVar10 = local_b0._4_4_;
    iVar8 = (int)local_b0;
    puVar9 = local_b8;
    *local_b8 = 0x4600530054;
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x50))
                      (*(longlong **)(param_1 + 0x28),&DAT_145ac61f0,&local_98);
    if ((-1 < iVar4) && (local_98 == 1)) {
      local_c8 = &local_a8;
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x60))
                        (*(longlong **)(param_1 + 0x20),local_90,local_94,local_80);
      if (-1 < iVar4) {
        local_b0._0_4_ = (3 - (uint)(iVar8 != 0)) + iVar8;
        iVar4 = (int)local_b0;
        if (iVar10 < (int)local_b0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar8);
          puVar9 = local_b8;
          iVar10 = local_b0._4_4_;
          iVar4 = (int)local_b0;
        }
        pWVar11 = local_a8;
        lVar7 = -1;
        puVar1 = (undefined4 *)((longlong)puVar9 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
        *puVar1 = 0x280020;
        *(undefined2 *)(puVar1 + 1) = 0;
        do {
          lVar7 = lVar7 + 1;
        } while (local_a8[lVar7] != L'\0');
        iVar6 = (int)lVar7;
        iVar8 = iVar4;
        if (iVar6 != 0) {
          local_b0._0_4_ = iVar4 + (uint)(iVar4 == 0) + iVar6;
          if (iVar10 < (int)local_b0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar4);
            puVar9 = local_b8;
            iVar10 = local_b0._4_4_;
          }
          iVar8 = (int)local_b0;
          pvVar2 = (void *)((longlong)puVar9 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
          ::_guard_xfg_dispatch_icall_nop(pvVar2,pWVar11,(longlong)iVar6 * 2);
          *(undefined2 *)((longlong)pvVar2 + (longlong)iVar6 * 2) = 0;
        }
        local_b0._0_4_ = (2 - (uint)(iVar8 != 0)) + iVar8;
        if (iVar10 < (int)local_b0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,iVar8);
          puVar9 = local_b8;
        }
        puVar3 = (undefined2 *)((longlong)puVar9 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
        *puVar3 = 0x29;
        puVar3[1] = 0;
        Ordinal_6(local_a8);
      }
    }
  }
  if (puVar9 != (undefined8 *)0x0) {
    FMemory::Free(puVar9);
  }
  return;
}



// FUNCTION 1416d6430 FUN_1416d6430 body=361 status=ok
// SIG undefined FUN_1416d6430(void)

undefined8 * FUN_1416d6430(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_18;
  longlong *local_10;
  
  plVar5 = (longlong *)operator_new(0xb0);
  local_10 = (longlong *)0x0;
  local_18 = local_10;
  if (plVar5 != (longlong *)0x0) {
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (longlong)&PTR__scalar_deleting_destructor__144cef660;
    plVar5[3] = (longlong)&PTR_QueryInterface_144cef758;
    plVar5[5] = 0;
    plVar5[7] = 2;
    *(byte *)((longlong)plVar5 + 0xa4) = *(byte *)((longlong)plVar5 + 0xa4) & 0xf2 | 2;
    *(undefined4 *)(plVar5 + 0x14) = 0x3f800000;
    *(undefined4 *)(plVar5 + 0x15) = 0x3f800000;
    plVar5[8] = 0;
    plVar5[9] = 0;
    plVar5[10] = 0;
    plVar5[0xb] = 0;
    plVar5[0xc] = 0;
    *(undefined4 *)(plVar5 + 0xd) = 0;
    plVar5[0xe] = 0;
    plVar5[0xf] = 0;
    plVar5[0x10] = 0;
    plVar5[0x11] = 0;
    plVar5[0x12] = 0;
    *(undefined4 *)((longlong)plVar5 + 0x6c) = 0x2c;
    local_18 = plVar5;
  }
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    plVar5[2] = (longlong)local_18;
    local_10 = plVar5;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  plVar5 = local_10;
  *param_2 = local_18;
  param_2[1] = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 1416d65a0 MakeWindow body=139 status=ok
// SIG undefined MakeWindow(void)

undefined8 * GenericApplication::MakeWindow(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_144cef050;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar1;
  }
  *param_2 = puVar1;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar1,puVar1);
  return param_2;
}



// FUNCTION 1416d6630 MakeWindowRegionObject body=433 status=ok
// SIG undefined MakeWindowRegionObject(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FWindowsWindow::MakeWindowRegionObject(longlong *param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  UINT x1;
  int *piVar3;
  longlong lVar4;
  int x2;
  int iVar5;
  undefined1 auStackY_98 [32];
  tagRECT local_68;
  tagWINDOWINFO local_58;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStackY_98;
  if (((int)param_1[6] == -1) || (*(int *)((longlong)param_1 + 0x34) == -1)) {
    GetWindowRect((HWND)param_1[5],&local_68);
    CreateRectRgn(0,0,local_68.right - local_68.left,local_68.bottom - local_68.top);
  }
  else {
    piVar3 = (int *)(**(code **)(*param_1 + 0xd8))();
    if ((*piVar3 == 5) &&
       (lVar4 = (**(code **)(*param_1 + 0xd8))(param_1), *(char *)(lVar4 + 0x18) == '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    cVar2 = (**(code **)(*param_1 + 0x70))(param_1);
    if (cVar2 == '\0') {
      if ((((int)param_1[7] == 2) && (!bVar1)) && (iVar5 = *(int *)(param_1[1] + 0x4c), 0 < iVar5))
      {
        CreateRoundRectRgn(0,0,(int)param_1[6] + 1,*(int *)((longlong)param_1 + 0x34) + 1,iVar5,
                           iVar5);
        return;
      }
      iVar5 = *(int *)((longlong)param_1 + 0x34);
      x1 = 0;
      x2 = (int)param_1[6];
    }
    else if (bVar1) {
      local_58.cbSize = 0x3c;
      local_58.rcWindow.left = 0;
      local_58.rcWindow.top = 0;
      local_58.rcWindow.right = 0;
      local_58.rcWindow.bottom = 0;
      local_58.cyWindowBorders = 0;
      local_58.atomWindowType = 0;
      local_58.wCreatorVersion = 0;
      local_58.rcClient.left = 0;
      local_58.rcClient.top = 0;
      local_58.rcClient.right = 0;
      local_58.rcClient.bottom = 0;
      local_58.dwStyle = 0;
      local_58.dwExStyle = 0;
      local_58.dwWindowStatus = 0;
      local_58.cxWindowBorders = 0;
      GetWindowInfo((HWND)param_1[5],&local_58);
      x1 = 0;
      if (param_2 != '\0') {
        x1 = local_58.cxWindowBorders;
      }
      iVar5 = *(int *)((longlong)param_1 + 0x34) + x1;
      x2 = (int)param_1[6] + x1;
    }
    else if (param_2 == '\0') {
      iVar5 = *(int *)((longlong)param_1 + 0x34);
      x1 = 0;
      x2 = (int)param_1[6];
    }
    else {
      x1 = (**(code **)(*param_1 + 0xb0))(param_1);
      iVar5 = *(int *)((longlong)param_1 + 0x34) - x1;
      x2 = (int)param_1[6] - x1;
    }
    CreateRectRgn(x1,x1,x2,iVar5);
  }
  return;
}



// FUNCTION 1416d6850 FUN_1416d6850 body=254 status=ok
// SIG undefined FUN_1416d6850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1416d6850(HMONITOR param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  wint_t wVar1;
  wint_t wVar2;
  undefined8 uVar3;
  wint_t *pwVar4;
  undefined2 *puVar5;
  undefined1 auStack_c8 [48];
  tagMONITORINFO local_98;
  wint_t local_70 [36];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_98.cbSize = 0x68;
  GetMonitorInfoW(param_1,&local_98);
  if (*(int *)(param_4 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*param_4;
  }
  pwVar4 = local_70;
  do {
    wVar1 = *(wint_t *)(((longlong)puVar5 - (longlong)local_70) + (longlong)pwVar4);
    if ((wVar1 == 0) && (*pwVar4 == 0)) goto LAB_1416d68ea;
    if (wVar1 != *pwVar4) {
      wVar1 = towlower(wVar1);
      wVar2 = towlower(*pwVar4);
      if (wVar1 != wVar2) {
        if (wVar1 == wVar2) {
LAB_1416d68ea:
          *(LONG *)((longlong)param_4 + 0x44) = local_98.rcMonitor.bottom;
          *(LONG *)(param_4 + 7) = local_98.rcMonitor.left;
          *(LONG *)(param_4 + 8) = local_98.rcMonitor.right;
          *(LONG *)((longlong)param_4 + 0x3c) = local_98.rcMonitor.top;
          *(LONG *)((longlong)param_4 + 0x54) = local_98.rcWork.bottom;
          *(LONG *)(param_4 + 9) = local_98.rcWork.left;
          *(LONG *)(param_4 + 10) = local_98.rcWork.right;
          *(LONG *)((longlong)param_4 + 0x4c) = local_98.rcWork.top;
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
        return uVar3;
      }
    }
    pwVar4 = pwVar4 + 1;
  } while( true );
}



// FUNCTION 1416d6950 MoveWindowTo body=182 status=ok
// SIG undefined MoveWindowTo(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FWindowsWindow::MoveWindowTo(longlong param_1,int param_2,int param_3)

{
  DWORD dwStyle;
  DWORD dwExStyle;
  undefined1 auStackY_78 [32];
  tagRECT local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStackY_78;
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x18) != '\0') {
    dwStyle = GetWindowLongW(*(HWND *)(param_1 + 0x28),-0x10);
    dwExStyle = GetWindowLongW(*(HWND *)(param_1 + 0x28),-0x14);
    local_38.left = 0;
    local_38.top = 0;
    local_38.right = 0;
    local_38.bottom = 0;
    AdjustWindowRectEx(&local_38,dwStyle,0,dwExStyle);
    param_2 = param_2 + local_38.left;
    param_3 = param_3 + local_38.top;
  }
  SetWindowPos(*(HWND *)(param_1 + 0x28),(HWND)0x0,param_2,param_3,0,0,0x15);
  return;
}



// FUNCTION 1416d6a80 NotifyTextChanged body=83 status=ok
// SIG undefined NotifyTextChanged(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void `anonymous_namespace'::FTextInputMethodChangeNotifier::NotifyTextChanged
               (longlong param_1,int param_2,int param_3,int param_4)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x40);
  if (plVar1 != (longlong *)0x0) {
    local_24 = param_3 + param_2;
    local_20 = param_4 + param_2;
    local_28 = param_2;
    (**(code **)(*plVar1 + 0x18))(plVar1,0,&local_28);
  }
  return;
}



// FUNCTION 1416d6ae0 OnActivated body=27 status=ok
// SIG undefined OnActivated(void)

undefined8
FTSFActivationProxy::OnActivated(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  FWindowsTextInputMethodSystem::OnIMEActivationStateChanged
            (*(undefined8 *)(param_1 + 0x10),param_4 == 1);
  return 0;
}



// FUNCTION 1416d6b00 OnActivated body=28 status=ok
// SIG undefined OnActivated(void)

undefined8 FTSFActivationProxy::OnActivated(longlong param_1)

{
  byte in_stack_00000040;
  
  FWindowsTextInputMethodSystem::OnIMEActivationStateChanged
            (*(undefined8 *)(param_1 + 0x18),in_stack_00000040 & 1);
  return 0;
}



// FUNCTION 1416d6b30 OnEndComposition body=66 status=ok
// SIG undefined OnEndComposition(void)

undefined8 FTextStoreACP::OnEndComposition(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x50);
  if ((plVar1 != (longlong *)0x0) && (param_2 == plVar1)) {
    (**(code **)(*plVar1 + 0x10))();
    *(undefined8 *)(param_1 + 0x50) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x70))();
    return 0;
  }
  return 0x8000ffff;
}



// FUNCTION 1416d6b80 OnIMEActivationStateChanged body=194 status=ok
// SIG undefined OnIMEActivationStateChanged(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FWindowsTextInputMethodSystem::OnIMEActivationStateChanged(longlong param_1,char param_2)

{
  int iVar1;
  UINT UVar2;
  DWORD DVar3;
  HKL pHVar4;
  undefined1 auStack_98 [32];
  int local_78;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    pHVar4 = GetKeyboardLayout(0);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x50))();
    if ((iVar1 < 0) || (local_78 != 1)) {
      UVar2 = ::_guard_xfg_dispatch_icall_nop(pHVar4,(LPWSTR)0x0,0);
      if (UVar2 == 0) {
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x18) = 1;
        DVar3 = ::_guard_xfg_dispatch_icall_nop(pHVar4,4);
        *(DWORD *)(param_1 + 0xa8) = DVar3;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = 2;
    }
  }
  LogActiveIMEInfo(param_1);
  return;
}



// FUNCTION 1416d6c50 FUN_1416d6c50 body=532 status=ok
// SIG undefined FUN_1416d6c50(void)

undefined8
FUN_1416d6c50(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  BOOL BVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_1416d1b30(&local_48,param_1 + 0xb8,param_2);
  if (CONCAT44(uStack_44,local_48) != 0) {
    BVar8 = IsWindowEnabled(*(HWND *)(CONCAT44(uStack_44,local_48) + 0x28));
    uVar7 = uStack_3c;
    uVar6 = uStack_40;
    if (BVar8 == 0) {
      *param_6 = 0;
    }
    else {
      bVar4 = *(byte *)(param_3 + 0x20);
      if ((bVar4 & 3) == 3) {
        if (CONCAT44(uStack_3c,uStack_40) != 0) {
          LOCK();
          piVar1 = (int *)(CONCAT44(uStack_3c,uStack_40) + 8);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_38 = local_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        if (CONCAT44(uStack_3c,uStack_40) != 0) {
          LOCK();
          piVar1 = (int *)(CONCAT44(uStack_3c,uStack_40) + 8);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        uVar9 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x160))
                          (*(longlong **)(param_1 + 0x18),&local_38,param_3,param_3 + 0x10);
        plVar11 = (longlong *)CONCAT44(uStack_2c,uStack_30);
      }
      else if ((bVar4 & 1) == 0) {
        if ((bVar4 & 2) == 0) goto LAB_1416d6e11;
        if (CONCAT44(uStack_3c,uStack_40) != 0) {
          LOCK();
          piVar1 = (int *)(CONCAT44(uStack_3c,uStack_40) + 8);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_18 = local_48;
        uStack_14 = uStack_44;
        uStack_10 = uStack_40;
        uStack_c = uStack_3c;
        if (CONCAT44(uStack_3c,uStack_40) != 0) {
          LOCK();
          piVar1 = (int *)(CONCAT44(uStack_3c,uStack_40) + 8);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        uVar9 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x158))
                          (*(longlong **)(param_1 + 0x18),&local_18,param_3 + 0x10);
        plVar11 = (longlong *)CONCAT44(uStack_c,uStack_10);
      }
      else {
        if (CONCAT44(uStack_3c,uStack_40) != 0) {
          LOCK();
          piVar1 = (int *)(CONCAT44(uStack_3c,uStack_40) + 8);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_28 = local_48;
        uStack_24 = uStack_44;
        uStack_20 = uStack_40;
        uStack_1c = uStack_3c;
        if (CONCAT44(uStack_3c,uStack_40) != 0) {
          LOCK();
          piVar1 = (int *)(CONCAT44(uStack_3c,uStack_40) + 8);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        uVar9 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x150))
                          (*(longlong **)(param_1 + 0x18),&local_28,param_3);
        plVar11 = (longlong *)CONCAT44(uStack_1c,uStack_20);
      }
      lVar10 = CONCAT44(uVar7,uVar6);
      *param_6 = uVar9;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar11 + 1;
        lVar10 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
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
        lVar10 = CONCAT44(uStack_3c,uStack_40);
      }
      if (lVar10 == 0) {
        return 0;
      }
      LOCK();
      piVar1 = (int *)(lVar10 + 8);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        puVar5 = (undefined8 *)CONCAT44(uStack_3c,uStack_40);
        (**(code **)*puVar5)(puVar5);
        LOCK();
        piVar1 = (int *)((longlong)puVar5 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          plVar11 = (longlong *)CONCAT44(uStack_3c,uStack_40);
          (**(code **)(*plVar11 + 8))(plVar11,1);
          goto LAB_1416d6e15;
        }
      }
    }
  }
LAB_1416d6e11:
  plVar11 = (longlong *)CONCAT44(uStack_3c,uStack_40);
LAB_1416d6e15:
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar11 + 1;
    lVar10 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      puVar5 = (undefined8 *)CONCAT44(uStack_3c,uStack_40);
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar1 = (int *)((longlong)puVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)CONCAT44(uStack_3c,uStack_40) + 8))
                  ((longlong *)CONCAT44(uStack_3c,uStack_40),1);
      }
    }
  }
  return 0;
}



// FUNCTION 1416d6e70 FUN_1416d6e70 body=337 status=ok
// SIG undefined FUN_1416d6e70(void)

undefined8 FUN_1416d6e70(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  BOOL BVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_1416d1b30(&local_28,param_1 + 0xb8,param_2);
  if ((CONCAT44(uStack_24,local_28) != 0) &&
     (BVar5 = IsWindowEnabled(*(HWND *)(CONCAT44(uStack_24,local_28) + 0x28)), BVar5 != 0)) {
    if (CONCAT44(uStack_1c,uStack_20) != 0) {
      LOCK();
      piVar1 = (int *)(CONCAT44(uStack_1c,uStack_20) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_18 = local_28;
    uStack_14 = uStack_24;
    uStack_10 = uStack_20;
    uStack_c = uStack_1c;
    if (CONCAT44(uStack_1c,uStack_20) != 0) {
      LOCK();
      piVar1 = (int *)(CONCAT44(uStack_1c,uStack_20) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    lVar6 = CONCAT44(uStack_1c,uStack_20);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x170))(*(longlong **)(param_1 + 0x18),&local_18)
    ;
    plVar7 = (longlong *)CONCAT44(uStack_c,uStack_10);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      lVar6 = CONCAT44(uStack_1c,uStack_20);
    }
    if (lVar6 == 0) {
      return 0;
    }
    LOCK();
    piVar1 = (int *)(lVar6 + 8);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      puVar4 = (undefined8 *)CONCAT44(uStack_1c,uStack_20);
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar1 = (int *)((longlong)puVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        plVar7 = (longlong *)CONCAT44(uStack_1c,uStack_20);
        (**(code **)(*plVar7 + 8))(plVar7,1);
        goto LAB_1416d6f7a;
      }
    }
  }
  plVar7 = (longlong *)CONCAT44(uStack_1c,uStack_20);
LAB_1416d6f7a:
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar7 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      puVar4 = (undefined8 *)CONCAT44(uStack_1c,uStack_20);
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar1 = (int *)((longlong)puVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)CONCAT44(uStack_1c,uStack_20) + 8))
                  ((longlong *)CONCAT44(uStack_1c,uStack_20),1);
      }
    }
  }
  return 0;
}



// FUNCTION 1416d6fd0 FUN_1416d6fd0 body=361 status=ok
// SIG undefined FUN_1416d6fd0(void)

undefined8
FUN_1416d6fd0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  BOOL BVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_1416d1b30(&local_28,param_1 + 0xb8,param_2);
  if (CONCAT44(uStack_24,local_28) != 0) {
    BVar5 = IsWindowEnabled(*(HWND *)(CONCAT44(uStack_24,local_28) + 0x28));
    plVar8 = (longlong *)CONCAT44(uStack_1c,uStack_20);
    if (BVar5 == 0) {
      *param_5 = 0;
      goto LAB_1416d70f2;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_18 = local_28;
    uStack_14 = uStack_24;
    uStack_10 = uStack_20;
    uStack_c = uStack_1c;
    if (CONCAT44(uStack_1c,uStack_20) != 0) {
      LOCK();
      piVar1 = (int *)(CONCAT44(uStack_1c,uStack_20) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    lVar7 = CONCAT44(uStack_1c,uStack_20);
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x168))
                      (*(longlong **)(param_1 + 0x18),&local_18);
    plVar8 = (longlong *)CONCAT44(uStack_c,uStack_10);
    *param_5 = uVar6;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
      lVar7 = CONCAT44(uStack_1c,uStack_20);
    }
    if (lVar7 == 0) {
      return 0;
    }
    LOCK();
    piVar1 = (int *)(lVar7 + 8);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      puVar4 = (undefined8 *)CONCAT44(uStack_1c,uStack_20);
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar1 = (int *)((longlong)puVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        plVar8 = (longlong *)CONCAT44(uStack_1c,uStack_20);
        (**(code **)(*plVar8 + 8))(plVar8,1);
        goto LAB_1416d70f2;
      }
    }
  }
  plVar8 = (longlong *)CONCAT44(uStack_1c,uStack_20);
LAB_1416d70f2:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar8 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      puVar4 = (undefined8 *)CONCAT44(uStack_1c,uStack_20);
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar1 = (int *)((longlong)puVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)CONCAT44(uStack_1c,uStack_20) + 8))
                  ((longlong *)CONCAT44(uStack_1c,uStack_20),1);
      }
    }
  }
  return 0;
}



// FUNCTION 1416d7140 FUN_1416d7140 body=361 status=ok
// SIG undefined FUN_1416d7140(void)

undefined8 FUN_1416d7140(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  BOOL BVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 *in_stack_00000030;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_1416d1b30(&local_28,param_1 + 0xb8,param_2);
  if (CONCAT44(uStack_24,local_28) != 0) {
    BVar5 = IsWindowEnabled(*(HWND *)(CONCAT44(uStack_24,local_28) + 0x28));
    plVar8 = (longlong *)CONCAT44(uStack_1c,uStack_20);
    if (BVar5 == 0) {
      *in_stack_00000030 = 0;
      goto LAB_1416d7262;
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_18 = local_28;
    uStack_14 = uStack_24;
    uStack_10 = uStack_20;
    uStack_c = uStack_1c;
    if (CONCAT44(uStack_1c,uStack_20) != 0) {
      LOCK();
      piVar1 = (int *)(CONCAT44(uStack_1c,uStack_20) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    lVar7 = CONCAT44(uStack_1c,uStack_20);
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x178))
                      (*(longlong **)(param_1 + 0x18),&local_18);
    plVar8 = (longlong *)CONCAT44(uStack_c,uStack_10);
    *in_stack_00000030 = uVar6;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar8 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
      lVar7 = CONCAT44(uStack_1c,uStack_20);
    }
    if (lVar7 == 0) {
      return 0;
    }
    LOCK();
    piVar1 = (int *)(lVar7 + 8);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      puVar4 = (undefined8 *)CONCAT44(uStack_1c,uStack_20);
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar1 = (int *)((longlong)puVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        plVar8 = (longlong *)CONCAT44(uStack_1c,uStack_20);
        (**(code **)(*plVar8 + 8))(plVar8,1);
        goto LAB_1416d7262;
      }
    }
  }
  plVar8 = (longlong *)CONCAT44(uStack_1c,uStack_20);
LAB_1416d7262:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar8 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      puVar4 = (undefined8 *)CONCAT44(uStack_1c,uStack_20);
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar1 = (int *)((longlong)puVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)CONCAT44(uStack_1c,uStack_20) + 8))
                  ((longlong *)CONCAT44(uStack_1c,uStack_20),1);
      }
    }
  }
  return 0;
}



// FUNCTION 1416d72b0 OnStartComposition body=137 status=ok
// SIG undefined OnStartComposition(void)

undefined8 FTextStoreACP::OnStartComposition(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 8))(param_2);
      if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
      }
      *(longlong **)(param_1 + 0x50) = param_2;
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    if (cVar1 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))();
    }
    *param_3 = 1;
    return 0;
  }
  *param_3 = 0;
  return 0;
}



// FUNCTION 1416d7340 OnUpdateComposition body=177 status=ok
// SIG undefined OnUpdateComposition(void)

undefined8 FTextStoreACP::OnUpdateComposition(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 local_res8 [6];
  undefined4 local_res20 [2];
  longlong *local_18 [2];
  
  if ((*(longlong *)(param_1 + 0x50) != 0) && (param_2 == *(longlong *)(param_1 + 0x50))) {
    if (param_3 != (undefined8 *)0x0) {
      local_18[0] = (longlong *)0x0;
      (**(code **)*param_3)(param_3,&DAT_145ac6290,local_18);
      iVar1 = (**(code **)(*local_18[0] + 200))(local_18[0],local_res20,local_res8);
      if (iVar1 < 0) {
        if (local_18[0] != (longlong *)0x0) {
          (**(code **)(*local_18[0] + 0x10))();
        }
        return 0x80004005;
      }
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))
                (*(longlong **)(param_1 + 0x10),local_res20[0],local_res8[0]);
      if (local_18[0] != (longlong *)0x0) {
        (**(code **)(*local_18[0] + 0x10))();
      }
    }
    return 0;
  }
  return 0x8000ffff;
}



// FUNCTION 1416d7400 FUN_1416d7400 body=505 status=ok
// SIG undefined FUN_1416d7400(void)

void FUN_1416d7400(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  longlong local_48;
  int local_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  
  if (*(char *)((longlong)param_1 + 0x83) == '\0') {
    iVar8 = 0;
    if ((char)param_1[0x1d] == '\0') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146863b48) &&
         (_Init_thread_header(&DAT_146863b48), DAT_146863b48 == -1)) {
        FName::FName(&DAT_146863b40,L"InputDevice",1);
        _Init_thread_footer(&DAT_146863b48);
      }
      uVar6 = DAT_146863b40;
      uVar7 = FUN_141593110();
      IModularFeatures::GetModularFeatureImplementations<IInputDeviceModule>(uVar7,&local_48,uVar6);
      for (iVar9 = 0; (-1 < iVar9 && (iVar9 < local_40)); iVar9 = iVar9 + 1) {
        plVar4 = *(longlong **)(local_48 + (longlong)iVar9 * 8);
        (**(code **)(*plVar4 + 0x40))(plVar4,&local_38,param_1 + 3);
        local_28 = local_38;
        plStack_20 = plStack_30;
        if (plStack_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
          UNLOCK();
        }
        (**(code **)(*param_1 + 0x128))(param_1,&local_28);
        plVar4 = plStack_30;
        if (plStack_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_30 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plStack_30)(plStack_30);
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
      *(undefined1 *)(param_1 + 0x1d) = 1;
      if (local_48 != 0) {
        FMemory::Free();
      }
    }
    if (((DAT_1468b5a27 == '\0') || (DAT_1468b5a74 != '\0')) &&
       (*(char *)((longlong)param_1 + 0x84) != '\0')) {
      FUN_1416dbb90(param_1[0x19]);
      for (; (-1 < iVar8 && (iVar8 < (int)param_1[0x1c])); iVar8 = iVar8 + 1) {
        plVar4 = *(longlong **)(param_1[0x1b] + (longlong)iVar8 * 0x10);
        (**(code **)(*plVar4 + 8))(plVar4,param_2);
        (**(code **)(**(longlong **)(param_1[0x1b] + (longlong)iVar8 * 0x10) + 0x10))();
      }
    }
  }
  return;
}



// FUNCTION 1416d7600 PreventScreenSaver body=61 status=ok
// SIG undefined PreventScreenSaver(void)

void FWindowsPlatformApplicationMisc::PreventScreenSaver(void)

{
  tagINPUT local_38;
  
  local_38.field1_0x8.mi.dwFlags = 1;
  local_38.type = 0;
  local_38._4_4_ = 0;
  local_38.field1_0x8.ki.dwExtraInfo = 0;
  local_38.field1_0x8.mi.dx = 0;
  local_38.field1_0x8.hi.wParamL = 0;
  local_38.field1_0x8.hi.wParamH = 0;
  local_38.field1_0x8.mi.mouseData = 0;
  local_38.field1_0x8.mi.dwExtraInfo = 0;
  SendInput(1,&local_38,0x28);
  return;
}



// FUNCTION 1416d7640 FUN_1416d7640 body=861 status=ok
// SIG undefined FUN_1416d7640(void)

void FUN_1416d7640(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  ushort uVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  undefined8 in_stack_ffffffffffffffa8;
  uint uVar14;
  longlong local_48;
  uint local_40;
  longlong local_38;
  uint local_30;
  
  plVar11 = (longlong *)(param_1 + 0x88);
  uVar6 = *(uint *)(param_1 + 0x90);
  lVar13 = *plVar11;
  local_48 = 0;
  iVar9 = 0;
  local_40 = uVar6;
  if (uVar6 != 0) {
    TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(&local_48,uVar6,0);
    lVar13 = lVar13 - local_48;
    puVar5 = (undefined8 *)(local_48 + 0x10);
    do {
      puVar5[-2] = *(undefined8 *)(lVar13 + -0x10 + (longlong)puVar5);
      lVar10 = *(longlong *)(lVar13 + -8 + (longlong)puVar5);
      puVar5[-1] = lVar10;
      if (lVar10 != 0) {
        LOCK();
        *(int *)(lVar10 + 0xc) = *(int *)(lVar10 + 0xc) + 1;
        UNLOCK();
      }
      *puVar5 = *(undefined8 *)(lVar13 + (longlong)puVar5);
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(lVar13 + 8 + (longlong)puVar5);
      puVar5[2] = *(undefined8 *)(lVar13 + 0x10 + (longlong)puVar5);
      puVar5[3] = *(undefined8 *)(lVar13 + 0x18 + (longlong)puVar5);
      *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(lVar13 + 0x20 + (longlong)puVar5);
      *(undefined4 *)((longlong)puVar5 + 0x24) = *(undefined4 *)(lVar13 + 0x24 + (longlong)puVar5);
      *(undefined4 *)(puVar5 + 5) = *(undefined4 *)(lVar13 + 0x28 + (longlong)puVar5);
      puVar5 = puVar5 + 8;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    iVar9 = *(int *)(param_1 + 0x90);
  }
  if (iVar9 != 0) {
    plVar7 = (longlong *)(*plVar11 + 8);
    do {
      plVar3 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 8;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  uVar6 = local_40;
  lVar13 = local_48;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(plVar11,0);
  }
  if (0 < (int)uVar6) {
    uVar12 = (ulonglong)uVar6;
    lVar10 = lVar13;
    do {
      FUN_1416d79a0(param_1,lVar10);
      lVar10 = lVar10 + 0x40;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if ((*(char *)(param_1 + 0xe9) != '\0') && (uVar4 = GetKeyState(0xa0), (uVar4 & 0x8000) == 0)) {
    *(undefined1 *)(param_1 + 0xe9) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))(*(longlong **)(param_1 + 0x18),0xa0,0,0);
  }
  if ((*(char *)(param_1 + 0xea) != '\0') && (uVar4 = GetKeyState(0xa1), (uVar4 & 0x8000) == 0)) {
    *(undefined1 *)(param_1 + 0xea) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))(*(longlong **)(param_1 + 0x18),0xa1,0,0);
  }
  uVar14 = (uint)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  if (uVar6 != 0) {
    plVar11 = (longlong *)(lVar13 + 8);
    do {
      plVar7 = (longlong *)*plVar11;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar9 == 1) && (plVar7 != (longlong *)0x0)) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      uVar14 = (uint)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
      plVar11 = plVar11 + 8;
      uVar6 = uVar6 - 1;
      lVar13 = local_48;
    } while (uVar6 != 0);
  }
  if (lVar13 != 0) {
    FMemory::Free(lVar13);
  }
  plVar11 = (longlong *)(param_1 + 0x98);
  local_38 = 0;
  TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::
  CopyToEmpty<FDeferredWindowsDragDropOperation>
            (&local_38,*plVar11,*(undefined4 *)(param_1 + 0xa0),0,(ulonglong)uVar14 << 0x20);
  iVar9 = *(int *)(param_1 + 0xa0);
  if (iVar9 != 0) {
    lVar13 = *plVar11 + 0x10;
    do {
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>
                (lVar13);
      lVar13 = lVar13 + 0x48;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(int *)(param_1 + 0xa4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (plVar11,0);
  }
  lVar13 = local_38;
  if (0 < (int)local_30) {
    puVar8 = (undefined4 *)(local_38 + 0x38);
    uVar12 = (ulonglong)local_30;
    do {
      iVar9 = puVar8[-0xe];
      if (iVar9 == 0) {
        FUN_1416d6c50(param_1,*(undefined8 *)(puVar8 + -0xc),puVar8 + -10,*puVar8,
                      *(undefined8 *)(puVar8 + 1),local_res8);
      }
      else if (iVar9 == 1) {
        FUN_1416d6fd0(param_1,*(undefined8 *)(puVar8 + -0xc),*puVar8,*(undefined8 *)(puVar8 + 1),
                      local_res8);
      }
      else if (iVar9 == 2) {
        FUN_1416d6e70(param_1,*(undefined8 *)(puVar8 + -0xc));
      }
      else if (iVar9 == 3) {
        FUN_1416d7140(param_1,*(undefined8 *)(puVar8 + -0xc),puVar8 + -10,*puVar8,
                      *(undefined8 *)(puVar8 + 1),local_res8);
      }
      puVar8 = puVar8 + 0x12;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if (local_30 != 0) {
    lVar10 = lVar13 + 0x10;
    uVar6 = local_30;
    do {
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>
                (lVar10);
      lVar10 = lVar10 + 0x48;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (lVar13 != 0) {
    FMemory::Free(lVar13);
  }
  return;
}



// FUNCTION 1416d79a0 FUN_1416d79a0 body=3924 status=ok
// SIG undefined FUN_1416d79a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1416d79a0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  HWND hWnd;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  uint uCode;
  uint uVar10;
  longlong lVar11;
  char cVar12;
  char cVar13;
  SHORT SVar14;
  int iVar15;
  UINT UVar16;
  BOOL BVar17;
  longlong lVar18;
  HRGN hRgn;
  ulonglong uVar19;
  size_t _Size;
  PTOUCHINPUT ptVar20;
  char *pcVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong *plVar24;
  ushort uVar25;
  longlong *plVar26;
  short sVar27;
  HTOUCHINPUT hTouchInput;
  longlong *plVar29;
  longlong *plVar30;
  bool bVar31;
  float fVar32;
  float fVar33;
  undefined1 auStackY_1d8 [32];
  PTOUCHINPUT local_188;
  ulonglong local_180;
  tagPOINT local_168;
  float local_160;
  float local_15c;
  HTOUCHINPUT local_158;
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
  longlong *local_a8;
  undefined1 local_a0 [24];
  ulonglong local_88;
  undefined8 uStack_80;
  undefined4 local_68 [2];
  ulonglong local_60;
  short sVar28;
  
  local_60 = DAT_1468387a8 ^ (ulonglong)auStackY_1d8;
  if ((int)param_1[0x18] == 0) {
    return (longlong *)0x0;
  }
  if (*param_2 == 0) {
    return (longlong *)0x0;
  }
  if (param_2[1] == 0) {
    return (longlong *)0x0;
  }
  plVar23 = (longlong *)0x0;
  plVar30 = (longlong *)0x0;
  piVar1 = (int *)(param_2[1] + 8);
  LOCK();
  iVar15 = *piVar1;
  cVar13 = '\0';
  if (iVar15 == 0) {
    *piVar1 = 0;
    iVar15 = 0;
  }
  UNLOCK();
  if (iVar15 < 1) {
    return (longlong *)0x0;
  }
  plVar7 = (longlong *)param_2[1];
  hWnd = (HWND)param_2[2];
  local_180 = param_2[4];
  hTouchInput = (HTOUCHINPUT)param_2[5];
  uVar5 = *(uint *)(param_2 + 3);
  plVar24 = plVar7;
  plVar29 = plVar23;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    iVar15 = (int)plVar7[1];
    bVar31 = iVar15 == 0;
    if (bVar31) {
      *(int *)(plVar7 + 1) = 0;
      iVar15 = 0;
    }
    UNLOCK();
    while (plVar24 = plVar23, plVar29 = (longlong *)0x0, !bVar31) {
      LOCK();
      bVar31 = iVar15 == (int)plVar7[1];
      if (bVar31) {
        *(int *)(plVar7 + 1) = iVar15 + 1;
      }
      UNLOCK();
      if (bVar31) {
        plVar24 = plVar7;
        if (plVar7 != (longlong *)0x0) {
          plVar29 = (longlong *)*param_2;
        }
        break;
      }
      LOCK();
      iVar15 = (int)plVar7[1];
      bVar31 = iVar15 == 0;
      if (bVar31) {
        *(int *)(plVar7 + 1) = 0;
        iVar15 = 0;
      }
      UNLOCK();
    }
  }
  if (plVar24 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
    UNLOCK();
  }
  local_158 = hTouchInput;
  local_150 = plVar29;
  local_148 = plVar24;
  cVar12 = (**(code **)(*(longlong *)param_1[3] + 8))((longlong *)param_1[3],&local_150);
  if (cVar12 == '\0') {
    cVar12 = FWindowsApplication::IsInputMessage(uVar5);
    bVar31 = true;
    if (cVar12 == '\0') goto LAB_1416d7a9a;
  }
  else {
LAB_1416d7a9a:
    bVar31 = false;
  }
  plVar7 = local_148;
  if (local_148 != (longlong *)0x0) {
    LOCK();
    plVar26 = local_148 + 1;
    lVar18 = *plVar26;
    *(int *)plVar26 = (int)*plVar26 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_148)();
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  if (bVar31) {
    plVar30 = plVar23;
    if ((uVar5 - 0x100 < 0x13) && ((0x40077U >> (uVar5 - 0x100 & 0x1f) & 1) != 0)) {
      FWindowsApplication::UpdateAllModifierKeyStates(param_1);
    }
    goto LAB_1416d8696;
  }
  sVar27 = (short)hTouchInput;
  sVar28 = (short)((ulonglong)hTouchInput >> 0x10);
  if (0xff < uVar5) {
    uCode = (uint)local_180;
    if (uVar5 < 0x201) {
      if (uVar5 != 0x200) {
        uVar10 = (uint)((ulonglong)hTouchInput >> 0x10);
        switch(uVar5) {
        case 0x100:
        case 0x104:
          uVar19 = (ulonglong)hTouchInput >> 0x1e & 0xffffffffffffff01;
          if (uCode == 0x10) {
            UVar16 = MapVirtualKeyW(uVar10 & 0xff,3);
            local_180 = (ulonglong)UVar16;
            if (UVar16 == 0xa0) {
              uVar19 = (ulonglong)*(byte *)((longlong)param_1 + 0xe9);
              *(undefined1 *)((longlong)param_1 + 0xe9) = 1;
            }
            else {
              uVar19 = (ulonglong)*(byte *)((longlong)param_1 + 0xea);
              *(undefined1 *)((longlong)param_1 + 0xea) = 1;
            }
          }
          else if (uCode == 0x11) {
            if (((ulonglong)hTouchInput >> 0x18 & 1) == 0) {
              uVar19 = (ulonglong)*(byte *)((longlong)param_1 + 0xeb);
              local_180 = 0xa2;
              *(undefined1 *)((longlong)param_1 + 0xeb) = 1;
            }
            else {
              uVar19 = (ulonglong)*(byte *)((longlong)param_1 + 0xec);
              local_180 = 0xa3;
              *(undefined1 *)((longlong)param_1 + 0xec) = 1;
            }
          }
          else if (uCode == 0x12) {
            if (((ulonglong)hTouchInput >> 0x18 & 1) == 0) {
              uVar19 = (ulonglong)*(byte *)((longlong)param_1 + 0xed);
              local_180 = 0xa4;
              *(undefined1 *)((longlong)param_1 + 0xed) = 1;
            }
            else {
              uVar19 = (ulonglong)*(byte *)((longlong)param_1 + 0xee);
              local_180 = 0xa5;
              *(undefined1 *)((longlong)param_1 + 0xee) = 1;
            }
          }
          else if (uCode == 0x14) {
            SVar14 = GetKeyState(0x14);
            *(byte *)((longlong)param_1 + 0xef) = (byte)SVar14 & 1;
          }
          UVar16 = MapVirtualKeyW(uCode,2);
          cVar13 = (**(code **)(*(longlong *)param_1[3] + 0x18))
                             ((longlong *)param_1[3],local_180 & 0xffffffff,UVar16,uVar19 & 0xff);
          if ((cVar13 != '\0') || (uVar5 != 0x104)) goto LAB_1416d8696;
          break;
        case 0x101:
        case 0x105:
          if (uCode == 0x10) {
            UVar16 = MapVirtualKeyW(uVar10 & 0xff,3);
            local_180 = (ulonglong)UVar16;
            if (UVar16 == 0xa0) {
              *(undefined1 *)((longlong)param_1 + 0xe9) = 0;
            }
            else {
              *(undefined1 *)((longlong)param_1 + 0xea) = 0;
            }
          }
          else if (uCode == 0x11) {
            if (((ulonglong)hTouchInput >> 0x18 & 1) == 0) {
              local_180 = 0xa2;
              *(undefined1 *)((longlong)param_1 + 0xeb) = 0;
            }
            else {
              local_180 = 0xa3;
              *(undefined1 *)((longlong)param_1 + 0xec) = 0;
            }
          }
          else if (uCode == 0x12) {
            if (((ulonglong)hTouchInput >> 0x18 & 1) == 0) {
              local_180 = 0xa4;
              *(undefined1 *)((longlong)param_1 + 0xed) = 0;
            }
            else {
              local_180 = 0xa5;
              *(undefined1 *)((longlong)param_1 + 0xee) = 0;
            }
          }
          else if (uCode == 0x14) {
            SVar14 = GetKeyState(0x14);
            *(byte *)((longlong)param_1 + 0xef) = (byte)SVar14 & 1;
          }
          UVar16 = MapVirtualKeyW(uCode,2);
          cVar13 = (**(code **)(*(longlong *)param_1[3] + 0x20))
                             ((longlong *)param_1[3],local_180 & 0xffffffff,UVar16,0);
          if ((cVar13 != '\0') || (uVar5 != 0x105)) goto LAB_1416d8696;
          break;
        case 0x102:
          (**(code **)(*(longlong *)param_1[3] + 0x10))
                    ((longlong *)param_1[3],local_180 & 0xffff,
                     (byte)((ulonglong)hTouchInput >> 0x1e) & 1);
          goto LAB_1416d8696;
        case 0x10d:
        case 0x10e:
        case 0x10f:
          goto switchD_1416d7f2e_caseD_10d;
        }
        goto switchD_1416d7b56_caseD_7;
      }
switchD_1416d7b56_caseD_a0:
      if ((char)param_1[0x10] == '\0') {
        cVar13 = (**(code **)(*(longlong *)param_1[3] + 0x68))();
      }
      plVar30 = (longlong *)(ulonglong)(cVar13 == '\0');
      goto LAB_1416d8696;
    }
    if (0x31e < uVar5) goto switchD_1416d7b56_caseD_7;
    if (uVar5 == 0x31e) {
      (**(code **)(*param_1 + 0xc0))(param_1);
      goto switchD_1416d7b56_caseD_7;
    }
    uVar25 = (ushort)(local_180 >> 0x10);
    switch(uVar5 - 0x201) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 10:
    case 0xb:
    case 0xc:
      local_168.x = (LONG)sVar27;
      local_168.y = (LONG)sVar28;
      ClientToScreen(hWnd,&local_168);
      fVar32 = (float)local_168.x;
      fVar33 = (float)local_168.y;
      sVar28 = 0;
      sVar27 = 5;
      switch(uVar5 - 0x201) {
      case 0:
        sVar27 = sVar28;
        break;
      case 1:
        goto LAB_1416d82f6;
      case 2:
        goto LAB_1416d82b9;
      case 3:
        sVar27 = 2;
        break;
      case 4:
        plVar23 = (longlong *)0x2;
        goto LAB_1416d82f6;
      case 5:
        sVar28 = 2;
        goto LAB_1416d82b9;
      case 6:
        sVar27 = 1;
        break;
      case 7:
        plVar23 = (longlong *)0x1;
        goto LAB_1416d82f6;
      case 8:
        sVar28 = 1;
        goto LAB_1416d82b9;
      case 10:
        sVar27 = (~uVar25 & 1) + 3;
        break;
      case 0xb:
        plVar23 = (longlong *)(ulonglong)(((ushort)~uVar25 & 1) + 3);
LAB_1416d82f6:
        cVar13 = (**(code **)(*(longlong *)param_1[3] + 0x38))
                           ((longlong *)param_1[3],plVar23,CONCAT44(fVar33,fVar32));
        plVar30 = (longlong *)(ulonglong)(cVar13 == '\0');
        goto LAB_1416d8696;
      case 0xc:
        sVar28 = (~uVar25 & 1) + 3;
LAB_1416d82b9:
        if (plVar24 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
          UNLOCK();
        }
        local_110 = plVar29;
        local_108 = plVar24;
        (**(code **)(*(longlong *)param_1[3] + 0x48))
                  ((longlong *)param_1[3],&local_110,sVar28,CONCAT44(fVar33,fVar32));
        plVar23 = local_108;
        goto LAB_1416d834b;
      }
      if (plVar24 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
        UNLOCK();
      }
      local_100 = plVar29;
      local_f8 = plVar24;
      (**(code **)(*(longlong *)param_1[3] + 0x28))
                ((longlong *)param_1[3],&local_100,sVar27,CONCAT44(fVar33,fVar32));
      plVar23 = local_f8;
LAB_1416d834b:
      if (plVar23 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar23 + 1;
        lVar18 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*plVar23)(plVar23);
          LOCK();
          piVar1 = (int *)((longlong)plVar23 + 0xc);
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar23 + 8))(plVar23,1);
          }
        }
      }
      goto LAB_1416d8696;
    case 9:
      cVar13 = (**(code **)(*(longlong *)param_1[3] + 0x58))
                         ((longlong *)param_1[3],(float)(int)(short)uVar25 * 0.008333334,
                          CONCAT44((float)(int)sVar28,(float)(int)sVar27));
      plVar30 = (longlong *)(ulonglong)(cVar13 == '\0');
      goto LAB_1416d8696;
    default:
      goto switchD_1416d7b56_caseD_7;
    case 0x13:
      if (plVar29 == (longlong *)0x0) goto switchD_1416d7b56_caseD_7;
      if (plVar24 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
        UNLOCK();
      }
      local_e0 = plVar29;
      local_d8 = plVar24;
      (**(code **)(*(longlong *)param_1[3] + 0x100))((longlong *)param_1[3],&local_e0);
      plVar30 = local_d8;
      break;
    case 0x30:
      if (plVar29 == (longlong *)0x0) goto switchD_1416d7b56_caseD_7;
      if (plVar24 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
        UNLOCK();
      }
      local_d0 = plVar29;
      local_c8 = plVar24;
      (**(code **)(*(longlong *)param_1[3] + 0x108))((longlong *)param_1[3],&local_d0);
      plVar30 = local_c8;
      break;
    case 0x31:
      if (plVar29 == (longlong *)0x0) goto switchD_1416d7b56_caseD_7;
      if (plVar24 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
        UNLOCK();
      }
      local_c0 = plVar29;
      local_b8 = plVar24;
      (**(code **)(*(longlong *)param_1[3] + 0x110))((longlong *)param_1[3],&local_c0);
      plVar30 = local_b8;
      break;
    case 0x3f:
      local_180 = local_180 & 0xffff;
      UVar16 = (UINT)local_180;
      if (UVar16 != 0) {
        auVar9._8_8_ = 0;
        auVar9._0_8_ = local_180;
        _Size = SUB168(ZEXT816(0x30) * auVar9,0);
        if (SUB168(ZEXT816(0x30) * auVar9,8) != 0) {
          _Size = 0xffffffffffffffff;
        }
        local_188 = (PTOUCHINPUT)operator_new(_Size);
        if (local_188 == (PTOUCHINPUT)0x0) {
          local_188 = (PTOUCHINPUT)0x0;
        }
        else {
          _guard_xfg_dispatch_icall_nop(local_188,0,_Size);
        }
        BVar17 = GetTouchInputInfo(hTouchInput,UVar16,local_188,0x30);
        if (BVar17 != 0) {
          if (UVar16 != 0) {
            plVar7 = param_1 + 0x37;
            ptVar20 = local_188;
            do {
              uVar19._0_4_ = ptVar20->dwID;
              uVar19._4_4_ = ptVar20->dwFlags;
              uStack_80._0_4_ = ptVar20->dwMask;
              uStack_80._4_4_ = ptVar20->dwTime;
              uVar6 = ptVar20->x;
              uVar8 = ptVar20->y;
              local_160 = (float)(int)uVar6 * 0.01;
              local_15c = (float)(int)uVar8 * 0.01;
              local_88 = uVar19;
              if ((uVar19 >> 0x20 & 2) == 0) {
                if ((uVar19 & 0x100000000) == 0) {
                  if ((uVar19 & 0x400000000) != 0) {
                    iVar15 = FUN_1416d4330(param_1,uVar19 & 0xffffffff);
                    if (-1 < iVar15) {
                      puVar4 = (undefined1 *)(*plVar7 + (longlong)iVar15 * 8);
                      if ((local_a0 != puVar4) && (puVar4[4] != '\0')) {
                        puVar4[4] = 0;
                      }
                      (**(code **)(*(longlong *)param_1[3] + 0xd0))
                                ((longlong *)param_1[3],&local_160,iVar15,0);
                    }
                  }
                }
                else {
                  iVar15 = FUN_1416d4330(param_1,uVar19 & 0xffffffff);
                  if (-1 < iVar15) {
                    (**(code **)(*(longlong *)param_1[3] + 0xc0))((longlong *)param_1[3],&local_160)
                    ;
                  }
                }
              }
              else {
                iVar15 = FUN_1416d4330(param_1,uVar19 & 0xffffffff);
                if (iVar15 == -1) {
                  if (0 < (int)param_1[0x38]) {
                    pcVar21 = (char *)(*plVar7 + 4);
                    plVar26 = plVar23;
                    do {
                      iVar15 = (int)plVar26;
                      if (*pcVar21 == '\0') goto LAB_1416d8538;
                      plVar26 = (longlong *)(ulonglong)(iVar15 + 1U);
                      pcVar21 = pcVar21 + 8;
                    } while ((int)(iVar15 + 1U) < (int)param_1[0x38]);
                  }
                  iVar15 = (int)param_1[0x38];
                  *(int *)(param_1 + 0x38) = iVar15 + 1;
                  if (*(int *)((longlong)param_1 + 0x1c4) < iVar15 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7,iVar15)
                    ;
                  }
                  *(undefined1 *)(*plVar7 + 4 + (longlong)iVar15 * 8) = 0;
LAB_1416d8538:
                  puVar3 = (undefined4 *)(*plVar7 + (longlong)iVar15 * 8);
                  if (local_68 != puVar3) {
                    *puVar3 = (undefined4)uVar19;
                    *(undefined1 *)(puVar3 + 1) = 1;
                  }
                  if (plVar24 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
                    UNLOCK();
                  }
                  local_f0 = plVar29;
                  local_e8 = plVar24;
                  (**(code **)(*(longlong *)param_1[3] + 0xb0))
                            ((longlong *)param_1[3],&local_f0,&local_160,0x3f800000);
                  plVar26 = local_e8;
                  if (local_e8 != (longlong *)0x0) {
                    LOCK();
                    plVar2 = local_e8 + 1;
                    lVar18 = *plVar2;
                    *(int *)plVar2 = (int)*plVar2 + -1;
                    UNLOCK();
                    if ((int)lVar18 == 1) {
                      (**(code **)*local_e8)(local_e8);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar26 + 0xc);
                      iVar15 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar15 == 1) {
                        (**(code **)(*plVar26 + 8))(plVar26,1);
                      }
                    }
                  }
                }
              }
              ptVar20 = ptVar20 + 1;
              local_180 = local_180 - 1;
              hTouchInput = local_158;
            } while (local_180 != 0);
          }
          CloseTouchInputHandle(hTouchInput);
          FMemory::operator_delete(local_188);
          goto LAB_1416d8696;
        }
        FMemory::operator_delete(local_188);
      }
      goto switchD_1416d7b56_caseD_7;
    case 0x80:
    case 0x81:
    case 0x85:
    case 0x87:
      goto switchD_1416d7b56_caseD_50;
    case 0xdf:
      if (plVar29 == (longlong *)0x0) goto switchD_1416d7b56_caseD_7;
      *(float *)(plVar29 + 0x15) = (float)(uCode & 0xffff) * 0.010416667;
      SetWindowPos(hWnd,(HWND)0x0,hTouchInput->unused,hTouchInput[1].unused,
                   hTouchInput[2].unused - hTouchInput->unused,
                   hTouchInput[3].unused - hTouchInput[1].unused,0x14);
      if (plVar24 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
        UNLOCK();
      }
      local_b0 = plVar29;
      local_a8 = plVar24;
      (**(code **)(*(longlong *)param_1[3] + 0x118))((longlong *)param_1[3],&local_b0);
      plVar30 = local_a8;
    }
LAB_1416d8821:
    if (plVar30 != (longlong *)0x0) {
      LOCK();
      plVar23 = plVar30 + 1;
      lVar18 = *plVar23;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*plVar30)(plVar30);
        LOCK();
        piVar1 = (int *)((longlong)plVar30 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*plVar30 + 8))(plVar30,1);
        }
      }
    }
    if (plVar24 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    LOCK();
    plVar30 = plVar24 + 1;
    lVar18 = *plVar30;
    *(int *)plVar30 = (int)*plVar30 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plVar24)(plVar24);
      LOCK();
      piVar1 = (int *)((longlong)plVar24 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*plVar24 + 8))(plVar24,1);
      }
    }
    goto switchD_1416d7b56_caseD_7;
  }
  if (uVar5 == 0xff) {
    lVar18 = *(longlong *)param_1[3];
    if ((int)param_2[7] == 0) {
      (**(code **)(lVar18 + 0x70))
                ((longlong *)param_1[3],(int)param_2[6],*(undefined4 *)((longlong)param_2 + 0x34));
    }
    else {
      (**(code **)(lVar18 + 0x68))();
    }
    goto LAB_1416d8696;
  }
  switch(uVar5) {
  case 5:
    if (plVar29 == (longlong *)0x0) break;
    lVar18 = (**(code **)(*plVar29 + 0xd8))(plVar29);
    if ((*(char *)(lVar18 + 0x25) != '\0') && (*(char *)(lVar18 + 0x18) == '\0')) {
      *(int *)(plVar29 + 6) = (int)sVar27;
      *(int *)((longlong)plVar29 + 0x34) = (int)sVar28;
      hRgn = (HRGN)FWindowsWindow::MakeWindowRegionObject(plVar29,1);
      SetWindowRgn((HWND)plVar29[5],hRgn,0);
    }
    iVar15 = (**(code **)(*plVar29 + 0x68))(plVar29);
    if (iVar15 == 0) break;
    if (plVar24 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
      UNLOCK();
    }
    local_120 = plVar29;
    local_118 = plVar24;
    (**(code **)(*(longlong *)param_1[3] + 0xe8))
              ((longlong *)param_1[3],&local_120,(int)sVar27,(int)sVar28);
    plVar30 = local_118;
    goto LAB_1416d8821;
  case 6:
    if ((local_180 & 1) == 0) {
      cVar13 = ((local_180 & 2) == 0) + '\x01';
    }
    else {
      cVar13 = *(char *)((longlong)param_1 + 0x82) != '\0';
    }
    *(undefined1 *)((longlong)param_1 + 0x82) = 0;
    *(bool *)((longlong)param_1 + 0x84) = cVar13 != '\x02';
    FWindowsApplication::UpdateAllModifierKeyStates(param_1);
    if (plVar29 != (longlong *)0x0) {
      if (plVar24 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
        UNLOCK();
      }
      local_140 = plVar29;
      local_138 = plVar24;
      cVar13 = (**(code **)(*(longlong *)param_1[3] + 0x128))
                         ((longlong *)param_1[3],&local_140,cVar13);
      plVar30 = local_138;
      if (local_138 != (longlong *)0x0) {
        LOCK();
        plVar23 = local_138 + 1;
        lVar18 = *plVar23;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*local_138)(local_138);
          LOCK();
          piVar1 = (int *)((longlong)plVar30 + 0xc);
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar30 + 8))(plVar30,1);
          }
        }
      }
      if (plVar24 != (longlong *)0x0) {
        LOCK();
        plVar30 = plVar24 + 1;
        lVar18 = *plVar30;
        *(int *)plVar30 = (int)*plVar30 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*plVar24)(plVar24);
          LOCK();
          piVar1 = (int *)((longlong)plVar24 + 0xc);
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar24 + 8))(plVar24,1);
          }
        }
      }
      plVar30 = (longlong *)(ulonglong)(cVar13 == '\0');
      goto LAB_1416d8696;
    }
    goto LAB_1416d7d00;
  case 0x10:
    if (plVar29 != (longlong *)0x0) {
      if (plVar24 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
        UNLOCK();
      }
      local_130 = plVar29;
      local_128 = plVar24;
      (**(code **)(*(longlong *)param_1[3] + 0x148))((longlong *)param_1[3],&local_130);
      plVar23 = local_128;
      if (local_128 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_128 + 1;
        lVar18 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*local_128)(local_128);
          LOCK();
          piVar1 = (int *)((longlong)plVar23 + 0xc);
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar23 + 8))(plVar23,1);
          }
        }
      }
      if (plVar24 == (longlong *)0x0) {
        return (longlong *)0x0;
      }
      LOCK();
      plVar23 = plVar24 + 1;
      lVar18 = *plVar23;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*plVar24)(plVar24);
        LOCK();
        piVar1 = (int *)((longlong)plVar24 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*plVar24 + 8))(plVar24,1);
        }
      }
    }
    goto LAB_1416d8696;
  case 0x18:
    if (plVar29 != (longlong *)0x0) {
      if (hTouchInput == (HTOUCHINPUT)0x1) {
        GetWindowPlacement((HWND)plVar29[5],(WINDOWPLACEMENT *)((longlong)plVar29 + 0x6c));
      }
      else if (hTouchInput == (HTOUCHINPUT)0x3) {
        SetWindowPlacement((HWND)plVar29[5],(WINDOWPLACEMENT *)((longlong)plVar29 + 0x6c));
      }
    }
    break;
  case 0x1a:
    if (hTouchInput != (HTOUCHINPUT)0x0) {
      lVar18 = -1;
      do {
        if (*(wchar_t *)((longlong)&hTouchInput->unused + lVar18 * 2 + 2) !=
            L"ConvertibleSlateMode"[lVar18 + 1]) break;
        lVar22 = lVar18 + 2;
        if (lVar22 == 0x15) {
          (**(code **)(*(longlong *)param_1[3] + 0x138))();
          break;
        }
        lVar11 = lVar18 * 2;
        lVar18 = lVar22;
      } while (*(wchar_t *)((longlong)&hTouchInput[1].unused + lVar11) ==
               L"ConvertibleSlateMode"[lVar22]);
    }
    break;
  case 0x1c:
    FWindowsApplication::UpdateAllModifierKeyStates(param_1);
    (**(code **)(*(longlong *)param_1[3] + 0x130))((longlong *)param_1[3],local_180 != 0);
    break;
  case 0x20:
    cVar13 = (**(code **)(*(longlong *)param_1[3] + 0x78))();
    plVar30 = (longlong *)(ulonglong)(cVar13 == '\0');
    goto LAB_1416d8696;
  case 0x21:
    *(byte *)((longlong)param_1 + 0x82) = ~(byte)hTouchInput & 1;
    goto LAB_1416d8696;
  case 0x50:
  case 0x51:
switchD_1416d7b56_caseD_50:
switchD_1416d7f2e_caseD_10d:
    if (param_1[0x2e] != 0) {
      FUN_1416da0b0(param_1[0x2e],hWnd,uVar5,local_180);
    }
    goto LAB_1416d8696;
  case 0x85:
    if ((plVar29 != (longlong *)0x0) &&
       (lVar18 = (**(code **)(*plVar29 + 0xd8))(plVar29), *(char *)(lVar18 + 0x18) == '\0'))
    goto LAB_1416d8696;
    break;
  case 0x86:
    if ((plVar29 == (longlong *)0x0) ||
       (lVar18 = (**(code **)(*plVar29 + 0xd8))(plVar29), *(char *)(lVar18 + 0x18) != '\0')) break;
LAB_1416d7d00:
    plVar30 = (longlong *)0x1;
LAB_1416d8696:
    if (plVar24 == (longlong *)0x0) {
      return plVar30;
    }
    LOCK();
    plVar23 = plVar24 + 1;
    lVar18 = *plVar23;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plVar24)(plVar24);
      LOCK();
      piVar1 = (int *)((longlong)plVar24 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*plVar24 + 8))(plVar24,1);
        return plVar30;
      }
      return plVar30;
    }
    return plVar30;
  case 0xa0:
    goto switchD_1416d7b56_caseD_a0;
  }
switchD_1416d7b56_caseD_7:
  if (plVar24 != (longlong *)0x0) {
    LOCK();
    plVar30 = plVar24 + 1;
    lVar18 = *plVar30;
    *(int *)plVar30 = (int)*plVar30 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plVar24)(plVar24);
      LOCK();
      piVar1 = (int *)((longlong)plVar24 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*plVar24 + 8))(plVar24,1);
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1416d8b40 FUN_1416d8b40 body=4865 status=ok
// SIG undefined FUN_1416d8b40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_1416d8b40(size_t param_1,HWND param_2,uint param_3,WPARAM param_4,LPRECT param_5)

{
  longlong *plVar1;
  LONG LVar2;
  LONG LVar3;
  LONG LVar4;
  bool bVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  HWND pHVar9;
  char cVar10;
  short sVar11;
  int iVar12;
  DWORD DVar13;
  DWORD dwExStyle;
  int iVar14;
  UINT UVar15;
  uint uVar16;
  BOOL BVar17;
  int *piVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  longlong lVar23;
  int *piVar24;
  longlong lVar25;
  int *piVar26;
  int iVar27;
  int *piVar28;
  longlong *plVar29;
  longlong *plVar30;
  bool bVar31;
  float fVar32;
  undefined1 auStackY_338 [32];
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  HWND local_2c8;
  uint local_2c0;
  uint local_2bc;
  undefined1 local_2b8;
  undefined1 local_2b7;
  undefined1 local_2b6 [2];
  uint local_2b4;
  size_t local_2b0;
  longlong local_2a8;
  longlong *local_2a0;
  int *local_290;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [8];
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  tagRECT local_138;
  tagRECT local_128;
  float local_118;
  char local_114;
  float local_110;
  char local_10c;
  float local_108;
  char local_104;
  float local_100;
  char local_fc;
  tagRECT local_f8;
  tagWINDOWINFO local_e8;
  tagWINDOWINFO local_a8;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStackY_338;
  local_2a0 = (longlong *)(param_1 + 0xb8);
  local_2c8 = param_2;
  local_2b0 = param_1;
  FUN_1416d1b30(&local_2d8,local_2a0,param_2);
  if ((*(int *)(param_1 + 0xc0) == 0) || (CONCAT44(uStack_2d4,local_2d8) == 0)) goto LAB_1416d9ce3;
  if (CONCAT44(uStack_2cc,uStack_2d0) != 0) {
    LOCK();
    piVar18 = (int *)(CONCAT44(uStack_2cc,uStack_2d0) + 8);
    *piVar18 = *piVar18 + 1;
    UNLOCK();
  }
  lVar25 = CONCAT44(uStack_2cc,uStack_2d0);
  plVar30 = (longlong *)CONCAT44(uStack_2d4,local_2d8);
  lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_2a8 = lVar25;
  if ((*(int *)(lVar19 + 0x38) < DAT_1469e63c0) &&
     (_Init_thread_header(&DAT_1469e63c0), DAT_1469e63c0 == -1)) {
    FUN_1416cd670(&local_2b8,&DAT_1469e6370);
    atexit(FUN_143e7b9e0);
    _Init_thread_footer(&DAT_1469e63c0);
  }
  if ((*(int *)(lVar19 + 0x38) < DAT_1469e6420) &&
     (_Init_thread_header(&DAT_1469e6420), DAT_1469e6420 == -1)) {
    FUN_1416cda50(&local_2b7,&DAT_1469e63d0);
    atexit(FUN_143e7b900);
    _Init_thread_footer(&DAT_1469e6420);
  }
  if ((*(int *)(lVar19 + 0x38) < DAT_1469e6480) &&
     (_Init_thread_header(&DAT_1469e6480), DAT_1469e6480 == -1)) {
    FUN_1416ce020(local_2b6,&DAT_1469e6430);
    atexit(FUN_143e7b930);
    _Init_thread_footer(&DAT_1469e6480);
  }
  pHVar9 = local_2c8;
  piVar18 = (int *)0x0;
  piVar26 = (int *)0x0;
  puVar21 = *(undefined8 **)(param_1 + 0xa8);
  bVar31 = false;
  iVar12 = 0;
  local_2c0 = 0;
  local_290 = (int *)((longlong)*(int *)(param_1 + 0xb0) & 0x1fffffffffffffff);
  if (puVar21 + *(int *)(param_1 + 0xb0) < puVar21) {
    local_290 = piVar18;
  }
  piVar24 = piVar18;
  piVar28 = piVar18;
  bVar5 = false;
  if (local_290 != (int *)0x0) {
    do {
      local_2b4 = 0;
      cVar10 = (*(code *)**(undefined8 **)*puVar21)((undefined8 *)*puVar21,pHVar9,param_3,param_4);
      if ((cVar10 != '\0') && (!bVar31)) {
        bVar31 = true;
        local_2c0 = local_2b4;
      }
      piVar28 = (int *)(ulonglong)local_2c0;
      puVar21 = puVar21 + 1;
      piVar24 = (int *)((longlong)piVar24 + 1);
    } while (piVar24 != local_290);
    plVar30 = (longlong *)CONCAT44(uStack_2d4,local_2d8);
    lVar25 = local_2a8;
    param_1 = local_2b0;
    bVar5 = bVar31;
  }
  pHVar9 = local_2c8;
  sVar11 = (short)((ulonglong)param_5 >> 0x10);
  piVar24 = piVar26;
  uVar16 = param_3;
  if (0xff < param_3) {
    if (param_3 < 0x113) {
      if (param_3 != 0x112) {
        switch(param_3) {
        case 0x100:
        case 0x101:
        case 0x102:
        case 0x105:
        case 0x10d:
        case 0x10e:
        case 0x10f:
          goto switchD_1416d8d3a_caseD_10;
        default:
          goto switchD_1416d8d3a_caseD_4;
        case 0x104:
          if ((param_4 != 0x73) && (param_4 != 0x20)) goto LAB_1416d9883;
          break;
        case 0x106:
          if ((((ulonglong)param_5 & 0x20000000) == 0) || (param_4 != 0x20))
          goto switchD_1416d8d3a_caseD_1;
        }
        goto LAB_1416d916c;
      }
      uVar16 = (uint)param_4 & 0xfff0;
      if (uVar16 == 0xf030) {
        if (lVar25 != 0) {
          LOCK();
          *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
          UNLOCK();
          lVar25 = CONCAT44(uStack_2cc,uStack_2d0);
        }
        cVar10 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))
                           (*(longlong **)(param_1 + 0x18),local_278,2);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_278);
        if (cVar10 != '\0') goto LAB_1416d916c;
        piVar24 = (int *)0x1;
      }
      else if (uVar16 == 0xf060) {
        if (DAT_1468c217b != '\0') goto switchD_1416d8d3a_caseD_14;
        FUN_1416d09e0(param_1,&local_2d8,local_2c8,0x10);
        piVar24 = (int *)0x1;
      }
      else {
        if (uVar16 != 0xf120) {
          if (lVar25 != 0) {
            LOCK();
            *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
            UNLOCK();
            lVar25 = CONCAT44(uStack_2cc,uStack_2d0);
          }
          cVar10 = (**(code **)(**(longlong **)(param_1 + 0x18) + 8))
                             (*(longlong **)(param_1 + 0x18),local_1b8);
          if ((cVar10 == '\0') ||
             (cVar10 = FWindowsApplication::IsInputMessage(0x112), cVar10 == '\0')) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_1b8);
          goto joined_r0x0001416d992c;
        }
        BVar17 = IsIconic(local_2c8);
        if (BVar17 == 0) {
          if (lVar25 != 0) {
            LOCK();
            *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
            UNLOCK();
            lVar25 = CONCAT44(uStack_2cc,uStack_2d0);
          }
          cVar10 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))
                             (*(longlong **)(param_1 + 0x18),local_288,3);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_288);
          if (cVar10 != '\0') goto LAB_1416d916c;
          piVar24 = (int *)0x1;
        }
        else {
          ShowWindow(pHVar9,9);
        }
      }
      goto switchD_1416d8d3a_caseD_1;
    }
    if (0x31e < param_3) {
switchD_1416d8d3a_caseD_4:
      piVar24 = piVar28;
joined_r0x0001416d992c:
      if (!bVar5) goto LAB_1416d916c;
      goto switchD_1416d8d3a_caseD_1;
    }
    if (param_3 == 0x31e) {
      uVar16 = 0x31e;
LAB_1416d9883:
      FUN_1416d09e0(param_1,&local_2d8,local_2c8,uVar16);
      goto LAB_1416d916c;
    }
    switch(param_3) {
    case 0x200:
    case 0x201:
    case 0x202:
    case 0x203:
    case 0x204:
    case 0x205:
    case 0x206:
    case 0x207:
    case 0x208:
    case 0x209:
    case 0x20a:
    case 0x20b:
    case 0x20c:
    case 0x20d:
    case 0x240:
    case 0x281:
    case 0x282:
    case 0x286:
    case 0x288:
      goto switchD_1416d8d3a_caseD_10;
    default:
      goto switchD_1416d8d3a_caseD_4;
    case 0x214:
      FUN_1416d09e0(param_1,&local_2d8,local_2c8,param_3);
      lVar19 = (**(code **)(*plVar30 + 0xd8))(plVar30);
      if (*(char *)(lVar19 + 0x28) == '\0') goto LAB_1416d916c;
      break;
    case 0x219:
      **(undefined1 **)(param_1 + 200) = 1;
      FWindowsApplication::QueryConnectedMice(param_1);
      goto LAB_1416d916c;
    case 0x231:
      *(undefined1 *)(param_1 + 0x108) = 1;
      goto LAB_1416d9883;
    case 0x232:
      goto switchD_1416d9a79_caseD_232;
    case 0x2e0:
      goto switchD_1416d8d3a_caseD_18;
    }
    local_a8.cyWindowBorders = 0;
    local_a8.atomWindowType = 0;
    local_a8.wCreatorVersion = 0;
    local_a8.cbSize = 0x3c;
    local_a8.rcWindow.left = 0;
    local_a8.rcWindow.top = 0;
    local_a8.rcWindow.right = 0;
    local_a8.rcWindow.bottom = 0;
    local_a8.rcClient.left = 0;
    local_a8.rcClient.top = 0;
    local_a8.rcClient.right = 0;
    local_a8.rcClient.bottom = 0;
    local_a8.dwStyle = 0;
    local_a8.dwExStyle = 0;
    local_a8.dwWindowStatus = 0;
    local_a8.cxWindowBorders = 0;
    GetWindowInfo(local_2c8,&local_a8);
    local_138.right = 0;
    local_138.bottom = 0;
    local_138.left = 0;
    local_138.top = 0;
    AdjustWindowRectEx(&local_138,local_a8.dwStyle,0,local_a8.dwExStyle);
    param_5->left = param_5->left - local_138.left;
    param_5->right = param_5->right - local_138.right;
    param_5->top = param_5->top - local_138.top;
    param_5->bottom = param_5->bottom - local_138.bottom;
    iVar27 = param_5->right - param_5->left;
    iVar12 = param_5->top;
    iVar14 = param_5->bottom - iVar12;
    fVar32 = *(float *)(plVar30 + 0x14);
    switch(param_4) {
    case 1:
    case 2:
      iVar14 = ((int)((float)iVar27 / fVar32) - iVar14) / 2;
      param_5->top = iVar12 - iVar14;
      goto LAB_1416d9c35;
    case 3:
    case 6:
      iVar12 = ((int)((float)iVar14 * fVar32) - iVar27) / 2;
      param_5->left = param_5->left - iVar12;
      param_5->right = iVar12 + param_5->right;
      break;
    case 4:
    case 5:
      param_5->top = (iVar14 - (int)((float)iVar27 / fVar32)) + iVar12;
      break;
    case 7:
    case 8:
      iVar14 = (int)((float)iVar27 / fVar32) - iVar14;
LAB_1416d9c35:
      param_5->bottom = iVar14 + param_5->bottom;
    }
    AdjustWindowRectEx(param_5,local_a8.dwStyle,0,local_a8.dwExStyle);
switchD_1416d8d3a_caseD_14:
    piVar24 = (int *)0x1;
    goto switchD_1416d8d3a_caseD_1;
  }
  iVar14 = 0;
  if (param_3 == 0xff) {
    local_2bc = 0;
    GetRawInputData((HRAWINPUT)param_5,0x10000003,(LPVOID)0x0,&local_2bc,0x18);
    local_2b0 = (size_t)local_2bc;
    piVar26 = (int *)operator_new(local_2bc);
    if (piVar26 != (int *)0x0) {
      _guard_xfg_dispatch_icall_nop(piVar26,0,local_2b0);
      piVar18 = piVar26;
    }
    UVar15 = GetRawInputData((HRAWINPUT)param_5,0x10000003,piVar18,&local_2bc,0x18);
    if ((UVar15 != local_2bc) || (*piVar18 != 0)) {
      FMemory::operator_delete(piVar18);
      goto LAB_1416d916c;
    }
    FUN_1416d09e0(param_1,&local_2d8,local_2c8,0xff);
    FMemory::operator_delete(piVar18);
    piVar24 = (int *)0x1;
    goto switchD_1416d8d3a_caseD_1;
  }
  piVar24 = piVar18;
  switch(param_3) {
  case 1:
    break;
  case 2:
    lVar19 = (longlong)*(int *)(param_1 + 0xc0);
    piVar24 = piVar26;
    if (*(int *)(param_1 + 0xc0) != 0) {
      local_2c0 = 0;
      bVar31 = (longlong *)**(undefined8 **)(param_1 + 0xb8) != plVar30;
      plVar29 = (longlong *)(param_1 + 0xb8);
      piVar26 = piVar18;
      piVar24 = piVar18;
      do {
        iVar12 = (int)piVar26;
        piVar18 = (int *)((longlong)piVar18 + 1);
        piVar26 = (int *)(ulonglong)(iVar12 + 1);
        if ((longlong)piVar18 < lVar19) {
          puVar21 = (undefined8 *)((longlong)piVar18 * 0x10 + *plVar29);
          do {
            if (bVar31 != ((longlong *)*puVar21 != plVar30)) break;
            piVar26 = (int *)(ulonglong)((int)piVar26 + 1);
            piVar18 = (int *)((longlong)piVar18 + 1);
            puVar21 = puVar21 + 2;
          } while ((longlong)piVar18 < lVar19);
        }
        iVar14 = (int)piVar26 - iVar12;
        if (bVar31 == false) {
          if (iVar14 != 0) {
            plVar30 = (longlong *)((longlong)iVar12 * 0x10 + 8 + *plVar29);
            do {
              plVar29 = (longlong *)*plVar30;
              if (plVar29 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar29 + 1;
                lVar25 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar25 == 1) {
                  (**(code **)*plVar29)(plVar29);
                  LOCK();
                  piVar24 = (int *)((longlong)plVar29 + 0xc);
                  iVar12 = *piVar24;
                  *piVar24 = *piVar24 + -1;
                  UNLOCK();
                  if (iVar12 == 1) {
                    (**(code **)(*plVar29 + 8))(plVar29,1);
                  }
                }
              }
              plVar30 = plVar30 + 2;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
            plVar30 = (longlong *)CONCAT44(uStack_2d4,local_2d8);
          }
        }
        else {
          iVar27 = (int)piVar24;
          if (iVar27 != iVar12) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar27 * 0x10 + *plVar29),
                       (void *)((longlong)iVar12 * 0x10 + *plVar29),(longlong)iVar14 << 4);
          }
          local_2c0 = iVar27 + iVar14;
        }
        piVar24 = (int *)(ulonglong)local_2c0;
        bVar31 = (bool)(bVar31 ^ 1);
        plVar29 = local_2a0;
      } while ((longlong)piVar18 < lVar19);
      lVar25 = CONCAT44(uStack_2cc,uStack_2d0);
      *(uint *)(local_2a0 + 1) = local_2c0;
      piVar24 = (int *)0x0;
    }
    break;
  case 3:
    if ((DAT_1464b0290 == (short)param_5) && (DAT_1464b0294 == sVar11)) goto LAB_1416d916c;
    if (lVar25 != 0) {
      LOCK();
      *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
      UNLOCK();
      lVar25 = CONCAT44(uStack_2cc,uStack_2d0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x120))(*(longlong **)(param_1 + 0x18),local_258)
    ;
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_258);
    piVar24 = piVar26;
    break;
  default:
    goto switchD_1416d8d3a_caseD_4;
  case 5:
    if (DAT_1468c21f5 != '\0') {
      FUN_1416a8ae0(CONCAT71(0x1400000,param_4 != 1));
    }
    FUN_1416d09e0(param_1,&local_2d8,local_2c8,param_3);
    if ((param_4 == 2) || (piVar24 = piVar26, param_4 == 0)) {
      if (lVar25 != 0) {
        LOCK();
        *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
        UNLOCK();
        lVar25 = CONCAT44(uStack_2cc,uStack_2d0);
      }
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))
                (*(longlong **)(param_1 + 0x18),local_268,(param_4 != 2) + '\x02');
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_268);
      piVar24 = piVar26;
    }
    break;
  case 6:
    if (DAT_1468c21f5 != '\0') {
      FUN_1416a8ae0(CONCAT71(0x1400000,(short)param_4 != 0));
    }
    if ((short)(param_4 >> 0x10) == 0) {
      if (lVar25 != 0) {
        LOCK();
        *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
        UNLOCK();
        lVar25 = CONCAT44(uStack_2cc,uStack_2d0);
      }
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x188))
                (*(longlong **)(param_1 + 0x18),local_228,(short)param_4 != 0);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_228);
    }
    goto switchD_1416d8d3a_caseD_18;
  case 0xf:
    if ((*(char *)(param_1 + 0x108) != '\0') &&
       (((cVar10 = FUN_1415ad720(&DAT_1468e2448), cVar10 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar13 = GetCurrentThreadId(), DVar13 == DAT_1468c21c0)))) {
      lVar19 = 0;
      if (lVar25 != 0) {
        LOCK();
        *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
        UNLOCK();
        lVar19 = CONCAT44(uStack_2cc,uStack_2d0);
      }
      lVar25 = 0;
      if (lVar19 != 0) {
        LOCK();
        *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
        UNLOCK();
        lVar25 = CONCAT44(uStack_2cc,uStack_2d0);
      }
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0xf0))
                (*(longlong **)(param_1 + 0x18),local_218);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_218);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_1a8);
    }
    goto LAB_1416d916c;
  case 0x10:
  case 0x50:
  case 0x51:
  case 0xa0:
switchD_1416d8d3a_caseD_10:
    FUN_1416d09e0(param_1,&local_2d8,local_2c8,param_3);
    piVar24 = piVar26;
    break;
  case 0x14:
    goto switchD_1416d8d3a_caseD_14;
  case 0x18:
    goto switchD_1416d8d3a_caseD_18;
  case 0x1a:
    if (param_5 != (LPRECT)0x0) {
      lVar19 = -1;
      do {
        if ((&DAT_144ce6e12)[lVar19] != *(short *)((longlong)&param_5->left + lVar19 * 2 + 2))
        break;
        lVar23 = lVar19 + 2;
        if (lVar23 == 0x15) goto LAB_1416d9883;
        lVar6 = lVar19 * 2;
        lVar19 = lVar23;
      } while ((&DAT_144ce6e10)[lVar23] == *(short *)((longlong)&param_5->top + lVar6));
    }
    goto LAB_1416d916c;
  case 0x1c:
    if (DAT_1468c21f5 != '\0') {
      FUN_1416a8ae0(CONCAT71(0x1400000,param_4 != 0));
    }
switchD_1416d9a79_caseD_232:
    *(undefined1 *)(param_1 + 0x108) = 0;
    goto LAB_1416d9883;
  case 0x20:
    FUN_1416d09e0(param_1,&local_2d8,local_2c8,param_3);
    lVar19 = (**(code **)(*plVar30 + 0xd8))(plVar30);
    cVar10 = *(char *)(lVar19 + 0x18);
    goto joined_r0x0001416d9287;
  case 0x21:
    if (DAT_1468c21f5 != '\0') {
      FUN_1416a8ae0(0x140000001);
    }
    goto switchD_1416d8d3a_caseD_18;
  case 0x24:
    if (lVar25 != 0) {
      LOCK();
      *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
      UNLOCK();
      lVar25 = CONCAT44(uStack_2cc,uStack_2d0);
      plVar30 = (longlong *)CONCAT44(uStack_2d4,local_2d8);
    }
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0xf8))
              (*(longlong **)(param_1 + 0x18),&local_118,local_208);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_208);
    lVar19 = (**(code **)(*plVar30 + 0xd8))(plVar30);
    if (*(char *)(lVar19 + 0x18) != '\0') {
      DVar13 = GetWindowLongW(local_2c8,-0x10);
      dwExStyle = GetWindowLongW(local_2c8,-0x14);
      local_128.left = 0;
      local_128.top = 0;
      local_128.right = 0;
      local_128.bottom = 0;
      AdjustWindowRectEx(&local_128,DVar13,0,dwExStyle);
      iVar12 = local_128.right - local_128.left;
      iVar14 = local_128.bottom - local_128.top;
    }
    fVar32 = (float)param_5[1].right;
    if (local_114 != '\0') {
      fVar32 = local_118;
    }
    param_5[1].right = (int)ROUND(fVar32 + fVar32 + 0.5) >> 1;
    fVar32 = (float)param_5[1].bottom;
    if (local_10c != '\0') {
      fVar32 = local_110;
    }
    iVar27 = param_5[2].left;
    param_5[1].bottom = (int)ROUND(fVar32 + fVar32 + 0.5) >> 1;
    fVar32 = (float)iVar27;
    if (local_104 != '\0') {
      fVar32 = local_108;
    }
    param_5[2].left = ((int)ROUND(fVar32 + fVar32 + 0.5) >> 1) + iVar12;
    fVar32 = (float)param_5[2].top;
    if (local_fc != '\0') {
      fVar32 = local_100;
    }
    param_5[2].top = ((int)ROUND(fVar32 + fVar32 + 0.5) >> 1) + iVar14;
    piVar24 = piVar26;
    break;
  case 0x7e:
    local_190 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_188 = 0;
    FDisplayMetrics::RebuildDisplayMetrics();
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    bVar31 = false;
    iVar12 = *(int *)(param_1 + 0x3c);
    iVar14 = *(int *)(param_1 + 0x30) + -1;
    lVar19 = (longlong)iVar14;
    if (-1 < iVar14) {
      lVar23 = lVar19 << 4;
      bVar31 = false;
      do {
        if (((*(int *)(lVar23 + 8 + *(longlong *)(param_1 + 0x28)) == 0) ||
            (plVar30 = *(longlong **)(lVar23 + *(longlong *)(param_1 + 0x28)),
            plVar30 == (longlong *)0x0)) ||
           (cVar10 = (**(code **)(*plVar30 + 0x40))(plVar30,local_198), cVar10 == '\0')) {
          bVar31 = true;
        }
        lVar23 = lVar23 + -0x10;
        lVar19 = lVar19 + -1;
      } while (-1 < lVar19);
      iVar12 = *(int *)(param_1 + 0x3c);
    }
    *(int *)(param_1 + 0x3c) = iVar12 + -1;
    if (bVar31) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x28,0);
    }
    FUN_141189610(&local_190);
    goto LAB_1416d916c;
  case 0x83:
    if ((param_4 == 0) ||
       (lVar19 = (**(code **)(*plVar30 + 0xd8))(plVar30), *(char *)(lVar19 + 0x18) != '\0'))
    goto LAB_1416d916c;
    piVar18 = (int *)(**(code **)(*plVar30 + 0xd8))(plVar30);
    piVar24 = piVar26;
    if ((*piVar18 == 5) && (cVar10 = (**(code **)(*plVar30 + 0x70))(plVar30), cVar10 != '\0')) {
      local_e8.cyWindowBorders = 0;
      local_e8.atomWindowType = 0;
      local_e8.wCreatorVersion = 0;
      local_e8.cbSize = 0x3c;
      local_e8.rcWindow.left = 0;
      local_e8.rcWindow.top = 0;
      local_e8.rcWindow.right = 0;
      local_e8.rcWindow.bottom = 0;
      local_e8.rcClient.left = 0;
      local_e8.rcClient.top = 0;
      local_e8.rcClient.right = 0;
      local_e8.rcClient.bottom = 0;
      local_e8.dwStyle = 0;
      local_e8.dwExStyle = 0;
      local_e8.dwWindowStatus = 0;
      local_e8.cxWindowBorders = 0;
      GetWindowInfo(local_2c8,&local_e8);
      param_5->bottom = param_5->bottom - local_e8.cxWindowBorders;
      param_5->left = param_5->left + local_e8.cxWindowBorders;
      param_5->top = param_5->top + local_e8.cxWindowBorders;
      param_5->right = param_5->right - local_e8.cxWindowBorders;
      LVar2 = param_5->right;
      LVar3 = param_5->left;
      LVar4 = param_5->top;
      param_5[1].bottom = param_5->bottom;
      lVar19 = *(longlong *)(param_5 + 3);
      param_5[1].right = LVar2;
      param_5[1].left = LVar3;
      param_5[1].top = LVar4;
      *(int *)(lVar19 + 0x10) = *(int *)(lVar19 + 0x10) + local_e8.cxWindowBorders;
      *(int *)(*(longlong *)(param_5 + 3) + 0x14) =
           *(int *)(*(longlong *)(param_5 + 3) + 0x14) + local_e8.cxWindowBorders;
      *(int *)(*(longlong *)(param_5 + 3) + 0x18) =
           *(int *)(*(longlong *)(param_5 + 3) + 0x18) + local_e8.cxWindowBorders * -2;
      *(int *)(*(longlong *)(param_5 + 3) + 0x1c) =
           *(int *)(*(longlong *)(param_5 + 3) + 0x1c) + local_e8.cxWindowBorders * -2;
      piVar24 = (int *)0x400;
    }
    break;
  case 0x84:
    lVar19 = (**(code **)(*plVar30 + 0xd8))(plVar30);
    if (*(char *)(lVar19 + 0x18) == '\0') {
      GetWindowRect(local_2c8,&local_f8);
      uVar8 = uStack_2cc;
      uVar7 = uStack_2d0;
      local_2c0 = sVar11 - local_f8.top;
      if (*(char *)(plVar30[1] + 0x25) != '\0') {
        local_248 = local_2d8;
        uStack_244 = uStack_2d4;
        uStack_240 = uStack_2d0;
        uStack_23c = uStack_2cc;
        if (lVar25 != 0) {
          LOCK();
          *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
          UNLOCK();
          lVar25 = CONCAT44(uStack_2cc,uStack_2d0);
        }
        cVar10 = (**(code **)(**(longlong **)(param_1 + 0x18) + 8))
                           (*(longlong **)(param_1 + 0x18),&local_248);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_248);
        if (cVar10 == '\0') {
          iVar12 = 5;
        }
        else {
          local_238 = local_2d8;
          uStack_234 = uStack_2d4;
          uStack_230 = uVar7;
          uStack_22c = uVar8;
          if (lVar25 != 0) {
            LOCK();
            *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
            UNLOCK();
            lVar25 = CONCAT44(uStack_2cc,uStack_2d0);
          }
          iVar12 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x140))
                             (*(longlong **)(param_1 + 0x18),&local_238,
                              (short)param_5 - local_f8.left,local_2c0);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_238);
        }
        piVar24 = (int *)(ulonglong)*(uint *)(&DAT_144cefce0 + (longlong)iVar12 * 8);
        break;
      }
    }
LAB_1416d916c:
    plVar30 = (longlong *)0x0;
    if (lVar25 != 0) {
      LOCK();
      piVar18 = (int *)(lVar25 + 8);
      iVar12 = *piVar18;
      *piVar18 = *piVar18 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        puVar21 = (undefined8 *)CONCAT44(uStack_2cc,uStack_2d0);
        (**(code **)*puVar21)(puVar21);
        LOCK();
        piVar18 = (int *)((longlong)puVar21 + 0xc);
        iVar12 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          plVar30 = (longlong *)CONCAT44(uStack_2cc,uStack_2d0);
          (**(code **)(*plVar30 + 8))(plVar30,1);
          goto LAB_1416d9ce8;
        }
      }
LAB_1416d9ce3:
      plVar30 = (longlong *)CONCAT44(uStack_2cc,uStack_2d0);
    }
LAB_1416d9ce8:
    uVar20 = DefWindowProcW(local_2c8,param_3,param_4,(LPARAM)param_5);
    piVar24 = (int *)(uVar20 & 0xffffffff);
    goto LAB_1416d9cfd;
  case 0x85:
    lVar19 = (**(code **)(*plVar30 + 0xd8))(plVar30);
    cVar10 = *(char *)(lVar19 + 0x18);
joined_r0x0001416d9287:
    piVar24 = piVar26;
    if (cVar10 != '\0') goto LAB_1416d916c;
    break;
  case 0x86:
    lVar19 = (**(code **)(*plVar30 + 0xd8))(plVar30);
    if (*(char *)(lVar19 + 0x18) != '\0') goto LAB_1416d916c;
    piVar24 = (int *)0x1;
    break;
  case 0x87:
    piVar24 = (int *)&DAT_00000004;
    break;
  case 0xa1:
  case 0xa4:
  case 0xa7:
    if (param_4 == 2) {
      if (lVar25 != 0) {
        LOCK();
        *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
        UNLOCK();
        lVar25 = CONCAT44(uStack_2cc,uStack_2d0);
      }
      cVar10 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))
                         (*(longlong **)(param_1 + 0x18),local_1c8,1);
      puVar22 = local_1c8;
    }
    else if (param_4 == 8) {
      if (lVar25 != 0) {
        LOCK();
        *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
        UNLOCK();
        lVar25 = CONCAT44(uStack_2cc,uStack_2d0);
      }
      cVar10 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))
                         (*(longlong **)(param_1 + 0x18),local_1d8,1);
      puVar22 = local_1d8;
    }
    else if (param_4 == 9) {
      if (lVar25 != 0) {
        LOCK();
        *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
        UNLOCK();
        lVar25 = CONCAT44(uStack_2cc,uStack_2d0);
      }
      cVar10 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))
                         (*(longlong **)(param_1 + 0x18),local_1e8,1);
      puVar22 = local_1e8;
    }
    else {
      if (param_4 != 0x14) goto LAB_1416d916c;
      if (lVar25 != 0) {
        LOCK();
        *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
        UNLOCK();
        lVar25 = CONCAT44(uStack_2cc,uStack_2d0);
      }
      cVar10 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))
                         (*(longlong **)(param_1 + 0x18),local_1f8,1);
      puVar22 = local_1f8;
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(puVar22);
    if (cVar10 != '\0') goto LAB_1416d916c;
    piVar24 = (int *)0x1;
  }
switchD_1416d8d3a_caseD_1:
  plVar30 = (longlong *)0x0;
  if (lVar25 != 0) {
    LOCK();
    piVar18 = (int *)(lVar25 + 8);
    iVar12 = *piVar18;
    *piVar18 = *piVar18 + -1;
    UNLOCK();
    if (iVar12 == 1) {
      puVar21 = (undefined8 *)CONCAT44(uStack_2cc,uStack_2d0);
      (**(code **)*puVar21)(puVar21);
      LOCK();
      piVar18 = (int *)((longlong)puVar21 + 0xc);
      iVar12 = *piVar18;
      *piVar18 = *piVar18 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        plVar30 = (longlong *)CONCAT44(uStack_2cc,uStack_2d0);
        (**(code **)(*plVar30 + 8))(plVar30,1);
        goto LAB_1416d9cfd;
      }
    }
    plVar30 = (longlong *)CONCAT44(uStack_2cc,uStack_2d0);
  }
LAB_1416d9cfd:
  if (plVar30 != (longlong *)0x0) {
    LOCK();
    plVar30 = plVar30 + 1;
    lVar19 = *plVar30;
    *(int *)plVar30 = (int)*plVar30 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      puVar21 = (undefined8 *)CONCAT44(uStack_2cc,uStack_2d0);
      (**(code **)*puVar21)(puVar21);
      LOCK();
      piVar18 = (int *)((longlong)puVar21 + 0xc);
      iVar12 = *piVar18;
      *piVar18 = *piVar18 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*(longlong *)CONCAT44(uStack_2cc,uStack_2d0) + 8))
                  ((longlong *)CONCAT44(uStack_2cc,uStack_2d0),1);
      }
    }
  }
  return piVar24;
switchD_1416d8d3a_caseD_18:
  FUN_1416d09e0(param_1,&local_2d8,local_2c8,param_3);
  goto LAB_1416d916c;
}



// FUNCTION 1416da0b0 FUN_1416da0b0 body=1065 status=ok
// SIG undefined FUN_1416da0b0(void)

LRESULT FUN_1416da0b0(longlong param_1,HWND param_2,UINT param_3,WPARAM param_4,HKL param_5)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  HIMC pHVar5;
  LONG LVar6;
  DWORD DVar7;
  LRESULT LVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int local_res8 [2];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  HIMC local_70;
  ulonglong local_68;
  longlong *local_60;
  longlong local_58 [3];
  int local_40;
  longlong local_38;
  int local_30;
  
  if (*(int *)(param_1 + 0x18) != 1) {
                    /* WARNING: Could not recover jumptable at 0x0001416da0ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LVar8 = DefWindowProcW(param_2,param_3,param_4,(LPARAM)param_5);
    return LVar8;
  }
  if (param_3 < 0x282) {
    if (param_3 == 0x281) {
      if ((((*(longlong *)(param_1 + 8) == 0) || (param_4 == 0)) ||
          ((*(uint *)(param_1 + 0xa8) >> 0x11 & 1) != 0)) ||
         ((*(uint *)(param_1 + 0xa8) >> 0x10 & 1) == 0)) {
        param_3 = 0x281;
      }
      else {
        param_3 = 0x281;
        param_5 = (HKL)(ulonglong)((uint)param_5 & 0x7fffffff);
      }
    }
    else if (0x4f < param_3) {
      if (param_3 < 0x52) {
        DVar7 = _guard_xfg_dispatch_icall_nop(param_5,4);
        *(DWORD *)(param_1 + 0xa8) = DVar7;
      }
      else if (param_3 == 0x10d) {
        if (*(longlong *)(param_1 + 8) != 0) {
          FUN_1416cf110();
        }
        param_3 = 0x10d;
      }
      else if (param_3 == 0x10e) {
        if (*(longlong *)(param_1 + 8) != 0) {
          FUN_1416d1620();
        }
        param_3 = 0x10e;
      }
      else if (param_3 == 0x10f) {
        lVar3 = *(longlong *)(param_1 + 8);
        if (lVar3 != 0) {
          plVar4 = *(longlong **)(param_1 + 0x10);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
            UNLOCK();
          }
          local_68 = lVar3;
          local_60 = plVar4;
          FUN_1416d16d0((longlong *)(param_1 + 0x50),local_res8);
          uVar11 = 0;
          uVar10 = uVar11;
          if (local_res8[0] != -1) {
            uVar10 = (longlong)local_res8[0] * 0x38 + *(longlong *)(param_1 + 0x50);
          }
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
          if (*(char *)(uVar10 + 0x20) == '\0') {
            FUN_1416cf110(param_1);
          }
          local_70 = _guard_xfg_dispatch_icall_nop(param_2);
          FUN_1416df0a0(param_1,local_70);
          local_68 = (ulonglong)param_5 >> 0xe & 0xffffffffffffff01;
          local_res8[0] = CONCAT31(local_res8[0]._1_3_,(byte)param_5 >> 7);
          if (param_5 == (HKL)0x0) {
            FUN_1416cf290(param_1);
          }
          if (((ulonglong)param_5 >> 0xb & 1) != 0) {
            local_88 = 0;
            local_80 = 0;
            local_84 = 1;
            (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                      (*(longlong **)(param_1 + 8),&local_88,&local_80,&local_84);
            `anonymous_namespace'::GetIMMStringAsFString(&local_38,local_70,0x800);
            (**(code **)(**(longlong **)(param_1 + 8) + 0x38))
                      (*(longlong **)(param_1 + 8),*(undefined4 *)(uVar10 + 0x24),
                       *(undefined4 *)(uVar10 + 0x28),&local_38);
            plVar4 = *(longlong **)(param_1 + 8);
            if (*(char *)(uVar10 + 0x21) == '\0') {
              iVar9 = local_30 + -1;
              if (local_30 == 0) {
                iVar9 = 0;
              }
              (**(code **)(*plVar4 + 0x28))(plVar4,iVar9 + *(int *)(uVar10 + 0x24));
            }
            else {
              (**(code **)(*plVar4 + 0x28))(plVar4,local_88);
            }
            FUN_1416d1620(param_1);
            if (local_38 != 0) {
              FMemory::Free();
            }
          }
          pHVar5 = local_70;
          if (((byte)param_5 >> 3 & 1) != 0) {
            `anonymous_namespace'::GetIMMStringAsFString(local_58 + 2,local_70,8);
            if (((local_40 == 0) || (local_40 == 1)) && (((ulonglong)param_5 >> 0xb & 1) == 0)) {
              FUN_1416cf290(param_1);
            }
            local_78 = 0;
            local_7c = 0;
            local_74 = 1;
            (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                      (*(longlong **)(param_1 + 8),&local_78,&local_7c,&local_74);
            if (local_7c != 0) {
              local_58[0] = 0;
              local_58[1] = 0;
              (**(code **)(**(longlong **)(param_1 + 8) + 0x38))
                        (*(longlong **)(param_1 + 8),local_78,local_7c,local_58);
              if (local_58[0] != 0) {
                FMemory::Free();
              }
            }
            if (*(char *)(uVar10 + 0x20) == '\0') {
              FUN_1416cf110(param_1);
            }
            local_88 = *(undefined4 *)(uVar10 + 0x28);
            uVar2 = *(undefined4 *)(uVar10 + 0x24);
            if (local_40 != 0) {
              uVar11 = (ulonglong)(local_40 - 1);
            }
            *(int *)(uVar10 + 0x28) = (int)uVar11;
            (**(code **)(**(longlong **)(param_1 + 8) + 0x68))
                      (*(longlong **)(param_1 + 8),uVar2,uVar11);
            (**(code **)(**(longlong **)(param_1 + 8) + 0x38))(*(longlong **)(param_1 + 8),uVar2);
            if (local_58[2] != 0) {
              FMemory::Free();
            }
          }
          if (((char)local_68 == '\0') && ((char)local_res8[0] != '\0')) {
            LVar6 = _guard_xfg_dispatch_icall_nop(pHVar5,0x80,(LPVOID)0x0,0);
            (**(code **)(**(longlong **)(param_1 + 8) + 0x28))
                      (*(longlong **)(param_1 + 8),(int)(short)LVar6 + *(int *)(uVar10 + 0x24),0,1);
          }
          _guard_xfg_dispatch_icall_nop(param_2,pHVar5);
        }
        param_3 = 0x10f;
      }
    }
  }
  else if (param_3 == 0x282) {
    param_3 = 0x282;
  }
  else {
    if (param_3 == 0x286) {
      return 0;
    }
    if (param_3 == 0x288) {
      param_3 = 0x288;
    }
  }
  LVar8 = DefWindowProcW(param_2,param_3,param_4,(LPARAM)param_5);
  return LVar8;
}



// FUNCTION 1416da4e0 PumpMessages body=243 status=ok
// SIG undefined PumpMessages(void)

void FWindowsPlatformApplicationMisc::PumpMessages(char param_1)

{
  undefined1 uVar1;
  int iVar2;
  DWORD DVar3;
  HWND hWnd;
  char cVar4;
  DWORD local_res8 [8];
  tagMSG local_38;
  
  uVar1 = DAT_1468c21da;
  if (param_1 == '\0') {
    DAT_1468c21da = 1;
    PeekMessageW(&local_38,(HWND)0x0,0,0,0x400000);
    DAT_1468c21da = uVar1;
    return;
  }
  DAT_1468c21da = 0;
  iVar2 = PeekMessageW(&local_38,(HWND)0x0,0,0,1);
  cVar4 = DAT_1468b5a74;
  while (DAT_1468b5a74 = cVar4, iVar2 != 0) {
    TranslateMessage(&local_38);
    DispatchMessageW(&local_38);
    iVar2 = PeekMessageW(&local_38,(HWND)0x0,0,0,1);
    cVar4 = DAT_1468b5a74;
  }
  if (DAT_1468b5a27 == '\0') {
    hWnd = GetForegroundWindow();
    GetWindowThreadProcessId(hWnd,local_res8);
    DVar3 = GetCurrentProcessId();
    cVar4 = local_res8[0] == DVar3;
  }
  if (cVar4 != '\0') {
    DAT_1464a97d8 = 0x3f800000;
    return;
  }
  DAT_1464a97d8 = FApp::GetUnfocusedVolumeMultiplier();
  return;
}



// FUNCTION 1416da5e0 QueryConnectedMice body=728 status=ok
// SIG undefined QueryConnectedMice(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FWindowsApplication::QueryConnectedMice(longlong param_1)

{
  longlong lVar1;
  short *psVar2;
  char cVar3;
  UINT UVar4;
  uint uVar5;
  int iVar6;
  void *_Dst;
  longlong lVar7;
  uint uVar8;
  void *pData;
  PRAWINPUTDEVICELIST ptVar9;
  PRAWINPUTDEVICELIST ptVar10;
  PRAWINPUTDEVICELIST ptVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_1a8 [32];
  uint local_188 [2];
  PRAWINPUTDEVICELIST local_180;
  ulonglong local_178;
  uint local_170 [2];
  longlong local_168;
  undefined1 local_158 [256];
  longlong local_58;
  short *local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  ptVar9 = (PRAWINPUTDEVICELIST)0x0;
  iVar12 = 0;
  local_180 = (PRAWINPUTDEVICELIST)0x0;
  local_178 = 0;
  local_170[0] = 0;
  local_168 = param_1;
  GetRawInputDeviceList((PRAWINPUTDEVICELIST)0x0,local_170,0x10);
  ptVar10 = ptVar9;
  if (local_170[0] == 0) {
    bVar13 = false;
    goto LAB_1416da879;
  }
  local_178 = CONCAT44(local_178._4_4_,local_170[0]);
  uVar8 = local_170[0];
  if (0 < (int)local_170[0]) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_180,0);
    ptVar10 = local_180;
    uVar8 = (uint)local_178;
  }
  GetRawInputDeviceList(ptVar10,local_170,0x10);
  ptVar11 = ptVar10;
  if (ptVar10 == ptVar10 + (int)uVar8) {
LAB_1416da842:
    iVar6 = GetSystemMetrics(0x1000);
    if (iVar6 != 0) {
      iVar12 = 1;
    }
    bVar13 = iVar12 == 0;
  }
  else {
    do {
      pData = (LPVOID)0x0;
      local_188[0] = 0;
      if ((ptVar11->dwType == 0) &&
         (UVar4 = GetRawInputDeviceInfoA(ptVar11->hDevice,0x20000007,(LPVOID)0x0,local_188),
         UVar4 != 0xffffffff)) {
        uVar5 = local_188[0] + 1;
        _Dst = (void *)operator_new(uVar5);
        if (_Dst != (void *)0x0) {
          ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)uVar5);
          pData = _Dst;
        }
        FMemory::operator_delete(0);
        FMemory::operator_delete(0);
        UVar4 = GetRawInputDeviceInfoA(ptVar11->hDevice,0x20000007,pData,local_188);
        if (UVar4 != 0xffffffff) {
          *(undefined1 *)((ulonglong)local_188[0] + (longlong)pData) = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::
          TStringConversion<TStringConvert<char,wchar_t>,128>(local_158,pData);
          psVar2 = local_50;
          local_180 = (PRAWINPUTDEVICELIST)0x0;
          local_178 = 0;
          if ((local_50 != (short *)0x0) && (*local_50 != 0)) {
            lVar7 = -1;
            do {
              lVar1 = lVar7 + 1;
              lVar7 = lVar7 + 1;
            } while (local_50[lVar1] != 0);
            uVar5 = (int)lVar7 + 1;
            local_178 = (ulonglong)uVar5;
            if (0 < (int)uVar5) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_180,0);
            }
            FGenericPlatformString::Memcpy(local_180,psVar2,(longlong)(int)uVar5 * 2);
          }
          if (local_58 != 0) {
            FMemory::Free();
          }
          FString::ReplaceInline(&local_180,&DAT_144ce500c,&DAT_144ce4fd4,0);
          cVar3 = FString::StartsWith(&local_180,L"\\??\\ROOT\\RDP_MOU\\");
          if ((cVar3 == '\0') &&
             (cVar3 = FString::StartsWith(&local_180,L"\\\\?\\ROOT\\RDP_MOU\\"), cVar3 == '\0')) {
            ptVar9 = (PRAWINPUTDEVICELIST)(ulonglong)((int)ptVar9 + 1);
          }
          if (local_180 != (PRAWINPUTDEVICELIST)0x0) {
            FMemory::Free();
          }
        }
      }
      iVar12 = (int)ptVar9;
      FMemory::operator_delete(pData);
      ptVar11 = ptVar11 + 1;
    } while (ptVar11 != ptVar10 + (int)uVar8);
    bVar13 = false;
    if (iVar12 == 0) goto LAB_1416da842;
  }
  bVar13 = !bVar13 && -1 < iVar12;
LAB_1416da879:
  *(bool *)(local_168 + 0x81) = bVar13;
  if (ptVar10 != (PRAWINPUTDEVICELIST)0x0) {
    FMemory::Free(ptVar10);
  }
  return;
}



// FUNCTION 1416da8c0 QueryInsert body=96 status=ok
// SIG undefined QueryInsert(void)

undefined8 FTextStoreACP::QueryInsert(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  int iStack0000000000000028;
  int *in_stack_00000030;
  int local_18;
  undefined1 local_14 [12];
  
  piVar2 = in_stack_00000030;
  piVar1 = _iStack0000000000000028;
  if ((_iStack0000000000000028 != (int *)0x0) && (in_stack_00000030 != (int *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
              (*(longlong **)(param_1 + 0x18),&stack0x00000028,&local_18,local_14);
    *piVar1 = iStack0000000000000028;
    *piVar2 = iStack0000000000000028 + local_18;
    return 0;
  }
  return 0x80070057;
}



// FUNCTION 1416da920 FUN_1416da920 body=157 status=ok
// SIG undefined FUN_1416da920(void)

longlong * FUN_1416da920(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)0x0;
  *param_3 = 0;
  if (((*param_2 == 0) && (param_2[1] == 0x46000000000000c0)) ||
     ((*param_2 == 0x11d80f2871c6e74e && (param_2[1] == 0x5c43845b06002aa8)))) {
    *param_3 = (longlong)param_1;
    plVar1 = param_1;
  }
  else {
    plVar1 = plVar3;
    if ((*param_2 == 0x4652a93eb246cb75) && (param_2[1] == 0x577efd0cfeb38cbf)) {
      plVar1 = param_1 + 1;
      if (param_1 == (longlong *)0x0) {
        plVar1 = plVar3;
      }
      *param_3 = (longlong)plVar1;
    }
  }
  lVar2 = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
    lVar2 = *param_3;
  }
  plVar1 = (longlong *)0x80004002;
  if (lVar2 != 0) {
    plVar1 = plVar3;
  }
  return plVar1;
}



// FUNCTION 1416da9d0 FUN_1416da9d0 body=157 status=ok
// SIG undefined FUN_1416da9d0(void)

longlong * FUN_1416da9d0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)0x0;
  *param_3 = 0;
  if (((*param_2 == 0) && (param_2[1] == 0x46000000000000c0)) ||
     ((*param_2 == 0x483ac2a028888fe3 && (param_2[1] == 0x3dff51ceb18ceaa3)))) {
    *param_3 = (longlong)param_1;
    plVar1 = param_1;
  }
  else {
    plVar1 = plVar3;
    if ((*param_2 == 0x4f34b57a5f20aa40) && (param_2[1] == 0x79cc77f37635ab96)) {
      plVar1 = param_1 + 1;
      if (param_1 == (longlong *)0x0) {
        plVar1 = plVar3;
      }
      *param_3 = (longlong)plVar1;
    }
  }
  lVar2 = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
    lVar2 = *param_3;
  }
  plVar1 = (longlong *)0x80004002;
  if (lVar2 != 0) {
    plVar1 = plVar3;
  }
  return plVar1;
}



// FUNCTION 1416daa80 QueryInterface body=122 status=ok
// SIG undefined QueryInterface(void)

undefined8 FWindowsWindow::QueryInterface(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  if (((*param_2 != 0x122) || (param_2[1] != 0x46000000000000c0)) &&
     ((*param_2 != 0 || (param_2[1] != 0x46000000000000c0)))) {
    *param_3 = 0;
    return 0x80004002;
  }
  (**(code **)(*param_1 + 8))();
  if (param_1 == (longlong *)&DAT_00000018) {
    param_1 = (longlong *)0x0;
  }
  *param_3 = param_1;
  return 0;
}



// FUNCTION 1416dab00 FUN_1416dab00 body=802 status=ok
// SIG undefined FUN_1416dab00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1416dab00(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 auStack_2088 [32];
  longlong local_2068;
  longlong local_2060;
  int local_2058 [2];
  undefined8 *local_2050;
  undefined8 local_2048;
  longlong *local_2040;
  undefined1 local_2038 [2048];
  undefined1 local_1838 [2048];
  undefined1 local_1038 [2048];
  undefined1 local_838 [2048];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1416dab16;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2088;
  local_2048 = *param_3;
  local_2040 = (longlong *)param_3[1];
  if (local_2040 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_2040 + 0xc) = *(int *)((longlong)local_2040 + 0xc) + 1;
    UNLOCK();
  }
  local_2050 = &local_2048;
  FUN_1416caef0(param_1 + 0x50,local_2058,&local_2050,0);
  lVar9 = (longlong)local_2058[0] * 0x38 + *(longlong *)(param_1 + 0x50);
  if (local_2040 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_2040 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (local_2040 != (longlong *)0x0)) {
      (**(code **)(*local_2040 + 8))(local_2040,1);
    }
  }
  puVar5 = (undefined8 *)operator_new(0x80);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar5 + 2) = 1;
    *puVar5 = &PTR_FUN_144cef320;
    puVar5[1] = &PTR_LAB_144cef410;
    puVar5[3] = *param_3;
    lVar2 = param_3[1];
    puVar5[4] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    puVar5[5] = 0;
    puVar5[6] = 0;
    *(undefined4 *)(puVar5 + 7) = 0;
    *(undefined1 *)((longlong)puVar5 + 0x3c) = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    *(undefined4 *)(puVar5 + 10) = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    *(undefined4 *)(puVar5 + 0xf) = 0;
  }
  puVar7 = (undefined8 *)0x0;
  if (*(longlong **)(lVar9 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar9 + 0x18) + 0x10))();
  }
  *(undefined8 **)(lVar9 + 0x18) = puVar5;
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))
                    (*(longlong **)(param_1 + 0x30),puVar5 + 0xc);
  if (iVar4 < 0) {
LAB_1416dadc9:
    puVar8 = local_838;
LAB_1416dadd1:
    FWindowsPlatformMisc::GetSystemErrorMessage(puVar8,0x400,iVar4);
LAB_1416dadde:
    if (*(longlong **)(lVar9 + 0x18) == (longlong *)0x0) goto LAB_1416dadf1;
    (**(code **)(**(longlong **)(lVar9 + 0x18) + 0x10))();
  }
  else {
    lVar2 = *(longlong *)(lVar9 + 0x18);
    plVar3 = *(longlong **)(lVar2 + 0x60);
    if (plVar3 == (longlong *)0x0) goto LAB_1416dadc9;
    local_2068 = lVar2 + 0x68;
    local_2060 = lVar2 + 0x78;
    iVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,*(undefined4 *)(param_1 + 0x38),0);
    if ((iVar4 < 0) || (*(longlong *)(*(longlong *)(lVar9 + 0x18) + 0x68) == 0)) {
      puVar8 = local_1038;
      goto LAB_1416dadd1;
    }
    iVar4 = (**(code **)(**(longlong **)(*(longlong *)(lVar9 + 0x18) + 0x60) + 0x20))();
    if (-1 < iVar4) {
      lVar2 = *(longlong *)(lVar9 + 0x18);
      puVar5 = *(undefined8 **)(lVar2 + 0x68);
      if (*(longlong **)(lVar2 + 0x70) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar2 + 0x70) + 0x10))();
        *(undefined8 *)(lVar2 + 0x70) = 0;
      }
      iVar4 = (**(code **)*puVar5)(puVar5,&DAT_145ac6270,(undefined8 *)(lVar2 + 0x70));
      if ((-1 < iVar4) && (*(longlong *)(*(longlong *)(lVar9 + 0x18) + 0x70) != 0)) {
        puVar5 = (undefined8 *)operator_new(0x10);
        if (puVar5 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)0x0;
        }
        else {
          *puVar5 = &PTR__scalar_deleting_destructor__144cefe28;
          plVar3 = *(longlong **)(lVar9 + 0x18);
          puVar5[1] = plVar3;
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 8))();
          }
        }
        puVar6 = (undefined8 *)operator_new(0x18);
        if (puVar6 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar6 + 1) = 1;
          *puVar6 = &PTR_FUN_144cefe60;
          *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
          puVar6[2] = puVar5;
          puVar7 = puVar6;
        }
        *param_2 = puVar5;
        param_2[1] = puVar7;
        SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
        return param_2;
      }
      FWindowsPlatformMisc::GetSystemErrorMessage(local_2038,0x400,iVar4);
      plVar3 = *(longlong **)(*(longlong *)(lVar9 + 0x18) + 0x60);
      iVar4 = (**(code **)(*plVar3 + 0x28))(plVar3,1);
      if (iVar4 < 0) {
        puVar8 = local_2038;
        goto LAB_1416dadd1;
      }
      goto LAB_1416dadde;
    }
    FWindowsPlatformMisc::GetSystemErrorMessage(local_1838,0x400,iVar4);
    if (*(longlong **)(lVar9 + 0x18) == (longlong *)0x0) goto LAB_1416dadf1;
    (**(code **)(**(longlong **)(lVar9 + 0x18) + 0x10))();
  }
  *(undefined8 *)(lVar9 + 0x18) = 0;
LAB_1416dadf1:
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1416dae30 Release body=37 status=ok
// SIG undefined Release(void)

int FTSFActivationProxy::Release(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[4] + -1;
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x20))(param_1,1);
  }
  return iVar1;
}



// FUNCTION 1416dae70 Release body=40 status=ok
// SIG undefined Release(void)

int FTextStoreACP::Release(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[2] + -1;
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0xe8))(param_1,1);
  }
  return iVar1;
}



// FUNCTION 1416daec0 FUN_1416daec0 body=751 status=ok
// SIG undefined FUN_1416daec0(void)

undefined8 FUN_1416daec0(longlong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  int *piVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  ulonglong *puVar16;
  longlong *plVar17;
  bool bVar18;
  ulonglong *local_res18;
  
  plVar9 = (longlong *)0x0;
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar13 = (int)(*param_2 >> 4);
  uVar11 = 0x9e3779b9U - iVar13 ^ iVar13 << 8;
  uVar4 = -(uVar11 + iVar13) ^ uVar11 >> 0xd;
  uVar14 = (iVar13 - uVar11) - uVar4 ^ uVar4 >> 0xc;
  uVar11 = (uVar11 - uVar14) - uVar4 ^ uVar14 << 0x10;
  uVar4 = (uVar4 - uVar11) - uVar14 ^ uVar11 >> 5;
  uVar14 = (uVar14 - uVar11) - uVar4 ^ uVar4 >> 3;
  uVar11 = (uVar11 - uVar14) - uVar4 ^ uVar14 << 10;
  uVar6 = ((longlong)(int)((uVar4 - uVar11) - uVar14) ^ (ulonglong)(uVar11 >> 0xf)) &
          (longlong)((int)param_1[9] + -1);
  plVar3 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar3 = param_1 + 7;
  }
  local_res18 = (ulonglong *)((longlong)plVar3 + uVar6 * 4);
  iVar13 = *(int *)((longlong)plVar3 + uVar6 * 4);
  if (iVar13 == -1) {
    return 0;
  }
  do {
    puVar16 = (ulonglong *)((longlong)iVar13 * 0x38 + *param_1);
    plVar3 = (longlong *)puVar16[1];
    plVar8 = plVar3;
    plVar15 = plVar9;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      iVar13 = (int)plVar3[1];
      bVar18 = iVar13 == 0;
      if (bVar18) {
        *(int *)(plVar3 + 1) = 0;
        iVar13 = 0;
      }
      UNLOCK();
      while (plVar8 = plVar9, !bVar18) {
        LOCK();
        bVar18 = iVar13 == (int)plVar3[1];
        if (bVar18) {
          *(int *)(plVar3 + 1) = iVar13 + 1;
        }
        UNLOCK();
        if (bVar18) {
          plVar8 = plVar3;
          plVar15 = (longlong *)0x0;
          if (plVar3 != (longlong *)0x0) {
            plVar15 = (longlong *)*puVar16;
          }
          break;
        }
        LOCK();
        iVar13 = (int)plVar3[1];
        bVar18 = iVar13 == 0;
        if (bVar18) {
          *(int *)(plVar3 + 1) = 0;
          iVar13 = 0;
        }
        UNLOCK();
      }
    }
    plVar3 = (longlong *)param_2[1];
    plVar17 = plVar9;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      iVar13 = (int)plVar3[1];
      bVar18 = iVar13 == 0;
      if (bVar18) {
        *(int *)(plVar3 + 1) = 0;
        iVar13 = 0;
      }
      UNLOCK();
      while (plVar17 = (longlong *)0x0, !bVar18) {
        LOCK();
        bVar18 = iVar13 == (int)plVar3[1];
        if (bVar18) {
          *(int *)(plVar3 + 1) = iVar13 + 1;
        }
        UNLOCK();
        if (bVar18) {
          plVar17 = (longlong *)0x0;
          if (plVar3 != (longlong *)0x0) {
            plVar17 = (longlong *)*param_2;
            LOCK();
            plVar1 = plVar3 + 1;
            lVar10 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar5 = (int *)((longlong)plVar3 + 0xc);
              iVar13 = *piVar5;
              *piVar5 = *piVar5 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          break;
        }
        LOCK();
        iVar13 = (int)plVar3[1];
        bVar18 = iVar13 == 0;
        if (bVar18) {
          *(int *)(plVar3 + 1) = 0;
          iVar13 = 0;
        }
        UNLOCK();
      }
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar8 + 1;
      lVar10 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar5 = (int *)((longlong)plVar8 + 0xc);
        iVar13 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    if (plVar15 == plVar17) {
      iVar13 = (int)*local_res18;
      if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) goto LAB_1416db144;
      lVar10 = *param_1;
      lVar12 = (longlong)iVar13 * 0x38;
      lVar7 = (longlong)(int)(*(uint *)(lVar12 + 0x34 + lVar10) & (int)param_1[9] - 1U);
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar2 = *(int *)((longlong)plVar9 + lVar7 * 4);
      piVar5 = (int *)((longlong)plVar9 + lVar7 * 4);
      break;
    }
    iVar13 = (int)puVar16[6];
    local_res18 = puVar16 + 6;
    if (iVar13 == -1) {
      return 0;
    }
  } while( true );
joined_r0x0001416db122:
  if (iVar2 == -1) {
LAB_1416db144:
    lVar10 = (longlong)iVar13 * 0x38 + *param_1;
    plVar9 = *(longlong **)(lVar10 + 0x18);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    plVar9 = *(longlong **)(lVar10 + 8);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      piVar5 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar13,1);
    return 1;
  }
  if (iVar2 == iVar13) {
    *piVar5 = *(int *)(lVar12 + 0x30 + lVar10);
    goto LAB_1416db144;
  }
  piVar5 = (int *)((longlong)iVar2 * 0x38 + 0x30 + lVar10);
  iVar2 = *piVar5;
  goto joined_r0x0001416db122;
}



// FUNCTION 1416db1b0 FUN_1416db1b0 body=753 status=ok
// SIG undefined FUN_1416db1b0(void)

undefined8 FUN_1416db1b0(longlong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  longlong *plVar17;
  longlong *plVar18;
  bool bVar19;
  ulonglong *local_res18;
  
  plVar13 = (longlong *)0x0;
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar15 = (int)(*param_2 >> 4);
  uVar14 = 0x9e3779b9U - iVar15 ^ iVar15 << 8;
  uVar8 = -(uVar14 + iVar15) ^ uVar14 >> 0xd;
  uVar16 = (iVar15 - uVar14) - uVar8 ^ uVar8 >> 0xc;
  uVar14 = (uVar14 - uVar16) - uVar8 ^ uVar16 << 0x10;
  uVar8 = (uVar8 - uVar14) - uVar16 ^ uVar14 >> 5;
  uVar16 = (uVar16 - uVar14) - uVar8 ^ uVar8 >> 3;
  uVar14 = (uVar14 - uVar16) - uVar8 ^ uVar16 << 10;
  uVar9 = ((longlong)(int)((uVar8 - uVar14) - uVar16) ^ (ulonglong)(uVar14 >> 0xf)) &
          (longlong)((int)param_1[9] + -1);
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  local_res18 = (ulonglong *)((longlong)plVar7 + uVar9 * 4);
  iVar15 = *(int *)((longlong)plVar7 + uVar9 * 4);
  if (iVar15 == -1) {
    return 0;
  }
  do {
    plVar7 = *(longlong **)(*param_1 + 8 + (longlong)iVar15 * 0x18);
    puVar3 = (ulonglong *)(*param_1 + (longlong)iVar15 * 0x18);
    plVar11 = plVar7;
    plVar17 = plVar13;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      iVar15 = (int)plVar7[1];
      bVar19 = iVar15 == 0;
      if (bVar19) {
        *(int *)(plVar7 + 1) = 0;
        iVar15 = 0;
      }
      UNLOCK();
      while (plVar11 = plVar13, !bVar19) {
        LOCK();
        bVar19 = iVar15 == (int)plVar7[1];
        if (bVar19) {
          *(int *)(plVar7 + 1) = iVar15 + 1;
        }
        UNLOCK();
        if (bVar19) {
          plVar11 = plVar7;
          plVar17 = (longlong *)0x0;
          if (plVar7 != (longlong *)0x0) {
            plVar17 = (longlong *)*puVar3;
          }
          break;
        }
        LOCK();
        iVar15 = (int)plVar7[1];
        bVar19 = iVar15 == 0;
        if (bVar19) {
          *(int *)(plVar7 + 1) = 0;
          iVar15 = 0;
        }
        UNLOCK();
      }
    }
    plVar7 = (longlong *)param_2[1];
    plVar18 = plVar13;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      iVar15 = (int)plVar7[1];
      bVar19 = iVar15 == 0;
      if (bVar19) {
        *(int *)(plVar7 + 1) = 0;
        iVar15 = 0;
      }
      UNLOCK();
      while (plVar18 = (longlong *)0x0, !bVar19) {
        LOCK();
        bVar19 = iVar15 == (int)plVar7[1];
        if (bVar19) {
          *(int *)(plVar7 + 1) = iVar15 + 1;
        }
        UNLOCK();
        if (bVar19) {
          plVar18 = (longlong *)0x0;
          if (plVar7 != (longlong *)0x0) {
            plVar18 = (longlong *)*param_2;
            LOCK();
            plVar1 = plVar7 + 1;
            lVar12 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar2 = (int *)((longlong)plVar7 + 0xc);
              iVar15 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
          break;
        }
        LOCK();
        iVar15 = (int)plVar7[1];
        bVar19 = iVar15 == 0;
        if (bVar19) {
          *(int *)(plVar7 + 1) = 0;
          iVar15 = 0;
        }
        UNLOCK();
      }
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar11 + 1;
      lVar12 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        iVar15 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    if (plVar17 == plVar18) {
      iVar15 = (int)*local_res18;
      lVar12 = (longlong)iVar15;
      if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) goto LAB_1416db444;
      lVar6 = *param_1;
      lVar10 = (longlong)(int)(*(uint *)(lVar6 + 0x14 + lVar12 * 0x18) & (int)param_1[9] - 1U);
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar13 + lVar10 * 4);
      puVar4 = (undefined4 *)((longlong)plVar13 + lVar10 * 4);
      break;
    }
    iVar15 = (int)puVar3[2];
    local_res18 = puVar3 + 2;
    if (iVar15 == -1) {
      return 0;
    }
  } while( true );
joined_r0x0001416db420:
  if (iVar5 == -1) {
LAB_1416db444:
    plVar13 = *(longlong **)(*param_1 + 8 + lVar12 * 0x18);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar5 == 1) && (plVar13 != (longlong *)0x0)) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar15,1);
    return 1;
  }
  if (iVar5 == iVar15) {
    *puVar4 = *(undefined4 *)(lVar6 + lVar12 * 0x18 + 0x10);
    goto LAB_1416db444;
  }
  lVar10 = (longlong)iVar5 * 3 + 2;
  iVar5 = *(int *)(lVar6 + lVar10 * 8);
  puVar4 = (undefined4 *)(lVar6 + lVar10 * 8);
  goto joined_r0x0001416db420;
}



// FUNCTION 1416db4b0 RemoveMessageHandler body=182 status=ok
// SIG undefined RemoveMessageHandler(void)

void FWindowsApplication::RemoveMessageHandler(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar2 = DAT_1469e5b78;
  iVar5 = 0;
  plVar6 = (longlong *)(DAT_1469e5b78 + 0xa8);
  iVar4 = *(int *)(DAT_1469e5b78 + 0xb0);
  if (0 < iVar4) {
    lVar7 = 0;
    do {
      lVar1 = *plVar6;
      if (*(longlong *)(lVar7 + lVar1) == param_2) {
        iVar3 = (iVar4 - iVar5) + -1;
        if (0 < iVar3) {
          iVar3 = 1;
        }
        if (iVar3 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(lVar1 + (longlong)iVar5 * 8),
                     (void *)(lVar1 + (longlong)(iVar4 - iVar3) * 8),(longlong)iVar3 << 3);
          iVar4 = *(int *)(lVar2 + 0xb0);
        }
        *(int *)(lVar2 + 0xb0) = iVar4 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar6);
        iVar4 = *(int *)(lVar2 + 0xb0);
        iVar5 = iVar5 + -1;
        lVar7 = lVar7 + -8;
      }
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 8;
    } while (iVar5 < iVar4);
  }
  return;
}



// FUNCTION 1416db570 RequestAttrsAtPosition body=216 status=ok
// SIG undefined RequestAttrsAtPosition(void)

undefined8
FTextStoreACP::RequestAttrsAtPosition
          (longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint local_res18;
  
  local_res18 = 0;
  if (param_3 != 0) {
    uVar4 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x28);
      for (lVar3 = lVar1; lVar3 != lVar1 + (longlong)*(int *)(param_1 + 0x30) * 0x28;
          lVar3 = lVar3 + 0x28) {
        if ((**(longlong **)(lVar3 + 8) == *(longlong *)(param_4 + uVar4 * 0x10)) &&
           ((*(longlong **)(lVar3 + 8))[1] == *(longlong *)(param_4 + 8 + uVar4 * 0x10))) {
          iVar2 = (int)((lVar3 - lVar1) / 0x28);
          if (iVar2 != -1) {
            *(undefined1 *)(lVar1 + (longlong)iVar2 * 0x28) = 1;
          }
          break;
        }
      }
      local_res18 = local_res18 + 1;
      uVar4 = (ulonglong)local_res18;
    } while (local_res18 < param_3);
  }
  return 0;
}



// FUNCTION 1416db650 RequestLock body=231 status=ok
// SIG undefined RequestLock(void)

undefined8 FTextStoreACP::RequestLock(longlong param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 != (longlong *)0x0) {
    if (param_3 == (undefined4 *)0x0) {
      return 0x80070057;
    }
    uVar2 = *(uint *)(param_1 + 0x38);
    if (uVar2 == 0) {
      *(uint *)(param_1 + 0x38) = param_2 & 0xfffffffe;
      uVar4 = (**(code **)(*plVar3 + 0x40))(plVar3,param_2 & 0xfffffffe);
      *param_3 = uVar4;
      cVar1 = *(char *)(param_1 + 0x3c);
      while (cVar1 != '\0') {
        *(undefined4 *)(param_1 + 0x38) = 6;
        *(undefined1 *)(param_1 + 0x3c) = 0;
        (**(code **)(**(longlong **)(param_1 + 0x40) + 0x40))(*(longlong **)(param_1 + 0x40),6);
        cVar1 = *(char *)(param_1 + 0x3c);
      }
      *(undefined4 *)(param_1 + 0x38) = 0;
      return 0;
    }
    if ((((uVar2 >> 1 & 1) == 0) && (((byte)uVar2 & 6) == 6)) &&
       ((param_2 & 1) == 0 && ((byte)param_2 & 6) != 6)) {
      *param_3 = 0x40300;
      *(undefined1 *)(param_1 + 0x3c) = 1;
      return 0;
    }
    *param_3 = 0x80040208;
  }
  return 0x80004005;
}



// FUNCTION 1416db740 ReshapeWindow body=539 status=ok
// SIG undefined ReshapeWindow(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FWindowsWindow::ReshapeWindow
               (longlong *param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  int cx;
  UINT uFlags;
  HRGN hRgn;
  longlong lVar3;
  int iVar4;
  int cy;
  int iVar5;
  undefined1 auStackY_d8 [32];
  tagRECT local_98;
  tagWINDOWINFO local_88;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStackY_d8;
  local_88.rcWindow.left = 0;
  local_88.rcWindow.top = 0;
  local_88.rcWindow.right = 0;
  local_88.rcWindow.bottom = 0;
  local_88.rcClient.left = 0;
  local_88.rcClient.top = 0;
  local_88.rcClient.right = 0;
  local_88.rcClient.bottom = 0;
  local_88.dwStyle = 0;
  local_88.dwExStyle = 0;
  local_88.dwWindowStatus = 0;
  local_88.cxWindowBorders = 0;
  local_88.cyWindowBorders = 0;
  local_88.atomWindowType = 0;
  local_88.wCreatorVersion = 0;
  local_88.cbSize = 0x3c;
  GetWindowInfo((HWND)param_1[5],&local_88);
  lVar3 = param_1[1];
  *(float *)(param_1 + 0x14) = (float)param_4 / (float)param_5;
  if (*(char *)(lVar3 + 0x18) != '\0') {
    local_98.left = 0;
    local_98.top = 0;
    local_98.right = 0;
    local_98.bottom = 0;
    AdjustWindowRectEx(&local_98,local_88.dwStyle,0,local_88.dwExStyle);
    param_2 = param_2 + local_98.left;
    param_4 = param_4 + (local_98.right - local_98.left);
    param_3 = param_3 + local_98.top;
    lVar3 = param_1[1];
    param_5 = param_5 + (local_98.bottom - local_98.top);
  }
  if ((param_4 == (int)param_1[0x13]) && (param_5 == *(int *)((longlong)param_1 + 0x9c))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  *(int *)(param_1 + 0x13) = param_4;
  *(int *)((longlong)param_1 + 0x9c) = param_5;
  cy = param_5;
  cx = param_4;
  if (*(char *)(lVar3 + 0x27) != '\0') {
    iVar4 = local_88.rcWindow.right - local_88.rcWindow.left;
    iVar5 = local_88.rcWindow.bottom - local_88.rcWindow.top;
    cx = *(int *)(lVar3 + 0x2c);
    if (*(int *)(lVar3 + 0x2c) == -1) {
      cx = iVar4;
    }
    cy = *(int *)(lVar3 + 0x30);
    if (*(int *)(lVar3 + 0x30) == -1) {
      cy = iVar5;
    }
    if (iVar4 <= cx) {
      cx = iVar4;
    }
    if (cx <= param_4) {
      cx = param_4;
    }
    if (iVar5 <= cy) {
      cy = iVar5;
    }
    if (cy <= param_5) {
      cy = param_5;
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x70))(param_1);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x48))(param_1);
  }
  uFlags = 0x14;
  if ((int)param_1[7] == 0) {
    uFlags = 0x414;
  }
  SetWindowPos((HWND)param_1[5],(HWND)0x0,param_2,param_3,cx,cy,uFlags);
  if ((*(char *)(param_1[1] + 0x27) != '\0') && (bVar1)) {
    *(int *)(param_1 + 6) = (int)param_1[0x13];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_1 + 0x9c);
    hRgn = (HRGN)MakeWindowRegionObject(param_1,1);
    SetWindowRgn((HWND)param_1[5],hRgn,0);
  }
  return;
}



// FUNCTION 1416db990 RetrieveRequestedAttrs body=215 status=ok
// SIG undefined RetrieveRequestedAttrs(void)

undefined8
FTextStoreACP::RetrieveRequestedAttrs
          (longlong param_1,uint param_2,undefined4 *param_3,uint *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  
  iVar6 = 0;
  *param_4 = 0;
  if (*(int *)(param_1 + 0x30) < 1) {
    return 0;
  }
  uVar5 = 0;
  lVar8 = 0;
  puVar7 = param_3;
  do {
    if (param_2 <= uVar5) {
      return 0;
    }
    if (*(char *)(*(longlong *)(param_1 + 0x28) + lVar8) != '\0') {
      puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x28) + 8 + lVar8);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar7 = *puVar1;
      puVar7[1] = uVar2;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      Ordinal_10(param_3 + (ulonglong)*param_4 * 0xc + 6,
                 *(longlong *)(param_1 + 0x28) + ((longlong)iVar6 * 5 + 2) * 8);
      puVar7[4] = 0;
      uVar5 = *param_4;
    }
    uVar5 = uVar5 + 1;
    iVar6 = iVar6 + 1;
    lVar8 = lVar8 + 0x28;
    *param_4 = uVar5;
    puVar7 = puVar7 + 0xc;
  } while (iVar6 < *(int *)(param_1 + 0x30));
  return 0;
}



// FUNCTION 1416dba70 SaveToINI body=276 status=ok
// SIG undefined SaveToINI(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FWindowsConsoleOutputDevice::SaveToINI(longlong param_1)

{
  longlong lVar1;
  BOOL BVar2;
  HWND hWnd;
  undefined1 auStack_58 [32];
  longlong local_38;
  _CONSOLE_SCREEN_BUFFER_INFO local_28;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if ((DAT_1468b6148 != 0) && (1 < *(int *)(param_1 + 0x18))) {
    hWnd = GetConsoleWindow();
    lVar1 = param_1 + 0x10;
    if (hWnd != (HWND)0x0) {
      GetWindowRect(hWnd,(LPRECT)&local_28);
      local_38 = lVar1;
      FConfigCacheIni::SetInt(DAT_1468b6148,L"DebugWindows",L"ConsoleX",local_28.dwSize);
      local_38 = lVar1;
      FConfigCacheIni::SetInt(DAT_1468b6148,L"DebugWindows",L"ConsoleY",local_28.dwCursorPosition);
    }
    if ((*(HANDLE *)(param_1 + 0x20) != (HANDLE)0x0) &&
       (BVar2 = GetConsoleScreenBufferInfo(*(HANDLE *)(param_1 + 0x20),&local_28), BVar2 != 0)) {
      local_38 = lVar1;
      FConfigCacheIni::SetInt(DAT_1468b6148,L"DebugWindows",L"ConsoleWidth",(int)local_28.dwSize.X);
      local_38 = lVar1;
      FConfigCacheIni::SetInt(DAT_1468b6148,L"DebugWindows",L"ConsoleHeight",(int)local_28.dwSize.Y)
      ;
    }
  }
  return;
}



// FUNCTION 1416dbb90 FUN_1416dbb90 body=2810 status=ok
// SIG undefined FUN_1416dbb90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1416dbb90(char *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  double dVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  byte bVar16;
  char *pcVar17;
  longlong lVar18;
  double *pdVar19;
  undefined8 *puVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  char *pcVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_128 [32];
  byte *local_108;
  undefined2 local_100;
  undefined2 local_fe;
  char local_fc [4];
  longlong local_f8;
  LARGE_INTEGER local_f0;
  undefined8 local_e8;
  short local_e0 [28];
  byte local_a8 [24];
  ulonglong local_90;
  
  local_90 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  param_1[1] = '\0';
  iVar22 = 0;
  pcVar24 = local_fc;
  pcVar17 = param_1 + 0x108;
  puVar20 = &local_e8;
  do {
    cVar12 = *pcVar17;
    *pcVar24 = cVar12;
    if ((cVar12 != '\0') || (*param_1 != '\0')) {
      *puVar20 = 0;
      puVar20[1] = 0;
      iVar13 = _guard_xfg_dispatch_icall_nop(iVar22);
      *pcVar17 = iVar13 == 0;
      if (iVar13 == 0) {
        param_1[1] = '\x01';
      }
    }
    iVar22 = iVar22 + 1;
    puVar20 = puVar20 + 2;
    pcVar17 = pcVar17 + 0x100;
    pcVar24 = pcVar24 + 1;
  } while (iVar22 < 4);
  local_f8 = 0;
  do {
    lVar21 = local_f8 * 0x100;
    pcVar17 = param_1 + lVar21 + 0x20;
    cVar12 = param_1[lVar21 + 0x108];
    if ((cVar12 != '\0') || (local_fc[local_f8] != '\0')) {
      local_108 = (byte *)(local_f8 << 4);
      if (local_fc[local_f8] == '\0') {
        if (cVar12 != '\0') {
          bVar11 = false;
          DAT_1464aef64 = DAT_1464aef64 + 1;
          uVar7 = *(undefined4 *)(param_1 + lVar21 + 0x104);
          lVar23 = (longlong)(DAT_1464aef58 + -1);
          if (-1 < DAT_1464aef58 + -1) {
            lVar18 = lVar23 << 4;
            do {
              if ((*(int *)(lVar18 + 8 + DAT_1464aef50) == 0) ||
                 (plVar8 = *(longlong **)(lVar18 + DAT_1464aef50), plVar8 == (longlong *)0x0)) {
LAB_1416dbd3c:
                bVar11 = true;
              }
              else {
                cVar12 = (**(code **)(*plVar8 + 0x40))(plVar8,1,0xffffffff,uVar7);
                if (cVar12 == '\0') goto LAB_1416dbd3c;
              }
              lVar18 = lVar18 + -0x10;
              lVar23 = lVar23 + -1;
            } while (-1 < lVar23);
          }
          iVar22 = DAT_1464aef58;
          DAT_1464aef64 = DAT_1464aef64 + -1;
          if ((bVar11) && (DAT_1464aef64 < 1)) {
            iVar13 = 0;
            if (0 < DAT_1464aef58) {
              lVar23 = 0;
              do {
                if (((*(int *)(lVar23 + 8 + DAT_1464aef50) == 0) ||
                    (*(longlong **)(lVar23 + DAT_1464aef50) == (longlong *)0x0)) ||
                   (cVar12 = (**(code **)(**(longlong **)(lVar23 + DAT_1464aef50) + 0x10))(),
                   cVar12 != '\0')) {
                  TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464aef50,iVar13,1,1);
                }
                else {
                  iVar13 = iVar13 + 1;
                  lVar23 = lVar23 + 0x10;
                }
              } while (iVar13 < DAT_1464aef58);
            }
            _DAT_1464aef60 = DAT_1464aef58 * 2;
            if (_DAT_1464aef60 < 3) {
              _DAT_1464aef60 = 2;
            }
            if ((_DAT_1464aef60 < iVar22) && (DAT_1464aef5c != DAT_1464aef58)) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464aef50);
            }
          }
          uVar14 = *(uint *)(param_1 + lVar21 + 0x104);
          if ((uVar14 < 8) && ((&DAT_1468c21f8)[(int)uVar14] != '\x06')) {
            (&DAT_1468c21f8)[(int)uVar14] = 6;
            (&DAT_1468c2200)[(int)uVar14] = 1;
          }
        }
      }
      else if (cVar12 == '\0') {
        bVar11 = false;
        DAT_1464aef64 = DAT_1464aef64 + 1;
        uVar7 = *(undefined4 *)(param_1 + lVar21 + 0x104);
        lVar23 = (longlong)(DAT_1464aef58 + -1);
        if (-1 < DAT_1464aef58 + -1) {
          lVar18 = lVar23 << 4;
          do {
            if (((*(int *)(lVar18 + 8 + DAT_1464aef50) == 0) ||
                (plVar8 = *(longlong **)(lVar18 + DAT_1464aef50), plVar8 == (longlong *)0x0)) ||
               (cVar12 = (**(code **)(*plVar8 + 0x40))(plVar8,0,0xffffffff,uVar7), cVar12 == '\0'))
            {
              bVar11 = true;
            }
            lVar18 = lVar18 + -0x10;
            lVar23 = lVar23 + -1;
          } while (-1 < lVar23);
        }
        iVar22 = DAT_1464aef58;
        DAT_1464aef64 = DAT_1464aef64 + -1;
        if ((bVar11) && (DAT_1464aef64 < 1)) {
          iVar13 = 0;
          if (0 < DAT_1464aef58) {
            lVar23 = 0;
            do {
              if (((*(int *)(lVar23 + 8 + DAT_1464aef50) == 0) ||
                  (*(longlong **)(lVar23 + DAT_1464aef50) == (longlong *)0x0)) ||
                 (cVar12 = (**(code **)(**(longlong **)(lVar23 + DAT_1464aef50) + 0x10))(),
                 cVar12 != '\0')) {
                TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464aef50,iVar13,1,1);
              }
              else {
                iVar13 = iVar13 + 1;
                lVar23 = lVar23 + 0x10;
              }
            } while (iVar13 < DAT_1464aef58);
          }
          _DAT_1464aef60 = DAT_1464aef58 * 2;
          if (_DAT_1464aef60 < 3) {
            _DAT_1464aef60 = 2;
          }
          if ((_DAT_1464aef60 < iVar22) && (DAT_1464aef5c != DAT_1464aef58)) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464aef50);
          }
        }
      }
      pbVar15 = local_108;
      uVar3 = *(undefined2 *)((longlong)&local_e8 + (longlong)local_108 + 4);
      local_a8[0] = 0;
      local_a8[1] = 0;
      local_a8[2] = 0;
      local_a8[3] = 0;
      local_a8[4] = 0;
      local_a8[5] = 0;
      local_a8[6] = 0;
      local_a8[7] = 0;
      bVar1 = (byte)((ushort)uVar3 >> 8);
      local_a8[8] = 0;
      local_a8[9] = 0;
      local_a8[10] = 0;
      local_a8[0xb] = 0;
      local_a8[0xc] = 0;
      local_a8[0xd] = 0;
      local_a8[0xe] = 0;
      local_a8[0xf] = 0;
      local_a8[0x10] = 0;
      local_a8[0x11] = 0;
      local_a8[0x12] = 0;
      local_a8[0x13] = 0;
      local_a8[0x14] = 0;
      local_a8[0x15] = 0;
      local_a8[0x16] = 0;
      local_a8[0x17] = 0;
      local_a8[(byte)param_1[2]] = bVar1 >> 4 & 1;
      local_a8[(byte)param_1[3]] = bVar1 >> 5 & 1;
      local_a8[(byte)param_1[4]] = bVar1 >> 6 & 1;
      local_a8[(byte)param_1[5]] = bVar1 >> 7;
      local_a8[(byte)param_1[6]] = bVar1 & 1;
      local_a8[(byte)param_1[7]] = bVar1 >> 1 & 1;
      bVar16 = (byte)uVar3;
      local_a8[(byte)param_1[8]] = bVar16 >> 5 & 1;
      local_a8[(byte)param_1[9]] = bVar16 >> 4 & 1;
      local_a8[(byte)param_1[10]] = bVar16 >> 6 & 1;
      bVar1 = *(byte *)((longlong)&local_e8 + (longlong)local_108 + 6);
      local_a8[(byte)param_1[0xb]] = bVar16 >> 7;
      bVar2 = *(byte *)((longlong)&local_e8 + (longlong)local_108 + 7);
      local_a8[(byte)param_1[0xc]] = 0x1e < bVar1;
      local_a8[(byte)param_1[0xd]] = 0x1e < bVar2;
      local_a8[(byte)param_1[0xe]] = bVar16 & 1;
      local_a8[(byte)param_1[0xf]] = bVar16 >> 1 & 1;
      local_a8[(byte)param_1[0x10]] = bVar16 >> 2 & 1;
      local_a8[(byte)param_1[0x11]] = bVar16 >> 3 & 1;
      sVar4 = *(short *)((longlong)local_e0 + (longlong)local_108 + 2);
      sVar5 = *(short *)((longlong)local_e0 + (longlong)local_108);
      sVar6 = *(short *)((longlong)local_e0 + (longlong)local_108);
      local_a8[(byte)param_1[0x12]] = 0x1ea9 < sVar4;
      local_a8[(byte)param_1[0x13]] = sVar4 < -0x1ea9;
      sVar4 = *(short *)((longlong)local_e0 + (longlong)local_108 + 6);
      local_a8[(byte)param_1[0x14]] = sVar6 < -0x1ea9;
      local_a8[(byte)param_1[0x15]] = 0x1ea9 < sVar6;
      sVar6 = *(short *)((longlong)local_e0 + (longlong)local_108 + 4);
      local_a8[(byte)param_1[0x16]] = 0x21f1 < sVar4;
      local_a8[(byte)param_1[0x17]] = sVar4 < -0x21f1;
      local_a8[(byte)param_1[0x18]] = sVar6 < -0x21f1;
      local_a8[(byte)param_1[0x19]] = 0x21f1 < sVar6;
      if (sVar5 < 1) {
        fVar25 = 3.0517578e-05;
      }
      else {
        fVar25 = 3.051851e-05;
      }
      uVar14 = (uint)sVar5;
      if ((*(short *)(param_1 + lVar21 + 0xf8) != sVar5) ||
         (0x1ea9 < (int)((uVar14 ^ (int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f)))) {
        (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x80))
                  (*(longlong **)(param_1 + 0x4e8),DAT_1469e5b98,
                   *(undefined4 *)(param_1 + lVar21 + 0x104),(float)(int)uVar14 * fVar25);
        uVar14 = *(uint *)(param_1 + lVar21 + 0x104);
        if ((uVar14 < 8) && ((&DAT_1468c21f8)[(int)uVar14] != '\x06')) {
          (&DAT_1468c21f8)[(int)uVar14] = 6;
          (&DAT_1468c2200)[(int)uVar14] = 1;
        }
      }
      *(short *)(param_1 + lVar21 + 0xf8) = sVar5;
      sVar4 = *(short *)((longlong)local_e0 + (longlong)pbVar15 + 2);
      if (sVar4 < 1) {
        fVar25 = 3.0517578e-05;
      }
      else {
        fVar25 = 3.051851e-05;
      }
      uVar14 = (uint)sVar4;
      if ((*(short *)(param_1 + lVar21 + 0xfa) != sVar4) ||
         (0x1ea9 < (int)((uVar14 ^ (int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f)))) {
        (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x80))
                  (*(longlong **)(param_1 + 0x4e8),DAT_1469e5ba0,
                   *(undefined4 *)(param_1 + lVar21 + 0x104),(float)(int)uVar14 * fVar25);
        uVar14 = *(uint *)(param_1 + lVar21 + 0x104);
        if ((uVar14 < 8) && ((&DAT_1468c21f8)[(int)uVar14] != '\x06')) {
          (&DAT_1468c21f8)[(int)uVar14] = 6;
          (&DAT_1468c2200)[(int)uVar14] = 1;
        }
      }
      *(short *)(param_1 + lVar21 + 0xfa) = sVar4;
      sVar4 = *(short *)((longlong)local_e0 + (longlong)pbVar15 + 4);
      if (sVar4 < 1) {
        fVar25 = 3.0517578e-05;
      }
      else {
        fVar25 = 3.051851e-05;
      }
      uVar14 = (uint)sVar4;
      if ((*(short *)(param_1 + lVar21 + 0xfc) != sVar4) ||
         (0x21f1 < (int)((uVar14 ^ (int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f)))) {
        (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x80))
                  (*(longlong **)(param_1 + 0x4e8),DAT_1469e5ba8,
                   *(undefined4 *)(param_1 + lVar21 + 0x104),(float)(int)uVar14 * fVar25);
        uVar14 = *(uint *)(param_1 + lVar21 + 0x104);
        if ((uVar14 < 8) && ((&DAT_1468c21f8)[(int)uVar14] != '\x06')) {
          (&DAT_1468c21f8)[(int)uVar14] = 6;
          (&DAT_1468c2200)[(int)uVar14] = 1;
        }
      }
      *(short *)(param_1 + lVar21 + 0xfc) = sVar4;
      sVar4 = *(short *)((longlong)local_e0 + (longlong)pbVar15 + 6);
      if (sVar4 < 1) {
        fVar25 = 3.0517578e-05;
      }
      else {
        fVar25 = 3.051851e-05;
      }
      uVar14 = (uint)sVar4;
      if ((*(short *)(param_1 + lVar21 + 0xfe) != sVar4) ||
         (0x21f1 < (int)((uVar14 ^ (int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f)))) {
        (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x80))
                  (*(longlong **)(param_1 + 0x4e8),DAT_1469e5bb0,
                   *(undefined4 *)(param_1 + lVar21 + 0x104),(float)(int)uVar14 * fVar25);
        uVar14 = *(uint *)(param_1 + lVar21 + 0x104);
        if ((uVar14 < 8) && ((&DAT_1468c21f8)[(int)uVar14] != '\x06')) {
          (&DAT_1468c21f8)[(int)uVar14] = 6;
          (&DAT_1468c2200)[(int)uVar14] = 1;
        }
      }
      *(short *)(param_1 + lVar21 + 0xfe) = sVar4;
      bVar1 = *(byte *)((longlong)&local_e8 + (longlong)pbVar15 + 6);
      if ((param_1[lVar21 + 0x100] != bVar1) || (0x1e < bVar1)) {
        (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x80))
                  (*(longlong **)(param_1 + 0x4e8),DAT_1469e5bb8,
                   *(undefined4 *)(param_1 + lVar21 + 0x104),(float)bVar1 * 0.003921569);
        uVar14 = *(uint *)(param_1 + lVar21 + 0x104);
        if ((uVar14 < 8) && ((&DAT_1468c21f8)[(int)uVar14] != '\x06')) {
          (&DAT_1468c21f8)[(int)uVar14] = 6;
          (&DAT_1468c2200)[(int)uVar14] = 1;
        }
      }
      param_1[lVar21 + 0x100] = bVar1;
      bVar1 = *(byte *)((longlong)&local_e8 + (longlong)pbVar15 + 7);
      if ((param_1[lVar21 + 0x101] != bVar1) || (0x1e < bVar1)) {
        (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x80))
                  (*(longlong **)(param_1 + 0x4e8),DAT_1469e5bc0,
                   *(undefined4 *)(param_1 + lVar21 + 0x104));
        uVar14 = *(uint *)(param_1 + lVar21 + 0x104);
        if ((uVar14 < 8) && ((&DAT_1468c21f8)[(int)uVar14] != '\x06')) {
          (&DAT_1468c21f8)[(int)uVar14] = 6;
          (&DAT_1468c2200)[(int)uVar14] = 1;
        }
      }
      param_1[lVar21 + 0x101] = bVar1;
      QueryPerformanceCounter(&local_f0);
      lVar18 = 0;
      pdVar19 = (double *)(param_1 + lVar21 + 0x38);
      pbVar15 = local_a8 + -(longlong)pcVar17;
      lVar23 = 0x18;
      dVar10 = (double)local_f0.QuadPart * DAT_1468b02f8 + 16777216.0;
      local_108 = pbVar15;
      do {
        cVar12 = pcVar17[(longlong)pbVar15];
        if (cVar12 == *pcVar17) {
          if ((cVar12 != '\0') && (*pdVar19 <= dVar10)) {
            (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x88))
                      (*(longlong **)(param_1 + 0x4e8),*(undefined8 *)(param_1 + lVar18 + 0x428),
                       *(undefined4 *)(param_1 + lVar21 + 0x104),1);
            uVar14 = *(uint *)(param_1 + lVar21 + 0x104);
            if ((uVar14 < 8) && ((&DAT_1468c21f8)[(int)uVar14] != '\x06')) {
              (&DAT_1468c21f8)[(int)uVar14] = 6;
              (&DAT_1468c2200)[(int)uVar14] = 1;
            }
            fVar25 = *(float *)(param_1 + 0x424);
            goto LAB_1416dc5a4;
          }
        }
        else {
          lVar9 = **(longlong **)(param_1 + 0x4e8);
          if (cVar12 == '\0') {
            (**(code **)(lVar9 + 0x90))
                      (*(longlong **)(param_1 + 0x4e8),*(undefined8 *)(param_1 + lVar18 + 0x428),
                       *(undefined4 *)(param_1 + lVar21 + 0x104),0);
            uVar14 = *(uint *)(param_1 + lVar21 + 0x104);
            pbVar15 = local_108;
            if ((uVar14 < 8) && ((&DAT_1468c21f8)[(int)uVar14] != '\x06')) {
              (&DAT_1468c21f8)[(int)uVar14] = 6;
              (&DAT_1468c2200)[(int)uVar14] = 1;
            }
          }
          else {
            (**(code **)(lVar9 + 0x88))();
            uVar14 = *(uint *)(param_1 + lVar21 + 0x104);
            if ((uVar14 < 8) && ((&DAT_1468c21f8)[(int)uVar14] != '\x06')) {
              (&DAT_1468c21f8)[(int)uVar14] = 6;
              (&DAT_1468c2200)[(int)uVar14] = 1;
            }
            fVar25 = *(float *)(param_1 + 0x420);
LAB_1416dc5a4:
            *pdVar19 = (double)fVar25 + dVar10;
            pbVar15 = local_108;
          }
        }
        *pcVar17 = cVar12;
        lVar18 = lVar18 + 8;
        pcVar17 = pcVar17 + 1;
        pdVar19 = pdVar19 + 1;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      fVar25 = *(float *)(param_1 + lVar21 + 0x114);
      if (*(float *)(param_1 + lVar21 + 0x114) <= *(float *)(param_1 + lVar21 + 0x10c)) {
        fVar25 = *(float *)(param_1 + lVar21 + 0x10c);
      }
      fVar26 = *(float *)(param_1 + lVar21 + 0x118);
      if (*(float *)(param_1 + lVar21 + 0x118) <= *(float *)(param_1 + lVar21 + 0x110)) {
        fVar26 = *(float *)(param_1 + lVar21 + 0x110);
      }
      local_100 = (undefined2)(int)(fVar25 * 65535.0);
      local_fe = (undefined2)(int)(fVar26 * 65535.0);
      _guard_xfg_dispatch_icall_nop(*(undefined4 *)(param_1 + lVar21 + 0x104),&local_100);
    }
    local_f8 = local_f8 + 1;
    if (3 < local_f8) {
      *param_1 = '\0';
      return;
    }
  } while( true );
}



// FUNCTION 1416dc690 FUN_1416dc690 body=994 status=ok
// SIG undefined FUN_1416dc690(void)

void FUN_1416dc690(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  FILE *_File;
  longlong lVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  undefined2 *_Src;
  undefined2 *puVar10;
  undefined2 *local_68;
  int local_60;
  int local_5c;
  undefined2 *local_58;
  int local_50;
  int local_4c;
  longlong local_48 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469e5f64) && (_Init_thread_header(), DAT_1469e5f64 == -1)) {
    uVar4 = FCommandLine::Get();
    DAT_1469e5f60 = FParse::Param(uVar4,L"stdout");
    _Init_thread_footer();
  }
  if ((DAT_1469e5f60 == '\0') && ((byte)(param_3 - 2U) < 3)) {
    if ((*(char *)(param_1 + 0x10) != '\0') && (param_3 == '\x03')) {
      param_3 = '\x02';
    }
    _Src = (undefined2 *)0x0;
    iVar9 = 0;
    if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
      puVar3 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x80) + 8))();
      iVar9 = *(int *)(puVar3 + 1);
      local_58 = (undefined2 *)*puVar3;
      *puVar3 = 0;
      local_50 = *(int *)(puVar3 + 1);
      local_4c = *(int *)((longlong)puVar3 + 0xc);
      puVar3[1] = 0;
      iVar8 = local_50;
      if (local_4c < (int)((4 - (uint)(iVar9 != 0)) + local_50)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
        iVar8 = local_50;
      }
      local_50 = (4 - (uint)(iVar8 != 0)) + iVar8;
      if (local_4c < local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar8);
      }
      iVar9 = local_50;
      _Src = local_58;
      lVar6 = (longlong)iVar8 - (ulonglong)(iVar8 != 0);
      *(undefined4 *)(local_58 + lVar6) = 0x3a0020;
      local_58[lVar6 + 2] = 0x20;
      local_58[lVar6 + 3] = 0;
      if (local_68 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    puVar3 = (undefined8 *)FUN_1416704c0(local_48,param_3,param_4,param_2,0,0xbff0000000000000);
    if (iVar9 < 2) {
      puVar10 = (undefined2 *)*puVar3;
      *puVar3 = 0;
      local_60 = *(int *)(puVar3 + 1);
      local_5c = *(int *)((longlong)puVar3 + 0xc);
      puVar3[1] = 0;
    }
    else {
      iVar8 = *(int *)(puVar3 + 1) + -1;
      if (*(int *)(puVar3 + 1) == 0) {
        iVar8 = 0;
      }
      if ((iVar9 != 0) || (iVar2 = 1, iVar8 == 0)) {
        iVar2 = 0;
      }
      local_58 = (undefined2 *)0x0;
      puVar10 = (undefined2 *)0x0;
      local_50 = iVar9;
      if ((iVar9 == 0) && (iVar2 + iVar8 == 0)) {
        local_4c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,iVar9 + iVar2 + iVar8,0);
        puVar10 = local_58;
        _guard_xfg_dispatch_icall_nop(local_58,_Src,(longlong)iVar9 * 2);
      }
      iVar9 = local_50;
      local_68 = (undefined2 *)*puVar3;
      iVar2 = local_50;
      if (iVar8 != 0) {
        lVar6 = (longlong)local_50;
        local_50 = local_50 + (uint)(local_50 == 0) + iVar8;
        if (local_4c < local_50) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar9);
          puVar10 = local_58;
        }
        iVar2 = local_50;
        _guard_xfg_dispatch_icall_nop
                  (puVar10 + (lVar6 - (ulonglong)(iVar9 != 0)),local_68,(longlong)iVar8 * 2);
        (puVar10 + (lVar6 - (ulonglong)(iVar9 != 0)))[iVar8] = 0;
      }
      local_5c = local_4c;
      local_60 = iVar2;
    }
    local_68 = puVar10;
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (DAT_1468b616c != '\0') {
      if (param_3 == '\x02') {
        FFeedbackContext::AddError(param_1,&local_68);
        puVar10 = local_68;
      }
      else if (param_3 == '\x03') {
        FFeedbackContext::AddWarning(param_1,&local_68);
        puVar10 = local_68;
      }
    }
    puVar7 = &DAT_143f3eda8;
    if (local_60 != 0) {
      puVar7 = puVar10;
    }
    wprintf(L"%ls",puVar7);
    wprintf(L"%ls",&DAT_1440a3e48);
    if (puVar10 != (undefined2 *)0x0) {
      FMemory::Free(puVar10);
    }
    if (_Src != (undefined2 *)0x0) {
      FMemory::Free(_Src);
    }
  }
  uVar4 = FUN_141672640();
  cVar1 = FOutputDeviceRedirector::IsRedirectingTo(uVar4,param_1);
  if (cVar1 == '\0') {
    plVar5 = (longlong *)FUN_141672640();
    (**(code **)(*plVar5 + 0x10))(plVar5,param_2,param_3,param_4);
  }
  plVar5 = *(longlong **)(param_1 + 0x88);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5,param_2,param_3,param_4);
  }
  _File = (FILE *)__acrt_iob_func(1);
                    /* WARNING: Could not recover jumptable at 0x0001416dca27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fflush(_File);
  return;
}



// FUNCTION 1416dca80 Serialize body=505 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FWindowsConsoleOutputDevice::Serialize
               (longlong *param_1,short *param_2,char param_3,undefined8 param_4,double param_5)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined1 auStackY_898 [32];
  LARGE_INTEGER local_868;
  longlong local_860 [3];
  short local_848 [1024];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStackY_898;
  if (param_1[4] != 0) {
    if (param_5 == -1.0) {
      QueryPerformanceCounter(&local_868);
    }
    if ((DAT_1468c2174 == '\0') || (DAT_1469e64b4 != '\0')) {
      if (param_3 == '@') {
        SetColor(param_1,param_2);
        *(bool *)(param_1 + 5) = *param_2 != 0;
      }
      else {
        bVar1 = false;
        if (((char)param_1[5] == '\0') && ((param_3 == '\x02' || (param_3 == '\x03')))) {
          SetColor(param_1);
          bVar1 = true;
        }
        ::_guard_xfg_dispatch_icall_nop(local_848,0,0x800);
        puVar2 = (undefined8 *)FUN_1416704c0(local_860,param_3,param_4,param_2);
        if (*(int *)(puVar2 + 1) == 0) {
          puVar3 = &DAT_143f3eda8;
        }
        else {
          puVar3 = (undefined2 *)*puVar2;
        }
        TCString<wchar_t>::SprintfImpl(local_848,L"%s%s",puVar3,&DAT_144ce692c);
        if (local_860[0] != 0) {
          FMemory::Free();
        }
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (local_848[lVar4] != 0);
        WriteConsoleW((HANDLE)param_1[4],local_848,(DWORD)lVar4,(LPDWORD)&local_868.QuadPart,
                      (LPVOID)0x0);
        if (bVar1) {
          SetColor(param_1,&DAT_144ce4c8c);
        }
      }
    }
    else {
      DAT_1469e64b4 = 1;
      (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,param_4);
      DAT_1469e64b4 = '\0';
    }
  }
  return;
}



// FUNCTION 1416dcc80 FUN_1416dcc80 body=90 status=ok
// SIG undefined FUN_1416dcc80(void)

void FUN_1416dcc80(longlong *param_1)

{
  longlong *plVar1;
  
  if (DAT_1468c2174 == '\0') {
    GetLastError();
    DAT_1468c2174 = '\x01';
  }
  plVar1 = (longlong *)FUN_141672640();
  (**(code **)(*plVar1 + 0x48))(plVar1);
  if (DAT_1468c217d != '\0') {
    FUN_1416a6710(1);
    return;
  }
  (**(code **)(*param_1 + 0x40))(param_1);
  FUN_1416a8180(1);
  return;
}



// FUNCTION 1416dcce0 SetCapture body=46 status=ok
// SIG HWND SetCapture(HWND hWnd)

HWND __stdcall FWindowsApplication::SetCapture(HWND hWnd)

{
  BOOL BVar1;
  undefined8 uVar2;
  HWND pHVar3;
  undefined4 extraout_var;
  longlong *in_RDX;
  
  if ((longlong *)*in_RDX != (longlong *)0x0) {
    uVar2 = (**(code **)(*(longlong *)*in_RDX + 0xc0))();
                    /* WARNING: Could not recover jumptable at 0x0001416dccfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pHVar3 = (HWND)::SetCapture(uVar2);
    return pHVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001416dcd07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReleaseCapture();
  return (HWND)CONCAT44(extraout_var,BVar1);
}



// FUNCTION 1416dcd10 SetColor body=400 status=ok
// SIG undefined SetColor(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FWindowsConsoleOutputDevice::SetColor(longlong param_1,wchar_t *param_2)

{
  wint_t wVar1;
  wint_t wVar2;
  wchar_t *pwVar3;
  WORD wAttributes;
  wint_t *pwVar4;
  wchar_t wVar5;
  wchar_t wVar6;
  undefined1 auStack_68 [40];
  wchar_t local_40 [2];
  short sStack_3c;
  short sStack_3a;
  undefined8 local_38;
  undefined2 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  pwVar4 = &DAT_144ce513c;
  do {
    wVar1 = *(wint_t *)((longlong)(param_2 + -0xa267289e) + (longlong)pwVar4);
    if ((wVar1 == 0) && (*pwVar4 == 0)) goto LAB_1416dcd81;
    if (wVar1 != *pwVar4) {
      wVar1 = towlower(wVar1);
      wVar2 = towlower(*pwVar4);
      if (wVar1 != wVar2) {
        if (wVar1 == wVar2) {
LAB_1416dcd81:
          wAttributes = 7;
        }
        else {
          _local_40 = 0;
          local_38 = 0;
          local_30 = 0;
          wcsncpy(local_40,param_2,8);
          pwVar3 = local_40;
          local_30 = 0;
          wVar6 = L'\0';
          wVar5 = local_40[0];
          if (local_40[0] != L'\0') {
            do {
              *pwVar3 = wVar5 + L'￐';
              pwVar3 = pwVar3 + 1;
              wVar5 = *pwVar3;
            } while (*pwVar3 != L'\0');
            wVar6 = local_40[0];
          }
          wAttributes = -(ushort)(local_38._6_2_ != 0) & 0x80 | (ushort)(sStack_3c != 0) |
                        -(ushort)(local_40[1] != 0) & 2 | -(ushort)(wVar6 != L'\0') & 4 |
                        -(ushort)((short)local_38 != 0) & 0x40 | -(ushort)(sStack_3a != 0) & 8 |
                        -(ushort)(local_38._2_2_ != 0) & 0x20 |
                        -(ushort)(local_38._4_2_ != 0) & 0x10;
        }
        SetConsoleTextAttribute(*(HANDLE *)(param_1 + 0x20),wAttributes);
        return;
      }
    }
    pwVar4 = pwVar4 + 1;
  } while( true );
}



// FUNCTION 1416dcea0 FUN_1416dcea0 body=113 status=ok
// SIG undefined FUN_1416dcea0(void)

void FUN_1416dcea0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  
  if (((DAT_1468b5a27 == '\0') || (DAT_1468b5a74 != '\0')) && (*(char *)(param_1 + 0x14) != '\0')) {
    for (iVar2 = 0; (-1 < iVar2 && (iVar2 < *(int *)(param_1 + 0x70))); iVar2 = iVar2 + 1) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x68) + (longlong)iVar2 * 0x10);
      (**(code **)(*plVar1 + 0x38))(plVar1,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 1416dcf20 FUN_1416dcf20 body=131 status=ok
// SIG undefined FUN_1416dcf20(void)

void FUN_1416dcf20(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (((DAT_1468b5a27 == '\0') || (DAT_1468b5a74 != '\0')) && (*(char *)(param_1 + 0x14) != '\0')) {
    for (iVar2 = 0; (-1 < iVar2 && (iVar2 < *(int *)(param_1 + 0x70))); iVar2 = iVar2 + 1) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x68) + (longlong)iVar2 * 0x10);
      (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_3,param_4);
    }
  }
  return;
}



// FUNCTION 1416dcfb0 FUN_1416dcfb0 body=182 status=ok
// SIG undefined FUN_1416dcfb0(void)

void FUN_1416dcfb0(longlong param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  
  if (((DAT_1468b5a27 == '\0') || (DAT_1468b5a74 != '\0')) && (*(char *)(param_1 + 0x14) != '\0')) {
    if (param_2 < 4) {
      if (*(char *)((longlong)(int)param_2 * 0x100 + 0x108 + *(longlong *)(param_1 + 0x58)) != '\0')
      {
        uVar3 = param_3[1];
        uVar4 = param_3[2];
        uVar5 = param_3[3];
        puVar1 = (undefined4 *)
                 ((longlong)(int)param_2 * 0x100 + 0x10c + *(longlong *)(param_1 + 0x58));
        *puVar1 = *param_3;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
      }
    }
    for (iVar7 = 0; (-1 < iVar7 && (iVar7 < *(int *)(param_1 + 0x70))); iVar7 = iVar7 + 1) {
      cVar6 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x68) + (longlong)iVar7 * 0x10) +
                          0x48))();
      if (cVar6 != '\0') {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x68) + (longlong)iVar7 * 0x10);
        (**(code **)(*plVar2 + 0x30))(plVar2,param_2,param_3);
      }
    }
  }
  return;
}



// FUNCTION 1416dd070 FUN_1416dd070 body=147 status=ok
// SIG undefined FUN_1416dd070(void)

void FUN_1416dd070(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  
  if (((DAT_1468b5a27 == '\0') || (DAT_1468b5a74 != '\0')) && (*(char *)(param_1 + 0x14) != '\0')) {
    for (iVar2 = 0; (-1 < iVar2 && (iVar2 < *(int *)(param_1 + 0x70))); iVar2 = iVar2 + 1) {
      puVar1 = (undefined8 *)
               (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x68) + (longlong)iVar2 * 0x10)
                           + 0x40))();
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,param_2,param_3,param_4);
      }
    }
  }
  return;
}



// FUNCTION 1416dd110 SetHighDPIMode body=286 status=ok
// SIG undefined SetHighDPIMode(void)

void FWindowsPlatformApplicationMisc::SetHighDPIMode(void)

{
  char cVar1;
  HMODULE pHVar2;
  code *pcVar3;
  code *pcVar4;
  int local_res8 [2];
  
  if (DAT_1464b0268 != 0) {
    pHVar2 = (HMODULE)FWindowsPlatformProcess::GetDllHandle(L"shcore.dll");
    if (pHVar2 != (HMODULE)0x0) {
      pcVar4 = (code *)FWindowsPlatformProcess::GetDllExport(pHVar2,L"SetProcessDpiAwareness");
      DAT_1469e5b80 = FWindowsPlatformProcess::GetDllExport(pHVar2,L"GetDpiForMonitor");
      pcVar3 = (code *)FWindowsPlatformProcess::GetDllExport(pHVar2,L"GetProcessDpiAwareness");
      if ((((pcVar4 != (code *)0x0) && (pcVar3 != (code *)0x0)) && (DAT_1468b616c == '\0')) &&
         (cVar1 = FUN_140612c50(), cVar1 == '\0')) {
        local_res8[0] = 0;
        (*pcVar3)(0,local_res8);
        if (local_res8[0] != 2) {
          (*pcVar4)(2);
        }
      }
      FWindowsPlatformProcess::FreeDllHandle(pHVar2);
      return;
    }
    pHVar2 = (HMODULE)FWindowsPlatformProcess::GetDllHandle(L"user32.dll");
    if (pHVar2 != (HMODULE)0x0) {
      pcVar4 = (code *)FWindowsPlatformProcess::GetDllExport(pHVar2,L"SetProcessDPIAware");
      if (((pcVar4 != (code *)0x0) && (DAT_1468b616c == '\0')) &&
         (cVar1 = FUN_140612c50(), cVar1 == '\0')) {
        (*pcVar4)();
      }
      FWindowsPlatformProcess::FreeDllHandle(pHVar2);
    }
  }
  return;
}



// FUNCTION 1416dd230 SetHighPrecisionMouseMode body=95 status=ok
// SIG undefined SetHighPrecisionMouseMode(void)

void FWindowsApplication::SetHighPrecisionMouseMode(longlong param_1,char param_2,longlong *param_3)

{
  DWORD DVar1;
  RAWINPUTDEVICE local_18;
  
  local_18.hwndTarget = (HWND)0x0;
  *(char *)(param_1 + 0x80) = param_2;
  DVar1 = 1;
  if (param_2 != '\0') {
    DVar1 = 0;
    if ((longlong *)*param_3 != (longlong *)0x0) {
      local_18.hwndTarget = (HWND)(**(code **)(*(longlong *)*param_3 + 0xc0))();
    }
  }
  local_18.usUsagePage = 1;
  local_18.usUsage = 2;
  local_18.dwFlags = DVar1;
  RegisterRawInputDevices(&local_18,1,0x10);
  return;
}



// FUNCTION 1416dd290 FUN_1416dd290 body=525 status=ok
// SIG undefined FUN_1416dd290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416dd290(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  puVar7 = (undefined8 *)(param_1 + 0x18);
  uStack_70 = (longlong *)param_2[1];
  local_78 = *param_2;
  if (uStack_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_70 + 1) = (int)uStack_70[1] + 1;
    UNLOCK();
  }
  if (&local_78 != puVar7) {
    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    uVar4 = *puVar7;
    plVar3 = *(longlong **)(param_1 + 0x20);
    local_48 = (undefined4)local_78;
    uStack_44 = local_78._4_4_;
    uStack_40 = (undefined4)uStack_70;
    uStack_3c = uStack_70._4_4_;
    *(undefined4 *)puVar7 = (undefined4)local_78;
    *(undefined4 *)(param_1 + 0x1c) = local_78._4_4_;
    *(undefined4 *)(param_1 + 0x20) = (undefined4)uStack_70;
    *(undefined4 *)(param_1 + 0x24) = uStack_70._4_4_;
    local_78 = uVar4;
    uStack_70 = plVar3;
  }
  plVar3 = uStack_70;
  if (uStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_70 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*uStack_70)(uStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*uStack_70 + 8))(uStack_70,1);
      }
    }
  }
  plVar3 = (longlong *)param_2[1];
  lVar5 = *(longlong *)(param_1 + 200);
  uVar4 = *param_2;
  puVar7 = (undefined8 *)(lVar5 + 0x4e8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_68 = uVar4;
  plStack_60 = plVar3;
  if (&local_68 != puVar7) {
    local_68 = *puVar7;
    plStack_60 = *(longlong **)(lVar5 + 0x4f0);
    *puVar7 = uVar4;
    *(longlong **)(lVar5 + 0x4f0) = plVar3;
    local_38 = uVar4;
    plStack_30 = plVar3;
  }
  plVar3 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146863b48) {
    _Init_thread_header(&DAT_146863b48);
    if (DAT_146863b48 == -1) {
      FName::FName(&DAT_146863b40,L"InputDevice",1);
      _Init_thread_footer(&DAT_146863b48);
    }
  }
  uVar4 = DAT_146863b40;
  uVar6 = FUN_141593110();
  IModularFeatures::GetModularFeatureImplementations<IInputDeviceModule>(uVar6,local_58,uVar4);
  for (iVar8 = 0; (-1 < iVar8 && (iVar8 < *(int *)(param_1 + 0xe0))); iVar8 = iVar8 + 1) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar8 * 0x10);
    (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
  }
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1416dd4a0 SetMessageHandler body=188 status=ok
// SIG undefined SetMessageHandler(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void GenericApplication::SetMessageHandler(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  puVar1 = (undefined8 *)(param_1 + 0x18);
  uStack_30 = (longlong *)param_2[1];
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
  }
  if (&local_38 != puVar1) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar5 = *puVar1;
    plVar6 = *(longlong **)(param_1 + 0x20);
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)puVar1 = (undefined4)local_38;
    *(undefined4 *)(param_1 + 0x1c) = local_38._4_4_;
    *(undefined4 *)(param_1 + 0x20) = (undefined4)uStack_30;
    *(undefined4 *)(param_1 + 0x24) = uStack_30._4_4_;
    local_38 = uVar5;
    uStack_30 = plVar6;
  }
  plVar6 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_30 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_30 + 8))(uStack_30,1);
      }
    }
  }
  return;
}



// FUNCTION 1416dd590 SetSelection body=205 status=ok
// SIG undefined SetSelection(void)

undefined8 FTextStoreACP::SetSelection(longlong param_1,uint param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (((byte)*(undefined4 *)(param_1 + 0x38) & 6) != 6) {
    return 0x80040201;
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
  uVar4 = (ulonglong)param_2;
  if (param_2 != 0) {
    uVar4 = 1;
  }
  uVar3 = 0;
  piVar2 = param_3;
  if ((uint)uVar4 != 0) {
    do {
      if ((((*piVar2 < 0) || (iVar1 < *piVar2)) || (piVar2[1] < 0)) || (iVar1 < piVar2[1])) {
        return 0x80040200;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 4;
    } while (uVar3 < (uint)uVar4);
    do {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))
                (*(longlong **)(param_1 + 0x18),*param_3,param_3[1] - *param_3,1);
      param_3 = param_3 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return 0;
}



// FUNCTION 1416dd660 SetText body=213 status=ok
// SIG undefined SetText(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FTextStoreACP::SetText
          (longlong *param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
          undefined4 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  int local_40;
  int local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (((byte)(int)param_1[7] & 6) == 6) {
    iVar1 = (**(code **)(*(longlong *)param_1[3] + 0x18))();
    if ((((param_3 < 0) || (iVar1 < param_3)) || (param_4 < 0)) || (iVar1 < param_4)) {
      uVar2 = 0x80040200;
    }
    else {
      local_38 = 2;
      local_40 = param_3;
      local_3c = param_4;
      (**(code **)(*param_1 + 0x48))(param_1,1,&local_40);
      local_60 = local_48;
      local_58 = param_7;
      local_68 = local_44;
      (**(code **)(*param_1 + 0x80))(param_1,0,param_5,param_6);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0x80040201;
  }
  return uVar2;
}



// FUNCTION 1416dd7a0 SetWindowFocus body=42 status=ok
// SIG undefined SetWindowFocus(void)

void FWindowsWindow::SetWindowFocus(longlong param_1)

{
  HWND pHVar1;
  HWND pHVar2;
  
  pHVar1 = *(HWND *)(param_1 + 0x28);
  pHVar2 = GetFocus();
  if (pHVar2 != pHVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001416dd7bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetFocus(pHVar1);
    return;
  }
  return;
}



// FUNCTION 1416dd7d0 FUN_1416dd7d0 body=543 status=ok
// SIG undefined FUN_1416dd7d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416dd7d0(longlong *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  HWND hWnd;
  int iVar3;
  uint uVar4;
  int iVar5;
  HMONITOR hMonitor;
  uint uVar6;
  uint uVar7;
  undefined1 auStackY_98 [32];
  tagRECT local_58;
  tagMONITORINFO local_48;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStackY_98;
  uVar1 = *(uint *)(param_1 + 7);
  if (param_2 != uVar1) {
    *(uint *)(param_1 + 7) = param_2;
    uVar4 = GetWindowLongW((HWND)param_1[5],-0x10);
    lVar2 = param_1[1];
    if (*(char *)(lVar2 + 0x25) == '\0') {
      uVar7 = 0x80c80000;
    }
    else {
      uVar7 = 0xc90000;
      if (*(char *)(lVar2 + 0x23) == '\0') {
        uVar7 = 0xc80000;
      }
      uVar6 = uVar7 | 0x20000;
      if (*(char *)(lVar2 + 0x22) == '\0') {
        uVar6 = uVar7;
      }
      uVar7 = uVar6 | 0x40000;
      if (*(char *)(lVar2 + 0x26) == '\0') {
        uVar7 = uVar6;
      }
    }
    if (param_2 < 2) {
      DAT_1468c21f5 = param_2 == 0;
      FUN_1416a8ae0();
      if (uVar1 == 2) {
        hWnd = (HWND)param_1[5];
        ((WINDOWPLACEMENT *)(param_1 + 8))->length = 0x2c;
        GetWindowPlacement(hWnd,(WINDOWPLACEMENT *)(param_1 + 8));
      }
      SetWindowLongW((HWND)param_1[5],-0x10,~uVar7 & uVar4 | 0x80000000);
      SetWindowPos((HWND)param_1[5],(HWND)0x0,0,0,0,0,0x27);
      if (param_2 != 0) {
        ShowWindow((HWND)param_1[5],9);
      }
      GetClientRect((HWND)param_1[5],&local_58);
      hMonitor = MonitorFromWindow((HWND)param_1[5],(param_2 != 0) + 1);
      local_48.cbSize = 0x28;
      GetMonitorInfoW(hMonitor,&local_48);
      iVar5 = local_48.rcMonitor.right - local_48.rcMonitor.left;
      iVar3 = iVar5;
      if ((param_2 == 0) &&
         (iVar3 = local_58.right - local_58.left, iVar5 <= local_58.right - local_58.left)) {
        iVar3 = iVar5;
      }
      (**(code **)(*param_1 + 8))(param_1,local_48.rcMonitor.left,local_48.rcMonitor.top,iVar3);
    }
    else {
      DAT_1468c21f5 = 0;
      FUN_1416a8ae0(0);
      SetWindowLongW((HWND)param_1[5],-0x10,uVar4 & 0x7fffffff | uVar7);
      SetWindowPos((HWND)param_1[5],(HWND)0x0,0,0,0,0,0x27);
      if ((int)param_1[8] != 0) {
        SetWindowPlacement((HWND)param_1[5],(WINDOWPLACEMENT *)(param_1 + 8));
      }
    }
  }
  return;
}



// FUNCTION 1416dd9f0 FUN_1416dd9f0 body=1291 status=ok
// SIG undefined FUN_1416dd9f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1416dd9f0(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  BOOL BVar5;
  undefined1 *hConsoleOutput;
  HWND pHVar6;
  undefined8 uVar7;
  undefined1 auStackY_118 [32];
  int local_d8;
  int local_d4;
  COORD local_d0;
  short sStack_cc;
  SHORT SStack_ca;
  undefined4 local_c8;
  undefined4 local_c4 [3];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  tagRECT local_58;
  _CONSOLE_SCREEN_BUFFER_INFO local_48;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStackY_118;
  if (param_2 == '\0') {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FWindowsConsoleOutputDevice::SaveToINI();
      *(undefined8 *)(param_1 + 0x20) = 0;
      FreeConsole();
      *(undefined1 *)(param_1 + 0x29) = 0;
    }
  }
  else if (*(longlong *)(param_1 + 0x20) == 0) {
    BVar5 = AllocConsole();
    if (BVar5 == 0) {
      *(undefined1 *)(param_1 + 0x29) = 1;
    }
    hConsoleOutput = GetStdHandle(DAT_1464b026c);
    *(undefined1 **)(param_1 + 0x20) = hConsoleOutput;
    if (hConsoleOutput != &DAT_ffffffffffffffff) {
      cVar2 = '\0';
      local_c4[0] = 4000;
      cVar3 = '\0';
      local_d0.X = 0xa0;
      local_d0.Y = 4000;
      local_c8 = 0xa0;
      local_d4 = 0;
      local_d8 = 0;
      if (DAT_1468b6148 != 0) {
        FConfigCacheIni::GetInt(DAT_1468b6148,L"DebugWindows",L"ConsoleWidth",&local_c8);
        FConfigCacheIni::GetInt(DAT_1468b6148,L"DebugWindows",L"ConsoleHeight",local_c4);
        cVar2 = FConfigCacheIni::GetInt(DAT_1468b6148,L"DebugWindows",L"ConsoleX",&local_d4);
        cVar3 = FConfigCacheIni::GetInt(DAT_1468b6148,L"DebugWindows",L"ConsoleY",&local_d8);
        hConsoleOutput = *(undefined1 **)(param_1 + 0x20);
        local_d0.Y = (SHORT)local_c4[0];
        local_d0.X = (SHORT)local_c8;
      }
      SetConsoleScreenBufferSize(hConsoleOutput,local_d0);
      BVar5 = GetConsoleScreenBufferInfo(*(HANDLE *)(param_1 + 0x20),&local_48);
      if (BVar5 != 0) {
        SStack_ca = local_48.srWindow.Bottom;
        local_d0 = local_48.srWindow._0_4_;
        sStack_cc = local_48.dwSize.X + -1;
        SetConsoleWindowInfo(*(HANDLE *)(param_1 + 0x20),1,(SMALL_RECT *)&local_d0);
      }
      pHVar6 = GetConsoleWindow();
      GetWindowRect(pHVar6,&local_58);
      uVar7 = FCommandLine::Get();
      cVar4 = FParse::Value(uVar7,L"ConsoleX=",&local_d4);
      if ((cVar4 == '\0') && (cVar2 == '\0')) {
        local_d4 = local_58.left;
      }
      uVar7 = FCommandLine::Get();
      cVar2 = FParse::Value(uVar7,L"ConsoleY=",&local_d8);
      if ((cVar2 == '\0') && (cVar3 == '\0')) {
        local_d8 = local_58.top;
      }
      local_b0 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_a8 = 0;
      FDisplayMetrics::RebuildDisplayMetrics(local_b8);
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if ((*(int *)(lVar1 + 0x38) < DAT_1469e6488) &&
         (_Init_thread_header(&DAT_1469e6488), DAT_1469e6488 == -1)) {
        DAT_1469e6484 = local_58.right - local_58.left;
        _Init_thread_footer(&DAT_1469e6488);
      }
      if ((*(int *)(lVar1 + 0x38) < DAT_1469e6490) &&
         (_Init_thread_header(&DAT_1469e6490), DAT_1469e6490 == -1)) {
        DAT_1469e648c = local_58.bottom - local_58.top;
        _Init_thread_footer(&DAT_1469e6490);
      }
      if ((*(int *)(lVar1 + 0x38) < DAT_1469e6498) &&
         (_Init_thread_header(&DAT_1469e6498), DAT_1469e6498 == -1)) {
        DAT_1469e6494 = local_88 - local_90;
        _Init_thread_footer(&DAT_1469e6498);
      }
      if ((*(int *)(lVar1 + 0x38) < DAT_1469e64a0) &&
         (_Init_thread_header(&DAT_1469e64a0), DAT_1469e64a0 == -1)) {
        DAT_1469e649c = local_84 - local_8c;
        _Init_thread_footer(&DAT_1469e64a0);
      }
      if ((*(int *)(lVar1 + 0x38) < DAT_1469e64a8) &&
         (_Init_thread_header(&DAT_1469e64a8), DAT_1469e64a8 == -1)) {
        _DAT_1469e64a4 = DAT_1469e6494 / 2;
        if (DAT_1469e6484 / 2 <= DAT_1469e6494 / 2) {
          _DAT_1469e64a4 = DAT_1469e6484 / 2;
        }
        if (_DAT_1469e64a4 < 0x33) {
          _DAT_1469e64a4 = 0x32;
        }
        _Init_thread_footer(&DAT_1469e64a8);
      }
      if ((*(int *)(lVar1 + 0x38) < DAT_1469e64b0) &&
         (_Init_thread_header(&DAT_1469e64b0), DAT_1469e64b0 == -1)) {
        _DAT_1469e64ac = DAT_1469e649c / 2;
        if (DAT_1469e648c / 2 <= DAT_1469e649c / 2) {
          _DAT_1469e64ac = DAT_1469e648c / 2;
        }
        if (_DAT_1469e64ac < 0x33) {
          _DAT_1469e64ac = 0x32;
        }
        _Init_thread_footer(&DAT_1469e64b0);
      }
      if (local_90 <= local_d4) {
        local_90 = local_d4;
      }
      local_d4 = local_88 - _DAT_1469e64a4;
      if (local_90 <= local_88 - _DAT_1469e64a4) {
        local_d4 = local_90;
      }
      if (local_8c <= local_d8) {
        local_8c = local_d8;
      }
      local_d8 = local_84 - _DAT_1469e64ac;
      if (local_8c <= local_84 - _DAT_1469e64ac) {
        local_d8 = local_8c;
      }
      pHVar6 = GetConsoleWindow();
      SetWindowPos(pHVar6,(HWND)0x0,local_d4,local_d8,0,0,0x405);
      FWindowsPlatformMisc::SetGracefulTerminationHandler();
      FUN_141189610(&local_b0);
    }
  }
  return;
}



// FUNCTION 1416ddf00 Show body=53 status=ok
// SIG undefined Show(void)

void FWindowsCursor::Show(undefined8 param_1,char param_2)

{
  int iVar1;
  
  if (param_2 == '\0') {
    do {
      iVar1 = ShowCursor(0);
    } while (-1 < iVar1);
    return;
  }
  do {
    iVar1 = ShowCursor(1);
  } while (iVar1 < 0);
  return;
}



// FUNCTION 1416ddf40 Show body=658 status=ok
// SIG undefined Show(void)

void FWindowsPlatformSplash::Show(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  undefined2 *puVar8;
  uint uVar9;
  longlong lVar10;
  char local_res8 [8];
  DWORD local_res10 [2];
  longlong local_58;
  ulonglong local_50;
  void *local_48;
  ulonglong local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if (DAT_1469e5ee8 == (HANDLE)0x0) {
    uVar5 = FCommandLine::Get();
    cVar4 = FParse::Param(uVar5,L"NOSPLASH");
    if (cVar4 != '\x01') {
      lVar10 = -1;
      local_58 = 0;
      local_50 = 0;
      if (DAT_146299580 != 0) {
        do {
          lVar10 = lVar10 + 1;
        } while ((&DAT_146299580)[lVar10] != 0);
        uVar9 = (int)lVar10 + 1;
        local_50 = (ulonglong)uVar9;
        if (0 < (int)uVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
        }
        FGenericPlatformString::Memcpy(local_58,&DAT_146299580,(longlong)(int)uVar9 * 2);
      }
      FText::FromString(local_38,&local_58);
      if (local_58 != 0) {
        FMemory::Free();
      }
      cVar4 = FText::IsEmpty(local_38);
      local_48 = (void *)0x0;
      local_40 = 0;
      pwVar7 = L"Splash";
      if (cVar4 != '\0') {
        pwVar7 = L"SplashDefault";
      }
      cVar4 = FGenericPlatformSplash::GetSplashPath(pwVar7,&local_48,local_res8);
      _Src = local_48;
      if (cVar4 == '\x01') {
        if (local_res8[0] == '\0') {
          puVar6 = (undefined8 *)FText::ToString(local_38);
          if (*(int *)(puVar6 + 1) == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = (undefined2 *)*puVar6;
          }
          StartSetSplashText(3,puVar8);
        }
        DAT_1469e5f00 =
             CreateWindowExW(0,L"STATIC",L"SplashScreenGuard",0,0,0,0,0,(HWND)0xfffffffffffffffd,
                             (HMENU)0x0,DAT_1469e4218,(LPVOID)0x0);
        if (DAT_1469e5f00 != (HWND)0x0) {
          ShowWindow(DAT_1469e5f00,5);
        }
        lVar10 = (longlong)(int)local_40;
        DAT_1469e5e40 = (int)local_40;
        if (((int)local_40 == 0) && (DAT_1469e5e44 == 0)) {
          DAT_1469e5e44 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&DAT_1469e5e38,local_40 & 0xffffffff);
          ::_guard_xfg_dispatch_icall_nop(DAT_1469e5e38,_Src,lVar10 * 2);
        }
        local_res10[0] = 0;
        DAT_1469e5ee8 =
             CreateThread((LPSECURITY_ATTRIBUTES)0x0,0x20000,StartSplashScreenThread,(LPVOID)0x0,
                          0x10000,local_res10);
      }
      if (_Src != (void *)0x0) {
        FMemory::Free(_Src);
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
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
    }
  }
  return;
}



// FUNCTION 1416de270 FUN_1416de270 body=236 status=ok
// SIG undefined FUN_1416de270(void)

void FUN_1416de270(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  FUN_1416a8ae0(0);
  SystemParametersInfoW(0x3b,8,(PVOID)(param_1 + 400),0);
  SystemParametersInfoW(0x35,8,(PVOID)(param_1 + 0x198),0);
  SystemParametersInfoW(0x33,0x18,(PVOID)(param_1 + 0x1a0),0);
  FConfigCacheIni::EmptySection(DAT_1468b6148,L"WindowsApplication.Accessibility",&DAT_1468e2360);
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x180) != &local_18) {
    *(undefined8 *)(param_1 + 0x180) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x188,&local_10);
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
    }
  }
  return;
}



// FUNCTION 1416de360 FUN_1416de360 body=917 status=ok
// SIG undefined FUN_1416de360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

LRESULT FUN_1416de360(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  char cVar1;
  BOOL BVar2;
  LRESULT LVar3;
  HDC hdc;
  longlong lVar4;
  undefined8 *puVar5;
  UINT align;
  COLORREF color;
  HGDIOBJ h;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  LPCWSTR pWVar9;
  int *piVar10;
  longlong lVar11;
  int iVar12;
  int c;
  undefined1 auStackY_128 [32];
  uint local_d8;
  tagRECT local_c0;
  tagPAINTSTRUCT local_a8;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStackY_128;
  if (param_2 == 2) {
    PostQuitMessage(0);
  }
  else {
    if (param_2 != 0xf) {
      LVar3 = DefWindowProcW(param_1,param_2,param_3,param_4);
      return LVar3;
    }
    hdc = BeginPaint(param_1,&local_a8);
    DrawStateW(hdc,(HBRUSH)0x0,(DRAWSTATEPROC)0x0,DAT_1469e5ef0,0,0,0,0,0,4);
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e5ec0);
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e5ec0);
    }
    local_d8 = 0;
    piVar10 = &DAT_1469e5f10;
    do {
      puVar8 = &DAT_1469e5e60 + (longlong)(int)local_d8 * 0x18;
      cVar1 = FText::IsEmpty(puVar8);
      if (cVar1 == '\0') {
        h = DAT_1469e5f50;
        if ((local_d8 < 2) || (h = DAT_1469e5f08, local_d8 != 3)) {
          SelectObject(hdc,h);
          if (local_d8 == 3) {
            align = 2;
          }
          else {
            align = 0;
          }
        }
        else {
          SelectObject(hdc,DAT_1469e5f58);
          align = 2;
        }
        SetTextAlign(hdc,align);
        SetBkColor(hdc,0);
        SetBkMode(hdc,1);
        GetClientRect(param_1,&local_c0);
        iVar7 = -2;
        lVar11 = 8;
        do {
          iVar12 = 0;
          iVar6 = iVar12;
          switch(iVar7) {
          case 0:
            iVar12 = -1;
            iVar6 = -1;
            break;
          case 1:
            iVar6 = -1;
            break;
          case 2:
            iVar6 = -1;
            iVar12 = 1;
            break;
          case 3:
            iVar12 = 1;
            break;
          case 4:
            iVar6 = 1;
            iVar12 = 1;
            break;
          case 5:
            iVar6 = 1;
            iVar12 = 0;
            break;
          case 6:
            iVar6 = 1;
            iVar12 = -1;
            break;
          default:
            iVar12 = -1;
          }
          SetTextColor(hdc,0);
          lVar4 = FText::ToString(puVar8);
          c = *(int *)(lVar4 + 8) + -1;
          if (*(int *)(lVar4 + 8) == 0) {
            c = 0;
          }
          puVar5 = (undefined8 *)FText::ToString(puVar8);
          if (*(int *)(puVar5 + 1) == 0) {
            pWVar9 = L"";
          }
          else {
            pWVar9 = (LPCWSTR)*puVar5;
          }
          TextOutW(hdc,*piVar10 + iVar12,piVar10[1] + iVar6,pWVar9,c);
          iVar7 = iVar7 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        if (local_d8 == 0) {
          color = 0xc8c8c8;
        }
        else {
          color = 0xf0f0f0;
          if ((local_d8 - 1 & 0xfffffffd) != 0) {
            color = 0xa0a0a0;
          }
        }
        SetTextColor(hdc,color);
        lVar11 = FText::ToString(puVar8);
        iVar7 = *(int *)(lVar11 + 8) + -1;
        if (*(int *)(lVar11 + 8) == 0) {
          iVar7 = 0;
        }
        puVar5 = (undefined8 *)FText::ToString(puVar8);
        if (*(int *)(puVar5 + 1) == 0) {
          pWVar9 = L"";
        }
        else {
          pWVar9 = (LPCWSTR)*puVar5;
        }
        TextOutW(hdc,*piVar10,piVar10[1],pWVar9,iVar7);
      }
      local_d8 = local_d8 + 1;
      piVar10 = piVar10 + 4;
    } while ((int)local_d8 < 4);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1469e5ec0);
    EndPaint(param_1,&local_a8);
  }
  return 0;
}



// FUNCTION 1416de720 StartSetSplashText body=237 status=ok
// SIG undefined StartSetSplashText(void)

void StartSetSplashText(int param_1,short *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong local_38;
  ulonglong local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_38 = 0;
  local_30 = 0;
  lVar6 = -1;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    do {
      lVar6 = lVar6 + 1;
    } while (param_2[lVar6] != 0);
    uVar5 = (int)lVar6 + 1;
    local_30 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Memcpy(local_38,param_2,(longlong)(int)uVar5 * 2);
  }
  uVar4 = FText::FromString(local_28,&local_38);
  FText::operator=(&DAT_1469e5e60 + (longlong)param_1 * 0x18,uVar4);
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
  if (local_38 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1416de810 StartSplashScreenThread body=1411 status=ok
// SIG undefined StartSplashScreenThread(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 StartSplashScreenThread(void)

{
  WCHAR WVar1;
  double dVar2;
  bool bVar3;
  ATOM AVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  BOOL BVar9;
  HFONT h;
  WCHAR *pWVar10;
  undefined8 *puVar11;
  WCHAR *pWVar12;
  LPCWSTR lpString;
  int iVar13;
  longlong lVar14;
  undefined4 uVar15;
  float fVar16;
  undefined1 auStackY_1f8 [32];
  LARGE_INTEGER local_198;
  LARGE_INTEGER local_190;
  WNDCLASSW local_188;
  undefined1 local_138 [4];
  int local_134;
  int local_130;
  tagMSG local_118;
  LOGFONTW local_e8;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStackY_1f8;
  iVar13 = 0;
  local_188.style = 3;
  local_188.lpfnWndProc = FUN_1416de360;
  local_188.cbClsExtra = 0;
  local_188.cbWndExtra = 0;
  local_188.hInstance = DAT_1469e4218;
  local_188.hIcon = LoadIconW(DAT_1469e4218,(LPCWSTR)0x7b);
  if (local_188.hIcon == (HICON)0x0) {
    local_188.hIcon = LoadIconW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  }
  local_188.hCursor = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  local_188.hbrBackground = GetStockObject(0);
  local_188.lpszMenuName = (LPCWSTR)0x0;
  local_188.lpszClassName = L"SplashScreenClass";
  AVar4 = RegisterClassW(&local_188);
  if (AVar4 != 0) {
    DAT_1469e5ef0 = (HANDLE)LoadSplashBitmap();
    if (DAT_1469e5ef0 != (HANDLE)0x0) {
      lVar14 = 0x20;
      GetObjectW(DAT_1469e5ef0,0x20,local_138);
      iVar5 = GetSystemMetrics(5);
      iVar6 = GetSystemMetrics(6);
      iVar5 = local_134 + iVar5;
      iVar6 = local_130 + iVar6;
      iVar7 = GetSystemMetrics(0);
      iVar8 = GetSystemMetrics(1);
      DAT_1469e5ef8 =
           CreateWindowExW(0x80080,local_188.lpszClassName,L"SplashScreen",0x80800000,
                           (iVar7 - iVar5) / 2,(iVar8 - iVar6) / 2,iVar5,iVar6,(HWND)0x0,(HMENU)0x0,
                           DAT_1469e4218,(LPVOID)0x0);
      SetLayeredWindowAttributes(DAT_1469e5ef8,0,'\0',2);
      h = GetStockObject(0x11);
      _guard_xfg_dispatch_icall_nop(&local_e8,0,0x5c);
      GetObjectW(h,0x5c,&local_e8);
      local_e8.lfHeight = 10;
      DAT_1469e5f08 = CreateFontIndirectW(&local_e8);
      if (DAT_1469e5f08 == (HFONT)0x0) {
        DAT_1469e5f08 = h;
      }
      _guard_xfg_dispatch_icall_nop(&local_e8,0,0x5c);
      GetObjectW(h,0x5c,&local_e8);
      local_e8.lfHeight = 0xc;
      DAT_1469e5f50 = CreateFontIndirectW(&local_e8);
      if (DAT_1469e5f50 == (HFONT)0x0) {
        DAT_1469e5f50 = h;
      }
      _guard_xfg_dispatch_icall_nop(&local_e8,0,0x5c);
      GetObjectW(h,0x5c,&local_e8);
      local_e8.lfHeight = 0x28;
      local_e8.lfWeight = 700;
      local_e8.lfQuality = '\x04';
      pWVar12 = local_e8.lfFaceName;
      do {
        if ((lVar14 == -0x7fffffde) ||
           (WVar1 = *(WCHAR *)(((longlong)L"Verdana" - (longlong)local_e8.lfFaceName) +
                              (longlong)pWVar12), WVar1 == L'\0')) break;
        *pWVar12 = WVar1;
        pWVar12 = pWVar12 + 1;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      pWVar10 = pWVar12 + -1;
      if (lVar14 != 0) {
        pWVar10 = pWVar12;
      }
      *pWVar10 = L'\0';
      DAT_1469e5f58 = CreateFontIndirectW(&local_e8);
      if (DAT_1469e5f58 == (HFONT)0x0) {
        DAT_1469e5f58 = h;
      }
      _DAT_1469e5f44 = 10;
      _DAT_1469e5f40 = local_134 + -0xc;
      _DAT_1469e5f4c = 0x3c;
      _DAT_1469e5f18 = local_134 + -0x14;
      _DAT_1469e5f24 = local_130 + -0x3c;
      _DAT_1469e5f2c = local_130 + -0x28;
      _DAT_1469e5f34 = local_130 + -0x10;
      _DAT_1469e5f3c = local_130 + -6;
      DAT_1469e5f14 = local_130 + -0x14;
      _DAT_1469e5f48 = 0xc;
      _DAT_1469e5f20 = 10;
      _DAT_1469e5f30 = 10;
      _DAT_1469e5f1c = local_130;
      DAT_1469e5f10 = 10;
      _DAT_1469e5f28 = _DAT_1469e5f18;
      _DAT_1469e5f38 = _DAT_1469e5f18;
      if (DAT_1469e5ef8 != (HWND)0x0) {
        puVar11 = (undefined8 *)FText::ToString(&DAT_1469e5e48);
        if (*(int *)(puVar11 + 1) == 0) {
          lpString = L"";
        }
        else {
          lpString = (LPCWSTR)*puVar11;
        }
        SetWindowTextW(DAT_1469e5ef8,lpString);
        ShowWindow(DAT_1469e5ef8,5);
        UpdateWindow(DAT_1469e5ef8);
        QueryPerformanceCounter(&local_198);
        bVar3 = false;
        dVar2 = (double)local_198.QuadPart * DAT_1468b02f8;
        do {
          BVar9 = PeekMessageW(&local_118,(HWND)0x0,0,0,1);
          if (BVar9 != 0) {
            TranslateMessage(&local_118);
            DispatchMessageW(&local_118);
            if (local_118.message == 0x12) {
              bVar3 = true;
            }
          }
          if (iVar13 < 0xff) {
            QueryPerformanceCounter(&local_190);
            fVar16 = (float)((double)local_190.QuadPart * DAT_1468b02f8 - dVar2) * 5.0;
            if (0.0 <= fVar16) {
              if (1.0 <= fVar16) {
                fVar16 = 1.0;
              }
            }
            else {
              fVar16 = 0.0;
            }
            iVar5 = (int)(fVar16 * 255.0);
            if (iVar5 != iVar13) {
              SetLayeredWindowAttributes(DAT_1469e5ef8,0,(BYTE)iVar5,2);
              iVar13 = iVar5;
            }
            uVar15 = 0;
          }
          else {
            uVar15 = 0x3c888889;
          }
          FUN_1416b1760(uVar15);
        } while (!bVar3);
      }
      DeleteObject(DAT_1469e5ef0);
      DAT_1469e5ef0 = (HANDLE)0x0;
    }
    UnregisterClassW(local_188.lpszClassName,DAT_1469e4218);
  }
  return 0;
}



// FUNCTION 1416deda0 TearDown body=17 status=ok
// SIG undefined TearDown(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FGenericPlatformApplicationMisc::TearDown(void)

{
  _DAT_1468b02b0 = 0;
  _DAT_1468b02b8 = 0;
  return;
}



// FUNCTION 1416dedc0 UnadviseSink body=248 status=ok
// SIG undefined UnadviseSink(void)

undefined8 FTextStoreACP::UnadviseSink(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *local_res10;
  longlong *local_res18;
  
  if (param_2 == (undefined8 *)0x0) {
    return 0x80070057;
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    uVar3 = 0;
    local_res10 = (longlong *)0x0;
    iVar2 = (**(code **)*param_2)(param_2,&DAT_145ac61b0,&local_res10);
    if (iVar2 < 0) {
      uVar3 = 0x8000ffff;
    }
    else {
      local_res18 = (longlong *)0x0;
      iVar2 = (**(code **)*param_2)(param_2,&DAT_145ac61b0,&local_res18);
      if (iVar2 < 0) {
        uVar3 = 0x8000ffff;
      }
      else if (local_res10 == local_res18) {
        plVar1 = *(longlong **)(param_1 + 0x40);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          *(undefined8 *)(param_1 + 0x40) = 0;
        }
      }
      else {
        uVar3 = 0x80040200;
      }
      if (local_res18 != (longlong *)0x0) {
        (**(code **)(*local_res18 + 0x10))(local_res18);
      }
    }
    if (local_res10 != (longlong *)0x0) {
      (**(code **)(*local_res10 + 0x10))();
    }
    return uVar3;
  }
  return 0x80040200;
}



// FUNCTION 1416deec0 FUN_1416deec0 body=292 status=ok
// SIG undefined FUN_1416deec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416deec0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_878 [32];
  int local_858 [2];
  undefined8 local_850;
  longlong *local_848;
  undefined8 local_840;
  longlong *local_838;
  undefined1 local_828 [2048];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_878;
  plVar3 = (longlong *)param_2[1];
  local_850 = *param_2;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar1 = (longlong *)(param_1 + 0x50);
  local_848 = plVar3;
  FUN_1416d16d0(plVar1,local_858,&local_850);
  if (local_858[0] == -1) {
    lVar5 = 0;
  }
  else {
    lVar5 = (longlong)local_858[0] * 0x38 + *plVar1;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)(*(longlong *)(lVar5 + 0x18) + 0x60);
  iVar4 = (**(code **)(*plVar3 + 0x28))(plVar3,1);
  if (iVar4 < 0) {
    FWindowsPlatformMisc::GetSystemErrorMessage(local_828,0x400,iVar4);
  }
  plVar3 = (longlong *)param_2[1];
  local_840 = *param_2;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_838 = plVar3;
  FUN_1416daec0(plVar1,&local_840);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}



// FUNCTION 1416deff0 UpdateAllModifierKeyStates body=166 status=ok
// SIG undefined UpdateAllModifierKeyStates(void)

void FWindowsApplication::UpdateAllModifierKeyStates(longlong param_1)

{
  SHORT SVar1;
  
  SVar1 = GetAsyncKeyState(0xa0);
  *(byte *)(param_1 + 0xe9) = (byte)((ushort)SVar1 >> 0xf);
  SVar1 = GetAsyncKeyState(0xa1);
  *(byte *)(param_1 + 0xea) = (byte)((ushort)SVar1 >> 0xf);
  SVar1 = GetAsyncKeyState(0xa2);
  *(byte *)(param_1 + 0xeb) = (byte)((ushort)SVar1 >> 0xf);
  SVar1 = GetAsyncKeyState(0xa3);
  *(byte *)(param_1 + 0xec) = (byte)((ushort)SVar1 >> 0xf);
  SVar1 = GetAsyncKeyState(0xa4);
  *(byte *)(param_1 + 0xed) = (byte)((ushort)SVar1 >> 0xf);
  SVar1 = GetAsyncKeyState(0xa5);
  *(byte *)(param_1 + 0xee) = (byte)((ushort)SVar1 >> 0xf);
  SVar1 = GetKeyState(0x14);
  *(byte *)(param_1 + 0xef) = (byte)SVar1 & 1;
  return;
}



// FUNCTION 1416df0a0 FUN_1416df0a0 body=482 status=ok
// SIG undefined FUN_1416df0a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416df0a0(longlong param_1,HIMC param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  HWND hWnd;
  longlong lVar4;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  float local_b8;
  float local_b4;
  int local_b0 [2];
  undefined1 local_a8 [4];
  float local_a4;
  longlong local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  tagCANDIDATEFORM local_80;
  tagRECT local_60;
  tagCOMPOSITIONFORM local_50;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_a0 = *(longlong *)(param_1 + 8);
  if (local_a0 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    local_98 = plVar3;
    FUN_1416d16d0(param_1 + 0x50,local_b0,&local_a0);
    if (local_b0[0] == -1) {
      lVar4 = 0;
    }
    else {
      lVar4 = (longlong)local_b0[0] * 0x38 + *(longlong *)(param_1 + 0x50);
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
    local_c8 = local_a8;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x48))
              (*(longlong **)(param_1 + 8),*(undefined4 *)(lVar4 + 0x24),
               *(undefined4 *)(lVar4 + 0x28),&local_b8);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x58))(*(longlong **)(param_1 + 8),&local_90);
    hWnd = (HWND)(**(code **)(*local_90 + 0xc0))();
    GetWindowRect(hWnd,&local_60);
    local_80.dwIndex = 0;
    local_80.dwStyle = 0x80;
    local_b8 = local_b8 - (float)local_60.left;
    local_80.ptCurrentPos.x = (LONG)local_b8;
    local_b4 = local_b4 - (float)local_60.top;
    local_80.ptCurrentPos.y = (LONG)local_b4;
    local_80.rcArea.bottom = (LONG)((float)local_80.ptCurrentPos.y + local_a4);
    local_80.rcArea.left = local_80.ptCurrentPos.x;
    local_80.rcArea.top = local_80.ptCurrentPos.y;
    local_80.rcArea.right = local_80.ptCurrentPos.x;
    _guard_xfg_dispatch_icall_nop(param_2,&local_80);
    local_50.ptCurrentPos.x = (LONG)local_b8;
    local_50.dwStyle = 2;
    local_50.ptCurrentPos.y = (LONG)(local_a4 + local_b4);
    _guard_xfg_dispatch_icall_nop(param_2,&local_50);
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_88 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1416df290 YesNof body=226 status=ok
// SIG undefined YesNof(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FFeedbackContextAnsi::YesNof(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  FILE *_File;
  char *pcVar3;
  undefined2 *puVar4;
  undefined1 auStack_138 [32];
  char local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (DAT_1468c2172 != '\0') {
    puVar2 = (undefined8 *)FText::ToString(param_2);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar2;
    }
    wprintf(L"%ls",puVar4);
    wprintf(L"%ls",L" (Y/N): ");
    if ((DAT_1468c217a != '\x01') && (cVar1 = FUN_140612c50(), cVar1 != '\x01')) {
      _File = (FILE *)__acrt_iob_func(0);
      pcVar3 = fgets(local_118,0x100,_File);
      if (pcVar3 == (char *)0x0) {
        return true;
      }
      return (local_118[0] + 0xa7U & 0xdf) == 0;
    }
    wprintf(L"%ls",&DAT_144cef04c);
  }
  return true;
}



// FUNCTION 1416df380 FUN_1416df380 body=58 status=ok
// SIG undefined FUN_1416df380(void)

void FUN_1416df380(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144cfc968;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_144cfc9b0;
  }
  return;
}



// FUNCTION 1416df3d0 FUN_1416df3d0 body=20 status=ok
// SIG undefined FUN_1416df3d0(void)

undefined1 FUN_1416df3d0(longlong param_1)

{
  FUN_1416e7fc0(param_1 + 8);
  return 1;
}



// FUNCTION 1416df430 TIntrusiveReferenceController<FPackageLocalizationCultureCache><FPackageLocalizationCache_*,FString_const_&> body=404 status=ok
// SIG undefined TIntrusiveReferenceController<FPackageLocalizationCultureCache><FPackageLocalizationCache_*,FString_const_&>(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<FPackageLocalizationCultureCache>::
TIntrusiveReferenceController<FPackageLocalizationCultureCache><FPackageLocalizationCache_*,FString_const_&>
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *local_28;
  int local_20;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_LAB_144cfddc8;
  *(undefined4 *)((longlong)param_1 + 0xc) = 1;
  uVar2 = *param_2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  param_1[7] = uVar2;
  plVar1 = param_1 + 8;
  *plVar1 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  uVar2 = FInternationalization::Get();
  plVar3 = (longlong *)FInternationalization::GetPrioritizedCultureNames(uVar2,&local_28,param_3);
  plVar4 = local_28;
  iVar5 = local_20;
  if (plVar1 != plVar3) {
    plVar4 = (longlong *)*plVar1;
    for (iVar5 = *(int *)(param_1 + 9); iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar3;
    *plVar3 = 0;
    *(int *)(param_1 + 9) = (int)plVar3[1];
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)plVar3 + 0xc);
    plVar3[1] = 0;
    plVar4 = local_28;
    iVar5 = local_20;
  }
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return param_1;
}



// FUNCTION 1416df5d0 operator<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>_TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_> body=249 status=ok
// SIG undefined operator<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>_TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
TKeyInitializer<UClass_*_const_&>::
operator<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>_TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [8];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 1,&local_78);
  lVar1 = local_38;
  if (local_38 == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_2 + 8,local_40,4);
  }
  if (param_2[9] != 0) {
    FMemory::Free();
  }
  param_2[9] = lVar1;
  *(undefined4 *)(param_2 + 10) = local_30;
  local_38 = 0;
  local_30 = 0;
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_78);
  return param_2;
}



// FUNCTION 1416df6d0 operator<UObject_*,FObjectInitializer>_TTuple<UObject_*,FObjectInitializer> body=383 status=ok
// SIG undefined operator<UObject_*,FObjectInitializer>_TTuple<UObject_*,FObjectInitializer>(void)

undefined8 *
TPairInitializer<UObject_*_const_&,FObjectInitializer_const_&>::
operator<UObject_*,FObjectInitializer>_TTuple<UObject_*,FObjectInitializer>
          (undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = *puVar2;
  param_2[2] = puVar2[1];
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(puVar2 + 2);
  *(undefined1 *)((longlong)param_2 + 0x19) = *(undefined1 *)((longlong)puVar2 + 0x11);
  *(undefined1 *)((longlong)param_2 + 0x1a) = *(undefined1 *)((longlong)puVar2 + 0x12);
  param_2[4] = puVar2[3];
  param_2[0x15] = 0;
  iVar1 = *(int *)(puVar2 + 0x15);
  puVar4 = (undefined8 *)puVar2[0x14];
  *(int *)(param_2 + 0x16) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xb4) = 0;
  }
  else {
    TArray<FObjectInitializer::FOverrides::FOverride,TInlineAllocator<8,FDefaultAllocator>_>::
    ResizeForCopy(param_2 + 5,iVar1,0);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = puVar2 + 4;
    }
    puVar3 = (undefined8 *)param_2[0x15];
    if ((undefined8 *)param_2[0x15] == (undefined8 *)0x0) {
      puVar3 = param_2 + 5;
    }
    ::_guard_xfg_dispatch_icall_nop(puVar3,puVar4,(longlong)iVar1 << 4);
  }
  param_2[0x27] = 0;
  iVar1 = *(int *)(puVar2 + 0x27);
  puVar4 = (undefined8 *)puVar2[0x26];
  *(int *)(param_2 + 0x28) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x144) = 0;
  }
  else {
    TArray<FObjectInitializer::FOverrides::FOverride,TInlineAllocator<8,FDefaultAllocator>_>::
    ResizeForCopy(param_2 + 0x17,iVar1,0);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = puVar2 + 0x16;
    }
    puVar3 = (undefined8 *)param_2[0x27];
    if ((undefined8 *)param_2[0x27] == (undefined8 *)0x0) {
      puVar3 = param_2 + 0x17;
    }
    ::_guard_xfg_dispatch_icall_nop(puVar3,puVar4,(longlong)iVar1 << 4);
  }
  param_2[0x29] = puVar2[0x28];
  *(byte *)(param_2 + 0x2a) =
       *(byte *)(param_2 + 0x2a) ^ (*(byte *)(puVar2 + 0x29) ^ *(byte *)(param_2 + 0x2a)) & 1;
  return param_2;
}



// FUNCTION 1416df850 AddReferencedObjects<UObject> body=530 status=ok
// SIG undefined AddReferencedObjects<UObject>(void)

void FReferenceCollector::AddReferencedObjects<UObject>
               (longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
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
  
  uVar2 = *(uint *)(param_2 + 5);
  puVar1 = (uint *)(param_2 + 2);
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar8 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar3 = *puVar8;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar9 = local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar9;
      if (bVar4) goto LAB_1416df92e;
      uVar3 = puVar8[lVar5 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
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
    if ((int)uVar2 < (int)uStack_84) {
LAB_1416df92e:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_2 + 5);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar7 = uVar3 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = param_2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar3;
  if (uVar3 != uVar2) {
    puVar8 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar6 = puVar8[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar9 = (int)uVar3 >> 5;
    while (uVar6 == 0) {
      uVar7 = uVar7 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_1416df9f1;
      uVar6 = puVar8[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_84 = (uVar7 - iVar9) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1416df9f1:
      uStack_84 = uVar2;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    (**(code **)(*param_1 + 0x38))
              (param_1,(longlong)(int)uStack_5c * 0x10 + *param_2,param_3,param_4);
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 1416dfa70 Append<AActor_*,FDefaultAllocator> body=92 status=ok
// SIG undefined Append<AActor_*,FDefaultAllocator>(void)

void TArray<AActor_*,FDefaultAllocator>::Append<AActor_*,FDefaultAllocator>
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
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
  }
  return;
}



// FUNCTION 1416dfad0 Append<FDefaultSetAllocator> body=560 status=ok
// SIG undefined Append<FDefaultSetAllocator>(void)

void TMap<unsigned_int,FTransitionAndLayoutManagerData::FFramebufferList_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FTransitionAndLayoutManagerData::FFramebufferList_*,0>_>
     ::Append<FDefaultSetAllocator>(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 local_res8 [8];
  undefined8 local_98;
  longlong lStack_90;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34) <
      (((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) - *(int *)(param_1 + 0x34)) +
      *(int *)(param_1 + 8)) {
    TSparseArray<TSetElement<TSharedPtr<FInterfaceContainer,0>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Reserve();
  }
  uVar2 = *(uint *)(param_2 + 5);
  puVar1 = (uint *)(param_2 + 2);
  local_98._0_4_ = 0;
  local_98._4_4_ = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar3 = *puVar9;
    iStack_80 = 0;
    local_98._0_4_ = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)(int)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar5 = (int)local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
      local_98._0_4_ = iVar5;
      if (bVar4) goto LAB_1416dfbbd;
      uVar3 = puVar9[lVar7 + 1];
    }
    local_98._4_4_ = -uVar3 & uVar3;
    iVar5 = 0x1f;
    if (local_98._4_4_ != 0) {
      for (; local_98._4_4_ >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (local_98._4_4_ == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_84 = (iStack_80 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1416dfbbd:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_2 + 5);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  local_88 = -1 << ((byte)uVar3 & 0x1f);
  iStack_48 = (int)local_98;
  uStack_44 = local_98._4_4_;
  uVar8 = uVar3 & 0xffffffe0;
  local_50._0_4_ = SUB84(param_2,0);
  local_50._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  local_78 = (undefined4)local_50;
  uStack_74 = local_50._4_4_;
  iStack_70 = (int)local_98;
  uStack_6c = local_98._4_4_;
  uStack_84 = uVar3;
  local_68 = puVar1;
  local_50 = param_2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  if (uVar3 != uVar2) {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar6 = puVar9[(int)uVar3 >> 5] & local_88;
    iVar5 = (int)uVar3 >> 5;
    while (uVar6 == 0) {
      uVar8 = uVar8 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1416dfc83;
      uVar6 = puVar9[(longlong)iVar5 + 1];
      local_88 = 0xffffffff;
      iVar5 = iVar5 + 1;
    }
    uVar6 = -uVar6 & uVar6;
    iVar5 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_84 = (uVar8 - iVar5) + 0x1f;
    uVar3 = uStack_84;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1416dfc83:
      uStack_84 = uVar2;
      uVar3 = uVar2;
    }
  }
  while( true ) {
    if (((uStack_5c == uVar3) && (local_68 == puVar1)) &&
       ((longlong *)CONCAT44(uStack_74,local_78) == param_2)) break;
    local_98 = *(longlong *)CONCAT44(uStack_74,local_78) + (longlong)(int)uStack_5c * 0x18;
    lStack_90 = local_98 + 8;
    FUN_1416e1690(param_1,local_res8,&local_98,0);
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 1416dfd00 FUN_1416dfd00 body=852 status=ok
// SIG undefined FUN_1416dfd00(void)

int * FUN_1416dfd00(longlong *param_1,int *param_2,ulonglong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong *_Src;
  bool bVar13;
  
  iVar8 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar7 * 0x10);
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  bVar13 = false;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  _Src = (ulonglong *)((longlong)iVar7 * 0x10 + *param_1);
  uVar3 = *param_3;
  *_Src = uVar3;
  *(undefined4 *)(_Src + 1) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    if (uVar12 != 0) {
      iVar6 = (int)(uVar3 >> 4);
      uVar10 = 0x9e3779b9U - iVar6 ^ iVar6 << 8;
      uVar5 = -(uVar10 + iVar6) ^ uVar10 >> 0xd;
      uVar11 = (iVar6 - uVar10) - uVar5 ^ uVar5 >> 0xc;
      uVar10 = (uVar10 - uVar11) - uVar5 ^ uVar11 << 0x10;
      uVar5 = (uVar5 - uVar10) - uVar11 ^ uVar10 >> 5;
      uVar11 = (uVar11 - uVar10) - uVar5 ^ uVar5 >> 3;
      uVar10 = (uVar10 - uVar11) - uVar5 ^ uVar11 << 10;
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar4 +
                      (((longlong)(int)((uVar5 - uVar10) - uVar11) ^ (ulonglong)(uVar10 >> 0xf)) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar6 != -1) {
        do {
          if (*(ulonglong *)(*param_1 + (longlong)iVar6 * 0x10) == uVar3) goto LAB_1416dfeca;
          iVar6 = *(int *)(*param_1 + 8 + (longlong)iVar6 * 0x10);
        } while (iVar6 != -1);
      }
    }
    iVar6 = -1;
LAB_1416dfeca:
    bVar13 = iVar6 != -1;
    if (bVar13) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar6 * 0x10 + *param_1),_Src,8);
      TSparseArray<TSetElement<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar7,1);
      *param_2 = iVar6;
      goto LAB_1416e002b;
    }
  }
  if (3 < uVar12) {
    uVar5 = (uVar12 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar5 != 0) {
      iVar6 = 0x1f - iVar8;
    }
    uVar5 = (uVar12 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar5 == 0) {
      cVar9 = '\0';
    }
    else {
      cVar9 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    iVar8 = (int)(*_Src >> 4);
    uVar5 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
    uVar10 = -(uVar5 + iVar8) ^ uVar5 >> 0xd;
    uVar12 = (iVar8 - uVar5) - uVar10 ^ uVar10 >> 0xc;
    uVar5 = (uVar5 - uVar12) - uVar10 ^ uVar12 << 0x10;
    uVar10 = (uVar10 - uVar5) - uVar12 ^ uVar5 >> 5;
    uVar12 = (uVar12 - uVar5) - uVar10 ^ uVar10 >> 3;
    uVar5 = (uVar5 - uVar12) - uVar10 ^ uVar12 << 10;
    uVar12 = ((uVar10 - uVar5) - uVar12 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0xc) = uVar12;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 1) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar7;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::Rehash(param_1);
  }
LAB_1416e002b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 1416e0060 Emplace<FWeakAsyncPackagePtr_const_&> body=414 status=ok
// SIG undefined Emplace<FWeakAsyncPackagePtr_const_&>(void)

int * TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
      Emplace<FWeakAsyncPackagePtr_const_&>
                (longlong *param_1,int *param_2,undefined4 *param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar10 = false;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *param_2 = local_38[0];
  *(undefined4 *)local_30 = uVar1;
  *(undefined4 *)((longlong)local_30 + 4) = uVar2;
  *(undefined4 *)(local_30 + 1) = uVar3;
  *(undefined4 *)((longlong)local_30 + 0xc) = uVar4;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar9 != 1) {
    if (iVar9 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)*local_30 >> 0x20) + (int)*local_30) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          if (*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x18) == *(int *)(local_30 + 1))
          goto LAB_1416e012c;
          iVar8 = *(int *)(*param_1 + 0x10 + (longlong)iVar8 * 0x18);
        } while (iVar8 != -1);
      }
    }
    iVar8 = -1;
LAB_1416e012c:
    bVar10 = iVar8 != -1;
    if (bVar10) {
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar8 * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar8;
      goto LAB_1416e01d6;
    }
  }
  cVar5 = ConditionalRehash(param_1,iVar9,0);
  if (cVar5 == '\0') {
    uVar7 = (int)((ulonglong)*local_30 >> 0x20) + (int)*local_30 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x14) = uVar7;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_1416e01d6:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 1416e0200 FUN_1416e0200 body=697 status=ok
// SIG undefined FUN_1416e0200(void)

uint * FUN_1416e0200(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

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
      TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x58);
      TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = uVar3;
      goto LAB_1416e048b;
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
LAB_1416e048b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1416e04c0 FUN_1416e04c0 body=692 status=ok
// SIG undefined FUN_1416e04c0(void)

uint * FUN_1416e04c0(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  void *_Dst;
  ulonglong *_Src;
  bool bVar14;
  uint local_res8 [2];
  
  iVar10 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar9 = (ulonglong)*(uint *)(param_1 + 1);
    iVar6 = *(uint *)(param_1 + 1) + 1;
    *(int *)(param_1 + 1) = iVar6;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar9 = (ulonglong)(int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar6 = *(int *)(uVar9 * 0x38 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar6 * 0x38 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  uVar8 = (uint)uVar9;
  *param_2 = uVar8;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 +
                   (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
  _Src = (ulonglong *)((longlong)(int)uVar8 * 0x38 + *param_1);
  uVar2 = *(ulonglong *)*param_3;
  *_Src = uVar2;
  _Src[1] = 0xffffffffffffffff;
  _Src[2] = 0xffffffffffffffff;
  _Src[3] = 0xffffffffffffffff;
  _Src[4] = 0;
  _Src[5] = 0;
  *(undefined4 *)(_Src + 6) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar2);
    uVar4 = local_res8[0];
    lVar7 = (longlong)(int)local_res8[0];
    bVar14 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      _Dst = (void *)(lVar7 * 0x38 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x20) != 0) {
        FMemory::Free();
        uVar9 = (ulonglong)*param_2;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x30);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,uVar9 & 0xffffffff,1);
      *param_2 = uVar4;
      goto LAB_1416e074b;
    }
  }
  if (3 < uVar13) {
    uVar4 = (uVar13 >> 1) + 8;
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
    uVar4 = (uVar13 >> 1) + 7;
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
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    iVar10 = (int)(*_Src >> 4);
    uVar4 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar12 = -(iVar10 + uVar4) ^ uVar4 >> 0xd;
    uVar13 = (iVar10 - uVar4) - uVar12 ^ uVar12 >> 0xc;
    uVar4 = (uVar4 - uVar13) - uVar12 ^ uVar13 << 0x10;
    uVar12 = (uVar12 - uVar4) - uVar13 ^ uVar4 >> 5;
    uVar13 = (uVar13 - uVar4) - uVar12 ^ uVar12 >> 3;
    uVar4 = (uVar4 - uVar13) - uVar12 ^ uVar13 << 10;
    uVar13 = ((uVar12 - uVar4) - uVar13 ^ uVar4 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x34) = uVar13;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 6) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(uint *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         uVar8;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<TSubclassOf<AItem>,FClientValidatedItemInfo>,TDefaultMapHashableKeyFuncs<TSubclassOf<AItem>,FClientValidatedItemInfo,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1416e074b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1416e0780 FUN_1416e0780 body=579 status=ok
// SIG undefined FUN_1416e0780(void)

int * FUN_1416e0780(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  void *_Dst;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  bool bVar10;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar8 * 0x20 + 4 + *param_1);
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  bVar10 = false;
  plVar9 = (longlong *)((longlong)iVar8 * 0x20 + *param_1);
  lVar3 = *(longlong *)*param_3;
  *plVar9 = lVar3;
  plVar9[1] = 0;
  plVar9[2] = 0;
  *(undefined4 *)(plVar9 + 3) = 0xffffffff;
  iVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar8 != 1) {
    if (iVar8 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar6 != -1) {
        do {
          if (*(longlong *)((longlong)iVar6 * 0x20 + *param_1) == lVar3) goto LAB_1416e08db;
          iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *param_1);
        } while (iVar6 != -1);
      }
    }
    iVar6 = -1;
LAB_1416e08db:
    bVar10 = iVar6 != -1;
    if (bVar10) {
      _Dst = (void *)((longlong)iVar6 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar9,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar6;
      goto LAB_1416e0998;
    }
  }
  cVar4 = TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar8,0);
  if (cVar4 == '\0') {
    uVar7 = (int)((ulonglong)*plVar9 >> 0x20) + (int)*plVar9 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar9 + 0x1c) = uVar7;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(plVar9 + 3) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_1416e0998:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 1416e09d0 FUN_1416e09d0 body=675 status=ok
// SIG undefined FUN_1416e09d0(void)

uint * FUN_1416e09d0(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  char cVar14;
  uint uVar15;
  ulonglong *_Src;
  uint uVar16;
  bool bVar17;
  uint local_res8 [2];
  
  iVar13 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar12 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar12 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,uVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar12 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)((longlong)(int)uVar12 * 0x20 + 4 + *param_1);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = uVar12;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar10 +
                   (longlong)((int)(uVar12 + ((int)uVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar12 & 0x1f);
  _Src = (ulonglong *)((longlong)(int)uVar12 * 0x20 + *param_1);
  puVar3 = (undefined4 *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *_Src = uVar4;
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  *(undefined4 *)(_Src + 1) = *puVar3;
  *(undefined4 *)((longlong)_Src + 0xc) = uVar5;
  *(undefined4 *)(_Src + 2) = uVar6;
  *(undefined4 *)((longlong)_Src + 0x14) = uVar7;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar16 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar4);
    uVar8 = local_res8[0];
    lVar11 = (longlong)(int)local_res8[0];
    bVar17 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar17);
    if (bVar17) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar11 * 0x20 + *param_1),_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,uVar12,1);
      *param_2 = uVar8;
      goto LAB_1416e0c45;
    }
  }
  if (3 < uVar16) {
    uVar8 = (uVar16 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar9 = 0x20;
    cVar14 = '\0';
    if (uVar8 != 0) {
      iVar9 = 0x1f - iVar13;
    }
    uVar8 = (uVar16 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar8 != 0) {
      cVar14 = '\x1f' - (char)iVar13;
    }
    iVar13 = 1 << (~(byte)((iVar9 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar16 < 1) || (((int)param_1[9] != 0 && (iVar13 <= (int)param_1[9])))) {
    iVar13 = (int)(*_Src >> 4);
    uVar8 = 0x9e3779b9U - iVar13 ^ iVar13 << 8;
    uVar15 = -(uVar8 + iVar13) ^ uVar8 >> 0xd;
    uVar16 = (iVar13 - uVar8) - uVar15 ^ uVar15 >> 0xc;
    uVar8 = (uVar8 - uVar16) - uVar15 ^ uVar16 << 0x10;
    uVar15 = (uVar15 - uVar8) - uVar16 ^ uVar8 >> 5;
    uVar16 = (uVar16 - uVar8) - uVar15 ^ uVar15 >> 3;
    uVar8 = (uVar8 - uVar16) - uVar15 ^ uVar16 << 10;
    uVar16 = ((uVar15 - uVar8) - uVar16 ^ uVar8 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar16;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(uint *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
         uVar12;
  }
  else {
    *(int *)(param_1 + 9) = iVar13;
    TSet<TTuple<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1416e0c45:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1416e0c80 FUN_1416e0c80 body=685 status=ok
// SIG undefined FUN_1416e0c80(void)

int * FUN_1416e0c80(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong *_Src;
  uint *puVar16;
  undefined4 uVar17;
  bool bVar18;
  int local_res8 [2];
  int local_res10;
  
  uVar17 = 0xffffffff;
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
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x18);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar10;
  lVar8 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar16 = (uint *)((longlong)plVar9 + lVar8);
  *puVar16 = *puVar16 | 1 << ((byte)iVar10 & 0x1f);
  puVar3 = (ulonglong *)param_3[1];
  lVar1 = (longlong)iVar10 * 0x18;
  _Src = (ulonglong *)(*param_1 + lVar1);
  uVar4 = *(ulonglong *)*param_3;
  *_Src = uVar4;
  _Src[1] = *puVar3;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  local_res10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (local_res10 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar4);
    iVar2 = local_res8[0];
    lVar14 = (longlong)local_res8[0];
    bVar18 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar18);
    if (bVar18) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar14 * 0x18),_Src,0x10);
      bVar5 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar10;
      }
      lVar14 = *param_1;
      *(undefined4 *)(lVar1 + lVar14) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar17 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar1 + 4 + lVar14) = uVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar9 = (longlong *)param_1[4];
      *param_2 = iVar2;
      if (plVar9 == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      puVar16 = (uint *)((longlong)plVar9 + lVar8);
      *puVar16 = *puVar16 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      uVar13 = (undefined1)local_res8[0];
      goto LAB_1416e0f03;
    }
  }
  uVar13 = 0;
  cVar6 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,local_res10,0);
  if (cVar6 == '\0') {
    iVar10 = (int)(*_Src >> 4);
    uVar12 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar15 = -(iVar10 + uVar12) ^ uVar12 >> 0xd;
    uVar11 = (iVar10 - uVar12) - uVar15 ^ uVar15 >> 0xc;
    uVar12 = (uVar12 - uVar11) - uVar15 ^ uVar11 << 0x10;
    uVar15 = (uVar15 - uVar12) - uVar11 ^ uVar12 >> 5;
    uVar11 = (uVar11 - uVar12) - uVar15 ^ uVar15 >> 3;
    uVar12 = (uVar12 - uVar11) - uVar15 ^ uVar11 << 10;
    uVar11 = ((uVar15 - uVar12) - uVar11 ^ uVar12 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar11;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_1416e0f03:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar13;
  }
  return param_2;
}



// FUNCTION 1416e0f30 Emplace<TPairInitializer<UObject_*_const_&,UProperty_*_&&>_> body=443 status=ok
// SIG undefined Emplace<TPairInitializer<UObject_*_const_&,UProperty_*_&&>_>(void)

int * TSet<TTuple<UObject_*,UProperty_*>,TDefaultMapHashableKeyFuncs<UObject_*,UProperty_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UObject_*_const_&,UProperty_*_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  char cVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar9 = false;
  puVar1 = (ulonglong *)param_3[1];
  uVar2 = *(ulonglong *)*param_3;
  *param_2 = local_38[0];
  *local_30 = uVar2;
  local_30[1] = *puVar1;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    bVar9 = local_res8[0] != -1;
    if (bVar9) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)local_res8[0] * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = local_res8[0];
      goto LAB_1416e10c3;
    }
  }
  cVar3 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar7);
  if (cVar3 == '\0') {
    iVar7 = (int)(*local_30 >> 4);
    uVar6 = 0x9e3779b9U - iVar7 ^ iVar7 << 8;
    uVar8 = -(uVar6 + iVar7) ^ uVar6 >> 0xd;
    uVar5 = (iVar7 - uVar6) - uVar8 ^ uVar8 >> 0xc;
    uVar6 = (uVar6 - uVar5) - uVar8 ^ uVar5 << 0x10;
    uVar8 = (uVar8 - uVar6) - uVar5 ^ uVar6 >> 5;
    uVar5 = (uVar5 - uVar6) - uVar8 ^ uVar8 >> 3;
    uVar6 = (uVar6 - uVar5) - uVar8 ^ uVar5 << 10;
    uVar5 = ((uVar8 - uVar6) - uVar5 ^ uVar6 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x14) = uVar5;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_1416e10c3:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 1416e10f0 FUN_1416e10f0 body=750 status=ok
// SIG undefined FUN_1416e10f0(void)

int * FUN_1416e10f0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  ulonglong *puVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 uVar12;
  longlong lVar13;
  uint uVar14;
  undefined4 uVar15;
  bool bVar16;
  int local_res8 [2];
  void *local_res10;
  
  uVar15 = 0xffffffff;
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
    iVar6 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x28);
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x28) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  _Src = (ulonglong *)(*param_1 + (longlong)iVar9 * 0x28);
  puVar2 = (ulonglong *)param_3[1];
  *_Src = *(ulonglong *)*param_3;
  _Src[1] = *puVar2;
  _Src[2] = 0;
  _Src[2] = puVar2[1];
  puVar2[1] = 0;
  *(int *)(_Src + 3) = (int)puVar2[2];
  *(undefined4 *)((longlong)_Src + 0x1c) = *(undefined4 *)((longlong)puVar2 + 0x14);
  puVar2[2] = 0;
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res10 = (void *)CONCAT44(local_res10._4_4_,iVar6);
  uVar7 = 1;
  if (iVar6 != 1) {
    TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,*_Src);
    iVar6 = local_res8[0];
    lVar13 = (longlong)local_res8[0];
    bVar16 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar16);
    if (bVar16) {
      local_res10 = (void *)(*param_1 + lVar13 * 0x28);
      if (*(longlong *)((longlong)local_res10 + 0x10) != 0) {
        FMemory::Free();
        iVar9 = *param_2;
      }
      _guard_xfg_dispatch_icall_nop(local_res10,_Src,0x20);
      bVar3 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar9;
      }
      lVar13 = *param_1;
      *(undefined4 *)(lVar13 + (longlong)iVar9 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar15 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar13 + 4 + (longlong)iVar9 * 0x28) = uVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar6;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar8 +
                       (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      uVar12 = (undefined1)local_res8[0];
      goto LAB_1416e13ba;
    }
    uVar7 = local_res10._0_4_;
  }
  uVar12 = 0;
  cVar4 = TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,uVar7,0);
  if (cVar4 == '\0') {
    iVar9 = (int)(*_Src >> 4);
    uVar11 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
    uVar14 = -(uVar11 + iVar9) ^ uVar11 >> 0xd;
    uVar10 = (iVar9 - uVar11) - uVar14 ^ uVar14 >> 0xc;
    uVar11 = (uVar11 - uVar10) - uVar14 ^ uVar10 << 0x10;
    uVar14 = (uVar14 - uVar11) - uVar10 ^ uVar11 >> 5;
    uVar10 = (uVar10 - uVar11) - uVar14 ^ uVar14 >> 3;
    uVar11 = (uVar11 - uVar10) - uVar14 ^ uVar10 << 10;
    uVar10 = ((uVar14 - uVar11) - uVar10 ^ uVar11 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x24) = uVar10;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_1416e13ba:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar12;
  }
  return param_2;
}



// FUNCTION 1416e13e0 FUN_1416e13e0 body=675 status=ok
// SIG undefined FUN_1416e13e0(void)

int * FUN_1416e13e0(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  void *_Dst;
  char cVar9;
  uint uVar10;
  ulonglong *_Src;
  bool bVar11;
  int local_res8 [2];
  
  iVar7 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<352,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar6 * 0x160 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x160 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  _Src = (ulonglong *)((longlong)iVar6 * 0x160 + *param_1);
  TPairInitializer<UObject_*_const_&,FObjectInitializer_const_&>::
  operator<UObject_*,FObjectInitializer>_TTuple<UObject_*,FObjectInitializer>(param_3,_Src);
  *(undefined4 *)(_Src + 0x2b) = 0xffffffff;
  bVar11 = false;
  uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar8 != 1) {
    TSet<TTuple<UObject_*,FObjectInitializer>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectInitializer,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,*_Src);
    bVar11 = local_res8[0] != -1;
    if (bVar11) {
      _Dst = (void *)((longlong)local_res8[0] * 0x160 + *param_1);
      FUN_141781fc0((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x158);
      TSparseArray<TSetElement<TTuple<UObject_*,FObjectInitializer>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1416e165a;
    }
  }
  if (3 < uVar8) {
    uVar4 = (uVar8 >> 1) + 8;
    iVar7 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar9 = '\0';
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar7;
    }
    uVar4 = (uVar8 >> 1) + 7;
    iVar7 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar9 = '\x1f' - (char)iVar7;
    }
    iVar7 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar8 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    iVar7 = (int)(*_Src >> 4);
    uVar4 = 0x9e3779b9U - iVar7 ^ iVar7 << 8;
    uVar10 = -(uVar4 + iVar7) ^ uVar4 >> 0xd;
    uVar8 = (iVar7 - uVar4) - uVar10 ^ uVar10 >> 0xc;
    uVar4 = (uVar4 - uVar8) - uVar10 ^ uVar8 << 0x10;
    uVar10 = (uVar10 - uVar4) - uVar8 ^ uVar4 >> 5;
    uVar8 = (uVar8 - uVar4) - uVar10 ^ uVar10 >> 3;
    uVar4 = (uVar4 - uVar8) - uVar10 ^ uVar8 << 10;
    uVar8 = ((uVar10 - uVar4) - uVar8 ^ uVar4 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x15c) = uVar8;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x2b) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<UObject_*,FObjectInitializer>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectInitializer,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1416e165a:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 1416e1690 FUN_1416e1690 body=644 status=ok
// SIG undefined FUN_1416e1690(void)

int * FUN_1416e1690(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  longlong *plVar10;
  uint uVar11;
  bool bVar12;
  
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
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  bVar12 = false;
  puVar1 = (uint *)((longlong)plVar10 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  plVar10 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
  plVar5 = (longlong *)param_3[1];
  lVar3 = *(longlong *)*param_3;
  *plVar10 = lVar3;
  plVar10[1] = *plVar5;
  *(undefined4 *)(plVar10 + 2) = 0xffffffff;
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar11 != 1) {
    if (uVar11 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar6 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x18) == lVar3) goto LAB_1416e17ec;
          iVar6 = *(int *)(*param_1 + 0x10 + (longlong)iVar6 * 0x18);
        } while (iVar6 != -1);
      }
    }
    iVar6 = -1;
LAB_1416e17ec:
    bVar12 = iVar6 != -1;
    if (bVar12) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar6 * 0x18),plVar10,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar7,1);
      *param_2 = iVar6;
      goto LAB_1416e18eb;
    }
  }
  if (3 < uVar11) {
    uVar4 = (uVar11 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar8;
    }
    uVar4 = (uVar11 >> 1) + 7;
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
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar11 = (int)((ulonglong)*plVar10 >> 0x20) + (int)*plVar10 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar10 + 0x14) = uVar11;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(plVar10 + 2) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         iVar7;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    FUN_1404b4e10(param_1);
  }
LAB_1416e18eb:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 1416e1920 FUN_1416e1920 body=661 status=ok
// SIG undefined FUN_1416e1920(void)

int * FUN_1416e1920(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  longlong *plVar17;
  int iVar18;
  bool bVar19;
  
  iVar18 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar14 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar14);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar14 = (int)param_1[6];
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar16 = *(int *)(*param_1 + 4 + (longlong)iVar14 * 0x28);
    *(int *)(param_1 + 6) = iVar16;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar16 * 0x28) = 0xffffffff;
    }
  }
  plVar17 = (longlong *)param_1[4];
  *param_2 = iVar14;
  lVar10 = (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar17 == (longlong *)0x0) {
    plVar17 = param_1 + 2;
  }
  puVar15 = (uint *)((longlong)plVar17 + lVar10);
  *puVar15 = *puVar15 | 1 << ((byte)iVar14 & 0x1f);
  puVar2 = (undefined4 *)param_3[1];
  lVar1 = (longlong)iVar14 * 0x28;
  plVar17 = (longlong *)(*param_1 + lVar1);
  bVar19 = false;
  lVar3 = *(longlong *)*param_3;
  *plVar17 = lVar3;
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  *(undefined4 *)(plVar17 + 1) = *puVar2;
  *(undefined4 *)((longlong)plVar17 + 0xc) = uVar5;
  *(undefined4 *)(plVar17 + 2) = uVar6;
  *(undefined4 *)((longlong)plVar17 + 0x14) = uVar7;
  plVar17[3] = *(longlong *)(puVar2 + 4);
  *(undefined4 *)(plVar17 + 4) = 0xffffffff;
  iVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar16 != 1) {
    iVar9 = iVar18;
    if (iVar16 != 0) {
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = param_1 + 7;
      }
      iVar13 = *(int *)((longlong)plVar12 +
                       ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar13 != -1) {
        do {
          iVar9 = iVar13;
          if (*(longlong *)(*param_1 + (longlong)iVar13 * 0x28) == lVar3) break;
          iVar13 = *(int *)(*param_1 + 0x20 + (longlong)iVar13 * 0x28);
          iVar9 = iVar18;
        } while (iVar13 != -1);
      }
    }
    bVar19 = iVar9 != -1;
    if (bVar19) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar9 * 0x28),plVar17,0x20);
      bVar4 = (byte)iVar14 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar14;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar1 + lVar3) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar18 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar3) = iVar18;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar14;
      plVar17 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar17 == (longlong *)0x0) {
        plVar17 = param_1 + 2;
      }
      puVar15 = (uint *)((longlong)plVar17 + lVar10);
      *puVar15 = *puVar15 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1416e1b8b;
    }
  }
  cVar8 = TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar16,0);
  if (cVar8 == '\0') {
    uVar11 = (int)((ulonglong)*plVar17 >> 0x20) + (int)*plVar17 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar17 + 0x24) = uVar11;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(plVar17 + 4) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar17 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar17 = param_1 + 7;
    }
    *(int *)((longlong)plVar17 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_1416e1b8b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar19;
  }
  return param_2;
}



// FUNCTION 1416e1bc0 FUN_1416e1bc0 body=391 status=ok
// SIG undefined FUN_1416e1bc0(void)

int * FUN_1416e1bc0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong *plVar9;
  uint uVar10;
  undefined8 *puVar11;
  int iVar12;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar12 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar2 = *puVar2 | 1 << ((byte)iVar12 & 0x1f);
  puVar4 = (undefined4 *)param_3[1];
  puVar11 = (undefined8 *)((longlong)iVar12 * 0x20 + *param_1);
  *puVar11 = *(undefined8 *)*param_3;
  uVar5 = puVar4[1];
  uVar6 = puVar4[2];
  uVar7 = puVar4[3];
  *(undefined4 *)(puVar11 + 1) = *puVar4;
  *(undefined4 *)((longlong)puVar11 + 0xc) = uVar5;
  *(undefined4 *)(puVar11 + 2) = uVar6;
  *(undefined4 *)((longlong)puVar11 + 0x14) = uVar7;
  *(undefined4 *)(puVar11 + 3) = 0xffffffff;
  cVar8 = TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar8 == '\0') {
    uVar10 = (int)((ulonglong)*puVar11 >> 0x20) + (int)*puVar11 & (int)param_1[9] - 1U;
    *(uint *)((longlong)puVar11 + 0x1c) = uVar10;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(puVar11 + 3) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  return param_2;
}



// FUNCTION 1416e1d50 FUN_1416e1d50 body=833 status=ok
// SIG undefined FUN_1416e1d50(void)

uint * FUN_1416e1d50(longlong param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  bool bVar16;
  uint local_res8 [2];
  undefined8 *local_res10;
  
  uVar15 = 0xffffffff;
  if (*(int *)(param_1 + 300) == 0) {
    uVar14 = *(uint *)(param_1 + 0x108);
    *(uint *)(param_1 + 0x108) = uVar14 + 1;
    if (*(int *)(param_1 + 0x10c) < (int)(uVar14 + 1)) {
      TArray<FNiagaraRendererVariableInfo,TInlineAllocator<16,TSizedDefaultAllocator<32>_>_>::
      ResizeGrow(param_1,uVar14);
    }
    FUN_1406dc2a0(param_1 + 0x110,0,1);
  }
  else {
    uVar14 = *(uint *)(param_1 + 0x128);
    lVar9 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar9 = param_1;
    }
    iVar1 = *(int *)(lVar9 + 4 + (longlong)(int)uVar14 * 0x10);
    iVar4 = *(int *)(param_1 + 300) + -1;
    *(int *)(param_1 + 0x128) = iVar1;
    *(int *)(param_1 + 300) = iVar4;
    if (iVar4 != 0) {
      lVar9 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar9 = param_1;
      }
      *(undefined4 *)(lVar9 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  *param_2 = uVar14;
  local_res8[0] = local_res8[0] & 0xffffff00;
  lVar6 = (longlong)((int)(uVar14 + ((int)uVar14 >> 0x1f & 0x1fU)) >> 5) * 4;
  lVar9 = *(longlong *)(param_1 + 0x118);
  if (*(longlong *)(param_1 + 0x118) == 0) {
    lVar9 = param_1 + 0x110;
  }
  puVar11 = (uint *)(lVar9 + lVar6);
  *puVar11 = *puVar11 | 1 << ((byte)uVar14 & 0x1f);
  lVar9 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar9 = param_1;
  }
  uVar2 = *param_3;
  local_res10 = (undefined8 *)(lVar9 + (longlong)(int)uVar14 * 0x10);
  *local_res10 = uVar2;
  *(undefined4 *)(local_res10 + 1) = 0xffffffff;
  uVar13 = *(int *)(param_1 + 0x108) - *(int *)(param_1 + 300);
  if (uVar13 != 1) {
    FUN_1416f56f0(param_1,local_res8,uVar2);
    uVar5 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar16 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar16);
    if (bVar16) {
      lVar7 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar7 = param_1;
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar7 + lVar9 * 0x10),local_res10,8);
      bVar3 = (byte)uVar14 & 0x1f;
      if (*(int *)(param_1 + 300) != 0) {
        lVar9 = *(longlong *)(param_1 + 0x100);
        if (*(longlong *)(param_1 + 0x100) == 0) {
          lVar9 = param_1;
        }
        *(uint *)(lVar9 + (longlong)*(int *)(param_1 + 0x128) * 0x10) = uVar14;
      }
      lVar9 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar9 = param_1;
      }
      puVar8 = (undefined4 *)(lVar9 + (longlong)(int)uVar14 * 0x10);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)(param_1 + 300)) {
        uVar15 = *(undefined4 *)(param_1 + 0x128);
      }
      puVar8[1] = uVar15;
      *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
      *(uint *)(param_1 + 0x128) = uVar14;
      lVar9 = *(longlong *)(param_1 + 0x118);
      *param_2 = uVar5;
      if (lVar9 == 0) {
        lVar9 = param_1 + 0x110;
      }
      puVar11 = (uint *)(lVar9 + lVar6);
      *puVar11 = *puVar11 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1416e2062;
    }
  }
  uVar5 = uVar13 >> 1;
  iVar1 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar4 = 0x20;
  if (uVar5 != 0) {
    iVar4 = 0x1f - iVar1;
  }
  uVar5 = uVar5 - 1;
  iVar1 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  if (uVar5 == 0) {
    cVar12 = '\0';
  }
  else {
    cVar12 = '\x1f' - (char)iVar1;
  }
  uVar10 = 1 << (~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  uVar5 = 8;
  if ((7 < uVar10) && (uVar5 = uVar10, uVar13 < 4)) {
    uVar5 = 8;
  }
  if (((int)uVar13 < 1) ||
     ((*(int *)(param_1 + 0x158) != 0 && ((int)uVar5 <= *(int *)(param_1 + 0x158))))) {
    uVar13 = (int)((ulonglong)*local_res10 >> 0x20) + (int)*local_res10 &
             *(int *)(param_1 + 0x158) - 1U;
    *(uint *)((longlong)local_res10 + 0xc) = uVar13;
    lVar9 = *(longlong *)(param_1 + 0x150);
    if (*(longlong *)(param_1 + 0x150) == 0) {
      lVar9 = param_1 + 0x130;
    }
    *(undefined4 *)(local_res10 + 1) =
         *(undefined4 *)
          (lVar9 + ((longlong)*(int *)(param_1 + 0x158) - 1U & (longlong)(int)uVar13) * 4);
    lVar9 = *(longlong *)(param_1 + 0x150);
    if (*(longlong *)(param_1 + 0x150) == 0) {
      lVar9 = param_1 + 0x130;
    }
    *(uint *)(lVar9 + ((longlong)*(int *)(param_1 + 0x158) - 1U & (longlong)(int)uVar13) * 4) =
         uVar14;
  }
  else {
    *(uint *)(param_1 + 0x158) = uVar5;
    FUN_1417070f0(param_1);
  }
LAB_1416e2062:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1416e20a0 FindObject<UPackage> body=63 status=ok
// SIG undefined FindObject<UPackage>(void)

void FindObject<UPackage>(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = UPackage::GetPrivateStaticClass();
  FUN_141799410(uVar1,param_1,param_2,param_3);
  return;
}



// FUNCTION 1416e20e0 FindObjectFast<UPackage> body=99 status=ok
// SIG undefined FindObjectFast<UPackage>(void)

void FindObjectFast<UPackage>
               (undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
               undefined4 param_5)

{
  undefined8 uVar1;
  
  uVar1 = UPackage::GetPrivateStaticClass();
  FUN_141799680(uVar1,param_1,param_2,param_3,param_4,param_5,0);
  return;
}



// FUNCTION 1416e2150 GenerateValueArray<FDefaultAllocator> body=538 status=ok
// SIG undefined GenerateValueArray<FDefaultAllocator>(void)

void TMapBase<UObject_*,FTraceRouteRecord,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>_>
     ::GenerateValueArray<FDefaultAllocator>(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  uint *puVar8;
  int iVar9;
  int local_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  int local_48;
  undefined4 uStack_44;
  longlong *local_40;
  int iStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  iVar6 = (int)param_2[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(*param_2 + 8);
    do {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar9) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,iVar9);
  }
  iVar6 = (int)param_1[5];
  puStack_30 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  local_58._4_4_ = 0;
  uStack_50 = 0;
  if (iVar6 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puStack_30;
    }
    uVar2 = *puVar8;
    local_68 = 0;
    while (uVar2 == 0) {
      lVar5 = (longlong)local_68;
      uStack_50 = uStack_50 + 0x20;
      iVar9 = local_68 + 1;
      bVar3 = (int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar9;
      if (bVar3) goto LAB_1416e225f;
      uVar2 = puVar8[lVar5 + 1];
    }
    uStack_64 = -uVar2 & uVar2;
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
    local_58._4_4_ = (uStack_50 - iVar9) + 0x1f;
    if (iVar6 < local_58._4_4_) {
LAB_1416e225f:
      local_58._4_4_ = iVar6;
    }
  }
  uStack_28 = 0xffffffff;
  iStack_24 = local_58._4_4_;
  iStack_20 = uStack_50;
  uStack_1c = iStack_4c;
  iStack_38 = local_68;
  uStack_34 = uStack_64;
  iStack_60 = local_68;
  uStack_5c = uStack_64;
  local_48 = uStack_50;
  uStack_44 = iStack_4c;
  uStack_50 = 0xffffffff;
  iStack_4c = local_58._4_4_;
  bVar3 = local_58._4_4_ < iVar6;
  local_40 = param_1;
  local_58 = puStack_30;
  if (bVar3) {
    do {
      iVar9 = iStack_4c;
      iVar6 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar6 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_2,iVar6);
      }
      puVar1 = (undefined8 *)(*param_2 + (longlong)iVar6 * 0x18);
      if (puVar1 != (undefined8 *)0x0) {
        lVar4 = (longlong)iVar9;
        lVar5 = *param_1;
        *puVar1 = *(undefined8 *)(lVar5 + 8 + lVar4 * 0x28);
        puVar1[1] = 0;
        iVar6 = *(int *)(lVar5 + 0x18 + lVar4 * 0x28);
        _Src = *(void **)(lVar5 + 0x10 + lVar4 * 0x28);
        *(int *)(puVar1 + 2) = iVar6;
        if (iVar6 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0x14) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1 + 1,iVar6,0);
          ::_guard_xfg_dispatch_icall_nop((void *)puVar1[1],_Src,(longlong)iVar6 << 3);
        }
      }
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
    } while (iStack_4c < (int)local_58[6]);
  }
  return;
}



// FUNCTION 1416e2370 FUN_1416e2370 body=149 status=ok
// SIG undefined FUN_1416e2370(void)

void FUN_1416e2370(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined **local_b8 [5];
  byte local_8f;
  byte local_8e;
  undefined8 local_28;
  longlong *local_20;
  undefined1 local_18;
  
  FArchive::FArchive(local_b8);
  local_8e = local_8e | 8;
  local_b8[0] = &PTR_FUN_144cfddd8;
  local_28 = param_2;
  local_20 = param_1;
  local_18 = param_3;
  FArchive::SetIsPersistent(local_b8,0);
  local_8f = local_8f & 0xdf;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0xa8))(param_1,local_b8);
  }
  FArchive::~FArchive(local_b8);
  return;
}



// FUNCTION 1416e2410 FUN_1416e2410 body=644 status=ok
// SIG undefined FUN_1416e2410(void)

void FUN_1416e2410(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
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
  int iVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  int *piVar22;
  int iVar23;
  int *piVar24;
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  
  puVar2 = (undefined4 *)*param_1;
  iVar23 = 0;
  *param_2 = *puVar2;
  param_2[1] = puVar2[1];
  param_2[2] = puVar2[2];
  param_2[3] = puVar2[3];
  local_58 = (longlong *)0x0;
  local_48 = 0;
  if (puVar2[0x14] != 0) {
    puVar21 = *(undefined8 **)(puVar2 + 0x10);
    if (*(undefined8 **)(puVar2 + 0x10) == (undefined8 *)0x0) {
      puVar21 = (undefined8 *)(puVar2 + 8);
    }
    if (puVar21 != (undefined8 *)0x0) {
      plVar20 = (longlong *)(**(code **)*puVar21)(puVar21,local_78);
      (**(code **)(*plVar20 + 8))(plVar20);
      local_88[0] = *(code **)(puVar2 + 4);
      goto LAB_1416e248f;
    }
  }
  local_88[0] = AK::MemoryMgr::StartProfileThreadUsage;
LAB_1416e248f:
  FGenericPlatformMemory::MemswapGreaterThan8(local_88,param_2 + 4,0x50);
  if (local_48 != 0) {
    plVar20 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar20 = local_58;
    }
    if (plVar20 != (longlong *)0x0) {
      (**(code **)(*plVar20 + 0x10))(plVar20,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  TArray<FAsyncLoadEvent,FDefaultAllocator>::RemoveAtSwapImpl(param_1,0,1,param_4);
  iVar1 = (int)param_1[1];
  lVar3 = *param_1;
  if (1 < iVar1) {
    do {
      iVar5 = iVar23 * 2;
      iVar19 = iVar5 + 1;
      if (iVar5 + 2 < iVar1) {
        piVar22 = (int *)(((longlong)iVar5 + 2) * 0x60 + lVar3);
        piVar24 = (int *)((longlong)iVar19 * 0x60 + lVar3);
        if (*piVar24 == *piVar22) {
          if (piVar24[2] == piVar22[2]) {
            if (piVar24[1] == piVar22[1]) {
              bVar4 = piVar24[3] < piVar22[3];
            }
            else {
              bVar4 = piVar22[1] <= piVar24[1];
            }
          }
          else {
            bVar4 = piVar22[2] <= piVar24[2];
          }
        }
        else {
          bVar4 = *piVar22 <= *piVar24;
        }
        if (bVar4) {
          iVar19 = iVar5;
        }
        iVar19 = iVar19 + 1;
      }
      piVar24 = (int *)((longlong)iVar23 * 0x60 + lVar3);
      piVar22 = (int *)((longlong)iVar19 * 0x60 + lVar3);
      if (*piVar22 == *piVar24) {
        if (piVar22[2] == piVar24[2]) {
          if (piVar22[1] == piVar24[1]) {
            bVar4 = piVar22[3] < piVar24[3];
          }
          else {
            bVar4 = piVar24[1] <= piVar22[1];
          }
        }
        else {
          bVar4 = piVar24[2] <= piVar22[2];
        }
      }
      else {
        bVar4 = *piVar24 <= *piVar22;
      }
      if (!bVar4) {
        return;
      }
      if (piVar24 != piVar22) {
        uVar6 = *(undefined8 *)(piVar22 + 2);
        uVar7 = *(undefined8 *)piVar24;
        uVar8 = *(undefined8 *)(piVar24 + 2);
        uVar9 = *(undefined8 *)(piVar24 + 4);
        uVar10 = *(undefined8 *)(piVar24 + 6);
        uVar11 = *(undefined8 *)(piVar24 + 8);
        uVar12 = *(undefined8 *)(piVar24 + 10);
        uVar13 = *(undefined8 *)(piVar24 + 0xc);
        uVar14 = *(undefined8 *)(piVar24 + 0xe);
        uVar15 = *(undefined8 *)(piVar24 + 0x10);
        uVar16 = *(undefined8 *)(piVar24 + 0x12);
        uVar17 = *(undefined8 *)(piVar24 + 0x14);
        uVar18 = *(undefined8 *)(piVar24 + 0x16);
        *(undefined8 *)piVar24 = *(undefined8 *)piVar22;
        *(undefined8 *)(piVar24 + 2) = uVar6;
        uVar6 = *(undefined8 *)(piVar22 + 6);
        *(undefined8 *)(piVar24 + 4) = *(undefined8 *)(piVar22 + 4);
        *(undefined8 *)(piVar24 + 6) = uVar6;
        uVar6 = *(undefined8 *)(piVar22 + 10);
        *(undefined8 *)(piVar24 + 8) = *(undefined8 *)(piVar22 + 8);
        *(undefined8 *)(piVar24 + 10) = uVar6;
        uVar6 = *(undefined8 *)(piVar22 + 0xe);
        *(undefined8 *)(piVar24 + 0xc) = *(undefined8 *)(piVar22 + 0xc);
        *(undefined8 *)(piVar24 + 0xe) = uVar6;
        uVar6 = *(undefined8 *)(piVar22 + 0x12);
        *(undefined8 *)(piVar24 + 0x10) = *(undefined8 *)(piVar22 + 0x10);
        *(undefined8 *)(piVar24 + 0x12) = uVar6;
        uVar6 = *(undefined8 *)(piVar22 + 0x16);
        *(undefined8 *)(piVar24 + 0x14) = *(undefined8 *)(piVar22 + 0x14);
        *(undefined8 *)(piVar24 + 0x16) = uVar6;
        *(undefined8 *)piVar22 = uVar7;
        *(undefined8 *)(piVar22 + 2) = uVar8;
        *(undefined8 *)(piVar22 + 4) = uVar9;
        *(undefined8 *)(piVar22 + 6) = uVar10;
        *(undefined8 *)(piVar22 + 8) = uVar11;
        *(undefined8 *)(piVar22 + 10) = uVar12;
        *(undefined8 *)(piVar22 + 0xc) = uVar13;
        *(undefined8 *)(piVar22 + 0xe) = uVar14;
        *(undefined8 *)(piVar22 + 0x10) = uVar15;
        *(undefined8 *)(piVar22 + 0x12) = uVar16;
        *(undefined8 *)(piVar22 + 0x14) = uVar17;
        *(undefined8 *)(piVar22 + 0x16) = uVar18;
      }
      iVar23 = iVar19;
    } while (iVar19 * 2 + 1 < iVar1);
  }
  return;
}



// FUNCTION 1416e26a0 HeapPush body=366 status=ok
// SIG undefined HeapPush(void)

int TArray<FAsyncLoadEvent,FDefaultAllocator>::HeapPush(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  bool bVar2;
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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  int *piVar17;
  undefined4 *puVar18;
  int *piVar19;
  int iVar20;
  
  iVar20 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar20 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar20 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1,iVar20);
  }
  puVar18 = (undefined4 *)((longlong)iVar20 * 0x60 + *param_1);
  *puVar18 = *param_2;
  puVar18[1] = param_2[1];
  puVar18[2] = param_2[2];
  puVar18[3] = param_2[3];
  ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar18 + 4,param_2 + 4);
  lVar1 = *param_1;
  iVar20 = (int)param_1[1] + -1;
  if (iVar20 < 1) {
    return iVar20;
  }
  while( true ) {
    iVar16 = (iVar20 + -1) / 2;
    piVar19 = (int *)((longlong)iVar16 * 0x60 + lVar1);
    piVar17 = (int *)((longlong)iVar20 * 0x60 + lVar1);
    if (*piVar17 == *piVar19) {
      if (piVar17[2] == piVar19[2]) {
        if (piVar17[1] == piVar19[1]) {
          bVar2 = piVar17[3] < piVar19[3];
        }
        else {
          bVar2 = piVar19[1] <= piVar17[1];
        }
      }
      else {
        bVar2 = piVar19[2] <= piVar17[2];
      }
    }
    else {
      bVar2 = *piVar19 <= *piVar17;
    }
    if (!bVar2) break;
    if (piVar17 != piVar19) {
      uVar3 = *(undefined8 *)(piVar19 + 2);
      uVar4 = *(undefined8 *)piVar17;
      uVar5 = *(undefined8 *)(piVar17 + 2);
      uVar6 = *(undefined8 *)(piVar17 + 4);
      uVar7 = *(undefined8 *)(piVar17 + 6);
      uVar8 = *(undefined8 *)(piVar17 + 8);
      uVar9 = *(undefined8 *)(piVar17 + 10);
      uVar10 = *(undefined8 *)(piVar17 + 0xc);
      uVar11 = *(undefined8 *)(piVar17 + 0xe);
      uVar12 = *(undefined8 *)(piVar17 + 0x10);
      uVar13 = *(undefined8 *)(piVar17 + 0x12);
      uVar14 = *(undefined8 *)(piVar17 + 0x14);
      uVar15 = *(undefined8 *)(piVar17 + 0x16);
      *(undefined8 *)piVar17 = *(undefined8 *)piVar19;
      *(undefined8 *)(piVar17 + 2) = uVar3;
      uVar3 = *(undefined8 *)(piVar19 + 6);
      *(undefined8 *)(piVar17 + 4) = *(undefined8 *)(piVar19 + 4);
      *(undefined8 *)(piVar17 + 6) = uVar3;
      uVar3 = *(undefined8 *)(piVar19 + 10);
      *(undefined8 *)(piVar17 + 8) = *(undefined8 *)(piVar19 + 8);
      *(undefined8 *)(piVar17 + 10) = uVar3;
      uVar3 = *(undefined8 *)(piVar19 + 0xe);
      *(undefined8 *)(piVar17 + 0xc) = *(undefined8 *)(piVar19 + 0xc);
      *(undefined8 *)(piVar17 + 0xe) = uVar3;
      uVar3 = *(undefined8 *)(piVar19 + 0x12);
      *(undefined8 *)(piVar17 + 0x10) = *(undefined8 *)(piVar19 + 0x10);
      *(undefined8 *)(piVar17 + 0x12) = uVar3;
      uVar3 = *(undefined8 *)(piVar19 + 0x16);
      *(undefined8 *)(piVar17 + 0x14) = *(undefined8 *)(piVar19 + 0x14);
      *(undefined8 *)(piVar17 + 0x16) = uVar3;
      *(undefined8 *)piVar19 = uVar4;
      *(undefined8 *)(piVar19 + 2) = uVar5;
      *(undefined8 *)(piVar19 + 4) = uVar6;
      *(undefined8 *)(piVar19 + 6) = uVar7;
      *(undefined8 *)(piVar19 + 8) = uVar8;
      *(undefined8 *)(piVar19 + 10) = uVar9;
      *(undefined8 *)(piVar19 + 0xc) = uVar10;
      *(undefined8 *)(piVar19 + 0xe) = uVar11;
      *(undefined8 *)(piVar19 + 0x10) = uVar12;
      *(undefined8 *)(piVar19 + 0x12) = uVar13;
      *(undefined8 *)(piVar19 + 0x14) = uVar14;
      *(undefined8 *)(piVar19 + 0x16) = uVar15;
    }
    iVar20 = iVar16;
    if (iVar16 < 1) {
      return iVar16;
    }
  }
  return iVar20;
}



// FUNCTION 1416e2810 InternalConstructor<UGCObjectReferencer> body=82 status=ok
// SIG undefined InternalConstructor<UGCObjectReferencer>(void)

void InternalConstructor<UGCObjectReferencer>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144cfcb20;
    puVar1[5] = 0;
    puVar1[6] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 7));
                    /* WARNING: Could not recover jumptable at 0x0001416e2855. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 7),4000);
    return;
  }
  return;
}



// FUNCTION 1416e2870 InternalConstructor<UTextBuffer> body=68 status=ok
// SIG undefined InternalConstructor<UTextBuffer>(void)

void InternalConstructor<UTextBuffer>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined2 *)(puVar1 + 6) = 0x100;
    *puVar1 = &PTR_FUN_144cfcfb8;
    puVar1[5] = &PTR_LAB_144cfd230;
    puVar1[8] = 0;
    puVar1[9] = 0;
  }
  return;
}



// FUNCTION 1416e28c0 InternalVTableHelperCtorCaller<UGCObjectReferencer> body=168 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UGCObjectReferencer>(void)

undefined8 * InternalVTableHelperCtorCaller<UGCObjectReferencer>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)0x0;
  uVar1 = GetTransientPackage();
  uVar2 = UGCObjectReferencer::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    *puVar3 = &PTR__scalar_deleting_destructor__144cfcb20;
    puVar3[5] = 0;
    puVar3[6] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar3 + 7));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar3 + 7),4000);
    puVar4 = puVar3;
  }
  return puVar4;
}



// FUNCTION 1416e2970 InternalVTableHelperCtorCaller<UTextBuffer> body=164 status=ok
// SIG undefined InternalVTableHelperCtorCaller<UTextBuffer>(void)

undefined8 * InternalVTableHelperCtorCaller<UTextBuffer>(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = GetTransientPackage();
  uVar2 = UTextBuffer::GetPrivateStaticClass();
  puVar3 = (undefined8 *)FUN_141797e10(uVar2,uVar1,0,0x510,0,0,0);
  if (puVar3 != (undefined8 *)0x0) {
    UObject::UObject(puVar3,param_1);
    *(undefined2 *)(puVar3 + 6) = 0x100;
    *puVar3 = &PTR_FUN_144cfcfb8;
    puVar3[5] = &PTR_LAB_144cfd230;
    puVar3[8] = 0;
    puVar3[9] = 0;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1416e2a20 FUN_1416e2a20 body=49 status=ok
// SIG undefined FUN_1416e2a20(void)

undefined1 FUN_1416e2a20(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14171bfe0();
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (param_1 == lVar1) break;
    param_1 = *(longlong *)(param_1 + 0x30);
  }
  return 1;
}



// FUNCTION 1416e2a60 FUN_1416e2a60 body=377 status=ok
// SIG undefined FUN_1416e2a60(void)

longlong * FUN_1416e2a60(undefined8 param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  longlong local_res20;
  undefined2 *local_38;
  undefined8 local_30;
  undefined2 *local_28;
  int local_20;
  
  local_30 = 0x13;
  local_38 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  puVar2 = local_38;
  FGenericPlatformString::Memcpy(local_38,L"PLACEHOLDER-CLASS_",0x26);
  puVar5 = &DAT_143f3eda8;
  if ((int)local_30 != 0) {
    puVar5 = puVar2;
  }
  FString::PrintfImpl(&local_28,L"%s_%s",puVar5,param_2);
  puVar5 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar5 = local_28;
  }
  FName::FName(&local_res20,puVar5,1);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (puVar2 != (undefined2 *)0x0) {
    FMemory::Free(puVar2);
  }
  uVar3 = ULinkerPlaceholderClass::GetPrivateStaticClass();
  plVar4 = (longlong *)FUN_141791c20(&local_38,param_1,uVar3,local_res20);
  local_res20 = *plVar4;
  uVar3 = ULinkerPlaceholderClass::GetPrivateStaticClass();
  lVar1 = local_res20;
  local_38 = (undefined2 *)0x0;
  if (local_res20 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  plVar4 = (longlong *)FUN_1417985e0(uVar3,param_1,lVar1,0x41,0,0,0,0,0);
  if (param_3 != 0xffffffff) {
    *(uint *)(plVar4 + 0x41) = ~param_3;
  }
  (**(code **)(*plVar4 + 0x280))(plVar4);
  FUN_141726e60(plVar4,1);
  return plVar4;
}



// FUNCTION 1416e2be0 NewObject<USaveGame> body=149 status=ok
// SIG undefined NewObject<USaveGame>(void)

void NewObject<USaveGame>
               (undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
               undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  if (param_3 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  FUN_1417985e0(param_2,param_1,param_3,param_4,0,param_5,param_6,param_7,0);
  return;
}



// FUNCTION 1416e2c80 FUN_1416e2c80 body=339 status=ok
// SIG undefined FUN_1416e2c80(void)

longlong * FUN_1416e2c80(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  
  *param_1 = param_2;
  if (param_2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_2 + 0x38);
  }
  param_1[1] = lVar5;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(bool *)((longlong)param_1 + 0x14) = param_3 == 1;
  *(bool *)((longlong)param_1 + 0x15) = param_4 == 1;
  if ((param_5 == 1) && (param_2 != 0)) {
    lVar5 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = 1;
      goto LAB_1416e2d07;
    }
  }
  uVar3 = 0;
LAB_1416e2d07:
  plVar6 = (longlong *)*param_1;
  lVar5 = param_1[1];
  *(undefined1 *)((longlong)param_1 + 0x16) = uVar3;
  if (plVar6 == (longlong *)0x0) {
LAB_1416e2dbe:
    *param_1 = (longlong)plVar6;
    param_1[1] = lVar5;
    return param_1;
  }
joined_r0x0001416e2d23:
  for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
    if (((*(uint *)(*(longlong *)(lVar5 + 0x10) + 0xb8) >> 0xf & 1) != 0) &&
       ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(uint *)(lVar5 + 0x38) >> 0x1d & 1) == 0)
        ))) goto LAB_1416e2dbe;
  }
  if (*(char *)((longlong)param_1 + 0x16) != '\0') {
    lVar2 = param_1[2];
    iVar4 = (int)lVar2 + 1;
    *(int *)(param_1 + 2) = iVar4;
    if (iVar4 < (int)plVar6[0x35]) {
      lVar5 = *(longlong *)(((longlong)(int)lVar2 + 1) * 0x10 + plVar6[0x34]);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(lVar5 + 0x38);
      }
      goto joined_r0x0001416e2d23;
    }
  }
  if ((*(char *)((longlong)param_1 + 0x14) == '\0') ||
     (plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6), plVar6 == (longlong *)0x0))
  goto LAB_1416e2dbe;
  lVar5 = plVar6[7];
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  goto joined_r0x0001416e2d23;
}



// FUNCTION 1416e2de0 FUN_1416e2de0 body=711 status=ok
// SIG undefined FUN_1416e2de0(void)

undefined8 * FUN_1416e2de0(undefined8 *param_1,short *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  LARGE_INTEGER local_res8;
  code *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  
  FArchive::FArchive();
  *param_1 = &PTR__scalar_deleting_destructor__144cfd578;
  lVar5 = -1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0xffffffffffffffff;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x24] = AK::MemoryMgr::StartProfileThreadUsage;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    do {
      lVar5 = lVar5 + 1;
    } while (param_2[lVar5] != 0);
    iVar4 = (int)lVar5 + 1;
    *(int *)(param_1 + 0x2f) = iVar4;
    if (0 < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0x2e,0);
    }
    FGenericPlatformString::Memcpy(param_1[0x2e],param_2,(longlong)iVar4 * 2);
  }
  QueryPerformanceCounter(&local_res8);
  dVar6 = (double)local_res8.QuadPart * DAT_1468b02f8;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x30] = dVar6 + 16777216.0;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(param_1 + 0x34,param_3);
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x3e] = AK::MemoryMgr::StartProfileThreadUsage;
  uVar1 = FPlatformFileManager::Get();
  plVar2 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar1);
  uVar1 = (**(code **)(*plVar2 + 0x100))(plVar2,param_2);
  local_48 = (longlong *)0x0;
  param_1[0x12] = uVar1;
  local_38 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = param_1;
    *puVar3 = &PTR_FUN_143f77b70;
  }
  local_78[0] = (code *)&LAB_1416eb9f0;
  FGenericPlatformMemory::MemswapGreaterThan8(local_78,param_1 + 0x24,0x50);
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
  if (DAT_1468c21ab != '\0') {
    local_48 = (longlong *)0x0;
    local_38 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_68);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[1] = param_1;
      *puVar3 = &PTR_FUN_143f77b70;
    }
    local_78[0] = UE4Function_Private::
                  TFunctionRefCaller<<lambda_b628dbf1ebd70af9fff729c0f4f9f7c2>,void___cdecl(bool,IAsyncReadRequest_*)>
                  ::Call;
    TFunction<void___cdecl(int)>::operator=(param_1 + 0x3e,local_78);
  }
  uVar1 = (**(code **)(*(longlong *)param_1[0x12] + 8))((longlong *)param_1[0x12],param_1 + 0x24);
  param_1[0x13] = uVar1;
  return param_1;
}



// FUNCTION 1416e30b0 FArchiveTraceRoute body=2350 status=ok
// SIG undefined FArchiveTraceRoute(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FArchiveTraceRoute::FArchiveTraceRoute
          (undefined8 *param_1,longlong ***param_2,undefined8 param_3,undefined1 param_4,
          uint param_5)

{
  int iVar1;
  longlong ***ppplVar2;
  ulonglong uVar3;
  undefined **ppuVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong **pplVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong **pplVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  longlong **local_f8;
  undefined **local_f0;
  longlong *local_e8;
  longlong *plStack_e0;
  int local_d8;
  undefined4 uStack_d4;
  uint local_d0;
  uint local_cc;
  int local_c8 [2];
  longlong **local_c0;
  longlong *plStack_b8;
  ulonglong local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  longlong **local_98;
  longlong ***local_90;
  longlong **local_88;
  undefined8 local_80;
  longlong local_78;
  int local_70;
  int local_6c;
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_c0 = (longlong **)param_2;
  local_a8 = param_1;
  local_80 = param_3;
  FArchive::FArchive();
  plVar13 = param_1 + 0x12;
  *param_1 = &PTR__scalar_deleting_destructor__144cfd2e8;
  *plVar13 = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((longlong)param_1 + 0xfc) = param_4;
  *(uint *)(param_1 + 0x20) = param_5;
  if ((param_2 != (longlong ***)0x0) && ((*(uint *)(param_2 + 1) & param_5) == 0)) {
    *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) | 8;
    local_78 = 0;
    local_6c = 0;
    local_58 = 0;
    local_50 = 0;
    local_44 = 0;
    local_48 = 0xffffffff;
    local_a0 = plVar13;
    TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
    ::Empty(plVar13,(int)DAT_1469e91c4);
    local_70 = 0;
    iVar7 = (int)DAT_1469e91c4 / 2;
    if (local_6c != iVar7) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_78,iVar7);
    }
    local_48 = 0xffffffff;
    local_44 = 0;
    uVar3 = local_50 >> 0x20;
    local_50 = local_50 & 0xffffffff00000000;
    uVar8 = iVar7 + 0x1f + (iVar7 + 0x1f >> 0x1f & 0x1fU);
    if ((uint)uVar3 != (uVar8 & 0xffffffe0)) {
      local_50 = ((ulonglong)uVar8 & 0xffffffe0) << 0x20;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(local_68,0);
    }
    uVar10 = UObject::GetPrivateStaticClass();
    local_108 = 0;
    FObjectIterator::FObjectIterator(&local_f0,uVar10,0,0);
    uVar18 = local_cc;
    uVar8 = local_d0;
    ppuVar4 = local_f0;
    if (plStack_e0 != (undefined8 *)0x0) {
      lVar20 = CONCAT44(uStack_d4,local_d8);
      plVar14 = plStack_e0;
      iVar7 = (int)local_e8;
      do {
        pplVar15 = (longlong **)0x0;
        local_f8 = pplVar15;
        if (plVar14 != (undefined8 *)0x0) {
          local_f8 = (longlong **)*plVar14;
        }
        if ((*(uint *)(local_a8 + 0x20) & *(uint *)(local_f8 + 1)) == 0) {
          iVar1 = *(int *)((longlong)local_f8 + 0xc);
          pplVar11 = pplVar15;
          if (iVar1 < (int)DAT_1469e91c4) {
            uVar17 = iVar1 >> 0x1f & 0xffff;
            uVar9 = iVar1 + uVar17;
            pplVar11 = (longlong **)
                       (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                       (longlong)(int)((uVar9 & 0xffff) - uVar17) * 0x18);
          }
          if ((*(uint *)(pplVar11 + 1) >> 0x1e & 1) != 0) goto LAB_1416e32c0;
          FUN_1417a6b10(local_f8,0x10);
        }
        else {
LAB_1416e32c0:
          FUN_1417a8ce0(local_f8,0x10);
          FUN_1416e9b70(&local_78,local_f8);
          pplVar11 = (longlong **)operator_new(0xc0);
          if (pplVar11 != (longlong **)0x0) {
            *pplVar11 = (longlong *)local_f8;
            pplVar11[1] = (longlong *)0x0;
            pplVar11[2] = (longlong *)0x0;
            pplVar11[5] = (longlong *)0x0;
            pplVar11[6] = (longlong *)0x0;
            *(undefined4 *)(pplVar11 + 7) = 0xffffffff;
            *(undefined4 *)((longlong)pplVar11 + 0x3c) = 0;
            pplVar11[9] = (longlong *)0x0;
            *(undefined4 *)(pplVar11 + 10) = 0;
            pplVar11[0xb] = (longlong *)0x0;
            pplVar11[0xc] = (longlong *)0x0;
            pplVar11[0xf] = (longlong *)0x0;
            pplVar11[0x10] = (longlong *)0x0;
            *(undefined4 *)(pplVar11 + 0x11) = 0xffffffff;
            *(undefined4 *)((longlong)pplVar11 + 0x8c) = 0;
            pplVar11[0x13] = (longlong *)0x0;
            *(undefined4 *)(pplVar11 + 0x14) = 0;
            *(undefined4 *)(pplVar11 + 0x15) = 0x7fffffff;
            *(undefined1 *)((longlong)pplVar11 + 0xac) = 0;
            pplVar11[0x16] = (longlong *)0x0;
            pplVar11[0x17] = (longlong *)0x0;
            pplVar15 = pplVar11;
          }
          local_98 = (longlong **)&local_f8;
          local_90 = &local_88;
          local_88 = pplVar15;
          FUN_1416e0c80(local_a0,local_c8,&local_98,0);
        }
LAB_1416e33b0:
        do {
          do {
            iVar1 = *(int *)((longlong)ppuVar4 + 0x24);
            iVar7 = iVar7 + 1;
            plVar13 = local_a0;
            param_1 = local_a8;
            if (iVar1 <= iVar7) goto LAB_1416e3409;
            while( true ) {
              uVar17 = iVar7 >> 0x1f & 0xffff;
              uVar9 = iVar7 + uVar17;
              lVar16 = (longlong)(int)((uVar9 & 0xffff) - uVar17);
              lVar12 = *(longlong *)(ppuVar4[2] + (longlong)((int)uVar9 >> 0x10) * 8);
              lVar19 = *(longlong *)(lVar12 + lVar16 * 0x18);
              plVar14 = (longlong *)(lVar12 + lVar16 * 0x18);
              if (lVar19 != 0) break;
              iVar7 = iVar7 + 1;
              if (iVar1 <= iVar7) goto LAB_1416e3409;
            }
          } while ((*(uint *)(lVar19 + 8) & uVar8) != 0);
          lVar12 = UObject::GetPrivateStaticClass();
          if (lVar20 != lVar12) {
            if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x90) < *(int *)(lVar20 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar20 + 0x90) * 8) != lVar20 + 0x88)) {
              bVar21 = false;
            }
            else {
              bVar21 = true;
            }
            if (!bVar21) goto LAB_1416e33b0;
          }
          iVar1 = *(int *)(lVar19 + 0xc);
          if (iVar1 < (int)DAT_1469e91c4) {
            uVar17 = iVar1 >> 0x1f & 0xffff;
            uVar9 = iVar1 + uVar17;
            lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar9 >> 0x10) * 8) +
                     (longlong)(int)((uVar9 & 0xffff) - uVar17) * 0x18;
          }
          else {
            lVar12 = 0;
          }
        } while ((*(uint *)(lVar12 + 8) & uVar18) != 0);
      } while( true );
    }
LAB_1416e3409:
    FUN_1416f83f0(param_1,&local_78);
    TSparseArray<UObject_*,FDefaultSparseArrayAllocator>::Shrink(&local_78);
    TSparseArray<TSetElement<TTuple<ABasePlayerController_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Shrink(plVar13);
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::ConditionalRehash(plVar13,(int)plVar13[1] - *(int *)((longlong)plVar13 + 0x34),1);
    uVar10 = UObject::GetPrivateStaticClass();
    local_108 = 0;
    FObjectIterator::FObjectIterator(&local_f0,uVar10,0,0);
    ppuVar4 = local_f0;
    if (plStack_e0 != (undefined8 *)0x0) {
      lVar20 = CONCAT44(uStack_d4,local_d8);
      plVar14 = plStack_e0;
      iVar7 = (int)local_e8;
      do {
        uVar10 = 0;
        if (plVar14 != (undefined8 *)0x0) {
          uVar10 = *plVar14;
        }
        FUN_1417a8ce0(uVar10,0x10);
LAB_1416e3540:
        do {
          do {
            iVar1 = *(int *)((longlong)ppuVar4 + 0x24);
            iVar7 = iVar7 + 1;
            plVar13 = local_a0;
            param_1 = local_a8;
            if (iVar1 <= iVar7) goto LAB_1416e3599;
            while( true ) {
              uVar18 = iVar7 >> 0x1f & 0xffff;
              uVar8 = iVar7 + uVar18;
              lVar16 = (longlong)(int)((uVar8 & 0xffff) - uVar18);
              lVar12 = *(longlong *)(ppuVar4[2] + (longlong)((int)uVar8 >> 0x10) * 8);
              lVar19 = *(longlong *)(lVar12 + lVar16 * 0x18);
              plVar14 = (longlong *)(lVar12 + lVar16 * 0x18);
              if (lVar19 != 0) break;
              iVar7 = iVar7 + 1;
              if (iVar1 <= iVar7) goto LAB_1416e3599;
            }
          } while ((*(uint *)(lVar19 + 8) & local_d0) != 0);
          lVar12 = UObject::GetPrivateStaticClass();
          if (lVar20 != lVar12) {
            if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x90) < *(int *)(lVar20 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar20 + 0x90) * 8) != lVar20 + 0x88)) {
              bVar21 = false;
            }
            else {
              bVar21 = true;
            }
            if (!bVar21) goto LAB_1416e3540;
          }
          uVar8 = *(uint *)(lVar19 + 0xc);
          if ((int)uVar8 < (int)DAT_1469e91c4) {
            uVar18 = uVar8 & 0xffff;
            if ((int)uVar8 < 0) {
              uVar8 = uVar8 + 0xffff;
              uVar18 = uVar18 - 0x10000;
            }
            lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                     (longlong)(int)uVar18 * 0x18;
          }
          else {
            lVar12 = 0;
          }
        } while ((*(uint *)(lVar12 + 8) & local_cc) != 0);
      } while( true );
    }
LAB_1416e3599:
    iVar7 = 0;
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(plVar13,&local_f8,local_c0);
    if ((((int)local_f8 != -1) && (lVar20 = *plVar13 + (longlong)(int)local_f8 * 0x18, lVar20 != 0))
       && (lVar20 = *(longlong *)(lVar20 + 8), lVar20 != 0)) {
      *(undefined4 *)(lVar20 + 0xa8) = 0;
      FUN_1416eb430(param_1);
      lVar12 = 0;
      local_f8 = (longlong **)CONCAT44(local_f8._4_4_,0x7fffffff);
      local_f0 = &PTR__scalar_deleting_destructor__143fc4528;
      local_d8 = 0;
      local_c0 = (longlong **)0x0;
      plStack_b8 = (longlong *)0x0;
      local_e8 = (longlong *)0x0;
      plStack_e0 = (longlong *)0x0;
      lVar20 = lVar12;
      if (0 < local_70 - local_44) {
        do {
          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::FindId(plVar13,local_c8,*(undefined8 *)(lVar20 + local_78));
          lVar19 = lVar12;
          if ((local_c8[0] != -1) && (lVar16 = *plVar13 + (longlong)local_c8[0] * 0x18, lVar16 != 0)
             ) {
            lVar19 = *(longlong *)(lVar16 + 8);
          }
          FindClosestLink(param_1,lVar19,&local_f8,&local_c0);
          iVar7 = iVar7 + 1;
          lVar20 = lVar20 + 8;
        } while (iVar7 < local_70 - local_44);
      }
      plVar13 = (longlong *)operator_new(0x18);
      if (plVar13 != (longlong *)0x0) {
        *plVar13 = (longlong)local_c0;
        plVar13[1] = 0;
        plVar13[2] = 0;
        plVar14 = plVar13;
        if (local_e8 != (longlong *)0x0) {
          plVar13[1] = (longlong)local_e8;
          local_e8[2] = (longlong)plVar13;
          plVar14 = plStack_e0;
        }
        plStack_e0 = plVar14;
        local_e8 = plVar13;
        (*(code *)local_f0[1])(&local_f0,local_d8 + 1);
      }
      plVar13 = plStack_b8;
      if ((longlong **)plStack_b8 != (longlong **)0x0) {
        plVar14 = (longlong *)operator_new(0x18);
        if (plVar14 != (longlong *)0x0) {
          *plVar14 = (longlong)plVar13;
          plVar14[1] = 0;
          plVar14[2] = 0;
          plVar5 = plVar14;
          if (plStack_e0 != (longlong *)0x0) {
            plStack_e0[1] = (longlong)plVar14;
            plVar14[2] = (longlong)plStack_e0;
            plVar5 = local_e8;
          }
          local_e8 = plVar5;
          plStack_e0 = plVar14;
          (*(code *)local_f0[1])(&local_f0,local_d8 + 1);
        }
        cVar6 = FindClosestLink(param_1,plVar13,&local_f8,&local_c0);
        while (cVar6 != '\0') {
          plVar14 = (longlong *)operator_new(0x18);
          plVar13 = plStack_b8;
          if (plVar14 != (longlong *)0x0) {
            *plVar14 = (longlong)plStack_b8;
            plVar14[1] = 0;
            plVar14[2] = 0;
            plVar5 = plVar14;
            if (plStack_e0 != (longlong *)0x0) {
              plStack_e0[1] = (longlong)plVar14;
              plVar14[2] = (longlong)plStack_e0;
              plVar5 = local_e8;
            }
            local_e8 = plVar5;
            plStack_e0 = plVar14;
            (*(code *)local_f0[1])(&local_f0,local_d8 + 1);
          }
          cVar6 = FindClosestLink(param_1,plVar13,&local_f8,&local_c0);
        }
      }
      uVar10 = local_80;
      if (local_e8 != (longlong *)0x0) {
        local_90 = &local_c0;
        plVar13 = local_e8;
        do {
          ppplVar2 = (longlong ***)*plVar13;
          plStack_b8 = (longlong *)0x0;
          local_b0 = 0;
          local_c0 = (longlong **)ppplVar2;
          if ((longlong ***)&plStack_b8 != ppplVar2 + 0x16) {
            uVar8 = *(uint *)(ppplVar2 + 0x17);
            pplVar15 = ppplVar2[0x16];
            local_b0 = (ulonglong)uVar8;
            if (uVar8 != 0) {
              TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                        (&plStack_b8,uVar8,0);
              ::_guard_xfg_dispatch_icall_nop(plStack_b8,pplVar15,(longlong)(int)uVar8 << 3);
            }
          }
          local_98 = (longlong **)ppplVar2;
          FUN_1416e10f0(uVar10,local_c8,&local_98,0);
          if ((longlong **)plStack_b8 != (longlong **)0x0) {
            FMemory::Free();
          }
          plVar13 = (longlong *)plVar13[1];
          param_1 = local_a8;
        } while (plVar13 != (longlong *)0x0);
      }
      local_f0 = &PTR__scalar_deleting_destructor__143fc4528;
      while (local_e8 != (longlong *)0x0) {
        plVar13 = (longlong *)local_e8[1];
        FMemory::operator_delete(local_e8,0x18);
        local_e8 = plVar13;
      }
      plStack_e0 = (undefined8 *)0x0;
      local_e8 = (longlong *)0x0;
      (*(code *)local_f0[1])(&local_f0,0);
    }
    local_70 = 0;
    if (local_6c != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_78,0);
    }
    bVar21 = local_50._4_4_ != 0;
    local_48 = 0xffffffff;
    local_44 = 0;
    local_50 = (ulonglong)local_50._4_4_ << 0x20;
    if (bVar21) {
      local_50 = 0;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(local_68,0);
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (local_78 != 0) {
      FMemory::Free();
    }
  }
  return param_1;
}



// FUNCTION 1416e39e0 FUN_1416e39e0 body=1016 status=ok
// SIG undefined FUN_1416e39e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1416e39e0(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined1 local_res8 [8];
  
  param_1[1] = 0;
  *param_1 = &PTR_IsPromotedBuild_144cfd548;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 9),4000);
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1b),4000);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2e));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x2e),4000);
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0x2000;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x42));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x42),4000);
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x51));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x51),4000);
  *(undefined4 *)(param_1 + 0x56) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  DAT_1468c21ab = FUN_1416fbb40();
  cVar2 = FUN_1416fbb40();
  cVar3 = FUN_1416fbbb0();
  if (cVar2 == '\0') {
    if (cVar3 != '\0') {
      LowLevelFatalErrorHandler
                ("Unknown",0x13a9,
                 L"Event driven async loader is NOT being used but it seems to be enabled in project settings."
                );
      FDebug::AssertFailed
                (&DAT_144cf0c2b,"Unknown",0x13a9,
                 L"Event driven async loader is NOT being used but it seems to be enabled in project settings."
                );
    }
  }
  else {
    if (cVar3 == '\0') {
      LowLevelFatalErrorHandler
                ("Unknown",0x13a2,
                 L"Event driven async loader is being used but it does NOT seem to be enabled in project settings."
                );
      FDebug::AssertFailed
                (&DAT_144cf0c2a,"Unknown",0x13a2,
                 L"Event driven async loader is being used but it does NOT seem to be enabled in project settings."
                );
    }
    plVar4 = (longlong *)FMemory::Realloc(0,0x20);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_GetPoolName_143f3f048;
      plVar4[1] = (longlong)FUN_14170dd30;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[3] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_143f3f090;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af7a8,1);
      (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
      iVar1 = DAT_1464af7b0;
      lVar5 = (longlong)DAT_1464af7b0;
      DAT_1464af7b0 = DAT_1464af7b0 + 1;
      if (DAT_1464af7b4 < DAT_1464af7b0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af7a8,iVar1);
      }
      puVar6 = (undefined8 *)(lVar5 * 0x10 + _DAT_1464af7a8);
      *puVar6 = plVar4;
      *(undefined4 *)(puVar6 + 1) = 2;
    }
  }
  uVar7 = FUN_1415ab270(0);
  param_1[3] = uVar7;
  uVar7 = FUN_1415ab270(0);
  param_1[4] = uVar7;
  uVar7 = FUN_1415ab270(0);
  param_1[5] = uVar7;
  uVar7 = FUN_1415ab270(0);
  param_1[6] = uVar7;
  if ((((DAT_1468c21ab == '\0') && (pcVar8 = (char *)FUN_1416f8f70(), *pcVar8 != '\0')) &&
      (param_1[1] == 0)) && (pcVar8 = (char *)FUN_1416f8f70(), *pcVar8 != '\0')) {
    DAT_1469e689c = 1;
    uVar7 = FUN_1415d42a0(param_1,L"FAsyncLoadingThread",0,0,0xffffffffffffffff);
    param_1[1] = uVar7;
  }
  *(undefined4 *)(param_1 + 0x5b) = 0;
  return param_1;
}



// FUNCTION 1416e3de0 FUN_1416e3de0 body=1140 status=ok
// SIG undefined FUN_1416e3de0(void)

undefined8 * FUN_1416e3de0(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  
  FGCObject::FGCObject();
  *param_1 = &PTR__scalar_deleting_destructor__144cfd2a8;
  *(undefined4 *)(param_1 + 2) = *param_2;
  param_1[3] = *(undefined8 *)(param_2 + 2);
  param_1[4] = *(undefined8 *)(param_2 + 4);
  uVar1 = param_2[7];
  uVar2 = param_2[8];
  uVar3 = param_2[9];
  *(undefined4 *)(param_1 + 5) = param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 6) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = param_2[0xc];
  *(undefined4 *)((longlong)param_1 + 0x44) = param_2[0xd];
  *(undefined4 *)(param_1 + 9) = param_2[0xe];
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xce) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x36));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x36),4000);
  uVar5 = FUN_1416f86a0();
  param_1[0x3b] = uVar5;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  LOCK();
  UNLOCK();
  iVar4 = DAT_1469e6a38 + 1;
  DAT_1469e6a38 = DAT_1469e6a38 + 1;
  *(int *)((longlong)param_1 + 0x1e4) = iVar4;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x5d] = 0xffffffffffffffff;
  param_1[0x5e] = 0xffffffffffffffff;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x37c) = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x41c) = 0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *(undefined2 *)(param_1 + 0x94) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4a2) = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  *(undefined2 *)((longlong)param_1 + 0x4bc) = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  *(undefined2 *)((longlong)param_1 + 0x4d4) = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  *(undefined2 *)((longlong)param_1 + 0x4ec) = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  FAsyncPackage::AddRequestID(param_1,*param_2);
  return param_1;
}



// FUNCTION 1416e4260 FDeferredInitializationTrackerBase body=168 status=ok
// SIG undefined FDeferredInitializationTrackerBase(void)

undefined8 *
FDeferredInitializationTrackerBase::FDeferredInitializationTrackerBase(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cfcad0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return param_1;
}



// FUNCTION 1416e4310 FFixedBootOrder body=806 status=ok
// SIG undefined FFixedBootOrder(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
`FEDLBootNotificationManager::ConstructWaitingBootObjects'::`2'::FFixedBootOrder::FFixedBootOrder
          (longlong *param_1)

{
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined2 *puVar9;
  wchar_t *pwVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_8f8 [32];
  undefined8 *local_8d8;
  int local_8c8 [4];
  undefined8 local_8b8;
  uint uStack_8b0;
  uint uStack_8ac;
  undefined8 local_8a8;
  uint uStack_8a0;
  int iStack_89c;
  undefined1 local_898 [16];
  longlong *local_888;
  undefined2 local_880;
  longlong *local_878;
  uint uStack_870;
  uint uStack_86c;
  uint *puStack_868;
  undefined1 auStack_860 [16];
  undefined8 local_850;
  undefined1 local_848 [16];
  wchar_t local_838 [1024];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_8f8;
  *param_1 = 0;
  param_1[1] = 0;
  local_8d8 = &DAT_1468e2360;
  local_888 = (longlong *)
              FConfigCacheIni::GetSectionPrivate
                        (DAT_1468b6148,L"/Script/Engine.StreamingSettings",0,1);
  if (local_888 != (longlong *)0x0) {
    iVar13 = (int)local_888[5];
    puStack_868 = (uint *)(local_888 + 2);
    local_8b8._0_4_ = 0;
    local_8b8._4_4_ = 1;
    local_8a8._4_4_ = 0;
    uStack_8a0 = 0;
    if (iVar13 != 0) {
      puVar11 = (uint *)local_888[4];
      if ((uint *)local_888[4] == (uint *)0x0) {
        puVar11 = puStack_868;
      }
      uVar8 = *puVar11;
      local_8b8._0_4_ = 0;
      uStack_8a0 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)(int)(uint)local_8b8;
        uStack_8a0 = uStack_8a0 + 0x20;
        uVar8 = (uint)local_8b8 + 1;
        bVar1 = (int)((iVar13 + -1 >> 0x1f & 0x1fU) + iVar13 + -1) >> 5 <= (int)(uint)local_8b8;
        local_8b8._0_4_ = uVar8;
        if (bVar1) goto LAB_1416e4425;
        uVar8 = puVar11[lVar5 + 1];
      }
      local_8b8._4_4_ = -uVar8 & uVar8;
      iVar4 = 0x1f;
      if (local_8b8._4_4_ != 0) {
        for (; local_8b8._4_4_ >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (local_8b8._4_4_ == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_8a8._4_4_ = (uStack_8a0 - iVar4) + 0x1f;
      if (iVar13 < local_8a8._4_4_) {
LAB_1416e4425:
        local_8a8._4_4_ = iVar13;
      }
    }
    auStack_860._4_4_ = local_8a8._4_4_;
    auStack_860._0_4_ = 0xffffffff;
    auStack_860._8_4_ = uStack_8a0;
    auStack_860._12_4_ = iStack_89c;
    uStack_870 = (uint)local_8b8;
    uStack_86c = local_8b8._4_4_;
    local_880 = 0;
    local_850._0_4_ = SUB84(local_888,0);
    local_850._4_4_ = (undefined4)((ulonglong)local_888 >> 0x20);
    uStack_8a0 = 0xffffffff;
    iStack_89c = local_8a8._4_4_;
    uStack_8b0 = (uint)local_8b8;
    uStack_8ac = local_8b8._4_4_;
    local_898._8_4_ = (undefined4)local_850;
    local_898._0_8_ = auStack_860._8_8_;
    local_898._12_4_ = local_850._4_4_;
    bVar1 = local_8a8._4_4_ < (int)local_888[5];
    local_8b8 = local_888;
    local_878 = local_888;
    local_850 = local_888;
    local_8a8 = puStack_868;
    if (bVar1) {
      do {
        plVar2 = local_8b8;
        lVar5 = (longlong)iStack_89c;
        lVar12 = *local_8b8 + lVar5 * 0x30;
        pbVar6 = (byte *)FName::GetComparisonNameEntry(lVar12);
        if (pbVar6 != (byte *)0x0) {
          iVar13 = 0;
          local_8c8[0] = 0;
          pwVar10 = L"FixedBootOrder";
          cVar3 = FName::SplitNameWithCheck(L"FixedBootOrder",local_838,0x400,local_8c8);
          if (cVar3 != '\0') {
            pwVar10 = local_838;
            iVar13 = local_8c8[0] + 1;
          }
          if (iVar13 == *(int *)(lVar12 + 4)) {
            if ((*pbVar6 & 1) == 0) {
              iVar13 = FGenericPlatformStricmp::Stricmp<wchar_t,char>(pwVar10,pbVar6 + 0x10);
            }
            else {
              iVar13 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>();
            }
            if (iVar13 == 0) {
              lVar5 = *plVar2 + lVar5 * 0x30;
              iVar13 = *(int *)(lVar5 + 0x20) + -1;
              if (*(int *)(lVar5 + 0x20) == 0) {
                iVar13 = 0;
              }
              lVar12 = 0x18;
              if (iVar13 < 1) {
                lVar12 = 8;
              }
              if (*(int *)(lVar12 + 8 + lVar5) == 0) {
                puVar9 = &DAT_143f3eda8;
              }
              else {
                puVar9 = *(undefined2 **)(lVar12 + lVar5);
              }
              puVar7 = (undefined8 *)FName::FName(local_848,puVar9,1);
              iVar13 = (int)param_1[1];
              *(int *)(param_1 + 1) = iVar13 + 1;
              if (*(int *)((longlong)param_1 + 0xc) < iVar13 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar13);
              }
              *(undefined8 *)(*param_1 + (longlong)iVar13 * 8) = *puVar7;
            }
          }
        }
        uStack_8a0 = uStack_8a0 & ~uStack_8ac;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_8b0);
      } while (iStack_89c < (int)local_8a8[6]);
      if (((char)local_880 != '\0') && (local_880._1_1_ != '\0')) {
        TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_888,(int)local_888[1] - *(int *)((longlong)local_888 + 0x34),1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1416e4640 FUN_1416e4640 body=3879 status=ok
// SIG undefined FUN_1416e4640(void)

longlong * FUN_1416e4640(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong **pplVar3;
  int iVar4;
  void *pvVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong *local_58;
  undefined8 local_50;
  void *local_48;
  int local_40;
  longlong local_38 [2];
  
  iVar10 = 0;
  *param_1 = 0;
  plVar8 = param_1 + 0x10;
  param_1[1] = 0;
  plVar9 = param_1 + 0x26;
  param_1[2] = 0;
  plVar2 = param_1 + 0x28;
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
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *plVar8 = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *plVar9 = 0;
  param_1[0x27] = 0;
  *plVar2 = 0;
  param_1[0x29] = 0;
  if ((wchar_t *)*param_1 != L"/Config/") {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,9);
      iVar10 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar10 + 9;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
    }
    builtin_wcsncpy((wchar_t *)*param_1,L"/Config/",9);
  }
  if ((wchar_t *)param_1[2] != L"/Engine/") {
    iVar10 = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    if (*(int *)((longlong)param_1 + 0x1c) != 9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 2,9);
      iVar10 = (int)param_1[3];
    }
    *(int *)(param_1 + 3) = iVar10 + 9;
    if (*(int *)((longlong)param_1 + 0x1c) < iVar10 + 9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 2);
    }
    builtin_wcsncpy((wchar_t *)param_1[2],L"/Engine/",9);
  }
  if ((undefined *)param_1[4] != &DAT_144cfce70) {
    iVar10 = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) != 7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 4,7);
      iVar10 = (int)param_1[5];
    }
    *(int *)(param_1 + 5) = iVar10 + 7;
    if (*(int *)((longlong)param_1 + 0x2c) < iVar10 + 7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow();
    }
    puVar7 = (undefined8 *)param_1[4];
    *puVar7 = 0x6d00610047002f;
    *(undefined4 *)(puVar7 + 1) = 0x2f0065;
    *(undefined2 *)((longlong)puVar7 + 0xc) = 0;
  }
  if ((wchar_t *)param_1[6] != L"/Script/") {
    iVar10 = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    if (*(int *)((longlong)param_1 + 0x3c) != 9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 6,9);
      iVar10 = (int)param_1[7];
    }
    *(int *)(param_1 + 7) = iVar10 + 9;
    if (*(int *)((longlong)param_1 + 0x3c) < iVar10 + 9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 6);
    }
    builtin_wcsncpy((wchar_t *)param_1[6],L"/Script/",9);
  }
  if ((wchar_t *)param_1[8] != L"/Memory/") {
    iVar10 = 0;
    *(undefined4 *)(param_1 + 9) = 0;
    if (*(int *)((longlong)param_1 + 0x4c) != 9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 8,9);
      iVar10 = (int)param_1[9];
    }
    *(int *)(param_1 + 9) = iVar10 + 9;
    if (*(int *)((longlong)param_1 + 0x4c) < iVar10 + 9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 8);
    }
    builtin_wcsncpy((wchar_t *)param_1[8],L"/Memory/",9);
  }
  if ((undefined *)param_1[10] != &DAT_144cfceb0) {
    iVar10 = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    if (*(int *)((longlong)param_1 + 0x5c) != 7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 10,7);
      iVar10 = (int)param_1[0xb];
    }
    *(int *)(param_1 + 0xb) = iVar10 + 7;
    if (*(int *)((longlong)param_1 + 0x5c) < iVar10 + 7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 10);
    }
    puVar7 = (undefined8 *)param_1[10];
    *puVar7 = 0x6d00650054002f;
    *(undefined4 *)(puVar7 + 1) = 0x2f0070;
    *(undefined2 *)((longlong)puVar7 + 0xc) = 0;
  }
  plVar6 = (longlong *)FPaths::EngineContentDir(&local_58);
  plVar1 = param_1 + 0xe;
  if (plVar1 != plVar6) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar6;
    *plVar6 = 0;
    *(int *)(param_1 + 0xf) = (int)plVar6[1];
    *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)plVar6 + 0xc);
    plVar6[1] = 0;
  }
  iVar10 = 0;
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if ((wchar_t *)*plVar8 != L"../../Content/") {
    *(undefined4 *)(param_1 + 0x11) = 0;
    iVar11 = iVar10;
    if (*(int *)((longlong)param_1 + 0x8c) != 0xf) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar8,0xf);
      iVar11 = (int)param_1[0x11];
    }
    *(int *)(param_1 + 0x11) = iVar11 + 0xf;
    if (*(int *)((longlong)param_1 + 0x8c) < iVar11 + 0xf) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar8);
    }
    builtin_wcsncpy((wchar_t *)*plVar8,L"../../Content/",0xf);
  }
  puVar7 = (undefined8 *)FPaths::EngineDir(local_38);
  iVar11 = *(int *)(puVar7 + 1);
  local_58 = (longlong *)*puVar7;
  *puVar7 = 0;
  iVar4 = *(int *)(puVar7 + 1);
  local_50 = puVar7[1];
  puVar7[1] = 0;
  if (*(int *)((longlong)puVar7 + 0xc) < (int)((10 - (uint)(iVar11 != 0)) + iVar4)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
  }
  FString::PathAppend(&local_58,L"Shaders/",8);
  pplVar3 = (longlong **)(param_1 + 0x12);
  if (pplVar3 == &local_58) {
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (*pplVar3 != (longlong *)0x0) {
      FMemory::Free();
    }
    *pplVar3 = local_58;
    *(int *)(param_1 + 0x13) = (int)local_50;
    *(undefined4 *)((longlong)param_1 + 0x9c) = local_50._4_4_;
    local_50 = 0;
    local_58 = (longlong *)0x0;
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  plVar1 = param_1 + 0x14;
  if ((wchar_t *)*plVar1 != L"../../Shaders/") {
    *(undefined4 *)(param_1 + 0x15) = 0;
    if (*(int *)((longlong)param_1 + 0xac) != 0xf) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,0xf);
      iVar10 = (int)param_1[0x15];
    }
    *(int *)(param_1 + 0x15) = iVar10 + 0xf;
    if (*(int *)((longlong)param_1 + 0xac) < iVar10 + 0xf) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    builtin_wcsncpy((wchar_t *)*plVar1,L"../../Shaders/",0xf);
  }
  plVar6 = (longlong *)FPaths::ProjectContentDir(local_38);
  plVar1 = param_1 + 0x16;
  if (plVar1 != plVar6) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar6;
    *plVar6 = 0;
    *(int *)(param_1 + 0x17) = (int)plVar6[1];
    *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)plVar6 + 0xc);
    plVar6[1] = 0;
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  plVar6 = (longlong *)FPaths::ProjectConfigDir(local_38);
  plVar1 = param_1 + 0x18;
  if (plVar1 != plVar6) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar6;
    *plVar6 = 0;
    *(int *)(param_1 + 0x19) = (int)plVar6[1];
    *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)((longlong)plVar6 + 0xc);
    plVar6[1] = 0;
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  puVar7 = (undefined8 *)FPaths::ProjectDir(local_38);
  iVar10 = *(int *)(puVar7 + 1);
  local_58 = (longlong *)*puVar7;
  *puVar7 = 0;
  iVar11 = *(int *)(puVar7 + 1);
  local_50 = puVar7[1];
  puVar7[1] = 0;
  if (*(int *)((longlong)puVar7 + 0xc) < (int)((9 - (uint)(iVar10 != 0)) + iVar11)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
  }
  FString::PathAppend(&local_58,L"Script/",7);
  pplVar3 = (longlong **)(param_1 + 0x1a);
  if (pplVar3 == &local_58) {
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (*pplVar3 != (longlong *)0x0) {
      FMemory::Free();
    }
    *pplVar3 = local_58;
    *(int *)(param_1 + 0x1b) = (int)local_50;
    *(undefined4 *)((longlong)param_1 + 0xdc) = local_50._4_4_;
    local_50 = 0;
    local_58 = (longlong *)0x0;
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  plVar6 = (longlong *)FUN_14167d0d0(local_38);
  plVar1 = param_1 + 0x1c;
  if (plVar1 != plVar6) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar6;
    *plVar6 = 0;
    *(int *)(param_1 + 0x1d) = (int)plVar6[1];
    *(undefined4 *)((longlong)param_1 + 0xec) = *(undefined4 *)((longlong)plVar6 + 0xc);
    plVar6[1] = 0;
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_48,L"../../../%s/",&DAT_146299580);
  iVar10 = local_40;
  pvVar5 = local_48;
  local_58 = (longlong *)0x0;
  local_50 = CONCAT44(local_50._4_4_,local_40);
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_58,(10 - (uint)(local_40 != 0)) + local_40,0);
  _guard_xfg_dispatch_icall_nop(local_58,pvVar5,(longlong)iVar10 * 2);
  FString::PathAppend(&local_58,L"Content/",8);
  pplVar3 = (longlong **)(param_1 + 0x1e);
  if (pplVar3 == &local_58) {
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (*pplVar3 != (longlong *)0x0) {
      FMemory::Free();
    }
    *pplVar3 = local_58;
    *(int *)(param_1 + 0x1f) = (int)local_50;
    *(undefined4 *)((longlong)param_1 + 0xfc) = local_50._4_4_;
  }
  iVar10 = local_40;
  pvVar5 = local_48;
  local_58 = (longlong *)0x0;
  local_50 = CONCAT44(local_50._4_4_,local_40);
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_58,(9 - (uint)(local_40 != 0)) + local_40,0);
  _guard_xfg_dispatch_icall_nop(local_58,pvVar5,(longlong)iVar10 * 2);
  FString::PathAppend(&local_58,L"Config/",7);
  pplVar3 = (longlong **)(param_1 + 0x20);
  if (pplVar3 == &local_58) {
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (*pplVar3 != (longlong *)0x0) {
      FMemory::Free();
    }
    *pplVar3 = local_58;
    *(int *)(param_1 + 0x21) = (int)local_50;
    *(undefined4 *)((longlong)param_1 + 0x10c) = local_50._4_4_;
  }
  iVar10 = local_40;
  pvVar5 = local_48;
  local_58 = (longlong *)0x0;
  local_50 = CONCAT44(local_50._4_4_,local_40);
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_58,(9 - (uint)(local_40 != 0)) + local_40,0);
  _guard_xfg_dispatch_icall_nop(local_58,pvVar5,(longlong)iVar10 * 2);
  FString::PathAppend(&local_58,L"Script/",7);
  pplVar3 = (longlong **)(param_1 + 0x22);
  if (pplVar3 == &local_58) {
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (*pplVar3 != (longlong *)0x0) {
      FMemory::Free();
    }
    *pplVar3 = local_58;
    *(int *)(param_1 + 0x23) = (int)local_50;
    *(undefined4 *)((longlong)param_1 + 0x11c) = local_50._4_4_;
  }
  pvVar5 = local_48;
  local_58 = (longlong *)0x0;
  local_50 = CONCAT44(local_50._4_4_,local_40);
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_58,(8 - (uint)(local_40 != 0)) + local_40,0);
  _guard_xfg_dispatch_icall_nop(local_58,pvVar5,(longlong)local_40 * 2);
  FString::PathAppend(&local_58,L"Saved/",6);
  pplVar3 = (longlong **)(param_1 + 0x24);
  if (pplVar3 == &local_58) {
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if (*pplVar3 != (longlong *)0x0) {
      FMemory::Free();
    }
    *pplVar3 = local_58;
    *(int *)(param_1 + 0x25) = (int)local_50;
    *(undefined4 *)((longlong)param_1 + 300) = local_50._4_4_;
  }
  FUN_1416f0dc0(plVar2,0xb);
  iVar10 = (int)param_1[0x29];
  *(int *)(param_1 + 0x29) = iVar10 + 1;
  if (*(int *)((longlong)param_1 + 0x14c) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar2,iVar10);
  }
  lVar12 = (longlong)iVar10 * 0x20 + *plVar2;
  FString::FString(lVar12,param_1 + 2);
  FString::FString(lVar12 + 0x10,param_1 + 0xe);
  iVar10 = (int)param_1[0x29];
  *(int *)(param_1 + 0x29) = iVar10 + 1;
  if (*(int *)((longlong)param_1 + 0x14c) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar2,iVar10);
  }
  lVar12 = (longlong)iVar10 * 0x20 + *plVar2;
  FString::FString(lVar12,param_1 + 4);
  FString::FString(lVar12 + 0x10,plVar8);
  iVar10 = (int)param_1[0x29];
  *(int *)(param_1 + 0x29) = iVar10 + 1;
  if (*(int *)((longlong)param_1 + 0x14c) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar2,iVar10);
  }
  lVar12 = (longlong)iVar10 * 0x20 + *plVar2;
  FString::FString(lVar12,param_1 + 2);
  FString::FString(lVar12 + 0x10,param_1 + 0x12);
  iVar10 = (int)param_1[0x29];
  *(int *)(param_1 + 0x29) = iVar10 + 1;
  if (*(int *)((longlong)param_1 + 0x14c) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar2,iVar10);
  }
  lVar12 = (longlong)iVar10 * 0x20 + *plVar2;
  FString::FString(lVar12,param_1 + 2);
  FString::FString(lVar12 + 0x10,param_1 + 0x14);
  iVar10 = (int)param_1[0x29];
  *(int *)(param_1 + 0x29) = iVar10 + 1;
  if (*(int *)((longlong)param_1 + 0x14c) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar2,iVar10);
  }
  lVar12 = (longlong)iVar10 * 0x20 + *plVar2;
  FString::FString(lVar12,param_1 + 4);
  FString::FString(lVar12 + 0x10,param_1 + 0x16);
  iVar10 = (int)param_1[0x29];
  *(int *)(param_1 + 0x29) = iVar10 + 1;
  if (*(int *)((longlong)param_1 + 0x14c) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar2,iVar10);
  }
  lVar12 = (longlong)iVar10 * 0x20 + *plVar2;
  FString::FString(lVar12,param_1 + 6);
  FString::FString(lVar12 + 0x10,param_1 + 0x1a);
  iVar10 = (int)param_1[0x29];
  *(int *)(param_1 + 0x29) = iVar10 + 1;
  if (*(int *)((longlong)param_1 + 0x14c) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar2,iVar10);
  }
  lVar12 = (longlong)iVar10 * 0x20 + *plVar2;
  FString::FString(lVar12,param_1 + 6);
  FString::FString(lVar12 + 0x10,param_1 + 0x1a);
  iVar10 = (int)param_1[0x29];
  *(int *)(param_1 + 0x29) = iVar10 + 1;
  if (*(int *)((longlong)param_1 + 0x14c) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar2,iVar10);
  }
  lVar12 = (longlong)iVar10 * 0x20 + *plVar2;
  FString::FString(lVar12,param_1 + 10);
  FString::FString(lVar12 + 0x10,param_1 + 0x1c);
  iVar10 = (int)param_1[0x29];
  *(int *)(param_1 + 0x29) = iVar10 + 1;
  if (*(int *)((longlong)param_1 + 0x14c) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar2,iVar10);
  }
  lVar12 = (longlong)iVar10 * 0x20 + *plVar2;
  FString::FString(lVar12,param_1 + 4);
  FString::FString(lVar12 + 0x10,param_1 + 0x1e);
  iVar10 = (int)param_1[0x29];
  *(int *)(param_1 + 0x29) = iVar10 + 1;
  if (*(int *)((longlong)param_1 + 0x14c) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar2,iVar10);
  }
  lVar12 = (longlong)iVar10 * 0x20 + *plVar2;
  FString::FString(lVar12,param_1 + 6);
  FString::FString(lVar12 + 0x10,param_1 + 0x22);
  iVar10 = (int)param_1[0x29];
  *(int *)(param_1 + 0x29) = iVar10 + 1;
  if (*(int *)((longlong)param_1 + 0x14c) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar2,iVar10);
  }
  lVar12 = (longlong)iVar10 * 0x20 + *plVar2;
  FString::FString(lVar12,param_1 + 10);
  FString::FString(lVar12 + 0x10,param_1 + 0x24);
  iVar10 = (int)param_1[0x29];
  *(int *)(param_1 + 0x29) = iVar10 + 1;
  if (*(int *)((longlong)param_1 + 0x14c) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar2,iVar10);
  }
  lVar12 = (longlong)iVar10 * 0x20 + *plVar2;
  FString::FString(lVar12,param_1);
  FString::FString(lVar12 + 0x10,param_1 + 0x18);
  FUN_1416f0dc0(plVar9,9);
  iVar10 = (int)param_1[0x27];
  *(int *)(param_1 + 0x27) = iVar10 + 1;
  if (*(int *)((longlong)param_1 + 0x13c) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar9,iVar10);
  }
  lVar12 = (longlong)iVar10 * 0x20 + *plVar9;
  FString::FString(lVar12,param_1 + 2);
  FString::FString(lVar12 + 0x10,param_1 + 0xe);
  iVar10 = (int)param_1[0x27];
  *(int *)(param_1 + 0x27) = iVar10 + 1;
  if (*(int *)((longlong)param_1 + 0x13c) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar9,iVar10);
  }
  lVar12 = (longlong)iVar10 * 0x20 + *plVar9;
  FString::FString(lVar12,param_1 + 2);
  FString::FString(lVar12 + 0x10,param_1 + 0x12);
  iVar10 = (int)param_1[0x27];
  *(int *)(param_1 + 0x27) = iVar10 + 1;
  if (*(int *)((longlong)param_1 + 0x13c) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar9,iVar10);
  }
  lVar12 = (longlong)iVar10 * 0x20 + *plVar9;
  FString::FString(lVar12,param_1 + 4);
  FString::FString(lVar12 + 0x10,param_1 + 0x16);
  iVar10 = (int)param_1[0x27];
  *(int *)(param_1 + 0x27) = iVar10 + 1;
  if (*(int *)((longlong)param_1 + 0x13c) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar9,iVar10);
  }
  lVar12 = (longlong)iVar10 * 0x20 + *plVar9;
  FString::FString(lVar12,param_1 + 6);
  FString::FString(lVar12 + 0x10,param_1 + 0x1a);
  iVar10 = (int)param_1[0x27];
  *(int *)(param_1 + 0x27) = iVar10 + 1;
  if (*(int *)((longlong)param_1 + 0x13c) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar9,iVar10);
  }
  lVar12 = (longlong)iVar10 * 0x20 + *plVar9;
  FString::FString(lVar12,param_1 + 10);
  FString::FString(lVar12 + 0x10,param_1 + 0x1c);
  iVar10 = (int)param_1[0x27];
  *(int *)(param_1 + 0x27) = iVar10 + 1;
  if (*(int *)((longlong)param_1 + 0x13c) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar9,iVar10);
  }
  lVar12 = (longlong)iVar10 * 0x20 + *plVar9;
  FString::FString(lVar12,param_1 + 4);
  FString::FString(lVar12 + 0x10,param_1 + 0x1e);
  iVar10 = (int)param_1[0x27];
  *(int *)(param_1 + 0x27) = iVar10 + 1;
  if (*(int *)((longlong)param_1 + 0x13c) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar9,iVar10);
  }
  lVar12 = (longlong)iVar10 * 0x20 + *plVar9;
  FString::FString(lVar12,param_1 + 6);
  FString::FString(lVar12 + 0x10,param_1 + 0x22);
  iVar10 = (int)param_1[0x27];
  *(int *)(param_1 + 0x27) = iVar10 + 1;
  if (*(int *)((longlong)param_1 + 0x13c) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar9,iVar10);
  }
  lVar12 = (longlong)iVar10 * 0x20 + *plVar9;
  FString::FString(lVar12,param_1 + 10);
  FString::FString(lVar12 + 0x10,param_1 + 0x24);
  iVar10 = (int)param_1[0x27];
  *(int *)(param_1 + 0x27) = iVar10 + 1;
  if (*(int *)((longlong)param_1 + 0x13c) < iVar10 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar9,iVar10);
  }
  lVar12 = (longlong)iVar10 * 0x20 + *plVar9;
  FString::FString(lVar12,param_1);
  FString::FString(lVar12 + 0x10,param_1 + 0x20);
  plVar8 = (longlong *)FUN_1416ba600();
  local_58 = (longlong *)0x0;
  plVar9 = (longlong *)FMemory::Realloc(0,0x20,0);
  local_50 = CONCAT44(local_50._4_4_,2);
  local_58 = plVar9;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_GetPoolName_143fca720;
    plVar9[1] = (longlong)FPackageName::RegisterMountPoint;
    lVar12 = FDelegateHandle::GenerateNewID();
    plVar9[3] = lVar12;
    *plVar9 = (longlong)&PTR_GetPoolName_143fca768;
  }
  (**(code **)(*plVar8 + 0x20))(plVar8,&local_58);
  if ((int)local_50 != 0) {
    if (local_58 == (longlong *)0x0) goto LAB_1416e5538;
    (**(code **)(*local_58 + 0x28))(local_58,0);
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
    }
    local_50 = local_50 & 0xffffffff00000000;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
LAB_1416e5538:
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1416e5570 FUN_1416e5570 body=947 status=ok
// SIG undefined FUN_1416e5570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1416e5570(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  void *_Src;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined1 local_58 [8];
  longlong *local_50;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cfcdb8;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 1),4000);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  local_res8 = param_1;
  FUN_1416e8260(&local_res8,L"game",&DAT_1468e2410);
  FUN_1416e8260(&local_res8,L"engine",&DAT_1468e2360);
  *(undefined1 *)(param_1 + 0x16) = 1;
  lVar5 = FInternationalization::Get();
  plVar7 = *(longlong **)(lVar5 + 0x30);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  puVar6 = (undefined8 *)FCulture::GetName(uVar4);
  local_68 = (void *)0x0;
  local_60 = *(int *)(puVar6 + 1);
  lVar5 = (longlong)local_60;
  _Src = (void *)*puVar6;
  if (local_60 == 0) {
    local_5c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_60,0);
    _guard_xfg_dispatch_icall_nop(local_68,_Src,lVar5 * 2);
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
  puVar6 = (undefined8 *)FUN_1416f61e0(param_1,local_58,&local_68);
  if (param_1 + 6 != puVar6) {
    param_1[6] = *puVar6;
    *puVar6 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 7,puVar6 + 1);
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
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  lVar5 = FInternationalization::Get();
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar7 != (longlong *)0x0) {
    plVar7[1] = (longlong)param_1;
    *plVar7 = (longlong)&DAT_143f3ed00;
    plVar7[2] = (longlong)FUN_1416fa3e0;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[4] = lVar8;
    *plVar7 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar5 + 8,1);
    (**(code **)(*plVar7 + 0x20))(plVar7,local_res10);
    iVar3 = *(int *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x10) = iVar3 + 1;
    if (*(int *)(lVar5 + 0x14) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar5 + 8,iVar3);
    }
    puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar5 + 8));
    *puVar6 = plVar7;
    *(undefined4 *)(puVar6 + 1) = 3;
  }
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&DAT_143f3ed00;
    plVar7[1] = (longlong)param_1;
    plVar7[2] = (longlong)FPackageLocalizationCache::HandleContentPathMounted;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar7[4] = lVar5;
    *plVar7 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464b4468,1);
    (**(code **)(*plVar7 + 0x20))(plVar7,local_res18);
    iVar3 = DAT_1464b4470;
    lVar5 = (longlong)DAT_1464b4470;
    DAT_1464b4470 = DAT_1464b4470 + 1;
    if (DAT_1464b4474 < DAT_1464b4470) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464b4468,iVar3);
    }
    puVar6 = (undefined8 *)(lVar5 * 0x10 + DAT_1464b4468);
    *puVar6 = plVar7;
    *(undefined4 *)(puVar6 + 1) = 3;
  }
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&DAT_143f3ed00;
    plVar7[1] = (longlong)param_1;
    plVar7[2] = (longlong)FPackageLocalizationCache::HandleContentPathDismounted;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar7[4] = lVar5;
    *plVar7 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464b4480,1);
    (**(code **)(*plVar7 + 0x20))(plVar7,local_res20);
    iVar3 = DAT_1464b4488;
    lVar5 = (longlong)DAT_1464b4488;
    DAT_1464b4488 = DAT_1464b4488 + 1;
    if (DAT_1464b448c < DAT_1464b4488) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464b4480,iVar3);
    }
    puVar6 = (undefined8 *)(lVar5 * 0x10 + _DAT_1464b4480);
    *puVar6 = plVar7;
    *(undefined4 *)(puVar6 + 1) = 3;
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1416e5930 FUN_1416e5930 body=209 status=ok
// SIG undefined FUN_1416e5930(void)

undefined8 * FUN_1416e5930(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  undefined8 *local_28;
  undefined1 *puStack_20;
  
  *param_1 = param_2;
  puStack_20 = local_res18;
  *(undefined4 *)(param_1 + 1) = param_3;
  local_28 = (undefined8 *)&LAB_1416eb8e0;
  local_res18[0] = 0;
  local_res10[0] = param_3;
  local_res20 = param_2;
  lVar1 = FUN_1415d8310(&local_28,&DAT_1464b49c0);
  TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x18,local_res8,local_res20);
  if ((local_res8[0] == -1) ||
     (lVar2 = (longlong)local_res8[0] * 0x60 + *(longlong *)(lVar1 + 0x18), lVar2 == 0)) {
    local_28 = &local_res20;
    FUN_1416e0200(lVar1 + 0x18,local_res8,&local_28,0);
    lVar2 = (longlong)local_res8[0] * 0x60 + *(longlong *)(lVar1 + 0x18);
  }
  FUN_14044be50(lVar2 + 8,local_res8,local_res10,0);
  return param_1;
}



// FUNCTION 1416e5a10 FUN_1416e5a10 body=875 status=ok
// SIG undefined FUN_1416e5a10(void)

undefined8 * FUN_1416e5a10(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 local_res8;
  longlong local_d8 [2];
  longlong local_c8 [2];
  longlong local_b8 [2];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144171b00;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FText::FText(param_1 + 5);
  FText::FText(param_1 + 8);
  *param_1 = &PTR__scalar_deleting_destructor__144cfd270;
  FWeakObjectPtr::operator=(param_1 + 0xb,param_2);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  cVar5 = FText::IsEmpty(param_3);
  if (cVar5 == '\0') {
    FText::operator=(param_1 + 5,param_3);
  }
  else {
    if ((DAT_1469e6988 != 0) && (DAT_1469e6980 != (longlong *)0x0)) {
      cVar5 = (**(code **)(*DAT_1469e6980 + 0x18))();
      if (cVar5 != '\0') {
        plVar7 = (longlong *)0x0;
        if (DAT_1469e6988 != 0) {
          plVar7 = DAT_1469e6980;
        }
        (**(code **)(*plVar7 + 0x38))(plVar7,local_a8,param_2,0);
        FText::operator=(param_1 + 5,local_a8);
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_a0 + 1;
          lVar4 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar2 = (int *)((longlong)local_a0 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_a0 + 8))(local_a0,1);
            }
          }
        }
        if (param_2 != 0) {
          uVar6 = UObjectBaseUtility::GetPathName(param_2,local_c8,0);
          FString::operator=(param_1 + 0xc,uVar6);
          if (local_c8[0] != 0) {
            FMemory::Free();
          }
        }
        goto LAB_1416e5c9c;
      }
    }
    if (param_2 == 0) {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_60,L"<None>",L"MessageLog",L"NoneObjectToken");
      FText::operator=(param_1 + 5,uVar6);
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_58 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
    }
    else {
      local_res8 = *(undefined8 *)(param_2 + 0x18);
      FName::ToString(&local_res8,local_d8);
      uVar6 = FText::FromString(local_78,local_d8);
      FText::operator=(param_1 + 5,uVar6);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_70 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
      if (local_d8[0] != 0) {
        FMemory::Free();
      }
      uVar6 = UObjectBaseUtility::GetPathName(param_2,local_b8,0);
      FString::operator=(param_1 + 0xc,uVar6);
      if (local_b8[0] != 0) {
        FMemory::Free();
      }
    }
  }
LAB_1416e5c9c:
  if ((DAT_1469e6998 != 0) && (DAT_1469e6990 != (longlong *)0x0)) {
    cVar5 = (**(code **)(*DAT_1469e6990 + 0x18))();
    if (cVar5 != '\0') {
      plVar7 = (longlong *)0x0;
      if (DAT_1469e6998 != 0) {
        plVar7 = DAT_1469e6990;
      }
      (**(code **)(*plVar7 + 0x38))(plVar7,local_90,param_2,1);
      FText::operator=(param_1 + 8,local_90);
      plVar7 = local_88;
      goto LAB_1416e5d29;
    }
  }
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_48,L"<None>",L"MessageLog",L"NoneContentObjectToken");
  FText::operator=(param_1 + 8,uVar6);
  plVar7 = local_40;
LAB_1416e5d29:
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return param_1;
}



// FUNCTION 1416e5d80 ~TArray<FAsyncLoadEvent,FDefaultAllocator> body=130 status=ok
// SIG undefined ~TArray<FAsyncLoadEvent,FDefaultAllocator>(void)

void TArray<FAsyncLoadEvent,FDefaultAllocator>::~TArray<FAsyncLoadEvent,FDefaultAllocator>
               (longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar2 = *param_1;
  iVar4 = (int)param_1[1];
  if (iVar4 != 0) {
    plVar3 = (longlong *)(lVar2 + 0x40);
    do {
      if ((int)plVar3[2] != 0) {
        plVar1 = (longlong *)*plVar3;
        if ((longlong *)*plVar3 == (longlong *)0x0) {
          plVar1 = plVar3 + -4;
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))(plVar1,0);
        }
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0xc;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar2 = *param_1;
  }
  if (lVar2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1416e5e10 ~TArray<FHandleToCmdIndex,FDefaultAllocator> body=128 status=ok
// SIG undefined ~TArray<FHandleToCmdIndex,FDefaultAllocator>(void)

void TArray<FHandleToCmdIndex,FDefaultAllocator>::~TArray<FHandleToCmdIndex,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 8);
    do {
      lVar1 = *plVar2;
      if (lVar1 != 0) {
        TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1);
        FMemory::operator_delete(lVar1,0x10);
      }
      plVar2 = plVar2 + 2;
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



// FUNCTION 1416e5e90 ~TSparseArray<TSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=397 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar4) goto LAB_1416e5f51;
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
LAB_1416e5f51:
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
      if (*(longlong *)((longlong)iStack_1c * 0x38 + *param_1 + 0x20) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 1416e6020 ~TSparseArray<TSetElement<TTuple<UObject_*,FObjectInitializer>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=395 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<UObject_*,FObjectInitializer>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<UObject_*,FObjectInitializer>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<UObject_*,FObjectInitializer>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar4) goto LAB_1416e60e1;
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
LAB_1416e60e1:
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
      FUN_141781fc0((longlong)iStack_1c * 0x160 + 8 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<352,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 1416e61b0 ~FArchiveTraceRoute body=649 status=ok
// SIG undefined ~FArchiveTraceRoute(void)

void FArchiveTraceRoute::~FArchiveTraceRoute(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  undefined1 local_78 [16];
  longlong *local_68;
  undefined2 local_60;
  longlong *local_58;
  uint uStack_50;
  uint uStack_4c;
  uint *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  plVar1 = param_1 + 0x12;
  puStack_48 = (uint *)(param_1 + 0x14);
  local_98 = 0;
  uStack_94 = 1;
  *param_1 = &PTR__scalar_deleting_destructor__144cfd2e8;
  iVar2 = *(int *)(param_1 + 0x17);
  local_88._4_4_ = 0;
  uStack_80 = 0;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[0x16];
    if ((uint *)param_1[0x16] == (uint *)0x0) {
      puVar8 = puStack_48;
    }
    uVar7 = *puVar8;
    local_98 = 0;
    uStack_80 = 0;
    while (uVar7 == 0) {
      lVar6 = (longlong)(int)local_98;
      uStack_80 = uStack_80 + 0x20;
      uVar7 = local_98 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
      local_98 = uVar7;
      if (bVar3) goto LAB_1416e628d;
      uVar7 = puVar8[lVar6 + 1];
    }
    uStack_94 = -uVar7 & uVar7;
    iVar4 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_88._4_4_ = (uStack_80 - iVar4) + 0x1f;
    if (iVar2 < local_88._4_4_) {
LAB_1416e628d:
      local_88._4_4_ = iVar2;
    }
  }
  auStack_40._4_4_ = local_88._4_4_;
  auStack_40._0_4_ = 0xffffffff;
  auStack_40._8_4_ = uStack_80;
  auStack_40._12_4_ = iStack_7c;
  uStack_50 = local_98;
  uStack_4c = uStack_94;
  local_60 = 0;
  local_30._0_4_ = SUB84(plVar1,0);
  local_30._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_80 = 0xffffffff;
  iStack_7c = local_88._4_4_;
  uStack_90 = local_98;
  uStack_8c = uStack_94;
  local_78._8_4_ = (undefined4)local_30;
  local_78._0_8_ = auStack_40._8_8_;
  local_78._12_4_ = local_30._4_4_;
  bVar3 = local_88._4_4_ < *(int *)(param_1 + 0x17);
  local_68 = plVar1;
  local_58 = plVar1;
  local_30 = plVar1;
  local_88 = puStack_48;
  if (bVar3) {
    do {
      lVar5 = (longlong)iStack_7c;
      lVar6 = *(longlong *)(lVar5 * 0x18 + 8 + *plVar1);
      if (lVar6 != 0) {
        if (*(longlong *)(lVar6 + 0xb0) != 0) {
          FMemory::Free();
        }
        *(undefined4 *)(lVar6 + 0xa0) = 0;
        if (*(longlong *)(lVar6 + 0x98) != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (lVar6 + 0x58);
        *(undefined4 *)(lVar6 + 0x50) = 0;
        if (*(longlong *)(lVar6 + 0x48) != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (lVar6 + 8);
        FMemory::operator_delete(lVar6,0xc0);
      }
      *(undefined8 *)(lVar5 * 0x18 + 8 + *plVar1) = 0;
      uStack_80 = uStack_80 & ~uStack_8c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
    } while (iStack_7c < (int)local_88[6]);
    if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
    }
  }
  if (param_1[0x1d] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (plVar1);
  FArchive::~FArchive(param_1);
  return;
}



// FUNCTION 1416e6440 FUN_1416e6440 body=447 status=ok
// SIG undefined FUN_1416e6440(void)

void FUN_1416e6440(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_IsPromotedBuild_144cfd548;
  FUN_1416fbb40();
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  param_1[1] = 0;
  FUN_1415b5910(param_1[3]);
  param_1[3] = 0;
  FUN_1415b5910(param_1[4]);
  param_1[4] = 0;
  FUN_1415b5910(param_1[5]);
  param_1[5] = 0;
  FUN_1415b5910(param_1[6]);
  param_1[6] = 0;
  TArray<FAsyncLoadEvent,FDefaultAllocator>::~TArray<FAsyncLoadEvent,FDefaultAllocator>
            (param_1 + 0x59);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x51));
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (param_1[0x4f] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x47);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x42));
  if (param_1[0x3f] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (param_1[0x3d] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x35);
  if (param_1[0x33] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2e));
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x24);
  if (param_1[0x22] != 0) {
    FMemory::Free();
  }
  if (param_1[0x20] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b));
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x11);
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  return;
}



// FUNCTION 1416e6600 FUN_1416e6600 body=766 status=ok
// SIG undefined FUN_1416e6600(void)

void FUN_1416e6600(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cfd2a8;
  FAsyncPackage::MarkRequestIDsAsComplete();
  if (param_1[10] != 0) {
    FUN_141736700(param_1[10] + 0x200);
    *(undefined8 *)(param_1[10] + 800) = 0;
    param_1[10] = 0;
  }
  if (DAT_1468c21ab != '\0') {
    *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
    FAsyncPackage::RemoveAllNodes(param_1);
  }
  FUN_1416f10d0(param_1);
  lVar3 = 3;
  puVar2 = param_1 + 0x9e;
  do {
    plVar1 = puVar2 + -3;
    puVar2 = puVar2 + -3;
    lVar3 = lVar3 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar3 != 0);
  if (param_1[0x91] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (param_1[0x8f] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x87);
  *(undefined4 *)(param_1 + 0x86) = 0;
  if (param_1[0x85] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x7d);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (param_1[0x7b] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x73);
  *(undefined4 *)(param_1 + 0x72) = 0;
  if (param_1[0x71] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FPolygonID,FOctreeElementId>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x69);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (param_1[0x67] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x5f);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (param_1[0x5b] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x53);
  *(undefined4 *)(param_1 + 0x52) = 0;
  if (param_1[0x51] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x49);
  if (param_1[0x47] != 0) {
    FMemory::Free();
  }
  if (param_1[0x45] != 0) {
    FMemory::Free();
  }
  if (param_1[0x43] != 0) {
    FMemory::Free();
  }
  if (param_1[0x41] != 0) {
    FMemory::Free();
  }
  if (param_1[0x3f] != 0) {
    FMemory::Free();
  }
  if (param_1[0x3d] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x36));
  *(undefined4 *)(param_1 + 0x35) = 0;
  if (param_1[0x34] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x2c);
  if (param_1[0x29] != 0) {
    FMemory::Free();
  }
  if (param_1[0x27] != 0) {
    FMemory::Free();
  }
  if (param_1[0x25] != 0) {
    FMemory::Free();
  }
  if (param_1[0x23] != 0) {
    FMemory::Free();
  }
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1f] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  TArray<FHandleToCmdIndex,FDefaultAllocator>::~TArray<FHandleToCmdIndex,FDefaultAllocator>
            (param_1 + 0xc);
  lVar3 = param_1[7];
  if (lVar3 != 0) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar3);
    FMemory::operator_delete(lVar3,0x10);
  }
  FGCObject::~FGCObject(param_1);
  return;
}



// FUNCTION 1416e6900 ~FDeferredInitializationTrackerBase body=155 status=ok
// SIG undefined ~FDeferredInitializationTrackerBase(void)

void FDeferredInitializationTrackerBase::~FDeferredInitializationTrackerBase(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cfcad0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x17);
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<UObject_*,FObjectInitializer>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<UObject_*,FObjectInitializer>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  return;
}



// FUNCTION 1416e69a0 ~FLongPackagePathsSingleton body=394 status=ok
// SIG undefined ~FLongPackagePathsSingleton(void)

void FLongPackagePathsSingleton::~FLongPackagePathsSingleton(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  
  TArray<FSaveGameUserSetting,FDefaultAllocator>::~TArray<FSaveGameUserSetting,FDefaultAllocator>
            (param_1 + 0x28);
  TArray<FSaveGameUserSetting,FDefaultAllocator>::~TArray<FSaveGameUserSetting,FDefaultAllocator>
            (param_1 + 0x26);
  if (param_1[0x24] != 0) {
    FMemory::Free();
  }
  if (param_1[0x22] != 0) {
    FMemory::Free();
  }
  if (param_1[0x20] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1c] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  iVar1 = (int)param_1[0xd];
  plVar2 = (longlong *)param_1[0xc];
  if (iVar1 != 0) {
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    plVar2 = (longlong *)param_1[0xc];
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1416e6b30 ~FPackageFileSummary body=130 status=ok
// SIG undefined ~FPackageFileSummary(void)

void FPackageFileSummary::~FPackageFileSummary(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1416e6bc0 ~FPackageLocalizationCache body=270 status=ok
// SIG undefined ~FPackageLocalizationCache(void)

void FPackageLocalizationCache::~FPackageLocalizationCache(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cfcdb8;
  cVar4 = FInternationalization::IsAvailable();
  if (cVar4 != '\0') {
    lVar5 = FInternationalization::Get();
    FUN_140483870(lVar5 + 8,param_1);
  }
  FUN_140483870(&DAT_1464b4468,param_1);
  FUN_140483870(&DAT_1464b4480,param_1);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xc);
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  iVar6 = *(int *)(param_1 + 9);
  lVar5 = param_1[8];
  if (iVar6 != 0) {
    do {
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                (lVar5);
      lVar5 = lVar5 + 0x20;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = param_1[8];
  }
  if (lVar5 != 0) {
    FMemory::Free(lVar5);
  }
  plVar3 = (longlong *)param_1[7];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  *param_1 = &PTR_FUN_144024f50;
  return;
}



// FUNCTION 1416e6cd0 ~FPackageLocalizationCultureCache body=278 status=ok
// SIG undefined ~FPackageLocalizationCultureCache(void)

void FPackageLocalizationCultureCache::~FPackageLocalizationCultureCache(LPCRITICAL_SECTION param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *(undefined4 *)&param_1[5].SpinCount = 0;
  if (param_1[5].LockSemaphore != (HANDLE)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 4,0);
  if (param_1[4].SpinCount != 0) {
    FMemory::Free();
  }
  if (param_1[4].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FMemory::Free();
  }
  *(undefined4 *)&param_1[3].SpinCount = 0;
  if (param_1[3].LockSemaphore != (HANDLE)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TArray<FString,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 2,0);
  if (param_1[2].SpinCount != 0) {
    FMemory::Free();
  }
  if (param_1[2].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    FMemory::Free();
  }
  iVar2 = (int)param_1[1].SpinCount;
  plVar1 = param_1[1].LockSemaphore;
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = param_1[1].LockSemaphore;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)&param_1[1].OwningThread;
  plVar1 = *(longlong **)&param_1[1].LockCount;
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)&param_1[1].LockCount;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001416e6ddf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(param_1);
  return;
}



// FUNCTION 1416e6df0 FUN_1416e6df0 body=193 status=ok
// SIG undefined FUN_1416e6df0(void)

void FUN_1416e6df0(longlong *param_1)

{
  uint *puVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *puStack_10;
  
  lVar5 = *param_1;
  FUN_14178a260();
  cVar2 = FUN_1415ad720();
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) goto LAB_1416e6e3b;
  }
  lVar4 = FUN_1416f86a0();
  *(int *)(lVar4 + 0x2d8) = *(int *)(lVar4 + 0x2d8) + -1;
LAB_1416e6e3b:
  if (*(char *)(lVar5 + 0xcb) == '\0') {
    puVar1 = (uint *)(*(longlong *)(lVar5 + 0x58) + 8);
    *puVar1 = *puVar1 | 0x80000;
  }
  local_res8[0] = 0;
  *(undefined8 *)(*param_1 + 0xd8) = 0;
  *(undefined8 *)(*param_1 + 0xe0) = 0;
  puStack_10 = local_res8;
  local_18 = FUN_1406ddef0;
  lVar5 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
  *(longlong *)(lVar5 + 0xa0) = param_1[1];
  return;
}



// FUNCTION 1416e6ec0 FUN_1416e6ec0 body=207 status=ok
// SIG undefined FUN_1416e6ec0(void)

void FUN_1416e6ec0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  int *piVar7;
  undefined1 local_res8 [8];
  int local_res10 [2];
  undefined1 *local_28;
  undefined1 *puStack_20;
  
  puStack_20 = local_res8;
  local_res8[0] = 0;
  local_28 = &LAB_1416eb8e0;
  lVar4 = FUN_1415d8310(&local_28,&DAT_1464b49c0);
  uVar3 = *param_1;
  uVar2 = *(undefined4 *)(param_1 + 1);
  plVar1 = (longlong *)(lVar4 + 0x18);
  TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res10,uVar3);
  lVar4 = 0;
  if (local_res10[0] != -1) {
    lVar4 = (longlong)local_res10[0] * 0x60 + *plVar1;
  }
  lVar6 = lVar4 + 8;
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  if (lVar6 != 0) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Remove(lVar6,uVar2);
    piVar7 = (int *)(lVar4 + 0x3c);
    piVar5 = (int *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      piVar7 = (int *)&DAT_00000034;
      piVar5 = (int *)&DAT_00000008;
    }
    if (*piVar5 == *piVar7) {
      TSet<TTuple<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
      ::Remove(plVar1,uVar3);
    }
  }
  return;
}



// FUNCTION 1416e6f90 FUN_1416e6f90 body=155 status=ok
// SIG undefined FUN_1416e6f90(void)

longlong FUN_1416e6f90(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x20);
    if ((lVar2 != 0) && (lVar2 == *(longlong *)(param_1 + 0x98))) {
      local_res10 = *(undefined8 *)(lVar1 + 0x18);
      FUN_1416e1d50(*(undefined8 *)(param_1 + 0x90),local_res8,&local_res10,0);
      if (*(char *)(param_1 + 0xa0) != '\0') {
        *(longlong *)(param_1 + 0x98) = *param_2;
        (**(code **)(*(longlong *)*param_2 + 0xa8))((longlong *)*param_2,param_1);
        *(longlong *)(param_1 + 0x98) = lVar2;
      }
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 1416e7030 FUN_1416e7030 body=411 status=ok
// SIG undefined FUN_1416e7030(void)

longlong * FUN_1416e7030(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x14,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x14);
  puVar6 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar4 = (longlong *)param_1[1];
  if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  bVar2 = *(byte *)(param_1 + 5);
  if ((((char)bVar2 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0xccccc < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar2 | 0x80;
    return param_1;
  }
  if ((bVar2 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1416e7430(param_1,*param_2 + (longlong)(int)puVar6 * 0x14);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeTo
              (param_2,local_res8[0]);
  }
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar3);
    }
    puVar1 = (undefined8 *)(*param_2 + (longlong)iVar3 * 0x14);
    puVar5 = puVar6;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 10000;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      puVar5 = puVar1;
    }
    FUN_1416e7430(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined8 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 1416e71d0 FUN_1416e71d0 body=596 status=ok
// SIG undefined FUN_1416e71d0(void)

longlong * FUN_1416e71d0(longlong *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  
  FArchive::UsingCustomVersion(param_1,&DAT_1464b0148);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    iVar3 = FArchive::CustomVer(param_1,&DAT_1464b0148);
    if (iVar3 < 1) {
      FUN_140d66f10(param_1,&local_res8);
      *param_2 = local_res8;
      param_2[1] = local_resc;
      param_2[2] = 0;
      goto LAB_1416e723c;
    }
  }
  FUN_1406da970(param_1,param_2);
LAB_1416e723c:
  uVar4 = FUN_1406da970(param_1);
  plVar5 = (longlong *)FUN_1406da970(uVar4,param_2 + 9);
  puVar1 = *(undefined1 **)plVar5[1];
  if ((undefined1 *)((undefined8 *)plVar5[1])[1] < puVar1 + 1) {
    (**(code **)(*plVar5 + 0x50))(plVar5,param_2 + 0xc,1);
  }
  else {
    *(undefined1 *)(param_2 + 0xc) = *puVar1;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 1;
  }
  plVar5 = (longlong *)FUN_14158ce90(param_1,param_2 + 0xe);
  puVar2 = *(undefined4 **)plVar5[1];
  if ((undefined4 *)((undefined8 *)plVar5[1])[1] < puVar2 + 1) {
    (**(code **)(*plVar5 + 0x50))(plVar5,param_2 + 0x12,4);
    if ((*(byte *)((longlong)plVar5 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar5,param_2 + 0x12,4);
    }
  }
  else {
    param_2[0x12] = *puVar2;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
  }
  FUN_140d66f10(plVar5,param_2 + 0x13);
  if (0x10b < (int)param_1[8]) {
    puVar2 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x15,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2 + 0x15,4);
      }
    }
    else {
      param_2[0x15] = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  iVar3 = (int)param_1[8];
  if (0x148 < iVar3) {
    (**(code **)(*param_1 + 8))(param_1,param_2 + 0x16);
    iVar3 = (int)param_1[8];
  }
  if (0x10b < iVar3) {
    uVar4 = (**(code **)(*param_1 + 8))(param_1,param_2 + 0x18);
    FUN_14158ce90(uVar4,param_2 + 0x1a);
    iVar3 = (int)param_1[8];
  }
  if (0x13b < iVar3) {
    FUN_1416e7030(param_1,param_2 + 0x1e);
    iVar3 = (int)param_1[8];
  }
  if (0x13e < iVar3) {
    puVar2 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x22,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2 + 0x22,4);
      }
    }
    else {
      param_2[0x22] = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  if ((*(uint *)(param_1 + 6) >> 0x16 & 1) != 0) {
    FUN_1406da970(param_1,param_2 + 3);
  }
  return param_1;
}



// FUNCTION 1416e7430 FUN_1416e7430 body=426 status=ok
// SIG undefined FUN_1416e7430(void)

longlong * FUN_1416e7430(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
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
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 1,4);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 2,4);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 3,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 3,4);
    }
  }
  else {
    param_2[3] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    param_2[4] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 4,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 4,4);
  }
  return param_1;
}



// FUNCTION 1416e75e0 operator<< body=1062 status=ok
// SIG undefined operator<<(void)

longlong FArchiveTraceRoute::operator<<(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int local_res8 [2];
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_68;
  longlong **local_60;
  longlong *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  if (*param_2 == 0) {
    return param_1;
  }
  if ((*(char *)(param_1 + 0xfc) == '\0') && ((*(uint *)(*param_2 + 8) >> 6 & 1) != 0)) {
    return param_1;
  }
  plVar1 = (longlong *)(param_1 + 0x90);
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res8);
  if (local_res8[0] != -1) {
    lVar7 = *plVar1;
    lVar8 = lVar7 + (longlong)local_res8[0] * 0x18;
    if ((lVar8 != 0) && (plVar6 = *(longlong **)(lVar8 + 8), plVar6 != (longlong *)0x0))
    goto LAB_1416e7749;
  }
  plVar6 = (longlong *)0x0;
  plVar5 = (longlong *)operator_new(0xc0);
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = *param_2;
    plVar5[1] = 0;
    plVar5[2] = 0;
    plVar5[5] = 0;
    plVar5[6] = 0;
    *(undefined4 *)(plVar5 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)plVar5 + 0x3c) = 0;
    plVar5[9] = 0;
    *(undefined4 *)(plVar5 + 10) = 0;
    plVar5[0xb] = 0;
    plVar5[0xc] = 0;
    plVar5[0xf] = 0;
    plVar5[0x10] = 0;
    *(undefined4 *)(plVar5 + 0x11) = 0xffffffff;
    *(undefined4 *)((longlong)plVar5 + 0x8c) = 0;
    plVar5[0x13] = 0;
    *(undefined4 *)(plVar5 + 0x14) = 0;
    *(undefined4 *)(plVar5 + 0x15) = 0x7fffffff;
    *(undefined1 *)((longlong)plVar5 + 0xac) = 0;
    plVar5[0x16] = 0;
    plVar5[0x17] = 0;
    plVar6 = plVar5;
  }
  local_60 = &local_res10;
  local_res10 = plVar6;
  local_68 = param_2;
  FUN_1416e0c80(plVar1,local_res8,&local_68,0);
  lVar7 = *plVar1;
  plVar6 = *(longlong **)(lVar7 + 8 + (longlong)local_res8[0] * 0x18);
LAB_1416e7749:
  plVar5 = (longlong *)(param_1 + 0xe0);
  lVar8 = *plVar5;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res8,lVar8);
  if ((local_res8[0] == -1) || (lVar7 = lVar7 + (longlong)local_res8[0] * 0x18, lVar7 == 0)) {
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar9 = *(longlong **)(lVar7 + 8);
  }
  if (plVar9 == (longlong *)0x0) {
    local_res18 = (longlong *)operator_new(0xc0);
    if (local_res18 != (longlong *)0x0) {
      *local_res18 = *plVar5;
      local_res18[1] = 0;
      local_res18[2] = 0;
      local_res18[5] = 0;
      local_res18[6] = 0;
      *(undefined4 *)(local_res18 + 7) = 0xffffffff;
      *(undefined4 *)((longlong)local_res18 + 0x3c) = 0;
      local_res18[9] = 0;
      *(undefined4 *)(local_res18 + 10) = 0;
      local_res18[0xb] = 0;
      local_res18[0xc] = 0;
      local_res18[0xf] = 0;
      local_res18[0x10] = 0;
      *(undefined4 *)(local_res18 + 0x11) = 0xffffffff;
      *(undefined4 *)((longlong)local_res18 + 0x8c) = 0;
      local_res18[0x13] = 0;
      *(undefined4 *)(local_res18 + 0x14) = 0;
      *(undefined4 *)(local_res18 + 0x15) = 0x7fffffff;
      *(undefined1 *)((longlong)local_res18 + 0xac) = 0;
      local_res18[0x16] = 0;
      local_res18[0x17] = 0;
    }
    local_60 = &local_res18;
    local_68 = plVar5;
    FUN_1416e0c80(plVar1,local_res8,&local_68,0);
    lVar8 = *plVar5;
    plVar9 = *(longlong **)(*plVar1 + 8 + (longlong)local_res8[0] * 0x18);
  }
  if (*param_2 != lVar8) {
    TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
    ::FindId(plVar9 + 0xb,local_res8);
    if (local_res8[0] == -1) {
      lVar8 = 0;
    }
    else {
      lVar8 = plVar9[0xb] + (longlong)local_res8[0] * 0x28;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    lVar7 = lVar8 + 8;
    if (lVar8 == 0) {
      lVar7 = 0;
    }
    if (lVar7 == 0) {
      local_50 = (undefined8 *)0x0;
      local_48 = 1;
      local_58 = plVar6;
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_50,0);
      *local_50 = uVar3;
      local_60 = &local_58;
      local_68 = param_2;
      FUN_1416e10f0(plVar9 + 0xb,local_res8,&local_68,0);
      if (local_50 != (undefined8 *)0x0) {
        FMemory::Free();
      }
    }
    else {
      FTraceRouteRecord::Add(lVar7,uVar3);
    }
    TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
    ::FindId(plVar6 + 1,local_res8,*plVar5);
    if (local_res8[0] == -1) {
      lVar8 = 0;
    }
    else {
      lVar8 = plVar6[1] + (longlong)local_res8[0] * 0x28;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    lVar7 = lVar8 + 8;
    if (lVar8 == 0) {
      lVar7 = 0;
    }
    if (lVar7 == 0) {
      local_50 = (undefined8 *)0x0;
      local_48 = 1;
      local_58 = plVar9;
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_50,0);
      *local_50 = uVar3;
      local_60 = &local_58;
      local_68 = plVar5;
      FUN_1416e10f0(plVar6 + 1,local_res8,&local_68,0);
      if (local_50 != (undefined8 *)0x0) {
        FMemory::Free();
      }
    }
    else {
      FTraceRouteRecord::Add(lVar7,uVar3);
    }
  }
  cVar4 = FUN_1417a6c20(*param_2,0x10);
  if (cVar4 != '\0') {
    FUN_1417a8ce0(*param_2,0x10);
    iVar2 = *(int *)(param_1 + 0xf0);
    *(int *)(param_1 + 0xf0) = iVar2 + 1;
    if (*(int *)(param_1 + 0xf4) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xe8,iVar2);
    }
    *(longlong *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar2 * 8) = *param_2;
  }
  return param_1;
}



// FUNCTION 1416e7a10 operator<< body=250 status=ok
// SIG undefined operator<<(void)

longlong FObjectAndNameAsStringProxyArchive::operator<<(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *local_18;
  undefined8 local_10;
  
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    UObjectBaseUtility::GetPathName(*param_2,&local_18,0);
    FUN_14158ce90(*(undefined8 *)(param_1 + 0x90),&local_18);
  }
  else {
    local_18 = (undefined2 *)0x0;
    local_10 = 0;
    FUN_14158ce90(*(undefined8 *)(param_1 + 0x90));
    puVar3 = &DAT_143f3eda8;
    if ((int)local_10 != 0) {
      puVar3 = local_18;
    }
    uVar1 = UObject::GetPrivateStaticClass();
    lVar2 = FUN_141799410(uVar1,0,puVar3,0);
    *param_2 = lVar2;
    if ((lVar2 == 0) && (*(char *)(param_1 + 0x98) != '\0')) {
      puVar3 = &DAT_143f3eda8;
      if ((int)local_10 != 0) {
        puVar3 = local_18;
      }
      uVar1 = UObject::GetPrivateStaticClass();
      lVar2 = FUN_141799c90(uVar1,0,puVar3,0,0,0,1);
      *param_2 = lVar2;
    }
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1416e7b10 operator<< body=32 status=ok
// SIG undefined operator<<(void)

undefined8 FArchiveUObject::operator<<(undefined8 param_1,undefined8 param_2)

{
  FUN_1417977c0(param_2,param_1);
  return param_1;
}



// FUNCTION 1416e7b30 FUN_1416e7b30 body=46 status=ok
// SIG undefined FUN_1416e7b30(void)

longlong * FUN_1416e7b30(longlong *param_1,undefined4 *param_2)

{
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    *param_2 = 0xffffffff;
    *(undefined8 *)(param_2 + 1) = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2 + 4);
  return param_1;
}



// FUNCTION 1416e7b60 FUN_1416e7b60 body=32 status=ok
// SIG undefined FUN_1416e7b60(void)

undefined8 FUN_1416e7b60(undefined8 param_1,undefined8 param_2)

{
  FUN_1417a7580(param_2,param_1);
  return param_1;
}



// FUNCTION 1416e7b80 FUN_1416e7b80 body=760 status=ok
// SIG undefined FUN_1416e7b80(void)

void FUN_1416e7b80(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  DWORD DVar6;
  longlong lVar7;
  longlong lVar8;
  LARGE_INTEGER local_res8;
  code *local_38;
  LARGE_INTEGER *pLStack_30;
  code *local_28;
  undefined8 local_20;
  
  local_38 = (code *)*param_1;
  iVar1 = (int)param_1[1];
  pLStack_30 = (LARGE_INTEGER *)param_1[1];
  local_res8.QuadPart = 0;
  if (((local_38 != (code *)0x0) && (iVar1 != 0)) &&
     (lVar7 = param_1[2], *(int *)(lVar7 + 0x1b0) != *(int *)(lVar7 + 0x1dc))) {
    lVar8 = *(longlong *)(lVar7 + 0x1e8);
    if (*(longlong *)(lVar7 + 0x1e8) == 0) {
      lVar8 = lVar7 + 0x1e0;
    }
    iVar5 = *(int *)(lVar8 + ((longlong)(*(int *)((longlong)param_1 + 4) + (int)*param_1) &
                             (longlong)*(int *)(lVar7 + 0x1f0) - 1U) * 4);
    if (iVar5 != -1) {
      lVar7 = *(longlong *)(lVar7 + 0x1a8);
      while (lVar8 = (longlong)iVar5, *(code **)(lVar7 + lVar8 * 0x18) != local_38) {
        iVar5 = *(int *)(lVar7 + 0x10 + lVar8 * 0x18);
        if (iVar5 == -1) {
          return;
        }
      }
      if (((iVar5 != -1) && (lVar7 = lVar7 + lVar8 * 0x18, lVar7 != 0)) &&
         ((pcVar2 = *(code **)(lVar7 + 8), pcVar2 != (code *)0x0 &&
          (*(int *)(pcVar2 + 0x1e4) == iVar1)))) {
        param_2[1] = L"Create Linker";
        param_2[2] = *(undefined8 *)(pcVar2 + 0x58);
        *(undefined8 *)(pcVar2 + 0xd0) = *param_2;
        *(undefined8 *)(pcVar2 + 0xd8) = *(undefined8 *)(pcVar2 + 0x58);
        *(wchar_t **)(pcVar2 + 0xe0) = L"Create Linker";
        *(undefined4 *)(pcVar2 + 0xc4) = *(undefined4 *)(param_2 + 3);
        pcVar2[200] = *(code *)((longlong)param_2 + 0x1c);
        pcVar2[0xc9] = *(code *)((longlong)param_2 + 0x1d);
        if (*(double *)(pcVar2 + 0xe8) == 0.0) {
          QueryPerformanceCounter(&local_res8);
          lVar7 = *(longlong *)(pcVar2 + 0x90);
          dVar3 = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
          *(double *)(pcVar2 + 0xe8) = dVar3;
          if ((lVar7 != 0) && (*(double *)(lVar7 + 0xe8) == 0.0)) {
            *(double *)(lVar7 + 0xe8) = dVar3;
          }
        }
        pLStack_30 = &local_res8;
        local_res8.QuadPart = local_res8.QuadPart & 0xffffffffffffff00;
        local_38 = FUN_1406ddef0;
        local_28 = pcVar2;
        lVar7 = FUN_1415d8310(&local_38,&DAT_14622e6dc);
        local_20 = *(undefined8 *)(lVar7 + 0xa0);
        *(code **)(lVar7 + 0xa0) = pcVar2;
        cVar4 = FUN_1415ad720(&DAT_1468e2448);
        if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
           (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) {
          lVar7 = FUN_1416f86a0();
          *(int *)(lVar7 + 0x2d8) = *(int *)(lVar7 + 0x2d8) + 1;
        }
        FUN_1417848b0(0);
        FAsyncPackage::NodeWillBeFiredExternally(pcVar2,0,0);
        FUN_1416eeef0(pcVar2);
        if (*(longlong *)(pcVar2 + 0x50) == 0) {
          pLStack_30 = (LARGE_INTEGER *)0x0;
          local_38 = pcVar2;
          FUN_1417082b0(&DAT_1464b4630,&local_38);
          FAsyncPackage::EventDrivenLoadingComplete(pcVar2);
          pcVar2[0x1e0] = (code)0x9;
          lVar7 = FUN_1416f86a0();
          iVar1 = *(int *)(lVar7 + 0x200);
          *(int *)(lVar7 + 0x200) = iVar1 + 1;
          if (*(int *)(lVar7 + 0x204) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar7 + 0x1f8,iVar1);
          }
          *(code **)(*(longlong *)(lVar7 + 0x1f8) + (longlong)iVar1 * 8) = pcVar2;
        }
        else {
          pcVar2[0x1e0] = (code)0x1;
          *(undefined1 *)(*(longlong *)(pcVar2 + 0x50) + 0x2a1) = 1;
        }
        FUN_1416e6df0(&local_28);
        param_2[2] = *(undefined8 *)(pcVar2 + 0x58);
      }
    }
  }
  return;
}



// FUNCTION 1416e7e80 operator() body=308 status=ok
// SIG undefined operator()(void)

void <lambda_f0d26a225c2191cfcc35aa75db61f968>::operator()(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (((*param_1 != 0) && ((int)param_1[1] != 0)) &&
     (lVar1 = param_1[2], *(int *)(lVar1 + 0x1b0) != *(int *)(lVar1 + 0x1dc))) {
    lVar3 = *(longlong *)(lVar1 + 0x1e8);
    if (*(longlong *)(lVar1 + 0x1e8) == 0) {
      lVar3 = lVar1 + 0x1e0;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)(*(int *)((longlong)param_1 + 4) + (int)*param_1) &
                             (longlong)*(int *)(lVar1 + 0x1f0) - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)(lVar1 + 0x1a8);
      while (lVar3 = (longlong)iVar2, *(longlong *)(lVar1 + lVar3 * 0x18) != *param_1) {
        iVar2 = *(int *)(lVar1 + 0x10 + lVar3 * 0x18);
        if (iVar2 == -1) {
          return;
        }
      }
      if (((iVar2 != -1) && (lVar1 = lVar1 + lVar3 * 0x18, lVar1 != 0)) &&
         ((lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0 &&
          (*(int *)(lVar1 + 0x1e4) == (int)param_1[1])))) {
        param_2[1] = L"Start Post Load";
        param_2[2] = *(undefined8 *)(lVar1 + 0x58);
        *(undefined8 *)(lVar1 + 0xd0) = *param_2;
        *(undefined8 *)(lVar1 + 0xd8) = *(undefined8 *)(lVar1 + 0x58);
        *(wchar_t **)(lVar1 + 0xe0) = L"Start Post Load";
        *(undefined4 *)(lVar1 + 0xc4) = *(undefined4 *)(param_2 + 3);
        *(undefined1 *)(lVar1 + 200) = *(undefined1 *)((longlong)param_2 + 0x1c);
        *(undefined1 *)(lVar1 + 0xc9) = *(undefined1 *)((longlong)param_2 + 0x1d);
        FUN_1416f43d0();
      }
    }
  }
  return;
}



// FUNCTION 1416e7fc0 FUN_1416e7fc0 body=144 status=ok
// SIG undefined FUN_1416e7fc0(void)

void FUN_1416e7fc0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  wchar_t *local_res18 [2];
  
  local_res10 = DAT_1469e68a0;
  local_res18[0] = L"Create_Linker_Count";
  (**(code **)(param_2 + 0x20))(*(undefined8 *)(param_2 + 0x28),local_res18,&local_res10);
  local_res10 = DAT_1469e68a8;
  local_res18[0] = L"Async_Wait_Time";
  (**(code **)(param_2 + 0x20))(*(undefined8 *)(param_2 + 0x28),local_res18,&local_res10);
  local_res10 = DAT_1469e68b0;
  local_res18[0] = L"Async_Cleanup_Time";
  (**(code **)(param_2 + 0x20))(*(undefined8 *)(param_2 + 0x28),local_res18,&local_res10);
  return;
}



// FUNCTION 1416e8050 FUN_1416e8050 body=517 status=ok
// SIG undefined FUN_1416e8050(void)

void FUN_1416e8050(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_res8;
  code *local_28;
  undefined8 *puStack_20;
  longlong local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  if (((lVar1 != 0) && (puStack_20._0_4_ = (int)param_1[1], (int)puStack_20 != 0)) &&
     (lVar5 = param_1[2], *(int *)(lVar5 + 0x1b0) != *(int *)(lVar5 + 0x1dc))) {
    lVar6 = *(longlong *)(lVar5 + 0x1e8);
    if (*(longlong *)(lVar5 + 0x1e8) == 0) {
      lVar6 = lVar5 + 0x1e0;
    }
    iVar3 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                             (longlong)*(int *)(lVar5 + 0x1f0) - 1U) * 4);
    if (iVar3 != -1) {
      lVar5 = *(longlong *)(lVar5 + 0x1a8);
      while (lVar6 = (longlong)iVar3, *(longlong *)(lVar5 + lVar6 * 0x18) != lVar1) {
        iVar3 = *(int *)(lVar5 + 0x10 + lVar6 * 0x18);
        if (iVar3 == -1) {
          return;
        }
      }
      if (((iVar3 != -1) && (lVar5 = lVar5 + lVar6 * 0x18, lVar5 != 0)) &&
         ((lVar1 = *(longlong *)(lVar5 + 8), lVar1 != 0 &&
          (*(int *)(lVar1 + 0x1e4) == (int)puStack_20)))) {
        param_2[1] = L"ProcessImportsAndExports";
        param_2[2] = *(undefined8 *)(lVar1 + 0x58);
        *(undefined8 *)(lVar1 + 0xd0) = *param_2;
        *(undefined8 *)(lVar1 + 0xd8) = *(undefined8 *)(lVar1 + 0x58);
        *(wchar_t **)(lVar1 + 0xe0) = L"ProcessImportsAndExports";
        *(undefined4 *)(lVar1 + 0xc4) = *(undefined4 *)(param_2 + 3);
        *(undefined1 *)(lVar1 + 200) = *(undefined1 *)((longlong)param_2 + 0x1c);
        *(undefined1 *)(lVar1 + 0xc9) = *(undefined1 *)((longlong)param_2 + 0x1d);
        if (*(char *)(lVar1 + 0x4a2) == '\0') {
          puStack_20 = &local_res8;
          local_res8 = 0;
          local_28 = FUN_1406ddef0;
          local_18 = lVar1;
          lVar5 = FUN_1415d8310(&local_28,&DAT_14622e6dc);
          local_10 = *(undefined8 *)(lVar5 + 0xa0);
          *(longlong *)(lVar5 + 0xa0) = lVar1;
          cVar2 = FUN_1415ad720(&DAT_1468e2448);
          if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
             (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
            lVar5 = FUN_1416f86a0();
            *(int *)(lVar5 + 0x2d8) = *(int *)(lVar5 + 0x2d8) + 1;
          }
          FUN_1417848b0(0);
          FUN_141703f40(lVar1);
          *(undefined1 *)(lVar1 + 0x4a0) = 0;
          FUN_1416ec6a0(lVar1,1);
          FUN_1416e6df0(&local_18);
        }
      }
    }
  }
  return;
}



// FUNCTION 1416e8260 FUN_1416e8260 body=757 status=ok
// SIG undefined FUN_1416e8260(void)

void FUN_1416e8260(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined2 *puVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  longlong local_res20;
  int local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int iStack_78;
  uint uStack_74;
  uint *local_70;
  uint uStack_68;
  uint uStack_64;
  undefined8 local_60;
  longlong *local_58;
  int iStack_50;
  uint uStack_4c;
  uint *puStack_48;
  uint uStack_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  plVar9 = (longlong *)
           FConfigCacheIni::GetSectionPrivate
                     (DAT_1468b6148,L"Internationalization.AssetGroupClasses",0,1,param_3);
  if (plVar9 != (longlong *)0x0) {
    uVar4 = *(uint *)(plVar9 + 5);
    puVar1 = (uint *)(plVar9 + 2);
    local_a8 = 0;
    uStack_a4 = 1;
    uStack_94 = 0;
    iStack_90 = 0;
    if (uVar4 != 0) {
      puVar17 = (uint *)plVar9[4];
      if ((uint *)plVar9[4] == (uint *)0x0) {
        puVar17 = puVar1;
      }
      uVar5 = *puVar17;
      iStack_90 = 0;
      while (uVar5 == 0) {
        lVar12 = (longlong)local_a8;
        iStack_90 = iStack_90 + 0x20;
        iVar15 = local_a8 + 1;
        bVar7 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
        local_a8 = iVar15;
        if (bVar7) goto LAB_1416e836a;
        uVar5 = puVar17[lVar12 + 1];
      }
      uStack_a4 = -uVar5 & uVar5;
      iVar15 = 0x1f;
      if (uStack_a4 != 0) {
        for (; uStack_a4 >> iVar15 == 0; iVar15 = iVar15 + -1) {
        }
      }
      if (uStack_a4 == 0) {
        iVar15 = 0x20;
      }
      else {
        iVar15 = 0x1f - iVar15;
      }
      uStack_94 = (iStack_90 - iVar15) + 0x1f;
      if ((int)uVar4 < (int)uStack_94) {
LAB_1416e836a:
        uStack_94 = uVar4;
      }
    }
    uVar5 = *(uint *)(plVar9 + 5);
    uStack_68 = 0xffffffff;
    uStack_64 = uStack_94;
    local_60 = CONCAT44(uStack_8c,iStack_90);
    iStack_50 = local_a8;
    uStack_4c = uStack_a4;
    uVar16 = uVar5 & 0xffffffe0;
    iStack_78 = local_a8;
    uStack_74 = uStack_a4;
    local_70 = puVar1;
    local_58 = plVar9;
    puStack_48 = puVar1;
    uStack_38 = local_60;
    uStack_40 = uStack_68;
    uStack_3c = uStack_64;
    uStack_94 = uVar5;
    if (uVar5 != uVar4) {
      puVar17 = (uint *)plVar9[4];
      if ((uint *)plVar9[4] == (uint *)0x0) {
        puVar17 = puVar1;
      }
      uVar11 = puVar17[(int)uVar5 >> 5] & -1 << ((byte)uVar5 & 0x1f);
      iVar15 = (int)uVar5 >> 5;
      while (uVar11 == 0) {
        uVar16 = uVar16 + 0x20;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar15)
        goto LAB_1416e8432;
        uVar11 = puVar17[(longlong)iVar15 + 1];
        iVar15 = iVar15 + 1;
      }
      uVar11 = -uVar11 & uVar11;
      iVar15 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar15 == 0; iVar15 = iVar15 + -1) {
        }
      }
      if (uVar11 == 0) {
        iVar15 = 0x20;
      }
      else {
        iVar15 = 0x1f - iVar15;
      }
      uStack_94 = (uVar16 - iVar15) + 0x1f;
      if ((int)uVar4 < (int)uStack_94) {
LAB_1416e8432:
        uStack_94 = uVar4;
      }
    }
    while ((uStack_64 != uStack_94 || (local_70 != puVar1))) {
      puVar13 = (undefined8 *)((longlong)(int)uStack_64 * 0x30 + *plVar9);
      uVar6 = *puVar13;
      lVar12 = 0x18;
      iVar15 = *(int *)(puVar13 + 4) + -1;
      if (*(int *)(puVar13 + 4) == 0) {
        iVar15 = 0;
      }
      if (iVar15 < 1) {
        lVar12 = 8;
      }
      if (*(int *)(lVar12 + 8 + (longlong)puVar13) == 0) {
        puVar14 = &DAT_143f3eda8;
      }
      else {
        puVar14 = *(undefined2 **)(lVar12 + (longlong)puVar13);
      }
      FName::FName(&local_res20,puVar14,1);
      lVar8 = local_res20;
      lVar12 = *param_1;
      plVar10 = *(longlong **)(lVar12 + 0x50);
      iVar15 = *(int *)(lVar12 + 0x58);
      plVar2 = plVar10 + (longlong)iVar15 * 2;
      for (; plVar10 != plVar2; plVar10 = plVar10 + 2) {
        if (*plVar10 == local_res20) goto LAB_1416e850a;
      }
      *(int *)(lVar12 + 0x58) = iVar15 + 1;
      if (*(int *)(lVar12 + 0x5c) < iVar15 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar12 + 0x50);
      }
      local_a8 = (int)lVar8;
      uStack_a4 = (uint)((ulonglong)lVar8 >> 0x20);
      uStack_a0 = (undefined4)uVar6;
      uStack_9c = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar3 = (undefined4 *)(*(longlong *)(lVar12 + 0x50) + (longlong)iVar15 * 0x10);
      *puVar3 = local_a8;
      puVar3[1] = uStack_a4;
      puVar3[2] = uStack_a0;
      puVar3[3] = uStack_9c;
LAB_1416e850a:
      uStack_68 = uStack_68 & ~uStack_74;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_78);
    }
  }
  return;
}



// FUNCTION 1416e8560 FUN_1416e8560 body=142 status=ok
// SIG undefined FUN_1416e8560(void)

undefined8 * FUN_1416e8560(void)

{
  DWORD DVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  
  _Dst = (undefined8 *)operator_new(0x120);
  if (_Dst == (undefined8 *)0x0) {
    _Dst = (undefined8 *)0x0;
  }
  else {
    _guard_xfg_dispatch_icall_nop(_Dst,0,0x120);
    FDeferredInitializationTrackerBase::FDeferredInitializationTrackerBase(_Dst);
    _Dst[0x21] = &PTR_FUN_1440104d0;
    _Dst[0x22] = 0;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(_Dst + 0x23) = DVar1;
    *_Dst = &PTR_FUN_144cfcae8;
    _Dst[0x21] = &PTR_LAB_144cfcb00;
  }
  puVar2 = _Dst + 0x21;
  if (_Dst == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}



// FUNCTION 1416e85f0 FUN_1416e85f0 body=209 status=ok
// SIG undefined FUN_1416e85f0(void)

void FUN_1416e85f0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  BOOL BVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar2 = *param_1;
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x50));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x50));
  }
  iVar1 = *(int *)(lVar2 + 0x80);
  *(int *)(lVar2 + 0x80) = iVar1 + 1;
  if (*(int *)(lVar2 + 0x84) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar2 + 0x78,iVar1);
  }
  *(undefined8 *)(*(longlong *)(lVar2 + 0x78) + (longlong)iVar1 * 8) = param_3;
  if (*(char *)(lVar2 + 0x98) == '\0') {
    if (*(int *)(lVar2 + 0x80) == DAT_1464b4424) {
      uVar4 = FPlatformFileManager::Get();
      plVar5 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar4);
      (**(code **)(*plVar5 + 0x110))(plVar5,0);
    }
  }
  else {
    *(undefined1 *)(lVar2 + 0x98) = 0;
    (**(code **)(**(longlong **)(lVar2 + 0xa0) + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x0001416e86ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x50));
  return;
}



// FUNCTION 1416e86d0 FUN_1416e86d0 body=554 status=ok
// SIG undefined FUN_1416e86d0(void)

void FUN_1416e86d0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_res8;
  code *local_28;
  undefined8 *puStack_20;
  code *local_18;
  undefined8 local_10;
  
  lVar6 = *param_1;
  if (((lVar6 != 0) && (puStack_20._0_4_ = (int)param_1[1], (int)puStack_20 != 0)) &&
     (lVar1 = param_1[2], *(int *)(lVar1 + 0x1b0) != *(int *)(lVar1 + 0x1dc))) {
    lVar7 = *(longlong *)(lVar1 + 0x1e8);
    if (*(longlong *)(lVar1 + 0x1e8) == 0) {
      lVar7 = lVar1 + 0x1e0;
    }
    iVar4 = *(int *)(lVar7 + ((longlong)((int)((ulonglong)lVar6 >> 0x20) + (int)lVar6) &
                             (longlong)*(int *)(lVar1 + 0x1f0) - 1U) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)(lVar1 + 0x1a8);
      while (lVar7 = (longlong)iVar4, *(longlong *)(lVar1 + lVar7 * 0x18) != lVar6) {
        iVar4 = *(int *)(lVar1 + 0x10 + lVar7 * 0x18);
        if (iVar4 == -1) {
          return;
        }
      }
      if (((iVar4 != -1) && (lVar1 = lVar1 + lVar7 * 0x18, lVar1 != 0)) &&
         ((pcVar2 = *(code **)(lVar1 + 8), pcVar2 != (code *)0x0 &&
          (*(int *)(pcVar2 + 0x1e4) == (int)puStack_20)))) {
        param_2[1] = L"Setup Imports";
        param_2[2] = *(undefined8 *)(pcVar2 + 0x58);
        *(undefined8 *)(pcVar2 + 0xd0) = *param_2;
        *(undefined8 *)(pcVar2 + 0xd8) = *(undefined8 *)(pcVar2 + 0x58);
        *(wchar_t **)(pcVar2 + 0xe0) = L"Setup Imports";
        *(undefined4 *)(pcVar2 + 0xc4) = *(undefined4 *)(param_2 + 3);
        pcVar2[200] = *(code *)((longlong)param_2 + 0x1c);
        pcVar2[0xc9] = *(code *)((longlong)param_2 + 0x1d);
        puStack_20 = &local_res8;
        local_28 = FUN_1406ddef0;
        local_res8 = 0;
        local_18 = pcVar2;
        lVar6 = FUN_1415d8310(&local_28,&DAT_14622e6dc);
        local_10 = *(undefined8 *)(lVar6 + 0xa0);
        *(code **)(lVar6 + 0xa0) = pcVar2;
        cVar3 = FUN_1415ad720(&DAT_1468e2448);
        if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
           (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)) {
          lVar6 = FUN_1416f86a0();
          *(int *)(lVar6 + 0x2d8) = *(int *)(lVar6 + 0x2d8) + 1;
        }
        FUN_1417848b0(0);
        FUN_14170ca40(pcVar2);
        FUN_1416e6df0(&local_18);
        pcVar2[0x1e0] = (code)0x5;
        puStack_20 = (undefined8 *)0x100000000;
        local_28 = pcVar2;
        FUN_1417082b0(&DAT_1464b4630,&local_28);
        FUN_141705790(*(undefined8 *)(pcVar2 + 0x1d8),pcVar2,0);
      }
    }
  }
  return;
}



// FUNCTION 1416e8900 FUN_1416e8900 body=140 status=ok
// SIG undefined FUN_1416e8900(void)

undefined8 * FUN_1416e8900(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x68);
  if (puVar2 != (undefined8 *)0x0) {
    _guard_xfg_dispatch_icall_nop(puVar2 + 2,0,0x58);
    *puVar2 = &PTR_FUN_1440104d0;
    puVar2[1] = 0;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(puVar2 + 2) = DVar1;
    *puVar2 = &PTR_FUN_144cfcd98;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x4c) = 0;
    puVar2[0xb] = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1416e8990 FUN_1416e8990 body=233 status=ok
// SIG undefined FUN_1416e8990(void)

undefined8 * FUN_1416e8990(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res10 [8];
  
  FUN_14172a070(local_res10,0);
  puVar2 = (undefined8 *)operator_new(0xf0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    FGCObject::FGCObject(puVar2);
    *puVar2 = &PTR_FUN_144cfcda0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 2));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar2 + 2),4000);
    puVar2[7] = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar1 = (undefined8 *)puVar2[7];
    for (iVar3 = *(int *)(puVar2 + 8); iVar3 != 0; iVar3 = iVar3 + -1) {
      FMemory::Free(*puVar1);
      puVar1 = puVar1 + 1;
    }
    *(undefined4 *)(puVar2 + 8) = 0;
    if (*(int *)((longlong)puVar2 + 0x44) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(puVar2 + 7,0);
    }
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2[0x1c] = 0;
    puVar2[0x1d] = 0;
  }
  FUN_14172a400(local_res10);
  return puVar2;
}



// FUNCTION 1416e8a80 FUN_1416e8a80 body=552 status=ok
// SIG undefined FUN_1416e8a80(void)

void FUN_1416e8a80(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_res8;
  longlong local_28;
  longlong lStack_20;
  code *local_18;
  undefined8 *puStack_10;
  
  lVar1 = *param_1;
  lStack_20 = param_1[1];
  if (((lVar1 != 0) && ((int)lStack_20 != 0)) &&
     (lVar5 = param_1[2], *(int *)(lVar5 + 0x1b0) != *(int *)(lVar5 + 0x1dc))) {
    lVar6 = *(longlong *)(lVar5 + 0x1e8);
    if (*(longlong *)(lVar5 + 0x1e8) == 0) {
      lVar6 = lVar5 + 0x1e0;
    }
    iVar4 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                             (longlong)*(int *)(lVar5 + 0x1f0) - 1U) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(lVar5 + 0x1a8);
      while (lVar6 = (longlong)iVar4, *(longlong *)(lVar5 + lVar6 * 0x18) != lVar1) {
        iVar4 = *(int *)(lVar5 + 0x10 + lVar6 * 0x18);
        if (iVar4 == -1) {
          return;
        }
      }
      if (((iVar4 != -1) && (lVar5 = lVar5 + lVar6 * 0x18, lVar5 != 0)) &&
         ((lVar1 = *(longlong *)(lVar5 + 8), lVar1 != 0 &&
          (*(int *)(lVar1 + 0x1e4) == (int)lStack_20)))) {
        param_2[1] = L"Setup Exports";
        param_2[2] = *(undefined8 *)(lVar1 + 0x58);
        *(undefined8 *)(lVar1 + 0xd0) = *param_2;
        *(undefined8 *)(lVar1 + 0xd8) = *(undefined8 *)(lVar1 + 0x58);
        *(wchar_t **)(lVar1 + 0xe0) = L"Setup Exports";
        *(undefined4 *)(lVar1 + 0xc4) = *(undefined4 *)(param_2 + 3);
        *(undefined1 *)(lVar1 + 200) = *(undefined1 *)((longlong)param_2 + 0x1c);
        *(undefined1 *)(lVar1 + 0xc9) = *(undefined1 *)((longlong)param_2 + 0x1d);
        puStack_10 = &local_res8;
        local_18 = FUN_1406ddef0;
        local_res8 = 0;
        local_28 = lVar1;
        lVar5 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
        lStack_20 = *(undefined8 *)(lVar5 + 0xa0);
        *(longlong *)(lVar5 + 0xa0) = lVar1;
        cVar2 = FUN_1415ad720(&DAT_1468e2448);
        if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
           (DVar3 = GetCurrentThreadId(), DVar3 == DAT_1468c21c0)) {
          lVar5 = FUN_1416f86a0();
          *(int *)(lVar5 + 0x2d8) = *(int *)(lVar5 + 0x2d8) + 1;
        }
        FUN_1417848b0(0);
        iVar4 = FUN_14170c410(lVar1);
        if (iVar4 == 0) {
          FUN_141705790(*(undefined8 *)(lVar1 + 0x1d8),lVar1,0);
          FUN_1416e6df0(&local_28);
          return;
        }
        FUN_1416e6df0(&local_28);
        *(undefined1 *)(lVar1 + 0x1e0) = 6;
        FUN_1416ec6a0(lVar1,0);
      }
    }
  }
  return;
}



// FUNCTION 1416e8cb0 operator() body=174 status=ok
// SIG undefined operator()(void)

ulonglong <lambda_5c0951f19849935806a434d0556816af>::operator()
                    (longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint3 uVar2;
  bool bVar3;
  int *piVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  piVar4 = (int *)TSet<TTuple<UObject_*,FObjectInitializer>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectInitializer,0>,FDefaultSetAllocator>
                  ::FindId(*param_1 + 0x58);
  if (((*piVar4 != -1) || (uVar1 = *(uint *)(param_3 + 8), (uVar1 >> 10 & 1) != 0)) ||
     ((uVar6 = (ulonglong)(uVar1 >> 0x13), (uVar1 >> 0x13 & 1) != 0 && ((uVar1 >> 0x15 & 1) == 0))))
  {
    lVar5 = FUN_1417a53c0(param_2);
    if ((lVar5 == 0) || ((*(uint *)(lVar5 + 0x290) & 0x100000) == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    uVar2 = (uint3)(*(uint *)(param_2 + 8) >> 0x1d);
    if ((((*(uint *)(param_2 + 8) >> 0x15 & 1) == 0) || (lVar5 == 0)) ||
       ((*(int *)(lVar5 + 0x78c) == -1 && (*(char *)(lVar5 + 0x788) == '\0')))) {
      uVar6 = (ulonglong)uVar2 << 8;
    }
    else {
      uVar6 = CONCAT71((uint7)uVar2,1);
    }
    if ((bVar3) || ((char)uVar6 != '\0')) {
      return uVar6 & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)(uVar6 >> 8),1);
}



// FUNCTION 1416e8d60 operator() body=308 status=ok
// SIG undefined operator()(void)

void <lambda_f0d26a225c2191cfcc35aa75db61f968>::operator()(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (((*param_1 != 0) && ((int)param_1[1] != 0)) &&
     (lVar1 = param_1[2], *(int *)(lVar1 + 0x1b0) != *(int *)(lVar1 + 0x1dc))) {
    lVar3 = *(longlong *)(lVar1 + 0x1e8);
    if (*(longlong *)(lVar1 + 0x1e8) == 0) {
      lVar3 = lVar1 + 0x1e0;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)(*(int *)((longlong)param_1 + 4) + (int)*param_1) &
                             (longlong)*(int *)(lVar1 + 0x1f0) - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)(lVar1 + 0x1a8);
      while (lVar3 = (longlong)iVar2, *(longlong *)(lVar1 + lVar3 * 0x18) != *param_1) {
        iVar2 = *(int *)(lVar1 + 0x10 + lVar3 * 0x18);
        if (iVar2 == -1) {
          return;
        }
      }
      if (((iVar2 != -1) && (lVar1 = lVar1 + lVar3 * 0x18, lVar1 != 0)) &&
         ((lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0 &&
          (*(int *)(lVar1 + 0x1e4) == (int)param_1[1])))) {
        param_2[1] = L"Finish Linker";
        param_2[2] = *(undefined8 *)(lVar1 + 0x58);
        *(undefined8 *)(lVar1 + 0xd0) = *param_2;
        *(undefined8 *)(lVar1 + 0xd8) = *(undefined8 *)(lVar1 + 0x58);
        *(wchar_t **)(lVar1 + 0xe0) = L"Finish Linker";
        *(undefined4 *)(lVar1 + 0xc4) = *(undefined4 *)(param_2 + 3);
        *(undefined1 *)(lVar1 + 200) = *(undefined1 *)((longlong)param_2 + 0x1c);
        *(undefined1 *)(lVar1 + 0xc9) = *(undefined1 *)((longlong)param_2 + 0x1d);
        FUN_1416f2d10();
      }
    }
  }
  return;
}



// FUNCTION 1416e8ea0 FUN_1416e8ea0 body=142 status=ok
// SIG undefined FUN_1416e8ea0(void)

undefined8 * FUN_1416e8ea0(void)

{
  DWORD DVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  
  _Dst = (undefined8 *)operator_new(0x120);
  if (_Dst == (undefined8 *)0x0) {
    _Dst = (undefined8 *)0x0;
  }
  else {
    _guard_xfg_dispatch_icall_nop(_Dst,0,0x120);
    FDeferredInitializationTrackerBase::FDeferredInitializationTrackerBase(_Dst);
    _Dst[0x21] = &PTR_FUN_1440104d0;
    _Dst[0x22] = 0;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(_Dst + 0x23) = DVar1;
    *_Dst = &PTR_FUN_144cfcb08;
    _Dst[0x21] = &PTR_LAB_144cfcb00;
  }
  puVar2 = _Dst + 0x21;
  if (_Dst == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}



// FUNCTION 1416e8f30 FUN_1416e8f30 body=411 status=ok
// SIG undefined FUN_1416e8f30(void)

ulonglong FUN_1416e8f30(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,int *param_4)

{
  wchar_t wVar1;
  wint_t wVar2;
  wint_t wVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 extraout_var_00;
  undefined6 extraout_var;
  ushort *puVar6;
  wchar_t *_Str1;
  wchar_t *pwVar7;
  wint_t *pwVar8;
  undefined2 *puVar9;
  
  puVar9 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (ushort *)*param_2;
  }
  uVar5 = (ulonglong)*puVar6;
  _Str1 = (wchar_t *)(puVar6 + 1);
  if (*puVar6 == 0x2f) {
    do {
      pwVar7 = _Str1;
      wVar1 = *pwVar7;
      uVar5 = (ulonglong)(ushort)wVar1;
      if (wVar1 == L'\0') goto LAB_1416e90ad;
      _Str1 = pwVar7 + 1;
    } while (wVar1 != L'/');
    if (*_Str1 != L'\0') {
      iVar4 = _wcsnicmp(_Str1,L"PatchDLC/",9);
      if (iVar4 == 0) {
        _Str1 = pwVar7 + 10;
        do {
          wVar1 = *_Str1;
          uVar5 = (ulonglong)(ushort)wVar1;
          if (wVar1 == L'\0') goto LAB_1416e90ad;
          _Str1 = _Str1 + 1;
        } while (wVar1 != L'/');
        if (*_Str1 == L'\0') goto LAB_1416e90ad;
      }
      iVar4 = _wcsnicmp(_Str1,L"L10N/",5);
      uVar5 = CONCAT44(extraout_var_00,iVar4);
      if (iVar4 == 0) {
        if (*(int *)(param_2 + 1) != 0) {
          puVar9 = (undefined2 *)*param_2;
        }
        pwVar7 = _Str1 + 5;
        *param_3 = (int)((longlong)_Str1 + (-2 - (longlong)puVar9) >> 1);
        *param_4 = 6;
        wVar1 = *pwVar7;
        while ((wVar1 != L'\0' && (pwVar7 = pwVar7 + 1, wVar1 != L'/'))) {
          *param_4 = *param_4 + 1;
          wVar1 = *pwVar7;
        }
        return CONCAT71((uint7)(byte)((ushort)wVar1 >> 8),1);
      }
      pwVar8 = &DAT_144cfcfa8;
      do {
        wVar2 = *(wint_t *)((longlong)(_Str1 + -0xa267e7d4) + (longlong)pwVar8);
        if ((wVar2 == 0) && (*pwVar8 == 0)) goto LAB_1416e908b;
        if (wVar2 != *pwVar8) {
          wVar2 = towlower(wVar2);
          wVar3 = towlower(*pwVar8);
          uVar5 = CONCAT62(extraout_var,wVar3);
          if (wVar2 != wVar3) goto LAB_1416e9081;
        }
        pwVar8 = pwVar8 + 1;
      } while( true );
    }
  }
  goto LAB_1416e90ad;
LAB_1416e9081:
  uVar5 = (ulonglong)wVar3;
  if (wVar2 == wVar3) {
LAB_1416e908b:
    if (*(int *)(param_2 + 1) != 0) {
      puVar9 = (undefined2 *)*param_2;
    }
    *param_3 = (int)((longlong)_Str1 + (-2 - (longlong)puVar9) >> 1);
    *param_4 = 5;
    return CONCAT71((int7)(uVar5 >> 8),1);
  }
LAB_1416e90ad:
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 1416e90d0 operator() body=308 status=ok
// SIG undefined operator()(void)

void <lambda_f0d26a225c2191cfcc35aa75db61f968>::operator()(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (((*param_1 != 0) && ((int)param_1[1] != 0)) &&
     (lVar1 = param_1[2], *(int *)(lVar1 + 0x1b0) != *(int *)(lVar1 + 0x1dc))) {
    lVar3 = *(longlong *)(lVar1 + 0x1e8);
    if (*(longlong *)(lVar1 + 0x1e8) == 0) {
      lVar3 = lVar1 + 0x1e0;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)(*(int *)((longlong)param_1 + 4) + (int)*param_1) &
                             (longlong)*(int *)(lVar1 + 0x1f0) - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)(lVar1 + 0x1a8);
      while (lVar3 = (longlong)iVar2, *(longlong *)(lVar1 + lVar3 * 0x18) != *param_1) {
        iVar2 = *(int *)(lVar1 + 0x10 + lVar3 * 0x18);
        if (iVar2 == -1) {
          return;
        }
      }
      if (((iVar2 != -1) && (lVar1 = lVar1 + lVar3 * 0x18, lVar1 != 0)) &&
         ((lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0 &&
          (*(int *)(lVar1 + 0x1e4) == (int)param_1[1])))) {
        param_2[1] = L"Exports Done";
        param_2[2] = *(undefined8 *)(lVar1 + 0x58);
        *(undefined8 *)(lVar1 + 0xd0) = *param_2;
        *(undefined8 *)(lVar1 + 0xd8) = *(undefined8 *)(lVar1 + 0x58);
        *(wchar_t **)(lVar1 + 0xe0) = L"Exports Done";
        *(undefined4 *)(lVar1 + 0xc4) = *(undefined4 *)(param_2 + 3);
        *(undefined1 *)(lVar1 + 200) = *(undefined1 *)((longlong)param_2 + 0x1c);
        *(undefined1 *)(lVar1 + 0xc9) = *(undefined1 *)((longlong)param_2 + 0x1d);
        FUN_1416f2840();
      }
    }
  }
  return;
}



// FUNCTION 1416e9210 FUN_1416e9210 body=613 status=ok
// SIG undefined FUN_1416e9210(void)

void FUN_1416e9210(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_res8;
  longlong local_28;
  longlong lStack_20;
  code *local_18;
  undefined8 *puStack_10;
  
  lVar2 = *param_1;
  lStack_20 = param_1[1];
  if (((lVar2 != 0) && ((int)lStack_20 != 0)) &&
     (lVar6 = param_1[2], *(int *)(lVar6 + 0x1b0) != *(int *)(lVar6 + 0x1dc))) {
    lVar7 = *(longlong *)(lVar6 + 0x1e8);
    if (*(longlong *)(lVar6 + 0x1e8) == 0) {
      lVar7 = lVar6 + 0x1e0;
    }
    iVar5 = *(int *)(lVar7 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                             (longlong)*(int *)(lVar6 + 0x1f0) - 1U) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(lVar6 + 0x1a8);
      while (lVar7 = (longlong)iVar5, *(longlong *)(lVar6 + lVar7 * 0x18) != lVar2) {
        iVar5 = *(int *)(lVar6 + 0x10 + lVar7 * 0x18);
        if (iVar5 == -1) {
          return;
        }
      }
      if (((iVar5 != -1) && (lVar6 = lVar6 + lVar7 * 0x18, lVar6 != 0)) &&
         ((lVar2 = *(longlong *)(lVar6 + 8), lVar2 != 0 &&
          (*(int *)(lVar2 + 0x1e4) == (int)lStack_20)))) {
        param_2[1] = L"Start Import Packages";
        param_2[2] = *(undefined8 *)(lVar2 + 0x58);
        *(undefined8 *)(lVar2 + 0xd0) = *param_2;
        *(undefined8 *)(lVar2 + 0xd8) = *(undefined8 *)(lVar2 + 0x58);
        *(wchar_t **)(lVar2 + 0xe0) = L"Start Import Packages";
        *(undefined4 *)(lVar2 + 0xc4) = *(undefined4 *)(param_2 + 3);
        *(undefined1 *)(lVar2 + 200) = *(undefined1 *)((longlong)param_2 + 0x1c);
        *(undefined1 *)(lVar2 + 0xc9) = *(undefined1 *)((longlong)param_2 + 0x1d);
        puStack_10 = &local_res8;
        local_18 = FUN_1406ddef0;
        local_res8 = 0;
        local_28 = lVar2;
        lVar6 = FUN_1415d8310(&local_18,&DAT_14622e6dc);
        lStack_20 = *(undefined8 *)(lVar6 + 0xa0);
        *(longlong *)(lVar6 + 0xa0) = lVar2;
        cVar3 = FUN_1415ad720(&DAT_1468e2448);
        if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
           (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)) {
          lVar6 = FUN_1416f86a0();
          *(int *)(lVar6 + 0x2d8) = *(int *)(lVar6 + 0x2d8) + 1;
        }
        FUN_1417848b0(0);
        iVar5 = FUN_1416fe080(lVar2);
        if (iVar5 == 0) {
          FUN_141705930(*(undefined8 *)(lVar2 + 0x1d8),lVar2,0x7fffffff);
          FUN_1416e6df0(&local_28);
          return;
        }
        FUN_1416e6df0(&local_28);
        lStack_20 = 0x100000000;
        *(undefined1 *)(lVar2 + 0x1e0) = 3;
        piVar1 = (int *)(lVar2 + 0x4d0);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *(undefined1 *)(lVar2 + 0x4d4) = 1;
          local_28 = lVar2;
          FUN_1416f7890(lVar2,&local_28);
        }
      }
    }
  }
  return;
}



// FUNCTION 1416e9480 operator() body=308 status=ok
// SIG undefined operator()(void)

void <lambda_f0d26a225c2191cfcc35aa75db61f968>::operator()(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (((*param_1 != 0) && ((int)param_1[1] != 0)) &&
     (lVar1 = param_1[2], *(int *)(lVar1 + 0x1b0) != *(int *)(lVar1 + 0x1dc))) {
    lVar3 = *(longlong *)(lVar1 + 0x1e8);
    if (*(longlong *)(lVar1 + 0x1e8) == 0) {
      lVar3 = lVar1 + 0x1e0;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)(*(int *)((longlong)param_1 + 4) + (int)*param_1) &
                             (longlong)*(int *)(lVar1 + 0x1f0) - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)(lVar1 + 0x1a8);
      while (lVar3 = (longlong)iVar2, *(longlong *)(lVar1 + lVar3 * 0x18) != *param_1) {
        iVar2 = *(int *)(lVar1 + 0x10 + lVar3 * 0x18);
        if (iVar2 == -1) {
          return;
        }
      }
      if (((iVar2 != -1) && (lVar1 = lVar1 + lVar3 * 0x18, lVar1 != 0)) &&
         ((lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0 &&
          (*(int *)(lVar1 + 0x1e4) == (int)param_1[1])))) {
        param_2[1] = L"Process Process Postload Wait";
        param_2[2] = *(undefined8 *)(lVar1 + 0x58);
        *(undefined8 *)(lVar1 + 0xd0) = *param_2;
        *(undefined8 *)(lVar1 + 0xd8) = *(undefined8 *)(lVar1 + 0x58);
        *(wchar_t **)(lVar1 + 0xe0) = L"Process Process Postload Wait";
        *(undefined4 *)(lVar1 + 0xc4) = *(undefined4 *)(param_2 + 3);
        *(undefined1 *)(lVar1 + 200) = *(undefined1 *)((longlong)param_2 + 0x1c);
        *(undefined1 *)(lVar1 + 0xc9) = *(undefined1 *)((longlong)param_2 + 0x1d);
        FUN_1416f3640();
      }
    }
  }
  return;
}



// FUNCTION 1416e95c0 operator() body=215 status=ok
// SIG undefined operator()(void)

ulonglong <lambda_e7b8b159572a559b09988c79da077e7c>::operator()(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  longlong local_res10;
  longlong *local_28;
  longlong *local_20;
  
  lVar2 = *param_1;
  local_res10 = param_2;
  piVar3 = (int *)TSet<TTuple<UObject_*,FObjectInitializer>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectInitializer,0>,FDefaultSetAllocator>
                  ::FindId(lVar2 + 0x58,local_res8,param_2);
  if (*piVar3 == -1) {
    return (ulonglong)piVar3 & 0xffffffffffffff00;
  }
  plVar4 = *(longlong **)(lVar2 + 0xa8);
  plVar1 = plVar4 + *(int *)(lVar2 + 0xb0);
  while( true ) {
    if (plVar4 == plVar1) {
      lVar5 = TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
              ::FindPair(lVar2 + 0xb8,param_2,param_1[1]);
      if (lVar5 == 0) {
        local_28 = &local_res10;
        local_20 = param_1 + 1;
        FUN_1405deec0(lVar2 + 0xb8,local_res8,&local_28,0);
      }
      return 1;
    }
    if (*plVar4 == param_2) break;
    plVar4 = plVar4 + 1;
  }
  return 0;
}



// FUNCTION 1416e96b0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<FPackageLocalizationCultureCache>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 1416e96e0 `scalar_deleting_destructor' body=295 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FArchiveAsync2::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cfd578;
  FUN_1416f8100();
  puVar1 = (undefined8 *)param_1[0x12];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[0x12] = 0;
  }
  if (*(int *)(param_1 + 0x46) != 0) {
    plVar2 = (longlong *)param_1[0x44];
    if ((longlong *)param_1[0x44] == (longlong *)0x0) {
      plVar2 = param_1 + 0x40;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (param_1[0x44] != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    plVar2 = (longlong *)param_1[0x3a];
    if ((longlong *)param_1[0x3a] == (longlong *)0x0) {
      plVar2 = param_1 + 0x36;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (param_1[0x3a] != 0) {
    FMemory::Free();
  }
  if (param_1[0x2e] != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    plVar2 = (longlong *)param_1[0x2a];
    if ((longlong *)param_1[0x2a] == (longlong *)0x0) {
      plVar2 = param_1 + 0x26;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (param_1[0x2a] != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x240);
  }
  return param_1;
}



// FUNCTION 1416e9810 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FArchiveTraceRoute::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FArchiveTraceRoute();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 1416e9850 FUN_1416e9850 body=52 status=ok
// SIG undefined FUN_1416e9850(void)

undefined8 FUN_1416e9850(undefined8 param_1,ulonglong param_2)

{
  FUN_1416e6440();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2e0);
  }
  return param_1;
}



// FUNCTION 1416e9890 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FAsyncPackage::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1416e6600();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x510);
  }
  return param_1;
}



// FUNCTION 1416e98d0 FUN_1416e98d0 body=66 status=ok
// SIG undefined FUN_1416e98d0(void)

longlong FUN_1416e98d0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x108) = &PTR_FUN_1440104c8;
  FDeferredInitializationTrackerBase::~FDeferredInitializationTrackerBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 1416e9920 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FDeferredInitializationTrackerBase::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~FDeferredInitializationTrackerBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 1416e9960 FUN_1416e9960 body=109 status=ok
// SIG undefined FUN_1416e9960(void)

longlong FUN_1416e9960(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  TIndirectArray<FCustomPropertyListNode,FDefaultAllocator>::
  ~TIndirectArray<FCustomPropertyListNode,FDefaultAllocator>(param_1 + 0x38);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  FGCObject::~FGCObject(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 1416e99d0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPackageLocalizationCache::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FPackageLocalizationCache();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 1416e9a10 FUN_1416e9a10 body=52 status=ok
// SIG undefined FUN_1416e9a10(void)

undefined8 FUN_1416e9a10(undefined8 param_1,ulonglong param_2)

{
  FReferenceCollector::~FReferenceCollector();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1416e9a50 FUN_1416e9a50 body=128 status=ok
// SIG undefined FUN_1416e9a50(void)

undefined8 * FUN_1416e9a50(undefined8 *param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FLinkerLoad_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 3,0);
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1416e9ad0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UUGGridPrefabDungeonConfig::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  FUN_140970480(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1416e9b20 `scalar_deleting_destructor' body=80 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UGCObjectReferencer::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1416e9b70 FUN_1416e9b70 body=192 status=ok
// SIG undefined FUN_1416e9b70(void)

ulonglong FUN_1416e9b70(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 1);
    iVar3 = *(uint *)(param_1 + 1) + 1;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,uVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    uVar4 = (ulonglong)(int)param_1[6];
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + uVar4 * 8);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 8) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  iVar3 = (int)uVar4;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar4 & 0x1f);
  *(undefined8 *)(*param_1 + (longlong)iVar3 * 8) = param_2;
  return uVar4 & 0xffffffff;
}



// FUNCTION 1416e9c30 Add body=188 status=ok
// SIG undefined Add(void)

longlong FDeferredInitializationTrackerBase::Add
                   (longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong local_res10;
  int local_res20 [2];
  undefined8 local_28;
  longlong *local_20;
  undefined8 *local_18;
  
  if (param_2 != 0) {
    local_28 = *param_3;
    local_res10 = param_2;
    lVar1 = TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
            ::FindPair(param_1 + 8);
    if (lVar1 == 0) {
      local_20 = &local_res10;
      local_18 = &local_28;
      FUN_1405deec0(param_1 + 8,local_res20,&local_20,0);
    }
    local_20 = &local_28;
    local_18 = param_3;
    FUN_1416e13e0(param_1 + 0x58,local_res20,&local_20,0);
    return *(longlong *)(param_1 + 0x58) + (longlong)local_res20[0] * 0x160 + 8;
  }
  return 0;
}



// FUNCTION 1416e9cf0 Add body=70 status=ok
// SIG undefined Add(void)

void FTraceRouteRecord::Add(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 8),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 1416e9d40 AddArc body=273 status=ok
// SIG undefined AddArc(void)

void FAsyncPackage::AddArc(undefined8 param_1,longlong *param_2,undefined1 (*param_3) [16])

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  
  iVar5 = (int)param_2[1];
  iVar3 = *(int *)((longlong)param_2 + 0xc);
  lVar4 = *param_2;
  if (iVar5 == 0) {
    plVar6 = (longlong *)(lVar4 + 0x4a8 + (longlong)iVar3 * 0x18);
  }
  else {
    if (iVar5 < 0) {
      iVar5 = (iVar3 - (iVar5 * 2 + 2)) + *(int *)(lVar4 + 0x508);
    }
    else {
      iVar5 = iVar3 + *(int *)(lVar4 + 0x50c) + iVar5 * 3 + -3;
    }
    plVar6 = (longlong *)(*(longlong *)(lVar4 + 0x4f0) + (longlong)iVar5 * 0x18);
  }
  iVar5 = SUB164(*param_3,0xc);
  lVar4 = *(longlong *)*param_3;
  iVar3 = SUB164(*param_3,8);
  if (iVar3 == 0) {
    lVar4 = lVar4 + 0x4a8 + (longlong)iVar5 * 0x18;
  }
  else {
    if (iVar3 < 0) {
      iVar5 = (iVar5 - (iVar3 * 2 + 2)) + *(int *)(lVar4 + 0x508);
    }
    else {
      iVar5 = iVar5 + *(int *)(lVar4 + 0x50c) + iVar3 * 3 + -3;
    }
    lVar4 = *(longlong *)(lVar4 + 0x4f0) + (longlong)iVar5 * 0x18;
  }
  *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
  iVar5 = (int)plVar6[1];
  *(int *)(plVar6 + 1) = iVar5 + 1;
  if (*(int *)((longlong)plVar6 + 0xc) < iVar5 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar5);
  }
  uVar2 = *(undefined8 *)(*param_3 + 8);
  puVar1 = (undefined8 *)(*plVar6 + (longlong)iVar5 * 0x10);
  *puVar1 = *(undefined8 *)*param_3;
  puVar1[1] = uVar2;
  return;
}



// FUNCTION 1416e9e60 FUN_1416e9e60 body=267 status=ok
// SIG undefined FUN_1416e9e60(void)

void FUN_1416e9e60(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined1 local_28 [8];
  longlong local_20;
  
  piVar2 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId(param_3);
  if (*piVar2 == -1) {
    iVar6 = 0;
    if (0 < *(int *)(param_2 + 0x78)) {
      lVar5 = 0;
      do {
        iVar7 = 0;
        lVar4 = 0;
        lVar1 = *(longlong *)(lVar5 + *(longlong *)(param_2 + 0x70));
        if (0 < *(int *)(param_1 + 0x78)) {
          plVar3 = *(longlong **)(param_1 + 0x70);
          do {
            if (*(longlong *)(*plVar3 + 0x18) == *(longlong *)(lVar1 + 0x18)) {
              if (iVar7 != -1) goto LAB_1416e9f29;
              break;
            }
            iVar7 = iVar7 + 1;
            lVar4 = lVar4 + 1;
            plVar3 = plVar3 + 1;
          } while (lVar4 < *(int *)(param_1 + 0x78));
        }
        if ((*(longlong *)(lVar1 + 0x50) == 0) ||
           (*(char *)(*(longlong *)(lVar1 + 0x50) + 0x764) == '\0')) {
          FAsyncPackage::AddImportDependency(param_1);
        }
        else if (param_1 != lVar1) {
          FUN_1416e9e60(param_1,lVar1,param_3,param_4);
        }
LAB_1416e9f29:
        iVar6 = iVar6 + 1;
        lVar5 = lVar5 + 8;
      } while (iVar6 < *(int *)(param_2 + 0x78));
    }
    local_20 = param_2;
    FUN_14058c900(param_3,local_28,&local_20,0);
  }
  return;
}



// FUNCTION 1416e9f70 AddImportDependency body=670 status=ok
// SIG undefined AddImportDependency(void)

void FAsyncPackage::AddImportDependency(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 local_68 [2];
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  lVar2 = FUN_1416f86a0();
  lVar3 = *param_2;
  lVar4 = 0;
  lVar9 = lVar4;
  if (*(int *)(lVar2 + 0x1b0) != *(int *)(lVar2 + 0x1dc)) {
    lVar10 = *(longlong *)(lVar2 + 0x1e8);
    if (*(longlong *)(lVar2 + 0x1e8) == 0) {
      lVar10 = lVar2 + 0x1e0;
    }
    iVar1 = *(int *)(lVar10 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                              (longlong)*(int *)(lVar2 + 0x1f0) - 1U) * 4);
    if (iVar1 != -1) {
      lVar2 = *(longlong *)(lVar2 + 0x1a8);
      do {
        lVar10 = (longlong)iVar1;
        if (*(longlong *)(lVar2 + lVar10 * 0x18) == lVar3) {
          if ((iVar1 != -1) && (lVar2 = lVar2 + lVar10 * 0x18, lVar2 != 0)) {
            lVar9 = *(longlong *)(lVar2 + 8);
          }
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x10 + lVar10 * 0x18);
      } while (iVar1 != -1);
    }
  }
  if (lVar9 == 0) {
    local_68[0] = 0xffffffff;
    local_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0xffffffff;
    local_60 = lVar3;
    local_58 = lVar3;
    lVar3 = operator_new(0x510);
    if (lVar3 != 0) {
      lVar4 = FUN_1416e3de0(lVar3,local_68);
    }
    if (*(int *)(lVar4 + 0x44) == 0) {
      *(undefined4 *)(lVar4 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    }
    uVar5 = FUN_1416f86a0();
    FAsyncLoadingThread::InsertPackage(uVar5,lVar4,0,0);
    lVar9 = lVar4;
  }
  if ((*(char *)(lVar9 + 0xcc) == '\0') && (*(char *)(lVar9 + 0xcb) == '\0')) {
    puVar6 = (undefined8 *)operator_new(0x10);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      puVar7 = (undefined8 *)operator_new(0x28,puVar6);
      if (puVar7 != (undefined8 *)0x0) {
        puVar7[1] = param_1;
        *puVar7 = &DAT_143f3ed00;
        puVar7[2] = FUN_1416faad0;
        uVar5 = FDelegateHandle::GenerateNewID();
        puVar7[4] = uVar5;
        *puVar7 = &PTR_GetPoolName_143f3ed48;
      }
    }
    iVar1 = *(int *)(lVar9 + 0x68);
    *(int *)(lVar9 + 0x68) = iVar1 + 1;
    if (*(int *)(lVar9 + 0x6c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar9 + 0x60,iVar1);
    }
    puVar8 = (undefined2 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar9 + 0x60));
    *puVar8 = 1;
    *(undefined8 **)(puVar8 + 4) = puVar6;
    LOCK();
    *(int *)(lVar9 + 0x98) = *(int *)(lVar9 + 0x98) + 1;
    UNLOCK();
    iVar1 = *(int *)(param_1 + 0x78);
    *(int *)(param_1 + 0x78) = iVar1 + 1;
    if (*(int *)(param_1 + 0x7c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x70,iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar1 * 8) = lVar9;
    if (param_3 != 0) {
      PopulateFlushTree(lVar9,param_3);
      return;
    }
  }
  else {
    LOCK();
    *(int *)(lVar9 + 0x98) = *(int *)(lVar9 + 0x98) + 1;
    UNLOCK();
    iVar1 = *(int *)(param_1 + 0x88);
    *(int *)(param_1 + 0x88) = iVar1 + 1;
    if (*(int *)(param_1 + 0x8c) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x80,iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar1 * 8) = lVar9;
  }
  return;
}



// FUNCTION 1416ea210 AddNode body=284 status=ok
// SIG undefined AddNode(void)

undefined1 (*) [16]
FAsyncPackage::AddNode
          (longlong param_1,undefined1 (*param_2) [16],undefined4 param_3,undefined4 param_4,
          byte param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 local_res18 [16];
  
  *(longlong *)*param_2 = param_1;
  *(undefined4 *)(*param_2 + 8) = param_4;
  *(undefined4 *)(*param_2 + 0xc) = param_3;
  iVar4 = SUB164(*param_2,0xc);
  iVar2 = SUB164(*param_2,8);
  if (iVar2 == 0) {
    lVar3 = param_1 + 0x4a8 + (longlong)iVar4 * 0x18;
  }
  else {
    if (iVar2 < 0) {
      iVar4 = (iVar4 - (iVar2 * 2 + 2)) + *(int *)(param_1 + 0x508);
    }
    else {
      iVar4 = iVar4 + *(int *)(param_1 + 0x50c) + iVar2 * 3 + -3;
    }
    lVar3 = *(longlong *)(param_1 + 0x4f0) + (longlong)iVar4 * 0x18;
  }
  *(undefined1 *)(lVar3 + 0x15) = 1;
  *(int *)(param_1 + 0x4fc) = *(int *)(param_1 + 0x4fc) + 1;
  if (*(int *)(param_1 + 0x4fc) == 1) {
    FUN_1416dfd00(&DAT_1464b4630,local_res18,param_2,0);
  }
  param_6 = (uint)param_5 + param_6;
  if (param_6 != 0) {
    iVar4 = *(int *)(*param_2 + 8);
    iVar2 = *(int *)(*param_2 + 0xc);
    if (iVar4 == 0) {
      piVar1 = (int *)(param_1 + 0x4b8 + (longlong)iVar2 * 0x18);
      *piVar1 = *piVar1 + param_6;
      return param_2;
    }
    if (iVar4 < 0) {
      iVar4 = (iVar2 - (iVar4 * 2 + 2)) + *(int *)(param_1 + 0x508);
    }
    else {
      iVar4 = iVar2 + *(int *)(param_1 + 0x50c) + iVar4 * 3 + -3;
    }
    piVar1 = (int *)(*(longlong *)(param_1 + 0x4f0) + 0x10 + (longlong)iVar4 * 0x18);
    *piVar1 = *piVar1 + param_6;
  }
  return param_2;
}



// FUNCTION 1416ea330 AddObject body=115 status=ok
// SIG undefined AddObject(void)

void UGCObjectReferencer::AddObject(longlong param_1,undefined8 param_2)

{
  int iVar1;
  BOOL BVar2;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  }
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x28,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001416ea39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}



// FUNCTION 1416ea3b0 FUN_1416ea3b0 body=587 status=ok
// SIG undefined FUN_1416ea3b0(void)

void FUN_1416ea3b0(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  BOOL BVar4;
  uint uVar5;
  undefined8 *puVar6;
  int *piVar7;
  longlong lVar8;
  uint uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  longlong local_res10;
  undefined1 local_res18 [16];
  longlong local_28 [2];
  
  if (param_2 != 0) {
    local_res10 = param_2;
    cVar2 = FUN_1415ad720(&DAT_1468e2448);
    puVar10 = &DAT_143f3eda8;
    if ((((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
        (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) &&
       (cVar2 = IsGarbageCollectionLocked(), cVar2 == '\0')) {
      puVar6 = (undefined8 *)UObjectBaseUtility::GetFullName(param_2,local_28,0);
      if (*(int *)(puVar6 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*puVar6;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x1587,
                 L"Trying to add an object %s to FAsyncPackage referenced objects list outside of a FGCScopeGuard."
                 ,puVar11);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      puVar6 = (undefined8 *)UObjectBaseUtility::GetFullName(param_2,local_28,0);
      if (*(int *)(puVar6 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*puVar6;
      }
      FDebug::AssertFailed
                (&DAT_144cf0da6,"Unknown",0x1587,
                 L"Trying to add an object %s to FAsyncPackage referenced objects list outside of a FGCScopeGuard."
                 ,puVar11);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
    }
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b0));
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b0));
    }
    piVar7 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                              (param_1 + 0x160,local_res18,param_2);
    if (*piVar7 == -1) {
      FUN_14058cbf0(param_1 + 0x160,local_res18,&local_res10,0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b0));
    iVar1 = *(int *)(param_2 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar9 = iVar1 >> 0x1f & 0xffff;
      uVar5 = iVar1 + uVar9;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar9) * 0x18;
    }
    else {
      lVar8 = 0;
    }
    if ((*(uint *)(lVar8 + 8) >> 0x1c & 1) != 0) {
      puVar6 = (undefined8 *)UObjectBaseUtility::GetFullName(param_2,local_28,0);
      if (*(int *)(puVar6 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*puVar6;
      }
      LowLevelFatalErrorHandler
                ("Unknown",0x158f,
                 L"Trying to add an object %s to FAsyncPackage referenced objects list that is unreachable."
                 ,puVar11);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      puVar6 = (undefined8 *)UObjectBaseUtility::GetFullName(param_2,local_28,0);
      if (*(int *)(puVar6 + 1) != 0) {
        puVar10 = (undefined2 *)*puVar6;
      }
      FDebug::AssertFailed
                (&DAT_144cf0da7,"Unknown",0x158f,
                 L"Trying to add an object %s to FAsyncPackage referenced objects list that is unreachable."
                 ,puVar10);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1416ea600 FUN_1416ea600 body=1317 status=ok
// SIG undefined FUN_1416ea600(void)

void FUN_1416ea600(LPCRITICAL_SECTION param_1,undefined8 *param_2)

{
  _RTL_CRITICAL_SECTION **pp_Var1;
  LPCRITICAL_SECTION p_Var2;
  void *_Src;
  _RTL_CRITICAL_SECTION *p_Var3;
  ulonglong uVar4;
  char cVar5;
  BOOL BVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  wchar_t *pwVar10;
  _RTL_CRITICAL_SECTION *p_Var11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  undefined2 *puVar17;
  wchar_t *pwVar18;
  WORD *pWVar19;
  uint uVar20;
  HANDLE *ppvVar21;
  wchar_t *pwVar22;
  HANDLE *ppvVar23;
  bool bVar24;
  PRTL_CRITICAL_SECTION_DEBUG local_res18;
  longlong local_res20;
  undefined8 local_b8;
  HANDLE *ppvStack_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  int local_90;
  undefined4 local_8c;
  PRTL_CRITICAL_SECTION_DEBUG local_88;
  undefined4 uStack_80;
  uint uStack_7c;
  HANDLE *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  PRTL_CRITICAL_SECTION_DEBUG local_60;
  undefined8 uStack_58;
  HANDLE *ppvStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  cVar5 = FUN_1416fc210(param_2);
  if (cVar5 == '\0') {
    return;
  }
  BVar6 = TryEnterCriticalSection(param_1);
  if (BVar6 == 0) {
    EnterCriticalSection(param_1);
  }
  pwVar22 = (wchar_t *)0x0;
  local_res18 = (PRTL_CRITICAL_SECTION_DEBUG)(param_1 + 2);
  uStack_a4 = 0;
  uStack_a0 = 0;
  uVar9 = *(uint *)&param_1[3].DebugInfo;
  ppvVar23 = &param_1[2].OwningThread;
  uVar15 = 0;
  local_b8 = (wchar_t *)0x100000000;
  if (uVar9 != 0) {
    ppvVar21 = (HANDLE *)param_1[2].SpinCount;
    if ((HANDLE *)param_1[2].SpinCount == (HANDLE *)0x0) {
      ppvVar21 = ppvVar23;
    }
    uVar7 = *(uint *)ppvVar21;
    pwVar10 = pwVar22;
    pwVar18 = pwVar22;
    while (uVar7 == 0) {
      iVar8 = (int)pwVar10;
      uStack_a0 = (int)pwVar18 + 0x20;
      pwVar18 = (wchar_t *)(ulonglong)uStack_a0;
      pwVar10 = (wchar_t *)(ulonglong)(iVar8 + 1U);
      uVar4 = (ulonglong)local_b8 >> 0x20;
      local_b8 = (wchar_t *)CONCAT44((int)uVar4,iVar8 + 1U);
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_1416ea71c;
      uVar7 = *(uint *)((longlong)ppvVar21 + (longlong)iVar8 * 4 + 4);
    }
    uVar7 = -uVar7 & uVar7;
    iVar8 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    local_b8 = (wchar_t *)CONCAT44(uVar7,SUB84(local_b8,0));
    if (uVar7 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_a4 = (uStack_a0 - iVar8) + 0x1f;
    if ((int)uVar9 < (int)uStack_a4) {
LAB_1416ea71c:
      uStack_a4 = uVar9;
    }
  }
  uVar7 = *(uint *)&param_1[3].DebugInfo;
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_a4;
  local_68 = CONCAT44(uStack_9c,uStack_a0);
  local_a8 = -1 << ((byte)uVar7 & 0x1f);
  uStack_58 = local_b8;
  pwVar10 = uStack_58;
  uVar20 = uVar7 & 0xffffffe0;
  uStack_58._0_4_ = SUB84(local_b8,0);
  uStack_58._4_4_ = (uint)((ulonglong)local_b8 >> 0x20);
  uStack_80 = (undefined4)uStack_58;
  uStack_7c = uStack_58._4_4_;
  ppvStack_b0 = ppvVar23;
  uStack_a4 = uVar7;
  local_78 = ppvVar23;
  local_60 = local_res18;
  uStack_58 = pwVar10;
  ppvStack_50 = ppvVar23;
  uStack_40 = local_68;
  local_88 = local_res18;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  if (uVar7 != uVar9) {
    ppvVar21 = (HANDLE *)param_1[2].SpinCount;
    if ((HANDLE *)param_1[2].SpinCount == (HANDLE *)0x0) {
      ppvVar21 = ppvVar23;
    }
    uVar12 = *(uint *)((longlong)ppvVar21 + (longlong)((int)uVar7 >> 5) * 4) & local_a8;
    iVar8 = (int)uVar7 >> 5;
    while (uVar12 == 0) {
      uVar20 = uVar20 + 0x20;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_1416ea7e2;
      uVar12 = *(uint *)((longlong)ppvVar21 + (longlong)iVar8 * 4 + 4);
      local_a8 = 0xffffffff;
      iVar8 = iVar8 + 1;
    }
    uVar12 = -uVar12 & uVar12;
    iVar8 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_a4 = (uVar20 - iVar8) + 0x1f;
    uVar7 = uStack_a4;
    if ((int)uVar9 < (int)uStack_a4) {
LAB_1416ea7e2:
      uStack_a4 = uVar9;
      uVar7 = uVar9;
    }
  }
  while (((uStack_6c != uVar7 || (local_78 != ppvVar23)) || (local_88 != local_res18))) {
    lVar14 = *(longlong *)
              ((longlong)&(*(PRTL_CRITICAL_SECTION_DEBUG *)&local_88->Type)->ProcessLocksList +
              (longlong)(int)uStack_6c * 0x28);
    pWVar19 = &(*(PRTL_CRITICAL_SECTION_DEBUG *)&local_88->Type)->Type +
              (longlong)(int)uStack_6c * 0x14;
    lVar16 = (longlong)*(int *)(pWVar19 + 0xc) * 0x10 + lVar14;
    for (; lVar14 != lVar16; lVar14 = lVar14 + 0x10) {
      cVar5 = FString::StartsWith(param_2,lVar14,1);
      if (cVar5 != '\0') {
        uVar9 = *(uint *)(lVar14 + 8);
        iVar8 = *(int *)(param_2 + 1);
        if (uVar9 == 0) {
          uVar9 = 1;
        }
        uVar7 = iVar8 - 1;
        if (iVar8 == 0) {
          uVar7 = uVar15;
        }
        uVar20 = uVar9 + 0x7fffffff;
        if (uVar9 < uVar7) {
          uVar7 = uVar9;
        }
        uVar9 = iVar8 - 1;
        if (iVar8 == 0) {
          uVar9 = uVar15;
        }
        uVar12 = uVar7;
        if ((uVar7 <= uVar20) && (uVar12 = uVar9, uVar20 < uVar9)) {
          uVar12 = uVar20;
        }
        if (iVar8 == 0) {
          local_res18 = (PRTL_CRITICAL_SECTION_DEBUG)&DAT_143f3eda8;
        }
        else {
          local_res18 = (PRTL_CRITICAL_SECTION_DEBUG)*param_2;
        }
        iVar8 = uVar12 - uVar7;
        local_b8 = (wchar_t *)0x0;
        uVar9 = iVar8 + 1;
        if (iVar8 == 0) {
          uVar9 = 0;
        }
        ppvStack_b0 = (HANDLE *)(ulonglong)uVar9;
        bVar24 = uVar9 == 0;
        if (0 < (int)uVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
          pwVar22 = local_b8;
          uVar9 = (uint)ppvStack_b0;
          bVar24 = (uint)ppvStack_b0 == 0;
          if (0 < (int)(uint)ppvStack_b0) {
            wcsncpy(local_b8,(wchar_t *)((longlong)&local_res18->Type + (longlong)(int)uVar7 * 2),
                    (longlong)iVar8);
            bVar24 = uVar9 == 0;
            pwVar22[iVar8] = L'\0';
          }
        }
        if (!bVar24) {
          uVar15 = uVar9 - 1;
        }
        local_90 = *(int *)(pWVar19 + 4);
        lVar14 = (longlong)local_90;
        if ((local_90 == 0) && (uVar15 != 0xffffffff)) {
          iVar8 = 2;
        }
        else {
          iVar8 = 1;
        }
        _Src = *(void **)pWVar19;
        local_98 = (longlong *)0x0;
        if ((local_90 == 0) && (uVar15 + iVar8 == 0)) {
          local_8c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,local_90 + uVar15 + iVar8,0);
          _guard_xfg_dispatch_icall_nop(local_98,_Src,lVar14 * 2);
        }
        FString::PathAppend(&local_98,pwVar22,uVar15);
        puVar17 = &DAT_143f3eda8;
        plVar13 = (longlong *)&DAT_143f3eda8;
        if (local_90 != 0) {
          plVar13 = local_98;
        }
        FName::FName(&local_res20,plVar13,1);
        if (local_98 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (pwVar22 != (wchar_t *)0x0) {
          FMemory::Free(pwVar22);
        }
        p_Var2 = param_1 + 4;
        if (param_1[4].LockCount == param_1[5].RecursionCount) goto LAB_1416eaa44;
        ppvVar23 = param_1[5].LockSemaphore;
        if (param_1[5].LockSemaphore == (HANDLE *)0x0) {
          ppvVar23 = &param_1[5].OwningThread;
        }
        iVar8 = *(int *)((longlong)ppvVar23 +
                        ((longlong)((int)((ulonglong)local_res20 >> 0x20) + (int)local_res20) &
                        (longlong)(int)param_1[5].SpinCount - 1U) * 4);
        if (iVar8 == -1) goto LAB_1416eaa44;
        goto LAB_1416eaa20;
      }
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
  }
  goto LAB_1416eaae9;
  while (iVar8 = *(int *)(pWVar19 + 0xc), iVar8 != -1) {
LAB_1416eaa20:
    pWVar19 = &p_Var2->DebugInfo->Type + (longlong)iVar8 * 0x10;
    if (*(longlong *)pWVar19 == local_res20) {
      if ((iVar8 != -1) && (pWVar19 != (WORD *)0x0)) goto LAB_1416eaa6a;
      break;
    }
  }
LAB_1416eaa44:
  local_98 = &local_res20;
  FUN_1416e0780(p_Var2,&local_res18,&local_98,0);
  pWVar19 = &p_Var2->DebugInfo->Type + (longlong)(int)local_res18 * 0x10;
LAB_1416eaa6a:
  pp_Var1 = (_RTL_CRITICAL_SECTION **)(pWVar19 + 4);
  if (*(int *)(param_2 + 1) != 0) {
    puVar17 = (undefined2 *)*param_2;
  }
  FName::FName(&local_res18,puVar17,1);
  p_Var3 = *pp_Var1;
  iVar8 = *(int *)&((LIST_ENTRY *)(pWVar19 + 8))->Flink;
  for (p_Var11 = p_Var3; p_Var11 != (_RTL_CRITICAL_SECTION *)(&p_Var3->DebugInfo + iVar8);
      p_Var11 = (_RTL_CRITICAL_SECTION *)&p_Var11->LockCount) {
    if (p_Var11->DebugInfo == local_res18) {
      if ((int)((longlong)p_Var11 - (longlong)p_Var3 >> 3) != -1) goto LAB_1416eaae9;
      break;
    }
  }
  *(int *)&((LIST_ENTRY *)(pWVar19 + 8))->Flink = iVar8 + 1;
  if (*(int *)(pWVar19 + 10) < iVar8 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(pp_Var1,iVar8);
  }
  (&(*pp_Var1)->DebugInfo)[iVar8] = local_res18;
LAB_1416eaae9:
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 1416eab30 AddPendingRequest body=194 status=ok
// SIG undefined AddPendingRequest(void)

void FAsyncLoadingThread::AddPendingRequest(longlong param_1,int param_2)

{
  BOOL BVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  int local_res10 [2];
  
  local_res10[0] = param_2;
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x288));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x288));
  }
  if (*(int *)(param_1 + 0x240) != *(int *)(param_1 + 0x26c)) {
    lVar3 = *(longlong *)(param_1 + 0x278);
    if (*(longlong *)(param_1 + 0x278) == 0) {
      lVar3 = param_1 + 0x270;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x280) - 1U & (longlong)param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x238);
      do {
        if (*(int *)(lVar3 + (longlong)iVar2 * 0xc) == param_2) {
          if (iVar2 != -1) goto LAB_1416eabd5;
          break;
        }
        iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar2 * 0xc);
      } while (iVar2 != -1);
    }
  }
  FUN_14044be50((longlong *)(param_1 + 0x238),local_res8,local_res10,0);
LAB_1416eabd5:
                    /* WARNING: Could not recover jumptable at 0x0001416eabeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x288));
  return;
}



// FUNCTION 1416eac00 AddReferencedObjects body=118 status=ok
// SIG undefined AddReferencedObjects(void)

void FAsyncPackage::AddReferencedObjects(longlong param_1,longlong *param_2)

{
  FReferenceCollector::AddReferencedObjects<UObject>(param_2,param_1 + 0x160,0,0);
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x110),0,0);
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x120),0,0);
  return;
}



// FUNCTION 1416eac80 FUN_1416eac80 body=553 status=ok
// SIG undefined FUN_1416eac80(void)

void FUN_1416eac80(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  byte bVar13;
  uint uVar14;
  
  plVar8 = (longlong *)0x0;
  if (*(int *)(param_1 + 0x98) != 0) {
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    }
    puVar1 = (uint *)(param_1 + 0x50);
    iVar4 = *(int *)(param_1 + 0x98);
    puVar6 = *(uint **)(param_1 + 0x90);
    if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
      puVar6 = puVar1;
    }
    plVar12 = (longlong *)((longlong)iVar4 & 0x3fffffffffffffff);
    if (puVar6 + iVar4 < puVar6) {
      plVar12 = plVar8;
    }
    plVar9 = plVar8;
    if (plVar12 != (longlong *)0x0) {
      do {
        uVar3 = *puVar6;
        uVar5 = uVar3 & 0x7f;
        if ((int)uVar3 < 0) {
          uVar3 = uVar3 + 0x7f;
          uVar5 = uVar5 - 0x80;
        }
        puVar6 = puVar6 + 1;
        plVar9 = (longlong *)((longlong)plVar9 + 1);
        *(undefined8 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)((int)uVar3 >> 7) * 8) +
         (ulonglong)uVar5 * 8) = 0;
      } while (plVar9 != plVar12);
      iVar4 = *(int *)(param_1 + 0x98);
    }
    if (iVar4 != 0) {
      iVar11 = *(int *)(param_1 + 0xe8);
      if (*(int *)(param_1 + 0xec) < iVar11 + iVar4) {
        TArray<FMovieSceneSequenceID,TInlineAllocator<16,FDefaultAllocator>_>::ResizeTo
                  (param_1 + 0xa0);
        iVar11 = *(int *)(param_1 + 0xe8);
      }
      puVar6 = *(uint **)(param_1 + 0x90);
      if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
        puVar6 = puVar1;
      }
      lVar10 = *(longlong *)(param_1 + 0xe0);
      if (*(longlong *)(param_1 + 0xe0) == 0) {
        lVar10 = param_1 + 0xa0;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar10 + (longlong)iVar11 * 4),puVar6,(longlong)iVar4 << 2);
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + iVar4;
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (*(int *)(param_1 + 0x9c) != 0) {
      TArray<FMovieSceneSequenceID,TInlineAllocator<16,FDefaultAllocator>_>::ResizeTo(puVar1,0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  uVar3 = *(uint *)(param_1 + 0x48);
  plVar12 = *(longlong **)(param_1 + 0x38);
  iVar4 = uVar3 - 1;
  if (uVar3 == 0) {
    iVar4 = 0;
  }
  plVar9 = plVar12 + ((int)(iVar4 + (iVar4 >> 0x1f & 0x7fU)) >> 7);
  plVar7 = plVar8;
  if (plVar12 != (longlong *)0x0) {
    plVar7 = (longlong *)*plVar12;
  }
  uVar5 = uVar3 & 0x8000007f;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xffffff80) + 1;
  }
  if ((uVar3 == 0) || (uVar5 != 0)) {
    bVar13 = 0;
  }
  else {
    bVar13 = 1;
  }
  if (plVar12 + (longlong)((int)(uVar3 + ((int)uVar3 >> 0x1f & 0x7fU)) >> 7) + -1 +
                ((ulonglong)bVar13 ^ 1) != (longlong *)0x0) {
    uVar14 = 0x80;
    if (bVar13 == 0) {
      uVar14 = uVar5;
    }
    plVar8 = (longlong *)
             (plVar12[(longlong)((int)(uVar3 + ((int)uVar3 >> 0x1f & 0x7fU)) >> 7) + -1 +
                      ((ulonglong)bVar13 ^ 1)] + (longlong)(int)uVar14 * 8);
  }
  while (plVar7 != plVar8) {
    if (*plVar7 != 0) {
      (**(code **)(*param_2 + 0x38))(param_2,plVar7,0,0);
    }
    plVar7 = plVar7 + 1;
    if ((plVar12 != plVar9) && (plVar7 == (longlong *)(*plVar12 + 0x400))) {
      plVar7 = (longlong *)plVar12[1];
      plVar12 = plVar12 + 1;
    }
  }
  return;
}



// FUNCTION 1416eaeb0 AddReferencedObjects body=141 status=ok
// SIG undefined AddReferencedObjects(void)

void UGCObjectReferencer::AddReferencedObjects(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  uVar2 = (longlong)*(int *)(param_1 + 0x30) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x30) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 8))((longlong *)*puVar1,param_2);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 1416eaf40 AddRequestID body=121 status=ok
// SIG undefined AddRequestID(void)

void FAsyncPackage::AddRequestID(longlong param_1,int param_2)

{
  int iVar1;
  
  if (0 < param_2) {
    if (*(int *)(param_1 + 0x10) == -1) {
      *(int *)(param_1 + 0x10) = param_2;
    }
    iVar1 = *(int *)(param_1 + 0x150);
    *(int *)(param_1 + 0x150) = iVar1 + 1;
    if (*(int *)(param_1 + 0x154) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x148,iVar1);
    }
    *(int *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar1 * 4) = param_2;
    FAsyncLoadingThread::AddPendingRequest(*(undefined8 *)(param_1 + 0x1d8),param_2);
  }
  return;
}


