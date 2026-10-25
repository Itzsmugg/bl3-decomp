// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1404f53b0 StartupModule body=205 status=ok
// SIG undefined StartupModule(void)

void FOnlineSubsystemSteamModule::StartupModule(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  FUN_140518120();
  if (*(longlong *)(param_1 + 0x10) != 0) {
    puVar4 = (undefined8 *)operator_new(8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_143f9d130;
    }
    *(undefined8 **)(param_1 + 8) = puVar4;
    puVar4 = (undefined8 *)FName::FName(local_res8,"OnlineSubsystem",1);
    uVar1 = *puVar4;
    uVar3 = FUN_14168dc80();
    plVar5 = (longlong *)FModuleManager::GetModule(uVar3,uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    lVar2 = *plVar5;
    puVar4 = (undefined8 *)FName::FName(local_res10,L"STEAM",1);
    (**(code **)(lVar2 + 0x78))(plVar5,*puVar4,uVar1);
    return;
  }
  if (*(HMODULE *)(param_1 + 0x18) != (HMODULE)0x0) {
    FWindowsPlatformProcess::FreeDllHandle(*(HMODULE *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1404f5480 ShutdownModule body=178 status=ok
// SIG undefined ShutdownModule(void)

void FOnlineSubsystemSteamModule::ShutdownModule(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  puVar3 = (undefined8 *)FName::FName(local_res8,"OnlineSubsystem",1);
  uVar1 = *puVar3;
  uVar4 = FUN_14168dc80();
  plVar5 = (longlong *)FModuleManager::GetModule(uVar4,uVar1);
  lVar2 = *plVar5;
  puVar3 = (undefined8 *)FName::FName(local_res10,L"STEAM",1);
  (**(code **)(lVar2 + 0x80))(plVar5,*puVar3);
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(HMODULE *)(param_1 + 0x10) != (HMODULE)0x0) {
    FWindowsPlatformProcess::FreeDllHandle(*(HMODULE *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(HMODULE *)(param_1 + 0x18) != (HMODULE)0x0) {
    FWindowsPlatformProcess::FreeDllHandle(*(HMODULE *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1404f5540 FUN_1404f5540 body=43 status=ok
// SIG undefined FUN_1404f5540(void)

undefined8 * FUN_1404f5540(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1404f5570 AddUniqueImpl<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>_const_&> body=156 status=ok
// SIG undefined AddUniqueImpl<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>_const_&>(void)

ulonglong TArray<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,TSizedDefaultAllocator<32>_>
          ::AddUniqueImpl<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>_const_&>
                    (longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar7 = (longlong)(int)uVar1;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar2 + lVar7 * 2) {
    plVar5 = plVar2;
    do {
      if (*plVar5 == *param_2) {
        uVar6 = (longlong)plVar5 - (longlong)plVar2 >> 4;
        if ((int)uVar6 != -1) {
          return uVar6;
        }
        break;
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar2 + lVar7 * 2);
  }
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar1 + 1)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,uVar1);
  }
  lVar3 = *param_1;
  *(longlong *)(lVar3 + lVar7 * 0x10) = *param_2;
  lVar4 = param_2[1];
  *(longlong *)(lVar3 + 8 + lVar7 * 0x10) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  return (ulonglong)uVar1;
}



// FUNCTION 1404f5610 AddUniqueImpl<FUniqueNetIdSteam_const_&> body=112 status=ok
// SIG undefined AddUniqueImpl<FUniqueNetIdSteam_const_&>(void)

ulonglong TArray<FUniqueNetIdSteam,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<FUniqueNetIdSteam_const_&>(longlong *param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  
  uVar2 = Find();
  if ((int)uVar2 == -1) {
    uVar1 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar1 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,uVar1);
    }
    puVar3 = (undefined8 *)((longlong)(int)uVar1 * 0x20 + *param_1);
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_143f9a6c8;
    uVar2 = (ulonglong)uVar1;
    puVar3[3] = *(undefined8 *)(param_2 + 0x18);
  }
  return uVar2;
}



// FUNCTION 1404f5680 AddUniqueImpl<FString> body=114 status=ok
// SIG undefined AddUniqueImpl<FString>(void)

ulonglong TArray<FString,FDefaultAllocator>::AddUniqueImpl<FString>
                    (longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  
  uVar2 = Find();
  if ((int)uVar2 == -1) {
    uVar1 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar1 + 1)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,uVar1);
    }
    puVar3 = (undefined8 *)((longlong)(int)uVar1 * 0x10 + *param_1);
    *puVar3 = 0;
    *puVar3 = *param_2;
    *param_2 = 0;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)puVar3 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    uVar2 = (ulonglong)uVar1;
  }
  return uVar2;
}



// FUNCTION 1404f5700 FUN_1404f5700 body=207 status=ok
// SIG undefined FUN_1404f5700(void)

undefined8 * FUN_1404f5700(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  plVar4 = (longlong *)param_2[1];
  uVar11 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar10 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_143f9e980;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
    *puVar10 = &PTR_GetPoolName_143f9e9c8;
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



// FUNCTION 1404f57d0 Emplace<TTuple<FName,FVariantData>_const_&> body=435 status=ok
// SIG undefined Emplace<TTuple<FName,FVariantData>_const_&>(void)

int * TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
      ::Emplace<TTuple<FName,FVariantData>_const_&>
                (longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  void *_Dst;
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_28 [2];
  longlong *local_20;
  
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  *param_2 = local_28[0];
  *local_20 = *param_3;
  FVariantData::FVariantData(local_20 + 1,param_3 + 1);
  *(undefined4 *)(local_20 + 4) = 0xffffffff;
  bVar7 = false;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    lVar1 = *local_20;
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar4 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x28) == lVar1) goto LAB_1404f589c;
          iVar4 = *(int *)(*param_1 + 0x20 + (longlong)iVar4 * 0x28);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_1404f589c:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      _Dst = (void *)(*param_1 + (longlong)iVar4 * 0x28);
      FVariantData::Empty((longlong)_Dst + 8);
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_20,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar4;
      goto LAB_1404f5958;
    }
  }
  cVar2 = ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)((ulonglong)*local_20 >> 0x20) + (int)*local_20 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_20 + 0x24) = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(local_20 + 4) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_1404f5958:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 1404f5990 FUN_1404f5990 body=542 status=ok
// SIG undefined FUN_1404f5990(void)

int * FUN_1404f5990(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *_Src;
  undefined8 *_Dst;
  uint uVar8;
  bool bVar9;
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  _Src = local_30;
  *param_2 = local_38[0];
  lVar4 = *param_3;
  bVar9 = false;
  local_30[1] = 0;
  local_30[2] = 0;
  *local_30 = &PTR_FUN_143f9a6c8;
  local_30[3] = *(undefined8 *)(lVar4 + 0x18);
  *(undefined4 *)(local_30 + 4) = 0;
  *(undefined4 *)(local_30 + 5) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar7 = -1;
    iVar6 = iVar7;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar3 +
                      ((longlong)((int)((ulonglong)local_30[3] >> 0x20) * 0x17 + (int)local_30[3]) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar5 != -1) {
        lVar4 = *param_1;
        do {
          cVar2 = (**(code **)*_Src)(_Src,lVar4 + (longlong)iVar5 * 0x30);
          iVar6 = iVar5;
          if (cVar2 != '\0') break;
          lVar4 = *param_1;
          iVar5 = *(int *)(lVar4 + 0x28 + (longlong)iVar5 * 0x30);
          iVar6 = iVar7;
        } while (iVar5 != -1);
      }
    }
    bVar9 = iVar6 != -1;
    if (bVar9) {
      _Dst = (undefined8 *)((longlong)iVar6 * 0x30 + *param_1);
      *_Dst = &PTR_FUN_143f73cd8;
      plVar3 = (longlong *)_Dst[2];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        _Src = local_30;
        if ((iVar7 == 1) && (plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
          _Src = local_30;
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x28);
      TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar6;
      goto LAB_1404f5b77;
    }
  }
  cVar2 = TSet<TTuple<FUniqueNetIdSteam,int>,TDefaultMapHashableKeyFuncs<FUniqueNetIdSteam,int,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar2 == '\0') {
    uVar8 = (int)((ulonglong)_Src[3] >> 0x20) * 0x17 + (int)_Src[3] & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x2c) = uVar8;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 5) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_1404f5b77:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 1404f5bb0 Emplace<TPairInitializer<FString_&&,FString_const_&>_> body=404 status=ok
// SIG undefined Emplace<TPairInitializer<FString_&&,FString_const_&>_>(void)

int * TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FString_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  bool bVar8;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar2 = (undefined8 *)*param_3;
  uVar3 = param_3[1];
  *param_2 = local_38[0];
  *local_30 = 0;
  *local_30 = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(local_30 + 1) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)local_30 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  FString::FString(local_30 + 2,uVar3);
  *(undefined4 *)(local_30 + 4) = 0xffffffff;
  bVar8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_30);
    bVar8 = local_res8[0] != -1;
    if (bVar8) {
      plVar6 = (longlong *)(*param_1 + (longlong)local_res8[0] * 0x28);
      if (*(longlong *)(*param_1 + 0x10 + (longlong)local_res8[0] * 0x28) != 0) {
        FMemory::Free();
      }
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(plVar6,local_30,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1404f5d21;
    }
  }
  cVar4 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar4 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*local_30;
    }
    uVar5 = FUN_140438070(puVar7);
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)((longlong)local_30 + 0x24) = uVar5;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 4) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) = iVar1
    ;
  }
LAB_1404f5d21:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 1404f5d50 Emplace<TPairInitializer<FName_const_&,FVariantData_&&>_> body=437 status=ok
// SIG undefined Emplace<TPairInitializer<FName_const_&,FVariantData_&&>_>(void)

int * TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,FVariantData_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  void *_Dst;
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  int local_28 [2];
  longlong *local_20;
  
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_28);
  uVar1 = param_3[1];
  *param_2 = local_28[0];
  *local_20 = *(longlong *)*param_3;
  FVariantData::FVariantData(local_20 + 1,uVar1);
  *(undefined4 *)(local_20 + 4) = 0xffffffff;
  bVar8 = false;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 != 1) {
    lVar2 = *local_20;
    if (iVar7 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar4 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar5 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar5 * 0x28) == lVar2) goto LAB_1404f5e1e;
          iVar5 = *(int *)(*param_1 + 0x20 + (longlong)iVar5 * 0x28);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_1404f5e1e:
    bVar8 = iVar5 != -1;
    if (bVar8) {
      _Dst = (void *)(*param_1 + (longlong)iVar5 * 0x28);
      FVariantData::Empty((longlong)_Dst + 8);
      ::_guard_xfg_dispatch_icall_nop(_Dst,local_20,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar5;
      goto LAB_1404f5eda;
    }
  }
  cVar3 = ConditionalRehash(param_1,iVar7,0);
  if (cVar3 == '\0') {
    uVar6 = (int)((ulonglong)*local_20 >> 0x20) + (int)*local_20 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_20 + 0x24) = uVar6;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(local_20 + 4) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_1404f5eda:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 1404f5f10 FUN_1404f5f10 body=542 status=ok
// SIG undefined FUN_1404f5f10(void)

int * FUN_1404f5f10(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *_Src;
  undefined8 *_Dst;
  uint uVar9;
  bool bVar10;
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  _Src = local_30;
  puVar2 = (undefined4 *)param_3[1];
  *param_2 = local_38[0];
  bVar10 = false;
  lVar5 = *param_3;
  local_30[1] = 0;
  local_30[2] = 0;
  *local_30 = &PTR_FUN_143f9a6c8;
  local_30[3] = *(undefined8 *)(lVar5 + 0x18);
  *(undefined4 *)(local_30 + 4) = *puVar2;
  *(undefined4 *)(local_30 + 5) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar8 = -1;
    iVar7 = iVar8;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar4 +
                      ((longlong)((int)((ulonglong)local_30[3] >> 0x20) * 0x17 + (int)local_30[3]) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar6 != -1) {
        lVar5 = *param_1;
        do {
          cVar3 = (**(code **)*_Src)(_Src,lVar5 + (longlong)iVar6 * 0x30);
          iVar7 = iVar6;
          if (cVar3 != '\0') break;
          lVar5 = *param_1;
          iVar6 = *(int *)(lVar5 + 0x28 + (longlong)iVar6 * 0x30);
          iVar7 = iVar8;
        } while (iVar6 != -1);
      }
    }
    bVar10 = iVar7 != -1;
    if (bVar10) {
      _Dst = (undefined8 *)((longlong)iVar7 * 0x30 + *param_1);
      *_Dst = &PTR_FUN_143f73cd8;
      plVar4 = (longlong *)_Dst[2];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        _Src = local_30;
        if ((iVar8 == 1) && (plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
          _Src = local_30;
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x28);
      TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar7;
      goto LAB_1404f60f7;
    }
  }
  cVar3 = TSet<TTuple<FUniqueNetIdSteam,int>,TDefaultMapHashableKeyFuncs<FUniqueNetIdSteam,int,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar3 == '\0') {
    uVar9 = (int)((ulonglong)_Src[3] >> 0x20) * 0x17 + (int)_Src[3] & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x2c) = uVar9;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 5) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
LAB_1404f60f7:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 1404f6130 FUN_1404f6130 body=542 status=ok
// SIG undefined FUN_1404f6130(void)

int * FUN_1404f6130(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *_Src;
  undefined8 *_Dst;
  uint uVar9;
  bool bVar10;
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSetting>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  _Src = local_30;
  puVar2 = (undefined4 *)param_3[1];
  *param_2 = local_38[0];
  bVar10 = false;
  lVar5 = *param_3;
  local_30[1] = 0;
  local_30[2] = 0;
  *local_30 = &PTR_FUN_143f9a6c8;
  local_30[3] = *(undefined8 *)(lVar5 + 0x18);
  *(undefined4 *)(local_30 + 4) = *puVar2;
  *(undefined4 *)(local_30 + 5) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar8 = -1;
    iVar7 = iVar8;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar4 +
                      ((longlong)((int)((ulonglong)local_30[3] >> 0x20) * 0x17 + (int)local_30[3]) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar6 != -1) {
        lVar5 = *param_1;
        do {
          cVar3 = (**(code **)*_Src)(_Src,lVar5 + (longlong)iVar6 * 0x30);
          iVar7 = iVar6;
          if (cVar3 != '\0') break;
          lVar5 = *param_1;
          iVar6 = *(int *)(lVar5 + 0x28 + (longlong)iVar6 * 0x30);
          iVar7 = iVar8;
        } while (iVar6 != -1);
      }
    }
    bVar10 = iVar7 != -1;
    if (bVar10) {
      _Dst = (undefined8 *)((longlong)iVar7 * 0x30 + *param_1);
      *_Dst = &PTR_FUN_143f73cd8;
      plVar4 = (longlong *)_Dst[2];
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        _Src = local_30;
        if ((iVar8 == 1) && (plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
          _Src = local_30;
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x28);
      TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar7;
      goto LAB_1404f6317;
    }
  }
  cVar3 = TSet<TTuple<FUniqueNetIdSteam,int>,TDefaultMapHashableKeyFuncs<FUniqueNetIdSteam,int,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar3 == '\0') {
    uVar9 = (int)((ulonglong)_Src[3] >> 0x20) * 0x17 + (int)_Src[3] & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x2c) = uVar9;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 5) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
LAB_1404f6317:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 1404f6350 FUN_1404f6350 body=639 status=ok
// SIG undefined FUN_1404f6350(void)

int * FUN_1404f6350(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 *_Dst;
  uint uVar14;
  undefined8 *_Src;
  bool bVar15;
  
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar12 = *(int *)((longlong)iVar11 * 0x38 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar12;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar12 * 0x38 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  bVar15 = false;
  puVar2 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar2 = *puVar2 | 1 << ((byte)iVar11 & 0x1f);
  _Src = (undefined8 *)((longlong)iVar11 * 0x38 + *param_1);
  lVar10 = *param_3;
  puVar3 = (undefined4 *)param_3[1];
  _Src[1] = 0;
  _Src[2] = 0;
  *_Src = &PTR_FUN_143f9a6c8;
  _Src[3] = *(undefined8 *)(lVar10 + 0x18);
  uVar4 = puVar3[1];
  uVar5 = puVar3[2];
  uVar6 = puVar3[3];
  *(undefined4 *)(_Src + 4) = *puVar3;
  *(undefined4 *)((longlong)_Src + 0x24) = uVar4;
  *(undefined4 *)(_Src + 5) = uVar5;
  *(undefined4 *)((longlong)_Src + 0x2c) = uVar6;
  *(undefined4 *)(_Src + 6) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar11 = iVar13;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar12 = *(int *)((longlong)plVar9 +
                       ((longlong)((int)((ulonglong)_Src[3] >> 0x20) * 0x17 + (int)_Src[3]) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar12 != -1) {
        lVar10 = *param_1;
        do {
          cVar7 = (**(code **)*_Src)(_Src,(longlong)iVar12 * 0x38 + lVar10);
          iVar11 = iVar12;
          if (cVar7 != '\0') break;
          lVar10 = *param_1;
          iVar12 = *(int *)((longlong)iVar12 * 0x38 + 0x30 + lVar10);
          iVar11 = iVar13;
        } while (iVar12 != -1);
      }
    }
    bVar15 = iVar11 != -1;
    if (bVar15) {
      _Dst = (undefined8 *)((longlong)iVar11 * 0x38 + *param_1);
      *_Dst = &PTR_FUN_143f73cd8;
      plVar9 = (longlong *)_Dst[2];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar13 == 1) && (plVar9 != (longlong *)0x0)) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x30);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar11;
      goto LAB_1404f65a2;
    }
  }
  cVar7 = TSet<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>,TDefaultMapHashableKeyFuncs<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar7 == '\0') {
    uVar14 = (int)((ulonglong)_Src[3] >> 0x20) * 0x17 + (int)_Src[3] & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x34) = uVar14;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 6) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         *param_2;
  }
LAB_1404f65a2:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 1404f65d0 FUN_1404f65d0 body=448 status=ok
// SIG undefined FUN_1404f65d0(void)

void FUN_1404f65d0(undefined8 *param_1,int param_2)

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
joined_r0x0001404f65fa:
    do {
      if (iVar9 < param_2) {
        iVar9 = iVar8 * 2;
        iVar12 = iVar9 + 1;
        if (iVar9 + 2 < param_2) {
          if ((longlong)param_1[(longlong)iVar12 * 3 + 2] <
              (longlong)param_1[(longlong)iVar9 * 3 + 8]) {
            iVar12 = iVar9;
          }
          iVar12 = iVar12 + 1;
        }
        puVar11 = param_1 + (longlong)iVar12 * 3;
        puVar1 = param_1 + (longlong)iVar8 * 3;
        if ((longlong)puVar11[2] < (longlong)param_1[(longlong)iVar8 * 3 + 2]) {
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
          goto joined_r0x0001404f65fa;
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
            if ((longlong)param_1[(longlong)iVar9 * 3 + 2] <
                (longlong)param_1[(longlong)iVar4 * 3 + 8]) {
              iVar9 = iVar4;
            }
            iVar9 = iVar9 + 1;
          }
          puVar1 = param_1 + (longlong)iVar9 * 3;
          puVar2 = param_1 + (longlong)iVar8 * 3;
          if ((longlong)param_1[(longlong)iVar8 * 3 + 2] <= (longlong)puVar1[2]) break;
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



// FUNCTION 1404f6790 FUN_1404f6790 body=834 status=ok
// SIG undefined FUN_1404f6790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404f6790(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

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
    fVar17 = _guard_xfg_dispatch_icall_nop(fVar17);
    local_328 = (undefined4)(longlong)(fVar17 + fVar17);
    _guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar16 = &local_338;
    do {
      puVar15 = (undefined8 *)*plVar16;
      puVar10 = (undefined8 *)plVar16[1];
      lVar1 = plVar16[2];
      local_348._0_4_ = (int)lVar1;
      lVar9 = ((longlong)puVar10 - (longlong)puVar15) / 0x18 + 1;
      puVar14 = puVar15;
      if ((int)local_348 != 0) {
LAB_1404f6880:
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
LAB_1404f68d0:
          puVar11 = puVar15;
          puVar15 = puVar11 + 3;
          if (puVar15 <= puVar10) goto code_r0x0001404f68d9;
          goto LAB_1404f68e3;
        }
        for (; puVar12 = puVar14, puVar15 = puVar14, puVar14 < puVar10; puVar10 = puVar10 + -3) {
          while (puVar11 = puVar12, puVar15 = puVar15 + 3, puVar15 <= puVar10) {
            puVar12 = puVar15;
            if ((longlong)puVar11[2] <= (longlong)puVar15[2]) {
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
        goto LAB_1404f6a11;
      }
LAB_1404f6a02:
      local_348 = lVar1;
      FUN_1404f65d0(puVar15,lVar9,param_3,param_4);
LAB_1404f6a11:
      plVar16 = plVar16 + -3;
    } while (&local_338 <= plVar16);
  }
  return;
code_r0x0001404f68d9:
  if ((longlong)puVar14[2] <= (longlong)puVar11[5]) goto LAB_1404f68d0;
LAB_1404f68e3:
  do {
    puVar13 = puVar12;
    puVar12 = puVar13 + -3;
    if (puVar12 <= puVar14) break;
  } while ((longlong)puVar13[-1] <= (longlong)puVar14[2]);
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
    goto LAB_1404f68d0;
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
    if (puVar12 <= puVar14 + 3) goto LAB_1404f6a11;
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
    if (puVar10 <= puVar15) goto LAB_1404f6a11;
  }
  lVar9 = ((longlong)puVar10 - (longlong)puVar15) / 0x18 + 1;
  puVar14 = puVar15;
  if ((int)local_348 == 0) goto LAB_1404f6a02;
  goto LAB_1404f6880;
}



// FUNCTION 1404f6ae0 FUN_1404f6ae0 body=64 status=ok
// SIG undefined FUN_1404f6ae0(void)

void FUN_1404f6ae0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = param_1;
    return;
  }
  return;
}



// FUNCTION 1404f6b20 FUN_1404f6b20 body=402 status=ok
// SIG undefined FUN_1404f6b20(void)

int FUN_1404f6b20(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  iVar2 = (int)param_1[1];
  lVar9 = (longlong)iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  iVar10 = 0;
  bVar13 = *(int *)(*param_1 + 0x10) != *(int *)(*(longlong *)*param_2 + 8);
  lVar7 = 0;
  iVar11 = 0;
  do {
    lVar7 = lVar7 + 1;
    iVar12 = iVar11 + 1;
    if (lVar7 < lVar9) {
      piVar5 = (int *)(*param_1 + 0x10 + lVar7 * 0x20);
      do {
        if (bVar13 != (*piVar5 != *(int *)(*(longlong *)*param_2 + 8))) break;
        iVar12 = iVar12 + 1;
        lVar7 = lVar7 + 1;
        piVar5 = piVar5 + 8;
      } while (lVar7 < lVar9);
    }
    iVar6 = iVar12 - iVar11;
    if (bVar13 == false) {
      if (iVar6 != 0) {
        plVar8 = (longlong *)((longlong)iVar11 * 0x20 + 8 + *param_1);
        do {
          plVar3 = (longlong *)*plVar8;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            lVar4 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar5 = (int *)((longlong)plVar3 + 0xc);
              iVar11 = *piVar5;
              *piVar5 = *piVar5 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          plVar8 = plVar8 + 4;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    else {
      if (iVar10 != iVar11) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar10 * 0x20 + *param_1),
                   (void *)((longlong)iVar11 * 0x20 + *param_1),(longlong)iVar6 << 5);
      }
      iVar10 = iVar10 + iVar6;
    }
    bVar13 = (bool)(bVar13 ^ 1);
    iVar11 = iVar12;
    if (lVar9 <= lVar7) {
      *(int *)(param_1 + 1) = iVar10;
      return iVar2 - iVar10;
    }
  } while( true );
}



// FUNCTION 1404f6cc0 FUN_1404f6cc0 body=575 status=ok
// SIG undefined FUN_1404f6cc0(void)

int FUN_1404f6cc0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  
  iVar2 = *(int *)(param_1 + 0x4488);
  lVar7 = (longlong)iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  iVar13 = 0;
  lVar12 = *(longlong *)(param_1 + 0x4480);
  if (*(longlong *)(param_1 + 0x4480) == 0) {
    lVar12 = param_1;
  }
  cVar4 = (*(code *)**(undefined8 **)(lVar12 + 0x10))(lVar12 + 0x10,*param_2);
  bVar14 = cVar4 == '\0';
  lVar12 = 0;
  iVar9 = 0;
  do {
    iVar10 = iVar9 + 1;
    lVar12 = lVar12 + 1;
    if (lVar12 < lVar7) {
      lVar8 = lVar12 * 0x448;
      do {
        lVar5 = *(longlong *)(param_1 + 0x4480);
        if (*(longlong *)(param_1 + 0x4480) == 0) {
          lVar5 = param_1;
        }
        puVar6 = (undefined8 *)(lVar5 + 0x10 + lVar8);
        cVar4 = (**(code **)*puVar6)(puVar6,*param_2);
        if (bVar14 != (cVar4 == '\0')) break;
        iVar10 = iVar10 + 1;
        lVar12 = lVar12 + 1;
        lVar8 = lVar8 + 0x448;
      } while (lVar12 < lVar7);
    }
    iVar11 = iVar10 - iVar9;
    if (bVar14 == false) {
      lVar8 = *(longlong *)(param_1 + 0x4480);
      if (*(longlong *)(param_1 + 0x4480) == 0) {
        lVar8 = param_1;
      }
      if (iVar11 != 0) {
        puVar6 = (undefined8 *)(lVar8 + 0x10 + (longlong)iVar9 * 0x448);
        do {
          *puVar6 = &PTR_FUN_143f73cd8;
          plVar3 = (longlong *)puVar6[2];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar9 == 1) && (plVar3 != (longlong *)0x0)) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
          puVar6[-1] = &PTR_FUN_143f9a360;
          puVar6 = puVar6 + 0x89;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
    }
    else {
      if (iVar13 != iVar9) {
        lVar8 = *(longlong *)(param_1 + 0x4480);
        if (*(longlong *)(param_1 + 0x4480) == 0) {
          lVar8 = param_1;
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar13 * 0x448 + lVar8),
                   (void *)((longlong)iVar9 * 0x448 + lVar8),(longlong)iVar11 * 0x448);
      }
      iVar13 = iVar13 + iVar11;
    }
    bVar14 = (bool)(bVar14 ^ 1);
    iVar9 = iVar10;
    if (lVar7 <= lVar12) {
      *(int *)(param_1 + 0x4488) = iVar13;
      return iVar2 - iVar13;
    }
  } while( true );
}



// FUNCTION 1404f6f00 FUN_1404f6f00 body=402 status=ok
// SIG undefined FUN_1404f6f00(void)

int FUN_1404f6f00(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  iVar2 = (int)param_1[1];
  lVar9 = (longlong)iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  iVar10 = 0;
  bVar13 = *(int *)(*param_1 + 0x10) != *(int *)*param_2;
  lVar7 = 0;
  iVar11 = 0;
  do {
    lVar7 = lVar7 + 1;
    iVar12 = iVar11 + 1;
    if (lVar7 < lVar9) {
      piVar5 = (int *)(*param_1 + 0x10 + lVar7 * 0x20);
      do {
        if (bVar13 != (*piVar5 != *(int *)*param_2)) break;
        iVar12 = iVar12 + 1;
        lVar7 = lVar7 + 1;
        piVar5 = piVar5 + 8;
      } while (lVar7 < lVar9);
    }
    iVar6 = iVar12 - iVar11;
    if (bVar13 == false) {
      if (iVar6 != 0) {
        plVar8 = (longlong *)((longlong)iVar11 * 0x20 + 8 + *param_1);
        do {
          plVar3 = (longlong *)*plVar8;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            lVar4 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar5 = (int *)((longlong)plVar3 + 0xc);
              iVar11 = *piVar5;
              *piVar5 = *piVar5 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          plVar8 = plVar8 + 4;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    else {
      if (iVar10 != iVar11) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar10 * 0x20 + *param_1),
                   (void *)((longlong)iVar11 * 0x20 + *param_1),(longlong)iVar6 << 5);
      }
      iVar10 = iVar10 + iVar6;
    }
    bVar13 = (bool)(bVar13 ^ 1);
    iVar11 = iVar12;
    if (lVar9 <= lVar7) {
      *(int *)(param_1 + 1) = iVar10;
      return iVar2 - iVar10;
    }
  } while( true );
}



// FUNCTION 1404f70a0 FUN_1404f70a0 body=382 status=ok
// SIG undefined FUN_1404f70a0(void)

int FUN_1404f70a0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  iVar2 = (int)param_1[1];
  lVar9 = (longlong)iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  iVar10 = 0;
  bVar13 = 1 < *(int *)(*param_1 + 0x10) - 4U;
  lVar8 = 0;
  iVar11 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar12 = iVar11 + 1;
    if (lVar8 < lVar9) {
      piVar5 = (int *)(*param_1 + 0x10 + lVar8 * 0x20);
      do {
        if (bVar13 != 1 < *piVar5 - 4U) break;
        iVar12 = iVar12 + 1;
        lVar8 = lVar8 + 1;
        piVar5 = piVar5 + 8;
      } while (lVar8 < lVar9);
    }
    iVar6 = iVar12 - iVar11;
    if (bVar13 == false) {
      if (iVar6 != 0) {
        plVar7 = (longlong *)((longlong)iVar11 * 0x20 + 8 + *param_1);
        do {
          plVar3 = (longlong *)*plVar7;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            lVar4 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar5 = (int *)((longlong)plVar3 + 0xc);
              iVar11 = *piVar5;
              *piVar5 = *piVar5 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          plVar7 = plVar7 + 4;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    else {
      if (iVar10 != iVar11) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar10 * 0x20 + *param_1),
                   (void *)((longlong)iVar11 * 0x20 + *param_1),(longlong)iVar6 << 5);
      }
      iVar10 = iVar10 + iVar6;
    }
    bVar13 = (bool)(bVar13 ^ 1);
    iVar11 = iVar12;
    if (lVar9 <= lVar8) {
      *(int *)(param_1 + 1) = iVar10;
      return iVar2 - iVar10;
    }
  } while( true );
}



// FUNCTION 1404f7220 FUN_1404f7220 body=561 status=ok
// SIG undefined FUN_1404f7220(void)

int FUN_1404f7220(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  double *pdVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  int iVar13;
  
  iVar2 = *(int *)(param_1 + 0x4488);
  lVar11 = (longlong)iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  iVar13 = 0;
  lVar10 = *(longlong *)(param_1 + 0x4480);
  if (*(longlong *)(param_1 + 0x4480) == 0) {
    lVar10 = param_1;
  }
  bVar12 = *(double *)*param_2 - *(double *)(lVar10 + 0x440) < 30.0;
  lVar10 = 0;
  iVar7 = 0;
  do {
    lVar10 = lVar10 + 1;
    iVar8 = iVar7 + 1;
    if (lVar10 < lVar11) {
      lVar4 = *(longlong *)(param_1 + 0x4480);
      if (*(longlong *)(param_1 + 0x4480) == 0) {
        lVar4 = param_1;
      }
      pdVar5 = (double *)(lVar10 * 0x448 + lVar4 + 0x440);
      do {
        if (bVar12 != *(double *)*param_2 - *pdVar5 < 30.0) break;
        iVar8 = iVar8 + 1;
        lVar10 = lVar10 + 1;
        pdVar5 = pdVar5 + 0x89;
      } while (lVar10 < lVar11);
    }
    iVar9 = iVar8 - iVar7;
    if (bVar12 == false) {
      lVar4 = *(longlong *)(param_1 + 0x4480);
      if (*(longlong *)(param_1 + 0x4480) == 0) {
        lVar4 = param_1;
      }
      if (iVar9 != 0) {
        puVar6 = (undefined8 *)(lVar4 + 0x10 + (longlong)iVar7 * 0x448);
        do {
          *puVar6 = &PTR_FUN_143f73cd8;
          plVar3 = (longlong *)puVar6[2];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar7 == 1) && (plVar3 != (longlong *)0x0)) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
          puVar6[-1] = &PTR_FUN_143f9a360;
          puVar6 = puVar6 + 0x89;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    else {
      if (iVar13 != iVar7) {
        lVar4 = *(longlong *)(param_1 + 0x4480);
        if (*(longlong *)(param_1 + 0x4480) == 0) {
          lVar4 = param_1;
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar13 * 0x448 + lVar4),
                   (void *)((longlong)iVar7 * 0x448 + lVar4),(longlong)iVar9 * 0x448);
      }
      iVar13 = iVar13 + iVar9;
    }
    bVar12 = (bool)(bVar12 ^ 1);
    iVar7 = iVar8;
    if (lVar11 <= lVar10) {
      *(int *)(param_1 + 0x4488) = iVar13;
      return iVar2 - iVar13;
    }
  } while( true );
}



// FUNCTION 1404f7460 FUN_1404f7460 body=429 status=ok
// SIG undefined FUN_1404f7460(void)

int FUN_1404f7460(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  iVar2 = (int)param_1[1];
  lVar9 = (longlong)iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  iVar10 = 0;
  bVar13 = *(int *)(*param_1 + 0x10) != *(int *)*param_2;
  lVar7 = 0;
  iVar11 = 0;
  do {
    lVar7 = lVar7 + 1;
    iVar12 = iVar11 + 1;
    if (lVar7 < lVar9) {
      piVar5 = (int *)(*param_1 + (lVar7 * 5 + 2) * 8);
      do {
        if (bVar13 != (*piVar5 != *(int *)*param_2)) break;
        iVar12 = iVar12 + 1;
        lVar7 = lVar7 + 1;
        piVar5 = piVar5 + 10;
      } while (lVar7 < lVar9);
    }
    iVar6 = iVar12 - iVar11;
    if (bVar13 == false) {
      if (iVar6 != 0) {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar11 * 0x28 + 8);
        do {
          if (plVar8[2] != 0) {
            FMemory::Free();
          }
          plVar3 = (longlong *)*plVar8;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            lVar4 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar5 = (int *)((longlong)plVar3 + 0xc);
              iVar11 = *piVar5;
              *piVar5 = *piVar5 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          plVar8 = plVar8 + 5;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    else {
      if (iVar10 != iVar11) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar10 * 0x28),
                   (void *)(*param_1 + (longlong)iVar11 * 0x28),(longlong)iVar6 * 0x28);
      }
      iVar10 = iVar10 + iVar6;
    }
    bVar13 = (bool)(bVar13 ^ 1);
    iVar11 = iVar12;
    if (lVar9 <= lVar7) {
      *(int *)(param_1 + 1) = iVar10;
      return iVar2 - iVar10;
    }
  } while( true );
}



// FUNCTION 1404f7610 FUN_1404f7610 body=403 status=ok
// SIG undefined FUN_1404f7610(void)

int FUN_1404f7610(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  iVar2 = (int)param_1[1];
  lVar9 = (longlong)iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  iVar10 = 0;
  bVar13 = 1 < *(int *)(*param_1 + 0x28) - 4U;
  lVar7 = 0;
  iVar11 = 0;
  do {
    lVar7 = lVar7 + 1;
    iVar12 = iVar11 + 1;
    if (lVar7 < lVar9) {
      piVar5 = (int *)(*param_1 + lVar7 * 0x48 + 0x28);
      do {
        if (bVar13 != 1 < *piVar5 - 4U) break;
        iVar12 = iVar12 + 1;
        lVar7 = lVar7 + 1;
        piVar5 = piVar5 + 0x12;
      } while (lVar7 < lVar9);
    }
    iVar6 = iVar12 - iVar11;
    if (bVar13 == false) {
      if (iVar6 != 0) {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar11 * 0x48 + 8);
        do {
          if (plVar8[5] != 0) {
            FMemory::Free();
          }
          plVar3 = (longlong *)*plVar8;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            lVar4 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar5 = (int *)((longlong)plVar3 + 0xc);
              iVar11 = *piVar5;
              *piVar5 = *piVar5 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          plVar8 = plVar8 + 9;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    else {
      if (iVar10 != iVar11) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar10 * 0x48),
                   (void *)(*param_1 + (longlong)iVar11 * 0x48),(longlong)iVar6 * 0x48);
      }
      iVar10 = iVar10 + iVar6;
    }
    bVar13 = (bool)(bVar13 ^ 1);
    iVar11 = iVar12;
    if (lVar9 <= lVar7) {
      *(int *)(param_1 + 1) = iVar10;
      return iVar2 - iVar10;
    }
  } while( true );
}



// FUNCTION 1404f77b0 FUN_1404f77b0 body=164 status=ok
// SIG undefined FUN_1404f77b0(void)

void FUN_1404f77b0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined2 local_res8 [4];
  
  if ((((int)param_1[4] - 2U & 0xfffffff5) != 0) || ((int)param_1[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  (**(code **)(*param_1 + 0x18))(param_1,param_3);
  *(undefined4 *)(param_1 + 4) = 7;
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404f7860 FUN_1404f7860 body=1302 status=ok
// SIG undefined FUN_1404f7860(void)

undefined8 * FUN_1404f7860(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uStack_c;
  
  FOnlineAsyncTaskManager::FOnlineAsyncTaskManager();
  *param_1 = &PTR_Init_143f9abe8;
  param_1[1] = &PTR_LAB_143f9ac20;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0x40518a80;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 1;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = uStack_c;
  param_1[0x20] = &PTR_FUN_143f9a9c8;
  param_1[0x22] = param_1;
  SteamAPI_RegisterCallback(param_1 + 0x20,0x14b);
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x25] = &PTR_FUN_143f9a9c8;
  *(undefined4 *)(param_1 + 0x28) = 0x4051a290;
  *(undefined4 *)((longlong)param_1 + 0x144) = 1;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = uStack_c;
  param_1[0x27] = param_1;
  SteamAPI_RegisterCallback(param_1 + 0x25,0x2c0);
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2a] = &PTR_FUN_143f9a9c8;
  *(undefined4 *)(param_1 + 0x2d) = 0x4051a170;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 1;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = uStack_c;
  param_1[0x2c] = param_1;
  SteamAPI_RegisterCallback(param_1 + 0x2a,0x65);
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x2f] = &PTR_FUN_143f9aa08;
  *(undefined4 *)(param_1 + 0x32) = 0x4051a200;
  *(undefined4 *)((longlong)param_1 + 0x194) = 1;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = uStack_c;
  param_1[0x31] = param_1;
  SteamAPI_RegisterCallback(param_1 + 0x2f,0x67);
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x34] = &PTR_FUN_143f9aa48;
  *(undefined4 *)(param_1 + 0x37) = 0x40518740;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uStack_c;
  param_1[0x36] = param_1;
  SteamAPI_RegisterCallback(param_1 + 0x34,0x14e);
  *(undefined1 *)(param_1 + 0x3a) = 0;
  param_1[0x39] = &PTR_FUN_143f9aa08;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x3b] = param_1;
  *(undefined4 *)(param_1 + 0x3c) = 0x40518800;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 1;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = uStack_c;
  SteamAPI_RegisterCallback(param_1 + 0x39,0x3ed);
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  param_1[0x3e] = &PTR_FUN_143f9a9c8;
  *(undefined4 *)(param_1 + 0x41) = 0x40519770;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 1;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)((longlong)param_1 + 0x214) = uStack_c;
  param_1[0x40] = param_1;
  SteamAPI_RegisterCallback(param_1 + 0x3e,0x7d);
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  param_1[0x43] = &PTR_FUN_143f9aa88;
  *(undefined4 *)(param_1 + 0x46) = 0x40437760;
  *(undefined4 *)((longlong)param_1 + 0x234) = 1;
  *(undefined4 *)(param_1 + 0x47) = 0;
  *(undefined4 *)((longlong)param_1 + 0x23c) = uStack_c;
  param_1[0x45] = param_1;
  SteamAPI_RegisterCallback(param_1 + 0x43,0x150);
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  param_1[0x48] = &PTR_FUN_143f9aac8;
  *(undefined4 *)(param_1 + 0x4b) = 0x40519b10;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 1;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x264) = uStack_c;
  param_1[0x4a] = param_1;
  SteamAPI_RegisterCallback(param_1 + 0x48,0x14d);
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  param_1[0x4d] = &PTR_FUN_143f9aac8;
  *(undefined4 *)(param_1 + 0x50) = 0x4051a0d0;
  *(undefined4 *)((longlong)param_1 + 0x284) = 1;
  *(undefined4 *)(param_1 + 0x51) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28c) = uStack_c;
  param_1[0x4f] = param_1;
  SteamAPI_RegisterCallback(param_1 + 0x4d,0x130);
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0;
  param_1[0x52] = &PTR_FUN_143f9ab08;
  *(undefined4 *)(param_1 + 0x55) = 0x40518b30;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 1;
  *(undefined4 *)(param_1 + 0x56) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = uStack_c;
  param_1[0x54] = param_1;
  SteamAPI_RegisterCallback(param_1 + 0x52,0x2ca);
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0;
  param_1[0x57] = &PTR_FUN_143f9ab08;
  *(undefined4 *)(param_1 + 0x5a) = 0x40518bd0;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 1;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_c;
  param_1[0x59] = param_1;
  SteamAPI_RegisterCallback(param_1 + 0x57,0xa3);
  *(undefined1 *)(param_1 + 0x5d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0;
  param_1[0x5c] = &PTR_FUN_143f9aac8;
  *(undefined4 *)(param_1 + 0x5f) = 0x4051a390;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 1;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x304) = uStack_c;
  param_1[0x5e] = param_1;
  SteamAPI_RegisterCallback(param_1 + 0x5c,0x44e);
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  param_1[0x61] = &PTR_FUN_143f9ab08;
  *(undefined4 *)(param_1 + 100) = 0x40519e60;
  *(undefined4 *)((longlong)param_1 + 0x324) = 1;
  *(undefined4 *)(param_1 + 0x65) = 0;
  *(undefined4 *)((longlong)param_1 + 0x32c) = uStack_c;
  param_1[99] = param_1;
  SteamAPI_RegisterCallback(param_1 + 0x61,0x4b2);
  *(undefined1 *)(param_1 + 0x67) = 0;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  param_1[0x66] = &PTR_FUN_143f9ab48;
  *(undefined4 *)(param_1 + 0x69) = 0x40519da0;
  *(undefined4 *)((longlong)param_1 + 0x34c) = 1;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x354) = uStack_c;
  param_1[0x68] = param_1;
  SteamAPI_RegisterCallback(param_1 + 0x66,0x4b3);
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  param_1[0x6b] = &PTR_FUN_143f9ab88;
  *(undefined4 *)(param_1 + 0x6e) = 0x40519a10;
  *(undefined4 *)((longlong)param_1 + 0x374) = 1;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x37c) = uStack_c;
  param_1[0x6d] = param_1;
  SteamAPI_RegisterCallback(param_1 + 0x6b,0x1f8);
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38c) = 0;
  param_1[0x70] = &PTR_FUN_143f9abc8;
  *(undefined4 *)(param_1 + 0x73) = 0x40519800;
  *(undefined4 *)((longlong)param_1 + 0x39c) = 1;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = uStack_c;
  param_1[0x72] = param_1;
  SteamAPI_RegisterCallback(param_1 + 0x70,0x1fa);
  *(undefined1 *)(param_1 + 0x76) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0;
  param_1[0x75] = &PTR_FUN_143f9ab88;
  *(undefined4 *)(param_1 + 0x78) = 0x405198b0;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 1;
  *(undefined4 *)(param_1 + 0x79) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = uStack_c;
  param_1[0x77] = param_1;
  SteamAPI_RegisterCallback(param_1 + 0x75,0x1f9);
  *(undefined1 *)(param_1 + 0x7b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3dc) = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0x4051a3e0;
  *(undefined4 *)((longlong)param_1 + 0x3ec) = 1;
  *(undefined4 *)(param_1 + 0x7e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3f4) = uStack_c;
  param_1[0x7a] = &PTR_FUN_143f9ab08;
  param_1[0x7c] = param_1;
  SteamAPI_RegisterCallback(param_1 + 0x7a,0x454);
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x404) = 0;
  param_1[0x7f] = &PTR_FUN_143f9ab08;
  *(undefined4 *)(param_1 + 0x82) = 0x4051a020;
  *(undefined4 *)((longlong)param_1 + 0x414) = 1;
  *(undefined4 *)(param_1 + 0x83) = 0;
  *(undefined4 *)((longlong)param_1 + 0x41c) = uStack_c;
  param_1[0x81] = param_1;
  SteamAPI_RegisterCallback(param_1 + 0x7f,0x8fd);
  param_1[0x84] = param_2;
  return param_1;
}



// FUNCTION 1404f7d80 FOnlineAsyncTaskSteam body=131 status=ok
// SIG undefined FOnlineAsyncTaskSteam(void)

undefined8 *
FOnlineAsyncTaskSteam::FOnlineAsyncTaskSteam
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  LARGE_INTEGER local_res8;
  
  *param_1 = &PTR_FUN_143f76b48;
  QueryPerformanceCounter(&local_res8);
  dVar1 = (double)local_res8.QuadPart * DAT_1468b02f8;
  *param_1 = &PTR_FUN_143f9a928;
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_143f9a968;
  param_1[4] = param_3;
  param_1[1] = dVar1 + 16777216.0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x19) = 0;
  return param_1;
}



// FUNCTION 1404f7e10 FUN_1404f7e10 body=189 status=ok
// SIG undefined FUN_1404f7e10(void)

undefined8 *
FUN_1404f7e10(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined1 param_6)

{
  longlong lVar1;
  
  FOnlineAsyncTaskSteam::FOnlineAsyncTaskSteam(param_1,param_2,0);
  *param_1 = &PTR_FUN_143f9b6b8;
  param_1[5] = param_5;
  param_1[6] = *param_3;
  lVar1 = param_3[1];
  param_1[7] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[8] = *param_4;
  lVar1 = param_4[1];
  param_1[9] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)((longlong)param_1 + 100) = param_6;
  *(undefined4 *)(param_1 + 0xc) = 2;
  param_1[0xd] = &PTR_FUN_143f9ad78;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = &LAB_1405199d0;
  param_1[0xf] = param_1;
  SteamAPI_RegisterCallback(param_1 + 0xd,0x1f9);
  return param_1;
}



// FUNCTION 1404f7ed0 FUN_1404f7ed0 body=417 status=ok
// SIG undefined FUN_1404f7ed0(void)

undefined8 * FUN_1404f7ed0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 2;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 2;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 2;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 2;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 2;
  *param_1 = &PTR_FUN_143f9b750;
  param_1[0x22] = param_2;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x29] = &PTR_LAB_143f9b738;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x9a;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 2;
  puVar1 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
  param_1[0x27] = *puVar1;
  puVar1 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamFriends_1461fc730);
  param_1[0x28] = *puVar1;
  return param_1;
}



// FUNCTION 1404f8080 FUN_1404f8080 body=1259 status=ok
// SIG undefined FUN_1404f8080(void)

short * FUN_1404f8080(short *param_1,undefined8 param_2)

{
  short *psVar1;
  wchar_t *pwVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  short *psVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  uint uVar12;
  longlong lVar13;
  undefined2 *puVar14;
  int iVar15;
  short *local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 uVar16;
  undefined2 *local_58;
  ulonglong local_50;
  wchar_t *local_48;
  undefined8 local_40;
  
  local_res8 = param_1;
  FUN_1404e8a40();
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  *(undefined ***)param_1 = &PTR_FUN_143f9b120;
  *(undefined8 *)(param_1 + 0x144) = param_2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x148));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x148),4000);
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  param_1[0x15e] = 0;
  param_1[0x15f] = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  *(undefined ***)(param_1 + 0x16c) = &PTR_FUN_143f9b0f8;
  local_res8[0x180] = 0;
  local_res8[0x181] = 0;
  local_res8[0x182] = 0;
  local_res8[0x183] = 0;
  local_res8[0x184] = 0;
  local_res8[0x185] = 0;
  local_res8[0x186] = 0;
  local_res8[0x187] = 0;
  *(undefined1 *)(local_res8 + 0x17e) = 0;
  param_1[0x170] = 8;
  param_1[0x171] = 0;
  param_1[0x172] = 8;
  param_1[0x173] = 0;
  param_1[0x174] = 8;
  param_1[0x175] = 0;
  param_1[0x176] = 0x40;
  param_1[0x177] = 0;
  param_1[0x178] = 0;
  param_1[0x179] = 0x4020;
  param_1[0x17a] = 0;
  param_1[0x17b] = 0x4170;
  param_1[0x17c] = 0;
  param_1[0x17d] = 0x4020;
  uVar6 = FName::FName(local_res18,L"STEAM",1);
  plVar7 = (longlong *)FUN_1419c6b80(uVar6);
  (**(code **)(*plVar7 + 0x70))(plVar7,local_res8 + 0x188,0,0);
  local_res8[400] = 0;
  local_res8[0x191] = 0;
  local_res8[0x192] = 0;
  local_res8[0x193] = 0;
  local_res8[0x194] = 0;
  local_res8[0x195] = 0;
  local_res8[0x196] = 0;
  local_res8[0x197] = 0;
  local_res8[0x198] = 0;
  local_res8[0x199] = 0;
  local_res8[0x19a] = 0;
  local_res8[0x19b] = 0;
  local_res8[0x19c] = 0;
  local_res8[0x19d] = 0;
  local_res8[0x19e] = 0;
  local_res8[0x19f] = 0;
  local_res8[0x1a0] = 0;
  local_res8[0x1a1] = 0;
  local_res8[0x1a2] = 0;
  local_res8[0x1a3] = 0;
  local_res8[0x1a4] = 0;
  local_res8[0x1a5] = 0;
  local_res8[0x1a6] = 0;
  local_res8[0x1a7] = 0;
  local_res8[0x1a8] = 0;
  local_res8[0x1a9] = 0;
  local_res8[0x1aa] = 0;
  local_res8[0x1ab] = 0;
  local_res8[0x1ac] = 0;
  local_res8[0x1ad] = 0;
  local_res8[0x1ae] = 0;
  local_res8[0x1af] = 0;
  local_res8[0x1b0] = 2;
  local_res8[0x1b1] = 0;
  local_res8[0x1b2] = 0;
  local_res8[0x1b3] = 0;
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"FQoSHandlerSteam",L"MaxQoSRequest",param_1 + 0x170,&DAT_1468e2360);
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"FQoSHandlerSteam",L"MaxQoSListen",param_1 + 0x172,&DAT_1468e2360);
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"FQoSHandlerSteam",L"NumPingProbes",param_1 + 0x174,&DAT_1468e2360);
  FConfigCacheIni::GetInt
            (DAT_1468b6148,L"FQoSHandlerSteam",L"PingProbeSize",param_1 + 0x176,&DAT_1468e2360);
  FConfigCacheIni::GetFloat
            (DAT_1468b6148,L"FQoSHandlerSteam",L"PingTimeout",param_1 + 0x178,&DAT_1468e2360);
  FConfigCacheIni::GetFloat
            (DAT_1468b6148,L"FQoSHandlerSteam",L"ChallengeTimeout",param_1 + 0x17a,&DAT_1468e2360);
  uVar16 = 1;
  FConfigCacheIni::GetFloat
            (DAT_1468b6148,L"FQoSHandlerSteam",L"ListenTimeout",param_1 + 0x17c,&DAT_1468e2360);
  psVar1 = local_res8;
  *(uint *)(local_res8 + 0x1b6) = *(uint *)(local_res8 + 0x1b6) & 0xff0fffff;
  *(undefined1 *)((longlong)local_res8 + 0x36f) = 0;
  *(uint *)(local_res8 + 0x1b6) = *(uint *)(local_res8 + 0x1b6) & 0xfff00000;
  iVar15 = 0;
  local_res8[0x1b4] = 0;
  local_res8[0x1b5] = 0;
  puVar8 = (undefined8 *)FName::FName(&local_res8,L"STEAM",1);
  FUN_1404ac080(psVar1 + 0x1c4,*puVar8);
  puVar8 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamFriends_1461fc730);
  *(undefined8 *)(psVar1 + 0x1b8) = *puVar8;
  puVar8 = (undefined8 *)
           SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamMatchmaking_1461fc760);
  *(undefined8 *)(psVar1 + 0x1bc) = *puVar8;
  puVar8 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
  *(undefined8 *)(psVar1 + 0x1c0) = *puVar8;
  psVar9 = (short *)FCommandLine::Get();
  local_50 = 0;
  local_58 = (undefined2 *)0x0;
  if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
    lVar13 = -1;
    do {
      lVar13 = lVar13 + 1;
    } while (psVar9[lVar13] != 0);
    uVar12 = (int)lVar13 + 1;
    local_50 = (ulonglong)uVar12;
    if (0 < (int)uVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    }
    FGenericPlatformString::Memcpy(local_58,psVar9,(longlong)(int)uVar12 * 2);
  }
  local_48 = (wchar_t *)0x0;
  local_40 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  pwVar2 = local_48;
  FGenericPlatformString::Memcpy(local_48,L"+connect_lobby ",0x20);
  iVar3 = (int)local_40;
  pwVar11 = L"";
  if ((int)local_40 != 0) {
    pwVar11 = pwVar2;
  }
  iVar5 = FUN_141592950(&local_58,pwVar11,1,1,CONCAT44(uVar16,0xffffffff));
  if (iVar5 != -1) {
    if (iVar3 != 0) {
      iVar15 = iVar3 + -1;
    }
    local_res8 = psVar9 + (longlong)iVar15 + (longlong)iVar5;
    FParse::Token(&local_48,&local_res8,0);
    pwVar11 = L"";
    if ((int)local_40 != 0) {
      pwVar11 = local_48;
    }
    uVar10 = _wcstoui64(pwVar11,(wchar_t **)0x0,10);
    if (0 < (longlong)uVar10) {
      *(ulonglong *)(psVar1 + 0x1b4) = uVar10;
    }
    if (local_48 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  pwVar11 = L"";
  if (iVar3 != 0) {
    pwVar11 = pwVar2;
  }
  FString::ReplaceInline(&local_58,pwVar11,L"-connect_lobby=",1);
  puVar14 = &DAT_143f3eda8;
  if ((int)local_50 != 0) {
    puVar14 = local_58;
  }
  FUN_141658fa0(puVar14);
  if (pwVar2 != (wchar_t *)0x0) {
    FMemory::Free(pwVar2);
  }
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_res10[0] = 0;
  cVar4 = FConfigCacheIni::GetBool
                    (DAT_1468b6148,L"OnlineSessionSteam",L"bEnableQoS",local_res10,&DAT_1468e2360);
  if (cVar4 != '\0') {
    DAT_146853160 = local_res10[0];
  }
  return psVar1;
}



// FUNCTION 1404f8570 FUN_1404f8570 body=477 status=ok
// SIG undefined FUN_1404f8570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1404f8570(undefined8 *param_1)

{
  ulonglong *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *local_a0;
  ulonglong local_98;
  ulonglong local_90;
  undefined1 local_88;
  longlong local_80 [4];
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  puVar1 = param_1 + 3;
  uVar8 = 0;
  *param_1 = 0;
  local_a0 = (longlong *)0x0;
  param_1[1] = 0;
  *puVar1 = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1 != &local_a8) {
    *param_1 = 0;
    local_a8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 1,&local_a0);
    plVar6 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_a0 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
  }
  *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xffffffe0;
  local_90._0_4_ = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 1;
  local_80[0] = 0;
  local_80[1] = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0xffffffff;
  local_4c = 0;
  local_40 = 0;
  local_38 = 0;
  if (puVar1 != &local_98) {
    uVar7 = uVar8;
    if (*puVar1 != 0) {
      FMemory::Free();
      uVar8 = local_90 >> 0x20;
      uVar7 = local_98;
    }
    *puVar1 = uVar7;
    *(undefined4 *)(param_1 + 4) = (undefined4)local_90;
    *(int *)((longlong)param_1 + 0x24) = (int)uVar8;
  }
  local_90 = 0;
  local_98 = 0;
  *(undefined1 *)(param_1 + 5) = local_88;
  TMap<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
  ::operator=(param_1 + 6,local_80);
  local_38 = 0;
  if (local_40 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(local_80,0);
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80[0] != 0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1404f8750 FUN_1404f8750 body=123 status=ok
// SIG undefined FUN_1404f8750(void)

undefined8 * FUN_1404f8750(undefined8 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_143f9d238;
  iVar1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = DAT_1461fb7e0;
  *(undefined1 *)((longlong)param_1 + 0x19) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0x2000) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 4,0x2000);
    iVar1 = *(int *)(param_1 + 5);
  }
  *(int *)(param_1 + 5) = iVar1 + 0x2000;
  if (*(int *)((longlong)param_1 + 0x2c) < iVar1 + 0x2000) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 4,iVar1);
  }
  return param_1;
}



// FUNCTION 1404f87d0 FUN_1404f87d0 body=446 status=ok
// SIG undefined FUN_1404f87d0(void)

undefined8 * FUN_1404f87d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_143f9bcc0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 2;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 2;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 2;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 2;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 2;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 2;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 2;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 2;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 2;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 2;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 2;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 2;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 2;
  return param_1;
}



// FUNCTION 1404f8990 FUN_1404f8990 body=58 status=ok
// SIG undefined FUN_1404f8990(void)

undefined8 * FUN_1404f8990(undefined8 *param_1)

{
  FUN_1404be160();
  *param_1 = &PTR_FUN_143f9da80;
  param_1[5] = &PTR_LAB_143f9da70;
  param_1[0x32e] = &PTR_FUN_143f75710;
  return param_1;
}



// FUNCTION 1404f89d0 FUN_1404f89d0 body=130 status=ok
// SIG undefined FUN_1404f89d0(void)

undefined8 * FUN_1404f89d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1404be1c0();
  *param_1 = &PTR__scalar_deleting_destructor__143f9de00;
  param_1[5] = &PTR_LAB_143f9e228;
  param_1[0xa8] = &PTR_LAB_143f9e238;
  FName::FName(param_1 + 0xb1,L"STEAM",1);
  *param_1 = &PTR__scalar_deleting_destructor__143f9e280;
  param_1[5] = &PTR_LAB_143f9e228;
  param_1[0xa8] = &PTR_LAB_143f9e6a8;
  uVar1 = FUN_1404e6fc0();
  param_1[0x2b] = uVar1;
  return param_1;
}



// FUNCTION 1404f8a60 FUN_1404f8a60 body=58 status=ok
// SIG undefined FUN_1404f8a60(void)

undefined8 * FUN_1404f8a60(undefined8 *param_1)

{
  FUN_1404be160();
  *param_1 = &PTR_FUN_143f9d6f0;
  param_1[5] = &PTR_LAB_143f9da70;
  param_1[0x32e] = &PTR_FUN_143f75710;
  return param_1;
}



// FUNCTION 1404f8aa0 FUN_1404f8aa0 body=83 status=ok
// SIG undefined FUN_1404f8aa0(void)

undefined8 * FUN_1404f8aa0(undefined8 *param_1)

{
  FUN_1404be1c0();
  *param_1 = &PTR__scalar_deleting_destructor__143f9de00;
  param_1[5] = &PTR_LAB_143f9e228;
  param_1[0xa8] = &PTR_LAB_143f9e238;
  FName::FName(param_1 + 0xb1,L"STEAM",1);
  return param_1;
}



// FUNCTION 1404f8b00 ~TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator> body=159 status=ok
// SIG undefined ~TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>(void)

void TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>::
     ~TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 8);
    do {
      plVar4 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1404f8ba0 ~TArray<FTextLocalizationResource::FEntry,FDefaultAllocator> body=173 status=ok
// SIG undefined ~TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>(void)

void TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>::
     ~TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 8);
    do {
      if (plVar7[2] != 0) {
        FMemory::Free();
      }
      plVar4 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 5;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1404f8c50 ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_> body=95 status=ok
// SIG undefined ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(void)

void TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
     ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(longlong *param_1)

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
      plVar2 = plVar2 + 5;
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



// FUNCTION 1404f8cb0 FUN_1404f8cb0 body=190 status=ok
// SIG undefined FUN_1404f8cb0(void)

void FUN_1404f8cb0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x4480);
  iVar7 = *(int *)(param_1 + 0x4488);
  lVar5 = lVar4;
  if (lVar4 == 0) {
    lVar5 = param_1;
  }
  if (iVar7 != 0) {
    puVar6 = (undefined8 *)(lVar5 + 0x10);
    do {
      *puVar6 = &PTR_FUN_143f73cd8;
      plVar3 = (longlong *)puVar6[2];
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
      puVar6[-1] = &PTR_FUN_143f9a360;
      puVar6 = puVar6 + 0x89;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    lVar4 = *(longlong *)(param_1 + 0x4480);
  }
  if (lVar4 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1404f8d70 FUN_1404f8d70 body=173 status=ok
// SIG undefined FUN_1404f8d70(void)

void FUN_1404f8d70(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 8);
    do {
      if (plVar7[5] != 0) {
        FMemory::Free();
      }
      plVar4 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 9;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1404f8e20 ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator> body=159 status=ok
// SIG undefined ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(void)

void TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
     ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 8);
    do {
      plVar4 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1404f8ec0 ~TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_> body=187 status=ok
// SIG undefined ~TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>(void)

void TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::
     ~TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 0x10);
    do {
      if (plVar7[2] != 0) {
        FMemory::Free();
      }
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar4 = (longlong *)plVar7[-1];
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
      plVar7 = plVar7 + 6;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1404f8f80 FUN_1404f8f80 body=142 status=ok
// SIG undefined FUN_1404f8f80(void)

void FUN_1404f8f80(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  
  puVar4 = (undefined8 *)*param_1;
  iVar5 = *(int *)(param_1 + 1);
  if (iVar5 != 0) {
    do {
      *puVar4 = &PTR_FUN_143f73cd8;
      plVar3 = (longlong *)puVar4[2];
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
      puVar4 = puVar4 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar4 = (undefined8 *)*param_1;
  }
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar4);
  return;
}



// FUNCTION 1404f9010 FUN_1404f9010 body=173 status=ok
// SIG undefined FUN_1404f9010(void)

void FUN_1404f9010(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x40,0);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
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



// FUNCTION 1404f90c0 FUN_1404f90c0 body=565 status=ok
// SIG undefined FUN_1404f90c0(void)

void FUN_1404f90c0(undefined8 *param_1)

{
  *param_1 = &PTR_Init_143f9abe8;
  param_1[1] = &PTR_LAB_143f9ac20;
  param_1[0x7f] = &PTR_FUN_143f9aae8;
  if ((*(byte *)(param_1 + 0x80) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  param_1[0x7a] = &PTR_FUN_143f9aae8;
  if ((*(byte *)(param_1 + 0x7b) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  param_1[0x75] = &PTR_FUN_143f9ab68;
  if ((*(byte *)(param_1 + 0x76) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  param_1[0x70] = &PTR_FUN_143f9aba8;
  if ((*(byte *)(param_1 + 0x71) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  param_1[0x6b] = &PTR_FUN_143f9ab68;
  if ((*(byte *)(param_1 + 0x6c) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  param_1[0x66] = &PTR_FUN_143f9ab28;
  if ((*(byte *)(param_1 + 0x67) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  param_1[0x61] = &PTR_FUN_143f9aae8;
  if ((*(byte *)(param_1 + 0x62) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  param_1[0x5c] = &PTR_FUN_143f9aaa8;
  if ((*(byte *)(param_1 + 0x5d) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  param_1[0x57] = &PTR_FUN_143f9aae8;
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  param_1[0x52] = &PTR_FUN_143f9aae8;
  if ((*(byte *)(param_1 + 0x53) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  param_1[0x4d] = &PTR_FUN_143f9aaa8;
  if ((*(byte *)(param_1 + 0x4e) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  param_1[0x48] = &PTR_FUN_143f9aaa8;
  if ((*(byte *)(param_1 + 0x49) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  param_1[0x43] = &PTR_FUN_143f9aa68;
  if ((*(byte *)(param_1 + 0x44) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  param_1[0x3e] = &PTR_FUN_143f9a9a8;
  if ((*(byte *)(param_1 + 0x3f) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  param_1[0x39] = &PTR_FUN_143f9a9e8;
  if ((*(byte *)(param_1 + 0x3a) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  param_1[0x34] = &PTR_FUN_143f9aa28;
  if ((*(byte *)(param_1 + 0x35) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  param_1[0x2f] = &PTR_FUN_143f9a9e8;
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  param_1[0x2a] = &PTR_FUN_143f9a9a8;
  if ((*(byte *)(param_1 + 0x2b) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  param_1[0x25] = &PTR_FUN_143f9a9a8;
  if ((*(byte *)(param_1 + 0x26) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  param_1[0x20] = &PTR_FUN_143f9a9a8;
  if ((*(byte *)(param_1 + 0x21) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  FOnlineAsyncTaskManager::~FOnlineAsyncTaskManager(param_1);
  return;
}



// FUNCTION 1404f9300 FUN_1404f9300 body=815 status=ok
// SIG undefined FUN_1404f9300(void)

void FUN_1404f9300(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_143f9a530;
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x2b);
  plVar4 = (longlong *)param_1[0x28];
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
  plVar4 = (longlong *)param_1[0x26];
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
  plVar4 = (longlong *)param_1[0x24];
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
  plVar4 = (longlong *)param_1[0x22];
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
  plVar4 = (longlong *)param_1[0x20];
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
  plVar4 = (longlong *)param_1[0x1e];
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
  plVar4 = (longlong *)param_1[0x1c];
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
  plVar4 = (longlong *)param_1[0x1a];
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
  plVar4 = (longlong *)param_1[0x18];
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
  plVar4 = (longlong *)param_1[0x16];
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
  plVar4 = (longlong *)param_1[0x14];
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
  plVar4 = (longlong *)param_1[0x12];
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
  plVar4 = (longlong *)param_1[0x10];
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
  FUN_1404ac890(param_1);
  return;
}



// FUNCTION 1404f9630 ~FOnlineUserPresenceStatus body=97 status=ok
// SIG undefined ~FOnlineUserPresenceStatus(void)

void FOnlineUserPresenceStatus::~FOnlineUserPresenceStatus(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 3,0);
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404f96a0 FUN_1404f96a0 body=437 status=ok
// SIG undefined FUN_1404f96a0(void)

void FUN_1404f96a0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  *param_1 = &PTR_FUN_143f9d340;
  local_20 = (longlong *)0x0;
  if (param_1 + 0xc != &local_28) {
    param_1[0xc] = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xd,&local_20);
    plVar4 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  FUN_1404ca600(param_1 + 0xe,0);
  local_10 = (longlong *)0x0;
  if (param_1 + 9 != &local_18) {
    param_1[9] = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 10,&local_10);
    plVar4 = local_10;
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
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  TArray<TTLCharaEdit_EditItem,FDefaultAllocator>::~TArray<TTLCharaEdit_EditItem,FDefaultAllocator>
            (param_1 + 0xe);
  plVar4 = (longlong *)param_1[0xd];
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
  plVar4 = (longlong *)param_1[10];
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
  *param_1 = &PTR_FUN_143f76a58;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 4);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  return;
}



// FUNCTION 1404f9860 FUN_1404f9860 body=131 status=ok
// SIG undefined FUN_1404f9860(void)

void FUN_1404f9860(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_143f9b0f8;
  FUN_1405233b0();
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xf);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xd);
  FUN_1404f8d70(param_1 + 0xb);
  TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>::
  ~TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>(param_1 + 9);
  plVar4 = (longlong *)param_1[8];
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



// FUNCTION 1404f98f0 FUN_1404f98f0 body=142 status=ok
// SIG undefined FUN_1404f98f0(void)

void FUN_1404f98f0(undefined8 *param_1)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1f);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1c);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x19);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x16);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x13);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x10);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xd);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 10);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 7);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 4);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  return;
}



// FUNCTION 1404f9980 FUN_1404f9980 body=248 status=ok
// SIG undefined FUN_1404f9980(void)

void FUN_1404f9980(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_143f9bcc0;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x37);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x34);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x31);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2e);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2b);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x28);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x25);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x22);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1f);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1c);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x19);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x16);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x13);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x10);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xd);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 10);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 7);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 4);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  return;
}



// FUNCTION 1404f9a80 FUN_1404f9a80 body=128 status=ok
// SIG undefined FUN_1404f9a80(void)

void FUN_1404f9a80(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__143f9ca98;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x19);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x16);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x13);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x10);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xd);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 10);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 7);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 4);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  return;
}



// FUNCTION 1404f9b00 FUN_1404f9b00 body=118 status=ok
// SIG undefined FUN_1404f9b00(void)

void FUN_1404f9b00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_143f9b018;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  FUN_1404af4a0(param_1 + 8,0);
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 1);
  return;
}



// FUNCTION 1404f9b80 FUN_1404f9b80 body=99 status=ok
// SIG undefined FUN_1404f9b80(void)

void FUN_1404f9b80(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x1980);
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
  FUN_1404bfa80(param_1);
  return;
}



// FUNCTION 1404f9bf0 operator= body=196 status=ok
// SIG undefined operator=(void)

longlong *
TArray<TSharedPtr<FSlateWindowElementList::FDeferredPaint,1>,TSizedDefaultAllocator<32>_>::operator=
          (longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_1 != param_2) {
    lVar5 = *param_1;
    iVar6 = (int)param_1[1];
    if (iVar6 != 0) {
      plVar7 = (longlong *)(lVar5 + 8);
      do {
        plVar4 = (longlong *)*plVar7;
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
        plVar7 = plVar7 + 2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      lVar5 = *param_1;
    }
    if (lVar5 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 1404f9cc0 operator= body=123 status=ok
// SIG undefined operator=(void)

longlong TMap<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
         ::operator=(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_1404f9f20();
    if (*(longlong *)(param_2 + 0x40) == 0) {
      ::_guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x38),(void *)(param_2 + 0x38),4);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FMemory::Free();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 1404f9d40 operator= body=469 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

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
    TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = ConditionalRehash(param_1,iVar9);
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
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1404f9e7d;
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
LAB_1404f9e7d:
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
        Emplace<TTuple<FName,FVariantData>_const_&>
                  (param_1,local_res8,*param_2 + (longlong)iStack_3c * 0x28,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 1404f9f20 FUN_1404f9f20 body=685 status=ok
// SIG undefined FUN_1404f9f20(void)

longlong * FUN_1404f9f20(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint *puVar8;
  uint uVar9;
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
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    iStack_60 = 0;
    if (uVar1 != 0) {
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = _Dst;
      }
      uVar2 = *puVar8;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar4 = local_78 + 1;
        bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar4;
        if (bVar3) goto LAB_1404f9ffc;
        uVar2 = puVar8[lVar6 + 1];
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
LAB_1404f9ffc:
        uStack_64 = uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar9 = uVar2 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar2;
    if (uVar2 != uVar1) {
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = _Dst;
      }
      uVar5 = puVar8[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
      iVar4 = (int)uVar2 >> 5;
      while (uVar5 == 0) {
        uVar9 = uVar9 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_1404fa0b1;
        uVar5 = puVar8[(longlong)iVar4 + 1];
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
      uStack_64 = (uVar9 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_1404fa0b1:
        uStack_64 = uVar1;
      }
    }
    while ((uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      plVar7 = (longlong *)((longlong)(int)uStack_3c * 0x30 + *param_1);
      FVariantData::Empty(plVar7 + 2);
      if (*plVar7 != 0) {
        FMemory::Free();
      }
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



// FUNCTION 1404fa1d0 operator>> body=132 status=ok
// SIG undefined operator>>(void)

longlong * operator>>(longlong *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  
  if (((char)param_1[2] == '\0') && (*(int *)((longlong)param_1 + 0xc) + 8 <= (int)param_1[1])) {
    puVar1 = (undefined1 *)((longlong)*(int *)((longlong)param_1 + 0xc) + *param_1);
    *param_2 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar1[1]),
                                                                     puVar1[2]),puVar1[3]),puVar1[4]
                                                  ),puVar1[5]),puVar1[6]),puVar1[7]);
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 8;
    return param_1;
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}



// FUNCTION 1404fa260 FUN_1404fa260 body=101 status=ok
// SIG undefined FUN_1404fa260(void)

undefined8 FUN_1404fa260(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  uint local_res8 [2];
  uint local_res10 [2];
  
  (**(code **)(*param_1 + 0x28))(param_1,local_res10);
  (**(code **)(*param_2 + 0x28))(param_2,local_res8);
  if (local_res10[0] == local_res8[0]) {
    iVar1 = (**(code **)(*param_2 + 0x38))(param_2);
    iVar2 = (**(code **)(*param_1 + 0x38))(param_1);
    if (iVar2 == iVar1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1404fa2d0 FUN_1404fa2d0 body=70 status=ok
// SIG undefined FUN_1404fa2d0(void)

ulonglong FUN_1404fa2d0(longlong param_1,longlong param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  
  uVar2 = (*(code *)**(undefined8 **)(param_2 + 8))(param_2 + 8,param_1 + 8);
  if ((char)uVar2 != '\0') {
    uVar1 = *(ushort *)(param_2 + 0x28);
    uVar2 = (ulonglong)uVar1;
    if (*(ushort *)(param_1 + 0x28) == uVar1) {
      return CONCAT71((uint7)(byte)(uVar1 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1404fa320 FUN_1404fa320 body=499 status=ok
// SIG undefined FUN_1404fa320(void)

void FUN_1404fa320(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  longlong *plVar6;
  char cVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  LARGE_INTEGER local_res8;
  undefined2 *local_88;
  int local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  longlong local_30 [2];
  undefined4 local_20;
  
  FUN_140512290(*param_1,&local_88,param_1 + 1,param_1 + 3);
  lVar4 = param_1[5];
  uStack_70 = (undefined4)param_1[6];
  puVar11 = &DAT_143f3eda8;
  if (local_80 != 0) {
    puVar11 = local_88;
  }
  local_78._0_4_ = (undefined4)lVar4;
  local_78._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  uStack_4c = uStack_6c;
  local_78 = lVar4;
  uStack_50 = uStack_70;
  uVar9 = FUN_1415c3d50();
  cVar7 = FUN_14167ef40(&local_58,puVar11,uVar9,4);
  if (cVar7 == '\0') {
    uVar8 = 2;
  }
  else {
    FUN_140511ea0(*param_1,local_68,param_1 + 1,param_1 + 3);
    uVar8 = FUN_1404ff630(*param_1,&local_88,local_68);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
  }
  local_48 = *param_1;
  local_40 = param_1[1];
  local_38 = (longlong *)param_1[2];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  FString::FString(local_30,param_1 + 3);
  uVar9 = *(undefined8 *)(*(longlong *)(*param_1 + 0x98) + 0x148);
  local_20 = uVar8;
  puVar10 = (undefined8 *)operator_new(0x40);
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    *puVar10 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res8);
    dVar5 = (double)local_res8.QuadPart * DAT_1468b02f8;
    *puVar10 = &PTR_FUN_143f7dc00;
    puVar10[1] = dVar5 + 16777216.0;
    puVar10[2] = local_48;
    puVar10[3] = local_40;
    puVar10[4] = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    FString::FString(puVar10 + 5,local_30);
    *(undefined4 *)(puVar10 + 7) = local_20;
  }
  FOnlineAsyncTaskManager::AddToOutQueue(uVar9,puVar10);
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  plVar6 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404fa520 FUN_1404fa520 body=445 status=ok
// SIG undefined FUN_1404fa520(void)

void FUN_1404fa520(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  double dVar10;
  LARGE_INTEGER local_res8;
  longlong local_48 [2];
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  longlong local_20 [2];
  int local_10;
  
  plVar7 = (longlong *)FUN_1415c3d50();
  puVar8 = (undefined8 *)FUN_140511ea0(*param_1,local_48,param_1 + 1,param_1 + 3);
  if (*(int *)(puVar8 + 1) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*puVar8;
  }
  cVar6 = (**(code **)(*plVar7 + 0x30))(plVar7,puVar9,1,0,1);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_38 = *param_1;
  local_30 = param_1[1];
  local_28 = (longlong *)param_1[2];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  FString::FString(local_20,param_1 + 3);
  uVar4 = *(undefined8 *)(*(longlong *)(*param_1 + 0x98) + 0x148);
  local_10 = (cVar6 == '\0') + 1;
  puVar8 = (undefined8 *)operator_new(0x40);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    *puVar8 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res8);
    dVar10 = (double)local_res8.QuadPart * DAT_1468b02f8;
    *puVar8 = &PTR_FUN_143f7dc80;
    puVar8[1] = dVar10 + 16777216.0;
    puVar8[2] = local_38;
    puVar8[3] = local_30;
    puVar8[4] = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
    FString::FString(puVar8 + 5,local_20);
    *(int *)(puVar8 + 7) = local_10;
  }
  FOnlineAsyncTaskManager::AddToOutQueue(uVar4,puVar8);
  if (local_20[0] != 0) {
    FMemory::Free();
  }
  plVar7 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  return;
}



// FUNCTION 1404fa6e0 FUN_1404fa6e0 body=2596 status=ok
// SIG undefined FUN_1404fa6e0(void)

void FUN_1404fa6e0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  undefined2 *puVar12;
  ulonglong *puVar13;
  int iVar14;
  longlong *plVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  wchar_t *pwVar21;
  undefined2 *puVar22;
  longlong *plVar23;
  longlong *plVar24;
  wchar_t *pwVar25;
  double dVar26;
  undefined1 local_res10 [8];
  int local_res18;
  LARGE_INTEGER local_res20;
  longlong *local_178;
  longlong *local_170;
  undefined8 local_168;
  longlong *local_160;
  int local_158;
  int local_154;
  longlong *local_150;
  longlong *local_148;
  int local_140;
  DWORD DStack_13c;
  longlong *local_138;
  longlong *local_130;
  ulonglong local_128;
  wchar_t *local_120;
  undefined8 local_118;
  wchar_t *local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined2 *local_f0;
  int local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  longlong *local_b0;
  int local_a8;
  wchar_t *local_a0;
  int local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined2 *local_88;
  undefined2 *local_80;
  undefined1 local_78 [8];
  longlong local_70 [2];
  longlong local_60 [4];
  
  puVar8 = (undefined8 *)
           (**(code **)(*(longlong *)param_1[1] + 0x28))((longlong *)param_1[1],local_60);
  if (*(int *)(puVar8 + 1) == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)*puVar8;
  }
  puVar8 = (undefined8 *)FUN_14167d0d0(local_70);
  if (*(int *)(puVar8 + 1) == 0) {
    puVar22 = &DAT_143f3eda8;
  }
  else {
    puVar22 = (undefined2 *)*puVar8;
  }
  FString::PrintfImpl(&local_f0,L"%s/SaveGames/%s",puVar22,puVar12);
  if (local_70[0] != 0) {
    FMemory::Free();
  }
  if (local_60[0] != 0) {
    FMemory::Free();
  }
  local_138 = (longlong *)0x0;
  local_148 = (longlong *)0x0;
  local_res18 = 0;
  local_140 = 0;
  DStack_13c = 0;
  local_res20.s.LowPart = 0;
  local_178 = (longlong *)0x0;
  local_160 = (longlong *)0x0;
  local_154 = 0;
  local_170 = (longlong *)0x0;
  local_168 = 0;
  plVar9 = (longlong *)FUN_1415c3d50();
  puVar12 = &DAT_143f3eda8;
  if (local_e8 != 0) {
    puVar12 = local_f0;
  }
  (**(code **)(*plVar9 + 0x70))(plVar9,&local_170,puVar12,L"*.sav");
  local_100 = (longlong *)0x0;
  local_f8 = 0;
  plVar9 = (longlong *)FUN_1415c3d50();
  puVar12 = &DAT_143f3eda8;
  if (local_e8 != 0) {
    puVar12 = local_f0;
  }
  (**(code **)(*plVar9 + 0x70))(plVar9,&local_100,puVar12,L"*.tmp");
  plVar15 = (longlong *)0x0;
  local_128 = 0;
  plVar10 = local_170 + (longlong)(int)local_168 * 2;
  local_150 = (longlong *)0x0;
  local_130 = (longlong *)0x0;
  plVar9 = plVar15;
  plVar24 = local_100;
  iVar7 = 0;
  for (plVar23 = local_170; local_100 = plVar24, plVar23 != plVar10; plVar23 = plVar23 + 2) {
    iVar11 = -1;
    pwVar16 = (wchar_t *)0x0;
    iVar6 = (int)plVar23[1];
    iVar7 = iVar6 + -5;
    if (iVar6 == 0) {
      iVar7 = -4;
      pwVar25 = L"";
    }
    else {
      pwVar25 = (wchar_t *)*plVar23;
      iVar11 = iVar6 + -1;
    }
    if (iVar6 == 0) {
      iVar11 = 0;
    }
    if (iVar7 < 0) {
      iVar11 = 0;
    }
    else if (iVar7 < iVar11) {
      iVar11 = iVar7;
    }
    local_120 = (wchar_t *)0x0;
    local_118 = (wchar_t *)(ulonglong)(iVar11 + 1);
    if (iVar11 == 0) {
      local_118 = pwVar16;
    }
    iVar7 = (int)local_118;
    if (0 < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_120,0);
      pwVar16 = local_120;
      iVar7 = (int)local_118;
      plVar15 = local_150;
      if (0 < (int)local_118) {
        wcsncpy(local_120,pwVar25,(longlong)iVar11);
        pwVar16[iVar11] = L'\0';
        plVar15 = local_150;
      }
    }
    uVar4 = local_128;
    lVar17 = (longlong)(int)local_128;
    iVar6 = (int)local_128 + 1;
    local_128 = CONCAT44(local_128._4_4_,iVar6);
    if ((int)plVar9 < iVar6) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_130,uVar4 & 0xffffffff);
      plVar9 = (longlong *)(local_128 >> 0x20);
      local_150 = local_130;
      plVar15 = local_130;
    }
    uVar5 = local_118._4_4_;
    local_120 = (wchar_t *)0x0;
    local_118 = (wchar_t *)0x0;
    plVar15[lVar17 * 2] = (longlong)pwVar16;
    *(int *)(plVar15 + lVar17 * 2 + 1) = iVar7;
    *(undefined4 *)((longlong)plVar15 + lVar17 * 0x10 + 0xc) = uVar5;
    plVar24 = local_100;
    iVar7 = local_res18;
  }
  plVar9 = plVar24 + (longlong)(int)local_f8 * 2;
  if (plVar24 != plVar9) {
    lVar17 = (longlong)(int)local_128;
    do {
      iVar11 = -1;
      pwVar16 = (wchar_t *)0x0;
      iVar6 = (int)plVar24[1];
      iVar7 = iVar6 + -5;
      if (iVar6 == 0) {
        iVar7 = -4;
        pwVar25 = L"";
      }
      else {
        pwVar25 = (wchar_t *)*plVar24;
        iVar11 = iVar6 + -1;
      }
      if (iVar6 == 0) {
        iVar11 = 0;
      }
      if (iVar7 < 0) {
        iVar11 = 0;
      }
      else if (iVar7 < iVar11) {
        iVar11 = iVar7;
      }
      local_a0 = (wchar_t *)0x0;
      local_94 = 0;
      pwVar21 = (wchar_t *)(ulonglong)(iVar11 + 1);
      if (iVar11 == 0) {
        pwVar21 = pwVar16;
      }
      local_98 = (int)pwVar21;
      uVar4 = local_168;
      plVar23 = local_150;
      if ((0 < local_98) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,0), pwVar16 = local_a0,
         uVar4 = local_168, plVar23 = local_150, 0 < local_98)) {
        wcsncpy(local_a0,pwVar25,(longlong)iVar11);
        pwVar16[iVar11] = L'\0';
        uVar4 = local_168;
        plVar23 = local_150;
      }
      for (; plVar23 != plVar15 + lVar17 * 2; plVar23 = plVar23 + 2) {
        if ((int)plVar23[1] == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = (undefined2 *)*plVar23;
        }
        local_168 = uVar4;
        iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12);
        if (iVar7 == 0) goto LAB_1404faa52;
        uVar4 = local_168;
      }
      local_168._0_4_ = (int)uVar4;
      lVar18 = (longlong)(int)local_168;
      local_168._0_4_ = (int)local_168 + 1;
      local_168._4_4_ = (int)(uVar4 >> 0x20);
      if (local_168._4_4_ < (int)local_168) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_170,uVar4 & 0xffffffff);
      }
      FString::FString(local_170 + lVar18 * 2);
LAB_1404faa52:
      if (pwVar16 != (wchar_t *)0x0) {
        FMemory::Free(pwVar16);
      }
      plVar24 = plVar24 + 2;
      iVar7 = local_res18;
    } while (plVar24 != plVar9);
  }
  local_158 = 0;
  if ((0 < (int)local_168) && ((int)local_168 != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (&local_160);
    local_178 = local_160;
  }
  plVar23 = local_170 + (longlong)(int)local_168 * 2;
  plVar9 = local_178;
  iVar6 = local_158;
  for (plVar15 = local_170; plVar15 != plVar23; plVar15 = plVar15 + 2) {
    local_158 = iVar6 + 1;
    if (local_154 < local_158) {
      TArray<`anonymous_namespace'::FLogCategoryPtrs,FDefaultAllocator>::ResizeGrow
                (&local_160,iVar6);
      local_178 = local_160;
      plVar9 = local_160;
    }
    plVar24 = plVar9 + (longlong)iVar6 * 3;
    plVar24[2] = 0;
    *plVar24 = 0;
    plVar24[1] = 0;
    if (plVar24 != plVar15) {
      iVar6 = (int)plVar15[1];
      pvVar3 = (void *)*plVar15;
      *(int *)(plVar24 + 1) = iVar6;
      plVar9 = local_178;
      if (iVar6 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar24,iVar6,0);
        _guard_xfg_dispatch_icall_nop((void *)*plVar24,pvVar3,(longlong)iVar6 * 2);
      }
    }
    local_88 = &DAT_143f3eda8;
    if (local_e8 != 0) {
      local_88 = local_f0;
    }
    if ((int)plVar15[1] == 0) {
      local_80 = &DAT_143f3eda8;
    }
    else {
      local_80 = (undefined2 *)*plVar15;
    }
    local_e0 = 0;
    local_d8 = 0;
    FPaths::CombineInternal(&local_e0,&local_88,2);
    plVar10 = (longlong *)FUN_1415c3d50();
    plVar10 = (longlong *)(**(code **)(*plVar10 + 0xb0))(plVar10,local_78);
    plVar24[2] = *plVar10;
    if (local_e0 != 0) {
      FMemory::Free();
    }
    iVar6 = local_158;
  }
  local_res10[0] = 0;
  local_158 = iVar6;
  FUN_1404f6790(plVar9,(longlong)iVar6,(ulonglong)param_1 & 0xff,local_res10);
  plVar15 = plVar9 + (longlong)iVar6 * 3;
  iVar6 = local_res18;
  for (; plVar9 != plVar15; plVar9 = plVar9 + 3) {
    pwVar16 = (wchar_t *)0x0;
    iVar2 = (int)plVar9[1];
    iVar6 = iVar2 + -1;
    iVar11 = iVar2 + -5;
    if (iVar2 == 0) {
      iVar6 = -1;
      iVar11 = -4;
      pwVar25 = L"";
    }
    else {
      pwVar25 = (wchar_t *)*plVar9;
    }
    iVar14 = 0;
    if (iVar2 == 0) {
      iVar6 = iVar14;
    }
    if ((-1 < iVar11) && (iVar14 = iVar6, iVar11 < iVar6)) {
      iVar14 = iVar11;
    }
    local_110 = (wchar_t *)0x0;
    local_108 = (wchar_t *)(ulonglong)(iVar14 + 1);
    if (iVar14 == 0) {
      local_108 = pwVar16;
    }
    iVar6 = (int)local_108;
    if (0 < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_110,0);
      pwVar16 = local_110;
      iVar6 = (int)local_108;
      if (0 < (int)local_108) {
        wcsncpy(local_110,pwVar25,(longlong)iVar14);
        pwVar16[iVar14] = L'\0';
      }
    }
    local_140 = iVar7 + 1;
    if ((int)local_res20.s.LowPart < local_140) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_148,iVar7);
      local_138 = local_148;
      local_res20.s.LowPart = DStack_13c;
    }
    uVar5 = local_108._4_4_;
    puVar13 = (ulonglong *)(local_138 + (longlong)iVar7 * 2);
    local_110 = (wchar_t *)0x0;
    local_108 = (wchar_t *)0x0;
    *puVar13 = (ulonglong)pwVar16;
    *(int *)(puVar13 + 1) = iVar6;
    *(undefined4 *)((longlong)puVar13 + 0xc) = uVar5;
    iVar6 = local_140;
    iVar7 = local_140;
  }
  local_d0 = *param_1;
  local_c0 = (longlong *)param_1[2];
  local_c8 = param_1[1];
  local_res18 = iVar6;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
    UNLOCK();
    local_res18 = local_140;
    local_178 = local_160;
    local_150 = local_130;
    local_138 = local_148;
    iVar7 = local_140;
  }
  plVar9 = local_138;
  local_b8 = 1;
  local_b0 = (longlong *)0x0;
  local_a8 = iVar7;
  if (iVar7 != 0) {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_b0,iVar7,0);
    lVar17 = (longlong)local_b0 - (longlong)plVar9;
    do {
      *(undefined8 *)(lVar17 + (longlong)plVar9) = 0;
      iVar6 = (int)plVar9[1];
      pvVar3 = (void *)*plVar9;
      *(int *)(lVar17 + 8 + (longlong)plVar9) = iVar6;
      if (iVar6 == 0) {
        *(undefined4 *)(lVar17 + 0xc + (longlong)plVar9) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                  ((undefined8 *)(lVar17 + (longlong)plVar9),iVar6,0);
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(lVar17 + (longlong)plVar9),pvVar3,(longlong)iVar6 * 2);
      }
      plVar9 = plVar9 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar7 = local_a8;
  plVar9 = local_c0;
  uVar20 = *(undefined8 *)(*(longlong *)(*param_1 + 0x98) + 0x148);
  local_90 = uVar20;
  puVar8 = (undefined8 *)operator_new(0x40);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    *puVar8 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res20);
    dVar26 = (double)CONCAT44(local_res20.s.HighPart,local_res20.s.LowPart) * DAT_1468b02f8;
    *puVar8 = &PTR__scalar_deleting_destructor__143f7dd00;
    puVar8[1] = dVar26 + 16777216.0;
    puVar8[2] = local_d0;
    puVar8[3] = local_c8;
    puVar8[4] = plVar9;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      local_res18 = local_140;
      local_138 = local_148;
      local_178 = local_160;
      local_150 = local_130;
      plVar9 = local_c0;
      iVar7 = local_a8;
    }
    *(undefined4 *)(puVar8 + 5) = local_b8;
    puVar8[6] = 0;
    *(int *)(puVar8 + 7) = iVar7;
    if (iVar7 == 0) {
      *(undefined4 *)((longlong)puVar8 + 0x3c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar8 + 6,iVar7,0);
      puVar19 = (undefined8 *)puVar8[6];
      plVar15 = local_b0;
      iVar6 = iVar7;
      do {
        *puVar19 = 0;
        iVar11 = (int)plVar15[1];
        pvVar3 = (void *)*plVar15;
        *(int *)(puVar19 + 1) = iVar11;
        if (iVar11 == 0) {
          *(undefined4 *)((longlong)puVar19 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar19,iVar11,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar19,pvVar3,(longlong)iVar11 * 2);
        }
        puVar19 = puVar19 + 2;
        plVar15 = plVar15 + 2;
        iVar6 = iVar6 + -1;
        uVar20 = local_90;
      } while (iVar6 != 0);
    }
  }
  FOnlineAsyncTaskManager::AddToOutQueue(uVar20,puVar8);
  plVar23 = local_b0;
  plVar15 = local_b0;
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar15 != 0) {
      FMemory::Free();
    }
    plVar15 = plVar15 + 2;
  }
  if (plVar23 != (longlong *)0x0) {
    FMemory::Free(plVar23);
  }
  plVar15 = local_c0;
  plVar23 = local_138;
  plVar24 = local_150;
  iVar7 = local_res18;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar9 + 1;
    lVar17 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    plVar23 = local_148;
    plVar24 = local_130;
    local_178 = local_160;
    iVar7 = local_140;
    if ((int)lVar17 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar23 = local_148;
      plVar24 = local_130;
      local_178 = local_160;
      iVar7 = local_140;
      if (iVar6 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
        plVar23 = local_148;
        plVar24 = local_130;
        local_178 = local_160;
        iVar7 = local_140;
      }
    }
  }
  plVar9 = plVar24;
  for (iVar6 = (int)local_128; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (plVar24 != (longlong *)0x0) {
    FMemory::Free(plVar24);
  }
  plVar9 = local_100;
  for (iVar6 = (int)local_f8; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_100 != (longlong *)0x0) {
    FMemory::Free(local_100);
  }
  plVar9 = local_170;
  for (iVar6 = (int)local_168; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  plVar9 = local_178;
  iVar6 = local_158;
  if (local_170 != (longlong *)0x0) {
    FMemory::Free(local_170);
    iVar6 = local_158;
  }
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 3;
  }
  plVar9 = plVar23;
  if (local_178 != (longlong *)0x0) {
    FMemory::Free(local_178);
  }
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (plVar23 != (longlong *)0x0) {
    FMemory::Free(plVar23);
  }
  if (local_f0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404fb110 FUN_1404fb110 body=1273 status=ok
// SIG undefined FUN_1404fb110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1404fb110(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  char *pcVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_b8 [32];
  undefined2 local_98;
  longlong *local_88;
  longlong local_80;
  ulonglong local_78;
  undefined8 *local_70;
  longlong *local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  plVar5 = (longlong *)
           (**(code **)(**(longlong **)(*param_1 + 0x420) + 0x50))
                     (*(longlong **)(*param_1 + 0x420),local_48);
  plVar2 = (longlong *)plVar5[1];
  plVar5 = (longlong *)*plVar5;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  local_88 = plVar5;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_40 + 1;
    lVar13 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
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
  if (plVar5 == (longlong *)0x0) goto LAB_1404fb5a2;
  puVar6 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
  plVar7 = (longlong *)(**(code **)(*(longlong *)*puVar6 + 0x10))((longlong *)*puVar6,local_60);
  if (*plVar7 == param_1[2]) {
    if ((*(uint *)(param_1 + 1) & 0x41) == 0) goto LAB_1404fb5a2;
    puVar6 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamFriends_1461fc730)
    ;
    pcVar8 = (char *)(*(code *)**(undefined8 **)*puVar6)();
    puVar6 = (undefined8 *)operator_new(0x20);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar9 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
      puVar9 = (undefined8 *)
               (**(code **)(*(longlong *)*puVar9 + 0x10))((longlong *)*puVar9,local_58);
      local_50 = *puVar9;
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_FUN_143f9a6c8;
      puVar6[3] = local_50;
    }
    plVar10 = (longlong *)operator_new(0x18);
    plVar7 = (longlong *)0x0;
    if (plVar10 != (longlong *)0x0) {
      *(undefined4 *)(plVar10 + 1) = 1;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
      *plVar10 = (longlong)&PTR_FUN_143f7de48;
      plVar10[2] = (longlong)puVar6;
      plVar7 = plVar10;
    }
    plVar10 = puVar6 + 1;
    if (puVar6 == (undefined8 *)0x0) {
      plVar10 = (longlong *)0x0;
    }
    local_70 = puVar6;
    local_68 = plVar7;
    if (plVar10 != (longlong *)0x0) {
      if ((*plVar10 != 0) && (plVar10[1] != 0)) {
        piVar1 = (int *)(plVar10[1] + 8);
        LOCK();
        iVar4 = *piVar1;
        if (iVar4 == 0) {
          *piVar1 = 0;
          iVar4 = 0;
        }
        UNLOCK();
        if (0 < iVar4) goto LAB_1404fb359;
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      *plVar10 = (longlong)puVar6;
      plVar5 = (longlong *)plVar10[1];
      if (plVar7 != plVar5) {
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
          UNLOCK();
          plVar5 = (longlong *)plVar10[1];
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        plVar10[1] = (longlong)plVar7;
      }
      plVar5 = local_88;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar7 + 1;
        lVar13 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar5 = local_88;
          if (iVar4 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
            plVar5 = local_88;
          }
        }
      }
    }
LAB_1404fb359:
    local_80 = 0;
    local_78 = 0;
    if ((pcVar8 != (char *)0x0) && (*pcVar8 != '\0')) {
      lVar13 = -1;
      do {
        lVar13 = lVar13 + 1;
      } while (pcVar8[lVar13] != '\0');
      uVar12 = (int)lVar13 + 1;
      local_78 = (ulonglong)uVar12;
      if (0 < (int)uVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,0);
      }
      local_98 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>(local_80,uVar12,pcVar8,uVar12);
    }
    (**(code **)(*plVar5 + 0x1e0))(plVar5,&local_70,&local_80);
    plVar5 = local_68;
    if (local_80 != 0) {
      FMemory::Free();
      plVar5 = local_68;
    }
  }
  else {
    if ((*(uint *)(param_1 + 1) & 0x40) == 0) goto LAB_1404fb5a2;
    puVar6 = (undefined8 *)operator_new(0x20);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      lVar13 = param_1[2];
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = &PTR_FUN_143f9a6c8;
      puVar6[3] = lVar13;
    }
    plVar10 = (longlong *)0x0;
    plVar7 = (longlong *)operator_new(0x18);
    plVar5 = plVar10;
    if (plVar7 != (longlong *)0x0) {
      *(undefined4 *)(plVar7 + 1) = 1;
      *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
      *plVar7 = (longlong)&PTR_FUN_143f7de48;
      plVar7[2] = (longlong)puVar6;
      plVar5 = plVar7;
    }
    plVar7 = puVar6 + 1;
    if (puVar6 == (undefined8 *)0x0) {
      plVar7 = plVar10;
    }
    if (plVar7 != (longlong *)0x0) {
      if ((*plVar7 != 0) && (plVar7[1] != 0)) {
        piVar1 = (int *)(plVar7[1] + 8);
        LOCK();
        iVar4 = *piVar1;
        if (iVar4 == 0) {
          *piVar1 = 0;
          iVar4 = 0;
        }
        UNLOCK();
        if (0 < iVar4) goto LAB_1404fb501;
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      *plVar7 = (longlong)puVar6;
      plVar11 = (longlong *)plVar7[1];
      if (plVar5 != plVar11) {
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
          UNLOCK();
          plVar11 = (longlong *)plVar7[1];
        }
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
        plVar7[1] = (longlong)plVar5;
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar5 + 1;
        lVar13 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
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
    }
LAB_1404fb501:
    plVar7 = local_88;
    plVar11 = plVar10;
    if (0 < (int)local_88[0x24]) {
      do {
        cVar3 = (**(code **)**(undefined8 **)((longlong)plVar11 + plVar7[0x23]))
                          (*(undefined8 **)((longlong)plVar11 + plVar7[0x23]),puVar6);
        if (cVar3 == '\0') {
          plVar10 = (longlong *)(ulonglong)((int)plVar10 + 1);
          plVar11 = plVar11 + 2;
        }
        else {
          TArray<TSharedPtr<FUdpReassembledMessage,1>,FDefaultAllocator>::RemoveAtSwapImpl
                    (plVar7 + 0x23,plVar10,1,1);
        }
      } while ((int)plVar10 < (int)plVar7[0x24]);
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar5 + 1;
    lVar13 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
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
LAB_1404fb5a2:
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar2 + 1;
    lVar13 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
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
  return;
}



// FUNCTION 1404fb610 FUN_1404fb610 body=581 status=ok
// SIG undefined FUN_1404fb610(void)

void FUN_1404fb610(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  void *_Src;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  size_t sVar9;
  void *_Src_00;
  int iVar10;
  double dVar11;
  LARGE_INTEGER local_res8;
  void *local_88;
  ulonglong local_80;
  longlong local_78 [2];
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50 [2];
  int local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  
  _Src_00 = (void *)0x0;
  local_88 = (void *)0x0;
  local_80 = 0;
  puVar7 = (undefined8 *)FUN_140511ea0(*param_1,local_78,param_1 + 1,param_1 + 3);
  if (*(int *)(puVar7 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*puVar7;
  }
  cVar6 = FUN_141676460(&local_88,puVar8,0);
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  local_68 = *param_1;
  local_60 = param_1[1];
  iVar10 = (cVar6 == '\0') + 1;
  local_58 = (longlong *)param_1[2];
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  FString::FString(local_50,param_1 + 3);
  _Src = local_88;
  sVar9 = (size_t)(int)local_80;
  local_38 = (void *)0x0;
  local_30 = (int)local_80;
  local_40 = iVar10;
  if ((int)local_80 == 0) {
    local_2c = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_38,local_80 & 0xffffffff,0);
    _Src_00 = local_38;
    _guard_xfg_dispatch_icall_nop(local_38,_Src,sVar9);
  }
  uVar3 = *(undefined8 *)(*(longlong *)(*param_1 + 0x98) + 0x148);
  puVar7 = (undefined8 *)operator_new(0x50);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    *puVar7 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res8);
    dVar11 = (double)local_res8.QuadPart * DAT_1468b02f8;
    *puVar7 = &PTR__scalar_deleting_destructor__143f7db80;
    puVar7[1] = dVar11 + 16777216.0;
    puVar7[2] = local_68;
    puVar7[3] = local_60;
    puVar7[4] = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    FString::FString(puVar7 + 5,local_50);
    _Src_00 = local_38;
    sVar9 = (size_t)local_30;
    *(int *)(puVar7 + 7) = local_40;
    puVar7[8] = 0;
    *(int *)(puVar7 + 9) = local_30;
    if (local_30 == 0) {
      *(undefined4 *)((longlong)puVar7 + 0x4c) = 0;
    }
    else {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar7 + 8,local_30,0);
      _guard_xfg_dispatch_icall_nop((void *)puVar7[8],_Src_00,sVar9);
    }
  }
  FOnlineAsyncTaskManager::AddToOutQueue(uVar3,puVar7);
  if (_Src_00 != (void *)0x0) {
    FMemory::Free(_Src_00);
  }
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  plVar5 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404fb860 FUN_1404fb860 body=659 status=ok
// SIG undefined FUN_1404fb860(void)

void FUN_1404fb860(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  double dVar13;
  LARGE_INTEGER local_res8;
  undefined2 *local_a8;
  int local_a0;
  undefined2 *local_98;
  int local_90;
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40 [2];
  undefined4 local_30;
  
  FUN_140512290(*param_1,&local_a8,param_1 + 1,param_1 + 3);
  plVar8 = (longlong *)FUN_1415c3d50();
  puVar12 = &DAT_143f3eda8;
  if (local_a0 != 0) {
    puVar12 = local_a8;
  }
  cVar6 = (**(code **)(*plVar8 + 0x48))(plVar8,puVar12);
  if (cVar6 == '\0') {
    uVar7 = 4;
  }
  else {
    if ((int)param_1[4] == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)param_1[3];
    }
    puVar9 = (undefined8 *)
             (**(code **)(*(longlong *)param_1[1] + 0x28))((longlong *)param_1[1],local_68);
    if (*(int *)(puVar9 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*puVar9;
    }
    puVar9 = (undefined8 *)FUN_14167d0d0(local_78);
    if (*(int *)(puVar9 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*puVar9;
    }
    FString::PrintfImpl(&local_98,L"%s/SaveGames/%s",puVar11,puVar10);
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    puVar10 = &DAT_143f3eda8;
    if (local_90 != 0) {
      puVar10 = local_98;
    }
    FString::PrintfImpl(local_88,L"%s/%s.sav",puVar10,puVar12);
    if (local_98 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    uVar7 = FUN_1404ff630(*param_1,&local_a8,local_88);
    if (local_88[0] != 0) {
      FMemory::Free();
    }
  }
  local_58 = *param_1;
  local_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  FString::FString(local_40,param_1 + 3);
  uVar4 = *(undefined8 *)(*(longlong *)(*param_1 + 0x98) + 0x148);
  local_30 = uVar7;
  puVar9 = (undefined8 *)operator_new(0x40);
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    *puVar9 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res8);
    dVar13 = (double)local_res8.QuadPart * DAT_1468b02f8;
    *puVar9 = &PTR_FUN_143f9e900;
    puVar9[1] = dVar13 + 16777216.0;
    puVar9[2] = local_58;
    puVar9[3] = local_50;
    puVar9[4] = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    FString::FString(puVar9 + 5,local_40);
    *(undefined4 *)(puVar9 + 7) = local_30;
  }
  FOnlineAsyncTaskManager::AddToOutQueue(uVar4,puVar9);
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  plVar8 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  if (local_a8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404fbb00 FUN_1404fbb00 body=581 status=ok
// SIG undefined FUN_1404fbb00(void)

void FUN_1404fbb00(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  plVar6 = (longlong *)
           (**(code **)(**(longlong **)(*param_1 + 0x420) + 0x50))
                     (*(longlong **)(*param_1 + 0x420),local_38);
  plVar2 = (longlong *)plVar6[1];
  lVar3 = *plVar6;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_30 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (lVar3 == 0) goto LAB_1404fbd01;
  plVar6 = (longlong *)operator_new(0x20);
  plVar8 = (longlong *)0x0;
  local_48 = plVar8;
  if (plVar6 != (longlong *)0x0) {
    lVar4 = param_1[1];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (longlong)&PTR_FUN_143f9a6c8;
    plVar6[3] = lVar4;
    local_48 = plVar6;
  }
  plVar7 = (longlong *)operator_new(0x18);
  plVar6 = plVar8;
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_143f7de48;
    plVar7[2] = (longlong)local_48;
    plVar6 = plVar7;
  }
  plVar7 = local_48 + 1;
  if (local_48 == (longlong *)0x0) {
    plVar7 = plVar8;
  }
  local_40 = plVar6;
  if (plVar7 != (longlong *)0x0) {
    if ((*plVar7 != 0) && (plVar7[1] != 0)) {
      piVar1 = (int *)(plVar7[1] + 8);
      LOCK();
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        *piVar1 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (0 < iVar5) goto LAB_1404fbcaf;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *plVar7 = (longlong)local_48;
    plVar8 = (longlong *)plVar7[1];
    if (plVar6 != plVar8) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar7[1];
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      plVar7[1] = (longlong)plVar6;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar6 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
LAB_1404fbcaf:
  FUN_140511320(lVar3,&local_48);
  plVar6 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_40 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
LAB_1404fbd01:
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 1404fbd50 FUN_1404fbd50 body=455 status=ok
// SIG undefined FUN_1404fbd50(void)

void FUN_1404fbd50(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  undefined4 uVar10;
  double dVar11;
  LARGE_INTEGER local_res8;
  longlong local_58 [2];
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  longlong local_30 [2];
  undefined4 local_20;
  
  plVar7 = (longlong *)FUN_1415c3d50();
  puVar8 = (undefined8 *)FUN_140511ea0(*param_1,local_58,param_1 + 1,param_1 + 3);
  if (*(int *)(puVar8 + 1) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*puVar8;
  }
  cVar6 = (**(code **)(*plVar7 + 0x48))(plVar7,puVar9);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  local_48 = *param_1;
  local_40 = param_1[1];
  uVar10 = 4;
  if (cVar6 != '\0') {
    uVar10 = 1;
  }
  local_38 = (longlong *)param_1[2];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  FString::FString(local_30,param_1 + 3);
  uVar4 = *(undefined8 *)(*(longlong *)(*param_1 + 0x98) + 0x148);
  local_20 = uVar10;
  puVar8 = (undefined8 *)operator_new(0x40);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    *puVar8 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res8);
    dVar11 = (double)local_res8.QuadPart * DAT_1468b02f8;
    *puVar8 = &PTR_FUN_143f7dd80;
    puVar8[1] = dVar11 + 16777216.0;
    puVar8[2] = local_48;
    puVar8[3] = local_40;
    puVar8[4] = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    FString::FString(puVar8 + 5,local_30);
    *(undefined4 *)(puVar8 + 7) = local_20;
  }
  FOnlineAsyncTaskManager::AddToOutQueue(uVar4,puVar8);
  if (local_30[0] != 0) {
    FMemory::Free();
  }
  plVar7 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  return;
}



// FUNCTION 1404fbf60 FUN_1404fbf60 body=70 status=ok
// SIG undefined FUN_1404fbf60(void)

undefined8 * FUN_1404fbf60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9aa28;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1404fbfb0 FUN_1404fbfb0 body=70 status=ok
// SIG undefined FUN_1404fbfb0(void)

undefined8 * FUN_1404fbfb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9a9e8;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1404fc000 FUN_1404fc000 body=70 status=ok
// SIG undefined FUN_1404fc000(void)

undefined8 * FUN_1404fc000(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9aa68;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1404fc050 FUN_1404fc050 body=70 status=ok
// SIG undefined FUN_1404fc050(void)

undefined8 * FUN_1404fc050(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9aaa8;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1404fc0a0 FUN_1404fc0a0 body=70 status=ok
// SIG undefined FUN_1404fc0a0(void)

undefined8 * FUN_1404fc0a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9a9a8;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1404fc0f0 FUN_1404fc0f0 body=70 status=ok
// SIG undefined FUN_1404fc0f0(void)

undefined8 * FUN_1404fc0f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9aae8;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1404fc140 FUN_1404fc140 body=70 status=ok
// SIG undefined FUN_1404fc140(void)

undefined8 * FUN_1404fc140(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9aba8;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1404fc190 FUN_1404fc190 body=70 status=ok
// SIG undefined FUN_1404fc190(void)

undefined8 * FUN_1404fc190(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9ab68;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1404fc1e0 FUN_1404fc1e0 body=70 status=ok
// SIG undefined FUN_1404fc1e0(void)

undefined8 * FUN_1404fc1e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9ab28;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1404fc230 FUN_1404fc230 body=70 status=ok
// SIG undefined FUN_1404fc230(void)

undefined8 * FUN_1404fc230(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9aaa8;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1404fc280 FUN_1404fc280 body=70 status=ok
// SIG undefined FUN_1404fc280(void)

undefined8 * FUN_1404fc280(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9a9e8;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1404fc2d0 FUN_1404fc2d0 body=70 status=ok
// SIG undefined FUN_1404fc2d0(void)

undefined8 * FUN_1404fc2d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9ab68;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1404fc320 FUN_1404fc320 body=70 status=ok
// SIG undefined FUN_1404fc320(void)

undefined8 * FUN_1404fc320(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9a9a8;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1404fc370 FUN_1404fc370 body=70 status=ok
// SIG undefined FUN_1404fc370(void)

undefined8 * FUN_1404fc370(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9a9e8;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1404fc3c0 FUN_1404fc3c0 body=70 status=ok
// SIG undefined FUN_1404fc3c0(void)

undefined8 * FUN_1404fc3c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9aae8;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1404fc410 FUN_1404fc410 body=70 status=ok
// SIG undefined FUN_1404fc410(void)

undefined8 * FUN_1404fc410(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9ab28;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1404fc460 FUN_1404fc460 body=70 status=ok
// SIG undefined FUN_1404fc460(void)

undefined8 * FUN_1404fc460(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9aaa8;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1404fc4b0 FUN_1404fc4b0 body=70 status=ok
// SIG undefined FUN_1404fc4b0(void)

undefined8 * FUN_1404fc4b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9aa28;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1404fc500 FUN_1404fc500 body=70 status=ok
// SIG undefined FUN_1404fc500(void)

undefined8 * FUN_1404fc500(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9ab68;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1404fc550 FUN_1404fc550 body=70 status=ok
// SIG undefined FUN_1404fc550(void)

undefined8 * FUN_1404fc550(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9aba8;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1404fc5a0 FUN_1404fc5a0 body=70 status=ok
// SIG undefined FUN_1404fc5a0(void)

undefined8 * FUN_1404fc5a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9aa68;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1404fc5f0 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAsyncTask<FAsyncAudioDecompressWorker>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9c980;
  FUN_1415b5910(param_1[4]);
  param_1[4] = 0;
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1404fc650 FUN_1404fc650 body=43 status=ok
// SIG undefined FUN_1404fc650(void)

undefined8 * FUN_1404fc650(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1404fc680 FUN_1404fc680 body=43 status=ok
// SIG undefined FUN_1404fc680(void)

undefined8 * FUN_1404fc680(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1404fc6b0 FUN_1404fc6b0 body=43 status=ok
// SIG undefined FUN_1404fc6b0(void)

undefined8 * FUN_1404fc6b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9a360;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1404fc6e0 FUN_1404fc6e0 body=109 status=ok
// SIG undefined FUN_1404fc6e0(void)

undefined8 * FUN_1404fc6e0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  param_1[1] = &PTR_FUN_143f73cd8;
  plVar3 = (longlong *)param_1[3];
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
  *param_1 = &PTR_FUN_143f9a360;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1404fc750 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TIndirectTextData<FTextHistory_StringTableEntry>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__143f9a8e0;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1404fc7a0 FUN_1404fc7a0 body=43 status=ok
// SIG undefined FUN_1404fc7a0(void)

undefined8 * FUN_1404fc7a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1404fc7d0 FUN_1404fc7d0 body=119 status=ok
// SIG undefined FUN_1404fc7d0(void)

undefined8 * FUN_1404fc7d0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_143f9acd0;
  param_1[3] = &PTR_FUN_143f73cd8;
  plVar3 = (longlong *)param_1[5];
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
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1404fc850 FUN_1404fc850 body=119 status=ok
// SIG undefined FUN_1404fc850(void)

undefined8 * FUN_1404fc850(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_143f9acb0;
  param_1[4] = &PTR_FUN_143f73cd8;
  plVar3 = (longlong *)param_1[6];
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
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1404fc8d0 FUN_1404fc8d0 body=43 status=ok
// SIG undefined FUN_1404fc8d0(void)

undefined8 * FUN_1404fc8d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1404fc900 FUN_1404fc900 body=43 status=ok
// SIG undefined FUN_1404fc900(void)

undefined8 * FUN_1404fc900(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1404fc930 FUN_1404fc930 body=119 status=ok
// SIG undefined FUN_1404fc930(void)

undefined8 * FUN_1404fc930(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_143f9ac70;
  param_1[3] = &PTR_FUN_143f73cd8;
  plVar3 = (longlong *)param_1[5];
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
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1404fc9b0 FUN_1404fc9b0 body=119 status=ok
// SIG undefined FUN_1404fc9b0(void)

undefined8 * FUN_1404fc9b0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_143f9ac90;
  param_1[3] = &PTR_FUN_143f73cd8;
  plVar3 = (longlong *)param_1[5];
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
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1404fca30 FUN_1404fca30 body=52 status=ok
// SIG undefined FUN_1404fca30(void)

undefined8 FUN_1404fca30(undefined8 param_1,ulonglong param_2)

{
  FUN_1404f90c0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x428);
  }
  return param_1;
}



// FUNCTION 1404fca70 `scalar_deleting_destructor' body=134 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FOnlineAsyncTaskSteamLeaveLobby::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[7];
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
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1404fcb00 FUN_1404fcb00 body=43 status=ok
// SIG undefined FUN_1404fcb00(void)

undefined8 * FUN_1404fcb00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1404fcb30 FUN_1404fcb30 body=233 status=ok
// SIG undefined FUN_1404fcb30(void)

undefined8 * FUN_1404fcb30(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 10);
  plVar4 = (longlong *)param_1[9];
  if (iVar5 != 0) {
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = (longlong *)param_1[9];
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  iVar5 = *(int *)(param_1 + 8);
  plVar4 = (longlong *)param_1[7];
  if (iVar5 != 0) {
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    plVar4 = (longlong *)param_1[7];
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  plVar4 = (longlong *)param_1[6];
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
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1404fcc20 FUN_1404fcc20 body=84 status=ok
// SIG undefined FUN_1404fcc20(void)

undefined8 * FUN_1404fcc20(undefined8 *param_1,ulonglong param_2)

{
  param_1[8] = &PTR_FUN_143f9aaa8;
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1404fcc80 FUN_1404fcc80 body=160 status=ok
// SIG undefined FUN_1404fcc80(void)

undefined8 * FUN_1404fcc80(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  param_1[9] = &PTR_FUN_143f9a9e8;
  if ((*(byte *)(param_1 + 10) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
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
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1404fcd20 FUN_1404fcd20 body=267 status=ok
// SIG undefined FUN_1404fcd20(void)

undefined8 * FUN_1404fcd20(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  param_1[0xd] = &PTR_FUN_143f9ab68;
  if ((*(byte *)(param_1 + 0xe) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  plVar4 = (longlong *)param_1[0xb];
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
  plVar4 = (longlong *)param_1[9];
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
  plVar4 = (longlong *)param_1[7];
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
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1404fce30 FUN_1404fce30 body=224 status=ok
// SIG undefined FUN_1404fce30(void)

undefined8 * FUN_1404fce30(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  param_1[0x23] = &PTR_FUN_143f9ab68;
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  FUN_1404bf650(param_1 + 0xb);
  plVar4 = (longlong *)param_1[9];
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
  plVar4 = (longlong *)param_1[7];
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
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x138);
  }
  return param_1;
}



// FUNCTION 1404fcf10 FUN_1404fcf10 body=135 status=ok
// SIG undefined FUN_1404fcf10(void)

undefined8 * FUN_1404fcf10(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  param_1[0xb] = &PTR_FUN_143f9ab68;
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  param_1[6] = &PTR_FUN_143f73cd8;
  plVar3 = (longlong *)param_1[8];
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
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1404fcfa0 FUN_1404fcfa0 body=143 status=ok
// SIG undefined FUN_1404fcfa0(void)

undefined8 * FUN_1404fcfa0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_1404f8f80(param_1 + 9);
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
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1404fd030 FUN_1404fd030 body=160 status=ok
// SIG undefined FUN_1404fd030(void)

undefined8 * FUN_1404fd030(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  param_1[7] = &PTR_FUN_143f9ab68;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
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
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1404fd0d0 FUN_1404fd0d0 body=143 status=ok
// SIG undefined FUN_1404fd0d0(void)

undefined8 * FUN_1404fd0d0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 8);
  plVar4 = (longlong *)param_1[7];
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
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1404fd160 FUN_1404fd160 body=84 status=ok
// SIG undefined FUN_1404fd160(void)

undefined8 * FUN_1404fd160(undefined8 *param_1,ulonglong param_2)

{
  TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>::
  ~TArray<FTextLayout::FRunModel,TSizedDefaultAllocator<32>_>(param_1 + 10);
  TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>::
  ~TArray<FMessageRouter::FDelayedMessage,FDefaultAllocator>(param_1 + 8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 6);
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1404fd1c0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE::Core::Private::Function::
TFunction_CopyableOwnedObject<<lambda_f56ea942ce1413ae1a465df5722dad7c>,1>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 6);
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1404fd210 FUN_1404fd210 body=143 status=ok
// SIG undefined FUN_1404fd210(void)

undefined8 * FUN_1404fd210(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 8);
  plVar4 = (longlong *)param_1[7];
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
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1404fd2a0 `scalar_deleting_destructor' body=134 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRigUnit_UserDefinedEvent::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

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
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1404fd330 FUN_1404fd330 body=195 status=ok
// SIG undefined FUN_1404fd330(void)

undefined8 * FUN_1404fd330(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[10];
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
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 7);
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
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1404fd400 FUN_1404fd400 body=43 status=ok
// SIG undefined FUN_1404fd400(void)

undefined8 * FUN_1404fd400(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1404fd430 FUN_1404fd430 body=134 status=ok
// SIG undefined FUN_1404fd430(void)

undefined8 * FUN_1404fd430(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[7];
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
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1404fd4c0 `scalar_deleting_destructor' body=143 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FUGOnlineAsyncTaskSteamRetrieveLeaderboardEntries::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[9];
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
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 6);
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1404fd550 FUN_1404fd550 body=186 status=ok
// SIG undefined FUN_1404fd550(void)

undefined8 * FUN_1404fd550(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[9];
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
  plVar4 = (longlong *)param_1[7];
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
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1404fd610 FUN_1404fd610 body=81 status=ok
// SIG undefined FUN_1404fd610(void)

undefined8 * FUN_1404fd610(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 6);
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1404fd670 FUN_1404fd670 body=43 status=ok
// SIG undefined FUN_1404fd670(void)

undefined8 * FUN_1404fd670(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1404fd6a0 `scalar_deleting_destructor' body=200 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FOnlineAsyncTaskSteamUpdateStats::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 8,0);
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[7];
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
  *param_1 = &PTR_FUN_143f76b48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1404fd770 FUN_1404fd770 body=144 status=ok
// SIG undefined FUN_1404fd770(void)

undefined8 * FUN_1404fd770(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_143f9ccc0;
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
  *param_1 = &PTR_FUN_143f9a3e8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1404fd800 FUN_1404fd800 body=159 status=ok
// SIG undefined FUN_1404fd800(void)

longlong * FUN_1404fd800(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  iVar2 = (int)param_1[8];
  plVar1 = (longlong *)param_1[7];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[7];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1404fd8a0 FUN_1404fd8a0 body=89 status=ok
// SIG undefined FUN_1404fd8a0(void)

undefined8 * FUN_1404fd8a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9c350;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x29);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x24);
  FUN_1404f98f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 1404fd900 FUN_1404fd900 body=62 status=ok
// SIG undefined FUN_1404fd900(void)

undefined8 * FUN_1404fd900(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9bff8;
  FUN_1404f9980();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1f0);
  }
  return param_1;
}



// FUNCTION 1404fd940 FUN_1404fd940 body=213 status=ok
// SIG undefined FUN_1404fd940(void)

undefined8 *
FUN_1404fd940(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_10;
  
  *param_1 = &PTR_FUN_143f9d130;
  if (DAT_146853248 != (longlong *)0x0) {
    (**(code **)(*DAT_146853248 + 0x110))();
    local_10 = (longlong *)0x0;
    DAT_146853248 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&DAT_146853250,&local_10,param_3,param_4,0);
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
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1404fda20 FUN_1404fda20 body=268 status=ok
// SIG undefined FUN_1404fda20(void)

undefined8 * FUN_1404fda20(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_143f9cc80;
  FOnlineUserPresenceStatus::~FOnlineUserPresenceStatus(param_1 + 0x11);
  plVar4 = (longlong *)param_1[0xf];
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
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 4,0);
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
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
  *param_1 = &PTR_FUN_143f9a3e8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 1404fdb30 FUN_1404fdb30 body=89 status=ok
// SIG undefined FUN_1404fdb30(void)

undefined8 * FUN_1404fdb30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9cd00;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x21);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x1e);
  FUN_1404f9a80(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 1404fdb90 FUN_1404fdb90 body=162 status=ok
// SIG undefined FUN_1404fdb90(void)

undefined8 * FUN_1404fdb90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9b750;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2e);
  param_1[0x29] = &PTR_LAB_143f9b738;
  if (param_1[0x2b] != 0) {
    SteamAPI_UnregisterCallResult(param_1 + 0x29);
    param_1[0x2b] = 0;
  }
  TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>::
  ~TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>(param_1 + 0x25);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x23);
  FUN_1404e9010(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x188);
  }
  return param_1;
}



// FUNCTION 1404fdc40 FUN_1404fdc40 body=120 status=ok
// SIG undefined FUN_1404fdc40(void)

undefined8 * FUN_1404fdc40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9ae40;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xd);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__143f9add8;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1404fdcc0 FUN_1404fdcc0 body=224 status=ok
// SIG undefined FUN_1404fdcc0(void)

undefined8 * FUN_1404fdcc0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_143f9cfc0;
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  iVar3 = *(int *)(param_1 + 0xb);
  plVar2 = (longlong *)param_1[10];
  if (iVar3 != 0) {
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar2 = (longlong *)param_1[10];
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  plVar2 = (longlong *)param_1[8];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
  }
  *param_1 = &PTR_FUN_143f9cc20;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 4);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1404fdda0 `scalar_deleting_destructor' body=76 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxyFactory * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxyFactory::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxyFactory::_scalar_deleting_destructor_
          (UMSFreeThreadProxyFactory *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__143f9c738;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(this + 8);
  *(undefined ***)this = &PTR_FUN_143f47c98;
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x30);
  }
  return this;
}



// FUNCTION 1404fddf0 FUN_1404fddf0 body=244 status=ok
// SIG undefined FUN_1404fddf0(void)

undefined8 * FUN_1404fddf0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_143f9a7a8;
  param_1[5] = &PTR_FUN_143f73cd8;
  plVar4 = (longlong *)param_1[7];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = (longlong *)param_1[4];
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
  plVar4 = (longlong *)param_1[2];
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
  *param_1 = &PTR_FUN_143f7c9f0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1404fdef0 FUN_1404fdef0 body=300 status=ok
// SIG undefined FUN_1404fdef0(void)

undefined8 * FUN_1404fdef0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_143f9b120;
  FUN_1405233b0(param_1 + 0x5b);
  param_1[0x71] = &PTR_FUN_143f60df0;
  FUN_1404b6bd0(param_1 + 0x71);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x81);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x7e);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x7b);
  if (param_1[0x73] != 0) {
    FMemory::Free();
  }
  FUN_1404f9860(param_1 + 0x5b);
  plVar4 = (longlong *)param_1[0x5a];
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
  FUN_1404e8e20(param_1 + 0x57);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x52));
  plVar4 = (longlong *)param_1[0x50];
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
  FUN_1404e90c0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x428);
  }
  return param_1;
}



// FUNCTION 1404fe020 FUN_1404fe020 body=52 status=ok
// SIG undefined FUN_1404fe020(void)

undefined8 FUN_1404fe020(undefined8 param_1,ulonglong param_2)

{
  FUN_1404f9300();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 1404fe060 FUN_1404fe060 body=115 status=ok
// SIG undefined FUN_1404fe060(void)

undefined8 * FUN_1404fe060(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9d430;
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
    param_1[5] = 0;
    FWindowsPlatformMisc::CoUninitialize();
  }
  *param_1 = &PTR__scalar_deleting_destructor__143f9d148;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1404fe0e0 FUN_1404fe0e0 body=176 status=ok
// SIG undefined FUN_1404fe0e0(void)

undefined8 * FUN_1404fe0e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9d478;
  param_1[0x14] = &PTR_FUN_143f9ab68;
  if ((*(byte *)(param_1 + 0x15) & 1) != 0) {
    SteamAPI_UnregisterCallback();
  }
  TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>::
  ~TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>(param_1 + 0x12);
  TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>::
  ~TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>(param_1 + 0x10);
  TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>::
  ~TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>(param_1 + 0xe);
  *param_1 = &PTR_FUN_143f9d190;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 10);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 7);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 4);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1404fe190 FUN_1404fe190 body=43 status=ok
// SIG undefined FUN_1404fe190(void)

undefined8 * FUN_1404fe190(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9a3e8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1404fe1c0 FUN_1404fe1c0 body=52 status=ok
// SIG undefined FUN_1404fe1c0(void)

undefined8 FUN_1404fe1c0(undefined8 param_1,ulonglong param_2)

{
  FUN_1404f96a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1404fe200 FUN_1404fe200 body=52 status=ok
// SIG undefined FUN_1404fe200(void)

undefined8 FUN_1404fe200(undefined8 param_1,ulonglong param_2)

{
  FUN_1404f9860();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1404fe240 FUN_1404fe240 body=72 status=ok
// SIG undefined FUN_1404fe240(void)

undefined8 * FUN_1404fe240(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9d520;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1404fe290 FUN_1404fe290 body=291 status=ok
// SIG undefined FUN_1404fe290(void)

undefined8 * FUN_1404fe290(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_143f9d608;
  iVar5 = (**(code **)(param_1[5] + 0x38))(param_1 + 5);
  if (iVar5 != 0) {
    lVar3 = param_1[4];
    iVar5 = (**(code **)(param_1[5] + 0x38))(param_1 + 5);
    iVar5 = iVar5 + -9000;
    if ((-1 < iVar5) && (iVar5 < *(int *)(lVar3 + 0x188))) {
      lVar6 = *(longlong *)(lVar3 + 0x180);
      if (*(longlong *)(lVar3 + 0x180) == 0) {
        lVar6 = lVar3 + 0x170;
      }
      puVar2 = (uint *)(lVar6 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << ((byte)iVar5 & 0x1f));
    }
    (**(code **)(param_1[5] + 0x30))(param_1 + 5,0);
  }
  param_1[6] = &PTR_FUN_143f73cd8;
  plVar4 = (longlong *)param_1[8];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar5 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  param_1[5] = &PTR_FUN_143f9a360;
  *param_1 = &PTR_FUN_143f9d520;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1404fe3c0 FUN_1404fe3c0 body=286 status=ok
// SIG undefined FUN_1404fe3c0(void)

longlong FUN_1404fe3c0(longlong param_1,ulonglong param_2)

{
  FUN_1404f8cb0(param_1 + 0x198);
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FMemory::Free();
  }
  FUN_140506730(param_1 + 0x118,0);
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  FUN_1404f8f80(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  FUN_140506730(param_1 + 0xb8,0);
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  FTickerObjectBase::~FTickerObjectBase(param_1 + 0x90);
  FUN_1404f9b00(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4638);
  }
  return param_1;
}



// FUNCTION 1404fe4e0 FUN_1404fe4e0 body=178 status=ok
// SIG undefined FUN_1404fe4e0(void)

undefined8 * FUN_1404fe4e0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_143f9c9b0;
  if (*(char *)(param_1 + 1) != '\0') {
    (**(code **)(*(longlong *)param_1[2] + 0x128))();
    *(undefined1 *)(param_1 + 1) = 0;
  }
  DAT_146853158 = 0;
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
  *param_1 = &PTR_FUN_143f9c998;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1404fe5a0 FUN_1404fe5a0 body=98 status=ok
// SIG undefined FUN_1404fe5a0(void)

undefined8 * FUN_1404fe5a0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_143f73cd8;
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1404fe610 FUN_1404fe610 body=317 status=ok
// SIG undefined FUN_1404fe610(void)

undefined8 * FUN_1404fe610(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  *param_1 = &PTR_FUN_143f9d298;
  if (*(char *)((longlong)param_1 + 0x31) != '\0') {
    (**(code **)(*(longlong *)param_1[2] + 0x40))();
    lVar4 = *(longlong *)param_1[3];
    puVar6 = (undefined8 *)
             (**(code **)(*(longlong *)param_1[2] + 0x10))((longlong *)param_1[2],local_res8);
    (**(code **)(lVar4 + 0xd8))(param_1[3],*puVar6,0);
  }
  puVar6 = (undefined8 *)param_1[0x15];
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,1);
  }
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  FUN_1405068f0(param_1 + 9,0);
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  plVar5 = (longlong *)param_1[5];
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
  *param_1 = &PTR__purecall_143f769b0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 1404fe750 FUN_1404fe750 body=158 status=ok
// SIG undefined FUN_1404fe750(void)

undefined8 * FUN_1404fe750(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_143f9d238;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
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
  *param_1 = &PTR_FUN_143f749b8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1404fe7f0 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
ConstructorHelpers::FObjectFinder<UTexture2D>::_scalar_deleting_destructor_
          (undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 1) != '\0')) {
    UGCObjectReferencer::RemoveObject(DAT_1469e6880,param_1);
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1404fe850 `scalar_deleting_destructor' body=76 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxyFactory * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxyFactory::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxyFactory::_scalar_deleting_destructor_
          (UMSFreeThreadProxyFactory *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__143f9a8e0;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(this + 8);
  *(undefined ***)this = &PTR_FUN_143f47c98;
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x20);
  }
  return this;
}



// FUNCTION 1404fe8a0 FUN_1404fe8a0 body=52 status=ok
// SIG undefined FUN_1404fe8a0(void)

undefined8 FUN_1404fe8a0(undefined8 param_1,ulonglong param_2)

{
  FUN_1404f9980();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d0);
  }
  return param_1;
}



// FUNCTION 1404fe8e0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FFillTextureCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1404f9a80();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 1404fe920 `scalar_deleting_destructor' body=76 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxyFactory * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxyFactory::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxyFactory::_scalar_deleting_destructor_
          (UMSFreeThreadProxyFactory *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__143f9add8;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(this + 8);
  *(undefined ***)this = &PTR_FUN_143f47c98;
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x20);
  }
  return this;
}



// FUNCTION 1404fe970 FUN_1404fe970 body=85 status=ok
// SIG undefined FUN_1404fe970(void)

undefined8 * FUN_1404fe970(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9cc20;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 4);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1404fe9d0 `scalar_deleting_destructor' body=76 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxyFactory * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxyFactory::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxyFactory::_scalar_deleting_destructor_
          (UMSFreeThreadProxyFactory *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__143f9c738;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(this + 8);
  *(undefined ***)this = &PTR_FUN_143f47c98;
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x20);
  }
  return this;
}



// FUNCTION 1404fea20 `scalar_deleting_destructor' body=76 status=ok
// SIG void * `scalar_deleting_destructor'(UMSFreeThreadProxyFactory * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl Concurrency::details::UMSFreeThreadProxyFactory::`scalar
   deleting destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeThreadProxyFactory::_scalar_deleting_destructor_
          (UMSFreeThreadProxyFactory *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__143f9d148;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(this + 8);
  *(undefined ***)this = &PTR_FUN_143f47c98;
  if ((param_1 & 1) != 0) {
    FMemory::operator_delete(this,0x20);
  }
  return this;
}



// FUNCTION 1404fea70 FUN_1404fea70 body=103 status=ok
// SIG undefined FUN_1404fea70(void)

undefined8 * FUN_1404fea70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9d190;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 10);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 7);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 4);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1404feae0 FUN_1404feae0 body=43 status=ok
// SIG undefined FUN_1404feae0(void)

undefined8 * FUN_1404feae0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f9c998;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1404feb10 FUN_1404feb10 body=43 status=ok
// SIG undefined FUN_1404feb10(void)

undefined8 * FUN_1404feb10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1404feb40 FUN_1404feb40 body=52 status=ok
// SIG undefined FUN_1404feb40(void)

undefined8 FUN_1404feb40(undefined8 param_1,ulonglong param_2)

{
  FUN_1404f9b00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1404feb80 FUN_1404feb80 body=52 status=ok
// SIG undefined FUN_1404feb80(void)

undefined8 FUN_1404feb80(undefined8 param_1,ulonglong param_2)

{
  FUN_1404f9b80();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x19a0);
  }
  return param_1;
}



// FUNCTION 1404febc0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 AUGAIManager::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1404bfa00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x590);
  }
  return param_1;
}



// FUNCTION 1404fec00 FUN_1404fec00 body=49 status=ok
// SIG undefined FUN_1404fec00(void)

void FUN_1404fec00(longlong param_1)

{
  FUN_1405037a0(param_1 + 8);
  LOCK();
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  UNLOCK();
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001404fec27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1404fec50 AddOnPingSearchResultsCompleteDelegate_Handle body=85 status=ok
// SIG undefined AddOnPingSearchResultsCompleteDelegate_Handle(void)

undefined8 *
IOnlineSession::AddOnPingSearchResultsCompleteDelegate_Handle
          (longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0xe0,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404fecb0 AddOnCancelFindSessionsCompleteDelegate_Handle body=85 status=ok
// SIG undefined AddOnCancelFindSessionsCompleteDelegate_Handle(void)

undefined8 *
IOnlineSession::AddOnCancelFindSessionsCompleteDelegate_Handle
          (longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 200,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404fed10 FUN_1404fed10 body=258 status=ok
// SIG undefined FUN_1404fed10(void)

/* WARNING: Removing unreachable block (ram,0x0001404fedd7) */

undefined8 * FUN_1404fed10(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  plVar1 = (longlong *)(param_1 + 0x78);
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      (**(code **)(*local_28 + 0x20))(local_28,local_res8);
    }
    iVar2 = *(int *)(param_1 + 0x80);
    *(int *)(param_1 + 0x80) = iVar2 + 1;
    if (*(int *)(param_1 + 0x84) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  iVar2 = *(int *)(param_3 + 1);
  *param_2 = 0;
  if ((iVar2 != 0) && (plVar1 = *param_3, plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  return param_2;
}



// FUNCTION 1404fee20 FUN_1404fee20 body=85 status=ok
// SIG undefined FUN_1404fee20(void)

undefined8 * FUN_1404fee20(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0x140,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404fee80 AddOnQueryRecentPlayersCompleteDelegate_Handle body=85 status=ok
// SIG undefined AddOnQueryRecentPlayersCompleteDelegate_Handle(void)

undefined8 *
IOnlineFriends::AddOnQueryRecentPlayersCompleteDelegate_Handle
          (longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0x128,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404feee0 AddOnQueryRecentPlayersCompleteDelegate_Handle body=85 status=ok
// SIG undefined AddOnQueryRecentPlayersCompleteDelegate_Handle(void)

undefined8 *
IOnlineFriends::AddOnQueryRecentPlayersCompleteDelegate_Handle
          (longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0x110,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404fef40 AddOnUnregisterPlayersCompleteDelegate_Handle body=85 status=ok
// SIG undefined AddOnUnregisterPlayersCompleteDelegate_Handle(void)

undefined8 *
IOnlineSession::AddOnUnregisterPlayersCompleteDelegate_Handle
          (longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0x170,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404fefa0 AddOnRegisterPlayersCompleteDelegate_Handle body=85 status=ok
// SIG undefined AddOnRegisterPlayersCompleteDelegate_Handle(void)

undefined8 *
IOnlineSession::AddOnRegisterPlayersCompleteDelegate_Handle
          (longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  TBaseMulticastDelegate<void>::Add(param_1 + 0x158,local_res8);
  lVar1 = param_3[1];
  *param_2 = 0;
  if (((int)lVar1 != 0) && (param_3 = (longlong *)*param_3, param_3 != (longlong *)0x0)) {
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x20))(param_3,local_res8);
    *param_2 = *puVar2;
  }
  return param_2;
}



// FUNCTION 1404ff000 FUN_1404ff000 body=465 status=ok
// SIG undefined FUN_1404ff000(void)

void FUN_1404ff000(longlong param_1,undefined2 param_2,longlong *param_3,void *param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  LARGE_INTEGER local_res8;
  undefined1 local_res10 [8];
  longlong local_38 [2];
  
  iVar2 = *(int *)(param_1 + 0x4620);
  lVar1 = param_1 + 0x198;
  *(int *)(param_1 + 0x4620) = iVar2 + 1;
  if (*(int *)(param_1 + 0x4624) < iVar2 + 1) {
    FUN_1405201d0(lVar1,iVar2);
  }
  lVar8 = (longlong)iVar2 * 0x448;
  lVar5 = *(longlong *)(param_1 + 0x4618);
  if (*(longlong *)(param_1 + 0x4618) == 0) {
    lVar5 = lVar1;
  }
  lVar5 = lVar5 + lVar8;
  *(undefined ***)(lVar5 + 8) = &PTR_FUN_143f9a840;
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  *(undefined ***)(lVar5 + 0x10) = &PTR_FUN_143f9a6c8;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  *(undefined2 *)(lVar5 + 0x30) = 0;
  lVar5 = *(longlong *)(param_1 + 0x4618);
  if (*(longlong *)(param_1 + 0x4618) == 0) {
    lVar5 = lVar1;
  }
  *(undefined2 *)(lVar5 + lVar8) = param_2;
  local_res10[0] = 0;
  lVar5 = *(longlong *)(param_1 + 0x4618);
  if (*(longlong *)(param_1 + 0x4618) == 0) {
    lVar5 = lVar1;
  }
  puVar6 = (undefined8 *)(**(code **)(*param_3 + 0x68))(param_3,local_38,0);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar6;
  }
  (**(code **)(*(longlong *)(lVar5 + 8 + lVar8) + 8))(lVar8 + 8 + lVar5,puVar7,local_res10);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  lVar5 = *(longlong *)(param_1 + 0x4618);
  if (*(longlong *)(param_1 + 0x4618) == 0) {
    lVar5 = lVar1;
  }
  lVar3 = *(longlong *)(lVar5 + 8 + lVar8);
  uVar4 = (**(code **)(*param_3 + 0x38))(param_3);
  (**(code **)(lVar3 + 0x30))(lVar8 + 8 + lVar5,uVar4);
  lVar5 = *(longlong *)(param_1 + 0x4618);
  if (*(longlong *)(param_1 + 0x4618) == 0) {
    lVar5 = lVar1;
  }
  *(int *)(lVar5 + 0x438 + lVar8) = param_5;
  lVar5 = *(longlong *)(param_1 + 0x4618);
  if (*(longlong *)(param_1 + 0x4618) == 0) {
    lVar5 = lVar1;
  }
  _guard_xfg_dispatch_icall_nop((void *)(lVar8 + 0x38 + lVar5),param_4,(longlong)param_5);
  QueryPerformanceCounter(&local_res8);
  lVar5 = *(longlong *)(param_1 + 0x4618);
  if (*(longlong *)(param_1 + 0x4618) == 0) {
    lVar5 = lVar1;
  }
  *(double *)(lVar8 + 0x440 + lVar5) = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
  return;
}



// FUNCTION 1404ff1e0 FUN_1404ff1e0 body=426 status=ok
// SIG undefined FUN_1404ff1e0(void)

void FUN_1404ff1e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint *puVar9;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  uint uStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  plVar8 = (longlong *)(lVar2 + 0x48);
  local_78 = 0;
  uStack_74 = 1;
  iVar1 = *(int *)(lVar2 + 0x70);
  puStack_28 = (uint *)(lVar2 + 0x58);
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar1 != 0) {
    puVar9 = *(uint **)(lVar2 + 0x68);
    if (*(uint **)(lVar2 + 0x68) == (uint *)0x0) {
      puVar9 = puStack_28;
    }
    uVar5 = *puVar9;
    local_78 = 0;
    uStack_60 = 0;
    while (uVar5 == 0) {
      lVar6 = (longlong)(int)local_78;
      uStack_60 = uStack_60 + 0x20;
      uVar5 = local_78 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_78;
      local_78 = uVar5;
      if (bVar3) goto LAB_1404ff2af;
      uVar5 = puVar9[lVar6 + 1];
    }
    uStack_74 = -uVar5 & uVar5;
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
    local_68._4_4_ = (uStack_60 - iVar4) + 0x1f;
    if (iVar1 < local_68._4_4_) {
LAB_1404ff2af:
      local_68._4_4_ = iVar1;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  uStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar8,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar8 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  uStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar3 = local_68._4_4_ < *(int *)(lVar2 + 0x70);
  local_48 = plVar8;
  local_38 = plVar8;
  local_10 = plVar8;
  local_68 = puStack_28;
  if (bVar3) {
    do {
      plVar7 = (longlong *)((longlong)iStack_5c * 0x38 + *plVar8 + 0x28);
      if (*plVar7 != 0) {
        (**(code **)(*param_2 + 0x38))(param_2,plVar7,0,0);
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>,TDefaultMapHashableKeyFuncs<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 1404ff390 FUN_1404ff390 body=669 status=ok
// SIG undefined FUN_1404ff390(void)

void FUN_1404ff390(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  plVar3 = *(longlong **)(param_3 + 0x10);
  lVar4 = *(longlong *)(param_3 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  operator<<(param_2,lVar4 + 0x18);
  plVar6 = (longlong *)operator<<(param_2,param_3 + 0x18);
  if ((*(char *)((longlong)plVar6 + 0x14) == '\0') && ((int)plVar6[2] + 4U <= *(uint *)(plVar6 + 1))
     ) {
    *(undefined1 *)((longlong)(int)plVar6[2] + *plVar6) = *(undefined1 *)(param_3 + 0xb3);
    *(undefined1 *)((longlong)(int)plVar6[2] + 1 + *plVar6) = *(undefined1 *)(param_3 + 0xb2);
    *(undefined1 *)((longlong)(int)plVar6[2] + 2 + *plVar6) = *(undefined1 *)(param_3 + 0xb1);
    *(undefined1 *)((longlong)(int)plVar6[2] + 3 + *plVar6) = *(undefined1 *)(param_3 + 0xb0);
    *(int *)(plVar6 + 2) = (int)plVar6[2] + 4;
    cVar5 = *(char *)((longlong)plVar6 + 0x14);
  }
  else {
    *(undefined1 *)((longlong)plVar6 + 0x14) = 1;
    cVar5 = '\x01';
  }
  if ((cVar5 == '\0') && ((int)plVar6[2] + 4U <= *(uint *)(plVar6 + 1))) {
    *(undefined1 *)((longlong)(int)plVar6[2] + *plVar6) = *(undefined1 *)(param_3 + 0xb7);
    *(undefined1 *)((longlong)(int)plVar6[2] + 1 + *plVar6) = *(undefined1 *)(param_3 + 0xb6);
    *(undefined1 *)((longlong)(int)plVar6[2] + 2 + *plVar6) = *(undefined1 *)(param_3 + 0xb5);
    *(undefined1 *)((longlong)(int)plVar6[2] + 3 + *plVar6) = *(undefined1 *)(param_3 + 0xb4);
    *(int *)(plVar6 + 2) = (int)plVar6[2] + 4;
  }
  else {
    *(undefined1 *)((longlong)plVar6 + 0x14) = 1;
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
  plVar3 = *(longlong **)(param_3 + 0xa8);
  lVar4 = *(longlong *)(param_3 + 0xa0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(lVar4 + 8);
  (**(code **)(*plVar6 + 0x28))(plVar6,local_res10);
  if ((*(char *)((longlong)param_2 + 0x14) == '\0') &&
     ((int)param_2[2] + 4U <= *(uint *)(param_2 + 1))) {
    *(char *)((longlong)(int)param_2[2] + *param_2) = SUB41(local_res10._0_4_,3);
    *(char *)((longlong)(int)param_2[2] + 1 + *param_2) = SUB41(local_res10._0_4_,2);
    *(char *)((longlong)(int)param_2[2] + 2 + *param_2) = SUB41(local_res10._0_4_,1);
    *(undefined1 *)((longlong)(int)param_2[2] + 3 + *param_2) = local_res10[0];
    *(int *)(param_2 + 2) = (int)param_2[2] + 4;
  }
  else {
    *(undefined1 *)((longlong)param_2 + 0x14) = 1;
  }
  (**(code **)(*plVar6 + 0x40))(plVar6,local_res18);
  if ((*(char *)((longlong)param_2 + 0x14) == '\0') &&
     ((int)param_2[2] + 4U <= *(uint *)(param_2 + 1))) {
    *(char *)((longlong)(int)param_2[2] + *param_2) = SUB41(local_res18._0_4_,3);
    *(char *)((longlong)(int)param_2[2] + 1 + *param_2) = SUB41(local_res18._0_4_,2);
    *(char *)((longlong)(int)param_2[2] + 2 + *param_2) = SUB41(local_res18._0_4_,1);
    *(undefined1 *)((longlong)(int)param_2[2] + 3 + *param_2) = local_res18[0];
    *(int *)(param_2 + 2) = (int)param_2[2] + 4;
  }
  else {
    *(undefined1 *)((longlong)param_2 + 0x14) = 1;
  }
  operator<<(param_2,lVar4 + 0x40);
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
  FUN_1404eca80(param_1,param_2,param_3 + 0x28);
  return;
}



// FUNCTION 1404ff630 FUN_1404ff630 body=240 status=ok
// SIG undefined FUN_1404ff630(void)

undefined8 FUN_1404ff630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  lVar3 = DAT_146853240;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  lVar8 = 4;
  if (((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar5 = GetCurrentThreadId(), DVar5 != DAT_1468c21c0)) {
    lVar6 = 4;
  }
  else {
    lVar6 = 0;
  }
  lVar2 = DAT_146853228;
  iVar7 = *(int *)(lVar6 + lVar3);
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)) {
    lVar8 = 0;
  }
  uVar1 = *(undefined4 *)(lVar8 + lVar2);
  while( true ) {
    if (iVar7 < 1) {
      return 1;
    }
    iVar7 = iVar7 + -1;
    cVar4 = FUN_14166e5b0(param_2,param_3);
    if (cVar4 != '\0') break;
    if (iVar7 == 0) {
      return 2;
    }
    FUN_1416b1760(uVar1);
  }
  return 1;
}



// FUNCTION 1404ff720 FUN_1404ff720 body=421 status=ok
// SIG undefined FUN_1404ff720(void)

void FUN_1404ff720(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  undefined8 *puVar9;
  double dVar10;
  LARGE_INTEGER local_res8;
  longlong local_20 [3];
  
  if (((param_1[0x13] == 0) || (cVar8 = FUN_140516dc0(), cVar8 == '\0')) ||
     (cVar8 = (**(code **)(*(longlong *)param_1[0x13] + 0xf8))((longlong *)param_1[0x13],param_2),
     cVar8 == '\0')) {
    (**(code **)(*param_1 + 0xf8))(param_1,param_2,param_3,6);
    return;
  }
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  FString::FString(local_20,param_3);
  uVar6 = *(undefined8 *)(param_1[0x13] + 0x148);
  puVar9 = (undefined8 *)operator_new(0x40);
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    *puVar9 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res8);
    dVar10 = (double)local_res8.QuadPart * DAT_1468b02f8;
    *puVar9 = &PTR_FUN_143f9e940;
    *(undefined1 *)(puVar9 + 2) = 0;
    puVar9[1] = dVar10 + 16777216.0;
    puVar9[3] = param_1;
    puVar9[4] = uVar4;
    puVar9[5] = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    FString::FString(puVar9 + 6,local_20);
  }
  FOnlineAsyncTaskManager::AddToInQueue(uVar6,puVar9);
  if (local_20[0] != 0) {
    FMemory::Free();
  }
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  LOCK();
  plVar1 = plVar5 + 1;
  lVar7 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar7 != 1) {
    return;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar2 = (int *)((longlong)plVar5 + 0xc);
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar3 != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001404ff899. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 8))(plVar5,1);
  return;
}



// FUNCTION 1404ff8d0 FUN_1404ff8d0 body=266 status=ok
// SIG undefined FUN_1404ff8d0(void)

undefined8 FUN_1404ff8d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar3 = *plVar1;
  uVar5 = (**(code **)(*param_2 + 0x38))(param_2);
  (**(code **)(lVar3 + 0x30))(plVar1,uVar5);
  iVar6 = (**(code **)(*plVar1 + 0x38))(plVar1);
  if (iVar6 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    iVar10 = 0;
    iVar9 = -1;
    iVar6 = *(int *)(lVar3 + 0x188);
    if (0 < iVar6) {
      do {
        lVar4 = (longlong)(*(int *)(lVar3 + 400) + iVar10) % (longlong)iVar6;
        iVar8 = (int)lVar4;
        if ((-1 < iVar8) && (iVar8 < iVar6)) {
          lVar11 = *(longlong *)(lVar3 + 0x180);
          if (*(longlong *)(lVar3 + 0x180) == 0) {
            lVar11 = lVar3 + 0x170;
          }
          iVar7 = iVar8;
          if (iVar8 < 0) {
            iVar7 = iVar8 + 0x1f;
          }
          uVar12 = 1 << ((byte)lVar4 & 0x1f);
          uVar2 = *(uint *)(lVar11 + (longlong)(iVar7 >> 5) * 4);
          if ((uVar12 & uVar2) == 0) {
            iVar9 = iVar8 + 9000;
            *(uint *)(lVar11 + (longlong)(iVar7 >> 5) * 4) = uVar12 | uVar2;
            *(int *)(lVar3 + 400) = (iVar8 + 1) % iVar6;
            break;
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar6);
    }
    (**(code **)(*plVar1 + 0x30))(plVar1,iVar9);
  }
  return 1;
}



// FUNCTION 1404ff9e0 FUN_1404ff9e0 body=196 status=ok
// SIG undefined FUN_1404ff9e0(void)

void FUN_1404ff9e0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar6 = lVar7 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar6 + 8 + *param_1) == 0) ||
         (plVar1 = *(longlong **)(lVar6 + *param_1), plVar1 == (longlong *)0x0)) {
LAB_1404ffa56:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4);
        if (cVar3 == '\0') goto LAB_1404ffa56;
      }
      lVar6 = lVar6 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar5 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar5 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1404ffab0 FUN_1404ffab0 body=197 status=ok
// SIG undefined FUN_1404ffab0(void)

void FUN_1404ffab0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar6 = lVar7 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar6 + 8 + *param_1) == 0) ||
         (plVar1 = *(longlong **)(lVar6 + *param_1), plVar1 == (longlong *)0x0)) {
LAB_1404ffb27:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4);
        if (cVar3 == '\0') goto LAB_1404ffb27;
      }
      lVar6 = lVar6 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar5 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar5 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1404ffb80 Broadcast body=165 status=ok
// SIG undefined Broadcast(void)

void TBaseMulticastDelegate<void,bool>::Broadcast(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar7 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar6 = lVar7 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar6 + 8 + *param_1) == 0) ||
         (plVar1 = *(longlong **)(lVar6 + *param_1), plVar1 == (longlong *)0x0)) {
LAB_1404ffbe1:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
        if (cVar3 == '\0') goto LAB_1404ffbe1;
      }
      lVar6 = lVar6 + -0x10;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
    iVar5 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar5 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1404ffc30 FUN_1404ffc30 body=39 status=ok
// SIG undefined FUN_1404ffc30(void)

undefined8 FUN_1404ffc30(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x15) == '\0') {
    return 3;
  }
  if (*(char *)(param_1 + 0x17) != '\0') {
    uVar1 = 2;
    if (*(char *)(param_1 + 0x18) != '\0') {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 0;
}



// FUNCTION 1404ffc60 FUN_1404ffc60 body=2372 status=ok
// SIG undefined FUN_1404ffc60(void)

undefined8 * FUN_1404ffc60(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong lVar5;
  int iVar6;
  short *psVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  void *pvVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  undefined2 *puVar18;
  void *pvVar19;
  void *pvVar20;
  int local_res18;
  longlong local_res20;
  undefined2 uVar22;
  undefined4 uVar21;
  void *local_1c8;
  undefined8 local_1c0;
  void *local_1b8;
  undefined8 local_1b0;
  void *local_1a8;
  undefined8 local_1a0;
  void *local_198;
  undefined8 local_190;
  void *local_188;
  int local_180;
  int local_17c;
  void *local_178;
  undefined8 local_170;
  void *local_168;
  undefined8 local_160;
  undefined2 *local_158;
  int local_150;
  longlong local_148;
  ulonglong local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined1 local_108 [8];
  longlong *local_100;
  longlong local_f0;
  short *local_e8;
  undefined2 *local_e0;
  int local_d8;
  undefined1 local_d0 [8];
  longlong *local_c8;
  longlong local_b8 [2];
  longlong local_a8;
  longlong local_90;
  longlong local_80;
  longlong *local_70;
  int local_68;
  longlong local_60;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_3 + 1) == 0) {
    puVar18 = &DAT_143f3eda8;
  }
  else {
    puVar18 = (undefined2 *)*param_3;
  }
  FUN_14289aca0(local_b8,0,puVar18,0);
  psVar7 = (short *)FURL::GetOption(local_b8,&DAT_143f830b0,&DAT_143f7e37c);
  local_140 = 0;
  local_148 = 0;
  if ((psVar7 != (short *)0x0) && (*psVar7 != 0)) {
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (psVar7[lVar12] != 0);
    uVar11 = (int)lVar12 + 1;
    local_140 = (ulonglong)uVar11;
    if (0 < (int)uVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    }
    FGenericPlatformString::Memcpy(local_148,psVar7,(longlong)(int)uVar11 * 2);
  }
  FText::FText(local_d0);
  local_138 = 0;
  local_130 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"Presence",0x12);
  FUN_141606040(&local_138,&local_148,local_d0,0);
  if (local_138 != 0) {
    FMemory::Free();
  }
  uVar8 = FText::ToString(local_d0);
  FString::operator=(param_2,uVar8);
  if (*(int *)(param_2 + 1) < 2) {
    uVar8 = FText::ToString(&DAT_146853200);
    FString::operator=(param_2,uVar8);
  }
  else {
    local_res18 = 0;
    if (0 < *(int *)(param_1 + 0x58)) {
      local_res20 = 0;
      do {
        pvVar19 = (void *)0x0;
        lVar12 = local_res20 * 0x10;
        if (*(int *)(lVar12 + 8 + *(longlong *)(param_1 + 0x50)) == 0) {
          puVar18 = &DAT_143f3eda8;
        }
        else {
          puVar18 = *(undefined2 **)(lVar12 + *(longlong *)(param_1 + 0x50));
        }
        local_f0 = lVar12;
        FString::PrintfImpl(&local_158,L"%%%s%%",puVar18);
        uVar22 = 0xffff;
        puVar18 = &DAT_143f3eda8;
        if (local_150 != 0) {
          puVar18 = local_158;
        }
        iVar6 = FUN_141592950(param_2,puVar18,1,0,0xffffffff);
        if (iVar6 != -1) {
          FString::PrintfImpl(&local_e0,L"p%d=",local_res18);
          puVar18 = &DAT_143f3eda8;
          if (local_d8 != 0) {
            puVar18 = local_e0;
          }
          psVar7 = (short *)FURL::GetOption(local_b8,puVar18,0);
          local_e8 = psVar7;
          if (local_e0 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (psVar7 != (short *)0x0) {
            FText::FText(local_108);
            local_198 = (void *)0x0;
            local_190 = 2;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
            pvVar13 = local_198;
            uVar21 = CONCAT22(uVar22,0x3f);
            FGenericPlatformString::Convert<char,wchar_t>(local_198,2,&DAT_143f7e41c,2,uVar21);
            uVar22 = (undefined2)((uint)uVar21 >> 0x10);
            local_178 = (void *)0x0;
            local_170 = 0;
            pvVar20 = pvVar19;
            if (*psVar7 != 0) {
              lVar9 = -1;
              do {
                lVar5 = lVar9 + 1;
                lVar9 = lVar9 + 1;
              } while (psVar7[lVar5] != 0);
              uVar11 = (int)lVar9 + 1;
              local_170 = (ulonglong)uVar11;
              if (0 < (int)uVar11) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
                uVar11 = (uint)local_170;
              }
              pvVar19 = local_178;
              pvVar20 = (void *)(ulonglong)uVar11;
              FGenericPlatformString::Memcpy(local_178,psVar7);
              pvVar13 = local_198;
            }
            iVar6 = *(int *)(*(longlong *)(param_1 + 0x50) + 8 + lVar12);
            if (iVar6 < 2) {
              uVar17 = local_190 & 0xffffffff;
              iVar6 = local_190._4_4_;
              local_190 = 0;
              local_198 = (void *)0x0;
            }
            else {
              pvVar13 = (void *)0x0;
              if ((int)local_190 != 0) {
                pvVar13 = (void *)(ulonglong)((int)local_190 - 1);
              }
              iVar16 = (int)pvVar13;
              if ((iVar6 != 0) || (iVar14 = 1, iVar16 == 0)) {
                iVar14 = 0;
              }
              pvVar4 = *(void **)(*(longlong *)(param_1 + 0x50) + lVar12);
              local_1c8 = (void *)0x0;
              local_1c0 = CONCAT44(local_1c0._4_4_,iVar6);
              if ((iVar6 == 0) && (iVar14 + iVar16 == 0)) {
                local_1c0 = 0;
                uVar17 = 0;
                pvVar13 = (void *)0x0;
                iVar6 = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                          (&local_1c8,iVar6 + iVar14 + iVar16,0);
                pvVar13 = local_1c8;
                _guard_xfg_dispatch_icall_nop(local_1c8,pvVar4,(longlong)iVar6 * 2);
                uVar17 = local_1c0 & 0xffffffff;
                iVar6 = local_1c0._4_4_;
              }
              if (iVar16 != 0) {
                iVar14 = (int)uVar17;
                uVar11 = iVar16 + (uint)(iVar14 == 0) + iVar14;
                local_1c0._0_4_ = uVar11;
                if (iVar6 < (int)uVar11) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,uVar17);
                  pvVar13 = local_1c8;
                  iVar6 = local_1c0._4_4_;
                }
                uVar17 = (ulonglong)(uint)local_1c0;
                pvVar4 = (void *)((longlong)pvVar13 +
                                 ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(pvVar4,local_198,(longlong)iVar16 * 2);
                *(undefined2 *)((longlong)iVar16 * 2 + (longlong)pvVar4) = 0;
              }
              local_1c8 = (void *)0x0;
              local_1c0 = 0;
            }
            uVar11 = (uint)uVar17;
            iVar16 = (int)pvVar20;
            if ((int)uVar11 < 2) {
              local_17c = local_170._4_4_;
              local_178 = (void *)0x0;
              local_170 = 0;
              local_188 = pvVar19;
              local_180 = iVar16;
            }
            else {
              if (iVar16 == 0) {
                iVar16 = 0;
              }
              else {
                iVar16 = iVar16 + -1;
              }
              if ((uVar11 != 0) || (iVar14 = 1, iVar16 == 0)) {
                iVar14 = 0;
              }
              local_1b8 = pvVar13;
              local_1b0._4_4_ = iVar6;
              if (iVar6 < (int)(iVar14 + uVar11 + iVar16)) {
                local_1b0._0_4_ = uVar11;
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1b8);
                uVar17 = (ulonglong)(uint)local_1b0;
              }
              iVar15 = (int)uVar17;
              pvVar20 = local_1b8;
              iVar14 = local_1b0._4_4_;
              iVar6 = iVar15;
              if (iVar16 != 0) {
                local_1b0._0_4_ = iVar16 + (uint)(iVar15 == 0) + iVar15;
                if (local_1b0._4_4_ < (int)(uint)local_1b0) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,uVar17);
                }
                iVar14 = local_1b0._4_4_;
                iVar6 = (uint)local_1b0;
                pvVar20 = local_1b8;
                pvVar13 = (void *)((longlong)local_1b8 +
                                  ((longlong)iVar15 - (ulonglong)(iVar15 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(pvVar13,pvVar19,(longlong)iVar16 * 2);
                *(undefined2 *)((longlong)iVar16 * 2 + (longlong)pvVar13) = 0;
              }
              local_1b8 = (void *)0x0;
              local_1b0 = 0;
              pvVar13 = pvVar19;
              local_188 = pvVar20;
              local_17c = iVar14;
              local_180 = iVar6;
            }
            if (pvVar13 != (void *)0x0) {
              FMemory::Free(pvVar13);
            }
            pvVar19 = (void *)0x0;
            if (local_198 != (void *)0x0) {
              FMemory::Free(local_198);
            }
            local_128 = 0;
            local_120 = 9;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
            FGenericPlatformString::Memcpy(local_128,L"Presence",0x12);
            FUN_141606040(&local_128,&local_188,local_108,0);
            if (local_128 != 0) {
              FMemory::Free();
            }
            lVar12 = FText::ToString(local_108);
            if (*(int *)(lVar12 + 8) < 2) {
              local_168 = (void *)0x0;
              local_160 = 9;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
              pvVar13 = local_168;
              FGenericPlatformString::Convert<char,wchar_t>
                        (local_168,9,"_UNKNOWN",9,CONCAT22(uVar22,0x3f));
              puVar10 = (undefined8 *)(local_f0 + *(longlong *)(param_1 + 0x50));
              iVar6 = *(int *)(puVar10 + 1);
              iVar16 = (int)local_160;
              if (iVar6 < 2) {
                iVar14 = local_160._4_4_;
                local_160 = 0;
                local_168 = (void *)0x0;
                pvVar20 = pvVar19;
                pvVar19 = pvVar13;
              }
              else {
                iVar14 = 0;
                iVar15 = iVar14;
                if ((int)local_160 != 0) {
                  iVar15 = (int)local_160 + -1;
                }
                if ((iVar6 != 0) || (iVar16 = 1, iVar15 == 0)) {
                  iVar16 = iVar14;
                }
                pvVar20 = (void *)*puVar10;
                local_1a8 = (void *)0x0;
                local_1a0 = CONCAT44(local_1a0._4_4_,iVar6);
                if ((iVar6 == 0) && (iVar15 + iVar16 == 0)) {
                  local_1a0 = 0;
                  uVar17 = 0;
                }
                else {
                  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                            (&local_1a8,iVar6 + iVar15 + iVar16,0);
                  pvVar19 = local_1a8;
                  _guard_xfg_dispatch_icall_nop(local_1a8,pvVar20,(longlong)iVar6 * 2);
                  uVar17 = local_1a0 & 0xffffffff;
                  iVar14 = local_1a0._4_4_;
                }
                iVar6 = (int)uVar17;
                iVar16 = iVar6;
                if (iVar15 != 0) {
                  iVar16 = iVar6 + (uint)(iVar6 == 0) + iVar15;
                  local_1a0._0_4_ = iVar16;
                  if (iVar14 < iVar16) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,uVar17);
                    pvVar19 = local_1a8;
                    iVar14 = local_1a0._4_4_;
                  }
                  iVar16 = (int)local_1a0;
                  pvVar20 = (void *)((longlong)pvVar19 +
                                    ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
                  _guard_xfg_dispatch_icall_nop(pvVar20,pvVar13,(longlong)iVar15 * 2);
                  *(undefined2 *)((longlong)pvVar20 + (longlong)iVar15 * 2) = 0;
                }
                local_1a8 = (void *)0x0;
                local_1a0 = 0;
                pvVar20 = pvVar13;
              }
              if (local_188 != (void *)0x0) {
                FMemory::Free();
              }
              local_188 = pvVar19;
              local_180 = iVar16;
              local_17c = iVar14;
              if (pvVar20 != (void *)0x0) {
                FMemory::Free(pvVar20);
              }
              local_118 = 0;
              local_110 = 9;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
              FGenericPlatformString::Memcpy(local_118,L"Presence",0x12);
              FUN_141606040(&local_118,&local_188,local_108,0);
              if (local_118 != 0) {
                FMemory::Free();
              }
              lVar12 = FText::ToString(local_108);
              psVar7 = local_e8;
              if (1 < *(int *)(lVar12 + 8)) goto LAB_1405001c5;
            }
            else {
LAB_1405001c5:
              puVar10 = (undefined8 *)FText::ToString(local_108);
              if (*(int *)(puVar10 + 1) == 0) {
                psVar7 = &DAT_143f3eda8;
              }
              else {
                psVar7 = (short *)*puVar10;
              }
            }
            puVar18 = &DAT_143f3eda8;
            if (local_150 != 0) {
              puVar18 = local_158;
            }
            FString::ReplaceInline(param_2,puVar18,psVar7);
            if (local_188 != (void *)0x0) {
              FMemory::Free();
            }
            plVar3 = local_100;
            if (local_100 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_100 + 1;
              lVar12 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar12 == 1) {
                (**(code **)*local_100)(local_100);
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
        }
        if (local_158 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_res18 = local_res18 + 1;
        local_res20 = local_res20 + 1;
      } while (local_res18 < *(int *)(param_1 + 0x58));
    }
  }
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_c8 + 1;
    lVar12 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar2 = (int *)((longlong)local_c8 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_c8 + 8))(local_c8,1);
      }
    }
  }
  if (local_148 != 0) {
    FMemory::Free();
  }
  plVar3 = local_70;
  if (local_60 != 0) {
    FMemory::Free();
    plVar3 = local_70;
  }
  for (; local_68 != 0; local_68 = local_68 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_70 != (longlong *)0x0) {
    FMemory::Free(local_70);
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  if (local_b8[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1405005b0 FUN_1405005b0 body=282 status=ok
// SIG undefined FUN_1405005b0(void)

void FUN_1405005b0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong local_18;
  longlong *local_10;
  
  plVar3 = param_1 + 0x59;
  iVar7 = -0x7fffbffb;
  if ((*plVar3 != 0) && (*(int *)(*plVar3 + 0x18) == 1)) {
    iVar7 = 0;
    if (param_1[0x51] != 0) {
      cVar6 = FUN_140516dc0();
      if ((cVar6 != '\0') && (*(char *)(*plVar3 + 0x78) == '\0')) {
        *(undefined4 *)(*plVar3 + 0x18) = 3;
        local_10 = (longlong *)0x0;
        if (plVar3 != &local_18) {
          *plVar3 = 0;
          local_18 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x5a,&local_10);
          plVar3 = local_10;
          if (local_10 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_10 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*local_10)(local_10);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*local_10 + 8))(local_10,1);
              }
            }
          }
        }
        goto LAB_140500699;
      }
    }
    FUN_14052ac70(param_1);
    *(undefined4 *)(*plVar3 + 0x18) = 3;
  }
LAB_140500699:
                    /* WARNING: Could not recover jumptable at 0x0001405006c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x148))(param_1,(iVar7 != 0) + '\x01');
  return;
}



// FUNCTION 1405006e0 FUN_1405006e0 body=762 status=ok
// SIG undefined FUN_1405006e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1405006e0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined2 *puVar11;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 *local_170;
  undefined8 local_168;
  longlong *local_160;
  undefined8 local_158;
  longlong *local_150;
  longlong local_148 [3];
  undefined8 local_130;
  undefined4 local_128;
  undefined2 *local_120;
  int local_118;
  longlong local_110 [2];
  longlong local_100 [3];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  lVar6 = FUN_142b45e90();
  local_150 = (longlong *)0x0;
  local_158 = 0;
  local_148[2] = *(undefined8 *)(lVar6 + 0x18);
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 1;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_e8 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_e0,&local_150);
  plVar3 = local_150;
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_150 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  local_b0 = 1;
  local_d8 = 0x200000002;
  local_148[0] = 0;
  local_148[1] = 0;
  local_130 = 0;
  local_128 = 0;
  puVar7 = (undefined8 *)operator_new(0x28,&local_130);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = param_1;
    *puVar7 = &DAT_143f3ed00;
    puVar7[2] = FUN_1405009e0;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[4] = uVar8;
    *puVar7 = &PTR_GetPoolName_143f3ed48;
  }
  FString::PrintfImpl(&local_120,L"%I64u",param_4);
  puVar11 = &DAT_143f3eda8;
  if (local_118 != 0) {
    puVar11 = local_120;
  }
  uVar8 = FUN_14050e7e0(param_1,local_100,param_2);
  local_178 = CONCAT44(local_178._4_4_,1);
  uVar9 = FString::Replace(param_3,local_110,L"%ORDERID%",puVar11);
  local_170 = &local_130;
  local_178 = uVar8;
  uVar5 = FUN_142b558f0(local_148[2],&local_e8,uVar9,local_148);
  if (local_110[0] != 0) {
    FMemory::Free();
  }
  if (local_120 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_100[0] != 0) {
    FMemory::Free();
  }
  if (local_148[0] != 0) {
    FMemory::Free();
  }
  plVar3 = (longlong *)(param_1 + 0x90);
  iVar4 = *(int *)(param_1 + 0x98);
  *(int *)(param_1 + 0x98) = iVar4 + 1;
  if (*(int *)(param_1 + 0x9c) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar3,iVar4);
  }
  lVar6 = *plVar3;
  lVar10 = (longlong)iVar4 * 0x20;
  *(undefined8 *)(lVar10 + lVar6) = 0;
  *(undefined8 *)(lVar10 + 8 + lVar6) = 0;
  *(undefined8 *)(lVar10 + 0x10 + lVar6) = 0;
  *(undefined8 *)(lVar10 + 0x18 + lVar6) = 0;
  *(undefined8 *)(*plVar3 + 0x18 + lVar10) = param_4;
  *(undefined4 *)(*plVar3 + 0x10 + lVar10) = uVar5;
  local_160 = (longlong *)param_2[1];
  local_168 = *param_2;
  if (local_160 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_160 + 1) = (int)local_160[1] + 1;
    UNLOCK();
  }
  puVar7 = (undefined8 *)(*plVar3 + lVar10);
  if (puVar7 != &local_168) {
    *puVar7 = local_168;
    local_168 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(puVar7 + 1,&local_160);
  }
  plVar3 = local_160;
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_160 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_160)(local_160);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_160 + 8))(local_160,1);
      }
    }
  }
  FUN_1404f9010(&local_e8);
  return;
}



// FUNCTION 1405009e0 FUN_1405009e0 body=694 status=ok
// SIG undefined FUN_1405009e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140500ab1) */
/* WARNING: Removing unreachable block (ram,0x000140500abd) */
/* WARNING: Removing unreachable block (ram,0x000140500ad5) */
/* WARNING: Removing unreachable block (ram,0x000140500ae4) */

void FUN_1405009e0(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  longlong local_d0 [2];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined2 *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong *plStack_98;
  longlong local_88;
  longlong *local_80;
  longlong local_78 [2];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  iVar11 = 0;
  local_a0 = 0;
  plStack_98 = (longlong *)0x0;
  while( true ) {
    if ((iVar11 < 0) || ((int)param_1[0x13] <= iVar11)) goto LAB_140500af8;
    if (*(int *)((longlong)iVar11 * 0x20 + 0x10 + param_1[0x12]) == *(int *)(*param_2 + 8)) break;
    iVar11 = iVar11 + 1;
  }
  plVar10 = (longlong *)((longlong)iVar11 * 0x20 + param_1[0x12]);
  local_a0 = *plVar10;
  plStack_98 = (longlong *)plVar10[1];
  if (plStack_98 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_98 + 1) = (int)plStack_98[1] + 1;
    UNLOCK();
  }
  local_c0._0_4_ = (undefined4)local_a0;
  local_c0._4_4_ = (undefined4)((ulonglong)local_a0 >> 0x20);
  uStack_b8._0_4_ = SUB84(plStack_98,0);
  uStack_b8._4_4_ = (undefined4)((ulonglong)plStack_98 >> 0x20);
  uStack_4c = uStack_b8._4_4_;
  uStack_50 = (undefined4)uStack_b8;
  uStack_54 = local_c0._4_4_;
  local_58 = (undefined4)local_c0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_88 = plVar10[3];
LAB_140500af8:
  lVar4 = local_88;
  bVar12 = false;
  local_d8 = param_4;
  if (*param_4 != 0) {
    local_d0[0] = 0;
    local_d0[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_d0,0);
    FGenericPlatformString::Memcpy(local_d0[0],L"message",0x10);
    local_b0 = (undefined2 *)0x0;
    local_a8 = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b0,0);
    puVar5 = local_b0;
    FGenericPlatformString::Memcpy(local_b0,L"TRANSACTION_CANCELLED",0x2c);
    puVar6 = (undefined8 *)FJsonObject::GetStringField(*local_d8,local_78,local_d0);
    puVar8 = &DAT_143f3eda8;
    puVar9 = &DAT_143f3eda8;
    if ((int)local_a8 != 0) {
      puVar9 = puVar5;
    }
    if (*(int *)(puVar6 + 1) != 0) {
      puVar8 = (undefined2 *)*puVar6;
    }
    iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
    bVar12 = iVar11 == 0;
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    if (puVar5 != (undefined2 *)0x0) {
      FMemory::Free(puVar5);
    }
    if (local_d0[0] != 0) {
      FMemory::Free();
    }
  }
  lVar3 = *param_1;
  uVar7 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_a0 + 8,local_68);
  (**(code **)(lVar3 + 0xa0))(param_1,uVar7,lVar4,bVar12);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_60 + 1;
    lVar4 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  local_80 = param_2;
  FUN_1404f6b20(param_1 + 0x12,&local_80);
  plVar10 = plStack_98;
  if (plStack_98 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_98 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_98)(plStack_98);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plStack_98 + 8))(plStack_98,1);
      }
    }
  }
  return;
}



// FUNCTION 140500cb0 FUN_140500cb0 body=402 status=ok
// SIG undefined FUN_140500cb0(void)

void FUN_140500cb0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong *local_38;
  undefined8 local_30;
  
  puVar3 = (undefined8 *)0x0;
  if ((int)param_1[0x2b] != 1) {
    *(undefined4 *)(param_1 + 0x2b) = 0;
    puVar2 = (undefined8 *)operator_new(0x60);
    if (puVar2 != (undefined8 *)0x0) {
      FOnlineAsyncTaskSteam::FOnlineAsyncTaskSteam(puVar2,param_1[0x22],0);
      *puVar2 = &PTR_FUN_143f9c6f8;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      iVar5 = *(int *)(param_3 + 1);
      param_3 = (undefined8 *)*param_3;
      *(int *)(puVar2 + 8) = iVar5;
      if (iVar5 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar2 + 7,iVar5,0);
        puVar3 = (undefined8 *)puVar2[7];
        do {
          *puVar3 = 0;
          iVar1 = *(int *)(param_3 + 1);
          _Src = (void *)*param_3;
          *(int *)(puVar3 + 1) = iVar1;
          if (iVar1 == 0) {
            *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
            _guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar1 * 2);
          }
          puVar3 = puVar3 + 2;
          param_3 = param_3 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      puVar2[9] = 0;
      puVar2[10] = 0;
      *(undefined1 *)(puVar2 + 0xb) = 0;
      puVar3 = puVar2;
    }
    FUN_1404adba0(*(undefined8 *)(param_1[0x22] + 0x148),puVar3);
    *(undefined4 *)(param_1 + 0x2b) = 1;
    return;
  }
  local_38 = (longlong *)0x0;
  local_30 = 0;
  (**(code **)(*param_1 + 0x138))(param_1,2,&local_38);
  plVar4 = local_38;
  for (iVar5 = (int)local_30; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}



// FUNCTION 140500e50 ClearOnPingSearchResultsCompleteDelegate_Handle body=37 status=ok
// SIG undefined ClearOnPingSearchResultsCompleteDelegate_Handle(void)

void IOnlineSession::ClearOnPingSearchResultsCompleteDelegate_Handle
               (longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0xe0,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 140500e80 ClearOnCancelFindSessionsCompleteDelegate_Handle body=37 status=ok
// SIG undefined ClearOnCancelFindSessionsCompleteDelegate_Handle(void)

void IOnlineSession::ClearOnCancelFindSessionsCompleteDelegate_Handle
               (longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 200,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 140500eb0 FUN_140500eb0 body=190 status=ok
// SIG undefined FUN_140500eb0(void)

void FUN_140500eb0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  lVar2 = *param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x78) + lVar5);
      if ((((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) &&
         (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8), *plVar1 == lVar2))
      {
        if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar4 != 0) {
            lVar2 = FMemory::Realloc(*plVar4,0,0);
            *plVar4 = lVar2;
          }
          *(undefined4 *)(plVar4 + 1) = 0;
        }
        break;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x80));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x78),0);
  *param_2 = 0;
  return;
}



// FUNCTION 140500f80 ClearOnChatRoomPollUpdateDelegate_Handle body=37 status=ok
// SIG undefined ClearOnChatRoomPollUpdateDelegate_Handle(void)

void IOnlineChatMixer::ClearOnChatRoomPollUpdateDelegate_Handle
               (longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x140,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 140500fb0 ClearOnQueryRecentPlayersCompleteDelegate_Handle body=37 status=ok
// SIG undefined ClearOnQueryRecentPlayersCompleteDelegate_Handle(void)

void IOnlineFriends::ClearOnQueryRecentPlayersCompleteDelegate_Handle
               (longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x128,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 140500fe0 ClearOnQueryRecentPlayersCompleteDelegate_Handle body=37 status=ok
// SIG undefined ClearOnQueryRecentPlayersCompleteDelegate_Handle(void)

void IOnlineFriends::ClearOnQueryRecentPlayersCompleteDelegate_Handle
               (longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x110,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 140501010 ClearOnUnregisterPlayersCompleteDelegate_Handle body=37 status=ok
// SIG undefined ClearOnUnregisterPlayersCompleteDelegate_Handle(void)

void IOnlineSession::ClearOnUnregisterPlayersCompleteDelegate_Handle
               (longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x170,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 140501040 ClearOnRegisterPlayersCompleteDelegate_Handle body=37 status=ok
// SIG undefined ClearOnRegisterPlayersCompleteDelegate_Handle(void)

void IOnlineSession::ClearOnRegisterPlayersCompleteDelegate_Handle
               (longlong param_1,undefined8 *param_2)

{
  TBaseMulticastDelegate<void>::Remove(param_1 + 0x158,*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 140501070 FUN_140501070 body=277 status=ok
// SIG undefined FUN_140501070(void)

void FUN_140501070(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  longlong *local_18;
  longlong *local_10;
  
  uVar7 = 2;
  if (((param_1[9] != 0) && (cVar4 = FUN_140516dc0(), cVar4 != '\0')) &&
     (cVar4 = (**(code **)(*(longlong *)param_1[9] + 0xf8))((longlong *)param_1[9],param_2),
     cVar4 != '\0')) {
    (**(code **)(*(longlong *)param_1[9] + 0x50))((longlong *)param_1[9],&local_18);
    uVar7 = 2;
    if ((local_18 != (longlong *)0x0) &&
       (iVar5 = (**(code **)(*local_18 + 0x78))(local_18,param_2), iVar5 == 2)) {
      puVar6 = (undefined8 *)
               SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamFriends_1461fc730);
      (**(code **)(*(longlong *)*puVar6 + 0x160))();
      *(undefined4 *)(param_1 + 0xd) = 0;
      if (*(int *)((longlong)param_1 + 0x6c) != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xc,0);
      }
      uVar7 = 1;
    }
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
  }
                    /* WARNING: Could not recover jumptable at 0x000140501181. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))(param_1,param_2,uVar7);
  return;
}



// FUNCTION 140501190 FUN_140501190 body=149 status=ok
// SIG undefined FUN_140501190(void)

undefined8 FUN_140501190(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)(param_1 + 0x28);
  iVar4 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x38))(plVar1);
  if (iVar4 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    iVar4 = (**(code **)(*plVar1 + 0x38))(plVar1);
    iVar4 = iVar4 + -9000;
    if ((-1 < iVar4) && (iVar4 < *(int *)(lVar3 + 0x188))) {
      lVar5 = *(longlong *)(lVar3 + 0x180);
      if (*(longlong *)(lVar3 + 0x180) == 0) {
        lVar5 = lVar3 + 0x170;
      }
      puVar2 = (uint *)(lVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << ((byte)iVar4 & 0x1f));
    }
    (**(code **)(*plVar1 + 0x30))(plVar1,0);
  }
  return 1;
}



// FUNCTION 140501230 FUN_140501230 body=386 status=ok
// SIG undefined FUN_140501230(void)

void FUN_140501230(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_28;
  longlong *local_20;
  longlong *local_10;
  
  local_10 = *(longlong **)(param_1 + 0x1980);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  lVar8 = *(longlong *)(param_1 + 0x58);
  if (lVar8 != 0) {
    lVar5 = FUN_14052c190();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140501298;
  }
  lVar8 = 0;
LAB_140501298:
  FUN_1425b66d0(param_1);
  if (lVar8 != 0) {
    plVar6 = (longlong *)FName::FName(local_res8,L"STEAM",1);
    if ((*(longlong *)(lVar8 + 0x588) == *plVar6) && (*(longlong *)(param_1 + 0x1978) != 0)) {
      uVar7 = FName::FName(local_res10,L"STEAM",1);
      lVar8 = FUN_1419c6b80(uVar7);
      if (lVar8 != 0) {
        local_28 = *(undefined8 *)(param_1 + 0x1978);
        plVar6 = *(longlong **)(param_1 + 0x1980);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        local_20 = plVar6;
        FUN_14052a400(lVar8,&local_28);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar6 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_20)();
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
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
  plVar6 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
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



// FUNCTION 1405013c0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
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



// FUNCTION 140501470 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FUniqueNetIdSteam,int>,TDefaultMapHashableKeyFuncs<FUniqueNetIdSteam,int,0>,FDefaultSetAllocator>
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



// FUNCTION 140501520 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>,TDefaultMapHashableKeyFuncs<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>,0>,FDefaultSetAllocator>
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
      TSet<TTuple<FUniqueNetIdSteam,TArray<FOnlineAchievement,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FUniqueNetIdSteam,TArray<FOnlineAchievement,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1405015f0 FUN_1405015f0 body=23 status=ok
// SIG undefined FUN_1405015f0(void)

void FUN_1405015f0(longlong *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x20))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 140501610 FUN_140501610 body=126 status=ok
// SIG undefined FUN_140501610(void)

undefined1 FUN_140501610(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined1 local_res8 [8];
  longlong local_18 [2];
  
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x68))(param_2,local_18,0);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar3;
  }
  (**(code **)(*param_1 + 8))(param_1,puVar4,local_res8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  lVar1 = *param_1;
  uVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  (**(code **)(lVar1 + 0x30))(param_1,uVar2);
  return local_res8[0];
}



// FUNCTION 140501690 FUN_140501690 body=482 status=ok
// SIG undefined FUN_140501690(void)

undefined8 * FUN_140501690(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = DAT_146853150;
  if (DAT_146853150 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)operator_new(0x4638);
    puVar3 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR_FUN_143f9b018;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 3));
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 3),4000);
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      *(undefined4 *)(puVar1 + 0xe) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
      puVar1[0x10] = 0;
      *(undefined4 *)(puVar1 + 0x11) = 0;
      uVar2 = FUN_14164ab60();
      FUN_14158c9d0(puVar1 + 0x12,L"FSocketSubsystemSteam",0,uVar2);
      *puVar1 = &PTR_FUN_143f9c7f8;
      puVar1[0x12] = &PTR_LAB_143f9c8c0;
      puVar1[0x15] = 0;
      puVar1[0x16] = 0;
      puVar1[0x17] = 0;
      puVar1[0x18] = 0;
      puVar1[0x1b] = 0;
      puVar1[0x1c] = 0;
      *(undefined4 *)(puVar1 + 0x1d) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0xec) = 0;
      puVar1[0x1f] = 0;
      *(undefined4 *)(puVar1 + 0x20) = 0;
      puVar1[0x21] = 0;
      puVar1[0x22] = 0;
      puVar1[0x23] = 0;
      puVar1[0x24] = 0;
      puVar1[0x27] = 0;
      puVar1[0x28] = 0;
      *(undefined4 *)(puVar1 + 0x29) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x14c) = 0;
      puVar1[0x2b] = 0;
      *(undefined4 *)(puVar1 + 0x2c) = 0;
      *(undefined1 *)(puVar1 + 0x2d) = 0;
      puVar1[0x30] = 0;
      *(undefined4 *)(puVar1 + 0x31) = 0;
      *(undefined4 *)((longlong)puVar1 + 0x18c) = 0x100;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1 + 0x2e,0);
      *(undefined4 *)(puVar1 + 0x31) = 0x100;
      puVar3 = (undefined8 *)puVar1[0x30];
      if ((undefined8 *)puVar1[0x30] == (undefined8 *)0x0) {
        puVar3 = puVar1 + 0x2e;
      }
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined4 *)(puVar1 + 0x32) = 0;
      puVar1[0x8c3] = 0;
      puVar1[0x8c4] = 0;
      puVar1[0x8c5] = 0;
      *(undefined4 *)(puVar1 + 0x8c6) = 0;
      puVar3 = puVar1;
    }
  }
  DAT_146853150 = puVar3;
  return puVar3;
}



// FUNCTION 140501880 FUN_140501880 body=95 status=ok
// SIG undefined FUN_140501880(void)

void FUN_140501880(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_143f9e980;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar3[3] = *(undefined8 *)(param_1 + 0x18);
    puVar3[4] = uVar2;
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar3 = &PTR_GetPoolName_143f9e9c8;
  }
  return;
}



// FUNCTION 1405018e0 FUN_1405018e0 body=168 status=ok
// SIG undefined FUN_1405018e0(void)

undefined8 * FUN_1405018e0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f9a840;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[1] = &PTR_FUN_143f9a6c8;
    puVar1[4] = 0;
    *(undefined2 *)(puVar1 + 5) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  return param_2;
}



// FUNCTION 140501990 FUN_140501990 body=853 status=ok
// SIG undefined FUN_140501990(void)

undefined8 * FUN_140501990(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined8 local_98;
  longlong *local_90;
  longlong *local_88;
  int local_80;
  undefined8 *local_78;
  longlong *local_70;
  code *local_68;
  undefined4 uStack_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  puVar10 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)operator_new(0x48);
  puVar8 = puVar10;
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_143f9a7a8;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[5] = &PTR_FUN_143f9a6c8;
    puVar5[8] = 0;
    puVar8 = puVar5;
  }
  local_res18 = 0;
  lVar9 = 8;
  puVar5 = &local_res18;
  do {
    iVar4 = rand();
    *(char *)puVar5 = (char)iVar4;
    puVar5 = (undefined8 *)((longlong)puVar5 + 1);
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  puVar8[8] = local_res18;
  uVar6 = FName::FName(local_res20,L"WINDOWS",1);
  plVar7 = (longlong *)FUN_1419c6b80(uVar6);
  lVar9 = *plVar7;
  uVar6 = FUN_141672640();
  puVar5 = (undefined8 *)(**(code **)(lVar9 + 0xb8))(plVar7,local_58,uVar6,local_res10);
  local_90 = (longlong *)puVar5[1];
  local_98 = *puVar5;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
    UNLOCK();
  }
  puVar5 = puVar8 + 1;
  if (puVar5 != &local_98) {
    *puVar5 = local_98;
    local_98 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(puVar8 + 2,&local_90);
  }
  plVar7 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_50 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  (**(code **)(*(longlong *)*puVar5 + 0x30))((longlong *)*puVar5,DAT_146b18930);
  plVar7 = (longlong *)operator_new(0x18);
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_143f3f2d0;
    plVar7[2] = (longlong)puVar8;
  }
  local_78 = puVar8;
  local_70 = plVar7;
  SharedPointerInternals::EnableSharedFromThis(&local_78,puVar8,puVar8);
  if ((undefined8 **)(param_2 + 0xa0) != &local_78) {
    *(undefined8 **)(param_2 + 0xa0) = puVar8;
    local_78 = (undefined8 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 0xa8,&local_70);
    plVar7 = local_70;
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  puVar8 = puVar10;
  if (((*(char *)(param_2 + 0x38) != '\0') &&
      (puVar8 = (undefined8 *)0x0, *(char *)(param_2 + 0xd8) != '\0')) &&
     (*(int *)(param_1 + 0x3b8) == 0)) {
    local_68 = FUN_14051a4a0;
    uStack_60 = 0;
    uVar6 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x278,local_48);
    FUN_1404f5700(&local_88,uVar6,&local_68);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_40 + 1;
      lVar9 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    cVar3 = FUN_1404b0b90(param_1 + 0x388,&local_88);
    if (cVar3 == '\0') {
      puVar10 = (undefined8 *)0x80004005;
      FUN_1404b6bd0(param_1 + 0x388);
    }
    if (local_80 != 0) {
      if (local_88 == (longlong *)0x0) {
        return puVar10;
      }
      (**(code **)(*local_88 + 0x28))(local_88,0);
      if (local_88 != (longlong *)0x0) {
        local_88 = (longlong *)FMemory::Realloc(local_88,0,0);
      }
      local_80 = 0;
    }
    puVar8 = puVar10;
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
  }
  return puVar8;
}



// FUNCTION 140501cf0 FUN_140501cf0 body=1448 status=ok
// SIG undefined FUN_140501cf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140501cf0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined2 *puVar6;
  char cVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined2 *puVar14;
  int *piVar15;
  uint *puVar16;
  undefined1 auStack_258 [32];
  longlong local_238;
  int local_230 [2];
  undefined2 *local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210 [2];
  int local_208;
  uint uStack_204;
  uint *puStack_200;
  undefined4 local_1f8;
  int iStack_1f4;
  int iStack_1f0;
  undefined4 uStack_1ec;
  undefined2 *local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  longlong *local_1d0;
  undefined8 uStack_1c8;
  uint *local_1c0;
  uint uStack_1b8;
  int iStack_1b4;
  int local_1b0;
  undefined4 uStack_1ac;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined8 uStack_198;
  uint *puStack_190;
  undefined4 uStack_188;
  int iStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  undefined1 local_178 [128];
  undefined2 *local_f8;
  undefined1 local_d8 [128];
  undefined2 *local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  local_1d8 = param_1;
  if (0 < *(int *)(*(longlong *)(param_1 + 0x28) + 0x1c)) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x50))();
  }
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x48))(*(longlong **)(param_1 + 0x38),1);
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))
            (*(longlong **)(param_1 + 0x38),"SHOULDADVERTISE",1);
  lVar13 = *(longlong *)(param_1 + 0x28);
  local_1d0 = (longlong *)(lVar13 + 0x28);
  uStack_204 = 1;
  iVar1 = *(int *)(lVar13 + 0x50);
  puStack_200 = (uint *)(lVar13 + 0x38);
  local_208 = 0;
  iStack_1f4 = 0;
  iStack_1f0 = 0;
  if (iVar1 != 0) {
    puVar16 = *(uint **)(lVar13 + 0x48);
    if (*(uint **)(lVar13 + 0x48) == (uint *)0x0) {
      puVar16 = puStack_200;
    }
    uVar2 = *puVar16;
    iStack_1f0 = 0;
    local_208 = 0;
    while (uVar2 == 0) {
      lVar13 = (longlong)local_208;
      iStack_1f0 = iStack_1f0 + 0x20;
      iVar12 = local_208 + 1;
      bVar5 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_208;
      local_208 = iVar12;
      if (bVar5) goto LAB_140501e14;
      uVar2 = puVar16[lVar13 + 1];
    }
    uStack_204 = -uVar2 & uVar2;
    iVar12 = 0x1f;
    if (uStack_204 != 0) {
      for (; uStack_204 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uStack_204 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    iStack_1f4 = (iStack_1f0 - iVar12) + 0x1f;
    if (iVar1 < iStack_1f4) {
LAB_140501e14:
      iStack_1f4 = iVar1;
    }
  }
  local_1f8 = 0xffffffff;
  uStack_1c8 = CONCAT44(uStack_204,local_208);
  uStack_188 = 0xffffffff;
  iStack_184 = iStack_1f4;
  iStack_180 = iStack_1f0;
  uStack_17c = uStack_1ec;
  uStack_1b8 = 0xffffffff;
  iStack_1b4 = iStack_1f4;
  local_1b0 = iStack_1f0;
  uStack_1ac = uStack_1ec;
  local_1c0 = puStack_200;
  local_1a0 = local_1d0;
  uStack_198 = uStack_1c8;
  puStack_190 = puStack_200;
  if (iStack_1f4 < iVar1) {
    do {
      uVar8 = 0;
      local_238 = *(longlong *)((longlong)iStack_1b4 * 0x38 + *local_1d0);
      piVar15 = (int *)(*local_1d0 + 8 + (longlong)iStack_1b4 * 0x38);
      plVar9 = (longlong *)FName::FName(local_1a8,L"MINSLOTSAVAILABLE",1);
      if ((local_238 == *plVar9) && (*piVar15 == 1)) {
        local_230[0] = 0;
        FVariantData::GetValue(piVar15,local_230);
        if (local_230[0] != 0) {
          (**(code **)(**(longlong **)(param_1 + 0x38) + 0x40))();
        }
      }
      if (*(longlong *)(piVar15 + 8) != 0) {
        local_238 = *(longlong *)(piVar15 + 8);
      }
      local_228 = (undefined2 *)0x0;
      local_220 = 0;
      cVar7 = FUN_140520f80(local_238,piVar15,&local_228);
      puVar6 = local_228;
      if (cVar7 != '\0') {
        iVar1 = piVar15[6];
        iVar12 = *piVar15;
        if (iVar1 == 6) {
          if (iVar12 != 1) goto LAB_140502229;
          FVariantData::GetValue(piVar15,&local_218);
          puVar14 = &DAT_143f3eda8;
          if ((int)local_220 != 0) {
            puVar14 = puVar6;
          }
          lVar13 = TStringConversion<FTCHARToUTF8_Convert,128>::
                   TStringConversion<FTCHARToUTF8_Convert,128>(local_d8,puVar14);
          (**(code **)(**(longlong **)(param_1 + 0x38) + 0x38))
                    (*(longlong **)(param_1 + 0x38),*(undefined8 *)(lVar13 + 0x88),local_218);
          puVar14 = local_58;
        }
        else {
          if (iVar12 == 1) {
            FVariantData::GetValue(piVar15,local_210);
            iVar1 = piVar15[6];
            if (iVar1 == 1) {
              uVar8 = 3;
            }
            else if (iVar1 == 2) {
              uVar8 = 1;
            }
            else if (iVar1 == 3) {
              uVar8 = 2;
            }
            else if (iVar1 == 4) {
              uVar8 = 0xffffffff;
            }
            else if (iVar1 == 5) {
              uVar8 = 0xfffffffe;
            }
            puVar14 = &DAT_143f3eda8;
            if ((int)local_220 != 0) {
              puVar14 = puVar6;
            }
            lVar13 = TStringConversion<FTCHARToUTF8_Convert,128>::
                     TStringConversion<FTCHARToUTF8_Convert,128>(local_178,puVar14);
            uVar3 = local_210[0];
          }
          else {
            if (iVar12 != 2) {
              if (iVar12 == 6) {
                local_1e8 = (undefined2 *)0x0;
                local_1e0 = 0;
                FUN_1404b0a70(piVar15,&local_1e8);
                puVar14 = local_1e8;
                if (1 < (int)local_1e0) {
                  puVar14 = &DAT_143f3eda8;
                  if ((int)local_1e0 != 0) {
                    puVar14 = local_1e8;
                  }
                  lVar13 = TStringConversion<FTCHARToUTF8_Convert,128>::
                           TStringConversion<FTCHARToUTF8_Convert,128>(local_d8,puVar14);
                  puVar14 = &DAT_143f3eda8;
                  if ((int)local_220 != 0) {
                    puVar14 = puVar6;
                  }
                  uVar4 = *(undefined8 *)(lVar13 + 0x88);
                  lVar11 = TStringConversion<FTCHARToUTF8_Convert,128>::
                           TStringConversion<FTCHARToUTF8_Convert,128>(local_178,puVar14);
                  plVar9 = *(longlong **)(param_1 + 0x38);
                  lVar13 = *plVar9;
                  uVar8 = ToSteamLobbyCompareOp(piVar15[6]);
                  (**(code **)(lVar13 + 0x28))(plVar9,*(undefined8 *)(lVar11 + 0x88),uVar4,uVar8);
                  if (local_f8 != (undefined2 *)0x0) {
                    FMemory::Free();
                  }
                  puVar14 = local_1e8;
                  param_1 = local_1d8;
                  if (local_58 != (undefined2 *)0x0) {
                    FMemory::Free();
                    puVar14 = local_1e8;
                    param_1 = local_1d8;
                  }
                }
              }
              else {
                if (iVar12 != 7) goto LAB_140502229;
                if (iVar1 == 1) {
                  uVar8 = 3;
                }
                else if (iVar1 == 2) {
                  uVar8 = 1;
                }
                else if (iVar1 == 3) {
                  uVar8 = 2;
                }
                else if (iVar1 == 4) {
                  uVar8 = 0xffffffff;
                }
                else if (iVar1 == 5) {
                  uVar8 = 0xfffffffe;
                }
                puVar10 = (undefined8 *)FUN_1404b73f0(piVar15,&local_208);
                if (*(int *)(puVar10 + 1) == 0) {
                  puVar14 = &DAT_143f3eda8;
                }
                else {
                  puVar14 = (undefined2 *)*puVar10;
                }
                lVar13 = TStringConversion<FTCHARToUTF8_Convert,128>::
                         TStringConversion<FTCHARToUTF8_Convert,128>(local_178,puVar14);
                puVar14 = &DAT_143f3eda8;
                if ((int)local_220 != 0) {
                  puVar14 = puVar6;
                }
                uVar4 = *(undefined8 *)(lVar13 + 0x88);
                lVar13 = TStringConversion<FTCHARToUTF8_Convert,128>::
                         TStringConversion<FTCHARToUTF8_Convert,128>(local_d8,puVar14);
                (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))
                          (*(longlong **)(param_1 + 0x38),*(undefined8 *)(lVar13 + 0x88),uVar4,uVar8
                          );
                if (local_58 != (undefined2 *)0x0) {
                  FMemory::Free();
                }
                if (local_f8 != (undefined2 *)0x0) {
                  FMemory::Free();
                }
                puVar14 = (undefined2 *)CONCAT44(uStack_204,local_208);
              }
              goto LAB_14050221f;
            }
            FVariantData::GetValue(piVar15,&local_214);
            iVar1 = piVar15[6];
            if (iVar1 == 1) {
              uVar8 = 3;
            }
            else if (iVar1 == 2) {
              uVar8 = 1;
            }
            else if (iVar1 == 3) {
              uVar8 = 2;
            }
            else if (iVar1 == 4) {
              uVar8 = 0xffffffff;
            }
            else if (iVar1 == 5) {
              uVar8 = 0xfffffffe;
            }
            puVar14 = &DAT_143f3eda8;
            if ((int)local_220 != 0) {
              puVar14 = puVar6;
            }
            lVar13 = TStringConversion<FTCHARToUTF8_Convert,128>::
                     TStringConversion<FTCHARToUTF8_Convert,128>(local_178,puVar14);
            uVar3 = local_214;
          }
          (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))
                    (*(longlong **)(param_1 + 0x38),*(undefined8 *)(lVar13 + 0x88),uVar3,uVar8);
          puVar14 = local_f8;
        }
LAB_14050221f:
        if (puVar14 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
LAB_140502229:
      if (puVar6 != (undefined2 *)0x0) {
        FMemory::Free(puVar6);
      }
      uStack_1b8 = uStack_1b8 & ~uStack_1c8._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1c8);
    } while (iStack_1b4 < (int)local_1c0[6]);
  }
  return;
}



// FUNCTION 1405022a0 FUN_1405022a0 body=2148 status=ok
// SIG undefined FUN_1405022a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1405022a0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  BOOL BVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  char *pcVar12;
  longlong *plVar13;
  uint uVar14;
  longlong **pplVar15;
  longlong *plVar16;
  undefined4 uVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined1 auStack_118 [32];
  undefined2 local_f8;
  longlong local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong *plStack_c8;
  longlong *local_c0;
  ulonglong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined1 local_70 [8];
  longlong local_68;
  longlong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  plVar16 = (longlong *)0x0;
  plVar2 = (longlong *)((longlong *)*param_2)[1];
  local_e8 = *(longlong *)*param_2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  local_b0 = param_1;
  local_88 = param_4;
  lVar8 = FUN_140511190(param_1,param_3);
  if (lVar8 != 0) {
    (**(code **)(*param_1 + 0x50))(param_1,param_3,2);
    goto LAB_140502aa8;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x52);
  BVar6 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar6 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar7 = (int)param_1[0x58];
  *(int *)(param_1 + 0x58) = iVar7 + 1;
  if (*(int *)((longlong)param_1 + 0x2c4) < iVar7 + 1) {
    FUN_1404f33d0(param_1 + 0x57,iVar7);
  }
  plVar18 = (longlong *)((longlong)iVar7 * 0x118 + param_1[0x57]);
  plVar19 = plVar16;
  if (plVar18 != (longlong *)0x0) {
    *plVar18 = (longlong)&PTR_FUN_143f769a8;
    plVar18[1] = 0;
    plVar18[2] = 0;
    plVar18[3] = 0;
    plVar18[4] = 0;
    FUN_1404e8890(plVar18 + 5,local_88);
    plVar18[0x14] = 0;
    plVar18[0x15] = 0;
    *plVar18 = (longlong)&PTR__scalar_deleting_destructor__143f7d2c8;
    plVar18[0x16] = 0;
    plVar18[0x17] = param_3;
    *(undefined4 *)(plVar18 + 0x18) = 0xffffffff;
    plVar18[0x19] = 0;
    plVar18[0x1a] = 0;
    *(undefined1 *)(plVar18 + 0x1b) = 0;
    plVar18[0x1c] = 0;
    plVar18[0x1d] = 0;
    plVar18[0x1e] = 0;
    plVar18[0x1f] = 0;
    plVar18[0x20] = 0;
    plVar18[0x21] = 0;
    *(undefined4 *)(plVar18 + 0x22) = 0;
    plVar19 = plVar18;
  }
  LeaveCriticalSection(lpCriticalSection);
  *(undefined4 *)(plVar19 + 0x22) = 1;
  plVar9 = (longlong *)operator_new(0x48);
  plVar18 = plVar16;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_FUN_143f9a7a8;
    plVar9[1] = 0;
    plVar9[2] = 0;
    plVar9[3] = 0;
    plVar9[4] = 0;
    plVar9[6] = 0;
    plVar9[7] = 0;
    plVar9[5] = (longlong)&PTR_FUN_143f9a6c8;
    plVar9[8] = 0;
    plVar18 = plVar9;
  }
  plVar10 = (longlong *)operator_new(0x18);
  plVar9 = plVar16;
  if (plVar10 != (longlong *)0x0) {
    *(undefined4 *)(plVar10 + 1) = 1;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    *plVar10 = (longlong)&PTR_FUN_143f3f2d0;
    plVar10[2] = (longlong)plVar18;
    plVar9 = plVar10;
  }
  local_98 = plVar18;
  local_90 = plVar9;
  SharedPointerInternals::EnableSharedFromThis(&local_98,plVar18,plVar18);
  if ((longlong **)(plVar19 + 0x14) != &local_98) {
    plVar19[0x14] = (longlong)plVar18;
    local_98 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(plVar19 + 0x15,&local_90);
    plVar9 = local_90;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar9 + 1;
    lVar8 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  local_e0 = local_e8;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  plVar18 = plVar19 + 0x1c;
  local_d8 = plVar2;
  if (plVar18 != &local_e0) {
    *plVar18 = local_e8;
    local_e0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(plVar19 + 0x1d,&local_d8);
  }
  plVar9 = local_d8;
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_d8 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_d8 + 8))(local_d8,1);
      }
    }
  }
  plVar10 = (longlong *)plVar19[0x1d];
  plVar9 = plVar19 + 0x19;
  lVar8 = *plVar18;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  local_d0 = lVar8;
  plStack_c8 = plVar10;
  if (&local_d0 != plVar9) {
    local_d0 = *plVar9;
    plStack_c8 = (longlong *)plVar19[0x1a];
    *plVar9 = lVar8;
    plVar19[0x1a] = (longlong)plVar10;
    local_60 = lVar8;
    plStack_58 = plVar10;
  }
  plVar18 = plStack_c8;
  if (plStack_c8 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_c8 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_c8)(plStack_c8);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_c8 + 8))(plStack_c8,1);
      }
    }
  }
  *(int *)((longlong)plVar19 + 0xb4) = (int)plVar19[6];
  *(undefined1 *)(plVar19 + 0x1b) = 1;
  *(undefined4 *)(plVar19 + 0x16) = 0;
  plVar10 = (longlong *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
  plVar18 = plVar16;
  plVar9 = plVar16;
  if (*plVar10 == 0) {
    plVar10 = (longlong *)operator_new(0x18);
    if (plVar10 != (longlong *)0x0) {
      *(undefined4 *)(plVar10 + 1) = 1;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
      *plVar10 = (longlong)&PTR_FUN_143f7de48;
      plVar10[2] = 0;
      plVar18 = plVar10;
    }
  }
  else {
    plVar10 = (longlong *)operator_new(0x20);
    if (plVar10 != (longlong *)0x0) {
      puVar11 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718)
      ;
      plVar9 = (longlong *)
               (**(code **)(*(longlong *)*puVar11 + 0x10))((longlong *)*puVar11,local_70);
      local_68 = *plVar9;
      plVar10[1] = 0;
      plVar10[2] = 0;
      *plVar10 = (longlong)&PTR_FUN_143f9a6c8;
      plVar10[3] = local_68;
      plVar9 = plVar10;
    }
    plVar10 = (longlong *)operator_new(0x18);
    if (plVar10 != (longlong *)0x0) {
      *(undefined4 *)(plVar10 + 1) = 1;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
      *plVar10 = (longlong)&PTR_FUN_143f7de48;
      plVar10[2] = (longlong)plVar9;
      plVar18 = plVar10;
    }
  }
  plVar10 = plVar9 + 1;
  if (plVar9 == (longlong *)0x0) {
    plVar10 = plVar16;
  }
  local_a8 = plVar9;
  local_a0 = plVar18;
  if (plVar10 != (longlong *)0x0) {
    if ((*plVar10 != 0) && (plVar10[1] != 0)) {
      piVar1 = (int *)(plVar10[1] + 8);
      LOCK();
      iVar7 = *piVar1;
      if (iVar7 == 0) {
        *piVar1 = 0;
        iVar7 = 0;
      }
      UNLOCK();
      if (0 < iVar7) goto LAB_1405027ce;
    }
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
    }
    *plVar10 = (longlong)plVar9;
    plVar13 = (longlong *)plVar10[1];
    if (plVar18 != plVar13) {
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar18 + 0xc) = *(int *)((longlong)plVar18 + 0xc) + 1;
        UNLOCK();
        plVar13 = (longlong *)plVar10[1];
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
      plVar10[1] = (longlong)plVar18;
    }
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar18 + 1;
      lVar8 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar18 + 8))(plVar18,1);
        }
      }
    }
  }
LAB_1405027ce:
  if ((longlong **)(plVar19 + 1) != &local_a8) {
    plVar19[1] = (longlong)plVar9;
    local_a8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(plVar19 + 2,&local_a0);
  }
  plVar18 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_a0 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  plVar18 = (longlong *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamFriends_1461fc730);
  if (*plVar18 == 0) {
    pplVar15 = &local_80;
    local_78 = 0;
    local_80 = (longlong *)0x0;
    bVar4 = false;
    bVar3 = true;
    plVar18 = local_c0;
  }
  else {
    puVar11 = (undefined8 *)
              SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamFriends_1461fc730);
    pcVar12 = (char *)(*(code *)**(undefined8 **)*puVar11)();
    local_c0 = (longlong *)0x0;
    local_b8 = 0;
    plVar18 = plVar16;
    if ((pcVar12 != (char *)0x0) && (*pcVar12 != '\0')) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (pcVar12[lVar8] != '\0');
      uVar14 = (int)lVar8 + 1;
      local_b8 = (ulonglong)uVar14;
      if (0 < (int)uVar14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c0,0);
      }
      plVar18 = local_c0;
      local_f8 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>(local_c0,uVar14,pcVar12,uVar14);
    }
    pplVar15 = &local_c0;
    bVar4 = true;
    bVar3 = false;
  }
  if ((longlong **)(plVar19 + 3) != pplVar15) {
    if ((longlong *)plVar19[3] != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar18 = *pplVar15;
    *pplVar15 = (longlong *)0x0;
    plVar19[3] = (longlong)plVar18;
    *(undefined4 *)(plVar19 + 4) = *(undefined4 *)(pplVar15 + 1);
    pplVar15[1] = (longlong *)0x0;
    *(undefined4 *)((longlong)plVar19 + 0x24) = *(undefined4 *)((longlong)pplVar15 + 0xc);
    plVar18 = local_c0;
  }
  if ((bVar3) && (local_80 != (longlong *)0x0)) {
    FMemory::Free();
  }
  if ((bVar4) && (plVar18 != (longlong *)0x0)) {
    FMemory::Free(plVar18);
  }
  plVar18 = local_b0;
  if (((local_b0[0x51] == 0) || (cVar5 = FUN_140516dc0(), cVar5 == '\0')) ||
     (*(char *)(local_88 + 0x12) != '\0')) {
    iVar7 = FUN_140501990(plVar18,plVar19);
    if (iVar7 != 0x3e5) {
      *(undefined4 *)(plVar19 + 0x22) = 2;
      if (iVar7 == 0) {
        FUN_14051ed00(plVar18,plVar19);
      }
      else {
        FUN_14051ff60(plVar18,param_3);
      }
      (**(code **)(*plVar18 + 0x50))(plVar18,param_3,(iVar7 != 0) + '\x01');
    }
  }
  else {
    local_e8 = CONCAT44(local_e8._4_4_,(int)plVar19[6]);
    uVar17 = 3;
    if (((*(char *)((longlong)plVar19 + 0x3d) != '\0') &&
        (uVar17 = 0, *(char *)((longlong)plVar19 + 0x3f) != '\0')) &&
       (uVar17 = 2, (char)plVar19[8] != '\0')) {
      uVar17 = 1;
    }
    plVar9 = (longlong *)operator_new(0x60);
    if (plVar9 != (longlong *)0x0) {
      lVar8 = plVar19[0x17];
      FOnlineAsyncTaskSteam::FOnlineAsyncTaskSteam(plVar9,local_b0[0x51],0);
      *plVar9 = (longlong)&PTR_FUN_143f9b590;
      *(uint *)((longlong)plVar9 + 0x2c) = *(uint *)((longlong)plVar9 + 0x2c) & 0xff0fffff;
      *(undefined1 *)((longlong)plVar9 + 0x2f) = 0;
      *(uint *)((longlong)plVar9 + 0x2c) = *(uint *)((longlong)plVar9 + 0x2c) & 0xfff00000;
      *(undefined4 *)(plVar9 + 5) = 0;
      *(undefined4 *)((longlong)plVar9 + 0x3c) = (undefined4)local_e8;
      plVar9[6] = lVar8;
      *(undefined4 *)(plVar9 + 7) = uVar17;
      plVar9[8] = (longlong)&PTR_FUN_143f9b570;
      plVar9[0xb] = (longlong)&LAB_1405187d0;
      *(undefined1 *)(plVar9 + 9) = 0;
      *(undefined4 *)((longlong)plVar9 + 0x4c) = 0;
      plVar9[10] = (longlong)plVar9;
      SteamAPI_RegisterCallback(plVar9 + 8,0x201);
      plVar18 = local_b0;
      plVar16 = plVar9;
    }
    FOnlineAsyncTaskManager::AddToInQueue(*(undefined8 *)(plVar18[0x51] + 0x148),plVar16);
  }
LAB_140502aa8:
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar2 + 1;
    lVar8 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 140502b10 FUN_140502b10 body=415 status=ok
// SIG undefined FUN_140502b10(void)

undefined8 * FUN_140502b10(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 local_res10 [8];
  
  puVar5 = (undefined8 *)0x0;
  plVar3 = (longlong *)FName::FName(local_res10,"SteamClientSocket",1);
  if (*param_2 == *plVar3) {
    plVar3 = (longlong *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
    plVar3 = (longlong *)*plVar3;
    if (plVar3 != (longlong *)0x0) {
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,local_res10);
      uVar6 = *puVar4;
      puVar4 = (undefined8 *)operator_new(0x68);
      if (puVar4 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)SteamInternal_ContextInit(&PTR_FUN_1461fc7d8);
        uVar2 = *puVar5;
        *puVar4 = &PTR_FUN_143f9d520;
        *(undefined4 *)(puVar4 + 1) = 1;
        FString::FString(puVar4 + 2,param_3);
        *puVar4 = &PTR_FUN_143f9d608;
        puVar4[5] = &PTR_FUN_143f9a840;
        puVar4[7] = 0;
        puVar4[8] = 0;
        puVar4[6] = &PTR_FUN_143f9a6c8;
        puVar4[9] = uVar6;
        *(undefined2 *)(puVar4 + 10) = 0;
        *(undefined4 *)(puVar4 + 0xb) = 0;
        puVar4[0xc] = uVar2;
        uVar6 = FName::FName(local_res10,L"STEAM",1);
        uVar6 = FUN_1419c6b80(uVar6);
        puVar4[4] = uVar6;
        iVar1 = *(int *)(param_1 + 0xb0);
        *(int *)(param_1 + 0xb0) = iVar1 + 1;
        if (*(int *)(param_1 + 0xb4) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xa8,iVar1);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar1 * 8) = puVar4;
        puVar5 = puVar4;
      }
    }
  }
  else {
    uVar6 = FName::FName(local_res10,L"WINDOWS",1);
    plVar3 = (longlong *)FUN_1419c6b80(uVar6);
    if (plVar3 != (longlong *)0x0) {
      puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x18))(plVar3,param_2,param_3,param_4);
    }
  }
  return puVar5;
}



// FUNCTION 140502cb0 FUN_140502cb0 body=222 status=ok
// SIG undefined FUN_140502cb0(void)

undefined8 FUN_140502cb0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined8 local_res8;
  undefined1 local_res18 [16];
  longlong local_18 [2];
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x378))();
  if (plVar2 == (longlong *)0x0) {
    return 0;
  }
  local_res8 = 0x118;
  puVar5 = &DAT_143f3eda8;
  if (DAT_146b18950 != 0) {
    puVar5 = DAT_146b18948;
  }
  cVar1 = FURL::HasOption(param_2,puVar5);
  if (cVar1 != '\0') {
    puVar3 = (undefined8 *)FName::FName(local_res18,L"SteamClientSocket",1);
    local_res8 = *puVar3;
  }
  local_18[0] = 0;
  local_18[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"Unreal",0xe);
  uVar4 = (**(code **)(*plVar2 + 0x18))(plVar2,&local_res8,local_18,0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return uVar4;
}



// FUNCTION 140502d90 FUN_140502d90 body=618 status=ok
// SIG undefined FUN_140502d90(void)

longlong * FUN_140502d90(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res20 [8];
  undefined8 local_18;
  longlong *local_10;
  
  if (DAT_146853248 == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x170);
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      puVar6 = (undefined8 *)FName::FName(local_res20,L"STEAM",1);
      FUN_1404ac240(plVar5,*puVar6,param_3);
      *(undefined1 *)(plVar5 + 0xe) = 0;
      *(undefined4 *)((longlong)plVar5 + 0x74) = 0;
      *plVar5 = (longlong)&PTR_FUN_143f9a530;
      plVar5[0xf] = 0;
      plVar5[0x10] = 0;
      plVar5[0x11] = 0;
      plVar5[0x12] = 0;
      plVar5[0x13] = 0;
      plVar5[0x14] = 0;
      plVar5[0x15] = 0;
      plVar5[0x16] = 0;
      plVar5[0x17] = 0;
      plVar5[0x18] = 0;
      plVar5[0x19] = 0;
      plVar5[0x1a] = 0;
      plVar5[0x1b] = 0;
      plVar5[0x1c] = 0;
      plVar5[0x1d] = 0;
      plVar5[0x1e] = 0;
      plVar5[0x1f] = 0;
      plVar5[0x20] = 0;
      plVar5[0x21] = 0;
      plVar5[0x22] = 0;
      plVar5[0x23] = 0;
      plVar5[0x24] = 0;
      plVar5[0x25] = 0;
      plVar5[0x26] = 0;
      plVar5[0x27] = 0;
      plVar5[0x28] = 0;
      plVar5[0x29] = 0;
      plVar5[0x2a] = 0;
      plVar5[0x2b] = 0;
      plVar5[0x2c] = 0;
    }
    plVar8 = (longlong *)0x0;
    plVar7 = (longlong *)operator_new(0x18);
    if (plVar7 != (longlong *)0x0) {
      *(undefined4 *)(plVar7 + 1) = 1;
      *plVar7 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
      plVar7[2] = (longlong)plVar5;
      plVar8 = plVar7;
    }
    local_10 = plVar8;
    SharedPointerInternals::EnableSharedFromThis(&local_18,plVar5,plVar5);
    local_18 = 0;
    DAT_146853248 = plVar5;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&DAT_146853250,&local_10);
    plVar5 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_10 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
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
    cVar4 = FUN_140516dc0(DAT_146853248);
    if ((cVar4 == '\0') || (cVar4 = (**(code **)(*DAT_146853248 + 0x100))(), cVar4 == '\0')) {
      (**(code **)(*param_1 + 0x10))(param_1);
    }
    *param_2 = (longlong)DAT_146853248;
    lVar3 = DAT_146853250;
    param_2[1] = DAT_146853250;
    if (lVar3 != 0) {
      LOCK();
      piVar1 = (int *)(lVar3 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      return param_2;
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 140503000 FUN_140503000 body=367 status=ok
// SIG undefined FUN_140503000(void)

undefined8 * FUN_140503000(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  puVar3 = (undefined8 *)operator_new(0x20);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_143f9a6c8;
    if (*(int *)(param_3 + 1) == 0) {
      lVar4 = _wtoi64(L"");
      puVar3[3] = lVar4;
    }
    else {
      lVar4 = _wtoi64((wchar_t *)*param_3);
      puVar3[3] = lVar4;
    }
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar7 = (longlong *)0x0;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f7de48;
    plVar5[2] = (longlong)puVar3;
    plVar7 = plVar5;
  }
  *param_2 = puVar3;
  param_2[1] = plVar7;
  plVar5 = puVar3 + 1;
  if (puVar3 == (undefined8 *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar2 = *piVar1;
        if (iVar2 == 0) {
          *piVar1 = 0;
          iVar2 = 0;
        }
        UNLOCK();
        if (0 < iVar2) {
          return param_2;
        }
      }
      plVar7 = (longlong *)param_2[1];
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)puVar3;
    plVar6 = (longlong *)plVar5[1];
    if (plVar7 != plVar6) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      plVar5[1] = (longlong)plVar7;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar7 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  return param_2;
}



// FUNCTION 140503170 FUN_140503170 body=421 status=ok
// SIG undefined FUN_140503170(void)

void FUN_140503170(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  undefined8 *puVar9;
  double dVar10;
  LARGE_INTEGER local_res8;
  longlong local_20 [3];
  
  if (((param_1[0x13] == 0) || (cVar8 = FUN_140516dc0(), cVar8 == '\0')) ||
     (cVar8 = (**(code **)(*(longlong *)param_1[0x13] + 0xf8))((longlong *)param_1[0x13],param_2),
     cVar8 == '\0')) {
    (**(code **)(*param_1 + 0x80))(param_1,param_2,param_3,6);
    return;
  }
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  FString::FString(local_20,param_3);
  uVar6 = *(undefined8 *)(param_1[0x13] + 0x148);
  puVar9 = (undefined8 *)operator_new(0x40);
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    *puVar9 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res8);
    dVar10 = (double)local_res8.QuadPart * DAT_1468b02f8;
    *puVar9 = &PTR_FUN_143f9e840;
    *(undefined1 *)(puVar9 + 2) = 0;
    puVar9[1] = dVar10 + 16777216.0;
    puVar9[3] = param_1;
    puVar9[4] = uVar4;
    puVar9[5] = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    FString::FString(puVar9 + 6,local_20);
  }
  FOnlineAsyncTaskManager::AddToInQueue(uVar6,puVar9);
  if (local_20[0] != 0) {
    FMemory::Free();
  }
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  LOCK();
  plVar1 = plVar5 + 1;
  lVar7 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar7 != 1) {
    return;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar2 = (int *)((longlong)plVar5 + 0xc);
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar3 != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001405032e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 8))(plVar5,1);
  return;
}



// FUNCTION 140503320 FUN_140503320 body=53 status=ok
// SIG undefined FUN_140503320(void)

void FUN_140503320(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_143f73cd8;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140503350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 140503360 DestroyObject body=109 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FTextStyles::FFontFamily,SharedPointerInternals::DefaultDeleter<FTextStyles::FFontFamily>_>
     ::DestroyObject(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    plVar5 = *(longlong **)(lVar4 + 8);
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
    FMemory::operator_delete(lVar4,0x40);
  }
  return;
}



// FUNCTION 1405033d0 FUN_1405033d0 body=94 status=ok
// SIG undefined FUN_1405033d0(void)

void FUN_1405033d0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    if (plVar1[6] != 0) {
      FMemory::Free();
    }
    if (plVar1[4] != 0) {
      FMemory::Free();
    }
    if (plVar1[2] != 0) {
      FMemory::Free();
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar1,0x40);
    return;
  }
  return;
}



// FUNCTION 140503430 FUN_140503430 body=20 status=ok
// SIG undefined FUN_140503430(void)

void FUN_140503430(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1404fd800(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 140503450 FUN_140503450 body=509 status=ok
// SIG undefined FUN_140503450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140503450(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  longlong local_48;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  iVar8 = -0x7fffbffb;
  lVar4 = FUN_140511190();
  if ((lVar4 == 0) || (*(int *)(lVar4 + 0x110) == 7)) goto LAB_14050360c;
  iVar8 = 0;
  if ((param_1[0x51] == 0) ||
     ((cVar2 = FUN_140516dc0(), cVar2 == '\0' || (*(char *)(lVar4 + 0x3a) != '\0')))) {
    FUN_1404b6bd0(param_1 + 0x71);
  }
  else {
    lVar5 = *(longlong *)(lVar4 + 0xa0);
    *(undefined4 *)(lVar4 + 0x110) = 7;
    cVar2 = (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x20))();
    if ((cVar2 != '\0') && (plVar1 = (longlong *)param_1[0x6f], plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(lVar5 + 0x40));
    }
    if ((*(char *)(lVar4 + 0x3e) != '\0') && (param_1[0x6e] != 0)) {
      lVar5 = TStringConversion<FTCHARToUTF8_Convert,128>::
              TStringConversion<FTCHARToUTF8_Convert,128>(local_c8,&DAT_143f3eda8);
      (**(code **)(*(longlong *)param_1[0x6e] + 0x158))
                ((longlong *)param_1[0x6e],"steam_player_group",*(undefined8 *)(lVar5 + 0x88));
      if (local_48 != 0) {
        FMemory::Free();
      }
    }
    FUN_14051ff60(param_1,*(undefined8 *)(lVar4 + 0xb8));
    lVar4 = (longlong)(int)param_1[0x58];
    if (0 < lVar4) {
      pcVar6 = (char *)(param_1[0x57] + 0x3a);
      iVar7 = 0;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 0x118;
        iVar3 = iVar7 + 1;
        if (cVar2 != '\0') {
          iVar3 = iVar7;
        }
        lVar4 = lVar4 + -1;
        iVar7 = iVar3;
      } while (lVar4 != 0);
      if (iVar3 != 0) goto LAB_1405035fa;
    }
    if ((DAT_146853160 != '\0') && (*(char *)((longlong)param_1 + 0x2fc) != '\0')) {
      *(undefined1 *)((longlong)param_1 + 0x2fc) = 0;
      lVar4 = param_1[100];
      lVar5 = (longlong)(int)param_1[0x65] * 0x20 + lVar4;
      for (; lVar4 != lVar5; lVar4 = lVar4 + 0x20) {
        *(undefined4 *)(lVar4 + 0x10) = 5;
      }
      FUN_1405233b0(param_1 + 0x5b);
    }
  }
LAB_1405035fa:
  FUN_14051ff60(param_1,param_2);
LAB_14050360c:
  (**(code **)(*param_1 + 0xf0))(param_1,param_2,(iVar8 != 0) + '\x01');
  return;
}



// FUNCTION 140503650 FUN_140503650 body=172 status=ok
// SIG undefined FUN_140503650(void)

void FUN_140503650(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  plVar1 = *(longlong **)(param_1 + 0xa8);
  iVar5 = *(int *)(param_1 + 0xb0);
  plVar3 = plVar1;
  do {
    if (plVar3 == plVar1 + iVar5) {
LAB_1405036dd:
      if (param_2 != (undefined8 *)0x0) {
        (**(code **)*param_2)(param_2,1);
      }
      return;
    }
    if ((undefined8 *)*plVar3 == param_2) {
      iVar2 = (int)((longlong)plVar3 - (longlong)plVar1 >> 3);
      if (iVar2 != -1) {
        iVar4 = (iVar5 - iVar2) + -1;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (plVar1 + iVar2,plVar1 + (iVar5 - iVar4),(longlong)iVar4 << 3);
          iVar5 = *(int *)(param_1 + 0xb0);
        }
        *(int *)(param_1 + 0xb0) = iVar5 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0xa8));
      }
      goto LAB_1405036dd;
    }
    plVar3 = plVar3 + 1;
  } while( true );
}



// FUNCTION 140503700 FUN_140503700 body=153 status=ok
// SIG undefined FUN_140503700(void)

void FUN_140503700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_10;
  
  if (DAT_146853248 != (longlong *)0x0) {
    (**(code **)(*DAT_146853248 + 0x110))();
    local_10 = (longlong *)0x0;
    DAT_146853248 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&DAT_146853250,&local_10,param_3,param_4,0);
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



// FUNCTION 1405037a0 FUN_1405037a0 body=6538 status=ok
// SIG undefined FUN_1405037a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1405037a0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  wint_t wVar5;
  wint_t wVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  wint_t *pwVar14;
  undefined8 *puVar15;
  undefined2 *puVar16;
  int iVar17;
  int iVar18;
  undefined1 auStack_2a8 [32];
  undefined1 *local_288;
  undefined4 local_280;
  int local_278;
  longlong *local_270;
  longlong *local_268;
  longlong *local_260;
  undefined1 local_258 [4];
  undefined4 local_254;
  undefined2 *local_250;
  undefined8 local_248;
  undefined2 *local_240;
  undefined8 local_238;
  undefined2 *local_230;
  undefined8 local_228;
  undefined2 *local_220;
  undefined8 local_218;
  undefined2 *local_210;
  undefined8 local_208;
  undefined2 *local_200;
  undefined8 local_1f8;
  undefined2 *local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  longlong local_190;
  undefined8 local_188;
  longlong local_180;
  undefined8 local_178;
  longlong local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  longlong local_150;
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0 [2];
  undefined2 *local_d0;
  wchar_t *local_c8;
  undefined2 *local_c0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  local_260 = param_1;
  plVar8 = (longlong *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamApps_1461fc7c0);
  if (*plVar8 == 0) {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    puVar9 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamApps_1461fc7c0);
    local_278 = (**(code **)(*(longlong *)*puVar9 + 0x50))();
    iVar17 = 0;
    iVar18 = local_278;
    if (0 < local_278) {
LAB_140503850:
      plVar8 = (longlong *)0x0;
      puVar9 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamApps_1461fc7c0);
      local_288 = local_b8;
      local_280 = 0x80;
      cVar4 = (**(code **)(*(longlong *)*puVar9 + 0x58))
                        ((longlong *)*puVar9,iVar17,&local_254,local_258);
      if (cVar4 != '\0') {
        puVar9 = (undefined8 *)
                 SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamApps_1461fc7c0);
        cVar4 = (**(code **)(*(longlong *)*puVar9 + 0x30))((longlong *)*puVar9,local_254);
        if (cVar4 != '\0') {
          plVar10 = (longlong *)operator_new(0x68);
          plVar13 = plVar8;
          if (plVar10 != (longlong *)0x0) {
            *plVar10 = 0;
            plVar10[1] = 0;
            *(undefined4 *)(plVar10 + 2) = 0;
            *(undefined4 *)(plVar10 + 3) = 0;
            plVar10[4] = 0;
            plVar10[5] = 0;
            plVar10[7] = 0;
            plVar10[8] = 0;
            *(undefined1 *)(plVar10 + 9) = 0;
            *(undefined1 *)(plVar10 + 10) = 0;
            plVar10[0xb] = 0;
            plVar10[0xc] = 0;
            plVar13 = plVar10;
          }
          plVar10 = (longlong *)operator_new(0x18);
          if (plVar10 != (longlong *)0x0) {
            *(undefined4 *)(plVar10 + 1) = 1;
            *plVar10 = (longlong)&PTR_FUN_143f9ea20;
            *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
            plVar10[2] = (longlong)plVar13;
            plVar8 = plVar10;
          }
          local_270 = plVar13;
          local_268 = plVar8;
          SharedPointerInternals::EnableSharedFromThis(&local_270,plVar13,plVar13);
          FString::PrintfImpl(&local_1e0,&DAT_143f861e4,local_254);
          plVar8 = local_270;
          plVar13 = local_270 + 4;
          if (plVar13 != &local_1e0) {
            if (*plVar13 != 0) {
              FMemory::Free();
            }
            *plVar13 = local_1e0;
            local_1e0 = 0;
            *(undefined4 *)(plVar8 + 5) = (undefined4)local_1d8;
            *(undefined4 *)((longlong)plVar8 + 0x2c) = local_1d8._4_4_;
            local_1d8 = 0;
          }
          if (local_1e0 != 0) {
            FMemory::Free();
          }
          if ((int)local_270[5] == 0) {
            puVar16 = &DAT_143f3eda8;
          }
          else {
            puVar16 = (undefined2 *)local_270[4];
          }
          pwVar14 = &DAT_143f8e768;
          do {
            wVar5 = *(wint_t *)((longlong)(puVar16 + -0xa1fc73b4) + (longlong)pwVar14);
            if ((wVar5 == 0) && (*pwVar14 == 0)) goto LAB_140503a0e;
            if (wVar5 != *pwVar14) {
              wVar5 = towlower(wVar5);
              wVar6 = towlower(*pwVar14);
              if (wVar5 != wVar6) goto LAB_140503a00;
            }
            pwVar14 = pwVar14 + 1;
          } while( true );
        }
      }
      goto LAB_1405050c8;
    }
LAB_1405050ec:
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
LAB_140503a00:
  if (wVar5 != wVar6) {
    if ((int)local_270[5] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)local_270[4];
    }
    pwVar14 = &DAT_143f8e7a0;
    do {
      wVar5 = *(wint_t *)((longlong)pwVar14 + (longlong)(puVar16 + -0xa1fc73d0));
      if ((wVar5 == 0) && (*pwVar14 == 0)) goto LAB_140503bd1;
      if (wVar5 != *pwVar14) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar14);
        if (wVar5 != wVar6) goto LAB_140503bc3;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
LAB_140503a0e:
  local_248 = 0x11;
  local_250 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_250,0);
  puVar16 = local_250;
  FGenericPlatformString::Memcpy(local_250,L"ALQQnkhQ0o9KRws=",0x22);
  plVar8 = local_270;
  iVar18 = (int)local_248;
  puVar9 = (undefined8 *)local_270[7];
  lVar2 = local_270[8];
  for (puVar15 = puVar9; puVar15 != puVar9 + (longlong)(int)lVar2 * 2; puVar15 = puVar15 + 2) {
    puVar12 = &DAT_143f3eda8;
    if (iVar18 != 0) {
      puVar12 = puVar16;
    }
    if (*(int *)(puVar15 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*puVar15;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
    if (iVar7 == 0) {
      if ((int)((longlong)puVar15 - (longlong)puVar9 >> 4) != -1) goto LAB_140503b02;
      break;
    }
  }
  iVar7 = (int)plVar8[8];
  *(int *)(plVar8 + 8) = iVar7 + 1;
  if (*(int *)((longlong)plVar8 + 0x44) < iVar7 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8 + 7,iVar7);
  }
  uVar3 = local_248._4_4_;
  puVar9 = (undefined8 *)((longlong)iVar7 * 0x10 + plVar8[7]);
  *puVar9 = puVar16;
  *(int *)(puVar9 + 1) = iVar18;
  local_250 = (undefined2 *)0x0;
  local_248 = 0;
  *(undefined4 *)((longlong)puVar9 + 0xc) = uVar3;
  param_1 = local_260;
  iVar18 = local_278;
LAB_140503b22:
  plVar8 = local_270;
  if ((int)local_270[8] != 0) {
    *(undefined1 *)(local_270 + 9) = 1;
    if ((int)local_270[3] == 2) {
      *(undefined1 *)(local_270 + 10) = 1;
      puVar9 = (undefined8 *)FPaths::ProjectDir(local_e0);
      if (*(int *)(puVar9 + 1) == 0) {
        local_d0 = &DAT_143f3eda8;
      }
      else {
        local_d0 = (undefined2 *)*puVar9;
      }
      local_c8 = L"AdditionalContent";
      if ((int)plVar8[1] == 0) {
        local_c0 = &DAT_143f3eda8;
      }
      else {
        local_c0 = (undefined2 *)*plVar8;
      }
      local_f0 = 0;
      local_e8 = 0;
      FPaths::CombineInternal(&local_f0,&local_d0,3);
      FString::operator=(local_270 + 0xb,&local_f0);
      if (local_f0 != 0) {
        FMemory::Free();
      }
      if (local_e0[0] != 0) {
        FMemory::Free();
      }
    }
    lVar2 = *param_1;
    iVar7 = *(int *)(lVar2 + 0x38);
    *(int *)(lVar2 + 0x38) = iVar7 + 1;
    if (*(int *)(lVar2 + 0x3c) < iVar7 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar2 + 0x30,iVar7);
    }
    puVar9 = (undefined8 *)((longlong)iVar7 * 0x10 + *(longlong *)(lVar2 + 0x30));
    *puVar9 = local_270;
    puVar9[1] = local_268;
    if (local_268 == (longlong *)0x0) goto LAB_1405050c8;
    LOCK();
    *(int *)(local_268 + 1) = (int)local_268[1] + 1;
    UNLOCK();
  }
  plVar8 = local_268;
  if (local_268 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_268 + 1;
    lVar2 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*local_268)(local_268);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
LAB_1405050c8:
  iVar17 = iVar17 + 1;
  if (iVar18 <= iVar17) goto LAB_1405050ec;
  goto LAB_140503850;
LAB_140503bc3:
  if (wVar5 != wVar6) {
    if ((int)local_270[5] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)local_270[4];
    }
    pwVar14 = &DAT_143f8e7d8;
    do {
      wVar5 = *(wint_t *)((longlong)pwVar14 + (longlong)(puVar16 + -0xa1fc73ec));
      if ((wVar5 == 0) && (*pwVar14 == 0)) goto LAB_140503d2e;
      if (wVar5 != *pwVar14) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar14);
        if (wVar5 != wVar6) goto LAB_140503d20;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
LAB_140503bd1:
  local_238 = 0x11;
  local_240 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_240,0);
  puVar16 = local_240;
  FGenericPlatformString::Memcpy(local_240,L"AGFJBhqUB6su3a8=",0x22);
  plVar8 = local_270;
  iVar18 = (int)local_238;
  puVar9 = (undefined8 *)local_270[7];
  lVar2 = local_270[8];
  for (puVar15 = puVar9; puVar15 != puVar9 + (longlong)(int)lVar2 * 2; puVar15 = puVar15 + 2) {
    puVar12 = &DAT_143f3eda8;
    if (iVar18 != 0) {
      puVar12 = puVar16;
    }
    if (*(int *)(puVar15 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*puVar15;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
    if (iVar7 == 0) {
      if ((int)((longlong)puVar15 - (longlong)puVar9 >> 4) != -1) goto LAB_140503b02;
      break;
    }
  }
  iVar7 = (int)plVar8[8];
  *(int *)(plVar8 + 8) = iVar7 + 1;
  if (*(int *)((longlong)plVar8 + 0x44) < iVar7 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8 + 7,iVar7);
  }
  uVar3 = local_238._4_4_;
  puVar9 = (undefined8 *)((longlong)iVar7 * 0x10 + plVar8[7]);
  *puVar9 = puVar16;
  *(int *)(puVar9 + 1) = iVar18;
  local_240 = (undefined2 *)0x0;
  local_238 = 0;
  *(undefined4 *)((longlong)puVar9 + 0xc) = uVar3;
  param_1 = local_260;
  iVar18 = local_278;
  goto LAB_140503b22;
LAB_140503d20:
  if (wVar5 != wVar6) {
    if ((int)local_270[5] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)local_270[4];
    }
    pwVar14 = &DAT_143f8e810;
    do {
      wVar5 = *(wint_t *)((longlong)pwVar14 + (longlong)(puVar16 + -0xa1fc7408));
      if ((wVar5 == 0) && (*pwVar14 == 0)) goto LAB_140503e8e;
      if (wVar5 != *pwVar14) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar14);
        if (wVar5 != wVar6) goto LAB_140503e80;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
LAB_140503d2e:
  local_228 = 0x11;
  local_230 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_230,0);
  puVar16 = local_230;
  FGenericPlatformString::Memcpy(local_230,L"AOIVuUeXVBrUdzw=",0x22);
  plVar8 = local_270;
  iVar18 = (int)local_228;
  puVar9 = (undefined8 *)local_270[7];
  lVar2 = local_270[8];
  for (puVar15 = puVar9; puVar15 != puVar9 + (longlong)(int)lVar2 * 2; puVar15 = puVar15 + 2) {
    puVar12 = &DAT_143f3eda8;
    if (iVar18 != 0) {
      puVar12 = puVar16;
    }
    if (*(int *)(puVar15 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*puVar15;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
    if (iVar7 == 0) {
      if ((int)((longlong)puVar15 - (longlong)puVar9 >> 4) != -1) goto LAB_140503b02;
      break;
    }
  }
  iVar7 = (int)plVar8[8];
  *(int *)(plVar8 + 8) = iVar7 + 1;
  if (*(int *)((longlong)plVar8 + 0x44) < iVar7 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8 + 7,iVar7);
  }
  uVar3 = local_228._4_4_;
  puVar9 = (undefined8 *)((longlong)iVar7 * 0x10 + plVar8[7]);
  *puVar9 = puVar16;
  *(int *)(puVar9 + 1) = iVar18;
  local_230 = (undefined2 *)0x0;
  local_228 = 0;
  *(undefined4 *)((longlong)puVar9 + 0xc) = uVar3;
  param_1 = local_260;
  iVar18 = local_278;
  goto LAB_140503b22;
LAB_140503e80:
  if (wVar5 != wVar6) {
    if ((int)local_270[5] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)local_270[4];
    }
    pwVar14 = &DAT_143f8e848;
    do {
      wVar5 = *(wint_t *)((longlong)pwVar14 + (longlong)(puVar16 + -0xa1fc7424));
      if ((wVar5 == 0) && (*pwVar14 == 0)) goto LAB_140503fde;
      if (wVar5 != *pwVar14) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar14);
        if (wVar5 != wVar6) goto LAB_140503fd0;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
LAB_140503e8e:
  local_218 = 0x11;
  local_220 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_220,0);
  puVar16 = local_220;
  FGenericPlatformString::Memcpy(local_220,L"AIcscxlmhLY8YOk=",0x22);
  plVar8 = local_270;
  iVar18 = (int)local_218;
  puVar9 = (undefined8 *)local_270[7];
  lVar2 = local_270[8];
  for (puVar15 = puVar9; puVar15 != puVar9 + (longlong)(int)lVar2 * 2; puVar15 = puVar15 + 2) {
    puVar12 = &DAT_143f3eda8;
    if (iVar18 != 0) {
      puVar12 = puVar16;
    }
    if (*(int *)(puVar15 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*puVar15;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
    if (iVar7 == 0) {
      if ((int)((longlong)puVar15 - (longlong)puVar9 >> 4) != -1) goto LAB_140503b02;
      break;
    }
  }
  iVar7 = (int)plVar8[8];
  *(int *)(plVar8 + 8) = iVar7 + 1;
  if (*(int *)((longlong)plVar8 + 0x44) < iVar7 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8 + 7,iVar7);
  }
  uVar3 = local_218._4_4_;
  puVar9 = (undefined8 *)((longlong)iVar7 * 0x10 + plVar8[7]);
  *puVar9 = puVar16;
  *(int *)(puVar9 + 1) = iVar18;
  local_220 = (undefined2 *)0x0;
  local_218 = 0;
  *(undefined4 *)((longlong)puVar9 + 0xc) = uVar3;
  param_1 = local_260;
  iVar18 = local_278;
  goto LAB_140503b22;
LAB_140503fd0:
  if (wVar5 != wVar6) {
    if ((int)local_270[5] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)local_270[4];
    }
    pwVar14 = &DAT_143f8e880;
    do {
      wVar5 = *(wint_t *)((longlong)pwVar14 + (longlong)(puVar16 + -0xa1fc7440));
      if ((wVar5 == 0) && (*pwVar14 == 0)) goto LAB_14050412e;
      if (wVar5 != *pwVar14) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar14);
        if (wVar5 != wVar6) goto LAB_140504120;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
LAB_140503fde:
  local_208 = 0x11;
  local_210 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_210,0);
  puVar16 = local_210;
  FGenericPlatformString::Memcpy(local_210,L"AC9GDWrAC1WykAY=",0x22);
  plVar8 = local_270;
  iVar18 = (int)local_208;
  puVar9 = (undefined8 *)local_270[7];
  lVar2 = local_270[8];
  for (puVar15 = puVar9; puVar15 != puVar9 + (longlong)(int)lVar2 * 2; puVar15 = puVar15 + 2) {
    puVar12 = &DAT_143f3eda8;
    if (iVar18 != 0) {
      puVar12 = puVar16;
    }
    if (*(int *)(puVar15 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*puVar15;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
    if (iVar7 == 0) {
      if ((int)((longlong)puVar15 - (longlong)puVar9 >> 4) != -1) goto LAB_140503b02;
      break;
    }
  }
  iVar7 = (int)plVar8[8];
  *(int *)(plVar8 + 8) = iVar7 + 1;
  if (*(int *)((longlong)plVar8 + 0x44) < iVar7 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8 + 7,iVar7);
  }
  uVar3 = local_208._4_4_;
  puVar9 = (undefined8 *)((longlong)iVar7 * 0x10 + plVar8[7]);
  *puVar9 = puVar16;
  *(int *)(puVar9 + 1) = iVar18;
  local_210 = (undefined2 *)0x0;
  local_208 = 0;
  *(undefined4 *)((longlong)puVar9 + 0xc) = uVar3;
  param_1 = local_260;
  iVar18 = local_278;
  goto LAB_140503b22;
LAB_140504120:
  if (wVar5 != wVar6) {
    if ((int)local_270[5] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)local_270[4];
    }
    pwVar14 = &DAT_143f8e8b8;
    do {
      wVar5 = *(wint_t *)((longlong)(puVar16 + -0xa1fc745c) + (longlong)pwVar14);
      if ((wVar5 == 0) && (*pwVar14 == 0)) goto LAB_14050427e;
      if (wVar5 != *pwVar14) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar14);
        if (wVar5 != wVar6) goto LAB_140504270;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
LAB_14050412e:
  local_1f8 = 0x11;
  local_200 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_200,0);
  puVar16 = local_200;
  FGenericPlatformString::Memcpy(local_200,L"ANhn5VMdpdGtL40=",0x22);
  plVar8 = local_270;
  iVar18 = (int)local_1f8;
  puVar9 = (undefined8 *)local_270[7];
  lVar2 = local_270[8];
  for (puVar15 = puVar9; puVar15 != puVar9 + (longlong)(int)lVar2 * 2; puVar15 = puVar15 + 2) {
    puVar12 = &DAT_143f3eda8;
    if (iVar18 != 0) {
      puVar12 = puVar16;
    }
    if (*(int *)(puVar15 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*puVar15;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
    if (iVar7 == 0) {
      if ((int)((longlong)puVar15 - (longlong)puVar9 >> 4) != -1) goto LAB_140503b02;
      break;
    }
  }
  iVar7 = (int)plVar8[8];
  *(int *)(plVar8 + 8) = iVar7 + 1;
  if (*(int *)((longlong)plVar8 + 0x44) < iVar7 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8 + 7,iVar7);
  }
  uVar3 = local_1f8._4_4_;
  puVar9 = (undefined8 *)((longlong)iVar7 * 0x10 + plVar8[7]);
  *puVar9 = puVar16;
  *(int *)(puVar9 + 1) = iVar18;
  local_200 = (undefined2 *)0x0;
  local_1f8 = 0;
  *(undefined4 *)((longlong)puVar9 + 0xc) = uVar3;
  param_1 = local_260;
  iVar18 = local_278;
  goto LAB_140503b22;
LAB_140504270:
  if (wVar5 != wVar6) {
    if ((int)local_270[5] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)local_270[4];
    }
    pwVar14 = &DAT_143f8e8f0;
    do {
      wVar5 = *(wint_t *)((longlong)(puVar16 + -0xa1fc7478) + (longlong)pwVar14);
      if ((wVar5 == 0) && (*pwVar14 == 0)) goto LAB_1405043ce;
      if (wVar5 != *pwVar14) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar14);
        if (wVar5 != wVar6) goto LAB_1405043c0;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
LAB_14050427e:
  local_1e8 = 0x11;
  local_1f0 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f0,0);
  puVar16 = local_1f0;
  FGenericPlatformString::Memcpy(local_1f0,L"ANss2QoRQEOLjz0=",0x22);
  plVar8 = local_270;
  iVar18 = (int)local_1e8;
  puVar9 = (undefined8 *)local_270[7];
  lVar2 = local_270[8];
  for (puVar15 = puVar9; puVar15 != puVar9 + (longlong)(int)lVar2 * 2; puVar15 = puVar15 + 2) {
    puVar12 = &DAT_143f3eda8;
    if (iVar18 != 0) {
      puVar12 = puVar16;
    }
    if (*(int *)(puVar15 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*puVar15;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar12);
    if (iVar7 == 0) {
      if ((int)((longlong)puVar15 - (longlong)puVar9 >> 4) != -1) goto LAB_140503b02;
      break;
    }
  }
  iVar7 = (int)plVar8[8];
  *(int *)(plVar8 + 8) = iVar7 + 1;
  if (*(int *)((longlong)plVar8 + 0x44) < iVar7 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8 + 7,iVar7);
  }
  uVar3 = local_1e8._4_4_;
  puVar9 = (undefined8 *)((longlong)iVar7 * 0x10 + plVar8[7]);
  *puVar9 = puVar16;
  *(int *)(puVar9 + 1) = iVar18;
  local_1f0 = (undefined2 *)0x0;
  local_1e8 = 0;
  *(undefined4 *)((longlong)puVar9 + 0xc) = uVar3;
  param_1 = local_260;
  iVar18 = local_278;
  goto LAB_140503b22;
LAB_1405043c0:
  if (wVar5 != wVar6) {
    if ((int)local_270[5] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)local_270[4];
    }
    pwVar14 = &DAT_143f8e940;
    do {
      wVar5 = *(wint_t *)((longlong)(puVar16 + -0xa1fc74a0) + (longlong)pwVar14);
      if ((wVar5 == 0) && (*pwVar14 == 0)) goto LAB_1405044de;
      if (wVar5 != *pwVar14) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar14);
        if (wVar5 != wVar6) goto LAB_1405044d0;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
LAB_1405043ce:
  iVar7 = 0;
  local_1c8 = 0x11;
  local_1d0 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d0,0);
  FGenericPlatformString::Memcpy(local_1d0,L"ANMUhnkfEcDyuA0=",0x22);
  TArray<FString,FDefaultAllocator>::AddUniqueImpl<FString>(local_270 + 7,&local_1d0);
  if (local_1d0 != 0) {
    FMemory::Free();
  }
  plVar8 = local_270;
  if ((wchar_t *)*local_270 != L"dandelion") {
    *(undefined4 *)(local_270 + 1) = 0;
    if (*(int *)((longlong)local_270 + 0xc) != 10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(local_270,10);
      iVar7 = (int)plVar8[1];
    }
    *(int *)(plVar8 + 1) = iVar7 + 10;
    if (*(int *)((longlong)plVar8 + 0xc) < iVar7 + 10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar8);
    }
    builtin_wcsncpy((wchar_t *)*plVar8,L"dandelion",10);
  }
  goto LAB_140504c96;
LAB_1405044d0:
  if (wVar5 != wVar6) {
    if ((int)local_270[5] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)local_270[4];
    }
    pwVar14 = &DAT_143f8e9f8;
    do {
      wVar5 = *(wint_t *)((longlong)(puVar16 + -0xa1fc74fc) + (longlong)pwVar14);
      if ((wVar5 == 0) && (*pwVar14 == 0)) goto LAB_1405045ee;
      if (wVar5 != *pwVar14) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar14);
        if (wVar5 != wVar6) goto LAB_1405045e0;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
LAB_1405044de:
  iVar7 = 0;
  local_1b8 = 0x11;
  local_1c0 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c0,0);
  FGenericPlatformString::Memcpy(local_1c0,L"AFoNVmDxgoKKlsI=",0x22);
  TArray<FString,FDefaultAllocator>::AddUniqueImpl<FString>(local_270 + 7,&local_1c0);
  if (local_1c0 != 0) {
    FMemory::Free();
  }
  plVar8 = local_270;
  if ((wchar_t *)*local_270 != L"hibiscus") {
    *(undefined4 *)(local_270 + 1) = 0;
    if (*(int *)((longlong)local_270 + 0xc) != 9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(local_270,9);
      iVar7 = (int)plVar8[1];
    }
    *(int *)(plVar8 + 1) = iVar7 + 9;
    if (*(int *)((longlong)plVar8 + 0xc) < iVar7 + 9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar8);
    }
    builtin_wcsncpy((wchar_t *)*plVar8,L"hibiscus",9);
  }
  goto LAB_140504c96;
LAB_1405045e0:
  if (wVar5 != wVar6) {
    if ((int)local_270[5] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)local_270[4];
    }
    pwVar14 = &DAT_143f8eab0;
    do {
      wVar5 = *(wint_t *)((longlong)(puVar16 + -0xa1fc7558) + (longlong)pwVar14);
      if ((wVar5 == 0) && (*pwVar14 == 0)) goto LAB_1405046fe;
      if (wVar5 != *pwVar14) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar14);
        if (wVar5 != wVar6) goto LAB_1405046f0;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
LAB_1405045ee:
  iVar7 = 0;
  local_1a8 = 0x11;
  local_1b0 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b0,0);
  FGenericPlatformString::Memcpy(local_1b0,L"AIAMwne/3XjFcG8=",0x22);
  TArray<FString,FDefaultAllocator>::AddUniqueImpl<FString>(local_270 + 7,&local_1b0);
  if (local_1b0 != 0) {
    FMemory::Free();
  }
  plVar8 = local_270;
  if ((wchar_t *)*local_270 != L"geranium") {
    *(undefined4 *)(local_270 + 1) = 0;
    if (*(int *)((longlong)local_270 + 0xc) != 9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(local_270,9);
      iVar7 = (int)plVar8[1];
    }
    *(int *)(plVar8 + 1) = iVar7 + 9;
    if (*(int *)((longlong)plVar8 + 0xc) < iVar7 + 9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar8);
    }
    builtin_wcsncpy((wchar_t *)*plVar8,L"geranium",9);
  }
  goto LAB_140504c96;
LAB_1405046f0:
  if (wVar5 != wVar6) {
    if ((int)local_270[5] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)local_270[4];
    }
    pwVar14 = &DAT_143f8eb48;
    do {
      wVar5 = *(wint_t *)((longlong)(puVar16 + -0xa1fc75a4) + (longlong)pwVar14);
      if ((wVar5 == 0) && (*pwVar14 == 0)) goto LAB_140504811;
      if (wVar5 != *pwVar14) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar14);
        if (wVar5 != wVar6) goto LAB_140504803;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
LAB_1405046fe:
  iVar7 = 0;
  local_198 = 0x11;
  local_1a0 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a0,0);
  FGenericPlatformString::Memcpy(local_1a0,L"AKQytjXEGh4iUPE=",0x22);
  TArray<FString,FDefaultAllocator>::AddUniqueImpl<FString>(local_270 + 7,&local_1a0);
  if (local_1a0 != 0) {
    FMemory::Free();
  }
  plVar8 = local_270;
  if ((wchar_t *)*local_270 != L"alisma") {
    *(undefined4 *)(local_270 + 1) = 0;
    if (*(int *)((longlong)local_270 + 0xc) != 7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(local_270,7);
      iVar7 = (int)plVar8[1];
    }
    *(int *)(plVar8 + 1) = iVar7 + 7;
    if (*(int *)((longlong)plVar8 + 0xc) < iVar7 + 7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar8);
    }
    puVar9 = (undefined8 *)*plVar8;
    *puVar9 = 0x730069006c0061;
    *(undefined4 *)(puVar9 + 1) = 0x61006d;
    goto LAB_140504c8d;
  }
  goto LAB_140504c96;
LAB_140504803:
  if (wVar5 != wVar6) {
    if ((int)local_270[5] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)local_270[4];
    }
    pwVar14 = &DAT_143f8ec08;
    do {
      wVar5 = *(wint_t *)((longlong)(puVar16 + -0xa1fc7604) + (longlong)pwVar14);
      if ((wVar5 == 0) && (*pwVar14 == 0)) goto LAB_14050491a;
      if (wVar5 != *pwVar14) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar14);
        if (wVar5 != wVar6) goto LAB_140504910;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
LAB_140504811:
  iVar7 = 0;
  local_188 = 0x11;
  local_190 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_190,0);
  FGenericPlatformString::Memcpy(local_190,L"AFMdimMYJt6gLYY=",0x22);
  TArray<FString,FDefaultAllocator>::AddUniqueImpl<FString>(local_270 + 7,&local_190);
  if (local_190 != 0) {
    FMemory::Free();
  }
  plVar8 = local_270;
  if ((undefined *)*local_270 != &DAT_143f8eb98) {
    *(undefined4 *)(local_270 + 1) = 0;
    if (*(int *)((longlong)local_270 + 0xc) != 6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(local_270,6);
      iVar7 = (int)plVar8[1];
    }
    *(int *)(plVar8 + 1) = iVar7 + 6;
    if (*(int *)((longlong)plVar8 + 0xc) < iVar7 + 6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar8);
    }
    puVar9 = (undefined8 *)*plVar8;
    *puVar9 = 0x72006f00780069;
    *(undefined4 *)(puVar9 + 1) = 0x61;
  }
  goto LAB_140504c96;
LAB_140504910:
  if (wVar5 != wVar6) {
    if ((int)local_270[5] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)local_270[4];
    }
    pwVar14 = &DAT_143f8ec48;
    do {
      wVar5 = *(wint_t *)((longlong)(puVar16 + -0xa1fc7624) + (longlong)pwVar14);
      if ((wVar5 == 0) && (*pwVar14 == 0)) goto LAB_1405049cb;
      if (wVar5 != *pwVar14) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar14);
        if (wVar5 != wVar6) goto LAB_1405049c1;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
LAB_14050491a:
  local_178 = 0x11;
  local_180 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_180,0);
  FGenericPlatformString::Memcpy(local_180,L"ANwByhWYa2/QqnM=",0x22);
  TArray<FString,FDefaultAllocator>::AddUniqueImpl<FString>(local_270 + 7,&local_180);
  if (local_180 != 0) {
    FMemory::Free();
  }
  goto LAB_140503b22;
LAB_1405049c1:
  if (wVar5 != wVar6) {
    if ((int)local_270[5] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)local_270[4];
    }
    pwVar14 = &DAT_143f8ec80;
    do {
      wVar5 = *(wint_t *)((longlong)pwVar14 + (longlong)(puVar16 + -0xa1fc7640));
      if ((wVar5 == 0) && (*pwVar14 == 0)) goto LAB_140504a7c;
      if (wVar5 != *pwVar14) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar14);
        if (wVar5 != wVar6) goto LAB_140504a72;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
LAB_1405049cb:
  local_168 = 0x11;
  local_170 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_170,0);
  FGenericPlatformString::Memcpy(local_170,L"AJle7W+toF/E+RI=",0x22);
  TArray<FString,FDefaultAllocator>::AddUniqueImpl<FString>(local_270 + 7,&local_170);
  if (local_170 != 0) {
    FMemory::Free();
  }
  goto LAB_140503b22;
LAB_140504a72:
  if (wVar5 != wVar6) {
    if ((int)local_270[5] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)local_270[4];
    }
    pwVar14 = &DAT_143f8ecb8;
    do {
      wVar5 = *(wint_t *)((longlong)pwVar14 + (longlong)(puVar16 + -0xa1fc765c));
      if ((wVar5 == 0) && (*pwVar14 == 0)) goto LAB_140504b2d;
      if (wVar5 != *pwVar14) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar14);
        if (wVar5 != wVar6) goto LAB_140504b23;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
LAB_140504a7c:
  local_158 = 0x11;
  local_160 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_160,0);
  FGenericPlatformString::Memcpy(local_160,L"ABxJHQXU8Weg1G8=",0x22);
  TArray<FString,FDefaultAllocator>::AddUniqueImpl<FString>(local_270 + 7,&local_160);
  if (local_160 != 0) {
    FMemory::Free();
  }
  goto LAB_140503b22;
LAB_140504b23:
  if (wVar5 != wVar6) {
    if ((int)local_270[5] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)local_270[4];
    }
    pwVar14 = &DAT_143f8ecf0;
    do {
      wVar5 = *(wint_t *)((longlong)pwVar14 + (longlong)(puVar16 + -0xa1fc7678));
      if ((wVar5 == 0) && (*pwVar14 == 0)) goto LAB_140504be2;
      if (wVar5 != *pwVar14) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar14);
        if (wVar5 != wVar6) goto LAB_140504bd4;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
LAB_140504b2d:
  local_148 = 0x11;
  local_150 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_150,0);
  FGenericPlatformString::Memcpy(local_150,L"ANFywHLrlzG33po=",0x22);
  TArray<FString,FDefaultAllocator>::AddUniqueImpl<FString>(local_270 + 7,&local_150);
  if (local_150 != 0) {
    FMemory::Free();
  }
  goto LAB_140503b22;
LAB_140504bd4:
  if (wVar5 != wVar6) {
    if ((int)local_270[5] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)local_270[4];
    }
    pwVar14 = &DAT_143f8ed38;
    do {
      wVar5 = *(wint_t *)((longlong)pwVar14 + (longlong)(puVar16 + -0xa1fc769c));
      if ((wVar5 == 0) && (*pwVar14 == 0)) goto LAB_140504d0a;
      if (wVar5 != *pwVar14) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar14);
        if (wVar5 != wVar6) goto LAB_140504d00;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
LAB_140504be2:
  iVar7 = 0;
  local_138 = 0x11;
  local_140 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_140,0);
  FGenericPlatformString::Memcpy(local_140,L"AF9CoQ0gEsr3QWE=",0x22);
  TArray<FString,FDefaultAllocator>::AddUniqueImpl<FString>(local_270 + 7,&local_140);
  if (local_140 != 0) {
    FMemory::Free();
  }
  plVar8 = local_270;
  if ((undefined *)*local_270 != &DAT_143f8ed28) {
    *(undefined4 *)(local_270 + 1) = 0;
    if (*(int *)((longlong)local_270 + 0xc) != 7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(local_270,7);
      iVar7 = (int)plVar8[1];
    }
    *(int *)(plVar8 + 1) = iVar7 + 7;
    if (*(int *)((longlong)plVar8 + 0xc) < iVar7 + 7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar8);
    }
    puVar9 = (undefined8 *)*plVar8;
    *puVar9 = 0x72006f00780069;
    *(undefined4 *)(puVar9 + 1) = 0x320061;
LAB_140504c8d:
    *(undefined2 *)((longlong)puVar9 + 0xc) = 0;
  }
LAB_140504c96:
  *(undefined4 *)(local_270 + 2) = 1;
  *(undefined4 *)(local_270 + 3) = 2;
  goto LAB_140503b22;
LAB_140504d00:
  if (wVar5 != wVar6) {
    if ((int)local_270[5] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)local_270[4];
    }
    pwVar14 = &DAT_143f8ed70;
    do {
      wVar5 = *(wint_t *)((longlong)pwVar14 + (longlong)(puVar16 + -0xa1fc76b8));
      if ((wVar5 == 0) && (*pwVar14 == 0)) goto LAB_140504dbe;
      if (wVar5 != *pwVar14) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar14);
        if (wVar5 != wVar6) goto LAB_140504db4;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
LAB_140504d0a:
  local_128 = 0x11;
  local_130 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_130,0);
  FGenericPlatformString::Memcpy(local_130,L"AOo/vx3cJc1+XbI=",0x22);
  TArray<FString,FDefaultAllocator>::AddUniqueImpl<FString>(local_270 + 7,&local_130);
  if (local_130 != 0) {
    FMemory::Free();
  }
  goto LAB_140503b22;
LAB_140504db4:
  if (wVar5 != wVar6) {
    if ((int)local_270[5] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)local_270[4];
    }
    pwVar14 = &DAT_143f8eda8;
    do {
      wVar5 = *(wint_t *)((longlong)(puVar16 + -0xa1fc76d4) + (longlong)pwVar14);
      if ((wVar5 == 0) && (*pwVar14 == 0)) goto LAB_140504e81;
      if (wVar5 != *pwVar14) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar14);
        if (wVar5 != wVar6) goto LAB_140504e77;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
LAB_140504dbe:
  local_118 = 0x11;
  local_120 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_120,0);
  FGenericPlatformString::Memcpy(local_120,L"AJZZ7SZZKgDq91k=",0x22);
  TArray<FString,FDefaultAllocator>::AddUniqueImpl<FString>(local_270 + 7,&local_120);
  if (local_120 != 0) {
    FMemory::Free();
  }
  goto LAB_140503b22;
LAB_140504e77:
  if (wVar5 == wVar6) {
LAB_140504e81:
    local_108 = 0x11;
    local_110 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_110,0);
    FGenericPlatformString::Memcpy(local_110,L"AHJYD1Fg2A3V8Ac=",0x22);
    TArray<FString,FDefaultAllocator>::AddUniqueImpl<FString>(local_270 + 7,&local_110);
    if (local_110 != 0) {
      FMemory::Free();
    }
  }
  else {
    if ((int)local_270[5] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)local_270[4];
    }
    for (pwVar14 = &DAT_143f8ede0;
        (wVar5 = *(wint_t *)((longlong)(puVar16 + -0xa1fc76f0) + (longlong)pwVar14), wVar5 != 0 ||
        (*pwVar14 != 0)); pwVar14 = pwVar14 + 1) {
      if (wVar5 != *pwVar14) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar14);
        if (wVar5 != wVar6) goto LAB_140503b22;
      }
    }
    local_f8 = 0x11;
    local_100 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_100,0);
    FGenericPlatformString::Memcpy(local_100,L"AAhE4yOfrw0TqR8=",0x22);
    TArray<FString,FDefaultAllocator>::AddUniqueImpl<FString>(local_270 + 7,&local_100);
    if (local_100 != 0) {
      FMemory::Free();
    }
  }
  goto LAB_140503b22;
LAB_140503b02:
  param_1 = local_260;
  iVar18 = local_278;
  if (puVar16 != (undefined2 *)0x0) {
    FMemory::Free(puVar16);
    param_1 = local_260;
    iVar18 = local_278;
  }
  goto LAB_140503b22;
}



// FUNCTION 140505130 FUN_140505130 body=421 status=ok
// SIG undefined FUN_140505130(void)

void FUN_140505130(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  undefined8 *puVar9;
  double dVar10;
  LARGE_INTEGER local_res8;
  longlong local_20 [3];
  
  if (((param_1[0x13] == 0) || (cVar8 = FUN_140516dc0(), cVar8 == '\0')) ||
     (cVar8 = (**(code **)(*(longlong *)param_1[0x13] + 0xf8))((longlong *)param_1[0x13],param_2),
     cVar8 == '\0')) {
    (**(code **)(*param_1 + 0xd0))(param_1,param_2,param_3,6);
    return;
  }
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  FString::FString(local_20,param_3);
  uVar6 = *(undefined8 *)(param_1[0x13] + 0x148);
  puVar9 = (undefined8 *)operator_new(0x40);
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    *puVar9 = &PTR_FUN_143f76b48;
    QueryPerformanceCounter(&local_res8);
    dVar10 = (double)local_res8.QuadPart * DAT_1468b02f8;
    *puVar9 = &PTR_FUN_143f9e8c0;
    *(undefined1 *)(puVar9 + 2) = 0;
    puVar9[1] = dVar10 + 16777216.0;
    puVar9[3] = param_1;
    puVar9[4] = uVar4;
    puVar9[5] = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    FString::FString(puVar9 + 6,local_20);
  }
  FOnlineAsyncTaskManager::AddToInQueue(uVar6,puVar9);
  if (local_20[0] != 0) {
    FMemory::Free();
  }
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  LOCK();
  plVar1 = plVar5 + 1;
  lVar7 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar7 != 1) {
    return;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar2 = (int *)((longlong)plVar5 + 0xc);
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar3 != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001405052a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 8))(plVar5,1);
  return;
}



// FUNCTION 1405052e0 FUN_1405052e0 body=3364 status=ok
// SIG undefined FUN_1405052e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1405052e0(longlong param_1,longlong param_2,undefined8 param_3,float *param_4,
                  float *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_718 [32];
  undefined8 local_6f8;
  char *local_6f0;
  undefined4 local_6e8;
  undefined4 local_6d8;
  int local_6d4;
  undefined4 local_6d0;
  uint local_6cc;
  longlong local_6c8 [2];
  undefined2 local_6b8 [4];
  undefined8 local_6b0;
  undefined8 local_6a8;
  undefined4 local_6a0;
  uint local_69c;
  undefined4 local_698;
  uint local_694;
  undefined4 local_690 [2];
  longlong local_688 [2];
  undefined2 *local_678;
  undefined8 local_670;
  undefined2 *local_668;
  undefined8 local_660;
  undefined2 *local_658;
  undefined8 local_650;
  undefined2 *local_648;
  undefined8 local_640;
  undefined2 *local_638;
  undefined8 local_630;
  undefined2 *local_628;
  undefined8 local_620;
  undefined2 *local_618;
  undefined8 local_610;
  undefined2 *local_608;
  undefined8 local_600;
  undefined2 *local_5f8;
  undefined8 local_5f0;
  undefined2 *local_5e8;
  undefined8 local_5e0;
  undefined2 *local_5d8;
  undefined8 local_5d0;
  undefined2 *local_5c8;
  undefined8 local_5c0;
  undefined2 *local_5b8;
  undefined8 local_5b0;
  undefined2 *local_5a8;
  undefined8 local_5a0;
  undefined2 *local_598;
  undefined8 local_590;
  undefined2 *local_588;
  undefined8 local_580;
  undefined2 *local_578;
  undefined8 local_570;
  undefined2 *local_568;
  undefined8 local_560;
  undefined2 *local_558;
  undefined8 local_550;
  longlong local_548 [2];
  longlong local_538 [2];
  longlong local_528 [2];
  longlong local_518 [2];
  longlong local_508 [2];
  longlong local_4f8 [2];
  longlong local_4e8 [2];
  longlong local_4d8 [2];
  longlong local_4c8 [2];
  longlong local_4b8 [2];
  longlong local_4a8 [2];
  longlong local_498 [2];
  undefined1 local_488 [256];
  undefined1 *local_388;
  undefined1 *local_380;
  undefined4 local_378;
  undefined1 local_368 [256];
  undefined1 *local_268;
  undefined1 *local_260;
  undefined4 local_258;
  char local_248 [256];
  char local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_718;
  plVar1 = (longlong *)(param_2 + 0x98);
  local_6b0 = (undefined2 *)
              CONCAT44((float)DAT_1464aa730._1_1_ * 0.003921569,
                       (float)DAT_1464aa730._2_1_ * 0.003921569);
  local_6a8 = CONCAT44((float)DAT_1464aa730._3_1_ * 0.003921569,
                       (float)(byte)DAT_1464aa730 * 0.003921569);
  (**(code **)(*plVar1 + 0x20))(plVar1,&local_6b0);
  local_6d4 = 0;
  local_6b0 = (undefined2 *)0x0;
  local_6a8 = 0;
  FUN_1428a6fb0(plVar1,&local_6b0,&local_6d4);
  if (local_6b0 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_6d4 = 0;
  local_6c8[0] = 0;
  local_6c8[1] = 0x1d;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6c8,0);
  FGenericPlatformString::Memcpy(local_6c8[0],L"Steam\'s online session state",0x3a);
  FUN_1428a6fb0(plVar1,local_6c8,&local_6d4);
  if (local_6c8[0] != 0) {
    FMemory::Free();
  }
  local_6d4 = 0;
  local_6c8[0] = 0;
  local_6c8[1] = 0x3e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_6c8,0);
  FGenericPlatformString::Memcpy
            (local_6c8[0],L"-------------------------------------------------------------",0x7c);
  FUN_1428a6fb0(plVar1,local_6c8,&local_6d4);
  if (local_6c8[0] != 0) {
    FMemory::Free();
  }
  local_6d4 = 0;
  FString::PrintfImpl(local_688,L"Number of sessions: %d",*(undefined4 *)(param_1 + 0x2c0));
  FUN_1428a6fb0(plVar1,local_688,&local_6d4);
  if (local_688[0] != 0) {
    FMemory::Free();
  }
  *param_5 = *param_4 + *param_5;
  local_6d4 = 0;
  if (0 < *(int *)(param_1 + 0x2c0)) {
    local_6c8[0] = 0;
    do {
      lVar13 = local_6c8[0];
      iVar14 = local_6d4;
      local_6d8 = 0;
      puVar7 = (undefined8 *)
               FName::ToString((longlong)local_6d4 * 0x118 + *(longlong *)(param_1 + 0x2b8) + 0xb8,
                               local_498);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = (undefined2 *)*puVar7;
      }
      FString::PrintfImpl(local_548,L"  Session: %s",puVar15);
      FUN_1428a6fb0(plVar1,local_548,&local_6d8);
      if (local_548[0] != 0) {
        FMemory::Free();
      }
      if (local_498[0] != 0) {
        FMemory::Free();
      }
      lVar2 = *(longlong *)(lVar13 + 0xa0 + *(longlong *)(param_1 + 0x2b8));
      if (lVar2 != 0) {
        uVar3 = *(ulonglong *)(lVar2 + 0x40);
        local_6d8 = 0;
        uVar17 = uVar3 & 0xffffffff;
        uVar10 = (uint)(uVar3 >> 0x20);
        uVar9 = uVar10 >> 0x14 & 0xf;
        iVar14 = (int)uVar10 >> 0x18;
        if (uVar9 == 2) {
          local_6f8 = (undefined4 *)(CONCAT44(local_6f8._4_4_,uVar10) & 0xffffffff000fffff);
          FString::PrintfImpl(&local_648,L"[%u:%u(%u%)]",iVar14,uVar17);
          puVar15 = local_648;
          iVar14 = (int)local_640;
          local_640 = 0;
          local_648 = (undefined2 *)0x0;
        }
        else if (uVar9 == 3) {
          FString::PrintfImpl(&local_658,L"[G-%u:%u]",iVar14,uVar17);
          puVar15 = local_658;
          iVar14 = (int)local_650;
          local_650 = 0;
          local_658 = (undefined2 *)0x0;
        }
        else if (uVar9 == 4) {
          local_6f8 = (undefined4 *)(CONCAT44(local_6f8._4_4_,uVar10) & 0xffffffff000fffff);
          FString::PrintfImpl(&local_668,L"[A-%u:%u(%u)]",iVar14,uVar17);
          puVar15 = local_668;
          iVar14 = (int)local_660;
          local_660 = 0;
          local_668 = (undefined2 *)0x0;
        }
        else if (uVar9 == 5) {
          FString::PrintfImpl(local_688 + 2,L"[%u:%u(pending)]",iVar14,uVar17);
          puVar15 = local_678;
          iVar14 = (int)local_670;
          local_670 = 0;
          local_678 = (undefined2 *)0x0;
        }
        else {
          FString::PrintfImpl(&local_558,L"[%u:%u]",iVar14,uVar17);
          puVar15 = local_558;
          iVar14 = (int)local_550;
          local_550 = 0;
          local_558 = (undefined2 *)0x0;
        }
        puVar16 = &DAT_143f3eda8;
        if (iVar14 != 0) {
          puVar16 = puVar15;
        }
        FString::PrintfImpl(local_538,L"    LobbyID: %s (%I64u)",puVar16,uVar3);
        FUN_1428a6fb0(plVar1,local_538,&local_6d8);
        if (local_538[0] != 0) {
          FMemory::Free();
        }
        if (puVar15 != (undefined2 *)0x0) {
          FMemory::Free(puVar15);
        }
        cVar5 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x20))(lVar2 + 0x28);
        lVar13 = local_6c8[0];
        iVar14 = local_6d4;
        if (cVar5 != '\0') {
          local_6f8 = &local_6d0;
          local_6cc = 0;
          local_6d0 = 0;
          (**(code **)(**(longlong **)(param_1 + 0x378) + 0xf0))
                    (*(longlong **)(param_1 + 0x378),*(undefined8 *)(lVar2 + 0x40),local_690,
                     local_6b8);
          local_6d8 = 0;
          FString::PrintfImpl(local_528,L"    Server IP: %u",local_690[0]);
          FUN_1428a6fb0(plVar1,local_528,&local_6d8);
          if (local_528[0] != 0) {
            FMemory::Free();
          }
          local_6d8 = 0;
          FString::PrintfImpl(local_518,L"    Port: %u",local_6b8[0]);
          FUN_1428a6fb0(plVar1,local_518,&local_6d8);
          if (local_518[0] != 0) {
            FMemory::Free();
          }
          uVar10 = local_6cc >> 0x14 & 0xf;
          iVar14 = (int)local_6cc >> 0x18;
          local_6d8 = 0;
          if (uVar10 == 2) {
            local_6f8 = (undefined4 *)(CONCAT44(local_6f8._4_4_,local_6cc) & 0xffffffff000fffff);
            FString::PrintfImpl(&local_5b8,L"[%u:%u(%u%)]",iVar14,local_6d0);
            puVar15 = local_5b8;
            iVar14 = (int)local_5b0;
            local_5b0 = 0;
            local_5b8 = (undefined2 *)0x0;
          }
          else if (uVar10 == 3) {
            FString::PrintfImpl(&local_608,L"[G-%u:%u]",iVar14,local_6d0);
            puVar15 = local_608;
            iVar14 = (int)local_600;
            local_600 = 0;
            local_608 = (undefined2 *)0x0;
          }
          else if (uVar10 == 4) {
            local_6f8 = (undefined4 *)(CONCAT44(local_6f8._4_4_,local_6cc) & 0xffffffff000fffff);
            FString::PrintfImpl(&local_618,L"[A-%u:%u(%u)]",iVar14,local_6d0);
            puVar15 = local_618;
            iVar14 = (int)local_610;
            local_610 = 0;
            local_618 = (undefined2 *)0x0;
          }
          else if (uVar10 == 5) {
            FString::PrintfImpl(&local_628,L"[%u:%u(pending)]",iVar14,local_6d0);
            puVar15 = local_628;
            iVar14 = (int)local_620;
            local_620 = 0;
            local_628 = (undefined2 *)0x0;
          }
          else {
            FString::PrintfImpl(&local_638,L"[%u:%u]",iVar14,local_6d0);
            puVar15 = local_638;
            iVar14 = (int)local_630;
            local_630 = 0;
            local_638 = (undefined2 *)0x0;
          }
          puVar16 = &DAT_143f3eda8;
          if (iVar14 != 0) {
            puVar16 = puVar15;
          }
          FString::PrintfImpl(local_508,L"    Server ID: %s",puVar16);
          FUN_1428a6fb0(plVar1,local_508,&local_6d8);
          if (local_508[0] != 0) {
            FMemory::Free();
          }
          if (puVar15 != (undefined2 *)0x0) {
            FMemory::Free(puVar15);
          }
          (**(code **)(**(longlong **)(param_1 + 0x378) + 0x118))
                    (*(longlong **)(param_1 + 0x378),&local_6a0,*(undefined8 *)(lVar2 + 0x40));
          uVar10 = local_69c >> 0x14 & 0xf;
          iVar14 = (int)local_69c >> 0x18;
          local_6d8 = 0;
          if (uVar10 == 2) {
            local_6f8 = (undefined4 *)(CONCAT44(local_6f8._4_4_,local_69c) & 0xffffffff000fffff);
            FString::PrintfImpl(&local_568,L"[%u:%u(%u%)]",iVar14,local_6a0);
            puVar15 = local_568;
            iVar14 = (int)local_560;
            local_560 = 0;
            local_568 = (undefined2 *)0x0;
          }
          else if (uVar10 == 3) {
            FString::PrintfImpl(&local_5c8,L"[G-%u:%u]",iVar14,local_6a0);
            puVar15 = local_5c8;
            iVar14 = (int)local_5c0;
            local_5c0 = 0;
            local_5c8 = (undefined2 *)0x0;
          }
          else if (uVar10 == 4) {
            local_6f8 = (undefined4 *)(CONCAT44(local_6f8._4_4_,local_69c) & 0xffffffff000fffff);
            FString::PrintfImpl(&local_5d8,L"[A-%u:%u(%u)]",iVar14,local_6a0);
            puVar15 = local_5d8;
            iVar14 = (int)local_5d0;
            local_5d0 = 0;
            local_5d8 = (undefined2 *)0x0;
          }
          else if (uVar10 == 5) {
            FString::PrintfImpl(&local_5e8,L"[%u:%u(pending)]",iVar14,local_6a0);
            puVar15 = local_5e8;
            iVar14 = (int)local_5e0;
            local_5e0 = 0;
            local_5e8 = (undefined2 *)0x0;
          }
          else {
            FString::PrintfImpl(&local_5f8,L"[%u:%u]",iVar14,local_6a0);
            puVar15 = local_5f8;
            iVar14 = (int)local_5f0;
            local_5f0 = 0;
            local_5f8 = (undefined2 *)0x0;
          }
          puVar16 = &DAT_143f3eda8;
          if (iVar14 != 0) {
            puVar16 = puVar15;
          }
          FString::PrintfImpl(local_4f8,L"    Owner: %s",puVar16);
          FUN_1428a6fb0(plVar1,local_4f8,&local_6d8);
          if (local_4f8[0] != 0) {
            FMemory::Free();
          }
          if (puVar15 != (undefined2 *)0x0) {
            FMemory::Free(puVar15);
          }
          iVar14 = (**(code **)(**(longlong **)(param_1 + 0x378) + 0xa8))
                             (*(longlong **)(param_1 + 0x378),*(undefined8 *)(lVar2 + 0x40));
          local_6d8 = 0;
          FString::PrintfImpl(local_4e8,L"    Lobby data count: %d",iVar14);
          FUN_1428a6fb0(plVar1,local_4e8,&local_6d8);
          if (local_4e8[0] != 0) {
            FMemory::Free();
          }
          iVar11 = 0;
          if (0 < iVar14) {
            do {
              _guard_xfg_dispatch_icall_nop(local_148,0,0xff);
              _guard_xfg_dispatch_icall_nop(local_248,0,0xff);
              local_6f0 = local_248;
              local_6e8 = 0xff;
              local_6f8 = (undefined4 *)CONCAT44(local_6f8._4_4_,0xff);
              (**(code **)(**(longlong **)(param_1 + 0x378) + 0xb0))
                        (*(longlong **)(param_1 + 0x378),*(undefined8 *)(lVar2 + 0x40),iVar11,
                         local_148);
              local_6d8 = 0;
              local_268 = (undefined1 *)0x0;
              lVar13 = -1;
              do {
                lVar8 = lVar13;
                lVar13 = lVar8 + 1;
              } while (local_248[lVar8 + 1] != '\0');
              uVar10 = (int)lVar8 + 2;
              local_258 = (undefined4)(lVar8 + 1);
              if ((0x80 < uVar10) && (uVar10 != 0)) {
                local_268 = (undefined1 *)FMemory::Realloc(0,(longlong)(int)uVar10 * 2,0);
              }
              local_260 = local_368;
              if (local_268 != (undefined1 *)0x0) {
                local_260 = local_268;
              }
              local_6f8 = (undefined4 *)CONCAT62(local_6f8._2_6_,0x3f);
              FGenericPlatformString::Convert<char,wchar_t>(local_260,uVar10,local_248,uVar10);
              puVar4 = local_260;
              local_388 = (undefined1 *)0x0;
              lVar13 = -1;
              do {
                lVar8 = lVar13;
                lVar13 = lVar8 + 1;
              } while (local_148[lVar8 + 1] != '\0');
              uVar10 = (int)lVar8 + 2;
              local_378 = (undefined4)(lVar8 + 1);
              if ((0x80 < uVar10) && (uVar10 != 0)) {
                local_388 = (undefined1 *)FMemory::Realloc(0,(longlong)(int)uVar10 * 2,0);
              }
              local_380 = local_488;
              if (local_388 != (undefined1 *)0x0) {
                local_380 = local_388;
              }
              local_6f8 = (undefined4 *)CONCAT62(local_6f8._2_6_,0x3f);
              FGenericPlatformString::Convert<char,wchar_t>(local_380,uVar10,local_148,uVar10);
              FString::PrintfImpl(local_4d8,L"      Key/Value: %s = %s",local_380,puVar4);
              FUN_1428a6fb0(plVar1,local_4d8,&local_6d8);
              if (local_4d8[0] != 0) {
                FMemory::Free();
              }
              if (local_388 != (undefined1 *)0x0) {
                FMemory::Free();
              }
              if (local_268 != (undefined1 *)0x0) {
                FMemory::Free();
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < iVar14);
          }
          iVar11 = (**(code **)(**(longlong **)(param_1 + 0x378) + 0x88))
                             (*(longlong **)(param_1 + 0x378),*(undefined8 *)(lVar2 + 0x40));
          uVar6 = (**(code **)(**(longlong **)(param_1 + 0x378) + 0x100))
                            (*(longlong **)(param_1 + 0x378),*(undefined8 *)(lVar2 + 0x40));
          local_6d8 = 0;
          FString::PrintfImpl(local_4c8,L"    Number of players: %d",iVar11);
          FUN_1428a6fb0(plVar1,local_4c8,&local_6d8);
          if (local_4c8[0] != 0) {
            FMemory::Free();
          }
          local_6d8 = 0;
          FString::PrintfImpl(local_4b8,L"    Max players: %d",uVar6);
          FUN_1428a6fb0(plVar1,local_4b8,&local_6d8);
          if (local_4b8[0] != 0) {
            FMemory::Free();
          }
          iVar12 = 0;
          lVar13 = local_6c8[0];
          iVar14 = local_6d4;
          if (0 < iVar11) {
            do {
              (**(code **)(**(longlong **)(param_1 + 0x378) + 0x90))
                        (*(longlong **)(param_1 + 0x378),&local_698,*(undefined8 *)(lVar2 + 0x40),
                         iVar12);
              uVar10 = local_694 >> 0x14 & 0xf;
              iVar14 = (int)local_694 >> 0x18;
              local_6d8 = 0;
              if (uVar10 == 2) {
                local_6f8 = (undefined4 *)(CONCAT44(local_6f8._4_4_,local_694) & 0xffffffff000fffff)
                ;
                FString::PrintfImpl(&local_6b0,L"[%u:%u(%u%)]",iVar14,local_698);
                puVar15 = local_6b0;
                iVar14 = (int)local_6a8;
                local_6a8 = 0;
                local_6b0 = (undefined2 *)0x0;
              }
              else if (uVar10 == 3) {
                FString::PrintfImpl(&local_578,L"[G-%u:%u]",iVar14,local_698);
                puVar15 = local_578;
                iVar14 = (int)local_570;
                local_570 = 0;
                local_578 = (undefined2 *)0x0;
              }
              else if (uVar10 == 4) {
                local_6f8 = (undefined4 *)(CONCAT44(local_6f8._4_4_,local_694) & 0xffffffff000fffff)
                ;
                FString::PrintfImpl(&local_588,L"[A-%u:%u(%u)]",iVar14,local_698);
                puVar15 = local_588;
                iVar14 = (int)local_580;
                local_580 = 0;
                local_588 = (undefined2 *)0x0;
              }
              else if (uVar10 == 5) {
                FString::PrintfImpl(&local_598,L"[%u:%u(pending)]",iVar14,local_698);
                puVar15 = local_598;
                iVar14 = (int)local_590;
                local_590 = 0;
                local_598 = (undefined2 *)0x0;
              }
              else {
                FString::PrintfImpl(&local_5a8,L"[%u:%u]",iVar14,local_698);
                puVar15 = local_5a8;
                iVar14 = (int)local_5a0;
                local_5a0 = 0;
                local_5a8 = (undefined2 *)0x0;
              }
              puVar16 = &DAT_143f3eda8;
              if (iVar14 != 0) {
                puVar16 = puVar15;
              }
              FString::PrintfImpl(local_4a8,L"      Player: %s",puVar16);
              FUN_1428a6fb0(plVar1,local_4a8,&local_6d8);
              if (local_4a8[0] != 0) {
                FMemory::Free();
              }
              if (puVar15 != (undefined2 *)0x0) {
                FMemory::Free(puVar15);
              }
              iVar12 = iVar12 + 1;
              lVar13 = local_6c8[0];
              iVar14 = local_6d4;
            } while (iVar12 < iVar11);
          }
        }
      }
      local_6d8 = 0;
      local_688[0] = 0;
      local_688[1] = 0;
      FUN_1428a6fb0(plVar1,local_688,&local_6d8);
      if (local_688[0] != 0) {
        FMemory::Free();
      }
      local_6d4 = iVar14 + 1;
      local_6c8[0] = lVar13 + 0x118;
    } while (local_6d4 < *(int *)(param_1 + 0x2c0));
  }
  return;
}



// FUNCTION 140506010 FUN_140506010 body=190 status=ok
// SIG undefined FUN_140506010(void)

void FUN_140506010(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 local_28 [2];
  longlong *local_20;
  undefined8 local_18;
  
  local_20 = (longlong *)0x0;
  local_18 = 0;
  FUN_14050ec50(param_1,&local_20);
  plVar2 = local_20;
  uVar5 = (uint)local_18;
  uVar6 = (ulonglong)(int)(uint)local_18;
  plVar4 = local_20 + uVar6 * 2;
  for (plVar3 = local_20; plVar1 = plVar2, plVar3 != plVar4; plVar3 = plVar3 + 2) {
    local_28[0] = 0;
    FUN_1428a6fb0(param_2 + 0x98,plVar3,local_28);
  }
  while (uVar5 != 0) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    uVar5 = (int)uVar6 - 1;
    uVar6 = (ulonglong)uVar5;
    plVar1 = plVar1 + 2;
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  return;
}



// FUNCTION 1405060d0 FUN_1405060d0 body=613 status=ok
// SIG undefined FUN_1405060d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1405060d0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_298 [32];
  undefined4 *local_278;
  undefined1 *local_270;
  undefined4 local_268;
  undefined4 local_258;
  undefined4 local_254;
  undefined1 local_250 [4];
  undefined1 local_24c [4];
  undefined1 local_248 [8];
  undefined1 local_240 [8];
  undefined1 local_238 [256];
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  }
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x2c0)) {
    lVar6 = 0;
    do {
      FUN_1404af0e0((longlong)iVar7 * 0x118 + *(longlong *)(param_1 + 0x2b8));
      lVar1 = *(longlong *)(lVar6 + 0xa0 + *(longlong *)(param_1 + 0x2b8));
      if ((lVar1 != 0) &&
         (cVar2 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x20))(lVar1 + 0x28), cVar2 != '\0')) {
        local_278 = &local_258;
        local_254 = 0;
        local_258 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x378) + 0xf0))
                  (*(longlong **)(param_1 + 0x378),*(undefined8 *)(lVar1 + 0x40),local_24c,local_250
                  );
        (**(code **)(**(longlong **)(param_1 + 0x378) + 0x118))
                  (*(longlong **)(param_1 + 0x378),local_248,*(undefined8 *)(lVar1 + 0x40));
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0x378) + 0xa8))();
        iVar5 = 0;
        if (0 < iVar4) {
          do {
            _guard_xfg_dispatch_icall_nop(local_138,0,0xff);
            _guard_xfg_dispatch_icall_nop(local_238,0,0xff);
            local_270 = local_238;
            local_268 = 0xff;
            local_278 = (undefined4 *)CONCAT44(local_278._4_4_,0xff);
            (**(code **)(**(longlong **)(param_1 + 0x378) + 0xb0))
                      (*(longlong **)(param_1 + 0x378),*(undefined8 *)(lVar1 + 0x40),iVar5,local_138
                      );
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar4);
        }
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0x378) + 0x88))
                          (*(longlong **)(param_1 + 0x378),*(undefined8 *)(lVar1 + 0x40));
        (**(code **)(**(longlong **)(param_1 + 0x378) + 0x100))
                  (*(longlong **)(param_1 + 0x378),*(undefined8 *)(lVar1 + 0x40));
        iVar5 = 0;
        if (0 < iVar4) {
          do {
            (**(code **)(**(longlong **)(param_1 + 0x378) + 0x90))
                      (*(longlong **)(param_1 + 0x378),local_240,*(undefined8 *)(lVar1 + 0x40),iVar5
                      );
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar4);
        }
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 0x118;
    } while (iVar7 < *(int *)(param_1 + 0x2c0));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  return;
}



// FUNCTION 140506340 FUN_140506340 body=274 status=ok
// SIG undefined FUN_140506340(void)

void FUN_140506340(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  iVar6 = (int)param_1[1];
  plVar7 = (longlong *)*param_1;
  if (iVar6 != 0) {
    plVar8 = plVar7 + 0xd;
    do {
      *(undefined4 *)(plVar8 + 1) = 0;
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(plVar8 + -8,0);
      if (plVar8[-4] != 0) {
        FMemory::Free();
      }
      if (plVar8[-8] != 0) {
        FMemory::Free();
      }
      plVar4 = (longlong *)plVar8[-10];
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
            (**(code **)(*plVar4 + 8))(plVar4);
          }
        }
      }
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 0xf;
      plVar8 = plVar8 + 0xf;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeTo
            (param_1,param_2);
  return;
}



// FUNCTION 140506460 Empty body=168 status=ok
// SIG undefined Empty(void)

void TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty
               (longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(*param_1 + 8);
    do {
      plVar4 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 2;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 140506510 FUN_140506510 body=117 status=ok
// SIG undefined FUN_140506510(void)

void FUN_140506510(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_140506730();
  cVar1 = TSet<TTuple<FUniqueNetIdSteam,int>,TDefaultMapHashableKeyFuncs<FUniqueNetIdSteam,int,0>,FDefaultSetAllocator>
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



// FUNCTION 140506590 Empty body=404 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar3) goto LAB_140506661;
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
LAB_140506661:
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
      FVariantData::Empty(*param_1 + ((longlong)iStack_1c * 5 + 1) * 8);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 140506730 FUN_140506730 body=448 status=ok
// SIG undefined FUN_140506730(void)

void FUN_140506730(longlong *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
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
  
  iVar3 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar3 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar6 = *puVar10;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar6 == 0) {
      lVar7 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar9 = local_68 + 1;
      bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar9;
      if (bVar5) goto LAB_1405067f6;
      uVar6 = puVar10[lVar7 + 1];
    }
    uStack_64 = -uVar6 & uVar6;
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
    if (iVar3 < iStack_54) {
LAB_1405067f6:
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
      puVar8 = (undefined8 *)((longlong)iStack_2c * 0x30 + *param_1);
      *puVar8 = &PTR_FUN_143f73cd8;
      plVar4 = (longlong *)puVar8[2];
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
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
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



// FUNCTION 1405068f0 FUN_1405068f0 body=444 status=ok
// SIG undefined FUN_1405068f0(void)

void FUN_1405068f0(longlong *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
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
  
  iVar3 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar3 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar6 = *puVar10;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar6 == 0) {
      lVar7 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar9 = local_68 + 1;
      bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar9;
      if (bVar5) goto LAB_1405069b6;
      uVar6 = puVar10[lVar7 + 1];
    }
    uStack_64 = -uVar6 & uVar6;
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
    if (iVar3 < iStack_54) {
LAB_1405069b6:
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
      puVar8 = (undefined8 *)((longlong)iStack_2c * 0x38 + *param_1);
      *puVar8 = &PTR_FUN_143f73cd8;
      plVar4 = (longlong *)puVar8[2];
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



// FUNCTION 140506ab0 FUN_140506ab0 body=692 status=ok
// SIG undefined FUN_140506ab0(void)

void FUN_140506ab0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  code *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  longlong *local_40;
  
  local_res10 = param_2;
  lVar6 = FUN_140511190();
  iVar9 = -0x7fffbffb;
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x110) == 4)) {
    if ((param_1[0x51] == 0) ||
       ((cVar5 = FUN_140516dc0(), cVar5 == '\0' || (*(char *)(lVar6 + 0x3a) != '\0')))) {
      if ((*(char *)(lVar6 + 0x38) != '\0') &&
         (((int)param_1[0x77] == 0 && (*(char *)(lVar6 + 0xd8) != '\0')))) {
        iStack_60 = 0;
        local_68 = FUN_14051a4a0;
        local_58 = 0x4051a4a0;
        uStack_54 = 1;
        uStack_50 = 0;
        uStack_4c = uStack_5c;
        uVar8 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x4f,local_48);
        FUN_1404f5700(&local_68,uVar8,&local_58);
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar7 = local_40 + 1;
          lVar6 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
        cVar5 = FUN_1404b0b90(param_1 + 0x71,&local_68);
        iVar9 = 0;
        if (cVar5 == '\0') {
          FUN_1404b6bd0(param_1 + 0x71);
          iVar9 = -0x7fffbffb;
        }
        if (iStack_60 != 0) {
          if (local_68 == (code *)0x0) goto LAB_140506c29;
          (**(code **)(*(longlong *)local_68 + 0x28))(local_68,0);
          if (local_68 != (code *)0x0) {
            local_68 = (code *)FMemory::Realloc(local_68,0,0);
          }
          iStack_60 = 0;
        }
        if (local_68 != (code *)0x0) {
          FMemory::Free(local_68);
        }
        goto LAB_140506c29;
      }
    }
    else {
      if (0 < *(int *)(lVar6 + 0x108)) {
        if (param_1[0x6e] != 0) {
          plVar7 = *(longlong **)(lVar6 + 0x100);
          plVar10 = plVar7 + (longlong)*(int *)(lVar6 + 0x108) * 2;
          for (; plVar7 != plVar10; plVar7 = plVar7 + 2) {
            plVar3 = (longlong *)plVar7[1];
            lVar4 = *plVar7;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
            }
            local_res18 = *(undefined8 *)(lVar4 + 0x18);
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
                iVar9 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            (**(code **)(*(longlong *)param_1[0x6e] + 0x100))((longlong *)param_1[0x6e],local_res18)
            ;
          }
        }
        TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(lVar6 + 0x100,0)
        ;
      }
      local_res8 = 0;
      plVar7 = (longlong *)FUN_1419c6b80(&local_res8);
      iVar9 = -0x7fffbffb;
      if ((plVar7 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar7 + 0x78))(plVar7), cVar5 == '\0')) goto LAB_140506c29;
    }
    *(undefined4 *)(lVar6 + 0x110) = 6;
    iVar9 = 0;
  }
LAB_140506c29:
  (**(code **)(*param_1 + 200))(param_1,local_res10,(iVar9 != 0) + '\x01');
  return;
}



// FUNCTION 140506d70 FUN_140506d70 body=112 status=ok
// SIG undefined FUN_140506d70(void)

undefined1
FUN_140506d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  cVar1 = FParse::Command(local_res18,L"ResetAchievements",1);
  if (cVar1 == '\0') {
    cVar1 = FUN_1404af8d0(param_1,param_2,local_res18[0],param_4);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140506de0 FUN_140506de0 body=169 status=ok
// SIG undefined FUN_140506de0(void)

void FUN_140506de0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar6 = (longlong *)0x0;
  plVar5 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar7 = iVar4 == 0;
    if (bVar7) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar5 = plVar6, !bVar7) {
      LOCK();
      bVar7 = iVar4 == (int)plVar2[1];
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar7) {
        plVar5 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar6 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  (**(code **)(param_1 + 0x18))((longlong)(int)*(undefined8 *)(param_1 + 0x20) + (longlong)plVar6);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return;
}



// FUNCTION 140506e90 FUN_140506e90 body=305 status=ok
// SIG undefined FUN_140506e90(void)

undefined8 FUN_140506e90(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar5 = *(longlong **)(param_1 + 0x10);
  plVar8 = (longlong *)0x0;
  plVar4 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar5[1];
    bVar9 = iVar3 == 0;
    if (bVar9) {
      *(int *)(plVar5 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (plVar4 = plVar8, !bVar9) {
      LOCK();
      bVar9 = iVar3 == (int)plVar5[1];
      if (bVar9) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar4 = plVar5;
        if ((plVar5 != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) {
          plVar4 = *(longlong **)(param_1 + 0x10);
          plVar7 = plVar4;
          if (plVar4 == (longlong *)0x0) goto LAB_140506f62;
          LOCK();
          iVar3 = (int)plVar4[1];
          bVar9 = iVar3 == 0;
          if (bVar9) {
            *(int *)(plVar4 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
          goto joined_r0x000140506f3a;
        }
        break;
      }
      LOCK();
      iVar3 = (int)plVar5[1];
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(plVar5 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  uVar6 = 0;
  plVar5 = plVar4;
LAB_140506eda:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar5 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  return uVar6;
joined_r0x000140506f3a:
  plVar7 = plVar8;
  if (bVar9) goto LAB_140506f62;
  LOCK();
  bVar9 = iVar3 == (int)plVar4[1];
  if (bVar9) {
    *(int *)(plVar4 + 1) = iVar3 + 1;
  }
  UNLOCK();
  if (bVar9) {
    plVar7 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = *(longlong **)(param_1 + 8);
    }
    goto LAB_140506f62;
  }
  LOCK();
  iVar3 = (int)plVar4[1];
  bVar9 = iVar3 == 0;
  if (bVar9) {
    *(int *)(plVar4 + 1) = 0;
    iVar3 = 0;
  }
  UNLOCK();
  goto joined_r0x000140506f3a;
LAB_140506f62:
  (**(code **)(param_1 + 0x18))((longlong)(int)*(undefined8 *)(param_1 + 0x20) + (longlong)plVar8);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  }
  uVar6 = 1;
  goto LAB_140506eda;
}



// FUNCTION 140506fd0 FUN_140506fd0 body=267 status=ok
// SIG undefined FUN_140506fd0(void)

bool FUN_140506fd0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  puVar5 = (undefined8 *)
           SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamMatchmaking_1461fc760);
  plVar1 = (longlong *)*puVar5;
  iVar3 = (**(code **)(*plVar1 + 0x88))(plVar1,*(undefined8 *)(param_1 + 0x18));
  iVar4 = (**(code **)(*plVar1 + 0x100))(plVar1,*(undefined8 *)(param_1 + 0x18));
  if (0 < iVar4) {
    *(int *)(param_2 + 0xb4) = iVar4 - iVar3;
    puVar5 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
    uVar8 = *(ulonglong *)(param_1 + 0x18);
    plVar6 = (longlong *)(**(code **)(*(longlong *)*puVar5 + 0x10))((longlong *)*puVar5,local_res8);
    plVar7 = (longlong *)(**(code **)(*plVar1 + 0x118))(plVar1,local_res18,uVar8);
    if (*plVar7 == *plVar6) {
      if ((*(char *)(param_2 + 0x39) == '\0') || (iVar4 <= iVar3)) {
        uVar8 = uVar8 & 0xffffffffffffff00;
      }
      else {
        uVar8 = 1;
      }
      cVar2 = (**(code **)(*plVar1 + 0x110))(plVar1,*(undefined8 *)(param_1 + 0x18),uVar8);
      return cVar2 != '\0';
    }
  }
  return true;
}



// FUNCTION 1405070e0 FUN_1405070e0 body=4627 status=ok
// SIG undefined FUN_1405070e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1405070e0(longlong param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  wchar_t *pwVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong **pplVar18;
  longlong *plVar19;
  int iVar20;
  longlong *plVar21;
  undefined1 auStack_1818 [32];
  undefined4 local_17f8;
  char *local_17f0;
  undefined4 local_17e8;
  char local_17d8;
  uint local_17d4;
  uint local_17d0;
  uint local_17cc;
  longlong *local_17c8;
  undefined8 local_17c0;
  int local_17b8;
  longlong local_17b0;
  undefined8 local_17a8 [2];
  longlong *local_1798;
  longlong *plStack_1790;
  longlong *local_1788;
  longlong *plStack_1780;
  longlong *local_1778;
  longlong *plStack_1770;
  longlong *local_1768;
  longlong *plStack_1760;
  longlong *local_1758;
  longlong *plStack_1750;
  longlong *local_1748;
  longlong *local_1740;
  longlong *local_1738;
  longlong *local_1728;
  longlong *plStack_1720;
  longlong local_1718;
  undefined4 local_1710 [2];
  undefined8 local_1708;
  undefined8 local_1700;
  undefined4 local_16f8;
  undefined1 local_16f0 [8];
  undefined8 local_16e8;
  undefined8 local_16e0;
  wchar_t local_16d8 [128];
  wchar_t *local_15d8;
  wchar_t *local_15d0;
  undefined4 local_15c8;
  wchar_t local_15b8 [128];
  wchar_t *local_14b8;
  wchar_t *local_14b0;
  undefined4 local_14a8;
  wchar_t local_1498 [128];
  wchar_t *local_1398;
  wchar_t *local_1390;
  undefined4 local_1388;
  wchar_t local_1378 [128];
  wchar_t *local_1278;
  wchar_t *local_1270;
  undefined4 local_1268;
  undefined1 local_1258 [256];
  undefined1 *local_1158;
  undefined1 *local_1150;
  undefined4 local_1148;
  wchar_t local_1138 [128];
  wchar_t *local_1038;
  wchar_t *local_1030;
  undefined4 local_1028;
  wchar_t local_1018 [128];
  wchar_t *local_f18;
  wchar_t *local_f10;
  undefined4 local_f08;
  wchar_t local_ef8 [128];
  wchar_t *local_df8;
  wchar_t *local_df0;
  undefined4 local_de8;
  wchar_t local_dd8 [128];
  wchar_t *local_cd8;
  wchar_t *local_cd0;
  undefined4 local_cc8;
  wchar_t local_cb8 [128];
  wchar_t *local_bb8;
  wchar_t *local_bb0;
  undefined4 local_ba8;
  undefined1 local_b98 [256];
  undefined1 *local_a98;
  undefined1 *local_a90;
  undefined4 local_a88;
  wchar_t local_a78 [128];
  wchar_t *local_978;
  wchar_t *local_970;
  undefined4 local_968;
  wchar_t local_958 [128];
  wchar_t *local_858;
  wchar_t *local_850;
  undefined4 local_848;
  char local_838 [1024];
  char local_438 [1024];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x14050710a;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1818;
  local_17d8 = '\x01';
  local_17b0 = param_2;
  local_1718 = param_1;
  puVar6 = (undefined8 *)
           SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamMatchmaking_1461fc760);
  local_1738 = (longlong *)*puVar6;
  TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
  ::Empty(param_2 + 0x50,0);
  plVar7 = (longlong *)operator_new(0x48);
  plVar19 = (longlong *)0x0;
  local_1758 = plVar19;
  if (plVar7 != (longlong *)0x0) {
    lVar9 = *(longlong *)(param_1 + 0x18);
    *plVar7 = (longlong)&PTR_FUN_143f9a7a8;
    plVar7[1] = 0;
    plVar7[2] = 0;
    plVar7[3] = 0;
    plVar7[4] = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plVar7[5] = (longlong)&PTR_FUN_143f9a6c8;
    plVar7[8] = lVar9;
    local_1758 = plVar7;
  }
  plVar7 = (longlong *)operator_new(0x18);
  plStack_1750 = plVar19;
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *plVar7 = (longlong)&PTR_FUN_143f3f2d0;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    plVar7[2] = (longlong)local_1758;
    plStack_1750 = plVar7;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_1758,local_1758,local_1758);
  uVar8 = FName::FName(local_16f0,L"WINDOWS",1);
  plVar7 = (longlong *)FUN_1419c6b80(uVar8);
  (**(code **)(*plVar7 + 0x70))(plVar7,&local_1728,0,0);
  plVar7 = (longlong *)operator_new(0x30);
  local_1768 = plVar19;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_143f9a840;
    plVar7[2] = 0;
    plVar7[3] = 0;
    plVar7[1] = (longlong)&PTR_FUN_143f9a6c8;
    plVar7[4] = 0;
    *(undefined2 *)(plVar7 + 5) = 0;
    local_1768 = plVar7;
  }
  plVar7 = (longlong *)operator_new(0x18);
  plStack_1760 = plVar19;
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *plVar7 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    plVar7[2] = (longlong)local_1768;
    plStack_1760 = plVar7;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_1768,local_1768,local_1768);
  plVar7 = local_1738;
  local_16e8 = *(undefined8 *)(param_1 + 0x18);
  local_17d4 = 0;
  local_17d0 = 0;
  local_17b8 = (**(code **)(*local_1738 + 0xa8))(local_1738);
  local_17cc = 0;
  plVar10 = plVar19;
  plVar11 = plVar19;
  plVar13 = plVar19;
  plVar21 = plVar19;
  if (0 < local_17b8) {
    do {
      iVar4 = (int)plVar11;
      iVar5 = (int)plVar21;
      local_17f0 = local_838;
      local_17e8 = 0x400;
      local_17f8 = 0x400;
      local_16e0 = *(undefined8 *)(local_1718 + 0x18);
      cVar2 = (**(code **)(*plVar7 + 0xb0))(plVar7,local_16e0,plVar10,local_438);
      uVar15 = 0;
      if (cVar2 == '\0') break;
      iVar3 = _stricmp(local_438,"NUMPUBCONN");
      iVar20 = (int)plVar13;
      if (iVar3 == 0) {
        local_1038 = (wchar_t *)0x0;
        lVar9 = -1;
        do {
          lVar12 = lVar9;
          lVar9 = lVar12 + 1;
        } while (local_838[lVar12 + 1] != '\0');
        uVar15 = (int)lVar12 + 2;
        local_1028 = (undefined4)(lVar12 + 1);
        if ((0x80 < uVar15) && (uVar15 != 0)) {
          local_1038 = (wchar_t *)FMemory::Realloc(0,(longlong)(int)uVar15 * 2,0);
        }
        local_1030 = local_1138;
        if (local_1038 != (wchar_t *)0x0) {
          local_1030 = local_1038;
        }
        local_17f8 = CONCAT22(local_17f8._2_2_,0x3f);
        FGenericPlatformString::Convert<char,wchar_t>(local_1030,uVar15,local_838,uVar15);
        iVar4 = _wtoi(local_1030);
        *(int *)(param_2 + 0x30) = iVar4;
        pwVar14 = local_1038;
LAB_140507c06:
        if (pwVar14 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        plVar13 = (longlong *)(ulonglong)(iVar20 + 1);
      }
      else {
        iVar3 = _stricmp(local_438,"NUMPRIVCONN");
        if (iVar3 == 0) {
          local_f18 = (wchar_t *)0x0;
          lVar9 = -1;
          do {
            lVar12 = lVar9;
            lVar9 = lVar12 + 1;
          } while (local_838[lVar12 + 1] != '\0');
          uVar15 = (int)lVar12 + 2;
          local_f08 = (undefined4)(lVar12 + 1);
          if ((0x80 < uVar15) && (uVar15 != 0)) {
            local_f18 = (wchar_t *)FMemory::Realloc(0,(longlong)(int)uVar15 * 2,0);
          }
          local_f10 = local_1018;
          if (local_f18 != (wchar_t *)0x0) {
            local_f10 = local_f18;
          }
          local_17f8 = CONCAT22(local_17f8._2_2_,0x3f);
          FGenericPlatformString::Convert<char,wchar_t>(local_f10,uVar15,local_838,uVar15);
          iVar4 = _wtoi(local_f10);
          *(int *)(param_2 + 0x34) = iVar4;
          pwVar14 = local_f18;
          goto LAB_140507c06;
        }
        iVar3 = _stricmp(local_438,"SESSIONFLAGS");
        if (iVar3 == 0) {
          local_df8 = (wchar_t *)0x0;
          lVar9 = -1;
          do {
            lVar12 = lVar9;
            lVar9 = lVar12 + 1;
          } while (local_838[lVar12 + 1] != '\0');
          uVar15 = (int)lVar12 + 2;
          local_de8 = (undefined4)(lVar12 + 1);
          if ((0x80 < uVar15) && (uVar15 != 0)) {
            local_df8 = (wchar_t *)FMemory::Realloc(0,(longlong)(int)uVar15 * 2,0);
          }
          local_df0 = local_ef8;
          if (local_df8 != (wchar_t *)0x0) {
            local_df0 = local_df8;
          }
          local_17f8 = CONCAT22(local_17f8._2_2_,0x3f);
          FGenericPlatformString::Convert<char,wchar_t>(local_df0,uVar15,local_838,uVar15);
          uVar15 = _wtoi(local_df0);
          if (local_df8 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          *(byte *)(param_2 + 0x38) = (byte)uVar15 & 1;
          *(byte *)(param_2 + 0x3a) = (byte)(uVar15 >> 2) & 1;
          *(byte *)(param_2 + 0x39) = (byte)(uVar15 >> 1) & 1;
          *(byte *)(param_2 + 0x3b) = (byte)(uVar15 >> 3) & 1;
          *(byte *)(param_2 + 0x3c) = (byte)(uVar15 >> 4) & 1;
          *(byte *)(param_2 + 0x3d) = (byte)(uVar15 >> 5) & 1;
          *(byte *)(param_2 + 0x3e) = (byte)(uVar15 >> 6) & 1;
          *(byte *)(param_2 + 0x3f) = (byte)(uVar15 >> 7) & 1;
          plVar13 = (longlong *)(ulonglong)(iVar20 + 1);
          *(byte *)(param_2 + 0x40) = (byte)(uVar15 >> 8) & 1;
          goto LAB_14050802e;
        }
        iVar3 = _stricmp(local_438,"SHOULDADVERTISE");
        if (iVar3 == 0) {
          local_cd8 = (wchar_t *)0x0;
          lVar9 = -1;
          do {
            lVar12 = lVar9;
            lVar9 = lVar12 + 1;
          } while (local_838[lVar12 + 1] != '\0');
          uVar15 = (int)lVar12 + 2;
          local_cc8 = (undefined4)(lVar12 + 1);
          if ((0x80 < uVar15) && (uVar15 != 0)) {
            local_cd8 = (wchar_t *)FMemory::Realloc(0,(longlong)(int)uVar15 * 2,0);
          }
          local_cd0 = local_dd8;
          if (local_cd8 != (wchar_t *)0x0) {
            local_cd0 = local_cd8;
          }
          local_17f8 = CONCAT22(local_17f8._2_2_,0x3f);
          FGenericPlatformString::Convert<char,wchar_t>(local_cd0,uVar15,local_838,uVar15);
          _wtoi(local_cd0);
          pwVar14 = local_cd8;
          goto LAB_140507c06;
        }
        iVar3 = _stricmp(local_438,"OWNINGID");
        if (iVar3 == 0) {
          local_bb8 = (wchar_t *)0x0;
          lVar9 = -1;
          do {
            lVar12 = lVar9;
            lVar9 = lVar12 + 1;
          } while (local_838[lVar12 + 1] != '\0');
          uVar15 = (int)lVar12 + 2;
          local_ba8 = (undefined4)(lVar12 + 1);
          if ((0x80 < uVar15) && (uVar15 != 0)) {
            local_bb8 = (wchar_t *)FMemory::Realloc(0,(longlong)(int)uVar15 * 2,0);
          }
          local_bb0 = local_cb8;
          if (local_bb8 != (wchar_t *)0x0) {
            local_bb0 = local_bb8;
          }
          local_17f8 = CONCAT22(local_17f8._2_2_,0x3f);
          FGenericPlatformString::Convert<char,wchar_t>(local_bb0,uVar15,local_838,uVar15);
          lVar9 = _wtoi64(local_bb0);
          if (local_bb8 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          if (lVar9 == 0) goto LAB_14050802e;
          plVar10 = (longlong *)operator_new(0x20);
          plVar7 = plVar19;
          if (plVar10 != (longlong *)0x0) {
            plVar10[1] = 0;
            plVar10[2] = 0;
            *plVar10 = (longlong)&PTR_FUN_143f9a6c8;
            plVar10[3] = lVar9;
            plVar7 = plVar10;
          }
          plVar11 = (longlong *)operator_new(0x18);
          plVar10 = plVar19;
          if (plVar11 != (longlong *)0x0) {
            *(undefined4 *)(plVar11 + 1) = 1;
            *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
            *plVar11 = (longlong)&PTR_FUN_143f7de48;
            plVar11[2] = (longlong)plVar7;
            plVar10 = plVar11;
          }
          plVar11 = plVar7 + 1;
          if (plVar7 == (longlong *)0x0) {
            plVar11 = plVar19;
          }
          local_1748 = plVar7;
          local_1740 = plVar10;
          if (plVar11 != (longlong *)0x0) {
            if ((*plVar11 != 0) && (plVar11[1] != 0)) {
              piVar1 = (int *)(plVar11[1] + 8);
              LOCK();
              iVar4 = *piVar1;
              if (iVar4 == 0) {
                *piVar1 = 0;
                iVar4 = 0;
              }
              UNLOCK();
              if (0 < iVar4) goto LAB_140507857;
            }
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              UNLOCK();
            }
            *plVar11 = (longlong)plVar7;
            plVar13 = (longlong *)plVar11[1];
            if (plVar10 != plVar13) {
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
                UNLOCK();
                plVar13 = (longlong *)plVar11[1];
              }
              if (plVar13 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar13 + 0xc);
                iVar4 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar13 + 8))(plVar13,1);
                }
              }
              plVar11[1] = (longlong)plVar10;
            }
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              plVar11 = plVar10 + 1;
              lVar9 = *plVar11;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plVar10)(plVar10);
                LOCK();
                piVar1 = (int *)((longlong)plVar10 + 0xc);
                iVar4 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar10 + 8))(plVar10,1);
                }
              }
            }
          }
LAB_140507857:
          if ((longlong **)(param_2 + 8) != &local_1748) {
            *(longlong **)(param_2 + 8) = plVar7;
            local_1748 = (longlong *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 0x10,&local_1740);
          }
          plVar7 = local_1740;
          if (local_1740 != (longlong *)0x0) {
            LOCK();
            plVar10 = local_1740 + 1;
            lVar9 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*local_1740)(local_1740);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*local_1740 + 8))(local_1740,1);
                plVar13 = (longlong *)(ulonglong)(iVar20 + 1);
                plVar11 = (longlong *)(ulonglong)local_17d0;
                plVar21 = (longlong *)(ulonglong)local_17d4;
                param_2 = local_17b0;
                goto LAB_14050802e;
              }
            }
          }
LAB_140507a7b:
          plVar13 = (longlong *)(ulonglong)(iVar20 + 1);
          plVar11 = (longlong *)(ulonglong)local_17d0;
          plVar21 = (longlong *)(ulonglong)local_17d4;
          param_2 = local_17b0;
        }
        else {
          iVar3 = _stricmp(local_438,"OWNINGNAME");
          if (iVar3 != 0) {
            iVar3 = _stricmp(local_438,"NUMOPENPRIVCONN");
            if (iVar3 == 0) {
              local_978 = (wchar_t *)0x0;
              lVar9 = -1;
              do {
                lVar12 = lVar9;
                lVar9 = lVar12 + 1;
              } while (local_838[lVar12 + 1] != '\0');
              uVar15 = (int)lVar12 + 2;
              local_968 = (undefined4)(lVar12 + 1);
              if ((0x80 < uVar15) && (uVar15 != 0)) {
                local_978 = (wchar_t *)FMemory::Realloc(0,(longlong)(int)uVar15 * 2,0);
              }
              local_970 = local_a78;
              if (local_978 != (wchar_t *)0x0) {
                local_970 = local_978;
              }
              local_17f8 = CONCAT22(local_17f8._2_2_,0x3f);
              FGenericPlatformString::Convert<char,wchar_t>(local_970,uVar15,local_838,uVar15);
              iVar4 = _wtoi(local_970);
              *(int *)(param_2 + 0xb0) = iVar4;
              pwVar14 = local_978;
            }
            else {
              iVar3 = _stricmp(local_438,"NUMOPENPUBCONN");
              if (iVar3 != 0) {
                iVar3 = _stricmp(local_438,"HOSTIP");
                if (iVar3 == 0) {
                  local_15d8 = (wchar_t *)0x0;
                  lVar9 = -1;
                  do {
                    lVar12 = lVar9;
                    lVar9 = lVar12 + 1;
                  } while (local_838[lVar12 + 1] != '\0');
                  iVar4 = (int)lVar12 + 2;
                  local_15c8 = (undefined4)(lVar12 + 1);
                  TInlineAllocator<128,FDefaultAllocator>::ForElementType<wchar_t>::ResizeAllocation
                            (local_16d8,0,iVar4,2);
                  local_15d0 = local_16d8;
                  if (local_15d8 != (wchar_t *)0x0) {
                    local_15d0 = local_15d8;
                  }
                  local_17f8 = CONCAT22(local_17f8._2_2_,0x3f);
                  FGenericPlatformString::Convert<char,wchar_t>(local_15d0,iVar4,local_838,iVar4);
                  iVar4 = _wtoi(local_15d0);
                  if (local_15d8 != (wchar_t *)0x0) {
                    FMemory::Free();
                  }
                  if (iVar4 != 0) {
                    (**(code **)(*local_1728 + 0x10))(local_1728,iVar4);
                    local_17d4 = iVar5 + 1;
                    plVar21 = (longlong *)(ulonglong)local_17d4;
                  }
                }
                else {
                  iVar3 = _stricmp(local_438,"HOSTPORT");
                  if (iVar3 == 0) {
                    local_14b8 = (wchar_t *)0x0;
                    lVar9 = -1;
                    do {
                      lVar12 = lVar9;
                      lVar9 = lVar12 + 1;
                    } while (local_838[lVar12 + 1] != '\0');
                    iVar4 = (int)lVar12 + 2;
                    local_14a8 = (undefined4)(lVar12 + 1);
                    TInlineAllocator<128,FDefaultAllocator>::ForElementType<wchar_t>::
                    ResizeAllocation(local_15b8,0,iVar4,2);
                    local_14b0 = local_15b8;
                    if (local_14b8 != (wchar_t *)0x0) {
                      local_14b0 = local_14b8;
                    }
                    local_17f8 = CONCAT22(local_17f8._2_2_,0x3f);
                    FGenericPlatformString::Convert<char,wchar_t>(local_14b0,iVar4,local_838,iVar4);
                    iVar4 = _wtoi(local_14b0);
                    if (local_14b8 != (wchar_t *)0x0) {
                      FMemory::Free();
                    }
                    if (iVar4 != 0) {
                      (**(code **)(*local_1728 + 0x30))(local_1728,iVar4);
                      local_17d4 = iVar5 + 1;
                      plVar21 = (longlong *)(ulonglong)local_17d4;
                    }
                  }
                  else {
                    iVar5 = _stricmp(local_438,"P2PADDR");
                    if (iVar5 == 0) {
                      local_1398 = (wchar_t *)0x0;
                      lVar9 = -1;
                      do {
                        lVar12 = lVar9;
                        lVar9 = lVar12 + 1;
                      } while (local_838[lVar12 + 1] != '\0');
                      iVar5 = (int)lVar12 + 2;
                      local_1388 = (undefined4)(lVar12 + 1);
                      TInlineAllocator<128,FDefaultAllocator>::ForElementType<wchar_t>::
                      ResizeAllocation(local_1498,0,iVar5,2);
                      local_1390 = local_1498;
                      if (local_1398 != (wchar_t *)0x0) {
                        local_1390 = local_1398;
                      }
                      local_17f8 = CONCAT22(local_17f8._2_2_,0x3f);
                      FGenericPlatformString::Convert<char,wchar_t>
                                (local_1390,iVar5,local_838,iVar5);
                      lVar9 = _wtoi64(local_1390);
                      if (local_1398 != (wchar_t *)0x0) {
                        FMemory::Free();
                      }
                      if (lVar9 != 0) {
                        local_17d0 = iVar4 + 1;
                        plVar11 = (longlong *)(ulonglong)local_17d0;
                        local_1768[4] = lVar9;
                      }
                    }
                    else {
                      iVar5 = _stricmp(local_438,"P2PPORT");
                      if (iVar5 == 0) {
                        local_1278 = (wchar_t *)0x0;
                        lVar9 = -1;
                        do {
                          lVar12 = lVar9;
                          lVar9 = lVar12 + 1;
                        } while (local_838[lVar12 + 1] != '\0');
                        iVar5 = (int)lVar12 + 2;
                        local_1268 = (undefined4)(lVar12 + 1);
                        TInlineAllocator<128,FDefaultAllocator>::ForElementType<wchar_t>::
                        ResizeAllocation(local_1378,0,iVar5,2);
                        local_1270 = local_1378;
                        if (local_1278 != (wchar_t *)0x0) {
                          local_1270 = local_1278;
                        }
                        local_17f8 = CONCAT22(local_17f8._2_2_,0x3f);
                        FGenericPlatformString::Convert<char,wchar_t>
                                  (local_1270,iVar5,local_838,iVar5);
                        iVar5 = _wtoi(local_1270);
                        if (local_1278 != (wchar_t *)0x0) {
                          FMemory::Free();
                        }
                        (**(code **)(*local_1768 + 0x30))(local_1768,iVar5);
                        local_17d0 = iVar4 + 1;
                        plVar11 = (longlong *)(ulonglong)local_17d0;
                      }
                      else {
                        local_17a8[0] = 0;
                        local_1708 = 0;
                        local_1700 = 0;
                        local_1710[0] = 0;
                        local_16f8 = 0;
                        local_1158 = (undefined1 *)0x0;
                        lVar9 = -1;
                        do {
                          lVar12 = lVar9;
                          lVar9 = lVar12 + 1;
                        } while (local_438[lVar12 + 1] != '\0');
                        iVar4 = (int)lVar12 + 2;
                        local_1148 = (undefined4)(lVar12 + 1);
                        TInlineAllocator<128,FDefaultAllocator>::ForElementType<wchar_t>::
                        ResizeAllocation(local_1258,0,iVar4,2);
                        local_1150 = local_1258;
                        if (local_1158 != (undefined1 *)0x0) {
                          local_1150 = local_1158;
                        }
                        local_17f8 = CONCAT22(local_17f8._2_2_,0x3f);
                        FGenericPlatformString::Convert<char,wchar_t>
                                  (local_1150,iVar4,local_438,iVar4);
                        cVar2 = FUN_140523e10(local_1150,local_838,local_17a8,local_1710);
                        if (local_1158 != (undefined1 *)0x0) {
                          FMemory::Free();
                        }
                        if (cVar2 == '\0') {
                          local_17d8 = '\0';
                        }
                        else {
                          FUN_1404b6080(param_2 + 0x28,local_17a8[0],local_1710);
                        }
                        FVariantData::Empty(local_1710);
                      }
                    }
                  }
                }
                goto LAB_14050802e;
              }
              local_858 = (wchar_t *)0x0;
              lVar9 = -1;
              do {
                lVar12 = lVar9;
                lVar9 = lVar12 + 1;
              } while (local_838[lVar12 + 1] != '\0');
              uVar15 = (int)lVar12 + 2;
              local_848 = (undefined4)(lVar12 + 1);
              if ((0x80 < uVar15) && (uVar15 != 0)) {
                local_858 = (wchar_t *)FMemory::Realloc(0,(longlong)(int)uVar15 * 2,0);
              }
              local_850 = local_958;
              if (local_858 != (wchar_t *)0x0) {
                local_850 = local_858;
              }
              local_17f8 = CONCAT22(local_17f8._2_2_,0x3f);
              FGenericPlatformString::Convert<char,wchar_t>(local_850,uVar15,local_838,uVar15);
              iVar4 = _wtoi(local_850);
              *(int *)(param_2 + 0xb4) = iVar4;
              pwVar14 = local_858;
            }
            goto LAB_140507c06;
          }
          local_a98 = (undefined1 *)0x0;
          lVar9 = -1;
          do {
            lVar12 = lVar9;
            lVar9 = lVar12 + 1;
          } while (local_838[lVar12 + 1] != '\0');
          uVar15 = (int)lVar12 + 2;
          local_a88 = (undefined4)(lVar12 + 1);
          if ((0x80 < uVar15) && (uVar15 != 0)) {
            local_a98 = (undefined1 *)FMemory::Realloc(0,(longlong)(int)uVar15 * 2,0);
          }
          local_a90 = local_b98;
          if (local_a98 != (undefined1 *)0x0) {
            local_a90 = local_a98;
          }
          local_17f8 = CONCAT22(local_17f8._2_2_,0x3f);
          FGenericPlatformString::Convert<char,wchar_t>(local_a90,uVar15,local_838,uVar15);
          lVar9 = -1;
          do {
            lVar9 = lVar9 + 1;
          } while (*(short *)(local_a90 + lVar9 * 2) != 0);
          if (local_a98 != (undefined1 *)0x0) {
            FMemory::Free();
          }
          if (0 < (int)lVar9) {
            local_17c8 = (longlong *)0x0;
            local_17c0 = 0;
            plVar7 = plVar19;
            uVar15 = 0;
            uVar17 = 0;
            if (local_838[0] != '\0') {
              lVar9 = -1;
              do {
                lVar12 = lVar9 + 1;
                lVar9 = lVar9 + 1;
              } while (local_838[lVar12] != '\0');
              uVar16 = (int)lVar9 + 1;
              local_17c0 = (ulonglong)uVar16;
              uVar17 = uVar16;
              uVar15 = 0;
              if (0 < (int)uVar16) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_17c8,0);
                uVar17 = (uint)local_17c0;
                uVar15 = local_17c0._4_4_;
              }
              plVar7 = local_17c8;
              local_17f8 = CONCAT22(local_17f8._2_2_,0x3f);
              FGenericPlatformString::Convert<char,wchar_t>(local_17c8,uVar16,local_838,uVar16);
            }
            lVar9 = local_17b0;
            pplVar18 = (longlong **)(local_17b0 + 0x18);
            if (pplVar18 == &local_17c8) {
              if (plVar7 != (longlong *)0x0) {
                FMemory::Free(plVar7);
              }
              goto LAB_140507a7b;
            }
            if (*pplVar18 != (longlong *)0x0) {
              FMemory::Free();
            }
            *pplVar18 = plVar7;
            plVar13 = (longlong *)(ulonglong)(iVar20 + 1);
            *(uint *)(lVar9 + 0x24) = uVar15;
            plVar21 = (longlong *)(ulonglong)local_17d4;
            *(uint *)(lVar9 + 0x20) = uVar17;
            plVar11 = (longlong *)(ulonglong)local_17d0;
            local_17c8 = (longlong *)0x0;
            local_17c0 = 0;
            param_2 = local_17b0;
          }
        }
      }
LAB_14050802e:
      iVar4 = (int)plVar11;
      iVar5 = (int)plVar21;
      uVar15 = (uint)plVar13;
      local_17cc = local_17cc + 1;
      plVar10 = (longlong *)(ulonglong)local_17cc;
      plVar7 = local_1738;
    } while ((int)local_17cc < local_17b8);
    if ((local_17d8 != '\0') && (uVar15 == 8)) {
      if (iVar5 == 2) {
        local_1798 = local_1728;
        plStack_1790 = plStack_1720;
        if (plStack_1720 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_1720 + 1) = (int)plStack_1720[1] + 1;
          UNLOCK();
        }
        if ((longlong **)(local_1758 + 1) != &local_1798) {
          local_1758[1] = (longlong)local_1728;
          local_1798 = (longlong *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(local_1758 + 2,&plStack_1790);
        }
        plVar7 = plStack_1790;
        if (plStack_1790 != (longlong *)0x0) {
          LOCK();
          plVar19 = plStack_1790 + 1;
          lVar9 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plStack_1790)(plStack_1790);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plStack_1790 + 8))(plStack_1790,1);
            }
          }
        }
        if (iVar4 == 2) goto LAB_1405081de;
      }
      else {
        if (iVar4 != 2) goto LAB_14050806d;
LAB_1405081de:
        local_1788 = local_1768;
        plStack_1780 = plStack_1760;
        if (plStack_1760 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_1760 + 1) = (int)plStack_1760[1] + 1;
          UNLOCK();
        }
        if ((longlong **)(local_1758 + 3) != &local_1788) {
          local_1758[3] = (longlong)local_1768;
          local_1788 = (longlong *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(local_1758 + 4,&plStack_1780);
        }
        plVar7 = plStack_1780;
        if (plStack_1780 != (longlong *)0x0) {
          LOCK();
          plVar19 = plStack_1780 + 1;
          lVar9 = *plVar19;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plStack_1780)(plStack_1780);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plStack_1780 + 8))(plStack_1780,1);
            }
          }
        }
      }
      local_1778 = local_1758;
      plStack_1770 = plStack_1750;
      if (plStack_1750 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_1750 + 1) = (int)plStack_1750[1] + 1;
        UNLOCK();
      }
      if ((longlong **)(param_2 + 0xa0) != &local_1778) {
        *(longlong **)(param_2 + 0xa0) = local_1758;
        local_1778 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 0xa8,&plStack_1770);
      }
      plVar7 = plStack_1770;
      if (plStack_1770 != (longlong *)0x0) {
        LOCK();
        plVar19 = plStack_1770 + 1;
        lVar9 = *plVar19;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plStack_1770)(plStack_1770);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_1770 + 8))(plStack_1770,1);
          }
        }
      }
      uVar8 = 1;
      goto LAB_140508070;
    }
  }
LAB_14050806d:
  uVar8 = 0;
LAB_140508070:
  plVar7 = plStack_1760;
  if (plStack_1760 != (longlong *)0x0) {
    LOCK();
    plVar19 = plStack_1760 + 1;
    lVar9 = *plVar19;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_1760)(plStack_1760);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  if (plStack_1720 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_1720 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_1720)(plStack_1720);
      LOCK();
      piVar1 = (int *)((longlong)plStack_1720 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_1720 + 8))(plStack_1720,1);
      }
    }
  }
  plVar7 = plStack_1750;
  if (plStack_1750 != (longlong *)0x0) {
    LOCK();
    plVar19 = plStack_1750 + 1;
    lVar9 = *plVar19;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_1750)(plStack_1750);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return uVar8;
}



// FUNCTION 140508310 FUN_140508310 body=141 status=ok
// SIG undefined FUN_140508310(void)

void FUN_140508310(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x420);
  plVar5 = *(longlong **)(lVar4 + 0x100);
  lVar4 = *(longlong *)(lVar4 + 0xf8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if ((lVar4 != 0) && (DAT_146853158 != 0)) {
    FUN_14051a840(DAT_146853158,*(undefined1 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
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



// FUNCTION 1405083d0 FUN_1405083d0 body=681 status=ok
// SIG undefined FUN_1405083d0(void)

void FUN_1405083d0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  plVar5 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))
                     (*(longlong **)(param_1 + 0x10),local_38);
  plVar2 = (longlong *)plVar5[1];
  plVar5 = (longlong *)*plVar5;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_30 + 1;
    lVar3 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (plVar5 == (longlong *)0x0) goto LAB_140508637;
  puVar6 = (undefined8 *)operator_new(0x20);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
    puVar7 = (undefined8 *)
             (**(code **)(*(longlong *)*puVar7 + 0x10))((longlong *)*puVar7,local_res8);
    local_res10 = *puVar7;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_FUN_143f9a6c8;
    puVar6[3] = local_res10;
  }
  plVar8 = (longlong *)operator_new(0x18);
  plVar10 = (longlong *)0x0;
  if (plVar8 != (longlong *)0x0) {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_143f7de48;
    plVar8[2] = (longlong)puVar6;
    plVar10 = plVar8;
  }
  plVar8 = puVar6 + 1;
  if (puVar6 == (undefined8 *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  if (plVar8 != (longlong *)0x0) {
    if ((*plVar8 != 0) && (plVar8[1] != 0)) {
      piVar1 = (int *)(plVar8[1] + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) goto LAB_140508584;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    *plVar8 = (longlong)puVar6;
    plVar9 = (longlong *)plVar8[1];
    if (plVar10 != plVar9) {
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        plVar9 = (longlong *)plVar8[1];
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      plVar8[1] = (longlong)plVar10;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar10 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
LAB_140508584:
  if (puVar6 != (undefined8 *)0x0) {
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_48 = puVar6;
    local_40 = plVar10;
    (**(code **)(*plVar5 + 0x98))(plVar5,&local_48,2);
    plVar5 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_40 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_40)(local_40);
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
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar10 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
LAB_140508637:
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar2 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return;
}



// FUNCTION 140508680 FUN_140508680 body=681 status=ok
// SIG undefined FUN_140508680(void)

void FUN_140508680(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  plVar5 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))
                     (*(longlong **)(param_1 + 0x10),local_38);
  plVar2 = (longlong *)plVar5[1];
  plVar5 = (longlong *)*plVar5;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_30 + 1;
    lVar3 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (plVar5 == (longlong *)0x0) goto LAB_1405088e7;
  puVar6 = (undefined8 *)operator_new(0x20);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar7 = (undefined8 *)SteamInternal_ContextInit(&PTR_SteamInternal_Init_SteamUser_1461fc718);
    puVar7 = (undefined8 *)
             (**(code **)(*(longlong *)*puVar7 + 0x10))((longlong *)*puVar7,local_res8);
    local_res10 = *puVar7;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = &PTR_FUN_143f9a6c8;
    puVar6[3] = local_res10;
  }
  plVar8 = (longlong *)operator_new(0x18);
  plVar10 = (longlong *)0x0;
  if (plVar8 != (longlong *)0x0) {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_143f7de48;
    plVar8[2] = (longlong)puVar6;
    plVar10 = plVar8;
  }
  plVar8 = puVar6 + 1;
  if (puVar6 == (undefined8 *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  if (plVar8 != (longlong *)0x0) {
    if ((*plVar8 != 0) && (plVar8[1] != 0)) {
      piVar1 = (int *)(plVar8[1] + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) goto LAB_140508834;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    *plVar8 = (longlong)puVar6;
    plVar9 = (longlong *)plVar8[1];
    if (plVar10 != plVar9) {
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        plVar9 = (longlong *)plVar8[1];
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      plVar8[1] = (longlong)plVar10;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar10 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
LAB_140508834:
  if (puVar6 != (undefined8 *)0x0) {
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_48 = puVar6;
    local_40 = plVar10;
    (**(code **)(*plVar5 + 0x98))(plVar5,&local_48,1);
    plVar5 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_40 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_40)(local_40);
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
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar10 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
LAB_1405088e7:
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar2 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return;
}



// FUNCTION 140508930 FUN_140508930 body=67 status=ok
// SIG undefined FUN_140508930(void)

void FUN_140508930(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 local_res10 [24];
  
  uVar1 = FName::FName(local_res10,L"STEAM",1);
  lVar2 = FUN_1419c6b80(uVar1);
  if (lVar2 != 0) {
    TArray<FUniqueNetIdSteam,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FUniqueNetIdSteam_const_&>
              (lVar2 + 0x108,param_1 + 0x18);
  }
  return;
}



// FUNCTION 140508980 FUN_140508980 body=128 status=ok
// SIG undefined FUN_140508980(void)

void FUN_140508980(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  
  uVar4 = FName::FName(local_res10,L"STEAM",1);
  lVar5 = FUN_1419c6b80(uVar4);
  if (lVar5 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    plVar2 = *(longlong **)(param_1 + 0x18);
    if ((plVar2 != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1), cVar3 != '\0')) {
      (**(code **)(*plVar2 + 0x18))(plVar2,*(undefined8 *)(param_1 + 0x38));
      FUN_14051f780(lVar5 + 0x108,plVar1);
    }
  }
  return;
}



// FUNCTION 140508a00 FUN_140508a00 body=199 status=ok
// SIG undefined FUN_140508a00(void)

void FUN_140508a00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar6 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa8))
                     (*(longlong **)(param_1 + 0x10),local_18);
  plVar4 = (longlong *)plVar6[1];
  plVar6 = (longlong *)*plVar6;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x160))(plVar6);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
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


