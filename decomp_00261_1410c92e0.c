// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1410c92e0 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<AccountId,TSharedPtr<ILoginSession,0>_>,TDefaultMapHashableKeyFuncs<AccountId,TSharedPtr<ILoginSession,0>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<FString,FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FLocKeyMapFuncs<FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FDefaultSetAllocator>
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



// FUNCTION 1410c9360 Empty body=400 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
      if (bVar3) goto LAB_1410c9431;
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
LAB_1410c9431:
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
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FFormatArgumentValue>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FFormatArgumentValue>
                (*param_1 + (longlong)iStack_1c * 0x48);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 1410c94f0 FUN_1410c94f0 body=214 status=ok
// SIG undefined FUN_1410c94f0(void)

void FUN_1410c94f0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar1 = *(longlong *)(param_1 + 0x180);
  if (lVar1 == 0) {
    return;
  }
  lVar6 = *(longlong *)(lVar1 + 0x38);
  if (lVar6 != 0) {
    lVar4 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1410c954c;
  }
  lVar6 = 0;
LAB_1410c954c:
  if (*(longlong *)(lVar1 + 0x198) != 0) {
    lVar4 = *(longlong *)(lVar1 + 0x198) + 800;
    cVar3 = FWeakObjectPtr::IsValid(lVar4);
    if (cVar3 != '\0') {
      plVar5 = (longlong *)FWeakObjectPtr::Get(lVar4);
      (**(code **)(*plVar5 + 0x278))(plVar5,0);
    }
    if ((lVar6 != 0) && (lVar4 = FUN_142eb65a0(lVar6), lVar4 == *(longlong *)(lVar1 + 0x198))) {
      local_18 = 0;
      uStack_10 = 0;
      FUN_142ed36d0(lVar6,&local_18,0);
    }
  }
  return;
}



// FUNCTION 1410c95d0 FUN_1410c95d0 body=133 status=ok
// SIG undefined FUN_1410c95d0(void)

void FUN_1410c95d0(longlong param_1)

{
  void *_Src;
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar1 != '\0') {
    _Src = *(void **)(param_1 + 0x10);
    local_10 = *(int *)(param_1 + 0x18);
    lVar3 = (longlong)local_10;
    local_18 = (void *)0x0;
    if (local_10 == 0) {
      local_c = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
      _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar3 << 2);
    }
    uVar2 = FWeakObjectPtr::Get(param_1 + 8);
    FUN_1410e36d0(uVar2,&local_18);
  }
  return;
}



// FUNCTION 1410c9660 FUN_1410c9660 body=308 status=ok
// SIG undefined FUN_1410c9660(void)

void FUN_1410c9660(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_res10 = *(undefined4 *)(param_1 + 8);
  local_res14 = *(undefined4 *)(param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar7;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      uVar5 = FWeakObjectPtr::Get(param_1 + 8);
      FWeakObjectPtr::operator=(&local_res8,uVar5);
      local_28 = 0;
      local_18 = 0;
      puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_48);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &PTR_FUN_1444f8920;
        puVar6[1] = uVar5;
        *(undefined4 *)(puVar6 + 2) = local_res8;
        *(undefined4 *)((longlong)puVar6 + 0x14) = local_resc;
      }
      local_58[0] = &LAB_1410c5850;
      FUN_14204c280(local_58);
    }
  }
  return;
}



// FUNCTION 1410c97a0 FUN_1410c97a0 body=207 status=ok
// SIG undefined FUN_1410c97a0(void)

undefined8 *
FUN_1410c97a0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

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
  puVar5 = (undefined8 *)(*local_20)((int)uStack_18 + lVar4,local_38,param_3,param_4,param_5);
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



// FUNCTION 1410c9870 FUN_1410c9870 body=328 status=ok
// SIG undefined FUN_1410c9870(void)

undefined8 FUN_1410c9870(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_38 [8];
  undefined8 local_30;
  longlong *local_28;
  undefined1 local_20;
  
  if (((*(longlong *)(param_1 + 8) != 0) && (lVar4 = FWeakObjectPtr::Get(), lVar4 != 0)) &&
     (lVar4 = UObject::FindFunction(lVar4,*(undefined8 *)(param_1 + 8)), lVar4 != 0)) {
    local_50 = 0;
    FName::FName(local_48,&DAT_143f3eda8,1);
    local_3c = 0;
    local_40 = 0xffffffff;
    FName::FName(local_38,&DAT_143f3eda8,1);
    local_30 = 0;
    local_28 = (longlong *)0x0;
    local_20 = 0;
    local_58 = param_2;
    local_50 = param_3;
    FUN_140ed08a0(local_48,param_4);
    plVar5 = (longlong *)FWeakObjectPtr::Get(param_1);
    uVar6 = FUN_14178ac60(plVar5,*(undefined8 *)(param_1 + 8));
    (**(code **)(*plVar5 + 0x208))(plVar5,uVar6,&local_58);
    plVar5 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_28)(local_28);
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
    return 1;
  }
  return 0;
}



// FUNCTION 1410c99c0 FUN_1410c99c0 body=135 status=ok
// SIG undefined FUN_1410c99c0(void)

undefined8 FUN_1410c99c0(longlong param_1)

{
  void *_Src;
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar1 != '\0') {
    _Src = *(void **)(param_1 + 0x10);
    local_10 = *(int *)(param_1 + 0x18);
    lVar3 = (longlong)local_10;
    local_18 = (void *)0x0;
    if (local_10 == 0) {
      local_c = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
      _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar3 << 2);
    }
    uVar2 = FWeakObjectPtr::Get(param_1 + 8);
    FUN_1410e36d0(uVar2,&local_18);
  }
  return 1;
}



// FUNCTION 1410c9a50 FUN_1410c9a50 body=310 status=ok
// SIG undefined FUN_1410c9a50(void)

undefined8 FUN_1410c9a50(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_res10 = *(undefined4 *)(param_1 + 8);
  local_res14 = *(undefined4 *)(param_1 + 0xc);
  FUN_141729b50(&local_res8);
  FUN_14172a400(&local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar7;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      uVar5 = FWeakObjectPtr::Get(param_1 + 8);
      FWeakObjectPtr::operator=(&local_res8,uVar5);
      local_28 = 0;
      local_18 = 0;
      puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_48);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &PTR_FUN_1444f8920;
        puVar6[1] = uVar5;
        *(undefined4 *)(puVar6 + 2) = local_res8;
        *(undefined4 *)((longlong)puVar6 + 0x14) = local_resc;
      }
      local_58[0] = &LAB_1410c5850;
      FUN_14204c280(local_58);
    }
  }
  return 1;
}



// FUNCTION 1410c9b90 FUN_1410c9b90 body=1559 status=ok
// SIG undefined FUN_1410c9b90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1410c9b90(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  undefined1 auStack_318 [32];
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined1 local_2e8;
  longlong *local_2d8;
  ulonglong local_2d0;
  longlong *local_2c8;
  longlong *local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  longlong *local_298;
  LARGE_INTEGER local_290;
  longlong local_288;
  longlong *local_280;
  longlong local_278 [2];
  longlong local_268 [2];
  code *local_258 [2];
  undefined1 local_248 [32];
  undefined8 local_228;
  undefined4 local_218;
  undefined1 *local_208 [2];
  undefined1 local_1f8 [32];
  undefined8 local_1d8;
  undefined4 local_1c8;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8 [16];
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
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  plVar13 = (longlong *)0x0;
  local_2d8 = (longlong *)0x0;
  local_2d0 = 0;
  local_228 = 0;
  local_218 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_248);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_143f77b70;
    puVar4[1] = &local_2d8;
  }
  local_2b0 = 0;
  local_258[0] = FUN_1410c5780;
  local_2a8 = 0x36;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b0,0);
  local_2f8 = CONCAT22(local_2f8._2_2_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>
            (local_2b0,0x36,"UOakCARVehiclePartData::FetchAllParts::LoadAssetsTask");
  FUN_140cdf730(local_108,&local_2b0,local_258);
  QueryPerformanceCounter(&local_290);
  local_108[0] = local_290;
  plVar5 = (longlong *)operator_new(0x18);
  plVar10 = plVar13;
  if (plVar5 != (longlong *)0x0) {
    TPromiseBase<int>::TPromiseBase<int>(plVar5);
    *(undefined1 *)(plVar5 + 2) = 0;
    plVar10 = plVar5;
  }
  plVar5 = (longlong *)operator_new(0x18);
  local_2c0 = plVar13;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *plVar5 = (longlong)&PTR_DestroyObject_1444f8938;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    plVar5[2] = (longlong)plVar10;
    local_2c0 = plVar5;
  }
  local_2c8 = plVar10;
  SharedPointerInternals::EnableSharedFromThis(&local_2c8,plVar10,plVar10);
  *(undefined1 *)(local_2c8 + 2) = 1;
  local_298 = (longlong *)local_2c8[1];
  local_288 = *local_2c8;
  if (local_298 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_298 + 1) = (int)local_298[1] + 1;
    UNLOCK();
  }
  local_2a0 = 0;
  local_280 = local_298;
  local_48 = local_288;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_40,&local_298);
  plVar10 = local_298;
  if (local_298 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_298 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_298)(local_298);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_298 + 8))(local_298,1);
      }
    }
  }
  local_128 = (longlong *)0x0;
  local_118 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_148);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_1444f8620;
    puVar4[1] = local_108;
  }
  local_158[0] = &LAB_140cee980;
  local_1b8 = local_2c8;
  local_1b0 = local_2c0;
  if (local_2c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2c0 + 1) = (int)local_2c0[1] + 1;
    UNLOCK();
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_1a8,local_158);
  local_1d8 = 0;
  local_1c8 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x70,local_1f8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_CopyToEmptyStorage_1444f8578;
    puVar4[2] = local_1b8;
    puVar4[3] = local_1b0;
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 4,local_1a8);
  }
  local_208[0] = &LAB_140cee8d0;
  if (local_168 != 0) {
    plVar10 = local_198;
    if (local_178 != (longlong *)0x0) {
      plVar10 = local_178;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (local_178 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar10 = local_1b0;
  if (local_1b0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1b0 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1b0)(local_1b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  if (local_118 != 0) {
    plVar10 = local_148;
    if (local_128 != (longlong *)0x0) {
      plVar10 = local_128;
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,0);
    }
  }
  if (local_128 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar10 = local_2c0;
  if (local_2c0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_2c0 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_2c0)(local_2c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  FUN_14204c280(local_208);
  FUN_140d1b3a0(local_108);
  *param_1 = 0;
  param_1[1] = 0;
  if (0 < (int)local_2d0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,local_2d0 & 0xffffffff);
  }
  plVar10 = local_2d8 + (longlong)(int)local_2d0 * 0xb;
  if (local_2d8 != plVar10) {
    local_2b8 = 0;
    plVar5 = local_2d8;
    do {
      if (*plVar5 == 0) {
LAB_1410ca076:
        plVar7 = plVar13;
      }
      else {
        puVar4 = (undefined8 *)FName::ToString(plVar5,local_278);
        if (*(int *)(puVar4 + 1) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = (undefined2 *)*puVar4;
        }
        uVar6 = UObject::GetPrivateStaticClass();
        plVar7 = (longlong *)FUN_141799410(uVar6,0,puVar12,0);
        if (local_278[0] != 0) {
          FMemory::Free();
        }
        if (plVar7 == (longlong *)0x0) {
          puVar4 = (undefined8 *)FName::ToString(plVar5,local_268);
          if (*(int *)(puVar4 + 1) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = (undefined2 *)*puVar4;
          }
          uVar6 = UObject::GetPrivateStaticClass();
          local_2e8 = 1;
          local_2f0 = 0;
          local_2f8 = 0;
          plVar7 = (longlong *)FUN_141799c90(uVar6,0,puVar12);
          if (local_268[0] != 0) {
            FMemory::Free();
          }
          if (plVar7 == (longlong *)0x0) goto LAB_1410ca076;
        }
        lVar8 = AArchVisCharacter::StaticClass();
        if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
            lVar8 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_1410ca076;
      }
      puVar4 = (undefined8 *)*param_1;
      iVar11 = (int)param_1[1];
      for (puVar9 = puVar4; puVar9 != puVar4 + iVar11; puVar9 = puVar9 + 1) {
        if ((longlong *)*puVar9 == plVar7) {
          if ((int)((longlong)puVar9 - (longlong)puVar4 >> 3) != -1) goto LAB_1410ca0cc;
          break;
        }
      }
      *(int *)(param_1 + 1) = iVar11 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
      }
      *(longlong **)(*param_1 + (longlong)iVar11 * 8) = plVar7;
LAB_1410ca0cc:
      plVar5 = plVar5 + 0xb;
    } while (plVar5 != plVar10);
  }
  FUN_140ce1dc0(local_108);
  if ((int)local_2d0 != 0) {
    plVar13 = local_2d8 + 6;
    iVar11 = (int)local_2d0;
    do {
      if (plVar13[1] != 0) {
        FMemory::Free();
      }
      plVar10 = (longlong *)*plVar13;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar10 + 1;
        lVar8 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      plVar13 = plVar13 + 0xb;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  if (local_2d8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1410ca1b0 FUN_1410ca1b0 body=50 status=ok
// SIG undefined FUN_1410ca1b0(void)

longlong FUN_1410ca1b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x30 + lVar1;
  if (lVar1 != lVar2) {
    do {
      if (*(longlong *)(lVar1 + 0x20) == *param_2) {
        return lVar1;
      }
      lVar1 = lVar1 + 0x30;
    } while (lVar1 != lVar2);
  }
  return 0;
}



// FUNCTION 1410ca1f0 FUN_1410ca1f0 body=620 status=ok
// SIG undefined FUN_1410ca1f0(void)

void FUN_1410ca1f0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  longlong *local_28;
  undefined8 local_20;
  
  if (*(longlong *)(param_1 + 0x358) != 0) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_1409b50c0(*(longlong *)(param_1 + 0x358),&local_28);
    plVar1 = local_28 + (int)local_20;
    plVar9 = local_28;
    if (local_28 != plVar1) {
LAB_1410ca250:
      lVar3 = *plVar9;
      if (lVar3 != 0) {
        lVar6 = FUN_14144ecc0();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          if (*(longlong *)(lVar3 + 0x88) != 0) {
            lVar7 = FUN_14144bcb0();
            for (lVar6 = *(longlong *)(lVar3 + 0x88); lVar6 != 0;
                lVar6 = *(longlong *)(lVar6 + 0x30)) {
              if (lVar6 == lVar7) {
                if (*(longlong *)(lVar3 + 0x88) != 0) {
                  plVar10 = (longlong *)(param_1 + 0x368);
                  plVar4 = (longlong *)*plVar10;
                  iVar2 = *(int *)(param_1 + 0x370);
                  lVar6 = (longlong)iVar2;
                  plVar8 = plVar4;
                  goto joined_r0x0001410ca2f7;
                }
                break;
              }
            }
          }
          goto LAB_1410ca3da;
        }
        lVar6 = FUN_14144ee20();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((!bVar5) || (*(longlong *)(lVar3 + 0x88) == 0)) goto LAB_1410ca3da;
        plVar10 = (longlong *)(param_1 + 0x378);
        plVar4 = (longlong *)*plVar10;
        iVar2 = *(int *)(param_1 + 0x380);
        lVar6 = (longlong)iVar2;
        for (plVar8 = plVar4; plVar8 != plVar4 + lVar6; plVar8 = plVar8 + 1) {
          if (*plVar8 == lVar3) {
            if ((int)((longlong)plVar8 - (longlong)plVar4 >> 3) != -1) goto LAB_1410ca3da;
            break;
          }
        }
        *(int *)(param_1 + 0x380) = iVar2 + 1;
        if (*(int *)(param_1 + 900) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar10,iVar2);
        }
        goto LAB_1410ca3d3;
      }
      goto LAB_1410ca3da;
    }
LAB_1410ca3f6:
    local_res8[0] = 0;
    AlgoImpl::
    IntroSortInternal<FConstraintInstance_*,FIdentityFunctor,TDereferenceWrapper<FConstraintInstance_*,<lambda_c3859a9a22bc5dc1683b777c42837bd3>_>_>
              (*(undefined8 *)(param_1 + 0x368),(longlong)*(int *)(param_1 + 0x370),0,local_res8);
    local_res8[0] = 0;
    FUN_1410af3b0(*(undefined8 *)(param_1 + 0x378),(longlong)*(int *)(param_1 + 0x380),0,local_res8)
    ;
    if (local_28 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
joined_r0x0001410ca2f7:
  if (plVar8 == plVar4 + lVar6) goto LAB_1410ca320;
  if (*plVar8 == lVar3) {
    if ((int)((longlong)plVar8 - (longlong)plVar4 >> 3) != -1) goto LAB_1410ca3da;
    goto LAB_1410ca320;
  }
  plVar8 = plVar8 + 1;
  goto joined_r0x0001410ca2f7;
LAB_1410ca320:
  *(int *)(param_1 + 0x370) = iVar2 + 1;
  if (*(int *)(param_1 + 0x374) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar10,iVar2);
  }
LAB_1410ca3d3:
  *(longlong *)(*plVar10 + lVar6 * 8) = lVar3;
LAB_1410ca3da:
  plVar9 = plVar9 + 1;
  if (plVar9 == plVar1) goto LAB_1410ca3f6;
  goto LAB_1410ca250;
}



// FUNCTION 1410ca460 FUN_1410ca460 body=883 status=ok
// SIG undefined FUN_1410ca460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1410ca460(LARGE_INTEGER *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  LONGLONG *pLVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_138 [32];
  LARGE_INTEGER local_118;
  longlong *local_110;
  LONGLONG *local_108;
  longlong *local_100;
  LARGE_INTEGER local_f8 [2];
  LONGLONG *local_e8;
  longlong *local_e0;
  undefined1 local_d8 [16];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  QueryPerformanceCounter(local_f8);
  *param_1 = local_f8[0];
  pLVar4 = (LONGLONG *)operator_new(0x18);
  if (pLVar4 == (LONGLONG *)0x0) {
    pLVar4 = (LONGLONG *)0x0;
  }
  else {
    puVar5 = (undefined8 *)operator_new(0x70);
    puVar9 = (undefined8 *)0x0;
    puVar10 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[6] = 0;
      *(undefined4 *)(puVar5 + 8) = 0;
      *puVar5 = AK::MemoryMgr::StartProfileThreadUsage;
      uVar6 = FUN_1415ab270(1);
      puVar5[10] = uVar6;
      *(undefined1 *)(puVar5 + 0xb) = 0;
      puVar5[0xc] = 0;
      puVar5[0xd] = 0;
      puVar10 = puVar5;
    }
    puVar5 = (undefined8 *)operator_new(0x18);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar5 + 1) = 1;
      *puVar5 = &PTR_DestroyObject_1446a5518;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
      puVar5[2] = puVar10;
      puVar9 = puVar5;
    }
    *pLVar4 = (LONGLONG)puVar10;
    pLVar4[1] = (LONGLONG)puVar9;
    SharedPointerInternals::EnableSharedFromThis(pLVar4,puVar10,puVar10);
    *(undefined1 *)(pLVar4 + 2) = 0;
  }
  plVar8 = (longlong *)0x0;
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *plVar7 = (longlong)&PTR_DestroyObject_1444f8938;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    plVar7[2] = (longlong)pLVar4;
    plVar8 = plVar7;
  }
  local_108 = pLVar4;
  local_100 = plVar8;
  SharedPointerInternals::EnableSharedFromThis(&local_108,pLVar4,pLVar4);
  *(undefined1 *)(local_108 + 2) = 1;
  local_110 = (longlong *)local_108[1];
  local_118.QuadPart = *local_108;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_110 + 1) = (int)local_110[1] + 1;
    UNLOCK();
  }
  if (param_1 + 0x18 != &local_118) {
    param_1[0x18].QuadPart = (LONGLONG)local_118;
    local_118.QuadPart = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x19,&local_110);
  }
  plVar8 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_110 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[1] = param_1;
    *puVar9 = &PTR_FUN_143f77b70;
  }
  local_88[0] = FUN_1410c57f0;
  local_e8 = local_108;
  local_e0 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_100 + 1) = (int)local_100[1] + 1;
    UNLOCK();
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,local_88);
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x70,param_2 + 2);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_CopyToEmptyStorage_1446a5528;
    puVar9[2] = local_e8;
    puVar9[3] = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar9 + 4,local_d8);
  }
  *param_2 = &LAB_1410c5750;
  if (local_98 != 0) {
    plVar8 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar8 = local_a8;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar8 = local_e0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_e0 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_e0)(local_e0);
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
  plVar8 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_100 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_100)(local_100);
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
  return param_2;
}



// FUNCTION 1410ca7e0 FUN_1410ca7e0 body=875 status=ok
// SIG undefined FUN_1410ca7e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1410ca7e0(LARGE_INTEGER *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  LONGLONG *pLVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_138 [32];
  LARGE_INTEGER local_118;
  longlong *local_110;
  LONGLONG *local_108;
  longlong *local_100;
  LARGE_INTEGER local_f8 [2];
  LONGLONG *local_e8;
  longlong *local_e0;
  undefined1 local_d8 [16];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  QueryPerformanceCounter(local_f8);
  *param_1 = local_f8[0];
  pLVar4 = (LONGLONG *)operator_new(0x18);
  if (pLVar4 == (LONGLONG *)0x0) {
    pLVar4 = (LONGLONG *)0x0;
  }
  else {
    puVar5 = (undefined8 *)operator_new(0x70);
    puVar9 = (undefined8 *)0x0;
    puVar10 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[6] = 0;
      *(undefined4 *)(puVar5 + 8) = 0;
      *puVar5 = AK::MemoryMgr::StartProfileThreadUsage;
      uVar6 = FUN_1415ab270(1);
      puVar5[10] = uVar6;
      *(undefined1 *)(puVar5 + 0xb) = 0;
      puVar10 = puVar5;
    }
    puVar5 = (undefined8 *)operator_new(0x18);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar5 + 1) = 1;
      *puVar5 = &PTR_DestroyObject_144145d88;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
      puVar5[2] = puVar10;
      puVar9 = puVar5;
    }
    *pLVar4 = (LONGLONG)puVar10;
    pLVar4[1] = (LONGLONG)puVar9;
    SharedPointerInternals::EnableSharedFromThis(pLVar4,puVar10,puVar10);
    *(undefined1 *)(pLVar4 + 2) = 0;
  }
  plVar8 = (longlong *)0x0;
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *plVar7 = (longlong)&PTR_DestroyObject_1444f8938;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    plVar7[2] = (longlong)pLVar4;
    plVar8 = plVar7;
  }
  local_108 = pLVar4;
  local_100 = plVar8;
  SharedPointerInternals::EnableSharedFromThis(&local_108,pLVar4,pLVar4);
  *(undefined1 *)(local_108 + 2) = 1;
  local_110 = (longlong *)local_108[1];
  local_118.QuadPart = *local_108;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_110 + 1) = (int)local_110[1] + 1;
    UNLOCK();
  }
  if (param_1 + 0x18 != &local_118) {
    param_1[0x18].QuadPart = (LONGLONG)local_118;
    local_118.QuadPart = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x19,&local_110);
  }
  plVar8 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_110 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[1] = param_1;
    *puVar9 = &PTR_FUN_143f77b70;
  }
  local_88[0] = &LAB_1410c52b0;
  local_e8 = local_108;
  local_e0 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_100 + 1) = (int)local_100[1] + 1;
    UNLOCK();
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,local_88);
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x70,param_2 + 2);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_CopyToEmptyStorage_1446a5540;
    puVar9[2] = local_e8;
    puVar9[3] = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar9 + 4,local_d8);
  }
  *param_2 = &LAB_1410c54d0;
  if (local_98 != 0) {
    plVar8 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar8 = local_a8;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar8 = local_e0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_e0 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_e0)(local_e0);
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
  plVar8 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_100 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_100)(local_100);
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
  return param_2;
}



// FUNCTION 1410cab50 FUN_1410cab50 body=314 status=ok
// SIG undefined FUN_1410cab50(void)

undefined1 FUN_1410cab50(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xc0);
  if ((lVar4 != 0) && (cVar2 = FUN_140d022f0(), cVar2 == '\0')) {
    do {
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar2 == '\0') &&
         ((DAT_1468c21ae != '\0' && (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)))) {
        lVar4 = FUN_14203ca70();
        if (lVar4 != 0) {
          FUN_1420714f0(lVar4);
        }
      }
      else {
        FUN_142036de0();
      }
      cVar2 = FUN_140d022f0(param_1);
      if ((cVar2 == '\0') && (*(longlong *)(param_1 + 0xc0) != 0)) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x50);
        (**(code **)(*plVar1 + 0x20))(plVar1,5,0);
      }
      cVar2 = FUN_140d022f0(param_1);
    } while (cVar2 == '\0');
    lVar4 = *(longlong *)(param_1 + 0xc0);
  }
  cVar2 = *(char *)(lVar4 + 0x58);
  while (cVar2 == '\0') {
    (**(code **)(**(longlong **)(lVar4 + 0x50) + 0x20))(*(longlong **)(lVar4 + 0x50),0x5d638865,0);
    cVar2 = *(char *)(lVar4 + 0x58);
  }
  return *(undefined1 *)(lVar4 + 0x60);
}



// FUNCTION 1410cac90 FUN_1410cac90 body=208 status=ok
// SIG undefined FUN_1410cac90(void)

longlong FUN_1410cac90(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1 + 0x10;
  lVar2 = FWeakObjectPtr::Get(lVar3);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_1 + 0x18)) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x20) == 0) {
      return 0;
    }
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar3,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x18) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar3);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar3 = UCheckBox::GetPrivateStaticClass();
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
    return 0;
  }
  return lVar2;
}



// FUNCTION 1410cad60 FUN_1410cad60 body=253 status=ok
// SIG undefined FUN_1410cad60(void)

undefined8 * FUN_1410cad60(undefined8 *param_1,undefined8 param_2)

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
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x98))(plVar5,local_28);
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



// FUNCTION 1410cae60 FUN_1410cae60 body=197 status=ok
// SIG undefined FUN_1410cae60(void)

ulonglong FUN_1410cae60(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x28);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x28);
    uVar6 = 0;
    if (*(char *)(param_1 + 0x40) == '\0') {
      uVar7 = uVar6;
      if (0 < *(int *)(param_1 + 0x60)) {
        do {
          lVar1 = *(longlong *)(param_1 + 0x58);
          lVar4 = FUN_1410cc440(lVar3 + 0xc50,*(undefined2 *)(param_1 + 0x40));
          if (*(longlong *)(lVar1 + uVar7) == lVar4) {
            return uVar6;
          }
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
          uVar7 = uVar7 + 8;
        } while ((int)uVar5 < *(int *)(param_1 + 0x60));
      }
    }
    else {
      uVar7 = uVar6;
      if (0 < *(int *)(param_1 + 0x50)) {
        do {
          lVar1 = *(longlong *)(param_1 + 0x48);
          lVar4 = FUN_1410cac90(lVar3 + 0xc50);
          if (*(longlong *)(lVar1 + uVar7) == lVar4) {
            return uVar6;
          }
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
          uVar7 = uVar7 + 8;
        } while ((int)uVar5 < *(int *)(param_1 + 0x50));
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 1410caf30 FUN_1410caf30 body=1321 status=ok
// SIG undefined FUN_1410caf30(void)

undefined4 *
FUN_1410caf30(longlong param_1,undefined4 *param_2,int param_3,longlong *param_4,char param_5)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_2 = DAT_1468b5ad4;
  if (param_3 != 0) {
    if (param_3 == 1) {
      iVar1 = *(int *)(param_1 + 0x17c);
      lVar4 = (longlong)iVar1;
      if ((iVar1 < 0) || ((int)param_4[1] <= iVar1)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_1410cb2b8;
      if (param_5 != '\0') {
        return param_2;
      }
      lVar4 = param_1 + 0x128;
      lVar5 = FWeakObjectPtr::Get(lVar4);
      if (lVar5 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if (DAT_1464b56f4 == *(int *)(param_1 + 0x130)) {
          return param_2;
        }
        if (*(longlong *)(param_1 + 0x138) == 0) {
          return param_2;
        }
        lVar5 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar4,lVar5);
        if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_1 + 0x130) = DAT_1464b56f4;
        }
        lVar5 = FWeakObjectPtr::Get(lVar4);
        if (lVar5 == 0) {
          return param_2;
        }
      }
      lVar6 = AArchVisCharacter::StaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        return param_2;
      }
      lVar5 = FWeakObjectPtr::Get(lVar4);
      if (lVar5 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(param_1 + 0x130)) && (*(longlong *)(param_1 + 0x138) != 0)) {
          lVar5 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar4,lVar5);
          if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0x130) = DAT_1464b56f4;
          }
          lVar5 = FWeakObjectPtr::Get(lVar4);
          if (lVar5 != 0) goto LAB_1410cb259;
        }
LAB_1410cb28f:
        lVar5 = 0;
      }
      else {
LAB_1410cb259:
        lVar4 = AArchVisCharacter::StaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_1410cb28f;
      }
      uVar3 = *(undefined4 *)(lVar5 + 0x7a8);
      goto LAB_1410cb43d;
    }
    if (param_3 != 2) {
      return param_2;
    }
    iVar1 = *(int *)(param_1 + 0x180);
    lVar4 = (longlong)iVar1;
    if ((iVar1 < 0) || ((int)param_4[1] <= iVar1)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
LAB_1410cb2b8:
      *param_2 = *(undefined4 *)(*param_4 + lVar4 * 4);
      return param_2;
    }
    if (param_5 != '\0') {
      return param_2;
    }
    lVar4 = param_1 + 0x128;
    lVar5 = FWeakObjectPtr::Get(lVar4);
    if (lVar5 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if (DAT_1464b56f4 == *(int *)(param_1 + 0x130)) {
        return param_2;
      }
      if (*(longlong *)(param_1 + 0x138) == 0) {
        return param_2;
      }
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x130) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar4);
      if (lVar5 == 0) {
        return param_2;
      }
    }
    lVar6 = AArchVisCharacter::StaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return param_2;
    }
    lVar5 = FWeakObjectPtr::Get(lVar4);
    if (lVar5 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(param_1 + 0x130)) && (*(longlong *)(param_1 + 0x138) != 0)) {
        lVar5 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar4,lVar5);
        if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_1 + 0x130) = DAT_1464b56f4;
        }
        lVar5 = FWeakObjectPtr::Get(lVar4);
        if (lVar5 != 0) goto LAB_1410cb0c2;
      }
LAB_1410cb0f8:
      lVar5 = 0;
    }
    else {
LAB_1410cb0c2:
      lVar4 = AArchVisCharacter::StaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1410cb0f8;
    }
    uVar3 = *(undefined4 *)(lVar5 + 0x7ac);
    goto LAB_1410cb43d;
  }
  iVar1 = *(int *)(param_1 + 0x178);
  lVar4 = (longlong)iVar1;
  if ((iVar1 < 0) || ((int)param_4[1] <= iVar1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) goto LAB_1410cb2b8;
  if (param_5 != '\0') {
    return param_2;
  }
  lVar4 = param_1 + 0x128;
  lVar5 = FWeakObjectPtr::Get(lVar4);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_1 + 0x130)) {
      return param_2;
    }
    if (*(longlong *)(param_1 + 0x138) == 0) {
      return param_2;
    }
    lVar5 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar4,lVar5);
    if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x130) = DAT_1464b56f4;
    }
    lVar5 = FWeakObjectPtr::Get(lVar4);
    if (lVar5 == 0) {
      return param_2;
    }
  }
  lVar6 = AArchVisCharacter::StaticClass();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return param_2;
  }
  lVar5 = FWeakObjectPtr::Get(lVar4);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x130)) && (*(longlong *)(param_1 + 0x138) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x130) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar4);
      if (lVar5 != 0) goto LAB_1410cb3fe;
    }
LAB_1410cb434:
    lVar5 = 0;
  }
  else {
LAB_1410cb3fe:
    lVar4 = AArchVisCharacter::StaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1410cb434;
  }
  uVar3 = *(undefined4 *)(lVar5 + 0x7a4);
LAB_1410cb43d:
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 1410cb460 FUN_1410cb460 body=134 status=ok
// SIG undefined FUN_1410cb460(void)

undefined8 FUN_1410cb460(longlong param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar4 != 0) {
    lVar5 = FUN_14141f270();
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
      iVar1 = *(int *)(param_1 + 0x770);
      iVar3 = FUN_14046e5c0(lVar4);
      if (iVar1 < iVar3) {
        uVar6 = UGameInstance::GetLocalPlayerByIndex(lVar4,iVar1);
        return uVar6;
      }
    }
  }
  return 0;
}



// FUNCTION 1410cb4f0 FUN_1410cb4f0 body=107 status=ok
// SIG undefined FUN_1410cb4f0(void)

longlong FUN_1410cb4f0(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_1410cb460();
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = UPlayer::GetPlayerController(lVar2,0);
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



// FUNCTION 1410cb560 FUN_1410cb560 body=25 status=ok
// SIG undefined FUN_1410cb560(void)

void FUN_1410cb560(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x148))();
  FUN_1410cd5d0(uVar1);
  return;
}



// FUNCTION 1410cb580 FUN_1410cb580 body=380 status=ok
// SIG undefined FUN_1410cb580(void)

longlong FUN_1410cb580(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 local_78 [24];
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  
  bVar8 = false;
  plVar7 = *(longlong **)(param_1 + 0x7e0);
  plVar1 = plVar7 + *(int *)(param_1 + 0x7e8);
  do {
    if (plVar7 == plVar1) {
      lVar5 = FWeakObjectPtr::Get(param_1 + 0x5d4);
      if (lVar5 != 0) {
        lVar6 = FUN_1414d9130();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) {
          lVar5 = FUN_1411e1740(lVar5,param_2);
          return lVar5;
        }
      }
      return 0;
    }
    lVar5 = *plVar7;
    if (lVar5 == 0) {
LAB_1410cb65d:
      bVar2 = false;
    }
    else {
      local_48 = 0;
      local_50 = 0;
      local_40 = 0;
      local_60 = 0xffffffff;
      local_5c = 0;
      if (param_2 == 0) {
        local_50 = 0;
      }
      else {
        uVar4 = FSoftObjectPath::FSoftObjectPath(local_78,param_2);
        FSoftObjectPath::operator=(&local_50,uVar4);
        FWeakObjectPtr::operator=(&local_60,param_2);
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        local_5c = CONCAT44(DAT_1464b56f4,(undefined4)local_5c);
      }
      bVar8 = true;
      cVar3 = FSoftObjectPath::operator==(lVar5 + 0x50,&local_50);
      if (cVar3 == '\0') goto LAB_1410cb65d;
      bVar2 = true;
    }
    if ((bVar8) && (bVar8 = false, local_48 != 0)) {
      FMemory::Free();
    }
    if (bVar2) {
      return lVar5;
    }
    plVar7 = plVar7 + 1;
  } while( true );
}



// FUNCTION 1410cb700 FUN_1410cb700 body=93 status=ok
// SIG undefined FUN_1410cb700(void)

longlong FUN_1410cb700(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x4e8);
  if (lVar1 != 0) {
    lVar3 = FUN_141319ff0();
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
      return lVar1 + 0xc0;
    }
  }
  return 0;
}



// FUNCTION 1410cb760 FUN_1410cb760 body=93 status=ok
// SIG undefined FUN_1410cb760(void)

longlong FUN_1410cb760(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x680);
  if (lVar2 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
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



// FUNCTION 1410cb7c0 FUN_1410cb7c0 body=159 status=ok
// SIG undefined FUN_1410cb7c0(void)

longlong FUN_1410cb7c0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x680);
  if (lVar2 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar2 = *(longlong *)(lVar2 + 0x6d8), lVar2 != 0)) {
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
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 1410cb860 FUN_1410cb860 body=691 status=ok
// SIG undefined FUN_1410cb860(void)

void FUN_1410cb860(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined1 local_res18 [8];
  undefined2 *local_28;
  int local_20;
  
  FString::PrintfImpl(&local_28,L"Grade%dDescriptionCanvasPanel",param_2);
  puVar6 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar6 = local_28;
  }
  uVar3 = FName::FName(local_res18,puVar6,1);
  lVar4 = FUN_1421006a0(param_1,uVar3);
  if (lVar4 == 0) {
LAB_1410cb900:
    lVar4 = 0;
  }
  else {
    lVar5 = UCanvasPanel::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1410cb900;
  }
  *param_3 = lVar4;
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_28,L"Grade%dLockImage",param_2);
  puVar6 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar6 = local_28;
  }
  uVar3 = FName::FName(local_res18,puVar6,1);
  lVar4 = FUN_1421006a0(param_1,uVar3);
  if (lVar4 == 0) {
LAB_1410cb98f:
    lVar4 = 0;
  }
  else {
    lVar5 = FUN_14214a2d0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1410cb98f;
  }
  param_3[1] = lVar4;
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_28,L"Grade%dDescription",param_2);
  puVar6 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar6 = local_28;
  }
  uVar3 = FName::FName(local_res18,puVar6,1);
  lVar4 = FUN_1421006a0(param_1,uVar3);
  if (lVar4 != 0) {
    lVar5 = UImage::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1410cba21;
  }
  lVar4 = 0;
LAB_1410cba21:
  param_3[2] = lVar4;
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  iVar7 = 0;
  do {
    iVar7 = iVar7 + 1;
    FString::PrintfImpl(&local_28,L"Grade%dAtt%d",param_2,iVar7);
    puVar6 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar6 = local_28;
    }
    uVar3 = FName::FName(local_res18,puVar6,1);
    lVar4 = FUN_1421006a0(param_1,uVar3);
    if (lVar4 == 0) {
LAB_1410cbac0:
      lVar4 = 0;
    }
    else {
      lVar5 = UImage::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1410cbac0;
    }
    iVar1 = (int)param_3[4];
    *(int *)(param_3 + 4) = iVar1 + 1;
    if (*(int *)((longlong)param_3 + 0x24) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3 + 3,iVar1);
    }
    *(longlong *)(param_3[3] + (longlong)iVar1 * 8) = lVar4;
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (2 < iVar7) {
      return;
    }
  } while( true );
}



// FUNCTION 1410cbb20 FUN_1410cbb20 body=699 status=ok
// SIG undefined FUN_1410cbb20(void)

longlong * FUN_1410cbb20(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  wint_t wVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ushort *puVar11;
  char *pcVar12;
  ushort *puVar13;
  longlong local_38;
  undefined8 local_30;
  
  lVar8 = FInternationalization::Get();
  plVar4 = *(longlong **)(lVar8 + 0x30);
  uVar5 = *(undefined8 *)(lVar8 + 0x28);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  uVar9 = FUN_140511b50(uVar5);
  FString::FString(param_2,uVar9);
  puVar10 = (undefined8 *)FUN_140511b50(uVar5);
  puVar13 = &DAT_143f3eda8;
  if (*(int *)(puVar10 + 1) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (ushort *)*puVar10;
  }
  pcVar12 = "zh";
  do {
    uVar3 = *puVar11;
    if ((uVar3 == 0) && (*pcVar12 == '\0')) goto LAB_1410cbbd5;
    if ((uint)uVar3 != (int)*pcVar12) {
      wVar6 = towlower(uVar3);
      iVar7 = tolower((int)*pcVar12);
      if ((uint)wVar6 != (int)(char)iVar7) break;
    }
    puVar11 = puVar11 + 1;
    pcVar12 = pcVar12 + 1;
  } while( true );
  if ((uint)wVar6 == (int)(char)iVar7) {
LAB_1410cbbd5:
    puVar10 = (undefined8 *)FUN_1415de5f0(uVar5);
    if (*(int *)(puVar10 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (ushort *)*puVar10;
    }
    pcVar12 = "Hant";
    do {
      uVar3 = *puVar11;
      if ((uVar3 == 0) && (*pcVar12 == '\0')) goto LAB_1410cbd03;
      if ((uint)uVar3 != (int)*pcVar12) {
        wVar6 = towlower(uVar3);
        iVar7 = tolower((int)*pcVar12);
        if ((uint)wVar6 != (int)(char)iVar7) goto LAB_1410cbc33;
      }
      puVar11 = puVar11 + 1;
      pcVar12 = pcVar12 + 1;
    } while( true );
  }
  goto LAB_1410cbd7f;
LAB_1410cbc99:
  if ((uint)wVar6 != (int)(char)iVar7) {
    puVar10 = (undefined8 *)FUN_140572fd0(uVar5);
    if (*(int *)(puVar10 + 1) != 0) {
      puVar13 = (ushort *)*puVar10;
    }
    pcVar12 = "CN";
    do {
      uVar3 = *puVar13;
      if ((uVar3 == 0) && (*pcVar12 == '\0')) break;
      if ((uint)uVar3 != (int)*pcVar12) {
        wVar6 = towlower(uVar3);
        iVar7 = tolower((int)*pcVar12);
        if ((uint)wVar6 != (int)(char)iVar7) goto LAB_1410cbcff;
      }
      puVar13 = puVar13 + 1;
      pcVar12 = pcVar12 + 1;
    } while( true );
  }
  goto LAB_1410cbd7f;
LAB_1410cbcff:
  if ((uint)wVar6 == (int)(char)iVar7) goto LAB_1410cbd7f;
  goto LAB_1410cbd03;
LAB_1410cbc33:
  if ((uint)wVar6 != (int)(char)iVar7) {
    puVar10 = (undefined8 *)FUN_1415de5f0(uVar5);
    if (*(int *)(puVar10 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (ushort *)*puVar10;
    }
    pcVar12 = "Hans";
    do {
      uVar3 = *puVar11;
      if ((uVar3 == 0) && (*pcVar12 == '\0')) goto LAB_1410cbd7f;
      if ((uint)uVar3 != (int)*pcVar12) {
        wVar6 = towlower(uVar3);
        iVar7 = tolower((int)*pcVar12);
        if ((uint)wVar6 != (int)(char)iVar7) goto LAB_1410cbc99;
      }
      puVar11 = puVar11 + 1;
      pcVar12 = pcVar12 + 1;
    } while( true );
  }
LAB_1410cbd03:
  local_30 = 3;
  local_38 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  lVar8 = local_38;
  FGenericPlatformString::Convert<char,wchar_t>(local_38,3,&DAT_144690924,3,0x3f);
  if (param_2 == &local_38) {
    if (lVar8 != 0) {
      FMemory::Free(lVar8);
    }
  }
  else {
    if (*param_2 != 0) {
      FMemory::Free();
    }
    *param_2 = lVar8;
    *(undefined4 *)(param_2 + 1) = (undefined4)local_30;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_30._4_4_;
  }
LAB_1410cbd7f:
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
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1410cbde0 FUN_1410cbde0 body=21 status=ok
// SIG undefined FUN_1410cbde0(void)

undefined1 FUN_1410cbde0(char param_1)

{
  if (param_1 == '\0') {
    return 1;
  }
  if (param_1 != '\x01') {
    return 0;
  }
  return 2;
}



// FUNCTION 1410cbe00 FUN_1410cbe00 body=342 status=ok
// SIG undefined FUN_1410cbe00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1410cbe00(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_198 [32];
  undefined2 local_178;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 *local_148 [2];
  longlong local_138 [4];
  longlong *local_118;
  int local_108;
  undefined1 local_f8 [208];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  FWeakObjectPtr::operator=(&local_168,param_1);
  local_118 = (longlong *)0x0;
  local_108 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_138);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8920;
    puVar2[1] = param_1;
    *(undefined4 *)(puVar2 + 2) = local_168;
    *(undefined4 *)((longlong)puVar2 + 0x14) = local_164;
  }
  local_160 = 0;
  local_148[0] = &LAB_1410c58b0;
  local_158 = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_160,0);
  local_178 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>(local_160,0x14,"GetNumRemotePlayers");
  FUN_141022700(local_f8,&local_160,local_148);
  uVar3 = FUN_141036f30(local_f8,local_148);
  FUN_142084370(param_1,uVar3);
  if (local_108 != 0) {
    plVar4 = local_138;
    if (local_118 != (longlong *)0x0) {
      plVar4 = local_118;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
  uVar1 = FUN_141037230(local_f8);
  FUN_140ce1dc0(local_f8);
  return uVar1;
}



// FUNCTION 1410cbf60 FUN_1410cbf60 body=416 status=ok
// SIG undefined FUN_1410cbf60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1410cbf60(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong lStack_a0;
  undefined4 *local_98;
  ulonglong *puStack_90;
  undefined1 local_88 [16];
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [16];
  undefined4 local_50 [2];
  undefined8 local_48;
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  puVar6 = (undefined8 *)FTextFormat::FTextFormat(local_60,param_1 + 0x68);
  local_50[0] = 0;
  local_28 = '\0';
  local_48 = 0;
  local_98 = local_50;
  puStack_90 = &local_20;
  local_a8 = *puVar6;
  lStack_a0 = puVar6[1];
  if (lStack_a0 != 0) {
    LOCK();
    *(int *)(lStack_a0 + 8) = *(int *)(lStack_a0 + 8) + 1;
    UNLOCK();
  }
  uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_88,&local_98);
  uVar7 = FText::Format(local_78,&local_a8,uVar7);
  FText::FText(param_2,uVar7);
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
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_88);
  if (local_28 != '\0') {
    local_28 = '\0';
    if (local_38 != (longlong *)0x0) {
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
  }
  plVar4 = (longlong *)puVar6[1];
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
  return param_2;
}



// FUNCTION 1410cc100 FUN_1410cc100 body=416 status=ok
// SIG undefined FUN_1410cc100(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1410cc100(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong lStack_a0;
  undefined4 *local_98;
  ulonglong *puStack_90;
  undefined1 local_88 [16];
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [16];
  undefined4 local_50 [2];
  undefined8 local_48;
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  puVar6 = (undefined8 *)FTextFormat::FTextFormat(local_60,param_1 + 0x50);
  local_50[0] = 0;
  local_28 = '\0';
  local_48 = 0;
  local_98 = local_50;
  puStack_90 = &local_20;
  local_a8 = *puVar6;
  lStack_a0 = puVar6[1];
  if (lStack_a0 != 0) {
    LOCK();
    *(int *)(lStack_a0 + 8) = *(int *)(lStack_a0 + 8) + 1;
    UNLOCK();
  }
  uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_88,&local_98);
  uVar7 = FText::Format(local_78,&local_a8,uVar7);
  FText::FText(param_2,uVar7);
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
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_88);
  if (local_28 != '\0') {
    local_28 = '\0';
    if (local_38 != (longlong *)0x0) {
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
  }
  plVar4 = (longlong *)puVar6[1];
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
  return param_2;
}



// FUNCTION 1410cc2a0 FUN_1410cc2a0 body=416 status=ok
// SIG undefined FUN_1410cc2a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1410cc2a0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong lStack_a0;
  undefined4 *local_98;
  ulonglong *puStack_90;
  undefined1 local_88 [16];
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [16];
  undefined4 local_50 [2];
  undefined8 local_48;
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  puVar6 = (undefined8 *)FTextFormat::FTextFormat(local_60,param_1 + 0x38);
  local_50[0] = 0;
  local_28 = '\0';
  local_48 = 0;
  local_98 = local_50;
  puStack_90 = &local_20;
  local_a8 = *puVar6;
  lStack_a0 = puVar6[1];
  if (lStack_a0 != 0) {
    LOCK();
    *(int *)(lStack_a0 + 8) = *(int *)(lStack_a0 + 8) + 1;
    UNLOCK();
  }
  uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_88,&local_98);
  uVar7 = FText::Format(local_78,&local_a8,uVar7);
  FText::FText(param_2,uVar7);
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
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_88);
  if (local_28 != '\0') {
    local_28 = '\0';
    if (local_38 != (longlong *)0x0) {
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
  }
  plVar4 = (longlong *)puVar6[1];
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
  return param_2;
}



// FUNCTION 1410cc440 FUN_1410cc440 body=349 status=ok
// SIG undefined FUN_1410cc440(void)

longlong FUN_1410cc440(longlong param_1,undefined2 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  switch((char)((ushort)param_2 >> 8)) {
  case '\x01':
    param_1 = param_1 + 0x38;
    break;
  case '\x02':
    param_1 = param_1 + 0x60;
    break;
  case '\x03':
    param_1 = param_1 + 0x88;
    break;
  case '\x04':
    param_1 = param_1 + 0xb0;
    break;
  case '\x05':
    param_1 = param_1 + 0xd8;
    break;
  case '\x06':
    param_1 = param_1 + 0x100;
    break;
  case '\a':
    param_1 = param_1 + 0x128;
    break;
  case '\b':
    param_1 = param_1 + 0x150;
    break;
  default:
    return 0;
  }
  lVar2 = FWeakObjectPtr::Get(param_1);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_1 + 8)) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x10) == 0) {
      return 0;
    }
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(param_1,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 8) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(param_1);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar3 = AArchVisCharacter::StaticClass();
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
    return 0;
  }
  return lVar2;
}



// FUNCTION 1410cc5c0 FUN_1410cc5c0 body=207 status=ok
// SIG undefined FUN_1410cc5c0(void)

undefined8 FUN_1410cc5c0(longlong param_1,undefined8 param_2,undefined2 param_3)

{
  undefined8 local_res10;
  undefined2 local_res18;
  
  local_res18 = param_3;
  FUN_1410b34c0(param_2);
  local_res10 = param_2;
  if ((char)param_3 != '\0') {
    FUN_1410ace30(&local_res10,param_1 + 0x10);
    return param_2;
  }
  switch(local_res18._1_1_) {
  case 1:
    param_1 = param_1 + 0x38;
    break;
  case 2:
    param_1 = param_1 + 0x60;
    break;
  case 3:
    param_1 = param_1 + 0x88;
    break;
  case 4:
    param_1 = param_1 + 0xb0;
    break;
  case 5:
    param_1 = param_1 + 0xd8;
    break;
  case 6:
    param_1 = param_1 + 0x100;
    break;
  case 7:
    param_1 = param_1 + 0x128;
    break;
  case 8:
    param_1 = param_1 + 0x150;
    break;
  default:
    goto switchD_1410cc630_default;
  }
  FUN_1410acff0(&local_res10,param_1);
switchD_1410cc630_default:
  return param_2;
}



// FUNCTION 1410cc6b0 FUN_1410cc6b0 body=70 status=ok
// SIG undefined FUN_1410cc6b0(void)

longlong FUN_1410cc6b0(longlong param_1,undefined2 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cStackX_11;
  
  lVar1 = *(longlong *)(param_1 + 2000);
  lVar2 = (longlong)*(int *)(param_1 + 0x7d8) * 0xe8 + lVar1;
  if (lVar1 != lVar2) {
    cStackX_11 = (char)((ushort)param_2 >> 8);
    do {
      if ((*(char *)(lVar1 + 0x18) == (char)param_2) && (*(char *)(lVar1 + 0x19) == cStackX_11)) {
        return lVar1;
      }
      lVar1 = lVar1 + 0xe8;
    } while (lVar1 != lVar2);
  }
  return param_1 + 0xf60;
}



// FUNCTION 1410cc700 FUN_1410cc700 body=3128 status=ok
// SIG undefined FUN_1410cc700(void)

longlong * FUN_1410cc700(longlong param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x38);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x40)) && (*(longlong *)(param_1 + 0x48) != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_1 + 0x38,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x40) = DAT_1464b56f4;
      }
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x38);
      if (lVar4 != 0) goto LAB_1410cc79f;
    }
  }
  else {
LAB_1410cc79f:
    lVar5 = AArchVisCharacter::StaticClass();
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
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x38);
      if (lVar4 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(param_1 + 0x40)) && (*(longlong *)(param_1 + 0x48) != 0)) {
          lVar4 = FUN_141796df0();
          FWeakObjectPtr::operator=(param_1 + 0x38,lVar4);
          if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0x40) = DAT_1464b56f4;
          }
          lVar4 = FWeakObjectPtr::Get(param_1 + 0x38);
          if (lVar4 != 0) goto LAB_1410cc84e;
        }
LAB_1410cc884:
        lVar4 = lVar7;
      }
      else {
LAB_1410cc84e:
        lVar5 = AArchVisCharacter::StaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_1410cc884;
      }
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
    }
  }
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x60);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x68)) && (*(longlong *)(param_1 + 0x70) != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(param_1 + 0x60,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x68) = DAT_1464b56f4;
      }
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x60);
      if (lVar4 != 0) goto LAB_1410cc924;
    }
  }
  else {
LAB_1410cc924:
    lVar5 = AArchVisCharacter::StaticClass();
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
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x60);
      if (lVar4 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(param_1 + 0x68)) && (*(longlong *)(param_1 + 0x70) != 0)) {
          lVar4 = FUN_141796df0();
          FWeakObjectPtr::operator=(param_1 + 0x60,lVar4);
          if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0x68) = DAT_1464b56f4;
          }
          lVar4 = FWeakObjectPtr::Get(param_1 + 0x60);
          if (lVar4 != 0) goto LAB_1410cc9d3;
        }
LAB_1410cca09:
        lVar4 = lVar7;
      }
      else {
LAB_1410cc9d3:
        lVar5 = AArchVisCharacter::StaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_1410cca09;
      }
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
    }
  }
  lVar4 = param_1 + 0x88;
  lVar5 = FWeakObjectPtr::Get(lVar4);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x90)) && (*(longlong *)(param_1 + 0x98) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x90) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar4);
      if (lVar5 != 0) goto LAB_1410ccaad;
    }
  }
  else {
LAB_1410ccaad:
    lVar6 = AArchVisCharacter::StaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar5 = FWeakObjectPtr::Get(lVar4);
      if (lVar5 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(param_1 + 0x90)) && (*(longlong *)(param_1 + 0x98) != 0)) {
          lVar5 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar4,lVar5);
          if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0x90) = DAT_1464b56f4;
          }
          lVar5 = FWeakObjectPtr::Get(lVar4);
          if (lVar5 != 0) goto LAB_1410ccb59;
        }
LAB_1410ccb8f:
        lVar5 = lVar7;
      }
      else {
LAB_1410ccb59:
        lVar4 = AArchVisCharacter::StaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_1410ccb8f;
      }
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar5;
    }
  }
  lVar4 = param_1 + 0xb0;
  lVar5 = FWeakObjectPtr::Get(lVar4);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0xb8)) && (*(longlong *)(param_1 + 0xc0) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0xb8) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar4);
      if (lVar5 != 0) goto LAB_1410ccc33;
    }
  }
  else {
LAB_1410ccc33:
    lVar6 = AArchVisCharacter::StaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar5 = FWeakObjectPtr::Get(lVar4);
      if (lVar5 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(param_1 + 0xb8)) && (*(longlong *)(param_1 + 0xc0) != 0)) {
          lVar5 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar4,lVar5);
          if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0xb8) = DAT_1464b56f4;
          }
          lVar5 = FWeakObjectPtr::Get(lVar4);
          if (lVar5 != 0) goto LAB_1410cccdf;
        }
LAB_1410ccd15:
        lVar5 = lVar7;
      }
      else {
LAB_1410cccdf:
        lVar4 = AArchVisCharacter::StaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_1410ccd15;
      }
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar5;
    }
  }
  lVar4 = param_1 + 0xd8;
  lVar5 = FWeakObjectPtr::Get(lVar4);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0xe0)) && (*(longlong *)(param_1 + 0xe8) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0xe0) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar4);
      if (lVar5 != 0) goto LAB_1410ccdb9;
    }
  }
  else {
LAB_1410ccdb9:
    lVar6 = AArchVisCharacter::StaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar5 = FWeakObjectPtr::Get(lVar4);
      if (lVar5 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(param_1 + 0xe0)) && (*(longlong *)(param_1 + 0xe8) != 0)) {
          lVar5 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar4,lVar5);
          if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0xe0) = DAT_1464b56f4;
          }
          lVar5 = FWeakObjectPtr::Get(lVar4);
          if (lVar5 != 0) goto LAB_1410cce65;
        }
LAB_1410cce9b:
        lVar5 = lVar7;
      }
      else {
LAB_1410cce65:
        lVar4 = AArchVisCharacter::StaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_1410cce9b;
      }
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar5;
    }
  }
  lVar4 = param_1 + 0x100;
  lVar5 = FWeakObjectPtr::Get(lVar4);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x108)) && (*(longlong *)(param_1 + 0x110) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x108) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar4);
      if (lVar5 != 0) goto LAB_1410ccf3f;
    }
  }
  else {
LAB_1410ccf3f:
    lVar6 = AArchVisCharacter::StaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar5 = FWeakObjectPtr::Get(lVar4);
      if (lVar5 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(param_1 + 0x108)) && (*(longlong *)(param_1 + 0x110) != 0)) {
          lVar5 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar4,lVar5);
          if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0x108) = DAT_1464b56f4;
          }
          lVar5 = FWeakObjectPtr::Get(lVar4);
          if (lVar5 != 0) goto LAB_1410ccfeb;
        }
LAB_1410cd021:
        lVar5 = lVar7;
      }
      else {
LAB_1410ccfeb:
        lVar4 = AArchVisCharacter::StaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_1410cd021;
      }
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar5;
    }
  }
  lVar4 = param_1 + 0x128;
  lVar5 = FWeakObjectPtr::Get(lVar4);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x130)) && (*(longlong *)(param_1 + 0x138) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x130) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar4);
      if (lVar5 != 0) goto LAB_1410cd0c5;
    }
  }
  else {
LAB_1410cd0c5:
    lVar6 = AArchVisCharacter::StaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar5 = FWeakObjectPtr::Get(lVar4);
      if (lVar5 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(param_1 + 0x130)) && (*(longlong *)(param_1 + 0x138) != 0)) {
          lVar5 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar4,lVar5);
          if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(param_1 + 0x130) = DAT_1464b56f4;
          }
          lVar5 = FWeakObjectPtr::Get(lVar4);
          if (lVar5 != 0) goto LAB_1410cd171;
        }
LAB_1410cd1a7:
        lVar5 = lVar7;
      }
      else {
LAB_1410cd171:
        lVar4 = AArchVisCharacter::StaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_1410cd1a7;
      }
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar5;
    }
  }
  lVar4 = param_1 + 0x150;
  lVar5 = FWeakObjectPtr::Get(lVar4);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_1 + 0x158)) {
      return param_2;
    }
    if (*(longlong *)(param_1 + 0x160) == 0) {
      return param_2;
    }
    lVar5 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar4,lVar5);
    if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x158) = DAT_1464b56f4;
    }
    lVar5 = FWeakObjectPtr::Get(lVar4);
    if (lVar5 == 0) {
      return param_2;
    }
  }
  lVar6 = AArchVisCharacter::StaticClass();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return param_2;
  }
  lVar5 = FWeakObjectPtr::Get(lVar4);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x158)) && (*(longlong *)(param_1 + 0x160) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x158) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar4);
      if (lVar5 != 0) goto LAB_1410cd2f3;
    }
  }
  else {
LAB_1410cd2f3:
    cVar3 = FUN_1410af6d0(lVar5);
    if (cVar3 != '\0') goto LAB_1410cd302;
  }
  lVar5 = lVar7;
LAB_1410cd302:
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar5;
  return param_2;
}



// FUNCTION 1410cd340 FUN_1410cd340 body=137 status=ok
// SIG undefined FUN_1410cd340(void)

undefined8 FUN_1410cd340(longlong param_1,undefined8 *param_2)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = *(undefined8 **)(param_1 + 0x7f0);
  puVar7 = puVar6 + (longlong)*(int *)(param_1 + 0x7f8) * 0x33;
  if (puVar6 != puVar7) {
    do {
      if (*(int *)(param_2 + 1) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)*param_2;
      }
      if (*(int *)(puVar6 + 1) == 0) {
        psVar3 = &DAT_143f3eda8;
      }
      else {
        psVar3 = (short *)*puVar6;
      }
      lVar5 = (longlong)puVar4 - (longlong)psVar3;
      do {
        sVar1 = *psVar3;
        sVar2 = *(short *)((longlong)psVar3 + lVar5);
        if (sVar1 != sVar2) break;
        psVar3 = psVar3 + 1;
      } while (sVar2 != 0);
      if (sVar1 == sVar2) {
        return puVar6[0x32];
      }
      puVar6 = puVar6 + 0x33;
    } while (puVar6 != puVar7);
  }
  return 0;
}



// FUNCTION 1410cd3d0 FUN_1410cd3d0 body=503 status=ok
// SIG undefined FUN_1410cd3d0(void)

void FUN_1410cd3d0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_58;
  longlong *local_50;
  undefined **local_48 [2];
  longlong *local_38;
  longlong local_30;
  
  if (param_2 != 0) {
    lVar6 = FUN_142547b50(param_2,local_48);
    plVar5 = *(longlong **)(lVar6 + 0x10);
    lVar6 = *(longlong *)(lVar6 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_48[0] = &PTR_FUN_143f740c8;
    if (local_30 != 0) {
      FMemory::Free();
    }
    local_48[0] = &PTR_FUN_143f73d18;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
    if ((lVar6 != 0) && (lVar7 = FUN_140f9aee0(param_1), lVar7 != 0)) {
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_58 = lVar6;
      local_50 = plVar5;
      FUN_140d79f00(*(undefined8 *)(lVar7 + 0x478),&local_58,1,0,param_3);
      plVar1 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_50 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_50)(local_50);
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
      if (plVar5 == (longlong *)0x0) {
        return;
      }
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
      LOCK();
      plVar1 = plVar5 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 != 1) {
        return;
      }
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 != 1) {
        return;
      }
      (**(code **)(*plVar5 + 8))(plVar5,1);
      return;
    }
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
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  return;
}



// FUNCTION 1410cd5d0 FUN_1410cd5d0 body=305 status=ok
// SIG undefined FUN_1410cd5d0(void)

char FUN_1410cd5d0(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
  lVar3 = plVar2[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar3 = plVar2[0x1f];
  }
  if (DAT_146b17150 == 0) {
    return '\0';
  }
  if (lVar3 == 0) {
    return '\0';
  }
  iVar1 = UEngine::GetNumGamePlayers(DAT_146b17150,param_1);
  if (-1 < iVar1) {
    if (iVar1 < 2) {
      return '\0';
    }
    if (iVar1 == 2) {
      if (*(char *)(lVar3 + 0x69) == '\0') {
        return '\x01';
      }
      if (*(char *)(lVar3 + 0x69) != '\x01') {
        return '\0';
      }
      return '\x02';
    }
    if (iVar1 == 3) {
      switch(*(undefined1 *)(lVar3 + 0x6a)) {
      case 0:
        return '\x03';
      case 1:
        return '\x04';
      case 2:
        goto switchD_1410cd672_caseD_2;
      case 3:
        if (*(char *)(lVar3 + 0x69) != '\0') {
          return '\x06';
        }
        return '\x03';
      case 4:
        return (*(char *)(lVar3 + 0x69) != '\0') + '\x04';
      case 5:
        if (*(char *)(lVar3 + 0x69) != '\0') {
          return '\x06';
        }
        return '\x04';
      default:
        return '\0';
      }
    }
  }
  return '\a';
switchD_1410cd672_caseD_2:
  if (*(char *)(lVar3 + 0x69) != '\0') {
    return '\x05';
  }
  return '\x03';
}



// FUNCTION 1410cd720 FUN_1410cd720 body=359 status=ok
// SIG undefined FUN_1410cd720(void)

undefined8 * FUN_1410cd720(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined8 local_28;
  longlong *plStack_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar6 = *(longlong *)(param_1 + 0x4e8);
  if (lVar6 != 0) {
    lVar4 = FUN_141319ff0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    plVar5 = (longlong *)(lVar6 + 0x158);
    if (bVar9) goto LAB_1410cd790;
  }
  plVar5 = (longlong *)&DAT_00000098;
LAB_1410cd790:
  bVar9 = *plVar5 == 0;
  if (bVar9) {
    puVar7 = &local_28;
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
    uVar8 = 0;
  }
  else {
    lVar6 = FUN_1410cb700(param_1);
    puVar7 = (undefined8 *)FUN_142dcf3a0(*(undefined8 *)(lVar6 + 0x98),local_18);
    uVar8 = *puVar7;
  }
  *param_2 = uVar8;
  param_2[1] = puVar7[1];
  puVar7[1] = 0;
  *puVar7 = 0;
  plVar5 = plStack_20;
  if (bVar9) {
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_20 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  if ((!bVar9) && (local_10 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_10 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return param_2;
}



// FUNCTION 1410cd890 CurrentBazookaLevel body=8 status=ok
// SIG undefined CurrentBazookaLevel(void)

undefined8 ATTLBaseBossBallPawn::CurrentBazookaLevel(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x840);
}



// FUNCTION 1410cd8a0 FUN_1410cd8a0 body=271 status=ok
// SIG undefined FUN_1410cd8a0(void)

undefined8 FUN_1410cd8a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FText::FText(param_2);
  cVar4 = *(char *)(param_1 + 0x1a9);
  if (cVar4 == '\0') {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"View Inventory",L"GFxVaultHunterProfileCard",L"ViewInventoryHint")
    ;
    FText::operator=(param_2,uVar6);
  }
  else if (cVar4 == '\x01') {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"View Stats",L"GFxVaultHunterProfileCard",L"ViewStatsHint");
    FText::operator=(param_2,uVar6);
    local_20 = local_38;
  }
  else {
    if (cVar4 != '\x02') {
      return param_2;
    }
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"View Skills",L"GFxVaultHunterProfileCard",L"ViewSkillsHint");
    FText::operator=(param_2,uVar6);
    local_20 = local_50;
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_2;
}



// FUNCTION 1410cd9b0 FUN_1410cd9b0 body=76 status=ok
// SIG undefined FUN_1410cd9b0(void)

undefined8 FUN_1410cd9b0(int param_1)

{
  longlong lVar1;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = *(longlong *)(DAT_146b33f38 + 0x98);
  if (((lVar1 != 0) && (-1 < param_1)) && (param_1 < *(int *)(lVar1 + 0x48))) {
    return *(undefined8 *)(*(longlong *)(lVar1 + 0x40) + (longlong)param_1 * 8);
  }
  return 0;
}



// FUNCTION 1410cda00 FUN_1410cda00 body=271 status=ok
// SIG undefined FUN_1410cda00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410cda00(undefined8 param_1)

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
  local_b8[0] = &LAB_1410c5340;
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



// FUNCTION 1410cdb10 FUN_1410cdb10 body=38 status=ok
// SIG undefined FUN_1410cdb10(void)

longlong FUN_1410cdb10(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong in_RAX;
  float fVar3;
  
  if (((*(char *)(param_1 + 0x1a9) != '\x02') ||
      (in_RAX = *(longlong *)(param_1 + 0x198), in_RAX == 0)) ||
     (lVar1 = *(longlong *)(in_RAX + 0x178), lVar1 == 0)) {
    return in_RAX;
  }
  cVar2 = (**(code **)(*(longlong *)(lVar1 + 0x170) + 0x40))();
  if (((cVar2 != '\0') && (1e-08 < ABS(*(float *)(param_2 + 4)))) &&
     (((*(longlong *)(param_2 + 8) == DAT_146b3e0a0 && (*(char *)(lVar1 + 0x338) == '\x01')) ||
      ((*(longlong *)(param_2 + 8) == DAT_146b3e098 && (*(char *)(lVar1 + 0x338) == '\0')))))) {
    fVar3 = *(float *)(lVar1 + 0x31c);
    *(undefined4 *)(lVar1 + 0x348) = 0;
    *(undefined8 *)(lVar1 + 0x340) = 0;
    if (0.0 < *(float *)(param_2 + 4)) {
      fVar3 = -fVar3;
    }
    FUN_142f0fa80(lVar1,fVar3 + *(float *)(lVar1 + 0x310),1);
    return 1;
  }
  return 0;
}



// FUNCTION 1410cdb40 FUN_1410cdb40 body=79 status=ok
// SIG undefined FUN_1410cdb40(void)

undefined8 FUN_1410cdb40(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    cVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x868) + 0x20))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  uVar2 = FUN_142eefc20(param_1,param_2);
  return uVar2;
}



// FUNCTION 1410cdb90 FUN_1410cdb90 body=179 status=ok
// SIG undefined FUN_1410cdb90(void)

void FUN_1410cdb90(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (*(char *)(param_1 + 0x698) == '\x05') {
    FUN_1410d0990();
    FUN_1410e8a40(param_1);
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
    local_58[0] = &LAB_1410c5520;
    FUN_14208c4f0(param_1,local_58);
    FUN_1410ead50(param_1);
  }
  return;
}



// FUNCTION 1410cdc50 FUN_1410cdc50 body=94 status=ok
// SIG undefined FUN_1410cdc50(void)

void FUN_1410cdc50(undefined8 param_1)

{
  longlong local_18 [2];
  
  local_18[1] = 5;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"hide",10);
  FUN_142088910(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410cdcb0 FUN_1410cdcb0 body=743 status=ok
// SIG undefined FUN_1410cdcb0(void)

void FUN_1410cdcb0(longlong param_1,undefined4 param_2,undefined2 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  bool bVar13;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  *(undefined4 *)(param_1 + 0x308) = param_2;
  *(undefined2 *)(param_1 + 0x30c) = param_3;
  FString::operator=(param_1 + 0x310,param_4);
  lVar10 = param_1 + 0x1d0;
  FWeakObjectPtr::operator=(lVar10,0);
  pwVar12 = (wchar_t *)0x0;
  lVar3 = param_1 + 0x1b0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  FWeakObjectPtr::operator=(lVar3,0);
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  plVar6 = *(longlong **)(param_1 + 0x260);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    uVar4 = *(uint *)(plVar6 + 1);
    bVar13 = uVar4 == 0;
    if (bVar13) {
      *(uint *)(plVar6 + 1) = 0;
      pwVar11 = pwVar12;
    }
    else {
      pwVar11 = (wchar_t *)(ulonglong)uVar4;
    }
    UNLOCK();
    while (!bVar13) {
      iVar5 = (int)pwVar11;
      LOCK();
      bVar13 = iVar5 == (int)plVar6[1];
      if (bVar13) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar13) {
        if (plVar6 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 600) != 0) {
            FUN_142056670(*(longlong *)(param_1 + 600),0);
          }
          LOCK();
          plVar1 = plVar6 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
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
        break;
      }
      pwVar11 = (wchar_t *)0x0;
      LOCK();
      uVar4 = *(uint *)(plVar6 + 1);
      bVar13 = uVar4 == 0;
      if (bVar13) {
        *(uint *)(plVar6 + 1) = 0;
      }
      else {
        pwVar11 = (wchar_t *)(ulonglong)uVar4;
      }
      UNLOCK();
    }
  }
  plVar6 = *(longlong **)(param_1 + 0x338);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x278))(plVar6,0);
  }
  if (*(int *)(param_1 + 0x308) == 1) {
    if (*(longlong *)(param_1 + 0x378) != 0) {
      local_48 = 0;
      local_40 = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      FGenericPlatformString::Memcpy(local_48,L"loadout",0x10);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x378),&local_48);
      if (local_48 != 0) {
        FMemory::Free();
      }
    }
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnThisFocused",L"::");
    pwVar11 = pwVar12;
    while (pwVar7 = pwVar9, pwVar7 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
      pwVar11 = pwVar7;
    }
    FName::FName(&local_58,pwVar11 + 2,1);
    FWeakObjectPtr::operator=(lVar10,param_1);
    *(longlong *)(param_1 + 0x1d8) = local_58;
    if ((local_58 != 0) && (lVar10 = FWeakObjectPtr::Get(lVar10), lVar10 != 0)) {
      UObject::FindFunction(lVar10,*(undefined8 *)(param_1 + 0x1d8));
    }
    pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnThisClicked",L"::");
    while (pwVar9 = pwVar11, pwVar9 != (wchar_t *)0x0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar9 + 1,L"::");
      pwVar12 = pwVar9;
    }
    FName::FName(&local_50,pwVar12 + 2,1);
    FWeakObjectPtr::operator=(lVar3,param_1);
    *(longlong *)(param_1 + 0x1b8) = local_50;
    if ((local_50 != 0) && (lVar10 = FWeakObjectPtr::Get(lVar3), lVar10 != 0)) {
      UObject::FindFunction(lVar10,*(undefined8 *)(param_1 + 0x1b8));
    }
  }
  else if ((*(int *)(param_1 + 0x308) == 2) && (*(longlong *)(param_1 + 0x378) != 0)) {
    local_38 = 0;
    local_30 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"customization",0x1c);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x378),&local_38);
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  FUN_1410e7ef0(param_1);
  return;
}



// FUNCTION 1410cdfa0 FUN_1410cdfa0 body=2265 status=ok
// SIG undefined FUN_1410cdfa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410cdfa0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  byte *pbVar15;
  longlong *plVar16;
  byte *pbVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 *puVar21;
  byte bVar22;
  byte *pbVar23;
  ulonglong uVar24;
  undefined1 auStack_208 [32];
  ulonglong *local_1e8;
  char local_1d8;
  byte local_1d7;
  char local_1d6;
  char local_1d5;
  longlong *local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  ulonglong local_1a8;
  uint local_1a0;
  uint local_19c;
  longlong local_198;
  longlong *local_190;
  longlong local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong **local_178;
  longlong local_170;
  longlong *local_168;
  longlong **local_160;
  longlong local_158;
  longlong *local_150;
  ulonglong *local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  ulonglong local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  int local_b4;
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  int local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  ulonglong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  local_160 = &local_1c0;
  local_150 = &local_98;
  local_1d6 = *(char *)(param_1 + 0xc48);
  local_148 = &local_e8;
  local_1d7 = *(byte *)(param_1 + 0xc4a);
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (undefined1 *)0x0;
  local_a0 = 0;
  if ((local_1d6 == '\x01') && (8 < local_1d7)) {
    local_1d8 = '\x01';
  }
  else {
    local_1d8 = '\0';
  }
  local_1c0 = param_2;
  local_198 = param_1;
  local_158 = param_1;
  if (*(longlong *)(param_1 + 0x11d8) != 0) {
    local_1e8 = (ulonglong *)0x0;
    FUN_1410bbe50(&local_160,9,*(longlong *)(param_1 + 0x11d8) + 0xb0,local_1d8);
  }
  plVar5 = *(longlong **)(param_1 + 0x11e0);
  plVar14 = plVar5 + *(int *)(param_1 + 0x11e8);
  local_1c8 = plVar5;
  local_190 = plVar14;
  if (plVar5 != plVar14) {
    do {
      uVar13 = 0;
      local_188 = *plVar5;
      if (local_188 != 0) {
        bVar22 = *(byte *)(local_188 + 0x38);
        if ((local_1d6 != '\x01') || (local_1d5 = '\x01', bVar22 != local_1d7)) {
          local_1d5 = '\0';
        }
        local_1d0 = *(longlong **)(param_1 + 0x11e0);
        local_1a8 = 0;
        local_1a0 = 0;
        local_19c = 0;
        local_1b8 = local_1d0 + *(int *)(param_1 + 0x11e8);
        uVar19 = uVar13;
        uVar24 = uVar13;
        local_1c8 = plVar5;
        if (local_1d0 != local_1b8) {
          do {
            lVar6 = *local_1d0;
            if ((lVar6 != 0) && (*(byte *)(lVar6 + 0x38) != bVar22)) {
              plVar14 = *(longlong **)(lVar6 + 0x130);
              plVar5 = plVar14 + (longlong)*(int *)(lVar6 + 0x138) * 0x1e;
              local_1b0 = plVar5;
              if (plVar14 != plVar5) {
                do {
                  pbVar15 = (byte *)plVar14[0x1b];
                  pbVar23 = pbVar15 + (longlong)(int)plVar14[0x1c] * 0x10;
                  if (pbVar15 != pbVar23) {
                    pbVar17 = pbVar15 + 4;
                    do {
                      if (*pbVar15 == bVar22) {
                        iVar18 = (int)uVar13;
                        local_1a0 = iVar18 + 1;
                        if ((int)uVar19 < (int)local_1a0) {
                          TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_1a8,uVar13);
                          uVar19 = (ulonglong)local_19c;
                          uVar24 = local_1a8;
                        }
                        uVar13 = (ulonglong)local_1a0;
                        *(undefined8 *)(uVar24 + (longlong)iVar18 * 0xc) = *(undefined8 *)pbVar17;
                        *(undefined4 *)(uVar24 + 8 + (longlong)iVar18 * 0xc) =
                             *(undefined4 *)(pbVar17 + 8);
                      }
                      pbVar15 = pbVar15 + 0x10;
                      pbVar17 = pbVar17 + 0x10;
                      plVar5 = local_1b0;
                    } while (pbVar15 != pbVar23);
                  }
                  plVar14 = plVar14 + 0x1e;
                } while (plVar14 != plVar5);
              }
            }
            local_1d0 = local_1d0 + 1;
          } while (local_1d0 != local_1b8);
          bVar22 = *(byte *)(local_188 + 0x38);
          param_1 = local_198;
          plVar14 = local_190;
        }
        plVar5 = local_1c8;
        if ((local_1d8 == '\0') && (local_1d5 == '\0')) {
          uVar9 = 0;
        }
        else {
          uVar9 = 1;
        }
        local_1e8 = &local_1a8;
        FUN_1410bbe50(&local_160,bVar22,local_188 + 0x130,uVar9);
        if (uVar24 != 0) {
          FMemory::Free();
        }
      }
      plVar5 = plVar5 + 1;
      local_1c8 = plVar5;
    } while (plVar5 != plVar14);
  }
  plVar14 = (longlong *)0x0;
  if ((int)local_90 != local_64) {
    puVar21 = local_60;
    lVar6 = (ulonglong)(local_50 - 1U & 9) * 4;
    if (local_58 != 0) {
      puVar21 = (undefined1 *)0x0;
    }
    iVar18 = *(int *)(((ulonglong)puVar21 | local_58) + lVar6);
    while (iVar18 != -1) {
      lVar12 = (longlong)iVar18;
      plVar14 = (longlong *)(lVar12 * 3);
      if (*(char *)(local_98 + lVar12 * 0x18) == '\t') {
        if (iVar18 != -1) {
          iVar18 = *(int *)(((ulonglong)puVar21 | local_58) + lVar6);
          if (iVar18 == -1) goto LAB_1410ce3ab;
          goto LAB_1410ce380;
        }
        break;
      }
      iVar18 = *(int *)(local_98 + 0x10 + lVar12 * 0x18);
    }
  }
  goto LAB_1410ce6fd;
  while (iVar18 = *(int *)(lVar6 + 0x10 + local_98), iVar18 != -1) {
LAB_1410ce380:
    lVar6 = (longlong)iVar18 * 0x18;
    if (*(char *)(lVar6 + local_98) == '\t') {
      lVar6 = lVar6 + local_98;
      if (iVar18 != -1) goto LAB_1410ce3ae;
      break;
    }
  }
LAB_1410ce3ab:
  lVar6 = 0;
LAB_1410ce3ae:
  local_1b0 = *(longlong **)(param_1 + 0x11e0);
  plVar5 = *(longlong **)(lVar6 + 8);
  local_190 = local_1b0 + *(int *)(param_1 + 0x11e8);
  plVar14 = local_1b0;
  uVar13 = local_e8;
  if (local_1b0 != local_190) {
    do {
      lVar6 = *local_1b0;
      if (lVar6 != 0) {
        plVar14 = *(longlong **)(lVar6 + 0x130);
        plVar10 = plVar14 + (longlong)*(int *)(lVar6 + 0x138) * 0x1e;
        local_1d0 = plVar10;
        if (plVar14 != plVar10) {
          local_1b8 = plVar14 + 0x17;
          do {
            lVar12 = local_198;
            plVar14 = (longlong *)*local_1b8;
            lVar6 = local_1b8[1];
            if (plVar14 != plVar14 + (longlong)(int)lVar6 * 0xd) {
              plVar16 = plVar14 + 5;
              do {
                if (((int)*plVar16 == 0) && (*(int *)((longlong)plVar16 + 4) == 0)) {
                  bVar2 = true;
                }
                else {
                  bVar2 = false;
                }
                plVar10 = plVar5;
                if (bVar2) {
LAB_1410ce4f6:
                  if (plVar10 != (longlong *)0x0) {
                    lVar8 = FWeakObjectPtr::Get();
                    if (lVar8 == 0) {
                      LOCK();
                      if (DAT_1464b56f4 == 0) {
                        DAT_1464b56f4 = 0;
                      }
                      UNLOCK();
                      if ((DAT_1464b56f4 != (int)plVar16[-4]) &&
                         (local_1c8 = (longlong *)0x0, plVar16[-3] != 0)) {
                        lVar8 = FUN_141796df0();
                        FWeakObjectPtr::operator=(plVar16 + -5,lVar8);
                        if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
                          LOCK();
                          if (DAT_1464b56f4 == 0) {
                            DAT_1464b56f4 = 0;
                          }
                          UNLOCK();
                          *(int *)(plVar16 + -4) = DAT_1464b56f4;
                        }
                        lVar8 = FWeakObjectPtr::Get(plVar16 + -5);
                        if (lVar8 != 0) goto LAB_1410ce575;
                      }
LAB_1410ce5ab:
                      lVar8 = 0;
                    }
                    else {
LAB_1410ce575:
                      lVar20 = UMaterialInterface::GetPrivateStaticClass();
                      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar20 + 0x90))
                         || (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                              (longlong)*(int *)(lVar20 + 0x90) * 8) != lVar20 + 0x88)) {
                        bVar2 = false;
                      }
                      else {
                        bVar2 = true;
                      }
                      if (!bVar2) goto LAB_1410ce5ab;
                    }
                    uVar9 = UMaterialInstanceDynamic::Create(lVar8,plVar10);
                    (**(code **)(*plVar10 + 0x568))(plVar10,(int)plVar16[1],uVar9);
                    iVar18 = 0;
                    if (0 < (int)plVar16[3]) {
                      do {
                        plVar10 = (longlong *)FLinearColor::FLinearColor(local_118,lVar12 + 0x122c);
                        local_188 = *plVar10;
                        uStack_180 = (undefined4)plVar10[1];
                        uStack_17c = *(undefined4 *)((longlong)plVar10 + 0xc);
                        FUN_1425a2be0(uVar9,*(undefined8 *)(plVar16[2] + (longlong)iVar18 * 8),
                                      &local_188);
                        iVar18 = iVar18 + 1;
                      } while (iVar18 < (int)plVar16[3]);
                    }
                    iVar18 = 0;
                    if (0 < (int)plVar16[5]) {
                      do {
                        puVar11 = (undefined4 *)
                                  FLinearColor::FLinearColor(local_108,lVar12 + 0x1230);
                        local_138 = *puVar11;
                        uStack_134 = puVar11[1];
                        uStack_130 = puVar11[2];
                        uStack_12c = puVar11[3];
                        FUN_1425a2be0(uVar9,*(undefined8 *)(plVar16[4] + (longlong)iVar18 * 8),
                                      &local_138);
                        iVar18 = iVar18 + 1;
                      } while (iVar18 < (int)plVar16[5]);
                    }
                    iVar18 = 0;
                    uVar13 = local_e8;
                    if (0 < (int)plVar16[7]) {
                      do {
                        puVar11 = (undefined4 *)FLinearColor::FLinearColor(local_f8,lVar12 + 0x1234)
                        ;
                        local_128 = *puVar11;
                        uStack_124 = puVar11[1];
                        uStack_120 = puVar11[2];
                        uStack_11c = puVar11[3];
                        FUN_1425a2be0(uVar9,*(undefined8 *)(plVar16[6] + (longlong)iVar18 * 8),
                                      &local_128);
                        iVar18 = iVar18 + 1;
                        uVar13 = local_e8;
                      } while (iVar18 < (int)plVar16[7]);
                    }
                  }
                }
                else {
                  lVar8 = *plVar16;
                  if ((int)local_e0 != local_b4) {
                    puVar21 = local_b0;
                    if (local_a8 != (undefined1 *)0x0) {
                      puVar21 = local_a8;
                    }
                    iVar18 = *(int *)(puVar21 +
                                     (longlong)
                                     (int)((int)((ulonglong)lVar8 >> 0x20) + (int)lVar8 &
                                          local_a0 - 1U) * 4);
                    while (iVar18 != -1) {
                      lVar20 = (longlong)iVar18;
                      if (*(longlong *)(uVar13 + lVar20 * 0x18) == lVar8) {
                        if (((iVar18 != -1) && (lVar8 = uVar13 + lVar20 * 0x18, lVar8 != 0)) &&
                           (puVar7 = (undefined8 *)(lVar8 + 8), puVar7 != (undefined8 *)0x0)) {
                          plVar10 = (longlong *)*puVar7;
                          goto LAB_1410ce4f6;
                        }
                        break;
                      }
                      iVar18 = *(int *)(uVar13 + 0x10 + lVar20 * 0x18);
                    }
                  }
                }
                plVar1 = plVar16 + 8;
                plVar10 = local_1d0;
                plVar16 = plVar16 + 0xd;
              } while (plVar1 != plVar14 + (longlong)(int)lVar6 * 0xd);
            }
            plVar16 = local_1b8 + 0x1e;
            plVar14 = local_1b8 + 7;
            local_1b8 = plVar16;
          } while (plVar14 != plVar10);
        }
      }
      local_1b0 = local_1b0 + 1;
      plVar14 = local_1b0;
      param_1 = local_198;
    } while (local_1b0 != local_190);
  }
LAB_1410ce6fd:
  cVar3 = local_1d8;
  local_178 = &local_1c0;
  local_168 = &local_98;
  local_170 = param_1;
  if (*(longlong *)(param_1 + 0x11d8) != 0) {
    FUN_1410befa0(&local_178,CONCAT71((int7)((ulonglong)plVar14 >> 8),9),
                  *(longlong *)(param_1 + 0x11d8) + 0xc0,local_1d8);
  }
  cVar4 = local_1d6;
  bVar22 = local_1d7;
  plVar14 = *(longlong **)(param_1 + 0x11e0);
  uVar19 = 0;
  uVar13 = (longlong)*(int *)(param_1 + 0x11e8) & 0x1fffffffffffffff;
  if (plVar14 + *(int *)(param_1 + 0x11e8) < plVar14) {
    uVar13 = uVar19;
  }
  if (uVar13 != 0) {
    do {
      lVar6 = *plVar14;
      if (lVar6 != 0) {
        if ((cVar4 == '\x01') && (*(byte *)(lVar6 + 0x38) == bVar22)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((cVar3 != '\0') || (bVar2)) {
          uVar9 = 1;
        }
        else {
          uVar9 = 0;
        }
        FUN_1410befa0(&local_178,*(undefined1 *)(lVar6 + 0x38),lVar6 + 0x140,uVar9);
      }
      plVar14 = plVar14 + 1;
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar13);
  }
  (**(code **)(*local_1c0 + 0x4c0))();
  local_1e8 = (ulonglong *)((ulonglong)local_1e8 & 0xffffffffffffff00);
  FUN_14223d0f0(local_1c0,&DAT_1468b5b70,0,0);
  local_a0 = 0;
  if (local_a8 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_e8);
  local_50 = 0;
  if (local_58 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_98);
  return;
}



// FUNCTION 1410ce880 FUN_1410ce880 body=396 status=ok
// SIG undefined FUN_1410ce880(void)

void FUN_1410ce880(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    UInputKeySelector::GetPrivateStaticClass();
  }
  *(char *)(param_1 + 0x1a8) = param_2;
  if (((param_2 == '\x02') && (lVar1 = *(longlong *)(param_1 + 0x180), lVar1 != 0)) &&
     (lVar2 = *(longlong *)(lVar1 + 0x38), lVar2 != 0)) {
    lVar4 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) && (lVar4 = *(longlong *)(lVar1 + 0x1a8), lVar4 != 0)) &&
       (*(longlong *)(lVar1 + 0x1a0) != 0)) {
      local_10 = 0;
      local_18 = lVar4;
      uVar5 = UBlendableInterface::GetPrivateStaticClass();
      local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar5);
      FUN_142ecff00(lVar2,&local_18,DAT_146875050);
      lVar1 = *(longlong *)(lVar1 + 0x1a0);
      local_18 = lVar1;
      if (lVar1 == 0) {
        local_10 = 0;
      }
      else {
        uVar5 = UBlendableInterface::GetPrivateStaticClass();
        local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar5);
      }
      FUN_142ecff00(lVar2,&local_18,DAT_146875058);
    }
  }
  *(undefined1 *)(param_1 + 0x1b4) = 1;
  local_18 = 0;
  local_10 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,&DAT_14469f1b0,8);
  FUN_142088910(param_1,&local_18);
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410cea10 FUN_1410cea10 body=931 status=ok
// SIG undefined FUN_1410cea10(void)

void FUN_1410cea10(longlong param_1,char *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  void **ppvVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *local_98;
  undefined8 local_90;
  longlong local_88 [4];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  *(char *)(param_1 + 0x1b0) = param_2[1];
  iVar9 = 0;
  cVar5 = FText::IsEmpty(param_2 + 0x18);
  *(bool *)(param_1 + 0x1b1) = cVar5 == '\0';
  FWeakObjectPtr::operator=(param_1 + 0x1b4,param_3);
  if (*param_2 == '\x01') {
    local_88[2] = 0;
    local_88[3] = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_88 + 2,0);
    FGenericPlatformString::Memcpy(local_88[2],L"friend",0xe);
    FUN_142088910(param_1,local_88 + 2);
    lVar8 = local_88[2];
LAB_1410ceaf9:
    if (lVar8 != 0) {
      FMemory::Free();
    }
  }
  else if (*param_2 == '\x02') {
    local_88[0] = 0;
    local_88[1] = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_88,0);
    FGenericPlatformString::Memcpy(local_88[0],L"player",0xe);
    FUN_142088910(param_1,local_88);
    lVar8 = local_88[0];
    goto LAB_1410ceaf9;
  }
  bVar4 = true;
  bVar3 = false;
  if ((*(longlong *)(param_1 + 0x170) == 0) || (*(longlong *)(param_1 + 0x180) == 0))
  goto LAB_1410cecd8;
  local_98 = (undefined8 *)0x0;
  local_90 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  FGenericPlatformString::Memcpy(local_98,L"status",0xe);
  FText::FText(local_48);
  if (param_2[1] == '\0') {
LAB_1410cec50:
    cVar5 = FText::IsEmpty(param_2 + 0x18);
    if (cVar5 == '\0') {
      FText::operator=(local_48,param_2 + 0x18);
    }
  }
  else {
    cVar5 = FText::IsEmpty(param_2 + 0x18);
    if (cVar5 != '\0') {
      if (param_2[1] != '\0') {
        cVar5 = FText::IsEmpty(param_2 + 0x18);
        if (cVar5 != '\0') {
          if (local_98 != (undefined8 *)&DAT_1446a1dd0) {
            uVar6 = local_90._4_4_;
            local_90 = (ulonglong)local_90._4_4_ << 0x20;
            if (uVar6 != 5) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98,5);
              iVar9 = (int)local_90;
              uVar6 = local_90._4_4_;
            }
            local_90 = CONCAT44(local_90._4_4_,iVar9 + 5);
            if ((int)uVar6 < iVar9 + 5) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98);
            }
            *local_98 = 0x70006c00650068;
            *(undefined2 *)(local_98 + 1) = 0;
          }
          goto LAB_1410cec6a;
        }
      }
      goto LAB_1410cec50;
    }
    FText::operator=(local_48,param_2 + 0x18);
    if (local_98 != (undefined8 *)&DAT_1446a1db8) {
      uVar6 = local_90._4_4_;
      local_90 = (ulonglong)local_90._4_4_ << 0x20;
      if (uVar6 != 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98,5);
        iVar9 = (int)local_90;
        uVar6 = local_90._4_4_;
      }
      local_90 = CONCAT44(local_90._4_4_,iVar9 + 5);
      if ((int)uVar6 < iVar9 + 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98);
      }
      *local_98 = 0x680074006f0062;
      *(undefined2 *)(local_98 + 1) = 0;
    }
  }
LAB_1410cec6a:
  FUN_142088910(*(undefined8 *)(param_1 + 0x170),&local_98);
  (**(code **)(**(longlong **)(param_1 + 0x180) + 0x2b0))
            (*(longlong **)(param_1 + 0x180),local_48,1,0);
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
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (local_98 != (undefined8 *)0x0) {
    FMemory::Free();
  }
LAB_1410cecd8:
  if (*(longlong *)(param_1 + 0x188) != 0) {
    if (*(int *)(param_2 + 0x10) < 2) {
      local_58 = (void *)0x0;
      local_50 = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      FGenericPlatformString::Memcpy(local_58,L"empty",0xc);
      ppvVar7 = &local_58;
    }
    else {
      local_60 = *(int *)(param_2 + 0x10);
      lVar8 = (longlong)local_60;
      _Src = *(void **)(param_2 + 8);
      local_68 = (void *)0x0;
      if (local_60 == 0) {
        local_5c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_60,0);
        _guard_xfg_dispatch_icall_nop(local_68,_Src,lVar8 * 2);
      }
      ppvVar7 = &local_68;
      bVar4 = false;
      bVar3 = true;
    }
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x188),ppvVar7);
    if (bVar3) {
      if (local_68 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if ((bVar4) && (local_58 != (void *)0x0)) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1410cedc0 FUN_1410cedc0 body=881 status=ok
// SIG undefined FUN_1410cedc0(void)

void FUN_1410cedc0(longlong param_1)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float local_res8 [2];
  undefined1 local_res10 [8];
  int local_48;
  int iStack_44;
  longlong *plStack_40;
  
  lVar14 = 0;
  iVar7 = *(int *)(param_1 + 0x688);
  if (*(int *)(param_1 + 0x7a0) < iVar7) {
    lVar14 = (longlong)*(int *)(param_1 + 0x7a0) * 0x50 + *(longlong *)(param_1 + 0x680);
  }
  else if (0 < iVar7) {
    lVar14 = (longlong)(iVar7 + -1) * 0x50 + *(longlong *)(param_1 + 0x680);
  }
  if (*(longlong *)(param_1 + 0x6c8) == 0) {
    return;
  }
  if (lVar14 == 0) {
    return;
  }
  cVar5 = FUN_1410cfdf0(param_1);
  if ((cVar5 != '\0') || (*(float *)(param_1 + 0x7ac) <= 0.0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((*(int *)(param_1 + 0x77c) == -1) || (iVar7 = *(int *)(param_1 + 0x780), iVar7 == -1)) {
    iVar9 = *(int *)(param_1 + 0x6d8) + -1;
    *(undefined8 *)(param_1 + 0x77c) = 0;
    iVar7 = 0;
    if (-1 < iVar9) {
      iVar7 = iVar9;
    }
    *(undefined4 *)(param_1 + 0x784) = *(undefined4 *)(param_1 + 0x6ac);
    *(int *)(param_1 + 0x788) = iVar7;
LAB_1410cefe6:
    if (bVar4) {
      iVar7 = *(int *)(param_1 + 0x780);
      goto LAB_1410ceecd;
    }
  }
  else {
    if (bVar4) {
      iVar9 = *(int *)(param_1 + 0x788);
      if (iVar7 + 1 <= *(int *)(param_1 + 0x788)) {
        iVar9 = iVar7 + 1;
      }
      *(int *)(param_1 + 0x780) = iVar9;
      if (*(int *)(param_1 + 0x784) < iVar9 - *(int *)(param_1 + 0x77c)) {
        *(int *)(param_1 + 0x77c) = *(int *)(param_1 + 0x77c) + 1;
      }
      goto LAB_1410cefe6;
    }
    iVar6 = *(int *)(param_1 + 0x77c) + -1;
    iVar9 = 0;
    if (-1 < iVar6) {
      iVar9 = iVar6;
    }
    *(int *)(param_1 + 0x77c) = iVar9;
    if (*(int *)(param_1 + 0x784) < iVar7 - iVar9) {
      *(int *)(param_1 + 0x780) = iVar7 + -1;
    }
  }
  iVar7 = *(int *)(param_1 + 0x77c);
LAB_1410ceecd:
  if ((-1 < iVar7) && (iVar7 < *(int *)(param_1 + 0x6d8))) {
    lVar16 = (longlong)iVar7 * 0x20 + *(longlong *)(param_1 + 0x6d0);
    FUN_1410c85e0(param_1,&local_48,lVar16);
    lVar10 = FName::GetNames();
    plVar13 = plStack_40;
    if ((-1 < local_48) && (local_48 < *(int *)(lVar10 + 0x400))) {
      uVar11 = local_48 >> 0x1f & 0x3fff;
      uVar8 = local_48 + uVar11;
      lVar15 = (longlong)(int)((uVar8 & 0x3fff) - uVar11);
      lVar12 = (longlong)((int)uVar8 >> 0xe);
      if ((((*(longlong *)(*(longlong *)(lVar10 + lVar12 * 8) + lVar15 * 8) != 0) &&
           (local_48 < *(int *)(lVar10 + 0x400))) &&
          (*(longlong *)(*(longlong *)(lVar10 + lVar12 * 8) + lVar15 * 8) != 0)) &&
         (((local_48 != 0 || (iStack_44 != 0)) && (plStack_40 != (longlong *)0x0)))) {
        (**(code **)(*plStack_40 + 0x2b0))(plStack_40,lVar16 + 8,1,0);
        FUN_142f04a10(plVar13);
        if (bVar4) {
          local_res8[0] = *(float *)(param_1 + 0x790);
        }
        else {
          local_res8[0] = *(float *)(param_1 + 0x78c);
        }
        if (0 < *(int *)(param_1 + 0x6e8)) {
          if (bVar4) {
            lVar10 = *(longlong *)
                      (*(longlong *)(param_1 + 0x6e0) + -8 +
                      (longlong)*(int *)(param_1 + 0x6e8) * 0x10);
          }
          else {
            lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x6e0) + 8);
          }
          if (lVar10 != 0) {
            FUN_142087ad0(lVar10,local_res10,local_res8);
            if (bVar4) {
              dVar2 = (double)FUN_142eeca30(lVar10);
              local_res8[0] = (float)(dVar2 + (double)local_res8[0]) + *(float *)(lVar14 + 0x24);
            }
            else {
              dVar3 = (double)local_res8[0];
              dVar2 = (double)FUN_142eeca30(plVar13);
              local_res8[0] = (float)(dVar3 - dVar2) - *(float *)(lVar14 + 0x24);
            }
          }
        }
        FUN_14208ff10(plVar13,0);
        plVar13 = (longlong *)(param_1 + 0x6e0);
        iVar7 = *(int *)(param_1 + 0x6e8);
        iVar9 = iVar7 + 1;
        *(int *)(param_1 + 0x6e8) = iVar9;
        if (bVar4) {
          if (*(int *)(param_1 + 0x6ec) < iVar9) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar7);
          }
          puVar1 = (undefined8 *)(*plVar13 + (longlong)iVar7 * 0x10);
          *puVar1 = CONCAT44(iStack_44,local_48);
          puVar1[1] = plStack_40;
        }
        else {
          if (*(int *)(param_1 + 0x6ec) < iVar9) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar7);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar13 + 0x10),(void *)*plVar13,(longlong)iVar7 << 4);
          puVar1 = (undefined8 *)*plVar13;
          *puVar1 = CONCAT44(iStack_44,local_48);
          puVar1[1] = plStack_40;
        }
      }
    }
  }
  return;
}



// FUNCTION 1410cf140 FUN_1410cf140 body=1833 status=ok
// SIG undefined FUN_1410cf140(void)

ulonglong FUN_1410cf140(longlong param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = 1;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x10);
    if (lVar3 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(uint *)(param_1 + 0x18)) && (*(longlong *)(param_1 + 0x20) != 0)) {
        lVar3 = FUN_141796df0();
        FWeakObjectPtr::operator=(param_1 + 0x10,lVar3);
        if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(uint *)(param_1 + 0x18) = DAT_1464b56f4;
        }
        lVar3 = FWeakObjectPtr::Get(param_1 + 0x10);
        if (lVar3 != 0) goto LAB_1410cf1e2;
      }
    }
    else {
LAB_1410cf1e2:
      lVar4 = UCheckBox::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_1410cf21b;
    }
    uVar6 = 0;
  }
LAB_1410cf21b:
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x38);
    if (lVar3 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(uint *)(param_1 + 0x40)) && (*(longlong *)(param_1 + 0x48) != 0)) {
        lVar3 = FUN_141796df0();
        FWeakObjectPtr::operator=(param_1 + 0x38,lVar3);
        if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(uint *)(param_1 + 0x40) = DAT_1464b56f4;
        }
        lVar3 = FWeakObjectPtr::Get(param_1 + 0x38);
        if (lVar3 != 0) goto LAB_1410cf2a2;
      }
    }
    else {
LAB_1410cf2a2:
      lVar4 = AArchVisCharacter::StaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_1410cf2db;
    }
    uVar6 = 0;
  }
LAB_1410cf2db:
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x60);
    if (lVar3 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(uint *)(param_1 + 0x68)) && (*(longlong *)(param_1 + 0x70) != 0)) {
        lVar3 = FUN_141796df0();
        FWeakObjectPtr::operator=(param_1 + 0x60,lVar3);
        if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(uint *)(param_1 + 0x68) = DAT_1464b56f4;
        }
        lVar3 = FWeakObjectPtr::Get(param_1 + 0x60);
        if (lVar3 != 0) goto LAB_1410cf362;
      }
    }
    else {
LAB_1410cf362:
      lVar4 = AArchVisCharacter::StaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_1410cf39b;
    }
    uVar6 = 0;
  }
LAB_1410cf39b:
  if (*(longlong *)(param_1 + 0x98) != 0) {
    lVar3 = param_1 + 0x88;
    lVar4 = FWeakObjectPtr::Get(lVar3);
    if (lVar4 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(uint *)(param_1 + 0x90)) && (*(longlong *)(param_1 + 0x98) != 0)) {
        lVar4 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar3,lVar4);
        if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(uint *)(param_1 + 0x90) = DAT_1464b56f4;
        }
        lVar4 = FWeakObjectPtr::Get(lVar3);
        if (lVar4 != 0) goto LAB_1410cf429;
      }
    }
    else {
LAB_1410cf429:
      lVar3 = AArchVisCharacter::StaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_1410cf462;
    }
    uVar6 = 0;
  }
LAB_1410cf462:
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    lVar3 = param_1 + 0xb0;
    lVar4 = FWeakObjectPtr::Get(lVar3);
    if (lVar4 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(uint *)(param_1 + 0xb8)) && (*(longlong *)(param_1 + 0xc0) != 0)) {
        lVar4 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar3,lVar4);
        if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(uint *)(param_1 + 0xb8) = DAT_1464b56f4;
        }
        lVar4 = FWeakObjectPtr::Get(lVar3);
        if (lVar4 != 0) goto LAB_1410cf4f0;
      }
    }
    else {
LAB_1410cf4f0:
      lVar3 = AArchVisCharacter::StaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_1410cf529;
    }
    uVar6 = 0;
  }
LAB_1410cf529:
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    lVar3 = param_1 + 0xd8;
    lVar4 = FWeakObjectPtr::Get(lVar3);
    if (lVar4 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(uint *)(param_1 + 0xe0)) && (*(longlong *)(param_1 + 0xe8) != 0)) {
        lVar4 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar3,lVar4);
        if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(uint *)(param_1 + 0xe0) = DAT_1464b56f4;
        }
        lVar4 = FWeakObjectPtr::Get(lVar3);
        if (lVar4 != 0) goto LAB_1410cf5b7;
      }
    }
    else {
LAB_1410cf5b7:
      lVar3 = AArchVisCharacter::StaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_1410cf5f0;
    }
    uVar6 = 0;
  }
LAB_1410cf5f0:
  if (*(longlong *)(param_1 + 0x110) != 0) {
    lVar3 = param_1 + 0x100;
    lVar4 = FWeakObjectPtr::Get(lVar3);
    if (lVar4 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(uint *)(param_1 + 0x108)) && (*(longlong *)(param_1 + 0x110) != 0)) {
        lVar4 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar3,lVar4);
        if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(uint *)(param_1 + 0x108) = DAT_1464b56f4;
        }
        lVar4 = FWeakObjectPtr::Get(lVar3);
        if (lVar4 != 0) goto LAB_1410cf67e;
      }
    }
    else {
LAB_1410cf67e:
      lVar3 = AArchVisCharacter::StaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_1410cf6b7;
    }
    uVar6 = 0;
  }
LAB_1410cf6b7:
  if (*(longlong *)(param_1 + 0x138) != 0) {
    lVar3 = param_1 + 0x128;
    lVar4 = FWeakObjectPtr::Get(lVar3);
    if (lVar4 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(uint *)(param_1 + 0x130)) && (*(longlong *)(param_1 + 0x138) != 0)) {
        lVar4 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar3,lVar4);
        if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(uint *)(param_1 + 0x130) = DAT_1464b56f4;
        }
        lVar4 = FWeakObjectPtr::Get(lVar3);
        if (lVar4 != 0) goto LAB_1410cf745;
      }
    }
    else {
LAB_1410cf745:
      lVar3 = AArchVisCharacter::StaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_1410cf77e;
    }
    uVar6 = 0;
  }
LAB_1410cf77e:
  if (*(longlong *)(param_1 + 0x160) != 0) {
    lVar4 = param_1 + 0x150;
    lVar3 = FWeakObjectPtr::Get(lVar4);
    if (lVar3 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
        uVar5 = 0;
      }
      else {
        uVar5 = (ulonglong)DAT_1464b56f4;
      }
      UNLOCK();
      if (((int)uVar5 == *(int *)(param_1 + 0x158)) ||
         (uVar5 = 0, *(longlong *)(param_1 + 0x160) == 0)) goto LAB_1410cf847;
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(uint *)(param_1 + 0x158) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(lVar4);
      uVar5 = 0;
      if (lVar3 == 0) goto LAB_1410cf847;
    }
    lVar4 = AArchVisCharacter::StaticClass();
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
    if ((char)uVar5 == '\0') {
LAB_1410cf847:
      return uVar5 & 0xffffffffffffff00;
    }
  }
  return uVar6;
}



// FUNCTION 1410cf870 FUN_1410cf870 body=32 status=ok
// SIG undefined FUN_1410cf870(void)

undefined8 FUN_1410cf870(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(param_1 + 0x48) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1410cf890 FUN_1410cf890 body=612 status=ok
// SIG undefined FUN_1410cf890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1410cf890(undefined8 param_1)

{
  undefined1 uVar1;
  char cVar2;
  DWORD DVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_1b8 [32];
  undefined2 local_198;
  undefined4 local_188;
  undefined4 local_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 *local_168 [2];
  longlong local_158 [4];
  longlong *local_138;
  int local_128;
  undefined1 local_118 [192];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  FWeakObjectPtr::operator=(&local_188,param_1);
  local_138 = (longlong *)0x0;
  local_128 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_158);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_1444f8920;
    puVar4[1] = param_1;
    *(undefined4 *)(puVar4 + 2) = local_188;
    *(undefined4 *)((longlong)puVar4 + 0x14) = local_184;
  }
  local_180 = 0;
  local_168[0] = &LAB_1410c56f0;
  local_178 = 0x20;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_180,0);
  local_198 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>(local_180,0x20,"IsCurrentLocalPlayerPartyLeader");
  FUN_1410b2c00(local_118,&local_180,local_168);
  uVar5 = FUN_1410ca7e0(local_118,local_168);
  FUN_142084370(param_1,uVar5);
  if (local_128 != 0) {
    plVar7 = local_158;
    if (local_138 != (longlong *)0x0) {
      plVar7 = local_138;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_138 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar6 = local_58;
  if (local_58 != 0) {
    while ((lVar6 = local_58, local_58 != 0 && (*(char *)(local_58 + 0x58) == '\0'))) {
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar2 == '\0') &&
         ((DAT_1468c21ae != '\0' && (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)))) {
        lVar6 = FUN_14203ca70();
        if (lVar6 != 0) {
          FUN_1420714f0(lVar6);
        }
      }
      else {
        FUN_142036de0();
      }
      lVar6 = local_58;
      if (local_58 == 0) break;
      if (*(char *)(local_58 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(local_58 + 0x50) + 0x20))(*(longlong **)(local_58 + 0x50),5);
      }
    }
  }
  cVar2 = *(char *)(lVar6 + 0x58);
  while (cVar2 == '\0') {
    (**(code **)(**(longlong **)(lVar6 + 0x50) + 0x20))(*(longlong **)(lVar6 + 0x50),0x5d638865,0);
    cVar2 = *(char *)(lVar6 + 0x58);
  }
  uVar1 = *(undefined1 *)(lVar6 + 0x60);
  FUN_140ce1dc0(local_118);
  return uVar1;
}



// FUNCTION 1410cfb00 FUN_1410cfb00 body=97 status=ok
// SIG undefined FUN_1410cfb00(void)

ulonglong FUN_1410cfb00(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar5;
  ulonglong uVar4;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  uVar4 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
    uVar5 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      uVar4 = (ulonglong)uVar5 << 8;
      bVar1 = false;
    }
    else {
      uVar4 = CONCAT71(uVar5,1);
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = FUN_140bca8a0(lVar2);
      return uVar4;
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 1410cfb70 FUN_1410cfb70 body=633 status=ok
// SIG undefined FUN_1410cfb70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1410cfb70(undefined4 *param_1,longlong param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_228 [32];
  undefined2 local_208;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined1 local_1d8 [24];
  longlong local_1c0;
  undefined2 local_1b0;
  undefined1 *local_1a8 [2];
  undefined1 local_198 [32];
  undefined8 local_178;
  undefined4 local_168;
  undefined1 local_158 [80];
  undefined1 local_108 [208];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  if ((*param_3 != '\0') || (param_3[1] == '\b')) {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FMemory::Free();
    }
    return true;
  }
  cVar1 = FWeakObjectPtr::IsValid();
  if (cVar1 == '\0') goto LAB_1410cfdc5;
  lVar4 = FWeakObjectPtr::Get(param_2);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(param_2 + 8)) ||
       (local_1f8 = 0, *(longlong *)(param_2 + 0x10) == 0)) goto LAB_1410cfdc5;
    lVar4 = FUN_141796df0();
    FWeakObjectPtr::operator=(param_2,lVar4);
    if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_2 + 8) = DAT_1464b56f4;
    }
    lVar4 = FWeakObjectPtr::Get(param_2);
    if (lVar4 == 0) goto LAB_1410cfdc5;
  }
  lVar5 = UCheckBox::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    local_1e0 = *param_1;
    local_1dc = param_1[1];
    TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_1d8,param_2);
    local_1b0 = *(undefined2 *)param_3;
    local_178 = 0;
    local_168 = 0;
    puVar6 = (undefined8 *)FUN_140438ef0(0x40,local_198);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &PTR_FUN_1446a5410;
      *(undefined4 *)(puVar6 + 1) = local_1e0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = local_1dc;
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(puVar6 + 2,local_1d8);
      *(undefined2 *)(puVar6 + 7) = local_1b0;
    }
    local_1f0 = 0;
    local_1a8[0] = &LAB_1410c5650;
    local_1e8 = 0x38;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f0,0);
    local_208 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_1f0,0x38,"UGFxCARMenu::IsPartValidForPageSelection::TotalNumParts");
    FUN_141022700(local_108,&local_1f0,local_1a8);
    if (local_1c0 != 0) {
      FMemory::Free();
    }
    uVar7 = FUN_141036f30(local_108,local_158);
    FUN_14204c280(uVar7);
    iVar3 = FUN_141037230(local_108);
    FUN_140ce1dc0(local_108);
    if (*(longlong *)(param_2 + 0x18) == 0) {
      return 0 < iVar3;
    }
    FMemory::Free();
    return 0 < iVar3;
  }
LAB_1410cfdc5:
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
  }
  return false;
}



// FUNCTION 1410cfdf0 FUN_1410cfdf0 body=97 status=ok
// SIG undefined FUN_1410cfdf0(void)

undefined8 FUN_1410cfdf0(longlong param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  iVar3 = *(int *)(param_1 + 0x7a0);
  uVar2 = *(uint *)(param_1 + 0x688);
  uVar4 = (ulonglong)uVar2;
  if ((int)uVar2 <= iVar3) {
    if ((int)uVar2 < 1) goto LAB_1410cfe37;
    iVar3 = uVar2 - 1;
  }
  uVar4 = (ulonglong)iVar3;
  lVar5 = uVar4 * 0x50 + *(longlong *)(param_1 + 0x680);
  if ((lVar5 != 0) &&
     (fVar1 = *(float *)(lVar5 + 0x38),
     *(float *)(param_1 + 0x7a4) <= fVar1 && fVar1 != *(float *)(param_1 + 0x7a4))) {
    return CONCAT71((int7)(int3)((uint)iVar3 >> 8),1);
  }
LAB_1410cfe37:
  return CONCAT71((int7)(uVar4 >> 8),ABS(*(float *)(param_1 + 0x7ac)) <= 1e-08);
}



// FUNCTION 1410cfe60 FUN_1410cfe60 body=46 status=ok
// SIG undefined FUN_1410cfe60(void)

undefined1 FUN_1410cfe60(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1410cfdf0();
  if ((cVar1 == '\0') && (0.0 < *(float *)(param_1 + 0x7ac))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1410cfe90 FUN_1410cfe90 body=259 status=ok
// SIG undefined FUN_1410cfe90(void)

undefined8 FUN_1410cfe90(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (((((*(longlong *)(param_1 + 0x1178) != *(longlong *)(param_1 + 0x11d8)) ||
        (*(int *)(param_1 + 0x1188) != *(int *)(param_1 + 0x11e8))) ||
       (*(int *)(param_1 + 0x11cc) != *(int *)(param_1 + 0x122c))) ||
      ((*(int *)(param_1 + 0x11d0) != *(int *)(param_1 + 0x1230) ||
       (*(int *)(param_1 + 0x11d4) != *(int *)(param_1 + 0x1234))))) ||
     ((param_2 == '\0' &&
      (((*(longlong *)(param_1 + 0x1198) != *(longlong *)(param_1 + 0x11f8) ||
        (*(longlong *)(param_1 + 0x1190) != *(longlong *)(param_1 + 0x11f0))) ||
       (cVar3 = FSoftObjectPath::operator==(param_1 + 0x11b0,param_1 + 0x1210), cVar3 == '\0'))))))
  {
    return 1;
  }
  plVar5 = *(longlong **)(param_1 + 0x1180);
  plVar1 = plVar5 + *(int *)(param_1 + 0x1188);
  if (plVar5 != plVar1) {
    plVar2 = *(longlong **)(param_1 + 0x11e0);
    do {
      plVar4 = plVar2;
      while( true ) {
        if (plVar4 == plVar2 + *(int *)(param_1 + 0x11e8)) {
          return 1;
        }
        if (*plVar4 == *plVar5) break;
        plVar4 = plVar4 + 1;
      }
      if ((int)((longlong)plVar4 - (longlong)plVar2 >> 3) == -1) {
        return 1;
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  return 0;
}



// FUNCTION 1410cffa0 FUN_1410cffa0 body=85 status=ok
// SIG undefined FUN_1410cffa0(void)

bool FUN_1410cffa0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x38);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x38);
    iVar3 = FUN_1410cae60(param_1);
    iVar4 = FUN_142eb7a00(uVar1);
    return iVar4 == iVar3;
  }
  return false;
}



// FUNCTION 1410d0000 FUN_1410d0000 body=115 status=ok
// SIG undefined FUN_1410d0000(void)

undefined4 FUN_1410d0000(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  
  iVar4 = -1;
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x38);
  if (cVar3 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x38);
    iVar4 = FUN_142eb7a00(uVar2);
  }
  if (*(char *)(param_1 + 0x40) == '\0') {
    if (iVar4 < 0) {
      return 1;
    }
    iVar1 = *(int *)(param_1 + 0x60);
  }
  else {
    if (iVar4 < 0) {
      return 1;
    }
    iVar1 = *(int *)(param_1 + 0x50);
  }
  if (iVar1 <= iVar4) {
    return 1;
  }
  return 0;
}



// FUNCTION 1410d0080 FUN_1410d0080 body=2310 status=ok
// SIG undefined FUN_1410d0080(void)

void FUN_1410d0080(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x10);
    if (lVar2 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(param_1 + 0x18)) && (*(longlong *)(param_1 + 0x20) != 0)) {
        lVar2 = FUN_141796df0();
        FWeakObjectPtr::operator=(param_1 + 0x10,lVar2);
        if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_1 + 0x18) = DAT_1464b56f4;
        }
        lVar2 = FWeakObjectPtr::Get(param_1 + 0x10);
        if (lVar2 != 0) goto LAB_1410d012f;
      }
    }
    else {
LAB_1410d012f:
      lVar3 = UCheckBox::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_1410d0195;
    }
    uVar4 = uVar5;
    if (*(int *)(param_2 + 8) != 0) {
      plVar6 = (longlong *)param_2[6];
      if ((longlong *)param_2[6] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      if (plVar6 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar6 + 8))();
      }
    }
    (*(code *)*param_2)(uVar4,param_1 + 0x20);
  }
LAB_1410d0195:
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x38);
    if (lVar2 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(param_1 + 0x40)) && (*(longlong *)(param_1 + 0x48) != 0)) {
        lVar2 = FUN_141796df0();
        FWeakObjectPtr::operator=(param_1 + 0x38,lVar2);
        if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_1 + 0x40) = DAT_1464b56f4;
        }
        lVar2 = FWeakObjectPtr::Get(param_1 + 0x38);
        if (lVar2 != 0) goto LAB_1410d021c;
      }
    }
    else {
LAB_1410d021c:
      lVar3 = AArchVisCharacter::StaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_1410d0282;
    }
    uVar4 = uVar5;
    if (*(int *)(param_2 + 8) != 0) {
      plVar6 = (longlong *)param_2[6];
      if ((longlong *)param_2[6] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      if (plVar6 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar6 + 8))();
      }
    }
    (*(code *)*param_2)(uVar4,param_1 + 0x48);
  }
LAB_1410d0282:
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x60);
    if (lVar2 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(param_1 + 0x68)) && (*(longlong *)(param_1 + 0x70) != 0)) {
        lVar2 = FUN_141796df0();
        FWeakObjectPtr::operator=(param_1 + 0x60,lVar2);
        if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_1 + 0x68) = DAT_1464b56f4;
        }
        lVar2 = FWeakObjectPtr::Get(param_1 + 0x60);
        if (lVar2 != 0) goto LAB_1410d0309;
      }
    }
    else {
LAB_1410d0309:
      lVar3 = AArchVisCharacter::StaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_1410d036f;
    }
    uVar4 = uVar5;
    if (*(int *)(param_2 + 8) != 0) {
      plVar6 = (longlong *)param_2[6];
      if ((longlong *)param_2[6] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      if (plVar6 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar6 + 8))();
      }
    }
    (*(code *)*param_2)(uVar4,param_1 + 0x70);
  }
LAB_1410d036f:
  if (*(longlong *)(param_1 + 0x98) != 0) {
    lVar2 = param_1 + 0x88;
    lVar3 = FWeakObjectPtr::Get(lVar2);
    if (lVar3 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(param_1 + 0x90)) && (*(longlong *)(param_1 + 0x98) != 0)) {
        lVar3 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar2,lVar3);
        if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_1 + 0x90) = DAT_1464b56f4;
        }
        lVar3 = FWeakObjectPtr::Get(lVar2);
        if (lVar3 != 0) goto LAB_1410d03fb;
      }
    }
    else {
LAB_1410d03fb:
      lVar2 = AArchVisCharacter::StaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_1410d0464;
    }
    uVar4 = uVar5;
    if (*(int *)(param_2 + 8) != 0) {
      plVar6 = (longlong *)param_2[6];
      if ((longlong *)param_2[6] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      if (plVar6 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar6 + 8))();
      }
    }
    (*(code *)*param_2)(uVar4,param_1 + 0x98);
  }
LAB_1410d0464:
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    lVar2 = param_1 + 0xb0;
    lVar3 = FWeakObjectPtr::Get(lVar2);
    if (lVar3 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(param_1 + 0xb8)) && (*(longlong *)(param_1 + 0xc0) != 0)) {
        lVar3 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar2,lVar3);
        if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_1 + 0xb8) = DAT_1464b56f4;
        }
        lVar3 = FWeakObjectPtr::Get(lVar2);
        if (lVar3 != 0) goto LAB_1410d04f0;
      }
    }
    else {
LAB_1410d04f0:
      lVar2 = AArchVisCharacter::StaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_1410d0559;
    }
    uVar4 = uVar5;
    if (*(int *)(param_2 + 8) != 0) {
      plVar6 = (longlong *)param_2[6];
      if ((longlong *)param_2[6] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      if (plVar6 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar6 + 8))();
      }
    }
    (*(code *)*param_2)(uVar4,param_1 + 0xc0);
  }
LAB_1410d0559:
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    lVar2 = param_1 + 0xd8;
    lVar3 = FWeakObjectPtr::Get(lVar2);
    if (lVar3 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(param_1 + 0xe0)) && (*(longlong *)(param_1 + 0xe8) != 0)) {
        lVar3 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar2,lVar3);
        if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_1 + 0xe0) = DAT_1464b56f4;
        }
        lVar3 = FWeakObjectPtr::Get(lVar2);
        if (lVar3 != 0) goto LAB_1410d05e5;
      }
    }
    else {
LAB_1410d05e5:
      lVar2 = AArchVisCharacter::StaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_1410d064e;
    }
    uVar4 = uVar5;
    if (*(int *)(param_2 + 8) != 0) {
      plVar6 = (longlong *)param_2[6];
      if ((longlong *)param_2[6] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      if (plVar6 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar6 + 8))();
      }
    }
    (*(code *)*param_2)(uVar4,param_1 + 0xe8);
  }
LAB_1410d064e:
  if (*(longlong *)(param_1 + 0x110) != 0) {
    lVar2 = param_1 + 0x100;
    lVar3 = FWeakObjectPtr::Get(lVar2);
    if (lVar3 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(param_1 + 0x108)) && (*(longlong *)(param_1 + 0x110) != 0)) {
        lVar3 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar2,lVar3);
        if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_1 + 0x108) = DAT_1464b56f4;
        }
        lVar3 = FWeakObjectPtr::Get(lVar2);
        if (lVar3 != 0) goto LAB_1410d06da;
      }
    }
    else {
LAB_1410d06da:
      lVar2 = AArchVisCharacter::StaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_1410d0743;
    }
    uVar4 = uVar5;
    if (*(int *)(param_2 + 8) != 0) {
      plVar6 = (longlong *)param_2[6];
      if ((longlong *)param_2[6] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      if (plVar6 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar6 + 8))();
      }
    }
    (*(code *)*param_2)(uVar4,param_1 + 0x110);
  }
LAB_1410d0743:
  if (*(longlong *)(param_1 + 0x138) != 0) {
    lVar2 = param_1 + 0x128;
    lVar3 = FWeakObjectPtr::Get(lVar2);
    if (lVar3 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(param_1 + 0x130)) && (*(longlong *)(param_1 + 0x138) != 0)) {
        lVar3 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar2,lVar3);
        if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_1 + 0x130) = DAT_1464b56f4;
        }
        lVar3 = FWeakObjectPtr::Get(lVar2);
        if (lVar3 != 0) goto LAB_1410d07cf;
      }
    }
    else {
LAB_1410d07cf:
      lVar2 = AArchVisCharacter::StaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_1410d0838;
    }
    uVar4 = uVar5;
    if (*(int *)(param_2 + 8) != 0) {
      plVar6 = (longlong *)param_2[6];
      if ((longlong *)param_2[6] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      if (plVar6 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar6 + 8))();
      }
    }
    (*(code *)*param_2)(uVar4,param_1 + 0x138);
  }
LAB_1410d0838:
  if (*(longlong *)(param_1 + 0x160) == 0) goto LAB_1410d092d;
  lVar2 = param_1 + 0x150;
  lVar3 = FWeakObjectPtr::Get(lVar2);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x158)) && (*(longlong *)(param_1 + 0x160) != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar2,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x158) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(lVar2);
      if (lVar3 != 0) goto LAB_1410d08c4;
    }
  }
  else {
LAB_1410d08c4:
    lVar2 = AArchVisCharacter::StaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1410d092d;
  }
  if (*(int *)(param_2 + 8) != 0) {
    plVar6 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar6 = param_2 + 2;
    }
    if (plVar6 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar6 + 8))();
    }
  }
  (*(code *)*param_2)(uVar5,param_1 + 0x160);
LAB_1410d092d:
  if (*(int *)(param_2 + 8) != 0) {
    plVar6 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar6 = param_2 + 2;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (param_2[6] == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 1410d0990 FUN_1410d0990 body=934 status=ok
// SIG undefined FUN_1410d0990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410d0990(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_2a8 [32];
  undefined2 local_288;
  longlong *local_278;
  longlong *local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  longlong *local_250;
  LARGE_INTEGER local_248 [2];
  undefined1 *local_238 [2];
  undefined1 local_228 [32];
  undefined8 local_208;
  undefined4 local_1f8;
  undefined1 *local_1e8 [2];
  undefined1 local_1d8 [32];
  undefined8 local_1b8;
  undefined4 local_1a8;
  longlong *local_198;
  longlong *local_190;
  undefined1 local_188 [16];
  longlong local_178 [4];
  longlong *local_158;
  int local_148;
  undefined1 *local_138 [2];
  longlong local_128 [4];
  longlong *local_108;
  int local_f8;
  LARGE_INTEGER local_e8 [24];
  longlong local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  plVar6 = (longlong *)0x0;
  local_208 = 0;
  local_1f8 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_228);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = param_1;
    *puVar4 = &PTR_FUN_143f77b70;
  }
  local_268 = 0;
  local_238[0] = &LAB_1410c5350;
  local_260 = 0x1e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
  local_288 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>(local_268,0x1e,"UGFxCARMenu::LoadLoadoutAsset");
  FUN_140cdf730(local_e8,&local_268,local_238);
  QueryPerformanceCounter(local_248);
  local_e8[0] = local_248[0];
  plVar5 = (longlong *)operator_new(0x18);
  plVar7 = plVar6;
  if (plVar5 != (longlong *)0x0) {
    TPromiseBase<int>::TPromiseBase<int>(plVar5);
    *(undefined1 *)(plVar5 + 2) = 0;
    plVar7 = plVar5;
  }
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *plVar5 = (longlong)&PTR_DestroyObject_1444f8938;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    plVar5[2] = (longlong)plVar7;
    plVar6 = plVar5;
  }
  local_278 = plVar7;
  local_270 = plVar6;
  SharedPointerInternals::EnableSharedFromThis(&local_278,plVar7,plVar7);
  *(undefined1 *)(local_278 + 2) = 1;
  local_250 = (longlong *)local_278[1];
  local_28 = *local_278;
  if (local_250 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_250 + 1) = (int)local_250[1] + 1;
    UNLOCK();
  }
  local_258 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_20,&local_250);
  plVar6 = local_250;
  if (local_250 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_250 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_250)(local_250);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_250 + 8))(local_250,1);
      }
    }
  }
  local_108 = (longlong *)0x0;
  local_f8 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_128);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_1444f8620;
    puVar4[1] = local_e8;
  }
  local_138[0] = &LAB_140cee980;
  local_198 = local_278;
  local_190 = local_270;
  if (local_270 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_270 + 1) = (int)local_270[1] + 1;
    UNLOCK();
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_188,local_138);
  local_1b8 = 0;
  local_1a8 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x70,local_1d8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_CopyToEmptyStorage_1444f8578;
    puVar4[2] = local_198;
    puVar4[3] = local_190;
    if (local_190 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_190 + 1) = (int)local_190[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 4,local_188);
  }
  local_1e8[0] = &LAB_140cee8d0;
  if (local_148 != 0) {
    plVar6 = local_178;
    if (local_158 != (longlong *)0x0) {
      plVar6 = local_158;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_158 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar6 = local_190;
  if (local_190 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_190 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_190)(local_190);
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
  if (local_f8 != 0) {
    plVar6 = local_128;
    if (local_108 != (longlong *)0x0) {
      plVar6 = local_108;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar6 = local_270;
  if (local_270 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_270 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_270)(local_270);
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
  FUN_14204c280(local_1e8);
  FUN_140d1b3a0(local_e8);
  FUN_140ce1dc0(local_e8);
  return;
}



// FUNCTION 1410d0d40 FUN_1410d0d40 body=157 status=ok
// SIG undefined FUN_1410d0d40(void)

ulonglong FUN_1410d0d40(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint7 uVar4;
  ulonglong uVar3;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0xf4);
  uVar3 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_14141f270();
    uVar4 = (uint7)((ulonglong)(lVar2 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      uVar3 = (ulonglong)uVar4 << 8;
    }
    else {
      uVar3 = CONCAT71(uVar4,1);
    }
    if ((char)uVar3 != '\0') {
      uVar3 = FUN_140bca8a0(lVar1);
      if ((((char)uVar3 != '\0') && (uVar3 = *(ulonglong *)(param_1 + 0x208), uVar3 != 0)) &&
         (uVar3 == param_2)) {
        return CONCAT71((int7)(uVar3 >> 8),1);
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1410d0de0 FUN_1410d0de0 body=170 status=ok
// SIG undefined FUN_1410d0de0(void)

undefined8 FUN_1410d0de0(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0xf4);
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
    if (bVar1) {
      cVar2 = FUN_140bca8a0(lVar3);
      if (cVar2 != '\0') {
        lVar3 = FUN_1410cb700(param_1 + -0x4d8);
        if (((lVar3 != 0) && (param_2 != 0)) && (*(longlong *)(lVar3 + 0x98) == param_2)) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1410d0e90 FUN_1410d0e90 body=291 status=ok
// SIG undefined FUN_1410d0e90(void)

void FUN_1410d0e90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [24];
  
  UUserWidget::NativeTick();
  if (*(char *)(param_1 + 0x388) != '\0') {
    if (*(longlong *)(param_1 + 0x358) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(*(longlong *)(param_1 + 0x358) + 0x160);
    }
    if (*(int *)(param_1 + 0x398) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = *(undefined2 **)(param_1 + 0x390);
    }
    FString::PrintfImpl(local_48,L"%s - AP (%d)",puVar6,uVar7);
    uVar5 = FText::FromString(local_38,local_48);
    if (*(longlong **)(param_1 + 0x300) != (longlong *)0x0) {
      lVar4 = **(longlong **)(param_1 + 0x300);
      uVar5 = FText::FText(local_20,uVar5);
      (**(code **)(lVar4 + 0x2d0))(*(undefined8 *)(param_1 + 0x300),uVar5);
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
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    FUN_1409b57e0(*(undefined8 *)(param_1 + 0x2f8));
    uVar5 = FUN_1409ab1f0(*(undefined8 *)(param_1 + 0x2f8));
    FUN_1410d37d0(param_1,uVar5);
    *(undefined1 *)(param_1 + 0x388) = 0;
  }
  return;
}



// FUNCTION 1410d0fc0 NewProp_bAutoIncrementPathSearch_SetBit body=8 status=ok
// SIG undefined NewProp_bAutoIncrementPathSearch_SetBit(void)

void Z_Construct_UClass_ANavSvoDebugActor_Statics::NewProp_bAutoIncrementPathSearch_SetBit
               (longlong param_1)

{
  *(undefined1 *)(param_1 + 0x388) = 1;
  return;
}



// FUNCTION 1410d0fd0 FUN_1410d0fd0 body=288 status=ok
// SIG undefined FUN_1410d0fd0(void)

void FUN_1410d0fd0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 local_20;
  
  if (param_2 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = *(undefined4 *)(param_2 + 0x2d8);
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x1b4);
  if (cVar3 != '\0') {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0x1b4);
    lVar5 = FWeakObjectPtr::Get(lVar4 + 0x1ac);
    if (lVar5 != 0) {
      FUN_140d13070(lVar5,uVar7);
    }
    if (*(longlong *)(lVar4 + 0x180) != 0) {
      FUN_1410e76d0();
    }
    if (*(longlong **)(lVar4 + 0x38) != (longlong *)0x0) {
      local_28 = 0;
      local_20 = 0;
      lVar1 = **(longlong **)(lVar4 + 0x38);
      puVar6 = (undefined8 *)FName::FName(local_res8,L"MainMenu_Confirm",1);
      (**(code **)(lVar1 + 0x4e8))(*(undefined8 *)(lVar4 + 0x38),*puVar6,&local_28);
    }
    if ((lVar5 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x38), lVar4 != 0)) {
      lVar5 = AXActionCue::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        *(undefined1 *)(lVar4 + 0x968) = 1;
      }
    }
  }
  FUN_1410e9230(param_1,uVar7);
  return;
}



// FUNCTION 1410d10f0 FUN_1410d10f0 body=59 status=ok
// SIG undefined FUN_1410d10f0(void)

void FUN_1410d10f0(longlong param_1,undefined8 param_2)

{
  longlong local_18;
  undefined8 local_10;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  local_18 = param_1;
  local_10 = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x310,&local_18);
  return;
}



// FUNCTION 1410d1130 FUN_1410d1130 body=328 status=ok
// SIG undefined FUN_1410d1130(void)

void FUN_1410d1130(longlong *param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar4 = param_1[2];
  plVar6 = (longlong *)0x0;
  plVar5 = plVar6;
  if (lVar4 != 0) {
    lVar3 = FUN_141319ff0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      plVar5 = (longlong *)(lVar4 + 0xc0);
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x138))(param_1,param_3);
  if ((cVar2 != '\0') && (plVar5 != (longlong *)0x0)) {
    if (((int)plVar5[0xb] == 0) ||
       (((longlong *)plVar5[10] == (longlong *)0x0 ||
        (cVar2 = (**(code **)(*(longlong *)plVar5[10] + 0x18))(), cVar2 == '\0')))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) &&
       ((((*(char *)((longlong)plVar5 + 0x83) != '\0' || (plVar5[0x13] == 0)) ||
         (lVar4 = FUN_14270bb10(), lVar4 == 0)) || (*(int *)(lVar4 + 0x108) == param_3)))) {
      param_1 = param_1 + -0x9b;
      lVar4 = FUN_1410cb700(param_1);
      if (((*(int *)(lVar4 + 0x58) == 0) || (*(longlong **)(lVar4 + 0x50) == (longlong *)0x0)) ||
         (cVar2 = (**(code **)(**(longlong **)(lVar4 + 0x50) + 0x18))(), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if (*(int *)(lVar4 + 0x58) != 0) {
          plVar6 = *(longlong **)(lVar4 + 0x50);
        }
        (**(code **)(*plVar6 + 0x40))(plVar6,param_1,param_2);
      }
      FUN_142eb3990(param_1);
    }
  }
  return;
}



// FUNCTION 1410d1280 FUN_1410d1280 body=145 status=ok
// SIG undefined FUN_1410d1280(void)

void FUN_1410d1280(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FUN_1410e8a40();
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
  local_58[0] = &LAB_1410c5680;
  FUN_14208c4f0(param_1,local_58);
  return;
}



// FUNCTION 1410d1320 FUN_1410d1320 body=324 status=ok
// SIG undefined FUN_1410d1320(void)

void FUN_1410d1320(longlong param_1,longlong param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  FUN_140eaffa0(param_1 + 0x338,param_2 + 8,*(undefined4 *)(param_2 + 4));
  if ((*(char *)(param_1 + 0x2f0) != '\0') || (*(char *)(param_1 + 0x770) != '\x01')) {
    lVar1 = *(longlong *)(param_2 + 8);
    if ((lVar1 == DAT_146874cc8) && (*(char *)(param_1 + 0x450) != '\0')) {
      lVar1 = (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x148))();
      *(float *)(param_1 + 0xdd8) =
           *(float *)(param_1 + 0xdd8) -
           *(float *)(lVar1 + 0x7b0) * *(float *)(param_2 + 4) * *(float *)(param_1 + 0x2e0);
      lVar1 = *(longlong *)(param_2 + 8);
    }
    if ((lVar1 == DAT_146874cd0) && (*(char *)(param_1 + 0x450) != '\0')) {
      lVar1 = (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x148))();
      fVar2 = *(float *)(param_1 + 0x2e8) * 0.017453292;
      fVar3 = *(float *)(lVar1 + 0x7b0) * *(float *)(param_2 + 4) * *(float *)(param_1 + 0x2e0) +
              *(float *)(param_1 + 0xddc);
      if ((fVar2 <= fVar3) && (fVar2 = *(float *)(param_1 + 0x2ec) * 0.017453292, fVar3 <= fVar2)) {
        fVar2 = fVar3;
      }
      *(float *)(param_1 + 0xddc) = fVar2;
    }
    FUN_1411fa2a0(param_1 + 0x358,param_1 + 0xdd8);
    ABP_Chapter4Shield_C__pf3624537544::bpf__Press_RMB_WithForce__pf
              (param_1 + 0x358,*(undefined4 *)(param_1 + 0x2e4));
  }
  FOutputDevice::CanBeUsedOnAnyThread(param_1,param_2);
  return;
}



// FUNCTION 1410d1470 FUN_1410d1470 body=595 status=ok
// SIG undefined FUN_1410d1470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1410d1470(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined4 local_f0;
  undefined1 *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  iVar6 = *(int *)(param_1 + 0x2c8);
  iVar4 = *(int *)(param_1 + 0x1b0);
  if (iVar4 <= iVar6) {
    if (iVar4 < 1) {
      return 0;
    }
    iVar6 = iVar4 + -1;
  }
  lVar8 = (longlong)iVar6 * 0x50 + *(longlong *)(param_1 + 0x1a8);
  if ((((lVar8 != 0) && (*(char *)(lVar8 + 0x34) != '\0')) && (1e-08 < ABS(*(float *)(param_2 + 4)))
      ) && (((lVar5 = *(longlong *)(param_2 + 8), lVar5 == DAT_146874cc0 || (lVar5 == DAT_146874ec0)
             ) || (lVar5 == DAT_146874ec8)))) {
    local_b8 = (longlong *)0x0;
    local_a8 = 0;
    puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_d8);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_FUN_143f77b70;
      puVar7[1] = param_1 + -0x4d8;
    }
    uVar1 = *(undefined4 *)(lVar8 + 0x30);
    local_e8[0] = &LAB_1410c5440;
    local_98 = 0;
    local_90 = 0;
    FWeakObjectPtr::operator=(local_88,0);
    local_80 = 0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,local_e8);
    local_f0 = 0xbf800000;
    local_f8 = 0;
    FUN_142880850(param_1 + -0x198,param_1 + 0x280,&local_98,uVar1);
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
    if (local_a8 != 0) {
      plVar9 = local_d8;
      if (local_b8 != (longlong *)0x0) {
        plVar9 = local_b8;
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,0);
      }
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free();
    }
    fVar2 = *(float *)(lVar8 + 0x28);
    fVar3 = *(float *)(param_2 + 4);
    *(undefined2 *)(param_1 + 0x2da) = 0x100;
    *(undefined1 *)(param_1 + 0x2d8) = 0;
    *(float *)(param_1 + 0x2d4) = -(fVar2 * fVar3);
    return 1;
  }
  return 0;
}



// FUNCTION 1410d16d0 FUN_1410d16d0 body=327 status=ok
// SIG undefined FUN_1410d16d0(void)

void FUN_1410d16d0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong local_res10;
  
  lVar3 = param_1 + 0x4c8;
  lVar2 = FWeakObjectPtr::Get(lVar3);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x4d0)) && (*(longlong *)(param_1 + 0x4d8) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar3,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x4d0) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(lVar3);
      if (lVar2 != 0) goto LAB_1410d1757;
    }
  }
  else {
LAB_1410d1757:
    lVar3 = UTexture2D::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1410d1790;
  }
  lVar2 = 0;
LAB_1410d1790:
  lVar3 = param_1 + 0x4b8;
  if (((*(longlong *)(param_1 + 0x4c0) != 0) && (lVar4 = FWeakObjectPtr::Get(lVar3), lVar4 != 0)) &&
     (lVar4 = UObject::FindFunction(lVar4,*(undefined8 *)(param_1 + 0x4c0)), lVar4 != 0)) {
    local_res10 = lVar2;
    plVar5 = (longlong *)FWeakObjectPtr::Get(lVar3);
    uVar6 = FUN_14178ac60(plVar5,*(undefined8 *)(param_1 + 0x4c0));
    (**(code **)(*plVar5 + 0x208))(plVar5,uVar6,&local_res10);
  }
  FWeakObjectPtr::operator=(lVar3,0);
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  return;
}



// FUNCTION 1410d1820 FUN_1410d1820 body=5 status=ok
// SIG undefined FUN_1410d1820(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410d1820(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x2d0);
  if (lVar2 == 0) {
    return;
  }
  if ((*(char *)(lVar2 + 0xaf) == '\0') && (*(char *)(lVar2 + 0xb0) == '\0')) {
    iVar1 = *(int *)(lVar2 + 0x48);
    if (((1 < iVar1) &&
        (((*(longlong *)(*(longlong *)(lVar2 + 0x40) + -8 + (longlong)iVar1 * 8) != 0 &&
          (plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x40) + -0x10 + (longlong)iVar1 * 8),
          plVar3 != (longlong *)0x0)) && (plVar3[7] != 0)))) &&
       (*(char *)(plVar3[7] + 0x36) == '\0')) {
      uVar6 = (**(code **)(*plVar3 + 0x278))();
      FUN_142f005e0(lVar2,uVar6);
      TBaseDelegate<void>::ExecuteIfBound(lVar2 + 0xf8);
      return;
    }
    if (0 < iVar1) {
      lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x40) + -8 + (longlong)*(int *)(lVar2 + 0x48) * 8)
      ;
      if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x28) != 0)) && (*(longlong *)(lVar4 + 0x30) != 0)
         ) {
        (**(code **)(**(longlong **)(lVar4 + 0x30) + 0x20))();
      }
      FUN_142ee8180(lVar2,lVar4);
      FUN_142ee86c0(lVar2,lVar4);
      LOCK();
      DAT_146ace8c0 = DAT_146ace8c0 + -1;
      UNLOCK();
      lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x40) + -8 + (longlong)*(int *)(lVar2 + 0x48) * 8)
      ;
      *(int *)(lVar2 + 0x48) = *(int *)(lVar2 + 0x48) + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar2 + 0x40);
      if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x28) != 0)) && (*(longlong *)(lVar4 + 0x30) != 0)
         ) {
        (**(code **)(**(longlong **)(lVar4 + 0x30) + 0x90))();
      }
      if (*(int *)(lVar2 + 0x48) == 0) {
        FUN_14202d950(0);
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(lVar2 + 0x148,0)
        ;
      }
      FUN_142f04290(lVar2);
      if ((0 < *(int *)(lVar2 + 0x48)) &&
         (FUN_142ee16e0(lVar2,*(undefined8 *)
                               (*(longlong *)(lVar2 + 0x40) + -8 +
                               (longlong)*(int *)(lVar2 + 0x48) * 8)),
         *(char *)(lVar2 + 0xac) != '\0')) {
        return;
      }
    }
    *(undefined1 *)(lVar2 + 0xac) = 1;
    if (((*(int *)(lVar2 + 0x100) != 0) && (*(longlong **)(lVar2 + 0xf8) != (longlong *)0x0)) &&
       (cVar5 = (**(code **)(**(longlong **)(lVar2 + 0xf8) + 0x18))(), cVar5 != '\0')) {
      if (*(int *)(lVar2 + 0x100) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000142f0036a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(lVar2 + 0xf8) + 0x40))();
        return;
      }
      (**(code **)(_DAT_00000000 + 0x40))();
    }
  }
  return;
}



// FUNCTION 1410d1830 FUN_1410d1830 body=111 status=ok
// SIG undefined FUN_1410d1830(void)

ulonglong FUN_1410d1830(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar3 = FUN_140cff230(*(undefined8 *)(param_1 + 0x7f0));
  if ((uVar3 != 0) && (param_2 != 0)) {
    iVar2 = FUN_142eb62f0(param_2);
    iVar4 = 0x78;
    if (iVar2 != 5) {
      iVar4 = iVar2 * 0xf;
    }
    *(int *)(uVar3 + 0x200) = iVar4;
    *(undefined1 *)(uVar3 + 0x28) = 1;
    *(undefined1 *)(param_1 + 0x7d8) = 1;
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x588);
    *(uint *)(param_1 + 0x588) = 1;
    uVar3 = (ulonglong)uVar1;
    UNLOCK();
  }
  return uVar3;
}



// FUNCTION 1410d18a0 FUN_1410d18a0 body=103 status=ok
// SIG undefined FUN_1410d18a0(void)

ulonglong FUN_1410d18a0(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_140cff230(*(undefined8 *)(param_1 + 0x7f0));
  if ((uVar3 != 0) && (param_2 != 0)) {
    iVar2 = FUN_142eb62f0(param_2);
    *(undefined1 *)(uVar3 + 0x28) = 1;
    *(bool *)(uVar3 + 0x1fd) = 0 < iVar2;
    *(undefined1 *)(param_1 + 0x7d8) = 1;
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x588);
    *(uint *)(param_1 + 0x588) = 1;
    uVar3 = (ulonglong)uVar1;
    UNLOCK();
  }
  return uVar3;
}



// FUNCTION 1410d1910 FUN_1410d1910 body=3110 status=ok
// SIG undefined FUN_1410d1910(void)

void FUN_1410d1910(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined4 *local_58;
  uint local_50;
  uint local_4c;
  char local_48;
  undefined8 local_40;
  
  if (param_2 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x358) == 0) {
    return;
  }
  switch(*(undefined4 *)(param_2 + 0x2e8)) {
  case 1:
    FUN_141456f90(*(longlong *)(param_1 + 0x358),1);
    FUN_141301c10(param_1);
    return;
  case 2:
    goto LAB_1410d2401;
  case 3:
    if (*(longlong *)(param_1 + 0x348) != 0) {
      FUN_141457010();
      *(undefined1 *)(param_1 + 0x388) = 1;
      FUN_141301c10(param_1);
      return;
    }
    break;
  case 4:
    uVar8 = FWeakObjectPtr::Get(param_2 + 0x2ec);
    uVar13 = 0;
    if (uVar8 == 0) {
LAB_1410d225c:
      uVar8 = uVar13;
    }
    else {
      lVar9 = FUN_14144e630();
      if ((*(int *)(*(longlong *)(uVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1410d225c;
    }
    lVar9 = *(longlong *)(param_1 + 0x2f8);
    if ((lVar9 == 0) || (uVar8 == 0)) break;
    plVar17 = *(longlong **)(uVar8 + 0xa8);
    local_58 = (undefined4 *)0x0;
    local_50 = 0;
    local_4c = 0;
    uVar14 = (longlong)*(int *)(uVar8 + 0xb0) & 0x1fffffffffffffff;
    if (plVar17 + *(int *)(uVar8 + 0xb0) < plVar17) {
      uVar14 = uVar13;
    }
    uVar8 = uVar13;
    uVar15 = uVar13;
    if (uVar14 != 0) {
      do {
        lVar9 = *plVar17;
        if (lVar9 != 0) {
          local_50 = (int)uVar8 + 1;
          if ((int)uVar13 < (int)local_50) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
            ResizeGrow(&local_58,uVar8);
          }
          puVar3 = local_58;
          lVar10 = (longlong)(int)uVar8;
          local_58[lVar10 * 5] = 5;
          FWeakObjectPtr::operator=(local_58 + lVar10 * 5 + 1,lVar9);
          FWeakObjectPtr::operator=(puVar3 + lVar10 * 5 + 3,param_2);
          uVar13 = (ulonglong)local_4c;
          uVar8 = (ulonglong)local_50;
        }
        plVar17 = plVar17 + 1;
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar14);
      lVar9 = *(longlong *)(param_1 + 0x2f8);
    }
    FUN_1409b5310(lVar9,param_2,&local_58);
    if (local_50 == 0) {
      local_50 = 1;
      if ((int)local_4c < 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
        ResizeGrow(&local_58,0);
      }
      puVar3 = local_58;
      *local_58 = 0;
      FWeakObjectPtr::operator=(local_58 + 1,0);
      FWeakObjectPtr::operator=(puVar3 + 3,param_2);
    }
    goto LAB_1410d1aad;
  case 5:
    lVar9 = FWeakObjectPtr::Get(param_2 + 0x2ec);
    if (lVar9 == 0) {
LAB_1410d23bd:
      lVar9 = 0;
    }
    else {
      lVar10 = FUN_14145f420();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1410d23bd;
    }
    cVar4 = FUN_1410e69c0(param_1,param_2,lVar9);
    goto LAB_1410d23cd;
  case 6:
    lVar9 = FWeakObjectPtr::Get(param_2 + 0x2f4);
    if (lVar9 != 0) {
      lVar10 = UUGStartScreenUW::GetPrivateStaticClass();
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
        iVar5 = *(int *)(lVar9 + 0x2e8);
        lVar9 = FWeakObjectPtr::Get(param_2 + 0x2ec);
        if (lVar9 != 0) {
          lVar10 = FUN_14144ec10();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (((bVar2) && (*(longlong *)(param_1 + 0x348) != 0)) &&
             (*(longlong *)(param_1 + 0x358) != 0)) {
            local_40 = 0;
            cVar4 = FUN_1409a7560(*(longlong *)(param_1 + 0x358),lVar9,&local_58);
            if (cVar4 != '\0') {
              if (iVar5 - 0xeU < 2) {
                FUN_141456c10(*(undefined8 *)(param_1 + 0x358),lVar9);
                FUN_141301c10(param_1);
                return;
              }
              if ((local_48 != '\0') && (iVar5 = FUN_1409aa830(lVar9), (int)local_50 < iVar5)) {
                FUN_141455e20(*(undefined8 *)(param_1 + 0x358),lVar9);
                goto LAB_1410d2529;
              }
            }
          }
        }
      }
    }
    break;
  case 7:
    lVar9 = FWeakObjectPtr::Get(param_2 + 0x2ec);
    if (lVar9 != 0) {
      lVar10 = UXSkinAnimationProfile::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) &&
         (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x360) + 0x408))(),
         *(int *)(lVar9 + 0x60) <= iVar5)) {
        cVar4 = FUN_1410e6660(param_1,param_2,lVar9);
        goto LAB_1410d23cd;
      }
    }
    break;
  case 9:
    if (((*(longlong *)(param_1 + 0x2f8) == 0) || (*(longlong *)(param_1 + 0x348) == 0)) ||
       (lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x348) + 0x398), lVar9 == 0)) break;
    uVar13 = 0;
    local_58 = (undefined4 *)0x0;
    local_50 = 0;
    local_4c = 0;
    plVar17 = *(longlong **)(lVar9 + 0x38);
    uVar8 = (longlong)*(int *)(lVar9 + 0x40) & 0x1fffffffffffffff;
    if (plVar17 + *(int *)(lVar9 + 0x40) < plVar17) {
      uVar8 = uVar13;
    }
    uVar14 = uVar13;
    uVar15 = uVar13;
    uVar12 = 0;
    if (uVar8 == 0) goto LAB_1410d1a66;
    do {
      lVar9 = *plVar17;
      if (lVar9 != 0) {
        local_50 = (int)uVar14 + 1;
        if ((int)uVar13 < (int)local_50) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
          ResizeGrow(&local_58,uVar14);
        }
        puVar3 = local_58;
        lVar10 = (longlong)(int)uVar14;
        local_58[lVar10 * 5] = 7;
        FWeakObjectPtr::operator=(local_58 + lVar10 * 5 + 1,lVar9);
        FWeakObjectPtr::operator=(puVar3 + lVar10 * 5 + 3,param_2);
        uVar13 = (ulonglong)local_4c;
        uVar14 = (ulonglong)local_50;
      }
      uVar12 = (uint)uVar13;
      plVar17 = plVar17 + 1;
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar8);
    iVar5 = (int)uVar14;
joined_r0x0001410d1fb8:
    if (iVar5 == 0) goto LAB_1410d1a66;
    goto LAB_1410d1a9a;
  case 10:
    lVar10 = FWeakObjectPtr::Get(param_2 + 0x2ec);
    lVar9 = 0;
    if (lVar10 == 0) {
LAB_1410d1bba:
      lVar10 = lVar9;
    }
    else {
      lVar11 = FUN_14144ecc0();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1410d1bba;
    }
    if ((*(longlong *)(param_1 + 0x348) != 0) &&
       (lVar11 = FWeakObjectPtr::Get(param_2 + 0x2f4), lVar11 != 0)) {
      lVar7 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (lVar11 = FWeakObjectPtr::Get(lVar11 + 0x2ec), lVar11 != 0)) {
        lVar7 = UXSkinAnimationProfile::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          if (lVar10 != 0) {
            lVar9 = *(longlong *)(lVar10 + 0x88);
          }
          FUN_141457410(*(undefined8 *)(param_1 + 0x348),lVar11,lVar9);
          FUN_141301c10(param_1);
          return;
        }
      }
    }
    break;
  case 0xb:
    uVar8 = FWeakObjectPtr::Get(param_2 + 0x2ec);
    uVar13 = 0;
    if (uVar8 == 0) {
LAB_1410d1eec:
      uVar8 = uVar13;
    }
    else {
      lVar9 = UUGLoadoutBarUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(uVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1410d1eec;
    }
    if (((*(longlong *)(param_1 + 0x2f8) != 0) && (*(longlong *)(param_1 + 0x348) != 0)) &&
       (uVar8 != 0)) {
      plVar17 = *(longlong **)(uVar8 + 0x140);
      local_58 = (undefined4 *)0x0;
      local_50 = 0;
      local_4c = 0;
      uVar14 = (longlong)*(int *)(uVar8 + 0x148) & 0x1fffffffffffffff;
      if (plVar17 + *(int *)(uVar8 + 0x148) < plVar17) {
        uVar14 = uVar13;
      }
      uVar8 = uVar13;
      uVar15 = uVar13;
      uVar12 = 0;
      if (uVar14 != 0) {
        do {
          lVar9 = *plVar17;
          if (lVar9 != 0) {
            local_50 = (int)uVar8 + 1;
            if ((int)uVar13 < (int)local_50) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
              ResizeGrow(&local_58,uVar8);
            }
            puVar3 = local_58;
            lVar10 = (longlong)(int)uVar8;
            local_58[lVar10 * 5] = 0xc;
            FWeakObjectPtr::operator=(local_58 + lVar10 * 5 + 1,lVar9);
            FWeakObjectPtr::operator=(puVar3 + lVar10 * 5 + 3,param_2);
            uVar13 = (ulonglong)local_4c;
            uVar8 = (ulonglong)local_50;
          }
          uVar12 = (uint)uVar13;
          plVar17 = plVar17 + 1;
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar14);
        iVar5 = (int)uVar8;
        goto joined_r0x0001410d1fb8;
      }
      goto LAB_1410d1a66;
    }
    break;
  case 0xc:
    lVar9 = FWeakObjectPtr::Get(param_2 + 0x2f4);
    lVar10 = 0;
    if (lVar9 == 0) {
LAB_1410d1db2:
      lVar9 = lVar10;
    }
    else {
      lVar11 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1410d1db2;
    }
    lVar9 = FWeakObjectPtr::Get(lVar9 + 0x2ec);
    if (lVar9 == 0) {
LAB_1410d1dff:
      lVar9 = lVar10;
    }
    else {
      lVar11 = UUGLoadoutBarUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1410d1dff;
    }
    lVar11 = FWeakObjectPtr::Get(param_2 + 0x2ec);
    if (lVar11 == 0) {
LAB_1410d1e4c:
      lVar11 = lVar10;
    }
    else {
      lVar7 = UXSkinAnimationProfile::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1410d1e4c;
    }
    if ((lVar9 != 0) && (lVar11 != 0)) {
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0x360) + 0x408))();
      cVar4 = FUN_1409aec20(lVar11,uVar6,*(undefined8 *)(param_1 + 0x358));
      if (cVar4 != '\0') {
        cVar4 = FUN_1410e5ec0(param_1,param_2,lVar9,lVar11);
        goto LAB_1410d23cd;
      }
    }
    break;
  case 0xd:
    lVar9 = FWeakObjectPtr::Get(param_2 + 0x2ec);
    if (lVar9 == 0) {
LAB_1410d1d51:
      lVar9 = 0;
    }
    else {
      lVar10 = UUGJournalKey::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1410d1d51;
    }
    cVar4 = FUN_1410f4a70(param_1,param_2,lVar9);
    goto LAB_1410d23cd;
  case 0xe:
    uVar13 = 0;
    puVar16 = *(undefined8 **)(param_1 + 0x368);
    local_58 = (undefined4 *)0x0;
    local_4c = 0;
    uVar8 = (longlong)*(int *)(param_1 + 0x370) & 0x1fffffffffffffff;
    if (puVar16 + *(int *)(param_1 + 0x370) < puVar16) {
      uVar8 = uVar13;
    }
    uVar14 = uVar13;
    uVar15 = uVar13;
    uVar12 = 0;
    if (uVar8 != 0) {
      while( true ) {
        uVar1 = *puVar16;
        local_50 = (int)uVar14 + 1;
        if ((int)uVar13 < (int)local_50) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
          ResizeGrow(&local_58,uVar14);
        }
        puVar3 = local_58;
        lVar9 = (longlong)(int)uVar14;
        local_58[lVar9 * 5] = 6;
        FWeakObjectPtr::operator=(local_58 + lVar9 * 5 + 1,uVar1);
        FWeakObjectPtr::operator=(puVar3 + lVar9 * 5 + 3,param_2);
        puVar16 = puVar16 + 1;
        if (uVar15 + 1 == uVar8) break;
        uVar13 = (ulonglong)local_4c;
        uVar14 = (ulonglong)local_50;
        uVar15 = uVar15 + 1;
      }
LAB_1410d1a5a:
      uVar12 = local_4c;
      if (local_50 != 0) goto LAB_1410d1a9a;
    }
    goto LAB_1410d1a66;
  case 0xf:
    uVar13 = 0;
    puVar16 = *(undefined8 **)(param_1 + 0x378);
    local_58 = (undefined4 *)0x0;
    local_4c = 0;
    uVar8 = (longlong)*(int *)(param_1 + 0x380) & 0x1fffffffffffffff;
    if (puVar16 + *(int *)(param_1 + 0x380) < puVar16) {
      uVar8 = uVar13;
    }
    uVar14 = uVar13;
    uVar15 = uVar13;
    uVar12 = 0;
    if (uVar8 != 0) {
      while( true ) {
        uVar1 = *puVar16;
        local_50 = (int)uVar14 + 1;
        if ((int)uVar13 < (int)local_50) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
          ResizeGrow(&local_58,uVar14);
        }
        puVar3 = local_58;
        lVar9 = (longlong)(int)uVar14;
        local_58[lVar9 * 5] = 6;
        FWeakObjectPtr::operator=(local_58 + lVar9 * 5 + 1,uVar1);
        FWeakObjectPtr::operator=(puVar3 + lVar9 * 5 + 3,param_2);
        puVar16 = puVar16 + 1;
        if (uVar15 + 1 == uVar8) break;
        uVar13 = (ulonglong)local_4c;
        uVar14 = (ulonglong)local_50;
        uVar15 = uVar15 + 1;
      }
      goto LAB_1410d1a5a;
    }
LAB_1410d1a66:
    local_50 = 1;
    if ((int)uVar12 < 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (&local_58,0);
    }
    puVar3 = local_58;
    *local_58 = 0;
    FWeakObjectPtr::operator=(local_58 + 1,0);
    FWeakObjectPtr::operator=(puVar3 + 3,param_2);
LAB_1410d1a9a:
    FUN_1409b5310(*(undefined8 *)(param_1 + 0x2f8),param_2,&local_58);
LAB_1410d1aad:
    if (local_58 != (undefined4 *)0x0) {
      FMemory::Free();
      FUN_141301c10(param_1);
      return;
    }
    goto LAB_1410d2529;
  case 0x10:
    lVar9 = FWeakObjectPtr::Get(param_2 + 0x2ec);
    if (lVar9 == 0) {
LAB_1410d2009:
      lVar9 = 0;
    }
    else {
      lVar10 = FUN_1414a98a0();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1410d2009;
    }
    cVar4 = FUN_1410e6250(param_1,param_2,lVar9);
LAB_1410d23cd:
    if (cVar4 != '\0') {
LAB_1410d2529:
      FUN_141301c10(param_1);
      return;
    }
    break;
  case 0x11:
    lVar9 = FWeakObjectPtr::Get(param_2 + 0x2ec);
    if (lVar9 == 0) {
LAB_1410d206a:
      lVar9 = 0;
    }
    else {
      lVar10 = FUN_1414adde0();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1410d206a;
    }
    lVar10 = FWeakObjectPtr::Get(param_2 + 0x2f4);
    if (lVar10 == 0) {
LAB_1410d2101:
      lVar10 = 0;
    }
    else {
      lVar11 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((!bVar2) || (lVar10 = FWeakObjectPtr::Get(lVar10 + 0x2ec), lVar10 == 0))
      goto LAB_1410d2101;
      lVar11 = FUN_1414a98a0();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1410d2101;
    }
    if ((*(longlong *)(param_1 + 0x350) != 0) && (lVar10 != 0)) {
      FUN_1414adf40(*(longlong *)(param_1 + 0x350),lVar10,lVar9);
      FUN_141301c10(param_1);
      return;
    }
  }
  FUN_141301bd0(param_1);
LAB_1410d2401:
  return;
}



// FUNCTION 1410d2580 FUN_1410d2580 body=4614 status=ok
// SIG undefined FUN_1410d2580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410d2580(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  void *_Src;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined1 *puVar18;
  wchar_t *pwVar19;
  undefined2 *puVar20;
  undefined *puVar21;
  undefined2 *puVar22;
  longlong *local_res10;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [8];
  undefined4 local_60;
  undefined1 local_50 [8];
  undefined4 local_48;
  char local_40;
  char local_3f;
  undefined8 local_38;
  
  if (param_2 == 0) {
    return;
  }
  plVar12 = (longlong *)0x0;
  uVar5 = 0;
  local_res10 = (longlong *)((ulonglong)local_res10 & 0xffffffff00000000);
  if (*(longlong *)(param_1 + 0x348) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x358) == 0) {
    return;
  }
  switch(*(undefined4 *)(param_2 + 0x2e8)) {
  case 0:
    local_78 = (undefined2 *)CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
    uStack_70 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
    FUN_142130490(param_2,&local_78);
    local_88 = (undefined2 *)0x0;
    uStack_80 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    uVar15 = 0x14;
    pwVar19 = L"[ EMPTY ]";
    break;
  case 1:
    local_78 = (undefined2 *)CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
    uStack_70 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
    FUN_142130490(param_2,&local_78);
    local_88 = (undefined2 *)0x0;
    uStack_80 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    pwVar19 = L"Add Skill Point";
    goto LAB_1410d262a;
  case 2:
    local_78 = (undefined2 *)CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
    uStack_70 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
    FUN_142130490(param_2,&local_78);
    local_88 = (undefined2 *)0x0;
    uStack_80 = 0x18;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    uVar15 = 0x30;
    pwVar19 = L"=======================";
    break;
  case 3:
    local_78 = (undefined2 *)CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
    uStack_70 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
    FUN_142130490(param_2,&local_78);
    local_88 = (undefined2 *)0x0;
    uStack_80 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    uVar15 = 0x16;
    pwVar19 = L"Reset Tree";
    break;
  case 4:
    lVar9 = FWeakObjectPtr::Get(param_2 + 0x2ec);
    if (lVar9 != 0) {
      lVar10 = FUN_14144e630();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) &&
         (cVar4 = FUN_1409a73a0(*(undefined8 *)(param_1 + 0x358),lVar9,&local_88), cVar4 != '\0')) {
        local_78 = (undefined2 *)CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
        uStack_70 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
        FUN_142130490(param_2,&local_78);
        puVar13 = (undefined8 *)FText::ToString(lVar9 + 0x30);
        if (*(int *)(puVar13 + 1) == 0) {
          puVar20 = &DAT_143f3eda8;
        }
        else {
          puVar20 = (undefined2 *)*puVar13;
        }
        FString::PrintfImpl(&local_78,L"Branch: %s (%d)",puVar20,uStack_80 & 0xffffffff);
        puVar18 = local_68;
        goto LAB_1410d2fa3;
      }
    }
    goto switchD_1410d25f2_caseD_8;
  case 5:
    lVar9 = FWeakObjectPtr::Get(param_2 + 0x2ec);
    if (lVar9 == 0) goto switchD_1410d25f2_caseD_8;
    lVar10 = FUN_14145f420();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto switchD_1410d25f2_caseD_8;
    if ((*(uint *)(lVar9 + 8) >> 4 & 1) == 0) {
      plVar12 = *(longlong **)(lVar9 + 0x20);
    }
    if (((plVar12 == (longlong *)0x0) ||
        (cVar4 = FUN_1409a7410(*(undefined8 *)(param_1 + 0x358),lVar9,&local_78), cVar4 == '\0')) ||
       (cVar4 = FUN_1409a73a0(*(undefined8 *)(param_1 + 0x358),plVar12,local_68), cVar4 == '\0'))
    goto switchD_1410d25f2_caseD_8;
    if (uStack_70._4_1_ == '\0') {
      local_88 = (undefined2 *)CONCAT44(uRam00000001464aa6f4,_DAT_1464aa6f0);
      uStack_80 = CONCAT44(uRam00000001464aa6fc,uRam00000001464aa6f8);
      FUN_142130490(param_2,&local_88);
      if (local_78 != (undefined2 *)0x0) {
        uVar5 = *(undefined4 *)(local_78 + 0x18);
      }
      FString::PrintfImpl(&local_88,L"Tier: TP (%d) LOCKED [%d/%d]",uStack_70 & 0xffffffff,local_60,
                          uVar5);
      puVar18 = local_50;
    }
    else {
      local_88 = (undefined2 *)CONCAT44(uRam00000001464aa704,_DAT_1464aa700);
      uStack_80 = CONCAT44(uRam00000001464aa70c,uRam00000001464aa708);
      FUN_142130490(param_2,&local_88);
      FString::PrintfImpl(&local_88,L"Tier: TP (%d)",uStack_70 & 0xffffffff);
      puVar18 = local_50;
    }
    goto LAB_1410d263d;
  case 6:
    plVar8 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x2ec);
    if (plVar8 == (longlong *)0x0) {
LAB_1410d33ef:
      plVar8 = plVar12;
    }
    else {
      lVar9 = FUN_14144ec10();
      if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1410d33ef;
    }
    local_38 = 0;
    if ((plVar8 == (longlong *)0x0) ||
       (cVar4 = FUN_1409a7560(*(undefined8 *)(param_1 + 0x358),plVar8,local_50), cVar4 == '\0'))
    goto switchD_1410d25f2_caseD_8;
    puVar13 = (undefined8 *)&DAT_1464aa700;
    if (local_40 == '\0') {
      puVar13 = (undefined8 *)&DAT_1464aa6f0;
    }
    local_78 = (undefined2 *)*puVar13;
    uStack_70 = puVar13[1];
    FUN_142130490(param_2,&local_78);
    if (local_3f == '\0') {
      puVar13 = (undefined8 *)(**(code **)(*plVar8 + 0x280))(plVar8,&local_88);
      if (*(int *)(puVar13 + 1) == 0) {
        puVar20 = &DAT_143f3eda8;
      }
      else {
        puVar20 = (undefined2 *)*puVar13;
      }
      uVar5 = FUN_1409aa830(plVar8);
      FString::PrintfImpl(&local_78,L"Item: %s (%d/%d)",puVar20,local_48,uVar5);
    }
    else {
      puVar13 = (undefined8 *)(**(code **)(*plVar8 + 0x280))();
      if (*(int *)(puVar13 + 1) == 0) {
        puVar20 = &DAT_143f3eda8;
      }
      else {
        puVar20 = (undefined2 *)*puVar13;
      }
      FString::PrintfImpl(&local_78,L"Item: %s (Wingtip)",puVar20);
    }
    uVar15 = FText::FromString(local_68,&local_78);
    FUN_142f0e010(param_2,uVar15);
    puVar20 = local_88;
    if (local_78 != (undefined2 *)0x0) {
      FMemory::Free();
      puVar20 = local_88;
    }
    goto LAB_1410d2fbb;
  case 7:
    plVar8 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x2ec);
    if (plVar8 != (longlong *)0x0) {
      lVar9 = UXSkinAnimationProfile::GetPrivateStaticClass();
      if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        iVar6 = (**(code **)(**(longlong **)(param_1 + 0x360) + 0x408))();
        if (iVar6 < (int)plVar8[0xc]) {
          local_78 = (undefined2 *)CONCAT44(uRam00000001464aa6f4,_DAT_1464aa6f0);
          uStack_70 = CONCAT44(uRam00000001464aa6fc,uRam00000001464aa6f8);
          FUN_142130490(param_2,&local_78);
          lVar9 = plVar8[0xc];
          puVar13 = (undefined8 *)FText::ToString(plVar8 + 6);
          if (*(int *)(puVar13 + 1) == 0) {
            puVar20 = &DAT_143f3eda8;
          }
          else {
            puVar20 = (undefined2 *)*puVar13;
          }
          FString::PrintfImpl(&local_78,L"%s [%d/%d]",puVar20,iVar6,(int)lVar9);
          puVar18 = local_68;
        }
        else {
          local_78 = (undefined2 *)CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
          uStack_70 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
          FUN_142130490(param_2,&local_78);
          FUN_1409ab480(*(undefined8 *)(param_1 + 0x348),&local_res10,plVar8);
          plVar12 = local_res10;
          if (local_res10 == (longlong *)0x0) goto LAB_1410d35fc;
          lVar9 = local_res10[0x1f];
          if (lVar9 == 0) {
            (**(code **)(*local_res10 + 0x368))(local_res10);
            lVar9 = plVar12[0x1f];
            if (lVar9 == 0) goto LAB_1410d35fc;
          }
          puVar13 = (undefined8 *)FText::ToString(lVar9 + 0x40);
          puVar20 = &DAT_143f3eda8;
          if (*(int *)(puVar13 + 1) == 0) {
            puVar22 = &DAT_143f3eda8;
          }
          else {
            puVar22 = (undefined2 *)*puVar13;
          }
          puVar13 = (undefined8 *)FText::ToString(plVar8 + 6);
          if (*(int *)(puVar13 + 1) != 0) {
            puVar20 = (undefined2 *)*puVar13;
          }
          FString::PrintfImpl(&local_78,L"%s (%s)",puVar20,puVar22);
          puVar18 = local_68;
        }
        goto LAB_1410d2fa3;
      }
    }
  default:
    goto switchD_1410d25f2_caseD_8;
  case 9:
    local_78 = (undefined2 *)CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
    uStack_70 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
    FUN_142130490(param_2,&local_78);
    local_88 = (undefined2 *)0x0;
    uStack_80 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    uVar15 = 0x1c;
    pwVar19 = L"Ability Slots";
    break;
  case 10:
    lVar9 = FWeakObjectPtr::Get(param_2 + 0x2ec);
    if (lVar9 != 0) {
      lVar10 = FUN_14144ecc0();
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
        plVar8 = *(longlong **)(lVar9 + 0x88);
        if (plVar8 != (longlong *)0x0) {
          plVar14 = (longlong *)FUN_14144bcb0();
          plVar11 = plVar8;
          do {
            if (plVar11 == plVar14) {
              local_78 = (undefined2 *)CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
              uStack_70 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
              FUN_142130490(param_2,&local_78);
              lVar9 = FWeakObjectPtr::Get(param_2 + 0x2f4);
              plVar11 = plVar12;
              if (lVar9 != 0) {
                lVar10 = UUGStartScreenUW::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if ((bVar2) && (lVar9 = FWeakObjectPtr::Get(lVar9 + 0x2ec), lVar9 != 0)) {
                  lVar10 = UXSkinAnimationProfile::GetPrivateStaticClass();
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
                    puVar13 = (undefined8 *)
                              FUN_1409ab480(*(undefined8 *)(param_1 + 0x348),&local_res10,lVar9);
                    plVar11 = (longlong *)*puVar13;
                  }
                }
              }
              plVar14 = plVar12;
              if (plVar11 == (longlong *)0x0) goto LAB_1410d30d3;
              plVar16 = (longlong *)FUN_14144bcb0();
              plVar17 = plVar11;
              goto LAB_1410d30c2;
            }
            plVar11 = (longlong *)plVar11[6];
          } while (plVar11 != (longlong *)0x0);
        }
        goto switchD_1410d25f2_caseD_8;
      }
    }
    local_78 = (undefined2 *)CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
    uStack_70 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
    FUN_142130490(param_2,&local_78);
    local_78 = (undefined2 *)0x0;
    uStack_70 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"-- CLEAR --",0x18);
    puVar18 = local_68;
    goto LAB_1410d2fa3;
  case 0xb:
    lVar9 = FWeakObjectPtr::Get(param_2 + 0x2ec);
    if (lVar9 != 0) {
      lVar10 = UUGLoadoutBarUW::GetPrivateStaticClass();
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
        local_78 = (undefined2 *)CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
        uStack_70 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
        FUN_142130490(param_2,&local_78);
        puVar13 = (undefined8 *)FText::ToString(lVar9 + 0x40);
        if (*(int *)(puVar13 + 1) == 0) {
          puVar20 = &DAT_143f3eda8;
        }
        else {
          puVar20 = (undefined2 *)*puVar13;
        }
        FString::PrintfImpl(&local_78,L"%s Augments",puVar20);
        puVar18 = local_68;
        goto LAB_1410d2fa3;
      }
    }
    goto switchD_1410d25f2_caseD_8;
  case 0xc:
    plVar8 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x2ec);
    if (plVar8 == (longlong *)0x0) {
LAB_1410d29e7:
      plVar8 = plVar12;
    }
    else {
      lVar9 = UXSkinAnimationProfile::GetPrivateStaticClass();
      if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1410d29e7;
    }
    lVar9 = FWeakObjectPtr::Get(param_2 + 0x2f4);
    if (lVar9 == 0) {
LAB_1410d2a76:
      plVar11 = plVar12;
    }
    else {
      lVar10 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((!bVar2) ||
         (plVar11 = (longlong *)FWeakObjectPtr::Get(lVar9 + 0x2ec), plVar11 == (longlong *)0x0))
      goto LAB_1410d2a76;
      lVar9 = UUGLoadoutBarUW::GetPrivateStaticClass();
      if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_1410d2a76;
    }
    if ((plVar8 == (longlong *)0x0) || (plVar11 == (longlong *)0x0)) goto switchD_1410d25f2_caseD_8;
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x360) + 0x408))();
    cVar4 = FUN_1409aec20(plVar8,uVar5,*(undefined8 *)(param_1 + 0x358));
    lVar9 = FUN_1409a72d0(*(undefined8 *)(param_1 + 0x348),plVar11[2],plVar8);
    puVar13 = (undefined8 *)&DAT_1464aa6c0;
    if (cVar4 == '\0') {
      puVar13 = (undefined8 *)&DAT_1464aa6f0;
    }
    local_78 = (undefined2 *)*puVar13;
    uStack_70 = puVar13[1];
    FUN_142130490(param_2,&local_78);
    if (cVar4 == '\0') {
      uVar1 = *(undefined4 *)((longlong)plVar8 + 100);
      puVar13 = (undefined8 *)FText::ToString(plVar8 + 6);
      if (*(int *)(puVar13 + 1) == 0) {
        puVar20 = &DAT_143f3eda8;
      }
      else {
        puVar20 = (undefined2 *)*puVar13;
      }
      FString::PrintfImpl(&local_78,L"%s [%d/%d]",puVar20,uVar1,uVar5);
      puVar18 = local_68;
    }
    else {
      if (lVar9 == 0) {
LAB_1410d35fc:
        uVar15 = FText::FText(local_68,plVar8 + 6);
        FUN_142f0e010(param_2,uVar15);
        return;
      }
      puVar13 = (undefined8 *)FText::ToString(lVar9 + 0x30);
      puVar20 = &DAT_143f3eda8;
      if (*(int *)(puVar13 + 1) == 0) {
        puVar22 = &DAT_143f3eda8;
      }
      else {
        puVar22 = (undefined2 *)*puVar13;
      }
      puVar13 = (undefined8 *)FText::ToString(plVar8 + 6);
      if (*(int *)(puVar13 + 1) != 0) {
        puVar20 = (undefined2 *)*puVar13;
      }
      FString::PrintfImpl(&local_78,L"%s [%s]",puVar20,puVar22);
      puVar18 = local_68;
    }
    goto LAB_1410d2fa3;
  case 0xd:
    lVar9 = FWeakObjectPtr::Get(param_2 + 0x2ec);
    if (lVar9 != 0) {
      lVar10 = UUGJournalKey::GetPrivateStaticClass();
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
        lVar10 = FWeakObjectPtr::Get(param_2 + 0x2f4);
        plVar8 = plVar12;
        if (lVar10 == 0) {
LAB_1410d28cf:
          plVar11 = plVar12;
        }
        else {
          lVar7 = UUGStartScreenUW::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_1410d28cf;
          plVar8 = (longlong *)FWeakObjectPtr::Get(lVar10 + 0x2ec);
          if (plVar8 == (longlong *)0x0) {
LAB_1410d283b:
            plVar8 = plVar12;
          }
          else {
            lVar7 = UXSkinAnimationProfile::GetPrivateStaticClass();
            if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
                lVar7 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) goto LAB_1410d283b;
          }
          lVar10 = FWeakObjectPtr::Get(lVar10 + 0x2f4);
          if (lVar10 == 0) goto LAB_1410d28cf;
          lVar7 = UUGStartScreenUW::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((!bVar2) ||
             (plVar11 = (longlong *)FWeakObjectPtr::Get(lVar10 + 0x2ec), plVar11 == (longlong *)0x0)
             ) goto LAB_1410d28cf;
          lVar10 = UUGLoadoutBarUW::GetPrivateStaticClass();
          if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
              lVar10 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_1410d28cf;
        }
        if ((plVar8 == (longlong *)0x0) || (plVar11 == (longlong *)0x0))
        goto switchD_1410d25f2_caseD_8;
        cVar4 = FUN_1409ae0e0(*(undefined8 *)(param_1 + 0x348),plVar11[2],lVar9,plVar8);
        local_78 = (undefined2 *)CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
        uStack_70 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
        FUN_142130490(param_2,&local_78);
        puVar13 = (undefined8 *)FText::ToString(lVar9 + 0x30);
        if (*(int *)(puVar13 + 1) == 0) {
          puVar20 = &DAT_143f3eda8;
        }
        else {
          puVar20 = (undefined2 *)*puVar13;
        }
        puVar21 = &DAT_14468f334;
        if (cVar4 != '\0') {
          puVar21 = &DAT_144693468;
        }
        FString::PrintfImpl(&local_78,L"%s%s",puVar21,puVar20);
        puVar18 = local_68;
        goto LAB_1410d2fa3;
      }
    }
    local_78 = (undefined2 *)CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
    uStack_70 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
    FUN_142130490(param_2,&local_78);
    local_88 = (undefined2 *)0x0;
    uStack_80 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    uVar15 = 0x18;
    pwVar19 = L"-- CLEAR --";
    break;
  case 0xe:
    local_78 = (undefined2 *)CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
    uStack_70 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
    FUN_142130490(param_2,&local_78);
    local_88 = (undefined2 *)0x0;
    uStack_80 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    uVar15 = 0x22;
    pwVar19 = L"Items: Abilities";
    break;
  case 0xf:
    local_78 = (undefined2 *)CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
    uStack_70 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
    FUN_142130490(param_2,&local_78);
    local_88 = (undefined2 *)0x0;
    uStack_80 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    pwVar19 = L"Items: Augments";
LAB_1410d262a:
    uVar15 = 0x20;
    break;
  case 0x10:
    lVar9 = FWeakObjectPtr::Get(param_2 + 0x2ec);
    if (lVar9 != 0) {
      lVar10 = FUN_1414a98a0();
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
        local_78 = (undefined2 *)CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
        uStack_70 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
        FUN_142130490(param_2,&local_78);
        puVar13 = (undefined8 *)FText::ToString(lVar9 + 0x30);
        if (*(int *)(puVar13 + 1) == 0) {
          puVar20 = &DAT_143f3eda8;
        }
        else {
          puVar20 = (undefined2 *)*puVar13;
        }
        FString::PrintfImpl(&local_78,L"%s Augments",puVar20);
        puVar18 = local_68;
        goto LAB_1410d2fa3;
      }
    }
switchD_1410d25f2_caseD_8:
    local_78 = (undefined2 *)0x0;
    uStack_70 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"-- ERROR --",0x18);
    puVar18 = local_50;
LAB_1410d2fa3:
    uVar15 = FText::FromString(puVar18,&local_78);
    FUN_142f0e010(param_2,uVar15);
    puVar20 = local_78;
    goto LAB_1410d2fbb;
  case 0x11:
    plVar8 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x2ec);
    if (plVar8 != (longlong *)0x0) {
      lVar9 = FUN_1414adde0();
      if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar9 = FWeakObjectPtr::Get(param_2 + 0x2f4);
        if (lVar9 == 0) {
LAB_1410d2d0c:
          plVar11 = plVar12;
        }
        else {
          lVar10 = UUGStartScreenUW::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((!bVar2) ||
             (plVar11 = (longlong *)FWeakObjectPtr::Get(lVar9 + 0x2ec), plVar11 == (longlong *)0x0))
          goto LAB_1410d2d0c;
          lVar9 = FUN_1414a98a0();
          if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
              != lVar9 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_1410d2d0c;
        }
        if (*(longlong *)(param_1 + 0x350) != 0) {
          plVar12 = (longlong *)FUN_140e50d60(*(longlong *)(param_1 + 0x350),plVar11);
        }
        puVar13 = (undefined8 *)&DAT_1464aa700;
        if (plVar12 != plVar8) {
          puVar13 = (undefined8 *)&DAT_1464aa6c0;
        }
        local_78 = (undefined2 *)*puVar13;
        uStack_70 = puVar13[1];
        FUN_142130490(param_2,&local_78);
        puVar13 = (undefined8 *)FText::ToString(plVar8 + 6);
        if (*(int *)(puVar13 + 1) == 0) {
          puVar20 = &DAT_143f3eda8;
        }
        else {
          puVar20 = (undefined2 *)*puVar13;
        }
        puVar21 = &DAT_14468f3f4;
        if (plVar12 == plVar8) {
          puVar21 = &DAT_1446934e0;
        }
        FString::PrintfImpl(&local_78,L"%s%s",puVar21,puVar20);
        puVar18 = local_68;
        goto LAB_1410d2fa3;
      }
    }
    local_78 = (undefined2 *)CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
    uStack_70 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
    FUN_142130490(param_2,&local_78);
    local_88 = (undefined2 *)0x0;
    uStack_80 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    uVar15 = 0x18;
    pwVar19 = L"-- CLEAR --";
  }
  FGenericPlatformString::Memcpy(local_88,pwVar19,uVar15);
  puVar18 = local_68;
LAB_1410d263d:
  uVar15 = FText::FromString(puVar18,&local_88);
  FUN_142f0e010(param_2,uVar15);
  puVar20 = local_88;
LAB_1410d2fbb:
  if (puVar20 != (undefined2 *)0x0) {
LAB_1410d2fc0:
    FMemory::Free(puVar20);
  }
  return;
  while (plVar17 = (longlong *)plVar17[6], plVar14 = plVar12, plVar17 != (longlong *)0x0) {
LAB_1410d30c2:
    plVar14 = plVar11;
    if (plVar17 == plVar16) break;
  }
LAB_1410d30d3:
  plVar17 = (longlong *)FUN_14144bcb0();
  plVar11 = plVar8;
  do {
    plVar16 = plVar8;
    if (plVar11 == plVar17) break;
    plVar11 = (longlong *)plVar11[6];
    plVar16 = plVar12;
  } while (plVar11 != (longlong *)0x0);
  lVar9 = plVar8[0x1f];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar9 = plVar8[0x1f];
  }
  cVar4 = FText::IsEmptyOrWhitespace(lVar9 + 0x40);
  if (cVar4 == '\0') {
    lVar9 = plVar8[0x1f];
    bVar3 = true;
    bVar2 = false;
    if (lVar9 == 0) {
      (**(code **)(*plVar8 + 0x368))(plVar8);
      lVar9 = plVar8[0x1f];
    }
    puVar13 = (undefined8 *)FText::ToString(lVar9 + 0x40);
    local_78 = (undefined2 *)0x0;
    iVar6 = *(int *)(puVar13 + 1);
    _Src = (void *)*puVar13;
    uStack_70 = CONCAT44(uStack_70._4_4_,iVar6);
    if (iVar6 == 0) {
      uStack_70 = 0;
      puVar13 = &local_78;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,iVar6,0);
      _guard_xfg_dispatch_icall_nop(local_78,_Src,(longlong)iVar6 * 2);
      puVar13 = &local_78;
    }
  }
  else {
    bVar3 = false;
    bVar2 = true;
    plVar11 = (longlong *)FUN_14144bcb0();
    plVar12 = plVar8;
    do {
      if (plVar12 == plVar11) {
        local_res10 = (longlong *)plVar8[3];
        FName::ToString(&local_res10,&local_88);
        goto LAB_1410d31f4;
      }
      plVar12 = (longlong *)plVar12[6];
    } while (plVar12 != (longlong *)0x0);
    local_88 = (undefined2 *)0x0;
    uStack_80 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    FGenericPlatformString::Memcpy(local_88,&DAT_143f3edc8,10);
LAB_1410d31f4:
    puVar13 = &local_88;
  }
  puVar20 = (undefined2 *)*puVar13;
  *puVar13 = 0;
  iVar6 = *(int *)(puVar13 + 1);
  puVar13[1] = 0;
  if ((bVar2) && (local_88 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  if ((bVar3) && (local_78 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  puVar22 = &DAT_143f3eda8;
  if (iVar6 != 0) {
    puVar22 = puVar20;
  }
  puVar21 = &DAT_14468f43c;
  if (plVar14 == plVar16) {
    puVar21 = &DAT_144693570;
  }
  FString::PrintfImpl(&local_78,L"%s%s",puVar21,puVar22);
  uVar15 = FText::FromString(local_68,&local_78);
  FUN_142f0e010(param_2,uVar15);
  if (local_78 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (puVar20 == (undefined2 *)0x0) {
    return;
  }
  goto LAB_1410d2fc0;
}



// FUNCTION 1410d37d0 FUN_1410d37d0 body=1384 status=ok
// SIG undefined FUN_1410d37d0(void)

void FUN_1410d37d0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong local_c8 [4];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  int local_58;
  undefined8 local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar7 = FUN_1404b03b0();
  FUN_1410eba70(param_1,uVar7);
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + 0x2e8);
    if (iVar3 == 1) {
      local_c8[3] = 0x13;
      local_c8[2] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8 + 2,0);
      FGenericPlatformString::Memcpy(local_c8[2],L"Add a skill point.",0x26);
      uVar7 = FText::FromString(local_28,local_c8 + 2);
      FUN_1410eba70(param_1,uVar7);
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_20 + 1;
        lVar8 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      if (local_c8[2] != 0) {
        FMemory::Free();
      }
    }
    else if (iVar3 == 3) {
      local_c8[1] = 0x32;
      local_c8[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8,0);
      FGenericPlatformString::Memcpy
                (local_c8[0],L"Reset the skill tree and refund all spent points.",100);
      uVar7 = FText::FromString(local_40,local_c8);
      FUN_1410eba70(param_1,uVar7);
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_38 + 1;
        lVar8 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      if (local_c8[0] != 0) {
        FMemory::Free();
      }
    }
    else if (iVar3 == 6) {
      lVar8 = FWeakObjectPtr::Get(param_2 + 0x2ec);
      if (lVar8 != 0) {
        lVar9 = FUN_14144ec10();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          lVar9 = FUN_14144ecc0();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            plVar11 = *(longlong **)(lVar8 + 0x88);
            if (plVar11 != (longlong *)0x0) {
              lVar9 = plVar11[0x1f];
              if (lVar9 == 0) {
                (**(code **)(*plVar11 + 0x368))(plVar11);
                lVar9 = plVar11[0x1f];
                if (lVar9 == 0) {
                  return;
                }
              }
              FText::FText(local_a8);
              lVar10 = FUN_1414425d0();
              if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) {
                local_48 = 0;
                cVar5 = FUN_1409a7560(*(undefined8 *)(param_1 + 0x358),lVar8,local_60);
                iVar3 = 0;
                if (cVar5 != '\0') {
                  iVar3 = local_58;
                }
                iVar6 = FUN_1409aa830(lVar8);
                FUN_1409a0f80(lVar9,*(undefined8 *)(param_1 + 0x340),iVar3 + 1,1,iVar3 + 1 <= iVar6,
                              local_a8);
              }
              else {
                lVar8 = UUGLoadoutBarUW::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (bVar4) {
                  FUN_1409a07f0(lVar9,*(undefined8 *)(param_1 + 0x340),1,1,local_a8);
                }
                else {
                  FText::operator=(local_a8,lVar9 + 0x58);
                }
              }
              FUN_1410eba70(param_1,local_a8);
              if (local_a0 != (longlong *)0x0) {
                LOCK();
                plVar11 = local_a0 + 1;
                lVar8 = *plVar11;
                *(int *)plVar11 = (int)*plVar11 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
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
            }
          }
          else {
            lVar9 = FUN_14144ee20();
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              lVar8 = *(longlong *)(lVar8 + 0x88);
              if (lVar8 == 0) {
                return;
              }
              FText::FText(local_90);
              FUN_1409a0840(lVar8,*(undefined8 *)(param_1 + 0x340),1,1,local_90);
              FUN_1410eba70(param_1,local_90);
              plVar11 = local_88;
            }
            else {
              lVar9 = FUN_14144ef80();
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (!bVar4) {
                return;
              }
              lVar8 = *(longlong *)(lVar8 + 0x88);
              if (lVar8 == 0) {
                return;
              }
              FText::FText(local_78);
              FUN_140e45b10(lVar8,*(undefined8 *)(param_1 + 0x340),1,1,local_78);
              FUN_1410eba70(param_1,local_78);
              plVar11 = local_70;
            }
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar11 + 1;
              lVar8 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
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
          }
        }
      }
    }
    else if ((iVar3 == 0xd) && (lVar8 = FWeakObjectPtr::Get(param_2 + 0x2ec), lVar8 != 0)) {
      lVar9 = UUGJournalKey::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        FUN_1410eba70(param_1,lVar8 + 0x48);
      }
    }
  }
  return;
}



// FUNCTION 1410d3d40 FUN_1410d3d40 body=148 status=ok
// SIG undefined FUN_1410d3d40(void)

void FUN_1410d3d40(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_28 = 0;
  local_18 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x20,local_48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144213c48;
    puVar2[1] = param_1;
    *(undefined4 *)(puVar2 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar2 + 0x14) = local_resc;
    *(undefined4 *)(puVar2 + 3) = uVar1;
  }
  local_58[0] = &LAB_1410c53d0;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 1410d3de0 FUN_1410d3de0 body=302 status=ok
// SIG undefined FUN_1410d3de0(void)

void FUN_1410d3de0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  short local_res8;
  
  iVar3 = *(int *)(param_2 + 8);
  cVar7 = FWeakObjectPtr::IsValid(param_1 + 0x28);
  if (cVar7 != '\0') {
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x28);
    lVar8 = lVar5 + 0xc50;
    if (*(char *)(param_1 + 0x40) == '\0') {
      if ((iVar3 < 0) || (*(int *)(param_1 + 0x60) <= iVar3)) {
        bVar2 = *(byte *)(param_1 + 0x41);
        local_res8 = (ushort)bVar2 << 8;
        uVar9 = FUN_1410cc440(lVar8,local_res8);
      }
      else {
        bVar2 = *(byte *)(param_1 + 0x41);
        uVar9 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar3 * 8);
      }
      FUN_1410ecc90(lVar8,bVar2,uVar9);
    }
    else if ((-1 < iVar3) && (iVar3 < *(int *)(param_1 + 0x50))) {
      lVar4 = *(longlong *)(param_1 + 0x48);
      lVar1 = (longlong)iVar3 * 8;
      lVar6 = FUN_1410cac90(lVar8);
      if (*(longlong *)(lVar1 + lVar4) == lVar6) {
        FUN_140e6bf90(lVar5 + 0xdd8,lVar8);
      }
      else {
        lVar8 = *(longlong *)(param_1 + 0x48);
        uVar9 = FWeakObjectPtr::Get(param_1 + 0x28);
        lVar8 = FUN_1410cb580(uVar9,*(undefined8 *)(lVar1 + lVar8));
        if (lVar8 != 0) {
          FUN_140e6bf90(lVar5 + 0xdd8,lVar8 + 0x30);
        }
      }
    }
    uVar9 = FWeakObjectPtr::Get(param_1 + 0x28);
    FUN_1410cdb90(uVar9);
    lVar8 = FWeakObjectPtr::Get(param_1 + 0x28);
    LOCK();
    *(undefined4 *)(lVar8 + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1410d3f10 FUN_1410d3f10 body=315 status=ok
// SIG undefined FUN_1410d3f10(void)

void FUN_1410d3f10(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5cc);
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
    if (bVar1) {
      FUN_140bf5100(lVar3);
    }
  }
  plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x58c);
  if (plVar5 != (longlong *)0x0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = FUN_140d01b90(plVar5);
      if (cVar2 == '\0') {
        lVar3 = (**(code **)(*plVar5 + 0xfa8))(plVar5);
        if (lVar3 != 0) {
          lVar4 = FUN_140f9aee0(param_1);
          if (lVar4 != 0) {
            cVar2 = FUN_140bca8a0(lVar4);
            if (cVar2 != '\0') {
              FUN_1410f5250(param_1);
              return;
            }
            FUN_14145d6f0(plVar5,0);
            FUN_140d15d70(plVar5);
            FUN_142ee3cb0(lVar3);
            return;
          }
        }
      }
    }
  }
  FUN_142eb3990(param_1);
  return;
}



// FUNCTION 1410d4050 FUN_1410d4050 body=341 status=ok
// SIG undefined FUN_1410d4050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410d4050(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  undefined4 local_c8 [4];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_c8[0] = 0xffffffff;
  uVar3 = 0xffffffff;
  if (param_2 != 0) {
    FUN_14170c210(local_c8);
    uVar3 = local_c8[0];
  }
  local_c8[0] = 0xffffffff;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144266c70;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = uVar3;
    uVar3 = 0xffffffff;
  }
  local_b8[0] = &LAB_1410c5620;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
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
  FUN_1416f8340(uVar3);
  FUN_1416f8340(local_c8[0]);
  return;
}



// FUNCTION 1410d41b0 FUN_1410d41b0 body=156 status=ok
// SIG undefined FUN_1410d41b0(void)

void FUN_1410d41b0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_38 = 0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605c80;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
    *(undefined4 *)(puVar1 + 3) = param_2;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = param_4;
  }
  local_68[0] = &LAB_1410c54f0;
  FUN_14204c280(local_68);
  return;
}



// FUNCTION 1410d4250 FUN_1410d4250 body=992 status=ok
// SIG undefined FUN_1410d4250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410d4250(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auStack_188 [32];
  undefined4 *local_168;
  ulonglong *puStack_160;
  undefined8 local_158;
  longlong local_150;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [16];
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  if (param_2 != 0) {
    local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_188;
    lVar7 = FUN_142f2ce20();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
         ) != lVar7 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      iVar3 = *(int *)(param_2 + 0x2e0);
      if ((iVar3 < 0) || (*(int *)(param_1 + 0x2e0) <= iVar3)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        lVar7 = *(longlong *)(param_1 + 0x2d8) + (longlong)iVar3 * 0x48;
        if (*(longlong **)(param_1 + 0x2c0) != (longlong *)0x0) {
          lVar4 = **(longlong **)(param_1 + 0x2c0);
          uVar8 = FText::FText(local_c8,lVar7 + 8);
          (**(code **)(lVar4 + 0x2d0))(*(undefined8 *)(param_1 + 0x2c0),uVar8);
        }
        if (*(longlong **)(param_1 + 0x2c8) != (longlong *)0x0) {
          lVar4 = **(longlong **)(param_1 + 0x2c8);
          uVar8 = FText::FText(local_b0,lVar7 + 0x20);
          (**(code **)(lVar4 + 0x2d0))(*(undefined8 *)(param_1 + 0x2c8),uVar8);
        }
        if (*(longlong *)(param_1 + 0x2d0) != 0) {
          FText::FText(local_148);
          if (1 < *(int *)(lVar7 + 0x40)) {
            lVar7 = FText::FromString(local_98,lVar7 + 0x38);
            uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                              (local_f0,L"Command: \'{0}\'",L"DebugMenu",L"ExecCommandFormatString")
            ;
            puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_d8,uVar8);
            local_68[0] = 4;
            FText::FText(local_58,lVar7);
            local_158 = *puVar9;
            local_168 = local_68;
            puStack_160 = local_38;
            local_150 = puVar9[1];
            local_40 = '\x01';
            if (local_150 != 0) {
              LOCK();
              *(int *)(local_150 + 8) = *(int *)(local_150 + 8) + 1;
              UNLOCK();
            }
            uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                    TArray<FFormatArgumentValue,FDefaultAllocator>(local_130,&local_168);
            uVar8 = FText::Format(local_108,&local_158,uVar8);
            FText::FText(local_120,uVar8);
            if (local_100 != (longlong *)0x0) {
              LOCK();
              plVar5 = local_100 + 1;
              lVar4 = *plVar5;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
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
            TArray<FFormatArgumentValue,FDefaultAllocator>::
            ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_130);
            if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
              LOCK();
              plVar5 = local_50 + 1;
              lVar4 = *plVar5;
              *(int *)plVar5 = (int)*plVar5 + -1;
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
            plVar5 = (longlong *)puVar9[1];
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar5 + 1;
              lVar4 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
            plVar5 = *(longlong **)(lVar7 + 8);
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar5 + 1;
              lVar7 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5,1);
                }
              }
            }
            FText::operator=(local_148,local_120);
            if (local_118 != (longlong *)0x0) {
              LOCK();
              plVar5 = local_118 + 1;
              lVar7 = *plVar5;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
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
            if (local_e8 != (longlong *)0x0) {
              LOCK();
              plVar5 = local_e8 + 1;
              lVar7 = *plVar5;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
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
          }
          lVar7 = **(longlong **)(param_1 + 0x2d0);
          uVar8 = FText::FText(local_80,local_148);
          (**(code **)(lVar7 + 0x2d0))(*(undefined8 *)(param_1 + 0x2d0),uVar8);
          if (local_140 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_140 + 1;
            lVar7 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
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
        }
      }
    }
  }
  return;
}



// FUNCTION 1410d4630 FUN_1410d4630 body=1318 status=ok
// SIG undefined FUN_1410d4630(void)

void FUN_1410d4630(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x328);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x330);
  *(undefined8 *)(param_1 + 0x328) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x338);
  *(undefined8 *)(param_1 + 0x330) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x368);
  *(undefined8 *)(param_1 + 0x338) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x370);
  *(undefined8 *)(param_1 + 0x368) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x378);
  *(undefined8 *)(param_1 + 0x370) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x380);
  *(undefined8 *)(param_1 + 0x378) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x388);
  *(undefined8 *)(param_1 + 0x380) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x390);
  *(undefined8 *)(param_1 + 0x388) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x398);
  *(undefined8 *)(param_1 + 0x390) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x3a0);
  *(undefined8 *)(param_1 + 0x398) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x3a8);
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x3b8);
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x3c0);
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x3c8);
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  FUN_142ec05c0(param_1);
  return;
}



// FUNCTION 1410d4b60 FUN_1410d4b60 body=106 status=ok
// SIG undefined FUN_1410d4b60(void)

void FUN_1410d4b60(longlong param_1)

{
  FUN_142f06340(param_1,param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x170) = 0;
  FUN_142f06340(param_1,param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x178) = 0;
  FUN_142f06340(param_1,param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x180) = 0;
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 1410d4bd0 FUN_1410d4bd0 body=120 status=ok
// SIG undefined FUN_1410d4bd0(void)

void FUN_1410d4bd0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x308);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x308) = 0;
  FUN_142ec05c0(param_1);
  return;
}



// FUNCTION 1410d4c50 FUN_1410d4c50 body=209 status=ok
// SIG undefined FUN_1410d4c50(void)

void FUN_1410d4c50(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x178);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x178) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x170) = 0;
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 1410d4d30 FUN_1410d4d30 body=320 status=ok
// SIG undefined FUN_1410d4d30(void)

void FUN_1410d4d30(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (lVar3 != 0) {
    lVar2 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar3 = FUN_140f9aee0(lVar3), lVar3 != 0)) {
      lVar2 = *(longlong *)(param_1 + 0x1c8);
      lVar3 = FUN_140bb7440(lVar3);
      iVar5 = 0;
      if (0 < *(int *)(lVar3 + 0xe0)) {
        lVar6 = 0;
        do {
          plVar7 = (longlong *)(*(longlong *)(lVar3 + 0xd8) + lVar6);
          if ((((int)plVar7[1] != 0) && (plVar4 = (longlong *)*plVar7, plVar4 != (longlong *)0x0))
             && (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8),
                *plVar4 == lVar2)) {
            if (((int)plVar7[1] != 0) && (plVar4 = (longlong *)*plVar7, plVar4 != (longlong *)0x0))
            {
              (**(code **)(*plVar4 + 0x28))(plVar4,0);
              if (*plVar7 != 0) {
                lVar2 = FMemory::Realloc(*plVar7,0,0);
                *plVar7 = lVar2;
              }
              *(undefined4 *)(plVar7 + 1) = 0;
            }
            break;
          }
          iVar5 = iVar5 + 1;
          lVar6 = lVar6 + 0x10;
        } while (iVar5 < *(int *)(lVar3 + 0xe0));
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar3 + 0xd8,0);
      *(undefined8 *)(param_1 + 0x1c8) = 0;
    }
  }
  return;
}



// FUNCTION 1410d4e70 FUN_1410d4e70 body=2246 status=ok
// SIG undefined FUN_1410d4e70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410d4e70(longlong *param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  wint_t wVar4;
  wint_t wVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  undefined2 *puVar13;
  uint uVar14;
  wint_t *pwVar15;
  int iVar16;
  undefined2 *puVar17;
  code *pcVar18;
  longlong *plVar19;
  wchar_t *pwVar20;
  wchar_t *pwVar21;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8;
  uint local_1d0;
  undefined1 local_1c8;
  longlong *local_1b8;
  int local_1b0;
  code *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong *local_198;
  undefined8 local_190;
  wchar_t *local_188;
  int local_180;
  undefined2 *local_178;
  ulonglong local_170;
  wchar_t *local_168;
  int local_160;
  undefined4 local_15c;
  longlong local_158;
  longlong *plStack_150;
  undefined2 *local_148;
  int local_140;
  longlong local_138;
  longlong *plStack_130;
  longlong local_128;
  longlong *plStack_120;
  longlong local_118;
  longlong *plStack_110;
  longlong local_108 [2];
  longlong local_f8 [2];
  undefined1 local_e8 [8];
  longlong local_e0 [2];
  longlong *local_d0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  *(undefined1 *)(param_1 + 99) = 0;
  iVar12 = -1;
  if (param_2 != 0) {
    lVar6 = FUN_142f2ce20();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      iVar12 = *(int *)(param_2 + 0x2e0);
    }
  }
  if ((iVar12 < 0) || ((int)param_1[0x62] <= iVar12)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  local_1a8 = (code *)FUN_140d3a420(uVar7);
  if (local_1a8 == (code *)0x0) {
    return;
  }
  if (param_1[0x59] == 0) {
    return;
  }
  FName::ToString(param_1[0x61] + (longlong)iVar12 * 8,&local_188);
  puVar8 = (undefined8 *)FPaths::ProjectDir(local_e0);
  if (*(int *)(puVar8 + 1) == 0) {
    puVar13 = &DAT_143f3eda8;
  }
  else {
    puVar13 = (undefined2 *)*puVar8;
  }
  FString::PrintfImpl(local_f8,L"%sDemoSaves/%s.sav",puVar13);
  if (local_e0[0] != 0) {
    FMemory::Free();
  }
  FString::PrintfImpl(local_108,&DAT_14469b530,iVar12 + 1);
  if (local_180 == 0) {
    pwVar20 = L"";
    iVar12 = 0;
  }
  else {
    iVar12 = local_180 + -1;
    pwVar20 = local_188;
  }
  local_178 = (undefined2 *)0x0;
  local_170 = 0;
  lVar6 = (longlong)iVar12;
  if (7 < iVar12) {
    iVar12 = 7;
  }
  pwVar20 = pwVar20 + (lVar6 - iVar12);
  puVar13 = (undefined2 *)0x0;
  if ((pwVar20 != (wchar_t *)0x0) && (*pwVar20 != L'\0')) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (pwVar20[lVar6] != L'\0');
    uVar14 = (int)lVar6 + 1;
    local_170 = (ulonglong)uVar14;
    uVar2 = uVar14;
    if (0 < (int)uVar14) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
      uVar2 = (uint)local_170;
    }
    puVar17 = local_178;
    FGenericPlatformString::Memcpy(local_178,pwVar20,(longlong)(int)uVar14 * 2);
    puVar13 = puVar17;
    if (uVar2 != 0) goto LAB_1410d5068;
  }
  puVar17 = &DAT_143f3eda8;
LAB_1410d5068:
  pwVar15 = &DAT_14469b560;
  do {
    wVar4 = *(wint_t *)((longlong)pwVar15 + (longlong)(puVar17 + -0xa234dab0));
    if ((wVar4 == 0) && (*pwVar15 == 0)) {
      iVar12 = 0;
      goto LAB_1410d50b8;
    }
    if (wVar4 != *pwVar15) {
      wVar4 = towlower(wVar4);
      wVar5 = towlower(*pwVar15);
      if (wVar4 != wVar5) break;
    }
    pwVar15 = pwVar15 + 1;
  } while( true );
  iVar12 = (uint)wVar4 - (uint)wVar5;
LAB_1410d50b8:
  if (puVar13 != (undefined2 *)0x0) {
    FMemory::Free(puVar13);
  }
  if (iVar12 == 0) {
    *(undefined1 *)(param_1 + 99) = 1;
  }
  FUN_14167d0d0(&local_148);
  local_198 = (longlong *)0x0;
  local_190 = 0;
  plVar9 = (longlong *)FUN_1415c3d50();
  local_1c8 = 1;
  local_1d0 = local_1d0 & 0xffffff00;
  puVar13 = &DAT_143f3eda8;
  if (local_140 != 0) {
    puVar13 = local_148;
  }
  local_1d8 = 1;
  (**(code **)(*plVar9 + 0x80))(plVar9,&local_198,puVar13,L"*.fod2");
  plVar19 = local_198 + (longlong)(int)local_190 * 2;
  for (plVar9 = local_198; plVar9 != plVar19; plVar9 = plVar9 + 2) {
    plVar10 = (longlong *)FUN_1415c3d50();
    if ((int)plVar9[1] == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*plVar9;
    }
    local_1d8 = 0;
    (**(code **)(*plVar10 + 0x30))(plVar10,puVar13,0,1);
  }
  FUN_142dcf3a0(param_1[0x59],&local_158);
  if (local_158 != 0) {
    if (local_180 == 0) {
      pwVar20 = L"";
      iVar12 = 0;
    }
    else {
      iVar12 = local_180 + -1;
      pwVar20 = local_188;
    }
    local_168 = (wchar_t *)0x0;
    if (6 < iVar12) {
      iVar12 = 6;
    }
    local_15c = 0;
    iVar16 = iVar12 + 1;
    if (iVar12 == 0) {
      iVar16 = 0;
    }
    pwVar21 = local_168;
    local_160 = iVar16;
    if ((0 < iVar16) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0), iVar16 = local_160,
       pwVar21 = local_168, 0 < local_160)) {
      wcsncpy(local_168,pwVar20,(longlong)iVar12);
      pwVar21[iVar12] = L'\0';
    }
    pwVar15 = &DAT_14469b5b8;
    pwVar20 = L"";
    if (iVar16 != 0) {
      pwVar20 = pwVar21;
    }
    do {
      wVar4 = *(wint_t *)((longlong)pwVar15 + (longlong)(pwVar20 + -0xa234dadc));
      iVar12 = 0;
      if ((wVar4 == 0) && (*pwVar15 == 0)) goto LAB_1410d523d;
      if (wVar4 != *pwVar15) {
        wVar4 = towlower(wVar4);
        wVar5 = towlower(*pwVar15);
        if (wVar4 != wVar5) goto LAB_1410d5235;
      }
      pwVar15 = pwVar15 + 1;
    } while( true );
  }
  goto LAB_1410d5655;
LAB_1410d5235:
  iVar12 = (uint)wVar4 - (uint)wVar5;
LAB_1410d523d:
  if (pwVar21 != (wchar_t *)0x0) {
    FMemory::Free(pwVar21);
  }
  pcVar18 = local_1a8;
  if (iVar12 == 0) {
    lVar6 = param_1[0x59];
    if (lVar6 == 0) {
LAB_1410d5294:
      lVar6 = 0;
    }
    else {
      lVar11 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_1410d5294;
    }
    pcVar18 = local_1a8;
    local_138 = local_158;
    plStack_130 = plStack_150;
    if (plStack_150 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
      UNLOCK();
    }
    FUN_140d29080(local_1a8,&local_138);
    plVar9 = plStack_130;
    if (plStack_130 != (longlong *)0x0) {
      LOCK();
      plVar19 = plStack_130 + 1;
      lVar11 = *plVar19;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_130)(plStack_130);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    if (lVar6 != 0) {
      FUN_140d02500(lVar6);
      local_128 = local_158;
      plStack_120 = plStack_150;
      if (plStack_150 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
        UNLOCK();
      }
      uVar7 = FUN_140cff230(lVar6);
      FUN_140d4c4a0(pcVar18,&local_128,uVar7);
      plVar9 = plStack_120;
      if (plStack_120 != (longlong *)0x0) {
        LOCK();
        plVar19 = plStack_120 + 1;
        lVar6 = *plVar19;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_120)(plStack_120);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
  }
  uStack_1a0 = 0;
  local_1b8 = (longlong *)0x0;
  local_1a8 = FUN_1410df710;
  plVar9 = (longlong *)FMemory::Realloc(0,0x30);
  local_1b0 = 3;
  local_1b8 = plVar9;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_FUN_1444f8208;
    FWeakObjectPtr::operator=(plVar9 + 1,param_1);
    plVar9[2] = (longlong)local_1a8;
    plVar9[3] = CONCAT44(uStack_19c,uStack_1a0);
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar9[5] = lVar6;
    *plVar9 = (longlong)&PTR_FUN_1444f8250;
  }
  plVar9 = (longlong *)(**(code **)(*(longlong *)pcVar18 + 0x120))(pcVar18,local_e8,&local_1b8);
  param_1[0x60] = *plVar9;
  if (local_1b0 == 0) {
LAB_1410d544c:
    if (local_1b8 != (longlong *)0x0) {
      FMemory::Free(local_1b8);
    }
  }
  else if (local_1b8 != (longlong *)0x0) {
    (**(code **)(*local_1b8 + 0x28))(local_1b8,0);
    if (local_1b8 != (longlong *)0x0) {
      local_1b8 = (longlong *)FMemory::Realloc(local_1b8,0,0);
    }
    local_1b0 = 0;
    goto LAB_1410d544c;
  }
  local_118 = local_158;
  plStack_110 = plStack_150;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
    UNLOCK();
  }
  FUN_140d46ef0(pcVar18,&local_118,local_108,local_f8);
  plVar9 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar19 = plStack_110 + 1;
    lVar6 = *plVar19;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar6 != 0) {
    (**(code **)(param_1[0x57] + 0x110))(param_1 + 0x57,1);
    uStack_1a0 = 0;
    local_1a8 = FUN_1410c63d0;
    lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar6 + 400) == 0) {
      uVar7 = *(undefined8 *)(lVar6 + 0x3f8);
    }
    else {
      uVar7 = *(undefined8 *)(*(longlong *)(lVar6 + 400) + 0x90);
    }
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    local_d0 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar9 + 1,param_1);
      plVar9[2] = (longlong)local_1a8;
      plVar9[3] = CONCAT44(uStack_19c,uStack_1a0);
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar9[5] = lVar6;
      *plVar9 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_b8 = 0;
    local_b0 = 0;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x30))(plVar9,&local_b8);
    }
    FWeakObjectPtr::operator=(local_a8,0);
    local_1d0 = 0xbf800000;
    local_1d8 = 0;
    local_a0 = 0;
    local_68 = (longlong *)0x0;
    local_58 = 0;
    local_98 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar7,param_1 + 100,&local_b8,0x40a00000);
    if (local_58 != 0) {
      plVar19 = local_88;
      if (local_68 != (longlong *)0x0) {
        plVar19 = local_68;
      }
      if (plVar19 != (longlong *)0x0) {
        (**(code **)(*plVar19 + 0x10))(plVar19,0);
      }
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x28))(plVar9,0);
      local_d0 = (longlong *)FMemory::Realloc(plVar9,0,0);
      if (local_d0 != (longlong *)0x0) {
        FMemory::Free(local_d0);
      }
    }
  }
LAB_1410d5655:
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_150 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_150)(plStack_150);
      LOCK();
      piVar1 = (int *)((longlong)plStack_150 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plStack_150 + 8))(plStack_150,1);
      }
    }
  }
  plVar9 = local_198;
  for (iVar12 = (int)local_190; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_198 != (longlong *)0x0) {
    FMemory::Free(local_198);
  }
  if (local_148 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  if (local_f8[0] != 0) {
    FMemory::Free();
  }
  if (local_188 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410d5740 FUN_1410d5740 body=339 status=ok
// SIG undefined FUN_1410d5740(void)

void FUN_1410d5740(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  undefined1 local_res10 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_2 == 0) {
    return;
  }
  lVar4 = URemnantGameInstance::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
      != lVar4 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  lVar4 = FUN_1410cb700(param_1);
  if (lVar4 == 0) {
    return;
  }
  iVar1 = *(int *)(param_2 + 0x2d8);
  if ((iVar1 < 0) || (*(int *)(lVar4 + 0x38) <= iVar1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  lVar4 = (longlong)iVar1 * 0x30 + *(longlong *)(lVar4 + 0x30);
  plVar5 = (longlong *)FName::FName(local_res10,&DAT_14468f4f4,1);
  if (*(longlong *)(lVar4 + 0x18) != *plVar5) {
    plVar5 = (longlong *)FName::FName(local_res10,"Cancel",1);
    pwVar7 = L"Confirm";
    if (*(longlong *)(lVar4 + 0x18) != *plVar5) goto LAB_1410d582c;
  }
  pwVar7 = L"Cancel";
LAB_1410d582c:
  lVar2 = *param_1;
  local_18 = 0;
  local_10 = 0;
  puVar6 = (undefined8 *)FName::FName(local_res10,pwVar7,1);
  (**(code **)(lVar2 + 0x4e8))(param_1,*puVar6,&local_18);
  FUN_1410c9870(param_1 + 0x101,param_1,*(undefined8 *)(lVar4 + 0x18),param_3);
  if (*(char *)(lVar4 + 0x28) != '\0') {
    FUN_142eb3990(param_1);
  }
  return;
}



// FUNCTION 1410d58a0 FUN_1410d58a0 body=197 status=ok
// SIG undefined FUN_1410d58a0(void)

void FUN_1410d58a0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_18 [2];
  
  if (param_2 != 0) {
    lVar2 = FUN_142f2ce20();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(int *)(param_2 + 0x2e0) < 0) || ((int)param_1[0x5c] <= *(int *)(param_2 + 0x2e0))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (((bVar1) &&
          (plVar3 = (longlong *)(**(code **)(*param_1 + 0x2a0))(param_1), plVar3 != (longlong *)0x0)
          ) && ((**(code **)(*plVar3 + 0xd28))
                          (plVar3,local_18,
                           param_1[0x5b] + ((longlong)*(int *)(param_2 + 0x2e0) * 9 + 7) * 8,1),
               local_18[0] != 0)) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1410d5970 FUN_1410d5970 body=103 status=ok
// SIG undefined FUN_1410d5970(void)

ulonglong FUN_1410d5970(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_140cff230(*(undefined8 *)(param_1 + 0x7f0));
  if ((uVar3 != 0) && (param_2 != 0)) {
    iVar2 = FUN_142eb62f0(param_2);
    *(undefined1 *)(uVar3 + 0x28) = 1;
    *(bool *)(uVar3 + 0x20c) = 0 < iVar2;
    *(undefined1 *)(param_1 + 0x7d8) = 1;
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x588);
    *(uint *)(param_1 + 0x588) = 1;
    uVar3 = (ulonglong)uVar1;
    UNLOCK();
  }
  return uVar3;
}



// FUNCTION 1410d59e0 FUN_1410d59e0 body=104 status=ok
// SIG undefined FUN_1410d59e0(void)

void FUN_1410d59e0(longlong param_1,undefined1 param_2,undefined1 param_3)

{
  char cVar1;
  longlong *plVar2;
  
  FUN_142ef9600();
  cVar1 = UNF_CustomizationStatics::IsWeaponType(param_2);
  if (cVar1 != '\0') {
    cVar1 = UNF_CustomizationStatics::IsWeaponType(param_3);
    if ((cVar1 == '\0') && (*(longlong *)(param_1 + 0xb0) != 0)) {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0xb0) + 0x860);
      (**(code **)(*plVar2 + 0x18))(plVar2,0,0,0);
    }
  }
  return;
}



// FUNCTION 1410d5a50 FUN_1410d5a50 body=359 status=ok
// SIG undefined FUN_1410d5a50(void)

undefined4 FUN_1410d5a50(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  if (param_2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*param_2 + 8))(param_2);
    lVar4 = ALobbyBeaconPlayerState::GetPrivateStaticClass();
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
      FWeakObjectPtr::operator=(&local_res10,lVar3);
      lVar3 = param_1 + -0x4d8;
      FWeakObjectPtr::operator=(&local_res8,lVar3);
      local_48 = 0;
      local_38 = 0;
      puVar5 = (undefined8 *)FUN_140438ef0(0x20,local_68);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_FUN_144605c80;
        puVar5[1] = lVar3;
        *(undefined4 *)(puVar5 + 2) = local_res8;
        *(undefined4 *)((longlong)puVar5 + 0x14) = local_resc;
        *(undefined4 *)(puVar5 + 3) = local_res10;
        *(undefined4 *)((longlong)puVar5 + 0x1c) = local_res14;
      }
      local_78[0] = &LAB_1410c5720;
      FUN_14208c4f0(lVar3,local_78);
    }
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xb0) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 1410d5bc0 FUN_1410d5bc0 body=77 status=ok
// SIG undefined FUN_1410d5bc0(void)

void FUN_1410d5bc0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0xc4);
    lVar3 = FUN_140ec9a00(uVar1);
    if ((lVar3 != 0) && (param_2 != 0)) {
      FUN_141108790(lVar3);
    }
  }
  return;
}



// FUNCTION 1410d5c10 FUN_1410d5c10 body=987 status=ok
// SIG undefined FUN_1410d5c10(void)

void FUN_1410d5c10(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 uVar10;
  longlong local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88 [2];
  undefined1 local_78 [8];
  longlong local_70;
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  
  FUN_142ec1f90();
  local_b0 = 5;
  local_b8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
  uVar10 = 0;
  FGenericPlatformString::Convert<char,wchar_t>(local_b8,5,&DAT_1446958f4,5,0x3f);
  FUN_142088910(*(undefined8 *)(param_1 + 0x5f0),&local_b8);
  if (local_b8 != 0) {
    FMemory::Free();
  }
  local_98 = 0;
  local_90 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  FGenericPlatformString::Memcpy(local_98,L"PNL_BTSMedia_List",0x24);
  local_a8 = (longlong *)0x0;
  puVar2 = (undefined8 *)(param_1 + 0x6a0);
  local_a0 = 0;
  cVar5 = FUN_1410af720(param_1,puVar2,&local_98,0,CONCAT11(uVar10,6),&local_a8);
  plVar9 = local_a8;
  for (iVar8 = (int)local_a0; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free(local_a8);
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
  if (cVar5 == '\0') goto LAB_1410d5fc3;
  local_88[0] = 0;
  local_88[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_88,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_88[0],5,&DAT_144695924,5,0x3f);
  FUN_142088910(*puVar2,local_88);
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  uVar6 = FUN_142085870(*puVar2,local_60,L"textMediaTitle");
  FUN_142ede260(param_1 + 0x6b8,uVar6);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_58 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  uVar6 = FUN_142085870(*puVar2,local_50,L"textMenuTitle");
  FUN_142eddd40(local_78,uVar6);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_48 + 1;
    lVar4 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  if (local_70 == 0) {
LAB_1410d5ed4:
    if (local_68 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar8 == 1) && (local_68 != (longlong *)0x0)) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  else if (local_68 != (longlong *)0x0) {
    LOCK();
    iVar8 = (int)local_68[1];
    if (iVar8 == 0) {
      *(int *)(local_68 + 1) = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_40,L"Behind the Scenes",L"GFxBehindTheScenesMenu",
                         L"BehindTheScenesText");
      UMistDebugEntityScreen::InspectEntity(local_78,uVar6,1,0);
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_38 + 1;
        lVar4 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar1 = (int *)((longlong)local_38 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_38 + 8))(local_38,1);
          }
        }
      }
    }
    goto LAB_1410d5ed4;
  }
  lVar4 = *(longlong *)(param_1 + 0x4e8);
  if (lVar4 != 0) {
    lVar7 = FUN_141324ef0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar4 = *(longlong *)(lVar4 + 0xc0), lVar4 != 0)) {
      iVar8 = *(int *)(param_1 + 0x690);
      if ((iVar8 < 0) || (*(int *)(lVar4 + 0x38) <= iVar8)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar4 = *(longlong *)(lVar4 + 0x30) + (longlong)iVar8 * 0x28;
        FUN_1410e5230(*puVar2,lVar4);
        if ((0 < *(int *)(lVar4 + 0x20)) && (*(longlong *)(param_1 + 0x6a8) != 0)) {
          FUN_1412ec7f0(*(longlong *)(param_1 + 0x6a8),**(undefined8 **)(lVar4 + 0x18));
          UMistDebugEntityScreen::InspectEntity(param_1 + 0x6b8,*(longlong *)(lVar4 + 0x18) + 8,1,0)
          ;
        }
        FUN_1410f6300(*puVar2);
      }
    }
  }
LAB_1410d5fc3:
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return;
}



// FUNCTION 1410d5ff0 FUN_1410d5ff0 body=455 status=ok
// SIG undefined FUN_1410d5ff0(void)

void FUN_1410d5ff0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_78 [2];
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  local_78[1] = 0x10;
  local_78[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
  FGenericPlatformString::Memcpy(local_78[0],L"ExtPreviewImage",0x20);
  (**(code **)(*param_1 + 0x2a0))(param_1,local_78,0);
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  if (param_1[0x209] != 0) {
    lVar2 = FUN_1410ae560(param_1);
    if (lVar2 != 0) {
      FUN_140fca450(param_1[0x209],lVar2 + 0xe0,lVar2 + 0xc0);
    }
    cVar1 = FUN_140cb6290(param_1[0x209]);
    if (cVar1 != '\0') {
      if (param_1[0x213] != 0) {
        local_78[0] = 0;
        local_78[1] = 4;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
        FGenericPlatformString::Memcpy(local_78[0],&DAT_1446919d0,8);
        FUN_142088cf0(param_1[0x213],local_78);
        if (local_78[0] != 0) {
          FMemory::Free();
        }
      }
      if (param_1[0x215] != 0) {
        local_78[0] = 0;
        local_78[1] = 4;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
        FGenericPlatformString::Memcpy(local_78[0],&DAT_1446919d8,8);
        FUN_142088cf0(param_1[0x215],local_78);
        if (local_78[0] != 0) {
          FMemory::Free();
        }
      }
    }
  }
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_38 = 0;
  local_28 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1444f8920;
    puVar3[1] = param_1;
    *(undefined4 *)(puVar3 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar3 + 0x14) = local_resc;
  }
  local_68[0] = &LAB_1410c5570;
  FUN_14204c280(local_68);
  return;
}



// FUNCTION 1410d61c0 FUN_1410d61c0 body=327 status=ok
// SIG undefined FUN_1410d61c0(void)

void FUN_1410d61c0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_18;
  longlong *local_10;
  
  plVar2 = (longlong *)(param_1 + 0x768);
  if ((*plVar2 != 0) && (lVar7 = FStreamableHandle::GetLoadedAsset(), lVar7 != 0)) {
    lVar8 = UTexture2D::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      plVar3 = (longlong *)(param_1 + 0x6b0);
      iVar4 = *(int *)(param_1 + 0x6b8);
      lVar8 = (longlong)iVar4;
      *(int *)(param_1 + 0x6b8) = iVar4 + 1;
      if (*(int *)(param_1 + 0x6bc) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar4);
      }
      lVar5 = *plVar3;
      *(undefined8 *)(lVar5 + lVar8 * 0x10) = 0;
      *(undefined8 *)(lVar5 + 8 + lVar8 * 0x10) = 0;
      *(longlong *)(*plVar3 + lVar8 * 0x10) = lVar7;
      *(undefined4 *)(*plVar3 + 8 + lVar8 * 0x10) = *(undefined4 *)(param_1 + 0x798);
    }
  }
  *(int *)(param_1 + 0x798) = *(int *)(param_1 + 0x798) + 1;
  local_10 = (longlong *)0x0;
  if (plVar2 != &local_18) {
    *plVar2 = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x770,&local_10);
    plVar2 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_10 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  FUN_1410f57b0(param_1);
  return;
}



// FUNCTION 1410d6310 FUN_1410d6310 body=103 status=ok
// SIG undefined FUN_1410d6310(void)

ulonglong FUN_1410d6310(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_140cff230(*(undefined8 *)(param_1 + 0x7f0));
  if ((uVar3 != 0) && (param_2 != 0)) {
    iVar2 = FUN_142eb62f0(param_2);
    *(undefined1 *)(uVar3 + 0x28) = 1;
    *(bool *)(uVar3 + 0x1fb) = 0 < iVar2;
    *(undefined1 *)(param_1 + 0x7d8) = 1;
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x588);
    *(uint *)(param_1 + 0x588) = 1;
    uVar3 = (ulonglong)uVar1;
    UNLOCK();
  }
  return uVar3;
}



// FUNCTION 1410d6380 FUN_1410d6380 body=489 status=ok
// SIG undefined FUN_1410d6380(void)

void FUN_1410d6380(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_142ec5080();
  FUN_142ed2600(param_1,3);
  FUN_142ed2820(param_1,0,1);
  uVar3 = FUN_142085870(param_1,local_18,L"label");
  FUN_142ede260(param_1 + 0x310,uVar3);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_10 + 1;
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  local_40 = 0x14;
  local_48 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"PNL_Thumbnail_Image",0x28);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  uVar3 = FUN_140ecbdf0(param_1,&local_48,0,6,&local_58);
  *(undefined8 *)(param_1 + 0x308) = uVar3;
  plVar5 = local_58;
  for (iVar4 = (int)local_50; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  local_28 = 0;
  local_20 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"thumbnailTypeIcon",0x24);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  uVar3 = FUN_140ecbdf0(param_1,&local_28,0,6,&local_38);
  *(undefined8 *)(param_1 + 0x328) = uVar3;
  plVar5 = local_38;
  for (iVar4 = (int)local_30; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410d6570 FUN_1410d6570 body=842 status=ok
// SIG undefined FUN_1410d6570(void)

void FUN_1410d6570(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  wchar_t *pwVar15;
  int iVar16;
  longlong local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_b8 [8];
  longlong local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  wchar_t *local_80;
  longlong local_78;
  wchar_t *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  FUN_142ef9e70();
  FUN_142f10940(param_1,1);
  pwVar15 = *(wchar_t **)(param_1 + 0x38);
  pwVar11 = (wchar_t *)0x0;
  if (pwVar15 != (wchar_t *)0x0) {
    lVar6 = AGPoisonSplashProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar15 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar15 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1410d65dd;
  }
  pwVar15 = pwVar11;
LAB_1410d65dd:
  local_98 = 0;
  local_90 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  FGenericPlatformString::Memcpy(local_98,L"PNL_BTSMedia_Content",0x2a);
  local_a8 = (longlong *)0x0;
  plVar2 = (longlong *)(param_1 + 0x170);
  local_a0 = 0;
  FUN_140f15e80(param_1,plVar2,&local_98,0,6,&local_a8);
  plVar13 = local_a8;
  for (iVar16 = (int)local_a0; iVar16 != 0; iVar16 = iVar16 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free(local_a8);
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
  uVar7 = FUN_142085870(param_1,local_68,L"textCategoryName");
  FUN_142ede260(param_1 + 0x178,uVar7);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_60 + 1;
    lVar6 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (*plVar2 != 0) {
    pwVar8 = _guard_xfg_dispatch_icall_nop(L"&UGFxBehindTheScenesMenu::OnMediaItemClicked",L"::");
    pwVar5 = pwVar11;
    while (pwVar4 = pwVar8, pwVar4 != (wchar_t *)0x0) {
      pwVar8 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar5 = pwVar4;
    }
    FName::FName(&local_res10,pwVar5 + 2,1);
    lVar6 = *plVar2;
    FWeakObjectPtr::operator=(local_b8,0);
    local_b0 = 0;
    FWeakObjectPtr::operator=(local_b8,pwVar15);
    local_b0 = local_res10;
    if ((local_res10 != 0) && (lVar9 = FWeakObjectPtr::Get(local_b8), lVar9 != 0)) {
      UObject::FindFunction(lVar9,local_b0);
    }
    FUN_1406a5aa0(lVar6 + 0x1a8,local_b8);
    if (pwVar15 != (wchar_t *)0x0) {
      puVar14 = &DAT_143f3eda8;
      lVar6 = *plVar2;
      if (*(int *)(pwVar15 + 0x27c) == 0) {
        puVar12 = &DAT_143f3eda8;
      }
      else {
        puVar12 = *(undefined2 **)(pwVar15 + 0x278);
      }
      puVar10 = (undefined8 *)FName::FName(local_res18,puVar12,1);
      *(undefined8 *)(lVar6 + 600) = *puVar10;
      if (*(int *)(pwVar15 + 0x284) != 0) {
        puVar14 = *(undefined2 **)(pwVar15 + 0x280);
      }
      puVar10 = (undefined8 *)FName::FName(local_res20,puVar14,1);
      *(undefined8 *)(lVar6 + 0x260) = *puVar10;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      FWeakObjectPtr::operator=(&local_58,0);
      FWeakObjectPtr::operator=(&local_50,0);
      FWeakObjectPtr::operator=(&local_48,0);
      FWeakObjectPtr::operator=(&local_40,0);
      lVar6 = *plVar2;
      local_80 = pwVar11;
      local_88 = lVar6;
      if (lVar6 != 0) {
        uVar7 = UBlendableInterface::GetPrivateStaticClass();
        local_80 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar7);
      }
      FUN_142ecfd10(pwVar15,&local_88,&local_58);
      lVar6 = *plVar2;
      local_78 = lVar6;
      if (lVar6 != 0) {
        uVar7 = UBlendableInterface::GetPrivateStaticClass();
        pwVar11 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar7);
      }
      local_70 = pwVar11;
      FUN_142ed36d0(pwVar15,&local_78,0);
    }
  }
  return;
}



// FUNCTION 1410d68c0 FUN_1410d68c0 body=487 status=ok
// SIG undefined FUN_1410d68c0(void)

void FUN_1410d68c0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  FUN_140ef65a0();
  local_20 = 0xd;
  local_28 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"navArrowLeft",0x1a);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_140f15b10(param_1,param_1 + 0x268,&local_28,0,6,&local_38);
  plVar1 = local_38;
  for (iVar2 = (int)local_30; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"navArrowRight",0x1c);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140f15b10(param_1,param_1 + 0x270,&local_38,0,6,&local_28);
  plVar1 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x268) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x268) + 0x198) = 0;
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x268) + 0x170);
    (**(code **)(*plVar1 + 0x38))(plVar1,0);
    (**(code **)(**(longlong **)(param_1 + 0x268) + 0x278))(*(longlong **)(param_1 + 0x268),0);
  }
  if (*(longlong *)(param_1 + 0x270) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x270) + 0x198) = 0;
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x270) + 0x170);
    (**(code **)(*plVar1 + 0x38))(plVar1,0);
    (**(code **)(**(longlong **)(param_1 + 0x270) + 0x278))(*(longlong **)(param_1 + 0x270),0);
  }
  return;
}



// FUNCTION 1410d6ab0 FUN_1410d6ab0 body=527 status=ok
// SIG undefined FUN_1410d6ab0(void)

void FUN_1410d6ab0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ef9e70();
  local_10 = 0x21;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"customizationHeader.categoryText",0x42);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140e99270(param_1,param_1 + 0x170,&local_18,0,6,&local_28);
  plVar2 = local_28;
  for (iVar1 = (int)local_20; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x21;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"customizationHeader.unlockedText",0x42);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_140e99270(param_1,param_1 + 0x178,&local_28,0,6,&local_18);
  plVar2 = local_18;
  for (iVar1 = (int)local_10; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x21;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"customizationHeader.newIndicator",0x42);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_140e98b90(param_1,param_1 + 0x180,&local_28,0,6,&local_18);
  plVar2 = local_18;
  for (iVar1 = (int)local_10; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410d6cc0 FUN_1410d6cc0 body=3290 status=ok
// SIG undefined FUN_1410d6cc0(void)

void FUN_1410d6cc0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong local_2e8;
  undefined8 local_2e0;
  longlong *local_2d8;
  undefined8 local_2d0;
  longlong local_2c8;
  undefined8 local_2c0;
  longlong *local_2b8;
  undefined8 local_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  longlong *local_298;
  undefined8 local_290;
  longlong local_288;
  undefined8 local_280;
  longlong local_278;
  undefined8 local_270;
  longlong local_268;
  undefined8 local_260;
  longlong *local_258;
  undefined8 local_250;
  longlong local_248;
  undefined8 local_240;
  longlong *local_238;
  undefined8 local_230;
  longlong local_228;
  undefined8 local_220;
  longlong *local_218;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  longlong *local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  longlong *local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 local_160;
  longlong *local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  
  FUN_142ec5080();
  local_200 = 6;
  local_208 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
  FGenericPlatformString::Memcpy(local_208,L"label",0xc);
  local_218 = (longlong *)0x0;
  local_210 = 0;
  FUN_140e99270(param_1,param_1 + 0x328,&local_208,0,6,&local_218);
  plVar5 = local_218;
  for (iVar4 = (int)local_210; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_218 != (longlong *)0x0) {
    FMemory::Free(local_218);
  }
  if (local_208 != 0) {
    FMemory::Free();
  }
  local_1e8 = 0;
  local_1e0 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
  FGenericPlatformString::Memcpy(local_1e8,L"labelBackground",0x20);
  local_1f8 = (longlong *)0x0;
  local_1f0 = 0;
  FUN_140e98b90(param_1,param_1 + 0x330,&local_1e8,0,6,&local_1f8);
  plVar5 = local_1f8;
  for (iVar4 = (int)local_1f0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_1f8 != (longlong *)0x0) {
    FMemory::Free(local_1f8);
  }
  if (local_1e8 != 0) {
    FMemory::Free();
  }
  local_1c8 = 0;
  local_1c0 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
  FGenericPlatformString::Memcpy(local_1c8,L"loadingCircle",0x1c);
  local_1d8 = (longlong *)0x0;
  local_1d0 = 0;
  FUN_140e98b90(param_1,param_1 + 0x338,&local_1c8,0,6,&local_1d8);
  plVar5 = local_1d8;
  for (iVar4 = (int)local_1d0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_1d8 != (longlong *)0x0) {
    FMemory::Free(local_1d8);
  }
  if (local_1c8 != 0) {
    FMemory::Free();
  }
  local_1a8 = 0;
  local_1a0 = 0x1f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
  FGenericPlatformString::Memcpy(local_1a8,L"imageRender.imageRenderWrapper",0x3e);
  local_1b8 = (longlong *)0x0;
  local_1b0 = 0;
  FUN_140e98b90(param_1,param_1 + 0x368,&local_1a8,0,6,&local_1b8);
  plVar5 = local_1b8;
  for (iVar4 = (int)local_1b0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_1b8 != (longlong *)0x0) {
    FMemory::Free(local_1b8);
  }
  if (local_1a8 != 0) {
    FMemory::Free();
  }
  local_188 = 0;
  local_180 = 0x25;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
  FGenericPlatformString::Memcpy(local_188,L"imageRenderShadow.imageRenderWrapper",0x4a);
  local_198 = (longlong *)0x0;
  local_190 = 0;
  local_c8 = 0;
  FUN_140e98b90(param_1,param_1 + 0x370,&local_188,0,6,&local_198);
  plVar5 = local_198;
  for (iVar4 = (int)local_190; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_198 != (longlong *)0x0) {
    FMemory::Free(local_198);
  }
  if (local_188 != 0) {
    FMemory::Free();
  }
  local_288 = 0;
  local_280 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,0);
  FGenericPlatformString::Memcpy(local_288,L"equipmentName",0x1c);
  local_178 = (longlong *)0x0;
  local_170 = 0;
  local_c0 = 0;
  FUN_140e98b90(param_1,param_1 + 0x378,&local_288,0,6,&local_178);
  plVar5 = local_178;
  for (iVar4 = (int)local_170; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_178 != (longlong *)0x0) {
    FMemory::Free(local_178);
  }
  if (local_288 != 0) {
    FMemory::Free();
  }
  local_148 = 0;
  local_140 = 0x20;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
  FGenericPlatformString::Memcpy(local_148,L"equipmentName.equipmentNameText",0x40);
  local_158 = (longlong *)0x0;
  local_150 = 0;
  local_b8 = 0;
  FUN_140e99270(param_1,param_1 + 0x380,&local_148,0,6,&local_158);
  plVar5 = local_158;
  for (iVar4 = (int)local_150; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_158 != (longlong *)0x0) {
    FMemory::Free(local_158);
  }
  if (local_148 != 0) {
    FMemory::Free();
  }
  local_128 = 0;
  local_120 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
  FGenericPlatformString::Memcpy(local_128,L"emptyLabel",0x16);
  local_138 = (longlong *)0x0;
  local_130 = 0;
  local_b0 = 0;
  FUN_140e99270(param_1,param_1 + 0x388,&local_128,0,6,&local_138);
  plVar5 = local_138;
  for (iVar4 = (int)local_130; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_138 != (longlong *)0x0) {
    FMemory::Free(local_138);
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  local_108 = 0;
  local_100 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
  FGenericPlatformString::Memcpy(local_108,L"buttonHelp.hint",0x20);
  local_118 = (longlong *)0x0;
  local_110 = 0;
  local_a8 = 0;
  FUN_140e98630(param_1,param_1 + 0x390,&local_108,0,6,&local_118);
  plVar5 = local_118;
  for (iVar4 = (int)local_110; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free(local_118);
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  local_e8 = 0;
  local_e0 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  FGenericPlatformString::Memcpy(local_e8,L"equippedFlourishAnim",0x2a);
  local_f8 = (longlong *)0x0;
  local_f0 = 0;
  local_a0 = 0;
  FUN_140e98b90(param_1,param_1 + 0x398,&local_e8,0,6,&local_f8);
  plVar5 = local_f8;
  for (iVar4 = (int)local_f0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_f8 != (longlong *)0x0) {
    FMemory::Free(local_f8);
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  local_2e8 = 0;
  local_2e0 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2e8,0);
  FGenericPlatformString::Memcpy(local_2e8,L"lockIcon",0x12);
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  local_68 = 0;
  FUN_140e98b90(param_1,param_1 + 0x3a0,&local_2e8,0,6,&local_d8);
  plVar5 = local_d8;
  for (iVar4 = (int)local_d0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_2e8 != 0) {
    FMemory::Free();
  }
  local_2c8 = 0;
  local_2c0 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2c8,0);
  FGenericPlatformString::Memcpy(local_2c8,L"invalidSlot",0x18);
  local_2d8 = (longlong *)0x0;
  local_2d0 = 0;
  local_98 = 0;
  FUN_140e98b90(param_1,param_1 + 0x3a8,&local_2c8,0,6,&local_2d8);
  plVar5 = local_2d8;
  for (iVar4 = (int)local_2d0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_2d8 != (longlong *)0x0) {
    FMemory::Free(local_2d8);
  }
  if (local_2c8 != 0) {
    FMemory::Free();
  }
  local_2a8 = 0;
  local_2a0 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a8,0);
  FGenericPlatformString::Memcpy(local_2a8,L"primaryColor",0x1a);
  local_2b8 = (longlong *)0x0;
  local_2b0 = 0;
  local_90 = 0;
  FUN_140e98b90(param_1,param_1 + 0x3b8,&local_2a8,0,6,&local_2b8);
  plVar5 = local_2b8;
  for (iVar4 = (int)local_2b0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_2b8 != (longlong *)0x0) {
    FMemory::Free(local_2b8);
  }
  if (local_2a8 != 0) {
    FMemory::Free();
  }
  local_278 = 0;
  local_270 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_278,0);
  FGenericPlatformString::Memcpy(local_278,L"secondaryColor",0x1e);
  local_298 = (longlong *)0x0;
  local_290 = 0;
  local_88 = 0;
  FUN_140e98b90(param_1,param_1 + 0x3c0,&local_278,0,6,&local_298);
  plVar5 = local_298;
  for (iVar4 = (int)local_290; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_298 != (longlong *)0x0) {
    FMemory::Free(local_298);
  }
  if (local_278 != 0) {
    FMemory::Free();
  }
  local_268 = 0;
  local_260 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
  FGenericPlatformString::Memcpy(local_268,L"TertiaryColor",0x1c);
  local_168 = (longlong *)0x0;
  local_160 = 0;
  local_80 = 0;
  FUN_140e98b90(param_1,param_1 + 0x3c8,&local_268,0,6,&local_168);
  plVar5 = local_168;
  for (iVar4 = (int)local_160; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_168 != (longlong *)0x0) {
    FMemory::Free(local_168);
  }
  if (local_268 != 0) {
    FMemory::Free();
  }
  local_248 = 0;
  local_240 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
  FGenericPlatformString::Memcpy(local_248,L"categoryIconMC",0x1e);
  local_258 = (longlong *)0x0;
  local_250 = 0;
  local_78 = 0;
  FUN_140e98b90(param_1,param_1 + 0x3d0,&local_248,0,6,&local_258);
  plVar5 = local_258;
  for (iVar4 = (int)local_250; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_258 != (longlong *)0x0) {
    FMemory::Free(local_258);
  }
  if (local_248 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    local_228 = 0;
    local_220 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
    FGenericPlatformString::Memcpy(local_228,L"categoryIcon",0x1a);
    local_238 = (longlong *)0x0;
    local_230 = 0;
    local_70 = 0;
    FUN_140e98b90(*(undefined8 *)(param_1 + 0x3d0),param_1 + 0x3d8,&local_228,0,6,&local_238);
    plVar5 = local_238;
    for (iVar4 = (int)local_230; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_238 != (longlong *)0x0) {
      FMemory::Free(local_238);
    }
    if (local_228 != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong **)(param_1 + 0x388) != (longlong *)0x0) {
    lVar2 = **(longlong **)(param_1 + 0x388);
    uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_60,L"Empty",L"GFxCARMenuPartCell",L"EmptyText");
    (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0x388),uVar3,1,0);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_58 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)local_58 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x390) != 0) {
    uVar3 = FUN_1404b03b0();
    FUN_142ed5ef0(*(undefined8 *)(param_1 + 0x390),&DAT_146b3e2a0,uVar3);
  }
  plVar5 = *(longlong **)(param_1 + 0x3a0);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x278))(plVar5,0);
  }
  plVar5 = *(longlong **)(param_1 + 0x3a8);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x278))(plVar5,0);
  }
  FUN_142ed2600(param_1,3);
  return;
}



// FUNCTION 1410d79a0 FUN_1410d79a0 body=1488 status=ok
// SIG undefined FUN_1410d79a0(void)

void FUN_1410d79a0(longlong param_1)

{
  int *piVar1;
  undefined8 *_Src;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *local_148;
  int local_140;
  undefined4 local_13c;
  longlong *local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  
  FUN_142ef9e70();
  iVar10 = 0;
  local_120 = 0xc;
  local_128 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
  FGenericPlatformString::Memcpy(local_128,L"headerLabel",0x18);
  local_138 = (longlong *)0x0;
  local_130 = 0;
  FUN_140e99270(param_1,param_1 + 0x178,&local_128,0,6,&local_138);
  plVar8 = local_138;
  for (iVar6 = (int)local_130; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_138 != (longlong *)0x0) {
    FMemory::Free(local_138);
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  local_108 = 0;
  local_100 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
  FGenericPlatformString::Memcpy(local_108,L"statBars",0x12);
  local_118 = (longlong *)0x0;
  local_110 = 0;
  FUN_140e98b90(param_1,param_1 + 0x180,&local_108,0,6,&local_118);
  plVar8 = local_118;
  for (iVar6 = (int)local_110; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free(local_118);
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  local_e8 = 0;
  local_e0 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  FGenericPlatformString::Memcpy(local_e8,L"modName",0x10);
  local_f8 = (longlong *)0x0;
  local_f0 = 0;
  local_78 = 0;
  FUN_140e99270(param_1,param_1 + 0x188,&local_e8,0,6,&local_f8);
  plVar8 = local_f8;
  for (iVar6 = (int)local_f0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_f8 != (longlong *)0x0) {
    FMemory::Free(local_f8);
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  local_c8 = 0;
  local_c0 = 0x2e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  FGenericPlatformString::Memcpy(local_c8,L"modDescription.modDescription.descriptionText",0x5c);
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  local_70 = 0;
  FUN_140e99270(param_1,param_1 + 400,&local_c8,0,6,&local_d8);
  plVar8 = local_d8;
  for (iVar6 = (int)local_d0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  local_a8 = 0;
  local_a0 = 0x2f;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  FGenericPlatformString::Memcpy(local_a8,L"statDescription.modDescription.descriptionText",0x5e);
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  local_68 = 0;
  FUN_140e99270(param_1,param_1 + 0x198,&local_a8,0,6,&local_b8);
  plVar8 = local_b8;
  for (iVar6 = (int)local_b0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free(local_b8);
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  if (*(longlong **)(param_1 + 0x178) != (longlong *)0x0) {
    lVar5 = **(longlong **)(param_1 + 0x178);
    uVar3 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_60,L"STATISTICS",L"GFxCARMenuStatCard",L"StatisticsHeaderText");
    (**(code **)(lVar5 + 0x2b0))(*(undefined8 *)(param_1 + 0x178),uVar3,1,0);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_58 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)local_58 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x38);
    local_148 = (undefined8 *)0x0;
    local_13c = 0;
    puVar9 = local_148;
    iVar6 = 0;
    if (lVar5 != 0) {
      lVar4 = FUN_141329d80();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      puVar9 = local_148;
      iVar6 = 0;
      if ((bVar2) && (&local_148 != (undefined8 **)(lVar5 + 0xbd8))) {
        local_140 = *(int *)(lVar5 + 0xbe0);
        lVar4 = (longlong)local_140;
        _Src = *(undefined8 **)(lVar5 + 0xbd8);
        iVar6 = local_140;
        if (local_140 != 0) {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                    (&local_148,local_140,0);
          puVar9 = local_148;
          _guard_xfg_dispatch_icall_nop(local_148,_Src,lVar4 << 3);
          iVar6 = local_140;
        }
      }
    }
    do {
      local_98 = (longlong *)0x0;
      local_90 = 0;
      FString::PrintfImpl(local_88,L"stat%i",iVar10);
      lVar5 = FUN_1410ada60(*(undefined8 *)(param_1 + 0x180),local_88,0,6,&local_98);
      if (local_88[0] != 0) {
        FMemory::Free();
      }
      plVar8 = local_98;
      for (iVar7 = (int)local_90; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
      }
      if (local_98 != (longlong *)0x0) {
        FMemory::Free(local_98);
      }
      if (lVar5 != 0) {
        if ((iVar10 < 0) || (iVar6 <= iVar10)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_1410ed500(lVar5,*puVar9);
        }
        iVar7 = *(int *)(param_1 + 0x1a8);
        *(int *)(param_1 + 0x1a8) = iVar7 + 1;
        if (*(int *)(param_1 + 0x1ac) < iVar7 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x1a0,iVar7);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x1a0) + (longlong)iVar7 * 8) = lVar5;
      }
      iVar10 = iVar10 + 1;
      puVar9 = puVar9 + 1;
    } while (iVar10 < 2);
    if (local_148 != (undefined8 *)0x0) {
      FMemory::Free(local_148);
    }
  }
  return;
}



// FUNCTION 1410d7f70 FUN_1410d7f70 body=527 status=ok
// SIG undefined FUN_1410d7f70(void)

void FUN_1410d7f70(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ef9e70();
  local_10 = 0x10;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"statIconWrapper",0x20);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140e98b90(param_1,param_1 + 0x178,&local_18,0,6,&local_28);
  plVar2 = local_28;
  for (iVar1 = (int)local_20; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"statLabel",0x14);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_140e99270(param_1,param_1 + 0x180,&local_28,0,6,&local_18);
  plVar2 = local_18;
  for (iVar1 = (int)local_10; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"statValue",0x14);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_140e99270(param_1,param_1 + 0x188,&local_28,0,6,&local_18);
  plVar2 = local_18;
  for (iVar1 = (int)local_10; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410d8180 FUN_1410d8180 body=29 status=ok
// SIG undefined FUN_1410d8180(void)

void FUN_1410d8180(undefined8 param_1)

{
  FUN_142ef9e70();
  FUN_1410ee920(param_1,1);
  return;
}



// FUNCTION 1410d81a0 FUN_1410d81a0 body=194 status=ok
// SIG undefined FUN_1410d81a0(void)

void FUN_1410d81a0(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142ec5080();
  local_10 = 0xc;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"labelShadow",0x18);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecc7d0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x308) = uVar1;
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
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410d8270 FUN_1410d8270 body=447 status=ok
// SIG undefined FUN_1410d8270(void)

void FUN_1410d8270(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ef9e70();
  local_10 = 6;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"label",0xc);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar2 = FUN_140ecc7d0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x170) = uVar2;
  plVar5 = local_28;
  for (iVar4 = (int)local_20; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"icon",10);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar2 = FUN_140ecbdf0(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x178) = uVar2;
  plVar5 = local_18;
  for (iVar4 = (int)local_10; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar6 = *(longlong *)(param_1 + 0x38);
  if (lVar6 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1410d8407;
  }
  lVar6 = 0;
LAB_1410d8407:
  FWeakObjectPtr::operator=(param_1 + 0x180,lVar6);
  return;
}



// FUNCTION 1410d8430 FUN_1410d8430 body=1434 status=ok
// SIG undefined FUN_1410d8430(void)

void FUN_1410d8430(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  FUN_142ef9e70();
  uVar6 = 0;
  local_20 = 8;
  local_28 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"picture",0x10);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_140e98b90(param_1,param_1 + 0x170,&local_28,0,6,&local_38);
  plVar8 = local_38;
  for (iVar7 = (int)local_30; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"playerName",0x16);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140e99270(param_1,param_1 + 0x178,&local_38,0,6,&local_28);
  plVar8 = local_28;
  for (iVar7 = (int)local_20; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"playerStatus",0x1a);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_1410b1680(param_1,param_1 + 0x180,&local_38,0,6,&local_28);
  plVar8 = local_28;
  for (iVar7 = (int)local_20; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"skillDetails",0x1a);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_1410b19f0(param_1,param_1 + 0x188,&local_38,0,6,&local_28);
  plVar8 = local_28;
  for (iVar7 = (int)local_20; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"inventoryDetails",0x22);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_1410b1310(param_1,param_1 + 400,&local_38,0,6,&local_28);
  plVar8 = local_28;
  for (iVar7 = (int)local_20; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"statDetails",0x18);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_1410b20d0(param_1,param_1 + 0x198,&local_38,0,6,&local_28);
  plVar8 = local_28;
  for (iVar7 = (int)local_20; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"missionNameText",0x20);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140e99270(param_1,param_1 + 0x1a0,&local_38,0,6,&local_28);
  plVar8 = local_28;
  for (iVar7 = (int)local_20; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (lVar3 != 0) {
    lVar2 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar3 = FUN_140f9aee0(lVar3), lVar3 != 0)) {
      lVar3 = FUN_140bb7440(lVar3);
      plVar8 = (longlong *)(lVar3 + 0xd8);
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_FUN_143f4d200;
        FWeakObjectPtr::operator=(plVar4 + 1,param_1);
        plVar4[2] = (longlong)FUN_1410dfc80;
        lVar2 = FDelegateHandle::GenerateNewID();
        plVar4[4] = lVar2;
        *plVar4 = (longlong)&PTR_FUN_143f4d248;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
        puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
        iVar7 = *(int *)(lVar3 + 0xe0);
        uVar6 = *puVar5;
        *(int *)(lVar3 + 0xe0) = iVar7 + 1;
        if (*(int *)(lVar3 + 0xe4) < iVar7 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar7);
        }
        puVar5 = (undefined8 *)((longlong)iVar7 * 0x10 + *plVar8);
        *puVar5 = plVar4;
        *(undefined4 *)(puVar5 + 1) = 3;
      }
      *(undefined8 *)(param_1 + 0x1c8) = uVar6;
    }
  }
  return;
}



// FUNCTION 1410d89d0 FUN_1410d89d0 body=194 status=ok
// SIG undefined FUN_1410d89d0(void)

void FUN_1410d89d0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142ec5080();
  local_10 = 5;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"icon",10);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140e98b90(param_1,param_1 + 0x308,&local_18,0,6,&local_28);
  plVar1 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410d8aa0 FUN_1410d8aa0 body=44 status=ok
// SIG undefined FUN_1410d8aa0(void)

void FUN_1410d8aa0(longlong param_1)

{
  FUN_142ec4360();
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    FUN_142f0f790(*(longlong *)(param_1 + 0x2f8),1);
    return;
  }
  return;
}



// FUNCTION 1410d8ad0 FUN_1410d8ad0 body=545 status=ok
// SIG undefined FUN_1410d8ad0(void)

void FUN_1410d8ad0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  FUN_142ef9e70();
  local_20 = 7;
  local_28 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"rarity",0xe);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_140e98b90(param_1,param_1 + 0x170,&local_28,0,6,&local_38);
  plVar2 = local_38;
  for (iVar1 = (int)local_30; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    local_38 = (longlong *)0x0;
    local_30 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"weaponType",0x16);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140e98b90(*(undefined8 *)(param_1 + 0x170),param_1 + 0x178,&local_38,0,6,&local_28);
    plVar2 = local_28;
    for (iVar1 = (int)local_20; iVar1 != 0; iVar1 = iVar1 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_38 = (longlong *)0x0;
    local_30 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"iconGear",0x12);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140e98b90(*(undefined8 *)(param_1 + 0x170),param_1 + 0x180,&local_38,0,6,&local_28);
    plVar2 = local_28;
    for (iVar1 = (int)local_20; iVar1 != 0; iVar1 = iVar1 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1410d8d00 FUN_1410d8d00 body=867 status=ok
// SIG undefined FUN_1410d8d00(void)

void FUN_1410d8d00(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  FUN_142ef9e70();
  iVar3 = 0;
  lVar4 = param_1 + 0x170;
  do {
    local_38 = (longlong *)0x0;
    local_30 = 0;
    FString::PrintfImpl(&local_28,L"itembig%d",iVar3);
    FUN_1410b0fa0(param_1,lVar4,&local_28,0,6,&local_38);
    if (local_28 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar2 = local_38;
    for (iVar1 = (int)local_30; iVar1 != 0; iVar1 = iVar1 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
    iVar3 = iVar3 + 1;
    lVar4 = lVar4 + 8;
  } while (iVar3 < 4);
  local_28 = (longlong *)0x0;
  local_20 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"itemSmall0",0x16);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_1410b0fa0(param_1,param_1 + 400,&local_28,0,6,&local_38);
  plVar2 = local_38;
  for (iVar3 = (int)local_30; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"itemSmall1",0x16);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_1410b0fa0(param_1,param_1 + 0x198,&local_38,0,6,&local_28);
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
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"itemSmall2",0x16);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_1410b0fa0(param_1,param_1 + 0x1a0,&local_38,0,6,&local_28);
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
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"itemSmall3",0x16);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_1410b0fa0(param_1,param_1 + 0x1a8,&local_38,0,6,&local_28);
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
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410d9070 FUN_1410d9070 body=1736 status=ok
// SIG undefined FUN_1410d9070(void)

void FUN_1410d9070(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  longlong local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 local_188 [8];
  longlong local_180;
  longlong *local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  longlong *local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  
  FUN_142ef9e70();
  local_160 = 0x21;
  local_168 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
  FGenericPlatformString::Memcpy(local_168,L"PNL_VaultHunterProfilCard_Status",0x42);
  local_178 = (longlong *)0x0;
  local_170 = 0;
  FUN_140e98b90(param_1,param_1 + 0x170,&local_168,0,6,&local_178);
  plVar8 = local_178;
  for (iVar10 = (int)local_170; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_178 != (longlong *)0x0) {
    FMemory::Free(local_178);
  }
  if (local_168 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    local_148 = 0;
    local_140 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    FGenericPlatformString::Memcpy(local_148,L"helpText",0x12);
    local_158 = (longlong *)0x0;
    local_150 = 0;
    local_res18 = 0;
    FUN_140e99270(*(undefined8 *)(param_1 + 0x170),param_1 + 0x178,&local_148,0,6,&local_158);
    plVar8 = local_158;
    for (iVar10 = (int)local_150; iVar10 != 0; iVar10 = iVar10 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_158 != (longlong *)0x0) {
      FMemory::Free(local_158);
    }
    if (local_148 != 0) {
      FMemory::Free();
    }
    local_128 = 0;
    local_120 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    FGenericPlatformString::Memcpy(local_128,L"vaultHunterStatus",0x24);
    local_138 = (longlong *)0x0;
    local_130 = 0;
    local_res20 = 0;
    FUN_140e99270(*(undefined8 *)(param_1 + 0x170),param_1 + 0x180,&local_128,0,6,&local_138);
    plVar8 = local_138;
    for (iVar10 = (int)local_130; iVar10 != 0; iVar10 = iVar10 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_138 != (longlong *)0x0) {
      FMemory::Free(local_138);
    }
    if (local_128 != 0) {
      FMemory::Free();
    }
    local_108 = 0;
    local_100 = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
    FGenericPlatformString::Memcpy(local_108,L"vaultHunterStatusIcon",0x2c);
    local_118 = (longlong *)0x0;
    local_110 = 0;
    local_78 = 0;
    FUN_140e98b90(*(undefined8 *)(param_1 + 0x170),param_1 + 0x188,&local_108,0,6,&local_118);
    plVar8 = local_118;
    for (iVar10 = (int)local_110; iVar10 != 0; iVar10 = iVar10 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_118 != (longlong *)0x0) {
      FMemory::Free(local_118);
    }
    if (local_108 != 0) {
      FMemory::Free();
    }
  }
  local_e8 = 0;
  local_e0 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  FGenericPlatformString::Memcpy(local_e8,L"hunterStatus",0x1a);
  local_f8 = (longlong *)0x0;
  plVar8 = (longlong *)(param_1 + 400);
  local_f0 = 0;
  local_70 = 0;
  FUN_140e98b90(param_1,plVar8,&local_e8,0,6,&local_f8);
  plVar9 = local_f8;
  for (iVar10 = (int)local_f0; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_f8 != (longlong *)0x0) {
    FMemory::Free(local_f8);
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  if (*plVar8 != 0) {
    local_c8 = 0;
    local_c0 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
    FGenericPlatformString::Memcpy(local_c8,L"editStatusList",0x1e);
    local_d8 = (longlong *)0x0;
    local_d0 = 0;
    local_68 = 0;
    FUN_1410b0c30(*plVar8,param_1 + 0x198,&local_c8,0,6,&local_d8);
    plVar9 = local_d8;
    for (iVar10 = (int)local_d0; iVar10 != 0; iVar10 = iVar10 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free(local_d8);
    }
    if (local_c8 != 0) {
      FMemory::Free();
    }
    local_a8 = 0;
    local_a0 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
    FGenericPlatformString::Memcpy(local_a8,L"askForHelp.hint",0x20);
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    local_60 = 0;
    FUN_140e98630(*plVar8,param_1 + 0x1a0,&local_a8,0,6,&local_b8);
    plVar9 = local_b8;
    for (iVar10 = (int)local_b0; iVar10 != 0; iVar10 = iVar10 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free(local_b8);
    }
    if (local_a8 != 0) {
      FMemory::Free();
    }
  }
  local_88 = 0;
  local_80 = 0x1c;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  FGenericPlatformString::Memcpy(local_88,L"updatStatusHintWrapper.hint",0x38);
  local_98 = (longlong *)0x0;
  local_90 = 0;
  local_58 = 0;
  FUN_140e98630(param_1,param_1 + 0x1a8,&local_88,0,6,&local_98);
  plVar9 = local_98;
  for (iVar10 = (int)local_90; iVar10 != 0; iVar10 = iVar10 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  if (*(longlong **)(param_1 + 0x178) != (longlong *)0x0) {
    lVar2 = **(longlong **)(param_1 + 0x178);
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_50,L"LOOKING FOR HELP",L"GFxVaultHunterProfileCard",
                       L"LookingForHelpText");
    (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0x178),uVar5,1,0);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_48 + 1;
      lVar2 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
  }
  plVar9 = (longlong *)*plVar8;
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x278))(plVar9,0);
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FWeakObjectPtr::operator=(*(longlong *)(param_1 + 0x198) + 800,*plVar8);
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnActivityCellClicked",L"::");
    pwVar4 = (wchar_t *)0x0;
    while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar4 = pwVar3;
    }
    FName::FName(&local_res10,pwVar4 + 2,1);
    lVar2 = *(longlong *)(param_1 + 0x198);
    FWeakObjectPtr::operator=(local_188,0);
    local_180 = 0;
    FWeakObjectPtr::operator=(local_188,param_1);
    local_180 = local_res10;
    if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(local_188), lVar7 != 0)) {
      UObject::FindFunction(lVar7,local_180);
    }
    FUN_1406a5aa0(lVar2 + 0x1a8,local_188);
  }
  return;
}



// FUNCTION 1410d9740 FUN_1410d9740 body=2193 status=ok
// SIG undefined FUN_1410d9740(void)

void FUN_1410d9740(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  FUN_142ef9e70();
  local_20 = 10;
  local_28 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"classIcon",0x14);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_140e98b90(param_1,param_1 + 0x170,&local_28,0,6,&local_38);
  plVar2 = local_38;
  for (iVar1 = (int)local_30; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_38 = (longlong *)0x0;
  local_30 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"greenProgressBar",0x22);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140f16560(param_1,param_1 + 0x178,&local_38,0,6,&local_28);
  plVar2 = local_28;
  for (iVar1 = (int)local_20; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    local_38 = (longlong *)0x0;
    local_30 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"treeIcon",0x12);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140e98b90(*(undefined8 *)(param_1 + 0x178),param_1 + 0x180,&local_38,0,6,&local_28);
    plVar2 = local_28;
    for (iVar1 = (int)local_20; iVar1 != 0; iVar1 = iVar1 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_38 = (longlong *)0x0;
    local_30 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"percentLabel",0x1a);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140e99270(*(undefined8 *)(param_1 + 0x178),param_1 + 0x188,&local_38,0,6,&local_28);
    plVar2 = local_28;
    for (iVar1 = (int)local_20; iVar1 != 0; iVar1 = iVar1 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  local_38 = (longlong *)0x0;
  local_30 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"blueProgressBar",0x20);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140f16560(param_1,param_1 + 400,&local_38,0,6,&local_28);
  plVar2 = local_28;
  for (iVar1 = (int)local_20; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    local_38 = (longlong *)0x0;
    local_30 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"treeIcon",0x12);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140e98b90(*(undefined8 *)(param_1 + 400),param_1 + 0x198,&local_38,0,6,&local_28);
    plVar2 = local_28;
    for (iVar1 = (int)local_20; iVar1 != 0; iVar1 = iVar1 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_38 = (longlong *)0x0;
    local_30 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"percentLabel",0x1a);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140e99270(*(undefined8 *)(param_1 + 400),param_1 + 0x1a0,&local_38,0,6,&local_28);
    plVar2 = local_28;
    for (iVar1 = (int)local_20; iVar1 != 0; iVar1 = iVar1 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  local_38 = (longlong *)0x0;
  local_30 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"redProgressBar",0x1e);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140f16560(param_1,param_1 + 0x1a8,&local_38,0,6,&local_28);
  plVar2 = local_28;
  for (iVar1 = (int)local_20; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    local_38 = (longlong *)0x0;
    local_30 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"treeIcon",0x12);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140e98b90(*(undefined8 *)(param_1 + 0x1a8),param_1 + 0x1b0,&local_38,0,6,&local_28);
    plVar2 = local_28;
    for (iVar1 = (int)local_20; iVar1 != 0; iVar1 = iVar1 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_38 = (longlong *)0x0;
    local_30 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"percentLabel",0x1a);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140e99270(*(undefined8 *)(param_1 + 0x1a8),param_1 + 0x1b8,&local_38,0,6,&local_28);
    plVar2 = local_28;
    for (iVar1 = (int)local_20; iVar1 != 0; iVar1 = iVar1 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  local_38 = (longlong *)0x0;
  local_30 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"purpleProgressBar",0x24);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140f16560(param_1,param_1 + 0x1c0,&local_38,0,6,&local_28);
  plVar2 = local_28;
  for (iVar1 = (int)local_20; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    local_38 = (longlong *)0x0;
    local_30 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"treeIcon",0x12);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140e98b90(*(undefined8 *)(param_1 + 0x1c0),param_1 + 0x1c8,&local_38,0,6,&local_28);
    plVar2 = local_28;
    for (iVar1 = (int)local_20; iVar1 != 0; iVar1 = iVar1 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_38 = (longlong *)0x0;
    local_30 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"percentLabel",0x1a);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140e99270(*(undefined8 *)(param_1 + 0x1c0),param_1 + 0x1d0,&local_38,0,6,&local_28);
    plVar2 = local_28;
    for (iVar1 = (int)local_20; iVar1 != 0; iVar1 = iVar1 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1410d9fe0 FUN_1410d9fe0 body=368 status=ok
// SIG undefined FUN_1410d9fe0(void)

void FUN_1410d9fe0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ef9f10();
  local_10 = 9;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"listText",0x12);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_140e99270(param_1,param_1 + 0x318,&local_18,0,6,&local_28);
  plVar2 = local_28;
  for (iVar1 = (int)local_20; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"percentageText",0x1e);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_140e99270(param_1,param_1 + 800,&local_28,0,6,&local_18);
  plVar2 = local_18;
  for (iVar1 = (int)local_10; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410da150 FUN_1410da150 body=987 status=ok
// SIG undefined FUN_1410da150(void)

void FUN_1410da150(longlong param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  double dVar9;
  longlong local_res10;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  
  FUN_142ef9e70();
  local_40 = 0x11;
  local_48 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"statBarsScroller",0x22);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_140e98f00(param_1,param_1 + 0x178,&local_48,0,6,&local_58);
  plVar6 = local_58;
  for (iVar8 = (int)local_50; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_58 = (longlong *)0x0;
  local_50 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"gridArea",0x12);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_140e98b90(param_1,param_1 + 0x180,&local_58,0,6,&local_48);
  plVar6 = local_48;
  for (iVar8 = (int)local_40; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_58 = (longlong *)0x0;
  local_50 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"statBarContainer",0x22);
  local_48 = (longlong *)0x0;
  plVar6 = (longlong *)(param_1 + 0x170);
  local_40 = 0;
  FUN_140e98b90(param_1,plVar6,&local_58,0,6,&local_48);
  plVar7 = local_48;
  for (iVar8 = (int)local_40; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if ((*plVar6 != 0) || (*plVar6 = param_1, param_1 != 0)) {
    local_58 = (longlong *)0x0;
    local_50 = 0x18;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"statBar7.timePlayedText",0x30);
    local_48 = (longlong *)0x0;
    local_40 = 0;
    FUN_140e99270(*plVar6,param_1 + 0x198,&local_58,0,6,&local_48);
    plVar7 = local_48;
    for (iVar8 = (int)local_40; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_142087ad0(*plVar6,param_1 + 0x1a0,param_1 + 0x1a4);
  }
  if (((*(longlong *)(param_1 + 0x180) != 0) && (*(longlong *)(param_1 + 0x178) != 0)) &&
     (*plVar6 != 0)) {
    dVar9 = (double)FUN_142eeca30();
    *(float *)(param_1 + 0x1a8) = (float)dVar9;
    dVar9 = (double)FUN_142eeca30(*plVar6);
    *(float *)(param_1 + 0x1ac) = (float)dVar9;
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnStatBarScrollerUpdated",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res10,pwVar3 + 2,1);
    lVar1 = *(longlong *)(param_1 + 0x178);
    FWeakObjectPtr::operator=(lVar1 + 0x378,param_1);
    *(longlong *)(lVar1 + 0x380) = local_res10;
    if ((local_res10 != 0) && (lVar5 = FWeakObjectPtr::Get(lVar1 + 0x378), lVar5 != 0)) {
      UObject::FindFunction(lVar5,*(undefined8 *)(lVar1 + 0x380));
    }
    FUN_142f10880(*(undefined8 *)(param_1 + 0x178),
                  *(float *)(param_1 + 0x1a8) / *(float *)(param_1 + 0x1ac));
  }
  return;
}



// FUNCTION 1410da540 FUN_1410da540 body=260 status=ok
// SIG undefined FUN_1410da540(void)

undefined8 FUN_1410da540(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0xc4);
    lVar3 = FUN_140ec9a00(uVar2);
    if (lVar3 != 0) {
      cVar1 = (**(code **)(*(longlong *)(lVar3 + 0x4d8) + 0xc0))
                        ((longlong *)(lVar3 + 0x4d8),param_2);
      if (cVar1 != '\0') {
        return 1;
      }
      cVar1 = FUN_141111680(lVar3);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x1d0) != 0) && (*(char *)((longlong)param_2 + 0xc) == '\0')) {
    if (DAT_146874c48 == *param_2) {
      FUN_1412ec8f0();
      return 1;
    }
    if (DAT_146874c80 == *param_2) {
      FUN_1412ec870();
      return 1;
    }
    if (DAT_146874c88 == *param_2) {
      FUN_1412ec930();
      return 1;
    }
  }
  uVar2 = FUN_142ec6030(param_1,param_2);
  return uVar2;
}



// FUNCTION 1410da650 FUN_1410da650 body=1383 status=ok
// SIG undefined FUN_1410da650(void)

ulonglong FUN_1410da650(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  ulonglong in_RAX;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_res18 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  if (*(char *)(param_1 + 0x770) == '\x02') {
    return in_RAX & 0xffffffffffffff00;
  }
  if ((*(longlong *)(param_1 + 0xb70) == 0) || (cVar3 = FUN_140fb2f70(), cVar3 == '\0')) {
    if ((*(char *)(param_1 + 0x770) == '\0') &&
       (lVar9 = param_1 + -0x4d8, *(char *)((longlong)param_2 + 0xc) == '\0')) {
      if (DAT_146b3e2b8 == *param_2) {
        FUN_142eb3990(lVar9);
      }
      else if (DAT_146874c50 != *param_2) {
        if (DAT_146874c78 == *param_2) {
          iVar5 = *(int *)(param_1 + 0x730);
          if (0 < iVar5) {
            FUN_1410ebfc0(lVar9,(longlong)(*(int *)(param_1 + 0x768) + -1 + iVar5) % (longlong)iVar5
                                & 0xffffffff);
          }
        }
        else {
          if (DAT_146874c70 != *param_2) goto LAB_1410da777;
          iVar5 = *(int *)(param_1 + 0x730);
          if (0 < iVar5) {
            FUN_1410ebfc0(lVar9,(longlong)(*(int *)(param_1 + 0x768) + 1 + iVar5) % (longlong)iVar5
                                & 0xffffffff);
          }
        }
      }
      goto LAB_1410dab80;
    }
LAB_1410da777:
    if (*(char *)(param_1 + 0x770) == '\x01') {
      plVar10 = (longlong *)(param_1 + -0x4d8);
      if (((*(char *)(param_1 + 0x772) != '\b') || (*(longlong *)(param_1 + 0xc18) == 0)) ||
         (plVar11 = (longlong *)(*(longlong *)(param_1 + 0xc18) + 0x170),
         cVar3 = (**(code **)(*plVar11 + 0x20))(plVar11,param_2), cVar3 == '\0')) {
        if (*(char *)((longlong)param_2 + 0xc) != '\0') goto LAB_1410da8e2;
        if (DAT_146b3e2b8 == *param_2) {
          if (((*(longlong *)(param_1 + 0xb70) == 0) || (cVar3 = FUN_140cb6290(), cVar3 == '\0')) ||
             ((*(longlong *)(param_1 + 0x10) == 0 ||
              (*(char *)(*(longlong *)(param_1 + 0x10) + 0x34) == '\0')))) {
            local_88 = 0;
            local_80 = 0;
            lVar9 = *plVar10;
            puVar6 = (undefined8 *)FName::FName(local_res18,L"Cancel",1);
            (**(code **)(lVar9 + 0x4e8))(plVar10,*puVar6,&local_88);
            *(undefined1 *)(param_1 + 0x770) = 0;
            FUN_1410e8c90(plVar10,0);
          }
          else {
            if (1 < *(int *)(param_1 + 0x60)) {
              local_98 = 0;
              local_90 = 0;
              if (*(int *)(param_1 + 0x60) == 0) {
                puVar12 = &DAT_143f3eda8;
              }
              else {
                puVar12 = *(undefined2 **)(param_1 + 0x58);
              }
              lVar9 = *plVar10;
              puVar6 = (undefined8 *)FName::FName(&local_res8,puVar12,1);
              (**(code **)(lVar9 + 0x4e8))(plVar10,*puVar6,&local_98);
            }
            FUN_142eb3990(plVar10);
          }
        }
        else if (DAT_146874c70 == *param_2) {
          FUN_1410c5c50(plVar10,1);
        }
        else {
          if (DAT_146874c78 != *param_2) goto LAB_1410da8e2;
          FUN_1410c5c50(plVar10,0xffffffff);
        }
      }
      goto LAB_1410dab80;
    }
LAB_1410da8e2:
    if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146874c48 == *param_2)) {
      iVar5 = *(int *)(param_1 + 0x768);
      if ((-1 < iVar5) &&
         ((iVar5 < *(int *)(param_1 + 0x730) &&
          (*(longlong *)(*(longlong *)(param_1 + 0x728) + (longlong)iVar5 * 8) != 0)))) {
        lVar9 = param_1 + -0x4d8;
        cVar3 = FUN_1410c5a40(lVar9);
        if (cVar3 != '\0') {
          FWeakObjectPtr::operator=(&local_res8,lVar9);
          uVar2 = local_resc;
          uVar1 = local_res8;
          local_48 = 0;
          local_38 = 0;
          puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_68);
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = &PTR_FUN_1444f8920;
            puVar6[1] = lVar9;
            *(undefined4 *)(puVar6 + 2) = uVar1;
            *(undefined4 *)((longlong)puVar6 + 0x14) = uVar2;
          }
          local_78[0] = &LAB_1410c5830;
          FUN_14204c280(local_78);
          FWeakObjectPtr::operator=(&local_res8,lVar9);
          local_48 = 0;
          local_38 = 0;
          puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_68);
          if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = &PTR_FUN_1444f8920;
            puVar6[1] = lVar9;
            *(undefined4 *)(puVar6 + 2) = local_res8;
            *(undefined4 *)((longlong)puVar6 + 0x14) = local_resc;
          }
          local_78[0] = &LAB_1410c5590;
          FUN_14208c4f0(lVar9,local_78);
        }
      }
      goto LAB_1410dab80;
    }
    bVar4 = FUN_142ec6030(param_1,param_2);
    if (bVar4 == 0) {
      lVar9 = param_1 + -0x4d8;
      lVar7 = FUN_142eb65a0(lVar9);
      if ((((lVar7 != 0) || (lVar7 = FUN_142eb65a0(lVar9), lVar7 != 0)) ||
          (*(char *)((longlong)param_2 + 0xc) != '\0')) ||
         (((lVar7 = *param_2, DAT_146874be8 != lVar7 && (DAT_146874bf0 != lVar7)) &&
          ((DAT_146874bf8 != lVar7 && (DAT_146874c00 != lVar7)))))) goto LAB_1410dab91;
      if (*(char *)(param_1 + 0x770) == '\0') {
        lVar7 = FUN_1410cc6b0(lVar9,*(undefined2 *)(param_1 + 0x771));
        uVar8 = TScriptInterface<IBlendableInterface>::
                TScriptInterface<IBlendableInterface><UMaterialInterface>
                          (&local_88,*(undefined8 *)(lVar7 + 0xd8));
      }
      else {
        if (*(char *)(param_1 + 0x770) != '\x01') goto LAB_1410dab91;
        if (*(char *)(param_1 + 0x772) != '\b') {
          lVar7 = FUN_1410cc6b0(lVar9,*(undefined2 *)(param_1 + 0x771));
          lVar7 = FUN_1410cd340(lVar9,lVar7 + 0x30);
          if (lVar7 != 0) {
            iVar5 = FUN_142eb7a00(lVar7);
            uVar8 = TScriptInterface<IBlendableInterface>::
                    TScriptInterface<IBlendableInterface><UMaterialInterface>(&local_88,lVar7);
            FUN_142ed36d0(lVar9,uVar8,0);
            if ((iVar5 != -1) && (lVar9 = FUN_142eb65a0(lVar9), lVar9 != 0)) {
              uVar8 = UBlendableInterface::GetPrivateStaticClass();
              plVar10 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar9,uVar8);
              if (plVar10 != (longlong *)0x0) {
                (**(code **)(*plVar10 + 0x20))(plVar10,param_2);
              }
            }
          }
          goto LAB_1410dab80;
        }
        uVar8 = TScriptInterface<IBlendableInterface>::
                TScriptInterface<IBlendableInterface><UMaterialInterface>
                          (&local_88,*(undefined8 *)(param_1 + 0xc18));
      }
      FUN_142ed36d0(lVar9,uVar8,0);
      goto LAB_1410dab80;
    }
  }
  else {
LAB_1410dab80:
    bVar4 = 1;
  }
  FUN_140eb0420(param_1 + 0x338,param_2);
LAB_1410dab91:
  return (ulonglong)bVar4;
}



// FUNCTION 1410dabc0 FUN_1410dabc0 body=564 status=ok
// SIG undefined FUN_1410dabc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1410dabc0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar1 = param_1 + -0x4d8;
  iVar3 = FUN_1410cbe00(lVar1);
  if ((((iVar3 < 1) || (*(char *)((longlong)param_2 + 0xc) != '\0')) || (DAT_146874e10 != *param_2))
     || (((plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xb4), plVar4 == (longlong *)0x0 ||
          (lVar5 = FUN_14270bb10(plVar4), lVar5 == 0)) ||
         (*(int *)(lVar5 + 0x108) != (int)param_2[1])))) {
    lVar5 = param_2[1];
    lVar6 = FUN_1410cb460(lVar1);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x108) == (int)lVar5)) {
      cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
      if (cVar2 != '\0') {
        uVar7 = FWeakObjectPtr::Get(param_1 + 0xc4);
        lVar5 = FUN_140ec9a00(uVar7);
        if (lVar5 != 0) {
          cVar2 = (**(code **)(*(longlong *)(lVar5 + 0x4d8) + 0xc0))
                            ((longlong *)(lVar5 + 0x4d8),param_2);
          if (cVar2 != '\0') {
            return 1;
          }
          cVar2 = FUN_141111680(lVar5);
          if (cVar2 != '\0') {
            return 1;
          }
        }
      }
      cVar2 = FUN_142ec6030(param_1,param_2);
      if (cVar2 == '\0') {
        if (((*(char *)((longlong)param_2 + 0xc) != '\0') || (DAT_146874c48 != *param_2)) ||
           (cVar2 = FUN_1410cf890(lVar1), cVar2 != '\0')) {
          return 0;
        }
        local_98 = (longlong *)0x0;
        local_88 = 0;
        puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_b8);
        if (puVar8 != (undefined8 *)0x0) {
          puVar8[1] = lVar1;
          *puVar8 = &PTR_FUN_143f77b70;
        }
        local_c8[0] = &LAB_1410c5310;
        uVar7 = FUN_1420849a0(lVar1,local_78,local_c8);
        FUN_14208c260(lVar1,uVar7);
        if (local_38 != 0) {
          plVar4 = local_68;
          if (local_48 != (longlong *)0x0) {
            plVar4 = local_48;
          }
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4,0);
          }
        }
        if (local_48 != (longlong *)0x0) {
          FMemory::Free();
        }
        if (local_88 != 0) {
          plVar4 = local_b8;
          if (local_98 != (longlong *)0x0) {
            plVar4 = local_98;
          }
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4,0);
          }
        }
        if (local_98 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  else {
    (**(code **)(*plVar4 + 0xf90))(plVar4,1);
  }
  return 1;
}



// FUNCTION 1410dae00 FUN_1410dae00 body=318 status=ok
// SIG undefined FUN_1410dae00(void)

undefined8 FUN_1410dae00(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  lVar4 = param_2[1];
  if (((*(longlong *)(param_1 + 0x208) != 0) && (lVar2 = FUN_14270bb10(), lVar2 != 0)) &&
     (*(int *)(lVar2 + 0x108) == (int)lVar4)) {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
    if (cVar1 != '\0') {
      uVar3 = FWeakObjectPtr::Get(param_1 + 0xc4);
      lVar4 = FUN_140ec9a00(uVar3);
      if (lVar4 != 0) {
        cVar1 = (**(code **)(*(longlong *)(lVar4 + 0x4d8) + 0xc0))
                          ((longlong *)(lVar4 + 0x4d8),param_2);
        if (cVar1 != '\0') {
          return 1;
        }
        cVar1 = FUN_141111680(lVar4);
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
    cVar1 = FUN_142ec6030(param_1,param_2);
    if (cVar1 == '\0') {
      if ((*(char *)((longlong)param_2 + 0xc) != '\0') || (DAT_146b3e2b8 != *param_2)) {
        return 0;
      }
      if (1 < *(int *)(param_1 + 0x60)) {
        local_18 = 0;
        local_10 = 0;
        if (*(int *)(param_1 + 0x60) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = *(undefined2 **)(param_1 + 0x58);
        }
        lVar4 = *(longlong *)(param_1 + -0x4d8);
        puVar5 = (undefined8 *)FName::FName(local_res8,puVar6,1);
        (**(code **)(lVar4 + 0x4e8))((longlong *)(param_1 + -0x4d8),*puVar5,&local_18);
      }
      FUN_142eb3990(param_1 + -0x4d8);
    }
  }
  return 1;
}



// FUNCTION 1410daf40 FUN_1410daf40 body=588 status=ok
// SIG undefined FUN_1410daf40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1410daf40(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined4 local_110;
  undefined1 *local_108 [2];
  longlong local_f8 [4];
  longlong *local_d8;
  int local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined1 local_98 [16];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  iVar3 = *(int *)(param_1 + 0x2c8);
  iVar2 = *(int *)(param_1 + 0x1b0);
  if (iVar2 <= iVar3) {
    if (iVar2 < 1) goto LAB_1410db13c;
    iVar3 = iVar2 + -1;
  }
  lVar6 = (longlong)iVar3 * 0x50 + *(longlong *)(param_1 + 0x1a8);
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x34) != '\0')) {
    if (*param_2 == DAT_146874d88) {
      uVar8 = 0xc1f00000;
    }
    else {
      if (*param_2 != DAT_146874d90) goto LAB_1410db13c;
      uVar8 = 0x41f00000;
    }
    local_d8 = (longlong *)0x0;
    local_c8 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_f8);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = param_1 + -0x4d8;
      *puVar4 = &PTR_FUN_143f77b70;
    }
    uVar1 = *(undefined4 *)(lVar6 + 0x30);
    local_108[0] = &LAB_1410c5440;
    local_b8 = 0;
    local_b0 = 0;
    FWeakObjectPtr::operator=(local_a8,0);
    local_a0 = 0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_98,local_108);
    local_110 = 0xbf800000;
    local_118 = 0;
    FUN_142880850(param_1 + -0x198,param_1 + 0x280,&local_b8,uVar1);
    if (local_58 != 0) {
      plVar7 = local_88;
      if (local_68 != (longlong *)0x0) {
        plVar7 = local_68;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
    if (local_c8 != 0) {
      plVar7 = local_f8;
      if (local_d8 != (longlong *)0x0) {
        plVar7 = local_d8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free();
    }
    *(undefined4 *)(param_1 + 0x2dc) = uVar8;
    *(undefined2 *)(param_1 + 0x2da) = 0x100;
    *(undefined1 *)(param_1 + 0x2d8) = 0;
    return 1;
  }
LAB_1410db13c:
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2b8 == *param_2)) {
    FUN_142ecd3f0(param_1 + -0x4d8);
  }
  uVar5 = FUN_142ec6030(param_1,param_2);
  return uVar5;
}



// FUNCTION 1410db190 FUN_1410db190 body=283 status=ok
// SIG undefined FUN_1410db190(void)

undefined1 FUN_1410db190(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  cVar2 = (**(code **)(*param_1 + 0x120))(param_1,(int)param_2[1]);
  if ((cVar2 != '\0') || (*param_2 == DAT_146b3e2b8)) {
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x35);
    if (cVar2 != '\0') {
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x35);
      cVar2 = (**(code **)(*(longlong *)(lVar4 + 0x4d8) + 0xc0))
                        ((longlong *)(lVar4 + 0x4d8),param_2);
      if (cVar2 != '\0') goto LAB_1410db28e;
    }
    cVar2 = FUN_142ec6340(param_1);
    if (cVar2 == '\0') {
      uVar3 = 0;
      if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146874d78 == *param_2)) {
        puVar6 = (undefined8 *)param_1[0x61];
        puVar1 = puVar6 + (int)param_1[0x62];
        for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
          cVar2 = FUN_142ebdb90(*puVar6);
          if (cVar2 == '\0') {
            FUN_1410c3e10(param_1 + -0x9b);
            break;
          }
        }
        uVar3 = 1;
      }
      if (param_1[0x56] != 0) {
        plVar5 = (longlong *)(param_1[0x56] + 0x170);
        uVar3 = (**(code **)(*plVar5 + 0x20))(plVar5,param_2);
      }
      goto LAB_1410db290;
    }
  }
LAB_1410db28e:
  uVar3 = 1;
LAB_1410db290:
  LOCK();
  *(undefined4 *)(param_1 + 0x16) = 1;
  UNLOCK();
  return uVar3;
}



// FUNCTION 1410db2b0 FUN_1410db2b0 body=151 status=ok
// SIG undefined FUN_1410db2b0(void)

undefined8 FUN_1410db2b0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x120))(param_1,(int)param_2[1]);
  if ((cVar1 != '\0') || (*param_2 == DAT_146b3e2b8)) {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x35);
    if (cVar1 != '\0') {
      lVar2 = FWeakObjectPtr::Get(param_1 + 0x35);
      cVar1 = (**(code **)(*(longlong *)(lVar2 + 0x4d8) + 0xc0))
                        ((longlong *)(lVar2 + 0x4d8),param_2);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    cVar1 = FUN_142ec6340(param_1,param_2);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1410db350 FUN_1410db350 body=720 status=ok
// SIG undefined FUN_1410db350(void)

undefined8 FUN_1410db350(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 local_20;
  
  if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (*(longlong *)(param_1 + 800) == *param_2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  lVar10 = 0;
  if (bVar2) {
    lVar9 = *(longlong *)(param_1 + -0x4d8);
    local_28 = 0;
    local_20 = 0;
    puVar6 = (undefined8 *)FName::FName(local_res8,L"Cancel",1);
    (**(code **)(lVar9 + 0x4e8))(param_1 + -0x4d8,*puVar6,&local_28);
  }
  lVar9 = *(longlong *)(param_1 + 0x10);
  if (lVar9 != 0) {
    lVar7 = FUN_141319ff0();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar9 + 0xc0 != 0)) {
      if ((*(char *)(lVar9 + 0x143) != '\0') ||
         (cVar3 = FUN_1410e4270(param_1,(int)param_2[1]), cVar3 != '\0')) {
        if ((*(char *)((longlong)param_2 + 0xc) == '\0') &&
           (*(longlong *)(param_1 + 800) == *param_2)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          if (*(char *)(lVar9 + 0x144) != '\0') {
            puVar6 = (undefined8 *)FName::FName(local_res8,"Cancel",1);
            FUN_1410c9870(lVar9 + 0x100,param_1 + -0x4d8,*puVar6,param_2);
            FUN_142eb3990(param_1 + -0x4d8);
            return 1;
          }
        }
        else {
          if ((*(int *)(lVar9 + 0xf8) == 0) && (*(char *)(lVar9 + 0x140) != '\0')) {
            if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146b3e2a0 == *param_2)) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            if (bVar2) {
              puVar6 = (undefined8 *)FName::FName(local_res8,"Closed",1);
              FUN_1410c9870(param_1 + 0x330,param_1 + -0x4d8,*puVar6,param_2);
              FUN_142eb3990(param_1 + -0x4d8);
              return 1;
            }
          }
          cVar3 = FUN_142ec6030(param_1,param_2);
          if (cVar3 == '\0') {
            lVar7 = param_1 + -0x4d8;
            if ((*(longlong *)(lVar9 + 0x158) == 0) || (lVar8 = FUN_14270bb10(), lVar8 == 0)) {
              iVar5 = FUN_142eb7540(lVar7);
            }
            else {
              iVar5 = *(int *)(lVar8 + 0x108);
            }
            if ((*(char *)(lVar9 + 0x143) == '\0') && ((int)param_2[1] != iVar5)) {
              return 0;
            }
            lVar9 = FUN_1410ca1b0(lVar9 + 0xc0,param_2);
            if (lVar9 == 0) {
              return 0;
            }
            if ((*(char *)(lVar9 + 0x29) == '\0') || (*(char *)((longlong)param_2 + 0xc) != '\x01'))
            {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if ((*(char *)(lVar9 + 0x29) == '\0') && (*(char *)((longlong)param_2 + 0xc) == '\0')) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if ((!bVar2) && (!bVar4)) {
              return 0;
            }
            FUN_1410c9870(param_1 + 0x330,lVar7,*(undefined8 *)(lVar9 + 0x18),param_2);
            if (*(char *)(lVar9 + 0x28) == '\0') {
              return 1;
            }
            cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xc4);
            if (cVar3 == '\0') {
              return 1;
            }
            lVar9 = FWeakObjectPtr::Get(param_1 + 0xc4);
            if ((0 < *(int *)(lVar9 + 0x48)) &&
               (plVar1 = *(longlong **)
                          (*(longlong *)(lVar9 + 0x40) + -8 + (longlong)*(int *)(lVar9 + 0x48) * 8),
               plVar1 != (longlong *)0x0)) {
              lVar10 = (**(code **)(*plVar1 + 0x278))();
            }
            if (lVar10 != lVar7) {
              return 1;
            }
            FUN_142eb3990(lVar7);
            return 1;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1410db620 FUN_1410db620 body=108 status=ok
// SIG undefined FUN_1410db620(void)

undefined8 FUN_1410db620(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  cVar1 = FUN_1410e4270(param_1,*(undefined4 *)(param_2 + 8));
  if (cVar1 != '\0') {
    cVar1 = FUN_1410db350(param_1,param_2);
    if (cVar1 == '\0') {
      if (*(longlong *)(param_1 + 0x340) != 0) {
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x340) + 0x170);
                    /* WARNING: Could not recover jumptable at 0x0001410db66e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
        return uVar2;
      }
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1410db690 FUN_1410db690 body=108 status=ok
// SIG undefined FUN_1410db690(void)

undefined8 FUN_1410db690(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  cVar1 = FUN_1410e4270(param_1,*(undefined4 *)(param_2 + 8));
  if (cVar1 != '\0') {
    cVar1 = FUN_1410db350(param_1,param_2);
    if (cVar1 == '\0') {
      if (*(longlong *)(param_1 + 0x370) != 0) {
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x370) + 0x170);
                    /* WARNING: Could not recover jumptable at 0x0001410db6de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
        return uVar2;
      }
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1410db700 FUN_1410db700 body=227 status=ok
// SIG undefined FUN_1410db700(void)

void FUN_1410db700(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142ec64e0();
  lVar2 = *(longlong *)(param_1 + 0x2f8);
  lVar3 = (longlong)*(int *)(param_1 + 0x300) * 0xe8 + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0xe8) {
    if ((*(longlong *)(lVar2 + 0xd8) != 0) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0xd8) + 0x390) != 0)) {
      FUN_142ecfa40();
    }
  }
  if (*(longlong *)(param_1 + 0xb70) != 0) {
    FUN_140fd4540();
  }
  if (*(longlong *)(param_1 + 0xc18) == 0) {
    return;
  }
  lVar2 = FWeakObjectPtr::Get(param_1 + 0xb4);
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
    if (bVar1) goto LAB_1410db7c4;
  }
  lVar2 = 0;
LAB_1410db7c4:
  FUN_140f10f60(*(undefined8 *)(param_1 + 0xc18),lVar2);
  return;
}



// FUNCTION 1410db7f0 FUN_1410db7f0 body=85 status=ok
// SIG undefined FUN_1410db7f0(void)

void FUN_1410db7f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_58[0] = &LAB_1410c5540;
  FUN_14158fcd0(2,local_58);
  return;
}



// FUNCTION 1410db850 FUN_1410db850 body=987 status=ok
// SIG undefined FUN_1410db850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1410db850(longlong *param_1,longlong param_2,longlong param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_318 [32];
  undefined2 local_2f8;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined8 local_2c8;
  undefined8 local_2c0;
  longlong local_2b8 [3];
  undefined **local_2a0 [2];
  longlong *local_290;
  longlong local_288;
  undefined1 local_278 [8];
  undefined1 local_270 [24];
  undefined1 *local_258 [2];
  undefined1 local_248 [32];
  undefined8 local_228;
  undefined4 local_218;
  undefined1 *local_208 [2];
  undefined1 local_1f8 [32];
  undefined8 local_1d8;
  undefined4 local_1c8;
  undefined1 *local_1b8 [2];
  undefined1 local_1a8 [32];
  undefined8 local_188;
  undefined4 local_178;
  undefined1 local_168 [16];
  longlong local_158 [4];
  longlong *local_138;
  int local_128;
  undefined1 local_118 [208];
  ulonglong local_48;
  
  if ((param_2 != 0) && (local_48 = DAT_1468387a8 ^ (ulonglong)auStack_318, param_3 != 0)) {
    lVar4 = *param_1;
    local_2b8[1] = 0;
    local_2b8[2] = 0;
    puVar3 = (undefined8 *)FName::FName(local_278,L"CharSelect_Pick",1);
    (**(code **)(lVar4 + 0x4e8))(param_1,*puVar3,local_2b8 + 1);
    if (param_4 == '\0') {
      FUN_1410f5980(param_1,param_2,param_3);
    }
    lVar4 = FUN_14270bb10(param_2);
    if (lVar4 != 0) {
      FUN_142547b50(lVar4,local_2a0);
      FUN_14145e200(param_2,local_2a0);
      FUN_1414606a0(param_2,local_2a0);
      local_2a0[0] = &PTR_FUN_143f740c8;
      if (local_288 != 0) {
        FMemory::Free();
      }
      local_2a0[0] = &PTR_FUN_143f73d18;
      if (local_290 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_290 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_290)(local_290);
          LOCK();
          piVar1 = (int *)((longlong)local_290 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_290 + 8))(local_290,1);
          }
        }
      }
    }
    local_2b8[0] = param_3;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0xd3,local_2b8);
    *(int *)(param_1 + 0xee) = (int)param_1[0xee] + 1;
    FWeakObjectPtr::operator=(&local_2e8,param_1);
    local_228 = 0;
    local_218 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_248);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_1444f8920;
      puVar3[1] = param_1;
      *(undefined4 *)(puVar3 + 2) = local_2e8;
      *(undefined4 *)((longlong)puVar3 + 0x14) = local_2e4;
    }
    local_2c8 = 0;
    local_258[0] = &LAB_1410c56b0;
    local_2c0 = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2c8,0);
    local_2f8 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_2c8,0x13,"GetNumLocalPlayers");
    FUN_141022700(local_118,&local_2c8,local_258);
    uVar5 = FUN_141036f30(local_118,local_168);
    FUN_142084370(param_1,uVar5);
    if (local_128 != 0) {
      plVar6 = local_158;
      if (local_138 != (longlong *)0x0) {
        plVar6 = local_138;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_138 != (longlong *)0x0) {
      FMemory::Free();
    }
    iVar2 = FUN_141037230(local_118);
    FUN_140ce1dc0(local_118);
    if ((int)param_1[0xee] < iVar2) {
      if (0 < (int)param_1[0xe4]) {
        uVar5 = TScriptInterface<IBlendableInterface>::
                TScriptInterface<IBlendableInterface><UMaterialInterface>
                          (local_270,*(undefined8 *)param_1[0xe3]);
        FUN_142ed36d0(param_1,uVar5,0);
      }
      FUN_1410f5c30(param_1);
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x774) = 1;
      FWeakObjectPtr::operator=(&local_2e0,param_1);
      local_1d8 = 0;
      local_1c8 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_1f8);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_FUN_1444f8920;
        puVar3[1] = param_1;
        *(undefined4 *)(puVar3 + 2) = local_2e0;
        *(undefined4 *)((longlong)puVar3 + 0x14) = local_2dc;
      }
      local_208[0] = &LAB_1410c56d0;
      FUN_14208c4f0(param_1,local_208);
      iVar2 = FUN_1410cbe00(param_1);
      if (iVar2 != 0) {
        FWeakObjectPtr::operator=(&local_2d8,param_3);
        FWeakObjectPtr::operator=(&local_2d0,param_1);
        local_188 = 0;
        local_178 = 0;
        puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_1a8);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = &PTR_FUN_144605c80;
          puVar3[1] = param_1;
          *(undefined4 *)(puVar3 + 2) = local_2d8;
          *(undefined4 *)((longlong)puVar3 + 0x14) = local_2d4;
          *(undefined4 *)(puVar3 + 3) = local_2d0;
          *(undefined4 *)((longlong)puVar3 + 0x1c) = local_2cc;
        }
        local_1b8[0] = &LAB_1410c5840;
        FUN_14208c4f0(param_1,local_1b8);
      }
    }
    LOCK();
    *(undefined4 *)(param_1 + 0xb1) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1410dbc30 FUN_1410dbc30 body=399 status=ok
// SIG undefined FUN_1410dbc30(void)

void FUN_1410dbc30(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x4e8);
    iVar1 = *(int *)(param_2 + 0x2d8);
    if (lVar5 != 0) {
      lVar4 = FUN_141324ef0();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (lVar5 = *(longlong *)(lVar5 + 0xc0), lVar5 != 0)) {
        iVar2 = *(int *)(param_1 + 0x690);
        if ((iVar2 < 0) || (*(int *)(lVar5 + 0x38) <= iVar2)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          lVar5 = *(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 0x28;
          if ((iVar1 < 0) || (*(int *)(lVar5 + 0x20) <= iVar1)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) && (*(longlong *)(param_1 + 0x6a8) != 0)) {
            FUN_1412ec7f0(*(longlong *)(param_1 + 0x6a8),
                          *(undefined8 *)((longlong)iVar1 * 0x50 + *(longlong *)(lVar5 + 0x18)));
            UMistDebugEntityScreen::InspectEntity
                      (param_1 + 0x6b8,*(longlong *)(lVar5 + 0x18) + 8 + (longlong)iVar1 * 0x50,1,0)
            ;
          }
        }
      }
    }
    lVar5 = UXGameInstance::GetPrivateStaticClass();
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
      if (*(longlong *)(param_1 + 0x6b0) != 0) {
        FUN_142ed2820(*(longlong *)(param_1 + 0x6b0),0,
                      CONCAT71((int7)((ulonglong)(lVar5 + 0x88) >> 8),1));
      }
      *(longlong *)(param_1 + 0x6b0) = param_2;
      FUN_142ed2820(param_2,1);
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1410dbdc0 FUN_1410dbdc0 body=38 status=ok
// SIG undefined FUN_1410dbdc0(void)

void FUN_1410dbdc0(longlong param_1)

{
  FUN_142efc2c0();
  FUN_142f0d3e0(param_1 + -0x2b8,*(undefined8 *)(param_1 + 0x40),0);
  return;
}



// FUNCTION 1410dbe00 FUN_1410dbe00 body=90 status=ok
// SIG undefined FUN_1410dbe00(void)

void FUN_1410dbe00(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_142ec6f90();
  lVar1 = *(longlong *)(param_1 + -0x4d8);
  local_18 = 0;
  local_10 = 0;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CAR_Menu_Open",1);
  (**(code **)(lVar1 + 0x4e8))(param_1 + -0x4d8,*puVar2,&local_18);
  return;
}



// FUNCTION 1410dbe60 FUN_1410dbe60 body=295 status=ok
// SIG undefined FUN_1410dbe60(void)

void FUN_1410dbe60(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  FUN_142ec6f90();
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xb4);
  if (cVar3 != '\0') {
    uVar4 = FWeakObjectPtr::Get(param_1 + 0xb4);
    lVar5 = UWidgetComponent::GetRenderTarget(uVar4);
    if (lVar5 != 0) {
      lVar6 = FUN_142f27b90();
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
        lVar5 = *(longlong *)(lVar5 + 0x5e8);
        if (lVar5 != 0) {
          plVar7 = *(longlong **)(lVar5 + 0x510);
          plVar1 = plVar7 + *(int *)(lVar5 + 0x518);
          for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
            plVar8 = (longlong *)*plVar7;
            uVar4 = ARemnantWeaponMod::GetPrivateStaticClass();
            cVar3 = FUN_142eb4a30(plVar8,uVar4);
            if (cVar3 != '\0') {
              if (plVar8 != (longlong *)0x0) {
                lVar5 = ARemnantWeaponMod::GetPrivateStaticClass();
                if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
                    lVar5 + 0x88)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) goto LAB_1410dbf64;
              }
              break;
            }
          }
        }
        plVar8 = (longlong *)0x0;
LAB_1410dbf64:
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x580))(plVar8,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1410dbf90 FUN_1410dbf90 body=306 status=ok
// SIG undefined FUN_1410dbf90(void)

void FUN_1410dbf90(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_142ec6f90();
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    lVar3 = FUN_141319ff0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (lVar1 != -0xc0)) && (*(char *)(lVar1 + 0x145) == '\0')) {
      lVar1 = *(longlong *)(param_1 + -0x4d8);
      local_18 = 0;
      local_10 = 0;
      puVar4 = (undefined8 *)FName::FName(local_res8,L"Dialog_Appear",1);
      (**(code **)(lVar1 + 0x4e8))(param_1 + -0x4d8,*puVar4,&local_18);
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    lVar3 = FUN_141319ff0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (lVar1 != -0xc0)) &&
       ((*(char *)(lVar1 + 0x141) != '\0' && (*(longlong *)(param_1 + 0x2a8) != 0)))) {
      uVar5 = TScriptInterface<IBlendableInterface>::
              TScriptInterface<IBlendableInterface><UMaterialInterface>(&local_18);
      FUN_142ed36d0(param_1 + -0x4d8,uVar5,0);
    }
  }
  return;
}



// FUNCTION 1410dc0e0 FUN_1410dc0e0 body=102 status=ok
// SIG undefined FUN_1410dc0e0(void)

void FUN_1410dc0e0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *(longlong *)(param_1 + -0x4d8);
  local_18 = 0;
  local_10 = 0;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CAR_Menu_Close",1);
  (**(code **)(lVar1 + 0x4e8))(param_1 + -0x4d8,*puVar2,&local_18);
  FUN_142ec7390(param_1);
  return;
}



// FUNCTION 1410dc150 FUN_1410dc150 body=173 status=ok
// SIG undefined FUN_1410dc150(void)

void FUN_1410dc150(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_38 [48];
  
  uVar2 = TSoftObjectPtr<UTexture2D>::TSoftObjectPtr<UTexture2D>(local_38,param_1 + 0x2a0);
  uVar3 = (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x148))(param_1 + -0x4d8);
  FUN_1405e5cb0(uVar3,uVar2,0);
  lVar4 = FWeakObjectPtr::Get(param_1 + 0xf4);
  if (lVar4 != 0) {
    lVar5 = FUN_14141f270();
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
      FUN_140bc99c0(lVar4);
    }
  }
  FUN_142ec7390(param_1);
  return;
}



// FUNCTION 1410dc200 FUN_1410dc200 body=173 status=ok
// SIG undefined FUN_1410dc200(void)

void FUN_1410dc200(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_38 [48];
  
  uVar2 = TSoftObjectPtr<UTexture2D>::TSoftObjectPtr<UTexture2D>(local_38,param_1 + 0x228);
  uVar3 = (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x148))(param_1 + -0x4d8);
  FUN_1405e5cb0(uVar3,uVar2,0);
  lVar4 = FWeakObjectPtr::Get(param_1 + 0xf4);
  if (lVar4 != 0) {
    lVar5 = FUN_14141f270();
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
      FUN_140bc99c0(lVar4);
    }
  }
  FUN_142ec7390(param_1);
  return;
}



// FUNCTION 1410dc2b0 PostLoad body=36 status=ok
// SIG undefined PostLoad(void)

void UMaterialExpressionMaterialFunctionCall::PostLoad(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1410eaa20();
  }
  FUN_142efc5d0(param_1);
  return;
}



// FUNCTION 1410dc2e0 FUN_1410dc2e0 body=147 status=ok
// SIG undefined FUN_1410dc2e0(void)

void FUN_1410dc2e0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x2b8) + 0x148))();
  plVar2 = (longlong *)FUN_140d3a420(lVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x128))(plVar2,param_1 + 0x48);
  }
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x68) != 0)) {
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar3,param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  FUN_142efc5d0(param_1);
  return;
}



// FUNCTION 1410dc380 FUN_1410dc380 body=42 status=ok
// SIG undefined FUN_1410dc380(void)

void FUN_1410dc380(longlong param_1)

{
  FUN_142ec75f0();
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FUN_1412ec830();
    return;
  }
  return;
}



// FUNCTION 1410dc3b0 FUN_1410dc3b0 body=1133 status=ok
// SIG undefined FUN_1410dc3b0(void)

void FUN_1410dc3b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_res18;
  longlong local_res20;
  longlong local_b8;
  longlong *local_b0 [2];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 *local_98 [2];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  
  if (*(longlong *)(param_1 + 0xc50) != 0) {
    FUN_1411eff10();
  }
  lVar3 = param_1 + -0x4d8;
  FUN_1410c9120(lVar3);
  lVar9 = FWeakObjectPtr::Get(param_1 + 0xb4);
  iVar17 = 0;
  if (lVar9 != 0) {
    local_res20 = lVar9;
    lVar10 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      lVar9 = *(longlong *)(lVar9 + 0x848);
      if (lVar9 != 0) {
        lVar10 = FUN_1413ffe00();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if ((bVar6) && (lVar9 = FUN_140e21bd0(lVar9), lVar9 != 0)) {
          FUN_14130a170(lVar9);
        }
      }
      goto LAB_1410dc4a4;
    }
  }
  local_res20 = 0;
LAB_1410dc4a4:
  *(undefined1 *)(param_1 + 0xdb2) = 1;
  FUN_1411fd1e0(param_1 + 0x358);
  FUN_1411d87d0(param_1 + 0x358,0);
  FUN_140eb0dd0(param_1 + 0x338);
  FWeakObjectPtr::operator=(&local_res10,lVar3);
  local_a0 = local_res10;
  local_9c = local_res14;
  local_68 = 0;
  local_58 = 0;
  puVar11 = (undefined8 *)FUN_140438ef0(0x18,local_88);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &PTR_FUN_1444f8920;
    puVar11[1] = lVar3;
    *(undefined4 *)(puVar11 + 2) = local_res10;
    *(undefined4 *)((longlong)puVar11 + 0x14) = local_res14;
  }
  local_98[0] = &LAB_1410c53b0;
  FUN_14204c280(local_98);
  lVar3 = param_1 + 0x738;
  cVar7 = FWeakObjectPtr::IsValid(lVar3);
  if (cVar7 != '\0') {
    uVar12 = FWeakObjectPtr::Get(lVar3);
    iVar8 = FUN_14233f450(uVar12);
    if (0 < *(int *)(param_1 + 0x730)) {
      local_res18 = 0;
      do {
        lVar9 = *(longlong *)(local_res18 + *(longlong *)(param_1 + 0x728));
        if ((lVar9 != 0) && (lVar10 = FUN_1410cac90(lVar9 + 0x30), lVar10 != 0)) {
          lVar13 = FWeakObjectPtr::Get(lVar3);
          lVar5 = *(longlong *)(lVar13 + 0x1b8);
          iVar15 = *(int *)(lVar13 + 0x1c0);
          for (lVar13 = lVar5; lVar13 != (longlong)iVar15 * 0x188 + lVar5; lVar13 = lVar13 + 0x188)
          {
            lVar14 = FUN_1410cac90(lVar13);
            if (lVar14 == lVar10) {
              uVar16 = (lVar13 - lVar5) / 0x188;
              goto LAB_1410dc610;
            }
          }
          uVar16 = 0xffffffff;
LAB_1410dc610:
          lVar10 = FWeakObjectPtr::Get(lVar3);
          iVar15 = (int)uVar16;
          if ((iVar15 < 0) || (*(int *)(lVar10 + 0x1c0) <= iVar15)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          lVar10 = FWeakObjectPtr::Get(lVar3);
          if (bVar6) {
            FUN_140e6bf90((longlong)iVar15 * 0x188 + *(longlong *)(lVar10 + 0x1b8),lVar9 + 0x30);
          }
          else {
            iVar15 = *(int *)(lVar10 + 0x1c0);
            uVar16 = (ulonglong)iVar15;
            *(int *)(lVar10 + 0x1c0) = iVar15 + 1;
            if (*(int *)(lVar10 + 0x1c4) < iVar15 + 1) {
              TArray<FEnvQueryInstanceCache,FDefaultAllocator>::ResizeGrow
                        ((longlong *)(lVar10 + 0x1b8),iVar15);
            }
            FUN_1410b33e0(uVar16 * 0x188 + *(longlong *)(lVar10 + 0x1b8),lVar9 + 0x30);
          }
          if (*(int *)(param_1 + 0x76c) == iVar17) {
            lVar10 = FWeakObjectPtr::Get(lVar3);
            *(int *)(lVar10 + 0x1c8) = (int)uVar16;
            if (iVar8 != 3) {
              lVar10 = FWeakObjectPtr::Get(lVar3);
              uVar12 = FWeakObjectPtr::Get(lVar3);
              FUN_1414e2720(uVar12,*(undefined4 *)(lVar10 + 0x1c8));
            }
          }
          if ((*(char *)(lVar9 + 0x1e0) != '\0') && (*(undefined1 *)(lVar9 + 0x1e0) = 0, iVar8 != 3)
             ) {
            uVar12 = FWeakObjectPtr::Get(lVar3);
            FUN_1414e2760(uVar12,uVar16 & 0xffffffff,lVar9 + 0x30);
          }
        }
        iVar17 = iVar17 + 1;
        local_res18 = local_res18 + 8;
      } while (iVar17 < *(int *)(param_1 + 0x730));
    }
  }
  lVar3 = local_res20;
  if (local_res20 != 0) {
    FUN_140d03d20(local_res20);
    FUN_140d04be0(lVar3);
  }
  plVar4 = (longlong *)(param_1 + 0x740);
  if (*plVar4 != 0) {
    FUN_142833de0();
    FUN_14283ef20(*plVar4);
    local_b0[0] = (longlong *)0x0;
    if (plVar4 != &local_b8) {
      *plVar4 = 0;
      local_b8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x748,local_b0);
      plVar4 = local_b0[0];
      if (local_b0[0] != (longlong *)0x0) {
        LOCK();
        plVar1 = local_b0[0] + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_b0[0])(local_b0[0]);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar17 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*local_b0[0] + 8))(local_b0[0],1);
          }
        }
      }
    }
  }
  FUN_140eb7180(param_1);
  return;
}



// FUNCTION 1410dc820 FUN_1410dc820 body=531 status=ok
// SIG undefined FUN_1410dc820(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410dc820(longlong param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
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
  lVar4 = param_1 + -0x4d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = lVar4;
    *puVar2 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_1410c58d0;
  uVar3 = FUN_1420849a0(lVar4,local_68,local_b8);
  FUN_14208c260(lVar4,uVar3);
  if (local_28 != 0) {
    plVar6 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar6 = local_38;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar6 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar6 = local_88;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = lVar4;
    *puVar2 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_1410c5320;
  uVar3 = FUN_1420849a0(lVar4,local_68,local_b8);
  FUN_14208c260(lVar4,uVar3);
  if (local_28 != 0) {
    plVar6 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar6 = local_38;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar6 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar6 = local_88;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar4 = FWeakObjectPtr::Get(param_1 + 0xf4);
  if (lVar4 != 0) {
    lVar5 = FUN_14141f270();
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
      FUN_140ba9e80(lVar4);
    }
  }
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 1410dca40 FUN_1410dca40 body=43 status=ok
// SIG undefined FUN_1410dca40(void)

void FUN_1410dca40(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x1b8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x288))();
  }
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 1410dca70 FUN_1410dca70 body=1019 status=ok
// SIG undefined FUN_1410dca70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410dca70(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8 [2];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [24];
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar2 = (longlong *)(param_1 + -0x4d8);
  FWeakObjectPtr::operator=(&local_f8,plVar2);
  local_a8 = local_f8;
  local_a4 = local_f4;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_78);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_1444f8920;
    puVar6[1] = plVar2;
    *(undefined4 *)(puVar6 + 2) = local_f8;
    *(undefined4 *)((longlong)puVar6 + 0x14) = local_f4;
  }
  local_88[0] = &LAB_1410c5390;
  FUN_14208c260(plVar2,local_88);
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
  FUN_1410c6000(plVar2);
  lVar7 = FWeakObjectPtr::Get(param_1 + 0xb4);
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
      FUN_140d045e0(lVar7);
    }
  }
  FUN_1410f5090(plVar2,0);
  if (*(longlong *)(param_1 + 0x290) != 0) {
    FUN_142833de0();
  }
  if (*(longlong *)(param_1 + 0x288) != 0) {
    *(undefined8 *)(param_1 + 0x288) = 0;
  }
  FName::FName(local_b8,L"WE_Dandelion_Credits_Music_Stop",1);
  iVar5 = *(int *)(param_1 + 0x2c8);
  iVar3 = *(int *)(param_1 + 0x1b0);
  if (iVar3 <= iVar5) {
    if (iVar3 < 1) goto LAB_1410dcced;
    iVar5 = iVar3 + -1;
  }
  lVar7 = (longlong)iVar5 * 0x50 + *(longlong *)(param_1 + 0x1a8);
  if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x48) != 0)) {
    if ((*(longlong *)(*(longlong *)(lVar7 + 0x48) + 0x18) == local_b8[0]) &&
       (lVar8 = (**(code **)(*plVar2 + 0x148))(plVar2), lVar8 != 0)) {
      uVar9 = (**(code **)(*plVar2 + 0x148))(plVar2);
      FUN_1417846f0(uVar9,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      local_f0 = 0;
      uVar10 = FUN_14132e9b0();
      local_108 = 0;
      local_110 = 0;
      local_118 = 0;
      local_120 = 0;
      local_128 = 0;
      uVar9 = FUN_1417985e0(uVar10,uVar9,0,0);
      uVar10 = FUN_142eb75d0(plVar2);
      uVar11 = (**(code **)(*plVar2 + 0x148))(plVar2);
      local_128 = 0x40a00000;
      FUN_1410f4c10(uVar9,uVar11,uVar10,*(undefined8 *)(lVar7 + 0x48));
    }
    else {
      FUN_142ece5e0(plVar2,local_a0,*(undefined8 *)(lVar7 + 0x48));
      FUN_140591060(local_a0);
    }
  }
LAB_1410dcced:
  plVar2 = *(longlong **)(param_1 + 0x1f0);
  if (plVar2 != (longlong *)0x0) {
    lVar7 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      (**(code **)(*plVar2 + 0x288))(plVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  if (*(int *)(param_1 + 0x1e4) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x1d8,0);
  }
  local_e8 = 0;
  FUN_140b81da0(&local_c8,0);
  if (local_c8 != (longlong *)0x0) {
    (**(code **)(*local_c8 + 0x10))(local_c8,1);
  }
  local_e0 = 0;
  FUN_1410cad60(&local_d8,0);
  if (local_d8 != (longlong *)0x0) {
    (**(code **)(*local_d8 + 0x40))(local_d8,1);
    (**(code **)(*local_d8 + 0x18))(local_d8,1);
  }
  FUN_142ec75f0(param_1);
  plVar2 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_d0 + 1;
    lVar7 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  plVar2 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_c0 + 1;
    lVar7 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  return;
}



// FUNCTION 1410dce70 FUN_1410dce70 body=34 status=ok
// SIG undefined FUN_1410dce70(void)

void FUN_1410dce70(longlong param_1)

{
  FUN_1410eb890(param_1 + -0x4d8);
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 1410dcea0 FUN_1410dcea0 body=59 status=ok
// SIG undefined FUN_1410dcea0(void)

void FUN_1410dcea0(longlong param_1)

{
  FWeakObjectPtr::operator=(param_1 + 0x330,0);
  *(undefined8 *)(param_1 + 0x338) = 0;
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 1410dcee0 FUN_1410dcee0 body=50 status=ok
// SIG undefined FUN_1410dcee0(void)

void FUN_1410dcee0(longlong param_1)

{
  FUN_142ec7db0();
  param_1 = param_1 + -0x2b8;
  FUN_1410c3560(param_1);
  FUN_1410c2dc0(param_1);
  FUN_1410c3770(param_1);
  return;
}



// FUNCTION 1410dcf20 FUN_1410dcf20 body=593 status=ok
// SIG undefined FUN_1410dcf20(void)

void FUN_1410dcf20(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  float local_res8 [2];
  longlong local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined8 local_60;
  longlong local_50 [3];
  undefined1 local_38 [32];
  
  FUN_142ec7db0();
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    lVar2 = **(longlong **)(param_1 + 0x48);
    uVar5 = FUN_1415ab800();
    uVar5 = FText::FromString(local_50,uVar5);
    (**(code **)(lVar2 + 0x2d0))(*(undefined8 *)(param_1 + 0x48),uVar5);
  }
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    lVar2 = **(longlong **)(param_1 + 0x50);
    uVar5 = (**(code **)(*DAT_146874fc8 + 0x78))(DAT_146874fc8,local_50);
    uVar5 = FText::FromString(&local_68,uVar5);
    (**(code **)(lVar2 + 0x2d0))(*(undefined8 *)(param_1 + 0x50),uVar5);
    if (local_50[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    lVar2 = **(longlong **)(param_1 + 0x58);
    uVar5 = FUN_1404b03b0();
    uVar5 = FText::FText(local_50,uVar5);
    (**(code **)(lVar2 + 0x2d0))(*(undefined8 *)(param_1 + 0x58),uVar5);
    if (DAT_146b17150 != 0) {
      puVar6 = *(undefined8 **)(DAT_146b17150 + 0xc18);
      puVar1 = puVar6 + *(int *)(DAT_146b17150 + 0xc20);
      for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
        if ((*(char *)*puVar6 == '\x01') &&
           (plVar3 = *(longlong **)(*(longlong *)((char *)*puVar6 + 0x288) + 0x148),
           plVar3 != (longlong *)0x0)) {
          local_res8[0] = 0.0;
          local_78 = 0;
          local_70 = 0;
          cVar4 = (**(code **)(*plVar3 + 0x770))(plVar3,&local_78,local_res8);
          if (cVar4 != '\0') {
            FUN_141682af0(&local_78,&local_68,0);
            puVar7 = &DAT_143f3eda8;
            if ((int)local_60 != 0) {
              puVar7 = local_68;
            }
            FString::PrintfImpl(local_50,L"%s : %.2f",puVar7,(double)local_res8[0]);
            lVar2 = **(longlong **)(param_1 + 0x58);
            uVar5 = FText::FromString(local_38,local_50);
            (**(code **)(lVar2 + 0x2d0))(*(undefined8 *)(param_1 + 0x58),uVar5);
            if (local_50[0] != 0) {
              FMemory::Free();
            }
            if (local_68 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            break;
          }
        }
      }
    }
  }
  if ((*(longlong **)(param_1 + 0x60) != (longlong *)0x0) && (*(longlong *)(param_1 + 0x68) != 0)) {
    local_68 = (undefined2 *)0x0;
    local_60 = 0;
    local_78 = 0;
    local_70 = 0;
    lVar2 = **(longlong **)(param_1 + 0x60);
    uVar5 = FText::FromString(local_38,&local_68);
    (**(code **)(lVar2 + 0x2d0))(*(undefined8 *)(param_1 + 0x60),uVar5);
    lVar2 = **(longlong **)(param_1 + 0x68);
    uVar5 = FText::FromString(local_38,&local_78);
    (**(code **)(lVar2 + 0x2d0))(*(undefined8 *)(param_1 + 0x68),uVar5);
    if (local_78 != 0) {
      FMemory::Free();
    }
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  FUN_1410c3120(param_1 + -0x2b8);
  return;
}



// FUNCTION 1410dd180 FUN_1410dd180 body=1262 status=ok
// SIG undefined FUN_1410dd180(void)

void FUN_1410dd180(longlong param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined2 *puVar14;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_f0;
  wchar_t *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong local_d0;
  longlong local_c8;
  wchar_t *local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_90;
  longlong local_88;
  wchar_t *local_80;
  longlong *local_78;
  undefined2 *local_70;
  int local_68;
  undefined1 local_60 [32];
  
  FUN_142efc880();
  plVar10 = (longlong *)(param_1 + 0x50);
  pwVar9 = (wchar_t *)0x0;
  iVar13 = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar10,0);
  }
  FWeakObjectPtr::operator=(local_b8,0);
  local_b0 = 0;
  puVar3 = (undefined8 *)FPaths::ProjectDir(&local_c8);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar14 = &DAT_143f3eda8;
  }
  else {
    puVar14 = (undefined2 *)*puVar3;
  }
  FString::PrintfImpl(&local_70,L"%sDemoSaves",puVar14);
  if (local_c8 != 0) {
    FMemory::Free();
  }
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  plVar4 = (longlong *)FUN_1415c3d50();
  puVar14 = &DAT_143f3eda8;
  if (local_68 != 0) {
    puVar14 = local_70;
  }
  (**(code **)(*plVar4 + 0x70))(plVar4,&local_a8,puVar14,L"*.sav");
  local_78 = local_a8 + (longlong)(int)local_a0 * 2;
  if (local_a8 != local_78) {
    local_res20 = param_1 + -0x2b8;
    local_res10 = 0;
    plVar4 = local_a8;
    do {
      if ((int)plVar4[1] == 0) {
        pwVar8 = L"";
        iVar11 = iVar13;
      }
      else {
        pwVar8 = (wchar_t *)*plVar4;
        iVar11 = (int)plVar4[1] + -1;
      }
      iVar2 = iVar11 + -4;
      iVar12 = iVar13;
      if ((-1 < iVar2) && (iVar12 = iVar11, iVar2 < iVar11)) {
        iVar12 = iVar2;
      }
      local_e8 = (wchar_t *)0x0;
      local_dc = 0;
      local_e0 = iVar12 + 1;
      if (iVar12 == 0) {
        local_e0 = iVar13;
      }
      if ((0 < local_e0) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0), pwVar5 = local_e8,
         0 < local_e0)) {
        wcsncpy(local_e8,pwVar8,(longlong)iVar12);
        pwVar5[iVar12] = L'\0';
      }
      pwVar8 = L"";
      if (local_e0 != 0) {
        pwVar8 = local_e8;
      }
      FName::FName(&local_res10,pwVar8,1);
      iVar11 = *(int *)(param_1 + 0x58);
      *(int *)(param_1 + 0x58) = iVar11 + 1;
      if (*(int *)(param_1 + 0x5c) < iVar11 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar10,iVar11);
      }
      *(longlong *)(*plVar10 + (longlong)iVar11 * 8) = local_res10;
      FWeakObjectPtr::operator=(&local_f8,0);
      local_f0 = 0;
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UDemoMenu::OnDemoSaveSelected",L"::");
      pwVar8 = pwVar9;
      while (pwVar1 = pwVar5, pwVar1 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar8 = pwVar1;
      }
      FName::FName(&local_res18,pwVar8 + 2,1);
      lVar6 = local_res18;
      FWeakObjectPtr::operator=(&local_f8,local_res20);
      local_f0 = lVar6;
      if ((lVar6 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_f8), lVar6 != 0)) {
        UObject::FindFunction(lVar6,local_f0);
      }
      lVar6 = *(longlong *)(param_1 + 0x40);
      local_80 = (wchar_t *)local_b0;
      local_98 = local_f8;
      local_94 = local_f4;
      local_90 = local_f0;
      local_c0 = (wchar_t *)0x0;
      pwVar8 = pwVar9;
      local_c8 = lVar6;
      if (lVar6 != 0) {
        uVar7 = FUN_142f2b0d0();
        pwVar8 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar7);
      }
      local_c0 = pwVar8;
      uVar7 = FText::FromString(local_60,&local_e8);
      FUN_142ee7ec0(&local_c8,*(undefined8 *)(param_1 + 0x10),uVar7,&local_98,&local_88);
      if (local_e8 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    } while (plVar4 != local_78);
  }
  FWeakObjectPtr::operator=(&local_d8,0);
  local_d0 = 0;
  pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UDemoMenu::OnBackClicked",L"::");
  pwVar8 = pwVar9;
  while (pwVar1 = pwVar5, pwVar1 != (wchar_t *)0x0) {
    pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
    pwVar8 = pwVar1;
  }
  FName::FName(&local_res10,pwVar8 + 2,1);
  lVar6 = local_res10;
  FWeakObjectPtr::operator=(&local_d8,param_1 + -0x2b8);
  local_d0 = lVar6;
  if ((lVar6 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_d8), lVar6 != 0)) {
    UObject::FindFunction(lVar6,local_d0);
  }
  lVar6 = *(longlong *)(param_1 + 0x40);
  local_c0 = (wchar_t *)local_b0;
  local_98 = local_d8;
  local_94 = local_d4;
  local_90 = local_d0;
  local_88 = lVar6;
  if (lVar6 != 0) {
    uVar7 = FUN_142f2b0d0();
    pwVar9 = (wchar_t *)UObjectBaseUtility::GetInterfaceAddress(lVar6,uVar7);
  }
  local_80 = pwVar9;
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_60,L"Back",L"DemoMenu",L"BackText");
  uVar7 = FUN_142ee7ec0(&local_88,*(undefined8 *)(param_1 + 0x10),uVar7,&local_98,&local_c8);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  FUN_142f0d3e0(param_1 + -0x2b8,*(undefined8 *)(param_1 + 0x40),0);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    plVar10 = (longlong *)(*(longlong *)(param_1 + 0x40) + 0x860);
    (**(code **)(*plVar10 + 0x18))(plVar10,0,0,0);
  }
  plVar10 = local_a8;
  for (iVar13 = (int)local_a0; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free(local_a8);
  }
  if (local_70 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410dd670 FUN_1410dd670 body=207 status=ok
// SIG undefined FUN_1410dd670(void)

void FUN_1410dd670(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ec85a0();
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar2 = FUN_1412e9fd0();
  uVar3 = (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x148))();
  FUN_14244db10(uVar3,uVar2,&local_18);
  if ((int)local_10 < 1) {
    lVar5 = *(longlong *)(param_1 + 0x1d0);
    goto LAB_1410dd718;
  }
  lVar5 = *local_18;
  if (lVar5 == 0) {
LAB_1410dd706:
    lVar5 = 0;
  }
  else {
    lVar4 = FUN_1412e9fd0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1410dd706;
  }
  *(longlong *)(param_1 + 0x1d0) = lVar5;
LAB_1410dd718:
  if (lVar5 != 0) {
    FUN_1412ec8b0(lVar5);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410dd740 FUN_1410dd740 body=2089 status=ok
// SIG undefined FUN_1410dd740(void)

void FUN_1410dd740(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  wchar_t *pwVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  ulonglong uVar18;
  wchar_t *pwVar19;
  ulonglong local_res10;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined8 local_res20;
  undefined1 local_148 [8];
  longlong local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  wchar_t *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [8];
  longlong *local_a8;
  code *local_98 [2];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  
  *(undefined1 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x76c) = 0xffffffff;
  lVar8 = FUN_140eac060(param_1 + -0x4d8);
  if (lVar8 != 0) {
    lVar9 = UUGButton::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      *(undefined1 *)(param_1 + 0x328) = *(undefined1 *)(lVar8 + 0x688);
    }
  }
  lVar8 = FWeakObjectPtr::Get(param_1 + 0xb4);
  if (lVar8 == 0) {
LAB_1410dd82d:
    FWeakObjectPtr::operator=(&local_res18,0);
    *(undefined4 *)(param_1 + 0x738) = local_res18;
    *(undefined4 *)(param_1 + 0x73c) = local_res1c;
  }
  else {
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_1410dd82d;
    FUN_140d03d30(lVar8);
    FWeakObjectPtr::operator=(param_1 + 0x738,*(undefined8 *)(lVar8 + 0xc70));
  }
  FUN_140eb73b0(param_1);
  uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_b0,L"DESIGNER FIX ME: Not a part!",L"GFxCatchARideMenu",L"NoPartName");
  FText::operator=(param_1 + 0xa88,uVar10);
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_a8 + 1;
    lVar8 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x738);
  if (cVar6 != '\0') {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (*(longlong *)(DAT_146b33f38 + 0x90) != 0) {
      local_138 = (longlong *)0x0;
      local_130 = 0;
      FUN_1411e0d10(*(longlong *)(DAT_146b33f38 + 0x90),&local_138);
      local_res10 = 0;
      uVar18 = (ulonglong)((longlong)(local_138 + (int)local_130) + (7 - (longlong)local_138)) >> 3;
      if (local_138 + (int)local_130 < local_138) {
        uVar18 = 0;
      }
      plVar17 = local_138;
      if (uVar18 != 0) {
        do {
          lVar8 = *plVar17;
          if (((lVar8 != 0) && (local_res20 = 0, *(longlong *)(lVar8 + 0x50) != 0)) &&
             (local_110 = 0, *(longlong *)(lVar8 + 0x78) != 0)) {
            lVar11 = FWeakObjectPtr::Get(param_1 + 0x738);
            lVar9 = *(longlong *)(lVar11 + 0x1b8);
            lVar11 = (longlong)*(int *)(lVar11 + 0x1c0) * 0x188 + lVar9;
            for (; lVar9 != lVar11; lVar9 = lVar9 + 0x188) {
              cVar6 = FSoftObjectPath::operator==(lVar9 + 0x20,lVar8 + 0x50);
              if (cVar6 != '\0') {
                if (lVar9 != 0) goto LAB_1410dda33;
                break;
              }
            }
            lVar9 = FWeakObjectPtr::Get(param_1 + 0x738);
            iVar3 = *(int *)(lVar9 + 0x1c0);
            *(int *)(lVar9 + 0x1c0) = iVar3 + 1;
            if (*(int *)(lVar9 + 0x1c4) < iVar3 + 1) {
              TArray<FEnvQueryInstanceCache,FDefaultAllocator>::ResizeGrow
                        ((longlong *)(lVar9 + 0x1b8),iVar3);
            }
            FUN_1410b33e0((longlong)iVar3 * 0x188 + *(longlong *)(lVar9 + 0x1b8),lVar8 + 0x30);
          }
LAB_1410dda33:
          local_res10 = local_res10 + 1;
          plVar17 = plVar17 + 1;
        } while (local_res10 != uVar18);
      }
      if (local_138 != (longlong *)0x0) {
        FMemory::Free(local_138);
      }
    }
    lVar8 = param_1 + -0x4d8;
    plVar17 = (longlong *)(param_1 + 0x728);
    *(undefined4 *)(param_1 + 0x730) = 0;
    if (*(int *)(param_1 + 0x734) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar17,0);
    }
    lVar11 = FWeakObjectPtr::Get(param_1 + 0x738);
    lVar9 = *(longlong *)(lVar11 + 0x1b8);
    lVar11 = lVar9 + (longlong)*(int *)(lVar11 + 0x1c0) * 0x188;
    for (; lVar9 != lVar11; lVar9 = lVar9 + 0x188) {
      lVar12 = FUN_1410cac90(lVar9);
      if ((lVar12 != 0) && (*(char *)(lVar12 + 0x30) == *(char *)(param_1 + 0x328))) {
        FUN_1417846f0(lVar8,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        local_108 = 0;
        uVar10 = FUN_1413f21d0();
        lVar12 = FUN_1417985e0(uVar10,lVar8,local_108,0,0,0,0,0,0);
        if (lVar12 != 0) {
          uVar10 = FUN_1410cac90(lVar9);
          lVar13 = FUN_1410cb580(lVar8,uVar10);
          FUN_140e6bf90(lVar12 + 0x30,lVar9);
          if (lVar13 != 0) {
            *(undefined4 *)(lVar12 + 0x1b8) = *(undefined4 *)(lVar13 + 0x1b8);
            *(undefined4 *)(lVar12 + 0x1bc) = *(undefined4 *)(lVar13 + 0x1bc);
            *(undefined4 *)(lVar12 + 0x1c0) = *(undefined4 *)(lVar13 + 0x1c0);
            local_c8 = *(undefined8 *)(lVar13 + 0x1c8);
            FString::FString(local_c0,lVar13 + 0x1d0);
            FSoftObjectPath::operator=(lVar12 + 0x1c8,&local_c8);
          }
          iVar3 = *(int *)(param_1 + 0x730);
          *(int *)(param_1 + 0x730) = iVar3 + 1;
          if (*(int *)(param_1 + 0x734) < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar17,iVar3);
          }
          *(longlong *)(*plVar17 + (longlong)iVar3 * 8) = lVar12;
        }
      }
    }
  }
  pwVar19 = (wchar_t *)0x0;
  plVar17 = (longlong *)(param_1 + -0x4d8);
  if (*(char *)(param_1 + 0x108) != '\0') {
    *(undefined1 *)(param_1 + 0x770) = 0;
    FUN_1410e8c90(plVar17,1);
  }
  pwVar14 = (wchar_t *)FWeakObjectPtr::Get(param_1 + 0xbc);
  if (pwVar14 != (wchar_t *)0x0) {
    lVar8 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(pwVar14 + 8) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar14 + 8) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_1410ddc3f;
  }
  pwVar14 = pwVar19;
LAB_1410ddc3f:
  FUN_140eb0f20(param_1 + 0x338,pwVar14,param_1 + 0x6e8,param_1 + 0x6f0);
  FUN_140ec1260(param_1 + 0x338);
  FUN_1410c9120(plVar17);
  FUN_1417846f0(plVar17,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_100 = 0;
  uVar10 = UMaterialParameterCollectionInstance::GetPrivateStaticClass();
  lVar8 = FUN_1417985e0(uVar10,plVar17,local_100,0,0,0,0,0,0);
  *(longlong *)(param_1 + 0xc50) = lVar8;
  if (lVar8 != 0) {
    lVar8 = FWeakObjectPtr::Get(param_1 + 0xfc);
    if (lVar8 != 0) {
      lVar9 = FUN_1414d9130();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        local_f0 = *(undefined4 *)(lVar8 + 0xb78);
        uStack_ec = *(undefined4 *)(lVar8 + 0xb7c);
        uStack_e8 = *(undefined4 *)(lVar8 + 0xb80);
        uStack_e4 = *(undefined4 *)(lVar8 + 0xb84);
        local_e0 = *(undefined8 *)(lVar8 + 0xb88);
        cVar6 = FUN_142ebe120(plVar17);
        if (cVar6 == '\0') {
          uStack_ec = *(undefined4 *)(param_1 + 0x710);
        }
        else {
          uStack_ec = *(undefined4 *)(param_1 + 0x714);
        }
        FUN_1411f9620(*(undefined8 *)(param_1 + 0xc50),&local_f0);
        uVar7 = FUN_142eb7a90(plVar17);
        *(undefined4 *)(*(longlong *)(param_1 + 0xc50) + 0xd8) = uVar7;
      }
    }
    pwVar15 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnThumbnailLoaded",L"::");
    pwVar14 = pwVar19;
    while (pwVar5 = pwVar15, pwVar5 != (wchar_t *)0x0) {
      pwVar15 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
      pwVar14 = pwVar5;
    }
    FName::FName(&local_f8,pwVar14 + 2,1);
    lVar8 = *(longlong *)(param_1 + 0xc50);
    FWeakObjectPtr::operator=(local_148,0);
    local_140 = 0;
    FWeakObjectPtr::operator=(local_148,plVar17);
    local_140 = local_f8;
    if ((local_f8 != 0) && (lVar9 = FWeakObjectPtr::Get(local_148), lVar9 != 0)) {
      UObject::FindFunction(lVar9,local_140);
    }
    FUN_1406a5aa0(lVar8 + 0xe8,local_148);
  }
  cVar6 = (**(code **)(*plVar17 + 0x480))(plVar17);
  if ((cVar6 != '\0') && (*(char *)(param_1 + 0x1c0) == '\x05')) {
    FUN_1410f4150(plVar17);
    puVar16 = (undefined8 *)FUN_140ad4c90(plVar17,local_d8);
    pwVar14 = (wchar_t *)puVar16[1];
    local_120 = *puVar16;
    puVar16[1] = 0;
    *puVar16 = 0;
    local_128 = plVar17;
    local_118 = pwVar14;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_d0 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
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
    pwVar15 = local_118;
    local_68 = 0;
    local_58 = 0;
    puVar16 = (undefined8 *)FUN_140438ef0(0x20,local_88);
    if (puVar16 != (undefined8 *)0x0) {
      local_118 = (wchar_t *)0x0;
      *puVar16 = &PTR_FUN_14467a5d8;
      puVar16[1] = local_128;
      puVar16[2] = local_120;
      puVar16[3] = pwVar15;
      pwVar14 = pwVar19;
      pwVar15 = pwVar19;
    }
    local_98[0] = FUN_1410c55a0;
    FUN_14208c4f0(plVar17,local_98);
    pwVar19 = local_118;
    if (pwVar14 != (wchar_t *)0x0) {
      LOCK();
      pwVar15 = pwVar15 + 4;
      iVar3 = *(int *)pwVar15;
      *(int *)pwVar15 = *(int *)pwVar15 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)**(undefined8 **)local_118)(local_118);
        LOCK();
        pwVar19 = pwVar19 + 6;
        iVar3 = *(int *)pwVar19;
        *(int *)pwVar19 = *(int *)pwVar19 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*(longlong *)local_118 + 8))(local_118,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1410ddf70 FUN_1410ddf70 body=622 status=ok
// SIG undefined FUN_1410ddf70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410ddf70(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FUN_142ec85a0();
  lVar8 = param_1 + -0x4d8;
  FUN_1410ea650(lVar8);
  lVar3 = FWeakObjectPtr::Get(param_1 + 0xf4);
  if (lVar3 != 0) {
    lVar4 = FUN_142937720();
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
      plVar5 = (longlong *)UListView::OnItemSelectionChanged(lVar3);
      plVar9 = (longlong *)*plVar5;
      plVar5 = plVar9 + (int)plVar5[1];
      for (; plVar9 != plVar5; plVar9 = plVar9 + 1) {
        if ((*plVar9 != 0) && (lVar3 = *(longlong *)(*plVar9 + 0x30), lVar3 != 0)) {
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
          if (bVar1) {
            FUN_141460660(lVar3);
          }
        }
      }
    }
  }
  local_98 = (longlong *)0x0;
  local_88 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_b8);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = lVar8;
    *puVar6 = &PTR_FUN_143f77b70;
  }
  local_c8[0] = &LAB_1410c58f0;
  uVar7 = FUN_1420849a0(lVar8,local_78,local_c8);
  FUN_14208c260(lVar8,uVar7);
  if (local_38 != 0) {
    plVar5 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar5 = local_48;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    plVar5 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar5 = local_98;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xb4);
  if ((cVar2 != '\0') && (lVar8 = FWeakObjectPtr::Get(param_1 + 0xb4), lVar8 != 0)) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_14145e530(lVar8,0);
    }
  }
  return;
}



// FUNCTION 1410de1e0 FUN_1410de1e0 body=240 status=ok
// SIG undefined FUN_1410de1e0(void)

void FUN_1410de1e0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_28;
  longlong *local_20;
  longlong *local_18;
  longlong *local_10;
  
  FUN_142ec85a0();
  FUN_140b81da0(&local_18,0);
  if (local_18 != (longlong *)0x0) {
    (**(code **)(*local_18 + 0x10))(local_18,0);
  }
  FUN_1410cad60(&local_28,0);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x40))(local_28,0,0);
    (**(code **)(*local_28 + 0x18))(local_28,0);
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
  return;
}



// FUNCTION 1410de2d0 FUN_1410de2d0 body=51 status=ok
// SIG undefined FUN_1410de2d0(void)

void FUN_1410de2d0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0xc4);
  if (lVar1 != 0) {
    lVar1 = FUN_140ec9a00(lVar1);
    if (lVar1 != 0) {
      FUN_14112ea00(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1410de310 FUN_1410de310 body=681 status=ok
// SIG undefined FUN_1410de310(void)

void FUN_1410de310(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float local_res8;
  float fStackX_c;
  undefined4 local_68;
  float local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *plStack_48;
  
  FUN_142ec8c70();
  lVar8 = FWeakObjectPtr::Get(param_1 + 0xb4);
  if (lVar8 == 0) {
LAB_1410de381:
    lVar8 = 0;
  }
  else {
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_1410de381;
  }
  (**(code **)(*DAT_1469f4590 + 0x48))(DAT_1469f4590,&local_res8);
  fVar11 = local_res8 - *(float *)(param_1 + 0xde4);
  fVar10 = fStackX_c - *(float *)(param_1 + 0xde8);
  if (*(char *)(param_1 + 0xde2) == '\0') {
    *(ulonglong *)(param_1 + 0xde4) = CONCAT44(fStackX_c,local_res8);
  }
  else {
    FSlateApplication::SetCursorPos((int)DAT_1469f4590,(int)param_1 + 0xde4);
  }
  if (lVar8 == 0) goto LAB_1410de44f;
  if (((*(char *)(param_1 + 0xde2) == '\0') && ((*(uint *)(param_1 + -0x498) & 0x100) != 0)) &&
     (cVar6 = FWeakObjectPtr::IsValid(param_1 + 0xc4), cVar6 != '\0')) {
    lVar9 = FWeakObjectPtr::Get(param_1 + 0xc4);
    uVar7 = 1;
    if (*(char *)(lVar9 + 0xb8) != '\x02') goto LAB_1410de438;
  }
  else {
LAB_1410de438:
    uVar7 = 0;
  }
  *(uint *)(lVar8 + 0x6a8) = *(uint *)(lVar8 + 0x6a8) & 0xfffffffe;
  *(uint *)(lVar8 + 0x6a8) = *(uint *)(lVar8 + 0x6a8) | uVar7;
LAB_1410de44f:
  if (*(char *)(param_1 + 0xde2) != '\0') {
    plVar3 = (longlong *)(param_1 + -0x4d8);
    lVar8 = (**(code **)(*plVar3 + 0x148))(plVar3);
    if ((lVar8 != 0) &&
       (lVar8 = (**(code **)(*plVar3 + 0x148))(plVar3), 0.0001 < *(float *)(lVar8 + 0x7b0))) {
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      plStack_48 = (longlong *)0x0;
      local_68 = 0;
      lVar8 = (**(code **)(*plVar3 + 0x148))(plVar3);
      local_64 = (fVar11 * *(float *)(param_1 + 0x71c)) / *(float *)(lVar8 + 0x7b0);
      FKey::operator=(&local_58,&DAT_1469e9868);
      local_60 = DAT_146874cc8;
      if (0.0001 < ABS(fVar11)) {
        FUN_1410d1320(param_1,&local_68);
      }
      lVar8 = (**(code **)(*plVar3 + 0x148))(plVar3);
      local_64 = (fVar10 * *(float *)(param_1 + 0x71c)) / *(float *)(lVar8 + 0x7b0);
      local_60 = DAT_146874cd0;
      if (0.0001 < ABS(fVar10)) {
        FUN_1410d1320(param_1,&local_68);
      }
      plVar3 = plStack_48;
      if (plStack_48 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_48 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plStack_48)(plStack_48);
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
  }
  return;
}



// FUNCTION 1410de5c0 FUN_1410de5c0 body=104 status=ok
// SIG undefined FUN_1410de5c0(void)

void FUN_1410de5c0(longlong param_1,float param_2)

{
  FUN_142ec8c70();
  if (*(int *)(param_1 + 0x21c) != -1) {
    param_2 = *(float *)(param_1 + 0x218) - param_2;
    *(float *)(param_1 + 0x218) = param_2;
    if (param_2 <= 0.0) {
      FUN_1410f5f80(param_1 + -0x4d8,1);
      *(undefined4 *)(param_1 + 0x218) = 0;
      *(undefined4 *)(param_1 + 0x21c) = 0xffffffff;
    }
  }
  return;
}



// FUNCTION 1410de630 FUN_1410de630 body=582 status=ok
// SIG undefined FUN_1410de630(void)

void FUN_1410de630(longlong param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uVar8;
  float fVar9;
  
  FUN_142ec8c70();
  if (*(char *)(param_1 + -0x1f0) != '\0') {
    return;
  }
  lVar1 = param_1 + -0x4d8;
  *(float *)(param_1 + 0x2cc) = param_2 + *(float *)(param_1 + 0x2cc);
  FUN_1410c5e30(lVar1);
  lVar7 = 0;
  if (*(longlong *)(param_1 + 0x280) != 0) {
    if (*(char *)(param_1 + 0x2db) == '\0') {
      *(undefined4 *)(param_1 + 0x2d4) = 0;
    }
    *(undefined1 *)(param_1 + 0x2db) = 0;
  }
  fVar9 = *(float *)(param_1 + 0x2dc);
  if (fVar9 != 0.0) {
    if (fVar9 <= 0.0) {
      if (0.0 <= fVar9) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0xbf800000;
      }
    }
    else {
      uVar8 = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0x2d4) = uVar8;
    if ((*(char *)(param_1 + 0x2d8) == '\0') && (*(char *)(param_1 + 0x2da) == '\0')) {
      if (*(int *)(param_1 + 0x1d4) <= *(int *)(param_1 + 0x210)) {
        FUN_1410eab40(lVar1);
        fVar9 = *(float *)(param_1 + 0x2dc);
      }
      FUN_1410f5690(lVar1,fVar9);
      cVar5 = FUN_1410c5b00(lVar1);
      if (cVar5 != '\0') {
        FUN_1410cedc0(lVar1);
      }
    }
    *(undefined4 *)(param_1 + 0x2d4) = 0;
    *(undefined4 *)(param_1 + 0x2dc) = 0;
  }
  if (((*(char *)(param_1 + 0x2d8) == '\0') && (*(char *)(param_1 + 0x2da) == '\0')) &&
     (cVar5 = FUN_1410cfdf0(lVar1), cVar5 == '\0')) {
    if (*(int *)(param_1 + 0x1d4) <= *(int *)(param_1 + 0x210)) {
      FUN_1410eab40(lVar1);
    }
    FUN_1410f5690(lVar1,param_2 * *(float *)(param_1 + 0x2d4));
    cVar5 = FUN_1410c5b00(lVar1);
    if (cVar5 != '\0') {
      FUN_1410cedc0(lVar1);
    }
  }
  cVar5 = *(char *)(param_1 + 0x2d8);
  bVar4 = true;
  if (cVar5 == '\0') goto LAB_1410de835;
  iVar6 = *(int *)(param_1 + 0x2c8);
  iVar3 = *(int *)(param_1 + 0x1b0);
  if (iVar6 < iVar3) {
LAB_1410de7c8:
    lVar7 = (longlong)iVar6 * 0x50 + *(longlong *)(param_1 + 0x1a8);
  }
  else if (0 < iVar3) {
    iVar6 = iVar3 + -1;
    goto LAB_1410de7c8;
  }
  fVar9 = *(float *)(param_1 + 0x2d0);
  if (fVar9 <= 0.0) {
    if ((lVar7 != 0) && (fVar2 = *(float *)(lVar7 + 0x3c), 0.0 < fVar2)) {
      *(float *)(param_1 + 0x2d0) = fVar2;
      fVar9 = fVar2;
    }
  }
  else {
    *(float *)(param_1 + 0x2d0) = fVar9 - param_2;
    fVar9 = fVar9 - param_2;
  }
  if (0.0 < fVar9) {
    bVar4 = false;
  }
  else {
    *(int *)(param_1 + 0x2c8) = *(int *)(param_1 + 0x2c8) + 1;
    if (*(int *)(param_1 + 0x2c8) < *(int *)(param_1 + 0x1b0)) {
      FUN_1410efcb0(lVar1);
      cVar5 = *(char *)(param_1 + 0x2d8);
    }
  }
LAB_1410de835:
  if (((cVar5 != '\0') && (*(char *)(param_1 + 0x2d9) != '\0')) && (bVar4)) {
    FUN_142ecd3f0(lVar1);
    FUN_142eb3990(lVar1);
  }
  return;
}



// FUNCTION 1410de880 FUN_1410de880 body=82 status=ok
// SIG undefined FUN_1410de880(void)

void FUN_1410de880(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar3 = FUN_141329d80();
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
      *(undefined1 *)(lVar1 + 0x12ba) = 1;
    }
  }
  return;
}



// FUNCTION 1410de8e0 FUN_1410de8e0 body=82 status=ok
// SIG undefined FUN_1410de8e0(void)

void FUN_1410de8e0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar3 = FUN_141329d80();
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
      *(undefined1 *)(lVar1 + 0x12ba) = 0;
    }
  }
  return;
}



// FUNCTION 1410de940 FUN_1410de940 body=98 status=ok
// SIG undefined FUN_1410de940(void)

ulonglong FUN_1410de940(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_140cff230(*(undefined8 *)(param_1 + 0x7f0));
  if ((uVar3 != 0) && (param_2 != 0)) {
    uVar2 = FUN_142eb62f0(param_2);
    *(undefined4 *)(uVar3 + 0x208) = uVar2;
    *(undefined1 *)(uVar3 + 0x28) = 1;
    *(undefined1 *)(param_1 + 0x7d8) = 1;
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x588);
    *(uint *)(param_1 + 0x588) = 1;
    uVar3 = (ulonglong)uVar1;
    UNLOCK();
  }
  return uVar3;
}



// FUNCTION 1410de9b0 FUN_1410de9b0 body=103 status=ok
// SIG undefined FUN_1410de9b0(void)

ulonglong FUN_1410de9b0(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_140cff230(*(undefined8 *)(param_1 + 0x7f0));
  if ((uVar3 != 0) && (param_2 != 0)) {
    iVar2 = FUN_142eb62f0(param_2);
    *(undefined1 *)(uVar3 + 0x28) = 1;
    *(bool *)(uVar3 + 0x205) = 0 < iVar2;
    *(undefined1 *)(param_1 + 0x7d8) = 1;
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x588);
    *(uint *)(param_1 + 0x588) = 1;
    uVar3 = (ulonglong)uVar1;
    UNLOCK();
  }
  return uVar3;
}



// FUNCTION 1410dea20 FUN_1410dea20 body=360 status=ok
// SIG undefined FUN_1410dea20(void)

void FUN_1410dea20(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_58 [8];
  undefined8 local_50;
  longlong *plStack_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  if (param_2 == *(longlong *)(param_1 + 0x10a0)) {
    FName::FName(&local_68,&DAT_143f3eda8,1);
    local_5c = 0;
    local_60 = 0xffffffff;
    FName::FName(local_58,&DAT_143f3eda8,1);
    local_60 = *(undefined4 *)(param_3 + 8);
    local_68 = DAT_146874c70;
    local_5c = *(undefined1 *)(param_3 + 0xc);
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    local_40 = 0;
    FUN_1410da650(param_1 + 0x4d8,&local_68);
    plVar5 = plStack_48;
  }
  else {
    if (param_2 != *(longlong *)(param_1 + 0x1090)) {
      return;
    }
    FName::FName(&local_38,&DAT_143f3eda8,1);
    local_2c = 0;
    local_30 = 0xffffffff;
    FName::FName(local_28,&DAT_143f3eda8,1);
    local_30 = *(undefined4 *)(param_3 + 8);
    local_38 = DAT_146874c78;
    local_2c = *(undefined1 *)(param_3 + 0xc);
    local_20 = 0;
    plStack_18 = (longlong *)0x0;
    local_10 = 0;
    FUN_1410da650(param_1 + 0x4d8,&local_38);
    plVar5 = plStack_18;
  }
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



// FUNCTION 1410deb90 FUN_1410deb90 body=325 status=ok
// SIG undefined FUN_1410deb90(void)

void FUN_1410deb90(longlong *param_1,undefined1 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  *(undefined1 *)(param_1 + 599) = 0;
  switch(param_2) {
  case 1:
    pwVar3 = L"CAR_Part_Wheel";
    break;
  case 2:
    pwVar3 = L"CAR_Part_Armor";
    break;
  case 3:
    pwVar3 = L"CAR_Part_Mod";
    break;
  case 4:
    pwVar3 = L"CAR_Part_Turret";
    break;
  case 5:
    pwVar3 = L"CAR_Part_Driver_Weapon";
    break;
  default:
    goto switchD_1410debd9_caseD_6;
  case 7:
    pwVar3 = L"CAR_Part_Material";
    break;
  case 8:
    pwVar3 = L"CAR_Part_Material";
  }
  lVar1 = *param_1;
  local_98 = 0;
  local_90 = 0;
  puVar2 = (undefined8 *)FName::FName(&local_res8,pwVar3,1);
  (**(code **)(lVar1 + 0x4e8))(param_1,*puVar2,&local_98);
switchD_1410debd9_caseD_6:
  FWeakObjectPtr::operator=(&local_res20,param_3);
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_58 = 0;
  local_48 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x28,local_78);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1446a5428;
    puVar2[1] = param_1;
    *(undefined4 *)(puVar2 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar2 + 0x14) = local_resc;
    *(undefined1 *)(puVar2 + 3) = param_2;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = local_res20;
    *(undefined4 *)(puVar2 + 4) = local_res24;
  }
  local_88[0] = &LAB_1410c5530;
  FUN_14204c280(local_88);
  return;
}



// FUNCTION 1410ded00 FUN_1410ded00 body=103 status=ok
// SIG undefined FUN_1410ded00(void)

ulonglong FUN_1410ded00(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_140cff230(*(undefined8 *)(param_1 + 0x7f0));
  if ((uVar3 != 0) && (param_2 != 0)) {
    iVar2 = FUN_142eb62f0(param_2);
    *(undefined1 *)(uVar3 + 0x28) = 1;
    *(bool *)(uVar3 + 0x204) = 0 < iVar2;
    *(undefined1 *)(param_1 + 0x7d8) = 1;
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x588);
    *(uint *)(param_1 + 0x588) = 1;
    uVar3 = (ulonglong)uVar1;
    UNLOCK();
  }
  return uVar3;
}



// FUNCTION 1410ded70 FUN_1410ded70 body=770 status=ok
// SIG undefined FUN_1410ded70(void)

void FUN_1410ded70(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  longlong local_78;
  longlong *plStack_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  longlong local_58;
  longlong *plStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  bVar9 = false;
  iVar11 = 0;
  if ((int)param_1[0xe4] < 1) {
    return;
  }
  lVar10 = 0;
  plVar5 = (longlong *)param_1[0xe3];
  while (*plVar5 != param_2) {
    iVar11 = iVar11 + 1;
    lVar10 = lVar10 + 1;
    plVar5 = plVar5 + 1;
    if ((int)param_1[0xe4] <= lVar10) {
      return;
    }
  }
  lVar10 = *(longlong *)(param_1[0xe1] + 0x28 + (longlong)iVar11 * 0x30);
  if (lVar10 == 0) {
    return;
  }
  lVar6 = FUN_1410cb4f0(param_1);
  if (lVar6 == 0) {
    return;
  }
  FUN_142dcf3a0(lVar6,&local_78);
  if (local_78 == 0) goto LAB_1410def1f;
  uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar8 = FUN_140d3a420(uVar7);
  if (lVar8 == 0) {
LAB_1410dee83:
    bVar3 = false;
  }
  else {
    local_58 = local_78;
    plStack_50 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
      UNLOCK();
    }
    bVar9 = true;
    cVar4 = BuildSettings::IsPromotedBuild(lVar8,&local_58);
    if (cVar4 == '\0') goto LAB_1410dee83;
    bVar3 = true;
  }
  plVar5 = plStack_50;
  if ((bVar9) && (plStack_50 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (bVar3) {
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar5 = plStack_70 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plStack_70 + 0xc);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plStack_70 + 8))(plStack_70,1);
        }
      }
    }
    FUN_1410db850(param_1,lVar6,lVar10,0);
    return;
  }
LAB_1410def1f:
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_70 + 1;
    lVar10 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plStack_70 + 0xc);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plStack_70 + 8))(plStack_70,1);
      }
    }
  }
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_30,L"No Space",L"CharacterSelectMenu",L"TooManySavesTitle");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_48,
             L"You have too many save games, you must delete one before you can create a new character."
             ,L"CharacterSelectMenu",L"TooManySavesMessage");
  FWeakObjectPtr::operator=(local_68,0);
  local_60 = 0;
  uVar7 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  FUN_1410f3960(uVar7,local_30,local_48,local_68,0,lVar6,2);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_40 + 1;
    lVar10 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_28 + 1;
    lVar10 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  return;
}



// FUNCTION 1410df080 FUN_1410df080 body=80 status=ok
// SIG undefined FUN_1410df080(void)

void FUN_1410df080(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_58[0] = &LAB_1410c5820;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 1410df0d0 FUN_1410df0d0 body=560 status=ok
// SIG undefined FUN_1410df0d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410df0d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined1 auStack_e8 [32];
  undefined4 local_c8 [4];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  iVar2 = 0;
  if (*(int *)(param_1 + 0x720) < 1) {
    *(longlong *)(param_1 + 0x758) = param_2;
  }
  else {
    plVar5 = *(longlong **)(param_1 + 0x718);
    do {
      if (*plVar5 == param_2) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x708) + 0x28 + (longlong)iVar2 * 0x30);
        if (lVar1 != 0) {
          plVar5 = *(longlong **)(param_1 + 0x740);
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x2b0))(plVar5,lVar1 + 0x90,1,0);
          }
          plVar5 = *(longlong **)(param_1 + 0x748);
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x2b0))(plVar5,lVar1 + 0xc0,1,0);
          }
          uVar3 = FUN_1410cb4f0(param_1);
          FUN_1410f5980(param_1,uVar3,lVar1);
          if (*(longlong *)(param_1 + 0x758) != param_2) {
            local_c8[0] = 0xffffffff;
            FUN_14170c210(local_c8,lVar1);
            uVar6 = local_c8[0];
            local_c8[0] = 0xffffffff;
            local_88 = (longlong *)0x0;
            local_78 = 0;
            puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_a8);
            if (puVar4 != (undefined8 *)0x0) {
              *puVar4 = &PTR_FUN_144266c70;
              puVar4[1] = param_1;
              *(undefined4 *)(puVar4 + 2) = uVar6;
              uVar6 = 0xffffffff;
            }
            local_b8[0] = &LAB_1410c56e0;
            uVar3 = FUN_1420849a0(param_1,local_68,local_b8);
            FUN_14208c260(param_1,uVar3);
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
            if (local_78 != 0) {
              plVar5 = local_a8;
              if (local_88 != (longlong *)0x0) {
                plVar5 = local_88;
              }
              if (plVar5 != (longlong *)0x0) {
                (**(code **)(*plVar5 + 0x10))(plVar5,0);
              }
            }
            if (local_88 != (longlong *)0x0) {
              FMemory::Free();
            }
            FUN_1416f8340(uVar6);
            FUN_1416f8340(local_c8[0]);
          }
        }
        *(longlong *)(param_1 + 0x758) = param_2;
        return;
      }
      iVar2 = iVar2 + 1;
      plVar5 = plVar5 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x720));
    *(longlong *)(param_1 + 0x758) = param_2;
  }
  return;
}



// FUNCTION 1410df300 FUN_1410df300 body=463 status=ok
// SIG undefined FUN_1410df300(void)

void FUN_1410df300(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if (*(longlong *)(param_1 + 0x690) != 0) {
    iVar5 = FUN_142eb7a00();
    lVar6 = FUN_140f9aee0(param_1);
    if (((lVar6 != 0) && (-1 < iVar5)) && (iVar5 < *(int *)(lVar6 + 0xac0))) {
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0xab8) + (longlong)iVar5 * 8);
      if (lVar6 != 0) {
        if ((*(longlong *)(param_1 + 0x698) != 0) && (cVar4 = FUN_1410cfb00(param_1), cVar4 == '\0')
           ) {
          uVar7 = FName::ToString(lVar6 + 0x88,local_48);
          FUN_142088910(*(undefined8 *)(param_1 + 0x698),uVar7);
          if (local_48[0] != 0) {
            FMemory::Free();
          }
        }
        if (*(longlong **)(param_1 + 0x6a0) != (longlong *)0x0) {
          lVar2 = **(longlong **)(param_1 + 0x6a0);
          uVar7 = FText::ToUpper(lVar6 + 0x90,local_38);
          (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0x6a0),uVar7,1,0);
          if (local_30 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_30 + 1;
            lVar2 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_30)(local_30);
              LOCK();
              piVar1 = (int *)((longlong)local_30 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_30 + 8))(local_30,1);
              }
            }
          }
        }
        if (*(longlong **)(param_1 + 0x6a8) != (longlong *)0x0) {
          lVar2 = **(longlong **)(param_1 + 0x6a8);
          uVar7 = FText::ToUpper(lVar6 + 0xa8,local_20);
          (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0x6a8),uVar7,1,0);
          if (local_18 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_18 + 1;
            lVar2 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
              (**(code **)*local_18)(local_18);
              LOCK();
              piVar1 = (int *)((longlong)local_18 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_18 + 8))(local_18,1);
              }
            }
          }
        }
        plVar3 = *(longlong **)(param_1 + 0x6b0);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x2b0))(plVar3,lVar6 + 0xc0,1,0);
        }
      }
      FUN_1410f5f80(param_1,0);
    }
  }
  return;
}



// FUNCTION 1410df4d0 FUN_1410df4d0 body=87 status=ok
// SIG undefined FUN_1410df4d0(void)

void FUN_1410df4d0(longlong param_1)

{
  undefined8 *puVar1;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1 + -0x4d8;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_58[0] = FUN_1410c53f0;
  FUN_142edaae0(param_1 + -0x4d8,local_58);
  return;
}



// FUNCTION 1410df530 FUN_1410df530 body=62 status=ok
// SIG undefined FUN_1410df530(void)

void FUN_1410df530(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  if (*(longlong **)(param_1 + 0x728) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_1 + 0x728);
    iVar2 = FUN_1410cbe00();
    (**(code **)(lVar1 + 0x278))(*(undefined8 *)(param_1 + 0x728),0 < iVar2);
  }
  return;
}



// FUNCTION 1410df570 FUN_1410df570 body=137 status=ok
// SIG undefined FUN_1410df570(void)

void FUN_1410df570(undefined8 param_1)

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
  local_58[0] = &LAB_1410c5850;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 1410df600 FUN_1410df600 body=156 status=ok
// SIG undefined FUN_1410df600(void)

void FUN_1410df600(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_38 = 0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605c80;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
    *(undefined4 *)(puVar1 + 3) = param_2;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = param_4;
  }
  local_68[0] = &LAB_1410c5700;
  FUN_14204c280(local_68);
  return;
}



// FUNCTION 1410df6a0 FUN_1410df6a0 body=103 status=ok
// SIG undefined FUN_1410df6a0(void)

ulonglong FUN_1410df6a0(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_140cff230(*(undefined8 *)(param_1 + 0x7f0));
  if ((uVar3 != 0) && (param_2 != 0)) {
    iVar2 = FUN_142eb62f0(param_2);
    *(undefined1 *)(uVar3 + 0x28) = 1;
    *(bool *)(uVar3 + 0x1fc) = 0 < iVar2;
    *(undefined1 *)(param_1 + 0x7d8) = 1;
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x588);
    *(uint *)(param_1 + 0x588) = 1;
    uVar3 = (ulonglong)uVar1;
    UNLOCK();
  }
  return uVar3;
}



// FUNCTION 1410df710 FUN_1410df710 body=340 status=ok
// SIG undefined FUN_1410df710(void)

void FUN_1410df710(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar2 = (**(code **)(*param_1 + 0x148))();
  plVar3 = (longlong *)FUN_140d3a420(uVar2);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x128))(plVar3,param_1 + 0x60);
  }
  if ((char)param_1[99] != '\0') {
    if ((param_1[0x59] != 0) && (lVar5 = *(longlong *)(param_1[0x59] + 0x5a8), lVar5 != 0)) {
      lVar4 = FUN_14140ae40();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_140b83a60(lVar5);
        return;
      }
    }
    goto LAB_1410df842;
  }
  lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar5 == 0) || (lVar5 = *(longlong *)(lVar5 + 400), lVar5 == 0)) {
LAB_1410df81d:
    lVar5 = 0;
  }
  else {
    lVar4 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1410df81d;
  }
  if ((param_4 != '\0') && (lVar5 != 0)) {
    FUN_140bccab0(lVar5,0);
    return;
  }
LAB_1410df842:
                    /* WARNING: Could not recover jumptable at 0x0001410df85d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[0x57] + 0x110))(param_1 + 0x57,0);
  return;
}



// FUNCTION 1410df870 FUN_1410df870 body=320 status=ok
// SIG undefined FUN_1410df870(void)

void FUN_1410df870(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  if (((*(longlong *)(param_1 + 0x838) != 0) && (iVar4 = FUN_142eb7a00(), -1 < iVar4)) &&
     (iVar4 < *(int *)(param_1 + 0x830))) {
    *(longlong *)(param_1 + 0x840) = (longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x828);
    lVar5 = FUN_1410cb700(param_1);
    lVar6 = *(longlong *)(lVar5 + 0x30);
    lVar5 = (longlong)*(int *)(lVar5 + 0x38) * 0x30 + lVar6;
    if (lVar6 != lVar5) {
      while (*(longlong *)(lVar6 + 0x20) != DAT_146b3e2a0) {
        lVar6 = lVar6 + 0x30;
        if (lVar6 == lVar5) {
          return;
        }
      }
      FName::FName(local_38,&DAT_143f3eda8,1);
      local_2c = 0;
      local_30 = 0xffffffff;
      FName::FName(local_28,&DAT_143f3eda8,1);
      local_10 = 0;
      local_20 = 0;
      plStack_18 = (longlong *)0x0;
      FUN_1410c9870(param_1 + 0x808,param_1,*(undefined8 *)(lVar6 + 0x18),local_38);
      plVar3 = plStack_18;
      if (plStack_18 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_18 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_18)(plStack_18);
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
      FUN_142eb3990(param_1);
    }
  }
  return;
}



// FUNCTION 1410df9b0 FUN_1410df9b0 body=207 status=ok
// SIG undefined FUN_1410df9b0(void)

void FUN_1410df9b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 local_res18 [2];
  undefined1 local_28 [16];
  
  local_res18[0] = param_3;
  uVar2 = FName::FName(local_28,&DAT_1446901b4,1);
  iVar1 = FName::Compare(local_res18,uVar2);
  if (iVar1 == 0) {
    plVar3 = *(longlong **)(param_1 + 0x7e0);
    uVar5 = 0;
    uVar4 = (longlong)*(int *)(param_1 + 0x7e8) & 0x1fffffffffffffff;
    if (plVar3 + *(int *)(param_1 + 0x7e8) < plVar3) {
      uVar4 = uVar5;
    }
    if (uVar4 != 0) {
      do {
        if (*plVar3 != 0) {
          FUN_142ed16e0();
        }
        plVar3 = plVar3 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar4);
    }
    FUN_1410eade0(param_1);
    FUN_1410eb370(param_1);
    LOCK();
    *(undefined4 *)(param_1 + 0x588) = 1;
    UNLOCK();
    FUN_1410eb890(param_1);
  }
  return;
}



// FUNCTION 1410dfa80 FUN_1410dfa80 body=501 status=ok
// SIG undefined FUN_1410dfa80(void)

void FUN_1410dfa80(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if (param_2 != 0) {
    lVar5 = UGameInstanceGameParameters::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (lVar5 = FUN_142eb6340(param_2), lVar5 != 0)) {
      lVar6 = UMovieSceneSoundSetSection::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        if (*(longlong **)(param_1 + 0x770) != (longlong *)0x0) {
          lVar6 = **(longlong **)(param_1 + 0x770);
          uVar7 = FUN_1410cc100(lVar5,local_38);
          (**(code **)(lVar6 + 0x2b0))(*(undefined8 *)(param_1 + 0x770),uVar7,1,0);
          if (local_30 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_30 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
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
        if (*(longlong **)(param_1 + 0x778) == (longlong *)0x0) {
          return;
        }
        lVar6 = **(longlong **)(param_1 + 0x778);
        uVar7 = FUN_1410cbf60(lVar5,local_20);
        (**(code **)(lVar6 + 0x2b0))(*(undefined8 *)(param_1 + 0x778),uVar7,1,0);
        if (local_18 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar1 = local_18 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 != 1) {
          return;
        }
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar2 = (int *)((longlong)local_18 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 != 1) {
          return;
        }
        (**(code **)(*local_18 + 8))(local_18,1);
        return;
      }
    }
  }
  if (*(longlong **)(param_1 + 0x770) != (longlong *)0x0) {
    lVar5 = **(longlong **)(param_1 + 0x770);
    uVar7 = FUN_1404b03b0();
    (**(code **)(lVar5 + 0x2b0))(*(undefined8 *)(param_1 + 0x770),uVar7,1,0);
    if (*(longlong **)(param_1 + 0x770) != (longlong *)0x0) {
      lVar5 = **(longlong **)(param_1 + 0x770);
      uVar7 = FUN_1404b03b0();
                    /* WARNING: Could not recover jumptable at 0x0001410dfc72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x2b0))(*(undefined8 *)(param_1 + 0x770),uVar7,1,0);
      return;
    }
  }
  return;
}



// FUNCTION 1410dfc80 FUN_1410dfc80 body=268 status=ok
// SIG undefined FUN_1410dfc80(void)

void FUN_1410dfc80(longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar3 = *(longlong **)(param_1 + 0x1b8);
  if (plVar3 != (longlong *)0x0) {
    puVar7 = (undefined8 *)(**(code **)(*plVar3 + 8))(plVar3,local_28);
    if (((*(longlong **)(param_2 + 8) == (longlong *)0x0) ||
        (cVar6 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar6 == '\0')) ||
       (cVar6 = (**(code **)(*(longlong *)*puVar7 + 0x20))(), cVar6 == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((((*(longlong **)(param_2 + 8) == (longlong *)0x0) ||
          (cVar6 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))(), cVar6 == '\0')) &&
         (cVar6 = (**(code **)(*(longlong *)*puVar7 + 0x20))(), cVar6 == '\0')) ||
        ((bVar4 && (cVar6 = (**(code **)**(undefined8 **)(param_2 + 8))
                                      (*(undefined8 **)(param_2 + 8),*puVar7), cVar6 != '\0')))) &&
       (param_3 != 0xd)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
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
    if (bVar4) {
      FUN_1410eddc0(param_1,param_1 + 0x1b8);
    }
    return;
  }
  return;
}



// FUNCTION 1410dfd90 thunk_FUN_1410f52b0 body=5 status=ok
// SIG undefined thunk_FUN_1410f52b0(void)

void thunk_FUN_1410f52b0(longlong param_1,float param_2)

{
  int *piVar1;
  longlong *plVar2;
  void *_Dst;
  int iVar3;
  longlong lVar4;
  void *_Src;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  float fVar13;
  int aiStackX_8 [2];
  char acStackX_10 [8];
  longlong alStack_98 [2];
  undefined1 auStack_88 [8];
  longlong *plStack_80;
  longlong lStack_70;
  int *piStack_68;
  char *pcStack_60;
  longlong *plStack_58;
  
  if (1e-08 < ABS(*(float *)(param_1 + 0x82c) - param_2)) {
    alStack_98[1] = 3;
    acStackX_10[0] = *(float *)(param_1 + 0x82c) < param_2;
    alStack_98[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(alStack_98,0);
    FGenericPlatformString::Memcpy(alStack_98[0],&DAT_144693f04,6);
    param_2 = (float)*(int *)(param_1 + 0x830) * param_2;
    aiStackX_8[0] = (int)ROUND((param_2 + param_2) - 0.5) >> 1;
    piStack_68 = aiStackX_8;
    pcStack_60 = acStackX_10;
    plStack_58 = alStack_98;
    lStack_70 = param_1;
    iVar6 = FUN_1410bd8d0(&lStack_70);
    uVar10 = (ulonglong)iVar6;
    if ((iVar6 < 0) || (*(int *)(param_1 + 0x840) <= iVar6)) {
      *(undefined4 *)(param_1 + 0x828) = 0xffffffff;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x838);
      *(int *)(param_1 + 0x828) = iVar6;
      cVar5 = FUN_142ebdd70(param_1);
      iVar11 = 0xe;
      if (cVar5 != '\0') {
        iVar11 = 8;
      }
      lVar12 = uVar10 * 0x18;
      iVar11 = iVar11 + *(int *)(lVar12 + 0x14 + lVar4);
      if (*(longlong *)(param_1 + 0x848) != 0) {
        if ((acStackX_10[0] == '\0') || (iVar11 <= *(int *)(param_1 + 0x830))) {
          fVar13 = (float)*(int *)(lVar12 + 0x14 + *(longlong *)(param_1 + 0x838)) /
                   (float)*(int *)(param_1 + 0x830);
        }
        else {
          fVar13 = 1.0;
        }
        *(float *)(param_1 + 0x82c) = fVar13;
        FUN_142f0fa70();
      }
      plVar2 = (longlong *)(param_1 + 0x818);
      *(undefined4 *)(param_1 + 0x820) = 0;
      if ((*(int *)(param_1 + 0x824) < 0) && (*(int *)(param_1 + 0x824) != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar2);
      }
      if ((undefined2 *)*plVar2 != (undefined2 *)0x0) {
        *(undefined2 *)*plVar2 = 0;
      }
      if (iVar6 < *(int *)(param_1 + 0x840)) {
        do {
          lVar4 = *(longlong *)(param_1 + 0x838);
          if (iVar11 < *(int *)(lVar12 + 0x14 + lVar4)) break;
          iVar3 = *(int *)(lVar12 + 8 + lVar4);
          _Src = *(void **)(lVar12 + lVar4);
          iVar6 = iVar3 + -1;
          if (iVar3 == 0) {
            iVar6 = 0;
          }
          if (iVar6 != 0) {
            iVar3 = *(int *)(param_1 + 0x820);
            iVar7 = (uint)(iVar3 == 0) + iVar3 + iVar6;
            *(int *)(param_1 + 0x820) = iVar7;
            if (*(int *)(param_1 + 0x824) < iVar7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar2,iVar3);
            }
            _Dst = (void *)(*plVar2 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar6 * 2);
            *(undefined2 *)((longlong)iVar6 * 2 + (longlong)_Dst) = 0;
          }
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
          lVar12 = lVar12 + 0x18;
        } while ((int)uVar9 < *(int *)(param_1 + 0x840));
      }
      lVar4 = **(longlong **)(param_1 + 0x778);
      uVar8 = FText::FromString(auStack_88,plVar2);
      (**(code **)(lVar4 + 0x2b0))(*(undefined8 *)(param_1 + 0x778),uVar8,1,0);
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_80 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_80)(plStack_80);
          LOCK();
          piVar1 = (int *)((longlong)plStack_80 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plStack_80 + 8))(plStack_80,1);
          }
        }
      }
    }
    if (alStack_98[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1410dfdb0 FUN_1410dfdb0 body=27 status=ok
// SIG undefined FUN_1410dfdb0(void)

void FUN_1410dfdb0(longlong param_1)

{
  FUN_142ecbc80();
  *(undefined1 *)(param_1 + 0x698) = 1;
  return;
}



// FUNCTION 1410dfdd0 FUN_1410dfdd0 body=1919 status=ok
// SIG undefined FUN_1410dfdd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410dfdd0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_148 [32];
  longlong **local_128;
  longlong **local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  FUN_142ecbc80();
  local_e0 = 0xb;
  local_e8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  FGenericPlatformString::Memcpy(local_e8,L"titlePanel",0x16);
  local_128 = &local_f8;
  local_f8 = (longlong *)0x0;
  local_f0 = 0;
  lVar2 = FUN_140e96f30(param_1,&local_e8,0,6);
  plVar7 = local_f8;
  for (iVar8 = (int)local_f0; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_f8 != (longlong *)0x0) {
    FMemory::Free(local_f8);
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  if (lVar2 == 0) goto LAB_1410e0074;
  local_118 = (longlong *)0x0;
  local_110 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
  FGenericPlatformString::Memcpy(local_118,L"countdown",0x14);
  local_120 = &local_108;
  local_108 = (longlong *)0x0;
  plVar7 = (longlong *)(param_1 + 0x728);
  local_128 = (longlong **)CONCAT71(local_128._1_7_,6);
  local_100 = 0;
  cVar1 = FUN_140e99270(lVar2,plVar7,&local_118,0);
  plVar3 = local_108;
  for (iVar8 = (int)local_100; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free(local_108);
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (cVar1 != '\0') {
    plVar3 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
    lVar6 = plVar3[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar6 = plVar3[0x1f];
      if (lVar6 != 0) goto LAB_1410dff8f;
    }
    else {
LAB_1410dff8f:
      FUN_1410f55f0(param_1,*(undefined4 *)(lVar6 + 0x28));
    }
    if ((longlong *)*plVar7 != (longlong *)0x0) {
      lVar6 = *(longlong *)*plVar7;
      iVar8 = FUN_1410cbe00(param_1);
      (**(code **)(lVar6 + 0x278))(*plVar7,0 < iVar8);
    }
  }
  local_108 = (longlong *)0x0;
  local_100 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
  FGenericPlatformString::Memcpy(local_108,L"playerID",0x12);
  local_120 = &local_118;
  local_118 = (longlong *)0x0;
  local_128 = (longlong **)CONCAT71(local_128._1_7_,6);
  local_110 = 0;
  cVar1 = FUN_140e99270(lVar2,param_1 + 0x730,&local_108,0);
  plVar7 = local_118;
  for (iVar8 = (int)local_110; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free(local_118);
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (cVar1 != '\0') {
    FUN_1410f5c30(param_1);
  }
LAB_1410e0074:
  local_108 = (longlong *)0x0;
  local_100 = 0x1a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
  FGenericPlatformString::Memcpy(local_108,L"characterDescriptionPanel",0x34);
  local_120 = &local_118;
  local_118 = (longlong *)0x0;
  puVar5 = (undefined8 *)(param_1 + 0x738);
  local_128 = (longlong **)CONCAT71(local_128._1_7_,6);
  local_110 = 0;
  cVar1 = FUN_140ecf270(param_1,puVar5,&local_108,0);
  plVar7 = local_118;
  for (iVar8 = (int)local_110; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free(local_118);
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (cVar1 != '\0') {
    local_108 = (longlong *)0x0;
    local_100 = 0x1a;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
    FGenericPlatformString::Memcpy(local_108,L"characterDescriptionLabel",0x34);
    local_128 = &local_118;
    local_118 = (longlong *)0x0;
    local_110 = 0;
    uVar4 = FUN_140ecc7d0(*puVar5,&local_108,0,6);
    *(undefined8 *)(param_1 + 0x740) = uVar4;
    plVar7 = local_118;
    for (iVar8 = (int)local_110; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_118 != (longlong *)0x0) {
      FMemory::Free(local_118);
    }
    if (local_108 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_108 = (longlong *)0x0;
    local_100 = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
    FGenericPlatformString::Memcpy(local_108,L"characterDescription",0x2a);
    local_128 = &local_118;
    local_118 = (longlong *)0x0;
    local_110 = 0;
    uVar4 = FUN_140ecc7d0(*puVar5,&local_108,0,6);
    *(undefined8 *)(param_1 + 0x748) = uVar4;
    plVar7 = local_118;
    for (iVar8 = (int)local_110; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 2;
    }
    if (local_118 != (longlong *)0x0) {
      FMemory::Free(local_118);
    }
    if (local_108 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = param_1;
    *puVar5 = &PTR_FUN_143f77b70;
  }
  local_d8[0] = &LAB_1410c54e0;
  uVar4 = FUN_1420849a0(param_1,local_88,local_d8);
  FUN_14208c260(param_1,uVar4);
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
  if (local_98 != 0) {
    plVar7 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar7 = local_a8;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = param_1;
    *puVar5 = &PTR_FUN_143f77b70;
  }
  local_d8[0] = &LAB_1410c5670;
  uVar4 = FUN_1420849a0(param_1,local_88,local_d8);
  FUN_14208c260(param_1,uVar4);
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
  if (local_98 != 0) {
    plVar7 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar7 = local_a8;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1410c76d0(param_1);
  local_108 = (longlong *)0x0;
  local_100 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
  FGenericPlatformString::Memcpy(local_108,L"lobbyWidget",0x18);
  local_120 = &local_118;
  local_118 = (longlong *)0x0;
  local_128 = (longlong **)CONCAT71(local_128._1_7_,6);
  local_110 = 0;
  cVar1 = FUN_1410b09c0(param_1,param_1 + 0x750,&local_108,0);
  plVar7 = local_118;
  for (iVar8 = (int)local_110; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free(local_118);
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (cVar1 != '\0') {
    FUN_14109eb90(*(undefined8 *)(param_1 + 0x750),0);
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x750) + 0x170);
    (**(code **)(*plVar7 + 0x38))(plVar7,0);
  }
  FUN_142ecd4d0(param_1);
  if (*(longlong *)(param_1 + 0x600) != 0) {
    local_118 = (longlong *)0x0;
    local_110 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
    FGenericPlatformString::Memcpy(local_118,L"show",10);
    FUN_142088910(*(undefined8 *)(param_1 + 0x600),&local_118);
    if (local_118 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1410e0550 FUN_1410e0550 body=1931 status=ok
// SIG undefined FUN_1410e0550(void)

void FUN_1410e0550(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  longlong *plVar14;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  longlong local_188;
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
  longlong *local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined1 local_78 [8];
  longlong local_70 [2];
  undefined1 local_60 [8];
  longlong *local_58;
  
  FUN_142090ed0(param_1,0);
  FUN_142ecbc80(param_1);
  lVar9 = 0;
  local_180 = 10;
  local_188 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
  FGenericPlatformString::Memcpy(local_188,L"menuTitle",0x14);
  uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_60,L"CLASS SELECTION",L"CreateCharacter",L"MenuTitle");
  FUN_142ed5290(param_1,&local_188,uVar4);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_58 + 1;
    lVar5 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  if (local_188 != 0) {
    FMemory::Free();
  }
  local_178 = 0;
  local_170 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
  FGenericPlatformString::Memcpy(local_178,L"characterPicture",0x22);
  lVar5 = FUN_1420876d0(param_1,&local_178);
  param_1[0xd3] = lVar5;
  if (local_178 != 0) {
    FMemory::Free();
  }
  if ((param_1[0xd3] != 0) && (cVar3 = FUN_1410cfb00(param_1), cVar3 != '\0')) {
    (**(code **)(*(longlong *)param_1[0xd3] + 0x278))((longlong *)param_1[0xd3],0);
  }
  local_158 = 0;
  local_150 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
  FGenericPlatformString::Memcpy(local_158,L"TXT_CharacterClass",0x26);
  local_168 = (longlong *)0x0;
  local_160 = 0;
  lVar5 = FUN_140ac4770(param_1,&local_158,0,6,&local_168);
  param_1[0xd4] = lVar5;
  plVar11 = local_168;
  for (iVar13 = (int)local_160; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_168 != (longlong *)0x0) {
    FMemory::Free(local_168);
  }
  if (local_158 != 0) {
    FMemory::Free();
  }
  local_138 = 0;
  local_130 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"TXT_CharacterName",0x24);
  local_148 = (longlong *)0x0;
  local_140 = 0;
  lVar5 = FUN_140ac4770(param_1,&local_138,0,6,&local_148);
  param_1[0xd5] = lVar5;
  plVar11 = local_148;
  for (iVar13 = (int)local_140; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_148 != (longlong *)0x0) {
    FMemory::Free(local_148);
  }
  if (local_138 != 0) {
    FMemory::Free();
  }
  local_118 = 0;
  local_110 = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
  FGenericPlatformString::Memcpy(local_118,L"TXT_CharacterDescription",0x32);
  local_128 = (longlong *)0x0;
  local_120 = 0;
  lVar5 = FUN_140ac4770(param_1,&local_118,0,6,&local_128);
  param_1[0xd6] = lVar5;
  plVar11 = local_128;
  for (iVar13 = (int)local_120; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_128 != (longlong *)0x0) {
    FMemory::Free(local_128);
  }
  if (local_118 != 0) {
    FMemory::Free();
  }
  local_f8 = 0;
  local_f0 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
  FGenericPlatformString::Memcpy(local_f8,L"contentPanel",0x1a);
  local_108 = (longlong *)0x0;
  local_100 = 0;
  lVar5 = FUN_140ecb410(param_1,&local_f8,0,6,&local_108);
  param_1[0xd2] = lVar5;
  plVar11 = local_108;
  for (iVar13 = (int)local_100; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free(local_108);
  }
  if (local_f8 != 0) {
    FMemory::Free();
  }
  if (param_1[0xd2] != 0) {
    lVar5 = FUN_140f9aee0(param_1);
    if (lVar5 != 0) {
      plVar14 = *(longlong **)(lVar5 + 0xab8);
      plVar11 = plVar14 + *(int *)(lVar5 + 0xac0);
      for (; plVar14 != plVar11; plVar14 = plVar14 + 1) {
        lVar5 = *plVar14;
        if (lVar5 != 0) {
          local_e8 = 0;
          local_e0 = 0x1d;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
          FGenericPlatformString::Memcpy(local_e8,L"ClassCharacterListItemButton",0x3a);
          lVar6 = param_1[0xd2];
          uVar4 = URemnantGameInstance::GetPrivateStaticClass();
          lVar6 = FUN_142ebcee0(lVar6,&local_e8,uVar4,0);
          if (lVar6 == 0) {
LAB_1410e0a06:
            lVar6 = lVar9;
          }
          else {
            lVar7 = URemnantGameInstance::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) goto LAB_1410e0a06;
          }
          if (local_e8 != 0) {
            FMemory::Free();
          }
          if (lVar6 != 0) {
            FUN_142ed3af0(lVar6,lVar5 + 0x90,0);
            puVar8 = (undefined8 *)FName::FName(local_res20,L"OnPlayerClassItemClicked",1);
            FWeakObjectPtr::operator=(lVar6 + 0x1b0,param_1);
            *(undefined8 *)(lVar6 + 0x1b8) = *puVar8;
            puVar8 = (undefined8 *)FName::FName(local_78,L"OnPlayerClassItemFocused",1);
            FWeakObjectPtr::operator=(lVar6 + 0x1d0,param_1);
            *(undefined8 *)(lVar6 + 0x1d8) = *puVar8;
            if ((int)param_1[0xa1] == 0) {
              puVar10 = &DAT_143f3eda8;
            }
            else {
              puVar10 = (undefined2 *)param_1[0xa0];
            }
            FName::FName(&local_res10,puVar10,1);
            *(undefined8 *)(lVar6 + 0x1a8) = local_res10;
            if ((int)param_1[0x9f] == 0) {
              puVar10 = &DAT_143f3eda8;
            }
            else {
              puVar10 = (undefined2 *)param_1[0x9e];
            }
            FName::FName(&local_res18,puVar10,1);
            *(undefined8 *)(lVar6 + 0x1a0) = local_res18;
            local_c8 = 0;
            local_c0 = 0xf;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
            FGenericPlatformString::Memcpy(local_c8,L"characterClass",0x1e);
            local_d8 = (longlong *)0x0;
            local_d0 = 0;
            lVar6 = FUN_140ecbdf0(lVar6,&local_c8,0,6,&local_d8);
            plVar12 = local_d8;
            for (iVar13 = (int)local_d0; iVar13 != 0; iVar13 = iVar13 + -1) {
              if (*plVar12 != 0) {
                FMemory::Free();
              }
              plVar12 = plVar12 + 2;
            }
            if (local_d8 != (longlong *)0x0) {
              FMemory::Free(local_d8);
            }
            if (local_c8 != 0) {
              FMemory::Free();
            }
            if (lVar6 != 0) {
              FName::ToString(lVar5 + 0x88,local_70);
              FUN_142088910(lVar6);
              if (local_70[0] != 0) {
                FMemory::Free();
              }
            }
          }
        }
      }
    }
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    FWeakObjectPtr::operator=(&local_b8,0);
    FWeakObjectPtr::operator=(&local_b0,0);
    FWeakObjectPtr::operator=(&local_a8,0);
    FWeakObjectPtr::operator=(&local_a0,0);
    lVar5 = param_1[0xd2];
    local_90 = lVar9;
    local_98 = lVar5;
    if (lVar5 != 0) {
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      local_90 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar4);
    }
    FUN_142ecfd10(param_1,&local_98,&local_b8);
    FUN_142ed1f10(param_1[0xd2],0);
    lVar5 = param_1[0xd2];
    local_88 = lVar5;
    if (lVar5 != 0) {
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      lVar9 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar4);
    }
    local_80 = lVar9;
    FUN_142ed36d0(param_1,&local_88,0);
  }
  (**(code **)(*param_1 + 0x540))(param_1);
  FUN_142ecd4d0(param_1);
  return;
}



// FUNCTION 1410e0ce0 FUN_1410e0ce0 body=727 status=ok
// SIG undefined FUN_1410e0ce0(void)

void FUN_1410e0ce0(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  double dVar7;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  FUN_142ecbc80();
  local_40 = 0xd;
  local_48 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"CONT_Picture",0x1a);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  uVar2 = FUN_140e96f30(param_1,&local_48,0,6,&local_58);
  *(undefined8 *)(param_1 + 0x6c0) = uVar2;
  plVar5 = local_58;
  for (iVar6 = (int)local_50; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar5 = *(longlong **)(param_1 + 0x6c0);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x278))(plVar5,0);
  }
  local_58 = (longlong *)0x0;
  local_50 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"creditsPanel",0x1a);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  lVar3 = FUN_140e96f30(param_1,&local_58,0,6,&local_48);
  plVar5 = local_48;
  for (iVar6 = (int)local_40; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (lVar3 != 0) {
    local_28 = 0;
    local_20 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"creditsContainer",0x22);
    local_38 = (longlong *)0x0;
    local_30 = 0;
    uVar2 = FUN_140ecbdf0(lVar3,&local_28,0,6,&local_38);
    *(undefined8 *)(param_1 + 0x6c8) = uVar2;
    plVar5 = local_38;
    for (iVar6 = (int)local_30; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x6c8) != 0) {
      *(uint *)(param_1 + 0x78c) = *(uint *)(param_1 + 0x6a8) ^ 0x80000000;
      dVar7 = (double)FUN_142eeca30();
      *(float *)(param_1 + 0x790) = (float)(dVar7 + (double)*(float *)(param_1 + 0x6a8));
    }
  }
  FUN_1410f5090(param_1,1);
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
    if (bVar1) {
      FUN_140d045f0(lVar3);
    }
  }
  *(undefined1 *)(param_1 + 0x795) = 0;
  FUN_1410efcb0(param_1,0);
  FUN_142ecd4d0(param_1);
  return;
}



// FUNCTION 1410e0fc0 FUN_1410e0fc0 body=4054 status=ok
// SIG undefined FUN_1410e0fc0(void)

void FUN_1410e0fc0(longlong param_1)

{
  int *piVar1;
  wchar_t *pwVar2;
  char cVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  wchar_t *pwVar11;
  int iVar12;
  bool bVar13;
  longlong local_res10;
  undefined1 local_278 [8];
  longlong local_270;
  longlong local_268;
  undefined8 local_260;
  longlong *local_258;
  undefined8 local_250;
  longlong local_248;
  undefined8 local_240;
  longlong *local_238;
  undefined8 local_230;
  longlong local_228;
  undefined8 local_220;
  longlong *local_218;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  longlong *local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
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
  longlong *local_128;
  undefined8 local_120;
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
  longlong local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  pwVar9 = (wchar_t *)0x0;
  FUN_1410e1fa0();
  local_268 = 0;
  local_260 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_268,10,"menuTitle",10,0x3f);
  uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_48,L"ECHOcast Settings",L"EchoCastMenu",L"EchoCastHeaderText");
  FUN_142ed5290(param_1,&local_268,uVar4);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_40 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (local_268 != 0) {
    FMemory::Free();
  }
  pwVar5 = (wchar_t *)FWeakObjectPtr::Get(param_1 + 0x58c);
  if (pwVar5 != (wchar_t *)0x0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(pwVar5 + 8) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar5 + 8) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    if (bVar13) goto LAB_1410e10f9;
  }
  pwVar5 = pwVar9;
LAB_1410e10f9:
  *(wchar_t **)(param_1 + 0x7f0) = pwVar5;
  local_248 = 0;
  local_240 = 0x20;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
  FGenericPlatformString::Memcpy(local_248,L"PNL_ECHOcastSettingsDescription",0x40);
  local_258 = (longlong *)0x0;
  local_250 = 0;
  uVar4 = FUN_140e96f30(param_1,&local_248,0,6,&local_258);
  *(undefined8 *)(param_1 + 0x768) = uVar4;
  plVar10 = local_258;
  for (iVar12 = (int)local_250; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_258 != (longlong *)0x0) {
    FMemory::Free(local_258);
  }
  if (local_248 != 0) {
    FMemory::Free();
  }
  pwVar5 = pwVar9;
  pwVar11 = pwVar9;
  if (*(longlong *)(param_1 + 0x768) != 0) {
    local_228 = 0;
    local_220 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
    FGenericPlatformString::Memcpy(local_228,L"SettingTitle",0x1a);
    local_238 = (longlong *)0x0;
    local_230 = 0;
    pwVar5 = (wchar_t *)FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x768),&local_228,0,6,&local_238);
    pwVar11 = (wchar_t *)0x3;
  }
  *(wchar_t **)(param_1 + 0x770) = pwVar5;
  if (((ulonglong)pwVar11 & 2) != 0) {
    pwVar11 = (wchar_t *)(ulonglong)((uint)pwVar11 & 0xfffffffd);
    plVar10 = local_238;
    for (iVar12 = (int)local_230; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_238 != (longlong *)0x0) {
      FMemory::Free(local_238);
    }
  }
  if ((((ulonglong)pwVar11 & 1) != 0) &&
     (pwVar11 = (wchar_t *)(ulonglong)((uint)pwVar11 & 0xfffffffe), local_228 != 0)) {
    FMemory::Free();
  }
  pwVar5 = pwVar9;
  if (*(longlong *)(param_1 + 0x768) != 0) {
    local_208 = 0;
    local_200 = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
    FGenericPlatformString::Memcpy(local_208,L"SettingDescription",0x26);
    pwVar11 = (wchar_t *)(ulonglong)((uint)pwVar11 | 0xc);
    local_218 = (longlong *)0x0;
    local_210 = 0;
    pwVar5 = (wchar_t *)FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x768),&local_208,0,6,&local_218);
  }
  *(wchar_t **)(param_1 + 0x778) = pwVar5;
  if (((ulonglong)pwVar11 & 8) != 0) {
    pwVar11 = (wchar_t *)(ulonglong)((uint)pwVar11 & 0xfffffff7);
    plVar10 = local_218;
    for (iVar12 = (int)local_210; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_218 != (longlong *)0x0) {
      FMemory::Free(local_218);
    }
  }
  if ((((ulonglong)pwVar11 & 4) != 0) &&
     (pwVar11 = (wchar_t *)(ulonglong)((uint)pwVar11 & 0xfffffffb), local_208 != 0)) {
    FMemory::Free();
  }
  local_1e8 = 0;
  local_1e0 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
  FGenericPlatformString::Memcpy(local_1e8,L"PNL_ECHOcastSettings",0x2a);
  local_1f8 = (longlong *)0x0;
  local_1f0 = 0;
  uVar4 = FUN_140e96f30(param_1,&local_1e8,0,6,&local_1f8);
  *(undefined8 *)(param_1 + 0x780) = uVar4;
  plVar10 = local_1f8;
  for (iVar12 = (int)local_1f0; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_1f8 != (longlong *)0x0) {
    FMemory::Free(local_1f8);
  }
  if (local_1e8 != 0) {
    FMemory::Free();
  }
  local_1d8 = 0;
  local_1d0 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
  FGenericPlatformString::Memcpy(local_1d8,L"TXT_Settings_Title",0x26);
  FUN_1410ebef0(param_1,*(undefined8 *)(param_1 + 0x780),&local_1d8,param_1 + 0x690);
  if (local_1d8 != 0) {
    FMemory::Free();
  }
  pwVar5 = pwVar9;
  if (*(longlong *)(param_1 + 0x780) != 0) {
    local_1b8 = 0;
    local_1b0 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
    FGenericPlatformString::Memcpy(local_1b8,L"CONT_ListSettings",0x24);
    pwVar11 = (wchar_t *)(ulonglong)((uint)pwVar11 | 0x30);
    local_1c8 = (longlong *)0x0;
    local_1c0 = 0;
    pwVar5 = (wchar_t *)FUN_140ecb6b0(*(undefined8 *)(param_1 + 0x780),&local_1b8,0,6,&local_1c8);
  }
  *(wchar_t **)(param_1 + 0x788) = pwVar5;
  if (((ulonglong)pwVar11 & 0x20) != 0) {
    pwVar11 = (wchar_t *)(ulonglong)((uint)pwVar11 & 0xffffffdf);
    plVar10 = local_1c8;
    for (iVar12 = (int)local_1c0; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_1c8 != (longlong *)0x0) {
      FMemory::Free(local_1c8);
    }
  }
  if ((((ulonglong)pwVar11 & 0x10) != 0) &&
     (pwVar11 = (wchar_t *)(ulonglong)((uint)pwVar11 & 0xffffffef), local_1b8 != 0)) {
    FMemory::Free();
  }
  pwVar5 = pwVar9;
  if (*(longlong *)(param_1 + 0x780) != 0) {
    local_198 = 0;
    local_190 = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
    FGenericPlatformString::Memcpy(local_198,L"SCROLLBAR_Settings",0x26);
    pwVar11 = (wchar_t *)(ulonglong)((uint)pwVar11 | 0xc0);
    local_1a8 = (longlong *)0x0;
    local_1a0 = 0;
    pwVar5 = (wchar_t *)FUN_141021f30(*(undefined8 *)(param_1 + 0x780),&local_198,0,6,&local_1a8);
  }
  if ((char)pwVar11 < '\0') {
    pwVar11 = (wchar_t *)(ulonglong)((uint)pwVar11 & 0xffffff7f);
    plVar10 = local_1a8;
    for (iVar12 = (int)local_1a0; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_1a8 != (longlong *)0x0) {
      FMemory::Free(local_1a8);
    }
  }
  if ((((ulonglong)pwVar11 & 0x40) != 0) && (local_198 != 0)) {
    FMemory::Free();
  }
  FUN_1410eade0(param_1);
  if (*(longlong *)(param_1 + 0x788) != 0) {
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnSettingsSelectionChanged",L"::");
    pwVar11 = pwVar9;
    while (pwVar2 = pwVar7, pwVar2 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar11 = pwVar2;
    }
    FName::FName(&local_res10,pwVar11 + 2,1);
    lVar6 = *(longlong *)(param_1 + 0x788);
    FWeakObjectPtr::operator=(local_278,0);
    local_270 = 0;
    FWeakObjectPtr::operator=(local_278,param_1);
    local_270 = local_res10;
    if ((local_res10 != 0) && (lVar8 = FWeakObjectPtr::Get(local_278), lVar8 != 0)) {
      UObject::FindFunction(lVar8,local_270);
    }
    FUN_1406a5aa0(lVar6 + 0x180,local_278);
    FUN_142ed4250(*(undefined8 *)(param_1 + 0x788),pwVar5);
    (**(code **)(**(longlong **)(param_1 + 0x788) + 0x2c8))(*(longlong **)(param_1 + 0x788),1,0);
  }
  local_178 = 0;
  local_170 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
  FGenericPlatformString::Memcpy(local_178,L"PNL_ECHOcastStatus",0x26);
  local_188 = (longlong *)0x0;
  local_180 = 0;
  uVar4 = FUN_140e96f30(param_1,&local_178,0,6,&local_188);
  *(undefined8 *)(param_1 + 0x790) = uVar4;
  plVar10 = local_188;
  for (iVar12 = (int)local_180; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_188 != (longlong *)0x0) {
    FMemory::Free(local_188);
  }
  if (local_178 != 0) {
    FMemory::Free();
  }
  FUN_1410ed750(param_1);
  bVar13 = *(longlong *)(param_1 + 0x790) != 0;
  pwVar5 = pwVar9;
  if (bVar13) {
    local_158 = 0;
    local_150 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
    FGenericPlatformString::Memcpy(local_158,L"TXT_StatInfo_01",0x20);
    local_168 = (longlong *)0x0;
    local_160 = 0;
    pwVar5 = (wchar_t *)FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x790),&local_158,0,6,&local_168);
  }
  *(wchar_t **)(param_1 + 0x798) = pwVar5;
  if (bVar13) {
    plVar10 = local_168;
    for (iVar12 = (int)local_160; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_168 != (longlong *)0x0) {
      FMemory::Free(local_168);
    }
  }
  if ((bVar13) && (local_158 != 0)) {
    FMemory::Free();
  }
  bVar13 = *(longlong *)(param_1 + 0x790) != 0;
  pwVar5 = pwVar9;
  if (bVar13) {
    local_138 = 0;
    local_130 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
    FGenericPlatformString::Memcpy(local_138,L"TXT_StatInfo_02",0x20);
    local_148 = (longlong *)0x0;
    local_140 = 0;
    pwVar5 = (wchar_t *)FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x790),&local_138,0,6,&local_148);
  }
  *(wchar_t **)(param_1 + 0x7a0) = pwVar5;
  if (bVar13) {
    plVar10 = local_148;
    for (iVar12 = (int)local_140; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free(local_148);
    }
  }
  if ((bVar13) && (local_138 != 0)) {
    FMemory::Free();
  }
  bVar13 = *(longlong *)(param_1 + 0x790) != 0;
  pwVar5 = pwVar9;
  if (bVar13) {
    local_118 = 0;
    local_110 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
    FGenericPlatformString::Memcpy(local_118,L"TXT_StatInfo_03",0x20);
    local_128 = (longlong *)0x0;
    local_120 = 0;
    pwVar5 = (wchar_t *)FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x790),&local_118,0,6,&local_128);
  }
  *(wchar_t **)(param_1 + 0x7a8) = pwVar5;
  if (bVar13) {
    plVar10 = local_128;
    for (iVar12 = (int)local_120; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_128 != (longlong *)0x0) {
      FMemory::Free(local_128);
    }
  }
  if ((bVar13) && (local_118 != 0)) {
    FMemory::Free();
  }
  bVar13 = *(longlong *)(param_1 + 0x790) != 0;
  pwVar5 = pwVar9;
  if (bVar13) {
    local_f8 = 0;
    local_f0 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    FGenericPlatformString::Memcpy(local_f8,L"TXT_StatInfo_04",0x20);
    local_108 = (longlong *)0x0;
    local_100 = 0;
    pwVar5 = (wchar_t *)FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x790),&local_f8,0,6,&local_108);
  }
  *(wchar_t **)(param_1 + 0x7b0) = pwVar5;
  if (bVar13) {
    plVar10 = local_108;
    for (iVar12 = (int)local_100; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_108 != (longlong *)0x0) {
      FMemory::Free(local_108);
    }
  }
  if ((bVar13) && (local_f8 != 0)) {
    FMemory::Free();
  }
  bVar13 = *(longlong *)(param_1 + 0x790) != 0;
  pwVar5 = pwVar9;
  if (bVar13) {
    local_d8 = 0;
    local_d0 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    FGenericPlatformString::Memcpy(local_d8,L"TXT_StatInfo_05",0x20);
    local_e8 = (longlong *)0x0;
    local_e0 = 0;
    pwVar5 = (wchar_t *)FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x790),&local_d8,0,6,&local_e8);
  }
  *(wchar_t **)(param_1 + 0x7b8) = pwVar5;
  if (bVar13) {
    plVar10 = local_e8;
    for (iVar12 = (int)local_e0; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_e8 != (longlong *)0x0) {
      FMemory::Free(local_e8);
    }
  }
  if ((bVar13) && (local_d8 != 0)) {
    FMemory::Free();
  }
  bVar13 = *(longlong *)(param_1 + 0x790) != 0;
  pwVar5 = pwVar9;
  if (bVar13) {
    local_b8 = 0;
    local_b0 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    FGenericPlatformString::Memcpy(local_b8,L"TXT_StatInfo_06",0x20);
    local_c8 = (longlong *)0x0;
    local_c0 = 0;
    pwVar5 = (wchar_t *)FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x790),&local_b8,0,6,&local_c8);
  }
  *(wchar_t **)(param_1 + 0x7c0) = pwVar5;
  if (bVar13) {
    plVar10 = local_c8;
    for (iVar12 = (int)local_c0; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
  }
  if ((bVar13) && (local_b8 != 0)) {
    FMemory::Free();
  }
  bVar13 = *(longlong *)(param_1 + 0x790) != 0;
  pwVar5 = pwVar9;
  if (bVar13) {
    local_98 = 0;
    local_90 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    FGenericPlatformString::Memcpy(local_98,L"ANIM_Notification",0x24);
    local_a8 = (longlong *)0x0;
    local_a0 = 0;
    pwVar5 = (wchar_t *)FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x790),&local_98,0,6,&local_a8);
  }
  *(wchar_t **)(param_1 + 0x7c8) = pwVar5;
  if (bVar13) {
    plVar10 = local_a8;
    for (iVar12 = (int)local_a0; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free(local_a8);
    }
  }
  if ((bVar13) && (local_98 != 0)) {
    FMemory::Free();
  }
  local_88 = 0;
  local_80 = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  FGenericPlatformString::Memcpy(local_88,L"TXT_Notification_Title",0x2e);
  FUN_1410ebef0(param_1,*(undefined8 *)(param_1 + 0x7c8),&local_88,param_1 + 0x750);
  if (local_88 != 0) {
    FMemory::Free();
  }
  bVar13 = *(longlong *)(param_1 + 0x7c8) != 0;
  if (bVar13) {
    local_68 = 0;
    local_60 = 0x1d;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    FGenericPlatformString::Memcpy(local_68,L"TXT_Notification_Description",0x3a);
    local_78 = (longlong *)0x0;
    local_70 = 0;
    pwVar9 = (wchar_t *)FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x7c8),&local_68,0,6,&local_78);
  }
  *(wchar_t **)(param_1 + 2000) = pwVar9;
  if (bVar13) {
    plVar10 = local_78;
    for (iVar12 = (int)local_70; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free(local_78);
    }
  }
  if ((bVar13) && (local_68 != 0)) {
    FMemory::Free();
  }
  if ((((*(longlong *)(param_1 + 0x7c8) != 0) &&
       (lVar6 = FUN_140cff230(*(undefined8 *)(param_1 + 0x7f0)), lVar6 != 0)) &&
      (*(longlong *)(param_1 + 0x7f0) != 0)) &&
     (cVar3 = APlayerController::IsPrimaryPlayer(), cVar3 != '\0')) {
    local_58 = 0;
    local_50 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"show",10);
    FUN_142088910(*(undefined8 *)(param_1 + 0x7c8),&local_58);
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  FUN_1410eb370(param_1);
  FUN_1410ea760(param_1);
  return;
}



// FUNCTION 1410e1fa0 FUN_1410e1fa0 body=408 status=ok
// SIG undefined FUN_1410e1fa0(void)

undefined4 FUN_1410e1fa0(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  FUN_142ecbc80();
  local_50 = 0x1a;
  local_58 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"PNL_EchoNetNavigation_Bar",0x34);
  local_68 = (longlong *)0x0;
  local_60 = 0;
  plVar2 = (longlong *)FUN_140e96f30(param_1,&local_58,0,6,&local_68);
  plVar4 = local_68;
  for (iVar3 = (int)local_60; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x278))(plVar2,0);
  }
  local_38 = 0;
  local_30 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"lobbyWidget",0x18);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  plVar2 = (longlong *)FUN_140e96f30(param_1,&local_38,0,6,&local_48);
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
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x278))(plVar2,0);
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 1410e2140 FUN_1410e2140 body=1938 status=ok
// SIG undefined FUN_1410e2140(void)

void FUN_1410e2140(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  wchar_t *pwVar13;
  ulonglong uVar14;
  undefined4 local_res8;
  float fStackX_c;
  longlong *local_48;
  ulonglong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  *(undefined1 *)((longlong)param_1 + 500) = 1;
  FUN_142ecbc80();
  lVar4 = param_1[0x9d];
  uVar8 = 0;
  if (lVar4 != 0) {
    lVar3 = FUN_141319ff0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    uVar14 = lVar4 + 0xc0;
    if (bVar1) goto LAB_1410e21b6;
  }
  uVar14 = uVar8;
LAB_1410e21b6:
  local_38 = (longlong *)0x0;
  local_30 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"headerTextField",0x20);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  lVar4 = FUN_140ac4770(param_1,&local_38,0,6,&local_48);
  param_1[0xee] = lVar4;
  plVar7 = local_48;
  for (iVar12 = (int)local_40; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  pwVar13 = L"bodyTextField";
  local_48 = (longlong *)0x0;
  if (*(char *)((longlong)param_1 + 0x7ac) != '\0') {
    pwVar13 = L"windowFrame.EULA.descriptionWrapper.descriptionText";
  }
  local_40 = 0;
  uVar11 = 0xffffffffffffffff;
  if (*pwVar13 != L'\0') {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (pwVar13[lVar4] != L'\0');
    uVar10 = (int)lVar4 + 1;
    local_40 = (ulonglong)uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    FGenericPlatformString::Memcpy(local_48,pwVar13,(longlong)(int)uVar10 * 2);
  }
  local_38 = (longlong *)0x0;
  local_30 = 0;
  lVar4 = FUN_140ac4770(param_1,&local_48,0,6,&local_38);
  param_1[0xef] = lVar4;
  plVar7 = local_38;
  for (iVar12 = (int)local_30; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"inputTextField",0x1e);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  lVar4 = FUN_1410ade00(param_1,&local_48,0,6,&local_38);
  param_1[0xf0] = lVar4;
  plVar7 = local_38;
  for (iVar12 = (int)local_30; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"playerName",0x16);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  lVar4 = FUN_140ac4770(param_1,&local_48,0,6,&local_38);
  param_1[0xf3] = lVar4;
  plVar7 = local_38;
  for (iVar12 = (int)local_30; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"processing",0x16);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  lVar4 = FUN_140e96f30(param_1,&local_48,0,6,&local_38);
  param_1[0xf4] = lVar4;
  plVar7 = local_38;
  for (iVar12 = (int)local_30; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"contentPanel",0x1a);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  lVar4 = FUN_140ecb410(param_1,&local_48,0,6,&local_38);
  param_1[0xf1] = lVar4;
  plVar7 = local_38;
  for (iVar12 = (int)local_30; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (uVar14 != 0) {
    if (param_1[0xf3] != 0) {
      lVar4 = FUN_1410cb700(param_1);
      if (((lVar4 != 0) && (*(char *)(lVar4 + 0x83) == '\0')) && (*(longlong *)(lVar4 + 0x98) != 0))
      {
        FUN_1410ec5a0(param_1,*(longlong *)(lVar4 + 0x98),0);
      }
      lVar4 = *(longlong *)param_1[0xf3];
      uVar5 = FUN_1404b03b0();
      (**(code **)(lVar4 + 0x2b0))(param_1[0xf3],uVar5,1,0);
    }
    FUN_1410c7f20(param_1,uVar14);
    plVar7 = (longlong *)param_1[0xf0];
    uVar6 = uVar8;
    local_38 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      uVar5 = UBlendableInterface::GetPrivateStaticClass();
      uVar6 = UObjectBaseUtility::GetInterfaceAddress(plVar7,uVar5);
    }
    local_30 = uVar6;
    FUN_142ecfdd0(param_1,&local_38,0,0,0,0);
    if ((param_1[0xf0] != 0) && (*(char *)(uVar14 + 0x82) != '\0')) {
      FUN_142ed3fe0(param_1[0xf0],1);
    }
    if (*(char *)(uVar14 + 0x81) == '\0') {
      plVar7 = (longlong *)param_1[0xf0];
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x278))(plVar7,0);
      }
    }
    else {
      plVar7 = (longlong *)param_1[0xef];
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x278))(plVar7,0);
      }
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x80;
    }
    *(undefined4 *)(param_1 + 0x101) = *(undefined4 *)(uVar14 + 0x40);
    *(undefined4 *)((longlong)param_1 + 0x80c) = *(undefined4 *)(uVar14 + 0x44);
    param_1[0x102] = *(longlong *)(uVar14 + 0x48);
    FText::operator=(param_1 + 0xf6,uVar14);
    FText::operator=(param_1 + 0xf9,uVar14 + 0x18);
    FText::operator=(param_1 + 0xfc,uVar14 + 0x68);
    if ((*(int *)(uVar14 + 0x88) == 0) && (*(int *)(uVar14 + 0x8c) == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      lVar4 = param_1[0x9d];
      uVar6 = uVar11;
      if (lVar4 != 0) {
        lVar3 = FUN_141319ff0();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (((bVar1) && (lVar4 != -0xc0)) && (0 < *(int *)(lVar4 + 0xf8))) {
          plVar7 = (longlong *)(*(longlong *)(lVar4 + 0xf0) + 0x18);
          uVar9 = uVar8;
          do {
            uVar6 = uVar9;
            if (*plVar7 == *(longlong *)(uVar14 + 0x88)) break;
            uVar9 = (ulonglong)((int)uVar9 + 1);
            uVar8 = uVar8 + 1;
            plVar7 = plVar7 + 6;
            uVar6 = uVar11;
          } while ((longlong)uVar8 < (longlong)*(int *)(lVar4 + 0xf8));
        }
      }
      plVar7 = (longlong *)param_1[0xf1];
      if (plVar7 == (longlong *)0x0) {
        *(int *)(param_1 + 0xf5) = (int)uVar6;
      }
      else {
        (**(code **)(*plVar7 + 0x2b8))(plVar7,uVar6 & 0xffffffff,0,0);
      }
    }
    if (((*(longlong *)(uVar14 + 0x98) != 0) && (param_1[0xb7] != 0)) && (param_1[0xb6] != 0)) {
      (**(code **)(*(longlong *)(param_1[0xb7] + 800) + 0x10))();
    }
  }
  (**(code **)(*param_1 + 0x568))(param_1);
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar4 != 0) {
    (**(code **)(*param_1 + 0x148))(param_1);
  }
  if (((param_1[0x57] != 0) && (cVar2 = FUN_142ebe120(param_1), cVar2 != '\0')) &&
     ((cVar2 = FUN_142ebdd70(param_1), cVar2 != '\0' &&
      ((FUN_1420904e0(param_1[0x57],0x42be000042be0000), param_1[0x86] != 0 &&
       (cVar2 = APlayerController::IsPrimaryPlayer(), cVar2 == '\0')))))) {
    FUN_142087ad0(param_1[0x57],&local_res8,&fStackX_c);
    fStackX_c = fStackX_c + 55.0;
    FUN_1420900f0(param_1[0x57],CONCAT44(fStackX_c,local_res8));
  }
  return;
}



// FUNCTION 1410e28e0 FUN_1410e28e0 body=482 status=ok
// SIG undefined FUN_1410e28e0(void)

void FUN_1410e28e0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  *(undefined1 *)(param_1 + 0x7ac) = 1;
  FUN_1410e2140();
  local_30 = 0x1b;
  local_38 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"windowFrame.EULA.ScrollBar",0x36);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  uVar1 = FUN_140f13f30(param_1,&local_38,0,6,&local_48);
  *(undefined8 *)(param_1 + 0x818) = uVar1;
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
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x818);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x278))(plVar4,0);
  }
  local_48 = (longlong *)0x0;
  local_40 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"windowFrame",0x18);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  lVar2 = FUN_140e96f30(param_1,&local_48,0,6,&local_38);
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
  if (lVar2 != 0) {
    local_28 = 0;
    local_20 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"EULA",10);
    FUN_142088910(lVar2,&local_28);
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  FUN_1410e7320(param_1);
  return;
}



// FUNCTION 1410e2ad0 FUN_1410e2ad0 body=844 status=ok
// SIG undefined FUN_1410e2ad0(void)

void FUN_1410e2ad0(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong local_res10;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  *(undefined1 *)(param_1 + 0x7ac) = 1;
  FUN_1410e2140();
  local_40 = 0x1b;
  local_48 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"windowFrame.EULA.ScrollBar",0x36);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  uVar4 = FUN_140f13f30(param_1,&local_48,0,6,&local_58);
  *(undefined8 *)(param_1 + 0x848) = uVar4;
  plVar8 = local_58;
  for (iVar9 = (int)local_50; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x848) != 0) {
    cVar3 = FUN_142ebdd70(param_1);
    iVar9 = *(int *)(param_1 + 0x830);
    iVar11 = 0xe;
    iVar10 = 0xe;
    if (cVar3 != '\0') {
      iVar10 = 8;
    }
    (**(code **)(**(longlong **)(param_1 + 0x848) + 0x278))
              (*(longlong **)(param_1 + 0x848),iVar10 < iVar9);
    if (iVar10 < iVar9) {
      cVar3 = FUN_142ebdd70(param_1);
      if (cVar3 != '\0') {
        iVar11 = 8;
      }
      FUN_142f10880(*(undefined8 *)(param_1 + 0x848),
                    (float)iVar11 / (float)*(int *)(param_1 + 0x830));
      FUN_142f10910(*(undefined8 *)(param_1 + 0x848),3.0 / (float)*(int *)(param_1 + 0x830));
      pwVar5 = _guard_xfg_dispatch_icall_nop(L"&UGbxGFxEULA::OnSliderPositionUpdate",L"::");
      pwVar2 = (wchar_t *)0x0;
      while (pwVar1 = pwVar5, pwVar1 != (wchar_t *)0x0) {
        pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar2 = pwVar1;
      }
      FName::FName(&local_res10,pwVar2 + 2,1);
      lVar7 = *(longlong *)(param_1 + 0x848);
      FWeakObjectPtr::operator=(lVar7 + 0x378,param_1);
      *(longlong *)(lVar7 + 0x380) = local_res10;
      if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(lVar7 + 0x378), lVar6 != 0)) {
        UObject::FindFunction(lVar6,*(undefined8 *)(lVar7 + 0x380));
      }
      FUN_142f0fa70(*(undefined8 *)(param_1 + 0x848));
    }
  }
  local_58 = (longlong *)0x0;
  local_50 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"windowFrame",0x18);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  lVar7 = FUN_140e96f30(param_1,&local_58,0,6,&local_48);
  plVar8 = local_48;
  for (iVar9 = (int)local_40; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (lVar7 != 0) {
    local_38 = 0;
    local_30 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"EULA",10);
    FUN_142088910(lVar7,&local_38);
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  cVar3 = FUN_142ebdd70(param_1);
  iVar9 = 799;
  if (cVar3 != '\0') {
    iVar9 = 0x1c9;
  }
  if (*(int *)(param_1 + 0x824) < iVar9) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
  }
  FUN_1410f52b0(param_1);
  return;
}



// FUNCTION 1410e2e20 FUN_1410e2e20 body=1602 status=ok
// SIG undefined FUN_1410e2e20(void)

void FUN_1410e2e20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  float local_res8 [2];
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  longlong *local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8 [7];
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  
  FUN_1410e2140();
  lVar10 = 0;
  local_130 = 0x32;
  local_138 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"windowFrame.report.descriptionWrapper.buttonGroup",100)
  ;
  local_148 = (longlong *)0x0;
  local_140 = 0;
  local_res18 = 0;
  uVar6 = FUN_140ecb410(param_1,&local_138,0,6,&local_148);
  *(undefined8 *)(param_1 + 0x838) = uVar6;
  plVar12 = local_148;
  for (iVar11 = (int)local_140; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_148 != (longlong *)0x0) {
    FMemory::Free(local_148);
  }
  if (local_138 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x838) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x838) + 0x1e2) = 2;
    lVar14 = *(longlong *)(param_1 + 0x828);
    lVar13 = (longlong)*(int *)(param_1 + 0x830) * 0x20 + lVar14;
    for (; lVar14 != lVar13; lVar14 = lVar14 + 0x20) {
      local_128 = 0;
      local_120 = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_128,0xb,"ReportText",0xb,0x3f);
      uVar6 = *(undefined8 *)(param_1 + 0x838);
      local_res20 = URemnantGameInstance::GetPrivateStaticClass();
      lVar7 = FUN_142ebcee0(uVar6,&local_128,local_res20,0);
      if (lVar7 == 0) {
LAB_1410e2fda:
        lVar7 = lVar10;
      }
      else {
        lVar8 = URemnantGameInstance::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_1410e2fda;
      }
      if (local_128 != 0) {
        FMemory::Free();
      }
      if (lVar7 != 0) {
        FUN_142ed3af0(lVar7,lVar14,0);
        puVar9 = (undefined8 *)FName::FName(local_68,L"OnReportReasonClicked",1);
        FWeakObjectPtr::operator=(lVar7 + 0x1b0);
        *(undefined8 *)(lVar7 + 0x1b8) = *puVar9;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x838) + 0x2b8))(*(longlong **)(param_1 + 0x838),0,1,0);
    local_res10[0] = 0;
    local_res8[0] = 0.0;
    cVar5 = FUN_142087f50(*(undefined8 *)(param_1 + 0x838),local_res10,local_res8);
    if (cVar5 == '\0') {
      local_res10[0] = 0x42c80000;
      local_res8[0] = 100.0;
    }
    dVar3 = (double)FUN_142eeca30(*(undefined8 *)(param_1 + 0x838));
    local_108 = 0;
    local_100 = 0x1d;
    *(float *)(*(longlong *)(param_1 + 0x838) + 0x2b4) =
         (float)((100.0 / (double)local_res8[0]) * dVar3);
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
    FGenericPlatformString::Memcpy(local_108,L"windowFrame.report.ScrollBar",0x3a);
    local_118 = (longlong *)0x0;
    local_110 = 0;
    local_60 = 0;
    uVar6 = FUN_140f13f30(param_1,&local_108,0,6,&local_118);
    plVar12 = local_118;
    for (iVar11 = (int)local_110; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      plVar12 = plVar12 + 2;
    }
    if (local_118 != (longlong *)0x0) {
      FMemory::Free(local_118);
    }
    if (local_108 != 0) {
      FMemory::Free();
    }
    FUN_142ed4250(*(undefined8 *)(param_1 + 0x838),uVar6);
    local_c8[2] = 0;
    local_c8[3] = 0;
    local_c8[4] = 0;
    local_c8[5] = 0;
    FWeakObjectPtr::operator=(local_c8 + 2,0);
    FWeakObjectPtr::operator=(local_c8 + 3,0);
    FWeakObjectPtr::operator=(local_c8 + 4,0);
    FWeakObjectPtr::operator=(local_c8 + 5,0);
    lVar14 = *(longlong *)(param_1 + 0x838);
    local_80 = lVar10;
    local_88 = lVar14;
    if (lVar14 != 0) {
      uVar6 = UBlendableInterface::GetPrivateStaticClass();
      local_80 = UObjectBaseUtility::GetInterfaceAddress(lVar14,uVar6);
    }
    FUN_142ecfd10(param_1,&local_88,local_c8 + 2);
    lVar14 = *(longlong *)(param_1 + 0x838);
    local_78 = lVar14;
    if (lVar14 != 0) {
      uVar6 = UBlendableInterface::GetPrivateStaticClass();
      lVar10 = UObjectBaseUtility::GetInterfaceAddress(lVar14,uVar6);
    }
    local_70 = lVar10;
    FUN_142ed36d0(param_1,&local_78,0);
  }
  local_e8 = 0;
  local_e0 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  FGenericPlatformString::Memcpy(local_e8,L"windowFrame",0x18);
  local_f8 = (longlong *)0x0;
  local_f0 = 0;
  local_58 = 0;
  lVar10 = FUN_140e96f30(param_1,&local_e8,0,6,&local_f8);
  plVar12 = local_f8;
  for (iVar11 = (int)local_f0; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_f8 != (longlong *)0x0) {
    FMemory::Free(local_f8);
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  if (lVar10 != 0) {
    local_d8 = 0;
    local_d0 = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    FGenericPlatformString::Memcpy(local_d8,L"report",0xe);
    FUN_142088910(lVar10,&local_d8);
    if (local_d8 != 0) {
      FMemory::Free();
    }
  }
  if ((*(longlong *)(param_1 + 0x818) != 0) && (*(longlong *)(param_1 + 0x798) != 0)) {
    lVar10 = FUN_140f9aee0(param_1);
    if (lVar10 == 0) {
      lVar10 = **(longlong **)(param_1 + 0x798);
      uVar6 = FUN_1404b03b0();
      (**(code **)(lVar10 + 0x2b0))(*(undefined8 *)(param_1 + 0x798),uVar6,1,0);
    }
    else {
      local_c8[6] = *(undefined8 *)(param_1 + 0x818);
      local_90 = *(longlong **)(param_1 + 0x820);
      local_c8[0] = 0;
      local_c8[1] = 0;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_90 + 1) = (int)local_90[1] + 1;
        UNLOCK();
      }
      uVar6 = *(undefined8 *)(lVar10 + 0x478);
      lVar10 = FUN_1410cb700(param_1);
      FUN_140d7a1d0(uVar6,local_c8 + 6,*(undefined8 *)(lVar10 + 0x98),0,1,local_c8,0xbf800000);
      plVar12 = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_90 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      (**(code **)(**(longlong **)(param_1 + 0x798) + 0x2a8))
                (*(longlong **)(param_1 + 0x798),local_c8,1,0);
      if (local_c8[0] != 0) {
        FMemory::Free();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1410e3480 FUN_1410e3480 body=61 status=ok
// SIG undefined FUN_1410e3480(void)

void FUN_1410e3480(longlong param_1,float param_2)

{
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_14208ff10(*(longlong *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x1a0),
                  *(float *)(param_1 + 0x1a4) -
                  (*(float *)(param_1 + 0x1ac) - *(float *)(param_1 + 0x1a8)) * param_2);
    return;
  }
  return;
}



// FUNCTION 1410e34c0 thunk_FUN_1410eb370 body=5 status=ok
// SIG undefined thunk_FUN_1410eb370(void)

void thunk_FUN_1410eb370(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_218 [24];
  undefined4 uStack_200;
  undefined1 auStack_1f8 [24];
  undefined1 uStack_1e0;
  undefined2 uStack_1d8;
  longlong lStack_1d0;
  longlong *plStack_1c8;
  undefined1 auStack_1b8 [8];
  longlong *plStack_1b0;
  undefined1 auStack_1a0 [8];
  longlong *plStack_198;
  undefined1 auStack_188 [64];
  undefined1 auStack_148 [64];
  undefined1 auStack_108 [64];
  undefined1 auStack_c8 [64];
  undefined1 auStack_88 [64];
  undefined1 auStack_48 [64];
  
  FText::FText(auStack_218);
  uStack_200 = DAT_1464aa730;
  FText::FText(auStack_1f8);
  lStack_1d0 = 0;
  plStack_1c8 = (longlong *)0x0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  lVar6 = FUN_140cff230();
  if ((lVar6 != 0) && (*(longlong *)(param_1 + 0x7f0) != 0)) {
    cVar4 = APlayerController::IsPrimaryPlayer();
    if (cVar4 != '\0') {
      bVar5 = 1;
      goto LAB_1410eb3ef;
    }
  }
  bVar5 = 0;
LAB_1410eb3ef:
  cVar4 = '\0';
  plStack_1c8 = *(longlong **)(param_1 + 2000);
  uStack_1d8 = (ushort)bVar5;
  if (*(longlong *)(param_1 + 0x798) != 0) {
    lStack_1d0 = *(longlong *)(param_1 + 0x798);
    lVar6 = FUN_140def780();
    if (lVar6 != 0) {
      lVar6 = FUN_140dee5b0(lVar6,auStack_188);
      FText::operator=(auStack_218,lVar6);
      uStack_200 = *(undefined4 *)(lVar6 + 0x18);
      FText::operator=(auStack_1f8,lVar6 + 0x20);
      uStack_1e0 = *(undefined1 *)(lVar6 + 0x38);
      FUN_1410b46c0(auStack_188);
    }
    cVar4 = FUN_1410f5fe0(param_1,auStack_218);
    uStack_1d8 = CONCAT11(cVar4,(undefined1)uStack_1d8);
  }
  if (*(longlong *)(param_1 + 0x7a0) != 0) {
    lStack_1d0 = *(longlong *)(param_1 + 0x7a0);
    lVar6 = FUN_140def780();
    if (lVar6 != 0) {
      lVar6 = FUN_140deec90(lVar6,auStack_148);
      FText::operator=(auStack_218,lVar6);
      uStack_200 = *(undefined4 *)(lVar6 + 0x18);
      FText::operator=(auStack_1f8,lVar6 + 0x20);
      uStack_1e0 = *(undefined1 *)(lVar6 + 0x38);
      FUN_1410b46c0(auStack_148);
    }
    cVar4 = FUN_1410f5fe0(param_1,auStack_218);
    uStack_1d8 = CONCAT11(cVar4,(undefined1)uStack_1d8);
  }
  if (*(longlong *)(param_1 + 0x7a8) != 0) {
    lStack_1d0 = *(longlong *)(param_1 + 0x7a8);
    lVar6 = FUN_140def780();
    if (lVar6 != 0) {
      lVar6 = FUN_140deea80(lVar6,auStack_108);
      FText::operator=(auStack_218,lVar6);
      uStack_200 = *(undefined4 *)(lVar6 + 0x18);
      FText::operator=(auStack_1f8,lVar6 + 0x20);
      uStack_1e0 = *(undefined1 *)(lVar6 + 0x38);
      FUN_1410b46c0(auStack_108);
    }
    cVar4 = FUN_1410f5fe0(param_1,auStack_218);
    uStack_1d8 = CONCAT11(cVar4,(undefined1)uStack_1d8);
  }
  if (*(longlong *)(param_1 + 0x7b0) != 0) {
    lStack_1d0 = *(longlong *)(param_1 + 0x7b0);
    lVar6 = FUN_140def780();
    if (lVar6 != 0) {
      lVar6 = FUN_140def440(lVar6,auStack_c8);
      FText::operator=(auStack_218,lVar6);
      uStack_200 = *(undefined4 *)(lVar6 + 0x18);
      FText::operator=(auStack_1f8,lVar6 + 0x20);
      uStack_1e0 = *(undefined1 *)(lVar6 + 0x38);
      FUN_1410b46c0(auStack_c8);
    }
    cVar4 = FUN_1410f5fe0(param_1,auStack_218);
    uStack_1d8 = CONCAT11(cVar4,(undefined1)uStack_1d8);
  }
  if (*(longlong *)(param_1 + 0x7b8) != 0) {
    lStack_1d0 = *(longlong *)(param_1 + 0x7b8);
    lVar6 = FUN_140def780();
    if (lVar6 != 0) {
      lVar6 = FUN_140def160(lVar6,auStack_88);
      FText::operator=(auStack_218,lVar6);
      uStack_200 = *(undefined4 *)(lVar6 + 0x18);
      FText::operator=(auStack_1f8,lVar6 + 0x20);
      uStack_1e0 = *(undefined1 *)(lVar6 + 0x38);
      FUN_1410b46c0(auStack_88);
    }
    cVar4 = FUN_1410f5fe0(param_1,auStack_218);
    uStack_1d8 = CONCAT11(cVar4,(undefined1)uStack_1d8);
  }
  if (*(longlong *)(param_1 + 0x7c0) != 0) {
    lStack_1d0 = *(longlong *)(param_1 + 0x7c0);
    lVar6 = FUN_140def780();
    if (lVar6 != 0) {
      lVar6 = FUN_140def790(lVar6,auStack_48);
      FText::operator=(auStack_218,lVar6);
      uStack_200 = *(undefined4 *)(lVar6 + 0x18);
      FText::operator=(auStack_1f8,lVar6 + 0x20);
      uStack_1e0 = *(undefined1 *)(lVar6 + 0x38);
      FUN_1410b46c0(auStack_48);
    }
    cVar4 = FUN_1410f5fe0(param_1,auStack_218);
    uStack_1d8 = CONCAT11(cVar4,(undefined1)uStack_1d8);
  }
  if (plStack_1c8 != (longlong *)0x0) {
    if (cVar4 == '\0') {
      lVar6 = *plStack_1c8;
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (auStack_1b8,L"ECHOcast successfully configured!",L"EchoCastMenu",
                         L"SuccessDescriptionText");
      (**(code **)(lVar6 + 0x2b0))(plStack_1c8,uVar7,1,0);
      if (plStack_1b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_1b0 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_1b0)(plStack_1b0);
          LOCK();
          piVar2 = (int *)((longlong)plStack_1b0 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_1b0 + 8))(plStack_1b0,1);
          }
        }
      }
      uStack_1d8 = CONCAT11(1,(undefined1)uStack_1d8);
    }
    if (plStack_1c8 != (longlong *)0x0) {
      lVar6 = FUN_140def780();
      if (((lVar6 != 0) && (*(longlong *)(lVar6 + 0xf8) != 0)) &&
         (0 < *(int *)(*(longlong *)(lVar6 + 0xf8) + 0x80))) {
        lVar6 = *plStack_1c8;
        uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (auStack_1a0,
                           L"ECHOcast menu is disabled while a streaming event is running.",
                           L"EchoCastMenu",L"EventIsRunningText");
        (**(code **)(lVar6 + 0x2b0))(plStack_1c8,uVar7,1,0);
        if (plStack_198 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_198 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plStack_198)(plStack_198);
            LOCK();
            piVar2 = (int *)((longlong)plStack_198 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plStack_198 + 8))(plStack_198,1);
            }
          }
        }
      }
    }
  }
  FUN_1410b46c0(auStack_218);
  return;
}



// FUNCTION 1410e34d0 FUN_1410e34d0 body=128 status=ok
// SIG undefined FUN_1410e34d0(void)

ulonglong FUN_1410e34d0(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_140cff230(*(undefined8 *)(param_1 + 0x7f0));
  if ((uVar3 != 0) && (param_2 != 0)) {
    uVar2 = FUN_142eb62f0(param_2);
    *(undefined1 *)(uVar3 + 0x1f8) = uVar2;
    *(undefined1 *)(uVar3 + 0x28) = 1;
    *(undefined1 *)(param_1 + 0x7d8) = 1;
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x588);
    *(uint *)(param_1 + 0x588) = 1;
    uVar3 = (ulonglong)uVar1;
    UNLOCK();
    if (*(float *)(param_1 + 0x7dc) <= 0.0 && *(float *)(param_1 + 0x7dc) != 0.0) {
      *(undefined4 *)(param_1 + 0x7dc) = 0x40000000;
      uVar3 = FUN_1410eb890(param_1);
    }
  }
  return uVar3;
}



// FUNCTION 1410e3550 FUN_1410e3550 body=252 status=ok
// SIG undefined FUN_1410e3550(void)

void FUN_1410e3550(longlong param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 != 0) {
    lVar4 = FUN_141329d80();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar1 = *(undefined2 *)(param_1 + 0x30c);
      *(undefined1 *)(lVar2 + 0x12b8) = 1;
      FWeakObjectPtr::operator=(&local_res8,lVar2);
      local_28 = 0;
      local_18 = 0;
      puVar5 = (undefined8 *)FUN_140438ef0(0x20,local_48);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_FUN_14468ea28;
        puVar5[1] = lVar2;
        *(undefined4 *)(puVar5 + 2) = local_res8;
        *(undefined4 *)((longlong)puVar5 + 0x14) = local_resc;
        *(undefined2 *)(puVar5 + 3) = uVar1;
      }
      local_58[0] = &LAB_1410c56a0;
      FUN_14208c4f0(lVar2,local_58);
    }
  }
  return;
}



// FUNCTION 1410e3650 FUN_1410e3650 body=102 status=ok
// SIG undefined FUN_1410e3650(void)

void FUN_1410e3650(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar3 = FUN_141329d80();
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
      FUN_1410ed430(lVar1,*(undefined2 *)(param_1 + 0x30c));
    }
  }
  return;
}



// FUNCTION 1410e36d0 FUN_1410e36d0 body=650 status=ok
// SIG undefined FUN_1410e36d0(void)

void FUN_1410e36d0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int *piVar9;
  
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 != 0) {
    lVar6 = AGPoisonSplashProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (lVar6 = *(longlong *)(lVar4 + 0x4e8), lVar6 != 0)) {
      lVar7 = FUN_141324ef0();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        lVar6 = *(longlong *)(lVar6 + 0xc0);
        iVar2 = *(int *)(lVar4 + 0x690);
        if (lVar6 != 0) {
          if ((iVar2 < 0) || (*(int *)(lVar6 + 0x38) <= iVar2)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if ((bVar5) && (lVar4 = *(longlong *)(lVar6 + 0x30), *(longlong *)(param_1 + 0x170) != 0))
          {
            piVar9 = (int *)*param_2;
            piVar1 = piVar9 + (int)param_2[1];
            for (; piVar9 != piVar1; piVar9 = piVar9 + 1) {
              iVar3 = *piVar9;
              lVar7 = *(longlong *)(lVar4 + (longlong)iVar2 * 0x28 + 0x18) + 0x20 +
                      (longlong)iVar3 * 0x50;
              lVar6 = FWeakObjectPtr::Get();
              if (lVar6 == 0) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                if ((DAT_1464b56f4 != *(int *)(lVar7 + 8)) && (*(longlong *)(lVar7 + 0x10) != 0)) {
                  lVar6 = FUN_141796df0();
                  FWeakObjectPtr::operator=(lVar7,lVar6);
                  if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
                    LOCK();
                    if (DAT_1464b56f4 == 0) {
                      DAT_1464b56f4 = 0;
                    }
                    UNLOCK();
                    *(int *)(lVar7 + 8) = DAT_1464b56f4;
                  }
                  lVar6 = FWeakObjectPtr::Get(lVar7);
                  if (lVar6 != 0) goto LAB_1410e38a4;
                }
LAB_1410e38da:
                lVar6 = 0;
              }
              else {
LAB_1410e38a4:
                lVar7 = UTexture::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if (!bVar5) goto LAB_1410e38da;
              }
              *(longlong *)(param_1 + 400 + (longlong)(iVar3 % 10) * 8) = lVar6;
              uVar8 = FUN_1410ae500(*(undefined8 *)(param_1 + 0x170),iVar3);
              FUN_1410f6190(uVar8,lVar6,iVar3 % 10,0);
            }
          }
        }
      }
    }
  }
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1410e3960 FUN_1410e3960 body=109 status=ok
// SIG undefined FUN_1410e3960(void)

void FUN_1410e3960(longlong param_1)

{
  int iVar1;
  float fVar2;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*(longlong *)(param_1 + 0x170) != 0) {
    fVar2 = (float)FUN_142eedeb0(*(longlong *)(param_1 + 0x170) + 0x2b8);
    if (fVar2 != *(float *)(param_1 + 0x1e0)) {
      *(float *)(param_1 + 0x1e0) = fVar2;
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x170) + 0x2d8))();
      if ((iVar1 != *(int *)(param_1 + 0x1e4)) && (iVar1 != -1)) {
        *(int *)(param_1 + 0x1e4) = iVar1;
        FUN_1410f6300(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1410e39d0 FUN_1410e39d0 body=478 status=ok
// SIG undefined FUN_1410e39d0(void)

void FUN_1410e39d0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong local_res8 [4];
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  FUN_142eccee0();
  cVar1 = *(char *)(param_1 + 0x698);
  if (cVar1 == '\x05') {
    FUN_140ec3ff0(param_1 + 0x810,param_2);
    if (*(longlong *)(param_1 + 0x1128) != 0) {
      FUN_1411fd550(*(longlong *)(param_1 + 0x1128),param_2);
    }
    if ((*(char *)(param_1 + 0x1138) != '\0') &&
       (*(undefined1 *)(param_1 + 0x1138) = 0, *(longlong *)(param_1 + 0x1128) != 0)) {
      local_38 = 0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        puVar2[1] = param_1;
        *puVar2 = &PTR_FUN_143f77b70;
      }
      local_68[0] = &LAB_1410c58e0;
      FUN_1411f67c0(*(undefined8 *)(param_1 + 0x1128),local_68);
    }
  }
  else {
    if (cVar1 == '\x01') {
      FUN_1410eebd0(param_1);
      *(undefined1 *)(param_1 + 0x698) = 2;
      return;
    }
    if (cVar1 == '\x02') {
      local_res8[0] = param_1;
      FUN_1410c1120(local_res8,param_1 + 0x1090,L"navArrowLeft",param_1 + 0x1098);
      FUN_1410c1120(local_res8,param_1 + 0x10a0,L"navArrowRight",param_1 + 0x10a8);
      FUN_1410f1300(param_1);
      *(undefined1 *)(param_1 + 0x698) = 3;
      return;
    }
    if (cVar1 == '\x03') {
      FUN_1410ebfc0(param_1,(0 < *(int *)(param_1 + 0xc08)) - 1);
      FUN_1410f0ce0(param_1);
      *(undefined1 *)(param_1 + 0x698) = 4;
      return;
    }
    if (cVar1 == '\x04') {
      FUN_142ecd4d0(param_1);
      FUN_1410e8c90(param_1,1);
      FUN_1410e8a40(param_1);
      AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
      FUN_1410d5ff0(param_1);
      FUN_1410f4150(param_1);
      *(undefined1 *)(param_1 + 0x698) = 5;
      return;
    }
  }
  return;
}



// FUNCTION 1410e3bb0 FUN_1410e3bb0 body=74 status=ok
// SIG undefined FUN_1410e3bb0(void)

void FUN_1410e3bb0(longlong param_1,float param_2)

{
  FUN_142eccee0();
  if (0.0 <= *(float *)(param_1 + 0x7dc)) {
    param_2 = *(float *)(param_1 + 0x7dc) - param_2;
    *(float *)(param_1 + 0x7dc) = param_2;
    if (param_2 < 0.0) {
      FUN_1410eb890(param_1);
    }
  }
  return;
}



// FUNCTION 1410e3c00 FUN_1410e3c00 body=118 status=ok
// SIG undefined FUN_1410e3c00(void)

void FUN_1410e3c00(longlong param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x794) = 0;
  if (0 < *(int *)(param_1 + 0x6b8)) {
    iVar1 = *(int *)(param_1 + 0x6b8);
    if (iVar1 + -1 != 0) {
      _guard_xfg_dispatch_icall_nop
                (*(void **)(param_1 + 0x6b0),(void *)((longlong)*(void **)(param_1 + 0x6b0) + 0x10),
                 (longlong)(iVar1 + -1) << 4);
      iVar1 = *(int *)(param_1 + 0x6b8);
    }
    *(int *)(param_1 + 0x6b8) = iVar1 + -1;
    TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 0x6b0);
  }
  FUN_1410f57b0(param_1);
  FUN_1410ec430(param_1);
  return;
}



// FUNCTION 1410e3c80 FUN_1410e3c80 body=140 status=ok
// SIG undefined FUN_1410e3c80(void)

void FUN_1410e3c80(undefined8 param_1)

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
  local_58[0] = &LAB_1410c55f0;
  FUN_14208c4f0(param_1,local_58);
  return;
}



// FUNCTION 1410e3d10 FUN_1410e3d10 body=231 status=ok
// SIG undefined FUN_1410e3d10(void)

undefined4 FUN_1410e3d10(longlong param_1)

{
  undefined4 uVar1;
  longlong local_28 [4];
  
  if (*(longlong *)(param_1 + 0x1098) != 0) {
    local_28[0] = 0;
    local_28[1] = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],&DAT_14469f9a4,6);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x1098),local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x10a8) != 0) {
    local_28[2] = 0;
    local_28[3] = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
    FGenericPlatformString::Memcpy(local_28[2],&DAT_14469fb34,6);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x10a8),local_28 + 2);
    if (local_28[2] != 0) {
      FMemory::Free();
    }
  }
  if (0 < *(int *)(param_1 + 0x1068)) {
    FUN_1410e46c0(param_1);
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 1410e3e00 FUN_1410e3e00 body=622 status=ok
// SIG undefined FUN_1410e3e00(void)

void FUN_1410e3e00(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong *puVar12;
  bool bVar13;
  undefined4 local_res18;
  undefined4 local_res1c;
  ulonglong local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  longlong *local_c0;
  ulonglong local_b8;
  longlong *plStack_b0;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  longlong lStack_90;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  lVar4 = *param_2;
  uVar10 = 0;
  if (lVar4 == 0) {
    return;
  }
  lVar9 = ALobbyBeaconPlayerState::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  if ((*(longlong *)(lVar4 + 0x28) != 0) && (*(longlong *)(lVar4 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(lVar4 + 0x30) + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      local_d0 = *(longlong **)(lVar4 + 0x30);
      local_d8 = 0;
      bVar7 = true;
      bVar6 = false;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_d0 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_d0 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar10;
          LOCK();
          bVar13 = iVar8 == (int)local_d0[1];
          if (bVar13) {
            *(int *)(local_d0 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar10 = *(ulonglong *)(lVar4 + 0x28);
            puVar12 = &local_d8;
            local_d8 = uVar10;
            goto LAB_1410e3ef9;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_d0 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_d0 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_d0 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar12 = &local_d8;
      goto LAB_1410e3ef9;
    }
  }
  puVar12 = &local_b8;
  local_b8 = 0;
  plStack_b0 = (longlong *)0x0;
  bVar7 = false;
  bVar6 = true;
LAB_1410e3ef9:
  local_c8 = uVar10;
  plVar5 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  local_c0 = plVar5;
  *puVar12 = 0;
  plVar5 = plStack_b0;
  if ((bVar6) && (plStack_b0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_b0 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
      }
    }
  }
  plVar5 = local_d0;
  if ((bVar7) && (local_d0 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_d0 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  if (local_c8 != 0) {
    FWeakObjectPtr::operator=(&local_res18,param_1);
    lVar4 = *param_2;
    lVar9 = param_2[1];
    local_a0 = local_res18;
    local_9c = local_res1c;
    local_58 = 0;
    local_48 = 0;
    local_98 = lVar4;
    lStack_90 = lVar9;
    puVar11 = (undefined8 *)FUN_140438ef0(0x28,local_78);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &PTR_FUN_1446a5458;
      puVar11[1] = param_1;
      *(undefined4 *)(puVar11 + 2) = local_res18;
      *(undefined4 *)((longlong)puVar11 + 0x14) = local_res1c;
      puVar11[3] = lVar4;
      puVar11[4] = lVar9;
    }
    local_88[0] = &LAB_1410c5900;
    FUN_14204c6c0(local_c8,local_88);
  }
  plVar5 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_c0 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  return;
}



// FUNCTION 1410e4070 FUN_1410e4070 body=178 status=ok
// SIG undefined FUN_1410e4070(void)

void FUN_1410e4070(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  FWeakObjectPtr::operator=(&local_res18);
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_38 = 0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605c80;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
    *(undefined4 *)(puVar1 + 3) = local_res18;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = local_res1c;
  }
  local_68[0] = &LAB_1410c5760;
  FUN_14204c280(local_68);
  return;
}



// FUNCTION 1410e4130 FUN_1410e4130 body=46 status=ok
// SIG undefined FUN_1410e4130(void)

bool FUN_1410e4130(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1410cb460(param_1 + -0x4d8);
  if (lVar1 != 0) {
    return *(int *)(lVar1 + 0x108) == param_2;
  }
  return false;
}



// FUNCTION 1410e4160 FUN_1410e4160 body=53 status=ok
// SIG undefined FUN_1410e4160(void)

bool FUN_1410e4160(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x208) != 0) {
    lVar1 = FUN_14270bb10();
    if (lVar1 != 0) {
      return *(int *)(lVar1 + 0x108) == param_2;
    }
  }
  return false;
}



// FUNCTION 1410e41a0 FUN_1410e41a0 body=198 status=ok
// SIG undefined FUN_1410e41a0(void)

bool FUN_1410e41a0(longlong param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x1a8);
  if (lVar2 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar2 = *(longlong *)(lVar2 + 0x6d8), lVar2 != 0)) {
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
        lVar2 = FUN_14270bb10(lVar2);
        if (lVar2 != 0) {
          return *(int *)(lVar2 + 0x108) == param_2;
        }
      }
    }
  }
  return false;
}



// FUNCTION 1410e4270 FUN_1410e4270 body=216 status=ok
// SIG undefined FUN_1410e4270(void)

bool FUN_1410e4270(longlong param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    lVar2 = FUN_141319ff0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return false;
    }
    if (lVar3 == -0xc0) {
      return false;
    }
    if (*(char *)(lVar3 + 0x143) != '\0') {
      return false;
    }
    if ((*(longlong *)(lVar3 + 0x158) != 0) && (lVar3 = FUN_14270bb10(), lVar3 != 0)) {
LAB_1410e431d:
      return *(int *)(lVar3 + 0x108) == param_2;
    }
    lVar3 = FWeakObjectPtr::Get(param_1 + 0xb4);
    if (lVar3 != 0) {
      uVar4 = FWeakObjectPtr::Get(param_1 + 0xb4);
      lVar3 = FUN_14270bb10(uVar4);
      if (lVar3 != 0) goto LAB_1410e431d;
    }
  }
  return false;
}



// FUNCTION 1410e4350 FUN_1410e4350 body=458 status=ok
// SIG undefined FUN_1410e4350(void)

void FUN_1410e4350(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined1 local_38 [32];
  
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar4 == 0) {
    return;
  }
  lVar5 = FUN_14141f270();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  plVar1 = *(longlong **)(lVar4 + 0xab8);
  for (plVar6 = plVar1; plVar6 != plVar1 + *(int *)(lVar4 + 0xac0); plVar6 = plVar6 + 1) {
    if (*plVar6 == param_2) {
      iVar3 = (int)((longlong)plVar6 - (longlong)plVar1 >> 3);
      goto LAB_1410e43e9;
    }
  }
  iVar3 = -1;
LAB_1410e43e9:
  if (iVar3 == 0) {
    uVar9 = 5;
  }
  else if (iVar3 == 1) {
    uVar9 = 3;
  }
  else if (iVar3 == 2) {
    uVar9 = 4;
  }
  else if (iVar3 == 3) {
    uVar9 = 2;
  }
  else {
    uVar9 = 0xffffffff;
  }
  lVar5 = FUN_140bb5fe0(lVar4);
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 0x778) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x77c) = 0;
    *(undefined8 *)(param_1 + 0x788) = 0;
    *(undefined4 *)(param_1 + 0x798) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x79c)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x790,0);
    }
    if (*(undefined2 **)(param_1 + 0x790) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x790) = 0;
    }
    *(undefined4 *)(param_1 + 0x780) = 0;
  }
  else {
    uVar7 = FSoftObjectPath::FSoftObjectPath(local_38,lVar5);
    FSoftObjectPath::operator=(param_1 + 0x788,uVar7);
    FWeakObjectPtr::operator=((undefined4 *)(param_1 + 0x778),lVar5);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    *(int *)(param_1 + 0x780) = DAT_1464b56f4;
  }
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar5 != 0) {
    lVar8 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1410e44f9;
  }
  lVar5 = 0;
LAB_1410e44f9:
  FUN_140be2320(lVar4,lVar5,uVar9);
  return;
}



// FUNCTION 1410e4520 FUN_1410e4520 body=401 status=ok
// SIG undefined FUN_1410e4520(void)

void FUN_1410e4520(longlong param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 local_38 [32];
  
  if (param_2 == 0) {
    uVar6 = 5;
  }
  else if (param_2 == 1) {
    uVar6 = 3;
  }
  else if (param_2 == 2) {
    uVar6 = 4;
  }
  else if (param_2 == 3) {
    uVar6 = 2;
  }
  else {
    uVar6 = 0xffffffff;
  }
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar2 == 0) {
    return;
  }
  lVar3 = FUN_14141f270();
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
  lVar3 = FUN_140bb5fe0(lVar2);
  if (lVar3 == 0) {
    *(undefined4 *)(param_1 + 0x700) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x704) = 0;
    *(undefined8 *)(param_1 + 0x710) = 0;
    *(undefined4 *)(param_1 + 0x720) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x724)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x718,0);
    }
    if (*(undefined2 **)(param_1 + 0x718) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x718) = 0;
    }
    *(undefined4 *)(param_1 + 0x708) = 0;
  }
  else {
    uVar4 = FSoftObjectPath::FSoftObjectPath(local_38,lVar3);
    FSoftObjectPath::operator=(param_1 + 0x710,uVar4);
    FWeakObjectPtr::operator=((undefined4 *)(param_1 + 0x700),lVar3);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    *(int *)(param_1 + 0x708) = DAT_1464b56f4;
  }
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar3 != 0) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1410e4690;
  }
  lVar3 = 0;
LAB_1410e4690:
  FUN_140be2320(lVar2,lVar3,uVar6);
  return;
}



// FUNCTION 1410e46c0 FUN_1410e46c0 body=140 status=ok
// SIG undefined FUN_1410e46c0(void)

void FUN_1410e46c0(undefined8 param_1)

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
  local_58[0] = &LAB_1410c5330;
  FUN_14208c4f0(param_1,local_58);
  return;
}



// FUNCTION 1410e4750 FUN_1410e4750 body=2781 status=ok
// SIG undefined FUN_1410e4750(void)

undefined8 *
FUN_1410e4750(longlong param_1,undefined8 *param_2,longlong *param_3,ulonglong *param_4,char param_5
             )

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  uint in_stack_fffffffffffffdd8;
  undefined8 *local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8 [8];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  void *local_1b8;
  int local_1b0;
  int local_1ac;
  undefined1 local_1a8;
  undefined1 local_1a7;
  undefined4 local_1a4;
  byte local_1a0;
  undefined1 local_198 [24];
  undefined1 local_180 [24];
  undefined1 local_168 [24];
  undefined1 local_150 [24];
  undefined1 local_138;
  undefined4 local_134;
  undefined1 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined **local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined4 local_d4;
  byte local_d0;
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((param_3 != (longlong *)0x0) && (*param_4 != 0)) {
    uVar6 = USafeZone::GetPrivateStaticClass();
    for (uVar16 = *param_4; uVar16 != 0; uVar16 = *(ulonglong *)(uVar16 + 0x30)) {
      if (uVar16 == uVar6) {
        if (*param_4 != 0) {
          local_40 = FUN_142e27720();
          lVar7 = (**(code **)(*param_3 + 0x628))(param_3,local_40);
          uVar16 = 0;
          if (lVar7 == 0) {
            FUN_1417846f0(param_3,
                          L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                         );
            uVar8 = FUN_142e27720();
            in_stack_fffffffffffffdd8 = 0;
            lVar7 = FUN_1417985e0(uVar8,param_3,0,0,0,0,0,0,0);
            FUN_14234b150(lVar7);
          }
          uVar6 = uVar16;
          if (*(char *)(param_1 + 0x128a) == '\0') {
            if (param_5 == '\0') {
              if (*param_4 != 0) {
                uVar11 = USafeZone::GetPrivateStaticClass();
                for (uVar12 = *param_4;
                    (uVar6 = uVar16, uVar12 != 0 && (uVar6 = *param_4, uVar12 != uVar11));
                    uVar12 = *(ulonglong *)(uVar12 + 0x30)) {
                }
              }
              goto LAB_1410e4a37;
            }
            if (param_5 != '\x01') goto LAB_1410e51f1;
            lVar13 = param_1 + 0x740;
            lVar9 = FWeakObjectPtr::Get(lVar13);
            if (lVar9 == 0) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              if ((DAT_1464b56f4 == *(int *)(param_1 + 0x748)) ||
                 (*(longlong *)(param_1 + 0x750) == 0)) goto LAB_1410e4ea5;
              lVar9 = FUN_141796df0();
              FWeakObjectPtr::operator=(lVar13,lVar9);
              if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                *(int *)(param_1 + 0x748) = DAT_1464b56f4;
              }
              lVar9 = FWeakObjectPtr::Get(lVar13);
              if (lVar9 == 0) goto LAB_1410e4ea5;
            }
            lVar10 = FUN_14171bfe0();
            if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) goto LAB_1410e4ea5;
            lVar10 = USafeZone::GetPrivateStaticClass();
            goto LAB_1410e4d80;
          }
          *(undefined1 *)(param_1 + 0x128a) = 0;
          if (param_5 == '\x01') {
            lVar13 = param_1 + 0x768;
            lVar9 = FWeakObjectPtr::Get(lVar13);
            if (lVar9 == 0) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              if ((DAT_1464b56f4 == *(int *)(param_1 + 0x770)) ||
                 (*(longlong *)(param_1 + 0x778) == 0)) goto LAB_1410e492e;
              lVar9 = FUN_141796df0();
              FWeakObjectPtr::operator=(lVar13,lVar9);
              if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                *(int *)(param_1 + 0x770) = DAT_1464b56f4;
              }
              lVar9 = FWeakObjectPtr::Get(lVar13);
              if (lVar9 == 0) goto LAB_1410e492e;
            }
            lVar10 = FUN_14171bfe0();
            if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) goto LAB_1410e492e;
            lVar10 = USafeZone::GetPrivateStaticClass();
            goto LAB_1410e4920;
          }
          if (param_5 != '\x02') goto LAB_1410e492e;
          lVar9 = param_1 + 0x790;
          lVar13 = FWeakObjectPtr::Get(lVar9);
          if (lVar13 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 == *(int *)(param_1 + 0x798)) ||
               (*(longlong *)(param_1 + 0x7a0) == 0)) goto LAB_1410e492e;
            lVar13 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar9,lVar13);
            if ((lVar13 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(param_1 + 0x798) = DAT_1464b56f4;
            }
            lVar13 = FWeakObjectPtr::Get(lVar9);
            if (lVar13 == 0) goto LAB_1410e492e;
          }
          lVar10 = FUN_14171bfe0();
          if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_1410e492e;
          lVar10 = USafeZone::GetPrivateStaticClass();
          goto LAB_1410e4b35;
        }
        break;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
  while (uVar11 = *(ulonglong *)(uVar11 + 0x30), uVar6 = uVar16, uVar11 != 0) {
LAB_1410e4a20:
    uVar6 = uVar12;
    if (uVar11 == uVar14) break;
  }
  goto LAB_1410e4a37;
  while (lVar9 = *(longlong *)(lVar9 + 0x30), lVar9 != 0) {
LAB_1410e4d80:
    if (lVar9 == lVar10) {
      uVar12 = FWeakObjectPtr::Get(lVar13);
      if (uVar12 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 == *(int *)(param_1 + 0x748)) || (*(longlong *)(param_1 + 0x750) == 0))
        goto LAB_1410e4e56;
        lVar9 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar13,lVar9);
        if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_1 + 0x748) = DAT_1464b56f4;
        }
        uVar12 = FWeakObjectPtr::Get(lVar13);
        if (uVar12 == 0) goto LAB_1410e4e56;
      }
      lVar13 = FUN_14171bfe0();
      if ((*(int *)(*(longlong *)(uVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_1410e4e56;
      uVar14 = USafeZone::GetPrivateStaticClass();
      uVar11 = uVar12;
      goto LAB_1410e4e45;
    }
  }
  goto LAB_1410e4ea5;
LAB_1410e4b35:
  if (lVar13 != lVar10) {
    lVar13 = *(longlong *)(lVar13 + 0x30);
    if (lVar13 == 0) goto LAB_1410e492e;
    goto LAB_1410e4b35;
  }
  local_1e8 = (undefined8 *)0x0;
  local_1e0 = 0;
  FUN_1410ae0a0(param_3,&local_1e8,0);
  puVar17 = local_1e8;
  uVar6 = (ulonglong)((longlong)(local_1e8 + (int)local_1e0) + (7 - (longlong)local_1e8)) >> 3;
  if (local_1e8 + (int)local_1e0 < local_1e8) {
    uVar6 = uVar16;
  }
  uVar12 = uVar16;
  puVar15 = local_1e8;
  if (uVar6 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar15 + 0x288))();
      uVar12 = uVar12 + 1;
      puVar15 = puVar15 + 1;
    } while (uVar12 != uVar6);
  }
  uVar12 = FWeakObjectPtr::Get(lVar9);
  uVar6 = uVar16;
  if (uVar12 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    puVar17 = local_1e8;
    if ((DAT_1464b56f4 == *(int *)(param_1 + 0x798)) || (*(longlong *)(param_1 + 0x7a0) == 0))
    goto LAB_1410e4c85;
    lVar13 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar9,lVar13);
    if ((lVar13 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x798) = DAT_1464b56f4;
    }
    uVar12 = FWeakObjectPtr::Get(lVar9);
    puVar17 = local_1e8;
    if (uVar12 == 0) goto LAB_1410e4c85;
  }
  lVar13 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(uVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(uVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8)
      != lVar13 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    uVar14 = USafeZone::GetPrivateStaticClass();
    uVar11 = uVar12;
    do {
      uVar6 = uVar12;
      if (uVar11 == uVar14) break;
      uVar11 = *(ulonglong *)(uVar11 + 0x30);
      uVar6 = uVar16;
    } while (uVar11 != 0);
  }
LAB_1410e4c85:
  FUN_142c7bc00(lVar7,param_2,uVar6,2);
  if (puVar17 == (undefined8 *)0x0) {
    return param_2;
  }
  FMemory::Free(puVar17);
  return param_2;
  while (lVar9 = *(longlong *)(lVar9 + 0x30), lVar9 != 0) {
LAB_1410e4920:
    if (lVar9 == lVar10) {
      uVar12 = FWeakObjectPtr::Get(lVar13);
      if (uVar12 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 == *(int *)(param_1 + 0x770)) || (*(longlong *)(param_1 + 0x778) == 0))
        goto LAB_1410e4a37;
        lVar9 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar13,lVar9);
        if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_1 + 0x770) = DAT_1464b56f4;
        }
        uVar12 = FWeakObjectPtr::Get(lVar13);
        if (uVar12 == 0) goto LAB_1410e4a37;
      }
      lVar13 = FUN_14171bfe0();
      if ((*(int *)(*(longlong *)(uVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_1410e4a37;
      uVar14 = USafeZone::GetPrivateStaticClass();
      uVar11 = uVar12;
      goto LAB_1410e4a20;
    }
  }
LAB_1410e492e:
  if (*param_4 != 0) {
    uVar11 = USafeZone::GetPrivateStaticClass();
    for (uVar12 = *param_4; (uVar6 = uVar16, uVar12 != 0 && (uVar6 = *param_4, uVar12 != uVar11));
        uVar12 = *(ulonglong *)(uVar12 + 0x30)) {
    }
  }
LAB_1410e4a37:
  FUN_142c7bc00(lVar7,param_2,uVar6,2);
  return param_2;
  while (uVar11 = *(ulonglong *)(uVar11 + 0x30), uVar6 = uVar16, uVar11 != 0) {
LAB_1410e4e45:
    uVar6 = uVar12;
    if (uVar11 == uVar14) break;
  }
LAB_1410e4e56:
  FUN_142c7bc00(lVar7,local_38,uVar6,2);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
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
LAB_1410e4ea5:
  lVar13 = param_1 + 0x1200;
  lVar9 = FWeakObjectPtr::Get(lVar13);
  if (lVar9 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(param_1 + 0x1208)) || (*(longlong *)(param_1 + 0x1210) == 0))
    goto LAB_1410e51f1;
    lVar9 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar13,lVar9);
    if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x1208) = DAT_1464b56f4;
    }
    lVar9 = FWeakObjectPtr::Get(lVar13);
    if (lVar9 == 0) goto LAB_1410e51f1;
  }
  lVar10 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
      != lVar10 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
LAB_1410e51f1:
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  lVar10 = USafeZone::GetPrivateStaticClass();
  while (lVar9 != lVar10) {
    lVar9 = *(longlong *)(lVar9 + 0x30);
    if (lVar9 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
  }
  cVar5 = FUN_1410cfe90(param_1,*(undefined1 *)(param_1 + 0x12b8));
  if ((cVar5 == '\0') || (*(char *)(param_1 + 0x12b9) != '\0')) {
    *(undefined2 *)(param_1 + 0x12b8) = 1;
    goto LAB_1410e51f1;
  }
  FUN_142c62180(local_1d8);
  iVar3 = local_1b0;
  lVar9 = (longlong)local_1b0;
  local_1a7 = 2;
  local_1b0 = local_1b0 + 1;
  if (local_1ac < local_1b0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_1b8,iVar3);
  }
  FUN_142c625d0((void *)(lVar9 * 0x38 + (longlong)local_1b8),&DAT_146b31788,DAT_146874eb8);
  lVar9 = (longlong)local_1b0;
  local_108 = &PTR_FUN_143ff6170;
  local_100 = local_1d0;
  local_f8 = local_1c8;
  local_f0 = local_1c0;
  local_e8 = (void *)0x0;
  local_e0 = local_1b0;
  if (local_1b0 == 0) {
    local_dc = 0;
  }
  else {
    TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(&local_e8,local_1b0,0);
    _guard_xfg_dispatch_icall_nop(local_e8,local_1b8,lVar9 * 0x38);
  }
  local_d8 = local_1a8;
  local_d7 = local_1a7;
  local_d4 = local_1a4;
  local_d0 = local_d0 ^ (local_1a0 ^ local_d0) & 7;
  FUN_1405e0d90(local_c8,local_198);
  FUN_1405e0d90(local_b0,local_180);
  FUN_1405e0d90(local_98,local_168);
  FUN_1405e0d90(local_80,local_150);
  local_68 = local_138;
  local_64 = local_134;
  local_60 = local_130;
  local_58 = local_128;
  local_50 = local_120;
  local_5c = local_12c;
  local_48 = local_118;
  if (local_118 != 0) {
    LOCK();
    *(int *)(local_118 + 0xc) = *(int *)(local_118 + 0xc) + 1;
    UNLOCK();
  }
  uVar12 = FWeakObjectPtr::Get(lVar13);
  uVar6 = uVar16;
  if (uVar12 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(param_1 + 0x1208)) || (*(longlong *)(param_1 + 0x1210) == 0))
    goto LAB_1410e51c1;
    lVar9 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar13,lVar9);
    if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x1208) = DAT_1464b56f4;
    }
    uVar12 = FWeakObjectPtr::Get(lVar13);
    if (uVar12 == 0) goto LAB_1410e51c1;
  }
  lVar13 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(uVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(uVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8)
      != lVar13 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    uVar14 = USafeZone::GetPrivateStaticClass();
    uVar11 = uVar12;
    do {
      uVar6 = uVar12;
      if (uVar11 == uVar14) break;
      uVar11 = *(ulonglong *)(uVar11 + 0x30);
      uVar6 = uVar16;
    } while (uVar11 != 0);
  }
LAB_1410e51c1:
  FUN_142c7bb40(lVar7,param_2,uVar6,&local_108,in_stack_fffffffffffffdd8 & 0xffffff00);
  FUN_142c63c50(local_1d8);
  return param_2;
}



// FUNCTION 1410e5230 FUN_1410e5230 body=624 status=ok
// SIG undefined FUN_1410e5230(void)

void FUN_1410e5230(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong local_58 [6];
  
  UMistDebugEntityScreen::InspectEntity(param_1 + 0x178,param_2,1,0);
  plVar7 = *(longlong **)(param_1 + 0x170);
  if (plVar7 != (longlong *)0x0) {
    uVar12 = 0;
    uVar9 = uVar12;
    uVar11 = uVar12;
    if (0 < *(int *)(param_2 + 0x20)) {
      do {
        local_58[0] = 0;
        lVar10 = uVar11 * 0x50 + *(longlong *)(param_2 + 0x18);
        local_58[1] = 0x11;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
        FGenericPlatformString::Memcpy(local_58[0],L"MenuTextListItem",0x22);
        uVar2 = *(undefined8 *)(param_1 + 0x170);
        uVar4 = UXGameInstance::GetPrivateStaticClass();
        uVar5 = FUN_142ebcee0(uVar2,local_58,uVar4,0);
        if (uVar5 == 0) {
LAB_1410e533a:
          uVar5 = uVar12;
        }
        else {
          lVar6 = UXGameInstance::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(uVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_1410e533a;
        }
        if (local_58[0] != 0) {
          FMemory::Free();
        }
        if (uVar5 != 0) {
          UMistDebugEntityScreen::InspectEntity(uVar5 + 0x310,lVar10 + 8,1);
          if (*(longlong *)(uVar5 + 0x328) != 0) {
            cVar1 = *(char *)(lVar10 + 0x48);
            if (cVar1 == '\0') {
              local_58[4] = 0;
              local_58[5] = 6;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58 + 4,0);
              FGenericPlatformString::Convert<char,wchar_t>(local_58[4],6,"video",6,0x3f);
              FUN_142088cf0(*(undefined8 *)(uVar5 + 0x328));
              lVar10 = local_58[4];
            }
            else {
              if (cVar1 != '\x01') goto LAB_1410e5435;
              local_58[2] = 0;
              local_58[3] = 10;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58 + 2,0);
              FGenericPlatformString::Convert<char,wchar_t>(local_58[2],10,"slideShow",10,0x3f);
              FUN_142088cf0(*(undefined8 *)(uVar5 + 0x328));
              lVar10 = local_58[2];
            }
            if (lVar10 != 0) {
              FMemory::Free();
            }
          }
LAB_1410e5435:
          if (uVar11 == 0) {
            FUN_142ed2820(uVar5);
          }
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        uVar11 = uVar11 + 1;
      } while ((int)uVar8 < *(int *)(param_2 + 0x20));
      plVar7 = *(longlong **)(param_1 + 0x170);
    }
    (**(code **)(*plVar7 + 0x2b8))(plVar7,0,1,0);
  }
  return;
}



// FUNCTION 1410e54a0 FUN_1410e54a0 body=883 status=ok
// SIG undefined FUN_1410e54a0(void)

void FUN_1410e54a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  char cVar9;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_142ecdac0();
  if ((*(longlong *)(param_1 + 0x5b0) != 0) && (*(longlong *)(param_1 + 0x6a0) != 0)) {
    cVar9 = '\0';
    if (*(longlong *)(*(longlong *)(param_1 + 0x6a0) + 0x170) == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = FUN_142eb7a00();
    }
    lVar4 = *(longlong *)(param_1 + 0x4e8);
    if (lVar4 != 0) {
      lVar7 = FUN_141324ef0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (lVar4 = *(longlong *)(lVar4 + 0xc0), lVar4 != 0)) {
        iVar3 = *(int *)(param_1 + 0x690);
        if ((iVar3 < 0) || (*(int *)(lVar4 + 0x38) <= iVar3)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          if ((iVar6 < 0) ||
             (*(int *)(*(longlong *)(lVar4 + 0x30) + 0x20 + (longlong)iVar3 * 0x28) <= iVar6)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            cVar9 = *(char *)(*(longlong *)
                               (*(longlong *)(lVar4 + 0x30) + 0x18 + (longlong)iVar3 * 0x28) + 0x48
                             + (longlong)iVar6 * 0x50);
          }
        }
      }
    }
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_88,L"Back",L"GFxBehindTheScenesMenu",L"BackOutText");
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2b8,uVar8);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_70,L"Select",L"GFxBehindTheScenesMenu",L"ChooseText");
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2a0,uVar8);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"Play/Pause",L"GFxBehindTheScenesMenu",L"PlayPauseText");
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146874c48,uVar8);
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
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    if (cVar9 == '\x01') {
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_40,L"Previous",L"GFxBehindTheScenesMenu",L"PreviousText");
      FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146874c88,uVar8);
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)local_38 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_38 + 8))(local_38,1);
          }
        }
      }
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_28,L"Next",L"GFxBehindTheScenesMenu",L"NextText");
      FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146874c80,uVar8);
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
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x6a0) + 0x38) != 0) {
      AGPoisonSplashProjectile::GetPrivateStaticClass();
    }
  }
  return;
}



// FUNCTION 1410e5820 FUN_1410e5820 body=140 status=ok
// SIG undefined FUN_1410e5820(void)

void FUN_1410e5820(undefined8 param_1)

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
  local_58[0] = &LAB_1410c5500;
  FUN_14208c4f0(param_1,local_58);
  return;
}



// FUNCTION 1410e58b0 FUN_1410e58b0 body=279 status=ok
// SIG undefined FUN_1410e58b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1410e58b0(longlong param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
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
  uVar5 = 0;
  LOCK();
  bVar1 = *(byte *)(param_1 + 0x775);
  if (bVar1 == 0) {
    *(byte *)(param_1 + 0x775) = 1;
  }
  else {
    uVar5 = (ulonglong)bVar1;
  }
  UNLOCK();
  if (bVar1 == 0) {
    local_c8 = param_1;
    uVar2 = FUN_1410cf890(param_1);
    uStack_c0 = CONCAT31(uStack_c0._1_3_,uVar2);
    local_38 = (longlong *)0x0;
    local_28 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_58);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar3 + 1) = (undefined4)local_c8;
      *(undefined4 *)((longlong)puVar3 + 0xc) = local_c8._4_4_;
      *(undefined4 *)(puVar3 + 2) = uStack_c0;
      *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_bc;
    }
    local_68[0] = &LAB_1410c5640;
    uVar4 = FUN_1420849a0(param_1,local_b8,local_68);
    uVar5 = FUN_14208c4f0(param_1,uVar4);
    if (local_28 != 0) {
      plVar6 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar6 = local_38;
      }
      if (plVar6 != (longlong *)0x0) {
        uVar5 = (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      uVar5 = FMemory::Free();
    }
  }
  return uVar5;
}



// FUNCTION 1410e59d0 FUN_1410e59d0 body=328 status=ok
// SIG undefined FUN_1410e59d0(void)

void FUN_1410e59d0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_142ecdac0();
  cVar5 = FUN_1410cfb00(param_1);
  if (cVar5 == '\0') {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,L"Play",L"CreateCharacter",L"PlayText");
    FUN_142eb01d0(param_1,&DAT_146b3e2a0,uVar6,0);
    plVar7 = local_38;
  }
  else {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_58,L"Select",L"CreateCharacter",L"SelectText");
    FUN_142eb01d0(param_1,&DAT_146b3e2a0,uVar6,0);
    plVar7 = local_50;
  }
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
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_28,L"Back",L"CreateCharacter",L"BackText");
  FUN_142eb01d0(param_1,&DAT_146b3e2b8,uVar6,0);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_20 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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



// FUNCTION 1410e5b20 FUN_1410e5b20 body=354 status=ok
// SIG undefined FUN_1410e5b20(void)

void FUN_1410e5b20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  FUN_142ecdac0();
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x680);
  if (cVar5 != '\0') {
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x680);
    LOCK();
    *(undefined4 *)(lVar6 + 0x588) = 1;
    UNLOCK();
  }
  puVar8 = *(undefined8 **)(param_1 + 0x7e0);
  puVar3 = puVar8 + *(int *)(param_1 + 0x7e8);
  do {
    if (puVar8 == puVar3) {
LAB_1410e5c06:
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_20,L"Back",L"EchoCastMenu",L"BackLabelText");
      FUN_142eb01d0(param_1,&DAT_146b3e2b8,uVar7,0);
      if (local_18 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_18 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_18)(local_18);
          LOCK();
          piVar2 = (int *)((longlong)local_18 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_18 + 8))(local_18,1);
          }
        }
      }
      return;
    }
    cVar5 = FUN_142ebdb90(*puVar8);
    if (cVar5 == '\0') {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_38,L"Default",L"EchoCastMenu",L"RestoreDefaultsText");
      FUN_142eb01d0(param_1,&DAT_146874d78,uVar7,0);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
      goto LAB_1410e5c06;
    }
    puVar8 = puVar8 + 1;
  } while( true );
}



// FUNCTION 1410e5c90 FUN_1410e5c90 body=59 status=ok
// SIG undefined FUN_1410e5c90(void)

void FUN_1410e5c90(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  FUN_142ecdac0();
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x680);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x680);
    LOCK();
    *(undefined4 *)(lVar1 + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1410e5cd0 FUN_1410e5cd0 body=252 status=ok
// SIG undefined FUN_1410e5cd0(void)

ulonglong FUN_1410e5cd0(longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  uVar3 = 0;
  LOCK();
  bVar1 = *(byte *)(param_1 + 0x800);
  if (bVar1 == 0) {
    *(byte *)(param_1 + 0x800) = 1;
  }
  else {
    uVar3 = (ulonglong)bVar1;
  }
  UNLOCK();
  if (bVar1 == 0) {
    local_res8[0] = 0xffffffff;
    if (*(longlong *)(param_1 + 0x5b0) != 0) {
      FUN_14170c210(local_res8);
    }
    FWeakObjectPtr::operator=(&local_res10,param_1);
    uVar4 = local_res8[0];
    local_res8[0] = 0xffffffff;
    local_38 = 0;
    local_28 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x20,local_58);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_144605c50;
      puVar2[1] = param_1;
      *(undefined4 *)(puVar2 + 2) = local_res10;
      *(undefined4 *)((longlong)puVar2 + 0x14) = local_res14;
      *(undefined4 *)(puVar2 + 3) = uVar4;
      uVar4 = 0xffffffff;
    }
    local_68[0] = &LAB_1410c5770;
    FUN_14208c4f0(param_1,local_68);
    FUN_1416f8340(uVar4);
    uVar3 = FUN_1416f8340(local_res8[0]);
  }
  return uVar3;
}



// FUNCTION 1410e5dd0 FUN_1410e5dd0 body=239 status=ok
// SIG undefined FUN_1410e5dd0(void)

void FUN_1410e5dd0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *local_18;
  undefined8 local_10;
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) >> 4 & 1) != 0) {
    local_18 = (undefined2 *)0x0;
    local_10 = 0;
    uVar3 = FCommandLine::Get();
    cVar1 = FParse::Value(uVar3,L"GBXPerf.ReportTag=",&local_18,1);
    if (cVar1 != '\0') {
      lVar6 = *(longlong *)(param_1 + 0x28);
      lVar7 = (longlong)*(int *)(param_1 + 0x30) * 0x30 + lVar6;
      for (; lVar6 != lVar7; lVar6 = lVar6 + 0x30) {
        puVar5 = &DAT_143f3eda8;
        if ((int)local_10 != 0) {
          puVar5 = local_18;
        }
        if (*(int *)(lVar6 + 0x10) == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = *(undefined2 **)(lVar6 + 8);
        }
        iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
        if (iVar2 == 0) break;
      }
      puVar5 = &DAT_143f3eda8;
      if ((int)local_10 != 0) {
        puVar5 = local_18;
      }
      (**(code **)(*DAT_146874fc8 + 0x60))(DAT_146874fc8,puVar5,0x7000000);
    }
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1410e5ec0 FUN_1410e5ec0 body=897 status=ok
// SIG undefined FUN_1410e5ec0(void)

undefined1 * FUN_1410e5ec0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 *local_68;
  undefined8 local_60;
  undefined1 local_58 [24];
  undefined8 local_40;
  
  if ((((*(longlong *)(param_1 + 0x2f8) == 0) || (*(longlong *)(param_1 + 0x358) == 0)) ||
      (param_3 == 0)) || (param_4 == 0)) {
    return &stack0x00000000;
  }
  lVar7 = 0;
  local_68 = (undefined4 *)0x0;
  local_60 = 1;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
            (&local_68,0);
  puVar3 = local_68;
  *local_68 = 0xd;
  FWeakObjectPtr::operator=(local_68 + 1,0);
  FWeakObjectPtr::operator=(puVar3 + 3,param_2);
  if (*(longlong *)(param_4 + 0x78) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = FUN_1409a72d0(*(undefined8 *)(param_1 + 0x348),*(undefined8 *)(param_3 + 0x10),
                          *(longlong *)(param_4 + 0x78));
    lVar8 = *(longlong *)(param_4 + 0x78);
  }
  if ((lVar8 == 0) || (lVar7 != 0)) {
    plVar11 = *(longlong **)(param_4 + 0x68);
    plVar12 = plVar11 + *(int *)(param_4 + 0x70);
    for (; plVar11 != plVar12; plVar11 = plVar11 + 1) {
      lVar8 = *plVar11;
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x98) != '\0')) {
        lVar9 = FUN_1413e0850();
        uVar14 = local_60;
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((!bVar2) || (*(char *)(lVar8 + 0xa0) != '\x01')) {
          lVar9 = (longlong)(int)local_60;
          iVar6 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar6);
          if (local_60._4_4_ < iVar6) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
            ResizeGrow(&local_68,uVar14 & 0xffffffff);
          }
          puVar3 = local_68;
          local_68[lVar9 * 5] = 0xd;
          FWeakObjectPtr::operator=(local_68 + lVar9 * 5 + 1,lVar8);
          FWeakObjectPtr::operator=(puVar3 + lVar9 * 5 + 3,param_2);
        }
      }
    }
    plVar12 = *(longlong **)(param_1 + 0x378);
    uVar13 = 0;
    uVar14 = (longlong)*(int *)(param_1 + 0x380) & 0x1fffffffffffffff;
    if (plVar12 + *(int *)(param_1 + 0x380) < plVar12) {
      uVar14 = uVar13;
    }
    if (uVar14 != 0) {
LAB_1410e6092:
      lVar8 = *plVar12;
      if (lVar8 != 0) {
        plVar10 = *(longlong **)(param_4 + 0x68);
        lVar9 = *(longlong *)(lVar8 + 0x88);
        plVar11 = plVar10 + *(int *)(param_4 + 0x70);
        for (; plVar10 != plVar11; plVar10 = plVar10 + 1) {
          if (*plVar10 == lVar9) {
            if ((*(longlong *)(param_4 + 0x78) == 0) || (lVar7 == 0)) goto LAB_1410e6118;
            if (lVar9 == 0) goto LAB_1410e6112;
            plVar10 = *(longlong **)(lVar7 + 0x88);
            plVar11 = plVar10 + *(int *)(lVar7 + 0x90);
            goto joined_r0x0001410e60fb;
          }
        }
      }
      goto LAB_1410e6194;
    }
  }
LAB_1410e61af:
  if ((int)local_60 == 0) {
    local_60 = CONCAT44(local_60._4_4_,1);
    if (local_60._4_4_ < 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (&local_68,0);
    }
    puVar3 = local_68;
    *local_68 = 0;
    FWeakObjectPtr::operator=(local_68 + 1,0);
    FWeakObjectPtr::operator=(puVar3 + 3,param_2);
  }
  FUN_1409b5310(*(undefined8 *)(param_1 + 0x2f8),param_2,&local_68);
  if (local_68 != (undefined4 *)0x0) {
    FMemory::Free();
  }
  return (undefined1 *)0x1;
joined_r0x0001410e60fb:
  if (plVar10 == plVar11) goto LAB_1410e6112;
  if (*plVar10 == lVar9) {
    bVar2 = true;
    goto LAB_1410e6114;
  }
  plVar10 = plVar10 + 1;
  goto joined_r0x0001410e60fb;
LAB_1410e6112:
  bVar2 = false;
LAB_1410e6114:
  if (bVar2) {
LAB_1410e6118:
    local_40 = 0;
    cVar5 = FUN_1409a7560(*(undefined8 *)(param_1 + 0x358),lVar8,local_58);
    if ((cVar5 != '\0') && (cVar5 = FUN_1409a1f80(local_58), uVar4 = local_60, cVar5 != '\0')) {
      lVar9 = (longlong)(int)local_60;
      uVar1 = *(undefined8 *)(lVar8 + 0x88);
      iVar6 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar6);
      if (local_60._4_4_ < iVar6) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
        ResizeGrow(&local_68,uVar4 & 0xffffffff);
      }
      puVar3 = local_68;
      local_68[lVar9 * 5] = 0xd;
      FWeakObjectPtr::operator=(local_68 + lVar9 * 5 + 1,uVar1);
      FWeakObjectPtr::operator=(puVar3 + lVar9 * 5 + 3,param_2);
    }
  }
LAB_1410e6194:
  plVar12 = plVar12 + 1;
  uVar13 = uVar13 + 1;
  if (uVar13 == uVar14) goto LAB_1410e61af;
  goto LAB_1410e6092;
}



// FUNCTION 1410e6250 FUN_1410e6250 body=480 status=ok
// SIG undefined FUN_1410e6250(void)

undefined1 * FUN_1410e6250(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *local_58;
  undefined8 local_50;
  undefined1 local_48 [24];
  undefined8 local_30;
  
  if (((*(longlong *)(param_1 + 0x2f8) != 0) && (*(longlong *)(param_1 + 0x358) != 0)) &&
     (param_3 != 0)) {
    uVar7 = 0;
    local_58 = (undefined4 *)0x0;
    local_50 = 1;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
              (&local_58,0);
    puVar2 = local_58;
    *local_58 = 0x11;
    FWeakObjectPtr::operator=(local_58 + 1,0);
    FWeakObjectPtr::operator=(puVar2 + 3,param_2);
    plVar8 = *(longlong **)(param_3 + 0x60);
    uVar9 = (longlong)*(int *)(param_3 + 0x68) & 0x1fffffffffffffff;
    if (plVar8 + *(int *)(param_3 + 0x68) < plVar8) {
      uVar9 = uVar7;
    }
    if (uVar9 != 0) {
      do {
        lVar1 = *plVar8;
        if (lVar1 != 0) {
          local_30 = 0;
          cVar4 = FUN_1409a7690(*(undefined8 *)(param_1 + 0x358),lVar1,local_48);
          if (cVar4 != '\0') {
            cVar4 = FUN_1409a1f80(local_48);
            uVar3 = local_50;
            if (cVar4 != '\0') {
              lVar6 = (longlong)(int)local_50;
              iVar5 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar5);
              if (local_50._4_4_ < iVar5) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
                ResizeGrow(&local_58,uVar3 & 0xffffffff);
              }
              puVar2 = local_58;
              local_58[lVar6 * 5] = 0x11;
              FWeakObjectPtr::operator=(local_58 + lVar6 * 5 + 1,lVar1);
              FWeakObjectPtr::operator=(puVar2 + lVar6 * 5 + 3,param_2);
            }
          }
        }
        plVar8 = plVar8 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar9);
    }
    if ((int)local_50 == 0) {
      local_50 = CONCAT44(local_50._4_4_,1);
      if (local_50._4_4_ < 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
        ResizeGrow(&local_58,0);
      }
      puVar2 = local_58;
      *local_58 = 0;
      FWeakObjectPtr::operator=(local_58 + 1,0);
      FWeakObjectPtr::operator=(puVar2 + 3,param_2);
    }
    FUN_1409b5310(*(undefined8 *)(param_1 + 0x2f8),param_2,&local_58);
    if (local_58 != (undefined4 *)0x0) {
      FMemory::Free();
    }
    return (undefined1 *)0x1;
  }
  return &stack0x00000000;
}



// FUNCTION 1410e6430 FUN_1410e6430 body=552 status=ok
// SIG undefined FUN_1410e6430(void)

void FUN_1410e6430(longlong *param_1,undefined8 *param_2,undefined1 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  if ((param_1 != (longlong *)0x0) && (lVar5 = (**(code **)(*param_1 + 0x148))(), lVar5 != 0)) {
    if (*(longlong *)(lVar5 + 400) == 0) {
      lVar8 = lVar5 + 0x400;
    }
    else {
      lVar8 = *(longlong *)(*(longlong *)(lVar5 + 400) + 0x98);
    }
    lVar6 = FLatentActionManager::FindExistingAction<FDelayAction>
                      (lVar8,param_2[2],*(undefined4 *)((longlong)param_2 + 4));
    if (lVar6 == 0) {
      puVar7 = (undefined8 *)operator_new(0x30);
      if (puVar7 != (undefined8 *)0x0) {
        uVar1 = param_2[2];
        *puVar7 = &PTR__scalar_deleting_destructor__1446a46c0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = param_2[1];
        *(undefined4 *)(puVar7 + 4) = *(undefined4 *)param_2;
        FWeakObjectPtr::operator=((longlong)puVar7 + 0x24,uVar1);
        FUN_1410ea800(puVar7,param_1);
      }
      FUN_142514cf0(lVar8,param_2[2],*(undefined4 *)((longlong)param_2 + 4),puVar7);
    }
    else {
      FUN_1410ea800(lVar6,param_1);
    }
    lVar8 = (**(code **)(param_1[0x130] + 0x10))();
    if (lVar8 != 0) {
      lVar6 = FUN_1414d9130();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && ((param_4 != 0 || (param_4 = FUN_1411e0ff0(lVar8), param_4 != 0)))) {
        lVar8 = UPawnAction_Sequence::StaticClass();
        if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          *(undefined1 *)(param_4 + 0xa0) = 1;
          uVar4 = FUN_1410cd5d0(lVar5);
          *(undefined4 *)(param_4 + 0xa4) = uVar4;
        }
        lVar5 = (**(code **)(*param_1 + 0xfa8))(param_1);
        if ((lVar5 != 0) && (lVar5 = FUN_142f02280(lVar5,param_4), lVar5 != 0)) {
          lVar8 = AArchVisCharacter::StaticClass();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            uVar2 = param_2[1];
            uVar1 = param_2[2];
            *(undefined8 *)(lVar5 + 0x740) = *param_2;
            *(undefined8 *)(lVar5 + 0x748) = uVar2;
            *(undefined1 *)(lVar5 + 0x7b1) = param_3;
            *(undefined8 *)(lVar5 + 0x750) = uVar1;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1410e6660 FUN_1410e6660 body=852 status=ok
// SIG undefined FUN_1410e6660(void)

undefined1 * FUN_1410e6660(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined4 *local_58;
  undefined8 local_50;
  undefined1 local_48 [24];
  undefined8 local_30;
  
  if (((*(longlong *)(param_1 + 0x2f8) == 0) || (*(longlong *)(param_1 + 0x358) == 0)) ||
     (param_3 == 0)) {
    return &stack0x00000000;
  }
  local_58 = (undefined4 *)0x0;
  local_50 = 1;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
            (&local_58,0);
  puVar6 = local_58;
  *local_58 = 10;
  FWeakObjectPtr::operator=(local_58 + 1,0);
  FWeakObjectPtr::operator=(puVar6 + 3,param_2);
  plVar16 = *(longlong **)(param_3 + 0x68);
  plVar1 = plVar16 + *(int *)(param_3 + 0x70);
  do {
    if (plVar16 == plVar1) {
      if ((int)local_50 == 0) {
        local_50._4_4_ = (int)(local_50 >> 0x20);
        local_50 = CONCAT44(local_50._4_4_,1);
        if (local_50._4_4_ < 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
          ResizeGrow(&local_58,0);
        }
        puVar6 = local_58;
        *local_58 = 0;
        FWeakObjectPtr::operator=(local_58 + 1,0);
        FWeakObjectPtr::operator=(puVar6 + 3,param_2);
      }
      FUN_1409b5310(*(undefined8 *)(param_1 + 0x2f8),param_2,&local_58);
      if (local_58 != (undefined4 *)0x0) {
        FMemory::Free();
      }
      return (undefined1 *)0x1;
    }
    uVar14 = 0;
    if (*plVar16 != 0) {
      lVar10 = FUN_14144bcb0();
      for (lVar2 = *plVar16; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == lVar10) {
          if (*plVar16 != 0) {
            plVar15 = *(longlong **)(param_1 + 0x368);
            uVar17 = (longlong)*(int *)(param_1 + 0x370) & 0x1fffffffffffffff;
            if (plVar15 + *(int *)(param_1 + 0x370) < plVar15) {
              uVar17 = 0;
            }
            if (uVar17 != 0) {
              do {
                lVar2 = *plVar15;
                if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x88) != 0)) {
                  plVar11 = (longlong *)FUN_14144bcb0();
                  plVar3 = *(longlong **)(lVar2 + 0x88);
                  for (plVar4 = plVar3; plVar4 != (longlong *)0x0; plVar4 = (longlong *)plVar4[6]) {
                    if (plVar4 == plVar11) {
                      if (plVar3 == (longlong *)0x0) break;
                      lVar10 = plVar3[0x1f];
                      if (lVar10 == 0) {
                        (**(code **)(*plVar3 + 0x368))(plVar3);
                        lVar10 = plVar3[0x1f];
                        if (lVar10 != 0) goto LAB_1410e67f2;
                      }
                      else {
LAB_1410e67f2:
                        if (*(char *)(lVar10 + 0xf8) == '\0') break;
                      }
                      local_30 = 0;
                      if (*plVar16 == 0) goto LAB_1410e682e;
                      lVar12 = FUN_14144bcb0();
                      lVar10 = *plVar16;
                      lVar5 = lVar10;
                      goto joined_r0x0001410e681c;
                    }
                  }
                }
LAB_1410e68f0:
                plVar15 = plVar15 + 1;
                uVar14 = uVar14 + 1;
              } while (uVar14 != uVar17);
            }
          }
          break;
        }
      }
    }
    plVar16 = plVar16 + 1;
  } while( true );
joined_r0x0001410e681c:
  if (lVar5 == 0) goto LAB_1410e682e;
  if (lVar5 == lVar12) goto LAB_1410e6830;
  lVar5 = *(longlong *)(lVar5 + 0x30);
  goto joined_r0x0001410e681c;
LAB_1410e682e:
  lVar10 = 0;
LAB_1410e6830:
  if (*(longlong *)(lVar2 + 0x88) != 0) {
    lVar13 = FUN_14144bcb0();
    lVar12 = *(longlong *)(lVar2 + 0x88);
    for (lVar5 = lVar12; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
      if (lVar5 == lVar13) goto joined_r0x0001410e6865;
    }
  }
  lVar12 = 0;
joined_r0x0001410e6865:
  do {
    if (lVar12 == 0) goto LAB_1410e68f0;
    if (lVar12 == lVar10) {
      cVar8 = FUN_1409a7560(*(undefined8 *)(param_1 + 0x358),lVar2,local_48);
      if ((cVar8 != '\0') && (cVar8 = FUN_1409a1f80(local_48), uVar7 = local_50, cVar8 != '\0')) {
        lVar10 = (longlong)(int)local_50;
        iVar9 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar9);
        if (local_50._4_4_ < iVar9) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
          ResizeGrow(&local_58,uVar7 & 0xffffffff);
        }
        puVar6 = local_58;
        local_58[lVar10 * 5] = 10;
        FWeakObjectPtr::operator=(local_58 + lVar10 * 5 + 1,lVar2);
        FWeakObjectPtr::operator=(puVar6 + lVar10 * 5 + 3,param_2);
      }
      goto LAB_1410e68f0;
    }
    lVar12 = *(longlong *)(lVar12 + 0x30);
  } while( true );
}



// FUNCTION 1410e69c0 FUN_1410e69c0 body=601 status=ok
// SIG undefined FUN_1410e69c0(void)

undefined8 FUN_1410e69c0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined4 *local_38;
  uint local_30;
  uint local_2c;
  
  if ((*(longlong *)(param_1 + 0x2f8) != 0) && (param_3 != 0)) {
    puVar8 = *(undefined8 **)(param_3 + 0x38);
    uVar5 = 0;
    local_38 = (undefined4 *)0x0;
    local_30 = 0;
    local_2c = 0;
    uVar7 = (longlong)*(int *)(param_3 + 0x40) & 0x1fffffffffffffff;
    if (puVar8 + *(int *)(param_3 + 0x40) < puVar8) {
      uVar7 = uVar5;
    }
    uVar6 = uVar5;
    uVar9 = uVar5;
    if (uVar7 != 0) {
      do {
        uVar1 = *puVar8;
        local_30 = (int)uVar5 + 1;
        if ((int)uVar9 < (int)local_30) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
          ResizeGrow(&local_38,uVar5);
        }
        puVar2 = local_38;
        lVar4 = (longlong)(int)uVar5;
        local_38[lVar4 * 5] = 6;
        FWeakObjectPtr::operator=(local_38 + lVar4 * 5 + 1,uVar1);
        FWeakObjectPtr::operator=(puVar2 + lVar4 * 5 + 3,param_2);
        uVar9 = (ulonglong)local_2c;
        puVar8 = puVar8 + 1;
        uVar5 = (ulonglong)local_30;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar7);
    }
    uVar3 = local_30;
    uVar7 = 0;
    if (0 < *(int *)(param_3 + 0x50)) {
      local_30 = local_30 + 1;
      if ((int)uVar9 < (int)local_30) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
        ResizeGrow(&local_38,uVar3);
      }
      puVar2 = local_38;
      lVar4 = (longlong)(int)uVar3;
      local_38[lVar4 * 5] = 2;
      FWeakObjectPtr::operator=(local_38 + lVar4 * 5 + 1,0);
      FWeakObjectPtr::operator=(puVar2 + lVar4 * 5 + 3,param_2);
      puVar8 = *(undefined8 **)(param_3 + 0x48);
      uVar5 = (longlong)*(int *)(param_3 + 0x50) & 0x1fffffffffffffff;
      if (puVar8 + *(int *)(param_3 + 0x50) < puVar8) {
        uVar5 = uVar7;
      }
      if (uVar5 != 0) {
        do {
          uVar3 = local_30;
          lVar4 = (longlong)(int)local_30;
          uVar1 = *puVar8;
          local_30 = local_30 + 1;
          if ((int)local_2c < (int)local_30) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
            ResizeGrow(&local_38,uVar3);
          }
          puVar2 = local_38;
          local_38[lVar4 * 5] = 6;
          FWeakObjectPtr::operator=(local_38 + lVar4 * 5 + 1,uVar1);
          FWeakObjectPtr::operator=(puVar2 + lVar4 * 5 + 3,param_2);
          puVar8 = puVar8 + 1;
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar5);
      }
    }
    FUN_1409b5310(*(undefined8 *)(param_1 + 0x2f8),param_2,&local_38);
    if (local_30 == 0) {
      local_30 = 1;
      if ((int)local_2c < 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
        ResizeGrow(&local_38,0);
      }
      puVar2 = local_38;
      *local_38 = 0;
      FWeakObjectPtr::operator=(local_38 + 1,0);
      FWeakObjectPtr::operator=(puVar2 + 3,param_2);
    }
    if (local_38 != (undefined4 *)0x0) {
      FMemory::Free();
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1410e6c20 FUN_1410e6c20 body=1337 status=ok
// SIG undefined FUN_1410e6c20(void)

void FUN_1410e6c20(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined4 *local_48;
  undefined8 local_40;
  longlong *local_38;
  int local_30;
  
  uVar5 = FUN_1404b03b0();
  FUN_1410eba70(param_1,uVar5);
  plVar11 = *(longlong **)(param_1 + 0x318);
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x288))(plVar11,2);
  }
  FUN_1409a3110(*(undefined8 *)(param_1 + 0x2f8));
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x348) + 0x398);
  if ((lVar8 != 0) && (lVar8 = *(longlong *)(lVar8 + 0x30), lVar8 != 0)) {
    uVar12 = 0;
    local_48 = (undefined4 *)0x0;
    local_40 = 1;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
              (&local_48,0);
    puVar2 = local_48;
    *local_48 = 1;
    FWeakObjectPtr::operator=(local_48 + 1,0);
    FWeakObjectPtr::operator=(puVar2 + 3,0);
    lVar7 = (longlong)(int)local_40;
    iVar4 = (int)local_40 + 1;
    if (local_40._4_4_ < iVar4) {
      uVar6 = local_40 & 0xffffffff;
      local_40._0_4_ = iVar4;
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (&local_48,uVar6);
      iVar4 = (int)local_40;
    }
    local_40._0_4_ = iVar4;
    puVar2 = local_48;
    local_48[lVar7 * 5] = 2;
    FWeakObjectPtr::operator=(local_48 + lVar7 * 5 + 1,0);
    FWeakObjectPtr::operator=(puVar2 + lVar7 * 5 + 3,0);
    iVar4 = (int)local_40;
    lVar7 = (longlong)(int)local_40;
    local_40._0_4_ = (int)local_40 + 1;
    if (local_40._4_4_ < (int)local_40) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (&local_48,iVar4);
    }
    puVar2 = local_48;
    local_48[lVar7 * 5] = 0xe;
    FWeakObjectPtr::operator=(local_48 + lVar7 * 5 + 1,0);
    FWeakObjectPtr::operator=(puVar2 + lVar7 * 5 + 3,0);
    iVar4 = (int)local_40;
    lVar7 = (longlong)(int)local_40;
    local_40._0_4_ = (int)local_40 + 1;
    if (local_40._4_4_ < (int)local_40) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (&local_48,iVar4);
    }
    puVar2 = local_48;
    local_48[lVar7 * 5] = 0xf;
    FWeakObjectPtr::operator=(local_48 + lVar7 * 5 + 1,0);
    FWeakObjectPtr::operator=(puVar2 + lVar7 * 5 + 3,0);
    iVar4 = (int)local_40;
    lVar7 = (longlong)(int)local_40;
    local_40._0_4_ = (int)local_40 + 1;
    if (local_40._4_4_ < (int)local_40) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (&local_48,iVar4);
    }
    puVar2 = local_48;
    local_48[lVar7 * 5] = 2;
    FWeakObjectPtr::operator=(local_48 + lVar7 * 5 + 1,0);
    FWeakObjectPtr::operator=(puVar2 + lVar7 * 5 + 3,0);
    plVar11 = *(longlong **)(lVar8 + 0x38);
    uVar6 = (longlong)*(int *)(lVar8 + 0x40) & 0x1fffffffffffffff;
    if (plVar11 + *(int *)(lVar8 + 0x40) < plVar11) {
      uVar6 = uVar12;
    }
    uVar9 = uVar12;
    if (uVar6 != 0) {
      do {
        uVar3 = local_40;
        lVar8 = *plVar11;
        if (lVar8 != 0) {
          lVar7 = (longlong)(int)local_40;
          iVar4 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar4);
          if (local_40._4_4_ < iVar4) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
            ResizeGrow(&local_48,uVar3 & 0xffffffff);
          }
          puVar2 = local_48;
          local_48[lVar7 * 5] = 4;
          FWeakObjectPtr::operator=(local_48 + lVar7 * 5 + 1,lVar8);
          FWeakObjectPtr::operator=(puVar2 + lVar7 * 5 + 3,0);
        }
        plVar11 = plVar11 + 1;
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar6);
    }
    lVar8 = (longlong)(int)local_40;
    iVar4 = (int)local_40 + 1;
    if (local_40._4_4_ < iVar4) {
      uVar6 = local_40 & 0xffffffff;
      local_40._0_4_ = iVar4;
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (&local_48,uVar6);
      iVar4 = (int)local_40;
    }
    local_40._0_4_ = iVar4;
    puVar2 = local_48;
    local_48[lVar8 * 5] = 2;
    FWeakObjectPtr::operator=(local_48 + lVar8 * 5 + 1,0);
    FWeakObjectPtr::operator=(puVar2 + lVar8 * 5 + 3,0);
    iVar4 = (int)local_40;
    lVar8 = (longlong)(int)local_40;
    local_40._0_4_ = (int)local_40 + 1;
    if (local_40._4_4_ < (int)local_40) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (&local_48,iVar4);
    }
    puVar2 = local_48;
    local_48[lVar8 * 5] = 9;
    FWeakObjectPtr::operator=(local_48 + lVar8 * 5 + 1,0);
    FWeakObjectPtr::operator=(puVar2 + lVar8 * 5 + 3,0);
    FUN_1409a7860(*(undefined8 *)(param_1 + 0x358),&local_38);
    plVar11 = local_38 + local_30;
    uVar6 = local_40;
    for (plVar10 = local_38; local_40 = uVar6, plVar10 != plVar11; plVar10 = plVar10 + 1) {
      plVar1 = (longlong *)*plVar10;
      if (plVar1 != (longlong *)0x0) {
        lVar8 = plVar1[0x1f];
        if (lVar8 == 0) {
          (**(code **)(*plVar1 + 0x368))(plVar1);
          lVar8 = plVar1[0x1f];
          if (lVar8 == 0) goto LAB_1410e6f87;
        }
        uVar6 = local_40;
        lVar7 = (longlong)(int)local_40;
        iVar4 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar4);
        if (local_40._4_4_ < iVar4) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
          ResizeGrow(&local_48,uVar6 & 0xffffffff);
        }
        puVar2 = local_48;
        local_48[lVar7 * 5] = 0xb;
        FWeakObjectPtr::operator=(local_48 + lVar7 * 5 + 1,lVar8);
        FWeakObjectPtr::operator=(puVar2 + lVar7 * 5 + 3,0);
      }
LAB_1410e6f87:
      uVar6 = local_40;
    }
    if ((*(longlong *)(param_1 + 0x350) != 0) &&
       (0 < *(int *)(*(longlong *)(param_1 + 0x350) + 0x198))) {
      local_40._0_4_ = (int)uVar6;
      lVar8 = (longlong)(int)local_40;
      local_40._0_4_ = (int)local_40 + 1;
      local_40._4_4_ = (int)(uVar6 >> 0x20);
      if (local_40._4_4_ < (int)local_40) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
        ResizeGrow(&local_48,uVar6 & 0xffffffff);
      }
      puVar2 = local_48;
      local_48[lVar8 * 5] = 2;
      FWeakObjectPtr::operator=(local_48 + lVar8 * 5 + 1,0);
      FWeakObjectPtr::operator=(puVar2 + lVar8 * 5 + 3,0);
      plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x350) + 400);
      uVar9 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x350) + 0x198);
      uVar6 = uVar9 & 0x1fffffffffffffff;
      if (plVar11 + uVar9 < plVar11) {
        uVar6 = uVar12;
      }
      if (uVar6 != 0) {
        do {
          uVar9 = local_40;
          lVar8 = *plVar11;
          if (lVar8 != 0) {
            lVar7 = (longlong)(int)local_40;
            iVar4 = (int)local_40 + 1;
            local_40 = CONCAT44(local_40._4_4_,iVar4);
            if (local_40._4_4_ < iVar4) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::
              ResizeGrow(&local_48,uVar9 & 0xffffffff);
            }
            puVar2 = local_48;
            local_48[lVar7 * 5] = 0x10;
            FWeakObjectPtr::operator=(local_48 + lVar7 * 5 + 1,lVar8);
            FWeakObjectPtr::operator=(puVar2 + lVar7 * 5 + 3,0);
          }
          plVar11 = plVar11 + 1;
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar6);
      }
    }
    lVar8 = (longlong)(int)local_40;
    iVar4 = (int)local_40 + 1;
    if (local_40._4_4_ < iVar4) {
      uVar12 = local_40 & 0xffffffff;
      local_40._0_4_ = iVar4;
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (&local_48,uVar12);
      iVar4 = (int)local_40;
    }
    local_40._0_4_ = iVar4;
    puVar2 = local_48;
    local_48[lVar8 * 5] = 2;
    FWeakObjectPtr::operator=(local_48 + lVar8 * 5 + 1,0);
    FWeakObjectPtr::operator=(puVar2 + lVar8 * 5 + 3,0);
    iVar4 = (int)local_40;
    lVar8 = (longlong)(int)local_40;
    local_40._0_4_ = (int)local_40 + 1;
    if (local_40._4_4_ < (int)local_40) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (&local_48,iVar4);
    }
    puVar2 = local_48;
    local_48[lVar8 * 5] = 3;
    FWeakObjectPtr::operator=(local_48 + lVar8 * 5 + 1,0);
    FWeakObjectPtr::operator=(puVar2 + lVar8 * 5 + 3,0);
    FUN_1409b5310(*(undefined8 *)(param_1 + 0x2f8),0,&local_48);
    *(undefined1 *)(param_1 + 0x388) = 1;
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_48 != (undefined4 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1410e7160 FUN_1410e7160 body=440 status=ok
// SIG undefined FUN_1410e7160(void)

void FUN_1410e7160(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [24];
  
  plVar3 = *(longlong **)(param_1 + 0x770);
  if (plVar3 != (longlong *)0x0) {
    uVar5 = FTextFormat::FTextFormat(local_40,param_1 + 0x7b0);
    FText::Format(local_88,uVar5,param_1 + 0x680);
    (**(code **)(*plVar3 + 0x2b0))(plVar3,local_88,1,0);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_80 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x778);
  if (plVar3 != (longlong *)0x0) {
    uVar5 = FTextFormat::FTextFormat(local_30,param_1 + 0x7c8);
    FText::Format(local_70,uVar5,param_1 + 0x6d0);
    (**(code **)(*plVar3 + 0x2b0))(plVar3,local_70,1,0);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_68 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_68 + 8))(local_68,1);
        }
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x780);
  if (lVar4 != 0) {
    uVar5 = FTextFormat::FTextFormat(local_20,param_1 + 0x7e0);
    FText::Format(local_58,uVar5,param_1 + 0x720);
    FUN_142ed51f0(lVar4,local_58,0);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 1410e7320 FUN_1410e7320 body=605 status=ok
// SIG undefined FUN_1410e7320(void)

void FUN_1410e7320(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *plStack_50;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_20,L"DirectX 12 is now enabled",L"MainMenu",L"DirectXBetaUpgradeTitle");
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_38,
             L"DirectX 12 is out of beta and has now been enabled by default. The next time you launch Borderlands 3, your game will be running on DirectX 12 and may take longer to load based on your hardware configuration. Once this initial DirectX 12 boot-up is successfully completed, your subsequent launches of Borderlands 3 in DirectX 12 should load much faster.<br><br><br>If you would prefer to adjust these settings so that your game runs on DirectX 11, you can change your Graphics API by going to the Options menu, selecting Visuals, and clicking over to the Advanced section to change the Graphics API back to DirectX 11. Restarting the game will put this Graphics API change into effect."
             ,L"MainMenu",L"DirectXBetaUpgradeMessage");
  lVar4 = *(longlong *)(param_1 + 0x778);
  if (lVar4 == 0) {
    puVar8 = &local_58;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  else {
    local_68 = *(undefined8 *)(lVar4 + 0x170);
    bVar7 = true;
    bVar6 = false;
    local_60 = *(longlong **)(lVar4 + 0x178);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    puVar8 = &local_68;
  }
  local_40 = (longlong *)puVar8[1];
  puVar8[1] = 0;
  *puVar8 = 0;
  plVar5 = plStack_50;
  if (bVar6) {
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
  }
  plVar5 = local_60;
  if ((bVar7) && (local_60 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x4e8) != 0) {
    FUN_141319ff0();
  }
  plVar5 = *(longlong **)(param_1 + 0x770);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x2b0))(plVar5,local_20,1,0);
  }
  plVar5 = *(longlong **)(param_1 + 0x778);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x2b0))(plVar5,local_38,1,0);
  }
  plVar5 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_18 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  return;
}



// FUNCTION 1410e7580 FUN_1410e7580 body=191 status=ok
// SIG undefined FUN_1410e7580(void)

void FUN_1410e7580(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x4e8);
  if (lVar1 != 0) {
    lVar4 = FUN_141319ff0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) && (lVar1 != -0xc0)) &&
       (plVar2 = *(longlong **)(param_1 + 0x770), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x2a8))
                (plVar2,lVar1 + 0x188,CONCAT71((int7)((ulonglong)(lVar4 + 0x88) >> 8),1),0);
    }
  }
  if (*(int *)(param_1 + 0x840) == 0) {
    FUN_1410c4ba0(param_1);
  }
  else if (*(longlong *)(param_1 + 0x848) != 0) {
    FUN_1410f52b0(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x848) + 0x310));
    return;
  }
  return;
}



// FUNCTION 1410e7640 FUN_1410e7640 body=144 status=ok
// SIG undefined FUN_1410e7640(void)

void FUN_1410e7640(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_28,L"Report Player",L"MainMenu",L"ReportPlayerDialogTitle");
  plVar3 = *(longlong **)(param_1 + 0x770);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x2b0))(plVar3,local_28,1,0);
  }
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
  return;
}



// FUNCTION 1410e76d0 FUN_1410e76d0 body=231 status=ok
// SIG undefined FUN_1410e76d0(void)

void FUN_1410e76d0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x1b4);
  if (cVar2 != '\0') {
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x1b4);
    lVar5 = FWeakObjectPtr::Get(lVar5 + 0x1ac);
    if (lVar5 != 0) {
      iVar3 = FUN_140cfd6b0(lVar5);
      goto LAB_1410e7720;
    }
  }
  iVar3 = -1;
LAB_1410e7720:
  lVar5 = *(longlong *)(param_1 + 0x198);
  if (lVar5 != 0) {
    iVar8 = 0;
    iVar4 = FUN_142eb7440(lVar5);
    if (0 < iVar4) {
      do {
        lVar6 = FUN_142eb6a30(lVar5,iVar8);
        if (lVar6 != 0) {
          lVar7 = URemnantGameInstance::GetPrivateStaticClass();
          iVar4 = *(int *)(lVar7 + 0x90);
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < iVar4) ||
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)iVar4 * 8)
              != lVar7 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            FUN_142ed2820(lVar6,CONCAT71((int7)(int3)((uint)iVar4 >> 8),iVar8 == iVar3),1);
          }
        }
        iVar8 = iVar8 + 1;
        iVar4 = FUN_142eb7440(lVar5);
      } while (iVar8 < iVar4);
    }
  }
  return;
}



// FUNCTION 1410e77c0 FUN_1410e77c0 body=1829 status=ok
// SIG undefined FUN_1410e77c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410e77c0(longlong param_1)

{
  longlong *plVar1;
  undefined2 uVar2;
  void *_Src;
  bool bVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  longlong *local_d0;
  undefined1 local_c8;
  undefined8 local_b8;
  undefined2 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 *local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40 [2];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  lVar13 = *(longlong *)(param_1 + 2000);
  uVar2 = *(undefined2 *)(param_1 + 0xc49);
  lVar14 = (longlong)*(int *)(param_1 + 0x7d8) * 0xe8 + lVar13;
  if (lVar13 != lVar14) {
    local_b0._1_1_ = (char)((ushort)uVar2 >> 8);
    do {
      if ((*(char *)(lVar13 + 0x18) == (char)uVar2) && (*(char *)(lVar13 + 0x19) == local_b0._1_1_))
      {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) goto LAB_1410e7837;
      lVar13 = lVar13 + 0xe8;
    } while (lVar13 != lVar14);
  }
  lVar13 = param_1 + 0xf60;
LAB_1410e7837:
  local_b0 = uVar2;
  lVar14 = FUN_140eac060(param_1);
  if (lVar14 == 0) {
    return;
  }
  lVar8 = UUGButton::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
      != lVar8 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  if (*(char *)(lVar13 + 0x19) != '\b') {
    return;
  }
  if (*(longlong *)(param_1 + 0x10f0) == 0) {
    return;
  }
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0xc10);
  if (cVar5 == '\0') goto LAB_1410e7eb7;
  lVar8 = 0;
  plVar1 = (longlong *)(lVar14 + 0x678);
  local_70 = *(int *)(lVar14 + 0x680);
  lVar13 = (longlong)local_70;
  _Src = (void *)*plVar1;
  local_78 = (void *)0x0;
  if (local_70 == 0) {
    local_6c = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_78,local_70,0);
    _guard_xfg_dispatch_icall_nop(local_78,_Src,lVar13 << 2);
  }
  lVar13 = param_1 + 0xd78;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  lVar9 = FWeakObjectPtr::Get(lVar13);
  if (lVar9 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0xd80)) &&
       (local_b8 = 0, *(longlong *)(param_1 + 0xd88) != 0)) {
      lVar9 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar13,lVar9);
      if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0xd80) = DAT_1464b56f4;
      }
      lVar9 = FWeakObjectPtr::Get(lVar13);
      if (lVar9 != 0) goto LAB_1410e79a0;
    }
LAB_1410e7c6a:
    uVar4 = local_80;
    lVar13 = (longlong)(int)local_80;
    iVar6 = (int)local_80 + 1;
    local_80 = CONCAT44(local_80._4_4_,iVar6);
    if (local_80._4_4_ < iVar6) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_88,uVar4 & 0xffffffff);
    }
    uVar4 = local_90;
    *(undefined4 *)(local_88 + lVar13 * 4) = DAT_1464aa730;
    lVar13 = (longlong)(int)local_90;
    iVar6 = (int)local_90 + 1;
    local_90 = CONCAT44(local_90._4_4_,iVar6);
    if (local_90._4_4_ < iVar6) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_98,uVar4 & 0xffffffff);
    }
    uVar4 = local_a0;
    *(undefined4 *)(local_98 + lVar13 * 4) = DAT_1464aa730;
    lVar13 = (longlong)(int)local_a0;
    iVar6 = (int)local_a0 + 1;
    local_a0 = CONCAT44(local_a0._4_4_,iVar6);
    if (local_a0._4_4_ < iVar6) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_a8,uVar4 & 0xffffffff);
    }
    puVar12 = (undefined4 *)(local_a8 + lVar13 * 4);
    uVar7 = DAT_1464aa730;
  }
  else {
LAB_1410e79a0:
    lVar10 = AArchVisCharacter::StaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1410e7c6a;
    lVar9 = FWeakObjectPtr::Get(lVar13);
    if (lVar9 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(param_1 + 0xd80)) &&
         (local_b8 = 0, *(longlong *)(param_1 + 0xd88) != 0)) {
        lVar9 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar13,lVar9);
        if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_1 + 0xd80) = DAT_1464b56f4;
        }
        lVar9 = FWeakObjectPtr::Get(lVar13);
        if (lVar9 != 0) goto LAB_1410e7a53;
      }
LAB_1410e7a89:
      lVar9 = lVar8;
    }
    else {
LAB_1410e7a53:
      lVar10 = AArchVisCharacter::StaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_1410e7a89;
    }
    uVar4 = local_80;
    lVar10 = (longlong)(int)local_80;
    iVar6 = (int)local_80 + 1;
    local_80 = CONCAT44(local_80._4_4_,iVar6);
    if (local_80._4_4_ < iVar6) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_88,uVar4 & 0xffffffff);
    }
    *(undefined4 *)(local_88 + lVar10 * 4) = *(undefined4 *)(lVar9 + 0x7a4);
    lVar9 = FWeakObjectPtr::Get(lVar13);
    if (lVar9 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(param_1 + 0xd80)) &&
         (local_b8 = 0, *(longlong *)(param_1 + 0xd88) != 0)) {
        lVar9 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar13,lVar9);
        if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_1 + 0xd80) = DAT_1464b56f4;
        }
        lVar9 = FWeakObjectPtr::Get(lVar13);
        if (lVar9 != 0) goto LAB_1410e7b29;
      }
LAB_1410e7b5f:
      lVar9 = lVar8;
    }
    else {
LAB_1410e7b29:
      lVar10 = AArchVisCharacter::StaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_1410e7b5f;
    }
    uVar4 = local_90;
    lVar10 = (longlong)(int)local_90;
    iVar6 = (int)local_90 + 1;
    local_90 = CONCAT44(local_90._4_4_,iVar6);
    if (local_90._4_4_ < iVar6) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_98,uVar4 & 0xffffffff);
    }
    *(undefined4 *)(local_98 + lVar10 * 4) = *(undefined4 *)(lVar9 + 0x7a8);
    lVar9 = FWeakObjectPtr::Get(lVar13);
    if (lVar9 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(param_1 + 0xd80)) &&
         (local_b8 = 0, *(longlong *)(param_1 + 0xd88) != 0)) {
        lVar9 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar13,lVar9);
        if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_1 + 0xd80) = DAT_1464b56f4;
        }
        lVar9 = FWeakObjectPtr::Get(lVar13);
        if (lVar9 != 0) goto LAB_1410e7c07;
      }
LAB_1410e7c3d:
      lVar9 = lVar8;
    }
    else {
LAB_1410e7c07:
      lVar13 = AArchVisCharacter::StaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_1410e7c3d;
    }
    uVar4 = local_a0;
    lVar13 = (longlong)(int)local_a0;
    iVar6 = (int)local_a0 + 1;
    local_a0 = CONCAT44(local_a0._4_4_,iVar6);
    if (local_a0._4_4_ < iVar6) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_a8,uVar4 & 0xffffffff);
    }
    puVar12 = (undefined4 *)(local_a8 + lVar13 * 4);
    uVar7 = *(undefined4 *)(lVar9 + 0x7ac);
  }
  *puVar12 = uVar7;
  local_d0 = &local_a8;
  local_c8 = 0;
  local_d8 = &local_98;
  FUN_140f0bd70(*(undefined8 *)(param_1 + 0x10f0),param_1,&local_78,&local_88);
  FUN_140f084a0(*(undefined8 *)(param_1 + 0x10f0),*(undefined8 *)(param_1 + 0x1170));
  lVar13 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar13 != 0) {
    FUN_14145f370();
  }
  FUN_140f10f60(*(undefined8 *)(param_1 + 0x10f0));
  iVar6 = *(int *)(param_1 + 0xdc8);
  local_48 = DAT_1468b5ad4;
  if ((iVar6 < 0) || (*(int *)(lVar14 + 0x680) <= iVar6)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    local_48 = *(undefined4 *)(*plVar1 + (longlong)iVar6 * 4);
  }
  uStack_44 = DAT_1468b5ad4;
  iVar6 = *(int *)(param_1 + 0xdcc);
  if ((iVar6 < 0) || (*(int *)(lVar14 + 0x680) <= iVar6)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    uStack_44 = *(undefined4 *)(*plVar1 + (longlong)iVar6 * 4);
  }
  local_d8 = (longlong *)CONCAT71(local_d8._1_7_,1);
  FUN_1410caf30(param_1 + 0xc50,local_40,2,plVar1);
  local_68 = (undefined8 *)0x0;
  local_60 = 3;
  TArray<int,FDefaultAllocator>::ResizeForCopy(&local_68,3);
  *local_68 = CONCAT44(uStack_44,local_48);
  *(undefined4 *)(local_68 + 1) = local_40[0];
  FUN_140ee1960(*(undefined8 *)(param_1 + 0x10f0),&local_68);
  uVar11 = TScriptInterface<IBlendableInterface>::
           TScriptInterface<IBlendableInterface><UMaterialInterface>
                     (local_58,*(undefined8 *)(param_1 + 0x10f0));
  FUN_142ed36d0(param_1,uVar11,0);
  if (local_68 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
LAB_1410e7eb7:
  if (*(longlong *)(param_1 + 0x10e0) != 0) {
    FUN_1410eda30(*(longlong *)(param_1 + 0x10e0),0,0);
  }
  return;
}



// FUNCTION 1410e7ef0 FUN_1410e7ef0 body=621 status=ok
// SIG undefined FUN_1410e7ef0(void)

void FUN_1410e7ef0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_18 [2];
  
  if ((*(longlong *)(param_1 + 0x3d0) != 0) && (*(longlong *)(param_1 + 0x3d8) != 0)) {
    local_18[0] = 0;
    if (*(int *)(param_1 + 0x308) == 1) {
      local_18[1] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"loadout",0x10);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x3d0),local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x3d8),param_1 + 0x310);
    }
    else {
      local_18[1] = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"customization",0x1c);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x3d0),local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  if (*(char *)(param_1 + 800) == '\0') {
    if (*(int *)(param_1 + 0x308) == 1) {
      FUN_1410e85c0(param_1);
      return;
    }
    if (*(int *)(param_1 + 0x308) == 2) {
      FUN_1410e8160(param_1);
      return;
    }
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x38);
    if (lVar1 != 0) {
      lVar5 = FUN_141329d80();
      lVar2 = *(longlong *)(lVar1 + 0x10);
      if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        plVar3 = *(longlong **)(param_1 + 0x388);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x278))(plVar3,CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
        }
        plVar3 = *(longlong **)(param_1 + 0x338);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x278))(plVar3,0);
        }
        plVar3 = *(longlong **)(param_1 + 0x368);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x278))(plVar3,0);
        }
        plVar3 = *(longlong **)(param_1 + 0x370);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x278))(plVar3,0);
        }
        if (*(longlong **)(param_1 + 0x328) != (longlong *)0x0) {
          lVar2 = **(longlong **)(param_1 + 0x328);
          uVar6 = FUN_1404b03b0();
          (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1 + 0x328),uVar6,1,0);
        }
        *(undefined4 *)(param_1 + 0x340) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x344) = 0;
        *(undefined8 *)(param_1 + 0x350) = 0;
        *(undefined4 *)(param_1 + 0x360) = 0;
        if (0x7fffffff < *(uint *)(param_1 + 0x364)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x358,0);
        }
        if (*(undefined2 **)(param_1 + 0x358) != (undefined2 *)0x0) {
          **(undefined2 **)(param_1 + 0x358) = 0;
        }
        *(undefined4 *)(param_1 + 0x348) = 0;
        *(undefined1 *)(lVar1 + 0x1138) = 1;
        FUN_142ed3c20(param_1,0,1);
      }
    }
  }
  return;
}



// FUNCTION 1410e8160 FUN_1410e8160 body=1115 status=ok
// SIG undefined FUN_1410e8160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410e8160(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  char cVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_798 [32];
  undefined2 local_778;
  undefined8 local_770;
  longlong local_768;
  undefined1 local_760 [16];
  undefined1 local_750 [8];
  longlong *local_748;
  undefined1 local_738 [8];
  longlong *local_730;
  undefined1 local_718 [48];
  undefined4 local_6e8;
  undefined4 local_6e4;
  int local_6e0;
  longlong local_6d8;
  undefined1 local_6d0 [1688];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_798;
  FUN_1410b34c0(local_718);
  uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_750,L"DESIGNER FIX ME: Name not found",L"GFxCARMenuPartCell",
                      L"NameNotFoundText");
  FText::operator=(local_718,uVar11);
  if (local_748 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_748 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_748)(local_748);
      LOCK();
      piVar1 = (int *)((longlong)local_748 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_748 + 8))(local_748,1);
      }
    }
  }
  lVar8 = *(longlong *)(param_1 + 0x38);
  bVar7 = false;
  bVar6 = false;
  if (lVar8 == 0) goto LAB_1410e844e;
  lVar12 = FUN_141329d80();
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8)
      != lVar12 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) goto LAB_1410e844e;
  lVar12 = *(longlong *)(lVar8 + 2000);
  uVar3 = *(undefined2 *)(param_1 + 0x30c);
  lVar13 = (longlong)*(int *)(lVar8 + 0x7d8) * 0xe8 + lVar12;
  if (lVar12 != lVar13) {
    local_778._1_1_ = (char)((ushort)uVar3 >> 8);
    do {
      if ((*(char *)(lVar12 + 0x18) == (char)uVar3) && (*(char *)(lVar12 + 0x19) == local_778._1_1_)
         ) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) goto LAB_1410e82a8;
      lVar12 = lVar12 + 0xe8;
    } while (lVar12 != lVar13);
  }
  lVar12 = lVar8 + 0xf60;
LAB_1410e82a8:
  lVar12 = *(longlong *)(lVar12 + 0xe0);
  local_778 = uVar3;
  if (lVar12 == 0) {
LAB_1410e8322:
    lVar12 = FWeakObjectPtr::Get(&local_6e8);
    bVar6 = bVar7;
    if (lVar12 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != local_6e0) && (local_770 = 0, local_6d8 != 0)) {
        lVar12 = FUN_141796df0(&local_6d8);
        FWeakObjectPtr::operator=(&local_6e8,lVar12);
        if ((lVar12 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          local_6e0 = DAT_1464b56f4;
        }
        lVar12 = FWeakObjectPtr::Get(&local_6e8);
        if (lVar12 != 0) goto LAB_1410e8399;
      }
    }
    else {
LAB_1410e8399:
      UTexture::GetPrivateStaticClass();
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2d8);
    if (*(char *)(param_1 + 0x30c) == '\0') {
      if ((iVar2 < 0) || (*(int *)(lVar12 + 0x60) <= iVar2)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((bVar6) &&
         (lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x58) + (longlong)iVar2 * 8), lVar12 != 0))
      {
        lVar12 = lVar12 + 0xc0;
        goto LAB_1410e8319;
      }
    }
    else {
      if ((iVar2 < 0) || (*(int *)(lVar12 + 0x50) <= iVar2)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((bVar6) &&
         (lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x48) + (longlong)iVar2 * 8), lVar12 != 0))
      {
        lVar12 = lVar12 + 0x40;
LAB_1410e8319:
        FUN_1410b5aa0(local_718,lVar12);
        goto LAB_1410e8322;
      }
    }
    bVar6 = true;
  }
  cVar9 = FSoftObjectPath::operator==(param_1 + 0x350,&local_6d8);
  if (cVar9 == '\0') {
    *(undefined4 *)(param_1 + 0x340) = local_6e8;
    *(undefined4 *)(param_1 + 0x344) = local_6e4;
    *(int *)(param_1 + 0x348) = local_6e0;
    local_768 = local_6d8;
    FString::FString(local_760,local_6d0);
    FSoftObjectPath::operator=(param_1 + 0x350,&local_768);
    plVar4 = *(longlong **)(param_1 + 0x338);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x278))(plVar4,0);
    }
    plVar4 = *(longlong **)(param_1 + 0x368);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x278))(plVar4,0);
    }
    plVar4 = *(longlong **)(param_1 + 0x370);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x278))(plVar4,0);
    }
    *(undefined1 *)(lVar8 + 0x1138) = 1;
  }
LAB_1410e844e:
  FUN_142ed3c20(param_1,bVar6,1);
  if (bVar6) {
    uVar11 = FUN_1404b03b0();
    FText::operator=(local_718,uVar11);
  }
  plVar4 = *(longlong **)(param_1 + 0x380);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2b0))(plVar4,local_718,1,0);
  }
  if (*(longlong **)(param_1 + 0x328) != (longlong *)0x0) {
    lVar8 = **(longlong **)(param_1 + 0x328);
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_738,L"Equipped",L"GFxCARMenuPartCell",L"EquippedText");
    (**(code **)(lVar8 + 0x2b0))(*(undefined8 *)(param_1 + 0x328),uVar11,1,0);
    if (local_730 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_730 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_730)(local_730);
        LOCK();
        piVar1 = (int *)((longlong)local_730 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_730 + 8))(local_730,1);
        }
      }
    }
    lVar8 = **(longlong **)(param_1 + 0x328);
    uVar10 = FUN_142ebda90(param_1);
    (**(code **)(lVar8 + 0x278))(*(undefined8 *)(param_1 + 0x328),uVar10);
  }
  if (*(longlong **)(param_1 + 0x330) != (longlong *)0x0) {
    lVar8 = **(longlong **)(param_1 + 0x330);
    uVar10 = FUN_142ebda90(param_1);
    (**(code **)(lVar8 + 0x278))(*(undefined8 *)(param_1 + 0x330),uVar10);
  }
  plVar4 = *(longlong **)(param_1 + 0x388);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x278))(plVar4,0);
  }
  FUN_142ecf920(param_1,0);
  FUN_1410b45d0(local_718);
  return;
}



// FUNCTION 1410e85c0 FUN_1410e85c0 body=1111 status=ok
// SIG undefined FUN_1410e85c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410e85c0(longlong param_1)

{
  byte bVar1;
  short sVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_798 [32];
  undefined8 local_778;
  undefined2 local_770;
  short local_768;
  short local_766;
  undefined4 local_760;
  undefined4 local_75c;
  longlong local_758;
  undefined1 local_750 [16];
  undefined1 local_740 [40];
  undefined1 local_718 [48];
  undefined4 local_6e8;
  undefined4 local_6e4;
  int local_6e0;
  longlong local_6d8;
  undefined1 local_6d0 [1688];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_798;
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (lVar3 == 0) {
    return;
  }
  lVar7 = FUN_141329d80();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  if (!bVar11) {
    return;
  }
  FUN_1410b34c0(local_718);
  lVar7 = *(longlong *)(lVar3 + 2000);
  sVar2 = *(short *)(param_1 + 0x30c);
  lVar10 = (longlong)*(int *)(lVar3 + 0x7d8) * 0xe8 + lVar7;
  if (lVar7 != lVar10) {
    local_770._1_1_ = (char)((ushort)sVar2 >> 8);
    do {
      if ((*(char *)(lVar7 + 0x18) == (char)sVar2) && (*(char *)(lVar7 + 0x19) == local_770._1_1_))
      {
        bVar11 = true;
      }
      else {
        bVar11 = false;
      }
      if (bVar11) goto LAB_1410e86ab;
      lVar7 = lVar7 + 0xe8;
    } while (lVar7 != lVar10);
  }
  lVar7 = lVar3 + 0xf60;
LAB_1410e86ab:
  uVar6 = 0;
  lVar10 = lVar3 + 0xc50;
  local_770 = sVar2;
  if (*(char *)(lVar7 + 0x18) == '\0') {
    bVar1 = *(byte *)(lVar7 + 0x19);
    local_768 = (ushort)bVar1 << 8;
    switch(bVar1) {
    case 1:
      bVar11 = *(longlong *)(lVar3 + 0xc98) == 0;
      break;
    case 2:
      bVar11 = *(longlong *)(lVar3 + 0xcc0) == 0;
      break;
    case 3:
      bVar11 = *(longlong *)(lVar3 + 0xce8) == 0;
      break;
    case 4:
      bVar11 = *(longlong *)(lVar3 + 0xd10) == 0;
      break;
    case 5:
      bVar11 = *(longlong *)(lVar3 + 0xd38) == 0;
      break;
    case 6:
      bVar11 = *(longlong *)(lVar3 + 0xd60) == 0;
      break;
    case 7:
      bVar11 = *(longlong *)(lVar3 + 0xd88) == 0;
      break;
    case 8:
      bVar11 = *(longlong *)(lVar3 + 0xdb0) == 0;
      break;
    default:
      goto switchD_1410e8730_default;
    }
    local_778 = 0;
    if (!bVar11) {
      local_766 = (ushort)bVar1 << 8;
      lVar8 = FUN_1410cc440(lVar10,local_766);
      if (lVar8 != 0) {
        local_770 = (ushort)*(byte *)(lVar7 + 0x19) << 8;
        lVar10 = FUN_1410cc440(lVar10,local_770);
        lVar10 = lVar10 + 0xc0;
        goto LAB_1410e8801;
      }
      goto LAB_1410e880a;
    }
  }
  else {
    local_778 = 0;
    if (*(longlong *)(lVar3 + 0xc70) != 0) {
      lVar8 = FUN_1410cac90(lVar10);
      if (lVar8 != 0) {
        lVar10 = FUN_1410cac90(lVar10);
        lVar10 = lVar10 + 0x40;
LAB_1410e8801:
        FUN_1410b5aa0(local_718,lVar10);
      }
LAB_1410e880a:
      lVar10 = FWeakObjectPtr::Get(&local_6e8);
      if (lVar10 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 == local_6e0) || (local_778 = 0, local_6d8 == 0)) goto LAB_1410e8894;
        lVar10 = FUN_141796df0(&local_6d8);
        FWeakObjectPtr::operator=(&local_6e8,lVar10);
        if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          local_6e0 = DAT_1464b56f4;
        }
        lVar10 = FWeakObjectPtr::Get(&local_6e8);
        if (lVar10 == 0) goto LAB_1410e8894;
      }
      UTexture::GetPrivateStaticClass();
      goto LAB_1410e8894;
    }
  }
switchD_1410e8730_default:
  uVar6 = 1;
LAB_1410e8894:
  plVar4 = *(longlong **)(param_1 + 0x388);
  if ((plVar4 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x3b8) == 0)) {
    (**(code **)(*plVar4 + 0x278))(plVar4,uVar6);
  }
  plVar4 = *(longlong **)(param_1 + 0x328);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2b0))(plVar4,lVar7,1,0);
  }
  cVar5 = FSoftObjectPath::operator==(param_1 + 0x350,&local_6d8);
  if (cVar5 == '\0') {
    *(undefined4 *)(param_1 + 0x340) = local_6e8;
    *(undefined4 *)(param_1 + 0x344) = local_6e4;
    *(int *)(param_1 + 0x348) = local_6e0;
    local_758 = local_6d8;
    FString::FString(local_750,local_6d0);
    FSoftObjectPath::operator=(param_1 + 0x350,&local_758);
    plVar4 = *(longlong **)(param_1 + 0x338);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x278))(plVar4,0);
    }
    plVar4 = *(longlong **)(param_1 + 0x368);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x278))(plVar4,0);
    }
    plVar4 = *(longlong **)(param_1 + 0x370);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x278))(plVar4,0);
    }
    *(undefined1 *)(lVar3 + 0x1138) = 1;
  }
  lVar7 = *(longlong *)(lVar7 + 0xe0);
  uVar6 = 1;
  if (lVar7 != 0) {
    local_760 = *(undefined4 *)(lVar7 + 0x30);
    local_75c = *(undefined4 *)(lVar7 + 0x34);
    uVar9 = TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_740,lVar3 + 0xde8);
    uVar6 = FUN_1410cfb70(&local_760,uVar9,param_1 + 0x30c);
  }
  (**(code **)(*(longlong *)(param_1 + 0x170) + 0x38))((longlong *)(param_1 + 0x170),uVar6);
  FUN_1410b45d0(local_718);
  return;
}



// FUNCTION 1410e8a40 FUN_1410e8a40 body=140 status=ok
// SIG undefined FUN_1410e8a40(void)

void FUN_1410e8a40(undefined8 param_1)

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
  local_58[0] = &LAB_1410c5300;
  FUN_14208c4f0(param_1,local_58);
  return;
}



// FUNCTION 1410e8ad0 FUN_1410e8ad0 body=17 status=ok
// SIG undefined FUN_1410e8ad0(void)

void FUN_1410e8ad0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puStack_18;
  undefined8 uStack_10;
  
  lVar1 = *(longlong *)(param_1 + 0x180);
  if (lVar1 == 0) {
    return;
  }
  cVar2 = FWeakObjectPtr::IsValid(lVar1 + 0x1b4);
  if (cVar2 == '\0') {
LAB_1410e8b3c:
    uVar3 = 0;
  }
  else {
    lVar4 = FWeakObjectPtr::Get(lVar1 + 0x1b4);
    lVar4 = FWeakObjectPtr::Get(lVar4 + 0x1ac);
    if (lVar4 == 0) goto LAB_1410e8b3c;
    uVar3 = SVirtualWindow::SupportsKeyboardFocus(lVar4);
  }
  *(undefined1 *)(lVar1 + 0x1b0) = uVar3;
  if (*(longlong *)(lVar1 + 0x170) == 0) {
    return;
  }
  if (*(longlong *)(lVar1 + 0x180) == 0) {
    return;
  }
  uStack_10 = 7;
  puStack_18 = (undefined8 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&puStack_18,0);
  FGenericPlatformString::Memcpy(puStack_18,L"status",0xe);
  if (*(char *)(lVar1 + 0x1b0) != '\0') {
    uVar5 = uStack_10._4_4_;
    if (*(char *)(lVar1 + 0x1b1) == '\0') {
      if (puStack_18 == (undefined8 *)&DAT_1446a1e10) goto LAB_1410e8c59;
      uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
      iVar6 = 0;
      if (uVar5 != 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&puStack_18,5);
        uVar5 = uStack_10._4_4_;
        iVar6 = (int)uStack_10;
      }
      uStack_10 = CONCAT44(uStack_10._4_4_,iVar6 + 5);
      if ((int)uVar5 < iVar6 + 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&puStack_18,iVar6);
      }
      *puStack_18 = 0x70006c00650068;
    }
    else {
      if (puStack_18 == (undefined8 *)&DAT_1446a1e00) goto LAB_1410e8c59;
      uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
      iVar6 = 0;
      if (uVar5 != 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&puStack_18,5);
        uVar5 = uStack_10._4_4_;
        iVar6 = (int)uStack_10;
      }
      uStack_10 = CONCAT44(uStack_10._4_4_,iVar6 + 5);
      if ((int)uVar5 < iVar6 + 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&puStack_18,iVar6);
      }
      *puStack_18 = 0x680074006f0062;
    }
    *(undefined2 *)(puStack_18 + 1) = 0;
  }
LAB_1410e8c59:
  FUN_142088910(*(undefined8 *)(lVar1 + 0x170),&puStack_18);
  if (puStack_18 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410e8af0 FUN_1410e8af0 body=407 status=ok
// SIG undefined FUN_1410e8af0(void)

void FUN_1410e8af0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined8 *local_18;
  undefined8 local_10;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x1b4);
  if (cVar1 == '\0') {
LAB_1410e8b3c:
    uVar2 = 0;
  }
  else {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x1b4);
    lVar3 = FWeakObjectPtr::Get(lVar3 + 0x1ac);
    if (lVar3 == 0) goto LAB_1410e8b3c;
    uVar2 = SVirtualWindow::SupportsKeyboardFocus(lVar3);
  }
  *(undefined1 *)(param_1 + 0x1b0) = uVar2;
  if (*(longlong *)(param_1 + 0x170) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x180) == 0) {
    return;
  }
  local_10 = 7;
  local_18 = (undefined8 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"status",0xe);
  if (*(char *)(param_1 + 0x1b0) != '\0') {
    uVar4 = local_10._4_4_;
    if (*(char *)(param_1 + 0x1b1) == '\0') {
      if (local_18 == (undefined8 *)&DAT_1446a1e10) goto LAB_1410e8c59;
      local_10 = (ulonglong)local_10._4_4_ << 0x20;
      iVar5 = 0;
      if (uVar4 != 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,5);
        uVar4 = local_10._4_4_;
        iVar5 = (int)local_10;
      }
      local_10 = CONCAT44(local_10._4_4_,iVar5 + 5);
      if ((int)uVar4 < iVar5 + 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,iVar5);
      }
      *local_18 = 0x70006c00650068;
    }
    else {
      if (local_18 == (undefined8 *)&DAT_1446a1e00) goto LAB_1410e8c59;
      local_10 = (ulonglong)local_10._4_4_ << 0x20;
      iVar5 = 0;
      if (uVar4 != 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,5);
        uVar4 = local_10._4_4_;
        iVar5 = (int)local_10;
      }
      local_10 = CONCAT44(local_10._4_4_,iVar5 + 5);
      if ((int)uVar4 < iVar5 + 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,iVar5);
      }
      *local_18 = 0x680074006f0062;
    }
    *(undefined2 *)(local_18 + 1) = 0;
  }
LAB_1410e8c59:
  FUN_142088910(*(undefined8 *)(param_1 + 0x170),&local_18);
  if (local_18 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410e8c90 FUN_1410e8c90 body=152 status=ok
// SIG undefined FUN_1410e8c90(void)

void FUN_1410e8c90(undefined8 param_1,undefined1 param_2)

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
  local_58[0] = &LAB_1410c58c0;
  FUN_14208c4f0(param_1,local_58);
  return;
}



// FUNCTION 1410e8d30 FUN_1410e8d30 body=1280 status=ok
// SIG undefined FUN_1410e8d30(void)

void FUN_1410e8d30(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_e8 [13];
  longlong *plStack_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (param_2 == 0) {
    return;
  }
  plVar4 = *(longlong **)(param_1 + 0x1b8);
  lVar8 = 0;
  lVar9 = 0;
  if (plVar4 == (longlong *)0x0) {
    cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x1ac);
    if (cVar6 == '\0') goto LAB_1410e9005;
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x1ac);
    FUN_142dcf3a0(uVar7,local_e8 + 0xc);
    if (local_e8[0xc] != 0) {
      local_68 = local_e8[0xc];
      plStack_60 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
        UNLOCK();
      }
      FUN_140d84620(*(longlong *)(param_2 + 0x478) + 0x1f8,&local_48,&local_68);
      plVar4 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_60 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_60)(plStack_60);
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
      if (local_48 == (longlong *)0x0) {
        local_58 = local_e8[0xc];
        plStack_50 = plStack_80;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
          UNLOCK();
        }
        FUN_140d94190(*(longlong *)(param_2 + 0x478) + 0x1f8,&local_58);
        plVar4 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_50 + 1;
          lVar5 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          lVar8 = lVar9;
          if ((int)lVar5 == 1) {
            (**(code **)*plStack_50)(plStack_50);
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
        lVar8 = (**(code **)(*local_48 + 0x10))();
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_40 + 1;
        lVar9 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
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
    if (plStack_80 == (longlong *)0x0) goto LAB_1410e9005;
    LOCK();
    plVar4 = plStack_80 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 != 1) goto LAB_1410e9005;
    (**(code **)*plStack_80)(plStack_80);
    local_70 = plStack_80;
  }
  else {
    lVar5 = *(longlong *)(param_2 + 0x478);
    uVar7 = (**(code **)(*plVar4 + 8))(plVar4,local_38);
    FUN_140d84620(lVar5 + 0x1f8,&local_78,uVar7);
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
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    if (local_78 == (longlong *)0x0) {
      lVar5 = *(longlong *)(param_2 + 0x478);
      uVar7 = (**(code **)(**(longlong **)(param_1 + 0x1b8) + 8))
                        (*(longlong **)(param_1 + 0x1b8),local_28);
      FUN_140d94190(lVar5 + 0x1f8,uVar7);
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_20 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        lVar8 = lVar9;
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
    }
    else {
      lVar8 = (**(code **)(*local_78 + 0x10))();
    }
    if (local_70 == (longlong *)0x0) goto LAB_1410e9005;
    LOCK();
    plVar4 = local_70 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 != 1) goto LAB_1410e9005;
    (**(code **)*local_70)(local_70);
  }
  LOCK();
  piVar1 = (int *)((longlong)local_70 + 0xc);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 == 1) {
    (**(code **)(*local_70 + 8))(local_70,1);
  }
LAB_1410e9005:
  if ((*(longlong *)(param_1 + 0x170) != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
    if (lVar8 == 0) {
      local_e8[10] = 0;
      local_e8[0xb] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8 + 10,0);
      FGenericPlatformString::Memcpy(local_e8[10],L"default",0x10);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x170),local_e8 + 10);
      lVar8 = local_e8[10];
    }
    else {
      cVar6 = *(char *)(param_1 + 0x1a8);
      if (cVar6 == '\0') {
        local_e8[8] = 0;
        local_e8[9] = 8;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8 + 8,0);
        FGenericPlatformString::Memcpy(local_e8[8],L"default",0x10);
        FUN_142088cf0(*(undefined8 *)(param_1 + 0x170),local_e8 + 8);
        lVar8 = local_e8[8];
      }
      else if (cVar6 == '\x01') {
        local_e8[4] = 0;
        local_e8[5] = 8;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8 + 4,0);
        FGenericPlatformString::Memcpy(local_e8[4],L"player0",0x10);
        FUN_142088cf0(*(undefined8 *)(param_1 + 0x170),local_e8 + 4);
        if (local_e8[4] != 0) {
          FMemory::Free();
        }
        local_e8[6] = 0;
        local_e8[7] = 0x22;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8 + 6,0);
        FGenericPlatformString::Memcpy(local_e8[6],L"VaultHunterProfileImage_00_nopack",0x44);
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x2a0))
                  (*(longlong **)(param_1 + 0x38),local_e8 + 6,lVar8);
        lVar8 = local_e8[6];
      }
      else {
        if (cVar6 != '\x02') {
          return;
        }
        local_e8[0] = 0;
        local_e8[1] = 8;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
        FGenericPlatformString::Memcpy(local_e8[0],L"player1",0x10);
        FUN_142088cf0(*(undefined8 *)(param_1 + 0x170),local_e8);
        if (local_e8[0] != 0) {
          FMemory::Free();
        }
        local_e8[2] = 0;
        local_e8[3] = 0x22;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8 + 2,0);
        FGenericPlatformString::Memcpy(local_e8[2],L"VaultHunterProfileImage_01_nopack",0x44);
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x2a0))
                  (*(longlong **)(param_1 + 0x38),local_e8 + 2,lVar8);
        lVar8 = local_e8[2];
      }
    }
    if (lVar8 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1410e9230 FUN_1410e9230 body=637 status=ok
// SIG undefined FUN_1410e9230(void)

void FUN_1410e9230(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  void **ppvVar8;
  int iVar9;
  void *_Src_00;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  local_78 = (void *)0x0;
  local_70 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  _Src_00 = local_78;
  FGenericPlatformString::Memcpy(local_78,L"empty",0xc);
  FText::FText(local_48);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = *(longlong *)(DAT_146b33f38 + 0x98);
  if ((((lVar3 == 0) || (param_2 < 0)) || (*(int *)(lVar3 + 0x48) <= param_2)) ||
     (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x40) + (longlong)param_2 * 8), lVar3 == 0)) {
    iVar9 = (int)local_70;
    goto LAB_1410e9344;
  }
  if (&local_78 == (void **)(lVar3 + 0x48)) {
LAB_1410e9323:
    iVar9 = (int)local_70;
  }
  else {
    iVar2 = *(int *)(lVar3 + 0x50);
    _Src = *(void **)(lVar3 + 0x48);
    local_70 = CONCAT44(local_70._4_4_,iVar2);
    if ((iVar2 != 0) || (iVar9 = 0, local_70._4_4_ != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,iVar2);
      _Src_00 = local_78;
      _guard_xfg_dispatch_icall_nop(local_78,_Src,(longlong)iVar2 * 2);
      goto LAB_1410e9323;
    }
  }
  if (param_2 != 0) {
    FText::operator=(local_48,lVar3 + 0x30);
  }
LAB_1410e9344:
  cVar7 = FText::IsEmpty(local_48);
  plVar4 = *(longlong **)(param_1 + 0x180);
  *(bool *)(param_1 + 0x1b1) = cVar7 == '\0';
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2b0))(plVar4,local_48,1,0);
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    if (iVar9 < 2) {
      local_58 = (void *)0x0;
      local_50 = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      FGenericPlatformString::Memcpy(local_58,L"empty",0xc);
      ppvVar8 = &local_58;
      bVar6 = true;
      bVar5 = false;
    }
    else {
      local_68 = (void *)0x0;
      local_60 = iVar9;
      if (iVar9 == 0) {
        local_5c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar9,0);
        _guard_xfg_dispatch_icall_nop(local_68,_Src_00,(longlong)iVar9 * 2);
      }
      ppvVar8 = &local_68;
      bVar6 = false;
      bVar5 = true;
    }
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x188),ppvVar8);
    if ((bVar5) && (local_68 != (void *)0x0)) {
      FMemory::Free();
    }
    if ((bVar6) && (local_58 != (void *)0x0)) {
      FMemory::Free();
    }
  }
  FUN_1410e8af0(param_1);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    _Src_00 = local_78;
    if ((int)lVar3 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      _Src_00 = local_78;
      if (iVar9 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
        _Src_00 = local_78;
      }
    }
  }
  if (_Src_00 != (void *)0x0) {
    FMemory::Free(_Src_00);
  }
  return;
}



// FUNCTION 1410e94b0 FUN_1410e94b0 body=797 status=ok
// SIG undefined FUN_1410e94b0(void)

void FUN_1410e94b0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  longlong *local_a8;
  int local_a0;
  longlong local_98;
  longlong local_90 [2];
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_70;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_48;
  longlong local_38;
  
  bVar9 = *(longlong *)(param_1 + 0x350) != 0;
  bVar10 = param_2 == 0;
  if (bVar10) {
    puVar6 = (undefined4 *)FUN_1411c87b0(&local_80);
  }
  else {
    puVar6 = (undefined4 *)FUN_1411e23f0(param_2,&local_58,param_1 + 0x340);
  }
  local_b8 = *puVar6;
  *puVar6 = 0xffffffff;
  local_b4 = puVar6[1];
  puVar6[1] = 0xffffffff;
  local_b0 = *(undefined8 *)(puVar6 + 2);
  local_a8 = *(longlong **)(puVar6 + 4);
  *(undefined8 *)(puVar6 + 4) = 0;
  *(undefined8 *)(puVar6 + 2) = 0;
  local_a0 = puVar6[6];
  local_98 = *(longlong *)(puVar6 + 8);
  *(undefined8 *)(puVar6 + 8) = 0;
  if (bVar10) {
    if (local_60 != 0) {
      LOCK();
      piVar1 = (int *)(local_60 + 0x48);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_70 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    FUN_1416f8340(local_7c);
    FUN_1416f8340(local_80);
  }
  if (!bVar10) {
    if (local_38 != 0) {
      LOCK();
      piVar1 = (int *)(local_38 + 0x48);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_48 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    FUN_1416f8340(local_54);
    FUN_1416f8340(local_58);
  }
  FUN_1411e6e10(&local_b8,local_res10);
  if (*(longlong *)(param_1 + 0x338) != 0) {
    if (bVar9) {
      cVar5 = FUN_1411e7930(&local_b8);
      if (cVar5 != '\0') goto LAB_1410e9648;
      uVar8 = 1;
    }
    else {
LAB_1410e9648:
      uVar8 = 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x338) + 0x278))(*(longlong **)(param_1 + 0x338),uVar8);
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar7 = FUN_1416f8720(local_res10[0]);
    if ((lVar7 != 0) && (local_a0 != -1)) {
      FString::PrintfImpl(local_90,L"ExtCARTex_%02d_nopack");
      local_res18[0] = 0xffffffff;
      uVar8 = FUN_1416f8720(local_res10[0]);
      FUN_14170c210(local_res18,uVar8);
      FUN_14208e7b0(*(undefined8 *)(param_1 + 0x38),local_90,local_res18);
      if (local_90[0] != 0) {
        FMemory::Free();
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x368);
  if (plVar4 != (longlong *)0x0) {
    if (bVar9) {
      lVar7 = FUN_1416f8720(local_res10[0]);
      if ((lVar7 != 0) && (local_a0 != -1)) {
        (**(code **)(*plVar4 + 0x278))(plVar4,1);
        FUN_142088ee0(plVar4,local_a0 + 1);
        goto LAB_1410e970c;
      }
    }
    (**(code **)(*plVar4 + 0x278))(plVar4,0);
  }
LAB_1410e970c:
  plVar4 = *(longlong **)(param_1 + 0x370);
  if (plVar4 != (longlong *)0x0) {
    if (bVar9) {
      lVar7 = FUN_1416f8720(local_res10[0]);
      if ((lVar7 != 0) && (local_a0 != -1)) {
        (**(code **)(*plVar4 + 0x278))(plVar4,1);
        FUN_142088ee0(plVar4,local_a0 + 1);
        goto LAB_1410e975b;
      }
    }
    (**(code **)(*plVar4 + 0x278))(plVar4,0);
  }
LAB_1410e975b:
  FUN_1416f8340(local_res10[0]);
  if (local_98 != 0) {
    LOCK();
    piVar1 = (int *)(local_98 + 0x48);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FGraphEvent::Recycle();
    }
  }
  plVar4 = local_a8;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_a8 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_a8)(local_a8);
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
  FUN_1416f8340(local_b4);
  FUN_1416f8340(local_b8);
  return;
}


